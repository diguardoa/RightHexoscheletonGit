/*
 * Mother_sf.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Mother_sf".
 *
 * Model version              : 1.2002
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Mon Feb 19 11:06:16 2018
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Mother_sf_h_
#define RTW_HEADER_Mother_sf_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Mother_sf_COMMON_INCLUDES_
# define Mother_sf_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME                Mother_sf
#define S_FUNCTION_LEVEL               2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if !defined(MATLAB_MEX_FILE)
#include "rt_matrx.h"
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES

typedef struct {
  void *blockIO;
  void *defaultParam;
  void *nonContDerivSig;
} LocalS;

#define ssSetLocalBlockIO(S, io)       ((LocalS *)ssGetUserData(S))->blockIO = ((void *)(io))
#define ssGetLocalBlockIO(S)           ((LocalS *)ssGetUserData(S))->blockIO
#define ssSetLocalDefaultParam(S, paramVector) ((LocalS *)ssGetUserData(S))->defaultParam = (paramVector)
#define ssGetLocalDefaultParam(S)      ((LocalS *)ssGetUserData(S))->defaultParam
#define ssSetLocalNonContDerivSig(S, pSig) ((LocalS *)ssGetUserData(S))->nonContDerivSig = (pSig)
#define ssGetLocalNonContDerivSig(S)   ((LocalS *)ssGetUserData(S))->nonContDerivSig
#endif
#endif                                 /* Mother_sf_COMMON_INCLUDES_ */

#include "Mother_sf_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real32_T *CMC_AA_s;                  /* '<Root>/CMC_AA' */
  real32_T *CMC_FE_s;                  /* '<Root>/CMC_FE' */
  real32_T *MCP_FE;                    /* '<Root>/MCP_FE' */
  real32_T *l_dist;                    /* '<Root>/l_dist' */
  real32_T *l_meta;                    /* '<Root>/l_meta' */
  real32_T *x;                         /* '<Root>/xCMC' */
  real32_T *y;                         /* '<Root>/yCMC' */
  real32_T *z;                         /* '<Root>/zCMC' */
  real32_T *x_h;                       /* '<Root>/xG1' */
  real32_T *y_b;                       /* '<Root>/yG1' */
  real32_T *z_a;                       /* '<Root>/zG1' */
  real32_T *x_g;                       /* '<Root>/xG2' */
  real32_T *y_a;                       /* '<Root>/yG2' */
  real32_T *z_h;                       /* '<Root>/zG2' */
  real32_T *x_b;                       /* '<Root>/xMCP' */
  real32_T *y_n;                       /* '<Root>/yMCP' */
  real32_T *z_l;                       /* '<Root>/zMCP' */
} ExternalUPtrs_Mother_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  creal32_T *MCP_AA_s[2];              /* '<Root>/MCP_AA_s' */
} ExtY_Mother_T;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('dx_hand_model/Thumb/Proximal and Distal Phalanx/Mother of Kinematics')    - opens subsystem dx_hand_model/Thumb/Proximal and Distal Phalanx/Mother of Kinematics
 * hilite_system('dx_hand_model/Thumb/Proximal and Distal Phalanx/Mother of Kinematics/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx'
 * '<S1>'   : 'dx_hand_model/Thumb/Proximal and Distal Phalanx/Mother of Kinematics'
 */
#endif                                 /* RTW_HEADER_Mother_sf_h_ */
