/*
 * toUdp_data.cpp
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

#include "toUdp.h"
#include "toUdp_private.h"

/* Block parameters (auto storage) */
P_toUdp_T toUdp_P = {
  /* Mask Parameter: ReceivefromHaptics_localPort
   * Referenced by: '<Root>/Receive from Haptics'
   */
  17006,

  /* Mask Parameter: UDPSend_remotePort
   * Referenced by: '<S4>/UDP Send'
   */
  17106,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S5>/Out1'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S3>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value_g
   * Referenced by: '<S1>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S4>/Constant'
   */
  8.0F,

  /* Computed Parameter: Saturation_UpperSat
   * Referenced by: '<S4>/Saturation'
   */
  1.0F,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S4>/Saturation'
   */
  0.0F,

  /* Computed Parameter: Quantizer_Interval
   * Referenced by: '<S4>/Quantizer'
   */
  0.1F
};
