/*
 * dx_hand_model.h
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

#ifndef RTW_HEADER_dx_hand_model_h_
#define RTW_HEADER_dx_hand_model_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef dx_hand_model_COMMON_INCLUDES_
# define dx_hand_model_COMMON_INCLUDES_
#include <stdio.h>
#include <string.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "DAHostLib_Network.h"
#endif                                 /* dx_hand_model_COMMON_INCLUDES_ */

#include "dx_hand_model_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
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

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals for system '<S35>/Optimized_Static_Problem' */
typedef struct {
  real32_T y;                          /* '<S35>/Optimized_Static_Problem' */
} B_Optimized_Static_Problem_dx_T;

/* Block signals for system '<S38>/Classic_Static_Problem' */
typedef struct {
  real32_T rate;                       /* '<S38>/Classic_Static_Problem' */
} B_Classic_Static_Problem_dx_h_T;

/* Block signals for system '<S38>/Optimized_Static_Problem' */
typedef struct {
  real32_T y;                          /* '<S38>/Optimized_Static_Problem' */
} B_Optimized_Static_Problem_l_T;

/* Block signals for system '<S80>/Middle Jacobian' */
typedef struct {
  real32_T JTcomp[4];                  /* '<S80>/Middle Jacobian' */
  real32_T q_next[2];                  /* '<S80>/Middle Jacobian' */
  real32_T J22_ol;                     /* '<S80>/Middle Jacobian' */
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
  real32_T a_tmp_gu;
  real32_T x_tmp;
  real32_T a_tmp_tmp_l;
  real32_T a_tmp_tmp_d;
  real32_T a_tmp_tmp_dy;
  real32_T a_tmp_tmp_lx;
  real32_T a_tmp_tmp_o;
  real32_T a_tmp_tmp_b;
  real32_T a_tmp_tmp_n;
  real32_T a_tmp_tmp_bs;
  real32_T a_tmp_tmp_ln;
  real32_T a_tmp_tmp_h;
  real32_T a_tmp_tmp_tmp;
  real32_T J22_c_tmp;
  real32_T a_tmp_tmp_tmp_b;
  real32_T a_tmp_tmp_tmp_d;
  real32_T a_tmp_tmp_tmp_e;
  real32_T J22_c_tmp_tmp;
} B_MiddleJacobian_dx_hand_mode_T;

/* Block signals for system '<S80>/Middle Jacobian ' */
typedef struct {
  real32_T JTcomp[4];                  /* '<S80>/Middle Jacobian ' */
  real32_T c1;
  real32_T c2;
  real32_T offset;
  real32_T LAB;
  real32_T LBC;
  real32_T LCD;
  real32_T LDE;
  real32_T LEF;
  real32_T LGH;
  real32_T LEJ;
  real32_T LCI;
  real32_T LKB;
  real32_T LKH;
  real32_T a_tmp;
  real32_T a_tmp_m;
  real32_T a_tmp_tmp;
  real32_T a_tmp_c;
  real32_T a_tmp_tmp_k;
  real32_T a_tmp_cx;
  real32_T a_tmp_b;
  real32_T a_tmp_p;
  real32_T a_tmp_tmp_c;
  real32_T a_tmp_f;
  real32_T a_tmp_g;
  real32_T a_tmp_g1;
  real32_T a_tmp_me;
  real32_T a_tmp_n;
  real32_T a_tmp_pp;
  real32_T a_tmp_l;
  real32_T a_tmp_j;
  real32_T a_tmp_d;
  real32_T a_tmp_gu;
  real32_T a_tmp_ld;
  real32_T a_tmp_dh;
  real32_T x_tmp;
  real32_T a_tmp_tmp_d;
  real32_T a_tmp_tmp_l;
  real32_T a_tmp_tmp_o;
  real32_T a_tmp_tmp_tmp;
  real32_T a_tmp_tmp_b;
  real32_T a_tmp_tmp_tmp_n;
  real32_T a_tmp_tmp_tmp_b;
  real32_T a_tmp_tmp_tmp_tmp;
  real32_T a_tmp_tmp_tmp_tmp_l;
  real32_T a_tmp_tmp_tmp_h;
} B_MiddleJacobian_dx_hand_mo_j_T;

/* Block signals for system '<S81>/Middle Direct Kinematics' */
typedef struct {
  real32_T y[8];                       /* '<S81>/Middle Direct Kinematics' */
  creal32_T t;
  creal32_T v;
  real32_T LKH;
  real32_T LDF;
  real32_T LBD;
  real32_T LKN;
  real32_T LAK;
  real32_T qK;
  real32_T xH;
  real32_T yH;
  real32_T xC;
} B_MiddleDirectKinematics_dx_h_T;

/* Block signals for system '<S82>/Classic_Static_Problem' */
typedef struct {
  real32_T y;                          /* '<S82>/Classic_Static_Problem' */
} B_Classic_Static_Problem_dx_k_T;

/* Block signals for system '<S84>/IsNan ' */
typedef struct {
  real32_T J[4];                       /* '<S84>/IsNan ' */
} B_IsNan_dx_hand_model_T;

/* Block signals for system '<S242>/MATLAB Function1' */
typedef struct {
  real32_T x;                          /* '<S242>/MATLAB Function1' */
  real32_T y;                          /* '<S242>/MATLAB Function1' */
  real32_T z;                          /* '<S242>/MATLAB Function1' */
} B_MATLABFunction1_dx_hand_mod_T;

/* Block signals for system '<S242>/MATLAB Function3' */
typedef struct {
  real32_T x;                          /* '<S242>/MATLAB Function3' */
  real32_T y;                          /* '<S242>/MATLAB Function3' */
  real32_T z;                          /* '<S242>/MATLAB Function3' */
} B_MATLABFunction3_dx_hand_mod_T;

/* Block signals for system '<S233>/MATLAB Function4' */
typedef struct {
  real32_T x;                          /* '<S233>/MATLAB Function4' */
  real32_T y;                          /* '<S233>/MATLAB Function4' */
  real32_T z;                          /* '<S233>/MATLAB Function4' */
} B_MATLABFunction4_dx_hand_m_c_T;

/* Block signals (auto storage) */
typedef struct {
  SL_Bus_dx_hand_model_sensor_msgs_JointState In1;/* '<S32>/In1' */
  SL_Bus_dx_hand_model_sensor_msgs_JointState msg_k;/* '<S14>/MATLAB Function - Assign' */
  SL_Bus_dx_hand_model_std_msgs_Float64MultiArray In1_e;/* '<S22>/In1' */
  SL_Bus_dx_hand_model_std_msgs_Float64MultiArray b_varargout_2;
  real_T DataTypeConversion1_i[61];    /* '<S13>/Data Type Conversion1' */
  real32_T fv0[61];
  real_T y[18];                        /* '<S189>/Ring Parameters' */
  real_T y_d[18];                      /* '<S143>/Pinky Parameters' */
  real_T y_e[18];                      /* '<S96>/Middle Parameters' */
  real_T y_m[18];                      /* '<S52>/Index Parameters' */
  real32_T TmpSignalConversionAtToWork[28];
  real32_T TmpSignalConversionAtToWo_o[28];
  real32_T TmpSignalConversionAtToW_of[28];
  real32_T TmpSignalConversionAtTo_ofc[28];
  real32_T Delay_m[27];                /* '<S4>/Delay' */
  real32_T DataTypeConversion1_d[18];  /* '<S52>/Data Type Conversion1' */
  real32_T T_C[16];
  real32_T T_E[16];
  real32_T T_J[16];
  real32_T fv1[16];
  real32_T T_C_c[16];
  real32_T T_J_k[16];
  real32_T TmpSignalConversionAtDelayI[12];
  real_T ManualSwitch_l[5];            /* '<S186>/Manual Switch' */
  real_T ManualSwitch_c[5];            /* '<S141>/Manual Switch' */
  real_T ManualSwitch_a[5];            /* '<S97>/Manual Switch' */
  real_T ManualSwitch_i[5];            /* '<S53>/Manual Switch' */
  char_T cv0[38];
  char_T cv1[37];
  char_T cv2[36];
  real32_T DataTypeConversion2[9];
  char_T cv3[35];
  char_T cv4[34];
  char_T cv5[33];
  char_T cv6[32];
  real32_T y_f[8];                     /* '<S37>/Index Direct Kinematics' */
  creal_T MCP_AA_s[2];                 /* '<S233>/Mother of Kinematics' */
  char_T cv7[31];
  char_T cv8[30];
  char_T cv9[29];
  char_T cv10[28];
  char_T cv11[27];
  char_T cv12[26];
  char_T cv13[24];
  char_T cv14[23];
  char_T cv15[22];
  char_T cv16[21];
  char_T cv17[20];
  char_T cv18[19];
  char_T cv19[18];
  char_T cv20[17];
  real32_T MCP[4];                     /* '<S231>/MATLAB Function' */
  real32_T Memory_d[4];                /* '<S84>/Memory' */
  real32_T Switch_i[4];                /* '<S39>/Switch' */
  real32_T Filt4_c[4];                 /* '<S176>/Filt 4' */
  real32_T I[4];                       /* '<S227>/F transformation new' */
  real32_T J[4];                       /* '<S227>/F transformation new' */
  real32_T J_c[4];
  real_T DataTypeConversion1_k[2];     /* '<S310>/Data Type Conversion1' */
  creal_T dc0;
  creal_T dc1;
  real32_T ComplextoRealImag1_d[3];    /* '<S242>/Complex to Real-Imag1' */
  real32_T ComplextoRealImag_b[3];     /* '<S243>/Complex to Real-Imag' */
  real32_T TmpSignalConversionAtSFun_h[3];/* '<S231>/Find K position' */
  real_T RateTransition;               /* '<S33>/Rate Transition' */
  real_T RateTransition_g;             /* '<S39>/Rate Transition' */
  real_T RateTransition1;              /* '<S4>/Rate Transition1' */
  real_T RateTransition_f;             /* '<S50>/Rate Transition' */
  real_T RateTransition_a[5];          /* '<S37>/Rate Transition' */
  real_T RateTransition_l;             /* '<S69>/Rate Transition' */
  real_T RateTransition_gt;            /* '<S24>/Rate Transition' */
  real_T RateTransition_j;             /* '<S76>/Rate Transition' */
  real_T RateTransition_ah;            /* '<S70>/Rate Transition' */
  real_T RateTransition_lm;            /* '<S77>/Rate Transition' */
  real_T RateTransition_k;             /* '<S71>/Rate Transition' */
  real_T RateTransition_n;             /* '<S67>/Rate Transition' */
  real_T RateTransition_o;             /* '<S72>/Rate Transition' */
  real_T RateTransition_k1;            /* '<S68>/Rate Transition' */
  real_T RateTransition_ov;            /* '<S66>/Rate Transition' */
  real_T RateTransition_jm;            /* '<S34>/Rate Transition' */
  real_T RateTransition_lp;            /* '<S47>/Rate Transition' */
  real_T RateTransition_p;             /* '<S46>/Rate Transition' */
  real_T RateTransition_b;             /* '<S45>/Rate Transition' */
  real_T RateTransition_pg;            /* '<S41>/Rate Transition' */
  real_T RateTransition_pi;            /* '<S78>/Rate Transition' */
  real_T RateTransition_i;             /* '<S84>/Rate Transition' */
  real_T RateTransition_d;             /* '<S92>/Rate Transition' */
  real_T RateTransition_ie[5];         /* '<S81>/Rate Transition' */
  real_T RateTransition_gd;            /* '<S119>/Rate Transition' */
  real_T RateTransition_ii;            /* '<S87>/Rate Transition' */
  real_T RateTransition_po;            /* '<S120>/Rate Transition' */
  real_T RateTransition_aj;            /* '<S88>/Rate Transition' */
  real_T RateTransition_oh;            /* '<S121>/Rate Transition' */
  real_T RateTransition_bq;            /* '<S117>/Rate Transition' */
  real_T RateTransition_m;             /* '<S122>/Rate Transition' */
  real_T RateTransition_pa;            /* '<S118>/Rate Transition' */
  real_T RateTransition_k2;            /* '<S116>/Rate Transition' */
  real_T RateTransition_d1;            /* '<S79>/Rate Transition' */
  real_T RateTransition_mp;            /* '<S109>/Rate Transition' */
  real_T RateTransition_k3;            /* '<S108>/Rate Transition' */
  real_T RateTransition_fg;            /* '<S107>/Rate Transition' */
  real_T RateTransition_ps;            /* '<S89>/Rate Transition' */
  real_T RateTransition_a3;            /* '<S124>/Rate Transition' */
  real_T RateTransition_k3g;           /* '<S131>/Rate Transition' */
  real_T RateTransition_dn;            /* '<S139>/Rate Transition' */
  real_T RateTransition_dw[5];         /* '<S128>/Rate Transition' */
  real_T RateTransition_p4;            /* '<S164>/Rate Transition' */
  real_T RateTransition_ng;            /* '<S134>/Rate Transition' */
  real_T RateTransition_ld;            /* '<S165>/Rate Transition' */
  real_T RateTransition_km;            /* '<S135>/Rate Transition' */
  real_T RateTransition_ky;            /* '<S166>/Rate Transition' */
  real_T RateTransition_e;             /* '<S162>/Rate Transition' */
  real_T RateTransition_ks;            /* '<S167>/Rate Transition' */
  real_T RateTransition_pgy;           /* '<S163>/Rate Transition' */
  real_T RateTransition_o0;            /* '<S161>/Rate Transition' */
  real_T RateTransition_bs;            /* '<S126>/Rate Transition' */
  real_T RateTransition_a2;            /* '<S154>/Rate Transition' */
  real_T RateTransition_pb;            /* '<S153>/Rate Transition' */
  real_T RateTransition_lt;            /* '<S152>/Rate Transition' */
  real_T RateTransition_k4;            /* '<S136>/Rate Transition' */
  real_T RateTransition_em;            /* '<S125>/Rate Transition' */
  real_T RateTransition_fh;            /* '<S169>/Rate Transition' */
  real_T RateTransition_nv;            /* '<S176>/Rate Transition' */
  real_T RateTransition_op;            /* '<S184>/Rate Transition' */
  real_T RateTransition_m0[5];         /* '<S173>/Rate Transition' */
  real_T RateTransition_p2;            /* '<S209>/Rate Transition' */
  real_T RateTransition_pk;            /* '<S179>/Rate Transition' */
  real_T RateTransition_no;            /* '<S210>/Rate Transition' */
  real_T RateTransition_mi;            /* '<S180>/Rate Transition' */
  real_T RateTransition_c;             /* '<S211>/Rate Transition' */
  real_T RateTransition_cc;            /* '<S207>/Rate Transition' */
  real_T RateTransition_nc;            /* '<S212>/Rate Transition' */
  real_T RateTransition_jg;            /* '<S208>/Rate Transition' */
  real_T RateTransition_e5;            /* '<S206>/Rate Transition' */
  real_T RateTransition_od;            /* '<S171>/Rate Transition' */
  real_T RateTransition_kg;            /* '<S199>/Rate Transition' */
  real_T RateTransition_nm;            /* '<S198>/Rate Transition' */
  real_T RateTransition_cv;            /* '<S197>/Rate Transition' */
  real_T RateTransition_an;            /* '<S181>/Rate Transition' */
  real_T RateTransition_is;            /* '<S170>/Rate Transition' */
  real_T RateTransition_nk;            /* '<S279>/Rate Transition' */
  real_T RateTransition_mpf;           /* '<S280>/Rate Transition' */
  real_T RateTransition_ko;            /* '<S281>/Rate Transition' */
  real_T RateTransition_k0;            /* '<S268>/Rate Transition' */
  real_T RateTransition_db;            /* '<S269>/Rate Transition' */
  real_T RateTransition_p0;            /* '<S270>/Rate Transition' */
  real_T RateTransition_g2;            /* '<S271>/Rate Transition' */
  real_T RateTransition_ek;            /* '<S272>/Rate Transition' */
  real_T RateTransition_gi;            /* '<S282>/Rate Transition' */
  real_T RateTransition_nz;            /* '<S283>/Rate Transition' */
  real_T RateTransition_kl;            /* '<S285>/Rate Transition' */
  real_T RateTransition_jz;            /* '<S284>/Rate Transition' */
  real_T RateTransition_ap;            /* '<S314>/Rate Transition' */
  real_T RateTransition_gb;            /* '<S266>/Rate Transition' */
  real_T RateTransition_ko0;           /* '<S267>/Rate Transition' */
  real_T RateTransition_lw;            /* '<S10>/Rate Transition' */
  real_T RateTransition1_e;            /* '<S10>/Rate Transition1' */
  real_T RateTransition_dwi;           /* '<S221>/Rate Transition' */
  real_T RateTransition_ec;            /* '<S222>/Rate Transition' */
  real_T RateTransition_lo;            /* '<S223>/Rate Transition' */
  real_T RateTransition_dbs;           /* '<S224>/Rate Transition' */
  real_T RateTransition_j2;            /* '<S225>/Rate Transition' */
  real_T RateTransition_l2;            /* '<S226>/Rate Transition' */
  real32_T ByteUnpack[27];             /* '<S4>/Byte Unpack' */
  real32_T Delay[12];                  /* '<S10>/Delay' */
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t28;
  real_T t29;
  real_T t30;
  real_T t31;
  real_T t32;
  real_T t33;
  real_T t34;
  real_T t35;
  real_T t36;
  real_T t37;
  real_T t38;
  real_T t39;
  real_T t40;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t44;
  real_T t45;
  real_T t46;
  real_T t47;
  real_T t48;
  real_T t49;
  real_T t50;
  real_T t54;
  real_T t57;
  real_T t58;
  real_T t66;
  real_T t67;
  real_T t68;
  real_T t70;
  real_T t71;
  real_T t72;
  real_T t73;
  real_T t76;
  real_T t77;
  real_T t80;
  real_T t81;
  real_T t86;
  real_T t91;
  real_T t92;
  real_T t93;
  real_T t94;
  real_T t95;
  real_T t96;
  real_T t97;
  real_T t98;
  real_T t99;
  real_T t100;
  real_T t101;
  real_T t102;
  real_T t103;
  real_T t104;
  real_T t105;
  real_T t109;
  real_T t110;
  real_T t111;
  real_T t112;
  real_T t113;
  real_T t114;
  real_T t115;
  real_T t116;
  real_T t117;
  real_T t121;
  real_T t122;
  real_T t123;
  real_T t90;
  real_T t106;
  real_T t107;
  real_T t108;
  real_T t240;
  real_T t241;
  real_T t242;
  real_T t243;
  real_T t244;
  real_T t245;
  real_T t246;
  real_T t247;
  real_T t248;
  real_T t249;
  real_T t250;
  real_T t251;
  real_T t252;
  real_T t253;
  real_T t254;
  real_T t255;
  real_T t256;
  real_T t257;
  real_T t258;
  real_T t259;
  real_T t260;
  real_T t261;
  real_T t262;
  real_T t263;
  real_T t264;
  real_T t265;
  real_T t266;
  real_T t267;
  real_T t268;
  real_T t269;
  real_T t270;
  real_T t271;
  real_T t272;
  real_T t273;
  real_T t274;
  real_T t275;
  real_T t276;
  real_T t277;
  real_T t278;
  real_T t279;
  real_T Switch;                       /* '<S266>/Switch' */
  real_T ManualSwitch2;                /* '<S229>/Manual Switch2' */
  real_T rtb_K_idx_0;
  real_T rtb_K_idx_1;
  real_T rtb_K_idx_2;
  real_T t20_tmp;
  real_T t23_tmp;
  real_T t26_tmp;
  real_T t41_tmp;
  real_T t42_tmp;
  real_T t47_tmp;
  real_T t50_tmp;
  real_T t50_tmp_b;
  real_T t50_tmp_p;
  real_T t42_tmp_tmp;
  real_T t50_tmp_c;
  real_T t50_tmp_f;
  real_T t50_tmp_g;
  real_T t50_tmp_g1;
  real_T t50_tmp_m;
  real_T t50_tmp_n;
  real_T t50_tmp_pp;
  real_T t50_tmp_l;
  real_T t50_tmp_j;
  real_T t50_tmp_d;
  real_T t50_tmp_gu;
  real_T t50_tmp_ld;
  real_T t50_tmp_dh;
  real_T t50_tmp_dy;
  real_T t50_tmp_lx;
  real_T t50_tmp_o;
  real_T t50_tmp_bj;
  real_T t50_tmp_nu;
  real_T t50_tmp_bs;
  real_T t50_tmp_ln;
  real_T t50_tmp_tmp;
  real_T t50_tmp_h;
  real_T t50_tmp_bn;
  real_T t50_tmp_da;
  real_T t50_tmp_e;
  real_T t50_tmp_bjv;
  real_T t50_tmp_jz;
  real_T t50_tmp_fd;
  real_T t50_tmp_a;
  real_T t50_tmp_ju;
  real_T t50_tmp_jz5;
  real_T t50_tmp_o4;
  real_T t50_tmp_ny;
  real_T t50_tmp_i;
  real_T t50_tmp_tmp_o;
  real_T t50_tmp_tmp_n;
  real_T tmp_tmp;
  real_T tmp_tmp_m;
  real_T tmp_tmp_c;
  real_T tmp_tmp_md;
  real_T tmp_tmp_m3;
  real_T tmp_tmp_j;
  real_T tmp_tmp_h;
  real_T tmp_tmp_c0;
  real_T tmp_tmp_ct;
  real_T tmp_tmp_p;
  real_T tmp_tmp_p5;
  real_T tmp_tmp_a;
  real_T tmp_tmp_e;
  real_T tmp_tmp_ax;
  real_T tmp_tmp_as;
  real_T tmp_tmp_i;
  real_T tmp_tmp_l;
  real_T tmp_tmp_o;
  real_T tmp_tmp_o2;
  real_T tmp_tmp_ip;
  real_T tmp_tmp_f;
  real_T tmp_tmp_iz;
  real_T tmp_tmp_ff;
  real_T tmp_tmp_g;
  real_T tmp_tmp_co;
  real_T tmp_tmp_o3;
  real_T tmp_tmp_lm;
  real_T tmp_tmp_mv;
  real_T tmp_tmp_mj;
  real_T tmp_tmp_cn;
  real_T t7_tmp;
  real_T t3_tmp;
  real_T GetParameter3_o1_lq;          /* '<S226>/Get Parameter3' */
  real_T GetParameter3_o1_ec;          /* '<S225>/Get Parameter3' */
  real_T GetParameter3_o1_c;           /* '<S224>/Get Parameter3' */
  real_T GetParameter3_o1_k;           /* '<S223>/Get Parameter3' */
  real_T GetParameter3_o1_pn;          /* '<S222>/Get Parameter3' */
  real_T GetParameter3_o1_g;           /* '<S221>/Get Parameter3' */
  real_T GetParameter3_o1_h;           /* '<S10>/Get Parameter3' */
  real_T GetParameter1_o1_e;           /* '<S10>/Get Parameter1' */
  real_T GetParameter3_o1_kf;          /* '<S24>/Get Parameter3' */
  real_T GetParameter1_o1_p;           /* '<S4>/Get Parameter1' */
  real_T GetParameter6_o1;             /* '<S230>/Get Parameter6' */
  real_T GetParameter5_o1;             /* '<S230>/Get Parameter5' */
  real_T GetParameter4_o1;             /* '<S230>/Get Parameter4' */
  real_T GetParameter1_o1;             /* '<S230>/Get Parameter1' */
  real_T GetParameter3_o1_e;           /* '<S230>/Get Parameter3' */
  real_T GetParameter2_o1;             /* '<S230>/Get Parameter2' */
  real_T GetParameter_o1;              /* '<S230>/Get Parameter' */
  real_T GetParameter3_o1_a;           /* '<S272>/Get Parameter3' */
  real_T GetParameter3_o1_l;           /* '<S271>/Get Parameter3' */
  real_T GetParameter3_o1_ag;          /* '<S270>/Get Parameter3' */
  real_T GetParameter3_o1_l3;          /* '<S269>/Get Parameter3' */
  real_T GetParameter3_o1_i;           /* '<S268>/Get Parameter3' */
  real_T GetParameter3_o1_j;           /* '<S267>/Get Parameter3' */
  real_T GetParameter3;                /* '<S266>/Get Parameter3' */
  real_T GetParameter3_o1_p;           /* '<S314>/Get Parameter3' */
  real_T GetParameter3_n;              /* '<S181>/Get Parameter3' */
  real_T GetParameter3_o;              /* '<S180>/Get Parameter3' */
  real_T GetParameter3_i;              /* '<S179>/Get Parameter3' */
  real_T GetParameter3_o1_o;           /* '<S176>/Get Parameter3' */
  real_T GetParameter3_j;              /* '<S212>/Get Parameter3' */
  real_T GetParameter3_e;              /* '<S211>/Get Parameter3' */
  real_T GetParameter3_j1;             /* '<S210>/Get Parameter3' */
  real_T GetParameter3_a;              /* '<S209>/Get Parameter3' */
  real_T GetParameter3_p;              /* '<S208>/Get Parameter3' */
  real_T GetParameter3_k;              /* '<S207>/Get Parameter3' */
  real_T GetParameter3_o1_kn;          /* '<S206>/Get Parameter3' */
  real_T GetParameter3_o1_o1;          /* '<S197>/Get Parameter3' */
  real_T GetParameter3_o1_el;          /* '<S199>/Get Parameter3' */
  real_T GetParameter3_o1_ix;          /* '<S198>/Get Parameter3' */
  real_T GetParameter3_o1_d;           /* '<S184>/Get Parameter3' */
  real_T GetParameter3_ku;             /* '<S171>/Get Parameter3' */
  real_T GetParameter3_k5;             /* '<S170>/Get Parameter3' */
  real_T GetParameter3_c;              /* '<S169>/Get Parameter3' */
  real_T GetParameter3_n4;             /* '<S136>/Get Parameter3' */
  real_T GetParameter3_l;              /* '<S135>/Get Parameter3' */
  real_T GetParameter3_kq;             /* '<S134>/Get Parameter3' */
  real_T GetParameter3_o1_jy;          /* '<S131>/Get Parameter3' */
  real_T GetParameter3_nf;             /* '<S167>/Get Parameter3' */
  real_T GetParameter3_ax;             /* '<S166>/Get Parameter3' */
  real_T GetParameter3_b;              /* '<S165>/Get Parameter3' */
  real_T GetParameter3_pl;             /* '<S164>/Get Parameter3' */
  real_T GetParameter3_bz;             /* '<S163>/Get Parameter3' */
  real_T GetParameter3_pe;             /* '<S162>/Get Parameter3' */
  real_T GetParameter3_o1_m;           /* '<S161>/Get Parameter3' */
  real_T GetParameter3_o1_e3;          /* '<S152>/Get Parameter3' */
  real_T GetParameter3_o1_af;          /* '<S154>/Get Parameter3' */
  real_T GetParameter3_o1_pq;          /* '<S153>/Get Parameter3' */
  real_T GetParameter3_o1_cl;          /* '<S139>/Get Parameter3' */
  real_T GetParameter3_b5;             /* '<S126>/Get Parameter3' */
  real_T GetParameter3_lo;             /* '<S125>/Get Parameter3' */
  real_T GetParameter3_p5;             /* '<S124>/Get Parameter3' */
  real_T GetParameter3_n4e;            /* '<S89>/Get Parameter3' */
  real_T GetParameter3_es;             /* '<S88>/Get Parameter3' */
  real_T GetParameter3_cq;             /* '<S87>/Get Parameter3' */
  real_T GetParameter3_o1_n;           /* '<S84>/Get Parameter3' */
  real_T GetParameter3_le;             /* '<S122>/Get Parameter3' */
  real_T GetParameter3_bp;             /* '<S121>/Get Parameter3' */
  real_T GetParameter3_m;              /* '<S120>/Get Parameter3' */
  real_T GetParameter3_mw;             /* '<S119>/Get Parameter3' */
  real_T GetParameter3_ey;             /* '<S118>/Get Parameter3' */
  real_T GetParameter3_ly;             /* '<S117>/Get Parameter3' */
  real_T GetParameter3_o1_du;          /* '<S116>/Get Parameter3' */
  real_T GetParameter3_o1_hh;          /* '<S107>/Get Parameter3' */
  real_T GetParameter3_o1_eh;          /* '<S109>/Get Parameter3' */
  real_T GetParameter3_o1_pm;          /* '<S108>/Get Parameter3' */
  real_T GetParameter3_o1_kd;          /* '<S92>/Get Parameter3' */
  real_T GetParameter3_mf;             /* '<S79>/Get Parameter3' */
  real_T GetParameter3_cc;             /* '<S78>/Get Parameter3' */
  real_T GetParameter3_a3;             /* '<S41>/Get Parameter3' */
  real_T GetParameter3_pi;             /* '<S77>/Get Parameter3' */
  real_T GetParameter3_nx;             /* '<S76>/Get Parameter3' */
  real_T GetParameter3_o1_oa;          /* '<S39>/Get Parameter3' */
  real_T GetParameter3_mq;             /* '<S72>/Get Parameter3' */
  real_T GetParameter3_az;             /* '<S71>/Get Parameter3' */
  real_T GetParameter3_pn;             /* '<S70>/Get Parameter3' */
  real_T GetParameter3_d;              /* '<S69>/Get Parameter3' */
  real_T GetParameter3_kk;             /* '<S68>/Get Parameter3' */
  real_T GetParameter3_f;              /* '<S67>/Get Parameter3' */
  real_T xr;
  real_T xi;
  real_T b_t;
  real_T xr_f;
  real_T absxr;
  real32_T q_dif[2];
  real32_T DataTypeConversion2_mj[2];  /* '<S233>/Data Type Conversion2' */
  real32_T z_sol_l[2];                 /* '<S231>/Find K position' */
  real32_T TmpSignalConversionAtSFun_c[2];/* '<S36>/Jacobian Optim ' */
  real32_T t8_p[2];
  creal32_T t476;
  creal32_T t756;
  creal32_T v;
  creal32_T u;
  creal32_T t;
  creal32_T v_e;
  real32_T LKH;
  real32_T LDF;
  real32_T LBD;
  real32_T LKN;
  real32_T qKN;
  real32_T LA1N;
  real32_T LA2K;
  real32_T LA1K;
  real32_T xH;
  real32_T yH;
  real32_T xC;
  real32_T xD;
  real32_T yD;
  real32_T yI;
  real32_T LLI;
  real32_T temp;
  real32_T LDG;
  real32_T xD1;
  real32_T t3;
  real32_T t4_o;
  real32_T t7;
  real32_T t8_h;
  real32_T t9_l;
  real32_T t25_h;
  real32_T t26_m;
  real32_T t27_m;
  real32_T t28_h;
  real32_T t29_c;
  real32_T t30_k;
  real32_T t31_p;
  real32_T t32_p;
  real32_T t33_p;
  real32_T t34_a;
  real32_T t10_j;
  real32_T t11_e;
  real32_T t12_o;
  real32_T t13_b;
  real32_T t14_a;
  real32_T t15_g;
  real32_T t16_e;
  real32_T t17_f;
  real32_T t18_h;
  real32_T t19_e;
  real32_T t20_c;
  real32_T t24_a;
  real32_T t1212;
  real32_T t1226;
  real32_T t1248;
  real32_T t1250;
  real32_T t1251;
  real32_T t1252;
  real32_T t1253;
  real32_T t1254;
  real32_T t1255;
  real32_T t1261;
  real32_T t1309;
  real32_T t1312;
  real32_T t1313;
  real32_T t1328;
  real32_T t739;
  real32_T t749;
  real32_T t750;
  real32_T t752;
  real32_T t754;
  real32_T t755;
  real32_T t774;
  real32_T t775;
  real32_T t776;
  real32_T t777;
  real32_T t778;
  real32_T t779;
  real32_T t780;
  real32_T t781;
  real32_T t782;
  real32_T t785;
  real32_T t790;
  real32_T t794;
  real32_T t796;
  real32_T t797;
  real32_T t802;
  real32_T t803;
  real32_T t804;
  real32_T t808;
  real32_T t810;
  real32_T t812;
  real32_T t813;
  real32_T t814;
  real32_T t815;
  real32_T t817;
  real32_T t818;
  real32_T t819;
  real32_T t820;
  real32_T t821;
  real32_T t822;
  real32_T t823;
  real32_T t824;
  real32_T t825;
  real32_T Saturation2_e;              /* '<S173>/Saturation2' */
  real32_T Saturation3_o;              /* '<S128>/Saturation3' */
  real32_T Saturation2_k;              /* '<S128>/Saturation2' */
  real32_T DataTypeConversion5_n;      /* '<S10>/Data Type Conversion5' */
  real32_T Sum_a;                      /* '<S240>/Sum' */
  real32_T Product_k;                  /* '<S211>/Product' */
  real32_T Sum1_h;                     /* '<S240>/Sum1' */
  real32_T Saturation2;                /* '<S37>/Saturation2' */
  real32_T Saturation3;                /* '<S37>/Saturation3' */
  real32_T Saturation4_f;              /* '<S175>/Saturation4' */
  real32_T Sum_nf;                     /* '<S3>/Sum' */
  real32_T Product_f;                  /* '<S179>/Product' */
  real32_T Switch_n;                   /* '<S41>/Switch' */
  real32_T Filt8;                      /* '<S216>/Filt 8' */
  real32_T Filt1;                      /* '<S216>/Filt 1' */
  real32_T Filt2;                      /* '<S216>/Filt 2' */
  real32_T Filt3;                      /* '<S216>/Filt 3' */
  real32_T Filt4;                      /* '<S216>/Filt 4' */
  real32_T Filt5;                      /* '<S216>/Filt 5' */
  real32_T Filt6;                      /* '<S216>/Filt 6' */
  real32_T TSamp_cm;                   /* '<S204>/TSamp' */
  real32_T TSamp_g;                    /* '<S202>/TSamp' */
  real32_T TSamp_cb;                   /* '<S201>/TSamp' */
  real32_T rtb_TmpSignalConversionAtSFu_da;
  real32_T rtb_TmpSignalConversionAtSFun_a;
  real32_T rtb_ComplextoRealImag_j_idx_0;
  real32_T rtb_ComplextoRealImag_j_idx_1;
  real32_T rtb_ComplextoRealImag_j_idx_2;
  real32_T JTcomp_idx_3;
  real32_T t757_re;
  real32_T t758_re;
  real32_T t759_re;
  real32_T t760_re;
  real32_T t761_re;
  real32_T t762_re;
  real32_T t763_re;
  real32_T t764_re;
  real32_T t765_re;
  real32_T t766_re;
  real32_T t767_re;
  real32_T t768_re;
  real32_T t769_re;
  real32_T t770_re;
  real32_T t771_re;
  real32_T t772_re;
  real32_T t773_re;
  real32_T t826_re;
  real32_T t827_re;
  real32_T t828_re;
  real32_T t829_re;
  real32_T t830_re;
  real32_T t831_re;
  real32_T t832_re;
  real32_T t833_re;
  real32_T t834_re;
  real32_T t835_re;
  real32_T t836_re;
  real32_T t837_re;
  real32_T t838_re;
  real32_T t839_re;
  real32_T t840_re;
  real32_T t841_re;
  real32_T t842_re;
  real32_T t843_re;
  real32_T t987_re;
  real32_T rtb_xH_sol_idx_0_re;
  real32_T rtb_xH_sol_idx_1_re;
  real32_T rtb_zH_sol_idx_0_re;
  real32_T rtb_zH_sol_idx_1_re;
  real32_T rtb_DataTypeConversion5_n_tmp;
  real32_T rtb_DataTypeConversion5_n_tmp_p;
  real32_T rtb_DataTypeConversion5_n_tmp_m;
  real32_T rtb_DataTypeConversion5_n_tmp_o;
  real32_T rtb_DataTypeConversion5_n_tmp_n;
  real32_T rtb_DataTypeConversion5_n_tmp_l;
  real32_T rtb_DataTypeConversion5_n_tm_pe;
  real32_T LDF_tmp;
  real32_T xD1_tmp;
  real32_T xD1_tmp_p;
  real32_T xD1_tmp_f;
  real32_T xD1_tmp_i;
  real32_T xD1_tmp_o;
  real32_T xD1_tmp_tmp;
  real32_T xD1_tmp_tmp_k;
  real32_T xD1_tmp_tmp_i;
  real32_T xD1_tmp_tmp_o;
  real32_T xD1_tmp_tmp_m;
  real32_T xD1_tmp_tmp_c;
  real32_T JTcomp_idx_3_tmp;
  real32_T JTcomp_idx_3_tmp_f;
  real32_T JTcomp_idx_3_tmp_h;
  real32_T JTcomp_idx_3_tmp_m;
  real32_T JTcomp_idx_3_tmp_a;
  real32_T JTcomp_idx_3_tmp_tmp;
  real32_T JTcomp_idx_3_tmp_k;
  real32_T JTcomp_idx_3_tmp_p;
  real32_T xD1_tmp_tmp_tmp_tmp;
  real32_T xD1_tmp_tmp_tmp_tmp_b;
  real32_T JTcomp_idx_3_tmp_tmp_tmp;
  real32_T JTcomp_idx_3_tmp_c;
  real32_T JTcomp_idx_3_tmp_n;
  real32_T JTcomp_idx_3_tmp_i;
  real32_T JTcomp_idx_3_tmp_my;
  real32_T JTcomp_idx_3_tmp_j;
  real32_T JTcomp_idx_3_tmp_tmp_e;
  real32_T rtb_DataTypeConversion5_n_tmp_t;
  real32_T rtb_DataTypeConversion5_n_tm_m0;
  real32_T rtb_DataTypeConversion5_n_tmp_j;
  real32_T rtb_DataTypeConversion5_n_tmp_f;
  real32_T JTcomp_idx_3_tmp_tmp_tmp_a;
  real32_T rtb_DataTypeConversion5_n_tmp_g;
  real32_T t9_tmp;
  real32_T t9_tmp_n;
  real32_T t9_tmp_d;
  real32_T t33_tmp;
  real32_T t34_tmp;
  real32_T tmp_tmp_n;
  real32_T tmp_tmp_cg;
  real32_T tmp_tmp_tmp;
  real32_T tmp_tmp_fx;
  real32_T tmp_tmp_pm;
  real32_T tmp_tmp_tmp_p;
  real32_T tmp_tmp_nj;
  real32_T tmp_tmp_k;
  real32_T tmp_tmp_n3;
  real32_T tmp_tmp_oy;
  real32_T tmp_tmp_gg;
  real32_T tmp_tmp_cq;
  real32_T tmp_tmp_tmp_c;
  real32_T tmp_tmp_m1;
  real32_T tmp_tmp_jp;
  real32_T tmp_tmp_kn;
  real32_T tmp_tmp_mx;
  real32_T tmp_tmp_pr;
  real32_T tmp_tmp_d;
  real32_T tmp_tmp_g4;
  real32_T tmp_tmp_c3;
  real32_T tmp_tmp_cx;
  real32_T tmp_tmp_if;
  real32_T tmp_tmp_dx;
  real32_T tmp_tmp_g4k;
  real32_T tmp_tmp_lg;
  real32_T tmp_tmp_f1;
  real32_T tmp_tmp_db;
  real32_T tmp_tmp_jr;
  real32_T tmp_tmp_i3;
  real32_T tmp_tmp_h2;
  real32_T tmp_tmp_nm;
  real32_T tmp_tmp_o30;
  real32_T tmp_tmp_ch;
  real32_T tmp_tmp_b;
  real32_T tmp_tmp_er;
  real32_T tmp_tmp_dd;
  real32_T tmp_tmp_ik;
  real32_T tmp_tmp_gs;
  real32_T tmp_tmp_nn;
  real32_T tmp_tmp_l0;
  real32_T tmp_tmp_ce;
  real32_T tmp_tmp_nc;
  real32_T tmp_tmp_ph;
  real32_T tmp_tmp_dk;
  real32_T tmp_tmp_oi;
  real32_T tmp_tmp_jrs;
  real32_T tmp_tmp_c2;
  real32_T tmp_tmp_hp;
  real32_T tmp_tmp_da;
  real32_T tmp_tmp_c5;
  real32_T tmp_tmp_pw;
  real32_T tmp_tmp_pi;
  real32_T tmp_tmp_a4;
  real32_T tmp_tmp_ow;
  real32_T tmp_tmp_jw;
  real32_T tmp_tmp_pie;
  real32_T tmp_tmp_ob;
  real32_T tmp_tmp_lm5;
  real32_T tmp_tmp_kv;
  real32_T tmp_tmp_jk;
  real32_T tmp_tmp_fz;
  real32_T tmp_tmp_cm;
  real32_T tmp_tmp_fq;
  real32_T tmp_tmp_nl;
  real32_T tmp_tmp_iu;
  real32_T tmp_tmp_l4;
  real32_T tmp_tmp_i3r;
  real32_T tmp_tmp_k1;
  real32_T tmp_tmp_fc;
  real32_T tmp_tmp_al;
  real32_T tmp_tmp_d4;
  real32_T tmp_tmp_ey;
  real32_T tmp_tmp_eh;
  real32_T tmp_tmp_bs;
  real32_T tmp_tmp_a0;
  real32_T tmp_tmp_il;
  real32_T tmp_tmp_fa;
  real32_T tmp_tmp_ji;
  real32_T tmp_tmp_oo;
  real32_T tmp_tmp_fr;
  real32_T tmp_tmp_oyy;
  real32_T tmp_tmp_ln;
  real32_T tmp_tmp_lu;
  real32_T tmp_tmp_gf;
  real32_T tmp_tmp_d42;
  real32_T tmp_tmp_dv;
  real32_T tmp_tmp_jo;
  real32_T tmp_tmp_f1s;
  real32_T tmp_tmp_js;
  real32_T tmp_tmp_ho;
  real32_T tmp_tmp_cf;
  real32_T tmp_tmp_nu;
  real32_T tmp_tmp_ki;
  real32_T tmp_tmp_av;
  real32_T tmp_tmp_fn;
  real32_T tmp_tmp_jz;
  real32_T tmp_tmp_kl;
  real32_T tmp_tmp_bn;
  real32_T tmp_tmp_hm;
  real32_T tmp_tmp_eg;
  real32_T tmp_tmp_hn;
  real32_T tmp_tmp_ku;
  real32_T tmp_tmp_jw4;
  real32_T tmp_tmp_ooe;
  real32_T tmp_tmp_cs;
  real32_T tmp_tmp_hw;
  real32_T tmp_tmp_iy;
  real32_T tmp_tmp_pl;
  real32_T tmp_tmp_f0;
  real32_T tmp_tmp_ew;
  real32_T tmp_tmp_nh;
  real32_T tmp_tmp_ho4;
  real32_T tmp_tmp_hpt;
  real32_T tmp_tmp_fnt;
  real32_T tmp_tmp_iv;
  real32_T tmp_tmp_f4;
  real32_T tmp_tmp_cy;
  real32_T tmp_tmp_nnx;
  real32_T tmp_tmp_he;
  real32_T tmp_tmp_kq;
  real32_T tmp_tmp_hz;
  real32_T tmp_tmp_be;
  real32_T tmp_tmp_os;
  real32_T tmp_tmp_nq;
  real32_T tmp_tmp_mi;
  real32_T tmp_tmp_kuk;
  real32_T tmp_tmp_jkf;
  real32_T tmp_tmp_hc;
  real32_T tmp_tmp_f2;
  real32_T tmp_tmp_dy;
  real32_T tmp_tmp_li;
  real32_T tmp_tmp_kg;
  real32_T tmp_tmp_ic;
  real32_T tmp_tmp_h5;
  real32_T tmp_tmp_mg;
  real32_T tmp_tmp_gm;
  real32_T tmp_tmp_lf;
  real32_T tmp_tmp_m4;
  real32_T tmp_tmp_nt;
  real32_T tmp_tmp_gv;
  real32_T tmp_tmp_dj;
  real32_T tmp_tmp_mq;
  real32_T tmp_tmp_ft;
  real32_T tmp_tmp_gd;
  real32_T tmp_tmp_jc;
  real32_T tmp_tmp_cqr;
  real32_T tmp_tmp_egf;
  real32_T tmp_tmp_mxd;
  real32_T tmp_tmp_of;
  real32_T tmp_tmp_ai;
  real32_T tmp_tmp_ji5;
  real32_T tmp_tmp_ga;
  real32_T tmp_tmp_jkm;
  real32_T tmp_tmp_ee;
  real32_T tmp_tmp_jy;
  real32_T tmp_tmp_jb;
  real32_T tmp_tmp_gi;
  real32_T tmp_tmp_om;
  real32_T tmp_tmp_hm4;
  real32_T tmp_tmp_c2b;
  real32_T tmp_tmp_a0g;
  real32_T tmp_tmp_lua;
  real32_T tmp_tmp_jcs;
  real32_T tmp_tmp_ib;
  real32_T tmp_tmp_mid;
  real32_T tmp_tmp_ftf;
  real32_T tmp_tmp_on;
  real32_T tmp_tmp_iz5;
  real32_T tmp_tmp_e0;
  real32_T tmp_tmp_j0;
  real32_T tmp_tmp_o4;
  real32_T tmp_tmp_frj;
  real32_T tmp_tmp_m3r;
  real32_T tmp_tmp_axm;
  real32_T tmp_tmp_hi;
  real32_T tmp_tmp_oc;
  real32_T tmp_tmp_hnt;
  real32_T tmp_tmp_tmp_j;
  real32_T tmp_tmp_g3;
  real32_T tmp_tmp_jzu;
  real32_T tmp_tmp_lgb;
  real32_T tmp_tmp_kb;
  real32_T tmp_tmp_dr;
  real32_T tmp_tmp_np;
  real32_T tmp_tmp_tmp_j5;
  real32_T tmp_tmp_tmp_a;
  real32_T tmp_tmp_hzv;
  real32_T tmp_tmp_iq;
  real32_T tmp_tmp_dn;
  real32_T tmp_tmp_bf;
  real32_T tmp_tmp_hj;
  real32_T tmp_tmp_pn;
  real32_T tmp_tmp_nk;
  real32_T tmp_tmp_jza;
  real32_T tmp_tmp_ot;
  real32_T tmp_tmp_bj;
  real32_T tmp_tmp_tmp_jk;
  real32_T tmp_tmp_tmp_e;
  real32_T tmp_tmp_i4;
  real32_T tmp_tmp_ng;
  real32_T tmp_tmp_ie;
  real32_T tmp_tmp_p3;
  real32_T tmp_tmp_og;
  real32_T tmp_tmp_mz;
  real32_T tmp_tmp_otc;
  real32_T tmp_tmp_gz;
  real32_T tmp_tmp_ez;
  real32_T tmp_tmp_izd;
  real32_T tmp_tmp_gb;
  real32_T tmp_tmp_ge;
  real32_T tmp_tmp_gbr;
  real32_T tmp_tmp_gr;
  real32_T tmp_tmp_ca;
  real32_T tmp_tmp_kt;
  real32_T tmp_tmp_ds;
  real32_T tmp_tmp_tmp_k;
  real32_T tmp_tmp_pd;
  real32_T tmp_tmp_tmp_p5;
  real32_T tmp_tmp_m4e;
  real32_T tmp_tmp_ktf;
  real32_T tmp_tmp_a0x;
  real32_T tmp_tmp_fto;
  real32_T tmp_tmp_ci;
  real32_T tmp_tmp_jkx;
  real32_T tmp_tmp_kbp;
  real32_T tmp_tmp_hj5;
  real32_T tmp_tmp_d1;
  real32_T tmp_tmp_j1;
  real32_T tmp_tmp_np5;
  real32_T tmp_tmp_j0o;
  real32_T tmp_tmp_lc;
  real32_T tmp_tmp_phi;
  real32_T tmp_tmp_po;
  real32_T tmp_tmp_ly;
  real32_T tmp_tmp_ld;
  real32_T tmp_tmp_hb;
  real32_T tmp_tmp_cg4;
  real32_T tmp_tmp_g0;
  real32_T tmp_tmp_el;
  real32_T tmp_tmp_n3e;
  real32_T tmp_tmp_fni;
  real32_T tmp_tmp_nl2;
  real32_T tmp_tmp_e2;
  real32_T tmp_tmp_by;
  real32_T tmp_tmp_avh;
  real32_T tmp_tmp_i2;
  real32_T tmp_tmp_nqp;
  real32_T tmp_tmp_fxv;
  real32_T tmp_tmp_i4x;
  real32_T tmp_tmp_k3;
  real32_T tmp_tmp_b0;
  real32_T tmp_tmp_dat;
  real32_T tmp_tmp_hs;
  real32_T tmp_tmp_nlw;
  real32_T tmp_tmp_fj;
  real32_T tmp_tmp_ay;
  real32_T tmp_tmp_mu;
  real32_T tmp_tmp_gu;
  real32_T tmp_tmp_nh4;
  real32_T tmp_tmp_chk;
  real32_T tmp_tmp_d4f;
  real32_T tmp_tmp_ky;
  real32_T tmp_tmp_cl;
  real32_T tmp_tmp_tmp_jd;
  real32_T tmp_tmp_tmp_m;
  real32_T tmp_tmp_iee;
  real32_T tmp_tmp_bjy;
  real32_T tmp_tmp_oq;
  real32_T tmp_tmp_gsm;
  real32_T tmp_tmp_ed;
  real32_T tmp_tmp_in;
  real32_T tmp_tmp_tmp_eb;
  real32_T tmp_tmp_is;
  real32_T tmp_tmp_m5;
  real32_T tmp_tmp_dl;
  real32_T tmp_tmp_j4;
  real32_T tmp_tmp_pe;
  real32_T tmp_tmp_b4;
  real32_T tmp_tmp_pn1;
  real32_T tmp_tmp_nmz;
  real32_T tmp_tmp_ceo;
  real32_T tmp_tmp_nhy;
  real32_T tmp_tmp_daj;
  real32_T tmp_tmp_ih;
  real32_T tmp_tmp_no;
  real32_T tmp_tmp_bi;
  real32_T tmp_tmp_bt;
  real32_T tmp_tmp_jkh;
  real32_T tmp_tmp_n0;
  real32_T tmp_tmp_fa5;
  real32_T tmp_tmp_eu;
  real32_T tmp_tmp_inq;
  real32_T tmp_tmp_a0m;
  real32_T tmp_tmp_fd;
  real32_T tmp_tmp_ko;
  real32_T tmp_tmp_cg1;
  real32_T tmp_tmp_j11;
  real32_T tmp_tmp_ldg;
  real32_T tmp_tmp_aiu;
  real32_T tmp_tmp_iyd;
  real32_T tmp_tmp_ok;
  real32_T tmp_tmp_b4z;
  real32_T tmp_tmp_an;
  real32_T tmp_tmp_aq;
  real32_T tmp_tmp_i0;
  real32_T tmp_tmp_izy;
  real32_T tmp_tmp_lgo;
  real32_T tmp_tmp_tmp_o;
  real32_T tmp_tmp_tmp_py;
  real32_T tmp_tmp_tmp_om;
  real32_T tmp_tmp_tmp_cm;
  real32_T tmp_tmp_tmp_oc;
  real32_T tmp_tmp_tmp_ol;
  real32_T tmp_tmp_tmp_h;
  real32_T tmp_tmp_tmp_i;
  real32_T tmp_tmp_tmp_tmp;
  real32_T tmp_tmp_tmp_tmp_g;
  real32_T tmp_tmp_tmp_c1;
  real32_T tmp_tmp_tmp_ok;
  real32_T tmp_tmp_tmp_g;
  real32_T tmp_tmp_tmp_o2;
  real32_T t26_tmp_g;
  real32_T t1256_tmp;
  real32_T tmp_tmp_tmp_tmp_a;
  real32_T tmp_tmp_tmp_tmp_gy;
  real32_T tmp_tmp_tmp_b;
  real32_T tmp_tmp_tmp_kn;
  real32_T tmp_tmp_tmp_ca;
  real32_T tmp_tmp_tmp_ji;
  real32_T tmp_tmp_tmp_al;
  real32_T tmp_tmp_tmp_d;
  real32_T t10_tmp;
  real32_T b_ci;
  real32_T t4_c;
  real32_T sar;
  real32_T sai;
  real32_T scaleA;
  real32_T sbr;
  real32_T sbi;
  real32_T scaleB;
  real32_T b_ci_tmp;
  real32_T xr_d;
  real32_T absxr_a;
  real32_T a;
  real32_T b_ci_b;
  real32_T sai_g;
  real32_T xr_fb;
  real32_T absxr_c;
  real32_T xr_p;
  real32_T absxr_at;
  real32_T xr_n;
  real32_T absxr_h;
  real32_T xr_m;
  real32_T absxr_f;
  real32_T absim;
  real32_T absim_b;
  real32_T absim_e;
  int32_T k;
  int32_T ixstart;
  int32_T ix;
  int32_T i;
  int32_T u0;
  int32_T u1;
  int32_T u0_n;
  int32_T u1_p;
  uint32_T u0_i;
  uint16_T ReceivefromHaptics_o2;      /* '<S4>/Receive from Haptics' */
  uint8_T ReceivefromHaptics_o1[108];  /* '<S4>/Receive from Haptics' */
  uint8_T BytePack[48];                /* '<S10>/Byte Pack' */
  boolean_T xneg;
  boolean_T xneg_j;
  B_MATLABFunction4_dx_hand_m_c_T sf_MATLABFunction5_a;/* '<S233>/MATLAB Function5' */
  B_MATLABFunction4_dx_hand_m_c_T sf_MATLABFunction4_o;/* '<S233>/MATLAB Function4' */
  B_MATLABFunction3_dx_hand_mod_T sf_MATLABFunction3_bs;/* '<S233>/MATLAB Function3' */
  B_MATLABFunction1_dx_hand_mod_T sf_MATLABFunction2_f;/* '<S233>/MATLAB Function2' */
  B_MATLABFunction3_dx_hand_mod_T sf_MATLABFunction1_p;/* '<S233>/MATLAB Function1' */
  B_MATLABFunction1_dx_hand_mod_T sf_MATLABFunction2;/* '<S243>/MATLAB Function2' */
  B_MATLABFunction1_dx_hand_mod_T sf_MATLABFunction1_g;/* '<S243>/MATLAB Function1' */
  B_MATLABFunction1_dx_hand_mod_T sf_MATLABFunction_h;/* '<S243>/MATLAB Function' */
  B_MATLABFunction3_dx_hand_mod_T sf_MATLABFunction3_b;/* '<S242>/MATLAB Function3' */
  B_MATLABFunction1_dx_hand_mod_T sf_MATLABFunction2_g;/* '<S242>/MATLAB Function2' */
  B_MATLABFunction1_dx_hand_mod_T sf_MATLABFunction1_h;/* '<S242>/MATLAB Function1' */
  B_IsNan_dx_hand_model_T sf_IsNan_l;  /* '<S176>/IsNan ' */
  B_Optimized_Static_Problem_l_T sf_Optimized_Static_Problem_p;/* '<S175>/Optimized_Static_Problem' */
  B_Classic_Static_Problem_dx_h_T sf_Classic_Static_Problem_b;/* '<S175>/Classic_Static_Problem' */
  B_Optimized_Static_Problem_dx_T sf_Optimized_Static_Problem_ba;/* '<S174>/Optimized_Static_Problem' */
  B_Classic_Static_Problem_dx_k_T sf_Classic_Static_Problem_n;/* '<S174>/Classic_Static_Problem' */
  B_MiddleDirectKinematics_dx_h_T sf_RingDirectKinematics;/* '<S173>/Ring Direct Kinematics' */
  B_MiddleJacobian_dx_hand_mo_j_T sf_RingJacobian;/* '<S172>/Ring Jacobian ' */
  B_MiddleJacobian_dx_hand_mode_T sf_RingJacobian_e;/* '<S172>/Ring Jacobian' */
  B_IsNan_dx_hand_model_T sf_IsNan_i;  /* '<S131>/IsNan ' */
  B_Optimized_Static_Problem_l_T sf_Optimized_Static_Problem_c;/* '<S130>/Optimized_Static_Problem' */
  B_Classic_Static_Problem_dx_h_T sf_Classic_Static_Problem_p;/* '<S130>/Classic_Static_Problem' */
  B_Optimized_Static_Problem_dx_T sf_Optimized_Static_Problem_o;/* '<S129>/Optimized_Static_Problem' */
  B_Classic_Static_Problem_dx_k_T sf_Classic_Static_Problem_m;/* '<S129>/Classic_Static_Problem' */
  B_MiddleDirectKinematics_dx_h_T sf_PinkyDirectKinematics;/* '<S128>/Pinky Direct Kinematics' */
  B_MiddleJacobian_dx_hand_mo_j_T sf_PinkyJacobian;/* '<S127>/Pinky Jacobian ' */
  B_MiddleJacobian_dx_hand_mode_T sf_PinkyJacobian_f;/* '<S127>/Pinky Jacobian' */
  B_IsNan_dx_hand_model_T sf_IsNan_d;  /* '<S84>/IsNan ' */
  B_Optimized_Static_Problem_l_T sf_Optimized_Static_Problem_b;/* '<S83>/Optimized_Static_Problem' */
  B_Classic_Static_Problem_dx_h_T sf_Classic_Static_Problem_a;/* '<S83>/Classic_Static_Problem' */
  B_Optimized_Static_Problem_dx_T sf_Optimized_Static_Problem_d;/* '<S82>/Optimized_Static_Problem' */
  B_Classic_Static_Problem_dx_k_T sf_Classic_Static_Problem_d;/* '<S82>/Classic_Static_Problem' */
  B_MiddleDirectKinematics_dx_h_T sf_MiddleDirectKinematics;/* '<S81>/Middle Direct Kinematics' */
  B_MiddleJacobian_dx_hand_mo_j_T sf_MiddleJacobian;/* '<S80>/Middle Jacobian ' */
  B_MiddleJacobian_dx_hand_mode_T sf_MiddleJacobian_o;/* '<S80>/Middle Jacobian' */
  B_Optimized_Static_Problem_l_T sf_Optimized_Static_Problem;/* '<S38>/Optimized_Static_Problem' */
  B_Classic_Static_Problem_dx_h_T sf_Classic_Static_Problem;/* '<S38>/Classic_Static_Problem' */
  B_Optimized_Static_Problem_dx_T sf_Optimized_Static_Problem_j;/* '<S35>/Optimized_Static_Problem' */
} B_dx_hand_model_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  robotics_slros_internal_blo_k_T obj; /* '<S315>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_l;/* '<S314>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_p;/* '<S230>/Get Parameter' */
  robotics_slros_internal_blo_k_T obj_m;/* '<S230>/Get Parameter2' */
  robotics_slros_internal_blo_k_T obj_o;/* '<S230>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_c;/* '<S230>/Get Parameter1' */
  robotics_slros_internal_blo_k_T obj_j;/* '<S230>/Get Parameter4' */
  robotics_slros_internal_blo_k_T obj_p2;/* '<S230>/Get Parameter5' */
  robotics_slros_internal_blo_k_T obj_ca;/* '<S230>/Get Parameter6' */
  robotics_slros_internal_blo_k_T obj_g;/* '<S272>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_b;/* '<S271>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_e;/* '<S270>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_jc;/* '<S269>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_mk;/* '<S268>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_jv;/* '<S267>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_d;/* '<S266>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_g1;/* '<S226>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_bm;/* '<S225>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_pa;/* '<S224>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_cd;/* '<S223>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_n;/* '<S222>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_f;/* '<S221>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_h;/* '<S10>/Get Parameter1' */
  robotics_slros_internal_blo_k_T obj_k;/* '<S10>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_nr;/* '<S181>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ly;/* '<S180>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_hk;/* '<S179>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_m0;/* '<S176>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_lu;/* '<S212>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_of;/* '<S211>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_cy;/* '<S210>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_oy;/* '<S209>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_gt;/* '<S208>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_hx;/* '<S207>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_mm;/* '<S206>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_pap;/* '<S197>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_pt;/* '<S199>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_oyi;/* '<S198>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_he;/* '<S191>/Get Parameter' */
  robotics_slros_internal_blo_k_T obj_nc;/* '<S191>/Get Parameter1' */
  robotics_slros_internal_blo_k_T obj_l4;/* '<S191>/Get Parameter2' */
  robotics_slros_internal_blo_k_T obj_fy;/* '<S191>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_od;/* '<S191>/Get Parameter4' */
  robotics_slros_internal_blo_k_T obj_ja;/* '<S184>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_a;/* '<S171>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ln;/* '<S170>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_gb;/* '<S169>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_gw;/* '<S136>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_dy;/* '<S135>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_hl;/* '<S134>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_kw;/* '<S131>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_dg;/* '<S167>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_e4;/* '<S166>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ae;/* '<S165>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_c4;/* '<S164>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ob;/* '<S163>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_mz;/* '<S162>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_dd;/* '<S161>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_mz4;/* '<S152>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ov;/* '<S154>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_lm;/* '<S153>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ee;/* '<S146>/Get Parameter' */
  robotics_slros_internal_blo_k_T obj_ny;/* '<S146>/Get Parameter1' */
  robotics_slros_internal_blo_k_T obj_jl;/* '<S146>/Get Parameter2' */
  robotics_slros_internal_blo_k_T obj_bu;/* '<S146>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_dc;/* '<S146>/Get Parameter4' */
  robotics_slros_internal_blo_k_T obj_lmh;/* '<S139>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_hxt;/* '<S126>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ej;/* '<S125>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_pp;/* '<S124>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ddh;/* '<S89>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_hxn;/* '<S88>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_bs;/* '<S87>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_h3;/* '<S84>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ot;/* '<S122>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ha;/* '<S121>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_fx;/* '<S120>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_mw;/* '<S119>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_lx;/* '<S118>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_k3;/* '<S117>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_pi;/* '<S116>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_gr;/* '<S107>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_pu;/* '<S109>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ae1;/* '<S108>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_hu;/* '<S102>/Get Parameter' */
  robotics_slros_internal_blo_k_T obj_hf;/* '<S102>/Get Parameter1' */
  robotics_slros_internal_blo_k_T obj_n2;/* '<S102>/Get Parameter2' */
  robotics_slros_internal_blo_k_T obj_e1;/* '<S102>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_gg;/* '<S102>/Get Parameter4' */
  robotics_slros_internal_blo_k_T obj_aea;/* '<S92>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_hg;/* '<S79>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_p1;/* '<S78>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ls;/* '<S41>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_cm;/* '<S77>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_nd;/* '<S76>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_cc;/* '<S39>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_fo;/* '<S72>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_d4;/* '<S71>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_gts;/* '<S70>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_lye;/* '<S69>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_i;/* '<S68>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_gbp;/* '<S67>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_al;/* '<S66>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_hfj;/* '<S58>/Get Parameter' */
  robotics_slros_internal_blo_k_T obj_jb;/* '<S58>/Get Parameter1' */
  robotics_slros_internal_blo_k_T obj_mh;/* '<S58>/Get Parameter2' */
  robotics_slros_internal_blo_k_T obj_fc;/* '<S58>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ju;/* '<S58>/Get Parameter4' */
  robotics_slros_internal_blo_k_T obj_m2;/* '<S50>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_ev;/* '<S45>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_oe;/* '<S47>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_me;/* '<S46>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_p3;/* '<S34>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_e2;/* '<S33>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_l3;/* '<S24>/Get Parameter3' */
  robotics_slros_internal_blo_k_T obj_b4;/* '<S4>/Get Parameter1' */
  real_T RateTransition_Buffer0;       /* '<S33>/Rate Transition' */
  real_T RateTransition_Buffer0_p;     /* '<S39>/Rate Transition' */
  real_T ReceivefromHaptics_NetworkLib[137];/* '<S4>/Receive from Haptics' */
  real_T RateTransition1_Buffer0;      /* '<S4>/Rate Transition1' */
  real_T RateTransition_Buffer0_j;     /* '<S50>/Rate Transition' */
  real_T RateTransition_Buffer0_e[5];  /* '<S37>/Rate Transition' */
  real_T RateTransition_Buffer0_a;     /* '<S69>/Rate Transition' */
  real_T RateTransition_Buffer0_l;     /* '<S24>/Rate Transition' */
  real_T RateTransition_Buffer0_h;     /* '<S76>/Rate Transition' */
  real_T RateTransition_Buffer0_f;     /* '<S70>/Rate Transition' */
  real_T RateTransition_Buffer0_hi;    /* '<S77>/Rate Transition' */
  real_T RateTransition_Buffer0_eo;    /* '<S71>/Rate Transition' */
  real_T RateTransition_Buffer0_k;     /* '<S67>/Rate Transition' */
  real_T RateTransition_Buffer0_lg;    /* '<S72>/Rate Transition' */
  real_T RateTransition_Buffer0_d;     /* '<S68>/Rate Transition' */
  real_T RateTransition_Buffer0_fj;    /* '<S66>/Rate Transition' */
  real_T RateTransition_Buffer0_b;     /* '<S34>/Rate Transition' */
  real_T RateTransition_Buffer0_jl;    /* '<S47>/Rate Transition' */
  real_T RateTransition_Buffer0_g;     /* '<S46>/Rate Transition' */
  real_T RateTransition_Buffer0_kp;    /* '<S45>/Rate Transition' */
  real_T RateTransition_Buffer0_k1;    /* '<S41>/Rate Transition' */
  real_T RateTransition_Buffer0_m;     /* '<S78>/Rate Transition' */
  real_T RateTransition_Buffer0_c;     /* '<S84>/Rate Transition' */
  real_T RateTransition_Buffer0_mu;    /* '<S92>/Rate Transition' */
  real_T RateTransition_Buffer0_dg[5]; /* '<S81>/Rate Transition' */
  real_T RateTransition_Buffer0_n;     /* '<S119>/Rate Transition' */
  real_T RateTransition_Buffer0_nl;    /* '<S87>/Rate Transition' */
  real_T RateTransition_Buffer0_az;    /* '<S120>/Rate Transition' */
  real_T RateTransition_Buffer0_jv;    /* '<S88>/Rate Transition' */
  real_T RateTransition_Buffer0_at;    /* '<S121>/Rate Transition' */
  real_T RateTransition_Buffer0_bq;    /* '<S117>/Rate Transition' */
  real_T RateTransition_Buffer0_i;     /* '<S122>/Rate Transition' */
  real_T RateTransition_Buffer0_no;    /* '<S118>/Rate Transition' */
  real_T RateTransition_Buffer0_lh;    /* '<S116>/Rate Transition' */
  real_T RateTransition_Buffer0_ex;    /* '<S79>/Rate Transition' */
  real_T RateTransition_Buffer0_bv;    /* '<S109>/Rate Transition' */
  real_T RateTransition_Buffer0_co;    /* '<S108>/Rate Transition' */
  real_T RateTransition_Buffer0_py;    /* '<S107>/Rate Transition' */
  real_T RateTransition_Buffer0_gb;    /* '<S89>/Rate Transition' */
  real_T RateTransition_Buffer0_iv;    /* '<S124>/Rate Transition' */
  real_T RateTransition_Buffer0_be;    /* '<S131>/Rate Transition' */
  real_T RateTransition_Buffer0_bz;    /* '<S139>/Rate Transition' */
  real_T RateTransition_Buffer0_k3[5]; /* '<S128>/Rate Transition' */
  real_T RateTransition_Buffer0_gk;    /* '<S164>/Rate Transition' */
  real_T RateTransition_Buffer0_o;     /* '<S134>/Rate Transition' */
  real_T RateTransition_Buffer0_ml;    /* '<S165>/Rate Transition' */
  real_T RateTransition_Buffer0_hy;    /* '<S135>/Rate Transition' */
  real_T RateTransition_Buffer0_bh;    /* '<S166>/Rate Transition' */
  real_T RateTransition_Buffer0_kj;    /* '<S162>/Rate Transition' */
  real_T RateTransition_Buffer0_bl;    /* '<S167>/Rate Transition' */
  real_T RateTransition_Buffer0_hj;    /* '<S163>/Rate Transition' */
  real_T RateTransition_Buffer0_pe;    /* '<S161>/Rate Transition' */
  real_T RateTransition_Buffer0_li;    /* '<S126>/Rate Transition' */
  real_T RateTransition_Buffer0_e0;    /* '<S154>/Rate Transition' */
  real_T RateTransition_Buffer0_h3;    /* '<S153>/Rate Transition' */
  real_T RateTransition_Buffer0_kr;    /* '<S152>/Rate Transition' */
  real_T RateTransition_Buffer0_mx;    /* '<S136>/Rate Transition' */
  real_T RateTransition_Buffer0_eg;    /* '<S125>/Rate Transition' */
  real_T RateTransition_Buffer0_nv;    /* '<S169>/Rate Transition' */
  real_T RateTransition_Buffer0_ad;    /* '<S176>/Rate Transition' */
  real_T RateTransition_Buffer0_or;    /* '<S184>/Rate Transition' */
  real_T RateTransition_Buffer0_pk[5]; /* '<S173>/Rate Transition' */
  real_T RateTransition_Buffer0_jt;    /* '<S209>/Rate Transition' */
  real_T RateTransition_Buffer0_oq;    /* '<S179>/Rate Transition' */
  real_T RateTransition_Buffer0_im;    /* '<S210>/Rate Transition' */
  real_T RateTransition_Buffer0_ea;    /* '<S180>/Rate Transition' */
  real_T RateTransition_Buffer0_kpx;   /* '<S211>/Rate Transition' */
  real_T RateTransition_Buffer0_pu;    /* '<S207>/Rate Transition' */
  real_T RateTransition_Buffer0_fb;    /* '<S212>/Rate Transition' */
  real_T RateTransition_Buffer0_ox;    /* '<S208>/Rate Transition' */
  real_T RateTransition_Buffer0_d5;    /* '<S206>/Rate Transition' */
  real_T RateTransition_Buffer0_ns;    /* '<S171>/Rate Transition' */
  real_T RateTransition_Buffer0_ap;    /* '<S199>/Rate Transition' */
  real_T RateTransition_Buffer0_jz;    /* '<S198>/Rate Transition' */
  real_T RateTransition_Buffer0_lf;    /* '<S197>/Rate Transition' */
  real_T RateTransition_Buffer0_eb;    /* '<S181>/Rate Transition' */
  real_T RateTransition_Buffer0_m1;    /* '<S170>/Rate Transition' */
  real_T RateTransition_Buffer0_ly;    /* '<S279>/Rate Transition' */
  real_T RateTransition_Buffer0_n4;    /* '<S280>/Rate Transition' */
  real_T RateTransition_Buffer0_gs;    /* '<S281>/Rate Transition' */
  real_T RateTransition_Buffer0_kx;    /* '<S268>/Rate Transition' */
  real_T RateTransition_Buffer0_dh;    /* '<S269>/Rate Transition' */
  real_T RateTransition_Buffer0_pl;    /* '<S270>/Rate Transition' */
  real_T RateTransition_Buffer0_ck;    /* '<S271>/Rate Transition' */
  real_T RateTransition_Buffer0_aw;    /* '<S272>/Rate Transition' */
  real_T RateTransition_Buffer0_l4;    /* '<S282>/Rate Transition' */
  real_T RateTransition_Buffer0_eq;    /* '<S283>/Rate Transition' */
  real_T RateTransition_Buffer0_dhx;   /* '<S285>/Rate Transition' */
  real_T RateTransition_Buffer0_of;    /* '<S284>/Rate Transition' */
  real_T RateTransition_Buffer0_la;    /* '<S314>/Rate Transition' */
  real_T RateTransition_Buffer0_pq;    /* '<S266>/Rate Transition' */
  real_T RateTransition_Buffer0_ky;    /* '<S267>/Rate Transition' */
  real_T RateTransition_Buffer0_ma;    /* '<S10>/Rate Transition' */
  real_T RateTransition1_Buffer0_g;    /* '<S10>/Rate Transition1' */
  real_T UDPSend_NetworkLib[137];      /* '<S10>/UDP Send' */
  real_T RateTransition_Buffer0_m3;    /* '<S221>/Rate Transition' */
  real_T RateTransition_Buffer0_ax;    /* '<S222>/Rate Transition' */
  real_T RateTransition_Buffer0_pa;    /* '<S223>/Rate Transition' */
  real_T RateTransition_Buffer0_kc;    /* '<S224>/Rate Transition' */
  real_T RateTransition_Buffer0_c2;    /* '<S225>/Rate Transition' */
  real_T RateTransition_Buffer0_o0;    /* '<S226>/Rate Transition' */
  struct {
    void *FilePtr;
  } ToFile_PWORK;                      /* '<S310>/To File' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S187>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_k;               /* '<S144>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_p;               /* '<S98>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_i;               /* '<S54>/To Workspace' */

  struct {
    void *FilePtr;
  } ToFile_PWORK_p;                    /* '<S13>/To File' */

  real32_T Filt4_states[4];            /* '<S39>/Filt 4' */
  real32_T Delay_DSTATE[2700];         /* '<S4>/Delay' */
  real32_T UnitDelay3_DSTATE[2];       /* '<S36>/Unit Delay3' */
  real32_T UnitDelay1_DSTATE;          /* '<S36>/Unit Delay1' */
  real32_T Filt4_states_p;             /* '<S27>/Filt 4' */
  real32_T Filt4_states_e;             /* '<S26>/Filt 4' */
  real32_T UD_DSTATE;                  /* '<S63>/UD' */
  real32_T UD_DSTATE_e;                /* '<S61>/UD' */
  real32_T UD_DSTATE_h;                /* '<S64>/UD' */
  real32_T UD_DSTATE_d;                /* '<S62>/UD' */
  real32_T Filt4_states_g[4];          /* '<S84>/Filt 4' */
  real32_T UnitDelay3_DSTATE_k[2];     /* '<S80>/Unit Delay3' */
  real32_T UnitDelay1_DSTATE_e;        /* '<S80>/Unit Delay1' */
  real32_T Filt4_states_n;             /* '<S29>/Filt 4' */
  real32_T Filt4_states_b;             /* '<S28>/Filt 4' */
  real32_T UD_DSTATE_l;                /* '<S113>/UD' */
  real32_T UD_DSTATE_f;                /* '<S111>/UD' */
  real32_T UD_DSTATE_f0;               /* '<S114>/UD' */
  real32_T UD_DSTATE_dy;               /* '<S112>/UD' */
  real32_T Filt4_states_k[4];          /* '<S131>/Filt 4' */
  real32_T UnitDelay3_DSTATE_kr[2];    /* '<S127>/Unit Delay3' */
  real32_T UnitDelay1_DSTATE_g;        /* '<S127>/Unit Delay1' */
  real32_T Filt4_states_i;             /* '<S30>/Filt 4' */
  real32_T UD_DSTATE_c;                /* '<S158>/UD' */
  real32_T UD_DSTATE_ld;               /* '<S156>/UD' */
  real32_T UD_DSTATE_i;                /* '<S159>/UD' */
  real32_T UD_DSTATE_a;                /* '<S157>/UD' */
  real32_T Filt4_states_p3[4];         /* '<S176>/Filt 4' */
  real32_T UnitDelay3_DSTATE_a[2];     /* '<S172>/Unit Delay3' */
  real32_T UnitDelay1_DSTATE_i;        /* '<S172>/Unit Delay1' */
  real32_T Filt4_states_h;             /* '<S31>/Filt 4' */
  real32_T UD_DSTATE_j;                /* '<S203>/UD' */
  real32_T UD_DSTATE_ds;               /* '<S201>/UD' */
  real32_T UD_DSTATE_m;                /* '<S204>/UD' */
  real32_T UD_DSTATE_k;                /* '<S202>/UD' */
  real32_T Delay_DSTATE_j[1200];       /* '<S10>/Delay' */
  real32_T Filt6_states;               /* '<S216>/Filt 6' */
  real32_T Filt5_states;               /* '<S216>/Filt 5' */
  real32_T Filt4_states_gz;            /* '<S216>/Filt 4' */
  real32_T Filt3_states;               /* '<S216>/Filt 3' */
  real32_T Filt2_states;               /* '<S216>/Filt 2' */
  real32_T Filt1_states;               /* '<S216>/Filt 1' */
  real32_T Filt8_states;               /* '<S216>/Filt 8' */
  real32_T Memory_PreviousInput[4];    /* '<S39>/Memory' */
  real32_T Memory_PreviousInput_k[4];  /* '<S84>/Memory' */
  real32_T Memory_PreviousInput_kw[4]; /* '<S131>/Memory' */
  real32_T Memory_PreviousInput_b[4];  /* '<S176>/Memory' */
  real32_T Memory_PreviousInput_e[2];  /* '<S243>/Memory' */
  real32_T Memory1_PreviousInput[2];   /* '<S243>/Memory1' */
  real32_T Memory2_PreviousInput[2];   /* '<S243>/Memory2' */
  robotics_slros_internal_block_T obj_br;/* '<S219>/SinkBlock' */
  robotics_slros_internal_block_T obj_jct;/* '<S17>/SinkBlock' */
  robotics_slros_internal_bl_kf_T obj_ig;/* '<S25>/SourceBlock' */
  robotics_slros_internal_bl_kf_T obj_ct;/* '<S21>/SourceBlock' */
  robotics_slros_internal_b_kfa_T obj_pb;/* '<S240>/Set Parameter' */
  robotics_slros_internal_b_kfa_T obj_di;/* '<S272>/Set Parameter' */
  robotics_slros_internal_b_kfa_T obj_mg;/* '<S271>/Set Parameter' */
  robotics_slros_internal_b_kfa_T obj_aq;/* '<S270>/Set Parameter' */
  robotics_slros_internal_b_kfa_T obj_jq;/* '<S269>/Set Parameter' */
  robotics_slros_internal_b_kfa_T obj_b3;/* '<S268>/Set Parameter' */
  robotics_slros_internal_b_kfa_T obj_mo;/* '<S184>/Set Parameter' */
  robotics_slros_internal_b_kfa_T obj_lk;/* '<S139>/Set Parameter' */
  robotics_slros_internal_b_kfa_T obj_nru;/* '<S92>/Set Parameter' */
  robotics_slros_internal_b_kfa_T obj_b1;/* '<S50>/Set Parameter' */
  struct {
    int_T Count;
    int_T Decimation;
  } ToFile_IWORK;                      /* '<S310>/To File' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile_IWORK_l;                    /* '<S13>/To File' */

  boolean_T objisempty;                /* '<S315>/Get Parameter3' */
  boolean_T objisempty_e;              /* '<S314>/Get Parameter3' */
  boolean_T objisempty_c;              /* '<S240>/Set Parameter' */
  boolean_T objisempty_o;              /* '<S230>/Get Parameter' */
  boolean_T objisempty_b;              /* '<S230>/Get Parameter2' */
  boolean_T objisempty_i;              /* '<S230>/Get Parameter3' */
  boolean_T objisempty_g;              /* '<S230>/Get Parameter1' */
  boolean_T objisempty_a;              /* '<S230>/Get Parameter4' */
  boolean_T objisempty_b5;             /* '<S230>/Get Parameter5' */
  boolean_T objisempty_cu;             /* '<S230>/Get Parameter6' */
  boolean_T objisempty_gy;             /* '<S272>/Set Parameter' */
  boolean_T objisempty_j;              /* '<S272>/Get Parameter3' */
  boolean_T objisempty_ic;             /* '<S271>/Set Parameter' */
  boolean_T objisempty_m;              /* '<S271>/Get Parameter3' */
  boolean_T objisempty_bl;             /* '<S270>/Set Parameter' */
  boolean_T objisempty_h;              /* '<S270>/Get Parameter3' */
  boolean_T objisempty_n;              /* '<S269>/Set Parameter' */
  boolean_T objisempty_nv;             /* '<S269>/Get Parameter3' */
  boolean_T objisempty_iw;             /* '<S268>/Set Parameter' */
  boolean_T objisempty_k;              /* '<S268>/Get Parameter3' */
  boolean_T objisempty_gg;             /* '<S267>/Get Parameter3' */
  boolean_T objisempty_m2;             /* '<S266>/Get Parameter3' */
  boolean_T objisempty_nb;             /* '<S226>/Get Parameter3' */
  boolean_T objisempty_l;              /* '<S225>/Get Parameter3' */
  boolean_T objisempty_d;              /* '<S224>/Get Parameter3' */
  boolean_T objisempty_f;              /* '<S223>/Get Parameter3' */
  boolean_T objisempty_mw;             /* '<S222>/Get Parameter3' */
  boolean_T objisempty_al;             /* '<S221>/Get Parameter3' */
  boolean_T objisempty_o3;             /* '<S219>/SinkBlock' */
  boolean_T objisempty_p;              /* '<S10>/Get Parameter1' */
  boolean_T objisempty_cs;             /* '<S10>/Get Parameter3' */
  boolean_T objisempty_kt;             /* '<S181>/Get Parameter3' */
  boolean_T objisempty_do;             /* '<S180>/Get Parameter3' */
  boolean_T objisempty_nr;             /* '<S179>/Get Parameter3' */
  boolean_T objisempty_ii;             /* '<S176>/Get Parameter3' */
  boolean_T objisempty_ns;             /* '<S212>/Get Parameter3' */
  boolean_T objisempty_ca;             /* '<S211>/Get Parameter3' */
  boolean_T objisempty_d1;             /* '<S210>/Get Parameter3' */
  boolean_T objisempty_bt;             /* '<S209>/Get Parameter3' */
  boolean_T objisempty_ay;             /* '<S208>/Get Parameter3' */
  boolean_T objisempty_g2;             /* '<S207>/Get Parameter3' */
  boolean_T objisempty_mu;             /* '<S206>/Get Parameter3' */
  boolean_T objisempty_km;             /* '<S197>/Get Parameter3' */
  boolean_T objisempty_j3;             /* '<S199>/Get Parameter3' */
  boolean_T objisempty_lb;             /* '<S198>/Get Parameter3' */
  boolean_T objisempty_gq;             /* '<S191>/Get Parameter' */
  boolean_T objisempty_co;             /* '<S191>/Get Parameter1' */
  boolean_T objisempty_hb;             /* '<S191>/Get Parameter2' */
  boolean_T objisempty_ot;             /* '<S191>/Get Parameter3' */
  boolean_T objisempty_l3;             /* '<S191>/Get Parameter4' */
  boolean_T objisempty_p0;             /* '<S184>/Set Parameter' */
  boolean_T objisempty_dd;             /* '<S184>/Get Parameter3' */
  boolean_T objisempty_j5;             /* '<S171>/Get Parameter3' */
  boolean_T objisempty_cy;             /* '<S170>/Get Parameter3' */
  boolean_T objisempty_mi;             /* '<S169>/Get Parameter3' */
  boolean_T objisempty_ju;             /* '<S136>/Get Parameter3' */
  boolean_T objisempty_mz;             /* '<S135>/Get Parameter3' */
  boolean_T objisempty_nd;             /* '<S134>/Get Parameter3' */
  boolean_T objisempty_mm;             /* '<S131>/Get Parameter3' */
  boolean_T objisempty_il;             /* '<S167>/Get Parameter3' */
  boolean_T objisempty_ij;             /* '<S166>/Get Parameter3' */
  boolean_T objisempty_b4;             /* '<S165>/Get Parameter3' */
  boolean_T objisempty_p1;             /* '<S164>/Get Parameter3' */
  boolean_T objisempty_gz;             /* '<S163>/Get Parameter3' */
  boolean_T objisempty_e0;             /* '<S162>/Get Parameter3' */
  boolean_T objisempty_cm;             /* '<S161>/Get Parameter3' */
  boolean_T objisempty_ct;             /* '<S152>/Get Parameter3' */
  boolean_T objisempty_l2;             /* '<S154>/Get Parameter3' */
  boolean_T objisempty_n0;             /* '<S153>/Get Parameter3' */
  boolean_T objisempty_gm;             /* '<S146>/Get Parameter' */
  boolean_T objisempty_iy;             /* '<S146>/Get Parameter1' */
  boolean_T objisempty_hi;             /* '<S146>/Get Parameter2' */
  boolean_T objisempty_cw;             /* '<S146>/Get Parameter3' */
  boolean_T objisempty_ae;             /* '<S146>/Get Parameter4' */
  boolean_T objisempty_dr;             /* '<S139>/Set Parameter' */
  boolean_T objisempty_lm;             /* '<S139>/Get Parameter3' */
  boolean_T objisempty_iyn;            /* '<S126>/Get Parameter3' */
  boolean_T objisempty_mh;             /* '<S125>/Get Parameter3' */
  boolean_T objisempty_hh;             /* '<S124>/Get Parameter3' */
  boolean_T objisempty_dq;             /* '<S89>/Get Parameter3' */
  boolean_T objisempty_bi;             /* '<S88>/Get Parameter3' */
  boolean_T objisempty_op;             /* '<S87>/Get Parameter3' */
  boolean_T objisempty_f0;             /* '<S84>/Get Parameter3' */
  boolean_T objisempty_kj;             /* '<S122>/Get Parameter3' */
  boolean_T objisempty_h4;             /* '<S121>/Get Parameter3' */
  boolean_T objisempty_ld;             /* '<S120>/Get Parameter3' */
  boolean_T objisempty_hw;             /* '<S119>/Get Parameter3' */
  boolean_T objisempty_oi;             /* '<S118>/Get Parameter3' */
  boolean_T objisempty_eb;             /* '<S117>/Get Parameter3' */
  boolean_T objisempty_im;             /* '<S116>/Get Parameter3' */
  boolean_T objisempty_f4;             /* '<S107>/Get Parameter3' */
  boolean_T objisempty_k3;             /* '<S109>/Get Parameter3' */
  boolean_T objisempty_ec;             /* '<S108>/Get Parameter3' */
  boolean_T objisempty_e4;             /* '<S102>/Get Parameter' */
  boolean_T objisempty_cg;             /* '<S102>/Get Parameter1' */
  boolean_T objisempty_f4u;            /* '<S102>/Get Parameter2' */
  boolean_T objisempty_a3;             /* '<S102>/Get Parameter3' */
  boolean_T objisempty_j5v;            /* '<S102>/Get Parameter4' */
  boolean_T objisempty_bj;             /* '<S92>/Set Parameter' */
  boolean_T objisempty_iim;            /* '<S92>/Get Parameter3' */
  boolean_T objisempty_cts;            /* '<S79>/Get Parameter3' */
  boolean_T objisempty_ee;             /* '<S78>/Get Parameter3' */
  boolean_T objisempty_o4;             /* '<S41>/Get Parameter3' */
  boolean_T objisempty_d4;             /* '<S77>/Get Parameter3' */
  boolean_T objisempty_nq;             /* '<S76>/Get Parameter3' */
  boolean_T objisempty_mn;             /* '<S39>/Get Parameter3' */
  boolean_T objisempty_i2;             /* '<S72>/Get Parameter3' */
  boolean_T objisempty_mu2;            /* '<S71>/Get Parameter3' */
  boolean_T objisempty_fw;             /* '<S70>/Get Parameter3' */
  boolean_T objisempty_kh;             /* '<S69>/Get Parameter3' */
  boolean_T objisempty_ap;             /* '<S68>/Get Parameter3' */
  boolean_T objisempty_e3;             /* '<S67>/Get Parameter3' */
  boolean_T objisempty_p5;             /* '<S66>/Get Parameter3' */
  boolean_T objisempty_drg;            /* '<S58>/Get Parameter' */
  boolean_T objisempty_bk;             /* '<S58>/Get Parameter1' */
  boolean_T objisempty_lx;             /* '<S58>/Get Parameter2' */
  boolean_T objisempty_ng;             /* '<S58>/Get Parameter3' */
  boolean_T objisempty_fm;             /* '<S58>/Get Parameter4' */
  boolean_T objisempty_kmd;            /* '<S50>/Set Parameter' */
  boolean_T objisempty_nre;            /* '<S50>/Get Parameter3' */
  boolean_T objisempty_g3;             /* '<S45>/Get Parameter3' */
  boolean_T objisempty_og;             /* '<S47>/Get Parameter3' */
  boolean_T objisempty_ei;             /* '<S46>/Get Parameter3' */
  boolean_T objisempty_oh;             /* '<S34>/Get Parameter3' */
  boolean_T objisempty_lxe;            /* '<S33>/Get Parameter3' */
  boolean_T objisempty_dg;             /* '<S25>/SourceBlock' */
  boolean_T objisempty_mb;             /* '<S24>/Get Parameter3' */
  boolean_T objisempty_f4d;            /* '<S21>/SourceBlock' */
  boolean_T objisempty_kf;             /* '<S4>/Get Parameter1' */
  boolean_T objisempty_jr;             /* '<S17>/SinkBlock' */
} DW_dx_hand_model_T;

/* Parameters (auto storage) */
struct P_dx_hand_model_T_ {
  real_T update_param;                 /* Variable: update_param
                                        * Referenced by:
                                        *   '<S4>/Get Parameter1'
                                        *   '<S10>/Get Parameter1'
                                        *   '<S10>/Get Parameter3'
                                        *   '<S33>/Get Parameter3'
                                        *   '<S34>/Get Parameter3'
                                        *   '<S39>/Get Parameter3'
                                        *   '<S41>/Get Parameter3'
                                        *   '<S78>/Get Parameter3'
                                        *   '<S79>/Get Parameter3'
                                        *   '<S84>/Get Parameter3'
                                        *   '<S87>/Get Parameter3'
                                        *   '<S88>/Get Parameter3'
                                        *   '<S89>/Get Parameter3'
                                        *   '<S124>/Get Parameter3'
                                        *   '<S125>/Get Parameter3'
                                        *   '<S126>/Get Parameter3'
                                        *   '<S131>/Get Parameter3'
                                        *   '<S134>/Get Parameter3'
                                        *   '<S135>/Get Parameter3'
                                        *   '<S136>/Get Parameter3'
                                        *   '<S169>/Get Parameter3'
                                        *   '<S170>/Get Parameter3'
                                        *   '<S171>/Get Parameter3'
                                        *   '<S176>/Get Parameter3'
                                        *   '<S179>/Get Parameter3'
                                        *   '<S180>/Get Parameter3'
                                        *   '<S181>/Get Parameter3'
                                        *   '<S230>/Get Parameter'
                                        *   '<S230>/Get Parameter1'
                                        *   '<S230>/Get Parameter2'
                                        *   '<S230>/Get Parameter3'
                                        *   '<S230>/Get Parameter4'
                                        *   '<S230>/Get Parameter5'
                                        *   '<S230>/Get Parameter6'
                                        *   '<S24>/Get Parameter3'
                                        *   '<S45>/Get Parameter3'
                                        *   '<S50>/Get Parameter3'
                                        *   '<S66>/Get Parameter3'
                                        *   '<S67>/Get Parameter3'
                                        *   '<S68>/Get Parameter3'
                                        *   '<S69>/Get Parameter3'
                                        *   '<S70>/Get Parameter3'
                                        *   '<S71>/Get Parameter3'
                                        *   '<S72>/Get Parameter3'
                                        *   '<S76>/Get Parameter3'
                                        *   '<S77>/Get Parameter3'
                                        *   '<S92>/Get Parameter3'
                                        *   '<S107>/Get Parameter3'
                                        *   '<S116>/Get Parameter3'
                                        *   '<S117>/Get Parameter3'
                                        *   '<S118>/Get Parameter3'
                                        *   '<S119>/Get Parameter3'
                                        *   '<S120>/Get Parameter3'
                                        *   '<S121>/Get Parameter3'
                                        *   '<S122>/Get Parameter3'
                                        *   '<S139>/Get Parameter3'
                                        *   '<S152>/Get Parameter3'
                                        *   '<S161>/Get Parameter3'
                                        *   '<S162>/Get Parameter3'
                                        *   '<S163>/Get Parameter3'
                                        *   '<S164>/Get Parameter3'
                                        *   '<S165>/Get Parameter3'
                                        *   '<S166>/Get Parameter3'
                                        *   '<S167>/Get Parameter3'
                                        *   '<S184>/Get Parameter3'
                                        *   '<S197>/Get Parameter3'
                                        *   '<S206>/Get Parameter3'
                                        *   '<S207>/Get Parameter3'
                                        *   '<S208>/Get Parameter3'
                                        *   '<S209>/Get Parameter3'
                                        *   '<S210>/Get Parameter3'
                                        *   '<S211>/Get Parameter3'
                                        *   '<S212>/Get Parameter3'
                                        *   '<S221>/Get Parameter3'
                                        *   '<S222>/Get Parameter3'
                                        *   '<S223>/Get Parameter3'
                                        *   '<S224>/Get Parameter3'
                                        *   '<S225>/Get Parameter3'
                                        *   '<S226>/Get Parameter3'
                                        *   '<S266>/Get Parameter3'
                                        *   '<S267>/Get Parameter3'
                                        *   '<S268>/Get Parameter3'
                                        *   '<S269>/Get Parameter3'
                                        *   '<S270>/Get Parameter3'
                                        *   '<S271>/Get Parameter3'
                                        *   '<S272>/Get Parameter3'
                                        *   '<S314>/Get Parameter3'
                                        *   '<S315>/Get Parameter3'
                                        *   '<S46>/Get Parameter3'
                                        *   '<S47>/Get Parameter3'
                                        *   '<S58>/Get Parameter'
                                        *   '<S58>/Get Parameter1'
                                        *   '<S58>/Get Parameter2'
                                        *   '<S58>/Get Parameter3'
                                        *   '<S58>/Get Parameter4'
                                        *   '<S102>/Get Parameter'
                                        *   '<S102>/Get Parameter1'
                                        *   '<S102>/Get Parameter2'
                                        *   '<S102>/Get Parameter3'
                                        *   '<S102>/Get Parameter4'
                                        *   '<S108>/Get Parameter3'
                                        *   '<S109>/Get Parameter3'
                                        *   '<S146>/Get Parameter'
                                        *   '<S146>/Get Parameter1'
                                        *   '<S146>/Get Parameter2'
                                        *   '<S146>/Get Parameter3'
                                        *   '<S146>/Get Parameter4'
                                        *   '<S153>/Get Parameter3'
                                        *   '<S154>/Get Parameter3'
                                        *   '<S191>/Get Parameter'
                                        *   '<S191>/Get Parameter1'
                                        *   '<S191>/Get Parameter2'
                                        *   '<S191>/Get Parameter3'
                                        *   '<S191>/Get Parameter4'
                                        *   '<S198>/Get Parameter3'
                                        *   '<S199>/Get Parameter3'
                                        */
  real32_T max_force;                  /* Variable: max_force
                                        * Referenced by:
                                        *   '<S41>/Saturation1'
                                        *   '<S89>/Saturation1'
                                        *   '<S136>/Saturation1'
                                        *   '<S181>/Saturation1'
                                        */
  real32_T DiscreteDerivative2_ICPrevScale;/* Mask Parameter: DiscreteDerivative2_ICPrevScale
                                            * Referenced by: '<S63>/UD'
                                            */
  real32_T DiscreteDerivative_ICPrevScaled;/* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                            * Referenced by: '<S61>/UD'
                                            */
  real32_T DiscreteDerivative3_ICPrevScale;/* Mask Parameter: DiscreteDerivative3_ICPrevScale
                                            * Referenced by: '<S64>/UD'
                                            */
  real32_T DiscreteDerivative1_ICPrevScale;/* Mask Parameter: DiscreteDerivative1_ICPrevScale
                                            * Referenced by: '<S62>/UD'
                                            */
  real32_T DiscreteDerivative2_ICPrevSca_g;/* Mask Parameter: DiscreteDerivative2_ICPrevSca_g
                                            * Referenced by: '<S113>/UD'
                                            */
  real32_T DiscreteDerivative_ICPrevScal_e;/* Mask Parameter: DiscreteDerivative_ICPrevScal_e
                                            * Referenced by: '<S111>/UD'
                                            */
  real32_T DiscreteDerivative3_ICPrevSca_m;/* Mask Parameter: DiscreteDerivative3_ICPrevSca_m
                                            * Referenced by: '<S114>/UD'
                                            */
  real32_T DiscreteDerivative1_ICPrevSca_p;/* Mask Parameter: DiscreteDerivative1_ICPrevSca_p
                                            * Referenced by: '<S112>/UD'
                                            */
  real32_T DiscreteDerivative2_ICPrevSca_o;/* Mask Parameter: DiscreteDerivative2_ICPrevSca_o
                                            * Referenced by: '<S158>/UD'
                                            */
  real32_T DiscreteDerivative_ICPrevScal_m;/* Mask Parameter: DiscreteDerivative_ICPrevScal_m
                                            * Referenced by: '<S156>/UD'
                                            */
  real32_T DiscreteDerivative3_ICPrevSca_h;/* Mask Parameter: DiscreteDerivative3_ICPrevSca_h
                                            * Referenced by: '<S159>/UD'
                                            */
  real32_T DiscreteDerivative1_ICPrevSc_pm;/* Mask Parameter: DiscreteDerivative1_ICPrevSc_pm
                                            * Referenced by: '<S157>/UD'
                                            */
  real32_T DiscreteDerivative2_ICPrevSca_i;/* Mask Parameter: DiscreteDerivative2_ICPrevSca_i
                                            * Referenced by: '<S203>/UD'
                                            */
  real32_T DiscreteDerivative_ICPrevScal_b;/* Mask Parameter: DiscreteDerivative_ICPrevScal_b
                                            * Referenced by: '<S201>/UD'
                                            */
  real32_T DiscreteDerivative3_ICPrevSca_j;/* Mask Parameter: DiscreteDerivative3_ICPrevSca_j
                                            * Referenced by: '<S204>/UD'
                                            */
  real32_T DiscreteDerivative1_ICPrevSca_n;/* Mask Parameter: DiscreteDerivative1_ICPrevSca_n
                                            * Referenced by: '<S202>/UD'
                                            */
  int32_T ReceivefromHaptics_localPort;/* Mask Parameter: ReceivefromHaptics_localPort
                                        * Referenced by: '<S4>/Receive from Haptics'
                                        */
  int32_T UDPSend_remotePort;          /* Mask Parameter: UDPSend_remotePort
                                        * Referenced by: '<S10>/UDP Send'
                                        */
  SL_Bus_dx_hand_model_sensor_msgs_JointState Out1_Y0;/* Computed Parameter: Out1_Y0
                                                       * Referenced by: '<S32>/Out1'
                                                       */
  SL_Bus_dx_hand_model_sensor_msgs_JointState Constant_Value;/* Computed Parameter: Constant_Value
                                                              * Referenced by: '<S25>/Constant'
                                                              */
  SL_Bus_dx_hand_model_sensor_msgs_JointState Constant_Value_m;/* Computed Parameter: Constant_Value_m
                                                                * Referenced by: '<S15>/Constant'
                                                                */
  SL_Bus_dx_hand_model_sensor_msgs_JointState Constant_Value_h;/* Computed Parameter: Constant_Value_h
                                                                * Referenced by: '<S217>/Constant'
                                                                */
  SL_Bus_dx_hand_model_std_msgs_Float64MultiArray Out1_Y0_p;/* Computed Parameter: Out1_Y0_p
                                                             * Referenced by: '<S22>/Out1'
                                                             */
  SL_Bus_dx_hand_model_std_msgs_Float64MultiArray Constant_Value_g;/* Computed Parameter: Constant_Value_g
                                                                    * Referenced by: '<S21>/Constant'
                                                                    */
  real_T Constant_Value_n;             /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S37>/Constant3'
                                        */
  real_T Constant_Value_ht;            /* Expression: 1
                                        * Referenced by: '<S37>/Constant'
                                        */
  real_T Antonio1_Value[5];            /* Expression: [8.5   44    0    20 0]
                                        * Referenced by: '<S59>/Antonio1'
                                        */
  real_T Constant3_Value_l;            /* Expression: 0
                                        * Referenced by: '<S81>/Constant3'
                                        */
  real_T Constant_Value_j;             /* Expression: 1
                                        * Referenced by: '<S81>/Constant'
                                        */
  real_T Antonio_Value[5];             /* Expression: [ 8, 44.755952819297409619589520899781, 0, 1645979925414585/70368744177664, 0]
                                        * Referenced by: '<S103>/Antonio'
                                        */
  real_T Constant3_Value_d;            /* Expression: 0
                                        * Referenced by: '<S128>/Constant3'
                                        */
  real_T Constant_Value_gf;            /* Expression: 1
                                        * Referenced by: '<S128>/Constant'
                                        */
  real_T Antonio_Value_k[5];           /* Expression: [ 8, 44.755952819297409619589520899781, 0, 1645979925414585/70368744177664, 0]
                                        * Referenced by: '<S147>/Antonio'
                                        */
  real_T Constant3_Value_e;            /* Expression: 0
                                        * Referenced by: '<S173>/Constant3'
                                        */
  real_T Constant_Value_a;             /* Expression: 1
                                        * Referenced by: '<S173>/Constant'
                                        */
  real_T Antonio_Value_e[5];           /* Expression: [ 8, 44.755952819297409619589520899781, 0, 1645979925414585/70368744177664, 0]
                                        * Referenced by: '<S192>/Antonio'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/500
                                        * Referenced by: '<S228>/Gain'
                                        */
  real_T Constant6_Value;              /* Expression: -pi/3
                                        * Referenced by: '<S229>/Constant6'
                                        */
  real_T Constant5_Value;              /* Expression: -pi/3
                                        * Referenced by: '<S229>/Constant5'
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<S229>/Constant'
                                        */
  real_T Constant1_Value_p;            /* Expression: pi/6
                                        * Referenced by: '<S229>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: -pi/3
                                        * Referenced by: '<S229>/Constant2'
                                        */
  real_T Constant3_Value_m;            /* Expression: 1
                                        * Referenced by: '<S239>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S239>/Constant4'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S33>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_m;/* Expression: 0
                                          * Referenced by: '<S39>/Rate Transition'
                                          */
  real_T RateTransition1_InitialConditio;/* Expression: 0
                                          * Referenced by: '<S4>/Rate Transition1'
                                          */
  real_T RateTransition_InitialConditi_e;/* Expression: 0
                                          * Referenced by: '<S50>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_e5;/* Expression: 0
                                          * Referenced by: '<S37>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_l;/* Expression: 0
                                          * Referenced by: '<S69>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_i;/* Expression: 0
                                          * Referenced by: '<S24>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_l4;/* Expression: 0
                                          * Referenced by: '<S76>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_g;/* Expression: 0
                                          * Referenced by: '<S70>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_f;/* Expression: 0
                                          * Referenced by: '<S77>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_b;/* Expression: 0
                                          * Referenced by: '<S71>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_d;/* Expression: 0
                                          * Referenced by: '<S67>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_df;/* Expression: 0
                                          * Referenced by: '<S72>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_h;/* Expression: 0
                                          * Referenced by: '<S68>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_mr;/* Expression: 0
                                          * Referenced by: '<S66>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_le;/* Expression: 0
                                          * Referenced by: '<S34>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_o;/* Expression: 0
                                          * Referenced by: '<S47>/Rate Transition'
                                          */
  real_T NormalizeCurrent_Gain;        /* Expression: 1/688
                                        * Referenced by: '<S44>/Normalize Current'
                                        */
  real_T MaximumTorque_Gain;           /* Expression: 0.52
                                        * Referenced by: '<S44>/Maximum Torque'
                                        */
  real_T Sign_Gain;                    /* Expression: -1
                                        * Referenced by: '<S44>/Sign'
                                        */
  real_T RateTransition_InitialConditi_n;/* Expression: 0
                                          * Referenced by: '<S46>/Rate Transition'
                                          */
  real_T Gain1_Gain;                   /* Expression: 1/360
                                        * Referenced by: '<S44>/Gain1'
                                        */
  real_T MaximumTorque1_Gain;          /* Expression: 0.04
                                        * Referenced by: '<S44>/Maximum Torque1'
                                        */
  real_T Sign1_Gain;                   /* Expression: 1
                                        * Referenced by: '<S44>/Sign1'
                                        */
  real_T RateTransition_InitialCondit_ml;/* Expression: 0
                                          * Referenced by: '<S45>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_a;/* Expression: 0
                                          * Referenced by: '<S41>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_c;/* Expression: 0
                                          * Referenced by: '<S78>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_h1;/* Expression: 0
                                          * Referenced by: '<S84>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_j;/* Expression: 0
                                          * Referenced by: '<S92>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_ho;/* Expression: 0
                                          * Referenced by: '<S81>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_hj;/* Expression: 0
                                          * Referenced by: '<S119>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_fa;/* Expression: 0
                                          * Referenced by: '<S87>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_oz;/* Expression: 0
                                          * Referenced by: '<S120>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_lg;/* Expression: 0
                                          * Referenced by: '<S88>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_dc;/* Expression: 0
                                          * Referenced by: '<S121>/Rate Transition'
                                          */
  real_T RateTransition_InitialConditi_p;/* Expression: 0
                                          * Referenced by: '<S117>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_eh;/* Expression: 0
                                          * Referenced by: '<S122>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_ie;/* Expression: 0
                                          * Referenced by: '<S118>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_f5;/* Expression: 0
                                          * Referenced by: '<S116>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_co;/* Expression: 0
                                          * Referenced by: '<S79>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_j1;/* Expression: 0
                                          * Referenced by: '<S109>/Rate Transition'
                                          */
  real_T Gain_Gain_m;                  /* Expression: 1/680
                                        * Referenced by: '<S106>/Gain'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.52
                                        * Referenced by: '<S106>/Gain2'
                                        */
  real_T Gain3_Gain;                   /* Expression: -1
                                        * Referenced by: '<S106>/Gain3'
                                        */
  real_T RateTransition_InitialConditi_k;/* Expression: 0
                                          * Referenced by: '<S108>/Rate Transition'
                                          */
  real_T Gain1_Gain_a;                 /* Expression: 1/360
                                        * Referenced by: '<S106>/Gain1'
                                        */
  real_T Gain4_Gain;                   /* Expression: 0.04
                                        * Referenced by: '<S106>/Gain4'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1
                                        * Referenced by: '<S106>/Gain5'
                                        */
  real_T RateTransition_InitialCondit_ks;/* Expression: 0
                                          * Referenced by: '<S107>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_h4;/* Expression: 0
                                          * Referenced by: '<S89>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_n1;/* Expression: 0
                                          * Referenced by: '<S124>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_by;/* Expression: 0
                                          * Referenced by: '<S131>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_ey;/* Expression: 0
                                          * Referenced by: '<S139>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_kp;/* Expression: 0
                                          * Referenced by: '<S128>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_nj;/* Expression: 0
                                          * Referenced by: '<S164>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_da;/* Expression: 0
                                          * Referenced by: '<S134>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_oe;/* Expression: 0
                                          * Referenced by: '<S165>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_hg;/* Expression: 0
                                          * Referenced by: '<S135>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_ag;/* Expression: 0
                                          * Referenced by: '<S166>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_of;/* Expression: 0
                                          * Referenced by: '<S162>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_nc;/* Expression: 0
                                          * Referenced by: '<S167>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_gk;/* Expression: 0
                                          * Referenced by: '<S163>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_e4;/* Expression: 0
                                          * Referenced by: '<S161>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_bl;/* Expression: 0
                                          * Referenced by: '<S126>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_ee;/* Expression: 0
                                          * Referenced by: '<S154>/Rate Transition'
                                          */
  real_T Gain1_Gain_h;                 /* Expression: 1/360
                                        * Referenced by: '<S151>/Gain1'
                                        */
  real_T Gain3_Gain_g;                 /* Expression: 0.03
                                        * Referenced by: '<S151>/Gain3'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 1
                                        * Referenced by: '<S151>/Gain2'
                                        */
  real_T RateTransition_InitialCondit_dj;/* Expression: 0
                                          * Referenced by: '<S153>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_od;/* Expression: 0
                                          * Referenced by: '<S152>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_fm;/* Expression: 0
                                          * Referenced by: '<S136>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_kt;/* Expression: 0
                                          * Referenced by: '<S125>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_ia;/* Expression: 0
                                          * Referenced by: '<S169>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_lj;/* Expression: 0
                                          * Referenced by: '<S176>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_fv;/* Expression: 0
                                          * Referenced by: '<S184>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_dt;/* Expression: 0
                                          * Referenced by: '<S173>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_an;/* Expression: 0
                                          * Referenced by: '<S209>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_fs;/* Expression: 0
                                          * Referenced by: '<S179>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_do;/* Expression: 0
                                          * Referenced by: '<S210>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_dw;/* Expression: 0
                                          * Referenced by: '<S180>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_lr;/* Expression: 0
                                          * Referenced by: '<S211>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_gs;/* Expression: 0
                                          * Referenced by: '<S207>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_mz;/* Expression: 0
                                          * Referenced by: '<S212>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_gn;/* Expression: 0
                                          * Referenced by: '<S208>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_ez;/* Expression: 0
                                          * Referenced by: '<S206>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_g5;/* Expression: 0
                                          * Referenced by: '<S171>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_az;/* Expression: 0
                                          * Referenced by: '<S199>/Rate Transition'
                                          */
  real_T Gain1_Gain_m;                 /* Expression: 1/360
                                        * Referenced by: '<S196>/Gain1'
                                        */
  real_T Gain3_Gain_i;                 /* Expression: 0.06
                                        * Referenced by: '<S196>/Gain3'
                                        */
  real_T Gain2_Gain_n;                 /* Expression: 1
                                        * Referenced by: '<S196>/Gain2'
                                        */
  real_T RateTransition_InitialCondit_jy;/* Expression: 0
                                          * Referenced by: '<S198>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_fx;/* Expression: 0
                                          * Referenced by: '<S197>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondi_hgr;/* Expression: 0
                                          * Referenced by: '<S181>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_px;/* Expression: 0
                                          * Referenced by: '<S170>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_ch;/* Expression: -10.0
                                          * Referenced by: '<S279>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_lb;/* Expression: 0.0
                                          * Referenced by: '<S280>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_es;/* Expression: -32.0
                                          * Referenced by: '<S281>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_hc;/* Expression: 0
                                          * Referenced by: '<S268>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_mq;/* Expression: 0
                                          * Referenced by: '<S269>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_dv;/* Expression: 0
                                          * Referenced by: '<S270>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_n3;/* Expression: 0
                                          * Referenced by: '<S271>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_ap;/* Expression: 0
                                          * Referenced by: '<S272>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_p1;/* Expression: 20.0
                                          * Referenced by: '<S282>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_hr;/* Expression: 50.0
                                          * Referenced by: '<S283>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_ab;/* Expression: 50.0
                                          * Referenced by: '<S285>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_kb;/* Expression: 20.0
                                          * Referenced by: '<S284>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondi_dfu;/* Expression: 0
                                          * Referenced by: '<S314>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_i5;/* Expression: 0
                                          * Referenced by: '<S266>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondi_hjl;/* Expression: 0
                                          * Referenced by: '<S267>/Rate Transition'
                                          */
  real_T RateTransition_InitialCondit_nq;/* Expression: 0
                                          * Referenced by: '<S10>/Rate Transition'
                                          */
  real_T RateTransition1_InitialCondit_j;/* Expression: 0
                                          * Referenced by: '<S10>/Rate Transition1'
                                          */
  real_T RateTransition_InitialCondit_gu;/* Expression: 0
                                          * Referenced by: '<S221>/Rate Transition'
                                          */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S221>/Switch1'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S221>/Switch'
                                        */
  real_T RateTransition_InitialCondit_ep;/* Expression: 0
                                          * Referenced by: '<S222>/Rate Transition'
                                          */
  real_T Switch1_Threshold_g;          /* Expression: 0
                                        * Referenced by: '<S222>/Switch1'
                                        */
  real_T Switch_Threshold_b;           /* Expression: 0
                                        * Referenced by: '<S222>/Switch'
                                        */
  real_T RateTransition_InitialCondit_dy;/* Expression: 0
                                          * Referenced by: '<S223>/Rate Transition'
                                          */
  real_T Switch1_Threshold_a;          /* Expression: 0
                                        * Referenced by: '<S223>/Switch1'
                                        */
  real_T Switch_Threshold_n;           /* Expression: 0
                                        * Referenced by: '<S223>/Switch'
                                        */
  real_T RateTransition_InitialCondi_mrn;/* Expression: 0
                                          * Referenced by: '<S224>/Rate Transition'
                                          */
  real_T Switch1_Threshold_d;          /* Expression: 0
                                        * Referenced by: '<S224>/Switch1'
                                        */
  real_T RateTransition_InitialCondit_oh;/* Expression: 0
                                          * Referenced by: '<S225>/Rate Transition'
                                          */
  real_T Switch1_Threshold_f;          /* Expression: 0
                                        * Referenced by: '<S225>/Switch1'
                                        */
  real_T RateTransition_InitialCondit_jn;/* Expression: 0
                                          * Referenced by: '<S226>/Rate Transition'
                                          */
  real_T Switch1_Threshold_c;          /* Expression: 0
                                        * Referenced by: '<S226>/Switch1'
                                        */
  real32_T Constant_Value_k;           /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S33>/Constant'
                                        */
  real32_T Saturation2_UpperSat;       /* Computed Parameter: Saturation2_UpperSat
                                        * Referenced by: '<S41>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat;       /* Computed Parameter: Saturation2_LowerSat
                                        * Referenced by: '<S41>/Saturation2'
                                        */
  real32_T Saturation1_LowerSat;       /* Computed Parameter: Saturation1_LowerSat
                                        * Referenced by: '<S41>/Saturation1'
                                        */
  real32_T Switch_Threshold_a;         /* Computed Parameter: Switch_Threshold_a
                                        * Referenced by: '<S41>/Switch'
                                        */
  real32_T Switch_Threshold_i;         /* Computed Parameter: Switch_Threshold_i
                                        * Referenced by: '<S45>/Switch'
                                        */
  real32_T Switch_Threshold_b3;        /* Computed Parameter: Switch_Threshold_b3
                                        * Referenced by: '<S66>/Switch'
                                        */
  real32_T Constant_Value_jk;          /* Computed Parameter: Constant_Value_jk
                                        * Referenced by: '<S46>/Constant'
                                        */
  real32_T Constant_Value_e2;          /* Computed Parameter: Constant_Value_e2
                                        * Referenced by: '<S47>/Constant'
                                        */
  real32_T Constant_Value_nm;          /* Computed Parameter: Constant_Value_nm
                                        * Referenced by: '<S67>/Constant'
                                        */
  real32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S68>/Constant'
                                        */
  real32_T Constant_Value_ev;          /* Computed Parameter: Constant_Value_ev
                                        * Referenced by: '<S78>/Constant'
                                        */
  real32_T Saturation2_UpperSat_i;     /* Computed Parameter: Saturation2_UpperSat_i
                                        * Referenced by: '<S89>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat_m;     /* Computed Parameter: Saturation2_LowerSat_m
                                        * Referenced by: '<S89>/Saturation2'
                                        */
  real32_T Saturation1_LowerSat_b;     /* Computed Parameter: Saturation1_LowerSat_b
                                        * Referenced by: '<S89>/Saturation1'
                                        */
  real32_T Switch_Threshold_bv;        /* Computed Parameter: Switch_Threshold_bv
                                        * Referenced by: '<S89>/Switch'
                                        */
  real32_T Switch_Threshold_b1;        /* Computed Parameter: Switch_Threshold_b1
                                        * Referenced by: '<S107>/Switch'
                                        */
  real32_T Switch_Threshold_g;         /* Computed Parameter: Switch_Threshold_g
                                        * Referenced by: '<S116>/Switch'
                                        */
  real32_T Constant1_Value_n;          /* Computed Parameter: Constant1_Value_n
                                        * Referenced by: '<S92>/Constant1'
                                        */
  real32_T Constant_Value_jt;          /* Computed Parameter: Constant_Value_jt
                                        * Referenced by: '<S108>/Constant'
                                        */
  real32_T Constant_Value_hp;          /* Computed Parameter: Constant_Value_hp
                                        * Referenced by: '<S109>/Constant'
                                        */
  real32_T Constant_Value_d;           /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S117>/Constant'
                                        */
  real32_T Constant_Value_ez;          /* Computed Parameter: Constant_Value_ez
                                        * Referenced by: '<S118>/Constant'
                                        */
  real32_T Constant_Value_l;           /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S124>/Constant'
                                        */
  real32_T Saturation2_UpperSat_iq;    /* Computed Parameter: Saturation2_UpperSat_iq
                                        * Referenced by: '<S136>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat_mn;    /* Computed Parameter: Saturation2_LowerSat_mn
                                        * Referenced by: '<S136>/Saturation2'
                                        */
  real32_T Saturation1_LowerSat_d;     /* Computed Parameter: Saturation1_LowerSat_d
                                        * Referenced by: '<S136>/Saturation1'
                                        */
  real32_T Switch_Threshold_nb;        /* Computed Parameter: Switch_Threshold_nb
                                        * Referenced by: '<S136>/Switch'
                                        */
  real32_T Switch_Threshold_l;         /* Computed Parameter: Switch_Threshold_l
                                        * Referenced by: '<S152>/Switch'
                                        */
  real32_T Switch_Threshold_nl;        /* Computed Parameter: Switch_Threshold_nl
                                        * Referenced by: '<S161>/Switch'
                                        */
  real32_T Constant1_Value_j;          /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S139>/Constant1'
                                        */
  real32_T Constant_Value_dk;          /* Computed Parameter: Constant_Value_dk
                                        * Referenced by: '<S153>/Constant'
                                        */
  real32_T Constant_Value_j1;          /* Computed Parameter: Constant_Value_j1
                                        * Referenced by: '<S154>/Constant'
                                        */
  real32_T Constant_Value_ll;          /* Computed Parameter: Constant_Value_ll
                                        * Referenced by: '<S162>/Constant'
                                        */
  real32_T Constant_Value_ln;          /* Computed Parameter: Constant_Value_ln
                                        * Referenced by: '<S163>/Constant'
                                        */
  real32_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S169>/Constant'
                                        */
  real32_T Saturation2_UpperSat_f;     /* Computed Parameter: Saturation2_UpperSat_f
                                        * Referenced by: '<S181>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat_b;     /* Computed Parameter: Saturation2_LowerSat_b
                                        * Referenced by: '<S181>/Saturation2'
                                        */
  real32_T Saturation1_LowerSat_e;     /* Computed Parameter: Saturation1_LowerSat_e
                                        * Referenced by: '<S181>/Saturation1'
                                        */
  real32_T Switch_Threshold_k;         /* Computed Parameter: Switch_Threshold_k
                                        * Referenced by: '<S181>/Switch'
                                        */
  real32_T Switch_Threshold_f;         /* Computed Parameter: Switch_Threshold_f
                                        * Referenced by: '<S197>/Switch'
                                        */
  real32_T Switch_Threshold_e;         /* Computed Parameter: Switch_Threshold_e
                                        * Referenced by: '<S206>/Switch'
                                        */
  real32_T Constant1_Value_g;          /* Computed Parameter: Constant1_Value_g
                                        * Referenced by: '<S184>/Constant1'
                                        */
  real32_T Constant_Value_ax;          /* Computed Parameter: Constant_Value_ax
                                        * Referenced by: '<S198>/Constant'
                                        */
  real32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S199>/Constant'
                                        */
  real32_T Constant_Value_i;           /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S207>/Constant'
                                        */
  real32_T Constant_Value_cn;          /* Computed Parameter: Constant_Value_cn
                                        * Referenced by: '<S208>/Constant'
                                        */
  real32_T Constant_Value_nd;          /* Computed Parameter: Constant_Value_nd
                                        * Referenced by: '<S221>/Constant'
                                        */
  real32_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<S216>/Saturation'
                                        */
  real32_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<S216>/Saturation'
                                        */
  real32_T Constant1_Value_b;          /* Computed Parameter: Constant1_Value_b
                                        * Referenced by: '<S221>/Constant1'
                                        */
  real32_T Saturation1_UpperSat;       /* Computed Parameter: Saturation1_UpperSat
                                        * Referenced by: '<S216>/Saturation1'
                                        */
  real32_T Saturation1_LowerSat_o;     /* Computed Parameter: Saturation1_LowerSat_o
                                        * Referenced by: '<S216>/Saturation1'
                                        */
  real32_T Saturation2_UpperSat_l;     /* Computed Parameter: Saturation2_UpperSat_l
                                        * Referenced by: '<S216>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat_c;     /* Computed Parameter: Saturation2_LowerSat_c
                                        * Referenced by: '<S216>/Saturation2'
                                        */
  real32_T Saturation3_UpperSat;       /* Computed Parameter: Saturation3_UpperSat
                                        * Referenced by: '<S216>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat;       /* Computed Parameter: Saturation3_LowerSat
                                        * Referenced by: '<S216>/Saturation3'
                                        */
  real32_T Saturation4_UpperSat;       /* Computed Parameter: Saturation4_UpperSat
                                        * Referenced by: '<S216>/Saturation4'
                                        */
  real32_T Saturation4_LowerSat;       /* Computed Parameter: Saturation4_LowerSat
                                        * Referenced by: '<S216>/Saturation4'
                                        */
  real32_T Saturation5_UpperSat;       /* Computed Parameter: Saturation5_UpperSat
                                        * Referenced by: '<S216>/Saturation5'
                                        */
  real32_T Saturation5_LowerSat;       /* Computed Parameter: Saturation5_LowerSat
                                        * Referenced by: '<S216>/Saturation5'
                                        */
  real32_T Constant_Value_fp;          /* Computed Parameter: Constant_Value_fp
                                        * Referenced by: '<S224>/Constant'
                                        */
  real32_T GainAggiustato_Gain;        /* Computed Parameter: GainAggiustato_Gain
                                        * Referenced by: '<S9>/Gain  Aggiustato'
                                        */
  real32_T Gain1_Gain_i;               /* Computed Parameter: Gain1_Gain_i
                                        * Referenced by: '<S9>/Gain1'
                                        */
  real32_T Switch_Threshold_kr;        /* Computed Parameter: Switch_Threshold_kr
                                        * Referenced by: '<S170>/Switch'
                                        */
  real32_T Saturation6_UpperSat;       /* Computed Parameter: Saturation6_UpperSat
                                        * Referenced by: '<S216>/Saturation6'
                                        */
  real32_T Saturation6_LowerSat;       /* Computed Parameter: Saturation6_LowerSat
                                        * Referenced by: '<S216>/Saturation6'
                                        */
  real32_T Constant_Value_fn;          /* Computed Parameter: Constant_Value_fn
                                        * Referenced by: '<S225>/Constant'
                                        */
  real32_T GainAggiustato_Gain_n;      /* Computed Parameter: GainAggiustato_Gain_n
                                        * Referenced by: '<S8>/Gain  Aggiustato'
                                        */
  real32_T Gain1_Gain_k;               /* Computed Parameter: Gain1_Gain_k
                                        * Referenced by: '<S8>/Gain1'
                                        */
  real32_T Switch_Threshold_e5;        /* Computed Parameter: Switch_Threshold_e5
                                        * Referenced by: '<S125>/Switch'
                                        */
  real32_T Saturation7_UpperSat;       /* Computed Parameter: Saturation7_UpperSat
                                        * Referenced by: '<S216>/Saturation7'
                                        */
  real32_T Saturation7_LowerSat;       /* Computed Parameter: Saturation7_LowerSat
                                        * Referenced by: '<S216>/Saturation7'
                                        */
  real32_T Constant_Value_hk;          /* Computed Parameter: Constant_Value_hk
                                        * Referenced by: '<S226>/Constant'
                                        */
  real32_T Saturation8_UpperSat;       /* Computed Parameter: Saturation8_UpperSat
                                        * Referenced by: '<S216>/Saturation8'
                                        */
  real32_T Saturation8_LowerSat;       /* Computed Parameter: Saturation8_LowerSat
                                        * Referenced by: '<S216>/Saturation8'
                                        */
  real32_T Constant_Value_mw;          /* Computed Parameter: Constant_Value_mw
                                        * Referenced by: '<S266>/Constant'
                                        */
  real32_T Constant2_Value_m;          /* Computed Parameter: Constant2_Value_m
                                        * Referenced by: '<S272>/Constant2'
                                        */
  real32_T GainAggiustato_Gain_p;      /* Computed Parameter: GainAggiustato_Gain_p
                                        * Referenced by: '<S272>/Gain Aggiustato'
                                        */
  real32_T Sign_Gain_i;                /* Computed Parameter: Sign_Gain_i
                                        * Referenced by: '<S272>/Sign'
                                        */
  real32_T Constant2_Value_a;          /* Computed Parameter: Constant2_Value_a
                                        * Referenced by: '<S271>/Constant2'
                                        */
  real32_T GainAggiustato_Gain_j;      /* Computed Parameter: GainAggiustato_Gain_j
                                        * Referenced by: '<S271>/Gain Aggiustato'
                                        */
  real32_T Sign_Gain_d;                /* Computed Parameter: Sign_Gain_d
                                        * Referenced by: '<S271>/Sign'
                                        */
  real32_T Constant1_Value_g4;         /* Computed Parameter: Constant1_Value_g4
                                        * Referenced by: '<S268>/Constant1'
                                        */
  real32_T Constant_Value_dn;          /* Computed Parameter: Constant_Value_dn
                                        * Referenced by: '<S268>/Constant'
                                        */
  real32_T GainAggiustato_Gain_m;      /* Computed Parameter: GainAggiustato_Gain_m
                                        * Referenced by: '<S268>/Gain Aggiustato'
                                        */
  real32_T Constant1_Value_jr;         /* Computed Parameter: Constant1_Value_jr
                                        * Referenced by: '<S269>/Constant1'
                                        */
  real32_T Constant_Value_ld;          /* Computed Parameter: Constant_Value_ld
                                        * Referenced by: '<S269>/Constant'
                                        */
  real32_T GainAggiustato_Gain_c;      /* Computed Parameter: GainAggiustato_Gain_c
                                        * Referenced by: '<S269>/Gain Aggiustato'
                                        */
  real32_T Constant1_Value_l;          /* Computed Parameter: Constant1_Value_l
                                        * Referenced by: '<S270>/Constant1'
                                        */
  real32_T Constant_Value_iv;          /* Computed Parameter: Constant_Value_iv
                                        * Referenced by: '<S270>/Constant'
                                        */
  real32_T GainAggiustato_Gain_cb;     /* Computed Parameter: GainAggiustato_Gain_cb
                                        * Referenced by: '<S270>/Gain Aggiustato'
                                        */
  real32_T Filt4_NumCoef[2];           /* Computed Parameter: Filt4_NumCoef
                                        * Referenced by: '<S39>/Filt 4'
                                        */
  real32_T Filt4_DenCoef[2];           /* Computed Parameter: Filt4_DenCoef
                                        * Referenced by: '<S39>/Filt 4'
                                        */
  real32_T Filt4_InitialStates;        /* Computed Parameter: Filt4_InitialStates
                                        * Referenced by: '<S39>/Filt 4'
                                        */
  real32_T Delay_InitialCondition;     /* Computed Parameter: Delay_InitialCondition
                                        * Referenced by: '<S4>/Delay'
                                        */
  real32_T GainAggiustato_Gain_b;      /* Computed Parameter: GainAggiustato_Gain_b
                                        * Referenced by: '<S55>/Gain  Aggiustato'
                                        */
  real32_T Saturation3_UpperSat_h;     /* Computed Parameter: Saturation3_UpperSat_h
                                        * Referenced by: '<S37>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat_g;     /* Computed Parameter: Saturation3_LowerSat_g
                                        * Referenced by: '<S37>/Saturation3'
                                        */
  real32_T Constant4_Value_o;          /* Computed Parameter: Constant4_Value_o
                                        * Referenced by: '<S50>/Constant4'
                                        */
  real32_T GainAggiustato1_Gain;       /* Computed Parameter: GainAggiustato1_Gain
                                        * Referenced by: '<S50>/Gain Aggiustato1'
                                        */
  real32_T Saturation2_UpperSat_lj;    /* Computed Parameter: Saturation2_UpperSat_lj
                                        * Referenced by: '<S37>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat_k;     /* Computed Parameter: Saturation2_LowerSat_k
                                        * Referenced by: '<S37>/Saturation2'
                                        */
  real32_T UnitDelay3_InitialCondition[2];/* Computed Parameter: UnitDelay3_InitialCondition
                                           * Referenced by: '<S36>/Unit Delay3'
                                           */
  real32_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S36>/Unit Delay1'
                                        */
  real32_T Memory_InitialCondition[4]; /* Computed Parameter: Memory_InitialCondition
                                        * Referenced by: '<S39>/Memory'
                                        */
  real32_T Switch_Threshold_gm;        /* Computed Parameter: Switch_Threshold_gm
                                        * Referenced by: '<S39>/Switch'
                                        */
  real32_T Filt4_NumCoef_d[2];         /* Computed Parameter: Filt4_NumCoef_d
                                        * Referenced by: '<S27>/Filt 4'
                                        */
  real32_T Filt4_DenCoef_h[2];         /* Computed Parameter: Filt4_DenCoef_h
                                        * Referenced by: '<S27>/Filt 4'
                                        */
  real32_T Filt4_InitialStates_b;      /* Computed Parameter: Filt4_InitialStates_b
                                        * Referenced by: '<S27>/Filt 4'
                                        */
  real32_T Switch_Threshold_ej;        /* Computed Parameter: Switch_Threshold_ej
                                        * Referenced by: '<S27>/Switch'
                                        */
  real32_T Saturation3_UpperSat_d;     /* Computed Parameter: Saturation3_UpperSat_d
                                        * Referenced by: '<S38>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat_l;     /* Computed Parameter: Saturation3_LowerSat_l
                                        * Referenced by: '<S38>/Saturation3'
                                        */
  real32_T Filt4_NumCoef_c[2];         /* Computed Parameter: Filt4_NumCoef_c
                                        * Referenced by: '<S26>/Filt 4'
                                        */
  real32_T Filt4_DenCoef_i[2];         /* Computed Parameter: Filt4_DenCoef_i
                                        * Referenced by: '<S26>/Filt 4'
                                        */
  real32_T Filt4_InitialStates_e;      /* Computed Parameter: Filt4_InitialStates_e
                                        * Referenced by: '<S26>/Filt 4'
                                        */
  real32_T Switch_Threshold_ab;        /* Computed Parameter: Switch_Threshold_ab
                                        * Referenced by: '<S26>/Switch'
                                        */
  real32_T Saturation4_UpperSat_l;     /* Computed Parameter: Saturation4_UpperSat_l
                                        * Referenced by: '<S38>/Saturation4'
                                        */
  real32_T Saturation4_LowerSat_a;     /* Computed Parameter: Saturation4_LowerSat_a
                                        * Referenced by: '<S38>/Saturation4'
                                        */
  real32_T TSamp_WtEt;                 /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S63>/TSamp'
                                        */
  real32_T Switch_Threshold_d;         /* Computed Parameter: Switch_Threshold_d
                                        * Referenced by: '<S67>/Switch'
                                        */
  real32_T TSamp_WtEt_l;               /* Computed Parameter: TSamp_WtEt_l
                                        * Referenced by: '<S61>/TSamp'
                                        */
  real32_T TSamp_WtEt_d;               /* Computed Parameter: TSamp_WtEt_d
                                        * Referenced by: '<S64>/TSamp'
                                        */
  real32_T Switch_Threshold_c;         /* Computed Parameter: Switch_Threshold_c
                                        * Referenced by: '<S68>/Switch'
                                        */
  real32_T TSamp_WtEt_b;               /* Computed Parameter: TSamp_WtEt_b
                                        * Referenced by: '<S62>/TSamp'
                                        */
  real32_T Switch_Threshold_kg;        /* Computed Parameter: Switch_Threshold_kg
                                        * Referenced by: '<S34>/Switch'
                                        */
  real32_T Switch_Threshold_lk;        /* Computed Parameter: Switch_Threshold_lk
                                        * Referenced by: '<S33>/Switch'
                                        */
  real32_T Filt4_NumCoef_g[2];         /* Computed Parameter: Filt4_NumCoef_g
                                        * Referenced by: '<S84>/Filt 4'
                                        */
  real32_T Filt4_DenCoef_p[2];         /* Computed Parameter: Filt4_DenCoef_p
                                        * Referenced by: '<S84>/Filt 4'
                                        */
  real32_T Filt4_InitialStates_n;      /* Computed Parameter: Filt4_InitialStates_n
                                        * Referenced by: '<S84>/Filt 4'
                                        */
  real32_T GainAggiustato_Gain_m4;     /* Computed Parameter: GainAggiustato_Gain_m4
                                        * Referenced by: '<S94>/Gain  Aggiustato'
                                        */
  real32_T Saturation2_UpperSat_j;     /* Computed Parameter: Saturation2_UpperSat_j
                                        * Referenced by: '<S81>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat_f;     /* Computed Parameter: Saturation2_LowerSat_f
                                        * Referenced by: '<S81>/Saturation2'
                                        */
  real32_T GainAggiustato_Gain_jj;     /* Computed Parameter: GainAggiustato_Gain_jj
                                        * Referenced by: '<S92>/Gain Aggiustato'
                                        */
  real32_T Constant_Value_p;           /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S92>/Constant'
                                        */
  real32_T Saturation3_UpperSat_i;     /* Computed Parameter: Saturation3_UpperSat_i
                                        * Referenced by: '<S81>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat_m;     /* Computed Parameter: Saturation3_LowerSat_m
                                        * Referenced by: '<S81>/Saturation3'
                                        */
  real32_T UnitDelay3_InitialCondition_e[2];/* Computed Parameter: UnitDelay3_InitialCondition_e
                                             * Referenced by: '<S80>/Unit Delay3'
                                             */
  real32_T UnitDelay1_InitialCondition_d;/* Computed Parameter: UnitDelay1_InitialCondition_d
                                          * Referenced by: '<S80>/Unit Delay1'
                                          */
  real32_T Memory_InitialCondition_g[4];/* Computed Parameter: Memory_InitialCondition_g
                                         * Referenced by: '<S84>/Memory'
                                         */
  real32_T Switch_Threshold_fu;        /* Computed Parameter: Switch_Threshold_fu
                                        * Referenced by: '<S84>/Switch'
                                        */
  real32_T Filt4_NumCoef_k[2];         /* Computed Parameter: Filt4_NumCoef_k
                                        * Referenced by: '<S29>/Filt 4'
                                        */
  real32_T Filt4_DenCoef_k[2];         /* Computed Parameter: Filt4_DenCoef_k
                                        * Referenced by: '<S29>/Filt 4'
                                        */
  real32_T Filt4_InitialStates_ey;     /* Computed Parameter: Filt4_InitialStates_ey
                                        * Referenced by: '<S29>/Filt 4'
                                        */
  real32_T Switch_Threshold_iy;        /* Computed Parameter: Switch_Threshold_iy
                                        * Referenced by: '<S29>/Switch'
                                        */
  real32_T Saturation3_UpperSat_p;     /* Computed Parameter: Saturation3_UpperSat_p
                                        * Referenced by: '<S83>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat_mt;    /* Computed Parameter: Saturation3_LowerSat_mt
                                        * Referenced by: '<S83>/Saturation3'
                                        */
  real32_T Filt4_NumCoef_cz[2];        /* Computed Parameter: Filt4_NumCoef_cz
                                        * Referenced by: '<S28>/Filt 4'
                                        */
  real32_T Filt4_DenCoef_hx[2];        /* Computed Parameter: Filt4_DenCoef_hx
                                        * Referenced by: '<S28>/Filt 4'
                                        */
  real32_T Filt4_InitialStates_j;      /* Computed Parameter: Filt4_InitialStates_j
                                        * Referenced by: '<S28>/Filt 4'
                                        */
  real32_T Switch_Threshold_bb;        /* Computed Parameter: Switch_Threshold_bb
                                        * Referenced by: '<S28>/Switch'
                                        */
  real32_T Saturation4_UpperSat_n;     /* Computed Parameter: Saturation4_UpperSat_n
                                        * Referenced by: '<S83>/Saturation4'
                                        */
  real32_T Saturation4_LowerSat_o;     /* Computed Parameter: Saturation4_LowerSat_o
                                        * Referenced by: '<S83>/Saturation4'
                                        */
  real32_T TSamp_WtEt_h;               /* Computed Parameter: TSamp_WtEt_h
                                        * Referenced by: '<S113>/TSamp'
                                        */
  real32_T Switch_Threshold_j;         /* Computed Parameter: Switch_Threshold_j
                                        * Referenced by: '<S117>/Switch'
                                        */
  real32_T TSamp_WtEt_e;               /* Computed Parameter: TSamp_WtEt_e
                                        * Referenced by: '<S111>/TSamp'
                                        */
  real32_T TSamp_WtEt_n;               /* Computed Parameter: TSamp_WtEt_n
                                        * Referenced by: '<S114>/TSamp'
                                        */
  real32_T Switch_Threshold_l4;        /* Computed Parameter: Switch_Threshold_l4
                                        * Referenced by: '<S118>/Switch'
                                        */
  real32_T TSamp_WtEt_i;               /* Computed Parameter: TSamp_WtEt_i
                                        * Referenced by: '<S112>/TSamp'
                                        */
  real32_T Switch_Threshold_km;        /* Computed Parameter: Switch_Threshold_km
                                        * Referenced by: '<S79>/Switch'
                                        */
  real32_T Switch_Threshold_h;         /* Computed Parameter: Switch_Threshold_h
                                        * Referenced by: '<S78>/Switch'
                                        */
  real32_T Filt4_NumCoef_a[2];         /* Computed Parameter: Filt4_NumCoef_a
                                        * Referenced by: '<S131>/Filt 4'
                                        */
  real32_T Filt4_DenCoef_a[2];         /* Computed Parameter: Filt4_DenCoef_a
                                        * Referenced by: '<S131>/Filt 4'
                                        */
  real32_T Filt4_InitialStates_c;      /* Computed Parameter: Filt4_InitialStates_c
                                        * Referenced by: '<S131>/Filt 4'
                                        */
  real32_T GainAggiustato_Gain_nl;     /* Computed Parameter: GainAggiustato_Gain_nl
                                        * Referenced by: '<S140>/Gain  Aggiustato'
                                        */
  real32_T Saturation2_UpperSat_i4;    /* Computed Parameter: Saturation2_UpperSat_i4
                                        * Referenced by: '<S128>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat_ky;    /* Computed Parameter: Saturation2_LowerSat_ky
                                        * Referenced by: '<S128>/Saturation2'
                                        */
  real32_T GainAggiustato_Gain_jt;     /* Computed Parameter: GainAggiustato_Gain_jt
                                        * Referenced by: '<S139>/Gain Aggiustato'
                                        */
  real32_T Constant_Value_ov;          /* Computed Parameter: Constant_Value_ov
                                        * Referenced by: '<S139>/Constant'
                                        */
  real32_T Saturation3_UpperSat_a;     /* Computed Parameter: Saturation3_UpperSat_a
                                        * Referenced by: '<S128>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat_h;     /* Computed Parameter: Saturation3_LowerSat_h
                                        * Referenced by: '<S128>/Saturation3'
                                        */
  real32_T UnitDelay3_InitialCondition_eg[2];/* Computed Parameter: UnitDelay3_InitialCondition_eg
                                              * Referenced by: '<S127>/Unit Delay3'
                                              */
  real32_T UnitDelay1_InitialCondition_dx;/* Computed Parameter: UnitDelay1_InitialCondition_dx
                                           * Referenced by: '<S127>/Unit Delay1'
                                           */
  real32_T Memory_InitialCondition_a[4];/* Computed Parameter: Memory_InitialCondition_a
                                         * Referenced by: '<S131>/Memory'
                                         */
  real32_T Switch_Threshold_cm;        /* Computed Parameter: Switch_Threshold_cm
                                        * Referenced by: '<S131>/Switch'
                                        */
  real32_T Filt4_NumCoef_o[2];         /* Computed Parameter: Filt4_NumCoef_o
                                        * Referenced by: '<S30>/Filt 4'
                                        */
  real32_T Filt4_DenCoef_an[2];        /* Computed Parameter: Filt4_DenCoef_an
                                        * Referenced by: '<S30>/Filt 4'
                                        */
  real32_T Filt4_InitialStates_i;      /* Computed Parameter: Filt4_InitialStates_i
                                        * Referenced by: '<S30>/Filt 4'
                                        */
  real32_T Switch_Threshold_ea;        /* Computed Parameter: Switch_Threshold_ea
                                        * Referenced by: '<S30>/Switch'
                                        */
  real32_T Saturation3_UpperSat_dr;    /* Computed Parameter: Saturation3_UpperSat_dr
                                        * Referenced by: '<S130>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat_o;     /* Computed Parameter: Saturation3_LowerSat_o
                                        * Referenced by: '<S130>/Saturation3'
                                        */
  real32_T Gain_Gain_i;                /* Computed Parameter: Gain_Gain_i
                                        * Referenced by: '<S130>/Gain'
                                        */
  real32_T Saturation4_UpperSat_b;     /* Computed Parameter: Saturation4_UpperSat_b
                                        * Referenced by: '<S130>/Saturation4'
                                        */
  real32_T Saturation4_LowerSat_f;     /* Computed Parameter: Saturation4_LowerSat_f
                                        * Referenced by: '<S130>/Saturation4'
                                        */
  real32_T TSamp_WtEt_dk;              /* Computed Parameter: TSamp_WtEt_dk
                                        * Referenced by: '<S158>/TSamp'
                                        */
  real32_T Switch_Threshold_ha;        /* Computed Parameter: Switch_Threshold_ha
                                        * Referenced by: '<S162>/Switch'
                                        */
  real32_T TSamp_WtEt_lr;              /* Computed Parameter: TSamp_WtEt_lr
                                        * Referenced by: '<S156>/TSamp'
                                        */
  real32_T TSamp_WtEt_bc;              /* Computed Parameter: TSamp_WtEt_bc
                                        * Referenced by: '<S159>/TSamp'
                                        */
  real32_T Switch_Threshold_p;         /* Computed Parameter: Switch_Threshold_p
                                        * Referenced by: '<S163>/Switch'
                                        */
  real32_T TSamp_WtEt_f;               /* Computed Parameter: TSamp_WtEt_f
                                        * Referenced by: '<S157>/TSamp'
                                        */
  real32_T Switch_Threshold_nt;        /* Computed Parameter: Switch_Threshold_nt
                                        * Referenced by: '<S126>/Switch'
                                        */
  real32_T Switch_Threshold_gl;        /* Computed Parameter: Switch_Threshold_gl
                                        * Referenced by: '<S124>/Switch'
                                        */
  real32_T Filt4_NumCoef_go[2];        /* Computed Parameter: Filt4_NumCoef_go
                                        * Referenced by: '<S176>/Filt 4'
                                        */
  real32_T Filt4_DenCoef_px[2];        /* Computed Parameter: Filt4_DenCoef_px
                                        * Referenced by: '<S176>/Filt 4'
                                        */
  real32_T Filt4_InitialStates_a;      /* Computed Parameter: Filt4_InitialStates_a
                                        * Referenced by: '<S176>/Filt 4'
                                        */
  real32_T GainAggiustato_Gain_cm;     /* Computed Parameter: GainAggiustato_Gain_cm
                                        * Referenced by: '<S185>/Gain  Aggiustato'
                                        */
  real32_T Saturation2_UpperSat_i0;    /* Computed Parameter: Saturation2_UpperSat_i0
                                        * Referenced by: '<S173>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat_i;     /* Computed Parameter: Saturation2_LowerSat_i
                                        * Referenced by: '<S173>/Saturation2'
                                        */
  real32_T GainAggiustato_Gain_ju;     /* Computed Parameter: GainAggiustato_Gain_ju
                                        * Referenced by: '<S184>/Gain Aggiustato'
                                        */
  real32_T Constant_Value_pw;          /* Computed Parameter: Constant_Value_pw
                                        * Referenced by: '<S184>/Constant'
                                        */
  real32_T Saturation3_UpperSat_o;     /* Computed Parameter: Saturation3_UpperSat_o
                                        * Referenced by: '<S173>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat_i;     /* Computed Parameter: Saturation3_LowerSat_i
                                        * Referenced by: '<S173>/Saturation3'
                                        */
  real32_T UnitDelay3_InitialCondition_p[2];/* Computed Parameter: UnitDelay3_InitialCondition_p
                                             * Referenced by: '<S172>/Unit Delay3'
                                             */
  real32_T UnitDelay1_InitialCondition_e;/* Computed Parameter: UnitDelay1_InitialCondition_e
                                          * Referenced by: '<S172>/Unit Delay1'
                                          */
  real32_T Memory_InitialCondition_i[4];/* Computed Parameter: Memory_InitialCondition_i
                                         * Referenced by: '<S176>/Memory'
                                         */
  real32_T Switch_Threshold_dh;        /* Computed Parameter: Switch_Threshold_dh
                                        * Referenced by: '<S176>/Switch'
                                        */
  real32_T Filt4_NumCoef_c2[2];        /* Computed Parameter: Filt4_NumCoef_c2
                                        * Referenced by: '<S31>/Filt 4'
                                        */
  real32_T Filt4_DenCoef_o[2];         /* Computed Parameter: Filt4_DenCoef_o
                                        * Referenced by: '<S31>/Filt 4'
                                        */
  real32_T Filt4_InitialStates_n5;     /* Computed Parameter: Filt4_InitialStates_n5
                                        * Referenced by: '<S31>/Filt 4'
                                        */
  real32_T Switch_Threshold_lw;        /* Computed Parameter: Switch_Threshold_lw
                                        * Referenced by: '<S31>/Switch'
                                        */
  real32_T Saturation3_UpperSat_e;     /* Computed Parameter: Saturation3_UpperSat_e
                                        * Referenced by: '<S175>/Saturation3'
                                        */
  real32_T Saturation3_LowerSat_iw;    /* Computed Parameter: Saturation3_LowerSat_iw
                                        * Referenced by: '<S175>/Saturation3'
                                        */
  real32_T Gain_Gain_f;                /* Computed Parameter: Gain_Gain_f
                                        * Referenced by: '<S175>/Gain'
                                        */
  real32_T Saturation4_UpperSat_h;     /* Computed Parameter: Saturation4_UpperSat_h
                                        * Referenced by: '<S175>/Saturation4'
                                        */
  real32_T Saturation4_LowerSat_i;     /* Computed Parameter: Saturation4_LowerSat_i
                                        * Referenced by: '<S175>/Saturation4'
                                        */
  real32_T TSamp_WtEt_p;               /* Computed Parameter: TSamp_WtEt_p
                                        * Referenced by: '<S203>/TSamp'
                                        */
  real32_T Switch_Threshold_o;         /* Computed Parameter: Switch_Threshold_o
                                        * Referenced by: '<S207>/Switch'
                                        */
  real32_T TSamp_WtEt_ll;              /* Computed Parameter: TSamp_WtEt_ll
                                        * Referenced by: '<S201>/TSamp'
                                        */
  real32_T TSamp_WtEt_h4;              /* Computed Parameter: TSamp_WtEt_h4
                                        * Referenced by: '<S204>/TSamp'
                                        */
  real32_T Switch_Threshold_ef;        /* Computed Parameter: Switch_Threshold_ef
                                        * Referenced by: '<S208>/Switch'
                                        */
  real32_T TSamp_WtEt_k;               /* Computed Parameter: TSamp_WtEt_k
                                        * Referenced by: '<S202>/TSamp'
                                        */
  real32_T Switch_Threshold_gv;        /* Computed Parameter: Switch_Threshold_gv
                                        * Referenced by: '<S171>/Switch'
                                        */
  real32_T Switch_Threshold_m;         /* Computed Parameter: Switch_Threshold_m
                                        * Referenced by: '<S169>/Switch'
                                        */
  real32_T Memory_InitialCondition_gv[2];/* Computed Parameter: Memory_InitialCondition_gv
                                          * Referenced by: '<S243>/Memory'
                                          */
  real32_T Memory1_InitialCondition[2];/* Computed Parameter: Memory1_InitialCondition
                                        * Referenced by: '<S243>/Memory1'
                                        */
  real32_T Memory2_InitialCondition[2];/* Computed Parameter: Memory2_InitialCondition
                                        * Referenced by: '<S243>/Memory2'
                                        */
  real32_T Switch_Threshold_le;        /* Computed Parameter: Switch_Threshold_le
                                        * Referenced by: '<S266>/Switch'
                                        */
  real32_T GainAggiustato_Gain_np;     /* Computed Parameter: GainAggiustato_Gain_np
                                        * Referenced by: '<S273>/Gain  Aggiustato'
                                        */
  real32_T Constant_Value_e0;          /* Computed Parameter: Constant_Value_e0
                                        * Referenced by: '<S3>/Constant'
                                        */
  real32_T Constant1_Value_n1;         /* Computed Parameter: Constant1_Value_n1
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real32_T Constant2_Value_e;          /* Computed Parameter: Constant2_Value_e
                                        * Referenced by: '<S3>/Constant2'
                                        */
  real32_T Constant3_Value_i;          /* Computed Parameter: Constant3_Value_i
                                        * Referenced by: '<S3>/Constant3'
                                        */
  real32_T Saturation_UpperSat_m;      /* Computed Parameter: Saturation_UpperSat_m
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real32_T Saturation_LowerSat_k;      /* Computed Parameter: Saturation_LowerSat_k
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real32_T Constant_Value_oa;          /* Computed Parameter: Constant_Value_oa
                                        * Referenced by: '<S10>/Constant'
                                        */
  real32_T Delay_InitialCondition_o;   /* Computed Parameter: Delay_InitialCondition_o
                                        * Referenced by: '<S10>/Delay'
                                        */
  real32_T Filt6_NumCoef[2];           /* Computed Parameter: Filt6_NumCoef
                                        * Referenced by: '<S216>/Filt 6'
                                        */
  real32_T Filt6_DenCoef[2];           /* Computed Parameter: Filt6_DenCoef
                                        * Referenced by: '<S216>/Filt 6'
                                        */
  real32_T Filt6_InitialStates;        /* Computed Parameter: Filt6_InitialStates
                                        * Referenced by: '<S216>/Filt 6'
                                        */
  real32_T Filt5_NumCoef[2];           /* Computed Parameter: Filt5_NumCoef
                                        * Referenced by: '<S216>/Filt 5'
                                        */
  real32_T Filt5_DenCoef[2];           /* Computed Parameter: Filt5_DenCoef
                                        * Referenced by: '<S216>/Filt 5'
                                        */
  real32_T Filt5_InitialStates;        /* Computed Parameter: Filt5_InitialStates
                                        * Referenced by: '<S216>/Filt 5'
                                        */
  real32_T Filt4_NumCoef_p[2];         /* Computed Parameter: Filt4_NumCoef_p
                                        * Referenced by: '<S216>/Filt 4'
                                        */
  real32_T Filt4_DenCoef_pv[2];        /* Computed Parameter: Filt4_DenCoef_pv
                                        * Referenced by: '<S216>/Filt 4'
                                        */
  real32_T Filt4_InitialStates_eym;    /* Computed Parameter: Filt4_InitialStates_eym
                                        * Referenced by: '<S216>/Filt 4'
                                        */
  real32_T Constant_Value_j3;          /* Computed Parameter: Constant_Value_j3
                                        * Referenced by: '<S222>/Constant'
                                        */
  real32_T Filt3_NumCoef[2];           /* Computed Parameter: Filt3_NumCoef
                                        * Referenced by: '<S216>/Filt 3'
                                        */
  real32_T Filt3_DenCoef[2];           /* Computed Parameter: Filt3_DenCoef
                                        * Referenced by: '<S216>/Filt 3'
                                        */
  real32_T Filt3_InitialStates;        /* Computed Parameter: Filt3_InitialStates
                                        * Referenced by: '<S216>/Filt 3'
                                        */
  real32_T Filt2_NumCoef[2];           /* Computed Parameter: Filt2_NumCoef
                                        * Referenced by: '<S216>/Filt 2'
                                        */
  real32_T Filt2_DenCoef[2];           /* Computed Parameter: Filt2_DenCoef
                                        * Referenced by: '<S216>/Filt 2'
                                        */
  real32_T Filt2_InitialStates;        /* Computed Parameter: Filt2_InitialStates
                                        * Referenced by: '<S216>/Filt 2'
                                        */
  real32_T Constant_Value_cs;          /* Computed Parameter: Constant_Value_cs
                                        * Referenced by: '<S223>/Constant'
                                        */
  real32_T Filt1_NumCoef[2];           /* Computed Parameter: Filt1_NumCoef
                                        * Referenced by: '<S216>/Filt 1'
                                        */
  real32_T Filt1_DenCoef[2];           /* Computed Parameter: Filt1_DenCoef
                                        * Referenced by: '<S216>/Filt 1'
                                        */
  real32_T Filt1_InitialStates;        /* Computed Parameter: Filt1_InitialStates
                                        * Referenced by: '<S216>/Filt 1'
                                        */
  real32_T Filt8_NumCoef[2];           /* Computed Parameter: Filt8_NumCoef
                                        * Referenced by: '<S216>/Filt 8'
                                        */
  real32_T Filt8_DenCoef[2];           /* Computed Parameter: Filt8_DenCoef
                                        * Referenced by: '<S216>/Filt 8'
                                        */
  real32_T Filt8_InitialStates;        /* Computed Parameter: Filt8_InitialStates
                                        * Referenced by: '<S216>/Filt 8'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S272>/Manual Switch'
                                        */
  uint8_T ManualSwitch_CurrentSetting_l;/* Computed Parameter: ManualSwitch_CurrentSetting_l
                                         * Referenced by: '<S271>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_j;/* Computed Parameter: ManualSwitch_CurrentSetting_j
                                         * Referenced by: '<S268>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_lg;/* Computed Parameter: ManualSwitch_CurrentSetting_lg
                                          * Referenced by: '<S269>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_ld;/* Computed Parameter: ManualSwitch_CurrentSetting_ld
                                          * Referenced by: '<S270>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_ldb;/* Computed Parameter: ManualSwitch_CurrentSetting_ldb
                                           * Referenced by: '<S36>/Manual Switch'
                                           */
  uint8_T ManualSwitch_CurrentSetting_i;/* Computed Parameter: ManualSwitch_CurrentSetting_i
                                         * Referenced by: '<S47>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_n;/* Computed Parameter: ManualSwitch_CurrentSetting_n
                                         * Referenced by: '<S46>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_d;/* Computed Parameter: ManualSwitch_CurrentSetting_d
                                         * Referenced by: '<S37>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_o;/* Computed Parameter: ManualSwitch_CurrentSetting_o
                                         * Referenced by: '<S53>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_dn;/* Computed Parameter: ManualSwitch_CurrentSetting_dn
                                          * Referenced by: '<S92>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_m;/* Computed Parameter: ManualSwitch_CurrentSetting_m
                                         * Referenced by: '<S80>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_f;/* Computed Parameter: ManualSwitch_CurrentSetting_f
                                         * Referenced by: '<S109>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_mr;/* Computed Parameter: ManualSwitch_CurrentSetting_mr
                                          * Referenced by: '<S108>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_g;/* Computed Parameter: ManualSwitch_CurrentSetting_g
                                         * Referenced by: '<S81>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_jv;/* Computed Parameter: ManualSwitch_CurrentSetting_jv
                                          * Referenced by: '<S97>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_oo;/* Computed Parameter: ManualSwitch_CurrentSetting_oo
                                          * Referenced by: '<S139>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_mb;/* Computed Parameter: ManualSwitch_CurrentSetting_mb
                                          * Referenced by: '<S127>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_ni;/* Computed Parameter: ManualSwitch_CurrentSetting_ni
                                          * Referenced by: '<S154>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_k;/* Computed Parameter: ManualSwitch_CurrentSetting_k
                                         * Referenced by: '<S153>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_gu;/* Computed Parameter: ManualSwitch_CurrentSetting_gu
                                          * Referenced by: '<S128>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_b;/* Computed Parameter: ManualSwitch_CurrentSetting_b
                                         * Referenced by: '<S141>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_db;/* Computed Parameter: ManualSwitch_CurrentSetting_db
                                          * Referenced by: '<S184>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_h;/* Computed Parameter: ManualSwitch_CurrentSetting_h
                                         * Referenced by: '<S172>/Manual Switch'
                                         */
  uint8_T ManualSwitch_CurrentSetting_kt;/* Computed Parameter: ManualSwitch_CurrentSetting_kt
                                          * Referenced by: '<S199>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_oq;/* Computed Parameter: ManualSwitch_CurrentSetting_oq
                                          * Referenced by: '<S198>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_mc;/* Computed Parameter: ManualSwitch_CurrentSetting_mc
                                          * Referenced by: '<S173>/Manual Switch'
                                          */
  uint8_T ManualSwitch_CurrentSetting_ju;/* Computed Parameter: ManualSwitch_CurrentSetting_ju
                                          * Referenced by: '<S186>/Manual Switch'
                                          */
  uint8_T ManualSwitch2_CurrentSetting;/* Computed Parameter: ManualSwitch2_CurrentSetting
                                        * Referenced by: '<S229>/Manual Switch2'
                                        */
  uint8_T ManualSwitch1_CurrentSetting;/* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<S229>/Manual Switch1'
                                        */
  uint8_T ManualSwitch_CurrentSetting_bs;/* Computed Parameter: ManualSwitch_CurrentSetting_bs
                                          * Referenced by: '<S229>/Manual Switch'
                                          */
  uint8_T ManualSwitch4_CurrentSetting;/* Computed Parameter: ManualSwitch4_CurrentSetting
                                        * Referenced by: '<S229>/Manual Switch4'
                                        */
  uint8_T ManualSwitch5_CurrentSetting;/* Computed Parameter: ManualSwitch5_CurrentSetting
                                        * Referenced by: '<S229>/Manual Switch5'
                                        */
  uint8_T ManualSwitch3_CurrentSetting;/* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S239>/Manual Switch3'
                                        */
  uint8_T ManualSwitch_CurrentSetting_la;/* Computed Parameter: ManualSwitch_CurrentSetting_la
                                          * Referenced by: '<S1>/Manual Switch'
                                          */
};

/* Real-time Model Data Structure */
struct tag_RTM_dx_hand_model_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    struct {
      uint16_T TID[2];
    } TaskCounters;

    struct {
      boolean_T TID0_1;
    } RateInteraction;

    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_dx_hand_model_T dx_hand_model_P;

#ifdef __cplusplus

}
#endif

/* Block signals (auto storage) */
extern B_dx_hand_model_T dx_hand_model_B;

/* Block states (auto storage) */
extern DW_dx_hand_model_T dx_hand_model_DW;

/* External function called from main */
#ifdef __cplusplus

extern "C" {

#endif

  extern void dx_hand_model_SetEventsForThisBaseStep(boolean_T *eventFlags);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void dx_hand_model_SetEventsForThisBaseStep(boolean_T *eventFlags);
  extern void dx_hand_model_initialize(void);
  extern void dx_hand_model_step(int_T tid);
  extern void dx_hand_model_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_dx_hand_model_T *const dx_hand_model_M;

#ifdef __cplusplus

}
#endif

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/CMC_AA' : Unused code path elimination
 * Block '<Root>/CMC_FE' : Unused code path elimination
 * Block '<S3>/Display' : Unused code path elimination
 * Block '<S4>/Display' : Unused code path elimination
 * Block '<S23>/Data Type Conversion1' : Unused code path elimination
 * Block '<S23>/Data Type Conversion2' : Unused code path elimination
 * Block '<S23>/Data Type Conversion3' : Unused code path elimination
 * Block '<S23>/Data Type Conversion4' : Unused code path elimination
 * Block '<S23>/Display2' : Unused code path elimination
 * Block '<S24>/Display' : Unused code path elimination
 * Block '<S6>/Display' : Unused code path elimination
 * Block '<S35>/Display6' : Unused code path elimination
 * Block '<S44>/Display' : Unused code path elimination
 * Block '<S36>/Display7' : Unused code path elimination
 * Block '<S50>/Display2' : Unused code path elimination
 * Block '<S56>/Gain' : Unused code path elimination
 * Block '<S37>/Display' : Unused code path elimination
 * Block '<S37>/Display1' : Unused code path elimination
 * Block '<S37>/Display3' : Unused code path elimination
 * Block '<S59>/Indice Legno Misurato' : Unused code path elimination
 * Block '<S61>/Data Type Duplicate' : Unused code path elimination
 * Block '<S62>/Data Type Duplicate' : Unused code path elimination
 * Block '<S63>/Data Type Duplicate' : Unused code path elimination
 * Block '<S64>/Data Type Duplicate' : Unused code path elimination
 * Block '<S74>/Gain' : Unused code path elimination
 * Block '<S75>/Gain' : Unused code path elimination
 * Block '<Root>/MCP_AA' : Unused code path elimination
 * Block '<Root>/MCP_FE' : Unused code path elimination
 * Block '<S7>/Display2' : Unused code path elimination
 * Block '<S80>/Display1' : Unused code path elimination
 * Block '<S80>/Display7' : Unused code path elimination
 * Block '<S92>/Display' : Unused code path elimination
 * Block '<S92>/Display1' : Unused code path elimination
 * Block '<S92>/Display2' : Unused code path elimination
 * Block '<S99>/Gain' : Unused code path elimination
 * Block '<S81>/Display' : Unused code path elimination
 * Block '<S81>/Display1' : Unused code path elimination
 * Block '<S81>/Display3' : Unused code path elimination
 * Block '<S103>/Antonio Stimato' : Unused code path elimination
 * Block '<S103>/Mano Domenico Stimata' : Unused code path elimination
 * Block '<S103>/Mano Legno' : Unused code path elimination
 * Block '<S103>/Mano Legno Stimata' : Unused code path elimination
 * Block '<S103>/Mano Legno Stimata1' : Unused code path elimination
 * Block '<S103>/Mano Legno1' : Unused code path elimination
 * Block '<S103>/Mano Max Reale' : Unused code path elimination
 * Block '<S103>/Mano Max Stimata' : Unused code path elimination
 * Block '<S103>/Mano Paolo Stimata' : Unused code path elimination
 * Block '<S82>/Display6' : Unused code path elimination
 * Block '<S106>/Display' : Unused code path elimination
 * Block '<S111>/Data Type Duplicate' : Unused code path elimination
 * Block '<S112>/Data Type Duplicate' : Unused code path elimination
 * Block '<S113>/Data Type Duplicate' : Unused code path elimination
 * Block '<S114>/Data Type Duplicate' : Unused code path elimination
 * Block '<S85>/Gain' : Unused code path elimination
 * Block '<S86>/Gain' : Unused code path elimination
 * Block '<Root>/PIP_FE' : Unused code path elimination
 * Block '<S8>/Display2' : Unused code path elimination
 * Block '<S127>/Display1' : Unused code path elimination
 * Block '<S127>/Display7' : Unused code path elimination
 * Block '<S139>/Display' : Unused code path elimination
 * Block '<S139>/Display1' : Unused code path elimination
 * Block '<S139>/Display2' : Unused code path elimination
 * Block '<S145>/Gain' : Unused code path elimination
 * Block '<S128>/Display' : Unused code path elimination
 * Block '<S128>/Display1' : Unused code path elimination
 * Block '<S128>/Display3' : Unused code path elimination
 * Block '<S147>/Antonio Stimato' : Unused code path elimination
 * Block '<S147>/Mano Domenico Stimata' : Unused code path elimination
 * Block '<S147>/Mano Legno' : Unused code path elimination
 * Block '<S147>/Mano Legno Stimata' : Unused code path elimination
 * Block '<S147>/Mano Legno Stimata1' : Unused code path elimination
 * Block '<S147>/Mano Legno1' : Unused code path elimination
 * Block '<S147>/Mano Max Reale' : Unused code path elimination
 * Block '<S147>/Mano Max Stimata' : Unused code path elimination
 * Block '<S147>/Mano Paolo Stimata' : Unused code path elimination
 * Block '<S129>/Display6' : Unused code path elimination
 * Block '<S151>/Display' : Unused code path elimination
 * Block '<S156>/Data Type Duplicate' : Unused code path elimination
 * Block '<S157>/Data Type Duplicate' : Unused code path elimination
 * Block '<S158>/Data Type Duplicate' : Unused code path elimination
 * Block '<S159>/Data Type Duplicate' : Unused code path elimination
 * Block '<S132>/Gain' : Unused code path elimination
 * Block '<S133>/Gain' : Unused code path elimination
 * Block '<S9>/Display2' : Unused code path elimination
 * Block '<S172>/Display1' : Unused code path elimination
 * Block '<S172>/Display7' : Unused code path elimination
 * Block '<S184>/Display' : Unused code path elimination
 * Block '<S184>/Display1' : Unused code path elimination
 * Block '<S184>/Display2' : Unused code path elimination
 * Block '<S190>/Gain' : Unused code path elimination
 * Block '<S173>/Display' : Unused code path elimination
 * Block '<S173>/Display1' : Unused code path elimination
 * Block '<S173>/Display3' : Unused code path elimination
 * Block '<S192>/Antonio Stimato' : Unused code path elimination
 * Block '<S192>/Mano Domenico Stimata' : Unused code path elimination
 * Block '<S192>/Mano Legno' : Unused code path elimination
 * Block '<S192>/Mano Legno Stimata' : Unused code path elimination
 * Block '<S192>/Mano Legno Stimata1' : Unused code path elimination
 * Block '<S192>/Mano Legno1' : Unused code path elimination
 * Block '<S192>/Mano Max Reale' : Unused code path elimination
 * Block '<S192>/Mano Max Stimata' : Unused code path elimination
 * Block '<S192>/Mano Paolo Stimata' : Unused code path elimination
 * Block '<S174>/Display6' : Unused code path elimination
 * Block '<S196>/Display' : Unused code path elimination
 * Block '<S201>/Data Type Duplicate' : Unused code path elimination
 * Block '<S202>/Data Type Duplicate' : Unused code path elimination
 * Block '<S203>/Data Type Duplicate' : Unused code path elimination
 * Block '<S204>/Data Type Duplicate' : Unused code path elimination
 * Block '<S177>/Gain' : Unused code path elimination
 * Block '<S178>/Gain' : Unused code path elimination
 * Block '<S10>/Display' : Unused code path elimination
 * Block '<S223>/Display' : Unused code path elimination
 * Block '<S242>/Display1' : Unused code path elimination
 * Block '<S242>/Display2' : Unused code path elimination
 * Block '<S242>/Display3' : Unused code path elimination
 * Block '<S242>/Display4' : Unused code path elimination
 * Block '<S242>/Display5' : Unused code path elimination
 * Block '<S242>/Display6' : Unused code path elimination
 * Block '<S242>/Display7' : Unused code path elimination
 * Block '<S242>/Display8' : Unused code path elimination
 * Block '<S242>/Display9' : Unused code path elimination
 * Block '<S243>/Display1' : Unused code path elimination
 * Block '<S243>/Display10' : Unused code path elimination
 * Block '<S243>/Display11' : Unused code path elimination
 * Block '<S243>/Display12' : Unused code path elimination
 * Block '<S243>/Display2' : Unused code path elimination
 * Block '<S243>/Display3' : Unused code path elimination
 * Block '<S243>/Display4' : Unused code path elimination
 * Block '<S243>/Display5' : Unused code path elimination
 * Block '<S243>/Display6' : Unused code path elimination
 * Block '<S243>/Display7' : Unused code path elimination
 * Block '<S243>/Display8' : Unused code path elimination
 * Block '<S243>/Display9' : Unused code path elimination
 * Block '<S12>/Display' : Unused code path elimination
 * Block '<S12>/Display1' : Unused code path elimination
 * Block '<S228>/Display10' : Unused code path elimination
 * Block '<S268>/Display' : Unused code path elimination
 * Block '<S268>/Display1' : Unused code path elimination
 * Block '<S268>/Display2' : Unused code path elimination
 * Block '<S268>/Display3' : Unused code path elimination
 * Block '<S274>/Gain' : Unused code path elimination
 * Block '<S269>/Display' : Unused code path elimination
 * Block '<S269>/Display1' : Unused code path elimination
 * Block '<S269>/Display2' : Unused code path elimination
 * Block '<S275>/Gain' : Unused code path elimination
 * Block '<S270>/Display' : Unused code path elimination
 * Block '<S270>/Display1' : Unused code path elimination
 * Block '<S270>/Display2' : Unused code path elimination
 * Block '<S276>/Gain' : Unused code path elimination
 * Block '<S271>/Display' : Unused code path elimination
 * Block '<S271>/Display1' : Unused code path elimination
 * Block '<S271>/Display3' : Unused code path elimination
 * Block '<S277>/Gain' : Unused code path elimination
 * Block '<S272>/Display' : Unused code path elimination
 * Block '<S272>/Display1' : Unused code path elimination
 * Block '<S272>/Display3' : Unused code path elimination
 * Block '<S278>/Gain' : Unused code path elimination
 * Block '<S229>/Display' : Unused code path elimination
 * Block '<S229>/Display1' : Unused code path elimination
 * Block '<S229>/Display2' : Unused code path elimination
 * Block '<S229>/Display4' : Unused code path elimination
 * Block '<S229>/Display5' : Unused code path elimination
 * Block '<S231>/Display' : Unused code path elimination
 * Block '<S231>/Display1' : Unused code path elimination
 * Block '<S231>/Display10' : Unused code path elimination
 * Block '<S231>/Display13' : Unused code path elimination
 * Block '<S231>/Display14' : Unused code path elimination
 * Block '<S231>/Display3' : Unused code path elimination
 * Block '<S231>/Display4' : Unused code path elimination
 * Block '<S231>/Display6' : Unused code path elimination
 * Block '<S231>/Display7' : Unused code path elimination
 * Block '<S231>/Display8' : Unused code path elimination
 * Block '<S231>/Display9' : Unused code path elimination
 * Block '<S290>/Gain' : Unused code path elimination
 * Block '<S291>/Gain' : Unused code path elimination
 * Block '<S233>/Data Type Conversion20' : Unused code path elimination
 * Block '<S233>/Data Type Conversion6' : Unused code path elimination
 * Block '<S234>/Gain' : Unused code path elimination
 * Block '<S235>/Gain' : Unused code path elimination
 * Block '<S236>/Gain' : Unused code path elimination
 * Block '<S237>/Gain' : Unused code path elimination
 * Block '<S238>/Gain' : Unused code path elimination
 * Block '<S311>/Gain1' : Unused code path elimination
 * Block '<S240>/Display' : Unused code path elimination
 * Block '<S240>/Display1' : Unused code path elimination
 * Block '<S240>/Display2' : Unused code path elimination
 * Block '<S240>/Display3' : Unused code path elimination
 * Block '<S240>/Gain' : Unused code path elimination
 * Block '<S312>/Gain' : Unused code path elimination
 * Block '<S313>/Gain' : Unused code path elimination
 * Block '<S315>/Data Type Conversion1' : Unused code path elimination
 * Block '<S315>/Rate Transition' : Unused code path elimination
 * Block '<S240>/Sum4' : Unused code path elimination
 * Block '<Root>/qo1 index' : Unused code path elimination
 * Block '<Root>/qo1 middle' : Unused code path elimination
 * Block '<Root>/qo1 pinky' : Unused code path elimination
 * Block '<Root>/qo1 ring' : Unused code path elimination
 * Block '<Root>/qo2 index' : Unused code path elimination
 * Block '<Root>/qo2 middle' : Unused code path elimination
 * Block '<Root>/qo2 pinky' : Unused code path elimination
 * Block '<Root>/qo2 ring' : Unused code path elimination
 * Block '<S36>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S36>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S39>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S80>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S80>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S84>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S127>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S127>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S131>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S172>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S172>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S176>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S227>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S243>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S243>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S243>/Data Type Conversion3' : Eliminate redundant data type conversion
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
 * '<Root>' : 'dx_hand_model'
 * '<S1>'   : 'dx_hand_model/Debug Data to Matlab'
 * '<S2>'   : 'dx_hand_model/Debug Data to Ros'
 * '<S3>'   : 'dx_hand_model/Finger Spread'
 * '<S4>'   : 'dx_hand_model/Get From Exo'
 * '<S5>'   : 'dx_hand_model/Get From Schunk'
 * '<S6>'   : 'dx_hand_model/Index Finger'
 * '<S7>'   : 'dx_hand_model/Middle Finger'
 * '<S8>'   : 'dx_hand_model/Pinky Finger'
 * '<S9>'   : 'dx_hand_model/Ring Finger '
 * '<S10>'  : 'dx_hand_model/Send To Exo'
 * '<S11>'  : 'dx_hand_model/Send to Schunk'
 * '<S12>'  : 'dx_hand_model/Thumb'
 * '<S13>'  : 'dx_hand_model/Debug Data to Matlab/Thumb Exo Structure'
 * '<S14>'  : 'dx_hand_model/Debug Data to Ros/Send'
 * '<S15>'  : 'dx_hand_model/Debug Data to Ros/Send/Blank Message2'
 * '<S16>'  : 'dx_hand_model/Debug Data to Ros/Send/MATLAB Function - Assign'
 * '<S17>'  : 'dx_hand_model/Debug Data to Ros/Send/Publish1'
 * '<S18>'  : 'dx_hand_model/Finger Spread/MATLAB Function'
 * '<S19>'  : 'dx_hand_model/Get From Schunk/Currents'
 * '<S20>'  : 'dx_hand_model/Get From Schunk/Get positions'
 * '<S21>'  : 'dx_hand_model/Get From Schunk/Currents/Subscribe'
 * '<S22>'  : 'dx_hand_model/Get From Schunk/Currents/Subscribe/Enabled Subsystem'
 * '<S23>'  : 'dx_hand_model/Get From Schunk/Get positions/Get Efforts'
 * '<S24>'  : 'dx_hand_model/Get From Schunk/Get positions/Get Positions'
 * '<S25>'  : 'dx_hand_model/Get From Schunk/Get positions/Subscribe1'
 * '<S26>'  : 'dx_hand_model/Get From Schunk/Get positions/Get Positions/Filter'
 * '<S27>'  : 'dx_hand_model/Get From Schunk/Get positions/Get Positions/Filter1'
 * '<S28>'  : 'dx_hand_model/Get From Schunk/Get positions/Get Positions/Filter2'
 * '<S29>'  : 'dx_hand_model/Get From Schunk/Get positions/Get Positions/Filter3'
 * '<S30>'  : 'dx_hand_model/Get From Schunk/Get positions/Get Positions/Filter4'
 * '<S31>'  : 'dx_hand_model/Get From Schunk/Get positions/Get Positions/Filter5'
 * '<S32>'  : 'dx_hand_model/Get From Schunk/Get positions/Subscribe1/Enabled Subsystem'
 * '<S33>'  : 'dx_hand_model/Index Finger/Active'
 * '<S34>'  : 'dx_hand_model/Index Finger/Choose'
 * '<S35>'  : 'dx_hand_model/Index Finger/Force'
 * '<S36>'  : 'dx_hand_model/Index Finger/Jacobian Calculation'
 * '<S37>'  : 'dx_hand_model/Index Finger/Pose Generator'
 * '<S38>'  : 'dx_hand_model/Index Finger/Position'
 * '<S39>'  : 'dx_hand_model/Index Finger/Pre-Proc'
 * '<S40>'  : 'dx_hand_model/Index Finger/Send Position'
 * '<S41>'  : 'dx_hand_model/Index Finger/setGain2'
 * '<S42>'  : 'dx_hand_model/Index Finger/Force/Classic_Static_Problem'
 * '<S43>'  : 'dx_hand_model/Index Finger/Force/Optimized_Static_Problem'
 * '<S44>'  : 'dx_hand_model/Index Finger/Force/Position Force Basic Architecture'
 * '<S45>'  : 'dx_hand_model/Index Finger/Force/Subsystem'
 * '<S46>'  : 'dx_hand_model/Index Finger/Force/Position Force Basic Architecture/pos_gains//dist'
 * '<S47>'  : 'dx_hand_model/Index Finger/Force/Position Force Basic Architecture/pos_gains//prox'
 * '<S48>'  : 'dx_hand_model/Index Finger/Jacobian Calculation/Jacobian'
 * '<S49>'  : 'dx_hand_model/Index Finger/Jacobian Calculation/Jacobian Optim '
 * '<S50>'  : 'dx_hand_model/Index Finger/Pose Generator/Angular Potentiometer'
 * '<S51>'  : 'dx_hand_model/Index Finger/Pose Generator/Index Direct Kinematics'
 * '<S52>'  : 'dx_hand_model/Index Finger/Pose Generator/Parameters'
 * '<S53>'  : 'dx_hand_model/Index Finger/Pose Generator/Parametri Dito'
 * '<S54>'  : 'dx_hand_model/Index Finger/Pose Generator/Record'
 * '<S55>'  : 'dx_hand_model/Index Finger/Pose Generator/Subsystem'
 * '<S56>'  : 'dx_hand_model/Index Finger/Pose Generator/Angular Potentiometer/Radians to Degrees1'
 * '<S57>'  : 'dx_hand_model/Index Finger/Pose Generator/Parameters/Index Parameters'
 * '<S58>'  : 'dx_hand_model/Index Finger/Pose Generator/Parametri Dito/Get_from_ROS_param'
 * '<S59>'  : 'dx_hand_model/Index Finger/Pose Generator/Parametri Dito/Hand Written'
 * '<S60>'  : 'dx_hand_model/Index Finger/Position/Classic_Static_Problem'
 * '<S61>'  : 'dx_hand_model/Index Finger/Position/Discrete Derivative'
 * '<S62>'  : 'dx_hand_model/Index Finger/Position/Discrete Derivative1'
 * '<S63>'  : 'dx_hand_model/Index Finger/Position/Discrete Derivative2'
 * '<S64>'  : 'dx_hand_model/Index Finger/Position/Discrete Derivative3'
 * '<S65>'  : 'dx_hand_model/Index Finger/Position/Optimized_Static_Problem'
 * '<S66>'  : 'dx_hand_model/Index Finger/Position/Pre-Proc'
 * '<S67>'  : 'dx_hand_model/Index Finger/Position/active'
 * '<S68>'  : 'dx_hand_model/Index Finger/Position/active1'
 * '<S69>'  : 'dx_hand_model/Index Finger/Position/setGain'
 * '<S70>'  : 'dx_hand_model/Index Finger/Position/setGain '
 * '<S71>'  : 'dx_hand_model/Index Finger/Position/setGain 1'
 * '<S72>'  : 'dx_hand_model/Index Finger/Position/setGain 2'
 * '<S73>'  : 'dx_hand_model/Index Finger/Pre-Proc/IsNan '
 * '<S74>'  : 'dx_hand_model/Index Finger/Send Position/Radians to Degrees'
 * '<S75>'  : 'dx_hand_model/Index Finger/Send Position/Radians to Degrees1'
 * '<S76>'  : 'dx_hand_model/Index Finger/Send Position/setGain'
 * '<S77>'  : 'dx_hand_model/Index Finger/Send Position/setGain1'
 * '<S78>'  : 'dx_hand_model/Middle Finger/Active'
 * '<S79>'  : 'dx_hand_model/Middle Finger/Choose'
 * '<S80>'  : 'dx_hand_model/Middle Finger/Jacobian Calculation'
 * '<S81>'  : 'dx_hand_model/Middle Finger/Pose Generator'
 * '<S82>'  : 'dx_hand_model/Middle Finger/Position-Force Architecture'
 * '<S83>'  : 'dx_hand_model/Middle Finger/Position-Position'
 * '<S84>'  : 'dx_hand_model/Middle Finger/Pre-Proc'
 * '<S85>'  : 'dx_hand_model/Middle Finger/Radians to Degrees'
 * '<S86>'  : 'dx_hand_model/Middle Finger/Radians to Degrees1'
 * '<S87>'  : 'dx_hand_model/Middle Finger/setGain'
 * '<S88>'  : 'dx_hand_model/Middle Finger/setGain1'
 * '<S89>'  : 'dx_hand_model/Middle Finger/setGain2'
 * '<S90>'  : 'dx_hand_model/Middle Finger/Jacobian Calculation/Middle Jacobian'
 * '<S91>'  : 'dx_hand_model/Middle Finger/Jacobian Calculation/Middle Jacobian '
 * '<S92>'  : 'dx_hand_model/Middle Finger/Pose Generator/Angular Potentiometer'
 * '<S93>'  : 'dx_hand_model/Middle Finger/Pose Generator/Filtro'
 * '<S94>'  : 'dx_hand_model/Middle Finger/Pose Generator/Linear Potentiometer'
 * '<S95>'  : 'dx_hand_model/Middle Finger/Pose Generator/Middle Direct Kinematics'
 * '<S96>'  : 'dx_hand_model/Middle Finger/Pose Generator/Parameters'
 * '<S97>'  : 'dx_hand_model/Middle Finger/Pose Generator/Parametri Dito'
 * '<S98>'  : 'dx_hand_model/Middle Finger/Pose Generator/Record'
 * '<S99>'  : 'dx_hand_model/Middle Finger/Pose Generator/Angular Potentiometer/Radians to Degrees'
 * '<S100>' : 'dx_hand_model/Middle Finger/Pose Generator/Filtro/Filtro'
 * '<S101>' : 'dx_hand_model/Middle Finger/Pose Generator/Parameters/Middle Parameters'
 * '<S102>' : 'dx_hand_model/Middle Finger/Pose Generator/Parametri Dito/Get_from_ROS_param'
 * '<S103>' : 'dx_hand_model/Middle Finger/Pose Generator/Parametri Dito/Hand_written'
 * '<S104>' : 'dx_hand_model/Middle Finger/Position-Force Architecture/Classic_Static_Problem'
 * '<S105>' : 'dx_hand_model/Middle Finger/Position-Force Architecture/Optimized_Static_Problem'
 * '<S106>' : 'dx_hand_model/Middle Finger/Position-Force Architecture/Position Force Basic Architecture'
 * '<S107>' : 'dx_hand_model/Middle Finger/Position-Force Architecture/Subsystem'
 * '<S108>' : 'dx_hand_model/Middle Finger/Position-Force Architecture/Position Force Basic Architecture/pos_gains//dist'
 * '<S109>' : 'dx_hand_model/Middle Finger/Position-Force Architecture/Position Force Basic Architecture/pos_gains//prox'
 * '<S110>' : 'dx_hand_model/Middle Finger/Position-Position/Classic_Static_Problem'
 * '<S111>' : 'dx_hand_model/Middle Finger/Position-Position/Discrete Derivative'
 * '<S112>' : 'dx_hand_model/Middle Finger/Position-Position/Discrete Derivative1'
 * '<S113>' : 'dx_hand_model/Middle Finger/Position-Position/Discrete Derivative2'
 * '<S114>' : 'dx_hand_model/Middle Finger/Position-Position/Discrete Derivative3'
 * '<S115>' : 'dx_hand_model/Middle Finger/Position-Position/Optimized_Static_Problem'
 * '<S116>' : 'dx_hand_model/Middle Finger/Position-Position/Pre-Proc'
 * '<S117>' : 'dx_hand_model/Middle Finger/Position-Position/active'
 * '<S118>' : 'dx_hand_model/Middle Finger/Position-Position/active1'
 * '<S119>' : 'dx_hand_model/Middle Finger/Position-Position/setGain'
 * '<S120>' : 'dx_hand_model/Middle Finger/Position-Position/setGain '
 * '<S121>' : 'dx_hand_model/Middle Finger/Position-Position/setGain 1'
 * '<S122>' : 'dx_hand_model/Middle Finger/Position-Position/setGain 2'
 * '<S123>' : 'dx_hand_model/Middle Finger/Pre-Proc/IsNan '
 * '<S124>' : 'dx_hand_model/Pinky Finger/Active'
 * '<S125>' : 'dx_hand_model/Pinky Finger/Choose'
 * '<S126>' : 'dx_hand_model/Pinky Finger/Choose_'
 * '<S127>' : 'dx_hand_model/Pinky Finger/Jacobian Calculation'
 * '<S128>' : 'dx_hand_model/Pinky Finger/Pose Generator'
 * '<S129>' : 'dx_hand_model/Pinky Finger/Position-Force Architecture'
 * '<S130>' : 'dx_hand_model/Pinky Finger/Position-Position'
 * '<S131>' : 'dx_hand_model/Pinky Finger/Pre-Proc'
 * '<S132>' : 'dx_hand_model/Pinky Finger/Radians to Degrees'
 * '<S133>' : 'dx_hand_model/Pinky Finger/Radians to Degrees1'
 * '<S134>' : 'dx_hand_model/Pinky Finger/setGain'
 * '<S135>' : 'dx_hand_model/Pinky Finger/setGain1'
 * '<S136>' : 'dx_hand_model/Pinky Finger/setGain2'
 * '<S137>' : 'dx_hand_model/Pinky Finger/Jacobian Calculation/Pinky Jacobian'
 * '<S138>' : 'dx_hand_model/Pinky Finger/Jacobian Calculation/Pinky Jacobian '
 * '<S139>' : 'dx_hand_model/Pinky Finger/Pose Generator/Angular Potentiometer'
 * '<S140>' : 'dx_hand_model/Pinky Finger/Pose Generator/Linear Potentiometer'
 * '<S141>' : 'dx_hand_model/Pinky Finger/Pose Generator/Parametri Ring'
 * '<S142>' : 'dx_hand_model/Pinky Finger/Pose Generator/Pinky Direct Kinematics'
 * '<S143>' : 'dx_hand_model/Pinky Finger/Pose Generator/Pinky Parameters'
 * '<S144>' : 'dx_hand_model/Pinky Finger/Pose Generator/Record'
 * '<S145>' : 'dx_hand_model/Pinky Finger/Pose Generator/Angular Potentiometer/Radians to Degrees'
 * '<S146>' : 'dx_hand_model/Pinky Finger/Pose Generator/Parametri Ring/Get_from_ROS_param'
 * '<S147>' : 'dx_hand_model/Pinky Finger/Pose Generator/Parametri Ring/Hand_written'
 * '<S148>' : 'dx_hand_model/Pinky Finger/Pose Generator/Pinky Parameters/Pinky Parameters'
 * '<S149>' : 'dx_hand_model/Pinky Finger/Position-Force Architecture/Classic_Static_Problem'
 * '<S150>' : 'dx_hand_model/Pinky Finger/Position-Force Architecture/Optimized_Static_Problem'
 * '<S151>' : 'dx_hand_model/Pinky Finger/Position-Force Architecture/Position Force Basic Architecture'
 * '<S152>' : 'dx_hand_model/Pinky Finger/Position-Force Architecture/Subsystem'
 * '<S153>' : 'dx_hand_model/Pinky Finger/Position-Force Architecture/Position Force Basic Architecture/f_gains//dist'
 * '<S154>' : 'dx_hand_model/Pinky Finger/Position-Force Architecture/Position Force Basic Architecture/f_gains//prox'
 * '<S155>' : 'dx_hand_model/Pinky Finger/Position-Position/Classic_Static_Problem'
 * '<S156>' : 'dx_hand_model/Pinky Finger/Position-Position/Discrete Derivative'
 * '<S157>' : 'dx_hand_model/Pinky Finger/Position-Position/Discrete Derivative1'
 * '<S158>' : 'dx_hand_model/Pinky Finger/Position-Position/Discrete Derivative2'
 * '<S159>' : 'dx_hand_model/Pinky Finger/Position-Position/Discrete Derivative3'
 * '<S160>' : 'dx_hand_model/Pinky Finger/Position-Position/Optimized_Static_Problem'
 * '<S161>' : 'dx_hand_model/Pinky Finger/Position-Position/Pre-Proc'
 * '<S162>' : 'dx_hand_model/Pinky Finger/Position-Position/active'
 * '<S163>' : 'dx_hand_model/Pinky Finger/Position-Position/active1'
 * '<S164>' : 'dx_hand_model/Pinky Finger/Position-Position/setGain'
 * '<S165>' : 'dx_hand_model/Pinky Finger/Position-Position/setGain '
 * '<S166>' : 'dx_hand_model/Pinky Finger/Position-Position/setGain 1'
 * '<S167>' : 'dx_hand_model/Pinky Finger/Position-Position/setGain 2'
 * '<S168>' : 'dx_hand_model/Pinky Finger/Pre-Proc/IsNan '
 * '<S169>' : 'dx_hand_model/Ring Finger /Active'
 * '<S170>' : 'dx_hand_model/Ring Finger /Choose'
 * '<S171>' : 'dx_hand_model/Ring Finger /Choose_'
 * '<S172>' : 'dx_hand_model/Ring Finger /Jacobian Calculation'
 * '<S173>' : 'dx_hand_model/Ring Finger /Pose Generator'
 * '<S174>' : 'dx_hand_model/Ring Finger /Position-Force Architecture'
 * '<S175>' : 'dx_hand_model/Ring Finger /Position-Position'
 * '<S176>' : 'dx_hand_model/Ring Finger /Pre-Proc'
 * '<S177>' : 'dx_hand_model/Ring Finger /Radians to Degrees'
 * '<S178>' : 'dx_hand_model/Ring Finger /Radians to Degrees1'
 * '<S179>' : 'dx_hand_model/Ring Finger /setGain'
 * '<S180>' : 'dx_hand_model/Ring Finger /setGain1'
 * '<S181>' : 'dx_hand_model/Ring Finger /setGain2'
 * '<S182>' : 'dx_hand_model/Ring Finger /Jacobian Calculation/Ring Jacobian'
 * '<S183>' : 'dx_hand_model/Ring Finger /Jacobian Calculation/Ring Jacobian '
 * '<S184>' : 'dx_hand_model/Ring Finger /Pose Generator/Angular Potentiometer'
 * '<S185>' : 'dx_hand_model/Ring Finger /Pose Generator/Linear Potentiometer'
 * '<S186>' : 'dx_hand_model/Ring Finger /Pose Generator/Parametri Ring'
 * '<S187>' : 'dx_hand_model/Ring Finger /Pose Generator/Record'
 * '<S188>' : 'dx_hand_model/Ring Finger /Pose Generator/Ring Direct Kinematics'
 * '<S189>' : 'dx_hand_model/Ring Finger /Pose Generator/Ring Parameters'
 * '<S190>' : 'dx_hand_model/Ring Finger /Pose Generator/Angular Potentiometer/Radians to Degrees'
 * '<S191>' : 'dx_hand_model/Ring Finger /Pose Generator/Parametri Ring/Get_from_ROS_param'
 * '<S192>' : 'dx_hand_model/Ring Finger /Pose Generator/Parametri Ring/Hand_written'
 * '<S193>' : 'dx_hand_model/Ring Finger /Pose Generator/Ring Parameters/Ring Parameters'
 * '<S194>' : 'dx_hand_model/Ring Finger /Position-Force Architecture/Classic_Static_Problem'
 * '<S195>' : 'dx_hand_model/Ring Finger /Position-Force Architecture/Optimized_Static_Problem'
 * '<S196>' : 'dx_hand_model/Ring Finger /Position-Force Architecture/Position Force Basic Architecture'
 * '<S197>' : 'dx_hand_model/Ring Finger /Position-Force Architecture/Subsystem'
 * '<S198>' : 'dx_hand_model/Ring Finger /Position-Force Architecture/Position Force Basic Architecture/pos_gains//dist'
 * '<S199>' : 'dx_hand_model/Ring Finger /Position-Force Architecture/Position Force Basic Architecture/pos_gains//prox'
 * '<S200>' : 'dx_hand_model/Ring Finger /Position-Position/Classic_Static_Problem'
 * '<S201>' : 'dx_hand_model/Ring Finger /Position-Position/Discrete Derivative'
 * '<S202>' : 'dx_hand_model/Ring Finger /Position-Position/Discrete Derivative1'
 * '<S203>' : 'dx_hand_model/Ring Finger /Position-Position/Discrete Derivative2'
 * '<S204>' : 'dx_hand_model/Ring Finger /Position-Position/Discrete Derivative3'
 * '<S205>' : 'dx_hand_model/Ring Finger /Position-Position/Optimized_Static_Problem'
 * '<S206>' : 'dx_hand_model/Ring Finger /Position-Position/Pre-Proc'
 * '<S207>' : 'dx_hand_model/Ring Finger /Position-Position/active'
 * '<S208>' : 'dx_hand_model/Ring Finger /Position-Position/active1'
 * '<S209>' : 'dx_hand_model/Ring Finger /Position-Position/setGain'
 * '<S210>' : 'dx_hand_model/Ring Finger /Position-Position/setGain '
 * '<S211>' : 'dx_hand_model/Ring Finger /Position-Position/setGain 1'
 * '<S212>' : 'dx_hand_model/Ring Finger /Position-Position/setGain 2'
 * '<S213>' : 'dx_hand_model/Ring Finger /Pre-Proc/IsNan '
 * '<S214>' : 'dx_hand_model/Send to Schunk/Enable'
 * '<S215>' : 'dx_hand_model/Send to Schunk/Send data to Ros'
 * '<S216>' : 'dx_hand_model/Send to Schunk/Signal Conditioning'
 * '<S217>' : 'dx_hand_model/Send to Schunk/Send data to Ros/Blank Message2'
 * '<S218>' : 'dx_hand_model/Send to Schunk/Send data to Ros/MATLAB Function - Assign'
 * '<S219>' : 'dx_hand_model/Send to Schunk/Send data to Ros/Publish1'
 * '<S220>' : 'dx_hand_model/Send to Schunk/Send data to Ros/Publish12'
 * '<S221>' : 'dx_hand_model/Send to Schunk/Signal Conditioning/Subsystem'
 * '<S222>' : 'dx_hand_model/Send to Schunk/Signal Conditioning/Subsystem1'
 * '<S223>' : 'dx_hand_model/Send to Schunk/Signal Conditioning/Subsystem2'
 * '<S224>' : 'dx_hand_model/Send to Schunk/Signal Conditioning/Subsystem3'
 * '<S225>' : 'dx_hand_model/Send to Schunk/Signal Conditioning/Subsystem4'
 * '<S226>' : 'dx_hand_model/Send to Schunk/Signal Conditioning/Subsystem5'
 * '<S227>' : 'dx_hand_model/Thumb/Direct Kinematics'
 * '<S228>' : 'dx_hand_model/Thumb/Force Feedback'
 * '<S229>' : 'dx_hand_model/Thumb/Get ADC Values'
 * '<S230>' : 'dx_hand_model/Thumb/Get_from_ROS_param'
 * '<S231>' : 'dx_hand_model/Thumb/Metacarphal Phalanx'
 * '<S232>' : 'dx_hand_model/Thumb/Old Stuff'
 * '<S233>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx'
 * '<S234>' : 'dx_hand_model/Thumb/Radians to Degrees1'
 * '<S235>' : 'dx_hand_model/Thumb/Radians to Degrees2'
 * '<S236>' : 'dx_hand_model/Thumb/Radians to Degrees3'
 * '<S237>' : 'dx_hand_model/Thumb/Radians to Degrees4'
 * '<S238>' : 'dx_hand_model/Thumb/Radians to Degrees5'
 * '<S239>' : 'dx_hand_model/Thumb/Study Gravity Compensation'
 * '<S240>' : 'dx_hand_model/Thumb/ToSchunk'
 * '<S241>' : 'dx_hand_model/Thumb/Direct Kinematics/F transformation new'
 * '<S242>' : 'dx_hand_model/Thumb/Direct Kinematics/Get G'
 * '<S243>' : 'dx_hand_model/Thumb/Direct Kinematics/get H'
 * '<S244>' : 'dx_hand_model/Thumb/Direct Kinematics/Get G/MATLAB Function'
 * '<S245>' : 'dx_hand_model/Thumb/Direct Kinematics/Get G/MATLAB Function1'
 * '<S246>' : 'dx_hand_model/Thumb/Direct Kinematics/Get G/MATLAB Function10'
 * '<S247>' : 'dx_hand_model/Thumb/Direct Kinematics/Get G/MATLAB Function2'
 * '<S248>' : 'dx_hand_model/Thumb/Direct Kinematics/Get G/MATLAB Function3'
 * '<S249>' : 'dx_hand_model/Thumb/Direct Kinematics/Get G/MATLAB Function4'
 * '<S250>' : 'dx_hand_model/Thumb/Direct Kinematics/Get G/MATLAB Function5'
 * '<S251>' : 'dx_hand_model/Thumb/Direct Kinematics/Get G/MATLAB Function6'
 * '<S252>' : 'dx_hand_model/Thumb/Direct Kinematics/Get G/MATLAB Function7'
 * '<S253>' : 'dx_hand_model/Thumb/Direct Kinematics/Get G/MATLAB Function8'
 * '<S254>' : 'dx_hand_model/Thumb/Direct Kinematics/Get G/MATLAB Function9'
 * '<S255>' : 'dx_hand_model/Thumb/Direct Kinematics/get H/MATLAB Function'
 * '<S256>' : 'dx_hand_model/Thumb/Direct Kinematics/get H/MATLAB Function1'
 * '<S257>' : 'dx_hand_model/Thumb/Direct Kinematics/get H/MATLAB Function10'
 * '<S258>' : 'dx_hand_model/Thumb/Direct Kinematics/get H/MATLAB Function2'
 * '<S259>' : 'dx_hand_model/Thumb/Direct Kinematics/get H/MATLAB Function3'
 * '<S260>' : 'dx_hand_model/Thumb/Direct Kinematics/get H/MATLAB Function4'
 * '<S261>' : 'dx_hand_model/Thumb/Direct Kinematics/get H/MATLAB Function5'
 * '<S262>' : 'dx_hand_model/Thumb/Direct Kinematics/get H/MATLAB Function6'
 * '<S263>' : 'dx_hand_model/Thumb/Direct Kinematics/get H/MATLAB Function7'
 * '<S264>' : 'dx_hand_model/Thumb/Direct Kinematics/get H/MATLAB Function8'
 * '<S265>' : 'dx_hand_model/Thumb/Direct Kinematics/get H/MATLAB Function9'
 * '<S266>' : 'dx_hand_model/Thumb/Force Feedback/Active'
 * '<S267>' : 'dx_hand_model/Thumb/Force Feedback/g1'
 * '<S268>' : 'dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 1'
 * '<S269>' : 'dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 2'
 * '<S270>' : 'dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 3'
 * '<S271>' : 'dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 4'
 * '<S272>' : 'dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 5'
 * '<S273>' : 'dx_hand_model/Thumb/Get ADC Values/Subsystem'
 * '<S274>' : 'dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 1/Radians to Degrees'
 * '<S275>' : 'dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 2/Radians to Degrees'
 * '<S276>' : 'dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 3/Radians to Degrees'
 * '<S277>' : 'dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 4/Radians to Degrees'
 * '<S278>' : 'dx_hand_model/Thumb/Get ADC Values/Angular Potentiometer 5/Radians to Degrees'
 * '<S279>' : 'dx_hand_model/Thumb/Get_from_ROS_param/Subsystem'
 * '<S280>' : 'dx_hand_model/Thumb/Get_from_ROS_param/Subsystem1'
 * '<S281>' : 'dx_hand_model/Thumb/Get_from_ROS_param/Subsystem2'
 * '<S282>' : 'dx_hand_model/Thumb/Get_from_ROS_param/Subsystem3'
 * '<S283>' : 'dx_hand_model/Thumb/Get_from_ROS_param/Subsystem4'
 * '<S284>' : 'dx_hand_model/Thumb/Get_from_ROS_param/Subsystem5'
 * '<S285>' : 'dx_hand_model/Thumb/Get_from_ROS_param/Subsystem6'
 * '<S286>' : 'dx_hand_model/Thumb/Metacarphal Phalanx/Find K position'
 * '<S287>' : 'dx_hand_model/Thumb/Metacarphal Phalanx/MATLAB Function'
 * '<S288>' : 'dx_hand_model/Thumb/Metacarphal Phalanx/MATLAB Function1'
 * '<S289>' : 'dx_hand_model/Thumb/Metacarphal Phalanx/MATLAB Function4'
 * '<S290>' : 'dx_hand_model/Thumb/Metacarphal Phalanx/Radians to Degrees1'
 * '<S291>' : 'dx_hand_model/Thumb/Metacarphal Phalanx/Radians to Degrees2'
 * '<S292>' : 'dx_hand_model/Thumb/Metacarphal Phalanx/get_Angles'
 * '<S293>' : 'dx_hand_model/Thumb/Old Stuff/MATLAB Function'
 * '<S294>' : 'dx_hand_model/Thumb/Old Stuff/MATLAB Function1'
 * '<S295>' : 'dx_hand_model/Thumb/Old Stuff/calibration'
 * '<S296>' : 'dx_hand_model/Thumb/Old Stuff/calibration1'
 * '<S297>' : 'dx_hand_model/Thumb/Old Stuff/calibration/Subsystem'
 * '<S298>' : 'dx_hand_model/Thumb/Old Stuff/calibration1/Subsystem1'
 * '<S299>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx/APPROSSIMAZIONE'
 * '<S300>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx/Find K'
 * '<S301>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx/Get Min'
 * '<S302>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx/MATLAB Function'
 * '<S303>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx/MATLAB Function1'
 * '<S304>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx/MATLAB Function2'
 * '<S305>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx/MATLAB Function3'
 * '<S306>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx/MATLAB Function4'
 * '<S307>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx/MATLAB Function5'
 * '<S308>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx/Mother of Kinematics'
 * '<S309>' : 'dx_hand_model/Thumb/Proximal and Distal Phalanx/Teorema Coseni'
 * '<S310>' : 'dx_hand_model/Thumb/Study Gravity Compensation/Subsystem2'
 * '<S311>' : 'dx_hand_model/Thumb/ToSchunk/Degrees to Radians2'
 * '<S312>' : 'dx_hand_model/Thumb/ToSchunk/Radians to Degrees3'
 * '<S313>' : 'dx_hand_model/Thumb/ToSchunk/Radians to Degrees5'
 * '<S314>' : 'dx_hand_model/Thumb/ToSchunk/Subsystem'
 * '<S315>' : 'dx_hand_model/Thumb/ToSchunk/Subsystem1'
 */
#endif                                 /* RTW_HEADER_dx_hand_model_h_ */
