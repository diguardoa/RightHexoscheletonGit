#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "toUdp";

// For Block toUdp/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_toUdp_std_msgs_Float64> Sub_toUdp_1201;

// For Block toUdp/Publish2
SimulinkPublisher<std_msgs::Float64, SL_Bus_toUdp_std_msgs_Float64> Pub_toUdp_1220;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

