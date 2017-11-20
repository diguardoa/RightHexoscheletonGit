/*
 * toUdp.cpp
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

#include "toUdp.h"
#include "toUdp_private.h"
#define toUdp_MessageQueueLen          (1)

/* Block signals (auto storage) */
B_toUdp_T toUdp_B;

/* Block states (auto storage) */
DW_toUdp_T toUdp_DW;

/* Real-time model */
RT_MODEL_toUdp_T toUdp_M_;
RT_MODEL_toUdp_T *const toUdp_M = &toUdp_M_;

/* Model step function */
void toUdp_step(void)
{
  char_T *sErr;
  SL_Bus_toUdp_std_msgs_Float64 b_varargout_2;
  boolean_T b_varargout_1;
  real32_T u0;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* Start for MATLABSystem: '<S1>/SourceBlock' incorporates:
   *  Inport: '<S2>/In1'
   */
  b_varargout_1 = Sub_toUdp_1201.getLatestMessage(&b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  if (b_varargout_1) {
    toUdp_B.In1 = b_varargout_2;
  }

  /* End of Start for MATLABSystem: '<S1>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* Product: '<Root>/Divide' incorporates:
   *  Constant: '<Root>/Constant'
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  u0 = (real32_T)toUdp_B.In1.Data / toUdp_P.Constant_Value_l;

  /* Saturate: '<Root>/Saturation' */
  if (u0 > toUdp_P.Saturation_UpperSat) {
    toUdp_B.Saturation = toUdp_P.Saturation_UpperSat;
  } else if (u0 < toUdp_P.Saturation_LowerSat) {
    toUdp_B.Saturation = toUdp_P.Saturation_LowerSat;
  } else {
    toUdp_B.Saturation = u0;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* S-Function (any2byte): '<Root>/Byte Pack' */

  /* Pack: <Root>/Byte Pack */
  (void) memcpy(&toUdp_B.BytePack[0], &toUdp_B.Saturation,
                4);

  /* Update for S-Function (sdspToNetwork): '<Root>/UDP Send' */
  sErr = GetErrorBuffer(&toUdp_DW.UDPSend_NetworkLib[0U]);
  LibUpdate_Network(&toUdp_DW.UDPSend_NetworkLib[0U], &toUdp_B.BytePack[0U], 4);
  if (*sErr != 0) {
    rtmSetErrorStatus(toUdp_M, sErr);
    rtmSetStopRequested(toUdp_M, 1);
  }

  /* End of Update for S-Function (sdspToNetwork): '<Root>/UDP Send' */
}

/* Model initialize function */
void toUdp_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)toUdp_M, 0,
                sizeof(RT_MODEL_toUdp_T));

  /* block I/O */
  (void) memset(((void *) &toUdp_B), 0,
                sizeof(B_toUdp_T));

  /* states (dwork) */
  (void) memset((void *)&toUdp_DW, 0,
                sizeof(DW_toUdp_T));

  {
    char_T *sErr;
    static const char_T tmp[24] = { '/', 'l', 'e', 'f', 't', '_', 'h', 'a', 'n',
      'd', '/', 'p', 'o', 's', 'i', 't', 'i', 'o', 'n', '_', 'c', 'u', 'r', 'r'
    };

    char_T tmp_0[25];
    int32_T i;

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S1>/SourceBlock' */
    toUdp_DW.obj.isInitialized = 0;
    toUdp_DW.objisempty = true;
    toUdp_DW.obj.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      tmp_0[i] = tmp[i];
    }

    tmp_0[24] = '\x00';
    Sub_toUdp_1201.createSubscriber(tmp_0, toUdp_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S1>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for S-Function (sdspToNetwork): '<Root>/UDP Send' */
    sErr = GetErrorBuffer(&toUdp_DW.UDPSend_NetworkLib[0U]);
    CreateUDPInterface(&toUdp_DW.UDPSend_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&toUdp_DW.UDPSend_NetworkLib[0U], 1, "0.0.0.0", -1,
                        "10.24.4.10", toUdp_P.UDPSend_remotePort, 8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&toUdp_DW.UDPSend_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&toUdp_DW.UDPSend_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(toUdp_M, sErr);
        rtmSetStopRequested(toUdp_M, 1);
      }
    }

    /* End of Start for S-Function (sdspToNetwork): '<Root>/UDP Send' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S1>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S2>/Out1' */
  toUdp_B.In1 = toUdp_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */
}

/* Model terminate function */
void toUdp_terminate(void)
{
  char_T *sErr;

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Start for MATLABSystem: '<S1>/SourceBlock' */
  if (toUdp_DW.obj.isInitialized == 1) {
    toUdp_DW.obj.isInitialized = 2;
  }

  /* End of Start for MATLABSystem: '<S1>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for S-Function (sdspToNetwork): '<Root>/UDP Send' */
  sErr = GetErrorBuffer(&toUdp_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&toUdp_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(toUdp_M, sErr);
    rtmSetStopRequested(toUdp_M, 1);
  }

  LibDestroy(&toUdp_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&toUdp_DW.UDPSend_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<Root>/UDP Send' */
}
