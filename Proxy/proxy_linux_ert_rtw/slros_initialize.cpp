#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "proxy_linux";

// For Block proxy_linux/Calibration Subsystem/Subscribe1
SimulinkSubscriber<std_msgs::Bool, SL_Bus_proxy_linux_std_msgs_Bool> Sub_proxy_linux_994;

// For Block proxy_linux/From Ros/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_proxy_linux_std_msgs_Float64MultiArray> Sub_proxy_linux_437;

// For Block proxy_linux/ToRos/Subscribe
SimulinkSubscriber<std_msgs::Bool, SL_Bus_proxy_linux_std_msgs_Bool> Sub_proxy_linux_1180;

// For Block proxy_linux/ToRos/Publish
SimulinkPublisher<std_msgs::Float32, SL_Bus_proxy_linux_std_msgs_Float32> Pub_proxy_linux_264;

// For Block proxy_linux/ToRos/Publish1
SimulinkPublisher<std_msgs::Float32, SL_Bus_proxy_linux_std_msgs_Float32> Pub_proxy_linux_311;

// For Block proxy_linux/ToRos/Publish12
SimulinkPublisher<sensor_msgs::JointState, SL_Bus_proxy_linux_sensor_msgs_JointState> Pub_proxy_linux_470;

// For Block proxy_linux/ToRos/Publish2
SimulinkPublisher<std_msgs::Bool, SL_Bus_proxy_linux_std_msgs_Bool> Pub_proxy_linux_517;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

