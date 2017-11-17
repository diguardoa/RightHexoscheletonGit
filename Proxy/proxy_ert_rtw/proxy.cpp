/*
 * proxy.cpp
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

#include "proxy.h"
#include "proxy_private.h"
#define proxy_MessageQueueLen          (1)

/* Block signals (auto storage) */
B_proxy_T proxy_B;

/* Block states (auto storage) */
DW_proxy_T proxy_DW;

/* Real-time model */
RT_MODEL_proxy_T proxy_M_;
RT_MODEL_proxy_T *const proxy_M = &proxy_M_;

/*
 * System initialize for enable system:
 *    '<S21>/Subsystem'
 *    '<S29>/Subsystem'
 *    '<S50>/Subsystem'
 *    '<S58>/Subsystem'
 */
void proxy_Subsystem_Init(B_Subsystem_proxy_T *localB, DW_Subsystem_proxy_T
  *localDW, P_Subsystem_proxy_T *localP)
{
  /* InitializeConditions for Memory: '<S30>/Memory' */
  localDW->Memory_PreviousInput = localP->Memory_InitialCondition;

  /* SystemInitialize for Outport: '<S30>/Out1' */
  localB->Memory = localP->Out1_Y0;
}

/*
 * Outputs for enable system:
 *    '<S21>/Subsystem'
 *    '<S29>/Subsystem'
 *    '<S50>/Subsystem'
 *    '<S58>/Subsystem'
 */
void proxy_Subsystem(boolean_T rtu_Enable, B_Subsystem_proxy_T *localB,
                     DW_Subsystem_proxy_T *localDW)
{
  /* Outputs for Enabled SubSystem: '<S21>/Subsystem' incorporates:
   *  EnablePort: '<S30>/Enable'
   */
  if (rtu_Enable) {
    /* Memory: '<S30>/Memory' */
    localB->Memory = localDW->Memory_PreviousInput;
  }

  /* End of Outputs for SubSystem: '<S21>/Subsystem' */
}

/*
 * Update for enable system:
 *    '<S21>/Subsystem'
 *    '<S29>/Subsystem'
 *    '<S50>/Subsystem'
 *    '<S58>/Subsystem'
 */
void proxy_Subsystem_Update(boolean_T rtu_Enable, real32_T rtu_In1,
  DW_Subsystem_proxy_T *localDW)
{
  /* Update for Enabled SubSystem: '<S21>/Subsystem' incorporates:
   *  EnablePort: '<S30>/Enable'
   */
  if (rtu_Enable) {
    /* Update for Memory: '<S30>/Memory' */
    localDW->Memory_PreviousInput = rtu_In1;
  }

  /* End of Update for SubSystem: '<S21>/Subsystem' */
}

/*
 * Output and update for atomic system:
 *    '<S14>/Jacobian2'
 *    '<S16>/Jacobian2'
 */
void proxy_Jacobian2(const real32_T rtu_pose[8], real32_T rtu_sensor, real32_T
                     rtu_sensor_f, real_T rtu_measurements, real_T
                     rtu_measurements_n, const real_T rtu_q_pr[2], real_T
                     rtu_J22_old, B_Jacobian2_proxy_T *localB)
{
  real32_T J22_c_tmp_tmp;
  real32_T a_tmp_tmp;
  real32_T J22_c_tmp;
  real32_T J22_c_tmp_0;
  real32_T J22_c_tmp_1;
  real32_T J22_c_tmp_2;
  real32_T J22_c_tmp_tmp_0;
  real32_T a_tmp_tmp_tmp;
  real32_T J22_c_tmp_3;
  real32_T a_tmp_tmp_tmp_tmp;
  real32_T J22_c_tmp_4;
  real32_T a_tmp_tmp_tmp_tmp_0;
  real32_T J22_c_tmp_tmp_tmp;
  real32_T J22_c_tmp_5;
  real32_T a_tmp_tmp_0;
  real32_T a_tmp_tmp_1;
  localB->x_tmp = (real32_T)sin((real_T)rtu_pose[5]);

  /* SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport2' */
  localB->a_tmp = rtu_sensor_f - rtu_pose[2];
  localB->a_tmp_m = (real32_T)sin((real_T)rtu_pose[2]);
  localB->a_tmp_c = (real32_T)cos((real_T)localB->a_tmp);

  /* SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport2' */
  localB->a_tmp_k = rtu_sensor_f - rtu_pose[3];
  localB->a_tmp_tmp_p = localB->a_tmp_k - rtu_pose[2];
  localB->a_tmp_cx = (real32_T)cos((real_T)localB->a_tmp_tmp_p);
  localB->a_tmp_b = (real32_T)cos((real_T)rtu_pose[2]);
  localB->a_tmp_tmp = (real32_T)sin((real_T)localB->a_tmp);
  localB->a_tmp = localB->a_tmp_tmp * 43.0F;
  localB->a_tmp_cv = (real32_T)sin((real_T)localB->a_tmp_tmp_p);
  localB->a_tmp_f = rtu_pose[4] - rtu_pose[2];
  localB->J22_c = localB->a_tmp_cv * 40.0F;
  localB->a_tmp_g = localB->a_tmp_cx * 40.0F;
  localB->a_tmp_g1 = rtu_pose[0] + rtu_pose[1];
  localB->a_tmp_me = localB->a_tmp_c * 9.0F;
  localB->a_tmp_n = localB->a_tmp_cv * 39.0F;
  localB->a_tmp_p = (real32_T)cos((real_T)localB->a_tmp_g1);
  localB->a_tmp_l = localB->a_tmp_c * 16.0F;
  localB->a_tmp_j = localB->a_tmp_tmp * 9.0F;
  localB->a_tmp_d = localB->a_tmp_cx * 39.0F;
  localB->a_tmp_g1 = (real32_T)sin((real_T)localB->a_tmp_g1);
  localB->a_tmp_k = (real32_T)cos((real_T)(localB->a_tmp_k - rtu_pose[4]));
  localB->a_tmp_tmp_p = localB->a_tmp_cv * 27.0F;
  localB->a_tmp_tmp_g = (real32_T)sin((real_T)localB->a_tmp_f);
  a_tmp_tmp_tmp_tmp = localB->J22_c + localB->a_tmp_d;
  localB->a_tmp_tmp_tmp = a_tmp_tmp_tmp_tmp * localB->a_tmp_g1;
  localB->a_tmp_tmp_tmp_b = localB->a_tmp_g - localB->a_tmp_n;
  localB->a_tmp_tmp_l = localB->a_tmp_tmp_tmp + localB->a_tmp_tmp_tmp_b *
    localB->a_tmp_p;
  localB->a_tmp_tmp_d = localB->a_tmp_c * 43.0F;
  localB->a_tmp_tmp_dy = localB->a_tmp_tmp * 16.0F;
  localB->a_tmp_tmp_lx = (real32_T)cos((real_T)rtu_pose[0]);
  a_tmp_tmp_tmp_tmp_0 = 35.0F * localB->a_tmp_m;
  a_tmp_tmp_tmp = a_tmp_tmp_tmp_tmp_0 - localB->a_tmp;
  localB->a_tmp_tmp_o = a_tmp_tmp_tmp - localB->a_tmp_l;
  localB->a_tmp_tmp_b = ((localB->a_tmp_l - localB->a_tmp_j) - localB->J22_c) -
    localB->a_tmp_d;
  localB->a_tmp_tmp_n = localB->a_tmp_cx * 27.0F;
  localB->a_tmp_f = (real32_T)cos((real_T)localB->a_tmp_f);
  localB->a_tmp_tmp_bs = ((localB->a_tmp_me + localB->a_tmp_tmp_dy) +
    localB->a_tmp_g) - localB->a_tmp_n;
  localB->a_tmp_tmp_tmp_h = ((((86.0F * localB->a_tmp_b - 37.0F *
    localB->a_tmp_m) - localB->a_tmp) - localB->a_tmp_j) - localB->J22_c) -
    localB->a_tmp_tmp_p;
  localB->a_tmp_tmp_tmp_d = ((((37.0F * localB->a_tmp_b + 86.0F *
    localB->a_tmp_m) - localB->a_tmp_tmp_d) - localB->a_tmp_me) -
    localB->a_tmp_g) - localB->a_tmp_tmp_n;
  localB->a_tmp_tmp_ln = localB->a_tmp_tmp_tmp_d * localB->a_tmp_f +
    localB->a_tmp_tmp_tmp_h * localB->a_tmp_tmp_g;
  localB->a_tmp_n = (real32_T)sin((real_T)rtu_pose[1]);
  a_tmp_tmp = localB->a_tmp_k * (67.0F * localB->a_tmp_n);
  a_tmp_tmp_0 = localB->a_tmp_tmp_o * a_tmp_tmp;
  a_tmp_tmp_1 = (localB->a_tmp_tmp_ln * localB->a_tmp_tmp_l +
                 (localB->a_tmp_tmp_bs * localB->a_tmp_p - localB->a_tmp_tmp_b *
                  localB->a_tmp_g1) * (localB->a_tmp_k * 67.0F)) *
    localB->a_tmp_tmp_lx;
  localB->a_tmp_m = a_tmp_tmp_0 - a_tmp_tmp_1;
  localB->J22_c_tmp_tmp = (real32_T)sin((real_T)rtu_pose[0]);
  J22_c_tmp_tmp_tmp = 35.0F * localB->a_tmp_b;
  J22_c_tmp_tmp = (localB->a_tmp_tmp_d + J22_c_tmp_tmp_tmp) -
    localB->a_tmp_tmp_dy;
  localB->a_tmp_b = J22_c_tmp_tmp * localB->a_tmp_tmp_lx - localB->a_tmp_tmp_o *
    localB->J22_c_tmp_tmp;
  J22_c_tmp_tmp_0 = localB->a_tmp_g1 * 67.0F * localB->a_tmp_k;
  localB->J22_c_tmp = localB->a_tmp_tmp_b * J22_c_tmp_tmp_0;

  /* SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport3' */
  J22_c_tmp = (real32_T)rtu_measurements_n * localB->a_tmp_tmp_lx;
  J22_c_tmp_0 = (real32_T)rtu_measurements - rtu_pose[6];
  J22_c_tmp_1 = J22_c_tmp - rtu_pose[6] * localB->J22_c_tmp_tmp;

  /* SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport3' */
  J22_c_tmp_2 = (real32_T)rtu_measurements_n * localB->J22_c_tmp_tmp;
  localB->a_tmp_cx = (localB->a_tmp_tmp_tmp_h * localB->a_tmp_tmp_tmp_b +
                      localB->a_tmp_tmp_bs * (localB->a_tmp_cv * 67.0F)) *
    localB->a_tmp_tmp_g + (localB->a_tmp_tmp_tmp_d * (localB->a_tmp_tmp_tmp_b *
    localB->a_tmp_f) + localB->a_tmp_tmp_bs * (localB->a_tmp_f * 67.0F *
    localB->a_tmp_cx));
  localB->a_tmp_tmp_tmp = (localB->J22_c_tmp - localB->a_tmp_tmp_ln *
    localB->a_tmp_tmp_tmp) - localB->a_tmp_cx * localB->a_tmp_p;
  J22_c_tmp += J22_c_tmp_0 * localB->J22_c_tmp_tmp;
  localB->a_tmp_cv = localB->a_tmp_p * 67.0F * localB->a_tmp_k;
  J22_c_tmp_0 = J22_c_tmp_2 - J22_c_tmp_0 * localB->a_tmp_tmp_lx;
  localB->a_tmp_tmp_tmp_b = localB->a_tmp_tmp_tmp * localB->J22_c_tmp_tmp +
    J22_c_tmp_tmp * a_tmp_tmp;
  J22_c_tmp_2 += rtu_pose[6] * localB->a_tmp_tmp_lx;
  J22_c_tmp_3 = 67.0F * localB->J22_c_tmp_tmp;
  localB->a_tmp_tmp_tmp_h = localB->a_tmp_g1 * localB->a_tmp_tmp_lx;
  J22_c_tmp_4 = localB->a_tmp_p * localB->a_tmp_tmp_lx;
  localB->a_tmp_tmp_tmp_d = (real32_T)cos((real_T)rtu_pose[5]);
  J22_c_tmp_5 = localB->a_tmp_k * (67.0F * rtu_pose[7]);
  localB->a_tmp_tmp_tmp = J22_c_tmp_3 * localB->a_tmp_n * localB->a_tmp_k *
    J22_c_tmp_1 * localB->a_tmp_tmp_o - (localB->a_tmp_m * J22_c_tmp_2 -
    localB->a_tmp_tmp_tmp * (J22_c_tmp_1 * localB->J22_c_tmp_tmp)) *
    localB->a_tmp_tmp_lx;
  J22_c_tmp_2 += (((localB->a_tmp_b * J22_c_tmp_5 + localB->a_tmp_b *
                    (J22_c_tmp_tmp_0 * J22_c_tmp)) - localB->a_tmp_b *
                   (localB->a_tmp_cv * J22_c_tmp_0)) - localB->a_tmp_tmp_tmp_b *
                  J22_c_tmp_1) / localB->a_tmp_m;
  J22_c_tmp_tmp = (real32_T)tan((real_T)rtu_pose[5]);
  J22_c_tmp_tmp_0 = localB->a_tmp_tmp * 18.0F;
  localB->a_tmp_tmp = (J22_c_tmp_tmp_0 + a_tmp_tmp_tmp_tmp_0) -
    (J22_c_tmp_tmp_tmp - localB->a_tmp_c * 18.0F) * J22_c_tmp_tmp;
  localB->a_tmp_tmp_p += (localB->a_tmp + localB->a_tmp_j) + localB->J22_c;
  a_tmp_tmp_tmp_tmp_0 = 67.0F * localB->a_tmp_tmp_lx;
  J22_c_tmp_tmp_tmp = a_tmp_tmp_tmp_tmp_0 * localB->a_tmp_g1 * localB->a_tmp_k;
  localB->a_tmp_g = ((localB->a_tmp_tmp_d + localB->a_tmp_me) + localB->a_tmp_g)
    + localB->a_tmp_tmp_n;
  localB->a_tmp += localB->a_tmp_l;
  J22_c_tmp_3 = (((((a_tmp_tmp_tmp - localB->a_tmp_j) - localB->J22_c) -
                   localB->a_tmp_d) * J22_c_tmp_tmp_tmp - localB->a_tmp_tmp_o *
                  (J22_c_tmp_3 * localB->a_tmp_p * localB->a_tmp_k)) -
                 localB->a_tmp_tmp_ln * (a_tmp_tmp_tmp_tmp *
    localB->a_tmp_tmp_tmp_h)) - localB->a_tmp_cx * J22_c_tmp_4;
  J22_c_tmp_5 = localB->a_tmp_tmp_tmp * (localB->a_tmp_tmp * J22_c_tmp_5);
  localB->J22_c_tmp = ((((localB->a_tmp_tmp_p * localB->a_tmp_tmp_g *
    localB->a_tmp_tmp_l * localB->a_tmp_b + localB->J22_c_tmp * localB->a_tmp_b)
    + localB->a_tmp_g * localB->a_tmp_f * localB->a_tmp_tmp_l * localB->a_tmp_b)
                        - localB->a_tmp_tmp_bs * localB->a_tmp_cv *
                        localB->a_tmp_b) - localB->a_tmp_m *
                       (localB->a_tmp_tmp_d - localB->a_tmp_tmp_dy)) -
    localB->a_tmp_tmp_tmp_b * localB->a_tmp;
  localB->a_tmp_cv = (((localB->a_tmp_tmp * (localB->a_tmp_tmp_g *
    localB->a_tmp_tmp_lx) * localB->a_tmp_tmp_p * localB->a_tmp_tmp_l +
                        localB->a_tmp_tmp * J22_c_tmp_tmp_tmp *
                        localB->a_tmp_tmp_b) + localB->a_tmp_tmp *
                       (localB->a_tmp_f * localB->a_tmp_tmp_lx) *
                       localB->a_tmp_g * localB->a_tmp_tmp_l) -
                      localB->a_tmp_tmp * (a_tmp_tmp * localB->a_tmp)) -
    localB->a_tmp_tmp * (a_tmp_tmp_tmp_tmp_0 * localB->a_tmp_p * localB->a_tmp_k)
    * localB->a_tmp_tmp_bs;
  localB->a_tmp_tmp_tmp_b = J22_c_tmp_3 * (18.0F * J22_c_tmp_tmp *
    localB->a_tmp_c);

  /* SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport2' */
  localB->J22_c = ((localB->J22_c_tmp * -(((J22_c_tmp * localB->a_tmp_tmp_tmp_h
    + rtu_pose[7] * localB->a_tmp_tmp_lx) - J22_c_tmp_1 * localB->a_tmp_n) -
    J22_c_tmp_0 * J22_c_tmp_4) / (localB->a_tmp_tmp_tmp * rtu_pose[7]) -
                    (real32_T)fabs((real_T)(J22_c_tmp_2 * ((J22_c_tmp_3 *
    (localB->x_tmp * localB->x_tmp) / (localB->a_tmp_m * localB->a_tmp_tmp_tmp_d)
    + localB->a_tmp_tmp_tmp_d) * (localB->a_tmp_m * localB->a_tmp_m)) /
    J22_c_tmp_5)) * ((rtu_sensor - (real32_T)rtu_q_pr[0]) / 0.01F * 2.0F) /
                    ((rtu_sensor_f - (real32_T)rtu_q_pr[1]) / 0.01F)) -
                   J22_c_tmp_2 * (localB->a_tmp_m * localB->a_tmp_m) *
                   (J22_c_tmp_tmp_0 - (localB->a_tmp_cv -
    localB->a_tmp_tmp_tmp_b) / localB->a_tmp_m) / J22_c_tmp_5) / 2.0F;
  if ((localB->J22_c == 0.0F) || rtIsNaNF(localB->J22_c) || rtIsInfF
      (localB->J22_c)) {
    localB->J22_c = (real32_T)rtu_J22_old;
  } else {
    localB->J22_c = -(real32_T)fabs((real_T)localB->J22_c);
  }

  localB->J22_ol = localB->J22_c;
  localB->JTcomp[0] = (((((a_tmp_tmp_tmp * localB->a_tmp_tmp_tmp_h - 16.0F *
    localB->a_tmp_tmp_lx * localB->a_tmp_g1 * localB->a_tmp_c) -
    localB->a_tmp_tmp_o * localB->a_tmp_n) - localB->a_tmp_tmp_o *
    (localB->a_tmp_p * localB->J22_c_tmp_tmp)) * (localB->x_tmp * localB->x_tmp *
    67.0F * localB->a_tmp_k) + a_tmp_tmp_0) - a_tmp_tmp_1) * -localB->a_tmp_b /
    (localB->a_tmp_tmp_tmp * (localB->a_tmp_tmp * localB->a_tmp_tmp_tmp_d));
  localB->JTcomp[1] = localB->J22_c_tmp * localB->a_tmp_tmp_lx /
    localB->a_tmp_tmp_tmp - ((localB->a_tmp_cv - localB->a_tmp_m *
    J22_c_tmp_tmp_0) - localB->a_tmp_tmp_tmp_b) * localB->a_tmp_b /
    (localB->a_tmp_tmp_tmp * localB->a_tmp_tmp);

  /* SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport2' incorporates:
   *  SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport3'
   */
  localB->JTcomp[2] = -(((((((((real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2]))
    * 43.0F + 35.0F * (real32_T)cos((real_T)rtu_pose[2])) - (real32_T)sin
    ((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F) * (real32_T)cos((real_T)
    rtu_pose[0]) - ((35.0F * (real32_T)sin((real_T)rtu_pose[2]) - (real32_T)sin
                     ((real_T)(rtu_sensor_f - rtu_pose[2])) * 43.0F) - (real32_T)
                    cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F) *
    (real32_T)sin((real_T)rtu_pose[0])) * ((real32_T)cos((real_T)((rtu_sensor_f
    - rtu_pose[3]) - rtu_pose[4])) * (67.0F * rtu_pose[7])) + ((((real32_T)cos
    ((real_T)(rtu_sensor_f - rtu_pose[2])) * 43.0F + 35.0F * (real32_T)cos
    ((real_T)rtu_pose[2])) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2]))
    * 16.0F) * (real32_T)cos((real_T)rtu_pose[0]) - ((35.0F * (real32_T)sin
    ((real_T)rtu_pose[2]) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) *
    43.0F) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F) *
    (real32_T)sin((real_T)rtu_pose[0])) * ((real32_T)sin((real_T)(rtu_pose[0] +
    rtu_pose[1])) * 67.0F * (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[4])) * (((real32_T)rtu_measurements - rtu_pose[6]) * (real32_T)
                       sin((real_T)rtu_pose[0]) + (real32_T)rtu_measurements_n *
                       (real32_T)cos((real_T)rtu_pose[0])))) - ((((real32_T)cos
    ((real_T)(rtu_sensor_f - rtu_pose[2])) * 43.0F + 35.0F * (real32_T)cos
    ((real_T)rtu_pose[2])) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2]))
    * 16.0F) * (real32_T)cos((real_T)rtu_pose[0]) - ((35.0F * (real32_T)sin
    ((real_T)rtu_pose[2]) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) *
    43.0F) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F) *
    (real32_T)sin((real_T)rtu_pose[0])) * ((real32_T)cos((real_T)(rtu_pose[0] +
    rtu_pose[1])) * 67.0F * (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[4])) * ((real32_T)rtu_measurements_n * (real32_T)sin((real_T)
    rtu_pose[0]) - ((real32_T)rtu_measurements - rtu_pose[6]) * (real32_T)cos
                       ((real_T)rtu_pose[0])))) - (((((((real32_T)cos((real_T)
    (rtu_sensor_f - rtu_pose[2])) * 16.0F - (real32_T)sin((real_T)(rtu_sensor_f
    - rtu_pose[2])) * 9.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 40.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 39.0F) * ((real32_T)sin((real_T)(rtu_pose[0] + rtu_pose[1]))
    * 67.0F * (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[4])))
    - ((((((37.0F * (real32_T)cos((real_T)rtu_pose[2]) + 86.0F * (real32_T)sin
            ((real_T)rtu_pose[2])) - (real32_T)cos((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2]))
          * 9.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 40.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 27.0F) * (real32_T)cos((real_T)(rtu_pose[4] - rtu_pose[2]))
       + (((((86.0F * (real32_T)cos((real_T)rtu_pose[2]) - 37.0F * (real32_T)sin
              ((real_T)rtu_pose[2])) - (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2]))
            * 9.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 27.0F) * (real32_T)sin((real_T)(rtu_pose[4] - rtu_pose[2])))
    * (((real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) *
        40.0F + (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2]))
        * 39.0F) * (real32_T)sin((real_T)(rtu_pose[0] + rtu_pose[1])))) -
    (((((((86.0F * (real32_T)cos((real_T)rtu_pose[2]) - 37.0F * (real32_T)sin
           ((real_T)rtu_pose[2])) - (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2]))
         * 9.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 27.0F) * ((real32_T)cos((real_T)((rtu_sensor_f - rtu_pose
    [3]) - rtu_pose[2])) * 40.0F - (real32_T)sin((real_T)((rtu_sensor_f -
    rtu_pose[3]) - rtu_pose[2])) * 39.0F) + ((((real32_T)cos((real_T)
    (rtu_sensor_f - rtu_pose[2])) * 9.0F + (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 16.0F) + (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 39.0F) * ((real32_T)sin((real_T)((rtu_sensor_f - rtu_pose
    [3]) - rtu_pose[2])) * 67.0F)) * (real32_T)sin((real_T)(rtu_pose[4] -
    rtu_pose[2])) + ((((((37.0F * (real32_T)cos((real_T)rtu_pose[2]) + 86.0F *
    (real32_T)sin((real_T)rtu_pose[2])) - (real32_T)cos((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2]))
                        * 9.0F) - (real32_T)cos((real_T)((rtu_sensor_f -
    rtu_pose[3]) - rtu_pose[2])) * 40.0F) - (real32_T)cos((real_T)((rtu_sensor_f
    - rtu_pose[3]) - rtu_pose[2])) * 27.0F) * (((real32_T)cos((real_T)
    ((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F - (real32_T)sin
    ((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 39.0F) * (real32_T)
    cos((real_T)(rtu_pose[4] - rtu_pose[2]))) + ((((real32_T)cos((real_T)
    (rtu_sensor_f - rtu_pose[2])) * 9.0F + (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 16.0F) + (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 39.0F) * ((real32_T)cos((real_T)(rtu_pose[4] - rtu_pose[2]))
    * 67.0F * (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])))))
    * (real32_T)cos((real_T)(rtu_pose[0] + rtu_pose[1]))) * (real32_T)sin
    ((real_T)rtu_pose[0]) + (((real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2]))
    * 43.0F + 35.0F * (real32_T)cos((real_T)rtu_pose[2])) - (real32_T)sin
    ((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F) * ((real32_T)cos((real_T)
    ((rtu_sensor_f - rtu_pose[3]) - rtu_pose[4])) * (67.0F * (real32_T)sin
    ((real_T)rtu_pose[1])))) * ((real32_T)rtu_measurements_n * (real32_T)cos
    ((real_T)rtu_pose[0]) - rtu_pose[6] * (real32_T)sin((real_T)rtu_pose[0]))) /
    (((35.0F * (real32_T)sin((real_T)rtu_pose[2]) - (real32_T)sin((real_T)
    (rtu_sensor_f - rtu_pose[2])) * 43.0F) - (real32_T)cos((real_T)(rtu_sensor_f
    - rtu_pose[2])) * 16.0F) * ((real32_T)cos((real_T)((rtu_sensor_f - rtu_pose
    [3]) - rtu_pose[4])) * (67.0F * (real32_T)sin((real_T)rtu_pose[1]))) -
     (((((((37.0F * (real32_T)cos((real_T)rtu_pose[2]) + 86.0F * (real32_T)sin
            ((real_T)rtu_pose[2])) - (real32_T)cos((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2]))
          * 9.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 40.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 27.0F) * (real32_T)cos((real_T)(rtu_pose[4] - rtu_pose[2]))
       + (((((86.0F * (real32_T)cos((real_T)rtu_pose[2]) - 37.0F * (real32_T)sin
              ((real_T)rtu_pose[2])) - (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2]))
            * 9.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 27.0F) * (real32_T)sin((real_T)(rtu_pose[4] - rtu_pose[2])))
      * (((real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) *
          40.0F + (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 39.0F) * (real32_T)sin((real_T)(rtu_pose[0] + rtu_pose[1]))
         + ((real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) *
            40.0F - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 39.0F) * (real32_T)cos((real_T)(rtu_pose[0] + rtu_pose[1])))
      + (((((real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 9.0F +
            (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F) +
           (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) *
           40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 39.0F) * (real32_T)cos((real_T)(rtu_pose[0] + rtu_pose[1]))
         - ((((real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F -
              (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 9.0F) -
             (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2]))
             * 40.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 39.0F) * (real32_T)sin((real_T)(rtu_pose[0] + rtu_pose[1])))
      * ((real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[4])) *
         67.0F)) * (real32_T)cos((real_T)rtu_pose[0])) + ((real32_T)
    rtu_measurements_n * (real32_T)sin((real_T)rtu_pose[0]) + rtu_pose[6] *
    (real32_T)cos((real_T)rtu_pose[0]))) * (((((((((35.0F * (real32_T)sin
    ((real_T)rtu_pose[2]) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) *
    43.0F) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 9.0F) -
    (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F)
    - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) *
    39.0F) * (67.0F * (real32_T)cos((real_T)rtu_pose[0]) * (real32_T)sin((real_T)
    (rtu_pose[0] + rtu_pose[1])) * (real32_T)cos((real_T)((rtu_sensor_f -
    rtu_pose[3]) - rtu_pose[4]))) - ((35.0F * (real32_T)sin((real_T)rtu_pose[2])
    - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 43.0F) - (real32_T)
    cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F) * (67.0F * (real32_T)sin
    ((real_T)rtu_pose[0]) * (real32_T)cos((real_T)(rtu_pose[0] + rtu_pose[1])) *
    (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[4])))) -
    ((((((37.0F * (real32_T)cos((real_T)rtu_pose[2]) + 86.0F * (real32_T)sin
          ((real_T)rtu_pose[2])) - (real32_T)cos((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2]))
        * 9.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 40.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 27.0F) * (real32_T)cos((real_T)(rtu_pose[4] - rtu_pose[2]))
     + (((((86.0F * (real32_T)cos((real_T)rtu_pose[2]) - 37.0F * (real32_T)sin
            ((real_T)rtu_pose[2])) - (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2]))
          * 9.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 27.0F) * (real32_T)sin((real_T)(rtu_pose[4] - rtu_pose[2])))
    * (((real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) *
        40.0F + (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2]))
        * 39.0F) * ((real32_T)sin((real_T)(rtu_pose[0] + rtu_pose[1])) *
                    (real32_T)cos((real_T)rtu_pose[0])))) - (((((((86.0F *
    (real32_T)cos((real_T)rtu_pose[2]) - 37.0F * (real32_T)sin((real_T)rtu_pose
    [2])) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 43.0F) -
    (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 9.0F) - (real32_T)sin
    ((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F) - (real32_T)
    sin((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 27.0F) *
    ((real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F
     - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) *
     39.0F) + ((((real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 9.0F +
                 (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F) +
                (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2]))
                * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 39.0F) * ((real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 67.0F)) * (real32_T)sin((real_T)(rtu_pose[4] - rtu_pose[2]))
    + ((((((37.0F * (real32_T)cos((real_T)rtu_pose[2]) + 86.0F * (real32_T)sin
            ((real_T)rtu_pose[2])) - (real32_T)cos((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2]))
          * 9.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 40.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 27.0F) * (((real32_T)cos((real_T)((rtu_sensor_f -
    rtu_pose[3]) - rtu_pose[2])) * 40.0F - (real32_T)sin((real_T)((rtu_sensor_f
    - rtu_pose[3]) - rtu_pose[2])) * 39.0F) * (real32_T)cos((real_T)(rtu_pose[4]
    - rtu_pose[2]))) + ((((real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2])) *
    9.0F + (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F) +
    (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F)
                        - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 39.0F) * ((real32_T)cos((real_T)(rtu_pose[4] - rtu_pose[2]))
    * 67.0F * (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])))))
    * ((real32_T)cos((real_T)(rtu_pose[0] + rtu_pose[1])) * (real32_T)cos
       ((real_T)rtu_pose[0]))) * (localB->x_tmp * localB->x_tmp) / ((((35.0F *
    (real32_T)sin((real_T)rtu_pose[2]) - (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2]))
    * 16.0F) * ((real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[4]))
                * (67.0F * (real32_T)sin((real_T)rtu_pose[1]))) - (((((((37.0F *
    (real32_T)cos((real_T)rtu_pose[2]) + 86.0F * (real32_T)sin((real_T)rtu_pose
    [2])) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 43.0F) -
    (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 9.0F) - (real32_T)cos
    ((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F) - (real32_T)
    cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 27.0F) *
    (real32_T)cos((real_T)(rtu_pose[4] - rtu_pose[2])) + (((((86.0F * (real32_T)
    cos((real_T)rtu_pose[2]) - 37.0F * (real32_T)sin((real_T)rtu_pose[2])) -
    (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 43.0F) - (real32_T)sin
    ((real_T)(rtu_sensor_f - rtu_pose[2])) * 9.0F) - (real32_T)sin((real_T)
    ((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F) - (real32_T)sin
    ((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 27.0F) * (real32_T)
    sin((real_T)(rtu_pose[4] - rtu_pose[2]))) * (((real32_T)sin((real_T)
    ((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F + (real32_T)cos
    ((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 39.0F) * (real32_T)
    sin((real_T)(rtu_pose[0] + rtu_pose[1])) + ((real32_T)cos((real_T)
    ((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F - (real32_T)sin
    ((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 39.0F) * (real32_T)
    cos((real_T)(rtu_pose[0] + rtu_pose[1]))) + (((((real32_T)cos((real_T)
    (rtu_sensor_f - rtu_pose[2])) * 9.0F + (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 16.0F) + (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 39.0F) * (real32_T)cos((real_T)(rtu_pose[0] + rtu_pose[1]))
    - ((((real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F - (real32_T)
         sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 9.0F) - (real32_T)sin
        ((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F) -
       (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) *
       39.0F) * (real32_T)sin((real_T)(rtu_pose[0] + rtu_pose[1]))) * ((real32_T)
    cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[4])) * 67.0F)) *
    (real32_T)cos((real_T)rtu_pose[0])) * (real32_T)cos((real_T)rtu_pose[5])) +
    (real32_T)cos((real_T)rtu_pose[5])) * (localB->a_tmp_m * localB->a_tmp_m)) /
                        ((67.0F * (real32_T)sin((real_T)rtu_pose[0]) * (real32_T)
    sin((real_T)rtu_pose[1]) * (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[4])) * ((real32_T)rtu_measurements_n * (real32_T)cos((real_T)
    rtu_pose[0]) - rtu_pose[6] * (real32_T)sin((real_T)rtu_pose[0])) * ((35.0F *
    (real32_T)sin((real_T)rtu_pose[2]) - (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2]))
    * 16.0F) - ((((35.0F * (real32_T)sin((real_T)rtu_pose[2]) - (real32_T)sin
                   ((real_T)(rtu_sensor_f - rtu_pose[2])) * 43.0F) - (real32_T)
                  cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F) *
                 ((real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[4])) * (67.0F * (real32_T)sin((real_T)rtu_pose[1]))) - (((((((37.0F
    * (real32_T)cos((real_T)rtu_pose[2]) + 86.0F * (real32_T)sin((real_T)
    rtu_pose[2])) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 43.0F)
    - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 9.0F) - (real32_T)
    cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F) -
    (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 27.0F)
    * (real32_T)cos((real_T)(rtu_pose[4] - rtu_pose[2])) + (((((86.0F *
    (real32_T)cos((real_T)rtu_pose[2]) - 37.0F * (real32_T)sin((real_T)rtu_pose
    [2])) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 43.0F) -
    (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 9.0F) - (real32_T)sin
    ((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F) - (real32_T)
    sin((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 27.0F) *
    (real32_T)sin((real_T)(rtu_pose[4] - rtu_pose[2]))) * (((real32_T)sin
    ((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F + (real32_T)
    cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 39.0F) *
    (real32_T)sin((real_T)(rtu_pose[0] + rtu_pose[1])) + ((real32_T)cos((real_T)
    ((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F - (real32_T)sin
    ((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 39.0F) * (real32_T)
    cos((real_T)(rtu_pose[0] + rtu_pose[1]))) + (((((real32_T)cos((real_T)
    (rtu_sensor_f - rtu_pose[2])) * 9.0F + (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 16.0F) + (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 39.0F) * (real32_T)cos((real_T)(rtu_pose[0] + rtu_pose[1]))
    - ((((real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2])) * 16.0F - (real32_T)
         sin((real_T)(rtu_sensor_f - rtu_pose[2])) * 9.0F) - (real32_T)sin
        ((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F) -
       (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) *
       39.0F) * (real32_T)sin((real_T)(rtu_pose[0] + rtu_pose[1]))) * ((real32_T)
    cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[4])) * 67.0F)) *
                 (real32_T)cos((real_T)rtu_pose[0])) * ((real32_T)
    rtu_measurements_n * (real32_T)sin((real_T)rtu_pose[0]) + rtu_pose[6] *
    (real32_T)cos((real_T)rtu_pose[0])) - ((((((real32_T)cos((real_T)
    (rtu_sensor_f - rtu_pose[2])) * 16.0F - (real32_T)sin((real_T)(rtu_sensor_f
    - rtu_pose[2])) * 9.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 40.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 39.0F) * ((real32_T)sin((real_T)(rtu_pose[0] + rtu_pose[1]))
    * 67.0F * (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[4])))
    - ((((((37.0F * (real32_T)cos((real_T)rtu_pose[2]) + 86.0F * (real32_T)sin
            ((real_T)rtu_pose[2])) - (real32_T)cos((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2]))
          * 9.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 40.0F) - (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 27.0F) * (real32_T)cos((real_T)(rtu_pose[4] - rtu_pose[2]))
       + (((((86.0F * (real32_T)cos((real_T)rtu_pose[2]) - 37.0F * (real32_T)sin
              ((real_T)rtu_pose[2])) - (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2]))
            * 9.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 27.0F) * (real32_T)sin((real_T)(rtu_pose[4] - rtu_pose[2])))
    * (((real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) *
        40.0F + (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2]))
        * 39.0F) * (real32_T)sin((real_T)(rtu_pose[0] + rtu_pose[1])))) -
    (((((((86.0F * (real32_T)cos((real_T)rtu_pose[2]) - 37.0F * (real32_T)sin
           ((real_T)rtu_pose[2])) - (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)sin((real_T)(rtu_sensor_f - rtu_pose[2]))
         * 9.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3]) -
    rtu_pose[2])) * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 27.0F) * ((real32_T)cos((real_T)((rtu_sensor_f - rtu_pose
    [3]) - rtu_pose[2])) * 40.0F - (real32_T)sin((real_T)((rtu_sensor_f -
    rtu_pose[3]) - rtu_pose[2])) * 39.0F) + ((((real32_T)cos((real_T)
    (rtu_sensor_f - rtu_pose[2])) * 9.0F + (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 16.0F) + (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 39.0F) * ((real32_T)sin((real_T)((rtu_sensor_f - rtu_pose
    [3]) - rtu_pose[2])) * 67.0F)) * (real32_T)sin((real_T)(rtu_pose[4] -
    rtu_pose[2])) + ((((((37.0F * (real32_T)cos((real_T)rtu_pose[2]) + 86.0F *
    (real32_T)sin((real_T)rtu_pose[2])) - (real32_T)cos((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 43.0F) - (real32_T)cos((real_T)(rtu_sensor_f - rtu_pose[2]))
                        * 9.0F) - (real32_T)cos((real_T)((rtu_sensor_f -
    rtu_pose[3]) - rtu_pose[2])) * 40.0F) - (real32_T)cos((real_T)((rtu_sensor_f
    - rtu_pose[3]) - rtu_pose[2])) * 27.0F) * (((real32_T)cos((real_T)
    ((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 40.0F - (real32_T)sin
    ((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])) * 39.0F) * (real32_T)
    cos((real_T)(rtu_pose[4] - rtu_pose[2]))) + ((((real32_T)cos((real_T)
    (rtu_sensor_f - rtu_pose[2])) * 9.0F + (real32_T)sin((real_T)(rtu_sensor_f -
    rtu_pose[2])) * 16.0F) + (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 40.0F) - (real32_T)sin((real_T)((rtu_sensor_f - rtu_pose[3])
    - rtu_pose[2])) * 39.0F) * ((real32_T)cos((real_T)(rtu_pose[4] - rtu_pose[2]))
    * 67.0F * (real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[2])))))
    * (real32_T)cos((real_T)(rtu_pose[0] + rtu_pose[1]))) * (((real32_T)
    rtu_measurements_n * (real32_T)cos((real_T)rtu_pose[0]) - rtu_pose[6] *
    (real32_T)sin((real_T)rtu_pose[0])) * (real32_T)sin((real_T)rtu_pose[0]))) *
    (real32_T)cos((real_T)rtu_pose[0])) * ((((real32_T)sin((real_T)(rtu_sensor_f
    - rtu_pose[2])) * 18.0F + 35.0F * (real32_T)sin((real_T)rtu_pose[2])) -
    (35.0F * (real32_T)cos((real_T)rtu_pose[2]) - (real32_T)cos((real_T)
    (rtu_sensor_f - rtu_pose[2])) * 18.0F) * (real32_T)tan((real_T)rtu_pose[5]))
    * ((real32_T)cos((real_T)((rtu_sensor_f - rtu_pose[3]) - rtu_pose[4])) *
       (67.0F * rtu_pose[7])))));
  localB->JTcomp[3] = localB->J22_c;

  /* SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport2' */
  localB->q_next[0] = rtu_sensor;
  localB->q_next[1] = rtu_sensor_f;
}

/*
 * Output and update for atomic system:
 *    '<S14>/MATLAB Function'
 *    '<S16>/MATLAB Function'
 */
void proxy_MATLABFunction(const real32_T rtu_Jcomponents[4], real_T rtu_j_f1,
  real_T rtu_j_f2, B_MATLABFunction_proxy_T *localB)
{
  localB->y[0] = 0.0F;
  localB->y[0] += rtu_Jcomponents[0] * (real32_T)rtu_j_f1;
  localB->y[0] += rtu_Jcomponents[2] * (real32_T)rtu_j_f2;
  localB->y[1] = 0.0F;
  localB->y[1] += rtu_Jcomponents[1] * (real32_T)rtu_j_f1;
  localB->y[1] += rtu_Jcomponents[3] * (real32_T)rtu_j_f2;
}

/*
 * Output and update for atomic system:
 *    '<S14>/MATLAB Function2'
 *    '<S16>/MATLAB Function2'
 */
void proxy_MATLABFunction2(const real32_T rtu_cons[2], real32_T rtu_sens,
  real32_T rtu_sens_f, real32_T rtu_enab, B_MATLABFunction2_proxy_T *localB)
{
  if (rtu_enab == 0.0F) {
    localB->y[0] = rtu_cons[0];
    localB->y[1] = rtu_cons[1];
  } else {
    /* SignalConversion: '<S27>/TmpSignal ConversionAt SFunction Inport2' */
    localB->y[0] = rtu_sens;
    localB->y[1] = rtu_sens_f;
  }
}

/*
 * Output and update for atomic system:
 *    '<S14>/MATLAB Function3'
 *    '<S16>/MATLAB Function3'
 */
void proxy_MATLABFunction3(const real32_T rtu_u[2], const real32_T
  rtu_measurements[2], B_MATLABFunction3_proxy_T *localB)
{
  real32_T atemp;
  real32_T LAK;
  real32_T qN;
  real32_T xK1;
  real32_T xH;
  real32_T yH;
  real32_T xC;
  real32_T xD;
  real32_T yD;
  real32_T yI;
  real32_T LLI;
  real32_T xD1;
  real32_T yH_tmp;
  real32_T LAK_tmp;
  real32_T atemp_tmp;
  real32_T xD_tmp;
  atemp = 1549.0F - 1260.0F * (real32_T)cos((real_T)rtu_u[1]);
  if (atemp < 0.0F) {
    printf("errore LAK \n");
    fflush(stdout);
    atemp = 1.0F;
  }

  LAK = (real32_T)sqrt((real_T)atemp);
  xD_tmp = LAK * LAK;
  xH = (rtu_u[0] + 117.77F) * (rtu_u[0] + 117.77F);
  qN = ((xH + -xD_tmp) + 18396.0391F) / ((rtu_u[0] + 117.77F) * 2.0F * 135.632F);
  if ((real32_T)fabs((real_T)qN) > 1.0F) {
    printf("errore qN");
    fflush(stdout);
    qN = 0.0F;
  } else {
    qN = (real32_T)fabs((real_T)(real32_T)acos((real_T)qN)) - 0.1108F;
  }

  xK1 = ((xD_tmp + -324.0F) + 1225.0F) / (2.0F * LAK * 35.0F);
  LAK = ((-xH + xD_tmp) + 18396.0391F) / (2.0F * LAK * 135.632F);
  if ((real32_T)fabs((real_T)xK1) > 1.0F) {
    printf("errore qK1 \n");
    fflush(stdout);
    xK1 = 0.0F;
  } else {
    xD_tmp = (real32_T)acos((real_T)xK1);
    if (xD_tmp >= 0.0F) {
      xK1 = (real32_T)fabs((real_T)(real32_T)acos((real_T)xK1));
    } else {
      xK1 = (real32_T)fabs((real_T)xD_tmp) + 1.57079637F;
    }
  }

  if ((real32_T)fabs((real_T)LAK) > 1.0F) {
    printf("errore gK2 \n");
    fflush(stdout);
    LAK = 0.0F;
  } else {
    xD_tmp = (real32_T)acos((real_T)LAK);
    if (xD_tmp >= 0.0F) {
      LAK = (real32_T)fabs((real_T)(real32_T)acos((real_T)LAK));
    } else {
      LAK = (real32_T)fabs((real_T)xD_tmp) + 1.57079637F;
    }
  }

  xK1 = 3.14159274F - ((xK1 + LAK) + 0.1108F);
  xD1 = (real32_T)cos((real_T)xK1);
  xH = -72.0F * xD1;
  yH_tmp = (real32_T)sin((real_T)xK1);
  yH = 72.0F * yH_tmp;
  LAK = rtu_u[1] - xK1;
  LLI = (real32_T)cos((real_T)LAK);
  xC = -35.0F * xD1 - LLI * 43.0F;
  LAK_tmp = (real32_T)sin((real_T)LAK);
  LAK = 35.0F * yH_tmp - LAK_tmp * 43.0F;
  xD = xC - LLI * 9.0F;
  yD = LAK - LAK_tmp * 9.0F;
  xC += LAK_tmp * 16.0F;
  yI = LAK - LLI * 16.0F;
  LAK = yI - (-(rtu_measurements[0] + 3.0F));
  LLI = (real32_T)sqrt((real_T)((xC - -10.0F) * (xC - -10.0F) + LAK * LAK));
  LAK_tmp = rtu_measurements[0] * rtu_measurements[0];
  atemp_tmp = LLI * LLI;
  atemp = atemp_tmp - LAK_tmp;
  if (atemp < 0.0F) {
    printf("errore c1 \n");
    fflush(stdout);
    atemp = 0.0F;
  }

  LAK = (real32_T)sqrt((real_T)atemp);
  LLI = ((-LAK_tmp + atemp_tmp) + LAK * LAK) / (2.0F * LAK * LLI);
  if ((real32_T)fabs((real_T)LLI) > 1.0F) {
    printf("errore qj1 \n");
    fflush(stdout);
    LLI = 0.0F;
  } else {
    xD_tmp = (real32_T)acos((real_T)LLI);
    if (xD_tmp >= 0.0F) {
      LLI = (real32_T)fabs((real_T)(real32_T)acos((real_T)LLI));
    } else {
      LLI = (real32_T)fabs((real_T)xD_tmp) + 1.57079637F;
    }
  }

  xC = (real32_T)atan((real_T)((-(rtu_measurements[0] + 3.0F) - yI) / (-10.0F -
    xC))) + LLI;
  if (xC <= 0.0F) {
    xC = (real32_T)fabs((real_T)xC);
  }

  yI = xH - xD;
  LLI = yH - yD;
  yI = (real32_T)sqrt((real_T)(yI * yI + LLI * LLI));
  xH = (xH - 86.0F * yH_tmp) - xD;
  yH = (yH - 86.0F * xD1) - yD;
  atemp = (real32_T)sqrt((real_T)(xH * xH + yH * yH));
  yH_tmp = atemp * atemp;
  atemp_tmp = yI * yI;
  yH = ((-atemp_tmp + yH_tmp) + 7396.0F) / (2.0F * atemp * 86.0F);
  xH = ((yH_tmp + -4489.0F) + 2116.0F) / (2.0F * atemp * 46.0F);
  if ((real32_T)fabs((real_T)yH) > 1.0F) {
    printf("errore qG1 \n");
    fflush(stdout);
    yH = 0.0F;
  } else {
    xD_tmp = (real32_T)acos((real_T)yH);
    if (xD_tmp >= 0.0F) {
      yH = (real32_T)fabs((real_T)(real32_T)acos((real_T)yH));
    } else {
      yH = (real32_T)fabs((real_T)xD_tmp) + 1.57079637F;
    }
  }

  if ((real32_T)fabs((real_T)xH) > 1.0F) {
    printf("errore qG2 \n");
    fflush(stdout);
    xH = 0.0F;
  } else {
    xD_tmp = (real32_T)acos((real_T)xH);
    if (xD_tmp >= 0.0F) {
      xH = (real32_T)fabs((real_T)(real32_T)acos((real_T)xH));
    } else {
      xH = (real32_T)fabs((real_T)xD_tmp) + 1.57079637F;
    }
  }

  LLI = -(rtu_measurements[0] + 3.0F) - rtu_measurements[1] * (real32_T)sin
    ((real_T)xC);
  xD1 = ((atemp_tmp + -7396.0F) + yH_tmp) / (2.0F * yI * atemp);
  atemp = ((yH_tmp + -2116.0F) + 4489.0F) / (2.0F * atemp * 67.0F);
  yI = ((atemp_tmp + -1369.0F) + 2704.0F) / (2.0F * yI * 52.0F);
  if ((real32_T)fabs((real_T)xD1) > 1.0F) {
    printf("errore qD1");
    fflush(stdout);
    xD1 = 0.0F;
  } else {
    xD_tmp = (real32_T)acos((real_T)xD1);
    if (xD_tmp >= 0.0F) {
      xD1 = (real32_T)fabs((real_T)(real32_T)acos((real_T)xD1));
    } else {
      xD1 = (real32_T)fabs((real_T)xD_tmp) + 1.57079637F;
    }
  }

  if ((real32_T)fabs((real_T)atemp) > 1.0F) {
    printf("errore qD2 \n");
    fflush(stdout);
    atemp = 0.0F;
  } else {
    xD_tmp = (real32_T)acos((real_T)atemp);
    if (xD_tmp >= 0.0F) {
      atemp = (real32_T)fabs((real_T)(real32_T)acos((real_T)atemp));
    } else {
      atemp = (real32_T)fabs((real_T)xD_tmp) + 1.57079637F;
    }
  }

  if ((real32_T)fabs((real_T)yI) > 1.0F) {
    printf("errore qD3 \n");
    fflush(stdout);
    yI = 0.0F;
  } else {
    xD_tmp = (real32_T)acos((real_T)yI);
    if (xD_tmp >= 0.0F) {
      yI = (real32_T)fabs((real_T)(real32_T)acos((real_T)yI));
    } else {
      yI = (real32_T)fabs((real_T)xD_tmp) + 1.57079637F;
    }
  }

  yI = 3.14159274F - ((xD1 + atemp) + yI);
  xD_tmp = (rtu_u[1] - yI) - xK1;
  yH_tmp = (real32_T)sin((real_T)xD_tmp);
  xD_tmp = (real32_T)cos((real_T)xD_tmp);
  xD = (xD - xD_tmp * 40.0F) + yH_tmp * 39.0F;
  yD = (yD - yH_tmp * 40.0F) - xD_tmp * 39.0F;
  atemp_tmp = xD - (-10.0F - rtu_measurements[1] * (real32_T)cos((real_T)xC));
  xD = yD - LLI;
  xD1 = (real32_T)sqrt((real_T)(atemp_tmp * atemp_tmp + xD * xD));
  xD_tmp = xD1 * xD1;
  atemp = xD_tmp - LAK_tmp;
  if (atemp < 0.0F) {
    printf("errore c2");
    fflush(stdout);
    atemp = 0.0F;
  } else {
    atemp = (real32_T)sqrt((real_T)atemp);
  }

  xD1 = ((-(rtu_measurements[0] * rtu_measurements[0]) + xD_tmp) + atemp * atemp)
    / (2.0F * atemp * xD1);
  if ((real32_T)fabs((real_T)xD1) > 1.0F) {
    printf("errore qj2 \n");
    fflush(stdout);
    xD1 = 0.0F;
  } else {
    xD_tmp = (real32_T)acos((real_T)xD1);
    if (xD_tmp >= 0.0F) {
      xD1 = (real32_T)fabs((real_T)(real32_T)acos((real_T)xD1));
    } else {
      xD1 = (real32_T)fabs((real_T)xD_tmp) + 1.57079637F;
    }
  }

  if (atemp_tmp <= 0.0F) {
    yD = (real32_T)atan((real_T)((yD - LLI) / atemp_tmp));
  } else {
    yD = (real32_T)atan((real_T)(xD / atemp_tmp)) + 3.14159274F;
  }

  yD = (xD1 + yD) - xC;
  localB->y[0] = xC;
  if (yD <= -1.5707963267948966) {
    localB->y[1] = 6.28318548F + yD;
  } else {
    localB->y[1] = yD;
  }

  localB->y[2] = xK1;
  localB->y[3] = yI;
  localB->y[4] = 3.14159274F - (yH + xH);
  localB->y[5] = qN;
  localB->y[6] = LAK;
  localB->y[7] = atemp;
}

/* Model step function */
void proxy_step(void)
{
  char_T *sErr;
  static const char_T b[24] = { 'r', 'i', 'g', 'h', 't', '_', 'h', 'a', 'n', 'd',
    '_', 'T', 'h', 'u', 'm', 'b', '_', 'F', 'l', 'e', 'x', 'i', 'o', 'n' };

  static const char_T c[27] = { 'r', 'i', 'g', 'h', 't', '_', 'h', 'a', 'n', 'd',
    '_', 'T', 'h', 'u', 'm', 'b', '_', 'O', 'p', 'p', 'o', 's', 'i', 't', 'i',
    'o', 'n' };

  static const char_T d[30] = { 'r', 'i', 'g', 'h', 't', '_', 'h', 'a', 'n', 'd',
    '_', 'I', 'n', 'd', 'e', 'x', '_', 'F', 'i', 'n', 'g', 'e', 'r', '_', 'D',
    'i', 's', 't', 'a', 'l' };

  static const char_T e[32] = { 'r', 'i', 'g', 'h', 't', '_', 'h', 'a', 'n', 'd',
    '_', 'I', 'n', 'd', 'e', 'x', '_', 'F', 'i', 'n', 'g', 'e', 'r', '_', 'P',
    'r', 'o', 'x', 'i', 'm', 'a', 'l' };

  static const char_T f[31] = { 'r', 'i', 'g', 'h', 't', '_', 'h', 'a', 'n', 'd',
    '_', 'M', 'i', 'd', 'd', 'l', 'e', '_', 'F', 'i', 'n', 'g', 'e', 'r', '_',
    'D', 'i', 's', 't', 'a', 'l' };

  static const char_T g[33] = { 'r', 'i', 'g', 'h', 't', '_', 'h', 'a', 'n', 'd',
    '_', 'M', 'i', 'd', 'd', 'l', 'e', '_', 'F', 'i', 'n', 'g', 'e', 'r', '_',
    'P', 'r', 'o', 'x', 'i', 'm', 'a', 'l' };

  static const char_T h[22] = { 'r', 'i', 'g', 'h', 't', '_', 'h', 'a', 'n', 'd',
    '_', 'R', 'i', 'n', 'g', '_', 'F', 'i', 'n', 'g', 'e', 'r' };

  static const char_T i[16] = { 'r', 'i', 'g', 'h', 't', '_', 'h', 'a', 'n', 'd',
    '_', 'P', 'i', 'n', 'k', 'y' };

  static const char_T j[24] = { 'r', 'i', 'g', 'h', 't', '_', 'h', 'a', 'n', 'd',
    '_', 'F', 'i', 'n', 'g', 'e', 'r', '_', 'S', 'p', 'r', 'e', 'a', 'd' };

  /* Outputs for Atomic SubSystem: '<S1>/Subscribe1' */
  /* Start for MATLABSystem: '<S9>/SourceBlock' incorporates:
   *  Inport: '<S10>/In1'
   */
  proxy_B.Automatic = Sub_proxy_994.getLatestMessage(&proxy_B.b_varargout_2_c);

  /* Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S10>/Enable'
   */
  if (proxy_B.Automatic) {
    proxy_B.In1_n = proxy_B.b_varargout_2_c;
  }

  /* End of Start for MATLABSystem: '<S9>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S9>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<S1>/Subscribe1' */

  /* SignalConversion: '<S1>/SigConversion_InsertedFor_Bus Selector_at_outport_0' */
  proxy_B.Data = proxy_B.In1_n.Data;

  /* Outputs for Atomic SubSystem: '<S3>/Subscribe' */
  /* Start for MATLABSystem: '<S11>/SourceBlock' incorporates:
   *  Inport: '<S12>/In1'
   */
  proxy_B.Automatic = Sub_proxy_437.getLatestMessage(&proxy_B.b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S12>/Enable'
   */
  if (proxy_B.Automatic) {
    proxy_B.In1 = proxy_B.b_varargout_2;
  }

  /* End of Start for MATLABSystem: '<S11>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<S3>/Subscribe' */

  /* DeadZone: '<S3>/Dead Zone' incorporates:
   *  SignalConversion: '<S3>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  if (proxy_B.In1.Data[0] > proxy_P.DeadZone_End) {
    proxy_B.DeadZone = proxy_B.In1.Data[0] - proxy_P.DeadZone_End;
  } else if (proxy_B.In1.Data[0] >= proxy_P.DeadZone_Start) {
    proxy_B.DeadZone = 0.0;
  } else {
    proxy_B.DeadZone = proxy_B.In1.Data[0] - proxy_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S3>/Dead Zone' */

  /* DeadZone: '<S3>/Dead Zone2' incorporates:
   *  SignalConversion: '<S3>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  if (proxy_B.In1.Data[2] > proxy_P.DeadZone2_End) {
    proxy_B.DeadZone2 = proxy_B.In1.Data[2] - proxy_P.DeadZone2_End;
  } else if (proxy_B.In1.Data[2] >= proxy_P.DeadZone2_Start) {
    proxy_B.DeadZone2 = 0.0;
  } else {
    proxy_B.DeadZone2 = proxy_B.In1.Data[2] - proxy_P.DeadZone2_Start;
  }

  /* End of DeadZone: '<S3>/Dead Zone2' */

  /* DeadZone: '<S3>/Dead Zone3' incorporates:
   *  SignalConversion: '<S3>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  if (proxy_B.In1.Data[3] > proxy_P.DeadZone3_End) {
    proxy_B.DeadZone3 = proxy_B.In1.Data[3] - proxy_P.DeadZone3_End;
  } else if (proxy_B.In1.Data[3] >= proxy_P.DeadZone3_Start) {
    proxy_B.DeadZone3 = 0.0;
  } else {
    proxy_B.DeadZone3 = proxy_B.In1.Data[3] - proxy_P.DeadZone3_Start;
  }

  /* End of DeadZone: '<S3>/Dead Zone3' */

  /* DeadZone: '<S3>/Dead Zone4' incorporates:
   *  SignalConversion: '<S3>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  if (proxy_B.In1.Data[4] > proxy_P.DeadZone4_End) {
    proxy_B.DeadZone4 = proxy_B.In1.Data[4] - proxy_P.DeadZone4_End;
  } else if (proxy_B.In1.Data[4] >= proxy_P.DeadZone4_Start) {
    proxy_B.DeadZone4 = 0.0;
  } else {
    proxy_B.DeadZone4 = proxy_B.In1.Data[4] - proxy_P.DeadZone4_Start;
  }

  /* End of DeadZone: '<S3>/Dead Zone4' */

  /* DeadZone: '<S3>/Dead Zone5' incorporates:
   *  SignalConversion: '<S3>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  if (proxy_B.In1.Data[5] > proxy_P.DeadZone5_End) {
    proxy_B.DeadZone5 = proxy_B.In1.Data[5] - proxy_P.DeadZone5_End;
  } else if (proxy_B.In1.Data[5] >= proxy_P.DeadZone5_Start) {
    proxy_B.DeadZone5 = 0.0;
  } else {
    proxy_B.DeadZone5 = proxy_B.In1.Data[5] - proxy_P.DeadZone5_Start;
  }

  /* End of DeadZone: '<S3>/Dead Zone5' */

  /* DeadZone: '<S3>/Dead Zone6' incorporates:
   *  SignalConversion: '<S3>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  if (proxy_B.In1.Data[6] > proxy_P.DeadZone6_End) {
    proxy_B.DeadZone6 = proxy_B.In1.Data[6] - proxy_P.DeadZone6_End;
  } else if (proxy_B.In1.Data[6] >= proxy_P.DeadZone6_Start) {
    proxy_B.DeadZone6 = 0.0;
  } else {
    proxy_B.DeadZone6 = proxy_B.In1.Data[6] - proxy_P.DeadZone6_Start;
  }

  /* End of DeadZone: '<S3>/Dead Zone6' */

  /* DeadZone: '<S3>/Dead Zone7' incorporates:
   *  SignalConversion: '<S3>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  if (proxy_B.In1.Data[7] > proxy_P.DeadZone7_End) {
    proxy_B.DeadZone7 = proxy_B.In1.Data[7] - proxy_P.DeadZone7_End;
  } else if (proxy_B.In1.Data[7] >= proxy_P.DeadZone7_Start) {
    proxy_B.DeadZone7 = 0.0;
  } else {
    proxy_B.DeadZone7 = proxy_B.In1.Data[7] - proxy_P.DeadZone7_Start;
  }

  /* End of DeadZone: '<S3>/Dead Zone7' */

  /* DiscreteTransferFcn: '<S3>/Filt 1' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Gain1 = proxy_P.Filt1_NumCoef[1] * proxy_DW.Filt1_states;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S3>/Filt 1' */

  /* DiscreteTransferFcn: '<S3>/Filt 2' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Filt2 = proxy_P.Filt2_NumCoef[1] * proxy_DW.Filt2_states;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S3>/Filt 2' */

  /* DiscreteTransferFcn: '<S3>/Filt 3' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Gain6 = proxy_P.Filt3_NumCoef[1] * proxy_DW.Filt3_states;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S3>/Filt 3' */

  /* DiscreteTransferFcn: '<S3>/Filt 4' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Gain2 = proxy_P.Filt4_NumCoef[1] * proxy_DW.Filt4_states;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S3>/Filt 4' */

  /* DiscreteTransferFcn: '<S3>/Filt 5' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Gain7 = proxy_P.Filt5_NumCoef[1] * proxy_DW.Filt5_states;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S3>/Filt 5' */

  /* DiscreteTransferFcn: '<S3>/Filt 6' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Gain3 = proxy_P.Filt6_NumCoef[1] * proxy_DW.Filt6_states;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S3>/Filt 6' */

  /* DiscreteTransferFcn: '<S3>/Filt 8' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Saturation1_j = proxy_P.Filt8_NumCoef[1] * proxy_DW.Filt8_states;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S3>/Filt 8' */

  /* Gain: '<S3>/Gain1' */
  proxy_B.Gain1 *= proxy_P.Gain1_Gain;

  /* Gain: '<S3>/Gain2' */
  proxy_B.Gain2 *= proxy_P.Gain2_Gain;

  /* Gain: '<S3>/Gain3' */
  proxy_B.Gain3 *= proxy_P.Gain3_Gain;

  /* Gain: '<S3>/Gain5' */
  proxy_B.Gain5 = proxy_P.Gain5_Gain * proxy_B.Saturation1_j;

  /* Gain: '<S3>/Gain6' */
  proxy_B.Gain6 *= proxy_P.Gain6_Gain;

  /* Gain: '<S3>/Gain7' */
  proxy_B.Gain7 *= proxy_P.Gain7_Gain;

  /* S-Function (sdspFromNetwork): '<S5>/Receive from Haptics' */
  sErr = GetErrorBuffer(&proxy_DW.ReceivefromHaptics_NetworkLib[0U]);
  proxy_B.k = 68;
  LibOutputs_Network(&proxy_DW.ReceivefromHaptics_NetworkLib[0U],
                     &proxy_B.ReceivefromHaptics_o1[0U], &proxy_B.k);
  if (*sErr != 0) {
    rtmSetErrorStatus(proxy_M, sErr);
    rtmSetStopRequested(proxy_M, 1);
  }

  proxy_B.ReceivefromHaptics_o2 = (uint16_T)proxy_B.k;

  /* End of S-Function (sdspFromNetwork): '<S5>/Receive from Haptics' */

  /* S-Function (xpcbytepacking): '<S5>/Byte Unpacking ' */

  /* Byte Unpacking: <S5>/Byte Unpacking  */
  (void)memcpy((uint8_T*)&proxy_B.ByteUnpacking[0], (uint8_T*)
               &proxy_B.ReceivefromHaptics_o1[0] + 0, 68);

  /* Outputs for Enabled SubSystem: '<S21>/Subsystem' */
  proxy_Subsystem(proxy_B.Data, &proxy_B.Subsystem, &proxy_DW.Subsystem);

  /* End of Outputs for SubSystem: '<S21>/Subsystem' */

  /* Switch: '<S21>/Switch' incorporates:
   *  Constant: '<S21>/Constant1'
   */
  if (proxy_B.Data) {
    proxy_B.Saturation2_h = proxy_P.Constant1_Value;
  } else {
    proxy_B.Saturation2_h = proxy_B.Subsystem.Memory;
  }

  /* End of Switch: '<S21>/Switch' */

  /* Sum: '<S21>/Sum' incorporates:
   *  Gain: '<S21>/Gain  Aggiustato'
   */
  proxy_B.Sum = proxy_P.GainAggiustato_Gain * proxy_B.ByteUnpacking[8] -
    proxy_B.Saturation2_h;

  /* DataTypeConversion: '<S23>/Conversion' incorporates:
   *  UnitDelay: '<S14>/Unit Delay3'
   */
  proxy_B.Conversion_a[0] = proxy_DW.UnitDelay3_DSTATE[0];
  proxy_B.Conversion_a[1] = proxy_DW.UnitDelay3_DSTATE[1];

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Constant: '<S24>/finger width'
   *  Constant: '<S24>/proximal length'
   */
  proxy_B.DataTypeConversion[0] = (real32_T)proxy_P.fingerwidth_Value;
  proxy_B.DataTypeConversion[1] = (real32_T)proxy_P.proximallength_Value;

  /* Saturate: '<S14>/Saturation3' */
  if (proxy_B.Sum > proxy_P.Saturation3_UpperSat) {
    proxy_B.Saturation3 = proxy_P.Saturation3_UpperSat;
  } else if (proxy_B.Sum < proxy_P.Saturation3_LowerSat) {
    proxy_B.Saturation3 = proxy_P.Saturation3_LowerSat;
  } else {
    proxy_B.Saturation3 = proxy_B.Sum;
  }

  /* End of Saturate: '<S14>/Saturation3' */

  /* Outputs for Enabled SubSystem: '<S29>/Subsystem' */
  proxy_Subsystem(proxy_B.Data, &proxy_B.Subsystem_l, &proxy_DW.Subsystem_l);

  /* End of Outputs for SubSystem: '<S29>/Subsystem' */

  /* Switch: '<S29>/Switch' incorporates:
   *  Constant: '<S29>/Constant1'
   */
  if (proxy_B.Data) {
    proxy_B.Saturation2_h = proxy_P.Constant1_Value_n;
  } else {
    proxy_B.Saturation2_h = proxy_B.Subsystem_l.Memory;
  }

  /* End of Switch: '<S29>/Switch' */

  /* Sum: '<S29>/Sum1' incorporates:
   *  Constant: '<S29>/Constant'
   *  Gain: '<S29>/Gain Aggiustato'
   *  Sum: '<S29>/Sum'
   */
  proxy_B.ManualSwitch_h = (proxy_P.Constant_Value_p - proxy_B.Saturation2_h) -
    proxy_P.GainAggiustato_Gain_b * proxy_B.ByteUnpacking[15];

  /* Saturate: '<S14>/Saturation2' */
  if (proxy_B.ManualSwitch_h > proxy_P.Saturation2_UpperSat) {
    proxy_B.Saturation2 = proxy_P.Saturation2_UpperSat;
  } else if (proxy_B.ManualSwitch_h < proxy_P.Saturation2_LowerSat) {
    proxy_B.Saturation2 = proxy_P.Saturation2_LowerSat;
  } else {
    proxy_B.Saturation2 = proxy_B.ManualSwitch_h;
  }

  /* End of Saturate: '<S14>/Saturation2' */

  /* ManualSwitch: '<S14>/Manual Switch5' incorporates:
   *  Constant: '<S14>/Constant4'
   *  Constant: '<S14>/Constant5'
   */
  if (proxy_P.ManualSwitch5_CurrentSetting == 1) {
    proxy_B.Saturation2_h = proxy_P.Constant4_Value;
  } else {
    proxy_B.Saturation2_h = proxy_P.Constant5_Value;
  }

  /* End of ManualSwitch: '<S14>/Manual Switch5' */

  /* MATLAB Function: '<S14>/MATLAB Function2' incorporates:
   *  Constant: '<S14>/Constant1'
   */
  proxy_MATLABFunction2(proxy_P.Constant1_Value_c, proxy_B.Saturation3,
                        proxy_B.Saturation2, proxy_B.Saturation2_h,
                        &proxy_B.sf_MATLABFunction2);

  /* MATLAB Function: '<S14>/MATLAB Function3' */
  proxy_MATLABFunction3(proxy_B.sf_MATLABFunction2.y, proxy_B.DataTypeConversion,
                        &proxy_B.sf_MATLABFunction3);

  /* MATLAB Function: '<S14>/Jacobian2' incorporates:
   *  Constant: '<S24>/finger width'
   *  Constant: '<S24>/proximal length'
   *  DataTypeConversion: '<S22>/Conversion'
   *  UnitDelay: '<S14>/Unit Delay1'
   */
  proxy_Jacobian2(proxy_B.sf_MATLABFunction3.y, proxy_B.Saturation3,
                  proxy_B.Saturation2, proxy_P.fingerwidth_Value,
                  proxy_P.proximallength_Value, proxy_B.Conversion_a, (real_T)
                  proxy_DW.UnitDelay1_DSTATE, &proxy_B.sf_Jacobian2);

  /* MATLAB Function: '<S14>/MATLAB Function' incorporates:
   *  Gain: '<S14>/Gain'
   *  Gain: '<S14>/Gain1'
   */
  proxy_MATLABFunction(proxy_B.sf_Jacobian2.JTcomp, proxy_P.Gain_Gain_a *
                       proxy_B.Gain3, proxy_P.Gain1_Gain_i * proxy_B.Gain7,
                       &proxy_B.sf_MATLABFunction_d);

  /* Sum: '<S29>/Sum2' incorporates:
   *  Constant: '<S29>/Constant2'
   */
  proxy_B.Sum2 = proxy_B.ManualSwitch_h - proxy_P.Constant2_Value;

  /* Outputs for Enabled SubSystem: '<S50>/Subsystem' */
  proxy_Subsystem(proxy_B.Data, &proxy_B.Subsystem_a, &proxy_DW.Subsystem_a);

  /* End of Outputs for SubSystem: '<S50>/Subsystem' */

  /* Switch: '<S50>/Switch' incorporates:
   *  Constant: '<S50>/Constant1'
   */
  if (proxy_B.Data) {
    proxy_B.Saturation2_h = proxy_P.Constant1_Value_nn;
  } else {
    proxy_B.Saturation2_h = proxy_B.Subsystem_a.Memory;
  }

  /* End of Switch: '<S50>/Switch' */

  /* Sum: '<S50>/Sum' incorporates:
   *  Gain: '<S50>/Gain  Aggiustato'
   */
  proxy_B.Sum_l = proxy_P.GainAggiustato_Gain_h * proxy_B.ByteUnpacking[9] -
    proxy_B.Saturation2_h;

  /* DataTypeConversion: '<S52>/Conversion' incorporates:
   *  UnitDelay: '<S16>/Unit Delay3'
   */
  proxy_B.Conversion_a[0] = proxy_DW.UnitDelay3_DSTATE_k[0];
  proxy_B.Conversion_a[1] = proxy_DW.UnitDelay3_DSTATE_k[1];

  /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
   *  Constant: '<S53>/finger width'
   *  Constant: '<S53>/proximal length'
   */
  proxy_B.DataTypeConversion[0] = (real32_T)proxy_P.fingerwidth_Value_n;
  proxy_B.DataTypeConversion[1] = (real32_T)proxy_P.proximallength_Value_b;

  /* Saturate: '<S16>/Saturation3' */
  if (proxy_B.Sum_l > proxy_P.Saturation3_UpperSat_d) {
    proxy_B.Saturation3 = proxy_P.Saturation3_UpperSat_d;
  } else if (proxy_B.Sum_l < proxy_P.Saturation3_LowerSat_n) {
    proxy_B.Saturation3 = proxy_P.Saturation3_LowerSat_n;
  } else {
    proxy_B.Saturation3 = proxy_B.Sum_l;
  }

  /* End of Saturate: '<S16>/Saturation3' */

  /* Outputs for Enabled SubSystem: '<S58>/Subsystem' */
  proxy_Subsystem(proxy_B.Data, &proxy_B.Subsystem_c, &proxy_DW.Subsystem_c);

  /* End of Outputs for SubSystem: '<S58>/Subsystem' */

  /* Switch: '<S58>/Switch' incorporates:
   *  Constant: '<S58>/Constant1'
   */
  if (proxy_B.Data) {
    proxy_B.Saturation2_h = proxy_P.Constant1_Value_a;
  } else {
    proxy_B.Saturation2_h = proxy_B.Subsystem_c.Memory;
  }

  /* End of Switch: '<S58>/Switch' */

  /* Sum: '<S58>/Sum1' incorporates:
   *  Constant: '<S58>/Constant'
   *  Gain: '<S58>/Gain Aggiustato'
   *  Sum: '<S58>/Sum'
   */
  proxy_B.ManualSwitch_h = (proxy_P.Constant_Value_bd - proxy_B.Saturation2_h) -
    proxy_P.GainAggiustato_Gain_o * proxy_B.ByteUnpacking[14];

  /* Saturate: '<S16>/Saturation2' */
  if (proxy_B.ManualSwitch_h > proxy_P.Saturation2_UpperSat_l) {
    proxy_B.Saturation2 = proxy_P.Saturation2_UpperSat_l;
  } else if (proxy_B.ManualSwitch_h < proxy_P.Saturation2_LowerSat_i) {
    proxy_B.Saturation2 = proxy_P.Saturation2_LowerSat_i;
  } else {
    proxy_B.Saturation2 = proxy_B.ManualSwitch_h;
  }

  /* End of Saturate: '<S16>/Saturation2' */

  /* ManualSwitch: '<S16>/Manual Switch5' incorporates:
   *  Constant: '<S16>/Constant4'
   *  Constant: '<S16>/Constant5'
   */
  if (proxy_P.ManualSwitch5_CurrentSetting_d == 1) {
    proxy_B.Saturation2_h = proxy_P.Constant4_Value_n;
  } else {
    proxy_B.Saturation2_h = proxy_P.Constant5_Value_p;
  }

  /* End of ManualSwitch: '<S16>/Manual Switch5' */

  /* MATLAB Function: '<S16>/MATLAB Function2' incorporates:
   *  Constant: '<S16>/Constant1'
   */
  proxy_MATLABFunction2(proxy_P.Constant1_Value_d, proxy_B.Saturation3,
                        proxy_B.Saturation2, proxy_B.Saturation2_h,
                        &proxy_B.sf_MATLABFunction2_o);

  /* MATLAB Function: '<S16>/MATLAB Function3' */
  proxy_MATLABFunction3(proxy_B.sf_MATLABFunction2_o.y,
                        proxy_B.DataTypeConversion,
                        &proxy_B.sf_MATLABFunction3_b);

  /* MATLAB Function: '<S16>/Jacobian2' incorporates:
   *  Constant: '<S53>/finger width'
   *  Constant: '<S53>/proximal length'
   *  DataTypeConversion: '<S51>/Conversion'
   *  UnitDelay: '<S16>/Unit Delay1'
   */
  proxy_Jacobian2(proxy_B.sf_MATLABFunction3_b.y, proxy_B.Saturation3,
                  proxy_B.Saturation2, proxy_P.fingerwidth_Value_n,
                  proxy_P.proximallength_Value_b, proxy_B.Conversion_a, (real_T)
                  proxy_DW.UnitDelay1_DSTATE_e, &proxy_B.sf_Jacobian2_o);

  /* MATLAB Function: '<S16>/MATLAB Function' incorporates:
   *  Gain: '<S16>/Gain'
   *  Gain: '<S16>/Gain1'
   */
  proxy_MATLABFunction(proxy_B.sf_Jacobian2_o.JTcomp, proxy_P.Gain_Gain_m *
                       proxy_B.Gain2, proxy_P.Gain1_Gain_m * proxy_B.Gain6,
                       &proxy_B.sf_MATLABFunction_dm);

  /* Sum: '<S58>/Sum2' incorporates:
   *  Constant: '<S58>/Constant2'
   */
  proxy_B.Sum2_j = proxy_B.ManualSwitch_h - proxy_P.Constant2_Value_b;

  /* Gain: '<S17>/Gain' */
  proxy_B.Saturation1_j = proxy_P.Gain_Gain_ad * proxy_B.Gain1;

  /* Saturate: '<S17>/Saturation1' */
  if (proxy_B.Saturation1_j > proxy_P.Saturation1_UpperSat_a) {
    proxy_B.Saturation1_j = proxy_P.Saturation1_UpperSat_a;
  } else {
    if (proxy_B.Saturation1_j < proxy_P.Saturation1_LowerSat_f) {
      proxy_B.Saturation1_j = proxy_P.Saturation1_LowerSat_f;
    }
  }

  /* End of Saturate: '<S17>/Saturation1' */
  /* ManualSwitch: '<S19>/Manual Switch1' incorporates:
   *  Constant: '<S19>/Constant'
   *  MATLAB Function: '<S19>/MATLAB Function1'
   */
  if (proxy_P.ManualSwitch1_CurrentSetting == 1) {
    proxy_B.Saturation6 = proxy_B.ByteUnpacking[7] / 400.0F;
  } else {
    proxy_B.Saturation6 = proxy_P.Constant_Value_i;
  }

  /* End of ManualSwitch: '<S19>/Manual Switch1' */

  /* Gain: '<S19>/Gain3' */
  proxy_B.Saturation3 = proxy_P.Gain3_Gain_m * proxy_B.Saturation6;

  /* ManualSwitch: '<S19>/Manual Switch' incorporates:
   *  Constant: '<S19>/Constant'
   *  MATLAB Function: '<S19>/MATLAB Function'
   */
  if (proxy_P.ManualSwitch_CurrentSetting_l == 1) {
    proxy_B.Saturation6 = (proxy_B.ByteUnpacking[16] - 485.0F) / 55.0F;
  } else {
    proxy_B.Saturation6 = proxy_P.Constant_Value_i;
  }

  /* End of ManualSwitch: '<S19>/Manual Switch' */

  /* Gain: '<S19>/Gain4' */
  proxy_B.ManualSwitch_h = proxy_P.Gain4_Gain_n * proxy_B.Saturation6;

  /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
   *  Gain: '<S19>/Gain'
   *  Gain: '<S19>/Gain2'
   */
  proxy_B.Saturation6 = (real32_T)(proxy_P.Gain_Gain_m1 * proxy_B.Gain5 *
    proxy_P.Gain2_Gain_b);

  /* ManualSwitch: '<S6>/Manual Switch' incorporates:
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant3'
   */
  if (proxy_P.ManualSwitch_CurrentSetting_m == 1) {
    proxy_B.Saturation2 = proxy_P.Constant3_Value;
  } else {
    proxy_B.Saturation2 = proxy_P.Constant1_Value_e;
  }

  /* End of ManualSwitch: '<S6>/Manual Switch' */

  /* ManualSwitch: '<S6>/Manual Switch1' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant4'
   */
  if (proxy_P.ManualSwitch1_CurrentSetting_p == 1) {
    proxy_B.Saturation4 = proxy_P.Constant4_Value_f;
  } else {
    proxy_B.Saturation4 = proxy_P.Constant_Value_o;
  }

  /* End of ManualSwitch: '<S6>/Manual Switch1' */

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/Constant2'
   */
  if (!(proxy_B.Saturation4 > proxy_P.Switch_Threshold)) {
    proxy_B.Saturation6 = proxy_P.Constant2_Value_d;
  }

  /* End of Switch: '<S6>/Switch' */

  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S6>/Constant2'
   */
  if (proxy_B.Saturation4 > proxy_P.Switch1_Threshold) {
    /* Gain: '<S14>/Gain4' */
    proxy_B.Saturation3_b = proxy_P.Gain4_Gain_a *
      proxy_B.sf_MATLABFunction_d.y[0];

    /* Saturate: '<S14>/Saturation' */
    if (proxy_B.Saturation3_b > proxy_P.Saturation_UpperSat_i) {
      proxy_B.Saturation3_b = proxy_P.Saturation_UpperSat_i;
    } else {
      if (proxy_B.Saturation3_b < proxy_P.Saturation_LowerSat_i) {
        proxy_B.Saturation3_b = proxy_P.Saturation_LowerSat_i;
      }
    }

    /* End of Saturate: '<S14>/Saturation' */
  } else {
    proxy_B.Saturation3_b = proxy_P.Constant2_Value_d;
  }

  /* End of Switch: '<S6>/Switch1' */

  /* Switch: '<S6>/Switch2' incorporates:
   *  Constant: '<S6>/Constant2'
   */
  if (proxy_B.Saturation4 > proxy_P.Switch2_Threshold) {
    /* Gain: '<S16>/Gain4' */
    proxy_B.Saturation2_h = proxy_P.Gain4_Gain * proxy_B.sf_MATLABFunction_dm.y
      [0];

    /* Saturate: '<S16>/Saturation' */
    if (proxy_B.Saturation2_h > proxy_P.Saturation_UpperSat) {
      proxy_B.Saturation2_h = proxy_P.Saturation_UpperSat;
    } else {
      if (proxy_B.Saturation2_h < proxy_P.Saturation_LowerSat) {
        proxy_B.Saturation2_h = proxy_P.Saturation_LowerSat;
      }
    }

    /* End of Saturate: '<S16>/Saturation' */
  } else {
    proxy_B.Saturation2_h = proxy_P.Constant2_Value_d;
  }

  /* End of Switch: '<S6>/Switch2' */

  /* Switch: '<S6>/Switch3' incorporates:
   *  Constant: '<S6>/Constant2'
   */
  if (proxy_B.Saturation4 > proxy_P.Switch3_Threshold) {
    /* Gain: '<S18>/Gain' incorporates:
     *  Gain: '<S3>/Gain'
     */
    proxy_B.Gain1 = proxy_P.Gain_Gain * proxy_B.Filt2 * proxy_P.Gain_Gain_o;

    /* Saturate: '<S18>/Saturation1' */
    if (proxy_B.Gain1 > proxy_P.Saturation1_UpperSat) {
      proxy_B.Saturation1_n = (real32_T)proxy_P.Saturation1_UpperSat;
    } else if (proxy_B.Gain1 < proxy_P.Saturation1_LowerSat) {
      proxy_B.Saturation1_n = (real32_T)proxy_P.Saturation1_LowerSat;
    } else {
      proxy_B.Saturation1_n = (real32_T)proxy_B.Gain1;
    }

    /* End of Saturate: '<S18>/Saturation1' */
  } else {
    proxy_B.Saturation1_n = proxy_P.Constant2_Value_d;
  }

  /* End of Switch: '<S6>/Switch3' */

  /* Switch: '<S6>/Switch4' incorporates:
   *  Constant: '<S6>/Constant2'
   */
  if (proxy_B.Saturation4 > proxy_P.Switch4_Threshold) {
    proxy_B.Saturation_f = (real32_T)proxy_B.Saturation1_j;
  } else {
    proxy_B.Saturation_f = proxy_P.Constant2_Value_d;
  }

  /* End of Switch: '<S6>/Switch4' */

  /* SignalConversion: '<S6>/TmpSignal ConversionAtByte PackInport1' incorporates:
   *  Constant: '<S6>/Constant'
   */
  proxy_B.TmpSignalConversionAtBytePackIn[0] = proxy_B.ByteUnpacking[0];
  proxy_B.TmpSignalConversionAtBytePackIn[1] = proxy_B.Saturation2;
  proxy_B.TmpSignalConversionAtBytePackIn[2] = proxy_B.Saturation6;
  proxy_B.TmpSignalConversionAtBytePackIn[3] = proxy_B.Saturation3_b;
  proxy_B.TmpSignalConversionAtBytePackIn[4] = proxy_B.Saturation2_h;
  proxy_B.TmpSignalConversionAtBytePackIn[5] = proxy_B.Saturation1_n;
  proxy_B.TmpSignalConversionAtBytePackIn[6] = proxy_B.Saturation_f;
  proxy_B.TmpSignalConversionAtBytePackIn[7] = proxy_P.Constant_Value_o;
  proxy_B.TmpSignalConversionAtBytePackIn[8] = proxy_P.Constant_Value_o;
  proxy_B.TmpSignalConversionAtBytePackIn[9] = proxy_P.Constant_Value_o;
  proxy_B.TmpSignalConversionAtBytePackIn[10] = proxy_P.Constant_Value_o;
  proxy_B.TmpSignalConversionAtBytePackIn[11] = proxy_P.Constant_Value_o;

  /* S-Function (any2byte): '<S6>/Byte Pack' */

  /* Pack: <S6>/Byte Pack */
  (void) memcpy(&proxy_B.BytePack[0], &proxy_B.TmpSignalConversionAtBytePackIn[0],
                48);

  /* BusAssignment: '<S7>/Bus Assignment' */
  proxy_B.BusAssignment.Data = proxy_B.ByteUnpacking[0];

  /* Outputs for Atomic SubSystem: '<S7>/Publish' */
  /* Start for MATLABSystem: '<S70>/SinkBlock' */
  Pub_proxy_264.publish(&proxy_B.BusAssignment);

  /* End of Outputs for SubSystem: '<S7>/Publish' */

  /* BusAssignment: '<S7>/Bus Assignment1' */
  proxy_B.BusAssignment1.Data = proxy_B.ByteUnpacking[1];

  /* Outputs for Atomic SubSystem: '<S7>/Publish1' */
  /* Start for MATLABSystem: '<S71>/SinkBlock' */
  Pub_proxy_311.publish(&proxy_B.BusAssignment1);

  /* End of Outputs for SubSystem: '<S7>/Publish1' */

  /* DiscreteTransferFcn: '<S7>/Filt ' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Saturation_f = proxy_P.Filt_NumCoef[1] * proxy_DW.Filt_states;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt ' */

  /* Saturate: '<S7>/Saturation' */
  if (proxy_B.Saturation_f > proxy_P.Saturation_UpperSat_g) {
    proxy_B.Saturation_f = proxy_P.Saturation_UpperSat_g;
  } else {
    if (proxy_B.Saturation_f < proxy_P.Saturation_LowerSat_h) {
      proxy_B.Saturation_f = proxy_P.Saturation_LowerSat_h;
    }
  }

  /* End of Saturate: '<S7>/Saturation' */

  /* DiscreteTransferFcn: '<S7>/Filt 1' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Saturation1_n = proxy_P.Filt1_NumCoef_j[1] * proxy_DW.Filt1_states_d;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 1' */

  /* Saturate: '<S7>/Saturation1' */
  if (proxy_B.Saturation1_n > proxy_P.Saturation1_UpperSat_i) {
    proxy_B.Saturation1_n = proxy_P.Saturation1_UpperSat_i;
  } else {
    if (proxy_B.Saturation1_n < proxy_P.Saturation1_LowerSat_o) {
      proxy_B.Saturation1_n = proxy_P.Saturation1_LowerSat_o;
    }
  }

  /* End of Saturate: '<S7>/Saturation1' */

  /* DiscreteTransferFcn: '<S7>/Filt 2' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Saturation2_h = proxy_P.Filt2_NumCoef_o[1] * proxy_DW.Filt2_states_d;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 2' */

  /* Saturate: '<S7>/Saturation2' */
  if (proxy_B.Saturation2_h > proxy_P.Saturation2_UpperSat_l4) {
    proxy_B.Saturation2_h = proxy_P.Saturation2_UpperSat_l4;
  } else {
    if (proxy_B.Saturation2_h < proxy_P.Saturation2_LowerSat_c) {
      proxy_B.Saturation2_h = proxy_P.Saturation2_LowerSat_c;
    }
  }

  /* End of Saturate: '<S7>/Saturation2' */

  /* DiscreteTransferFcn: '<S7>/Filt 3' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Saturation3_b = proxy_P.Filt3_NumCoef_m[1] * proxy_DW.Filt3_states_h;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 3' */

  /* Saturate: '<S7>/Saturation3' */
  if (proxy_B.Saturation3_b > proxy_P.Saturation3_UpperSat_e) {
    proxy_B.Saturation3_b = proxy_P.Saturation3_UpperSat_e;
  } else {
    if (proxy_B.Saturation3_b < proxy_P.Saturation3_LowerSat_e) {
      proxy_B.Saturation3_b = proxy_P.Saturation3_LowerSat_e;
    }
  }

  /* End of Saturate: '<S7>/Saturation3' */

  /* DiscreteTransferFcn: '<S7>/Filt 4' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Saturation4 = proxy_P.Filt4_NumCoef_f[1] * proxy_DW.Filt4_states_a;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 4' */

  /* Saturate: '<S7>/Saturation4' */
  if (proxy_B.Saturation4 > proxy_P.Saturation4_UpperSat) {
    proxy_B.Saturation4 = proxy_P.Saturation4_UpperSat;
  } else {
    if (proxy_B.Saturation4 < proxy_P.Saturation4_LowerSat) {
      proxy_B.Saturation4 = proxy_P.Saturation4_LowerSat;
    }
  }

  /* End of Saturate: '<S7>/Saturation4' */

  /* DiscreteTransferFcn: '<S7>/Filt 5' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Saturation2 = proxy_P.Filt5_NumCoef_e[1] * proxy_DW.Filt5_states_j;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 5' */

  /* Saturate: '<S7>/Saturation5' */
  if (proxy_B.Saturation2 > proxy_P.Saturation5_UpperSat) {
    proxy_B.Saturation2 = proxy_P.Saturation5_UpperSat;
  } else {
    if (proxy_B.Saturation2 < proxy_P.Saturation5_LowerSat) {
      proxy_B.Saturation2 = proxy_P.Saturation5_LowerSat;
    }
  }

  /* End of Saturate: '<S7>/Saturation5' */

  /* DiscreteTransferFcn: '<S7>/Filt 6' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Saturation6 = proxy_P.Filt6_NumCoef_j[1] * proxy_DW.Filt6_states_n;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 6' */

  /* Saturate: '<S7>/Saturation6' */
  if (proxy_B.Saturation6 > proxy_P.Saturation6_UpperSat) {
    proxy_B.Saturation6 = proxy_P.Saturation6_UpperSat;
  } else {
    if (proxy_B.Saturation6 < proxy_P.Saturation6_LowerSat) {
      proxy_B.Saturation6 = proxy_P.Saturation6_LowerSat;
    }
  }

  /* End of Saturate: '<S7>/Saturation6' */

  /* DiscreteTransferFcn: '<S7>/Filt 7' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.Saturation7 = proxy_P.Filt7_NumCoef[1] * proxy_DW.Filt7_states;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 7' */

  /* Saturate: '<S7>/Saturation7' */
  if (proxy_B.Saturation7 > proxy_P.Saturation7_UpperSat) {
    proxy_B.Saturation7 = proxy_P.Saturation7_UpperSat;
  } else {
    if (proxy_B.Saturation7 < proxy_P.Saturation7_LowerSat) {
      proxy_B.Saturation7 = proxy_P.Saturation7_LowerSat;
    }
  }

  /* End of Saturate: '<S7>/Saturation7' */

  /* DiscreteTransferFcn: '<S7>/Filt 8' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_B.DeadZone_m = proxy_P.Filt8_NumCoef_n[1] * proxy_DW.Filt8_states_h;
    proxy_B.k++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 8' */

  /* Saturate: '<S7>/Saturation8' */
  if (proxy_B.DeadZone_m > proxy_P.Saturation8_UpperSat) {
    proxy_B.DeadZone_m = proxy_P.Saturation8_UpperSat;
  } else {
    if (proxy_B.DeadZone_m < proxy_P.Saturation8_LowerSat) {
      proxy_B.DeadZone_m = proxy_P.Saturation8_LowerSat;
    }
  }

  /* End of Saturate: '<S7>/Saturation8' */

  /* MATLAB Function: '<S7>/MATLAB Function - Assign' incorporates:
   *  Constant: '<S68>/Constant'
   *  SignalConversion: '<S7>/ConcatBufferAtVector ConcatenateIn1'
   *  SignalConversion: '<S7>/ConcatBufferAtVector ConcatenateIn2'
   *  SignalConversion: '<S7>/ConcatBufferAtVector ConcatenateIn3'
   *  SignalConversion: '<S7>/ConcatBufferAtVector ConcatenateIn4'
   *  SignalConversion: '<S7>/ConcatBufferAtVector ConcatenateIn5'
   *  SignalConversion: '<S7>/ConcatBufferAtVector ConcatenateIn6'
   *  SignalConversion: '<S7>/ConcatBufferAtVector ConcatenateIn7'
   *  SignalConversion: '<S7>/ConcatBufferAtVector ConcatenateIn8'
   *  SignalConversion: '<S7>/ConcatBufferAtVector ConcatenateIn9'
   */
  proxy_B.msg = proxy_P.Constant_Value;
  proxy_B.msg.Position_SL_Info.CurrentLength = 9U;
  proxy_B.msg.Position[0] = proxy_B.Saturation_f;
  proxy_B.msg.Position[1] = proxy_B.Saturation1_n;
  proxy_B.msg.Position[2] = proxy_B.Saturation2_h;
  proxy_B.msg.Position[3] = proxy_B.Saturation3_b;
  proxy_B.msg.Position[4] = proxy_B.Saturation4;
  proxy_B.msg.Position[5] = proxy_B.Saturation2;
  proxy_B.msg.Position[6] = proxy_B.Saturation6;
  proxy_B.msg.Position[7] = proxy_B.Saturation7;
  proxy_B.msg.Position[8] = proxy_B.DeadZone_m;
  proxy_B.msg.Velocity_SL_Info.CurrentLength = 9U;
  proxy_B.msg.Effort_SL_Info.CurrentLength = 9U;
  memset(&proxy_B.msg.Velocity[0], 0, 9U * sizeof(real_T));
  memset(&proxy_B.msg.Effort[0], 0, 9U * sizeof(real_T));
  proxy_B.msg.Name_SL_Info.CurrentLength = 9U;
  for (proxy_B.k = 0; proxy_B.k < 24; proxy_B.k++) {
    proxy_B.msg.Name[0].Data[proxy_B.k] = (uint8_T)b[proxy_B.k];
  }

  proxy_B.msg.Name[0].Data_SL_Info.CurrentLength = 24U;
  for (proxy_B.k = 0; proxy_B.k < 27; proxy_B.k++) {
    proxy_B.msg.Name[1].Data[proxy_B.k] = (uint8_T)c[proxy_B.k];
  }

  proxy_B.msg.Name[1].Data_SL_Info.CurrentLength = 27U;
  for (proxy_B.k = 0; proxy_B.k < 30; proxy_B.k++) {
    proxy_B.msg.Name[2].Data[proxy_B.k] = (uint8_T)d[proxy_B.k];
  }

  proxy_B.msg.Name[2].Data_SL_Info.CurrentLength = 30U;
  for (proxy_B.k = 0; proxy_B.k < 32; proxy_B.k++) {
    proxy_B.msg.Name[3].Data[proxy_B.k] = (uint8_T)e[proxy_B.k];
  }

  proxy_B.msg.Name[3].Data_SL_Info.CurrentLength = 32U;
  for (proxy_B.k = 0; proxy_B.k < 31; proxy_B.k++) {
    proxy_B.msg.Name[4].Data[proxy_B.k] = (uint8_T)f[proxy_B.k];
  }

  proxy_B.msg.Name[4].Data_SL_Info.CurrentLength = 31U;
  for (proxy_B.k = 0; proxy_B.k < 33; proxy_B.k++) {
    proxy_B.msg.Name[5].Data[proxy_B.k] = (uint8_T)g[proxy_B.k];
  }

  proxy_B.msg.Name[5].Data_SL_Info.CurrentLength = 33U;
  for (proxy_B.k = 0; proxy_B.k < 22; proxy_B.k++) {
    proxy_B.msg.Name[6].Data[proxy_B.k] = (uint8_T)h[proxy_B.k];
  }

  proxy_B.msg.Name[6].Data_SL_Info.CurrentLength = 22U;
  for (proxy_B.k = 0; proxy_B.k < 16; proxy_B.k++) {
    proxy_B.msg.Name[7].Data[proxy_B.k] = (uint8_T)i[proxy_B.k];
  }

  proxy_B.msg.Name[7].Data_SL_Info.CurrentLength = 16U;
  for (proxy_B.k = 0; proxy_B.k < 24; proxy_B.k++) {
    proxy_B.msg.Name[8].Data[proxy_B.k] = (uint8_T)j[proxy_B.k];
  }

  proxy_B.msg.Name[8].Data_SL_Info.CurrentLength = 24U;

  /* End of MATLAB Function: '<S7>/MATLAB Function - Assign' */

  /* Outputs for Atomic SubSystem: '<S7>/Publish12' */
  /* Start for MATLABSystem: '<S72>/SinkBlock' */
  Pub_proxy_470.publish(&proxy_B.msg);

  /* End of Outputs for SubSystem: '<S7>/Publish12' */

  /* SignalConversion: '<S7>/TmpSignal ConversionAtByte PackInport1' */
  proxy_B.TmpSignalConversionAtBytePack_b[0] = proxy_B.ByteUnpacking[0];
  proxy_B.TmpSignalConversionAtBytePack_b[1] = proxy_B.ByteUnpacking[1];
  proxy_B.TmpSignalConversionAtBytePack_b[2] = proxy_B.Saturation_f;
  proxy_B.TmpSignalConversionAtBytePack_b[3] = proxy_B.Saturation1_n;
  proxy_B.TmpSignalConversionAtBytePack_b[4] = proxy_B.Saturation2_h;
  proxy_B.TmpSignalConversionAtBytePack_b[5] = proxy_B.Saturation3_b;
  proxy_B.TmpSignalConversionAtBytePack_b[6] = proxy_B.Saturation4;
  proxy_B.TmpSignalConversionAtBytePack_b[7] = proxy_B.Saturation2;
  proxy_B.TmpSignalConversionAtBytePack_b[8] = proxy_B.Saturation6;
  proxy_B.TmpSignalConversionAtBytePack_b[9] = proxy_B.Saturation7;
  proxy_B.TmpSignalConversionAtBytePack_b[10] = proxy_B.DeadZone_m;

  /* S-Function (any2byte): '<S7>/Byte Pack' */

  /* Pack: <S7>/Byte Pack */
  (void) memcpy(&proxy_B.BytePack_c[0],
                &proxy_B.TmpSignalConversionAtBytePack_b[0],
                44);

  /* Gain: '<S7>/Gain1' */
  proxy_B.Saturation7 = proxy_P.ampliFactor * proxy_B.Saturation3;

  /* Gain: '<S7>/Gain2' */
  proxy_B.DeadZone_m = proxy_P.ampliFactor * proxy_B.ManualSwitch_h;

  /* ManualSwitch: '<S18>/Manual Switch' incorporates:
   *  Constant: '<S18>/Constant1'
   *  MATLAB Function: '<S18>/Pose Estimation'
   */
  if (proxy_P.ManualSwitch_CurrentSetting_b == 1) {
    /* Saturate: '<S18>/Saturation' */
    if (proxy_B.ByteUnpacking[10] > proxy_P.Saturation_UpperSat_b) {
      proxy_B.Saturation2_h = proxy_P.Saturation_UpperSat_b;
    } else if (proxy_B.ByteUnpacking[10] < proxy_P.Saturation_LowerSat_b) {
      proxy_B.Saturation2_h = proxy_P.Saturation_LowerSat_b;
    } else {
      proxy_B.Saturation2_h = proxy_B.ByteUnpacking[10];
    }

    /* End of Saturate: '<S18>/Saturation' */
    proxy_B.Saturation2_h /= 900.0F;
  } else {
    proxy_B.Saturation2_h = proxy_P.Constant1_Value_g;
  }

  /* End of ManualSwitch: '<S18>/Manual Switch' */

  /* Gain: '<S7>/Gain7' */
  proxy_B.ManualSwitch_h = proxy_P.ampliFactor * proxy_B.Saturation2_h;

  /* ManualSwitch: '<S17>/Manual Switch' incorporates:
   *  Constant: '<S17>/Constant1'
   *  MATLAB Function: '<S17>/Pose Estimation'
   */
  if (proxy_P.ManualSwitch_CurrentSetting_c == 1) {
    /* Saturate: '<S17>/Saturation' */
    if (proxy_B.ByteUnpacking[11] > proxy_P.Saturation_UpperSat_c) {
      proxy_B.Saturation2_h = proxy_P.Saturation_UpperSat_c;
    } else if (proxy_B.ByteUnpacking[11] < proxy_P.Saturation_LowerSat_l) {
      proxy_B.Saturation2_h = proxy_P.Saturation_LowerSat_l;
    } else {
      proxy_B.Saturation2_h = proxy_B.ByteUnpacking[11];
    }

    /* End of Saturate: '<S17>/Saturation' */
    proxy_B.Saturation2_h /= 950.0F;
  } else {
    proxy_B.Saturation2_h = proxy_P.Constant1_Value_l;
  }

  /* End of ManualSwitch: '<S17>/Manual Switch' */

  /* Gain: '<S7>/Gain8' */
  proxy_B.Saturation3 = proxy_P.ampliFactor * proxy_B.Saturation2_h;

  /* ManualSwitch: '<S13>/Manual Switch' incorporates:
   *  Constant: '<S13>/Constant'
   *  MATLAB Function: '<S13>/MATLAB Function'
   */
  if (proxy_P.ManualSwitch_CurrentSetting_o == 1) {
    proxy_B.Saturation2_h = (-proxy_B.ByteUnpacking[13] + 460.0F) / 50.0F / 2.2F;
  } else {
    proxy_B.Saturation2_h = proxy_P.Constant_Value_gc;
  }

  /* End of ManualSwitch: '<S13>/Manual Switch' */

  /* Gain: '<S7>/Gain9' */
  proxy_B.Saturation2 = proxy_P.ampliFactor * proxy_B.Saturation2_h;

  /* DeadZone: '<S75>/Dead Zone' */
  if (proxy_B.sf_MATLABFunction3_b.y[1] > proxy_P.DeadZone_End_d) {
    proxy_B.Saturation2_h = proxy_B.sf_MATLABFunction3_b.y[1] -
      proxy_P.DeadZone_End_d;
  } else if (proxy_B.sf_MATLABFunction3_b.y[1] >= proxy_P.DeadZone_Start_n) {
    proxy_B.Saturation2_h = 0.0F;
  } else {
    proxy_B.Saturation2_h = proxy_B.sf_MATLABFunction3_b.y[1] -
      proxy_P.DeadZone_Start_n;
  }

  /* End of DeadZone: '<S75>/Dead Zone' */

  /* Product: '<S75>/Product' incorporates:
   *  Constant: '<S75>/Constant2'
   *  Gain: '<S75>/Gain'
   *  Sum: '<S75>/Sum'
   */
  proxy_B.Saturation4 = (proxy_P.Gain_Gain_n * proxy_B.Saturation2_h +
    proxy_P.ampliFactorDistal) * proxy_B.sf_MATLABFunction3_b.y[1];

  /* DeadZone: '<S74>/Dead Zone' */
  if (proxy_B.Saturation4 > proxy_P.DeadZone_End_g) {
    proxy_B.Saturation3_b = proxy_B.Saturation4 - proxy_P.DeadZone_End_g;
  } else if (proxy_B.Saturation4 >= proxy_P.DeadZone_Start_a) {
    proxy_B.Saturation3_b = 0.0F;
  } else {
    proxy_B.Saturation3_b = proxy_B.Saturation4 - proxy_P.DeadZone_Start_a;
  }

  /* End of DeadZone: '<S74>/Dead Zone' */

  /* Product: '<S74>/Product' incorporates:
   *  Constant: '<S74>/Constant2'
   *  Sum: '<S74>/Sum'
   */
  proxy_B.Saturation3_b = (proxy_B.Saturation3_b + proxy_P.ampliFactor) *
    proxy_B.sf_MATLABFunction3_b.y[0];

  /* DeadZone: '<S77>/Dead Zone' */
  if (proxy_B.sf_MATLABFunction3.y[1] > proxy_P.DeadZone_End_dy) {
    proxy_B.Saturation2_h = proxy_B.sf_MATLABFunction3.y[1] -
      proxy_P.DeadZone_End_dy;
  } else if (proxy_B.sf_MATLABFunction3.y[1] >= proxy_P.DeadZone_Start_h) {
    proxy_B.Saturation2_h = 0.0F;
  } else {
    proxy_B.Saturation2_h = proxy_B.sf_MATLABFunction3.y[1] -
      proxy_P.DeadZone_Start_h;
  }

  /* End of DeadZone: '<S77>/Dead Zone' */

  /* Product: '<S77>/Product' incorporates:
   *  Constant: '<S77>/Constant2'
   *  Gain: '<S77>/Gain'
   *  Sum: '<S77>/Sum'
   */
  proxy_B.Saturation2_h = (proxy_P.Gain_Gain_k * proxy_B.Saturation2_h +
    proxy_P.ampliFactorDistal) * proxy_B.sf_MATLABFunction3.y[1];

  /* DeadZone: '<S76>/Dead Zone' */
  if (proxy_B.Saturation2_h > proxy_P.DeadZone_End_gn) {
    proxy_B.Saturation1_n = proxy_B.Saturation2_h - proxy_P.DeadZone_End_gn;
  } else if (proxy_B.Saturation2_h >= proxy_P.DeadZone_Start_e) {
    proxy_B.Saturation1_n = 0.0F;
  } else {
    proxy_B.Saturation1_n = proxy_B.Saturation2_h - proxy_P.DeadZone_Start_e;
  }

  /* End of DeadZone: '<S76>/Dead Zone' */

  /* Product: '<S76>/Product' incorporates:
   *  Constant: '<S76>/Constant2'
   *  Sum: '<S76>/Sum'
   */
  proxy_B.Saturation1_n = (proxy_B.Saturation1_n + proxy_P.ampliFactor) *
    proxy_B.sf_MATLABFunction3.y[0];

  /* ManualSwitch: '<S7>/Automatic ' incorporates:
   *  ManualSwitch: '<S7>/Manual Switch'
   */
  if (proxy_P.Automatic_CurrentSetting == 1) {
    /* BusAssignment: '<S7>/Bus Assignment2' incorporates:
     *  Logic: '<S7>/Logical Operator'
     */
    proxy_B.BusAssignment2.Data = !proxy_B.Data;
  } else if (proxy_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<S7>/Manual Switch' incorporates:
     *  BusAssignment: '<S7>/Bus Assignment2'
     *  Constant: '<S7>/Constant'
     */
    proxy_B.BusAssignment2.Data = proxy_P.Constant_Value_ok;
  } else {
    /* BusAssignment: '<S7>/Bus Assignment2' incorporates:
     *  Constant: '<S7>/Constant1'
     */
    proxy_B.BusAssignment2.Data = proxy_P.Constant1_Value_k;
  }

  /* End of ManualSwitch: '<S7>/Automatic ' */

  /* Outputs for Atomic SubSystem: '<S7>/Publish2' */
  /* Start for MATLABSystem: '<S73>/SinkBlock' */
  Pub_proxy_517.publish(&proxy_B.BusAssignment2);

  /* End of Outputs for SubSystem: '<S7>/Publish2' */

  /* Update for DiscreteTransferFcn: '<S3>/Filt 1' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt1_states = (proxy_B.DeadZone7 - proxy_P.Filt1_DenCoef[1] *
      proxy_DW.Filt1_states) / proxy_P.Filt1_DenCoef[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S3>/Filt 1' */

  /* Update for DiscreteTransferFcn: '<S3>/Filt 2' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt2_states = (proxy_B.DeadZone6 - proxy_P.Filt2_DenCoef[1] *
      proxy_DW.Filt2_states) / proxy_P.Filt2_DenCoef[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S3>/Filt 2' */

  /* Update for DiscreteTransferFcn: '<S3>/Filt 3' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt3_states = (proxy_B.DeadZone5 - proxy_P.Filt3_DenCoef[1] *
      proxy_DW.Filt3_states) / proxy_P.Filt3_DenCoef[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S3>/Filt 3' */

  /* Update for DiscreteTransferFcn: '<S3>/Filt 4' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt4_states = (proxy_B.DeadZone4 - proxy_P.Filt4_DenCoef[1] *
      proxy_DW.Filt4_states) / proxy_P.Filt4_DenCoef[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S3>/Filt 4' */

  /* Update for DiscreteTransferFcn: '<S3>/Filt 5' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt5_states = (proxy_B.DeadZone3 - proxy_P.Filt5_DenCoef[1] *
      proxy_DW.Filt5_states) / proxy_P.Filt5_DenCoef[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S3>/Filt 5' */

  /* Update for DiscreteTransferFcn: '<S3>/Filt 6' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt6_states = (proxy_B.DeadZone2 - proxy_P.Filt6_DenCoef[1] *
      proxy_DW.Filt6_states) / proxy_P.Filt6_DenCoef[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S3>/Filt 6' */

  /* Update for DiscreteTransferFcn: '<S3>/Filt 8' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt8_states = (proxy_B.DeadZone - proxy_P.Filt8_DenCoef[1] *
      proxy_DW.Filt8_states) / proxy_P.Filt8_DenCoef[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S3>/Filt 8' */

  /* Update for Enabled SubSystem: '<S21>/Subsystem' */
  proxy_Subsystem_Update(proxy_B.Data, proxy_B.Sum, &proxy_DW.Subsystem);

  /* End of Update for SubSystem: '<S21>/Subsystem' */

  /* Update for UnitDelay: '<S14>/Unit Delay1' */
  proxy_DW.UnitDelay1_DSTATE = proxy_B.sf_Jacobian2.J22_ol;

  /* Update for UnitDelay: '<S14>/Unit Delay3' */
  proxy_DW.UnitDelay3_DSTATE[0] = proxy_B.sf_Jacobian2.q_next[0];
  proxy_DW.UnitDelay3_DSTATE[1] = proxy_B.sf_Jacobian2.q_next[1];

  /* Update for Enabled SubSystem: '<S29>/Subsystem' */
  proxy_Subsystem_Update(proxy_B.Data, proxy_B.Sum2, &proxy_DW.Subsystem_l);

  /* End of Update for SubSystem: '<S29>/Subsystem' */

  /* Update for Enabled SubSystem: '<S50>/Subsystem' */
  proxy_Subsystem_Update(proxy_B.Data, proxy_B.Sum_l, &proxy_DW.Subsystem_a);

  /* End of Update for SubSystem: '<S50>/Subsystem' */

  /* Update for UnitDelay: '<S16>/Unit Delay1' */
  proxy_DW.UnitDelay1_DSTATE_e = proxy_B.sf_Jacobian2_o.J22_ol;

  /* Update for UnitDelay: '<S16>/Unit Delay3' */
  proxy_DW.UnitDelay3_DSTATE_k[0] = proxy_B.sf_Jacobian2_o.q_next[0];
  proxy_DW.UnitDelay3_DSTATE_k[1] = proxy_B.sf_Jacobian2_o.q_next[1];

  /* Update for Enabled SubSystem: '<S58>/Subsystem' */
  proxy_Subsystem_Update(proxy_B.Data, proxy_B.Sum2_j, &proxy_DW.Subsystem_c);

  /* End of Update for SubSystem: '<S58>/Subsystem' */

  /* Update for S-Function (sdspToNetwork): '<S6>/UDP Send' */
  sErr = GetErrorBuffer(&proxy_DW.UDPSend_NetworkLib[0U]);
  LibUpdate_Network(&proxy_DW.UDPSend_NetworkLib[0U], &proxy_B.BytePack[0U], 48);
  if (*sErr != 0) {
    rtmSetErrorStatus(proxy_M, sErr);
    rtmSetStopRequested(proxy_M, 1);
  }

  /* End of Update for S-Function (sdspToNetwork): '<S6>/UDP Send' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt ' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt_states = (proxy_B.Saturation7 - proxy_P.Filt_DenCoef[1] *
      proxy_DW.Filt_states) / proxy_P.Filt_DenCoef[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt ' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 1' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt1_states_d = (proxy_B.DeadZone_m - proxy_P.Filt1_DenCoef_l[1] *
      proxy_DW.Filt1_states_d) / proxy_P.Filt1_DenCoef_l[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 1' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 2' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt2_states_d = (proxy_B.Saturation2_h - proxy_P.Filt2_DenCoef_a[1]
      * proxy_DW.Filt2_states_d) / proxy_P.Filt2_DenCoef_a[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 2' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 3' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt3_states_h = (proxy_B.Saturation1_n - proxy_P.Filt3_DenCoef_k[1]
      * proxy_DW.Filt3_states_h) / proxy_P.Filt3_DenCoef_k[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 3' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 4' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt4_states_a = (proxy_B.Saturation4 - proxy_P.Filt4_DenCoef_l[1] *
      proxy_DW.Filt4_states_a) / proxy_P.Filt4_DenCoef_l[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 4' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 5' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt5_states_j = (proxy_B.Saturation3_b - proxy_P.Filt5_DenCoef_g[1]
      * proxy_DW.Filt5_states_j) / proxy_P.Filt5_DenCoef_g[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 5' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 6' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt6_states_n = (proxy_B.ManualSwitch_h - proxy_P.Filt6_DenCoef_n
      [1] * proxy_DW.Filt6_states_n) / proxy_P.Filt6_DenCoef_n[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 6' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 7' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt7_states = (proxy_B.Saturation3 - proxy_P.Filt7_DenCoef[1] *
      proxy_DW.Filt7_states) / proxy_P.Filt7_DenCoef[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 7' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 8' */
  proxy_B.k = 0;
  while (proxy_B.k < 1) {
    proxy_DW.Filt8_states_h = (proxy_B.Saturation2 - proxy_P.Filt8_DenCoef_a[1] *
      proxy_DW.Filt8_states_h) / proxy_P.Filt8_DenCoef_a[0];
    proxy_B.k++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 8' */

  /* Update for S-Function (sdspToNetwork): '<S7>/UDP Send' */
  sErr = GetErrorBuffer(&proxy_DW.UDPSend_NetworkLib_e[0U]);
  LibUpdate_Network(&proxy_DW.UDPSend_NetworkLib_e[0U], &proxy_B.BytePack_c[0U],
                    44);
  if (*sErr != 0) {
    rtmSetErrorStatus(proxy_M, sErr);
    rtmSetStopRequested(proxy_M, 1);
  }

  /* End of Update for S-Function (sdspToNetwork): '<S7>/UDP Send' */
}

/* Model initialize function */
void proxy_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)proxy_M, 0,
                sizeof(RT_MODEL_proxy_T));

  /* block I/O */
  (void) memset(((void *) &proxy_B), 0,
                sizeof(B_proxy_T));

  /* states (dwork) */
  (void) memset((void *)&proxy_DW, 0,
                sizeof(DW_proxy_T));

  {
    char_T *sErr;
    static const char_T tmp[17] = { '/', 't', 'r', 'i', 'g', 'g', 'e', 'r', '_',
      'e', 'x', 'o', '_', 'h', 'a', 'n', 'd' };

    static const char_T tmp_0[5] = { '/', 's', 'c', 'a', 'n' };

    static const char_T tmp_1[11] = { '/', 'M', 'a', 't', 'l', 'a', 'b', 'M',
      'o', 'd', 'e' };

    static const char_T tmp_2[13] = { '/', 'M', 'a', 't', 'l', 'a', 'b', 'S',
      't', 'a', 't', 'u', 's' };

    static const char_T tmp_3[32] = { '/', 's', 'v', 'h', '_', 'c', 'o', 'n',
      't', 'r', 'o', 'l', 'l', 'e', 'r', '/', 'c', 'h', 'a', 'n', 'n', 'e', 'l',
      '_', 'c', 'u', 'r', 'r', 'e', 'n', 't', 's' };

    static const char_T tmp_4[19] = { '/', 'l', 'e', 'f', 't', '_', 'h', 'a',
      'n', 'd', '/', 'b', 'u', 't', 't', 'o', 'n', '_', '1' };

    char_T tmp_5[6];
    char_T tmp_6[12];
    char_T tmp_7[14];
    int32_T i;

    /* Start for Atomic SubSystem: '<S1>/Subscribe1' */
    /* Start for MATLABSystem: '<S9>/SourceBlock' */
    proxy_DW.obj_i.isInitialized = 0;
    proxy_DW.objisempty_cw = true;
    proxy_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      proxy_B.cv1[i] = tmp_4[i];
    }

    proxy_B.cv1[19] = '\x00';
    Sub_proxy_994.createSubscriber(proxy_B.cv1, proxy_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S9>/SourceBlock' */
    /* End of Start for SubSystem: '<S1>/Subscribe1' */

    /* Start for Atomic SubSystem: '<S3>/Subscribe' */
    /* Start for MATLABSystem: '<S11>/SourceBlock' */
    proxy_DW.obj.isInitialized = 0;
    proxy_DW.objisempty_f = true;
    proxy_DW.obj.isInitialized = 1;
    for (i = 0; i < 32; i++) {
      proxy_B.cv0[i] = tmp_3[i];
    }

    proxy_B.cv0[32] = '\x00';
    Sub_proxy_437.createSubscriber(proxy_B.cv0, proxy_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S11>/SourceBlock' */
    /* End of Start for SubSystem: '<S3>/Subscribe' */

    /* Start for S-Function (sdspFromNetwork): '<S5>/Receive from Haptics' */
    sErr = GetErrorBuffer(&proxy_DW.ReceivefromHaptics_NetworkLib[0U]);
    CreateUDPInterface(&proxy_DW.ReceivefromHaptics_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&proxy_DW.ReceivefromHaptics_NetworkLib[0U], 0,
                        "0.0.0.0", proxy_P.ReceivefromHaptics_localPort,
                        "10.24.4.17", -1, 68, 1, MIN_int32_T);
    }

    if (*sErr == 0) {
      LibStart(&proxy_DW.ReceivefromHaptics_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&proxy_DW.ReceivefromHaptics_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(proxy_M, sErr);
        rtmSetStopRequested(proxy_M, 1);
      }
    }

    /* End of Start for S-Function (sdspFromNetwork): '<S5>/Receive from Haptics' */
    /* Start for S-Function (sdspToNetwork): '<S6>/UDP Send' */
    sErr = GetErrorBuffer(&proxy_DW.UDPSend_NetworkLib[0U]);
    CreateUDPInterface(&proxy_DW.UDPSend_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&proxy_DW.UDPSend_NetworkLib[0U], 1, "0.0.0.0", -1,
                        "10.24.4.17", proxy_P.UDPSend_remotePort, 8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&proxy_DW.UDPSend_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&proxy_DW.UDPSend_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(proxy_M, sErr);
        rtmSetStopRequested(proxy_M, 1);
      }
    }

    /* End of Start for S-Function (sdspToNetwork): '<S6>/UDP Send' */

    /* Start for Atomic SubSystem: '<S7>/Publish' */
    /* Start for MATLABSystem: '<S70>/SinkBlock' */
    proxy_DW.obj_kr.isInitialized = 0;
    proxy_DW.objisempty_c = true;
    proxy_DW.obj_kr.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      tmp_7[i] = tmp_2[i];
    }

    tmp_7[13] = '\x00';
    Pub_proxy_264.createPublisher(tmp_7, proxy_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S70>/SinkBlock' */
    /* End of Start for SubSystem: '<S7>/Publish' */

    /* Start for Atomic SubSystem: '<S7>/Publish1' */
    /* Start for MATLABSystem: '<S71>/SinkBlock' */
    proxy_DW.obj_a.isInitialized = 0;
    proxy_DW.objisempty_l = true;
    proxy_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      tmp_6[i] = tmp_1[i];
    }

    tmp_6[11] = '\x00';
    Pub_proxy_311.createPublisher(tmp_6, proxy_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S71>/SinkBlock' */
    /* End of Start for SubSystem: '<S7>/Publish1' */

    /* Start for Atomic SubSystem: '<S7>/Publish12' */
    /* Start for MATLABSystem: '<S72>/SinkBlock' */
    proxy_DW.obj_b.isInitialized = 0;
    proxy_DW.objisempty_k = true;
    proxy_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp_5[i] = tmp_0[i];
    }

    tmp_5[5] = '\x00';
    Pub_proxy_470.createPublisher(tmp_5, proxy_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S72>/SinkBlock' */
    /* End of Start for SubSystem: '<S7>/Publish12' */

    /* Start for S-Function (sdspToNetwork): '<S7>/UDP Send' */
    sErr = GetErrorBuffer(&proxy_DW.UDPSend_NetworkLib_e[0U]);
    CreateUDPInterface(&proxy_DW.UDPSend_NetworkLib_e[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&proxy_DW.UDPSend_NetworkLib_e[0U], 1, "0.0.0.0", -1,
                        "10.24.4.215", proxy_P.UDPSend_remotePort_f, 8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&proxy_DW.UDPSend_NetworkLib_e[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&proxy_DW.UDPSend_NetworkLib_e[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(proxy_M, sErr);
        rtmSetStopRequested(proxy_M, 1);
      }
    }

    /* End of Start for S-Function (sdspToNetwork): '<S7>/UDP Send' */

    /* Start for Atomic SubSystem: '<S7>/Publish2' */
    /* Start for MATLABSystem: '<S73>/SinkBlock' */
    proxy_DW.obj_k.isInitialized = 0;
    proxy_DW.objisempty = true;
    proxy_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      proxy_B.cv2[i] = tmp[i];
    }

    proxy_B.cv2[17] = '\x00';
    Pub_proxy_517.createPublisher(proxy_B.cv2, proxy_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S73>/SinkBlock' */
    /* End of Start for SubSystem: '<S7>/Publish2' */
  }

  /* InitializeConditions for DiscreteTransferFcn: '<S3>/Filt 1' */
  proxy_DW.Filt1_states = proxy_P.Filt1_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S3>/Filt 2' */
  proxy_DW.Filt2_states = proxy_P.Filt2_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S3>/Filt 3' */
  proxy_DW.Filt3_states = proxy_P.Filt3_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S3>/Filt 4' */
  proxy_DW.Filt4_states = proxy_P.Filt4_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S3>/Filt 5' */
  proxy_DW.Filt5_states = proxy_P.Filt5_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S3>/Filt 6' */
  proxy_DW.Filt6_states = proxy_P.Filt6_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S3>/Filt 8' */
  proxy_DW.Filt8_states = proxy_P.Filt8_InitialStates;

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay1' */
  proxy_DW.UnitDelay1_DSTATE = proxy_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay1' */
  proxy_DW.UnitDelay1_DSTATE_e = proxy_P.UnitDelay1_InitialCondition_d;

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay3' */
  proxy_DW.UnitDelay3_DSTATE[0] = proxy_P.UnitDelay3_InitialCondition[0];

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay3' */
  proxy_DW.UnitDelay3_DSTATE_k[0] = proxy_P.UnitDelay3_InitialCondition_e[0];

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay3' */
  proxy_DW.UnitDelay3_DSTATE[1] = proxy_P.UnitDelay3_InitialCondition[1];

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay3' */
  proxy_DW.UnitDelay3_DSTATE_k[1] = proxy_P.UnitDelay3_InitialCondition_e[1];

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt ' */
  proxy_DW.Filt_states = proxy_P.Filt_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 1' */
  proxy_DW.Filt1_states_d = proxy_P.Filt1_InitialStates_m;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 2' */
  proxy_DW.Filt2_states_d = proxy_P.Filt2_InitialStates_o;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 3' */
  proxy_DW.Filt3_states_h = proxy_P.Filt3_InitialStates_f;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 4' */
  proxy_DW.Filt4_states_a = proxy_P.Filt4_InitialStates_f;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 5' */
  proxy_DW.Filt5_states_j = proxy_P.Filt5_InitialStates_o;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 6' */
  proxy_DW.Filt6_states_n = proxy_P.Filt6_InitialStates_b;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 7' */
  proxy_DW.Filt7_states = proxy_P.Filt7_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 8' */
  proxy_DW.Filt8_states_h = proxy_P.Filt8_InitialStates_e;

  /* SystemInitialize for Atomic SubSystem: '<S1>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S10>/Out1' */
  proxy_B.In1_n = proxy_P.Out1_Y0_b;

  /* End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S1>/Subscribe1' */

  /* SystemInitialize for Atomic SubSystem: '<S3>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S11>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S12>/Out1' */
  proxy_B.In1 = proxy_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S11>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S3>/Subscribe' */

  /* SystemInitialize for Enabled SubSystem: '<S21>/Subsystem' */
  proxy_Subsystem_Init(&proxy_B.Subsystem, &proxy_DW.Subsystem,
                       &proxy_P.Subsystem);

  /* End of SystemInitialize for SubSystem: '<S21>/Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S29>/Subsystem' */
  proxy_Subsystem_Init(&proxy_B.Subsystem_l, &proxy_DW.Subsystem_l,
                       &proxy_P.Subsystem_l);

  /* End of SystemInitialize for SubSystem: '<S29>/Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S50>/Subsystem' */
  proxy_Subsystem_Init(&proxy_B.Subsystem_a, &proxy_DW.Subsystem_a,
                       &proxy_P.Subsystem_a);

  /* End of SystemInitialize for SubSystem: '<S50>/Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S58>/Subsystem' */
  proxy_Subsystem_Init(&proxy_B.Subsystem_c, &proxy_DW.Subsystem_c,
                       &proxy_P.Subsystem_c);

  /* End of SystemInitialize for SubSystem: '<S58>/Subsystem' */
}

/* Model terminate function */
void proxy_terminate(void)
{
  char_T *sErr;

  /* Terminate for Atomic SubSystem: '<S1>/Subscribe1' */
  /* Start for MATLABSystem: '<S9>/SourceBlock' */
  if (proxy_DW.obj_i.isInitialized == 1) {
    proxy_DW.obj_i.isInitialized = 2;
  }

  /* End of Start for MATLABSystem: '<S9>/SourceBlock' */
  /* End of Terminate for SubSystem: '<S1>/Subscribe1' */

  /* Terminate for Atomic SubSystem: '<S3>/Subscribe' */
  /* Start for MATLABSystem: '<S11>/SourceBlock' */
  if (proxy_DW.obj.isInitialized == 1) {
    proxy_DW.obj.isInitialized = 2;
  }

  /* End of Start for MATLABSystem: '<S11>/SourceBlock' */
  /* End of Terminate for SubSystem: '<S3>/Subscribe' */

  /* Terminate for S-Function (sdspFromNetwork): '<S5>/Receive from Haptics' */
  sErr = GetErrorBuffer(&proxy_DW.ReceivefromHaptics_NetworkLib[0U]);
  LibTerminate(&proxy_DW.ReceivefromHaptics_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(proxy_M, sErr);
    rtmSetStopRequested(proxy_M, 1);
  }

  LibDestroy(&proxy_DW.ReceivefromHaptics_NetworkLib[0U], 0);
  DestroyUDPInterface(&proxy_DW.ReceivefromHaptics_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspFromNetwork): '<S5>/Receive from Haptics' */

  /* Terminate for S-Function (sdspToNetwork): '<S6>/UDP Send' */
  sErr = GetErrorBuffer(&proxy_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&proxy_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(proxy_M, sErr);
    rtmSetStopRequested(proxy_M, 1);
  }

  LibDestroy(&proxy_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&proxy_DW.UDPSend_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<S6>/UDP Send' */

  /* Terminate for Atomic SubSystem: '<S7>/Publish' */
  /* Start for MATLABSystem: '<S70>/SinkBlock' */
  if (proxy_DW.obj_kr.isInitialized == 1) {
    proxy_DW.obj_kr.isInitialized = 2;
  }

  /* End of Start for MATLABSystem: '<S70>/SinkBlock' */
  /* End of Terminate for SubSystem: '<S7>/Publish' */

  /* Terminate for Atomic SubSystem: '<S7>/Publish1' */
  /* Start for MATLABSystem: '<S71>/SinkBlock' */
  if (proxy_DW.obj_a.isInitialized == 1) {
    proxy_DW.obj_a.isInitialized = 2;
  }

  /* End of Start for MATLABSystem: '<S71>/SinkBlock' */
  /* End of Terminate for SubSystem: '<S7>/Publish1' */

  /* Terminate for Atomic SubSystem: '<S7>/Publish12' */
  /* Start for MATLABSystem: '<S72>/SinkBlock' */
  if (proxy_DW.obj_b.isInitialized == 1) {
    proxy_DW.obj_b.isInitialized = 2;
  }

  /* End of Start for MATLABSystem: '<S72>/SinkBlock' */
  /* End of Terminate for SubSystem: '<S7>/Publish12' */

  /* Terminate for S-Function (sdspToNetwork): '<S7>/UDP Send' */
  sErr = GetErrorBuffer(&proxy_DW.UDPSend_NetworkLib_e[0U]);
  LibTerminate(&proxy_DW.UDPSend_NetworkLib_e[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(proxy_M, sErr);
    rtmSetStopRequested(proxy_M, 1);
  }

  LibDestroy(&proxy_DW.UDPSend_NetworkLib_e[0U], 1);
  DestroyUDPInterface(&proxy_DW.UDPSend_NetworkLib_e[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<S7>/UDP Send' */

  /* Terminate for Atomic SubSystem: '<S7>/Publish2' */
  /* Start for MATLABSystem: '<S73>/SinkBlock' */
  if (proxy_DW.obj_k.isInitialized == 1) {
    proxy_DW.obj_k.isInitialized = 2;
  }

  /* End of Start for MATLABSystem: '<S73>/SinkBlock' */
  /* End of Terminate for SubSystem: '<S7>/Publish2' */
}
