/*
 * proxy_data.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "proxy".
 *
 * Model version              : 1.499
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C++ source code generated on : Tue Oct 31 09:53:19 2017
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "proxy.h"
#include "proxy_private.h"

/* Block parameters (auto storage) */
P_proxy_T proxy_P = {
  /* Mask Parameter: ReceivefromHaptics_localPort
   * Referenced by: '<S4>/Receive from Haptics'
   */
  15001,

  /* Mask Parameter: UDPSend_remotePort
   * Referenced by: '<S5>/UDP Send'
   */
  12000,

  /* Mask Parameter: UDPSend_remotePort_m
   * Referenced by: '<S6>/UDP Send'
   */
  15000,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S53>/Constant'
   */
  {
    {
      {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      }, {
        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              /* Data */

        {
          0U,                          /* CurrentLength */
          0U                           /* ReceivedLength */
        }                              /* Data_SL_Info */
      } }
    ,                                  /* Name */

    {
      0U,                              /* CurrentLength */
      0U                               /* ReceivedLength */
    },                                 /* Name_SL_Info */

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  /* Position */

    {
      0U,                              /* CurrentLength */
      0U                               /* ReceivedLength */
    },                                 /* Position_SL_Info */

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  /* Velocity */

    {
      0U,                              /* CurrentLength */
      0U                               /* ReceivedLength */
    },                                 /* Velocity_SL_Info */

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  /* Effort */

    {
      0U,                              /* CurrentLength */
      0U                               /* ReceivedLength */
    },                                 /* Effort_SL_Info */

    {
      0U,                              /* Seq */

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                /* FrameId */

      {
        0U,                            /* CurrentLength */
        0U                             /* ReceivedLength */
      },                               /* FrameId_SL_Info */

      {
        0.0,                           /* Sec */
        0.0                            /* Nsec */
      }                                /* Stamp */
    }                                  /* Header */
  },

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S9>/Out1'
   */
  {
    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  /* Data */

    {
      0U,                              /* CurrentLength */
      0U                               /* ReceivedLength */
    },                                 /* Data_SL_Info */

    {
      0U,                              /* DataOffset */

      {
        {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        } }
      ,                                /* Dim */

      {
        0U,                            /* CurrentLength */
        0U                             /* ReceivedLength */
      }                                /* Dim_SL_Info */
    }                                  /* Layout */
  },

  /* Computed Parameter: Constant_Value_g
   * Referenced by: '<S8>/Constant'
   */
  {
    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  /* Data */

    {
      0U,                              /* CurrentLength */
      0U                               /* ReceivedLength */
    },                                 /* Data_SL_Info */

    {
      0U,                              /* DataOffset */

      {
        {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            /* Label */

          {
            0U,                        /* CurrentLength */
            0U                         /* ReceivedLength */
          },                           /* Label_SL_Info */
          0U,                          /* Size */
          0U                           /* Stride */
        } }
      ,                                /* Dim */

      {
        0U,                            /* CurrentLength */
        0U                             /* ReceivedLength */
      }                                /* Dim_SL_Info */
    }                                  /* Layout */
  },

  /* Expression: 1/360
   * Referenced by: '<S2>/Gain1'
   */
  0.0027777777777777779,

  /* Expression: 5
   * Referenced by: '<S13>/Gain'
   */
  5.0,

  /* Expression: 5
   * Referenced by: '<S13>/Saturation1'
   */
  5.0,

  /* Expression: -5
   * Referenced by: '<S13>/Saturation1'
   */
  -5.0,

  /* Expression: 1/360
   * Referenced by: '<S2>/Gain'
   */
  0.0027777777777777779,

  /* Expression: 5
   * Referenced by: '<S14>/Gain'
   */
  5.0,

  /* Expression: 5
   * Referenced by: '<S14>/Saturation1'
   */
  5.0,

  /* Expression: -5
   * Referenced by: '<S14>/Saturation1'
   */
  -5.0,

  /* Expression: 10
   * Referenced by: '<S29>/finger width'
   */
  10.0,

  /* Expression: 50
   * Referenced by: '<S29>/proximal length'
   */
  50.0,

  /* Expression: [50; 7]
   * Referenced by: '<S18>/Sensor1'
   */
  { 50.0, 7.0 },

  /* Expression: 7
   * Referenced by: '<S40>/finger width'
   */
  7.0,

  /* Expression: 50
   * Referenced by: '<S40>/proximal length'
   */
  50.0,

  /* Expression: filt.Numerator{1,1}
   * Referenced by: '<S2>/Filt 1'
   */
  { 0.0, 0.095162581964040441 },

  /* Expression: filt.Denominator{1,1}
   * Referenced by: '<S2>/Filt 1'
   */
  { 1.0, -0.90483741803595952 },

  /* Expression: 0
   * Referenced by: '<S2>/Filt 1'
   */
  0.0,

  /* Expression: filt.Numerator{1,1}
   * Referenced by: '<S2>/Filt 2'
   */
  { 0.0, 0.095162581964040441 },

  /* Expression: filt.Denominator{1,1}
   * Referenced by: '<S2>/Filt 2'
   */
  { 1.0, -0.90483741803595952 },

  /* Expression: 0
   * Referenced by: '<S2>/Filt 2'
   */
  0.0,

  /* Expression: filt.Numerator{1,1}
   * Referenced by: '<S2>/Filt 3'
   */
  { 0.0, 0.095162581964040441 },

  /* Expression: filt.Denominator{1,1}
   * Referenced by: '<S2>/Filt 3'
   */
  { 1.0, -0.90483741803595952 },

  /* Expression: 0
   * Referenced by: '<S2>/Filt 3'
   */
  0.0,

  /* Expression: filt.Numerator{1,1}
   * Referenced by: '<S2>/Filt 4'
   */
  { 0.0, 0.095162581964040441 },

  /* Expression: filt.Denominator{1,1}
   * Referenced by: '<S2>/Filt 4'
   */
  { 1.0, -0.90483741803595952 },

  /* Expression: 0
   * Referenced by: '<S2>/Filt 4'
   */
  0.0,

  /* Expression: filt.Numerator{1,1}
   * Referenced by: '<S2>/Filt 5'
   */
  { 0.0, 0.095162581964040441 },

  /* Expression: filt.Denominator{1,1}
   * Referenced by: '<S2>/Filt 5'
   */
  { 1.0, -0.90483741803595952 },

  /* Expression: 0
   * Referenced by: '<S2>/Filt 5'
   */
  0.0,

  /* Expression: filt.Numerator{1,1}
   * Referenced by: '<S2>/Filt 6'
   */
  { 0.0, 0.095162581964040441 },

  /* Expression: filt.Denominator{1,1}
   * Referenced by: '<S2>/Filt 6'
   */
  { 1.0, -0.90483741803595952 },

  /* Expression: 0
   * Referenced by: '<S2>/Filt 6'
   */
  0.0,

  /* Expression: 1/360
   * Referenced by: '<S2>/Gain2'
   */
  0.0027777777777777779,

  /* Expression: 1/360
   * Referenced by: '<S2>/Gain3'
   */
  0.0027777777777777779,

  /* Expression: 1/688
   * Referenced by: '<S2>/Gain6'
   */
  0.0014534883720930232,

  /* Expression: 1/688
   * Referenced by: '<S2>/Gain7'
   */
  0.0014534883720930232,

  /* Expression: 90
   * Referenced by: '<S11>/Gain'
   */
  90.0,

  /* Expression: 180
   * Referenced by: '<S11>/Gain1'
   */
  180.0,

  /* Expression: 90
   * Referenced by: '<S12>/Gain'
   */
  90.0,

  /* Expression: 180
   * Referenced by: '<S12>/Gain1'
   */
  180.0,

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S51>/Constant'
   */
  {
    0.0F                               /* Data */
  },

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S52>/Constant'
   */
  {
    false                              /* Data */
  },

  /* Computed Parameter: Constant5_Value
   * Referenced by: '<S12>/Constant5'
   */
  0.0F,

  /* Computed Parameter: Constant4_Value
   * Referenced by: '<S12>/Constant4'
   */
  1.0F,

  /* Computed Parameter: Constant1_Value
   * Referenced by: '<S13>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_g
   * Referenced by: '<S14>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Saturation_UpperSat
   * Referenced by: '<S12>/Saturation'
   */
  5.0F,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S12>/Saturation'
   */
  -5.0F,

  /* Computed Parameter: Saturation_UpperSat_m
   * Referenced by: '<S11>/Saturation'
   */
  5.0F,

  /* Computed Parameter: Saturation_LowerSat_i
   * Referenced by: '<S11>/Saturation'
   */
  -5.0F,

  /* Computed Parameter: Constant4_Value_f
   * Referenced by: '<S5>/Constant4'
   */
  1.0F,

  /* Computed Parameter: Constant1_Value_e
   * Referenced by: '<S5>/Constant1'
   */
  5.0F,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S5>/Constant3'
   */
  3.0F,

  /* Computed Parameter: Filt_NumCoef
   * Referenced by: '<S7>/Filt '
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt_DenCoef
   * Referenced by: '<S7>/Filt '
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt_InitialStates
   * Referenced by: '<S7>/Filt '
   */
  0.0F,

  /* Computed Parameter: Filt1_NumCoef_j
   * Referenced by: '<S7>/Filt 1'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt1_DenCoef_l
   * Referenced by: '<S7>/Filt 1'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt1_InitialStates_m
   * Referenced by: '<S7>/Filt 1'
   */
  0.0F,

  /* Computed Parameter: Filt2_NumCoef_o
   * Referenced by: '<S7>/Filt 2'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt2_DenCoef_a
   * Referenced by: '<S7>/Filt 2'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt2_InitialStates_o
   * Referenced by: '<S7>/Filt 2'
   */
  0.0F,

  /* Computed Parameter: Filt3_NumCoef_m
   * Referenced by: '<S7>/Filt 3'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt3_DenCoef_k
   * Referenced by: '<S7>/Filt 3'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt3_InitialStates_f
   * Referenced by: '<S7>/Filt 3'
   */
  0.0F,

  /* Computed Parameter: Filt4_NumCoef_f
   * Referenced by: '<S7>/Filt 4'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt4_DenCoef_l
   * Referenced by: '<S7>/Filt 4'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt4_InitialStates_f
   * Referenced by: '<S7>/Filt 4'
   */
  0.0F,

  /* Computed Parameter: Filt5_NumCoef_e
   * Referenced by: '<S7>/Filt 5'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt5_DenCoef_g
   * Referenced by: '<S7>/Filt 5'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt5_InitialStates_o
   * Referenced by: '<S7>/Filt 5'
   */
  0.0F,

  /* Computed Parameter: Filt6_NumCoef_j
   * Referenced by: '<S7>/Filt 6'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt6_DenCoef_n
   * Referenced by: '<S7>/Filt 6'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt6_InitialStates_b
   * Referenced by: '<S7>/Filt 6'
   */
  0.0F,

  /* Computed Parameter: Filt7_NumCoef
   * Referenced by: '<S7>/Filt 7'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt7_DenCoef
   * Referenced by: '<S7>/Filt 7'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt7_InitialStates
   * Referenced by: '<S7>/Filt 7'
   */
  0.0F,

  /* Computed Parameter: Filt8_NumCoef
   * Referenced by: '<S7>/Filt 8'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt8_DenCoef
   * Referenced by: '<S7>/Filt 8'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt8_InitialStates
   * Referenced by: '<S7>/Filt 8'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_i
   * Referenced by: '<S15>/Constant'
   */
  0.0F,

  /* Computed Parameter: Saturation_UpperSat_g
   * Referenced by: '<S7>/Saturation'
   */
  0.97F,

  /* Computed Parameter: Saturation_LowerSat_h
   * Referenced by: '<S7>/Saturation'
   */
  0.0F,

  /* Computed Parameter: Saturation1_UpperSat_iy
   * Referenced by: '<S7>/Saturation1'
   */
  0.99F,

  /* Computed Parameter: Saturation1_LowerSat_o
   * Referenced by: '<S7>/Saturation1'
   */
  0.0F,

  /* Computed Parameter: GainAggiustato_Gain
   * Referenced by: '<S28>/Gain  Aggiustato'
   */
  0.05F,

  /* Computed Parameter: GainAggiustato_Gain_e
   * Referenced by: '<S32>/Gain Aggiustato'
   */
  0.00596548105F,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S32>/Constant'
   */
  4.5378561F,

  /* Computed Parameter: Constant1_Value_d
   * Referenced by: '<S19>/Constant1'
   */
  0.0F,

  /* Computed Parameter: GainAggiustato_Gain_d
   * Referenced by: '<S20>/Gain  Aggiustato'
   */
  0.05F,

  /* Computed Parameter: GainAggiustato_Gain_a
   * Referenced by: '<S26>/Gain Aggiustato'
   */
  0.00596548105F,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S26>/Constant'
   */
  4.36332321F,

  /* Computed Parameter: Saturation2_UpperSat
   * Referenced by: '<S7>/Saturation2'
   */
  1.33F,

  /* Computed Parameter: Saturation2_LowerSat
   * Referenced by: '<S7>/Saturation2'
   */
  0.0F,

  /* Computed Parameter: Saturation3_UpperSat
   * Referenced by: '<S7>/Saturation3'
   */
  0.8F,

  /* Computed Parameter: Saturation3_LowerSat
   * Referenced by: '<S7>/Saturation3'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_de
   * Referenced by: '<S12>/Constant1'
   */
  { 0.0F, 2.34F },

  /* Computed Parameter: GainAggiustato_Gain_h
   * Referenced by: '<S12>/Gain  Aggiustato'
   */
  0.05F,

  /* Computed Parameter: GainAggiustato_Gain_o
   * Referenced by: '<S45>/Gain Aggiustato'
   */
  0.00596548105F,

  /* Computed Parameter: Constant_Value_b
   * Referenced by: '<S45>/Constant'
   */
  4.5378561F,

  /* Computed Parameter: Saturation4_UpperSat
   * Referenced by: '<S7>/Saturation4'
   */
  1.33F,

  /* Computed Parameter: Saturation4_LowerSat
   * Referenced by: '<S7>/Saturation4'
   */
  0.0F,

  /* Computed Parameter: Saturation5_UpperSat
   * Referenced by: '<S7>/Saturation5'
   */
  0.8F,

  /* Computed Parameter: Saturation5_LowerSat
   * Referenced by: '<S7>/Saturation5'
   */
  0.0F,

  /* Computed Parameter: Saturation_UpperSat_b
   * Referenced by: '<S14>/Saturation'
   */
  950.0F,

  /* Computed Parameter: Saturation_LowerSat_b
   * Referenced by: '<S14>/Saturation'
   */
  0.0F,

  /* Computed Parameter: Saturation6_UpperSat
   * Referenced by: '<S7>/Saturation6'
   */
  0.98F,

  /* Computed Parameter: Saturation6_LowerSat
   * Referenced by: '<S7>/Saturation6'
   */
  0.0F,

  /* Computed Parameter: Saturation_UpperSat_c
   * Referenced by: '<S13>/Saturation'
   */
  950.0F,

  /* Computed Parameter: Saturation_LowerSat_l
   * Referenced by: '<S13>/Saturation'
   */
  0.0F,

  /* Computed Parameter: Saturation7_UpperSat
   * Referenced by: '<S7>/Saturation7'
   */
  0.98F,

  /* Computed Parameter: Saturation7_LowerSat
   * Referenced by: '<S7>/Saturation7'
   */
  0.0F,

  /* Computed Parameter: Saturation8_UpperSat
   * Referenced by: '<S7>/Saturation8'
   */
  0.58F,

  /* Computed Parameter: Saturation8_LowerSat
   * Referenced by: '<S7>/Saturation8'
   */
  0.2F,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S18>/Unit Delay3'
   */
  { 0.0F, 2.3F },

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S18>/Unit Delay1'
   */
  -1.0F,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S19>/Constant'
   */
  500.0F,

  /* Computed Parameter: UnitDelay3_InitialCondition_o
   * Referenced by: '<S31>/Unit Delay3'
   */
  { 0.0F, 2.3F },

  /* Computed Parameter: UnitDelay1_InitialCondition_n
   * Referenced by: '<S31>/Unit Delay1'
   */
  -1.0F,

  /* Computed Parameter: UnitDelay1_InitialCondition_d
   * Referenced by: '<S12>/Unit Delay1'
   */
  -1.0F,

  /* Computed Parameter: UnitDelay3_InitialCondition_e
   * Referenced by: '<S12>/Unit Delay3'
   */
  { 0.0F, 2.3F },

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<S5>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S5>/Constant2'
   */
  -10.0F,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S5>/Switch'
   */
  0.0F,

  /* Computed Parameter: Switch1_Threshold
   * Referenced by: '<S5>/Switch1'
   */
  0.0F,

  /* Computed Parameter: Switch2_Threshold
   * Referenced by: '<S5>/Switch2'
   */
  0.0F,

  /* Computed Parameter: Switch3_Threshold
   * Referenced by: '<S5>/Switch3'
   */
  0.0F,

  /* Computed Parameter: Switch4_Threshold
   * Referenced by: '<S5>/Switch4'
   */
  0.0F,

  /* Computed Parameter: Filt_NumCoef_o
   * Referenced by: '<S6>/Filt '
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt_DenCoef_i
   * Referenced by: '<S6>/Filt '
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt_InitialStates_a
   * Referenced by: '<S6>/Filt '
   */
  0.0F,

  /* Computed Parameter: Filt1_NumCoef_l
   * Referenced by: '<S6>/Filt 1'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt1_DenCoef_c
   * Referenced by: '<S6>/Filt 1'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt1_InitialStates_o
   * Referenced by: '<S6>/Filt 1'
   */
  0.0F,

  /* Computed Parameter: Filt2_NumCoef_n
   * Referenced by: '<S6>/Filt 2'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt2_DenCoef_f
   * Referenced by: '<S6>/Filt 2'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt2_InitialStates_m
   * Referenced by: '<S6>/Filt 2'
   */
  0.0F,

  /* Computed Parameter: Filt3_NumCoef_m5
   * Referenced by: '<S6>/Filt 3'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt3_DenCoef_d
   * Referenced by: '<S6>/Filt 3'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt3_InitialStates_j
   * Referenced by: '<S6>/Filt 3'
   */
  0.0F,

  /* Computed Parameter: Filt4_NumCoef_k
   * Referenced by: '<S6>/Filt 4'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt4_DenCoef_o
   * Referenced by: '<S6>/Filt 4'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt4_InitialStates_d
   * Referenced by: '<S6>/Filt 4'
   */
  0.0F,

  /* Computed Parameter: Filt5_NumCoef_ep
   * Referenced by: '<S6>/Filt 5'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt5_DenCoef_gw
   * Referenced by: '<S6>/Filt 5'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt5_InitialStates_h
   * Referenced by: '<S6>/Filt 5'
   */
  0.0F,

  /* Computed Parameter: Filt6_NumCoef_i
   * Referenced by: '<S6>/Filt 6'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt6_DenCoef_c
   * Referenced by: '<S6>/Filt 6'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt6_InitialStates_bg
   * Referenced by: '<S6>/Filt 6'
   */
  0.0F,

  /* Computed Parameter: Filt7_NumCoef_d
   * Referenced by: '<S6>/Filt 7'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt7_DenCoef_b
   * Referenced by: '<S6>/Filt 7'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt7_InitialStates_g
   * Referenced by: '<S6>/Filt 7'
   */
  0.0F,

  /* Computed Parameter: Filt8_NumCoef_h
   * Referenced by: '<S6>/Filt 8'
   */
  { 0.0F, 0.0951625854F },

  /* Computed Parameter: Filt8_DenCoef_p
   * Referenced by: '<S6>/Filt 8'
   */
  { 1.0F, -0.90483743F },

  /* Computed Parameter: Filt8_InitialStates_h
   * Referenced by: '<S6>/Filt 8'
   */
  0.0F,

  /* Computed Parameter: Saturation_UpperSat_a
   * Referenced by: '<S6>/Saturation'
   */
  0.97F,

  /* Computed Parameter: Saturation_LowerSat_k
   * Referenced by: '<S6>/Saturation'
   */
  0.0F,

  /* Computed Parameter: Saturation1_UpperSat_l
   * Referenced by: '<S6>/Saturation1'
   */
  0.99F,

  /* Computed Parameter: Saturation1_LowerSat_k
   * Referenced by: '<S6>/Saturation1'
   */
  0.0F,

  /* Computed Parameter: Saturation2_UpperSat_o
   * Referenced by: '<S6>/Saturation2'
   */
  1.33F,

  /* Computed Parameter: Saturation2_LowerSat_k
   * Referenced by: '<S6>/Saturation2'
   */
  0.0F,

  /* Computed Parameter: Saturation3_UpperSat_m
   * Referenced by: '<S6>/Saturation3'
   */
  0.8F,

  /* Computed Parameter: Saturation3_LowerSat_e
   * Referenced by: '<S6>/Saturation3'
   */
  0.0F,

  /* Computed Parameter: Saturation4_UpperSat_e
   * Referenced by: '<S6>/Saturation4'
   */
  1.33F,

  /* Computed Parameter: Saturation4_LowerSat_g
   * Referenced by: '<S6>/Saturation4'
   */
  0.0F,

  /* Computed Parameter: Saturation5_UpperSat_e
   * Referenced by: '<S6>/Saturation5'
   */
  0.8F,

  /* Computed Parameter: Saturation5_LowerSat_j
   * Referenced by: '<S6>/Saturation5'
   */
  0.0F,

  /* Computed Parameter: Saturation6_UpperSat_d
   * Referenced by: '<S6>/Saturation6'
   */
  0.98F,

  /* Computed Parameter: Saturation6_LowerSat_h
   * Referenced by: '<S6>/Saturation6'
   */
  0.0F,

  /* Computed Parameter: Saturation7_UpperSat_g
   * Referenced by: '<S6>/Saturation7'
   */
  0.98F,

  /* Computed Parameter: Saturation7_LowerSat_b
   * Referenced by: '<S6>/Saturation7'
   */
  0.0F,

  /* Computed Parameter: Saturation8_UpperSat_m
   * Referenced by: '<S6>/Saturation8'
   */
  0.58F,

  /* Computed Parameter: Saturation8_LowerSat_b
   * Referenced by: '<S6>/Saturation8'
   */
  0.0F,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S19>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S19>/Manual Switch'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_b
   * Referenced by: '<Root>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting_o
   * Referenced by: '<S15>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_l
   * Referenced by: '<S15>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting_ox
   * Referenced by: '<S11>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_bd
   * Referenced by: '<S11>/Manual Switch'
   */
  1U,

  /* Computed Parameter: ManualSwitch5_CurrentSetting
   * Referenced by: '<S12>/Manual Switch5'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_bx
   * Referenced by: '<S14>/Manual Switch'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_c
   * Referenced by: '<S13>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_m
   * Referenced by: '<S5>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting_p
   * Referenced by: '<S5>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: Constant1_Value_k
   * Referenced by: '<Root>/Constant1'
   */
  1,

  /* Computed Parameter: Constant_Value_ok
   * Referenced by: '<Root>/Constant'
   */
  0
};
