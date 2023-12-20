# Provided By GW-HRT
cmake_minimum_required(VERSION 3.1)
project(pnc)
add_compile_options(-std=c++11)

find_package(Protobuf REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  autoware_msgs
  message_generation
)
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${CMAKE_BINARY_DIR}
  ${EIGEN3_INCLUDE_DIR})
link_directories(
    lib
  )
set(LIB_PROTOBUF protobuf pthread)
set(LIB_SYS dl)
set(LIB_MOD txsim-module-service)

message(STATUS "Current Source Directory: ${CMAKE_CURRENT_SOURCE_DIR}")
catkin_package()

file(GLOB SRC 
  "src/*.cc"
)
add_executable(command_node
  src/tad_command.cpp 
  src/main.cpp
  ${SRC}
)

target_compile_definitions(command_node PRIVATE TXSIM_NO_EXPORTS)
target_link_libraries(command_node
  ${LIB_PROTOBUF}
  ${LIB_MOD}
  ${LIB_SYS}
  ${catkin_LIBRARIES}
  tinyxml2
)