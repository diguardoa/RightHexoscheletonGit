/*
 * proxy_linux.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "proxy_linux".
 *
 * Model version              : 1.669
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C++ source code generated on : Mon Nov 20 11:32:44 2017
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_proxy_linux_h_
#define RTW_HEADER_proxy_linux_h_
#include <string.h>
#include <math.h>
#include <stddef.h>
#ifndef proxy_linux_COMMON_INCLUDES_
# define proxy_linux_COMMON_INCLUDES_
#include <stdio.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "DAHostLib_Network.h"
#endif                                 /* proxy_linux_COMMON_INCLUDES_ */

#include "proxy_linux_types.h"

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

/* Block signals for system '<S9>/Enabled Subsystem' */
typedef struct {
  SL_Bus_proxy_linux_std_msgs_Bool In1;/* '<S10>/In1' */
} B_EnabledSubsystem_proxy_linu_T;

/* Block signals for system '<S21>/Subsystem' */
typedef struct {
  real32_T Memory;                     /* '<S30>/Memory' */
} B_Subsystem_proxy_linux_T;

/* Block states (auto storage) for system '<S21>/Subsystem' */
typedef struct {
  real32_T Memory_PreviousInput;       /* '<S30>/Memory' */
} DW_Subsystem_proxy_linux_T;

/* Block signals for system '<S14>/Jacobian2' */
typedef struct {
  real32_T JTcomp[4];                  /* '<S14>/Jacobian2' */
  real32_T q_next[2];                  /* '<S14>/Jacobian2' */
  real32_T J22_ol;                     /* '<S14>/Jacobian2' */
  real32_T J22_c;
  real32_T a_tmp;
  real32_T a_tmp_m;
  real32_T a_tmp_c;
  real32_T a_tmp_k;
  real32_T a_tmp_cx;
  real32_T a_tmp_b;
  real32_T a_tmp_tmp;
  real32_T a_tmp_tmp_p;
  real32_T a_tmp_cv;
  real32_T a_tmp_f;
  real32_T a_tmp_g;
  real32_T a_tmp_g1;
  real32_T a_tmp_me;
  real32_T a_tmp_n;
  real32_T a_tmp_p;
  real32_T a_tmp_l;
  real32_T a_tmp_j;
  real32_T a_tmp_d;
  real32_T x_tmp;
  real32_T a_tmp_tmp_g;
  real32_T a_tmp_tmp_l;
  real32_T a_tmp_tmp_d;
  real32_T a_tmp_tmp_dy;
  real32_T a_tmp_tmp_lx;
  real32_T a_tmp_tmp_o;
  real32_T a_tmp_tmp_b;
  real32_T a_tmp_tmp_n;
  real32_T a_tmp_tmp_bs;
  real32_T a_tmp_tmp_ln;
  real32_T a_tmp_tmp_tmp;
  real32_T J22_c_tmp;
  real32_T a_tmp_tmp_tmp_h;
  real32_T a_tmp_tmp_tmp_b;
  real32_T a_tmp_tmp_tmp_d;
  real32_T J22_c_tmp_tmp;
} B_Jacobian2_proxy_linux_T;

/* Block signals for system '<S14>/MATLAB Function' */
typedef struct {
  real32_T y[2];                       /* '<S14>/MATLAB Function' */
} B_MATLABFunction_proxy_linux_T;

/* Block signals for system '<S14>/MATLAB Function2' */
typedef struct {
  real32_T y[2];                       /* '<S14>/MATLAB Function2' */
} B_MATLABFunction2_proxy_linux_T;

/* Block signals for system '<S14>/MATLAB Function3' */
typedef struct {
  real32_T y[8];                       /* '<S14>/MATLAB Function3' */
} B_MATLABFunction3_proxy_linux_T;

/* Block signals (auto storage) */
typedef struct {
  SL_Bus_proxy_linux_sensor_msgs_JointState msg;/* '<S7>/MATLAB Function - Assign' */
  SL_Bus_proxy_linux_std_msgs_Float64MultiArray In1;/* '<S12>/In1' */
  SL_Bus_proxy_linux_std_msgs_Float64MultiArray b_varargout_2;
  real32_T ByteUnpack[17];             /* '<S5>/Byte Unpack' */
  real32_T TmpSignalConversionAtBytePackIn[12];
  real32_T TmpSignalConversionAtBytePack_b[11];
  uint8_T BytePack[48];                /* '<S6>/Byte Pack' */
  uint8_T BytePack_c[44];              /* '<S7>/Byte Pack' */
  char_T cv0[33];
  char_T cv1[23];
  char_T cv2[20];
  char_T cv3[18];
  real_T Conversion_a[2];              /* '<S23>/Conversion' */
  real_T Filt2;                        /* '<S3>/Filt 2' */
  real_T Gain5;                        /* '<S3>/Gain5' */
  real_T Gain1;                        /* '<S3>/Gain1' */
  real_T Gain6;                        /* '<S3>/Gain6' */
  real_T Gain2;                        /* '<S3>/Gain2' */
  real_T Gain7;                        /* '<S3>/Gain7' */
  real_T Gain3;                        /* '<S3>/Gain3' */
  real_T DeadZone;
  real_T DeadZone2;
  real_T DeadZone3;
  real_T DeadZone4;
  real_T DeadZone5;
  real_T DeadZone6;
  real_T DeadZone7;
  real_T Saturation1_j;                /* '<S17>/Saturation1' */
  real32_T DataTypeConversion[2];      /* '<S14>/Data Type Conversion' */
  real32_T Sum;                        /* '<S21>/Sum' */
  real32_T Sum2;                       /* '<S29>/Sum2' */
  real32_T Sum_l;                      /* '<S50>/Sum' */
  real32_T Sum2_j;                     /* '<S58>/Sum2' */
  real32_T Sum2_f;                     /* '<S17>/Sum2' */
  real32_T Sum2_h;                     /* '<S65>/Sum2' */
  real32_T Sum2_i;                     /* '<S69>/Sum2' */
  real32_T Saturation2;                /* '<S14>/Saturation2' */
  real32_T Saturation3;                /* '<S14>/Saturation3' */
  real32_T DeadZone_m;                 /* '<S82>/Dead Zone' */
  real32_T Saturation7;                /* '<S7>/Saturation7' */
  real32_T Saturation4;                /* '<S7>/Saturation4' */
  real32_T Saturation3_b;              /* '<S7>/Saturation3' */
  real32_T Saturation2_h;              /* '<S7>/Saturation2' */
  real32_T Saturation1_n;              /* '<S7>/Saturation1' */
  real32_T Saturation_f;               /* '<S7>/Saturation' */
  real32_T Sum1;                       /* '<S19>/Sum1' */
  real32_T ManualSwitch_p;             /* '<S18>/Manual Switch' */
  real32_T Gain3_f;                    /* '<S19>/Gain3' */
  real32_T Saturation6;                /* '<S7>/Saturation6' */
  int32_T k;
  SL_Bus_proxy_linux_std_msgs_Float32 BusAssignment1;/* '<S7>/Bus Assignment1' */
  SL_Bus_proxy_linux_std_msgs_Float32 BusAssignment;/* '<S7>/Bus Assignment' */
  uint16_T ReceivefromHaptics_o2;      /* '<S5>/Receive from Haptics' */
  uint8_T ReceivefromHaptics_o1[68];   /* '<S5>/Receive from Haptics' */
  boolean_T LogicalOperator;           /* '<S1>/Logical Operator' */
  boolean_T Automatic;                 /* '<S7>/Automatic ' */
  SL_Bus_proxy_linux_std_msgs_Bool b_varargout_2_c;
  SL_Bus_proxy_linux_std_msgs_Bool BusAssignment2;/* '<S7>/Bus Assignment2' */
  B_EnabledSubsystem_proxy_linu_T EnabledSubsystem_f;/* '<S79>/Enabled Subsystem' */
  B_Subsystem_proxy_linux_T Subsystem_p;/* '<S69>/Subsystem' */
  B_Subsystem_proxy_linux_T Subsystem_cc;/* '<S65>/Subsystem' */
  B_Subsystem_proxy_linux_T Subsystem_f;/* '<S17>/Subsystem' */
  B_Subsystem_proxy_linux_T Subsystem_c;/* '<S58>/Subsystem' */
  B_MATLABFunction3_proxy_linux_T sf_MATLABFunction3_b;/* '<S16>/MATLAB Function3' */
  B_MATLABFunction2_proxy_linux_T sf_MATLABFunction2_o;/* '<S16>/MATLAB Function2' */
  B_MATLABFunction_proxy_linux_T sf_MATLABFunction_dm;/* '<S16>/MATLAB Function' */
  B_Jacobian2_proxy_linux_T sf_Jacobian2_o;/* '<S16>/Jacobian2' */
  B_Subsystem_proxy_linux_T Subsystem_a;/* '<S50>/Subsystem' */
  B_Subsystem_proxy_linux_T Subsystem_l;/* '<S29>/Subsystem' */
  B_MATLABFunction3_proxy_linux_T sf_MATLABFunction3;/* '<S14>/MATLAB Function3' */
  B_MATLABFunction2_proxy_linux_T sf_MATLABFunction2;/* '<S14>/MATLAB Function2' */
  B_MATLABFunction_proxy_linux_T sf_MATLABFunction_d;/* '<S14>/MATLAB Function' */
  B_Jacobian2_proxy_linux_T sf_Jacobian2;/* '<S14>/Jacobian2' */
  B_Subsystem_proxy_linux_T Subsystem; /* '<S21>/Subsystem' */
  B_EnabledSubsystem_proxy_linu_T EnabledSubsystem;/* '<S9>/Enabled Subsystem' */
} B_proxy_linux_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Filt1_states;                 /* '<S3>/Filt 1' */
  real_T Filt2_states;                 /* '<S3>/Filt 2' */
  real_T Filt3_states;                 /* '<S3>/Filt 3' */
  real_T Filt4_states;                 /* '<S3>/Filt 4' */
  real_T Filt5_states;                 /* '<S3>/Filt 5' */
  real_T Filt6_states;                 /* '<S3>/Filt 6' */
  real_T Filt8_states;                 /* '<S3>/Filt 8' */
  real_T ReceivefromHaptics_NetworkLib[137];/* '<S5>/Receive from Haptics' */
  real_T UDPSend_NetworkLib[137];      /* '<S6>/UDP Send' */
  real_T UDPSend_NetworkLib_e[137];    /* '<S7>/UDP Send' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S17>/Scope' */

  struct {
    void *LoggedData;
  } Scope_PWORK_d;                     /* '<S19>/Scope' */

  real32_T UnitDelay1_DSTATE;          /* '<S14>/Unit Delay1' */
  real32_T UnitDelay3_DSTATE[2];       /* '<S14>/Unit Delay3' */
  real32_T UnitDelay1_DSTATE_e;        /* '<S16>/Unit Delay1' */
  real32_T UnitDelay3_DSTATE_k[2];     /* '<S16>/Unit Delay3' */
  real32_T Filt_states;                /* '<S7>/Filt ' */
  real32_T Filt1_states_d;             /* '<S7>/Filt 1' */
  real32_T Filt2_states_d;             /* '<S7>/Filt 2' */
  real32_T Filt3_states_h;             /* '<S7>/Filt 3' */
  real32_T Filt4_states_a;             /* '<S7>/Filt 4' */
  real32_T Filt5_states_j;             /* '<S7>/Filt 5' */
  real32_T Filt6_states_n;             /* '<S7>/Filt 6' */
  real32_T Filt7_states;               /* '<S7>/Filt 7' */
  real32_T Filt8_states_h;             /* '<S7>/Filt 8' */
  robotics_slros_internal_block_T obj; /* '<S79>/SourceBlock' */
  robotics_slros_internal_block_T obj_c;/* '<S11>/SourceBlock' */
  robotics_slros_internal_block_T obj_i;/* '<S9>/SourceBlock' */
  robotics_slros_internal_blo_k_T obj_k;/* '<S78>/SinkBlock' */
  robotics_slros_internal_blo_k_T obj_b;/* '<S77>/SinkBlock' */
  robotics_slros_internal_blo_k_T obj_a;/* '<S76>/SinkBlock' */
  robotics_slros_internal_blo_k_T obj_kr;/* '<S75>/SinkBlock' */
  boolean_T objisempty;                /* '<S79>/SourceBlock' */
  boolean_T objisempty_h;              /* '<S78>/SinkBlock' */
  boolean_T objisempty_k;              /* '<S77>/SinkBlock' */
  boolean_T objisempty_l;              /* '<S76>/SinkBlock' */
  boolean_T objisempty_c;              /* '<S75>/SinkBlock' */
  boolean_T objisempty_f;              /* '<S11>/SourceBlock' */
  boolean_T objisempty_cw;             /* '<S9>/SourceBlock' */
  DW_Subsystem_proxy_linux_T Subsystem_p;/* '<S69>/Subsystem' */
  DW_Subsystem_proxy_linux_T Subsystem_cc;/* '<S65>/Subsystem' */
  DW_Subsystem_proxy_linux_T Subsystem_f;/* '<S17>/Subsystem' */
  DW_Subsystem_proxy_linux_T Subsystem_c;/* '<S58>/Subsystem' */
  DW_Subsystem_proxy_linux_T Subsystem_a;/* '<S50>/Subsystem' */
  DW_Subsystem_proxy_linux_T Subsystem_l;/* '<S29>/Subsystem' */
  DW_Subsystem_proxy_linux_T Subsystem;/* '<S21>/Subsystem' */
} DW_proxy_linux_T;

/* Parameters for system: '<S9>/Enabled Subsystem' */
struct P_EnabledSubsystem_proxy_linu_T_ {
  SL_Bus_proxy_linux_std_msgs_Bool Out1_Y0;/* Computed Parameter: Out1_Y0
                                            * Referenced by: '<S10>/Out1'
                                            */
};

/* Parameters for system: '<S21>/Subsystem' */
struct P_Subsystem_proxy_linux_T_ {
  real32_T Out1_Y0;                    /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S30>/Out1'
                                        */
  real32_T Memory_InitialCondition;    /* Computed Parameter: Memory_InitialCondition
                                        * Referenced by: '<S30>/Memory'
                                        */
};

/* Parameters (auto storage) */
struct P_proxy_linux_T_ {
  real32_T ampliFactor;                /* Variable: ampliFactor
                                        * Referenced by:
                                        *   '<S7>/Gain1'
                                        *   '<S7>/Gain2'
                                        *   '<S7>/Gain7'
                                        *   '<S7>/Gain8'
                                        *   '<S7>/Gain9'
                                        */
  real32_T ampliFactorDistal;          /* Variable: ampliFactorDistal
                                        * Referenced by:
                                        *   '<S81>/Constant2'
                                        *   '<S83>/Constant2'
                                        */
  real32_T ampliFactorMiddle;          /* Variable: ampliFactorMiddle
                                        * Referenced by:
                                        *   '<S80>/Constant2'
                                        *   '<S82>/Constant2'
                                        */
  int32_T ReceivefromHaptics_localPort;/* Mask Parameter: ReceivefromHaptics_localPort
                                        * Referenced by: '<S5>/Receive from Haptics'
                                        */
  int32_T UDPSend_remotePort;          /* Mask Parameter: UDPSend_remotePort
                                        * Referenced by: '<S6>/UDP Send'
                                        */
  int32_T UDPSend_remotePort_f;        /* Mask Parameter: UDPSend_remotePort_f
                                        * Referenced by: '<S7>/UDP Send'
                                        */
  SL_Bus_proxy_linux_sensor_msgs_JointState Constant_Value;/* Computed Parameter: Constant_Value
                                                            * Referenced by: '<S73>/Constant'
                                                            */
  SL_Bus_proxy_linux_std_msgs_Float64MultiArray Out1_Y0;/* Computed Parameter: Out1_Y0
                                                         * Referenced by: '<S12>/Out1'
                                                         */
  SL_Bus_proxy_linux_std_msgs_Float64MultiArray Constant_Value_g;/* Computed Parameter: Constant_Value_g
                                                                  * Referenced by: '<S11>/Constant'
                                                                  */
  real_T Gain_Gain;                    /* Expression: 1/360
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 6
                                        * Referenced by: '<S18>/Gain'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S18>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -5
                                        * Referenced by: '<S18>/Saturation1'
                                        */
  real_T DeadZone_Start;               /* Expression: -30
                                        * Referenced by: '<S3>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 30
                                        * Referenced by: '<S3>/Dead Zone'
                                        */
  real_T DeadZone2_Start;              /* Expression: -30
                                        * Referenced by: '<S3>/Dead Zone2'
                                        */
  real_T DeadZone2_End;                /* Expression: 30
                                        * Referenced by: '<S3>/Dead Zone2'
                                        */
  real_T DeadZone3_Start;              /* Expression: -30
                                        * Referenced by: '<S3>/Dead Zone3'
                                        */
  real_T DeadZone3_End;                /* Expression: 30
                                        * Referenced by: '<S3>/Dead Zone3'
                                        */
  real_T DeadZone4_Start;              /* Expression: -30
                                        * Referenced by: '<S3>/Dead Zone4'
                                        */
  real_T DeadZone4_End;                /* Expression: 30
                                        * Referenced by: '<S3>/Dead Zone4'
                                        */
  real_T DeadZone5_Start;              /* Expression: -30
                                        * Referenced by: '<S3>/Dead Zone5'
                                        */
  real_T DeadZone5_End;                /* Expression: 30
                                        * Referenced by: '<S3>/Dead Zone5'
                                        */
  real_T DeadZone6_Start;              /* Expression: -30
                                        * Referenced by: '<S3>/Dead Zone6'
                                        */
  real_T DeadZone6_End;                /* Expression: 30
                                        * Referenced by: '<S3>/Dead Zone6'
                                        */
  real_T DeadZone7_Start;              /* Expression: -30
                                        * Referenced by: '<S3>/Dead Zone7'
                                        */
  real_T DeadZone7_End;                /* Expression: 30
                                        * Referenced by: '<S3>/Dead Zone7'
                                        */
  real_T Filt1_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S3>/Filt 1'
                                        */
  real_T Filt1_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S3>/Filt 1'
                                        */
  real_T Filt1_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S3>/Filt 1'
                                        */
  real_T Filt2_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S3>/Filt 2'
                                        */
  real_T Filt2_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S3>/Filt 2'
                                        */
  real_T Filt2_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S3>/Filt 2'
                                        */
  real_T Filt3_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S3>/Filt 3'
                                        */
  real_T Filt3_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S3>/Filt 3'
                                        */
  real_T Filt3_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S3>/Filt 3'
                                        */
  real_T Filt4_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S3>/Filt 4'
                                        */
  real_T Filt4_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S3>/Filt 4'
                                        */
  real_T Filt4_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S3>/Filt 4'
                                        */
  real_T Filt5_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S3>/Filt 5'
                                        */
  real_T Filt5_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S3>/Filt 5'
                                        */
  real_T Filt5_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S3>/Filt 5'
                                        */
  real_T Filt6_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S3>/Filt 6'
                                        */
  real_T Filt6_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S3>/Filt 6'
                                        */
  real_T Filt6_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S3>/Filt 6'
                                        */
  real_T Filt8_NumCoef[2];             /* Expression: filt.Numerator{1,1}
                                        * Referenced by: '<S3>/Filt 8'
                                        */
  real_T Filt8_DenCoef[2];             /* Expression: filt.Denominator{1,1}
                                        * Referenced by: '<S3>/Filt 8'
                                        */
  real_T Filt8_InitialStates;          /* Expression: 0
                                        * Referenced by: '<S3>/Filt 8'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/360
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/360
                                        * Referenced by: '<S3>/Gain2'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1/360
                                        * Referenced by: '<S3>/Gain3'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1/605
                                        * Referenced by: '<S3>/Gain5'
                                        */
  real_T Gain6_Gain;                   /* Expression: 1/688
                                        * Referenced by: '<S3>/Gain6'
                                        */
  real_T Gain7_Gain;                   /* Expression: 1/688
                                        * Referenced by: '<S3>/Gain7'
                                        */
  real_T fingerwidth_Value;            /* Expression: 7
                                        * Referenced by: '<S24>/finger width'
                                        */
  real_T proximallength_Value;         /* Expression: 50
                                        * Referenced by: '<S24>/proximal length'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 180
                                        * Referenced by: '<S14>/Gain'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 250
                                        * Referenced by: '<S14>/Gain1'
                                        */
  real_T fingerwidth_Value_n;          /* Expression: 7
                                        * Referenced by: '<S53>/finger width'
                                        */
  real_T proximallength_Value_b;       /* Expression: 50
                                        * Referenced by: '<S53>/proximal length'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 180
                                        * Referenced by: '<S16>/Gain'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 250
                                        * Referenced by: '<S16>/Gain1'
                                        */
  real_T Gain_Gain_ad;                 /* Expression: 4
                                        * Referenced by: '<S17>/Gain'
                                        */
  real_T Saturation1_UpperSat_a;       /* Expression: 5
                                        * Referenced by: '<S17>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_f;       /* Expression: -5
                                        * Referenced by: '<S17>/Saturation1'
                                        */
  real_T Gain_Gain_m1;                 /* Expression: 0.4
                                        * Referenced by: '<S19>/Gain'
                                        */
  real_T Gain2_Gain_b;                 /* Expression: 3.5
                                        * Referenced by: '<S19>/Gain2'
                                        */
  SL_Bus_proxy_linux_std_msgs_Bool Constant_Value_b;/* Computed Parameter: Constant_Value_b
                                                     * Referenced by: '<S9>/Constant'
                                                     */
  SL_Bus_proxy_linux_std_msgs_Bool Constant_Value_p;/* Computed Parameter: Constant_Value_p
                                                     * Referenced by: '<S79>/Constant'
                                                     */
  SL_Bus_proxy_linux_std_msgs_Bool Constant_Value_n;/* Computed Parameter: Constant_Value_n
                                                     * Referenced by: '<S72>/Constant'
                                                     */
  SL_Bus_proxy_linux_std_msgs_Float32 Constant_Value_h;/* Computed Parameter: Constant_Value_h
                                                        * Referenced by: '<S71>/Constant'
                                                        */
  real32_T Constant_Value_gc;          /* Computed Parameter: Constant_Value_gc
                                        * Referenced by: '<S13>/Constant'
                                        */
  real32_T Constant5_Value;            /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<S14>/Constant5'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S14>/Constant4'
                                        */
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S21>/Constant1'
                                        */
  real32_T Constant1_Value_n;          /* Computed Parameter: Constant1_Value_n
                                        * Referenced by: '<S29>/Constant1'
                                        */
  real32_T Constant5_Value_p;          /* Computed Parameter: Constant5_Value_p
                                        * Referenced by: '<S16>/Constant5'
                                        */
  real32_T Constant4_Value_n;          /* Computed Parameter: Constant4_Value_n
                                        * Referenced by: '<S16>/Constant4'
                                        */
  real32_T Constant1_Value_nn;         /* Computed Parameter: Constant1_Value_nn
                                        * Referenced by: '<S50>/Constant1'
                                        */
  real32_T Constant1_Value_a;          /* Computed Parameter: Constant1_Value_a
                                        * Referenced by: '<S58>/Constant1'
                                        */
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S17>/Constant2'
                                        */
  real32_T Constant1_Value_l;          /* Computed Parameter: Constant1_Value_l
                                        * Referenced by: '<S17>/Constant1'
                                        */
  real32_T Constant1_Value_g;          /* Computed Parameter: Constant1_Value_g
                                        * Referenced by: '<S18>/Constant1'
                                        */
  real32_T Constant2_Value_n;          /* Computed Parameter: Constant2_Value_n
                                        * Referenced by: '<S65>/Constant2'
                                        */
  real32_T Constant2_Value_j;          /* Computed Parameter: Constant2_Value_j
                                        * Referenced by: '<S69>/Constant2'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S16>/Gain4'
                                        */
  real32_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<S16>/Saturation'
                                        */
  real32_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<S16>/Saturation'
                                        */
  real32_T Gain4_Gain_a;               /* Computed Parameter: Gain4_Gain_a
                                        * Referenced by: '<S14>/Gain4'
                                        */
  real32_T Saturation_UpperSat_i;      /* Computed Parameter: Saturation_UpperSat_i
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real32_T Saturation_LowerSat_i;      /* Computed Parameter: Saturation_LowerSat_i
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real32_T Constant4_Value_f;          /* Computed Parameter: Constant4_Value_f
                                        * Referenced by: '<S6>/Constant4'
                                        */
  real32_T Constant1_Value_e;          /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S6>/Constant1'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S6>/Constant3'
                                        */
  real32_T GainAggiustato_Gain;        /* Computed Parameter: GainAggiustato_Gain
                                        * Referenced by: '<S21>/Gain  Aggiustato'
                                        */
  real32_T Constant1_Value_c[2];       /* Computed Parameter: Constant1_Value_c
                                        * Referenced by: '<S14>/Constant1'
                                        */
  real32_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S14>/Unit Delay1'
                                        */
  real32_T UnitDelay3_InitialCondition[2];/* Computed Parameter: UnitDelay3_InitialCondition
                                           * Referenced by: '<S14>/Unit Delay3'
                                           */
  real32_T Saturation3_UpperSat;       /* Computed Parameter: Saturation3_UpperSat
                                        * Referenced by: '<S14>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat;       /* Computed Parameter: Saturation3_LowerSat
                                        * Referenced by: '<S14>/Saturation3'
                                        */
  real32_T GainAggiustato_Gain_b;      /* Computed Parameter: GainAggiustato_Gain_b
                                        * Referenced by: '<S29>/Gain Aggiustato'
                                        */
  real32_T Constant_Value_ph;          /* Computed Parameter: Constant_Value_ph
                                        * Referenced by: '<S29>/Constant'
                                        */
  real32_T Saturation2_UpperSat;       /* Computed Parameter: Saturation2_UpperSat
                                        * Referenced by: '<S14>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat;       /* Computed Parameter: Saturation2_LowerSat
                                        * Referenced by: '<S14>/Saturation2'
                                        */
  real32_T Constant2_Value_g;          /* Computed Parameter: Constant2_Value_g
                                        * Referenced by: '<S29>/Constant2'
                                        */
  real32_T GainAggiustato_Gain_h;      /* Computed Parameter: GainAggiustato_Gain_h
                                        * Referenced by: '<S50>/Gain  Aggiustato'
                                        */
  real32_T Constant1_Value_d[2];       /* Computed Parameter: Constant1_Value_d
                                        * Referenced by: '<S16>/Constant1'
                                        */
  real32_T UnitDelay1_InitialCondition_d;/* Computed Parameter: UnitDelay1_InitialCondition_d
                                          * Referenced by: '<S16>/Unit Delay1'
                                          */
  real32_T UnitDelay3_InitialCondition_e[2];/* Computed Parameter: UnitDelay3_InitialCondition_e
                                             * Referenced by: '<S16>/Unit Delay3'
                                             */
  real32_T Saturation3_UpperSat_d;     /* Computed Parameter: Saturation3_UpperSat_d
                                        * Referenced by: '<S16>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat_n;     /* Computed Parameter: Saturation3_LowerSat_n
                                        * Referenced by: '<S16>/Saturation3'
                                        */
  real32_T GainAggiustato_Gain_o;      /* Computed Parameter: GainAggiustato_Gain_o
                                        * Referenced by: '<S58>/Gain Aggiustato'
                                        */
  real32_T Constant_Value_bd;          /* Computed Parameter: Constant_Value_bd
                                        * Referenced by: '<S58>/Constant'
                                        */
  real32_T Saturation2_UpperSat_l;     /* Computed Parameter: Saturation2_UpperSat_l
                                        * Referenced by: '<S16>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat_i;     /* Computed Parameter: Saturation2_LowerSat_i
                                        * Referenced by: '<S16>/Saturation2'
                                        */
  real32_T Constant2_Value_b;          /* Computed Parameter: Constant2_Value_b
                                        * Referenced by: '<S58>/Constant2'
                                        */
  real32_T Constant3_Value_d;          /* Computed Parameter: Constant3_Value_d
                                        * Referenced by: '<S17>/Constant3'
                                        */
  real32_T Saturation_UpperSat_c;      /* Computed Parameter: Saturation_UpperSat_c
                                        * Referenced by: '<S17>/Saturation'
                                        */
  real32_T Saturation_LowerSat_l;      /* Computed Parameter: Saturation_LowerSat_l
                                        * Referenced by: '<S17>/Saturation'
                                        */
  real32_T Gain1_Gain_p;               /* Computed Parameter: Gain1_Gain_p
                                        * Referenced by: '<S17>/Gain1'
                                        */
  real32_T Saturation_UpperSat_b;      /* Computed Parameter: Saturation_UpperSat_b
                                        * Referenced by: '<S18>/Saturation'
                                        */
  real32_T Saturation_LowerSat_b;      /* Computed Parameter: Saturation_LowerSat_b
                                        * Referenced by: '<S18>/Saturation'
                                        */
  real32_T Constant3_Value_j;          /* Computed Parameter: Constant3_Value_j
                                        * Referenced by: '<S65>/Constant3'
                                        */
  real32_T Constant_Value_i;           /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S19>/Constant'
                                        */
  real32_T Gain3_Gain_m;               /* Computed Parameter: Gain3_Gain_m
                                        * Referenced by: '<S19>/Gain3'
                                        */
  real32_T Gain4_Gain_n;               /* Computed Parameter: Gain4_Gain_n
                                        * Referenced by: '<S19>/Gain4'
                                        */
  real32_T Constant3_Value_c;          /* Computed Parameter: Constant3_Value_c
                                        * Referenced by: '<S69>/Constant3'
                                        */
  real32_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S6>/Constant'
                                        */
  real32_T Constant2_Value_d;          /* Computed Parameter: Constant2_Value_d
                                        * Referenced by: '<S6>/Constant2'
                                        */
  real32_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S6>/Switch'
                                        */
  real32_T Switch1_Threshold;          /* Computed Parameter: Switch1_Threshold
                                        * Referenced by: '<S6>/Switch1'
                                        */
  real32_T Switch2_Threshold;          /* Computed Parameter: Switch2_Threshold
                                        * Referenced by: '<S6>/Switch2'
                                        */
  real32_T Switch3_Threshold;          /* Computed Parameter: Switch3_Threshold
                                        * Referenced by: '<S6>/Switch3'
                                        */
  real32_T Switch4_Threshold;          /* Computed Parameter: Switch4_Threshold
                                        * Referenced by: '<S6>/Switch4'
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
  real32_T Saturation_UpperSat_g;      /* Computed Parameter: Saturation_UpperSat_g
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real32_T Saturation_LowerSat_h;      /* Computed Parameter: Saturation_LowerSat_h
                                        * Referenced by: '<S7>/Saturation'
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
  real32_T Saturation1_UpperSat_i;     /* Computed Parameter: Saturation1_UpperSat_i
                                        * Referenced by: '<S7>/Saturation1'
                                        */
  real32_T Saturation1_LowerSat_o;     /* Computed Parameter: Saturation1_LowerSat_o
                                        * Referenced by: '<S7>/Saturation1'
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
  real32_T Saturation2_UpperSat_l4;    /* Computed Parameter: Saturation2_UpperSat_l4
                                        * Referenced by: '<S7>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat_c;     /* Computed Parameter: Saturation2_LowerSat_c
                                        * Referenced by: '<S7>/Saturation2'
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
  real32_T Saturation3_UpperSat_e;     /* Computed Parameter: Saturation3_UpperSat_e
                                        * Referenced by: '<S7>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat_e;     /* Computed Parameter: Saturation3_LowerSat_e
                                        * Referenced by: '<S7>/Saturation3'
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
  real32_T Saturation4_UpperSat;       /* Computed Parameter: Saturation4_UpperSat
                                        * Referenced by: '<S7>/Saturation4'
                                        */
  real32_T Saturation4_LowerSat;       /* Computed Parameter: Saturation4_LowerSat
                                        * Referenced by: '<S7>/Saturation4'
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
  real32_T Saturation5_UpperSat;       /* Computed Parameter: Saturation5_UpperSat
                                        * Referenced by: '<S7>/Saturation5'
                                        */
  real32_T Saturation5_LowerSat;       /* Computed Parameter: Saturation5_LowerSat
                                        * Referenced by: '<S7>/Saturation5'
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
  real32_T Saturation6_UpperSat;       /* Computed Parameter: Saturation6_UpperSat
                                        * Referenced by: '<S7>/Saturation6'
                                        */
  real32_T Saturation6_LowerSat;       /* Computed Parameter: Saturation6_LowerSat
                                        * Referenced by: '<S7>/Saturation6'
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
  real32_T Saturation7_UpperSat;       /* Computed Parameter: Saturation7_UpperSat
                                        * Referenced by: '<S7>/Saturation7'
                                        */
  real32_T Saturation7_LowerSat;       /* Computed Parameter: Saturation7_LowerSat
                                        * Referenced by: '<S7>/Saturation7'
                                        */
  real32_T Filt8_NumCoef_n[2];         /* Computed Parameter: Filt8_NumCoef_n
                                        * Referenced by: '<S7>/Filt 8'
                                        */
  real32_T Filt8_DenCoef_a[2];         /* Computed Parameter: Filt8_DenCoef_a
                                        * Referenced by: '<S7>/Filt 8'
                                        */
  real32_T Filt8_InitialStates_e;      /* Computed Parameter: Filt8_InitialStates_e
                                        * Referenced by: '<S7>/Filt 8'
                                        */
  real32_T Saturation8_UpperSat;       /* Computed Parameter: Saturation8_UpperSat
                                        * Referenced by: '<S7>/Saturation8'
                                        */
  real32_T Saturation8_LowerSat;       /* Computed Parameter: Saturation8_LowerSat
                                        * Referenced by: '<S7>/Saturation8'
                                        */
  real32_T DeadZone_Start_n;           /* Computed Parameter: DeadZone_Start_n
                                        * Referenced by: '<S81>/Dead Zone'
                                        */
  real32_T DeadZone_End_d;             /* Computed Parameter: DeadZone_End_d
                                        * Referenced by: '<S81>/Dead Zone'
                                        */
  real32_T Gain_Gain_n;                /* Computed Parameter: Gain_Gain_n
                                        * Referenced by: '<S81>/Gain'
                                        */
  real32_T DeadZone_Start_a;           /* Computed Parameter: DeadZone_Start_a
                                        * Referenced by: '<S80>/Dead Zone'
                                        */
  real32_T DeadZone_End_g;             /* Computed Parameter: DeadZone_End_g
                                        * Referenced by: '<S80>/Dead Zone'
                                        */
  real32_T DeadZone_Start_h;           /* Computed Parameter: DeadZone_Start_h
                                        * Referenced by: '<S83>/Dead Zone'
                                        */
  real32_T DeadZone_End_dy;            /* Computed Parameter: DeadZone_End_dy
                                        * Referenced by: '<S83>/Dead Zone'
                                        */
  real32_T Gain_Gain_k;                /* Computed Parameter: Gain_Gain_k
                                        * Referenced by: '<S83>/Gain'
                                        */
  real32_T DeadZone_Start_e;           /* Computed Parameter: DeadZone_Start_e
                                        * Referenced by: '<S82>/Dead Zone'
                                        */
  real32_T DeadZone_End_gn;            /* Computed Parameter: DeadZone_End_gn
                                        * Referenced by: '<S82>/Dead Zone'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S7>/Manual Switch'
                                        */
  uint8_T ManualSwitch_CurrentSetting_o;/* Computed Parameter: ManualSwitch_CurrentSetting_o
                                         * Referenced by: '<S13>/Manual Switch'
                                         */
  uint8_T ManualSwitch5_CurrentSetting;/* Computed Parameter: ManualSwitch5_CurrentSetting
                                        * Referenced by: '<S14>/Manual Switch5'
                                        */
  uint8_T ManualSwitch5_CurrentSetting_d;/* Computed Parameter: ManualSwitch5_CurrentSetting_d
                                          * Referenced by: '<S16>/Manual Switch5'
                                          */
  uint8_T ManualSwitch_CurrentSetting_c;/* Computed Parameter: ManualSwitch_CurrentSetting_c
                                         * Referenced by: '<S17>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_b;/* Computed Parameter: ManualSwitch_CurrentSetting_b
                                         * Referenced by: '<S18>/Manual Switch'
                                         */
  uint8_T ManualSwitch1_CurrentSetting;/* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<S19>/Manual Switch1'
                                        */
  uint8_T ManualSwitch_CurrentSetting_l;/* Computed Parameter: ManualSwitch_CurrentSetting_l
                                         * Referenced by: '<S19>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_m;/* Computed Parameter: ManualSwitch_CurrentSetting_m
                                         * Referenced by: '<S6>/Manual Switch'
                                         */
  uint8_T ManualSwitch1_CurrentSetting_p;/* Computed Parameter: ManualSwitch1_CurrentSetting_p
                                          * Referenced by: '<S6>/Manual Switch1'
                                          */
  uint8_T Automatic_CurrentSetting;    /* Computed Parameter: Automatic_CurrentSetting
                                        * Referenced by: '<S7>/Automatic '
                                        */
  boolean_T Constant1_Value_k;         /* Computed Parameter: Constant1_Value_k
                                        * Referenced by: '<S7>/Constant1'
                                        */
  boolean_T Constant_Value_ok;         /* Computed Parameter: Constant_Value_ok
                                        * Referenced by: '<S7>/Constant'
                                        */
  P_EnabledSubsystem_proxy_linu_T EnabledSubsystem_f;/* '<S79>/Enabled Subsystem' */
  P_Subsystem_proxy_linux_T Subsystem_p;/* '<S69>/Subsystem' */
  P_Subsystem_proxy_linux_T Subsystem_cc;/* '<S65>/Subsystem' */
  P_Subsystem_proxy_linux_T Subsystem_f;/* '<S17>/Subsystem' */
  P_Subsystem_proxy_linux_T Subsystem_c;/* '<S58>/Subsystem' */
  P_Subsystem_proxy_linux_T Subsystem_a;/* '<S50>/Subsystem' */
  P_Subsystem_proxy_linux_T Subsystem_l;/* '<S29>/Subsystem' */
  P_Subsystem_proxy_linux_T Subsystem; /* '<S21>/Subsystem' */
  P_EnabledSubsystem_proxy_linu_T EnabledSubsystem;/* '<S9>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_proxy_linux_T {
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

  extern P_proxy_linux_T proxy_linux_P;

#ifdef __cplusplus

}
#endif

/* Block signals (auto storage) */
extern B_proxy_linux_T proxy_linux_B;

/* Block states (auto storage) */
extern DW_proxy_linux_T proxy_linux_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void proxy_linux_initialize(void);
  extern void proxy_linux_step(void);
  extern void proxy_linux_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_proxy_linux_T *const proxy_linux_M;

#ifdef __cplusplus

}
#endif

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Display' : Unused code path elimination
 * Block '<S2>/Display' : Unused code path elimination
 * Block '<S2>/Display1' : Unused code path elimination
 * Block '<S2>/Display2' : Unused code path elimination
 * Block '<S2>/Display3' : Unused code path elimination
 * Block '<S3>/Dead Zone1' : Unused code path elimination
 * Block '<S3>/Dead Zone8' : Unused code path elimination
 * Block '<S3>/Display' : Unused code path elimination
 * Block '<S3>/Filt ' : Unused code path elimination
 * Block '<S3>/Filt 7' : Unused code path elimination
 * Block '<S3>/Gain4' : Unused code path elimination
 * Block '<S3>/Gain8' : Unused code path elimination
 * Block '<S13>/Display' : Unused code path elimination
 * Block '<S22>/Data Type Duplicate' : Unused code path elimination
 * Block '<S23>/Data Type Duplicate' : Unused code path elimination
 * Block '<S14>/Display' : Unused code path elimination
 * Block '<S14>/Display1' : Unused code path elimination
 * Block '<S14>/Display2' : Unused code path elimination
 * Block '<S14>/Display3' : Unused code path elimination
 * Block '<S14>/Display4' : Unused code path elimination
 * Block '<S14>/Display5' : Unused code path elimination
 * Block '<S14>/Display6' : Unused code path elimination
 * Block '<S14>/Display7' : Unused code path elimination
 * Block '<S14>/Display8' : Unused code path elimination
 * Block '<S14>/Display9' : Unused code path elimination
 * Block '<S14>/Saturation1' : Unused code path elimination
 * Block '<S31>/Gain' : Unused code path elimination
 * Block '<S51>/Data Type Duplicate' : Unused code path elimination
 * Block '<S52>/Data Type Duplicate' : Unused code path elimination
 * Block '<S16>/Display' : Unused code path elimination
 * Block '<S16>/Display1' : Unused code path elimination
 * Block '<S16>/Display2' : Unused code path elimination
 * Block '<S16>/Display3' : Unused code path elimination
 * Block '<S16>/Display4' : Unused code path elimination
 * Block '<S16>/Display5' : Unused code path elimination
 * Block '<S16>/Display6' : Unused code path elimination
 * Block '<S16>/Display7' : Unused code path elimination
 * Block '<S16>/Display8' : Unused code path elimination
 * Block '<S16>/Saturation1' : Unused code path elimination
 * Block '<S60>/Gain' : Unused code path elimination
 * Block '<S17>/Display' : Unused code path elimination
 * Block '<S65>/Display4' : Unused code path elimination
 * Block '<S19>/Display' : Unused code path elimination
 * Block '<S19>/Display1' : Unused code path elimination
 * Block '<S19>/Display2' : Unused code path elimination
 * Block '<S19>/Display3' : Unused code path elimination
 * Block '<S19>/Gain1' : Unused code path elimination
 * Block '<S69>/Display4' : Unused code path elimination
 * Block '<S7>/Display' : Unused code path elimination
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
 * '<Root>' : 'proxy_linux'
 * '<S1>'   : 'proxy_linux/Calibration Subsystem'
 * '<S2>'   : 'proxy_linux/Displays '
 * '<S3>'   : 'proxy_linux/From Ros'
 * '<S4>'   : 'proxy_linux/Generate SchunkCommands '
 * '<S5>'   : 'proxy_linux/Get Data From Hand'
 * '<S6>'   : 'proxy_linux/Send Data to Hand'
 * '<S7>'   : 'proxy_linux/ToRos'
 * '<S8>'   : 'proxy_linux/Calibration Subsystem/Chart'
 * '<S9>'   : 'proxy_linux/Calibration Subsystem/Subscribe1'
 * '<S10>'  : 'proxy_linux/Calibration Subsystem/Subscribe1/Enabled Subsystem'
 * '<S11>'  : 'proxy_linux/From Ros/Subscribe'
 * '<S12>'  : 'proxy_linux/From Ros/Subscribe/Enabled Subsystem'
 * '<S13>'  : 'proxy_linux/Generate SchunkCommands /Finger Spread'
 * '<S14>'  : 'proxy_linux/Generate SchunkCommands /Index'
 * '<S15>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger'
 * '<S16>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger'
 * '<S17>'  : 'proxy_linux/Generate SchunkCommands /Pinky'
 * '<S18>'  : 'proxy_linux/Generate SchunkCommands /Ring '
 * '<S19>'  : 'proxy_linux/Generate SchunkCommands /Thumb'
 * '<S20>'  : 'proxy_linux/Generate SchunkCommands /Finger Spread/MATLAB Function'
 * '<S21>'  : 'proxy_linux/Generate SchunkCommands /Index/Calibration'
 * '<S22>'  : 'proxy_linux/Generate SchunkCommands /Index/Data Type Conversion Inherited'
 * '<S23>'  : 'proxy_linux/Generate SchunkCommands /Index/Data Type Conversion Inherited1'
 * '<S24>'  : 'proxy_linux/Generate SchunkCommands /Index/Finger Index '
 * '<S25>'  : 'proxy_linux/Generate SchunkCommands /Index/Jacobian2'
 * '<S26>'  : 'proxy_linux/Generate SchunkCommands /Index/MATLAB Function'
 * '<S27>'  : 'proxy_linux/Generate SchunkCommands /Index/MATLAB Function2'
 * '<S28>'  : 'proxy_linux/Generate SchunkCommands /Index/MATLAB Function3'
 * '<S29>'  : 'proxy_linux/Generate SchunkCommands /Index/Subsystem'
 * '<S30>'  : 'proxy_linux/Generate SchunkCommands /Index/Calibration/Subsystem'
 * '<S31>'  : 'proxy_linux/Generate SchunkCommands /Index/Subsystem/Radians to Degrees'
 * '<S32>'  : 'proxy_linux/Generate SchunkCommands /Index/Subsystem/Subsystem'
 * '<S33>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/MATLAB Function'
 * '<S34>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/New Version'
 * '<S35>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/Old Version'
 * '<S36>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/New Version/Condizionamento1'
 * '<S37>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/New Version/Data Type Conversion Inherited'
 * '<S38>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/New Version/Data Type Conversion Inherited1'
 * '<S39>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/New Version/Finger Index 1'
 * '<S40>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/New Version/Index New Pose Estimation '
 * '<S41>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/New Version/Jacobian2'
 * '<S42>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/New Version/Condizionamento1/Subsystem'
 * '<S43>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/Old Version/Condizionamento'
 * '<S44>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/Old Version/Finger Index '
 * '<S45>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/Old Version/MATLAB Function'
 * '<S46>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/Old Version/Pose Generator'
 * '<S47>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/Old Version/Condizionamento/Subsystem'
 * '<S48>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/Old Version/Pose Generator/Jacobian2'
 * '<S49>'  : 'proxy_linux/Generate SchunkCommands /Index  Finger/Old Version/Pose Generator/Pose'
 * '<S50>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger/Calibration'
 * '<S51>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger/Data Type Conversion Inherited'
 * '<S52>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger/Data Type Conversion Inherited1'
 * '<S53>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger/Finger Index '
 * '<S54>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger/Jacobian2'
 * '<S55>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger/MATLAB Function'
 * '<S56>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger/MATLAB Function2'
 * '<S57>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger/MATLAB Function3'
 * '<S58>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger/Subsystem'
 * '<S59>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger/Calibration/Subsystem'
 * '<S60>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger/Subsystem/Radians to Degrees'
 * '<S61>'  : 'proxy_linux/Generate SchunkCommands /Middle Finger/Subsystem/Subsystem'
 * '<S62>'  : 'proxy_linux/Generate SchunkCommands /Pinky/Pose Estimation'
 * '<S63>'  : 'proxy_linux/Generate SchunkCommands /Pinky/Subsystem'
 * '<S64>'  : 'proxy_linux/Generate SchunkCommands /Ring /Pose Estimation'
 * '<S65>'  : 'proxy_linux/Generate SchunkCommands /Ring /calibration'
 * '<S66>'  : 'proxy_linux/Generate SchunkCommands /Ring /calibration/Subsystem'
 * '<S67>'  : 'proxy_linux/Generate SchunkCommands /Thumb/MATLAB Function'
 * '<S68>'  : 'proxy_linux/Generate SchunkCommands /Thumb/MATLAB Function1'
 * '<S69>'  : 'proxy_linux/Generate SchunkCommands /Thumb/calibration'
 * '<S70>'  : 'proxy_linux/Generate SchunkCommands /Thumb/calibration/Subsystem'
 * '<S71>'  : 'proxy_linux/ToRos/Blank Message'
 * '<S72>'  : 'proxy_linux/ToRos/Blank Message1'
 * '<S73>'  : 'proxy_linux/ToRos/Blank Message2'
 * '<S74>'  : 'proxy_linux/ToRos/MATLAB Function - Assign'
 * '<S75>'  : 'proxy_linux/ToRos/Publish'
 * '<S76>'  : 'proxy_linux/ToRos/Publish1'
 * '<S77>'  : 'proxy_linux/ToRos/Publish12'
 * '<S78>'  : 'proxy_linux/ToRos/Publish2'
 * '<S79>'  : 'proxy_linux/ToRos/Subscribe'
 * '<S80>'  : 'proxy_linux/ToRos/Subsystem'
 * '<S81>'  : 'proxy_linux/ToRos/Subsystem1'
 * '<S82>'  : 'proxy_linux/ToRos/Subsystem2'
 * '<S83>'  : 'proxy_linux/ToRos/Subsystem3'
 * '<S84>'  : 'proxy_linux/ToRos/To Verosim'
 * '<S85>'  : 'proxy_linux/ToRos/Subscribe/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_proxy_linux_h_ */
