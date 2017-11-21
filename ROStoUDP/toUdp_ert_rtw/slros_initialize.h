#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block toUdp/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_toUdp_std_msgs_Float64> Sub_toUdp_1201;

// For Block toUdp/Publish2
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_toUdp_std_msgs_Float64> Pub_toUdp_1220;

void slros_node_init(int argc, char** argv);

#endif
