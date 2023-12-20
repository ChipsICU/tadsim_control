#pragma once
#include "txsim_module.h"
#include "location.pb.h"
#include <mutex>

#include <ros/ros.h>
#include "autoware_msgs/Command.h"

class TAD_Control final : public tx_sim::SimModule {
public:
    TAD_Control();
    virtual ~TAD_Control();
    void Init(tx_sim::InitHelper& helper) override;
    void Reset(tx_sim::ResetHelper& helper) override;
    void Step(tx_sim::StepHelper& helper) override;
    void Stop(tx_sim::StopHelper& helper) override;

    ros::NodeHandle nh_;
private:
    std::string module_name, payload_;
    double stepTime = 20; //ms
    int step_count_ = 0; // step的次数
    double steering_angle = 0.0; // 主车的转角

    ros::Publisher command_pub_;
	autoware_msgs::Command command_msg;
	sim_msg::Location ego_location;
	double this_rpy_z, last_rpy_z;
	bool rpyz_initialed;
};