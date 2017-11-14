#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block proxy/Calibration Subsystem/Subscribe1
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_proxy_std_msgs_Bool> Sub_proxy_994;

// For Block proxy/From Ros/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_proxy_std_msgs_Float64MultiArray> Sub_proxy_437;

// For Block proxy/ToRos/Publish
extern SimulinkPublisher<std_msgs::Float32, SL_Bus_proxy_std_msgs_Float32> Pub_proxy_264;

// For Block proxy/ToRos/Publish1
extern SimulinkPublisher<std_msgs::Float32, SL_Bus_proxy_std_msgs_Float32> Pub_proxy_311;

// For Block proxy/ToRos/Publish12
extern SimulinkPublisher<sensor_msgs::JointState, SL_Bus_proxy_sensor_msgs_JointState> Pub_proxy_470;

// For Block proxy/ToRos/Publish2
extern SimulinkPublisher<std_msgs::Bool, SL_Bus_proxy_std_msgs_Bool> Pub_proxy_517;

void slros_node_init(int argc, char** argv);

#endif
