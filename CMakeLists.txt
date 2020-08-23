cmake_minimum_required(VERSION 2.8.3)
project(param_tutorial)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES param_tutorial
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(getParam src/getParam.cpp)
target_link_libraries(getParam ${catkin_LIBRARIES})
add_dependencies(getParam param_tutorial_generate_messages_cpp)

add_executable(setParam src/setParam.cpp)
target_link_libraries(setParam ${catkin_LIBRARIES})
add_dependencies(setParam param_tutorial_generate_messages_cpp)
