/*
 * dx_hand_model_private.h
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

#ifndef RTW_HEADER_dx_hand_model_private_h_
#define RTW_HEADER_dx_hand_model_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "dx_hand_model.h"

extern real32_T rt_hypotf_snf(real32_T u0, real32_T u1);
extern real32_T rt_atan2f_snf(real32_T u0, real32_T u1);
int_T rt_WriteMat4FileHeader(FILE *fp,
  int32_T m,
  int32_T n,
  const char_T *name);
extern void dx_Optimized_Static_Problem(const real32_T rtu_Jcomponents[4],
  real32_T rtu_force_vector, real32_T rtu_force_vector_o,
  B_Optimized_Static_Problem_dx_T *localB);
extern void dx_h_Classic_Static_Problem(const real32_T rtu_Jcomponents[4], const
  real32_T rtu_operational_space[2], B_Classic_Static_Problem_dx_h_T *localB);
extern void Optimized_Static_Problem_e(const real32_T rtu_Jcomponents[4], const
  real32_T rtu_force_vector[2], B_Optimized_Static_Problem_l_T *localB);
extern void dx_hand_mode_MiddleJacobian(const real32_T rtu_pose[8], real32_T
  rtu_sensor, real32_T rtu_sensor_f, const real32_T rtu_measurements[18], const
  real32_T rtu_q_pr[2], real32_T rtu_J22_old, B_MiddleJacobian_dx_hand_mode_T
  *localB);
extern void dx_hand_mo_MiddleJacobian_g(const real32_T rtu_pose[8], real32_T
  rtu_sensor_h, const real32_T rtu_measurements[18],
  B_MiddleJacobian_dx_hand_mo_j_T *localB);
extern void dx_h_MiddleDirectKinematics(real32_T rtu_u, real32_T rtu_u_l, const
  real32_T rtu_measurements[18], B_MiddleDirectKinematics_dx_h_T *localB);
extern void dx_Classic_Static_Problem_d(const real32_T rtu_Jcomponents[4],
  real32_T rtu_force_vector, real32_T rtu_force_vector_p,
  B_Classic_Static_Problem_dx_k_T *localB);
extern void dx_hand_model_IsNan(const real32_T rtu_Jin[4], const real32_T
  rtu_J_k1[4], B_IsNan_dx_hand_model_T *localB);
extern void dx_hand_mod_MATLABFunction1(const real32_T rtu_u[4],
  B_MATLABFunction1_dx_hand_mod_T *localB);
extern void dx_hand_mod_MATLABFunction3(const real32_T rtu_u[3],
  B_MATLABFunction3_dx_hand_mod_T *localB);
extern void dx_hand_m_MATLABFunction4_o(real32_T rtu_u, real32_T rtu_u_i,
  real32_T rtu_u_g, B_MATLABFunction4_dx_hand_m_c_T *localB);
extern void dx_hand_model_step0(void);
extern void dx_hand_model_step1(void);

#endif                                 /* RTW_HEADER_dx_hand_model_private_h_ */
