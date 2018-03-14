/*
 * dx_hand_model_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "dx_hand_model".
 *
 * Model version              : 1.2142
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C++ source code generated on : Wed Mar 14 12:59:00 2018
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_dx_hand_model_types_h_
#define RTW_HEADER_dx_hand_model_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_std_msgs_String_
#define DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_std_msgs_String_

typedef struct {
  uint8_T Data[128];
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
} SL_Bus_dx_hand_model_std_msgs_String;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_ros_time_Time_

typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_dx_hand_model_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_std_msgs_Header_

typedef struct {
  uint32_T Seq;
  uint8_T FrameId[128];
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
  SL_Bus_dx_hand_model_ros_time_Time Stamp;
} SL_Bus_dx_hand_model_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_sensor_msgs_JointState_
#define DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_sensor_msgs_JointState_

typedef struct {
  SL_Bus_dx_hand_model_std_msgs_String Name[16];
  SL_Bus_ROSVariableLengthArrayInfo Name_SL_Info;
  real_T Position[128];
  SL_Bus_ROSVariableLengthArrayInfo Position_SL_Info;
  real_T Velocity[128];
  SL_Bus_ROSVariableLengthArrayInfo Velocity_SL_Info;
  real_T Effort[128];
  SL_Bus_ROSVariableLengthArrayInfo Effort_SL_Info;
  SL_Bus_dx_hand_model_std_msgs_Header Header;
} SL_Bus_dx_hand_model_sensor_msgs_JointState;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_std_msgs_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_std_msgs_MultiArrayDimension_

typedef struct {
  uint8_T Label[128];
  SL_Bus_ROSVariableLengthArrayInfo Label_SL_Info;
  uint32_T Size;
  uint32_T Stride;
} SL_Bus_dx_hand_model_std_msgs_MultiArrayDimension;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_std_msgs_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_std_msgs_MultiArrayLayout_

typedef struct {
  uint32_T DataOffset;
  SL_Bus_dx_hand_model_std_msgs_MultiArrayDimension Dim[16];
  SL_Bus_ROSVariableLengthArrayInfo Dim_SL_Info;
} SL_Bus_dx_hand_model_std_msgs_MultiArrayLayout;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_std_msgs_Float64MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_dx_hand_model_std_msgs_Float64MultiArray_

typedef struct {
  real_T Data[128];
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
  SL_Bus_dx_hand_model_std_msgs_MultiArrayLayout Layout;
} SL_Bus_dx_hand_model_std_msgs_Float64MultiArray;

#endif

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_block_T;

#endif                                 /*typedef_robotics_slros_internal_block_T*/

#ifndef typedef_robotics_slros_internal_blo_k_T
#define typedef_robotics_slros_internal_blo_k_T

typedef struct {
  int32_T isInitialized;
  real_T SampleTime;
} robotics_slros_internal_blo_k_T;

#endif                                 /*typedef_robotics_slros_internal_blo_k_T*/

#ifndef typedef_robotics_slros_internal_bl_kf_T
#define typedef_robotics_slros_internal_bl_kf_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_bl_kf_T;

#endif                                 /*typedef_robotics_slros_internal_bl_kf_T*/

#ifndef typedef_robotics_slros_internal_b_kfa_T
#define typedef_robotics_slros_internal_b_kfa_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_b_kfa_T;

#endif                                 /*typedef_robotics_slros_internal_b_kfa_T*/

/* Parameters (auto storage) */
typedef struct P_dx_hand_model_T_ P_dx_hand_model_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_dx_hand_model_T RT_MODEL_dx_hand_model_T;

#endif                                 /* RTW_HEADER_dx_hand_model_types_h_ */
