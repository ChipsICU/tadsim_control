#include <memory>
#include <iostream>
#include <fstream>

#include "txsim_module_service.h"
#include "tad_command.h"
int main(int argc, char** argv)
{
    std::string name="ROS_control";
    std::cerr<<"Enter main function\n";
    system("roscore&");
    ros::init(argc, argv, "command_node");

    std::shared_ptr<tx_sim::SimModule> module = std::make_shared<TAD_Control>();
    tx_sim::SimModuleService service;
    std::cerr<<"Server service\n";

    service.Serve(name, module);
    service.Wait();
    std::cerr<<"wait\n";
    exit(0);
    return 0;
}