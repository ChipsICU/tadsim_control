cmake_minimum_required(VERSION 3.0.2)
project(autoware_msgs)
find_package(catkin REQUIRED
  roscpp
  std_msgs
  message_generation)

add_message_files(
    FILES
    Command.msg
    CurrentState.msg
  )
generate_messages(
  DEPENDENCIES
  std_msgs
)
catkin_package(
CATKIN_DEPENDS roscpp std_msgs message_runtime
)


