#include "tad_command.h"
#include <iostream>
#include <fstream>
#include <assert.h>
#include <thread>
#include <algorithm>
#include <chrono>
#include <cmath>
#include <stdio.h>
#include <cstring>
#define SPLIT_LINE "======================================="
TAD_Control::TAD_Control():rpyz_initialed(false){
    command_pub_ = nh_.advertise<autoware_msgs::Command>("/command", 0);
}
TAD_Control::~TAD_Control() {
}
void TAD_Control::Init(tx_sim::InitHelper& helper) {
    module_name = "ROS_control";
    helper.Subscribe(tx_sim::topic::kLocation); // 主车的位置
}
void TAD_Control::Reset(tx_sim::ResetHelper& helper) { 
    std::cerr << "Reseting...\n";
	std::cerr << "Reset ok.\n";
}   
void TAD_Control::Step(tx_sim::StepHelper& helper)
{
    step_count_ ++;
    
    helper.GetSubscribedMessage(tx_sim::topic::kLocation, payload_);
	if (payload_.empty() || !ego_location.ParseFromString(payload_)){
		std::cerr << "Cannot parse sensorraw" << std::endl;
		return;
	}
	if (!rpyz_initialed)
	{
		this_rpy_z = ego_location.rpy().z();
		last_rpy_z = this_rpy_z;
		command_msg.speed = std::max(sqrt(pow(ego_location.velocity().x(),2) \
						+ pow(ego_location.velocity().y(),2))/30,1.0);
		command_msg.dv_state = 3;
		command_msg.angle = 0;
		command_pub_.publish(command_msg);
		rpyz_initialed = true;
	}
	else
	{
		this_rpy_z = ego_location.rpy().z();
		double delta_z = this_rpy_z - last_rpy_z;
		if (delta_z > M_PI) delta_z -= 2 * M_PI;
		if (delta_z < -M_PI) delta_z += 2 * M_PI;
		double steering_ratio = 20;
		double wheel_steering = -1*delta_z*steering_ratio*180.0/M_PI;
		command_msg.speed = std::max(sqrt(pow(ego_location.velocity().x(),2) \
						+ pow(ego_location.velocity().y(),2))/60,1.0);
		bool finished = command_msg.speed<0.3?true:false;
		if (finished)
		{
			command_msg.dv_state = 5;
			command_msg.speed = 0;
		}
		else
			command_msg.dv_state = 3;
		command_msg.angle = wheel_steering;
		command_pub_.publish(command_msg);
		last_rpy_z = this_rpy_z;
	}
    
}
void TAD_Control::Stop(tx_sim::StopHelper& helper) {
  std::cout << SPLIT_LINE << std::endl;
  std::cout << module_name << " module stopped." << std::endl;
  helper.set_feedback("stepCounts", std::to_string(step_count_));
}
TXSIM_MODULE(TAD_Control)
