/*
 * proxy_linux.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "proxy_linux".
 *
 * Model version              : 1.503
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C++ source code generated on : Tue Oct 31 13:02:58 2017
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "proxy_linux.h"
#include "proxy_linux_private.h"
#define proxy_linux_MessageQueueLen    (1)

/* Block signals (auto storage) */
B_proxy_linux_T proxy_linux_B;

/* Block states (auto storage) */
DW_proxy_linux_T proxy_linux_DW;

/* Real-time model */
RT_MODEL_proxy_linux_T proxy_linux_M_;
RT_MODEL_proxy_linux_T *const proxy_linux_M = &proxy_linux_M_;

/* Forward declaration for local functions */
static real32_T proxy_linux_my_acos(real32_T b);

/*
 * Output and update for atomic system:
 *    '<S11>/MATLAB Function'
 *    '<S12>/MATLAB Function'
 */
void proxy_linux_MATLABFunction(const real32_T rtu_Jcomponents[4], real_T
  rtu_j_f1, real_T rtu_j_f2, B_MATLABFunction_proxy_linux_T *localB)
{
  localB->y[0] = 0.0F;
  localB->y[0] += rtu_Jcomponents[0] * (real32_T)rtu_j_f1;
  localB->y[0] += rtu_Jcomponents[2] * (real32_T)rtu_j_f2;
  localB->y[1] = 0.0F;
  localB->y[1] += rtu_Jcomponents[1] * (real32_T)rtu_j_f1;
  localB->y[1] += rtu_Jcomponents[3] * (real32_T)rtu_j_f2;
}

/* Function for MATLAB Function: '<S18>/Index New Pose Estimation ' */
static real32_T proxy_linux_my_acos(real32_T b)
{
  real32_T a;
  if (b < -1.0F) {
    a = -1.0F;
  } else if (b > 1.0F) {
    a = 1.0F;
  } else {
    a = b;
  }

  return a;
}

/* Model step function */
void proxy_linux_step(void)
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

  boolean_T b_varargout_1;
  SL_Bus_proxy_linux_std_msgs_Bool rtb_BusAssignment2;
  real32_T xH_tmp;
  real32_T LLI_tmp_tmp;
  real32_T LLI_tmp;
  real32_T LLI_tmp_0;
  real32_T LLI_tmp_tmp_0;
  real32_T LLI_tmp_tmp_1;
  real32_T LLI_tmp_tmp_2;
  real32_T LLI_tmp_tmp_3;
  real32_T LLI_tmp_tmp_4;
  real32_T LLI_tmp_tmp_5;
  real32_T LLI_tmp_tmp_tmp;
  real32_T LLI_tmp_tmp_tmp_tmp;
  real32_T LAK_tmp_tmp;

  /* ManualSwitch: '<Root>/Manual Switch' */
  if (proxy_linux_P.ManualSwitch_CurrentSetting_b == 1) {
    /* BusAssignment: '<S7>/Bus Assignment2' incorporates:
     *  Constant: '<Root>/Constant'
     */
    rtb_BusAssignment2.Data = proxy_linux_P.Constant_Value_ok;
  } else {
    /* BusAssignment: '<S7>/Bus Assignment2' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    rtb_BusAssignment2.Data = proxy_linux_P.Constant1_Value_k;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* Outputs for Atomic SubSystem: '<S7>/Publish2' */
  /* MATLABSystem: '<S58>/SinkBlock' */
  Pub_proxy_linux_517.publish(&rtb_BusAssignment2);

  /* End of Outputs for SubSystem: '<S7>/Publish2' */

  /* S-Function (sdspFromNetwork): '<S4>/Receive from Haptics' */
  sErr = GetErrorBuffer(&proxy_linux_DW.ReceivefromHaptics_NetworkLib[0U]);
  proxy_linux_B.samplesRead = 68;
  LibOutputs_Network(&proxy_linux_DW.ReceivefromHaptics_NetworkLib[0U],
                     &proxy_linux_B.ReceivefromHaptics_o1[0U],
                     &proxy_linux_B.samplesRead);
  if (*sErr != 0) {
    rtmSetErrorStatus(proxy_linux_M, sErr);
    rtmSetStopRequested(proxy_linux_M, 1);
  }

  proxy_linux_B.ReceivefromHaptics_o2 = (uint16_T)proxy_linux_B.samplesRead;

  /* End of S-Function (sdspFromNetwork): '<S4>/Receive from Haptics' */

  /* S-Function (byte2any): '<S4>/Byte Unpack' */

  /* Unpack: <S4>/Byte Unpack */
  (void) memcpy(&proxy_linux_B.ByteUnpack[0],
                &proxy_linux_B.ReceivefromHaptics_o1[0],
                68);

  /* BusAssignment: '<S7>/Bus Assignment' */
  proxy_linux_B.BusAssignment.Data = proxy_linux_B.ByteUnpack[0];

  /* Outputs for Atomic SubSystem: '<S7>/Publish' */
  /* MATLABSystem: '<S55>/SinkBlock' */
  Pub_proxy_linux_264.publish(&proxy_linux_B.BusAssignment);

  /* End of Outputs for SubSystem: '<S7>/Publish' */

  /* BusAssignment: '<S7>/Bus Assignment1' */
  proxy_linux_B.BusAssignment1.Data = proxy_linux_B.ByteUnpack[1];

  /* Outputs for Atomic SubSystem: '<S7>/Publish1' */
  /* MATLABSystem: '<S56>/SinkBlock' */
  Pub_proxy_linux_311.publish(&proxy_linux_B.BusAssignment1);

  /* End of Outputs for SubSystem: '<S7>/Publish1' */

  /* DiscreteTransferFcn: '<S7>/Filt ' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.rtb_VectorConcatenate_idx_0 = proxy_linux_P.Filt_NumCoef[1] *
      proxy_linux_DW.Filt_states;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt ' */

  /* DiscreteTransferFcn: '<S7>/Filt 1' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.rtb_VectorConcatenate_idx_1 = proxy_linux_P.Filt1_NumCoef_j[1]
      * proxy_linux_DW.Filt1_states_d;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 1' */

  /* DiscreteTransferFcn: '<S7>/Filt 2' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.rtb_VectorConcatenate_idx_2 = proxy_linux_P.Filt2_NumCoef_o[1]
      * proxy_linux_DW.Filt2_states_d;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 2' */

  /* DiscreteTransferFcn: '<S7>/Filt 3' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.rtb_VectorConcatenate_idx_3 = proxy_linux_P.Filt3_NumCoef_m[1]
      * proxy_linux_DW.Filt3_states_h;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 3' */

  /* DiscreteTransferFcn: '<S7>/Filt 4' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.rtb_VectorConcatenate_idx_4 = proxy_linux_P.Filt4_NumCoef_f[1]
      * proxy_linux_DW.Filt4_states_a;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 4' */

  /* DiscreteTransferFcn: '<S7>/Filt 5' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.rtb_VectorConcatenate_idx_5 = proxy_linux_P.Filt5_NumCoef_e[1]
      * proxy_linux_DW.Filt5_states_j;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 5' */

  /* DiscreteTransferFcn: '<S7>/Filt 6' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.rtb_VectorConcatenate_idx_6 = proxy_linux_P.Filt6_NumCoef_j[1]
      * proxy_linux_DW.Filt6_states_n;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 6' */

  /* DiscreteTransferFcn: '<S7>/Filt 7' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.rtb_VectorConcatenate_idx_7 = proxy_linux_P.Filt7_NumCoef[1] *
      proxy_linux_DW.Filt7_states;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 7' */

  /* DiscreteTransferFcn: '<S7>/Filt 8' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.rtb_VectorConcatenate_idx_8 = proxy_linux_P.Filt8_NumCoef[1] *
      proxy_linux_DW.Filt8_states;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S7>/Filt 8' */

  /* MATLAB Function: '<S7>/MATLAB Function - Assign' incorporates:
   *  Constant: '<S53>/Constant'
   */
  proxy_linux_B.msg = proxy_linux_P.Constant_Value;
  proxy_linux_B.msg.Position_SL_Info.CurrentLength = 9U;
  proxy_linux_B.msg.Position[0] = proxy_linux_B.rtb_VectorConcatenate_idx_0;
  proxy_linux_B.msg.Position[1] = proxy_linux_B.rtb_VectorConcatenate_idx_1;
  proxy_linux_B.msg.Position[2] = proxy_linux_B.rtb_VectorConcatenate_idx_2;
  proxy_linux_B.msg.Position[3] = proxy_linux_B.rtb_VectorConcatenate_idx_3;
  proxy_linux_B.msg.Position[4] = proxy_linux_B.rtb_VectorConcatenate_idx_4;
  proxy_linux_B.msg.Position[5] = proxy_linux_B.rtb_VectorConcatenate_idx_5;
  proxy_linux_B.msg.Position[6] = proxy_linux_B.rtb_VectorConcatenate_idx_6;
  proxy_linux_B.msg.Position[7] = proxy_linux_B.rtb_VectorConcatenate_idx_7;
  proxy_linux_B.msg.Position[8] = proxy_linux_B.rtb_VectorConcatenate_idx_8;
  proxy_linux_B.msg.Velocity_SL_Info.CurrentLength = 9U;
  proxy_linux_B.msg.Effort_SL_Info.CurrentLength = 9U;
  memset(&proxy_linux_B.msg.Velocity[0], 0, 9U * sizeof(real_T));
  memset(&proxy_linux_B.msg.Effort[0], 0, 9U * sizeof(real_T));
  proxy_linux_B.msg.Name_SL_Info.CurrentLength = 9U;
  for (proxy_linux_B.samplesRead = 0; proxy_linux_B.samplesRead < 24;
       proxy_linux_B.samplesRead++) {
    proxy_linux_B.msg.Name[0].Data[proxy_linux_B.samplesRead] = (uint8_T)
      b[proxy_linux_B.samplesRead];
  }

  proxy_linux_B.msg.Name[0].Data_SL_Info.CurrentLength = 24U;
  for (proxy_linux_B.samplesRead = 0; proxy_linux_B.samplesRead < 27;
       proxy_linux_B.samplesRead++) {
    proxy_linux_B.msg.Name[1].Data[proxy_linux_B.samplesRead] = (uint8_T)
      c[proxy_linux_B.samplesRead];
  }

  proxy_linux_B.msg.Name[1].Data_SL_Info.CurrentLength = 27U;
  for (proxy_linux_B.samplesRead = 0; proxy_linux_B.samplesRead < 30;
       proxy_linux_B.samplesRead++) {
    proxy_linux_B.msg.Name[2].Data[proxy_linux_B.samplesRead] = (uint8_T)
      d[proxy_linux_B.samplesRead];
  }

  proxy_linux_B.msg.Name[2].Data_SL_Info.CurrentLength = 30U;
  for (proxy_linux_B.samplesRead = 0; proxy_linux_B.samplesRead < 32;
       proxy_linux_B.samplesRead++) {
    proxy_linux_B.msg.Name[3].Data[proxy_linux_B.samplesRead] = (uint8_T)
      e[proxy_linux_B.samplesRead];
  }

  proxy_linux_B.msg.Name[3].Data_SL_Info.CurrentLength = 32U;
  for (proxy_linux_B.samplesRead = 0; proxy_linux_B.samplesRead < 31;
       proxy_linux_B.samplesRead++) {
    proxy_linux_B.msg.Name[4].Data[proxy_linux_B.samplesRead] = (uint8_T)
      f[proxy_linux_B.samplesRead];
  }

  proxy_linux_B.msg.Name[4].Data_SL_Info.CurrentLength = 31U;
  for (proxy_linux_B.samplesRead = 0; proxy_linux_B.samplesRead < 33;
       proxy_linux_B.samplesRead++) {
    proxy_linux_B.msg.Name[5].Data[proxy_linux_B.samplesRead] = (uint8_T)
      g[proxy_linux_B.samplesRead];
  }

  proxy_linux_B.msg.Name[5].Data_SL_Info.CurrentLength = 33U;
  for (proxy_linux_B.samplesRead = 0; proxy_linux_B.samplesRead < 22;
       proxy_linux_B.samplesRead++) {
    proxy_linux_B.msg.Name[6].Data[proxy_linux_B.samplesRead] = (uint8_T)
      h[proxy_linux_B.samplesRead];
  }

  proxy_linux_B.msg.Name[6].Data_SL_Info.CurrentLength = 22U;
  for (proxy_linux_B.samplesRead = 0; proxy_linux_B.samplesRead < 16;
       proxy_linux_B.samplesRead++) {
    proxy_linux_B.msg.Name[7].Data[proxy_linux_B.samplesRead] = (uint8_T)
      i[proxy_linux_B.samplesRead];
  }

  proxy_linux_B.msg.Name[7].Data_SL_Info.CurrentLength = 16U;
  for (proxy_linux_B.samplesRead = 0; proxy_linux_B.samplesRead < 24;
       proxy_linux_B.samplesRead++) {
    proxy_linux_B.msg.Name[8].Data[proxy_linux_B.samplesRead] = (uint8_T)
      j[proxy_linux_B.samplesRead];
  }

  proxy_linux_B.msg.Name[8].Data_SL_Info.CurrentLength = 24U;

  /* End of MATLAB Function: '<S7>/MATLAB Function - Assign' */

  /* Outputs for Atomic SubSystem: '<S7>/Publish12' */
  /* MATLABSystem: '<S57>/SinkBlock' */
  Pub_proxy_linux_470.publish(&proxy_linux_B.msg);

  /* End of Outputs for SubSystem: '<S7>/Publish12' */

  /* ManualSwitch: '<S15>/Manual Switch1' incorporates:
   *  Constant: '<S15>/Constant'
   *  MATLAB Function: '<S15>/MATLAB Function1'
   */
  if (proxy_linux_P.ManualSwitch1_CurrentSetting_o == 1) {
    proxy_linux_B.rtb_VectorConcatenate_idx_0 = proxy_linux_B.ByteUnpack[7] /
      400.0F;
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_0 = proxy_linux_P.Constant_Value_i;
  }

  /* End of ManualSwitch: '<S15>/Manual Switch1' */

  /* Saturate: '<S7>/Saturation' */
  if (proxy_linux_B.rtb_VectorConcatenate_idx_0 >
      proxy_linux_P.Saturation_UpperSat_g) {
    proxy_linux_B.rtb_VectorConcatenate_idx_0 =
      proxy_linux_P.Saturation_UpperSat_g;
  } else {
    if (proxy_linux_B.rtb_VectorConcatenate_idx_0 <
        proxy_linux_P.Saturation_LowerSat_h) {
      proxy_linux_B.rtb_VectorConcatenate_idx_0 =
        proxy_linux_P.Saturation_LowerSat_h;
    }
  }

  /* End of Saturate: '<S7>/Saturation' */

  /* ManualSwitch: '<S15>/Manual Switch' incorporates:
   *  Constant: '<S15>/Constant'
   *  MATLAB Function: '<S15>/MATLAB Function'
   */
  if (proxy_linux_P.ManualSwitch_CurrentSetting_l == 1) {
    proxy_linux_B.rtb_VectorConcatenate_idx_1 = (proxy_linux_B.ByteUnpack[16] -
      380.0F) / 220.0F;
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_1 = proxy_linux_P.Constant_Value_i;
  }

  /* End of ManualSwitch: '<S15>/Manual Switch' */

  /* Saturate: '<S7>/Saturation1' */
  if (proxy_linux_B.rtb_VectorConcatenate_idx_1 >
      proxy_linux_P.Saturation1_UpperSat_iy) {
    proxy_linux_B.rtb_VectorConcatenate_idx_1 =
      proxy_linux_P.Saturation1_UpperSat_iy;
  } else {
    if (proxy_linux_B.rtb_VectorConcatenate_idx_1 <
        proxy_linux_P.Saturation1_LowerSat_o) {
      proxy_linux_B.rtb_VectorConcatenate_idx_1 =
        proxy_linux_P.Saturation1_LowerSat_o;
    }
  }

  /* End of Saturate: '<S7>/Saturation1' */

  /* Gain: '<S28>/Gain  Aggiustato' */
  proxy_linux_B.rtb_VectorConcatenate_idx_2 = proxy_linux_P.GainAggiustato_Gain *
    proxy_linux_B.ByteUnpack[8];

  /* Sum: '<S32>/Sum1' incorporates:
   *  Constant: '<S32>/Constant'
   *  Gain: '<S32>/Gain Aggiustato'
   */
  proxy_linux_B.Sum1 = proxy_linux_P.Constant_Value_e -
    proxy_linux_P.GainAggiustato_Gain_e * proxy_linux_B.ByteUnpack[15];

  /* MATLAB Function: '<S31>/Pose' incorporates:
   *  Constant: '<S29>/finger width'
   *  Constant: '<S29>/proximal length'
   *  DataTypeConversion: '<S28>/Data Type Conversion'
   *  SignalConversion: '<S37>/TmpSignal ConversionAt SFunction Inport1'
   */
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = 1549.0F - 1260.0F * (real32_T)cos
    ((real_T)proxy_linux_B.Sum1);
  if (proxy_linux_B.rtb_VectorConcatenate_idx_8 < 0.0F) {
    printf("errore LAK \n");
    fflush(stdout);
    proxy_linux_B.rtb_VectorConcatenate_idx_8 = 1.0F;
  }

  proxy_linux_B.LAK = (real32_T)sqrt((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_8);
  proxy_linux_B.xH_tmp_tmp = proxy_linux_B.LAK * proxy_linux_B.LAK;
  proxy_linux_B.rtb_VectorConcatenate_idx_6 =
    (proxy_linux_B.rtb_VectorConcatenate_idx_2 + 117.77F) *
    (proxy_linux_B.rtb_VectorConcatenate_idx_2 + 117.77F);
  proxy_linux_B.rtb_VectorConcatenate_idx_5 =
    ((proxy_linux_B.rtb_VectorConcatenate_idx_6 + -proxy_linux_B.xH_tmp_tmp) +
     18396.0391F) / ((proxy_linux_B.rtb_VectorConcatenate_idx_2 + 117.77F) *
                     2.0F * 135.632F);
  if ((real32_T)fabs((real_T)proxy_linux_B.rtb_VectorConcatenate_idx_5) > 1.0F)
  {
    printf("errore qN");
    fflush(stdout);
    proxy_linux_B.qN = 0.0F;
  } else {
    proxy_linux_B.qN = (real32_T)fabs((real_T)(real32_T)acos((real_T)
      proxy_linux_B.rtb_VectorConcatenate_idx_5)) - 0.1108F;
  }

  proxy_linux_B.rtb_VectorConcatenate_idx_5 = ((proxy_linux_B.xH_tmp_tmp +
    -324.0F) + 1225.0F) / (2.0F * proxy_linux_B.LAK * 35.0F);
  proxy_linux_B.LAK = ((-proxy_linux_B.rtb_VectorConcatenate_idx_6 +
                        proxy_linux_B.xH_tmp_tmp) + 18396.0391F) / (2.0F *
    proxy_linux_B.LAK * 135.632F);
  if ((real32_T)fabs((real_T)proxy_linux_B.rtb_VectorConcatenate_idx_5) > 1.0F)
  {
    printf("errore qK1 \n");
    fflush(stdout);
    proxy_linux_B.rtb_VectorConcatenate_idx_5 = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)
      proxy_linux_B.rtb_VectorConcatenate_idx_5);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.rtb_VectorConcatenate_idx_5 = (real32_T)fabs((real_T)
        (real32_T)acos((real_T)proxy_linux_B.rtb_VectorConcatenate_idx_5));
    } else {
      proxy_linux_B.rtb_VectorConcatenate_idx_5 = (real32_T)fabs((real_T)
        proxy_linux_B.xH_tmp_tmp) + 1.57079637F;
    }
  }

  if ((real32_T)fabs((real_T)proxy_linux_B.LAK) > 1.0F) {
    printf("errore gK2 \n");
    fflush(stdout);
    proxy_linux_B.LAK = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.LAK);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.LAK = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.LAK));
    } else {
      proxy_linux_B.LAK = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  proxy_linux_B.rtb_VectorConcatenate_idx_5 = 3.14159274F -
    ((proxy_linux_B.rtb_VectorConcatenate_idx_5 + proxy_linux_B.LAK) + 0.1108F);
  proxy_linux_B.xH_tmp = (real32_T)cos((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_5);
  proxy_linux_B.xH = -72.0F * proxy_linux_B.xH_tmp;
  proxy_linux_B.rtb_DataTypeConversion_a_idx_1 = (real32_T)sin((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_5);
  proxy_linux_B.yH = 72.0F * proxy_linux_B.rtb_DataTypeConversion_a_idx_1;
  proxy_linux_B.rtb_VectorConcatenate_idx_7 = proxy_linux_B.Sum1 -
    proxy_linux_B.rtb_VectorConcatenate_idx_5;
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)cos((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_7);
  proxy_linux_B.rtb_VectorConcatenate_idx_6 = -35.0F * proxy_linux_B.xH_tmp -
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * 43.0F;
  proxy_linux_B.LAK_tmp_k = (real32_T)sin((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_7);
  proxy_linux_B.LAK = 35.0F * proxy_linux_B.rtb_DataTypeConversion_a_idx_1 -
    proxy_linux_B.LAK_tmp_k * 43.0F;
  proxy_linux_B.xD = proxy_linux_B.rtb_VectorConcatenate_idx_6 -
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * 9.0F;
  proxy_linux_B.rtb_VectorConcatenate_idx_7 = proxy_linux_B.LAK -
    proxy_linux_B.LAK_tmp_k * 9.0F;
  proxy_linux_B.rtb_VectorConcatenate_idx_6 += proxy_linux_B.LAK_tmp_k * 16.0F;
  proxy_linux_B.yI = proxy_linux_B.LAK -
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * 16.0F;
  proxy_linux_B.LAK = proxy_linux_B.yI - (-((real32_T)
    proxy_linux_P.fingerwidth_Value + 3.0F));
  proxy_linux_B.LLI = (real32_T)sqrt((real_T)
    ((proxy_linux_B.rtb_VectorConcatenate_idx_6 - -10.0F) *
     (proxy_linux_B.rtb_VectorConcatenate_idx_6 - -10.0F) + proxy_linux_B.LAK *
     proxy_linux_B.LAK));
  proxy_linux_B.rtb_TmpSignalConversionAtSFu__m = (real32_T)
    proxy_linux_P.fingerwidth_Value * (real32_T)proxy_linux_P.fingerwidth_Value;
  proxy_linux_B.rtb_y_p_idx_1 = proxy_linux_B.LLI * proxy_linux_B.LLI;
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = proxy_linux_B.rtb_y_p_idx_1 -
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__m;
  if (proxy_linux_B.rtb_VectorConcatenate_idx_8 < 0.0F) {
    printf("errore c1 \n");
    fflush(stdout);
    proxy_linux_B.rtb_VectorConcatenate_idx_8 = 0.0F;
  }

  proxy_linux_B.LAK = (real32_T)sqrt((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_8);
  proxy_linux_B.LLI = ((-proxy_linux_B.rtb_TmpSignalConversionAtSFu__m +
                        proxy_linux_B.rtb_y_p_idx_1) + proxy_linux_B.LAK *
                       proxy_linux_B.LAK) / (2.0F * proxy_linux_B.LAK *
    proxy_linux_B.LLI);
  if ((real32_T)fabs((real_T)proxy_linux_B.LLI) > 1.0F) {
    printf("errore qj1 \n");
    fflush(stdout);
    proxy_linux_B.LLI = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.LLI);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.LLI = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.LLI));
    } else {
      proxy_linux_B.LLI = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  proxy_linux_B.rtb_VectorConcatenate_idx_6 = (real32_T)atan((real_T)
    ((-((real32_T)proxy_linux_P.fingerwidth_Value + 3.0F) - proxy_linux_B.yI) /
     (-10.0F - proxy_linux_B.rtb_VectorConcatenate_idx_6))) + proxy_linux_B.LLI;
  if (proxy_linux_B.rtb_VectorConcatenate_idx_6 <= 0.0F) {
    proxy_linux_B.rtb_VectorConcatenate_idx_6 = (real32_T)fabs((real_T)
      proxy_linux_B.rtb_VectorConcatenate_idx_6);
  }

  proxy_linux_B.LLI = proxy_linux_B.xH - proxy_linux_B.xD;
  proxy_linux_B.yI = proxy_linux_B.yH -
    proxy_linux_B.rtb_VectorConcatenate_idx_7;
  proxy_linux_B.LHD = (real32_T)sqrt((real_T)(proxy_linux_B.LLI *
    proxy_linux_B.LLI + proxy_linux_B.yI * proxy_linux_B.yI));
  proxy_linux_B.LLI = (proxy_linux_B.xH - 86.0F *
                       proxy_linux_B.rtb_DataTypeConversion_a_idx_1) -
    proxy_linux_B.xD;
  proxy_linux_B.xH = (proxy_linux_B.yH - 86.0F * proxy_linux_B.xH_tmp) -
    proxy_linux_B.rtb_VectorConcatenate_idx_7;
  proxy_linux_B.LDG = (real32_T)sqrt((real_T)(proxy_linux_B.LLI *
    proxy_linux_B.LLI + proxy_linux_B.xH * proxy_linux_B.xH));
  proxy_linux_B.xH_tmp = proxy_linux_B.LDG * proxy_linux_B.LDG;
  proxy_linux_B.xH_tmp_c = proxy_linux_B.LHD * proxy_linux_B.LHD;
  proxy_linux_B.xH = ((-proxy_linux_B.xH_tmp_c + proxy_linux_B.xH_tmp) + 7396.0F)
    / (2.0F * proxy_linux_B.LDG * 86.0F);
  proxy_linux_B.yI = ((proxy_linux_B.xH_tmp + -4489.0F) + 2116.0F) / (2.0F *
    proxy_linux_B.LDG * 46.0F);
  if ((real32_T)fabs((real_T)proxy_linux_B.xH) > 1.0F) {
    printf("errore qG1 \n");
    fflush(stdout);
    proxy_linux_B.xH = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.xH);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.xH = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.xH));
    } else {
      proxy_linux_B.xH = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  if ((real32_T)fabs((real_T)proxy_linux_B.yI) > 1.0F) {
    printf("errore qG2 \n");
    fflush(stdout);
    proxy_linux_B.yI = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.yI);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.yI = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.yI));
    } else {
      proxy_linux_B.yI = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  proxy_linux_B.yH = -((real32_T)proxy_linux_P.fingerwidth_Value + 3.0F) -
    (real32_T)proxy_linux_P.proximallength_Value * (real32_T)sin((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_6);
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = ((proxy_linux_B.xH_tmp_c +
    -7396.0F) + proxy_linux_B.xH_tmp) / (2.0F * proxy_linux_B.LHD *
    proxy_linux_B.LDG);
  proxy_linux_B.LDG = ((proxy_linux_B.xH_tmp + -2116.0F) + 4489.0F) / (2.0F *
    proxy_linux_B.LDG * 67.0F);
  proxy_linux_B.LHD = ((proxy_linux_B.xH_tmp_c + -1369.0F) + 2704.0F) / (2.0F *
    proxy_linux_B.LHD * 52.0F);
  if ((real32_T)fabs((real_T)proxy_linux_B.rtb_VectorConcatenate_idx_8) > 1.0F)
  {
    printf("errore qD1");
    fflush(stdout);
    proxy_linux_B.rtb_VectorConcatenate_idx_8 = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)
      proxy_linux_B.rtb_VectorConcatenate_idx_8);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)fabs((real_T)
        (real32_T)acos((real_T)proxy_linux_B.rtb_VectorConcatenate_idx_8));
    } else {
      proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)fabs((real_T)
        proxy_linux_B.xH_tmp_tmp) + 1.57079637F;
    }
  }

  if ((real32_T)fabs((real_T)proxy_linux_B.LDG) > 1.0F) {
    printf("errore qD2 \n");
    fflush(stdout);
    proxy_linux_B.LDG = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.LDG);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.LDG = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.LDG));
    } else {
      proxy_linux_B.LDG = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  if ((real32_T)fabs((real_T)proxy_linux_B.LHD) > 1.0F) {
    printf("errore qD3 \n");
    fflush(stdout);
    proxy_linux_B.LHD = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.LHD);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.LHD = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.LHD));
    } else {
      proxy_linux_B.LHD = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  proxy_linux_B.LHD = 3.14159274F - ((proxy_linux_B.rtb_VectorConcatenate_idx_8
    + proxy_linux_B.LDG) + proxy_linux_B.LHD);
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = (proxy_linux_B.Sum1 -
    proxy_linux_B.LHD) - proxy_linux_B.rtb_VectorConcatenate_idx_5;
  proxy_linux_B.rtb_TmpSignalConversionAtSFu__c = (real32_T)sin((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_8);
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)cos((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_8);
  proxy_linux_B.xD = (proxy_linux_B.xD -
                      proxy_linux_B.rtb_VectorConcatenate_idx_8 * 40.0F) +
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__c * 39.0F;
  proxy_linux_B.rtb_VectorConcatenate_idx_7 =
    (proxy_linux_B.rtb_VectorConcatenate_idx_7 -
     proxy_linux_B.rtb_TmpSignalConversionAtSFu__c * 40.0F) -
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * 39.0F;
  proxy_linux_B.rtb_y_p_idx_1 = proxy_linux_B.xD - (-10.0F - (real32_T)
    proxy_linux_P.proximallength_Value * (real32_T)cos((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_6));
  proxy_linux_B.xD = proxy_linux_B.rtb_VectorConcatenate_idx_7 -
    proxy_linux_B.yH;
  proxy_linux_B.LDG = (real32_T)sqrt((real_T)(proxy_linux_B.rtb_y_p_idx_1 *
    proxy_linux_B.rtb_y_p_idx_1 + proxy_linux_B.xD * proxy_linux_B.xD));
  proxy_linux_B.rtb_TmpSignalConversionAtSFu__c = proxy_linux_B.LDG *
    proxy_linux_B.LDG;
  proxy_linux_B.rtb_VectorConcatenate_idx_8 =
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__m;
  if (proxy_linux_B.rtb_VectorConcatenate_idx_8 < 0.0F) {
    printf("errore c2");
    fflush(stdout);
    proxy_linux_B.rtb_VectorConcatenate_idx_8 = 0.0F;
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)sqrt((real_T)
      proxy_linux_B.rtb_VectorConcatenate_idx_8);
  }

  proxy_linux_B.LDG = ((-((real32_T)proxy_linux_P.fingerwidth_Value * (real32_T)
    proxy_linux_P.fingerwidth_Value) +
                        proxy_linux_B.rtb_TmpSignalConversionAtSFu__c) +
                       proxy_linux_B.rtb_VectorConcatenate_idx_8 *
                       proxy_linux_B.rtb_VectorConcatenate_idx_8) / (2.0F *
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * proxy_linux_B.LDG);
  if ((real32_T)fabs((real_T)proxy_linux_B.LDG) > 1.0F) {
    printf("errore qj2 \n");
    fflush(stdout);
    proxy_linux_B.LDG = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.LDG);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.LDG = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.LDG));
    } else {
      proxy_linux_B.LDG = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  if (proxy_linux_B.rtb_y_p_idx_1 <= 0.0F) {
    proxy_linux_B.rtb_VectorConcatenate_idx_7 = (real32_T)atan((real_T)
      ((proxy_linux_B.rtb_VectorConcatenate_idx_7 - proxy_linux_B.yH) /
       proxy_linux_B.rtb_y_p_idx_1));
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_7 = (real32_T)atan((real_T)
      (proxy_linux_B.xD / proxy_linux_B.rtb_y_p_idx_1)) + 3.14159274F;
  }

  proxy_linux_B.rtb_VectorConcatenate_idx_7 = (proxy_linux_B.LDG +
    proxy_linux_B.rtb_VectorConcatenate_idx_7) -
    proxy_linux_B.rtb_VectorConcatenate_idx_6;
  proxy_linux_B.y_l[0] = proxy_linux_B.rtb_VectorConcatenate_idx_6;
  if (proxy_linux_B.rtb_VectorConcatenate_idx_7 <= -1.5707963267948966) {
    proxy_linux_B.y_l[1] = 6.28318548F +
      proxy_linux_B.rtb_VectorConcatenate_idx_7;
  } else {
    proxy_linux_B.y_l[1] = proxy_linux_B.rtb_VectorConcatenate_idx_7;
  }

  proxy_linux_B.y_l[2] = proxy_linux_B.rtb_VectorConcatenate_idx_5;
  proxy_linux_B.y_l[3] = proxy_linux_B.LHD;
  proxy_linux_B.y_l[4] = 3.14159274F - (proxy_linux_B.xH + proxy_linux_B.yI);
  proxy_linux_B.y_l[5] = proxy_linux_B.qN;
  proxy_linux_B.y_l[6] = proxy_linux_B.LAK;
  proxy_linux_B.y_l[7] = proxy_linux_B.rtb_VectorConcatenate_idx_8;

  /* End of MATLAB Function: '<S31>/Pose' */

  /* Gain: '<S20>/Gain  Aggiustato' */
  proxy_linux_B.rtb_VectorConcatenate_idx_3 =
    proxy_linux_P.GainAggiustato_Gain_d * proxy_linux_B.ByteUnpack[8];

  /* Sum: '<S26>/Sum1' incorporates:
   *  Constant: '<S26>/Constant'
   *  Gain: '<S26>/Gain Aggiustato'
   */
  proxy_linux_B.Sum1_b = proxy_linux_P.Constant_Value_f -
    proxy_linux_P.GainAggiustato_Gain_a * proxy_linux_B.ByteUnpack[15];

  /* MATLAB Function: '<S18>/Index New Pose Estimation ' incorporates:
   *  Constant: '<S18>/Sensor1'
   *  SignalConversion: '<S24>/TmpSignal ConversionAt SFunction Inport1'
   */
  proxy_linux_B.LA2K = (real32_T)sqrt((real_T)(1506.56836F - 1174.6F * (real32_T)
    cos((real_T)proxy_linux_B.Sum1_b)));
  proxy_linux_B.rtb_VectorConcatenate_idx_6 = proxy_linux_B.LA2K *
    proxy_linux_B.LA2K;
  proxy_linux_B.rtb_VectorConcatenate_idx_4 = (real32_T)sqrt((real_T)
    ((proxy_linux_B.rtb_VectorConcatenate_idx_6 + 169.0F) - (real32_T)cos
     ((real_T)(2.00712872F - proxy_linux_my_acos((proxy_linux_B.LA2K *
    proxy_linux_B.LA2K + -943.43158F) / (33.56F * proxy_linux_B.LA2K)))) *
     (26.0F * proxy_linux_B.LA2K)));
  proxy_linux_B.rtb_VectorConcatenate_idx_5 =
    ((proxy_linux_B.rtb_VectorConcatenate_idx_6 + -281.56839F) + 1225.0F) /
    (2.0F * proxy_linux_B.LA2K * 35.0F);
  proxy_linux_B.LAK = ((-((proxy_linux_B.rtb_VectorConcatenate_idx_3 + 123.0F) *
    (proxy_linux_B.rtb_VectorConcatenate_idx_3 + 123.0F)) +
                        proxy_linux_B.rtb_VectorConcatenate_idx_4 *
                        proxy_linux_B.rtb_VectorConcatenate_idx_4) + 21806.1328F)
    / (2.0F * proxy_linux_B.rtb_VectorConcatenate_idx_4 * 147.669F);
  proxy_linux_B.LA2K = ((proxy_linux_B.rtb_VectorConcatenate_idx_6 + -169.0F) +
                        proxy_linux_B.rtb_VectorConcatenate_idx_4 *
                        proxy_linux_B.rtb_VectorConcatenate_idx_4) / (2.0F *
    proxy_linux_B.LA2K * proxy_linux_B.rtb_VectorConcatenate_idx_4);
  if (proxy_linux_my_acos(proxy_linux_B.rtb_VectorConcatenate_idx_5) >= 0.0F) {
    proxy_linux_B.xH_tmp_tmp = (real32_T)fabs((real_T)proxy_linux_my_acos
      (proxy_linux_B.rtb_VectorConcatenate_idx_5));
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)fabs((real_T)proxy_linux_my_acos
      (proxy_linux_B.rtb_VectorConcatenate_idx_5)) + 1.57079637F;
  }

  if (proxy_linux_my_acos(proxy_linux_B.LAK) >= 0.0F) {
    proxy_linux_B.rtb_VectorConcatenate_idx_6 = (real32_T)fabs((real_T)
      proxy_linux_my_acos(proxy_linux_B.LAK));
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_6 = (real32_T)fabs((real_T)
      proxy_linux_my_acos(proxy_linux_B.LAK)) + 1.57079637F;
  }

  if (proxy_linux_my_acos(proxy_linux_B.LA2K) >= 0.0F) {
    proxy_linux_B.rtb_VectorConcatenate_idx_5 = (real32_T)fabs((real_T)
      proxy_linux_my_acos(proxy_linux_B.LA2K));
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_5 = (real32_T)fabs((real_T)
      proxy_linux_my_acos(proxy_linux_B.LA2K)) + 1.57079637F;
  }

  proxy_linux_B.rtb_VectorConcatenate_idx_5 = 3.14159274F -
    (((proxy_linux_B.xH_tmp_tmp + proxy_linux_B.rtb_VectorConcatenate_idx_6) +
      proxy_linux_B.rtb_VectorConcatenate_idx_5) + 0.20071286F);
  proxy_linux_B.xH_tmp = (real32_T)cos((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_5);
  proxy_linux_B.xH = -72.0F * proxy_linux_B.xH_tmp;
  proxy_linux_B.rtb_DataTypeConversion_a_idx_1 = (real32_T)sin((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_5);
  proxy_linux_B.yH = 72.0F * proxy_linux_B.rtb_DataTypeConversion_a_idx_1;
  proxy_linux_B.rtb_VectorConcatenate_idx_7 = proxy_linux_B.Sum1_b -
    proxy_linux_B.rtb_VectorConcatenate_idx_5;
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)cos((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_7);
  proxy_linux_B.rtb_VectorConcatenate_idx_6 = -35.0F * proxy_linux_B.xH_tmp -
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * 43.0F;
  proxy_linux_B.LAK_tmp_k = (real32_T)sin((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_7);
  proxy_linux_B.LAK = 35.0F * proxy_linux_B.rtb_DataTypeConversion_a_idx_1 -
    proxy_linux_B.LAK_tmp_k * 43.0F;
  proxy_linux_B.xD = proxy_linux_B.rtb_VectorConcatenate_idx_6 -
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * 9.0F;
  proxy_linux_B.rtb_VectorConcatenate_idx_7 = proxy_linux_B.LAK -
    proxy_linux_B.LAK_tmp_k * 9.0F;
  proxy_linux_B.rtb_VectorConcatenate_idx_6 += proxy_linux_B.LAK_tmp_k * 16.0F;
  proxy_linux_B.yI = proxy_linux_B.LAK -
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * 16.0F;
  proxy_linux_B.LAK = proxy_linux_B.yI - (real32_T)
    -(proxy_linux_P.Sensor1_Value[1] - 1.8);
  proxy_linux_B.LLI = (real32_T)sqrt((real_T)
    ((proxy_linux_B.rtb_VectorConcatenate_idx_6 - -10.0F) *
     (proxy_linux_B.rtb_VectorConcatenate_idx_6 - -10.0F) + proxy_linux_B.LAK *
     proxy_linux_B.LAK));
  proxy_linux_B.LAK_tmp = proxy_linux_P.Sensor1_Value[1] *
    proxy_linux_P.Sensor1_Value[1];
  proxy_linux_B.LAK_tmp_k = proxy_linux_B.LLI * proxy_linux_B.LLI;
  proxy_linux_B.LAK = (real32_T)sqrt((real_T)(proxy_linux_B.LAK_tmp_k -
    (real32_T)proxy_linux_B.LAK_tmp));
  proxy_linux_B.LLI = (((real32_T)-proxy_linux_B.LAK_tmp +
                        proxy_linux_B.LAK_tmp_k) + proxy_linux_B.LAK *
                       proxy_linux_B.LAK) / (2.0F * proxy_linux_B.LAK *
    proxy_linux_B.LLI);
  if (proxy_linux_my_acos(proxy_linux_B.LLI) >= 0.0F) {
    proxy_linux_B.xH_tmp_tmp = (real32_T)fabs((real_T)proxy_linux_my_acos
      (proxy_linux_B.LLI));
  } else {
    if (proxy_linux_B.LLI < -1.0F) {
      proxy_linux_B.LLI = -1.0F;
    } else {
      if (proxy_linux_B.LLI > 1.0F) {
        proxy_linux_B.LLI = 1.0F;
      }
    }

    proxy_linux_B.xH_tmp_tmp = (real32_T)fabs((real_T)proxy_linux_B.LLI) +
      1.57079637F;
  }

  proxy_linux_B.rtb_VectorConcatenate_idx_6 = (real32_T)atan((real_T)(((real32_T)
    -(proxy_linux_P.Sensor1_Value[1] - 1.8) - proxy_linux_B.yI) / (-10.0F -
    proxy_linux_B.rtb_VectorConcatenate_idx_6))) + proxy_linux_B.xH_tmp_tmp;
  proxy_linux_B.yI = proxy_linux_B.xH - proxy_linux_B.xD;
  proxy_linux_B.LLI = proxy_linux_B.yH -
    proxy_linux_B.rtb_VectorConcatenate_idx_7;
  proxy_linux_B.LHD = (real32_T)sqrt((real_T)(proxy_linux_B.yI *
    proxy_linux_B.yI + proxy_linux_B.LLI * proxy_linux_B.LLI));
  proxy_linux_B.xH = (proxy_linux_B.xH - 86.0F *
                      proxy_linux_B.rtb_DataTypeConversion_a_idx_1) -
    proxy_linux_B.xD;
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = (proxy_linux_B.yH - 86.0F *
    proxy_linux_B.xH_tmp) - proxy_linux_B.rtb_VectorConcatenate_idx_7;
  proxy_linux_B.LDG = (real32_T)sqrt((real_T)(proxy_linux_B.xH *
    proxy_linux_B.xH + proxy_linux_B.rtb_VectorConcatenate_idx_8 *
    proxy_linux_B.rtb_VectorConcatenate_idx_8));
  proxy_linux_B.xH_tmp = proxy_linux_B.LDG * proxy_linux_B.LDG;
  proxy_linux_B.xH_tmp_c = proxy_linux_B.LHD * proxy_linux_B.LHD;
  proxy_linux_B.xH = ((-proxy_linux_B.xH_tmp_c + proxy_linux_B.xH_tmp) + 7396.0F)
    / (2.0F * proxy_linux_B.LDG * 86.0F);
  proxy_linux_B.yI = ((proxy_linux_B.xH_tmp + -4489.0F) + 2116.0F) / (2.0F *
    proxy_linux_B.LDG * 46.0F);
  proxy_linux_B.yH = (real32_T)-(proxy_linux_P.Sensor1_Value[1] - 1.8) -
    (real32_T)proxy_linux_P.Sensor1_Value[0] * (real32_T)sin((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_6);
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = ((proxy_linux_B.xH_tmp_c +
    -7396.0F) + proxy_linux_B.xH_tmp) / (2.0F * proxy_linux_B.LHD *
    proxy_linux_B.LDG);
  proxy_linux_B.LDG = ((proxy_linux_B.xH_tmp + -2116.0F) + 4489.0F) / (2.0F *
    proxy_linux_B.LDG * 67.0F);
  proxy_linux_B.LHD = ((proxy_linux_B.xH_tmp_c + -1369.0F) + 2704.0F) / (2.0F *
    proxy_linux_B.LHD * 52.0F);
  if (proxy_linux_B.rtb_VectorConcatenate_idx_8 < -1.0F) {
    proxy_linux_B.LA2K = -1.0F;
  } else if (proxy_linux_B.rtb_VectorConcatenate_idx_8 > 1.0F) {
    proxy_linux_B.LA2K = 1.0F;
  } else {
    proxy_linux_B.LA2K = proxy_linux_B.rtb_VectorConcatenate_idx_8;
  }

  if (proxy_linux_B.LA2K >= 0.0F) {
    if (proxy_linux_B.rtb_VectorConcatenate_idx_8 < -1.0F) {
      proxy_linux_B.rtb_VectorConcatenate_idx_8 = -1.0F;
    } else {
      if (proxy_linux_B.rtb_VectorConcatenate_idx_8 > 1.0F) {
        proxy_linux_B.rtb_VectorConcatenate_idx_8 = 1.0F;
      }
    }

    proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)fabs((real_T)
      proxy_linux_B.rtb_VectorConcatenate_idx_8);
  } else {
    if (proxy_linux_B.rtb_VectorConcatenate_idx_8 < -1.0F) {
      proxy_linux_B.rtb_VectorConcatenate_idx_8 = -1.0F;
    } else {
      if (proxy_linux_B.rtb_VectorConcatenate_idx_8 > 1.0F) {
        proxy_linux_B.rtb_VectorConcatenate_idx_8 = 1.0F;
      }
    }

    proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)fabs((real_T)
      proxy_linux_B.rtb_VectorConcatenate_idx_8) + 1.57079637F;
  }

  if (proxy_linux_B.LDG < -1.0F) {
    proxy_linux_B.LA2K = -1.0F;
  } else if (proxy_linux_B.LDG > 1.0F) {
    proxy_linux_B.LA2K = 1.0F;
  } else {
    proxy_linux_B.LA2K = proxy_linux_B.LDG;
  }

  if (proxy_linux_B.LA2K >= 0.0F) {
    if (proxy_linux_B.LDG < -1.0F) {
      proxy_linux_B.LDG = -1.0F;
    } else {
      if (proxy_linux_B.LDG > 1.0F) {
        proxy_linux_B.LDG = 1.0F;
      }
    }

    proxy_linux_B.LDG = (real32_T)fabs((real_T)proxy_linux_B.LDG);
  } else {
    if (proxy_linux_B.LDG < -1.0F) {
      proxy_linux_B.LDG = -1.0F;
    } else {
      if (proxy_linux_B.LDG > 1.0F) {
        proxy_linux_B.LDG = 1.0F;
      }
    }

    proxy_linux_B.LDG = (real32_T)fabs((real_T)proxy_linux_B.LDG) + 1.57079637F;
  }

  if (proxy_linux_B.LHD < -1.0F) {
    proxy_linux_B.LA2K = -1.0F;
  } else if (proxy_linux_B.LHD > 1.0F) {
    proxy_linux_B.LA2K = 1.0F;
  } else {
    proxy_linux_B.LA2K = proxy_linux_B.LHD;
  }

  if (proxy_linux_B.LA2K >= 0.0F) {
    if (proxy_linux_B.LHD < -1.0F) {
      proxy_linux_B.LHD = -1.0F;
    } else {
      if (proxy_linux_B.LHD > 1.0F) {
        proxy_linux_B.LHD = 1.0F;
      }
    }

    proxy_linux_B.LHD = (real32_T)fabs((real_T)proxy_linux_B.LHD);
  } else {
    if (proxy_linux_B.LHD < -1.0F) {
      proxy_linux_B.LHD = -1.0F;
    } else {
      if (proxy_linux_B.LHD > 1.0F) {
        proxy_linux_B.LHD = 1.0F;
      }
    }

    proxy_linux_B.LHD = (real32_T)fabs((real_T)proxy_linux_B.LHD) + 1.57079637F;
  }

  proxy_linux_B.LHD = 3.14159274F - ((proxy_linux_B.rtb_VectorConcatenate_idx_8
    + proxy_linux_B.LDG) + proxy_linux_B.LHD);
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = (proxy_linux_B.Sum1_b -
    proxy_linux_B.LHD) - proxy_linux_B.rtb_VectorConcatenate_idx_5;
  proxy_linux_B.rtb_TmpSignalConversionAtSFu__c = (real32_T)sin((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_8);
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)cos((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_8);
  proxy_linux_B.xD = (proxy_linux_B.xD -
                      proxy_linux_B.rtb_VectorConcatenate_idx_8 * 40.0F) +
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__c * 39.0F;
  proxy_linux_B.rtb_VectorConcatenate_idx_7 =
    (proxy_linux_B.rtb_VectorConcatenate_idx_7 -
     proxy_linux_B.rtb_TmpSignalConversionAtSFu__c * 40.0F) -
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * 39.0F;
  proxy_linux_B.LA2K = proxy_linux_B.xD - (-10.0F - (real32_T)
    proxy_linux_P.Sensor1_Value[0] * (real32_T)cos((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_6));
  proxy_linux_B.GainAggiustato_g = proxy_linux_B.rtb_VectorConcatenate_idx_7 -
    proxy_linux_B.yH;
  proxy_linux_B.LDG = (real32_T)sqrt((real_T)(proxy_linux_B.LA2K *
    proxy_linux_B.LA2K + proxy_linux_B.GainAggiustato_g *
    proxy_linux_B.GainAggiustato_g));
  proxy_linux_B.rtb_TmpSignalConversionAtSFu__m = proxy_linux_B.LDG *
    proxy_linux_B.LDG;
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)sqrt((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__m - (real32_T)
     (proxy_linux_P.Sensor1_Value[1] * proxy_linux_P.Sensor1_Value[1])));
  proxy_linux_B.LDG = (((real32_T)-(proxy_linux_P.Sensor1_Value[1] *
    proxy_linux_P.Sensor1_Value[1]) +
                        proxy_linux_B.rtb_TmpSignalConversionAtSFu__m) +
                       proxy_linux_B.rtb_VectorConcatenate_idx_8 *
                       proxy_linux_B.rtb_VectorConcatenate_idx_8) / (2.0F *
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * proxy_linux_B.LDG);
  if (proxy_linux_B.LA2K <= 0.0F) {
    proxy_linux_B.rtb_VectorConcatenate_idx_7 = (real32_T)atan((real_T)
      ((proxy_linux_B.rtb_VectorConcatenate_idx_7 - proxy_linux_B.yH) /
       proxy_linux_B.LA2K));
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_7 = (real32_T)atan((real_T)
      (proxy_linux_B.GainAggiustato_g / proxy_linux_B.LA2K)) + 3.14159274F;
  }

  proxy_linux_B.rtb_pose_idx_0 = proxy_linux_B.rtb_VectorConcatenate_idx_6;
  if (proxy_linux_B.LDG < -1.0F) {
    proxy_linux_B.LA2K = -1.0F;
  } else if (proxy_linux_B.LDG > 1.0F) {
    proxy_linux_B.LA2K = 1.0F;
  } else {
    proxy_linux_B.LA2K = proxy_linux_B.LDG;
  }

  if (proxy_linux_B.LA2K >= 0.0F) {
    if (proxy_linux_B.LDG < -1.0F) {
      proxy_linux_B.LDG = -1.0F;
    } else {
      if (proxy_linux_B.LDG > 1.0F) {
        proxy_linux_B.LDG = 1.0F;
      }
    }

    proxy_linux_B.LDG = (real32_T)fabs((real_T)proxy_linux_B.LDG);
  } else {
    if (proxy_linux_B.LDG < -1.0F) {
      proxy_linux_B.LDG = -1.0F;
    } else {
      if (proxy_linux_B.LDG > 1.0F) {
        proxy_linux_B.LDG = 1.0F;
      }
    }

    proxy_linux_B.LDG = (real32_T)fabs((real_T)proxy_linux_B.LDG) + 1.57079637F;
  }

  proxy_linux_B.rtb_pose_idx_1 = (proxy_linux_B.LDG +
    proxy_linux_B.rtb_VectorConcatenate_idx_7) -
    proxy_linux_B.rtb_VectorConcatenate_idx_6;
  proxy_linux_B.rtb_pose_idx_2 = proxy_linux_B.rtb_VectorConcatenate_idx_5;
  proxy_linux_B.rtb_pose_idx_3 = proxy_linux_B.LHD;
  if (proxy_linux_B.xH < -1.0F) {
    proxy_linux_B.rtb_VectorConcatenate_idx_5 = -1.0F;
  } else if (proxy_linux_B.xH > 1.0F) {
    proxy_linux_B.rtb_VectorConcatenate_idx_5 = 1.0F;
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_5 = proxy_linux_B.xH;
  }

  if (proxy_linux_B.rtb_VectorConcatenate_idx_5 >= 0.0F) {
    if (proxy_linux_B.xH < -1.0F) {
      proxy_linux_B.xH = -1.0F;
    } else {
      if (proxy_linux_B.xH > 1.0F) {
        proxy_linux_B.xH = 1.0F;
      }
    }

    proxy_linux_B.xH = (real32_T)fabs((real_T)proxy_linux_B.xH);
  } else {
    if (proxy_linux_B.xH < -1.0F) {
      proxy_linux_B.xH = -1.0F;
    } else {
      if (proxy_linux_B.xH > 1.0F) {
        proxy_linux_B.xH = 1.0F;
      }
    }

    proxy_linux_B.xH = (real32_T)fabs((real_T)proxy_linux_B.xH) + 1.57079637F;
  }

  if (proxy_linux_B.yI < -1.0F) {
    proxy_linux_B.rtb_VectorConcatenate_idx_5 = -1.0F;
  } else if (proxy_linux_B.yI > 1.0F) {
    proxy_linux_B.rtb_VectorConcatenate_idx_5 = 1.0F;
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_5 = proxy_linux_B.yI;
  }

  if (proxy_linux_B.rtb_VectorConcatenate_idx_5 >= 0.0F) {
    if (proxy_linux_B.yI < -1.0F) {
      proxy_linux_B.yI = -1.0F;
    } else {
      if (proxy_linux_B.yI > 1.0F) {
        proxy_linux_B.yI = 1.0F;
      }
    }

    proxy_linux_B.yI = (real32_T)fabs((real_T)proxy_linux_B.yI);
  } else {
    if (proxy_linux_B.yI < -1.0F) {
      proxy_linux_B.yI = -1.0F;
    } else {
      if (proxy_linux_B.yI > 1.0F) {
        proxy_linux_B.yI = 1.0F;
      }
    }

    proxy_linux_B.yI = (real32_T)fabs((real_T)proxy_linux_B.yI) + 1.57079637F;
  }

  proxy_linux_B.rtb_pose_idx_4 = 3.14159274F - (proxy_linux_B.xH +
    proxy_linux_B.yI);
  proxy_linux_B.rtb_pose_idx_5 = (real32_T)fabs((real_T)proxy_linux_my_acos
    ((((proxy_linux_B.rtb_VectorConcatenate_idx_3 + 123.0F) *
       (proxy_linux_B.rtb_VectorConcatenate_idx_3 + 123.0F) +
       -(proxy_linux_B.rtb_VectorConcatenate_idx_4 *
         proxy_linux_B.rtb_VectorConcatenate_idx_4)) + 21806.1328F) /
     ((proxy_linux_B.rtb_VectorConcatenate_idx_3 + 123.0F) * 2.0F * 147.669F)))
    - 0.20071286F;
  proxy_linux_B.rtb_pose_idx_6 = proxy_linux_B.LAK;
  proxy_linux_B.rtb_pose_idx_7 = proxy_linux_B.rtb_VectorConcatenate_idx_8;

  /* ManualSwitch: '<S11>/Manual Switch1' incorporates:
   *  MATLAB Function: '<S18>/Index New Pose Estimation '
   */
  if (proxy_linux_P.ManualSwitch1_CurrentSetting_ox == 1) {
    /* ManualSwitch: '<S19>/Manual Switch1' incorporates:
     *  Constant: '<S19>/Constant1'
     */
    if (proxy_linux_P.ManualSwitch1_CurrentSetting == 1) {
      proxy_linux_B.LA2K = proxy_linux_B.y_l[1];
    } else {
      proxy_linux_B.LA2K = proxy_linux_P.Constant1_Value_d;
    }

    /* End of ManualSwitch: '<S19>/Manual Switch1' */
  } else {
    proxy_linux_B.LA2K = proxy_linux_B.rtb_VectorConcatenate_idx_8;
  }

  /* End of ManualSwitch: '<S11>/Manual Switch1' */

  /* Saturate: '<S7>/Saturation2' */
  if (proxy_linux_B.LA2K > proxy_linux_P.Saturation2_UpperSat) {
    proxy_linux_B.rtb_VectorConcatenate_idx_4 =
      proxy_linux_P.Saturation2_UpperSat;
  } else if (proxy_linux_B.LA2K < proxy_linux_P.Saturation2_LowerSat) {
    proxy_linux_B.rtb_VectorConcatenate_idx_4 =
      proxy_linux_P.Saturation2_LowerSat;
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_4 = proxy_linux_B.LA2K;
  }

  /* End of Saturate: '<S7>/Saturation2' */

  /* ManualSwitch: '<S11>/Manual Switch' incorporates:
   *  MATLAB Function: '<S18>/Index New Pose Estimation '
   */
  if (proxy_linux_P.ManualSwitch_CurrentSetting_bd == 1) {
    /* ManualSwitch: '<S19>/Manual Switch' incorporates:
     *  Constant: '<S19>/Constant1'
     */
    if (proxy_linux_P.ManualSwitch_CurrentSetting == 1) {
      proxy_linux_B.LA2K = proxy_linux_B.y_l[0];
    } else {
      proxy_linux_B.LA2K = proxy_linux_P.Constant1_Value_d;
    }

    /* End of ManualSwitch: '<S19>/Manual Switch' */
  } else {
    proxy_linux_B.LA2K = proxy_linux_B.LAK;
  }

  /* End of ManualSwitch: '<S11>/Manual Switch' */

  /* Saturate: '<S7>/Saturation3' */
  if (proxy_linux_B.LA2K > proxy_linux_P.Saturation3_UpperSat) {
    proxy_linux_B.LA2K = proxy_linux_P.Saturation3_UpperSat;
  } else {
    if (proxy_linux_B.LA2K < proxy_linux_P.Saturation3_LowerSat) {
      proxy_linux_B.LA2K = proxy_linux_P.Saturation3_LowerSat;
    }
  }

  /* End of Saturate: '<S7>/Saturation3' */

  /* Gain: '<S12>/Gain  Aggiustato' */
  proxy_linux_B.GainAggiustato_g = proxy_linux_P.GainAggiustato_Gain_h *
    proxy_linux_B.ByteUnpack[9];

  /* Sum: '<S45>/Sum1' incorporates:
   *  Constant: '<S45>/Constant'
   *  Gain: '<S45>/Gain Aggiustato'
   */
  proxy_linux_B.Sum1_h = proxy_linux_P.Constant_Value_b -
    proxy_linux_P.GainAggiustato_Gain_o * proxy_linux_B.ByteUnpack[14];

  /* ManualSwitch: '<S12>/Manual Switch5' incorporates:
   *  Constant: '<S12>/Constant4'
   *  Constant: '<S12>/Constant5'
   */
  if (proxy_linux_P.ManualSwitch5_CurrentSetting == 1) {
    proxy_linux_B.xH_tmp_tmp = proxy_linux_P.Constant4_Value;
  } else {
    proxy_linux_B.xH_tmp_tmp = proxy_linux_P.Constant5_Value;
  }

  /* End of ManualSwitch: '<S12>/Manual Switch5' */

  /* MATLAB Function: '<S12>/MATLAB Function2' incorporates:
   *  Constant: '<S12>/Constant1'
   *  SignalConversion: '<S43>/TmpSignal ConversionAt SFunction Inport2'
   */
  if (proxy_linux_B.xH_tmp_tmp == 0.0F) {
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__m =
      proxy_linux_P.Constant1_Value_de[0];
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__c =
      proxy_linux_P.Constant1_Value_de[1];
  } else {
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__m =
      proxy_linux_B.GainAggiustato_g;
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__c = proxy_linux_B.Sum1_h;
  }

  /* End of MATLAB Function: '<S12>/MATLAB Function2' */

  /* MATLAB Function: '<S12>/MATLAB Function3' incorporates:
   *  Constant: '<S40>/finger width'
   *  Constant: '<S40>/proximal length'
   *  DataTypeConversion: '<S12>/Data Type Conversion'
   */
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = 1549.0F - 1260.0F * (real32_T)cos
    ((real_T)proxy_linux_B.rtb_TmpSignalConversionAtSFu__c);
  if (proxy_linux_B.rtb_VectorConcatenate_idx_8 < 0.0F) {
    printf("errore LAK \n");
    fflush(stdout);
    proxy_linux_B.rtb_VectorConcatenate_idx_8 = 1.0F;
  }

  proxy_linux_B.LAK = (real32_T)sqrt((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_8);
  proxy_linux_B.xH_tmp_tmp = proxy_linux_B.LAK * proxy_linux_B.LAK;
  proxy_linux_B.rtb_VectorConcatenate_idx_6 =
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__m + 117.77F) *
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__m + 117.77F);
  proxy_linux_B.rtb_VectorConcatenate_idx_5 =
    ((proxy_linux_B.rtb_VectorConcatenate_idx_6 + -proxy_linux_B.xH_tmp_tmp) +
     18396.0391F) / ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__m + 117.77F) *
                     2.0F * 135.632F);
  if ((real32_T)fabs((real_T)proxy_linux_B.rtb_VectorConcatenate_idx_5) > 1.0F)
  {
    printf("errore qN");
    fflush(stdout);
    proxy_linux_B.qN = 0.0F;
  } else {
    proxy_linux_B.qN = (real32_T)fabs((real_T)(real32_T)acos((real_T)
      proxy_linux_B.rtb_VectorConcatenate_idx_5)) - 0.1108F;
  }

  proxy_linux_B.rtb_VectorConcatenate_idx_5 = ((proxy_linux_B.xH_tmp_tmp +
    -324.0F) + 1225.0F) / (2.0F * proxy_linux_B.LAK * 35.0F);
  proxy_linux_B.LAK = ((-proxy_linux_B.rtb_VectorConcatenate_idx_6 +
                        proxy_linux_B.xH_tmp_tmp) + 18396.0391F) / (2.0F *
    proxy_linux_B.LAK * 135.632F);
  if ((real32_T)fabs((real_T)proxy_linux_B.rtb_VectorConcatenate_idx_5) > 1.0F)
  {
    printf("errore qK1 \n");
    fflush(stdout);
    proxy_linux_B.rtb_VectorConcatenate_idx_5 = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)
      proxy_linux_B.rtb_VectorConcatenate_idx_5);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.rtb_VectorConcatenate_idx_5 = (real32_T)fabs((real_T)
        (real32_T)acos((real_T)proxy_linux_B.rtb_VectorConcatenate_idx_5));
    } else {
      proxy_linux_B.rtb_VectorConcatenate_idx_5 = (real32_T)fabs((real_T)
        proxy_linux_B.xH_tmp_tmp) + 1.57079637F;
    }
  }

  if ((real32_T)fabs((real_T)proxy_linux_B.LAK) > 1.0F) {
    printf("errore gK2 \n");
    fflush(stdout);
    proxy_linux_B.LAK = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.LAK);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.LAK = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.LAK));
    } else {
      proxy_linux_B.LAK = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  proxy_linux_B.rtb_VectorConcatenate_idx_5 = 3.14159274F -
    ((proxy_linux_B.rtb_VectorConcatenate_idx_5 + proxy_linux_B.LAK) + 0.1108F);
  proxy_linux_B.xH_tmp = (real32_T)cos((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_5);
  proxy_linux_B.xH = -72.0F * proxy_linux_B.xH_tmp;
  proxy_linux_B.rtb_DataTypeConversion_a_idx_1 = (real32_T)sin((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_5);
  proxy_linux_B.yH = 72.0F * proxy_linux_B.rtb_DataTypeConversion_a_idx_1;
  proxy_linux_B.rtb_VectorConcatenate_idx_7 =
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_VectorConcatenate_idx_5;
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)cos((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_7);
  proxy_linux_B.rtb_VectorConcatenate_idx_6 = -35.0F * proxy_linux_B.xH_tmp -
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * 43.0F;
  proxy_linux_B.LAK_tmp_k = (real32_T)sin((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_7);
  proxy_linux_B.LAK = 35.0F * proxy_linux_B.rtb_DataTypeConversion_a_idx_1 -
    proxy_linux_B.LAK_tmp_k * 43.0F;
  proxy_linux_B.xD = proxy_linux_B.rtb_VectorConcatenate_idx_6 -
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * 9.0F;
  proxy_linux_B.rtb_VectorConcatenate_idx_7 = proxy_linux_B.LAK -
    proxy_linux_B.LAK_tmp_k * 9.0F;
  proxy_linux_B.rtb_VectorConcatenate_idx_6 += proxy_linux_B.LAK_tmp_k * 16.0F;
  proxy_linux_B.yI = proxy_linux_B.LAK -
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * 16.0F;
  proxy_linux_B.LAK = proxy_linux_B.yI - (-((real32_T)
    proxy_linux_P.fingerwidth_Value_n + 3.0F));
  proxy_linux_B.LLI = (real32_T)sqrt((real_T)
    ((proxy_linux_B.rtb_VectorConcatenate_idx_6 - -10.0F) *
     (proxy_linux_B.rtb_VectorConcatenate_idx_6 - -10.0F) + proxy_linux_B.LAK *
     proxy_linux_B.LAK));
  proxy_linux_B.rtb_TmpSignalConversionAtSFu__m = (real32_T)
    proxy_linux_P.fingerwidth_Value_n * (real32_T)
    proxy_linux_P.fingerwidth_Value_n;
  proxy_linux_B.rtb_y_p_idx_1 = proxy_linux_B.LLI * proxy_linux_B.LLI;
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = proxy_linux_B.rtb_y_p_idx_1 -
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__m;
  if (proxy_linux_B.rtb_VectorConcatenate_idx_8 < 0.0F) {
    printf("errore c1 \n");
    fflush(stdout);
    proxy_linux_B.rtb_VectorConcatenate_idx_8 = 0.0F;
  }

  proxy_linux_B.LAK = (real32_T)sqrt((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_8);
  proxy_linux_B.LLI = ((-proxy_linux_B.rtb_TmpSignalConversionAtSFu__m +
                        proxy_linux_B.rtb_y_p_idx_1) + proxy_linux_B.LAK *
                       proxy_linux_B.LAK) / (2.0F * proxy_linux_B.LAK *
    proxy_linux_B.LLI);
  if ((real32_T)fabs((real_T)proxy_linux_B.LLI) > 1.0F) {
    printf("errore qj1 \n");
    fflush(stdout);
    proxy_linux_B.LLI = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.LLI);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.LLI = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.LLI));
    } else {
      proxy_linux_B.LLI = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  proxy_linux_B.rtb_VectorConcatenate_idx_6 = (real32_T)atan((real_T)
    ((-((real32_T)proxy_linux_P.fingerwidth_Value_n + 3.0F) - proxy_linux_B.yI) /
     (-10.0F - proxy_linux_B.rtb_VectorConcatenate_idx_6))) + proxy_linux_B.LLI;
  if (proxy_linux_B.rtb_VectorConcatenate_idx_6 <= 0.0F) {
    proxy_linux_B.rtb_VectorConcatenate_idx_6 = (real32_T)fabs((real_T)
      proxy_linux_B.rtb_VectorConcatenate_idx_6);
  }

  proxy_linux_B.LLI = proxy_linux_B.xH - proxy_linux_B.xD;
  proxy_linux_B.yI = proxy_linux_B.yH -
    proxy_linux_B.rtb_VectorConcatenate_idx_7;
  proxy_linux_B.LHD = (real32_T)sqrt((real_T)(proxy_linux_B.LLI *
    proxy_linux_B.LLI + proxy_linux_B.yI * proxy_linux_B.yI));
  proxy_linux_B.LLI = (proxy_linux_B.xH - 86.0F *
                       proxy_linux_B.rtb_DataTypeConversion_a_idx_1) -
    proxy_linux_B.xD;
  proxy_linux_B.xH = (proxy_linux_B.yH - 86.0F * proxy_linux_B.xH_tmp) -
    proxy_linux_B.rtb_VectorConcatenate_idx_7;
  proxy_linux_B.LDG = (real32_T)sqrt((real_T)(proxy_linux_B.LLI *
    proxy_linux_B.LLI + proxy_linux_B.xH * proxy_linux_B.xH));
  proxy_linux_B.xH_tmp = proxy_linux_B.LDG * proxy_linux_B.LDG;
  proxy_linux_B.xH_tmp_c = proxy_linux_B.LHD * proxy_linux_B.LHD;
  proxy_linux_B.xH = ((-proxy_linux_B.xH_tmp_c + proxy_linux_B.xH_tmp) + 7396.0F)
    / (2.0F * proxy_linux_B.LDG * 86.0F);
  proxy_linux_B.yI = ((proxy_linux_B.xH_tmp + -4489.0F) + 2116.0F) / (2.0F *
    proxy_linux_B.LDG * 46.0F);
  if ((real32_T)fabs((real_T)proxy_linux_B.xH) > 1.0F) {
    printf("errore qG1 \n");
    fflush(stdout);
    proxy_linux_B.xH = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.xH);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.xH = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.xH));
    } else {
      proxy_linux_B.xH = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  if ((real32_T)fabs((real_T)proxy_linux_B.yI) > 1.0F) {
    printf("errore qG2 \n");
    fflush(stdout);
    proxy_linux_B.yI = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.yI);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.yI = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.yI));
    } else {
      proxy_linux_B.yI = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  proxy_linux_B.yH = -((real32_T)proxy_linux_P.fingerwidth_Value_n + 3.0F) -
    (real32_T)proxy_linux_P.proximallength_Value_b * (real32_T)sin((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_6);
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = ((proxy_linux_B.xH_tmp_c +
    -7396.0F) + proxy_linux_B.xH_tmp) / (2.0F * proxy_linux_B.LHD *
    proxy_linux_B.LDG);
  proxy_linux_B.LDG = ((proxy_linux_B.xH_tmp + -2116.0F) + 4489.0F) / (2.0F *
    proxy_linux_B.LDG * 67.0F);
  proxy_linux_B.LHD = ((proxy_linux_B.xH_tmp_c + -1369.0F) + 2704.0F) / (2.0F *
    proxy_linux_B.LHD * 52.0F);
  if ((real32_T)fabs((real_T)proxy_linux_B.rtb_VectorConcatenate_idx_8) > 1.0F)
  {
    printf("errore qD1");
    fflush(stdout);
    proxy_linux_B.rtb_VectorConcatenate_idx_8 = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)
      proxy_linux_B.rtb_VectorConcatenate_idx_8);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)fabs((real_T)
        (real32_T)acos((real_T)proxy_linux_B.rtb_VectorConcatenate_idx_8));
    } else {
      proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)fabs((real_T)
        proxy_linux_B.xH_tmp_tmp) + 1.57079637F;
    }
  }

  if ((real32_T)fabs((real_T)proxy_linux_B.LDG) > 1.0F) {
    printf("errore qD2 \n");
    fflush(stdout);
    proxy_linux_B.LDG = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.LDG);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.LDG = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.LDG));
    } else {
      proxy_linux_B.LDG = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  if ((real32_T)fabs((real_T)proxy_linux_B.LHD) > 1.0F) {
    printf("errore qD3 \n");
    fflush(stdout);
    proxy_linux_B.LHD = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.LHD);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.LHD = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.LHD));
    } else {
      proxy_linux_B.LHD = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  proxy_linux_B.LHD = 3.14159274F - ((proxy_linux_B.rtb_VectorConcatenate_idx_8
    + proxy_linux_B.LDG) + proxy_linux_B.LHD);
  proxy_linux_B.rtb_VectorConcatenate_idx_8 =
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_VectorConcatenate_idx_5;
  proxy_linux_B.rtb_TmpSignalConversionAtSFu__c = (real32_T)sin((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_8);
  proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)cos((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_8);
  proxy_linux_B.xD = (proxy_linux_B.xD -
                      proxy_linux_B.rtb_VectorConcatenate_idx_8 * 40.0F) +
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__c * 39.0F;
  proxy_linux_B.rtb_VectorConcatenate_idx_7 =
    (proxy_linux_B.rtb_VectorConcatenate_idx_7 -
     proxy_linux_B.rtb_TmpSignalConversionAtSFu__c * 40.0F) -
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * 39.0F;
  proxy_linux_B.rtb_y_p_idx_1 = proxy_linux_B.xD - (-10.0F - (real32_T)
    proxy_linux_P.proximallength_Value_b * (real32_T)cos((real_T)
    proxy_linux_B.rtb_VectorConcatenate_idx_6));
  proxy_linux_B.xD = proxy_linux_B.rtb_VectorConcatenate_idx_7 -
    proxy_linux_B.yH;
  proxy_linux_B.LDG = (real32_T)sqrt((real_T)(proxy_linux_B.rtb_y_p_idx_1 *
    proxy_linux_B.rtb_y_p_idx_1 + proxy_linux_B.xD * proxy_linux_B.xD));
  proxy_linux_B.rtb_TmpSignalConversionAtSFu__c = proxy_linux_B.LDG *
    proxy_linux_B.LDG;
  proxy_linux_B.rtb_VectorConcatenate_idx_8 =
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__m;
  if (proxy_linux_B.rtb_VectorConcatenate_idx_8 < 0.0F) {
    printf("errore c2");
    fflush(stdout);
    proxy_linux_B.rtb_VectorConcatenate_idx_8 = 0.0F;
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_8 = (real32_T)sqrt((real_T)
      proxy_linux_B.rtb_VectorConcatenate_idx_8);
  }

  proxy_linux_B.LDG = ((-((real32_T)proxy_linux_P.fingerwidth_Value_n *
    (real32_T)proxy_linux_P.fingerwidth_Value_n) +
                        proxy_linux_B.rtb_TmpSignalConversionAtSFu__c) +
                       proxy_linux_B.rtb_VectorConcatenate_idx_8 *
                       proxy_linux_B.rtb_VectorConcatenate_idx_8) / (2.0F *
    proxy_linux_B.rtb_VectorConcatenate_idx_8 * proxy_linux_B.LDG);
  if ((real32_T)fabs((real_T)proxy_linux_B.LDG) > 1.0F) {
    printf("errore qj2 \n");
    fflush(stdout);
    proxy_linux_B.LDG = 0.0F;
  } else {
    proxy_linux_B.xH_tmp_tmp = (real32_T)acos((real_T)proxy_linux_B.LDG);
    if (proxy_linux_B.xH_tmp_tmp >= 0.0F) {
      proxy_linux_B.LDG = (real32_T)fabs((real_T)(real32_T)acos((real_T)
        proxy_linux_B.LDG));
    } else {
      proxy_linux_B.LDG = (real32_T)fabs((real_T)proxy_linux_B.xH_tmp_tmp) +
        1.57079637F;
    }
  }

  if (proxy_linux_B.rtb_y_p_idx_1 <= 0.0F) {
    proxy_linux_B.rtb_VectorConcatenate_idx_7 = (real32_T)atan((real_T)
      ((proxy_linux_B.rtb_VectorConcatenate_idx_7 - proxy_linux_B.yH) /
       proxy_linux_B.rtb_y_p_idx_1));
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_7 = (real32_T)atan((real_T)
      (proxy_linux_B.xD / proxy_linux_B.rtb_y_p_idx_1)) + 3.14159274F;
  }

  proxy_linux_B.rtb_VectorConcatenate_idx_7 = (proxy_linux_B.LDG +
    proxy_linux_B.rtb_VectorConcatenate_idx_7) -
    proxy_linux_B.rtb_VectorConcatenate_idx_6;
  proxy_linux_B.LDG = proxy_linux_B.rtb_VectorConcatenate_idx_6;
  if (proxy_linux_B.rtb_VectorConcatenate_idx_7 <= -1.5707963267948966) {
    proxy_linux_B.rtb_y_p_idx_1 = 6.28318548F +
      proxy_linux_B.rtb_VectorConcatenate_idx_7;
  } else {
    proxy_linux_B.rtb_y_p_idx_1 = proxy_linux_B.rtb_VectorConcatenate_idx_7;
  }

  proxy_linux_B.rtb_y_p_idx_2 = proxy_linux_B.rtb_VectorConcatenate_idx_5;
  proxy_linux_B.rtb_y_p_idx_4 = 3.14159274F - (proxy_linux_B.xH +
    proxy_linux_B.yI);
  proxy_linux_B.rtb_y_p_idx_5 = proxy_linux_B.qN;
  proxy_linux_B.rtb_y_p_idx_6 = proxy_linux_B.LAK;

  /* Saturate: '<S7>/Saturation4' */
  if (proxy_linux_B.rtb_y_p_idx_1 > proxy_linux_P.Saturation4_UpperSat) {
    proxy_linux_B.qN = proxy_linux_P.Saturation4_UpperSat;
  } else if (proxy_linux_B.rtb_y_p_idx_1 < proxy_linux_P.Saturation4_LowerSat) {
    proxy_linux_B.qN = proxy_linux_P.Saturation4_LowerSat;
  } else {
    proxy_linux_B.qN = proxy_linux_B.rtb_y_p_idx_1;
  }

  /* End of Saturate: '<S7>/Saturation4' */

  /* Saturate: '<S7>/Saturation5' incorporates:
   *  MATLAB Function: '<S12>/MATLAB Function3'
   */
  if (proxy_linux_B.rtb_VectorConcatenate_idx_6 >
      proxy_linux_P.Saturation5_UpperSat) {
    proxy_linux_B.rtb_VectorConcatenate_idx_5 =
      proxy_linux_P.Saturation5_UpperSat;
  } else if (proxy_linux_B.rtb_VectorConcatenate_idx_6 <
             proxy_linux_P.Saturation5_LowerSat) {
    proxy_linux_B.rtb_VectorConcatenate_idx_5 =
      proxy_linux_P.Saturation5_LowerSat;
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_5 =
      proxy_linux_B.rtb_VectorConcatenate_idx_6;
  }

  /* End of Saturate: '<S7>/Saturation5' */

  /* ManualSwitch: '<S14>/Manual Switch' incorporates:
   *  Constant: '<S14>/Constant1'
   *  MATLAB Function: '<S14>/Pose Estimation'
   */
  if (proxy_linux_P.ManualSwitch_CurrentSetting_bx == 1) {
    /* Saturate: '<S14>/Saturation' */
    if (proxy_linux_B.ByteUnpack[10] > proxy_linux_P.Saturation_UpperSat_b) {
      proxy_linux_B.xH_tmp_tmp = proxy_linux_P.Saturation_UpperSat_b;
    } else if (proxy_linux_B.ByteUnpack[10] <
               proxy_linux_P.Saturation_LowerSat_b) {
      proxy_linux_B.xH_tmp_tmp = proxy_linux_P.Saturation_LowerSat_b;
    } else {
      proxy_linux_B.xH_tmp_tmp = proxy_linux_B.ByteUnpack[10];
    }

    /* End of Saturate: '<S14>/Saturation' */
    proxy_linux_B.rtb_VectorConcatenate_idx_6 = proxy_linux_B.xH_tmp_tmp /
      900.0F;
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_6 = proxy_linux_P.Constant1_Value_g;
  }

  /* End of ManualSwitch: '<S14>/Manual Switch' */

  /* Saturate: '<S7>/Saturation6' */
  if (proxy_linux_B.rtb_VectorConcatenate_idx_6 >
      proxy_linux_P.Saturation6_UpperSat) {
    proxy_linux_B.rtb_VectorConcatenate_idx_6 =
      proxy_linux_P.Saturation6_UpperSat;
  } else {
    if (proxy_linux_B.rtb_VectorConcatenate_idx_6 <
        proxy_linux_P.Saturation6_LowerSat) {
      proxy_linux_B.rtb_VectorConcatenate_idx_6 =
        proxy_linux_P.Saturation6_LowerSat;
    }
  }

  /* End of Saturate: '<S7>/Saturation6' */

  /* ManualSwitch: '<S13>/Manual Switch' incorporates:
   *  Constant: '<S13>/Constant1'
   *  MATLAB Function: '<S13>/Pose Estimation'
   */
  if (proxy_linux_P.ManualSwitch_CurrentSetting_c == 1) {
    /* Saturate: '<S13>/Saturation' */
    if (proxy_linux_B.ByteUnpack[11] > proxy_linux_P.Saturation_UpperSat_c) {
      proxy_linux_B.xH_tmp_tmp = proxy_linux_P.Saturation_UpperSat_c;
    } else if (proxy_linux_B.ByteUnpack[11] <
               proxy_linux_P.Saturation_LowerSat_l) {
      proxy_linux_B.xH_tmp_tmp = proxy_linux_P.Saturation_LowerSat_l;
    } else {
      proxy_linux_B.xH_tmp_tmp = proxy_linux_B.ByteUnpack[11];
    }

    /* End of Saturate: '<S13>/Saturation' */
    proxy_linux_B.rtb_VectorConcatenate_idx_7 = proxy_linux_B.xH_tmp_tmp /
      950.0F;
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_7 = proxy_linux_P.Constant1_Value;
  }

  /* End of ManualSwitch: '<S13>/Manual Switch' */

  /* Saturate: '<S7>/Saturation7' */
  if (proxy_linux_B.rtb_VectorConcatenate_idx_7 >
      proxy_linux_P.Saturation7_UpperSat) {
    proxy_linux_B.rtb_VectorConcatenate_idx_7 =
      proxy_linux_P.Saturation7_UpperSat;
  } else {
    if (proxy_linux_B.rtb_VectorConcatenate_idx_7 <
        proxy_linux_P.Saturation7_LowerSat) {
      proxy_linux_B.rtb_VectorConcatenate_idx_7 =
        proxy_linux_P.Saturation7_LowerSat;
    }
  }

  /* End of Saturate: '<S7>/Saturation7' */

  /* MATLAB Function: '<S10>/MATLAB Function' */
  proxy_linux_B.xD = (-proxy_linux_B.ByteUnpack[13] + 460.0F) / 50.0F / 2.0F;

  /* Saturate: '<S7>/Saturation8' */
  if (proxy_linux_B.xD > proxy_linux_P.Saturation8_UpperSat) {
    proxy_linux_B.xD = proxy_linux_P.Saturation8_UpperSat;
  } else {
    if (proxy_linux_B.xD < proxy_linux_P.Saturation8_LowerSat) {
      proxy_linux_B.xD = proxy_linux_P.Saturation8_LowerSat;
    }
  }

  /* End of Saturate: '<S7>/Saturation8' */

  /* DiscreteTransferFcn: '<S2>/Filt 1' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.Filt1 = proxy_linux_P.Filt1_NumCoef[1] *
      proxy_linux_DW.Filt1_states;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S2>/Filt 1' */

  /* DiscreteTransferFcn: '<S2>/Filt 2' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.Filt2 = proxy_linux_P.Filt2_NumCoef[1] *
      proxy_linux_DW.Filt2_states;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S2>/Filt 2' */

  /* DiscreteTransferFcn: '<S2>/Filt 3' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.Filt3 = proxy_linux_P.Filt3_NumCoef[1] *
      proxy_linux_DW.Filt3_states;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S2>/Filt 3' */

  /* DiscreteTransferFcn: '<S2>/Filt 4' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.Filt4 = proxy_linux_P.Filt4_NumCoef[1] *
      proxy_linux_DW.Filt4_states;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S2>/Filt 4' */

  /* DiscreteTransferFcn: '<S2>/Filt 5' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.Filt5 = proxy_linux_P.Filt5_NumCoef[1] *
      proxy_linux_DW.Filt5_states;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S2>/Filt 5' */

  /* DiscreteTransferFcn: '<S2>/Filt 6' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_B.Filt6 = proxy_linux_P.Filt6_NumCoef[1] *
      proxy_linux_DW.Filt6_states;
    proxy_linux_B.samplesRead++;
  }

  /* End of DiscreteTransferFcn: '<S2>/Filt 6' */

  /* Outputs for Atomic SubSystem: '<S2>/Subscribe' */
  /* MATLABSystem: '<S8>/SourceBlock' incorporates:
   *  Inport: '<S9>/In1'
   */
  b_varargout_1 = Sub_proxy_linux_437.getLatestMessage
    (&proxy_linux_B.b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  if (b_varargout_1) {
    proxy_linux_B.In1 = proxy_linux_B.b_varargout_2;
  }

  /* End of MATLABSystem: '<S8>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S8>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<S2>/Subscribe' */

  /* SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport2' incorporates:
   *  MATLAB Function: '<S18>/Jacobian2'
   */
  proxy_linux_B.rtb_TmpSignalConversionAtSFu__m =
    proxy_linux_B.rtb_VectorConcatenate_idx_3;
  proxy_linux_B.rtb_TmpSignalConversionAtSFu__c = proxy_linux_B.Sum1_b;

  /* MATLAB Function: '<S18>/Jacobian2' incorporates:
   *  Constant: '<S18>/Sensor1'
   *  SignalConversion: '<S25>/TmpSignal ConversionAt SFunction Inport2'
   *  UnitDelay: '<S18>/Unit Delay1'
   *  UnitDelay: '<S18>/Unit Delay3'
   */
  proxy_linux_B.rtb_DataTypeConversion_a_idx_1 = (proxy_linux_B.Sum1_b -
    proxy_linux_DW.UnitDelay3_DSTATE[1]) / 0.01F;
  proxy_linux_B.yH = (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_5);
  proxy_linux_B.LAK_tmp_k = proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2;
  proxy_linux_B.LAK_tmp_b = proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1;
  proxy_linux_B.LAK_tmp_p = (real32_T)cos((real_T)proxy_linux_B.LAK_tmp_b);
  proxy_linux_B.LAK_tmp_b = (real32_T)sin((real_T)proxy_linux_B.LAK_tmp_b);
  proxy_linux_B.LAK_tmp_c = (real32_T)cos((real_T)((proxy_linux_B.Sum1_b -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4));
  proxy_linux_B.LAK_tmp_f = (real32_T)sin((real_T)proxy_linux_B.LAK_tmp_k);
  proxy_linux_B.LAK_tmp_k = (real32_T)cos((real_T)proxy_linux_B.LAK_tmp_k);
  proxy_linux_B.LAK_tmp_g = (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1);
  proxy_linux_B.LAK = ((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_b
    - proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_2)) * 16.0F) *
    (proxy_linux_B.LAK_tmp_c * (67.0F * proxy_linux_B.LAK_tmp_g)) - (((((((37.0F
    * (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)
    sin((real_T)proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)
    cos((real_T)(proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_2)) * 9.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_3)
    - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_3) -
     proxy_linux_B.rtb_pose_idx_2)) * 27.0F) * proxy_linux_B.LAK_tmp_k +
    (((((86.0F * (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_2) - 37.0F *
         (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin
        ((real_T)(proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_2)) * 43.0F)
       - (real32_T)sin((real_T)(proxy_linux_B.Sum1_b -
    proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_3) -
     proxy_linux_B.rtb_pose_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_3) -
     proxy_linux_B.rtb_pose_idx_2)) * 27.0F) * proxy_linux_B.LAK_tmp_f) *
    (((real32_T)sin((real_T)((proxy_linux_B.Sum1_b -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
      (real32_T)cos((real_T)((proxy_linux_B.Sum1_b -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
     proxy_linux_B.LAK_tmp_b + ((real32_T)cos((real_T)((proxy_linux_B.Sum1_b -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_3)
    - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) * proxy_linux_B.LAK_tmp_p) +
    (((((real32_T)cos((real_T)(proxy_linux_B.Sum1_b -
    proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)
       cos((real_T)((proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_3) -
                    proxy_linux_B.rtb_pose_idx_2)) * 40.0F) - (real32_T)sin
      ((real_T)((proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_3) -
                proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
     proxy_linux_B.LAK_tmp_p - ((((real32_T)cos((real_T)(proxy_linux_B.Sum1_b -
    proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)
    sin((real_T)((proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_3) -
                 proxy_linux_B.rtb_pose_idx_2)) * 40.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_b - proxy_linux_B.rtb_pose_idx_3) -
     proxy_linux_B.rtb_pose_idx_2)) * 39.0F) * proxy_linux_B.LAK_tmp_b) *
    (proxy_linux_B.LAK_tmp_c * 67.0F)) * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.Sum1_b = (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_5);
  proxy_linux_B.LLI = ((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * (67.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1))) - (((((((37.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)sin
    ((real_T)proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) + (((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) - ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * 67.0F)) *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH = (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_5);
  proxy_linux_B.yI = ((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * (67.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1))) - (((((((37.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)sin
    ((real_T)proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) + (((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) - ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * 67.0F)) *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_tmp_tmp = 35.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2);
  proxy_linux_B.xH_tmp_tmp = ((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F + proxy_linux_B.xH_tmp_tmp_tmp) -
    (real32_T)sin((real_T)(proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_2)) * 16.0F;
  proxy_linux_B.xH_tmp = proxy_linux_B.xH_tmp_tmp * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_0) - ((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_tmp_l = proxy_linux_B.LAK_tmp_b * 67.0F * (real32_T)cos
    ((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4));
  proxy_linux_B.xH_tmp_c = ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    proxy_linux_B.xH_tmp_tmp_l;
  proxy_linux_B.xH_tmp_g = (real32_T)proxy_linux_P.Sensor1_Value[1] * (real32_T)
    cos((real_T)proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_m = (real32_T)proxy_linux_P.Sensor1_Value[0] -
    proxy_linux_B.rtb_pose_idx_6;
  proxy_linux_B.LAK_tmp_c = proxy_linux_B.xH_tmp_g -
    proxy_linux_B.rtb_pose_idx_6 * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_n = (real32_T)proxy_linux_P.Sensor1_Value[1] * (real32_T)
    sin((real_T)proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_tmp_ld = ((((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    ((real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
     (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) +
    ((((real32_T)cos((real_T)(proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
     (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    ((real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 67.0F)) *
    proxy_linux_B.LAK_tmp_f + ((((((37.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (((real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
      (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
     proxy_linux_B.LAK_tmp_k) + ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (proxy_linux_B.LAK_tmp_k * 67.0F * (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2))));
  proxy_linux_B.xH_tmp_p = (proxy_linux_B.xH_tmp_c - ((((((37.0F * (real32_T)cos
    ((real_T)proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)))) - proxy_linux_B.xH_tmp_tmp_ld *
    proxy_linux_B.LAK_tmp_p;
  proxy_linux_B.xH_tmp_g += proxy_linux_B.xH_tmp_m * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_j = proxy_linux_B.LAK_tmp_p * 67.0F * (real32_T)cos
    ((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4));
  proxy_linux_B.xH_tmp_m = proxy_linux_B.xH_tmp_n - proxy_linux_B.xH_tmp_m *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_d = proxy_linux_B.xH_tmp_p * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_0) + proxy_linux_B.xH_tmp_tmp * ((real32_T)cos
    ((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) *
    (67.0F * (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1)));
  proxy_linux_B.xH_tmp_n += proxy_linux_B.rtb_pose_idx_6 * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.rtb_pose_idx_6 = 67.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_gu = proxy_linux_B.LAK_tmp_b * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_dh = proxy_linux_B.LAK_tmp_p * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_dy = (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * (67.0F *
    proxy_linux_B.rtb_pose_idx_7);
  proxy_linux_B.xH_tmp_p = proxy_linux_B.rtb_pose_idx_6 *
    proxy_linux_B.LAK_tmp_g * (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) *
    proxy_linux_B.LAK_tmp_c * ((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) - ((((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * (67.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1))) - (((((((37.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)sin
    ((real_T)proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) + (((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) - ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * 67.0F)) *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_0)) *
    proxy_linux_B.xH_tmp_n - proxy_linux_B.xH_tmp_p * (proxy_linux_B.LAK_tmp_c *
    (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_0))) * (real32_T)cos
    ((real_T)proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_n += (((proxy_linux_B.xH_tmp * proxy_linux_B.xH_tmp_dy +
    proxy_linux_B.xH_tmp * (proxy_linux_B.xH_tmp_tmp_l * proxy_linux_B.xH_tmp_g))
    - proxy_linux_B.xH_tmp * (proxy_linux_B.xH_tmp_j * proxy_linux_B.xH_tmp_m))
    - proxy_linux_B.xH_tmp_d * proxy_linux_B.LAK_tmp_c) / (((35.0F * (real32_T)
    sin((real_T)proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * (67.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1))) - (((((((37.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)sin
    ((real_T)proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) + (((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) - ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * 67.0F)) *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_0));
  proxy_linux_B.xH_tmp_l = proxy_linux_B.xH_tmp_tmp_tmp - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 18.0F;
  proxy_linux_B.xH_tmp_tmp = (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 18.0F;
  proxy_linux_B.xH_tmp_tmp_tmp = proxy_linux_B.xH_tmp_tmp + 35.0F * (real32_T)
    sin((real_T)proxy_linux_B.rtb_pose_idx_2);
  proxy_linux_B.xH_tmp_o = (((real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) + (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) +
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F;
  proxy_linux_B.xH_tmp_tmp_l = 67.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_b = proxy_linux_B.xH_tmp_tmp_l * proxy_linux_B.LAK_tmp_b *
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4));
  proxy_linux_B.xH_tmp_nu = (((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F + (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F;
  xH_tmp = (real32_T)sin((real_T)(proxy_linux_B.rtb_TmpSignalConversionAtSFu__c
    - proxy_linux_B.rtb_pose_idx_2)) * 43.0F + (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F;
  proxy_linux_B.rtb_pose_idx_6 = ((((((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    proxy_linux_B.xH_tmp_b - ((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * (proxy_linux_B.rtb_pose_idx_6 *
    proxy_linux_B.LAK_tmp_p * (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)))) -
    ((((((37.0F * (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_2) + 86.0F *
          (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos
         ((real_T)(proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
                   proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos
        ((real_T)(proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
                  proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
      (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
     (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
     (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    proxy_linux_B.xH_tmp_gu)) - proxy_linux_B.xH_tmp_tmp_ld *
    proxy_linux_B.xH_tmp_dh;
  proxy_linux_B.xH_tmp_c = ((((proxy_linux_B.xH_tmp_o * proxy_linux_B.LAK_tmp_f *
    (((real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
      (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
     (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
     (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) * proxy_linux_B.xH_tmp +
    proxy_linux_B.xH_tmp_c * proxy_linux_B.xH_tmp) + proxy_linux_B.xH_tmp_nu *
    proxy_linux_B.LAK_tmp_k * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) * proxy_linux_B.xH_tmp) - ((((real32_T)cos
    ((real_T)(proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    proxy_linux_B.xH_tmp_j * proxy_linux_B.xH_tmp) - (((35.0F * (real32_T)sin
    ((real_T)proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * (67.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1))) - (((((((37.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)sin
    ((real_T)proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) + (((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) - ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * 67.0F)) *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_0)) * ((real32_T)cos
    ((real_T)(proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_2)) * 43.0F - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F)) - proxy_linux_B.xH_tmp_d * xH_tmp;
  proxy_linux_B.xH_tmp_j = proxy_linux_B.LAK_tmp_f * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_0);
  proxy_linux_B.xH_tmp_d = proxy_linux_B.LAK_tmp_k * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_0);
  xH_tmp *= (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * (67.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1));
  proxy_linux_B.xH_tmp_tmp_l = proxy_linux_B.xH_tmp_tmp_l *
    proxy_linux_B.LAK_tmp_p * (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4));
  proxy_linux_B.xH = ((proxy_linux_B.xH_tmp_c * -(((proxy_linux_B.xH_tmp_g *
    proxy_linux_B.xH_tmp_gu + proxy_linux_B.rtb_pose_idx_7 * (real32_T)cos
    ((real_T)proxy_linux_B.rtb_pose_idx_0)) - proxy_linux_B.LAK_tmp_c *
    proxy_linux_B.LAK_tmp_g) - proxy_linux_B.xH_tmp_m * proxy_linux_B.xH_tmp_dh)
                       / (proxy_linux_B.xH_tmp_p * proxy_linux_B.rtb_pose_idx_7)
                       - (real32_T)fabs((real_T)(proxy_linux_B.xH_tmp_n *
    ((proxy_linux_B.rtb_pose_idx_6 * (proxy_linux_B.xH * proxy_linux_B.xH) /
      ((((35.0F * (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_2) -
          (real32_T)sin((real_T)(proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * (67.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1))) - (((((((37.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)sin
    ((real_T)proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) + (((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) - ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * 67.0F)) *
        (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_0)) * (real32_T)cos
       ((real_T)proxy_linux_B.rtb_pose_idx_5)) + (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_5)) * (proxy_linux_B.LLI * proxy_linux_B.LLI)) /
    (proxy_linux_B.xH_tmp_p * ((proxy_linux_B.xH_tmp_tmp_tmp -
    proxy_linux_B.xH_tmp_l * (real32_T)tan((real_T)proxy_linux_B.rtb_pose_idx_5))
    * proxy_linux_B.xH_tmp_dy)))) * ((proxy_linux_B.rtb_VectorConcatenate_idx_3
    - proxy_linux_DW.UnitDelay3_DSTATE[0]) / 0.01F * 2.0F) /
                       proxy_linux_B.rtb_DataTypeConversion_a_idx_1) -
                      proxy_linux_B.xH_tmp_n * (proxy_linux_B.yI *
    proxy_linux_B.yI) * (proxy_linux_B.xH_tmp_tmp -
    ((((((proxy_linux_B.xH_tmp_tmp_tmp - proxy_linux_B.xH_tmp_l * (real32_T)tan
          ((real_T)proxy_linux_B.rtb_pose_idx_5)) * proxy_linux_B.xH_tmp_j *
         proxy_linux_B.xH_tmp_o * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) + (proxy_linux_B.xH_tmp_tmp_tmp -
    proxy_linux_B.xH_tmp_l * (real32_T)tan((real_T)proxy_linux_B.rtb_pose_idx_5))
         * proxy_linux_B.xH_tmp_b * ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F)) +
        (proxy_linux_B.xH_tmp_tmp_tmp - proxy_linux_B.xH_tmp_l * (real32_T)tan
         ((real_T)proxy_linux_B.rtb_pose_idx_5)) * proxy_linux_B.xH_tmp_d *
        proxy_linux_B.xH_tmp_nu * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)))) - (proxy_linux_B.xH_tmp_tmp_tmp -
    proxy_linux_B.xH_tmp_l * (real32_T)tan((real_T)proxy_linux_B.rtb_pose_idx_5))
       * xH_tmp) - (proxy_linux_B.xH_tmp_tmp_tmp - proxy_linux_B.xH_tmp_l *
                    (real32_T)tan((real_T)proxy_linux_B.rtb_pose_idx_5)) *
      proxy_linux_B.xH_tmp_tmp_l * ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F)) -
     proxy_linux_B.rtb_pose_idx_6 * (18.0F * (real32_T)tan((real_T)
    proxy_linux_B.rtb_pose_idx_5) * (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)))) / (((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * (67.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1))) - (((((((37.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)sin
    ((real_T)proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) + (((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) - ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * 67.0F)) *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_0))) /
                      (proxy_linux_B.xH_tmp_p * ((proxy_linux_B.xH_tmp_tmp_tmp -
    proxy_linux_B.xH_tmp_l * (real32_T)tan((real_T)proxy_linux_B.rtb_pose_idx_5))
    * proxy_linux_B.xH_tmp_dy))) / 2.0F;
  if ((proxy_linux_B.xH == 0.0F) || rtIsNaNF(proxy_linux_B.xH) || rtIsInfF
      (proxy_linux_B.xH)) {
    proxy_linux_B.rtb_VectorConcatenate_idx_3 = proxy_linux_DW.UnitDelay1_DSTATE;
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_3 = -(real32_T)fabs((real_T)
      proxy_linux_B.xH);
  }

  proxy_linux_B.JTcomp_p[0] = ((((((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) * proxy_linux_B.xH_tmp_gu - 16.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_0) *
    proxy_linux_B.LAK_tmp_b * (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2))) - ((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * proxy_linux_B.LAK_tmp_g) -
    ((35.0F * (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_2) - (real32_T)
      sin((real_T)(proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
                   proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos
     ((real_T)(proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_2)) * 16.0F) *
    (proxy_linux_B.LAK_tmp_p * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_0))) * (proxy_linux_B.yH * proxy_linux_B.yH *
    67.0F * (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4))) + ((35.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * (67.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1)))) - (((((((37.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)sin
    ((real_T)proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) + (((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) - ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * 67.0F)) *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_0)) * -proxy_linux_B.xH_tmp
    / (proxy_linux_B.xH_tmp_p * ((proxy_linux_B.xH_tmp_tmp_tmp -
         proxy_linux_B.xH_tmp_l * (real32_T)tan((real_T)
          proxy_linux_B.rtb_pose_idx_5)) * (real32_T)cos((real_T)
         proxy_linux_B.rtb_pose_idx_5)));
  proxy_linux_B.JTcomp_p[1] = proxy_linux_B.xH_tmp_c * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_0) / proxy_linux_B.xH_tmp_p -
    (((((((proxy_linux_B.xH_tmp_tmp_tmp - proxy_linux_B.xH_tmp_l * (real32_T)tan
           ((real_T)proxy_linux_B.rtb_pose_idx_5)) * proxy_linux_B.xH_tmp_j *
          proxy_linux_B.xH_tmp_o * (((real32_T)sin((real_T)
             ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
            40.0F + (real32_T)cos((real_T)
             ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
            39.0F) * (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
             proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
             ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
            40.0F - (real32_T)sin((real_T)
             ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
            39.0F) * (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
             proxy_linux_B.rtb_pose_idx_1))) + (proxy_linux_B.xH_tmp_tmp_tmp -
           proxy_linux_B.xH_tmp_l * (real32_T)tan((real_T)
            proxy_linux_B.rtb_pose_idx_5)) * proxy_linux_B.xH_tmp_b *
          ((((real32_T)cos((real_T)
              (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
              (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
             ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
            40.0F) - (real32_T)cos((real_T)
            ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
           39.0F)) + (proxy_linux_B.xH_tmp_tmp_tmp - proxy_linux_B.xH_tmp_l *
                      (real32_T)tan((real_T)proxy_linux_B.rtb_pose_idx_5)) *
         proxy_linux_B.xH_tmp_d * proxy_linux_B.xH_tmp_nu * (((real32_T)sin
           ((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
                      proxy_linux_B.rtb_pose_idx_3) -
                     proxy_linux_B.rtb_pose_idx_2)) * 40.0F + (real32_T)cos
           ((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
                      proxy_linux_B.rtb_pose_idx_3) -
                     proxy_linux_B.rtb_pose_idx_2)) * 39.0F) * (real32_T)sin
          ((real_T)(proxy_linux_B.rtb_pose_idx_0 + proxy_linux_B.rtb_pose_idx_1))
          + ((real32_T)cos((real_T)
            ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
             40.0F - (real32_T)sin((real_T)
            ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
             39.0F) * (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
            proxy_linux_B.rtb_pose_idx_1)))) - (proxy_linux_B.xH_tmp_tmp_tmp -
         proxy_linux_B.xH_tmp_l * (real32_T)tan((real_T)
          proxy_linux_B.rtb_pose_idx_5)) * xH_tmp) -
       (proxy_linux_B.xH_tmp_tmp_tmp - proxy_linux_B.xH_tmp_l * (real32_T)tan
        ((real_T)proxy_linux_B.rtb_pose_idx_5)) * proxy_linux_B.xH_tmp_tmp_l *
       ((((real32_T)cos((real_T)(proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
            proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
           (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
            proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
          ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
            proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
         40.0F) - (real32_T)sin((real_T)
         ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
           proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
        39.0F)) - (((35.0F * (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_2)
                     - (real32_T)sin((real_T)
          (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
           proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
         (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
          proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * ((real32_T)cos((real_T)
         ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
           proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) *
        (67.0F * (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1))) -
                   (((((((37.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
              (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
             (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
            ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
                       40.0F) - (real32_T)cos((real_T)
           ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
             proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
                      27.0F) * (real32_T)cos((real_T)
          (proxy_linux_B.rtb_pose_idx_4 - proxy_linux_B.rtb_pose_idx_2)) +
                     (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
              (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
               proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
             (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
            ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
                       40.0F) - (real32_T)sin((real_T)
           ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
             proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
                      27.0F) * (real32_T)sin((real_T)
          (proxy_linux_B.rtb_pose_idx_4 - proxy_linux_B.rtb_pose_idx_2))) *
                    (((real32_T)sin((real_T)
           ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
             proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
                      40.0F + (real32_T)cos((real_T)
           ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
             proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
                      39.0F) * (real32_T)sin((real_T)
          (proxy_linux_B.rtb_pose_idx_0 + proxy_linux_B.rtb_pose_idx_1)) +
                     ((real32_T)cos((real_T)
           ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
             proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
                      40.0F - (real32_T)sin((real_T)
           ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
             proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
                      39.0F) * (real32_T)cos((real_T)
          (proxy_linux_B.rtb_pose_idx_0 + proxy_linux_B.rtb_pose_idx_1))) +
                    (((((real32_T)cos((real_T)
             (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
             (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
            ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
                       40.0F) - (real32_T)sin((real_T)
           ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
             proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
                      39.0F) * (real32_T)cos((real_T)
          (proxy_linux_B.rtb_pose_idx_0 + proxy_linux_B.rtb_pose_idx_1)) -
                     ((((real32_T)cos((real_T)
             (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
             (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
            ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
              proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
                       40.0F) - (real32_T)cos((real_T)
           ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
             proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) *
                      39.0F) * (real32_T)sin((real_T)
          (proxy_linux_B.rtb_pose_idx_0 + proxy_linux_B.rtb_pose_idx_1))) *
                    ((real32_T)cos((real_T)
          ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
            proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) *
                     67.0F)) * (real32_T)cos((real_T)
        proxy_linux_B.rtb_pose_idx_0)) * proxy_linux_B.xH_tmp_tmp) -
     proxy_linux_B.rtb_pose_idx_6 * (18.0F * (real32_T)tan((real_T)
       proxy_linux_B.rtb_pose_idx_5) * (real32_T)cos((real_T)
       (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
        proxy_linux_B.rtb_pose_idx_2)))) * proxy_linux_B.xH_tmp /
    (proxy_linux_B.xH_tmp_p * (proxy_linux_B.xH_tmp_tmp_tmp -
      proxy_linux_B.xH_tmp_l * (real32_T)tan((real_T)
       proxy_linux_B.rtb_pose_idx_5)));
  proxy_linux_B.JTcomp_p[2] = -(proxy_linux_B.xH_tmp_n *
    ((proxy_linux_B.rtb_pose_idx_6 * (proxy_linux_B.Sum1_b *
    proxy_linux_B.Sum1_b) / ((((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * (67.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_pose_idx_1))) - (((((((37.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_2) + 86.0F * (real32_T)sin
    ((real_T)proxy_linux_B.rtb_pose_idx_2)) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_pose_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 27.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_4 -
    proxy_linux_B.rtb_pose_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F +
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) + (((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F) + (real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)cos((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1)) - ((((real32_T)cos((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
     proxy_linux_B.rtb_pose_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 40.0F) -
    (real32_T)cos((real_T)((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
    proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_2)) * 39.0F) *
    (real32_T)sin((real_T)(proxy_linux_B.rtb_pose_idx_0 +
    proxy_linux_B.rtb_pose_idx_1))) * ((real32_T)cos((real_T)
    ((proxy_linux_B.rtb_TmpSignalConversionAtSFu__c -
      proxy_linux_B.rtb_pose_idx_3) - proxy_linux_B.rtb_pose_idx_4)) * 67.0F)) *
    (real32_T)cos((real_T)proxy_linux_B.rtb_pose_idx_0)) * (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_5)) + (real32_T)cos((real_T)
    proxy_linux_B.rtb_pose_idx_5)) * (proxy_linux_B.LAK * proxy_linux_B.LAK)) /
    (proxy_linux_B.xH_tmp_p * ((proxy_linux_B.xH_tmp_tmp_tmp -
    proxy_linux_B.xH_tmp_l * (real32_T)tan((real_T)proxy_linux_B.rtb_pose_idx_5))
    * proxy_linux_B.xH_tmp_dy)));
  proxy_linux_B.JTcomp_p[3] = proxy_linux_B.rtb_VectorConcatenate_idx_3;

  /* MATLAB Function: '<S11>/MATLAB Function' incorporates:
   *  Gain: '<S11>/Gain'
   *  Gain: '<S11>/Gain1'
   *  Gain: '<S2>/Gain3'
   *  Gain: '<S2>/Gain7'
   */
  proxy_linux_MATLABFunction(proxy_linux_B.JTcomp_p, proxy_linux_P.Gain_Gain_g *
    (proxy_linux_P.Gain3_Gain * proxy_linux_B.Filt6), proxy_linux_P.Gain1_Gain_a
    * (proxy_linux_P.Gain7_Gain * proxy_linux_B.Filt5),
    &proxy_linux_B.sf_MATLABFunction_o);

  /* SignalConversion: '<S36>/TmpSignal ConversionAt SFunction Inport2' incorporates:
   *  MATLAB Function: '<S31>/Jacobian2'
   */
  proxy_linux_B.rtb_pose_idx_0 = proxy_linux_B.rtb_VectorConcatenate_idx_2;
  proxy_linux_B.yI = proxy_linux_B.Sum1;

  /* MATLAB Function: '<S31>/Jacobian2' incorporates:
   *  Constant: '<S29>/finger width'
   *  Constant: '<S29>/proximal length'
   *  DataTypeConversion: '<S28>/Data Type Conversion'
   *  SignalConversion: '<S36>/TmpSignal ConversionAt SFunction Inport2'
   *  UnitDelay: '<S31>/Unit Delay1'
   *  UnitDelay: '<S31>/Unit Delay3'
   */
  xH_tmp = proxy_linux_B.Sum1 - proxy_linux_B.y_l[2];
  proxy_linux_B.rtb_DataTypeConversion_a_idx_1 = (real32_T)sin((real_T)
    proxy_linux_B.y_l[2]);
  proxy_linux_B.LAK_tmp_k = (real32_T)cos((real_T)xH_tmp);
  proxy_linux_B.LAK_tmp_b = proxy_linux_B.Sum1 - proxy_linux_B.y_l[3];
  proxy_linux_B.xH_tmp_o = proxy_linux_B.LAK_tmp_b - proxy_linux_B.y_l[2];
  proxy_linux_B.xH_tmp_j = (real32_T)cos((real_T)proxy_linux_B.xH_tmp_o);
  proxy_linux_B.xH_tmp = (real32_T)cos((real_T)proxy_linux_B.y_l[2]);
  LLI_tmp_tmp = (real32_T)sin((real_T)xH_tmp);
  xH_tmp = LLI_tmp_tmp * 43.0F;
  proxy_linux_B.xH_tmp_d = (real32_T)sin((real_T)proxy_linux_B.xH_tmp_o);
  proxy_linux_B.xH_tmp_tmp = proxy_linux_B.y_l[4] - proxy_linux_B.y_l[2];
  proxy_linux_B.LAK_tmp_p = proxy_linux_B.xH_tmp_d * 40.0F;
  proxy_linux_B.xH_tmp_nu = proxy_linux_B.xH_tmp_j * 40.0F;
  proxy_linux_B.xH_tmp_b = proxy_linux_B.y_l[0] + proxy_linux_B.y_l[1];
  LLI_tmp = proxy_linux_B.LAK_tmp_k * 9.0F;
  proxy_linux_B.xH_tmp_c = proxy_linux_B.xH_tmp_d * 39.0F;
  proxy_linux_B.LAK_tmp_g = (real32_T)cos((real_T)proxy_linux_B.xH_tmp_b);
  LLI_tmp_0 = proxy_linux_B.LAK_tmp_k * 16.0F;
  proxy_linux_B.Sum1_b = LLI_tmp_tmp * 9.0F;
  proxy_linux_B.rtb_pose_idx_1 = proxy_linux_B.xH_tmp_j * 39.0F;
  proxy_linux_B.xH_tmp_b = (real32_T)sin((real_T)proxy_linux_B.xH_tmp_b);
  proxy_linux_B.LAK_tmp_b = (real32_T)cos((real_T)(proxy_linux_B.LAK_tmp_b -
    proxy_linux_B.y_l[4]));
  proxy_linux_B.xH_tmp_o = proxy_linux_B.xH_tmp_d * 27.0F;
  proxy_linux_B.rtb_pose_idx_2 = (real32_T)sin((real_T)proxy_linux_B.xH_tmp_tmp);
  proxy_linux_B.LAK = proxy_linux_B.LAK_tmp_p + proxy_linux_B.rtb_pose_idx_1;
  proxy_linux_B.xH_tmp_p = proxy_linux_B.LAK * proxy_linux_B.xH_tmp_b;
  proxy_linux_B.rtb_pose_idx_6 = proxy_linux_B.xH_tmp_nu -
    proxy_linux_B.xH_tmp_c;
  proxy_linux_B.yH = proxy_linux_B.xH_tmp_p + proxy_linux_B.rtb_pose_idx_6 *
    proxy_linux_B.LAK_tmp_g;
  proxy_linux_B.rtb_pose_idx_3 = proxy_linux_B.LAK_tmp_k * 43.0F;
  proxy_linux_B.rtb_pose_idx_4 = LLI_tmp_tmp * 16.0F;
  proxy_linux_B.rtb_pose_idx_5 = (real32_T)cos((real_T)proxy_linux_B.y_l[0]);
  LLI_tmp_tmp_tmp_tmp = 35.0F * proxy_linux_B.rtb_DataTypeConversion_a_idx_1;
  proxy_linux_B.rtb_pose_idx_7 = LLI_tmp_tmp_tmp_tmp - xH_tmp;
  proxy_linux_B.LLI = proxy_linux_B.rtb_pose_idx_7 - LLI_tmp_0;
  LLI_tmp_tmp_0 = ((LLI_tmp_0 - proxy_linux_B.Sum1_b) - proxy_linux_B.LAK_tmp_p)
    - proxy_linux_B.rtb_pose_idx_1;
  LLI_tmp_tmp_1 = proxy_linux_B.xH_tmp_j * 27.0F;
  LLI_tmp_tmp_2 = (real32_T)cos((real_T)proxy_linux_B.xH_tmp_tmp);
  LLI_tmp_tmp_3 = ((LLI_tmp + proxy_linux_B.rtb_pose_idx_4) +
                   proxy_linux_B.xH_tmp_nu) - proxy_linux_B.xH_tmp_c;
  proxy_linux_B.xH_tmp_gu = ((((86.0F * proxy_linux_B.xH_tmp - 37.0F *
    proxy_linux_B.rtb_DataTypeConversion_a_idx_1) - xH_tmp) -
    proxy_linux_B.Sum1_b) - proxy_linux_B.LAK_tmp_p) - proxy_linux_B.xH_tmp_o;
  proxy_linux_B.xH_tmp_dh = ((((37.0F * proxy_linux_B.xH_tmp + 86.0F *
    proxy_linux_B.rtb_DataTypeConversion_a_idx_1) - proxy_linux_B.rtb_pose_idx_3)
    - LLI_tmp) - proxy_linux_B.xH_tmp_nu) - LLI_tmp_tmp_1;
  LLI_tmp_tmp_4 = proxy_linux_B.xH_tmp_dh * LLI_tmp_tmp_2 +
    proxy_linux_B.xH_tmp_gu * proxy_linux_B.rtb_pose_idx_2;
  LLI_tmp_tmp_tmp = (real32_T)sin((real_T)proxy_linux_B.y_l[1]);
  LLI_tmp_tmp_5 = proxy_linux_B.LAK_tmp_b * (67.0F * LLI_tmp_tmp_tmp);
  proxy_linux_B.rtb_DataTypeConversion_a_idx_1 = proxy_linux_B.LLI *
    LLI_tmp_tmp_5 - (LLI_tmp_tmp_4 * proxy_linux_B.yH + (LLI_tmp_tmp_3 *
    proxy_linux_B.LAK_tmp_g - LLI_tmp_tmp_0 * proxy_linux_B.xH_tmp_b) *
                     (proxy_linux_B.LAK_tmp_b * 67.0F)) *
    proxy_linux_B.rtb_pose_idx_5;
  proxy_linux_B.xH = (real32_T)sin((real_T)proxy_linux_B.y_l[5]);
  proxy_linux_B.xH_tmp_tmp = (real32_T)sin((real_T)proxy_linux_B.y_l[0]);
  proxy_linux_B.xH_tmp_tmp_tmp = 35.0F * proxy_linux_B.xH_tmp;
  proxy_linux_B.xH_tmp_tmp_l = (proxy_linux_B.rtb_pose_idx_3 +
    proxy_linux_B.xH_tmp_tmp_tmp) - proxy_linux_B.rtb_pose_idx_4;
  proxy_linux_B.xH_tmp = proxy_linux_B.xH_tmp_tmp_l *
    proxy_linux_B.rtb_pose_idx_5 - proxy_linux_B.LLI * proxy_linux_B.xH_tmp_tmp;
  proxy_linux_B.xH_tmp_tmp_ld = proxy_linux_B.xH_tmp_b * 67.0F *
    proxy_linux_B.LAK_tmp_b;
  proxy_linux_B.xH_tmp_c = LLI_tmp_tmp_0 * proxy_linux_B.xH_tmp_tmp_ld;
  proxy_linux_B.xH_tmp_g = (real32_T)proxy_linux_P.fingerwidth_Value *
    proxy_linux_B.rtb_pose_idx_5;
  proxy_linux_B.xH_tmp_m = (real32_T)proxy_linux_P.proximallength_Value -
    proxy_linux_B.y_l[6];
  proxy_linux_B.LAK_tmp_c = proxy_linux_B.xH_tmp_g - proxy_linux_B.y_l[6] *
    proxy_linux_B.xH_tmp_tmp;
  proxy_linux_B.xH_tmp_n = (real32_T)proxy_linux_P.fingerwidth_Value *
    proxy_linux_B.xH_tmp_tmp;
  proxy_linux_B.LAK_tmp_f = (proxy_linux_B.xH_tmp_gu *
    proxy_linux_B.rtb_pose_idx_6 + LLI_tmp_tmp_3 * (proxy_linux_B.xH_tmp_d *
    67.0F)) * proxy_linux_B.rtb_pose_idx_2 + (proxy_linux_B.xH_tmp_dh *
    (proxy_linux_B.rtb_pose_idx_6 * LLI_tmp_tmp_2) + LLI_tmp_tmp_3 *
    (LLI_tmp_tmp_2 * 67.0F * proxy_linux_B.xH_tmp_j));
  proxy_linux_B.xH_tmp_p = (proxy_linux_B.xH_tmp_c - LLI_tmp_tmp_4 *
    proxy_linux_B.xH_tmp_p) - proxy_linux_B.LAK_tmp_f * proxy_linux_B.LAK_tmp_g;
  proxy_linux_B.xH_tmp_g += proxy_linux_B.xH_tmp_m * proxy_linux_B.xH_tmp_tmp;
  proxy_linux_B.xH_tmp_j = proxy_linux_B.LAK_tmp_g * 67.0F *
    proxy_linux_B.LAK_tmp_b;
  proxy_linux_B.xH_tmp_m = proxy_linux_B.xH_tmp_n - proxy_linux_B.xH_tmp_m *
    proxy_linux_B.rtb_pose_idx_5;
  proxy_linux_B.xH_tmp_d = proxy_linux_B.xH_tmp_p * proxy_linux_B.xH_tmp_tmp +
    proxy_linux_B.xH_tmp_tmp_l * LLI_tmp_tmp_5;
  proxy_linux_B.xH_tmp_n += proxy_linux_B.y_l[6] * proxy_linux_B.rtb_pose_idx_5;
  proxy_linux_B.rtb_pose_idx_6 = 67.0F * proxy_linux_B.xH_tmp_tmp;
  proxy_linux_B.xH_tmp_gu = proxy_linux_B.xH_tmp_b *
    proxy_linux_B.rtb_pose_idx_5;
  proxy_linux_B.xH_tmp_dh = proxy_linux_B.LAK_tmp_g *
    proxy_linux_B.rtb_pose_idx_5;
  proxy_linux_B.xH_tmp_dy = (real32_T)cos((real_T)proxy_linux_B.y_l[5]);
  proxy_linux_B.xH_tmp_l = proxy_linux_B.LAK_tmp_b * (67.0F * proxy_linux_B.y_l
    [7]);
  proxy_linux_B.xH_tmp_p = proxy_linux_B.rtb_pose_idx_6 * LLI_tmp_tmp_tmp *
    proxy_linux_B.LAK_tmp_b * proxy_linux_B.LAK_tmp_c * proxy_linux_B.LLI -
    (proxy_linux_B.rtb_DataTypeConversion_a_idx_1 * proxy_linux_B.xH_tmp_n -
     proxy_linux_B.xH_tmp_p * (proxy_linux_B.LAK_tmp_c *
      proxy_linux_B.xH_tmp_tmp)) * proxy_linux_B.rtb_pose_idx_5;
  proxy_linux_B.xH_tmp_n += (((proxy_linux_B.xH_tmp * proxy_linux_B.xH_tmp_l +
    proxy_linux_B.xH_tmp * (proxy_linux_B.xH_tmp_tmp_ld * proxy_linux_B.xH_tmp_g))
    - proxy_linux_B.xH_tmp * (proxy_linux_B.xH_tmp_j * proxy_linux_B.xH_tmp_m))
    - proxy_linux_B.xH_tmp_d * proxy_linux_B.LAK_tmp_c) /
    proxy_linux_B.rtb_DataTypeConversion_a_idx_1;
  proxy_linux_B.xH_tmp_tmp = (real32_T)tan((real_T)proxy_linux_B.y_l[5]);
  proxy_linux_B.xH_tmp_tmp_l = LLI_tmp_tmp * 18.0F;
  proxy_linux_B.xH_tmp_tmp_tmp = (proxy_linux_B.xH_tmp_tmp_l +
    LLI_tmp_tmp_tmp_tmp) - (proxy_linux_B.xH_tmp_tmp_tmp -
    proxy_linux_B.LAK_tmp_k * 18.0F) * proxy_linux_B.xH_tmp_tmp;
  proxy_linux_B.xH_tmp_o += (xH_tmp + proxy_linux_B.Sum1_b) +
    proxy_linux_B.LAK_tmp_p;
  proxy_linux_B.xH_tmp_tmp_ld = 67.0F * proxy_linux_B.rtb_pose_idx_5;
  proxy_linux_B.xH_tmp_b = proxy_linux_B.xH_tmp_tmp_ld * proxy_linux_B.xH_tmp_b *
    proxy_linux_B.LAK_tmp_b;
  proxy_linux_B.xH_tmp_nu = ((proxy_linux_B.rtb_pose_idx_3 + LLI_tmp) +
    proxy_linux_B.xH_tmp_nu) + LLI_tmp_tmp_1;
  xH_tmp += LLI_tmp_0;
  proxy_linux_B.rtb_pose_idx_6 = (((((proxy_linux_B.rtb_pose_idx_7 -
    proxy_linux_B.Sum1_b) - proxy_linux_B.LAK_tmp_p) -
    proxy_linux_B.rtb_pose_idx_1) * proxy_linux_B.xH_tmp_b - proxy_linux_B.LLI *
    (proxy_linux_B.rtb_pose_idx_6 * proxy_linux_B.LAK_tmp_g *
     proxy_linux_B.LAK_tmp_b)) - LLI_tmp_tmp_4 * (proxy_linux_B.LAK *
    proxy_linux_B.xH_tmp_gu)) - proxy_linux_B.LAK_tmp_f *
    proxy_linux_B.xH_tmp_dh;
  proxy_linux_B.xH_tmp_l = proxy_linux_B.xH_tmp_p *
    (proxy_linux_B.xH_tmp_tmp_tmp * proxy_linux_B.xH_tmp_l);
  proxy_linux_B.xH = (((((((proxy_linux_B.xH_tmp_o *
    proxy_linux_B.rtb_pose_idx_2 * proxy_linux_B.yH * proxy_linux_B.xH_tmp +
    proxy_linux_B.xH_tmp_c * proxy_linux_B.xH_tmp) + proxy_linux_B.xH_tmp_nu *
    LLI_tmp_tmp_2 * proxy_linux_B.yH * proxy_linux_B.xH_tmp) - LLI_tmp_tmp_3 *
    proxy_linux_B.xH_tmp_j * proxy_linux_B.xH_tmp) -
    proxy_linux_B.rtb_DataTypeConversion_a_idx_1 * (proxy_linux_B.rtb_pose_idx_3
    - proxy_linux_B.rtb_pose_idx_4)) - proxy_linux_B.xH_tmp_d * xH_tmp) *
                       -(((proxy_linux_B.xH_tmp_g * proxy_linux_B.xH_tmp_gu +
    proxy_linux_B.y_l[7] * proxy_linux_B.rtb_pose_idx_5) -
    proxy_linux_B.LAK_tmp_c * LLI_tmp_tmp_tmp) - proxy_linux_B.xH_tmp_m *
    proxy_linux_B.xH_tmp_dh) / (proxy_linux_B.xH_tmp_p * proxy_linux_B.y_l[7]) -
                       (real32_T)fabs((real_T)(proxy_linux_B.xH_tmp_n *
    ((proxy_linux_B.rtb_pose_idx_6 * (proxy_linux_B.xH * proxy_linux_B.xH) /
      (proxy_linux_B.rtb_DataTypeConversion_a_idx_1 * proxy_linux_B.xH_tmp_dy) +
      proxy_linux_B.xH_tmp_dy) * (proxy_linux_B.rtb_DataTypeConversion_a_idx_1 *
    proxy_linux_B.rtb_DataTypeConversion_a_idx_1)) / proxy_linux_B.xH_tmp_l)) *
                       ((proxy_linux_B.rtb_VectorConcatenate_idx_2 -
    proxy_linux_DW.UnitDelay3_DSTATE_c[0]) / 0.01F * 2.0F) /
                       ((proxy_linux_B.Sum1 -
    proxy_linux_DW.UnitDelay3_DSTATE_c[1]) / 0.01F)) - proxy_linux_B.xH_tmp_n *
                      (proxy_linux_B.rtb_DataTypeConversion_a_idx_1 *
                       proxy_linux_B.rtb_DataTypeConversion_a_idx_1) *
                      (proxy_linux_B.xH_tmp_tmp_l -
                       (((((proxy_linux_B.xH_tmp_tmp_tmp *
    (proxy_linux_B.rtb_pose_idx_2 * proxy_linux_B.rtb_pose_idx_5) *
    proxy_linux_B.xH_tmp_o * proxy_linux_B.yH + proxy_linux_B.xH_tmp_tmp_tmp *
    proxy_linux_B.xH_tmp_b * LLI_tmp_tmp_0) + proxy_linux_B.xH_tmp_tmp_tmp *
    (LLI_tmp_tmp_2 * proxy_linux_B.rtb_pose_idx_5) * proxy_linux_B.xH_tmp_nu *
    proxy_linux_B.yH) - proxy_linux_B.xH_tmp_tmp_tmp * (LLI_tmp_tmp_5 * xH_tmp))
    - proxy_linux_B.xH_tmp_tmp_tmp * (proxy_linux_B.xH_tmp_tmp_ld *
    proxy_linux_B.LAK_tmp_g * proxy_linux_B.LAK_tmp_b) * LLI_tmp_tmp_3) -
                        proxy_linux_B.rtb_pose_idx_6 * (18.0F *
    proxy_linux_B.xH_tmp_tmp * proxy_linux_B.LAK_tmp_k)) /
                       proxy_linux_B.rtb_DataTypeConversion_a_idx_1) /
                      proxy_linux_B.xH_tmp_l) / 2.0F;
  if ((proxy_linux_B.xH == 0.0F) || rtIsNaNF(proxy_linux_B.xH) || rtIsInfF
      (proxy_linux_B.xH)) {
    proxy_linux_B.rtb_VectorConcatenate_idx_2 =
      proxy_linux_DW.UnitDelay1_DSTATE_m;
  } else {
    proxy_linux_B.rtb_VectorConcatenate_idx_2 = -(real32_T)fabs((real_T)
      proxy_linux_B.xH);
  }

  /* SignalConversion: '<S41>/TmpSignal ConversionAt SFunction Inport2' incorporates:
   *  MATLAB Function: '<S12>/Jacobian2'
   */
  proxy_linux_B.rtb_pose_idx_1 = proxy_linux_B.GainAggiustato_g;
  proxy_linux_B.rtb_pose_idx_2 = proxy_linux_B.Sum1_h;

  /* MATLAB Function: '<S12>/Jacobian2' incorporates:
   *  Constant: '<S40>/finger width'
   *  Constant: '<S40>/proximal length'
   *  MATLAB Function: '<S12>/MATLAB Function3'
   *  SignalConversion: '<S41>/TmpSignal ConversionAt SFunction Inport2'
   *  UnitDelay: '<S12>/Unit Delay1'
   *  UnitDelay: '<S12>/Unit Delay3'
   */
  proxy_linux_B.rtb_DataTypeConversion_a_idx_1 = (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_5);
  proxy_linux_B.LAK_tmp_k = proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2;
  proxy_linux_B.LAK_tmp_b = (real32_T)cos((real_T)proxy_linux_B.LAK_tmp_k);
  proxy_linux_B.LAK_tmp_p = proxy_linux_B.Sum1_h - proxy_linux_B.LHD;
  proxy_linux_B.xH_tmp_o = proxy_linux_B.LAK_tmp_p - proxy_linux_B.rtb_y_p_idx_2;
  proxy_linux_B.LAK_tmp_c = (real32_T)cos((real_T)proxy_linux_B.xH_tmp_o);
  proxy_linux_B.xH_tmp_b = (real32_T)sin((real_T)proxy_linux_B.LAK_tmp_k);
  proxy_linux_B.LAK_tmp_k = proxy_linux_B.xH_tmp_b * 43.0F;
  proxy_linux_B.LAK_tmp_f = (real32_T)sin((real_T)proxy_linux_B.xH_tmp_o);
  proxy_linux_B.LAK_tmp_g = proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2;
  proxy_linux_B.Sum1 = proxy_linux_B.LAK_tmp_f * 40.0F;
  proxy_linux_B.xH_tmp_nu = proxy_linux_B.LAK_tmp_c * 40.0F;
  proxy_linux_B.Sum1_b = proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1;
  LLI_tmp_tmp_tmp_tmp = proxy_linux_B.LAK_tmp_b * 9.0F;
  proxy_linux_B.xH_tmp = proxy_linux_B.LAK_tmp_f * 39.0F;
  proxy_linux_B.LAK = (real32_T)cos((real_T)proxy_linux_B.Sum1_b);
  xH_tmp = proxy_linux_B.LAK_tmp_b * 16.0F;
  proxy_linux_B.xH = proxy_linux_B.xH_tmp_b * 9.0F;
  proxy_linux_B.LLI = proxy_linux_B.LAK_tmp_c * 39.0F;
  proxy_linux_B.Sum1_b = (real32_T)sin((real_T)proxy_linux_B.Sum1_b);
  proxy_linux_B.LAK_tmp_p = (real32_T)cos((real_T)(proxy_linux_B.LAK_tmp_p -
    proxy_linux_B.rtb_y_p_idx_4));
  proxy_linux_B.xH_tmp_o = proxy_linux_B.LAK_tmp_f * 27.0F;
  LLI_tmp_tmp_0 = (real32_T)sin((real_T)proxy_linux_B.LAK_tmp_g);
  LLI_tmp_0 = proxy_linux_B.Sum1 + proxy_linux_B.LLI;
  proxy_linux_B.xH_tmp_n = LLI_tmp_0 * proxy_linux_B.Sum1_b;
  proxy_linux_B.xH_tmp_tmp_ld = proxy_linux_B.xH_tmp_nu - proxy_linux_B.xH_tmp;
  LLI_tmp_tmp_2 = proxy_linux_B.xH_tmp_n + proxy_linux_B.xH_tmp_tmp_ld *
    proxy_linux_B.LAK;
  LLI_tmp = proxy_linux_B.LAK_tmp_b * 43.0F;
  LLI_tmp_tmp_1 = proxy_linux_B.xH_tmp_b * 16.0F;
  proxy_linux_B.yH = 35.0F * (real32_T)sin((real_T)proxy_linux_B.rtb_y_p_idx_2)
    - proxy_linux_B.LAK_tmp_k;
  proxy_linux_B.rtb_pose_idx_3 = proxy_linux_B.yH - xH_tmp;
  LLI_tmp_tmp_3 = ((xH_tmp - proxy_linux_B.xH) - proxy_linux_B.Sum1) -
    proxy_linux_B.LLI;
  LAK_tmp_tmp = proxy_linux_B.LAK_tmp_c * 27.0F;
  LLI_tmp_tmp_4 = (real32_T)cos((real_T)proxy_linux_B.LAK_tmp_g);
  LLI_tmp_tmp_tmp = ((LLI_tmp_tmp_tmp_tmp + LLI_tmp_tmp_1) +
                     proxy_linux_B.xH_tmp_nu) - proxy_linux_B.xH_tmp;
  proxy_linux_B.xH_tmp_p = ((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2)) - proxy_linux_B.LAK_tmp_k) - proxy_linux_B.xH)
    - proxy_linux_B.Sum1) - proxy_linux_B.xH_tmp_o;
  proxy_linux_B.xH_tmp_j = ((((37.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2) + 86.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2)) - LLI_tmp) - LLI_tmp_tmp_tmp_tmp) -
    proxy_linux_B.xH_tmp_nu) - LAK_tmp_tmp;
  LLI_tmp_tmp_5 = proxy_linux_B.xH_tmp_j * LLI_tmp_tmp_4 +
    proxy_linux_B.xH_tmp_p * LLI_tmp_tmp_0;
  proxy_linux_B.rtb_pose_idx_4 = (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_1);
  LLI_tmp_tmp = proxy_linux_B.LAK_tmp_p * (67.0F * proxy_linux_B.rtb_pose_idx_4);
  proxy_linux_B.rtb_pose_idx_5 = proxy_linux_B.rtb_pose_idx_3 * LLI_tmp_tmp;
  proxy_linux_B.rtb_pose_idx_7 = (LLI_tmp_tmp_5 * LLI_tmp_tmp_2 +
    (LLI_tmp_tmp_tmp * proxy_linux_B.LAK - LLI_tmp_tmp_3 * proxy_linux_B.Sum1_b)
    * (proxy_linux_B.LAK_tmp_p * 67.0F)) * (real32_T)cos((real_T)
    proxy_linux_B.LDG);
  proxy_linux_B.LAK_tmp_g = proxy_linux_B.rtb_pose_idx_5 -
    proxy_linux_B.rtb_pose_idx_7;
  proxy_linux_B.xH_tmp_tmp_tmp = 35.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2);
  proxy_linux_B.xH_tmp_tmp = (LLI_tmp + proxy_linux_B.xH_tmp_tmp_tmp) -
    LLI_tmp_tmp_1;
  proxy_linux_B.xH_tmp = proxy_linux_B.xH_tmp_tmp * (real32_T)cos((real_T)
    proxy_linux_B.LDG) - proxy_linux_B.rtb_pose_idx_3 * (real32_T)sin((real_T)
    proxy_linux_B.LDG);
  proxy_linux_B.xH_tmp_tmp_l = proxy_linux_B.Sum1_b * 67.0F *
    proxy_linux_B.LAK_tmp_p;
  proxy_linux_B.xH_tmp_c = LLI_tmp_tmp_3 * proxy_linux_B.xH_tmp_tmp_l;
  proxy_linux_B.xH_tmp_g = (real32_T)proxy_linux_P.fingerwidth_Value_n -
    proxy_linux_B.rtb_y_p_idx_6;
  proxy_linux_B.xH_tmp_m = (real32_T)proxy_linux_P.proximallength_Value_b *
    (real32_T)cos((real_T)proxy_linux_B.LDG) - proxy_linux_B.rtb_y_p_idx_6 *
    (real32_T)sin((real_T)proxy_linux_B.LDG);
  proxy_linux_B.xH_tmp_tmp_ld = (proxy_linux_B.xH_tmp_p *
    proxy_linux_B.xH_tmp_tmp_ld + LLI_tmp_tmp_tmp * (proxy_linux_B.LAK_tmp_f *
    67.0F)) * LLI_tmp_tmp_0 + (proxy_linux_B.xH_tmp_j *
    (proxy_linux_B.xH_tmp_tmp_ld * LLI_tmp_tmp_4) + LLI_tmp_tmp_tmp *
    (LLI_tmp_tmp_4 * 67.0F * proxy_linux_B.LAK_tmp_c));
  proxy_linux_B.LAK_tmp_c = (proxy_linux_B.xH_tmp_c - LLI_tmp_tmp_5 *
    proxy_linux_B.xH_tmp_n) - proxy_linux_B.xH_tmp_tmp_ld * proxy_linux_B.LAK;
  proxy_linux_B.xH_tmp_n = proxy_linux_B.xH_tmp_g * (real32_T)sin((real_T)
    proxy_linux_B.LDG) + (real32_T)proxy_linux_P.proximallength_Value_b *
    (real32_T)cos((real_T)proxy_linux_B.LDG);
  proxy_linux_B.xH_tmp_p = proxy_linux_B.LAK * 67.0F * proxy_linux_B.LAK_tmp_p;
  proxy_linux_B.xH_tmp_g = (real32_T)proxy_linux_P.proximallength_Value_b *
    (real32_T)sin((real_T)proxy_linux_B.LDG) - proxy_linux_B.xH_tmp_g *
    (real32_T)cos((real_T)proxy_linux_B.LDG);
  proxy_linux_B.xH_tmp_j = proxy_linux_B.LAK_tmp_c * (real32_T)sin((real_T)
    proxy_linux_B.LDG) + proxy_linux_B.xH_tmp_tmp * LLI_tmp_tmp;
  proxy_linux_B.xH_tmp_d = (real32_T)proxy_linux_P.proximallength_Value_b *
    (real32_T)sin((real_T)proxy_linux_B.LDG) + proxy_linux_B.rtb_y_p_idx_6 *
    (real32_T)cos((real_T)proxy_linux_B.LDG);
  proxy_linux_B.rtb_pose_idx_6 = 67.0F * (real32_T)sin((real_T)proxy_linux_B.LDG);
  proxy_linux_B.xH_tmp_gu = proxy_linux_B.Sum1_b * (real32_T)cos((real_T)
    proxy_linux_B.LDG);
  proxy_linux_B.xH_tmp_dh = proxy_linux_B.LAK * (real32_T)cos((real_T)
    proxy_linux_B.LDG);
  proxy_linux_B.xH_tmp_dy = (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_5);
  proxy_linux_B.xH_tmp_l = proxy_linux_B.LAK_tmp_p * (67.0F *
    proxy_linux_B.rtb_VectorConcatenate_idx_8);
  proxy_linux_B.LAK_tmp_c = proxy_linux_B.rtb_pose_idx_6 *
    proxy_linux_B.rtb_pose_idx_4 * proxy_linux_B.LAK_tmp_p *
    proxy_linux_B.xH_tmp_m * proxy_linux_B.rtb_pose_idx_3 -
    (proxy_linux_B.LAK_tmp_g * proxy_linux_B.xH_tmp_d - proxy_linux_B.LAK_tmp_c *
     (proxy_linux_B.xH_tmp_m * (real32_T)sin((real_T)proxy_linux_B.LDG))) *
    (real32_T)cos((real_T)proxy_linux_B.LDG);
  proxy_linux_B.xH_tmp_d += (((proxy_linux_B.xH_tmp * proxy_linux_B.xH_tmp_l +
    proxy_linux_B.xH_tmp * (proxy_linux_B.xH_tmp_tmp_l * proxy_linux_B.xH_tmp_n))
    - proxy_linux_B.xH_tmp * (proxy_linux_B.xH_tmp_p * proxy_linux_B.xH_tmp_g))
    - proxy_linux_B.xH_tmp_j * proxy_linux_B.xH_tmp_m) / proxy_linux_B.LAK_tmp_g;
  proxy_linux_B.xH_tmp_tmp = (real32_T)tan((real_T)proxy_linux_B.rtb_y_p_idx_5);
  proxy_linux_B.xH_tmp_tmp_l = proxy_linux_B.xH_tmp_b * 18.0F;
  proxy_linux_B.xH_tmp_tmp_tmp = (proxy_linux_B.xH_tmp_tmp_l + 35.0F * (real32_T)
    sin((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (proxy_linux_B.xH_tmp_tmp_tmp -
    proxy_linux_B.LAK_tmp_b * 18.0F) * proxy_linux_B.xH_tmp_tmp;
  proxy_linux_B.xH_tmp_o += (proxy_linux_B.LAK_tmp_k + proxy_linux_B.xH) +
    proxy_linux_B.Sum1;
  proxy_linux_B.LAK_tmp_f = 67.0F * (real32_T)cos((real_T)proxy_linux_B.LDG);
  proxy_linux_B.xH_tmp_b = proxy_linux_B.LAK_tmp_f * proxy_linux_B.Sum1_b *
    proxy_linux_B.LAK_tmp_p;
  proxy_linux_B.xH_tmp_nu = ((LLI_tmp + LLI_tmp_tmp_tmp_tmp) +
    proxy_linux_B.xH_tmp_nu) + LAK_tmp_tmp;
  xH_tmp += proxy_linux_B.LAK_tmp_k;
  proxy_linux_B.rtb_pose_idx_6 = (((((proxy_linux_B.yH - proxy_linux_B.xH) -
    proxy_linux_B.Sum1) - proxy_linux_B.LLI) * proxy_linux_B.xH_tmp_b -
    proxy_linux_B.rtb_pose_idx_3 * (proxy_linux_B.rtb_pose_idx_6 *
    proxy_linux_B.LAK * proxy_linux_B.LAK_tmp_p)) - LLI_tmp_tmp_5 * (LLI_tmp_0 *
    proxy_linux_B.xH_tmp_gu)) - proxy_linux_B.xH_tmp_tmp_ld *
    proxy_linux_B.xH_tmp_dh;
  proxy_linux_B.xH_tmp_l = proxy_linux_B.LAK_tmp_c *
    (proxy_linux_B.xH_tmp_tmp_tmp * proxy_linux_B.xH_tmp_l);
  proxy_linux_B.xH_tmp_c = ((((proxy_linux_B.xH_tmp_o * LLI_tmp_tmp_0 *
    LLI_tmp_tmp_2 * proxy_linux_B.xH_tmp + proxy_linux_B.xH_tmp_c *
    proxy_linux_B.xH_tmp) + proxy_linux_B.xH_tmp_nu * LLI_tmp_tmp_4 *
    LLI_tmp_tmp_2 * proxy_linux_B.xH_tmp) - LLI_tmp_tmp_tmp *
    proxy_linux_B.xH_tmp_p * proxy_linux_B.xH_tmp) - proxy_linux_B.LAK_tmp_g *
    (LLI_tmp - LLI_tmp_tmp_1)) - proxy_linux_B.xH_tmp_j * xH_tmp;
  proxy_linux_B.xH_tmp_p = (((proxy_linux_B.xH_tmp_tmp_tmp * (LLI_tmp_tmp_0 *
    (real32_T)cos((real_T)proxy_linux_B.LDG)) * proxy_linux_B.xH_tmp_o *
    LLI_tmp_tmp_2 + proxy_linux_B.xH_tmp_tmp_tmp * proxy_linux_B.xH_tmp_b *
    LLI_tmp_tmp_3) + proxy_linux_B.xH_tmp_tmp_tmp * (LLI_tmp_tmp_4 * (real32_T)
    cos((real_T)proxy_linux_B.LDG)) * proxy_linux_B.xH_tmp_nu * LLI_tmp_tmp_2) -
    proxy_linux_B.xH_tmp_tmp_tmp * (LLI_tmp_tmp * xH_tmp)) -
    proxy_linux_B.xH_tmp_tmp_tmp * (proxy_linux_B.LAK_tmp_f * proxy_linux_B.LAK *
    proxy_linux_B.LAK_tmp_p) * LLI_tmp_tmp_tmp;
  proxy_linux_B.xH_tmp_j = proxy_linux_B.rtb_pose_idx_6 * (18.0F *
    proxy_linux_B.xH_tmp_tmp * proxy_linux_B.LAK_tmp_b);
  proxy_linux_B.xH = ((proxy_linux_B.xH_tmp_c * -(((proxy_linux_B.xH_tmp_n *
    proxy_linux_B.xH_tmp_gu + proxy_linux_B.rtb_VectorConcatenate_idx_8 *
    (real32_T)cos((real_T)proxy_linux_B.LDG)) - proxy_linux_B.xH_tmp_m *
    proxy_linux_B.rtb_pose_idx_4) - proxy_linux_B.xH_tmp_g *
    proxy_linux_B.xH_tmp_dh) / (proxy_linux_B.LAK_tmp_c *
    proxy_linux_B.rtb_VectorConcatenate_idx_8) - (real32_T)fabs((real_T)
    (proxy_linux_B.xH_tmp_d * ((proxy_linux_B.rtb_pose_idx_6 *
    (proxy_linux_B.rtb_DataTypeConversion_a_idx_1 *
     proxy_linux_B.rtb_DataTypeConversion_a_idx_1) / (proxy_linux_B.LAK_tmp_g *
    proxy_linux_B.xH_tmp_dy) + proxy_linux_B.xH_tmp_dy) *
    (proxy_linux_B.LAK_tmp_g * proxy_linux_B.LAK_tmp_g)) /
     proxy_linux_B.xH_tmp_l)) * ((proxy_linux_B.GainAggiustato_g -
    proxy_linux_DW.UnitDelay3_DSTATE_k[0]) / 0.01F * 2.0F) /
                       ((proxy_linux_B.Sum1_h -
    proxy_linux_DW.UnitDelay3_DSTATE_k[1]) / 0.01F)) - proxy_linux_B.xH_tmp_d *
                      (proxy_linux_B.LAK_tmp_g * proxy_linux_B.LAK_tmp_g) *
                      (proxy_linux_B.xH_tmp_tmp_l - (proxy_linux_B.xH_tmp_p -
    proxy_linux_B.xH_tmp_j) / proxy_linux_B.LAK_tmp_g) / proxy_linux_B.xH_tmp_l)
    / 2.0F;
  if ((proxy_linux_B.xH == 0.0F) || rtIsNaNF(proxy_linux_B.xH) || rtIsInfF
      (proxy_linux_B.xH)) {
    proxy_linux_B.Sum1 = proxy_linux_DW.UnitDelay1_DSTATE_e;
  } else {
    proxy_linux_B.Sum1 = -(real32_T)fabs((real_T)proxy_linux_B.xH);
  }

  proxy_linux_B.JTcomp_p[0] = (((((proxy_linux_B.yH * proxy_linux_B.xH_tmp_gu -
    16.0F * (real32_T)cos((real_T)proxy_linux_B.LDG) * proxy_linux_B.Sum1_b *
    proxy_linux_B.LAK_tmp_b) - proxy_linux_B.rtb_pose_idx_3 *
    proxy_linux_B.rtb_pose_idx_4) - proxy_linux_B.rtb_pose_idx_3 *
    (proxy_linux_B.LAK * (real32_T)sin((real_T)proxy_linux_B.LDG))) *
    (proxy_linux_B.rtb_DataTypeConversion_a_idx_1 *
     proxy_linux_B.rtb_DataTypeConversion_a_idx_1 * 67.0F *
     proxy_linux_B.LAK_tmp_p) + proxy_linux_B.rtb_pose_idx_5) -
    proxy_linux_B.rtb_pose_idx_7) * -proxy_linux_B.xH_tmp /
    (proxy_linux_B.LAK_tmp_c * (proxy_linux_B.xH_tmp_tmp_tmp *
      proxy_linux_B.xH_tmp_dy));
  proxy_linux_B.JTcomp_p[1] = proxy_linux_B.xH_tmp_c * (real32_T)cos((real_T)
    proxy_linux_B.LDG) / proxy_linux_B.LAK_tmp_c - ((proxy_linux_B.xH_tmp_p -
    proxy_linux_B.LAK_tmp_g * proxy_linux_B.xH_tmp_tmp_l) -
    proxy_linux_B.xH_tmp_j) * proxy_linux_B.xH_tmp / (proxy_linux_B.LAK_tmp_c *
    proxy_linux_B.xH_tmp_tmp_tmp);
  proxy_linux_B.JTcomp_p[2] = -(((((((((real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F + 35.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) * (real32_T)
    cos((real_T)proxy_linux_B.LDG) - ((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) * (real32_T)
    sin((real_T)proxy_linux_B.LDG)) * ((real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_4)) *
    (67.0F * proxy_linux_B.rtb_VectorConcatenate_idx_8)) + ((((real32_T)cos
    ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F +
    35.0F * (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin
    ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) *
    (real32_T)cos((real_T)proxy_linux_B.LDG) - ((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) * (real32_T)
    sin((real_T)proxy_linux_B.LDG)) * ((real32_T)sin((real_T)(proxy_linux_B.LDG
    + proxy_linux_B.rtb_y_p_idx_1)) * 67.0F * (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_4)) *
    (((real32_T)proxy_linux_P.fingerwidth_Value_n - proxy_linux_B.rtb_y_p_idx_6)
     * (real32_T)sin((real_T)proxy_linux_B.LDG) + (real32_T)
     proxy_linux_P.proximallength_Value_b * (real32_T)cos((real_T)
    proxy_linux_B.LDG)))) - ((((real32_T)cos((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 43.0F + 35.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h
    - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) * (real32_T)cos((real_T)
    proxy_linux_B.LDG) - ((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) * (real32_T)
    sin((real_T)proxy_linux_B.LDG)) * ((real32_T)cos((real_T)(proxy_linux_B.LDG
    + proxy_linux_B.rtb_y_p_idx_1)) * 67.0F * (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_4)) *
    ((real32_T)proxy_linux_P.proximallength_Value_b * (real32_T)sin((real_T)
    proxy_linux_B.LDG) - ((real32_T)proxy_linux_P.fingerwidth_Value_n -
    proxy_linux_B.rtb_y_p_idx_6) * (real32_T)cos((real_T)proxy_linux_B.LDG)))) -
    (((((((real32_T)cos((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)
         sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                      proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)cos
        ((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                  proxy_linux_B.rtb_y_p_idx_2)) * 39.0F) * ((real32_T)sin
    ((real_T)(proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1)) * 67.0F *
    (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_4))) - ((((((37.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2) + 86.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)cos((real_T)(proxy_linux_B.Sum1_h
    - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)
    cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    27.0F) * (real32_T)cos((real_T)(proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h
    - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)
    sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    27.0F) * (real32_T)sin((real_T)(proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    40.0F + (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 39.0F) * (real32_T)sin((real_T)
    (proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1)))) - (((((((86.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_2) - 37.0F * (real32_T)sin
    ((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)
    sin((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    27.0F) * ((real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD)
    - proxy_linux_B.rtb_y_p_idx_2)) * 40.0F - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
              39.0F) + ((((real32_T)cos((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) + (real32_T)
    cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
                        39.0F) * ((real32_T)sin((real_T)((proxy_linux_B.Sum1_h -
    proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) * 67.0F)) * (real32_T)sin
    ((real_T)(proxy_linux_B.rtb_y_p_idx_4 - proxy_linux_B.rtb_y_p_idx_2)) +
    ((((((37.0F * (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_2) + 86.0F *
          (real32_T)sin((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)cos
         ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F)
        - (real32_T)cos((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
       40.0F) - (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD)
    - proxy_linux_B.rtb_y_p_idx_2)) * 27.0F) * (((real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    40.0F - (real32_T)sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 39.0F) * (real32_T)cos((real_T)
    (proxy_linux_B.rtb_y_p_idx_4 - proxy_linux_B.rtb_y_p_idx_2))) + ((((real32_T)
    cos((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F +
    (real32_T)sin((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) *
    16.0F) + (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) * ((real32_T)cos((real_T)(proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2)) * 67.0F * (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)))))
      * (real32_T)cos((real_T)(proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1)))
     * (real32_T)sin((real_T)proxy_linux_B.LDG) + (((real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F + 35.0F *
    (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) * ((real32_T)
    cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_4)) * (67.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_1)))) * ((real32_T)
    proxy_linux_P.proximallength_Value_b * (real32_T)cos((real_T)
    proxy_linux_B.LDG) - proxy_linux_B.rtb_y_p_idx_6 * (real32_T)sin((real_T)
    proxy_linux_B.LDG))) / (((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) * ((real32_T)
    cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_4)) * (67.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_1))) - (((((((37.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2) + 86.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)cos((real_T)(proxy_linux_B.Sum1_h
    - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)
    cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    27.0F) * (real32_T)cos((real_T)(proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h
    - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)
    sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    27.0F) * (real32_T)sin((real_T)(proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    40.0F + (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 39.0F) * (real32_T)sin((real_T)
    (proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    40.0F - (real32_T)sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 39.0F) * (real32_T)cos((real_T)
    (proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1))) + (((((real32_T)cos
    ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F +
    (real32_T)sin((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) *
    16.0F) + (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) * (real32_T)cos((real_T)(proxy_linux_B.LDG +
    proxy_linux_B.rtb_y_p_idx_1)) - ((((real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F - (real32_T)
    sin((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) * (real32_T)sin((real_T)(proxy_linux_B.LDG +
    proxy_linux_B.rtb_y_p_idx_1))) * ((real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_4)) *
    67.0F)) * (real32_T)cos((real_T)proxy_linux_B.LDG)) + ((real32_T)
    proxy_linux_P.proximallength_Value_b * (real32_T)sin((real_T)
    proxy_linux_B.LDG) + proxy_linux_B.rtb_y_p_idx_6 * (real32_T)cos((real_T)
    proxy_linux_B.LDG))) * (((((((((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)
    sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) * (67.0F * (real32_T)cos((real_T)proxy_linux_B.LDG) * (real32_T)sin
              ((real_T)(proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1)) *
              (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD)
    - proxy_linux_B.rtb_y_p_idx_4))) - ((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) * (67.0F *
    (real32_T)sin((real_T)proxy_linux_B.LDG) * (real32_T)cos((real_T)
    (proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1)) * (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_4))))
    - ((((((37.0F * (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_2) + 86.0F *
            (real32_T)sin((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)cos
           ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) *
           43.0F) - (real32_T)cos((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
         40.0F) - (real32_T)cos((real_T)((proxy_linux_B.Sum1_h -
    proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) * 27.0F) * (real32_T)cos
       ((real_T)(proxy_linux_B.rtb_y_p_idx_4 - proxy_linux_B.rtb_y_p_idx_2)) +
       (((((86.0F * (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_2) - 37.0F *
            (real32_T)sin((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin
           ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) *
           43.0F) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
         40.0F) - (real32_T)sin((real_T)((proxy_linux_B.Sum1_h -
    proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) * 27.0F) * (real32_T)sin
       ((real_T)(proxy_linux_B.rtb_y_p_idx_4 - proxy_linux_B.rtb_y_p_idx_2))) *
    (((real32_T)sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F + (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
      39.0F) * ((real32_T)sin((real_T)(proxy_linux_B.LDG +
    proxy_linux_B.rtb_y_p_idx_1)) * (real32_T)cos((real_T)proxy_linux_B.LDG))))
    - (((((((86.0F * (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_2) - 37.0F *
             (real32_T)sin((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin
            ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) *
            43.0F) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
          40.0F) - (real32_T)sin((real_T)((proxy_linux_B.Sum1_h -
    proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) * 27.0F) * ((real32_T)cos
    ((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
              proxy_linux_B.rtb_y_p_idx_2)) * 40.0F - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) + ((((real32_T)cos((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) + (real32_T)
               cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
              39.0F) * ((real32_T)sin((real_T)((proxy_linux_B.Sum1_h -
    proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) * 67.0F)) * (real32_T)sin
       ((real_T)(proxy_linux_B.rtb_y_p_idx_4 - proxy_linux_B.rtb_y_p_idx_2)) +
       ((((((37.0F * (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_2) + 86.0F *
             (real32_T)sin((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)cos
            ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) *
            43.0F) - (real32_T)cos((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
          40.0F) - (real32_T)cos((real_T)((proxy_linux_B.Sum1_h -
    proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) * 27.0F) * (((real32_T)
    cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) * (real32_T)cos((real_T)(proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2))) + ((((real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F + (real32_T)sin
    ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) +
    (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) * ((real32_T)cos((real_T)(proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2)) * 67.0F * (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)))))
    * ((real32_T)cos((real_T)(proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1)) *
       (real32_T)cos((real_T)proxy_linux_B.LDG))) *
    (proxy_linux_B.rtb_DataTypeConversion_a_idx_1 *
     proxy_linux_B.rtb_DataTypeConversion_a_idx_1) / ((((35.0F * (real32_T)sin
    ((real_T)proxy_linux_B.rtb_y_p_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)
    cos((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) *
    ((real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_4)) * (67.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_1))) - (((((((37.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2) + 86.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)cos((real_T)(proxy_linux_B.Sum1_h
    - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)
    cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    27.0F) * (real32_T)cos((real_T)(proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h
    - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)
    sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    27.0F) * (real32_T)sin((real_T)(proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    40.0F + (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 39.0F) * (real32_T)sin((real_T)
    (proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    40.0F - (real32_T)sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 39.0F) * (real32_T)cos((real_T)
    (proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1))) + (((((real32_T)cos
    ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F +
    (real32_T)sin((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) *
    16.0F) + (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) * (real32_T)cos((real_T)(proxy_linux_B.LDG +
    proxy_linux_B.rtb_y_p_idx_1)) - ((((real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F - (real32_T)
    sin((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) * (real32_T)sin((real_T)(proxy_linux_B.LDG +
    proxy_linux_B.rtb_y_p_idx_1))) * ((real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_4)) *
    67.0F)) * (real32_T)cos((real_T)proxy_linux_B.LDG)) * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_5)) + (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_5)) * (proxy_linux_B.LAK_tmp_g *
    proxy_linux_B.LAK_tmp_g)) / ((67.0F * (real32_T)sin((real_T)
    proxy_linux_B.LDG) * (real32_T)sin((real_T)proxy_linux_B.rtb_y_p_idx_1) *
    (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_4)) * ((real32_T)
    proxy_linux_P.proximallength_Value_b * (real32_T)cos((real_T)
    proxy_linux_B.LDG) - proxy_linux_B.rtb_y_p_idx_6 * (real32_T)sin((real_T)
    proxy_linux_B.LDG)) * ((35.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) - ((((35.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_y_p_idx_2) - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)
    cos((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) *
    ((real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_4)) * (67.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_1))) - (((((((37.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2) + 86.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)cos((real_T)(proxy_linux_B.Sum1_h
    - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)
    cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    27.0F) * (real32_T)cos((real_T)(proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2)) + (((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h
    - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)
    sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    27.0F) * (real32_T)sin((real_T)(proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2))) * (((real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    40.0F + (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 39.0F) * (real32_T)sin((real_T)
    (proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1)) + ((real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    40.0F - (real32_T)sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 39.0F) * (real32_T)cos((real_T)
    (proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1))) + (((((real32_T)cos
    ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F +
    (real32_T)sin((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) *
    16.0F) + (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) * (real32_T)cos((real_T)(proxy_linux_B.LDG +
    proxy_linux_B.rtb_y_p_idx_1)) - ((((real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F - (real32_T)
    sin((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) -
    (real32_T)sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) * (real32_T)sin((real_T)(proxy_linux_B.LDG +
    proxy_linux_B.rtb_y_p_idx_1))) * ((real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_4)) *
    67.0F)) * (real32_T)cos((real_T)proxy_linux_B.LDG)) * ((real32_T)
    proxy_linux_P.proximallength_Value_b * (real32_T)sin((real_T)
    proxy_linux_B.LDG) + proxy_linux_B.rtb_y_p_idx_6 * (real32_T)cos((real_T)
    proxy_linux_B.LDG)) - ((((((real32_T)cos((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 16.0F - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)
    sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) * ((real32_T)sin((real_T)(proxy_linux_B.LDG +
    proxy_linux_B.rtb_y_p_idx_1)) * 67.0F * (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_4)))
    - ((((((37.0F * (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_2) + 86.0F *
            (real32_T)sin((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)cos
           ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) *
           43.0F) - (real32_T)cos((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
         40.0F) - (real32_T)cos((real_T)((proxy_linux_B.Sum1_h -
    proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) * 27.0F) * (real32_T)cos
       ((real_T)(proxy_linux_B.rtb_y_p_idx_4 - proxy_linux_B.rtb_y_p_idx_2)) +
       (((((86.0F * (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_2) - 37.0F *
            (real32_T)sin((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin
           ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) *
           43.0F) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
         40.0F) - (real32_T)sin((real_T)((proxy_linux_B.Sum1_h -
    proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) * 27.0F) * (real32_T)sin
       ((real_T)(proxy_linux_B.rtb_y_p_idx_4 - proxy_linux_B.rtb_y_p_idx_2))) *
    (((real32_T)sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F + (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
      39.0F) * (real32_T)sin((real_T)(proxy_linux_B.LDG +
    proxy_linux_B.rtb_y_p_idx_1)))) - (((((((86.0F * (real32_T)cos((real_T)
    proxy_linux_B.rtb_y_p_idx_2) - 37.0F * (real32_T)sin((real_T)
    proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)sin((real_T)(proxy_linux_B.Sum1_h
    - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F) - (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)
    sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    27.0F) * ((real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD)
    - proxy_linux_B.rtb_y_p_idx_2)) * 40.0F - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
              39.0F) + ((((real32_T)cos((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 9.0F + (real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 16.0F) + (real32_T)
    cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
                 proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
                        39.0F) * ((real32_T)sin((real_T)((proxy_linux_B.Sum1_h -
    proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) * 67.0F)) * (real32_T)sin
    ((real_T)(proxy_linux_B.rtb_y_p_idx_4 - proxy_linux_B.rtb_y_p_idx_2)) +
    ((((((37.0F * (real32_T)cos((real_T)proxy_linux_B.rtb_y_p_idx_2) + 86.0F *
          (real32_T)sin((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (real32_T)cos
         ((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 43.0F)
        - (real32_T)cos((real_T)(proxy_linux_B.Sum1_h -
    proxy_linux_B.rtb_y_p_idx_2)) * 9.0F) - (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
       40.0F) - (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD)
    - proxy_linux_B.rtb_y_p_idx_2)) * 27.0F) * (((real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    40.0F - (real32_T)sin((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 39.0F) * (real32_T)cos((real_T)
    (proxy_linux_B.rtb_y_p_idx_4 - proxy_linux_B.rtb_y_p_idx_2))) + ((((real32_T)
    cos((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 9.0F +
    (real32_T)sin((real_T)(proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) *
    16.0F) + (real32_T)cos((real_T)((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) -
    proxy_linux_B.rtb_y_p_idx_2)) * 40.0F) - (real32_T)sin((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)) *
    39.0F) * ((real32_T)cos((real_T)(proxy_linux_B.rtb_y_p_idx_4 -
    proxy_linux_B.rtb_y_p_idx_2)) * 67.0F * (real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_2)))))
    * (real32_T)cos((real_T)(proxy_linux_B.LDG + proxy_linux_B.rtb_y_p_idx_1))) *
    (((real32_T)proxy_linux_P.proximallength_Value_b * (real32_T)cos((real_T)
    proxy_linux_B.LDG) - proxy_linux_B.rtb_y_p_idx_6 * (real32_T)sin((real_T)
    proxy_linux_B.LDG)) * (real32_T)sin((real_T)proxy_linux_B.LDG))) * (real32_T)
    cos((real_T)proxy_linux_B.LDG)) * ((((real32_T)sin((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 18.0F + 35.0F *
    (real32_T)sin((real_T)proxy_linux_B.rtb_y_p_idx_2)) - (35.0F * (real32_T)cos
    ((real_T)proxy_linux_B.rtb_y_p_idx_2) - (real32_T)cos((real_T)
    (proxy_linux_B.Sum1_h - proxy_linux_B.rtb_y_p_idx_2)) * 18.0F) * (real32_T)
    tan((real_T)proxy_linux_B.rtb_y_p_idx_5)) * ((real32_T)cos((real_T)
    ((proxy_linux_B.Sum1_h - proxy_linux_B.LHD) - proxy_linux_B.rtb_y_p_idx_4)) *
    (67.0F * proxy_linux_B.rtb_VectorConcatenate_idx_8)))));
  proxy_linux_B.JTcomp_p[3] = proxy_linux_B.Sum1;

  /* MATLAB Function: '<S12>/MATLAB Function' incorporates:
   *  Gain: '<S12>/Gain'
   *  Gain: '<S12>/Gain1'
   *  Gain: '<S2>/Gain2'
   *  Gain: '<S2>/Gain6'
   */
  proxy_linux_MATLABFunction(proxy_linux_B.JTcomp_p, proxy_linux_P.Gain_Gain_m *
    (proxy_linux_P.Gain2_Gain * proxy_linux_B.Filt4), proxy_linux_P.Gain1_Gain_m
    * (proxy_linux_P.Gain6_Gain * proxy_linux_B.Filt3),
    &proxy_linux_B.sf_MATLABFunction_d);

  /* ManualSwitch: '<S5>/Manual Switch1' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant4'
   */
  if (proxy_linux_P.ManualSwitch1_CurrentSetting_p == 1) {
    proxy_linux_B.Sum1_b = proxy_linux_P.Constant4_Value_f;
  } else {
    proxy_linux_B.Sum1_b = proxy_linux_P.Constant_Value_o;
  }

  /* End of ManualSwitch: '<S5>/Manual Switch1' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S5>/Constant2'
   */
  if (proxy_linux_B.Sum1_b > proxy_linux_P.Switch1_Threshold) {
    /* Saturate: '<S11>/Saturation' */
    if (proxy_linux_B.sf_MATLABFunction_o.y[0] >
        proxy_linux_P.Saturation_UpperSat_m) {
      proxy_linux_B.GainAggiustato_g = proxy_linux_P.Saturation_UpperSat_m;
    } else if (proxy_linux_B.sf_MATLABFunction_o.y[0] <
               proxy_linux_P.Saturation_LowerSat_i) {
      proxy_linux_B.GainAggiustato_g = proxy_linux_P.Saturation_LowerSat_i;
    } else {
      proxy_linux_B.GainAggiustato_g = proxy_linux_B.sf_MATLABFunction_o.y[0];
    }

    /* End of Saturate: '<S11>/Saturation' */
  } else {
    proxy_linux_B.GainAggiustato_g = proxy_linux_P.Constant2_Value;
  }

  /* End of Switch: '<S5>/Switch1' */

  /* Switch: '<S5>/Switch2' incorporates:
   *  Constant: '<S5>/Constant2'
   */
  if (proxy_linux_B.Sum1_b > proxy_linux_P.Switch2_Threshold) {
    /* Saturate: '<S12>/Saturation' */
    if (proxy_linux_B.sf_MATLABFunction_d.y[0] >
        proxy_linux_P.Saturation_UpperSat) {
      proxy_linux_B.Sum1_h = proxy_linux_P.Saturation_UpperSat;
    } else if (proxy_linux_B.sf_MATLABFunction_d.y[0] <
               proxy_linux_P.Saturation_LowerSat) {
      proxy_linux_B.Sum1_h = proxy_linux_P.Saturation_LowerSat;
    } else {
      proxy_linux_B.Sum1_h = proxy_linux_B.sf_MATLABFunction_d.y[0];
    }

    /* End of Saturate: '<S12>/Saturation' */
  } else {
    proxy_linux_B.Sum1_h = proxy_linux_P.Constant2_Value;
  }

  /* End of Switch: '<S5>/Switch2' */

  /* Switch: '<S5>/Switch3' incorporates:
   *  Constant: '<S5>/Constant2'
   */
  if (proxy_linux_B.Sum1_b > proxy_linux_P.Switch3_Threshold) {
    /* Gain: '<S14>/Gain' incorporates:
     *  Gain: '<S2>/Gain'
     */
    proxy_linux_B.LAK_tmp = proxy_linux_P.Gain_Gain_k * proxy_linux_B.Filt2 *
      proxy_linux_P.Gain_Gain_o;

    /* Saturate: '<S14>/Saturation1' */
    if (proxy_linux_B.LAK_tmp > proxy_linux_P.Saturation1_UpperSat_i) {
      proxy_linux_B.LAK = (real32_T)proxy_linux_P.Saturation1_UpperSat_i;
    } else if (proxy_linux_B.LAK_tmp < proxy_linux_P.Saturation1_LowerSat_a) {
      proxy_linux_B.LAK = (real32_T)proxy_linux_P.Saturation1_LowerSat_a;
    } else {
      proxy_linux_B.LAK = (real32_T)proxy_linux_B.LAK_tmp;
    }

    /* End of Saturate: '<S14>/Saturation1' */
  } else {
    proxy_linux_B.LAK = proxy_linux_P.Constant2_Value;
  }

  /* End of Switch: '<S5>/Switch3' */

  /* Switch: '<S5>/Switch4' incorporates:
   *  Constant: '<S5>/Constant2'
   */
  if (proxy_linux_B.Sum1_b > proxy_linux_P.Switch4_Threshold) {
    /* Gain: '<S13>/Gain' incorporates:
     *  Gain: '<S2>/Gain1'
     */
    proxy_linux_B.LAK_tmp = proxy_linux_P.Gain1_Gain * proxy_linux_B.Filt1 *
      proxy_linux_P.Gain_Gain;

    /* Saturate: '<S13>/Saturation1' */
    if (proxy_linux_B.LAK_tmp > proxy_linux_P.Saturation1_UpperSat) {
      proxy_linux_B.yH = (real32_T)proxy_linux_P.Saturation1_UpperSat;
    } else if (proxy_linux_B.LAK_tmp < proxy_linux_P.Saturation1_LowerSat) {
      proxy_linux_B.yH = (real32_T)proxy_linux_P.Saturation1_LowerSat;
    } else {
      proxy_linux_B.yH = (real32_T)proxy_linux_B.LAK_tmp;
    }

    /* End of Saturate: '<S13>/Saturation1' */
  } else {
    proxy_linux_B.yH = proxy_linux_P.Constant2_Value;
  }

  /* End of Switch: '<S5>/Switch4' */

  /* SignalConversion: '<S5>/TmpSignal ConversionAtByte PackInport1' */
  proxy_linux_B.TmpSignalConversionAtBytePackIn[0] = proxy_linux_B.ByteUnpack[0];

  /* ManualSwitch: '<S5>/Manual Switch' */
  if (proxy_linux_P.ManualSwitch_CurrentSetting_m == 1) {
    /* SignalConversion: '<S5>/TmpSignal ConversionAtByte PackInport1' incorporates:
     *  Constant: '<S5>/Constant3'
     */
    proxy_linux_B.TmpSignalConversionAtBytePackIn[1] =
      proxy_linux_P.Constant3_Value;
  } else {
    /* SignalConversion: '<S5>/TmpSignal ConversionAtByte PackInport1' incorporates:
     *  Constant: '<S5>/Constant1'
     */
    proxy_linux_B.TmpSignalConversionAtBytePackIn[1] =
      proxy_linux_P.Constant1_Value_e;
  }

  /* End of ManualSwitch: '<S5>/Manual Switch' */

  /* Switch: '<S5>/Switch' */
  if (proxy_linux_B.Sum1_b > proxy_linux_P.Switch_Threshold) {
    /* SignalConversion: '<S5>/TmpSignal ConversionAtByte PackInport1' */
    proxy_linux_B.TmpSignalConversionAtBytePackIn[2] = 0.0F;
  } else {
    /* SignalConversion: '<S5>/TmpSignal ConversionAtByte PackInport1' incorporates:
     *  Constant: '<S5>/Constant2'
     */
    proxy_linux_B.TmpSignalConversionAtBytePackIn[2] =
      proxy_linux_P.Constant2_Value;
  }

  /* End of Switch: '<S5>/Switch' */

  /* SignalConversion: '<S5>/TmpSignal ConversionAtByte PackInport1' incorporates:
   *  Constant: '<S5>/Constant'
   */
  proxy_linux_B.TmpSignalConversionAtBytePackIn[3] =
    proxy_linux_B.GainAggiustato_g;
  proxy_linux_B.TmpSignalConversionAtBytePackIn[4] = proxy_linux_B.Sum1_h;
  proxy_linux_B.TmpSignalConversionAtBytePackIn[5] = proxy_linux_B.LAK;
  proxy_linux_B.TmpSignalConversionAtBytePackIn[6] = proxy_linux_B.yH;
  proxy_linux_B.TmpSignalConversionAtBytePackIn[7] =
    proxy_linux_P.Constant_Value_o;
  proxy_linux_B.TmpSignalConversionAtBytePackIn[8] =
    proxy_linux_P.Constant_Value_o;
  proxy_linux_B.TmpSignalConversionAtBytePackIn[9] =
    proxy_linux_P.Constant_Value_o;
  proxy_linux_B.TmpSignalConversionAtBytePackIn[10] =
    proxy_linux_P.Constant_Value_o;
  proxy_linux_B.TmpSignalConversionAtBytePackIn[11] =
    proxy_linux_P.Constant_Value_o;

  /* S-Function (any2byte): '<S5>/Byte Pack' */

  /* Pack: <S5>/Byte Pack */
  (void) memcpy(&proxy_linux_B.BytePack[0],
                &proxy_linux_B.TmpSignalConversionAtBytePackIn[0],
                48);

  /* Update for DiscreteTransferFcn: '<S7>/Filt ' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt_states = (proxy_linux_B.rtb_VectorConcatenate_idx_0 -
      proxy_linux_P.Filt_DenCoef[1] * proxy_linux_DW.Filt_states) /
      proxy_linux_P.Filt_DenCoef[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt ' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 1' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt1_states_d = (proxy_linux_B.rtb_VectorConcatenate_idx_1 -
      proxy_linux_P.Filt1_DenCoef_l[1] * proxy_linux_DW.Filt1_states_d) /
      proxy_linux_P.Filt1_DenCoef_l[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 1' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 2' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt2_states_d = (proxy_linux_B.rtb_VectorConcatenate_idx_4 -
      proxy_linux_P.Filt2_DenCoef_a[1] * proxy_linux_DW.Filt2_states_d) /
      proxy_linux_P.Filt2_DenCoef_a[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 2' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 3' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt3_states_h = (proxy_linux_B.LA2K -
      proxy_linux_P.Filt3_DenCoef_k[1] * proxy_linux_DW.Filt3_states_h) /
      proxy_linux_P.Filt3_DenCoef_k[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 3' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 4' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt4_states_a = (proxy_linux_B.qN -
      proxy_linux_P.Filt4_DenCoef_l[1] * proxy_linux_DW.Filt4_states_a) /
      proxy_linux_P.Filt4_DenCoef_l[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 4' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 5' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt5_states_j = (proxy_linux_B.rtb_VectorConcatenate_idx_5 -
      proxy_linux_P.Filt5_DenCoef_g[1] * proxy_linux_DW.Filt5_states_j) /
      proxy_linux_P.Filt5_DenCoef_g[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 5' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 6' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt6_states_n = (proxy_linux_B.rtb_VectorConcatenate_idx_6 -
      proxy_linux_P.Filt6_DenCoef_n[1] * proxy_linux_DW.Filt6_states_n) /
      proxy_linux_P.Filt6_DenCoef_n[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 6' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 7' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt7_states = (proxy_linux_B.rtb_VectorConcatenate_idx_7 -
      proxy_linux_P.Filt7_DenCoef[1] * proxy_linux_DW.Filt7_states) /
      proxy_linux_P.Filt7_DenCoef[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 7' */

  /* Update for DiscreteTransferFcn: '<S7>/Filt 8' */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt8_states = (proxy_linux_B.xD -
      proxy_linux_P.Filt8_DenCoef[1] * proxy_linux_DW.Filt8_states) /
      proxy_linux_P.Filt8_DenCoef[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S7>/Filt 8' */

  /* Update for DiscreteTransferFcn: '<S2>/Filt 1' incorporates:
   *  SignalConversion: '<S2>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt1_states = (proxy_linux_B.In1.Data[7] -
      proxy_linux_P.Filt1_DenCoef[1] * proxy_linux_DW.Filt1_states) /
      proxy_linux_P.Filt1_DenCoef[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S2>/Filt 1' */

  /* Update for DiscreteTransferFcn: '<S2>/Filt 2' incorporates:
   *  SignalConversion: '<S2>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt2_states = (proxy_linux_B.In1.Data[6] -
      proxy_linux_P.Filt2_DenCoef[1] * proxy_linux_DW.Filt2_states) /
      proxy_linux_P.Filt2_DenCoef[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S2>/Filt 2' */

  /* Update for DiscreteTransferFcn: '<S2>/Filt 3' incorporates:
   *  SignalConversion: '<S2>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt3_states = (proxy_linux_B.In1.Data[5] -
      proxy_linux_P.Filt3_DenCoef[1] * proxy_linux_DW.Filt3_states) /
      proxy_linux_P.Filt3_DenCoef[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S2>/Filt 3' */

  /* Update for DiscreteTransferFcn: '<S2>/Filt 4' incorporates:
   *  SignalConversion: '<S2>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt4_states = (proxy_linux_B.In1.Data[4] -
      proxy_linux_P.Filt4_DenCoef[1] * proxy_linux_DW.Filt4_states) /
      proxy_linux_P.Filt4_DenCoef[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S2>/Filt 4' */

  /* Update for DiscreteTransferFcn: '<S2>/Filt 5' incorporates:
   *  SignalConversion: '<S2>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt5_states = (proxy_linux_B.In1.Data[3] -
      proxy_linux_P.Filt5_DenCoef[1] * proxy_linux_DW.Filt5_states) /
      proxy_linux_P.Filt5_DenCoef[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S2>/Filt 5' */

  /* Update for DiscreteTransferFcn: '<S2>/Filt 6' incorporates:
   *  SignalConversion: '<S2>/SigConversion_InsertedFor_Bus Selector_at_outport_0'
   */
  proxy_linux_B.samplesRead = 0;
  while (proxy_linux_B.samplesRead < 1) {
    proxy_linux_DW.Filt6_states = (proxy_linux_B.In1.Data[2] -
      proxy_linux_P.Filt6_DenCoef[1] * proxy_linux_DW.Filt6_states) /
      proxy_linux_P.Filt6_DenCoef[0];
    proxy_linux_B.samplesRead++;
  }

  /* End of Update for DiscreteTransferFcn: '<S2>/Filt 6' */

  /* Update for UnitDelay: '<S18>/Unit Delay1' incorporates:
   *  MATLAB Function: '<S18>/Jacobian2'
   */
  proxy_linux_DW.UnitDelay1_DSTATE = proxy_linux_B.rtb_VectorConcatenate_idx_3;

  /* Update for UnitDelay: '<S31>/Unit Delay1' incorporates:
   *  MATLAB Function: '<S31>/Jacobian2'
   */
  proxy_linux_DW.UnitDelay1_DSTATE_m = proxy_linux_B.rtb_VectorConcatenate_idx_2;

  /* Update for UnitDelay: '<S12>/Unit Delay1' incorporates:
   *  MATLAB Function: '<S12>/Jacobian2'
   */
  proxy_linux_DW.UnitDelay1_DSTATE_e = proxy_linux_B.Sum1;

  /* Update for UnitDelay: '<S18>/Unit Delay3' incorporates:
   *  MATLAB Function: '<S18>/Jacobian2'
   */
  proxy_linux_DW.UnitDelay3_DSTATE[0] =
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__m;

  /* Update for UnitDelay: '<S31>/Unit Delay3' incorporates:
   *  MATLAB Function: '<S31>/Jacobian2'
   */
  proxy_linux_DW.UnitDelay3_DSTATE_c[0] = proxy_linux_B.rtb_pose_idx_0;

  /* Update for UnitDelay: '<S12>/Unit Delay3' incorporates:
   *  MATLAB Function: '<S12>/Jacobian2'
   */
  proxy_linux_DW.UnitDelay3_DSTATE_k[0] = proxy_linux_B.rtb_pose_idx_1;

  /* Update for UnitDelay: '<S18>/Unit Delay3' incorporates:
   *  MATLAB Function: '<S18>/Jacobian2'
   */
  proxy_linux_DW.UnitDelay3_DSTATE[1] =
    proxy_linux_B.rtb_TmpSignalConversionAtSFu__c;

  /* Update for UnitDelay: '<S31>/Unit Delay3' incorporates:
   *  MATLAB Function: '<S31>/Jacobian2'
   */
  proxy_linux_DW.UnitDelay3_DSTATE_c[1] = proxy_linux_B.yI;

  /* Update for UnitDelay: '<S12>/Unit Delay3' incorporates:
   *  MATLAB Function: '<S12>/Jacobian2'
   */
  proxy_linux_DW.UnitDelay3_DSTATE_k[1] = proxy_linux_B.rtb_pose_idx_2;

  /* Update for S-Function (sdspToNetwork): '<S5>/UDP Send' */
  sErr = GetErrorBuffer(&proxy_linux_DW.UDPSend_NetworkLib[0U]);
  LibUpdate_Network(&proxy_linux_DW.UDPSend_NetworkLib[0U],
                    &proxy_linux_B.BytePack[0U], 48);
  if (*sErr != 0) {
    rtmSetErrorStatus(proxy_linux_M, sErr);
    rtmSetStopRequested(proxy_linux_M, 1);
  }

  /* End of Update for S-Function (sdspToNetwork): '<S5>/UDP Send' */
}

/* Model initialize function */
void proxy_linux_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)proxy_linux_M, 0,
                sizeof(RT_MODEL_proxy_linux_T));

  /* block I/O */
  (void) memset(((void *) &proxy_linux_B), 0,
                sizeof(B_proxy_linux_T));

  /* states (dwork) */
  (void) memset((void *)&proxy_linux_DW, 0,
                sizeof(DW_proxy_linux_T));

  {
    char_T *sErr;
    static const char_T tmp[32] = { '/', 's', 'v', 'h', '_', 'c', 'o', 'n', 't',
      'r', 'o', 'l', 'l', 'e', 'r', '/', 'c', 'h', 'a', 'n', 'n', 'e', 'l', '_',
      'c', 'u', 'r', 'r', 'e', 'n', 't', 's' };

    static const char_T tmp_0[5] = { '/', 's', 'c', 'a', 'n' };

    static const char_T tmp_1[11] = { '/', 'M', 'a', 't', 'l', 'a', 'b', 'M',
      'o', 'd', 'e' };

    static const char_T tmp_2[13] = { '/', 'M', 'a', 't', 'l', 'a', 'b', 'S',
      't', 'a', 't', 'u', 's' };

    static const char_T tmp_3[17] = { '/', 't', 'r', 'i', 'g', 'g', 'e', 'r',
      '_', 'e', 'x', 'o', '_', 'h', 'a', 'n', 'd' };

    char_T tmp_4[6];
    char_T tmp_5[12];
    char_T tmp_6[14];
    char_T tmp_7[18];
    int32_T i;

    /* Start for Atomic SubSystem: '<S7>/Publish2' */
    /* Start for MATLABSystem: '<S58>/SinkBlock' */
    proxy_linux_DW.obj_k.isInitialized = 0;
    proxy_linux_DW.objisempty = true;
    proxy_linux_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      tmp_7[i] = tmp_3[i];
    }

    tmp_7[17] = '\x00';
    Pub_proxy_linux_517.createPublisher(tmp_7, proxy_linux_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S58>/SinkBlock' */
    /* End of Start for SubSystem: '<S7>/Publish2' */

    /* Start for S-Function (sdspFromNetwork): '<S4>/Receive from Haptics' */
    sErr = GetErrorBuffer(&proxy_linux_DW.ReceivefromHaptics_NetworkLib[0U]);
    CreateUDPInterface(&proxy_linux_DW.ReceivefromHaptics_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&proxy_linux_DW.ReceivefromHaptics_NetworkLib[0U], 0,
                        "0.0.0.0", proxy_linux_P.ReceivefromHaptics_localPort,
                        "10.100.39.144", -1, 68, 1, MIN_int32_T);
    }

    if (*sErr == 0) {
      LibStart(&proxy_linux_DW.ReceivefromHaptics_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&proxy_linux_DW.ReceivefromHaptics_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(proxy_linux_M, sErr);
        rtmSetStopRequested(proxy_linux_M, 1);
      }
    }

    /* End of Start for S-Function (sdspFromNetwork): '<S4>/Receive from Haptics' */

    /* Start for Atomic SubSystem: '<S7>/Publish' */
    /* Start for MATLABSystem: '<S55>/SinkBlock' */
    proxy_linux_DW.obj_kr.isInitialized = 0;
    proxy_linux_DW.objisempty_c = true;
    proxy_linux_DW.obj_kr.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      tmp_6[i] = tmp_2[i];
    }

    tmp_6[13] = '\x00';
    Pub_proxy_linux_264.createPublisher(tmp_6, proxy_linux_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S55>/SinkBlock' */
    /* End of Start for SubSystem: '<S7>/Publish' */

    /* Start for Atomic SubSystem: '<S7>/Publish1' */
    /* Start for MATLABSystem: '<S56>/SinkBlock' */
    proxy_linux_DW.obj_a.isInitialized = 0;
    proxy_linux_DW.objisempty_l = true;
    proxy_linux_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      tmp_5[i] = tmp_1[i];
    }

    tmp_5[11] = '\x00';
    Pub_proxy_linux_311.createPublisher(tmp_5, proxy_linux_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S56>/SinkBlock' */
    /* End of Start for SubSystem: '<S7>/Publish1' */

    /* Start for Atomic SubSystem: '<S7>/Publish12' */
    /* Start for MATLABSystem: '<S57>/SinkBlock' */
    proxy_linux_DW.obj_b.isInitialized = 0;
    proxy_linux_DW.objisempty_k = true;
    proxy_linux_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp_4[i] = tmp_0[i];
    }

    tmp_4[5] = '\x00';
    Pub_proxy_linux_470.createPublisher(tmp_4, proxy_linux_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S57>/SinkBlock' */
    /* End of Start for SubSystem: '<S7>/Publish12' */

    /* Start for Atomic SubSystem: '<S2>/Subscribe' */
    /* Start for MATLABSystem: '<S8>/SourceBlock' */
    proxy_linux_DW.obj.isInitialized = 0;
    proxy_linux_DW.objisempty_f = true;
    proxy_linux_DW.obj.isInitialized = 1;
    for (i = 0; i < 32; i++) {
      proxy_linux_B.cv0[i] = tmp[i];
    }

    proxy_linux_B.cv0[32] = '\x00';
    Sub_proxy_linux_437.createSubscriber(proxy_linux_B.cv0,
      proxy_linux_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S8>/SourceBlock' */
    /* End of Start for SubSystem: '<S2>/Subscribe' */
    /* Start for S-Function (sdspToNetwork): '<S5>/UDP Send' */
    sErr = GetErrorBuffer(&proxy_linux_DW.UDPSend_NetworkLib[0U]);
    CreateUDPInterface(&proxy_linux_DW.UDPSend_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&proxy_linux_DW.UDPSend_NetworkLib[0U], 1, "0.0.0.0", -1,
                        "10.100.39.144", proxy_linux_P.UDPSend_remotePort, 8192,
                        1, 0);
    }

    if (*sErr == 0) {
      LibStart(&proxy_linux_DW.UDPSend_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&proxy_linux_DW.UDPSend_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(proxy_linux_M, sErr);
        rtmSetStopRequested(proxy_linux_M, 1);
      }
    }

    /* End of Start for S-Function (sdspToNetwork): '<S5>/UDP Send' */
  }

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt ' */
  proxy_linux_DW.Filt_states = proxy_linux_P.Filt_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 1' */
  proxy_linux_DW.Filt1_states_d = proxy_linux_P.Filt1_InitialStates_m;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 2' */
  proxy_linux_DW.Filt2_states_d = proxy_linux_P.Filt2_InitialStates_o;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 3' */
  proxy_linux_DW.Filt3_states_h = proxy_linux_P.Filt3_InitialStates_f;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 4' */
  proxy_linux_DW.Filt4_states_a = proxy_linux_P.Filt4_InitialStates_f;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 5' */
  proxy_linux_DW.Filt5_states_j = proxy_linux_P.Filt5_InitialStates_o;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 6' */
  proxy_linux_DW.Filt6_states_n = proxy_linux_P.Filt6_InitialStates_b;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 7' */
  proxy_linux_DW.Filt7_states = proxy_linux_P.Filt7_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S7>/Filt 8' */
  proxy_linux_DW.Filt8_states = proxy_linux_P.Filt8_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S2>/Filt 1' */
  proxy_linux_DW.Filt1_states = proxy_linux_P.Filt1_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S2>/Filt 2' */
  proxy_linux_DW.Filt2_states = proxy_linux_P.Filt2_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S2>/Filt 3' */
  proxy_linux_DW.Filt3_states = proxy_linux_P.Filt3_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S2>/Filt 4' */
  proxy_linux_DW.Filt4_states = proxy_linux_P.Filt4_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S2>/Filt 5' */
  proxy_linux_DW.Filt5_states = proxy_linux_P.Filt5_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S2>/Filt 6' */
  proxy_linux_DW.Filt6_states = proxy_linux_P.Filt6_InitialStates;

  /* InitializeConditions for UnitDelay: '<S18>/Unit Delay1' */
  proxy_linux_DW.UnitDelay1_DSTATE = proxy_linux_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay1' */
  proxy_linux_DW.UnitDelay1_DSTATE_m =
    proxy_linux_P.UnitDelay1_InitialCondition_n;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay1' */
  proxy_linux_DW.UnitDelay1_DSTATE_e =
    proxy_linux_P.UnitDelay1_InitialCondition_d;

  /* InitializeConditions for UnitDelay: '<S18>/Unit Delay3' */
  proxy_linux_DW.UnitDelay3_DSTATE[0] =
    proxy_linux_P.UnitDelay3_InitialCondition[0];

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay3' */
  proxy_linux_DW.UnitDelay3_DSTATE_c[0] =
    proxy_linux_P.UnitDelay3_InitialCondition_o[0];

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay3' */
  proxy_linux_DW.UnitDelay3_DSTATE_k[0] =
    proxy_linux_P.UnitDelay3_InitialCondition_e[0];

  /* InitializeConditions for UnitDelay: '<S18>/Unit Delay3' */
  proxy_linux_DW.UnitDelay3_DSTATE[1] =
    proxy_linux_P.UnitDelay3_InitialCondition[1];

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay3' */
  proxy_linux_DW.UnitDelay3_DSTATE_c[1] =
    proxy_linux_P.UnitDelay3_InitialCondition_o[1];

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay3' */
  proxy_linux_DW.UnitDelay3_DSTATE_k[1] =
    proxy_linux_P.UnitDelay3_InitialCondition_e[1];

  /* SystemInitialize for Atomic SubSystem: '<S2>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S9>/Out1' */
  proxy_linux_B.In1 = proxy_linux_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S2>/Subscribe' */
}

/* Model terminate function */
void proxy_linux_terminate(void)
{
  char_T *sErr;

  /* Terminate for Atomic SubSystem: '<S7>/Publish2' */
  /* Terminate for MATLABSystem: '<S58>/SinkBlock' */
  if (proxy_linux_DW.obj_k.isInitialized == 1) {
    proxy_linux_DW.obj_k.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S58>/SinkBlock' */
  /* End of Terminate for SubSystem: '<S7>/Publish2' */

  /* Terminate for S-Function (sdspFromNetwork): '<S4>/Receive from Haptics' */
  sErr = GetErrorBuffer(&proxy_linux_DW.ReceivefromHaptics_NetworkLib[0U]);
  LibTerminate(&proxy_linux_DW.ReceivefromHaptics_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(proxy_linux_M, sErr);
    rtmSetStopRequested(proxy_linux_M, 1);
  }

  LibDestroy(&proxy_linux_DW.ReceivefromHaptics_NetworkLib[0U], 0);
  DestroyUDPInterface(&proxy_linux_DW.ReceivefromHaptics_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspFromNetwork): '<S4>/Receive from Haptics' */

  /* Terminate for Atomic SubSystem: '<S7>/Publish' */
  /* Terminate for MATLABSystem: '<S55>/SinkBlock' */
  if (proxy_linux_DW.obj_kr.isInitialized == 1) {
    proxy_linux_DW.obj_kr.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S55>/SinkBlock' */
  /* End of Terminate for SubSystem: '<S7>/Publish' */

  /* Terminate for Atomic SubSystem: '<S7>/Publish1' */
  /* Terminate for MATLABSystem: '<S56>/SinkBlock' */
  if (proxy_linux_DW.obj_a.isInitialized == 1) {
    proxy_linux_DW.obj_a.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S56>/SinkBlock' */
  /* End of Terminate for SubSystem: '<S7>/Publish1' */

  /* Terminate for Atomic SubSystem: '<S7>/Publish12' */
  /* Terminate for MATLABSystem: '<S57>/SinkBlock' */
  if (proxy_linux_DW.obj_b.isInitialized == 1) {
    proxy_linux_DW.obj_b.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S57>/SinkBlock' */
  /* End of Terminate for SubSystem: '<S7>/Publish12' */

  /* Terminate for Atomic SubSystem: '<S2>/Subscribe' */
  /* Terminate for MATLABSystem: '<S8>/SourceBlock' */
  if (proxy_linux_DW.obj.isInitialized == 1) {
    proxy_linux_DW.obj.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S8>/SourceBlock' */
  /* End of Terminate for SubSystem: '<S2>/Subscribe' */

  /* Terminate for S-Function (sdspToNetwork): '<S5>/UDP Send' */
  sErr = GetErrorBuffer(&proxy_linux_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&proxy_linux_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(proxy_linux_M, sErr);
    rtmSetStopRequested(proxy_linux_M, 1);
  }

  LibDestroy(&proxy_linux_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&proxy_linux_DW.UDPSend_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<S5>/UDP Send' */
}
