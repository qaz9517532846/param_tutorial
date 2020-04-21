#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "setParam");
  ros::NodeHandle n;

  int a;
  int b;

  n.setParam("getParam/a", 1);
  n.setParam("getParam/b", 2);

  ros::Rate loop_rate(10);

  // Node execution
  while(n.ok())
  {
     ros::spinOnce();
     loop_rate.sleep();
  }
}

