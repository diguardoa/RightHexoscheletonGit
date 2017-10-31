/*
 * proxy.h
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

#ifndef RTW_HEADER_proxy_h_
#define RTW_HEADER_proxy_h_
#include <string.h>
#include <math.h>
#include <stddef.h>
#ifndef proxy_COMMON_INCLUDES_
# define proxy_COMMON_INCLUDES_
#include <stdio.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "DAHostLib_Network.h"
#endif                                 /* proxy_COMMON_INCLUDES_ */

#include "proxy_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

/* Block signals for system '<S11>/MATLAB Function' */
typedef struct {
  real32_T y[2];                       /* '<S11>/MATLAB Function' */
} B_MATLABFunction_proxy_T;

/* Block signals (auto storage) */
typedef struct {
  SL_Bus_proxy_sensor_msgs_JointState msg;/* '<S7>/MATLAB Function - Assign' */
  SL_Bus_proxy_std_msgs_Float64MultiArray In1;/* '<S9>/In1' */
  SL_Bus_proxy_std_msgs_Float64MultiArray b_varargout_2;
  real32_T ByteUnpacking[17];          /* '<S4>/Byte Unpacking ' */
  real32_T TmpSignalConversionAtBytePackIn[12];
  real32_T TmpSignalConversionAtBytePack_b[11];
  uint8_T BytePack[48];                /* '<S5>/Byte Pack' */
  uint8_T BytePack_d[44];              /* '<S6>/Byte Pack' */
  char_T cv0[33];
  real32_T y_l[8];                     /* '<S31>/Pose' */
  real32_T JTcomp_p[4];                /* '<S18>/Jacobian2' */
  real_T Filt1;                        /* '<S2>/Filt 1' */
  real_T Filt2;                        /* '<S2>/Filt 2' */
  real_T Filt6;                        /* '<S2>/Filt 6' */
  real_T Filt5;                        /* '<S2>/Filt 5' */
  real_T Filt4;                        /* '<S2>/Filt 4' */
  real_T Filt3;                        /* '<S2>/Filt 3' */
  real_T LAK_tmp;
  real32_T atemp;
  real32_T qN;
  real32_T xH;
  real32_T yH;
  real32_T xC;
  real32_T xD;
  real32_T yD;
  real32_T yI;
  real32_T LLI;
  real32_T LHD;
  real32_T LDG;
  real32_T LA2K;
  real32_T Filt8;                      /* '<S6>/Filt 8' */
  real32_T Filt7;                      /* '<S6>/Filt 7' */
  real32_T Sum1_h;                     /* '<S45>/Sum1' */
  real32_T GainAggiustato_g;           /* '<S12>/Gain  Aggiustato' */
  real32_T Sum1;                       /* '<S32>/Sum1' */
  real32_T Sum1_b;                     /* '<S26>/Sum1' */
  real32_T ManualSwitch_n;             /* '<S11>/Manual Switch' */
  real32_T ManualSwitch1_h;            /* '<S11>/Manual Switch1' */
  real32_T rtb_VectorConcatenate_idx_8;
  real32_T rtb_VectorConcatenate_idx_7;
  real32_T rtb_VectorConcatenate_idx_6;
  real32_T rtb_VectorConcatenate_idx_5;
  real32_T rtb_VectorConcatenate_idx_4;
  real32_T rtb_VectorConcatenate_idx_3;
  real32_T rtb_VectorConcatenate_idx_2;
  real32_T rtb_VectorConcatenate_idx_1;
  real32_T rtb_VectorConcatenate_idx_0;
  real32_T rtb_TmpSignalConversionAtSFu__m;
  real32_T rtb_TmpSignalConversionAtSFu__c;
  real32_T rtb_DataTypeConversion_a_idx_1;
  real32_T rtb_y_p_idx_0;
  real32_T rtb_y_p_idx_1;
  real32_T rtb_y_p_idx_2;
  real32_T rtb_y_p_idx_3;
  real32_T rtb_y_p_idx_4;
  real32_T rtb_y_p_idx_5;
  real32_T rtb_y_p_idx_6;
  real32_T rtb_y_p_idx_7;
  real32_T rtb_pose_idx_0;
  real32_T rtb_pose_idx_1;
  real32_T rtb_pose_idx_2;
  real32_T rtb_pose_idx_3;
  real32_T rtb_pose_idx_4;
  real32_T rtb_pose_idx_5;
  real32_T rtb_pose_idx_6;
  real32_T rtb_pose_idx_7;
  real32_T LLI_tmp;
  real32_T LLI_tmp_k;
  real32_T LLI_tmp_c;
  real32_T LLI_tmp_b;
  real32_T LLI_tmp_p;
  real32_T yI_tmp;
  real32_T yI_tmp_c;
  real32_T yI_tmp_tmp;
  real32_T yI_tmp_f;
  real32_T LLI_tmp_g;
  real32_T yI_tmp_g;
  real32_T yI_tmp_m;
  real32_T yI_tmp_n;
  real32_T yI_tmp_tmp_p;
  real32_T yI_tmp_l;
  real32_T yI_tmp_j;
  real32_T yI_tmp_d;
  real32_T yI_tmp_tmp_g;
  real32_T yI_tmp_ld;
  real32_T yI_tmp_tmp_tmp;
  real32_T yI_tmp_dh;
  real32_T yI_tmp_dy;
  real32_T yI_tmp_lx;
  real32_T yI_tmp_o;
  real32_T yI_tmp_b;
  int32_T samplesRead;
  SL_Bus_proxy_std_msgs_Float32 BusAssignment1;/* '<S7>/Bus Assignment1' */
  SL_Bus_proxy_std_msgs_Float32 BusAssignment;/* '<S7>/Bus Assignment' */
  uint16_T ReceivefromHaptics_o2;      /* '<S4>/Receive from Haptics' */
  uint8_T ReceivefromHaptics_o1[68];   /* '<S4>/Receive from Haptics' */
  B_MATLABFunction_proxy_T sf_MATLABFunction_d;/* '<S12>/MATLAB Function' */
  B_MATLABFunction_proxy_T sf_MATLABFunction_o;/* '<S11>/MATLAB Function' */
} B_proxy_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Filt1_states;                 /* '<S2>/Filt 1' */
  real_T Filt2_states;                 /* '<S2>/Filt 2' */
  real_T Filt3_states;                 /* '<S2>/Filt 3' */
  real_T Filt4_states;                 /* '<S2>/Filt 4' */
  real_T Filt5_states;                 /* '<S2>/Filt 5' */
  real_T Filt6_states;                 /* '<S2>/Filt 6' */
  real_T ReceivefromHaptics_NetworkLib[137];/* '<S4>/Receive from Haptics' */
  real_T UDPSend_NetworkLib[137];      /* '<S5>/UDP Send' */
  real_T UDPSend_NetworkLib_d[137];    /* '<S6>/UDP Send' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S31>/Scope' */

  real32_T Filt_states;                /* '<S7>/Filt ' */
  real32_T Filt1_states_d;             /* '<S7>/Filt 1' */
  real32_T Filt2_states_d;             /* '<S7>/Filt 2' */
  real32_T Filt3_states_h;             /* '<S7>/Filt 3' */
  real32_T Filt4_states_a;             /* '<S7>/Filt 4' */
  real32_T Filt5_states_j;             /* '<S7>/Filt 5' */
  real32_T Filt6_states_n;             /* '<S7>/Filt 6' */
  real32_T Filt7_states;               /* '<S7>/Filt 7' */
  real32_T Filt8_states;               /* '<S7>/Filt 8' */
  real32_T UnitDelay3_DSTATE[2];       /* '<S18>/Unit Delay3' */
  real32_T UnitDelay1_DSTATE;          /* '<S18>/Unit Delay1' */
  real32_T UnitDelay3_DSTATE_c[2];     /* '<S31>/Unit Delay3' */
  real32_T UnitDelay1_DSTATE_m;        /* '<S31>/Unit Delay1' */
  real32_T UnitDelay1_DSTATE_e;        /* '<S12>/Unit Delay1' */
  real32_T UnitDelay3_DSTATE_k[2];     /* '<S12>/Unit Delay3' */
  real32_T Filt_states_k;              /* '<S6>/Filt ' */
  real32_T Filt1_states_o;             /* '<S6>/Filt 1' */
  real32_T Filt2_states_m;             /* '<S6>/Filt 2' */
  real32_T Filt3_states_n;             /* '<S6>/Filt 3' */
  real32_T Filt4_states_k;             /* '<S6>/Filt 4' */
  real32_T Filt5_states_g;             /* '<S6>/Filt 5' */
  real32_T Filt6_states_a;             /* '<S6>/Filt 6' */
  real32_T Filt7_states_j;             /* '<S6>/Filt 7' */
  real32_T Filt8_states_l;             /* '<S6>/Filt 8' */
  robotics_slros_internal_block_T obj; /* '<S8>/SourceBlock' */
  robotics_slros_internal_blo_d_T obj_k;/* '<S58>/SinkBlock' */
  robotics_slros_internal_blo_d_T obj_b;/* '<S57>/SinkBlock' */
  robotics_slros_internal_blo_d_T obj_a;/* '<S56>/SinkBlock' */
  robotics_slros_internal_blo_d_T obj_kr;/* '<S55>/SinkBlock' */
  int_T ByteUnpacking_IWORK[2];        /* '<S4>/Byte Unpacking ' */
  boolean_T objisempty;                /* '<S58>/SinkBlock' */
  boolean_T objisempty_k;              /* '<S57>/SinkBlock' */
  boolean_T objisempty_l;              /* '<S56>/SinkBlock' */
  boolean_T objisempty_c;              /* '<S55>/SinkBlock' */
  boolean_T objisempty_f;              /* '<S8>/SourceBlock' */
} DW_proxy_T;

/* Parameters (auto storage) */
struct P_proxy_T_ {
  int32_T ReceivefromHaptics_localPort;/* Mask Parameter: ReceivefromHaptics_localPort
                                        * Referenced by: '<S4>/Receive from Haptics'
                                        */
  int32_T UDPSend_remotePort;          /* Mask Parameter: UDPSend_remotePort
                                        * Referenced by: '<S5>/UDP Send'
                                        */
  int32_T UDPSend_remotePort_m;        /* Mask Parameter: UDPSend_remotePort_m
                                        * Referenced by: '<S6>/UDP Send'
                                        */
  SL_Bus_proxy_sensor_msgs_JointState Constant_Value;/* Computed Parameter: Constant_Value
                                                      * Referenced by: '<S53>/Constant'
                                                      */
  SL_Bus_proxy_std_msgs_Float64MultiArray Out1_Y0;/* Computed Parameter: Out1_Y0
                                                   * Referenced by: '<S9>/Out1'
                                                   */
  SL_Bus_proxy_std_msgs_Float64MultiArray Constant_Value_g;/* Computed Parameter: Constant_Value_g
                                                            * Referenced by: '<S8>/Constant'
                                                            */
  real_T Gain1_Gain;                   /* Expression: 1/360
                                        * Referenced by: '<S2>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: 5
                                        * Referenced by: '<S13>/Gain'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S13>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -5
                                        * Referenced by: '<S13>/Saturation1'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 1/360
                                        * Referenced by: '<S2>/Gain'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 5
                                        * Referenced by: '<S14>/Gain'
                                        */
  real_T Saturation1_UpperSat_i;       /* Expression: 5
                                        * Referenced by: '<S14>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_a;       /* Expression: -5
                                        * Referenced by: '<S14>/Saturation1'
                                        */
  real_T fingerwidth_Value;            /* Expression: 10
                                        * Referenced by: '<S29>/finger width'
                                        */
  real_T proximallength_Value;         /* Expression: 50
                                        * Referenced by: '<S29>/proximal length'
                                        */
  real_T Sensor1_Value[2];             /* Expression: [50; 7]
                                        * Referenced by: '<S18>/Sensor1'
                                        */
  real_T fingerwidth_Value_n;          /* Expression: 7
                                        * Referenced by: '<S40>/finger width'
                                        */
  real_T proximallength_Value_b;       /* Expression: 50
                                        * Referenced by: '<S40>/proximal length'
                                        */
  real_T Filt1_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S2>/Filt 1'
                                        */
  real_T Filt1_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S2>/Filt 1'
                                        */
  real_T Filt1_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S2>/Filt 1'
                                        */
  real_T Filt2_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S2>/Filt 2'
                                        */
  real_T Filt2_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S2>/Filt 2'
                                        */
  real_T Filt2_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S2>/Filt 2'
                                        */
  real_T Filt3_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S2>/Filt 3'
                                        */
  real_T Filt3_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S2>/Filt 3'
                                        */
  real_T Filt3_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S2>/Filt 3'
                                        */
  real_T Filt4_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S2>/Filt 4'
                                        */
  real_T Filt4_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S2>/Filt 4'
                                        */
  real_T Filt4_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S2>/Filt 4'
                                        */
  real_T Filt5_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S2>/Filt 5'
                                        */
  real_T Filt5_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S2>/Filt 5'
                                        */
  real_T Filt5_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S2>/Filt 5'
                                        */
  real_T Filt6_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S2>/Filt 6'
                                        */
  real_T Filt6_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S2>/Filt 6'
                                        */
  real_T Filt6_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S2>/Filt 6'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/360
                                        * Referenced by: '<S2>/Gain2'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1/360
                                        * Referenced by: '<S2>/Gain3'
                                        */
  real_T Gain6_Gain;                   /* Expression: 1/688
                                        * Referenced by: '<S2>/Gain6'
                                        */
  real_T Gain7_Gain;                   /* Expression: 1/688
                                        * Referenced by: '<S2>/Gain7'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 90
                                        * Referenced by: '<S11>/Gain'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: 180
                                        * Referenced by: '<S11>/Gain1'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 90
                                        * Referenced by: '<S12>/Gain'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 180
                                        * Referenced by: '<S12>/Gain1'
                                        */
  SL_Bus_proxy_std_msgs_Float32 Constant_Value_h;/* Computed Parameter: Constant_Value_h
                                                  * Referenced by: '<S51>/Constant'
                                                  */
  SL_Bus_proxy_std_msgs_Bool Constant_Value_n;/* Computed Parameter: Constant_Value_n
                                               * Referenced by: '<S52>/Constant'
                                               */
  real32_T Constant5_Value;            /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<S12>/Constant5'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S12>/Constant4'
                                        */
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S13>/Constant1'
                                        */
  real32_T Constant1_Value_g;          /* Computed Parameter: Constant1_Value_g
                                        * Referenced by: '<S14>/Constant1'
                                        */
  real32_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<S12>/Saturation'
                                        */
  real32_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<S12>/Saturation'
                                        */
  real32_T Saturation_UpperSat_m;      /* Computed Parameter: Saturation_UpperSat_m
                                        * Referenced by: '<S11>/Saturation'
                                        */
  real32_T Saturation_LowerSat_i;      /* Computed Parameter: Saturation_LowerSat_i
                                        * Referenced by: '<S11>/Saturation'
                                        */
  real32_T Constant4_Value_f;          /* Computed Parameter: Constant4_Value_f
                                        * Referenced by: '<S5>/Constant4'
                                        */
  real32_T Constant1_Value_e;          /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S5>/Constant1'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S5>/Constant3'
                                        */
  real32_T Filt_NumCoef[2];            /* Computed Parameter: Filt_NumCoef
                                        * Referenced by: '<S7>/Filt '
                                        */
  real32_T Filt_DenCoef[2];            /* Computed Parameter: Filt_DenCoef
                                        * Referenced by: '<S7>/Filt '
                                        */
  real32_T Filt_InitialStates;         /* Computed Parameter: Filt_InitialStates
                                        * Referenced by: '<S7>/Filt '
                                        */
  real32_T Filt1_NumCoef_j[2];         /* Computed Parameter: Filt1_NumCoef_j
                                        * Referenced by: '<S7>/Filt 1'
                                        */
  real32_T Filt1_DenCoef_l[2];         /* Computed Parameter: Filt1_DenCoef_l
                                        * Referenced by: '<S7>/Filt 1'
                                        */
  real32_T Filt1_InitialStates_m;      /* Computed Parameter: Filt1_InitialStates_m
                                        * Referenced by: '<S7>/Filt 1'
                                        */
  real32_T Filt2_NumCoef_o[2];         /* Computed Parameter: Filt2_NumCoef_o
                                        * Referenced by: '<S7>/Filt 2'
                                        */
  real32_T Filt2_DenCoef_a[2];         /* Computed Parameter: Filt2_DenCoef_a
                                        * Referenced by: '<S7>/Filt 2'
                                        */
  real32_T Filt2_InitialStates_o;      /* Computed Parameter: Filt2_InitialStates_o
                                        * Referenced by: '<S7>/Filt 2'
                                        */
  real32_T Filt3_NumCoef_m[2];         /* Computed Parameter: Filt3_NumCoef_m
                                        * Referenced by: '<S7>/Filt 3'
                                        */
  real32_T Filt3_DenCoef_k[2];         /* Computed Parameter: Filt3_DenCoef_k
                                        * Referenced by: '<S7>/Filt 3'
                                        */
  real32_T Filt3_InitialStates_f;      /* Computed Parameter: Filt3_InitialStates_f
                                        * Referenced by: '<S7>/Filt 3'
                                        */
  real32_T Filt4_NumCoef_f[2];         /* Computed Parameter: Filt4_NumCoef_f
                                        * Referenced by: '<S7>/Filt 4'
                                        */
  real32_T Filt4_DenCoef_l[2];         /* Computed Parameter: Filt4_DenCoef_l
                                        * Referenced by: '<S7>/Filt 4'
                                        */
  real32_T Filt4_InitialStates_f;      /* Computed Parameter: Filt4_InitialStates_f
                                        * Referenced by: '<S7>/Filt 4'
                                        */
  real32_T Filt5_NumCoef_e[2];         /* Computed Parameter: Filt5_NumCoef_e
                                        * Referenced by: '<S7>/Filt 5'
                                        */
  real32_T Filt5_DenCoef_g[2];         /* Computed Parameter: Filt5_DenCoef_g
                                        * Referenced by: '<S7>/Filt 5'
                                        */
  real32_T Filt5_InitialStates_o;      /* Computed Parameter: Filt5_InitialStates_o
                                        * Referenced by: '<S7>/Filt 5'
                                        */
  real32_T Filt6_NumCoef_j[2];         /* Computed Parameter: Filt6_NumCoef_j
                                        * Referenced by: '<S7>/Filt 6'
                                        */
  real32_T Filt6_DenCoef_n[2];         /* Computed Parameter: Filt6_DenCoef_n
                                        * Referenced by: '<S7>/Filt 6'
                                        */
  real32_T Filt6_InitialStates_b;      /* Computed Parameter: Filt6_InitialStates_b
                                        * Referenced by: '<S7>/Filt 6'
                                        */
  real32_T Filt7_NumCoef[2];           /* Computed Parameter: Filt7_NumCoef
                                        * Referenced by: '<S7>/Filt 7'
                                        */
  real32_T Filt7_DenCoef[2];           /* Computed Parameter: Filt7_DenCoef
                                        * Referenced by: '<S7>/Filt 7'
                                        */
  real32_T Filt7_InitialStates;        /* Computed Parameter: Filt7_InitialStates
                                        * Referenced by: '<S7>/Filt 7'
                                        */
  real32_T Filt8_NumCoef[2];           /* Computed Parameter: Filt8_NumCoef
                                        * Referenced by: '<S7>/Filt 8'
                                        */
  real32_T Filt8_DenCoef[2];           /* Computed Parameter: Filt8_DenCoef
                                        * Referenced by: '<S7>/Filt 8'
                                        */
  real32_T Filt8_InitialStates;        /* Computed Parameter: Filt8_InitialStates
                                        * Referenced by: '<S7>/Filt 8'
                                        */
  real32_T Constant_Value_i;           /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S15>/Constant'
                                        */
  real32_T Saturation_UpperSat_g;      /* Computed Parameter: Saturation_UpperSat_g
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real32_T Saturation_LowerSat_h;      /* Computed Parameter: Saturation_LowerSat_h
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real32_T Saturation1_UpperSat_iy;    /* Computed Parameter: Saturation1_UpperSat_iy
                                        * Referenced by: '<S7>/Saturation1'
                                        */
  real32_T Saturation1_LowerSat_o;     /* Computed Parameter: Saturation1_LowerSat_o
                                        * Referenced by: '<S7>/Saturation1'
                                        */
  real32_T GainAggiustato_Gain;        /* Computed Parameter: GainAggiustato_Gain
                                        * Referenced by: '<S28>/Gain  Aggiustato'
                                        */
  real32_T GainAggiustato_Gain_e;      /* Computed Parameter: GainAggiustato_Gain_e
                                        * Referenced by: '<S32>/Gain Aggiustato'
                                        */
  real32_T Constant_Value_e;           /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S32>/Constant'
                                        */
  real32_T Constant1_Value_d;          /* Computed Parameter: Constant1_Value_d
                                        * Referenced by: '<S19>/Constant1'
                                        */
  real32_T GainAggiustato_Gain_d;      /* Computed Parameter: GainAggiustato_Gain_d
                                        * Referenced by: '<S20>/Gain  Aggiustato'
                                        */
  real32_T GainAggiustato_Gain_a;      /* Computed Parameter: GainAggiustato_Gain_a
                                        * Referenced by: '<S26>/Gain Aggiustato'
                                        */
  real32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S26>/Constant'
                                        */
  real32_T Saturation2_UpperSat;       /* Computed Parameter: Saturation2_UpperSat
                                        * Referenced by: '<S7>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat;       /* Computed Parameter: Saturation2_LowerSat
                                        * Referenced by: '<S7>/Saturation2'
                                        */
  real32_T Saturation3_UpperSat;       /* Computed Parameter: Saturation3_UpperSat
                                        * Referenced by: '<S7>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat;       /* Computed Parameter: Saturation3_LowerSat
                                        * Referenced by: '<S7>/Saturation3'
                                        */
  real32_T Constant1_Value_de[2];      /* Computed Parameter: Constant1_Value_de
                                        * Referenced by: '<S12>/Constant1'
                                        */
  real32_T GainAggiustato_Gain_h;      /* Computed Parameter: GainAggiustato_Gain_h
                                        * Referenced by: '<S12>/Gain  Aggiustato'
                                        */
  real32_T GainAggiustato_Gain_o;      /* Computed Parameter: GainAggiustato_Gain_o
                                        * Referenced by: '<S45>/Gain Aggiustato'
                                        */
  real32_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S45>/Constant'
                                        */
  real32_T Saturation4_UpperSat;       /* Computed Parameter: Saturation4_UpperSat
                                        * Referenced by: '<S7>/Saturation4'
                                        */
  real32_T Saturation4_LowerSat;       /* Computed Parameter: Saturation4_LowerSat
                                        * Referenced by: '<S7>/Saturation4'
                                        */
  real32_T Saturation5_UpperSat;       /* Computed Parameter: Saturation5_UpperSat
                                        * Referenced by: '<S7>/Saturation5'
                                        */
  real32_T Saturation5_LowerSat;       /* Computed Parameter: Saturation5_LowerSat
                                        * Referenced by: '<S7>/Saturation5'
                                        */
  real32_T Saturation_UpperSat_b;      /* Computed Parameter: Saturation_UpperSat_b
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real32_T Saturation_LowerSat_b;      /* Computed Parameter: Saturation_LowerSat_b
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real32_T Saturation6_UpperSat;       /* Computed Parameter: Saturation6_UpperSat
                                        * Referenced by: '<S7>/Saturation6'
                                        */
  real32_T Saturation6_LowerSat;       /* Computed Parameter: Saturation6_LowerSat
                                        * Referenced by: '<S7>/Saturation6'
                                        */
  real32_T Saturation_UpperSat_c;      /* Computed Parameter: Saturation_UpperSat_c
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real32_T Saturation_LowerSat_l;      /* Computed Parameter: Saturation_LowerSat_l
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real32_T Saturation7_UpperSat;       /* Computed Parameter: Saturation7_UpperSat
                                        * Referenced by: '<S7>/Saturation7'
                                        */
  real32_T Saturation7_LowerSat;       /* Computed Parameter: Saturation7_LowerSat
                                        * Referenced by: '<S7>/Saturation7'
                                        */
  real32_T Saturation8_UpperSat;       /* Computed Parameter: Saturation8_UpperSat
                                        * Referenced by: '<S7>/Saturation8'
                                        */
  real32_T Saturation8_LowerSat;       /* Computed Parameter: Saturation8_LowerSat
                                        * Referenced by: '<S7>/Saturation8'
                                        */
  real32_T UnitDelay3_InitialCondition[2];/* Computed Parameter: UnitDelay3_InitialCondition
                                           * Referenced by: '<S18>/Unit Delay3'
                                           */
  real32_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S18>/Unit Delay1'
                                        */
  real32_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S19>/Constant'
                                        */
  real32_T UnitDelay3_InitialCondition_o[2];/* Computed Parameter: UnitDelay3_InitialCondition_o
                                             * Referenced by: '<S31>/Unit Delay3'
                                             */
  real32_T UnitDelay1_InitialCondition_n;/* Computed Parameter: UnitDelay1_InitialCondition_n
                                          * Referenced by: '<S31>/Unit Delay1'
                                          */
  real32_T UnitDelay1_InitialCondition_d;/* Computed Parameter: UnitDelay1_InitialCondition_d
                                          * Referenced by: '<S12>/Unit Delay1'
                                          */
  real32_T UnitDelay3_InitialCondition_e[2];/* Computed Parameter: UnitDelay3_InitialCondition_e
                                             * Referenced by: '<S12>/Unit Delay3'
                                             */
  real32_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S5>/Constant'
                                        */
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S5>/Constant2'
                                        */
  real32_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S5>/Switch'
                                        */
  real32_T Switch1_Threshold;          /* Computed Parameter: Switch1_Threshold
                                        * Referenced by: '<S5>/Switch1'
                                        */
  real32_T Switch2_Threshold;          /* Computed Parameter: Switch2_Threshold
                                        * Referenced by: '<S5>/Switch2'
                                        */
  real32_T Switch3_Threshold;          /* Computed Parameter: Switch3_Threshold
                                        * Referenced by: '<S5>/Switch3'
                                        */
  real32_T Switch4_Threshold;          /* Computed Parameter: Switch4_Threshold
                                        * Referenced by: '<S5>/Switch4'
                                        */
  real32_T Filt_NumCoef_o[2];          /* Computed Parameter: Filt_NumCoef_o
                                        * Referenced by: '<S6>/Filt '
                                        */
  real32_T Filt_DenCoef_i[2];          /* Computed Parameter: Filt_DenCoef_i
                                        * Referenced by: '<S6>/Filt '
                                        */
  real32_T Filt_InitialStates_a;       /* Computed Parameter: Filt_InitialStates_a
                                        * Referenced by: '<S6>/Filt '
                                        */
  real32_T Filt1_NumCoef_l[2];         /* Computed Parameter: Filt1_NumCoef_l
                                        * Referenced by: '<S6>/Filt 1'
                                        */
  real32_T Filt1_DenCoef_c[2];         /* Computed Parameter: Filt1_DenCoef_c
                                        * Referenced by: '<S6>/Filt 1'
                                        */
  real32_T Filt1_InitialStates_o;      /* Computed Parameter: Filt1_InitialStates_o
                                        * Referenced by: '<S6>/Filt 1'
                                        */
  real32_T Filt2_NumCoef_n[2];         /* Computed Parameter: Filt2_NumCoef_n
                                        * Referenced by: '<S6>/Filt 2'
                                        */
  real32_T Filt2_DenCoef_f[2];         /* Computed Parameter: Filt2_DenCoef_f
                                        * Referenced by: '<S6>/Filt 2'
                                        */
  real32_T Filt2_InitialStates_m;      /* Computed Parameter: Filt2_InitialStates_m
                                        * Referenced by: '<S6>/Filt 2'
                                        */
  real32_T Filt3_NumCoef_m5[2];        /* Computed Parameter: Filt3_NumCoef_m5
                                        * Referenced by: '<S6>/Filt 3'
                                        */
  real32_T Filt3_DenCoef_d[2];         /* Computed Parameter: Filt3_DenCoef_d
                                        * Referenced by: '<S6>/Filt 3'
                                        */
  real32_T Filt3_InitialStates_j;      /* Computed Parameter: Filt3_InitialStates_j
                                        * Referenced by: '<S6>/Filt 3'
                                        */
  real32_T Filt4_NumCoef_k[2];         /* Computed Parameter: Filt4_NumCoef_k
                                        * Referenced by: '<S6>/Filt 4'
                                        */
  real32_T Filt4_DenCoef_o[2];         /* Computed Parameter: Filt4_DenCoef_o
                                        * Referenced by: '<S6>/Filt 4'
                                        */
  real32_T Filt4_InitialStates_d;      /* Computed Parameter: Filt4_InitialStates_d
                                        * Referenced by: '<S6>/Filt 4'
                                        */
  real32_T Filt5_NumCoef_ep[2];        /* Computed Parameter: Filt5_NumCoef_ep
                                        * Referenced by: '<S6>/Filt 5'
                                        */
  real32_T Filt5_DenCoef_gw[2];        /* Computed Parameter: Filt5_DenCoef_gw
                                        * Referenced by: '<S6>/Filt 5'
                                        */
  real32_T Filt5_InitialStates_h;      /* Computed Parameter: Filt5_InitialStates_h
                                        * Referenced by: '<S6>/Filt 5'
                                        */
  real32_T Filt6_NumCoef_i[2];         /* Computed Parameter: Filt6_NumCoef_i
                                        * Referenced by: '<S6>/Filt 6'
                                        */
  real32_T Filt6_DenCoef_c[2];         /* Computed Parameter: Filt6_DenCoef_c
                                        * Referenced by: '<S6>/Filt 6'
                                        */
  real32_T Filt6_InitialStates_bg;     /* Computed Parameter: Filt6_InitialStates_bg
                                        * Referenced by: '<S6>/Filt 6'
                                        */
  real32_T Filt7_NumCoef_d[2];         /* Computed Parameter: Filt7_NumCoef_d
                                        * Referenced by: '<S6>/Filt 7'
                                        */
  real32_T Filt7_DenCoef_b[2];         /* Computed Parameter: Filt7_DenCoef_b
                                        * Referenced by: '<S6>/Filt 7'
                                        */
  real32_T Filt7_InitialStates_g;      /* Computed Parameter: Filt7_InitialStates_g
                                        * Referenced by: '<S6>/Filt 7'
                                        */
  real32_T Filt8_NumCoef_h[2];         /* Computed Parameter: Filt8_NumCoef_h
                                        * Referenced by: '<S6>/Filt 8'
                                        */
  real32_T Filt8_DenCoef_p[2];         /* Computed Parameter: Filt8_DenCoef_p
                                        * Referenced by: '<S6>/Filt 8'
                                        */
  real32_T Filt8_InitialStates_h;      /* Computed Parameter: Filt8_InitialStates_h
                                        * Referenced by: '<S6>/Filt 8'
                                        */
  real32_T Saturation_UpperSat_a;      /* Computed Parameter: Saturation_UpperSat_a
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real32_T Saturation_LowerSat_k;      /* Computed Parameter: Saturation_LowerSat_k
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real32_T Saturation1_UpperSat_l;     /* Computed Parameter: Saturation1_UpperSat_l
                                        * Referenced by: '<S6>/Saturation1'
                                        */
  real32_T Saturation1_LowerSat_k;     /* Computed Parameter: Saturation1_LowerSat_k
                                        * Referenced by: '<S6>/Saturation1'
                                        */
  real32_T Saturation2_UpperSat_o;     /* Computed Parameter: Saturation2_UpperSat_o
                                        * Referenced by: '<S6>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat_k;     /* Computed Parameter: Saturation2_LowerSat_k
                                        * Referenced by: '<S6>/Saturation2'
                                        */
  real32_T Saturation3_UpperSat_m;     /* Computed Parameter: Saturation3_UpperSat_m
                                        * Referenced by: '<S6>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat_e;     /* Computed Parameter: Saturation3_LowerSat_e
                                        * Referenced by: '<S6>/Saturation3'
                                        */
  real32_T Saturation4_UpperSat_e;     /* Computed Parameter: Saturation4_UpperSat_e
                                        * Referenced by: '<S6>/Saturation4'
                                        */
  real32_T Saturation4_LowerSat_g;     /* Computed Parameter: Saturation4_LowerSat_g
                                        * Referenced by: '<S6>/Saturation4'
                                        */
  real32_T Saturation5_UpperSat_e;     /* Computed Parameter: Saturation5_UpperSat_e
                                        * Referenced by: '<S6>/Saturation5'
                                        */
  real32_T Saturation5_LowerSat_j;     /* Computed Parameter: Saturation5_LowerSat_j
                                        * Referenced by: '<S6>/Saturation5'
                                        */
  real32_T Saturation6_UpperSat_d;     /* Computed Parameter: Saturation6_UpperSat_d
                                        * Referenced by: '<S6>/Saturation6'
                                        */
  real32_T Saturation6_LowerSat_h;     /* Computed Parameter: Saturation6_LowerSat_h
                                        * Referenced by: '<S6>/Saturation6'
                                        */
  real32_T Saturation7_UpperSat_g;     /* Computed Parameter: Saturation7_UpperSat_g
                                        * Referenced by: '<S6>/Saturation7'
                                        */
  real32_T Saturation7_LowerSat_b;     /* Computed Parameter: Saturation7_LowerSat_b
                                        * Referenced by: '<S6>/Saturation7'
                                        */
  real32_T Saturation8_UpperSat_m;     /* Computed Parameter: Saturation8_UpperSat_m
                                        * Referenced by: '<S6>/Saturation8'
                                        */
  real32_T Saturation8_LowerSat_b;     /* Computed Parameter: Saturation8_LowerSat_b
                                        * Referenced by: '<S6>/Saturation8'
                                        */
  uint8_T ManualSwitch1_CurrentSetting;/* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<S19>/Manual Switch1'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S19>/Manual Switch'
                                        */
  uint8_T ManualSwitch_CurrentSetting_b;/* Computed Parameter: ManualSwitch_CurrentSetting_b
                                         * Referenced by: '<Root>/Manual Switch'
                                         */
  uint8_T ManualSwitch1_CurrentSetting_o;/* Computed Parameter: ManualSwitch1_CurrentSetting_o
                                          * Referenced by: '<S15>/Manual Switch1'
                                          */
  uint8_T ManualSwitch_CurrentSetting_l;/* Computed Parameter: ManualSwitch_CurrentSetting_l
                                         * Referenced by: '<S15>/Manual Switch'
                                         */
  uint8_T ManualSwitch1_CurrentSetting_ox;/* Computed Parameter: ManualSwitch1_CurrentSetting_ox
                                           * Referenced by: '<S11>/Manual Switch1'
                                           */
  uint8_T ManualSwitch_CurrentSetting_bd;/* Computed Parameter: ManualSwitch_CurrentSetting_bd
                                          * Referenced by: '<S11>/Manual Switch'
                                          */
  uint8_T ManualSwitch5_CurrentSetting;/* Computed Parameter: ManualSwitch5_CurrentSetting
                                        * Referenced by: '<S12>/Manual Switch5'
                                        */
  uint8_T ManualSwitch_CurrentSetting_bx;/* Computed Parameter: ManualSwitch_CurrentSetting_bx
                                          * Referenced by: '<S14>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_c;/* Computed Parameter: ManualSwitch_CurrentSetting_c
                                         * Referenced by: '<S13>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_m;/* Computed Parameter: ManualSwitch_CurrentSetting_m
                                         * Referenced by: '<S5>/Manual Switch'
                                         */
  uint8_T ManualSwitch1_CurrentSetting_p;/* Computed Parameter: ManualSwitch1_CurrentSetting_p
                                          * Referenced by: '<S5>/Manual Switch1'
                                          */
  boolean_T Constant1_Value_k;         /* Computed Parameter: Constant1_Value_k
                                        * Referenced by: '<Root>/Constant1'
                                        */
  boolean_T Constant_Value_ok;         /* Computed Parameter: Constant_Value_ok
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_proxy_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_proxy_T proxy_P;

#ifdef __cplusplus

}
#endif

/* Block signals (auto storage) */
extern B_proxy_T proxy_B;

/* Block states (auto storage) */
extern DW_proxy_T proxy_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void proxy_initialize(void);
  extern void proxy_step(void);
  extern void proxy_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_proxy_T *const proxy_M;

#ifdef __cplusplus

}
#endif

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Display' : Unused code path elimination
 * Block '<S1>/Display1' : Unused code path elimination
 * Block '<S1>/Display2' : Unused code path elimination
 * Block '<S1>/Display3' : Unused code path elimination
 * Block '<S2>/Display' : Unused code path elimination
 * Block '<S2>/Filt ' : Unused code path elimination
 * Block '<S2>/Filt 7' : Unused code path elimination
 * Block '<S2>/Filt 8' : Unused code path elimination
 * Block '<S2>/Gain4' : Unused code path elimination
 * Block '<S2>/Gain5' : Unused code path elimination
 * Block '<S2>/Gain8' : Unused code path elimination
 * Block '<S10>/Display' : Unused code path elimination
 * Block '<S11>/Display' : Unused code path elimination
 * Block '<S11>/Display1' : Unused code path elimination
 * Block '<S11>/Display2' : Unused code path elimination
 * Block '<S11>/Display3' : Unused code path elimination
 * Block '<S11>/Display8' : Unused code path elimination
 * Block '<S20>/Data Type Conversion' : Unused code path elimination
 * Block '<S20>/Display' : Unused code path elimination
 * Block '<S20>/Display1' : Unused code path elimination
 * Block '<S27>/Gain' : Unused code path elimination
 * Block '<S21>/Data Type Duplicate' : Unused code path elimination
 * Block '<S22>/Data Type Duplicate' : Unused code path elimination
 * Block '<S18>/Display3' : Unused code path elimination
 * Block '<S18>/Display5' : Unused code path elimination
 * Block '<S18>/Display7' : Unused code path elimination
 * Block '<S23>/finger width' : Unused code path elimination
 * Block '<S23>/proximal length' : Unused code path elimination
 * Block '<S28>/Display' : Unused code path elimination
 * Block '<S28>/Display1' : Unused code path elimination
 * Block '<S33>/Gain' : Unused code path elimination
 * Block '<S34>/Data Type Duplicate' : Unused code path elimination
 * Block '<S35>/Data Type Duplicate' : Unused code path elimination
 * Block '<S31>/Display' : Unused code path elimination
 * Block '<S31>/Display1' : Unused code path elimination
 * Block '<S11>/Saturation1' : Unused code path elimination
 * Block '<S38>/Data Type Duplicate' : Unused code path elimination
 * Block '<S39>/Data Type Duplicate' : Unused code path elimination
 * Block '<S12>/Display' : Unused code path elimination
 * Block '<S12>/Display1' : Unused code path elimination
 * Block '<S12>/Display2' : Unused code path elimination
 * Block '<S12>/Display3' : Unused code path elimination
 * Block '<S12>/Display4' : Unused code path elimination
 * Block '<S12>/Display5' : Unused code path elimination
 * Block '<S12>/Display6' : Unused code path elimination
 * Block '<S12>/Display7' : Unused code path elimination
 * Block '<S12>/Display8' : Unused code path elimination
 * Block '<S12>/Saturation1' : Unused code path elimination
 * Block '<S46>/Gain' : Unused code path elimination
 * Block '<S15>/Display' : Unused code path elimination
 * Block '<S15>/Display1' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'proxy'
 * '<S1>'   : 'proxy/Displays '
 * '<S2>'   : 'proxy/From Ros'
 * '<S3>'   : 'proxy/Generate SchunkCommands '
 * '<S4>'   : 'proxy/Get Data From Hand'
 * '<S5>'   : 'proxy/Send Data to Hand'
 * '<S6>'   : 'proxy/To Verosim'
 * '<S7>'   : 'proxy/ToRos'
 * '<S8>'   : 'proxy/From Ros/Subscribe'
 * '<S9>'   : 'proxy/From Ros/Subscribe/Enabled Subsystem'
 * '<S10>'  : 'proxy/Generate SchunkCommands /Finger Spread'
 * '<S11>'  : 'proxy/Generate SchunkCommands /Index  Finger'
 * '<S12>'  : 'proxy/Generate SchunkCommands /Middle Finger'
 * '<S13>'  : 'proxy/Generate SchunkCommands /Pinky'
 * '<S14>'  : 'proxy/Generate SchunkCommands /Ring '
 * '<S15>'  : 'proxy/Generate SchunkCommands /Thumb'
 * '<S16>'  : 'proxy/Generate SchunkCommands /Finger Spread/MATLAB Function'
 * '<S17>'  : 'proxy/Generate SchunkCommands /Index  Finger/MATLAB Function'
 * '<S18>'  : 'proxy/Generate SchunkCommands /Index  Finger/New Version'
 * '<S19>'  : 'proxy/Generate SchunkCommands /Index  Finger/Old Version'
 * '<S20>'  : 'proxy/Generate SchunkCommands /Index  Finger/New Version/Condizionamento1'
 * '<S21>'  : 'proxy/Generate SchunkCommands /Index  Finger/New Version/Data Type Conversion Inherited'
 * '<S22>'  : 'proxy/Generate SchunkCommands /Index  Finger/New Version/Data Type Conversion Inherited1'
 * '<S23>'  : 'proxy/Generate SchunkCommands /Index  Finger/New Version/Finger Index 1'
 * '<S24>'  : 'proxy/Generate SchunkCommands /Index  Finger/New Version/Index New Pose Estimation '
 * '<S25>'  : 'proxy/Generate SchunkCommands /Index  Finger/New Version/Jacobian2'
 * '<S26>'  : 'proxy/Generate SchunkCommands /Index  Finger/New Version/Condizionamento1/Subsystem'
 * '<S27>'  : 'proxy/Generate SchunkCommands /Index  Finger/New Version/Condizionamento1/Subsystem/Radians to Degrees'
 * '<S28>'  : 'proxy/Generate SchunkCommands /Index  Finger/Old Version/Condizionamento'
 * '<S29>'  : 'proxy/Generate SchunkCommands /Index  Finger/Old Version/Finger Index '
 * '<S30>'  : 'proxy/Generate SchunkCommands /Index  Finger/Old Version/MATLAB Function'
 * '<S31>'  : 'proxy/Generate SchunkCommands /Index  Finger/Old Version/Pose Generator'
 * '<S32>'  : 'proxy/Generate SchunkCommands /Index  Finger/Old Version/Condizionamento/Subsystem'
 * '<S33>'  : 'proxy/Generate SchunkCommands /Index  Finger/Old Version/Condizionamento/Subsystem/Radians to Degrees'
 * '<S34>'  : 'proxy/Generate SchunkCommands /Index  Finger/Old Version/Pose Generator/Data Type Conversion Inherited'
 * '<S35>'  : 'proxy/Generate SchunkCommands /Index  Finger/Old Version/Pose Generator/Data Type Conversion Inherited1'
 * '<S36>'  : 'proxy/Generate SchunkCommands /Index  Finger/Old Version/Pose Generator/Jacobian2'
 * '<S37>'  : 'proxy/Generate SchunkCommands /Index  Finger/Old Version/Pose Generator/Pose'
 * '<S38>'  : 'proxy/Generate SchunkCommands /Middle Finger/Data Type Conversion Inherited'
 * '<S39>'  : 'proxy/Generate SchunkCommands /Middle Finger/Data Type Conversion Inherited1'
 * '<S40>'  : 'proxy/Generate SchunkCommands /Middle Finger/Finger Index '
 * '<S41>'  : 'proxy/Generate SchunkCommands /Middle Finger/Jacobian2'
 * '<S42>'  : 'proxy/Generate SchunkCommands /Middle Finger/MATLAB Function'
 * '<S43>'  : 'proxy/Generate SchunkCommands /Middle Finger/MATLAB Function2'
 * '<S44>'  : 'proxy/Generate SchunkCommands /Middle Finger/MATLAB Function3'
 * '<S45>'  : 'proxy/Generate SchunkCommands /Middle Finger/Subsystem'
 * '<S46>'  : 'proxy/Generate SchunkCommands /Middle Finger/Subsystem/Radians to Degrees'
 * '<S47>'  : 'proxy/Generate SchunkCommands /Pinky/Pose Estimation'
 * '<S48>'  : 'proxy/Generate SchunkCommands /Ring /Pose Estimation'
 * '<S49>'  : 'proxy/Generate SchunkCommands /Thumb/MATLAB Function'
 * '<S50>'  : 'proxy/Generate SchunkCommands /Thumb/MATLAB Function1'
 * '<S51>'  : 'proxy/ToRos/Blank Message'
 * '<S52>'  : 'proxy/ToRos/Blank Message1'
 * '<S53>'  : 'proxy/ToRos/Blank Message2'
 * '<S54>'  : 'proxy/ToRos/MATLAB Function - Assign'
 * '<S55>'  : 'proxy/ToRos/Publish'
 * '<S56>'  : 'proxy/ToRos/Publish1'
 * '<S57>'  : 'proxy/ToRos/Publish12'
 * '<S58>'  : 'proxy/ToRos/Publish2'
 */
#endif                                 /* RTW_HEADER_proxy_h_ */
