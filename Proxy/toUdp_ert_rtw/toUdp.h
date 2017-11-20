/*
 * toUdp.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "toUdp".
 *
 * Model version              : 1.670
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C++ source code generated on : Mon Nov 20 15:01:26 2017
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_toUdp_h_
#define RTW_HEADER_toUdp_h_
#include <string.h>
#include <stddef.h>
#ifndef toUdp_COMMON_INCLUDES_
# define toUdp_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "DAHostLib_Network.h"
#endif                                 /* toUdp_COMMON_INCLUDES_ */

#include "toUdp_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

/* Block signals (auto storage) */
typedef struct {
  SL_Bus_toUdp_std_msgs_Float64 In1;   /* '<S2>/In1' */
  real32_T Saturation;                 /* '<Root>/Saturation' */
  uint8_T BytePack[4];                 /* '<Root>/Byte Pack' */
} B_toUdp_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UDPSend_NetworkLib[137];      /* '<Root>/UDP Send' */
  robotics_slros_internal_block_T obj; /* '<S1>/SourceBlock' */
  boolean_T objisempty;                /* '<S1>/SourceBlock' */
} DW_toUdp_T;

/* Parameters (auto storage) */
struct P_toUdp_T_ {
  int32_T UDPSend_remotePort;          /* Mask Parameter: UDPSend_remotePort
                                        * Referenced by: '<Root>/UDP Send'
                                        */
  SL_Bus_toUdp_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                         * Referenced by: '<S2>/Out1'
                                         */
  SL_Bus_toUdp_std_msgs_Float64 Constant_Value;/* Computed Parameter: Constant_Value
                                                * Referenced by: '<S1>/Constant'
                                                */
  real32_T Constant_Value_l;           /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<Root>/Constant'
                                        */
  real32_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real32_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<Root>/Saturation'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_toUdp_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_toUdp_T toUdp_P;

#ifdef __cplusplus

}
#endif

/* Block signals (auto storage) */
extern B_toUdp_T toUdp_B;

/* Block states (auto storage) */
extern DW_toUdp_T toUdp_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void toUdp_initialize(void);
  extern void toUdp_step(void);
  extern void toUdp_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_toUdp_T *const toUdp_M;

#ifdef __cplusplus

}
#endif

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Data Type Conversion1' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'toUdp'
 * '<S1>'   : 'toUdp/Subscribe'
 * '<S2>'   : 'toUdp/Subscribe/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_toUdp_h_ */
