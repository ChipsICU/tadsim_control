#pragma once
#include <iostream>
#include <ros/ros.h>
#include "canlib.h"
#include "std_msgs/Float64MultiArray.h"
#include "autoware_msgs/Command.h"
#include "autoware_msgs/CurrentState.h"
/*报文名称    报文ID         使用部分
*ctrl_cmd   0x18C4D2D0    档位、速度、转角（目标）
* io_cmd    0x18C4D7D0      IO使能
* ctrl_fb   0x18C4D2EF    档位、速度、转角、模式（反馈）
*/


enum MESSAGE
{
    ctrl_cmd = 0x18C4D2D0,
    io_cmd = 0x18C4D7D0,
    ctrl_fb = 0x18C4D2EF,
    lr_wheel_fb = 0x18C4D7EF,
    rr_wheel_fb = 0x18C4D8EF,
    io_fb = 0x18C4DAEF,
    odo_fb = 0x18C4DEEF,
    bms_Infor = 0x18C4E1EF,
    bms_flag_Infor = 0x18C4E2EF,
    Veh_fb_Diag = 0x18C4EAEF
};
enum GEAR_STATE
{
    GEAR_P = 0x01,
    GEAR_R = 0x02,
    GEAR_N = 0x03,
    GEAR_D = 0x04,
    Disable = 0x00
};
class canNode
{
private:
    canHandle can_bus;
    ros::NodeHandle nh_;
    ros::Publisher CurrentStatePub, BmsStatusPub, CanStatusPub;
    ros::Subscriber CommandSub;

    autoware_msgs::CurrentState current_state_msg;
    std_msgs::Float64MultiArray status;
    std_msgs::Float64MultiArray bms_status;

    //can 处理
    void canInit();
    void commandCallback(const autoware_msgs::CommandPtr msg);
    void publish();

    // can 线参数
    long id;
    unsigned int dlc, flag;
    unsigned long t;
    unsigned char fromCAN[8] = {0,0,0,0,0,0,0,0};
    bool can_write_flag = false;
    bool mk_init_error = false, swrite = false,ssync = false;
    unsigned char command_msg[8] = {0,0,0,0,0,0,0,0};

public:
    canNode();
    ~canNode();
    void run();
};