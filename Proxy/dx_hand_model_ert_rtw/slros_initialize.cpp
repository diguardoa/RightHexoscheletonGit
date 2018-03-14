#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "dx_hand_model";

// For Block dx_hand_model/Get From Schunk/Currents/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_dx_hand_model_std_msgs_Float64MultiArray> Sub_dx_hand_model_437;

// For Block dx_hand_model/Get From Schunk/Get positions/Subscribe1
SimulinkSubscriber<sensor_msgs::JointState, SL_Bus_dx_hand_model_sensor_msgs_JointState> Sub_dx_hand_model_2652;

// For Block dx_hand_model/Debug Data to Ros/Send/Publish1
SimulinkPublisher<sensor_msgs::JointState, SL_Bus_dx_hand_model_sensor_msgs_JointState> Pub_dx_hand_model_3422;

// For Block dx_hand_model/Send to Schunk/Send data to Ros/Publish1
SimulinkPublisher<sensor_msgs::JointState, SL_Bus_dx_hand_model_sensor_msgs_JointState> Pub_dx_hand_model_2867;

// For Block dx_hand_model/Get From Exo/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4946;

// For Block dx_hand_model/Get From Schunk/Get positions/Get Positions/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3210;

// For Block dx_hand_model/Index Finger/Active/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4854;

// For Block dx_hand_model/Index Finger/Choose/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3562;

// For Block dx_hand_model/Index Finger/Force/Position Force Basic Architecture/pos_gains//dist/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3578;

// For Block dx_hand_model/Index Finger/Force/Position Force Basic Architecture/pos_gains//prox/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3588;

// For Block dx_hand_model/Index Finger/Force/Subsystem/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2644;

// For Block dx_hand_model/Index Finger/Pose Generator/Angular Potentiometer/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2632;

// For Block dx_hand_model/Index Finger/Pose Generator/Parametri Dito/Get_from_ROS_param/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2613;

// For Block dx_hand_model/Index Finger/Pose Generator/Parametri Dito/Get_from_ROS_param/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2614;

// For Block dx_hand_model/Index Finger/Pose Generator/Parametri Dito/Get_from_ROS_param/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2615;

// For Block dx_hand_model/Index Finger/Pose Generator/Parametri Dito/Get_from_ROS_param/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2616;

// For Block dx_hand_model/Index Finger/Pose Generator/Parametri Dito/Get_from_ROS_param/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2617;

// For Block dx_hand_model/Index Finger/Position/Pre-Proc/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3323;

// For Block dx_hand_model/Index Finger/Position/active/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3464;

// For Block dx_hand_model/Index Finger/Position/active1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3474;

// For Block dx_hand_model/Index Finger/Position/setGain/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3283;

// For Block dx_hand_model/Index Finger/Position/setGain /Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3296;

// For Block dx_hand_model/Index Finger/Position/setGain 1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3307;

// For Block dx_hand_model/Index Finger/Position/setGain 2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3314;

// For Block dx_hand_model/Index Finger/Pre-Proc/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3238;

// For Block dx_hand_model/Index Finger/Send Position/setGain/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3391;

// For Block dx_hand_model/Index Finger/Send Position/setGain1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3398;

// For Block dx_hand_model/Index Finger/setGain2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3507;

// For Block dx_hand_model/Middle Finger/Active/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4871;

// For Block dx_hand_model/Middle Finger/Choose/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3550;

// For Block dx_hand_model/Middle Finger/Pose Generator/Angular Potentiometer/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2565;

// For Block dx_hand_model/Middle Finger/Pose Generator/Parametri Dito/Get_from_ROS_param/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2519;

// For Block dx_hand_model/Middle Finger/Pose Generator/Parametri Dito/Get_from_ROS_param/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2520;

// For Block dx_hand_model/Middle Finger/Pose Generator/Parametri Dito/Get_from_ROS_param/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2521;

// For Block dx_hand_model/Middle Finger/Pose Generator/Parametri Dito/Get_from_ROS_param/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2522;

// For Block dx_hand_model/Middle Finger/Pose Generator/Parametri Dito/Get_from_ROS_param/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2523;

// For Block dx_hand_model/Middle Finger/Position-Force Architecture/Position Force Basic Architecture/pos_gains//dist/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2703;

// For Block dx_hand_model/Middle Finger/Position-Force Architecture/Position Force Basic Architecture/pos_gains//prox/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2713;

// For Block dx_hand_model/Middle Finger/Position-Force Architecture/Subsystem/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2571;

// For Block dx_hand_model/Middle Finger/Position-Position/Pre-Proc/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3348;

// For Block dx_hand_model/Middle Finger/Position-Position/active/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3482;

// For Block dx_hand_model/Middle Finger/Position-Position/active1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3490;

// For Block dx_hand_model/Middle Finger/Position-Position/setGain/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3362;

// For Block dx_hand_model/Middle Finger/Position-Position/setGain /Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3369;

// For Block dx_hand_model/Middle Finger/Position-Position/setGain 1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3376;

// For Block dx_hand_model/Middle Finger/Position-Position/setGain 2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3383;

// For Block dx_hand_model/Middle Finger/Pre-Proc/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3245;

// For Block dx_hand_model/Middle Finger/setGain/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3405;

// For Block dx_hand_model/Middle Finger/setGain1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3412;

// For Block dx_hand_model/Middle Finger/setGain2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3498;

// For Block dx_hand_model/Pinky Finger/Active/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4887;

// For Block dx_hand_model/Pinky Finger/Choose/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4895;

// For Block dx_hand_model/Pinky Finger/Choose_/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4579;

// For Block dx_hand_model/Pinky Finger/Pose Generator/Angular Potentiometer/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4616;

// For Block dx_hand_model/Pinky Finger/Pose Generator/Parametri Ring/Get_from_ROS_param/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4640;

// For Block dx_hand_model/Pinky Finger/Pose Generator/Parametri Ring/Get_from_ROS_param/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4641;

// For Block dx_hand_model/Pinky Finger/Pose Generator/Parametri Ring/Get_from_ROS_param/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4642;

// For Block dx_hand_model/Pinky Finger/Pose Generator/Parametri Ring/Get_from_ROS_param/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4643;

// For Block dx_hand_model/Pinky Finger/Pose Generator/Parametri Ring/Get_from_ROS_param/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4644;

// For Block dx_hand_model/Pinky Finger/Position-Force Architecture/Position Force Basic Architecture/f_gains//dist/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4700;

// For Block dx_hand_model/Pinky Finger/Position-Force Architecture/Position Force Basic Architecture/f_gains//prox/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4710;

// For Block dx_hand_model/Pinky Finger/Position-Force Architecture/Subsystem/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4720;

// For Block dx_hand_model/Pinky Finger/Position-Position/Pre-Proc/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4743;

// For Block dx_hand_model/Pinky Finger/Position-Position/active/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4758;

// For Block dx_hand_model/Pinky Finger/Position-Position/active1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4766;

// For Block dx_hand_model/Pinky Finger/Position-Position/setGain/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4773;

// For Block dx_hand_model/Pinky Finger/Position-Position/setGain /Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4780;

// For Block dx_hand_model/Pinky Finger/Position-Position/setGain 1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4787;

// For Block dx_hand_model/Pinky Finger/Position-Position/setGain 2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4794;

// For Block dx_hand_model/Pinky Finger/Pre-Proc/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4804;

// For Block dx_hand_model/Pinky Finger/setGain/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4815;

// For Block dx_hand_model/Pinky Finger/setGain1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4822;

// For Block dx_hand_model/Pinky Finger/setGain2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4829;

// For Block dx_hand_model/Ring Finger /Active/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4879;

// For Block dx_hand_model/Ring Finger /Choose/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4903;

// For Block dx_hand_model/Ring Finger /Choose_/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4283;

// For Block dx_hand_model/Ring Finger /Pose Generator/Angular Potentiometer/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4319;

// For Block dx_hand_model/Ring Finger /Pose Generator/Parametri Ring/Get_from_ROS_param/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3254;

// For Block dx_hand_model/Ring Finger /Pose Generator/Parametri Ring/Get_from_ROS_param/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3255;

// For Block dx_hand_model/Ring Finger /Pose Generator/Parametri Ring/Get_from_ROS_param/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3256;

// For Block dx_hand_model/Ring Finger /Pose Generator/Parametri Ring/Get_from_ROS_param/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3257;

// For Block dx_hand_model/Ring Finger /Pose Generator/Parametri Ring/Get_from_ROS_param/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3258;

// For Block dx_hand_model/Ring Finger /Position-Force Architecture/Position Force Basic Architecture/pos_gains//dist/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4414;

// For Block dx_hand_model/Ring Finger /Position-Force Architecture/Position Force Basic Architecture/pos_gains//prox/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4424;

// For Block dx_hand_model/Ring Finger /Position-Force Architecture/Subsystem/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4434;

// For Block dx_hand_model/Ring Finger /Position-Position/Pre-Proc/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4457;

// For Block dx_hand_model/Ring Finger /Position-Position/active/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4472;

// For Block dx_hand_model/Ring Finger /Position-Position/active1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4480;

// For Block dx_hand_model/Ring Finger /Position-Position/setGain/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4487;

// For Block dx_hand_model/Ring Finger /Position-Position/setGain /Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4494;

// For Block dx_hand_model/Ring Finger /Position-Position/setGain 1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4501;

// For Block dx_hand_model/Ring Finger /Position-Position/setGain 2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4508;

// For Block dx_hand_model/Ring Finger /Pre-Proc/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4518;

// For Block dx_hand_model/Ring Finger /setGain/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4529;

// For Block dx_hand_model/Ring Finger /setGain1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4536;

// For Block dx_hand_model/Ring Finger /setGain2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4543;

// For Block dx_hand_model/Send To Exo/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4942;

// For Block dx_hand_model/Send To Exo/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2544;

// For Block dx_hand_model/Send to Schunk/Signal Conditioning/Subsystem/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2723;

// For Block dx_hand_model/Send to Schunk/Signal Conditioning/Subsystem1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2736;

// For Block dx_hand_model/Send to Schunk/Signal Conditioning/Subsystem2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2745;

// For Block dx_hand_model/Send to Schunk/Signal Conditioning/Subsystem3/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2754;

// For Block dx_hand_model/Send to Schunk/Signal Conditioning/Subsystem4/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2762;

// For Block dx_hand_model/Send to Schunk/Signal Conditioning/Subsystem5/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2768;

// For Block dx_hand_model/Thumb/Force Feedback/Active/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4863;

// For Block dx_hand_model/Thumb/Force Feedback/g1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3828;

// For Block dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_2962;

// For Block dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3019;

// For Block dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 3/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3038;

// For Block dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 4/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4259;

// For Block dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 5/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4267;

// For Block dx_hand_model/Thumb/Get_from_ROS_param/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3442;

// For Block dx_hand_model/Thumb/Get_from_ROS_param/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3443;

// For Block dx_hand_model/Thumb/Get_from_ROS_param/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3444;

// For Block dx_hand_model/Thumb/Get_from_ROS_param/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3445;

// For Block dx_hand_model/Thumb/Get_from_ROS_param/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3446;

// For Block dx_hand_model/Thumb/Get_from_ROS_param/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3454;

// For Block dx_hand_model/Thumb/Get_from_ROS_param/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_4055;

// For Block dx_hand_model/Thumb/ToSchunk/Subsystem/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3810;

// For Block dx_hand_model/Thumb/ToSchunk/Subsystem1/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_dx_hand_model_3817;

// For Block dx_hand_model/Index Finger/Pose Generator/Angular Potentiometer/Set Parameter
SimulinkParameterSetter<real64_T, double> ParamSet_dx_hand_model_2630;

// For Block dx_hand_model/Middle Finger/Pose Generator/Angular Potentiometer/Set Parameter
SimulinkParameterSetter<real64_T, double> ParamSet_dx_hand_model_2567;

// For Block dx_hand_model/Pinky Finger/Pose Generator/Angular Potentiometer/Set Parameter
SimulinkParameterSetter<real64_T, double> ParamSet_dx_hand_model_4620;

// For Block dx_hand_model/Ring Finger /Pose Generator/Angular Potentiometer/Set Parameter
SimulinkParameterSetter<real64_T, double> ParamSet_dx_hand_model_4323;

// For Block dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 1/Set Parameter
SimulinkParameterSetter<real64_T, double> ParamSet_dx_hand_model_2966;

// For Block dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 2/Set Parameter
SimulinkParameterSetter<real64_T, double> ParamSet_dx_hand_model_3023;

// For Block dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 3/Set Parameter
SimulinkParameterSetter<real64_T, double> ParamSet_dx_hand_model_3042;

// For Block dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 4/Set Parameter
SimulinkParameterSetter<real64_T, double> ParamSet_dx_hand_model_4262;

// For Block dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 5/Set Parameter
SimulinkParameterSetter<real64_T, double> ParamSet_dx_hand_model_4270;

// For Block dx_hand_model/Thumb/ToSchunk/Set Parameter
SimulinkParameterSetter<real64_T, double> ParamSet_dx_hand_model_4969;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

