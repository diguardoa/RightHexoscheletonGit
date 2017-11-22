/*
 * toUdp.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "toUdp".
 *
 * Model version              : 1.690
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C++ source code generated on : Wed Nov 22 13:22:47 2017
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
#include <math.h>
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
  real32_T ByteUnpack;                 /* '<Root>/Byte Unpack' */
  real32_T Quantizer;                  /* '<S4>/Quantizer' */
  uint16_T ReceivefromHaptics_o2;      /* '<Root>/Receive from Haptics' */
  uint8_T ReceivefromHaptics_o1[4];    /* '<Root>/Receive from Haptics' */
  uint8_T BytePack[4];                 /* '<S4>/Byte Pack' */
} B_toUdp_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T ReceivefromHaptics_NetworkLib[137];/* '<Root>/Receive from Haptics' */
  real_T UDPSend_NetworkLib[137];      /* '<S4>/UDP Send' */
  robotics_slros_internal_block_T obj; /* '<S2>/SinkBlock' */
  robotics_slros_internal_blo_a_T obj_e;/* '<S3>/SourceBlock' */
  boolean_T objisempty;                /* '<S3>/SourceBlock' */
  boolean_T objisempty_a;              /* '<S2>/SinkBlock' */
} DW_toUdp_T;

/* Parameters (auto storage) */
struct P_toUdp_T_ {
  int32_T ReceivefromHaptics_localPort;/* Mask Parameter: ReceivefromHaptics_localPort
                                        * Referenced by: '<Root>/Receive from Haptics'
                                        */
  int32_T UDPSend_remotePort;          /* Mask Parameter: UDPSend_remotePort
                                        * Referenced by: '<S4>/UDP Send'
                                        */
  SL_Bus_toUdp_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                         * Referenced by: '<S5>/Out1'
                                         */
  SL_Bus_toUdp_std_msgs_Float64 Constant_Value;/* Computed Parameter: Constant_Value
                                                * Referenced by: '<S3>/Constant'
                                                */
  SL_Bus_toUdp_std_msgs_Float64 Constant_Value_g;/* Computed Parameter: Constant_Value_g
                                                  * Referenced by: '<S1>/Constant'
                                                  */
  real32_T Constant_Value_l;           /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S4>/Constant'
                                        */
  real32_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real32_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real32_T Quantizer_Interval;         /* Computed Parameter: Quantizer_Interval
                                        * Referenced by: '<S4>/Quantizer'
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
 * Block '<S4>/Display' : Unused code path elimination
 * Block '<S4>/Display1' : Unused code path elimination
 * Block '<S4>/Data Type Conversion1' : Eliminate redundant data type conversion
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
 * '<S1>'   : 'toUdp/Blank Message1'
 * '<S2>'   : 'toUdp/Publish2'
 * '<S3>'   : 'toUdp/Subscribe'
 * '<S4>'   : 'toUdp/Subsystem'
 * '<S5>'   : 'toUdp/Subscribe/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_toUdp_h_ */
