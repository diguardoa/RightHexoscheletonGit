/*
 * proxy_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "proxy".
 *
 * Model version              : 1.651
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C++ source code generated on : Fri Nov 17 11:45:24 2017
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_proxy_types_h_
#define RTW_HEADER_proxy_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_Bool_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_Bool_

typedef struct {
  boolean_T Data;
} SL_Bus_proxy_std_msgs_Bool;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_MultiArrayDimension_

typedef struct {
  uint8_T Label[128];
  SL_Bus_ROSVariableLengthArrayInfo Label_SL_Info;
  uint32_T Size;
  uint32_T Stride;
} SL_Bus_proxy_std_msgs_MultiArrayDimension;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_MultiArrayLayout_

typedef struct {
  uint32_T DataOffset;
  SL_Bus_proxy_std_msgs_MultiArrayDimension Dim[16];
  SL_Bus_ROSVariableLengthArrayInfo Dim_SL_Info;
} SL_Bus_proxy_std_msgs_MultiArrayLayout;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_Float64MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_Float64MultiArray_

typedef struct {
  real_T Data[128];
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
  SL_Bus_proxy_std_msgs_MultiArrayLayout Layout;
} SL_Bus_proxy_std_msgs_Float64MultiArray;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_Float32_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_Float32_

typedef struct {
  real32_T Data;
} SL_Bus_proxy_std_msgs_Float32;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_String_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_String_

typedef struct {
  uint8_T Data[128];
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
} SL_Bus_proxy_std_msgs_String;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proxy_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proxy_ros_time_Time_

typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_proxy_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proxy_std_msgs_Header_

typedef struct {
  uint32_T Seq;
  uint8_T FrameId[128];
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
  SL_Bus_proxy_ros_time_Time Stamp;
} SL_Bus_proxy_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proxy_sensor_msgs_JointState_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proxy_sensor_msgs_JointState_

typedef struct {
  SL_Bus_proxy_std_msgs_String Name[16];
  SL_Bus_ROSVariableLengthArrayInfo Name_SL_Info;
  real_T Position[128];
  SL_Bus_ROSVariableLengthArrayInfo Position_SL_Info;
  real_T Velocity[128];
  SL_Bus_ROSVariableLengthArrayInfo Velocity_SL_Info;
  real_T Effort[128];
  SL_Bus_ROSVariableLengthArrayInfo Effort_SL_Info;
  SL_Bus_proxy_std_msgs_Header Header;
} SL_Bus_proxy_sensor_msgs_JointState;

#endif

/* Custom Type definition for MATLAB Function: '<S14>/MATLAB Function3' */
#ifndef struct_tag_sL6LJlPlxhdTxZzXh5NTaQC
#define struct_tag_sL6LJlPlxhdTxZzXh5NTaQC

struct tag_sL6LJlPlxhdTxZzXh5NTaQC
{
  int32_T intNumBits;
};

#endif                                 /*struct_tag_sL6LJlPlxhdTxZzXh5NTaQC*/

#ifndef typedef_sL6LJlPlxhdTxZzXh5NTaQC_proxy_T
#define typedef_sL6LJlPlxhdTxZzXh5NTaQC_proxy_T

typedef struct tag_sL6LJlPlxhdTxZzXh5NTaQC sL6LJlPlxhdTxZzXh5NTaQC_proxy_T;

#endif                                 /*typedef_sL6LJlPlxhdTxZzXh5NTaQC_proxy_T*/

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_block_T;

#endif                                 /*typedef_robotics_slros_internal_block_T*/

#ifndef typedef_robotics_slros_internal_blo_d_T
#define typedef_robotics_slros_internal_blo_d_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_blo_d_T;

#endif                                 /*typedef_robotics_slros_internal_blo_d_T*/

/* Parameters for system: '<S21>/Subsystem' */
typedef struct P_Subsystem_proxy_T_ P_Subsystem_proxy_T;

/* Parameters (auto storage) */
typedef struct P_proxy_T_ P_proxy_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_proxy_T RT_MODEL_proxy_T;

#endif                                 /* RTW_HEADER_proxy_types_h_ */
