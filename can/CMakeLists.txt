cmake_minimum_required(VERSION 3.8)
project(mk_can)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  autoware_msgs
  message_generation
)

catkin_package()

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  ${catkin_INCLUDE_DIRS}
)

add_executable(
  ${PROJECT_NAME}_node
  app/mk_can.cpp
  app/Utils.cpp
)
target_link_libraries(${PROJECT_NAME}_node ${catkin_LIBRARIES} canlib pthread)