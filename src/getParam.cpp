#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "getParam");
  ros::NodeHandle n;

  int a;
  int b;

  n.getParam("getParam/a", a);
  n.getParam("getParam/b", b);

  ROS_INFO("Param a = %d", a);
  ROS_INFO("Param b = %d", b);

  ros::Rate loop_rate(10);

  // Node execution
  while(n.ok())
  {
     ros::spinOnce();
     loop_rate.sleep();
  }
}

