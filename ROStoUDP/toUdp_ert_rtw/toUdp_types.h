/*
 * toUdp_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "toUdp".
 *
 * Model version              : 1.688
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C++ source code generated on : Tue Nov 21 09:15:35 2017
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_toUdp_types_h_
#define RTW_HEADER_toUdp_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_toUdp_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_toUdp_std_msgs_Float64_

typedef struct {
  real_T Data;
} SL_Bus_toUdp_std_msgs_Float64;

#endif

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_block_T;

#endif                                 /*typedef_robotics_slros_internal_block_T*/

#ifndef typedef_robotics_slros_internal_blo_a_T
#define typedef_robotics_slros_internal_blo_a_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_blo_a_T;

#endif                                 /*typedef_robotics_slros_internal_blo_a_T*/

/* Parameters (auto storage) */
typedef struct P_toUdp_T_ P_toUdp_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_toUdp_T RT_MODEL_toUdp_T;

#endif                                 /* RTW_HEADER_toUdp_types_h_ */
