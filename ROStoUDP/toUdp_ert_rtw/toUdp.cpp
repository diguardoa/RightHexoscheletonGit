/*
 * toUdp.cpp
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
#define toUdp_MessageQueueLen          (1)

/* Block signals (auto storage) */
B_toUdp_T toUdp_B;

/* Block states (auto storage) */
DW_toUdp_T toUdp_DW;

/* Real-time model */
RT_MODEL_toUdp_T toUdp_M_;
RT_MODEL_toUdp_T *const toUdp_M = &toUdp_M_;
real32_T rt_roundf_snf(real32_T u)
{
  real32_T y;
  if ((real32_T)fabs((real_T)u) < 8.388608E+6F) {
    if (u >= 0.5F) {
      y = (real32_T)floor((real_T)(u + 0.5F));
    } else if (u > -0.5F) {
      y = u * 0.0F;
    } else {
      y = (real32_T)ceil((real_T)(u - 0.5F));
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void toUdp_step(void)
{
  char_T *sErr;
  int32_T samplesRead;
  boolean_T b_varargout_1;
  SL_Bus_toUdp_std_msgs_Float64 rtb_BusAssignment2;
  real32_T u0;

  /* S-Function (sdspFromNetwork): '<Root>/Receive from Haptics' */
  sErr = GetErrorBuffer(&toUdp_DW.ReceivefromHaptics_NetworkLib[0U]);
  samplesRead = 4;
  LibOutputs_Network(&toUdp_DW.ReceivefromHaptics_NetworkLib[0U],
                     &toUdp_B.ReceivefromHaptics_o1[0U], &samplesRead);
  if (*sErr != 0) {
    rtmSetErrorStatus(toUdp_M, sErr);
    rtmSetStopRequested(toUdp_M, 1);
  }

  toUdp_B.ReceivefromHaptics_o2 = (uint16_T)samplesRead;

  /* End of S-Function (sdspFromNetwork): '<Root>/Receive from Haptics' */

  /* S-Function (byte2any): '<Root>/Byte Unpack' */

  /* Unpack: <Root>/Byte Unpack */
  (void) memcpy(&toUdp_B.ByteUnpack, &toUdp_B.ReceivefromHaptics_o1[0],
                4);

  /* BusAssignment: '<Root>/Bus Assignment2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  rtb_BusAssignment2.Data = toUdp_B.ByteUnpack;

  /* Outputs for Atomic SubSystem: '<Root>/Publish2' */
  /* MATLABSystem: '<S2>/SinkBlock' */
  Pub_toUdp_1220.publish(&rtb_BusAssignment2);

  /* End of Outputs for SubSystem: '<Root>/Publish2' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S3>/SourceBlock' */
  b_varargout_1 = Sub_toUdp_1201.getLatestMessage(&rtb_BusAssignment2);

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (b_varargout_1) {
    /* Product: '<S4>/Divide' incorporates:
     *  Constant: '<S4>/Constant'
     *  DataTypeConversion: '<S4>/Data Type Conversion'
     */
    u0 = (real32_T)rtb_BusAssignment2.Data / toUdp_P.Constant_Value_l;

    /* Saturate: '<S4>/Saturation' */
    if (u0 > toUdp_P.Saturation_UpperSat) {
      u0 = toUdp_P.Saturation_UpperSat;
    } else {
      if (u0 < toUdp_P.Saturation_LowerSat) {
        u0 = toUdp_P.Saturation_LowerSat;
      }
    }

    /* End of Saturate: '<S4>/Saturation' */

    /* Quantizer: '<S4>/Quantizer' */
    toUdp_B.Quantizer = rt_roundf_snf(u0 / toUdp_P.Quantizer_Interval) *
      toUdp_P.Quantizer_Interval;

    /* S-Function (any2byte): '<S4>/Byte Pack' */

    /* Pack: <S4>/Byte Pack */
    (void) memcpy(&toUdp_B.BytePack[0], &toUdp_B.Quantizer,
                  4);

    /* Update for S-Function (sdspToNetwork): '<S4>/UDP Send' */
    sErr = GetErrorBuffer(&toUdp_DW.UDPSend_NetworkLib[0U]);
    LibUpdate_Network(&toUdp_DW.UDPSend_NetworkLib[0U], &toUdp_B.BytePack[0U], 4);
    if (*sErr != 0) {
      rtmSetErrorStatus(toUdp_M, sErr);
      rtmSetStopRequested(toUdp_M, 1);
    }

    /* End of Update for S-Function (sdspToNetwork): '<S4>/UDP Send' */
  }

  /* End of MATLABSystem: '<S3>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S3>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */
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

    static const char_T tmp_0[20] = { '/', 'l', 'e', 'f', 't', '_', 'h', 'a',
      'n', 'd', '/', 'f', 'o', 'r', 'c', 'e', '_', 'r', 'e', 'f' };

    char_T tmp_1[25];
    char_T tmp_2[21];
    int32_T i;

    /* Start for S-Function (sdspFromNetwork): '<Root>/Receive from Haptics' */
    sErr = GetErrorBuffer(&toUdp_DW.ReceivefromHaptics_NetworkLib[0U]);
    CreateUDPInterface(&toUdp_DW.ReceivefromHaptics_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&toUdp_DW.ReceivefromHaptics_NetworkLib[0U], 0,
                        "0.0.0.0", toUdp_P.ReceivefromHaptics_localPort,
                        "10.24.4.10", -1, 4, 1, 10);
    }

    if (*sErr == 0) {
      LibStart(&toUdp_DW.ReceivefromHaptics_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&toUdp_DW.ReceivefromHaptics_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(toUdp_M, sErr);
        rtmSetStopRequested(toUdp_M, 1);
      }
    }

    /* End of Start for S-Function (sdspFromNetwork): '<Root>/Receive from Haptics' */

    /* Start for Atomic SubSystem: '<Root>/Publish2' */
    /* Start for MATLABSystem: '<S2>/SinkBlock' */
    toUdp_DW.obj.isInitialized = 0;
    toUdp_DW.objisempty_a = true;
    toUdp_DW.obj.isInitialized = 1;
    for (i = 0; i < 20; i++) {
      tmp_2[i] = tmp_0[i];
    }

    tmp_2[20] = '\x00';
    Pub_toUdp_1220.createPublisher(tmp_2, toUdp_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S2>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish2' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S3>/SourceBlock' */
    toUdp_DW.obj_e.isInitialized = 0;
    toUdp_DW.objisempty = true;
    toUdp_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      tmp_1[i] = tmp[i];
    }

    tmp_1[24] = '\x00';
    Sub_toUdp_1201.createSubscriber(tmp_1, toUdp_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S3>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Enabled SubSystem: '<Root>/Subsystem' */
    /* Start for S-Function (sdspToNetwork): '<S4>/UDP Send' */
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

    /* End of Start for S-Function (sdspToNetwork): '<S4>/UDP Send' */
    /* End of Start for SubSystem: '<Root>/Subsystem' */
  }
}

/* Model terminate function */
void toUdp_terminate(void)
{
  char_T *sErr;

  /* Terminate for S-Function (sdspFromNetwork): '<Root>/Receive from Haptics' */
  sErr = GetErrorBuffer(&toUdp_DW.ReceivefromHaptics_NetworkLib[0U]);
  LibTerminate(&toUdp_DW.ReceivefromHaptics_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(toUdp_M, sErr);
    rtmSetStopRequested(toUdp_M, 1);
  }

  LibDestroy(&toUdp_DW.ReceivefromHaptics_NetworkLib[0U], 0);
  DestroyUDPInterface(&toUdp_DW.ReceivefromHaptics_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspFromNetwork): '<Root>/Receive from Haptics' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish2' */
  /* Terminate for MATLABSystem: '<S2>/SinkBlock' */
  if (toUdp_DW.obj.isInitialized == 1) {
    toUdp_DW.obj.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S2>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish2' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S3>/SourceBlock' */
  if (toUdp_DW.obj_e.isInitialized == 1) {
    toUdp_DW.obj_e.isInitialized = 2;
  }

  /* End of Terminate for MATLABSystem: '<S3>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Enabled SubSystem: '<Root>/Subsystem' */
  /* Terminate for S-Function (sdspToNetwork): '<S4>/UDP Send' */
  sErr = GetErrorBuffer(&toUdp_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&toUdp_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(toUdp_M, sErr);
    rtmSetStopRequested(toUdp_M, 1);
  }

  LibDestroy(&toUdp_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&toUdp_DW.UDPSend_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<S4>/UDP Send' */
  /* End of Terminate for SubSystem: '<Root>/Subsystem' */
}
