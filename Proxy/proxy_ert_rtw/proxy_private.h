/*
 * proxy_private.h
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

#ifndef RTW_HEADER_proxy_private_h_
#define RTW_HEADER_proxy_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "proxy.h"

extern void proxy_Subsystem_Init(B_Subsystem_proxy_T *localB,
  DW_Subsystem_proxy_T *localDW, P_Subsystem_proxy_T *localP);
extern void proxy_Subsystem_Update(boolean_T rtu_Enable, real32_T rtu_In1,
  DW_Subsystem_proxy_T *localDW);
extern void proxy_Subsystem(boolean_T rtu_Enable, B_Subsystem_proxy_T *localB,
  DW_Subsystem_proxy_T *localDW);
extern void proxy_Jacobian2(const real32_T rtu_pose[8], real32_T rtu_sensor,
  real32_T rtu_sensor_f, real_T rtu_measurements, real_T rtu_measurements_n,
  const real_T rtu_q_pr[2], real_T rtu_J22_old, B_Jacobian2_proxy_T *localB);
extern void proxy_MATLABFunction(const real32_T rtu_Jcomponents[4], real_T
  rtu_j_f1, real_T rtu_j_f2, B_MATLABFunction_proxy_T *localB);
extern void proxy_MATLABFunction2(const real32_T rtu_cons[2], real32_T rtu_sens,
  real32_T rtu_sens_f, real32_T rtu_enab, B_MATLABFunction2_proxy_T *localB);
extern void proxy_MATLABFunction3(const real32_T rtu_u[2], const real32_T
  rtu_measurements[2], B_MATLABFunction3_proxy_T *localB);

#endif                                 /* RTW_HEADER_proxy_private_h_ */
