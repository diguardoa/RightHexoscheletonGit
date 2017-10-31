#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block proxy_linux/From Ros/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_proxy_linux_std_msgs_Float64MultiArray> Sub_proxy_linux_437;

// For Block proxy_linux/ToRos/Publish
extern SimulinkPublisher<std_msgs::Float32, SL_Bus_proxy_linux_std_msgs_Float32> Pub_proxy_linux_264;

// For Block proxy_linux/ToRos/Publish1
extern SimulinkPublisher<std_msgs::Float32, SL_Bus_proxy_linux_std_msgs_Float32> Pub_proxy_linux_311;

// For Block proxy_linux/ToRos/Publish12
extern SimulinkPublisher<sensor_msgs::JointState, SL_Bus_proxy_linux_sensor_msgs_JointState> Pub_proxy_linux_470;

// For Block proxy_linux/ToRos/Publish2
extern SimulinkPublisher<std_msgs::Bool, SL_Bus_proxy_linux_std_msgs_Bool> Pub_proxy_linux_517;

void slros_node_init(int argc, char** argv);

#endif
