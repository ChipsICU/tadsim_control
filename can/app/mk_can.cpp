#include "mk_can.h"
#include "Utils.h"
#include "ros/ros.h"
using namespace std::chrono_literals;
using namespace std::placeholders;

void canNode::canInit()
{
    canInitializeLibrary();
    ListChannels();
    can_bus = canOpenChannel(0, canWANT_EXCLUSIVE|canOPEN_REQUIRE_EXTENDED);
    if (can_bus < 0)
    {
        mk_init_error = 1;
        char msg[64];
        canGetErrorText ((canStatus)can_bus, msg, sizeof(msg));
        fprintf(stderr, "[MK_ROBOT] can open failed (%s)\n", msg);
        exit(1);
    }
    else
        ROS_INFO("[MK_ROBOT] can open successed!");
    
    canAccept(can_bus, ctrl_cmd, canFILTER_SET_CODE_STD);
    canAccept(can_bus, ctrl_fb, canFILTER_SET_CODE_STD);
    canAccept(can_bus, lr_wheel_fb, canFILTER_SET_CODE_STD);
    canAccept(can_bus, rr_wheel_fb, canFILTER_SET_CODE_STD);
    canAccept(can_bus, odo_fb, canFILTER_SET_CODE_STD);
    canAccept(can_bus, bms_Infor, canFILTER_SET_CODE_STD);

    canSetBusParams(can_bus, canBITRATE_500K, 0, 0, 0, 0, 0);
    if(canBusOn(can_bus) == canOK)
        ROS_INFO("[MK_ROBOT] can bus on ok!");
    else
    {
        ROS_ERROR("[MK_ROBOT] can bus on error!");
        mk_init_error = 1;
    }

    if(!mk_init_error)
        ROS_INFO("[MK_ROBOT] mk can inited!");
    else
        ROS_ERROR("[MK_ROBOT] mk can init error!");

    status.data[0] = static_cast<double> (mk_init_error);
}
void canNode::commandCallback(const autoware_msgs::CommandPtr msg)
{   
    can_write_flag = false;
    swrite = false, ssync = false;
    for(int i=0; i<6; i++)
        command_msg[i] = 0;
    uint16_t velocity = static_cast<uint16_t> (fabs(msg->speed * 1000));
    int16_t angel = static_cast<int16_t> (msg->angle * -100);
    uint8_t check_bcc = 0x00;
    if (velocity > 2000) velocity = 2000;
    if (angel > 2700) angel = 2700;
    else if (angel < -2700) angel = -2700;
    if (msg->speed <0) command_msg[0] = (GEAR_R & 0x0F) | ((velocity & 0x000F) << 4);
    else if (msg->speed == 0) command_msg[0] = (GEAR_P & 0x0F) | ((velocity & 0x000F) << 4);
    else command_msg[0] = (GEAR_D & 0x0F) | ((velocity & 0x000F) << 4);
    command_msg[1] =  (velocity & 0x0FF0) >> 4;
    command_msg[2] = (command_msg[2] & 0xF0) | ((velocity & 0xF000) >> 12);
    command_msg[2] = (command_msg[2] & 0x0F) | (angel & 0x000F);
    command_msg[3] = (angel & 0x0FF0) >> 4;
    command_msg[4] = (command_msg[4] & 0xF0) | ((angel & 0xF000) >> 12);
    if(command_msg[6] != 0xf0) command_msg[6] += 0x10;
    else command_msg[6] = 0x00;
    for (int i=0; i<7; i++)
        check_bcc ^= command_msg[i];
    command_msg[7] = check_bcc;
    if(!can_write_flag)
    {
        canStatus canFlag = canWrite(can_bus, ctrl_cmd, command_msg, 8, canMSG_EXT);
        if(canFlag != canOK)
        {
            char msg[64];
            canGetErrorText ((canStatus)canFlag, msg, sizeof(msg));
            ROS_WARN("[MK_ROBOT] can Write error: (%s)\n", msg);
            swrite = true;
        }
        else
        {
            ROS_INFO("[MK_ROBOT] can Write ok!");
            can_write_flag = true;
        }
        canStatus can_write_sync = canWriteSync(can_bus, 1000);
        if(can_write_sync == canOK)
            ROS_INFO("[MK_ROBOT] can Sync ok!");
        else
        {
            char msg[64];
            canGetErrorText ((canStatus)can_write_sync, msg, sizeof(msg));
            ROS_WARN("[MK_ROBOT] can Sync error: (%s)\n", msg);
            ssync = 1;
        }
        status.data[1] = swrite;
        status.data[2] = ssync;
    }

}
void canNode::publish()
{   

    canStatus canFlag = canRead(can_bus, &id, &fromCAN, &dlc, &flag, &t);
    if( canFlag != canOK)
    {
        char msg[64];
        canGetErrorText (canFlag, msg, sizeof(msg));
        ROS_WARN("[MK_ROBOT] can Read error: (%s)\n", msg);
    }
    else
    {
        ROS_INFO("[MK_ROBOT] can Read ok!");
        if (id == ctrl_fb)
        {
            uint16_t velocity = static_cast<uint16_t> (
                ((fromCAN[0] & 0x00F0) >> 4) |
                ((fromCAN[1] & 0x00FF) << 4) |
                ((fromCAN[2] & 0x000F) << 12)
                );
            int16_t angle = static_cast<int16_t> (
                ((fromCAN[2] & 0x00F0) >> 4) |
                ((fromCAN[3] & 0x00FF) << 4) |
                ((fromCAN[4] & 0x000F) << 12)
                );

            current_state_msg.angle = static_cast<float> (angle) / -100;
            current_state_msg.speed = static_cast<float> (velocity) / 1000;
            current_state_msg.gear_state = static_cast<int> (fromCAN[0] & 0x0F);
            if (current_state_msg.gear_state == 2)current_state_msg.speed *= -1;
        }
        else if (id == lr_wheel_fb)
        {
            int16_t lr_speed = static_cast<int16_t> (
                (fromCAN[0] & 0x00FF) |
                ((fromCAN[1] & 0x00FF) << 8)
                );
            current_state_msg.lr_speed = static_cast<float> (lr_speed) / 1000;
        }
        else if (id == rr_wheel_fb)
        {
            int16_t rr_speed = static_cast<int16_t> (
                (fromCAN[0] & 0x00FF) |
                ((fromCAN[1] & 0x00FF) << 8)
                );
            current_state_msg.rr_speed = static_cast<float> (rr_speed) / 1000;
        }
        else if (id == odo_fb)
        {
            int32_t odometer = static_cast<int32_t> (
                (fromCAN[0] & 0x00FF) |
                ((fromCAN[1] & 0x00FF) << 8) |
                ((fromCAN[2] & 0x00FF) << 16) |
                ((fromCAN[3] & 0x00FF) << 24)
                );
            current_state_msg.odometer = static_cast<float> (odometer) / 1000;
        }
        else if (id == bms_Infor)
        {
            uint16_t bms_voltage = static_cast<uint16_t> (
                (fromCAN[0] & 0x00FF) |
                ((fromCAN[1] & 0x00FF) << 8) 
                );
            int16_t bms_current = static_cast<int16_t> (
                (fromCAN[2] & 0x00FF) |
                ((fromCAN[3] & 0x00FF) << 8) 
                );
            bms_status.data.at(0) = static_cast<float> (bms_current) / 100;
            bms_status.data.at(1) = static_cast<float> (bms_voltage) / 100;
        }
    }
    CurrentStatePub.publish(current_state_msg);
    CanStatusPub.publish(status);
    BmsStatusPub.publish(bms_status);
}
void canNode::run()
{
    ROS_INFO_STREAM("mk_can start");
    ros::Rate loop_rate(10);
    while (ros::ok())
    {
        ros::spinOnce();
        publish();
        loop_rate.sleep();
    }
}
canNode::canNode()
{

status.data.resize(3);
bms_status.data.resize(2);
canInit();

CommandSub = nh_.subscribe("/command", 1, &canNode::commandCallback, this);
CurrentStatePub = nh_.advertise<autoware_msgs::CurrentState>("current_state", 10);
CanStatusPub = nh_.advertise<std_msgs::Float64MultiArray>("can_status", 10);
BmsStatusPub = nh_.advertise<std_msgs::Float64MultiArray>("bms_status", 10);

}
canNode::~canNode(){}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "mk_can");
    canNode cannode;
    cannode.run();
    return 0;
}