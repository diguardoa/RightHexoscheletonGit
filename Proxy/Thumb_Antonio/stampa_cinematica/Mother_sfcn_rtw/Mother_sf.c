/*
 * Mother_sf.c
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

#include <math.h>
#include "Mother_sf.h"
#include "Mother_sf_private.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

extern void *Mother_malloc(SimStruct *S);

#endif

#ifndef __RTW_UTFREE__
#if defined (MATLAB_MEX_FILE)

extern void * utMalloc(size_t);
extern void utFree(void *);

#endif
#endif                                 /* #ifndef __RTW_UTFREE__ */

/* Forward declaration for local functions */
static void Mother_exp(creal32_T *x);
static real32_T Mother_rt_hypotf_snf(real32_T u0, real32_T u1);
static creal32_T Mother_my_sqrt(const creal32_T x);
static real32_T Mother_rt_atan2f_snf(real32_T u0, real32_T u1);
static void Mother_log(creal32_T *x);

#if defined(MATLAB_MEX_FILE)
#include "rt_nonfinite.c"
#endif

static const char_T *RT_MEMORY_ALLOCATION_ERROR =
  "memory allocation error in generated S-Function";

/* Function for MATLAB Function: '<Root>/Mother of Kinematics' */
static void Mother_exp(creal32_T *x)
{
  real32_T r;
  real32_T x_im;
  if (x->im == 0.0F) {
    x->re = (real32_T)exp(x->re);
    x->im = 0.0F;
  } else if (rtIsInfF(x->im) && rtIsInfF(x->re) && (x->re < 0.0F)) {
    x->re = 0.0F;
    x->im = 0.0F;
  } else {
    r = (real32_T)exp(x->re / 2.0F);
    x_im = x->im;
    x->re = r * (real32_T)cos(x->im) * r;
    x->im = r * (real32_T)sin(x_im) * r;
  }
}

static real32_T Mother_rt_hypotf_snf(real32_T u0, real32_T u1)
{
  real32_T y;
  real32_T a;
  a = (real32_T)fabs(u0);
  y = (real32_T)fabs(u1);
  if (a < y) {
    a /= y;
    y *= (real32_T)sqrt(a * a + 1.0F);
  } else if (a > y) {
    y /= a;
    y = (real32_T)sqrt(y * y + 1.0F) * a;
  } else {
    if (!rtIsNaNF(y)) {
      y = a * 1.41421354F;
    }
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/Mother of Kinematics' */
static creal32_T Mother_my_sqrt(const creal32_T x)
{
  creal32_T y;
  real32_T xr;
  real32_T absxr;
  xr = x.re;
  if (x.im == 0.0F) {
    if (x.re < 0.0F) {
      absxr = 0.0F;
      xr = (real32_T)sqrt(-x.re);
    } else {
      absxr = (real32_T)sqrt(x.re);
      xr = 0.0F;
    }
  } else if (x.re == 0.0F) {
    if (x.im < 0.0F) {
      absxr = (real32_T)sqrt(-x.im / 2.0F);
      xr = -absxr;
    } else {
      absxr = (real32_T)sqrt(x.im / 2.0F);
      xr = absxr;
    }
  } else if (rtIsNaNF(x.re)) {
    absxr = x.re;
  } else if (rtIsNaNF(x.im)) {
    absxr = x.im;
    xr = x.im;
  } else if (rtIsInfF(x.im)) {
    absxr = (real32_T)fabs(x.im);
    xr = x.im;
  } else if (rtIsInfF(x.re)) {
    if (x.re < 0.0F) {
      absxr = 0.0F;
      xr = x.im * -x.re;
    } else {
      absxr = x.re;
      xr = 0.0F;
    }
  } else {
    absxr = (real32_T)fabs(x.re);
    xr = (real32_T)fabs(x.im);
    if ((absxr > 8.50705867E+37F) || (xr > 8.50705867E+37F)) {
      absxr *= 0.5F;
      xr = Mother_rt_hypotf_snf(absxr, xr * 0.5F);
      if (xr > absxr) {
        absxr = (real32_T)sqrt(absxr / xr + 1.0F) * (real32_T)sqrt(xr);
      } else {
        absxr = (real32_T)sqrt(xr) * 1.41421354F;
      }
    } else {
      absxr = (real32_T)sqrt((Mother_rt_hypotf_snf(absxr, xr) + absxr) * 0.5F);
    }

    if (x.re > 0.0F) {
      xr = x.im / absxr * 0.5F;
    } else {
      if (x.im < 0.0F) {
        xr = -absxr;
      } else {
        xr = absxr;
      }

      absxr = x.im / xr * 0.5F;
    }
  }

  y.re = absxr;
  y.im = xr;
  return y;
}

static real32_T Mother_rt_atan2f_snf(real32_T u0, real32_T u1)
{
  real32_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else if (rtIsInfF(u0) && rtIsInfF(u1)) {
    if (u0 > 0.0F) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0F) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = (real32_T)atan2((real32_T)u0_0, (real32_T)u1_0);
  } else if (u1 == 0.0F) {
    if (u0 > 0.0F) {
      y = RT_PIF / 2.0F;
    } else if (u0 < 0.0F) {
      y = -(RT_PIF / 2.0F);
    } else {
      y = 0.0F;
    }
  } else {
    y = (real32_T)atan2(u0, u1);
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/Mother of Kinematics' */
static void Mother_log(creal32_T *x)
{
  real32_T x_im;
  real32_T x_re;
  if (x->im == 0.0F) {
    if (x->re < 0.0F) {
      x->re = (real32_T)log((real32_T)fabs(x->re));
      x->im = 3.14159274F;
    } else {
      x->re = (real32_T)log((real32_T)fabs(x->re));
      x->im = 0.0F;
    }
  } else if (((real32_T)fabs(x->re) > 1.70141173E+38F) || ((real32_T)fabs(x->im)
              > 1.70141173E+38F)) {
    x_im = x->im;
    x_re = x->re;
    x->re = (real32_T)log(Mother_rt_hypotf_snf(x->re / 2.0F, x->im / 2.0F)) +
      0.693147182F;
    x->im = Mother_rt_atan2f_snf(x_im, x_re);
  } else {
    x_im = x->im;
    x_re = x->re;
    x->re = (real32_T)log(Mother_rt_hypotf_snf(x->re, x->im));
    x->im = Mother_rt_atan2f_snf(x_im, x_re);
  }
}

/* Start for root system: '<Root>' */
#define MDL_START

static void mdlStart(SimStruct *S)
{
  /* instance underlying S-Function data */
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  if defined(MATLAB_MEX_FILE)

  /* non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

#  endif

  Mother_malloc(S);
  if (ssGetErrorStatus(S) != (NULL) ) {
    return;
  }

#endif

  {
  }
}

/* Outputs for root system: '<Root>' */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  static creal32_T t3;
  static creal32_T t5;
  static creal32_T t7;
  static creal32_T t9;
  static creal32_T t11;
  static creal32_T t19;
  static real32_T t20;
  static real32_T t21;
  static real32_T t22;
  static real32_T t23;
  static real32_T t24;
  static creal32_T t25;
  static creal32_T h;
  static creal32_T t25_0;
  static creal32_T t25_1;
  static real32_T t12_re;
  static real32_T t12_im;
  static real32_T t13_re;
  static real32_T t13_im;
  static real32_T t14_re;
  static real32_T t14_im;
  static real32_T t15_re;
  static real32_T t15_im;
  static real32_T t16_re;
  static real32_T t16_im;
  static real32_T t17_re;
  static real32_T t17_im;
  static real32_T t166_re;
  static real32_T t166_im;
  static real32_T t168_re;
  static real32_T t168_im;
  static real32_T t170_re;
  static real32_T t170_im;
  static real32_T t177_re;
  static real32_T t177_im;
  static real32_T t178_re;
  static real32_T t178_im;
  static real32_T t179_re;
  static real32_T t179_im;
  static real32_T t204_re;
  static real32_T t204_im;
  static real32_T t207_im;
  static real32_T t208_re;
  static real32_T t212_re;
  static real32_T t215_im;
  static real32_T t216_im;
  static real32_T t218_im;
  static real32_T t220_re;
  static real32_T t222_re;
  static real32_T t222_im;
  static real32_T t223_re;
  static real32_T t223_im;
  static real32_T t224_re;
  static real32_T t224_im;
  static real32_T t225_re;
  static real32_T t225_im;
  static real32_T t226_re;
  static real32_T t226_im;
  static real32_T t227_re;
  static real32_T t227_im;
  static real32_T t228_re;
  static real32_T t228_im;
  static real32_T t229_re;
  static real32_T t229_im;
  static real32_T t230_re;
  static real32_T t230_im;
  static real32_T t231_re;
  static real32_T t231_im;
  static real32_T t232_re;
  static real32_T t232_im;
  static real32_T t233_re;
  static real32_T t233_im;
  static real32_T t234_re;
  static real32_T t234_im;
  static real32_T t235_re;
  static real32_T t235_im;
  static real32_T t236_re;
  static real32_T t236_im;
  static real32_T t237_re;
  static real32_T t237_im;
  static real32_T t238_re;
  static real32_T t238_im;
  static real32_T t239_re;
  static real32_T t239_im;
  static real32_T t240_re;
  static real32_T t242_re;
  static real32_T t242_im;
  static real32_T t243_re;
  static real32_T t243_im;
  static real32_T t244_re;
  static real32_T t244_im;
  static real32_T t245_re;
  static real32_T t245_im;
  static real32_T t246_re;
  static real32_T t246_im;
  static real32_T t247_re;
  static real32_T t247_im;
  static real32_T t248_re;
  static real32_T t248_im;
  static real32_T t249_re;
  static real32_T t249_im;
  static real32_T t250_re;
  static real32_T t250_im;
  static real32_T t251_re;
  static real32_T t251_im;
  static real32_T t252_re;
  static real32_T t252_im;
  static real32_T t253_re;
  static real32_T t253_im;
  static real32_T t254_re;
  static real32_T t254_im;
  static real32_T t255_re;
  static real32_T t255_im;
  static real32_T t256_re;
  static real32_T t256_im;
  static real32_T t257_re;
  static real32_T t257_im;
  static real32_T t258_re;
  static real32_T t258_im;
  static real32_T t259_re;
  static real32_T t259_im;
  static real32_T t260_re;
  static real32_T t260_im;
  static real32_T t261_re;
  static real32_T t261_im;
  static real32_T t262_re;
  static real32_T t262_im;
  static real32_T t263_re;
  static real32_T t263_im;
  static real32_T t264_re;
  static real32_T t264_im;
  static real32_T t265_re;
  static real32_T t265_im;
  static real32_T t266_re;
  static real32_T t266_im;
  static real32_T t267_re;
  static real32_T t267_im;
  static real32_T t268_re;
  static real32_T t268_im;
  static real32_T t269_re;
  static real32_T t269_im;
  static real32_T t270_re;
  static real32_T t270_im;
  static real32_T t271_re;
  static real32_T t271_im;
  static real32_T t272_re;
  static real32_T t272_im;
  static real32_T t273_re;
  static real32_T t273_im;
  static real32_T t274_re;
  static real32_T t274_im;
  static real32_T t275_re;
  static real32_T t275_im;
  static real32_T t276_re;
  static real32_T t276_im;
  static real32_T t277_re;
  static real32_T t277_im;
  static real32_T t278_re;
  static real32_T t278_im;
  static real32_T t279_re;
  static real32_T t279_im;
  static real32_T t280_re;
  static real32_T t280_im;
  static real32_T t281_re;
  static real32_T t281_im;
  static real32_T t282_re;
  static real32_T t282_im;
  static real32_T t283_re;
  static real32_T t283_im;
  static real32_T t284_re;
  static real32_T t284_im;
  static real32_T t285_re;
  static real32_T t285_im;
  static real32_T t286_re;
  static real32_T t286_im;
  static real32_T t287_re;
  static real32_T t287_im;
  static real32_T t288_re;
  static real32_T t288_im;
  static real32_T t289_re;
  static real32_T t289_im;
  static real32_T t290_re;
  static real32_T t290_im;
  static real32_T t291_re;
  static real32_T t291_im;
  static real32_T t292_re;
  static real32_T t292_im;
  static real32_T t293_re;
  static real32_T t293_im;
  static real32_T t294_re;
  static real32_T t294_im;
  static real32_T t295_re;
  static real32_T t295_im;
  static real32_T t296_re;
  static real32_T t296_im;
  static real32_T t297_re;
  static real32_T t297_im;
  static real32_T t298_re;
  static real32_T t298_im;
  static real32_T t299_re;
  static real32_T t299_im;
  static real32_T t300_re;
  static real32_T t300_im;
  static real32_T t301_re;
  static real32_T t301_im;
  static real32_T t302_re;
  static real32_T t302_im;
  static real32_T t303_re;
  static real32_T t303_im;
  static real32_T t304_re;
  static real32_T t304_im;
  static real32_T t305_re;
  static real32_T t305_im;
  static real32_T t306_re;
  static real32_T t306_im;
  static real32_T t307_re;
  static real32_T t307_im;
  static real32_T t308_re;
  static real32_T t308_im;
  static real32_T t309_re;
  static real32_T t309_im;
  static real32_T t310_re;
  static real32_T t310_im;
  static real32_T t311_re;
  static real32_T t311_im;
  static real32_T t312_re;
  static real32_T t312_im;
  static real32_T t313_re;
  static real32_T t313_im;
  static real32_T t314_re;
  static real32_T t314_im;
  static real32_T t315_re;
  static real32_T t315_im;
  static real32_T t316_re;
  static real32_T t316_im;
  static real32_T t317_re;
  static real32_T t317_im;
  static real32_T t318_re;
  static real32_T t318_im;
  static real32_T t319_re;
  static real32_T t319_im;
  static real32_T t320_re;
  static real32_T t320_im;
  static real32_T t425_re;
  static real32_T t425_im;
  static real32_T t3_re;
  static real32_T t3_im;
  static real32_T t3_re_0;
  static real32_T t3_im_0;
  static real32_T t3_re_1;
  static real32_T t3_im_1;
  static real32_T t3_re_2;
  static real32_T t3_im_2;
  static real32_T t3_re_3;
  static real32_T t3_im_3;
  static real32_T t3_re_4;
  static real32_T t3_im_4;
  static real32_T t3_re_5;
  static real32_T t3_im_5;
  static real32_T t3_re_6;
  static real32_T t3_im_6;
  static real32_T t3_re_7;
  static real32_T t3_im_7;
  static real32_T t3_re_8;
  static real32_T t3_im_8;
  static real32_T t3_re_9;
  static real32_T t3_im_9;
  static real32_T t3_re_a;
  static real32_T t3_im_a;
  static real32_T t3_re_b;
  static real32_T t3_im_b;
  static real32_T t3_re_c;
  static real32_T t3_im_c;
  static real32_T t3_re_d;
  static real32_T t3_im_d;
  static real32_T t3_re_e;
  static real32_T t3_im_e;
  static real32_T t3_re_f;
  static real32_T t3_im_f;
  static real32_T t3_re_g;
  static real32_T t3_im_g;
  static real32_T t3_re_h;
  static real32_T t3_im_h;
  static real32_T t3_re_i;
  static real32_T t3_im_i;
  static real32_T t3_re_j;
  static real32_T t3_im_j;
  static real32_T t3_re_k;
  static real32_T t3_im_k;
  static real32_T t3_re_l;
  static real32_T t3_im_l;
  static real32_T t3_re_m;
  static real32_T t3_im_m;
  static real32_T re;
  static real32_T im;
  static real32_T re_0;
  static real32_T im_0;
  static real32_T re_1;
  static real32_T im_1;
  static real32_T re_2;
  static real32_T im_2;
  static real32_T re_3;
  static real32_T im_3;
  static real32_T re_4;
  static real32_T im_4;
  static real32_T re_5;
  static real32_T im_5;
  static real32_T re_6;
  static real32_T im_6;
  static real32_T re_7;
  static real32_T im_7;
  static real32_T re_8;
  static real32_T im_8;
  static real32_T re_9;
  static real32_T im_9;
  static real32_T re_a;
  static real32_T im_a;
  static real32_T re_b;
  static real32_T im_b;
  static real32_T re_c;
  static real32_T im_c;
  static real32_T re_d;
  static real32_T im_d;
  static real32_T re_e;
  static real32_T im_e;
  static real32_T re_f;
  static real32_T im_f;
  static real32_T re_g;
  static real32_T im_g;
  static real32_T re_h;
  static real32_T im_h;
  static real32_T re_i;
  static real32_T im_i;
  static real32_T re_j;
  static real32_T im_j;
  static real32_T re_k;
  static real32_T im_k;
  static real32_T re_l;
  static real32_T im_l;
  static real32_T re_m;
  static real32_T im_m;
  static real32_T re_n;
  static real32_T im_n;
  static real32_T re_o;
  static real32_T im_o;
  static real32_T re_p;
  static real32_T im_p;
  static real32_T re_q;
  static real32_T im_q;
  static real32_T re_r;
  static real32_T im_r;
  static real32_T re_s;
  static real32_T im_s;
  static real32_T re_t;
  static real32_T im_t;
  static real32_T re_u;
  static real32_T im_u;
  static real32_T re_v;
  static real32_T im_v;
  static real32_T re_w;
  static real32_T im_w;
  static real32_T re_x;
  static real32_T im_x;
  static real32_T re_y;
  static real32_T im_y;
  static real32_T re_z;
  static real32_T im_z;
  static real32_T re_10;
  static real32_T im_10;
  static real32_T re_11;
  static real32_T im_11;
  static real32_T re_12;
  static real32_T im_12;
  static real32_T re_13;
  static real32_T im_13;
  static real32_T re_14;
  static real32_T im_14;
  static real32_T re_15;
  static real32_T im_15;
  static real32_T re_16;
  static real32_T im_16;
  static real32_T re_17;
  static real32_T im_17;
  static real32_T re_18;
  static real32_T im_18;
  static real32_T re_19;
  static real32_T im_19;
  static real32_T re_1a;
  static real32_T im_1a;
  static real32_T re_1b;
  static real32_T im_1b;
  static real32_T re_1c;
  static real32_T im_1c;
  static real32_T re_1d;
  static real32_T im_1d;
  static real32_T re_1e;
  static real32_T im_1e;
  static real32_T re_1f;
  static real32_T im_1f;
  static real32_T re_1g;
  static real32_T im_1g;
  static real32_T re_1h;
  static real32_T im_1h;
  static real32_T re_1i;
  static real32_T im_1i;
  static real32_T re_1j;
  static real32_T im_1j;
  static real32_T re_1k;
  static real32_T im_1k;
  static real32_T re_1l;
  static real32_T im_1l;
  static real32_T re_1m;
  static real32_T im_1m;
  static real32_T re_1n;
  static real32_T im_1n;
  static real32_T re_1o;
  static real32_T im_1o;
  static real32_T re_1p;
  static real32_T im_1p;
  static real32_T re_1q;
  static real32_T im_1q;
  static real32_T re_1r;
  static real32_T im_1r;
  static real32_T re_1s;
  static real32_T im_1s;
  static real32_T re_1t;
  static real32_T im_1t;
  static real32_T re_1u;
  static real32_T im_1u;
  static real32_T re_1v;
  static real32_T im_1v;
  static real32_T re_1w;
  static real32_T im_1w;
  static real32_T re_1x;
  static real32_T im_1x;
  static real32_T re_1y;
  static real32_T im_1y;
  static real32_T re_1z;
  static real32_T im_1z;
  static real32_T re_20;
  static real32_T im_20;
  static real32_T re_21;
  static real32_T im_21;
  static real32_T re_22;
  static real32_T im_22;
  static real32_T re_23;
  static real32_T im_23;
  static real32_T re_24;
  static real32_T im_24;
  static real32_T re_25;
  static real32_T t146_re;
  static real32_T t146_im;
  static real32_T re_tmp;
  static real32_T im_tmp;
  static real32_T t3_re_tmp;
  static real32_T t3_im_tmp;
  static real32_T re_tmp_0;
  static real32_T im_tmp_0;
  static real32_T re_tmp_1;
  static real32_T im_tmp_1;
  static real32_T re_tmp_2;
  static real32_T im_tmp_2;
  static real32_T re_tmp_3;
  static real32_T im_tmp_3;
  static real32_T re_tmp_4;
  static real32_T im_tmp_4;
  static real32_T tmp_tmp;
  static real32_T tmp_tmp_0;
  static real32_T tmp_tmp_1;
  static real32_T tmp_tmp_2;
  static real32_T tmp_tmp_3;
  static real32_T tmp_tmp_4;
  static real32_T tmp_tmp_5;
  static real32_T tmp_tmp_6;
  static real32_T tmp_tmp_7;
  static real32_T tmp_tmp_8;
  static real32_T tmp_tmp_9;
  static real32_T tmp_tmp_a;
  static real32_T tmp_tmp_b;
  static real32_T tmp_tmp_c;
  static real32_T tmp_tmp_d;
  static real32_T tmp_tmp_e;
  static real32_T tmp_tmp_f;
  static real32_T tmp_tmp_g;
  static real32_T tmp_tmp_h;
  static real32_T tmp_tmp_i;
  static real32_T tmp_tmp_j;
  static real32_T tmp_tmp_k;
  static real32_T tmp_tmp_l;
  static real32_T tmp_tmp_m;
  static real32_T tmp_tmp_n;
  static real32_T tmp_tmp_o;
  static real32_T tmp_tmp_p;
  static real32_T tmp_tmp_q;
  static real32_T tmp_tmp_r;
  static real32_T tmp_tmp_s;
  static real32_T tmp_tmp_t;
  static real32_T tmp_tmp_u;
  static real32_T tmp_tmp_v;
  static real32_T t146_re_tmp;
  static real32_T tmp_tmp_w;
  static real32_T tmp_tmp_x;
  static real32_T tmp_tmp_y;
  static real32_T tmp_tmp_z;
  static real32_T tmp_tmp_10;
  static real32_T t146_re_tmp_0;
  static real32_T t146_re_tmp_1;
  static real32_T tmp_tmp_11;
  static real32_T tmp_tmp_12;
  static real32_T tmp_tmp_13;
  static real32_T tmp_tmp_14;
  static real32_T tmp_tmp_15;
  static real32_T tmp_tmp_16;
  static real32_T t146_re_tmp_2;
  static real32_T t146_re_tmp_3;
  static real32_T t146_re_tmp_4;
  static real32_T t146_re_tmp_5;
  static real32_T tmp_tmp_17;
  static real32_T t146_re_tmp_6;
  static real32_T t146_re_tmp_7;
  real32_T t146_re_tmp_8;
  real32_T t146_re_tmp_9;
  real32_T tmp_tmp_18;
  real32_T tmp_tmp_19;
  real32_T t146_re_tmp_a;
  real32_T t146_re_tmp_b;
  real32_T t146_re_tmp_c;
  real32_T t146_re_tmp_d;
  real32_T tmp_tmp_1a;
  real32_T tmp_tmp_1b;
  real32_T tmp_tmp_1c;
  real32_T tmp_tmp_1d;

  /* MATLAB Function: '<Root>/Mother of Kinematics' */
  t3.re = *((const real32_T **)ssGetInputPortSignalPtrs(S, 0))[0] * 0.0F;
  t3.im = *((const real32_T **)ssGetInputPortSignalPtrs(S, 0))[0];
  Mother_exp(&t3);
  t5.re = *((const real32_T **)ssGetInputPortSignalPtrs(S, 0))[0] * 0.0F;
  t5.im = *((const real32_T **)ssGetInputPortSignalPtrs(S, 0))[0] * 2.0F;
  Mother_exp(&t5);
  t7.re = *((const real32_T **)ssGetInputPortSignalPtrs(S, 1))[0] * 0.0F;
  t7.im = *((const real32_T **)ssGetInputPortSignalPtrs(S, 1))[0];
  Mother_exp(&t7);
  t9.re = *((const real32_T **)ssGetInputPortSignalPtrs(S, 1))[0] * 0.0F;
  t9.im = *((const real32_T **)ssGetInputPortSignalPtrs(S, 1))[0] * 2.0F;
  Mother_exp(&t9);
  t11.re = *((const real32_T **)ssGetInputPortSignalPtrs(S, 2))[0] * 0.0F;
  t11.im = *((const real32_T **)ssGetInputPortSignalPtrs(S, 2))[0] * 2.0F;
  Mother_exp(&t11);
  re_tmp = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * t3.re;
  im_tmp = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * t3.im;
  t12_re = (re_tmp * t9.re - im_tmp * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  t12_im = (re_tmp * t9.im + im_tmp * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  t13_re = (re_tmp * t9.re - im_tmp * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  t13_im = (re_tmp * t9.im + im_tmp * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  t14_re = (re_tmp * t9.re - im_tmp * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  t14_im = (re_tmp * t9.im + im_tmp * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  t15_re = (re_tmp * t11.re - im_tmp * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  t15_im = (re_tmp * t11.im + im_tmp * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  t16_re = (re_tmp * t11.re - im_tmp * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  t16_im = (re_tmp * t11.im + im_tmp * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  t17_re = (re_tmp * t11.re - im_tmp * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  t17_im = (re_tmp * t11.im + im_tmp * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  t19.re = *((const real32_T **)ssGetInputPortSignalPtrs(S, 2))[0] * 0.0F;
  t19.im = *((const real32_T **)ssGetInputPortSignalPtrs(S, 2))[0];
  Mother_exp(&t19);
  t20 = (real32_T)sin(*((const real32_T **)ssGetInputPortSignalPtrs(S, 1))[0]);
  t21 = (real32_T)sin(*((const real32_T **)ssGetInputPortSignalPtrs(S, 2))[0]);
  t22 = (real32_T)cos(*((const real32_T **)ssGetInputPortSignalPtrs(S, 0))[0]);
  t23 = (real32_T)cos(*((const real32_T **)ssGetInputPortSignalPtrs(S, 1))[0]);
  t24 = (real32_T)sin(*((const real32_T **)ssGetInputPortSignalPtrs(S, 0))[0]);
  t3_re_tmp = t3.re * t7.re - t3.im * t7.im;
  t3_im_tmp = t3.re * t7.im + t3.im * t7.re;
  t3_re = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_0 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_0 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_1 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_1 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_2 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_2 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_3 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_3 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_4 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_4 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_5 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_5 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_6 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_6 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_7 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_7 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_8 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_8 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_9 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_9 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_a = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_a = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_b = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_b = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_c = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_c = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_d = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_d = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_e = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_e = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_f = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_f = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_g = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_g = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_h = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_h = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_i = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_i = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_j = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_j = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_k = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_k = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_l = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_l = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_m = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_m = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_tmp_0 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 4))[0] * t3.re;
  im_tmp_0 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 4))[0] * t3.im;
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_0 = (re * t19.re - im * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im = (re * t19.im + im * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_0 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1 = (re * t19.re - im_0 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_0 = (re * t19.im + im_0 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_2 = (re * t19.re - im_1 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_1 = (re * t19.im + im_1 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_2 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_3 = (re * t19.re - im_2 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_2 = (re * t19.im + im_2 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_3 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_4 = (re * t19.re - im_3 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_3 = (re * t19.im + im_3 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_4 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_5 = (re * t19.re - im_4 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_4 = (re * t19.im + im_4 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_5 = re_tmp * t7.im + im_tmp * t7.re;
  re_6 = (re * t19.re - im_5 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_5 = (re * t19.im + im_5 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_6 = re_tmp * t7.im + im_tmp * t7.re;
  re_7 = (re * t19.re - im_6 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_6 = (re * t19.im + im_6 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_7 = re_tmp * t7.im + im_tmp * t7.re;
  re_8 = (re * t19.re - im_7 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_7 = (re * t19.im + im_7 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_8 = re_tmp * t7.im + im_tmp * t7.re;
  re_9 = (re * t19.re - im_8 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_8 = (re * t19.im + im_8 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_9 = re_tmp * t7.im + im_tmp * t7.re;
  re_a = (re * t19.re - im_9 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_9 = (re * t19.im + im_9 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_a = re_tmp * t7.im + im_tmp * t7.re;
  re_b = (re * t19.re - im_a * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_a = (re * t19.im + im_a * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_b = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_c = (re * t19.re - im_b * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_b = (re * t19.im + im_b * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_c = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_d = (re * t19.re - im_c * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_c = (re * t19.im + im_c * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_d = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_e = (re * t19.re - im_d * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_d = (re * t19.im + im_d * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_e = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_f = (re * t19.re - im_e * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_e = (re * t19.im + im_e * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_f = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_g = (re * t19.re - im_f * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_f = (re * t19.im + im_f * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_g = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_h = (re * t19.re - im_g * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_g = (re * t19.im + im_g * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_h = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_i = (re * t19.re - im_h * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_h = (re * t19.im + im_h * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_i = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_j = (re * t19.re - im_i * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_i = (re * t19.im + im_i * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_j = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_k = (re * t19.re - im_j * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_j = (re * t19.im + im_j * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_k = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_l = (re * t19.re - im_k * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_k = (re * t19.im + im_k * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_l = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_m = (re * t19.re - im_l * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_l = (re * t19.im + im_l * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_m = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_n = (re * t19.re - im_m * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_m = (re * t19.im + im_m * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_n = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_o = (re * t19.re - im_n * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_n = (re * t19.im + im_n * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_o = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_p = (re * t19.re - im_o * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_o = (re * t19.im + im_o * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_p = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_q = (re * t19.re - im_p * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_p = (re * t19.im + im_p * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_q = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_r = (re * t19.re - im_q * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_q = (re * t19.im + im_q * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_r = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_s = (re * t19.re - im_r * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_r = (re * t19.im + im_r * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_s = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_t = (re * t19.re - im_s * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_s = (re * t19.im + im_s * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_t = re_tmp * t7.im + im_tmp * t7.re;
  re_u = (re * t19.re - im_t * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_t = (re * t19.im + im_t * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_u = re_tmp * t7.im + im_tmp * t7.re;
  re_v = (re * t19.re - im_u * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_u = (re * t19.im + im_u * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_v = re_tmp * t7.im + im_tmp * t7.re;
  re_w = (re * t19.re - im_v * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_v = (re * t19.im + im_v * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_w = re_tmp * t7.im + im_tmp * t7.re;
  re_x = (re * t19.re - im_w * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_w = (re * t19.im + im_w * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_x = re_tmp * t7.im + im_tmp * t7.re;
  re_y = (re * t19.re - im_x * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_x = (re * t19.im + im_x * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_y = re_tmp * t7.im + im_tmp * t7.re;
  re_z = (re * t19.re - im_y * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_y = (re * t19.im + im_y * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_z = re_tmp * t7.im + im_tmp * t7.re;
  re_10 = (re * t19.re - im_z * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_z = (re * t19.im + im_z * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_10 = re_tmp * t7.im + im_tmp * t7.re;
  re_11 = (re * t19.re - im_10 * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_10 = (re * t19.im + im_10 * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_11 = re_tmp * t7.im + im_tmp * t7.re;
  re_12 = (re * t19.re - im_11 * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_11 = (re * t19.im + im_11 * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_12 = re_tmp * t7.im + im_tmp * t7.re;
  re_13 = (re * t19.re - im_12 * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_12 = (re * t19.im + im_12 * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_13 = re_tmp * t7.im + im_tmp * t7.re;
  re_14 = (re * t19.re - im_13 * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_13 = (re * t19.im + im_13 * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_14 = re_tmp * t7.im + im_tmp * t7.re;
  re_15 = (re * t19.re - im_14 * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_14 = (re * t19.im + im_14 * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_15 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_16 = (re * t19.re - im_15 * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_15 = (re * t19.im + im_15 * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_16 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_17 = (re * t19.re - im_16 * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_16 = (re * t19.im + im_16 * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_17 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_18 = (re * t19.re - im_17 * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_17 = (re * t19.im + im_17 * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_18 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_19 = (re * t19.re - im_18 * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_18 = (re * t19.im + im_18 * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_19 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1a = (re * t19.re - im_19 * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_19 = (re * t19.im + im_19 * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1a = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1b = (re * t19.re - im_1a * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1a = (re * t19.im + im_1a * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1b = re_tmp * t7.im + im_tmp * t7.re;
  re_1c = (re * t19.re - im_1b * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1b = (re * t19.im + im_1b * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1c = re_tmp * t7.im + im_tmp * t7.re;
  re_1d = (re * t19.re - im_1c * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1c = (re * t19.im + im_1c * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1d = re_tmp * t7.im + im_tmp * t7.re;
  re_1e = (re * t19.re - im_1d * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1d = (re * t19.im + im_1d * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1e = re_tmp * t7.im + im_tmp * t7.re;
  re_1f = (re * t19.re - im_1e * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1e = (re * t19.im + im_1e * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1f = re_tmp * t7.im + im_tmp * t7.re;
  re_1g = (re * t19.re - im_1f * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1f = (re * t19.im + im_1f * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1g = re_tmp * t7.im + im_tmp * t7.re;
  re_1h = (re * t19.re - im_1g * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1g = (re * t19.im + im_1g * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1h = re_tmp * t7.im + im_tmp * t7.re;
  re_1i = (re * t19.re - im_1h * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1h = (re * t19.im + im_1h * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1i = re_tmp * t7.im + im_tmp * t7.re;
  re_1j = (re * t19.re - im_1i * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1i = (re * t19.im + im_1i * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1j = re_tmp * t7.im + im_tmp * t7.re;
  re_1k = (re * t19.re - im_1j * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1j = (re * t19.im + im_1j * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1k = re_tmp * t7.im + im_tmp * t7.re;
  re_1l = (re * t19.re - im_1k * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1k = (re * t19.im + im_1k * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1l = re_tmp * t7.im + im_tmp * t7.re;
  re_1m = (re * t19.re - im_1l * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1l = (re * t19.im + im_1l * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1m = re_tmp * t7.im + im_tmp * t7.re;
  re_1n = (re * t19.re - im_1m * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1m = (re * t19.im + im_1m * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1n = re_tmp * t7.im + im_tmp * t7.re;
  re_1o = (re * t19.re - im_1n * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1n = (re * t19.im + im_1n * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1o = re_tmp * t7.im + im_tmp * t7.re;
  re_1p = (re * t19.re - im_1o * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1o = (re * t19.im + im_1o * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1p = re_tmp * t7.im + im_tmp * t7.re;
  re_1q = (re * t19.re - im_1p * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1p = (re * t19.im + im_1p * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1q = re_tmp * t7.im + im_tmp * t7.re;
  re_1r = (re * t19.re - im_1q * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1q = (re * t19.im + im_1q * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1r = re_tmp * t7.im + im_tmp * t7.re;
  re_1s = (re * t19.re - im_1r * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1r = (re * t19.im + im_1r * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1s = re_tmp * t7.im + im_tmp * t7.re;
  re_1t = (re * t19.re - im_1s * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1s = (re * t19.im + im_1s * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1t = re_tmp * t7.im + im_tmp * t7.re;
  re_1u = (re * t19.re - im_1t * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1t = (re * t19.im + im_1t * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1u = re_tmp * t7.im + im_tmp * t7.re;
  re_1v = (re * t19.re - im_1u * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1u = (re * t19.im + im_1u * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1v = re_tmp * t7.im + im_tmp * t7.re;
  re_1w = (re * t19.re - im_1v * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1v = (re * t19.im + im_1v * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1w = re_tmp * t7.im + im_tmp * t7.re;
  re_1x = (re * t19.re - im_1w * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1w = (re * t19.im + im_1w * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1x = re_tmp * t7.im + im_tmp * t7.re;
  re_1y = (re * t19.re - im_1x * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1x = (re * t19.im + im_1x * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1y = re_tmp * t7.im + im_tmp * t7.re;
  re_1z = (re * t19.re - im_1y * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1y = (re * t19.im + im_1y * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1z = re_tmp * t7.im + im_tmp * t7.re;
  re_20 = (re * t19.re - im_1z * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1z = (re * t19.im + im_1z * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_20 = re_tmp * t7.im + im_tmp * t7.re;
  re_21 = (re * t19.re - im_20 * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_20 = (re * t19.im + im_20 * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_21 = re_tmp * t7.im + im_tmp * t7.re;
  re_22 = (re * t19.re - im_21 * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_21 = (re * t19.im + im_21 * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_22 = re_tmp * t7.im + im_tmp * t7.re;
  re_23 = (re * t19.re - im_22 * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_22 = (re * t19.im + im_22 * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_23 = re_tmp * t7.im + im_tmp * t7.re;
  re_24 = (re * t19.re - im_23 * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_23 = (re * t19.im + im_23 * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_24 = re_tmp * t7.im + im_tmp * t7.re;
  re_25 = (re * t19.re - im_24 * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_24 = (re * t19.im + im_24 * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t25.re =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((t3_re * 0.0F - t3_im * (rtInfF)) + (t3_re_0 * -0.0F
    - t3_im_0 * (rtMinusInfF))) + (t3_re_1 * -0.0F - t3_im_1 * (rtMinusInfF))) +
    (t3_re_2 * 0.0F - t3_im_2 * (rtInfF))) + (t3_re_3 * 0.0F - t3_im_3 * (rtInfF)))
    + (t3_re_4 * -0.0F - t3_im_4 * (rtMinusInfF))) + (t3_re_5 * -0.0F - t3_im_5 *
    (rtMinusInfF))) + (t3_re_6 * 0.0F - t3_im_6 * (rtInfF))) + (t3_re_7 * 0.0F -
    t3_im_7 * (rtInfF))) + (t3_re_8 * -0.0F - t3_im_8 * (rtMinusInfF))) +
    (t3_re_9 * -0.0F - t3_im_9 * (rtMinusInfF))) + (t3_re_a * 0.0F - t3_im_a *
    (rtInfF))) + (t3_re_b * 0.0F - t3_im_b * (rtInfF))) + (t3_re_c * -0.0F -
    t3_im_c * (rtMinusInfF))) + (t3_re_d * -0.0F - t3_im_d * (rtMinusInfF))) +
    (t3_re_e * 0.0F - t3_im_e * (rtInfF))) + (t3_re_f * 0.0F - t3_im_f * (rtInfF)))
    + (t3_re_g * -0.0F - t3_im_g * (rtMinusInfF))) + (t3_re_h * -0.0F - t3_im_h *
    (rtMinusInfF))) + (t3_re_i * 0.0F - t3_im_i * (rtInfF))) + (t3_re_j * 0.0F -
    t3_im_j * (rtInfF))) + (t3_re_k * -0.0F - t3_im_k * (rtMinusInfF))) +
    (t3_re_l * -0.0F - t3_im_l * (rtMinusInfF))) + (t3_re_m * 0.0F - t3_im_m *
    (rtInfF))) + (re_0 * -0.0F - im * (rtMinusInfF))) + (re_1 * 0.0F - im_0 *
    (rtInfF))) + (re_2 * 0.0F - im_1 * (rtInfF))) + (re_3 * -0.0F - im_2 *
    (rtMinusInfF))) + (re_4 * -0.0F - im_3 * (rtMinusInfF))) + (re_5 * 0.0F -
    im_4 * (rtInfF))) + (re_6 * -0.0F - im_5 * (rtMinusInfF))) + (re_7 * 0.0F -
    im_6 * (rtInfF))) + (re_8 * 0.0F - im_7 * (rtInfF))) + (re_9 * -0.0F - im_8 *
    (rtMinusInfF))) + (re_a * -0.0F - im_9 * (rtMinusInfF))) + (re_b * 0.0F -
    im_a * (rtInfF))) + (re_c * -0.0F - im_b * (rtMinusInfF))) + (re_d * 0.0F -
    im_c * (rtInfF))) + (re_e * 0.0F - im_d * (rtInfF))) + (re_f * -0.0F - im_e *
    (rtMinusInfF))) + (re_g * -0.0F - im_f * (rtMinusInfF))) + (re_h * 0.0F -
    im_g * (rtInfF))) + (re_i * 0.0F - im_h * (rtInfF))) + (re_j * 0.0F - im_i *
    (rtInfF))) + (re_k * -0.0F - im_j * (rtMinusInfF))) + (re_l * -0.0F - im_k *
    (rtMinusInfF))) + (re_m * -0.0F - im_l * (rtMinusInfF))) + (re_n * -0.0F -
    im_m * (rtMinusInfF))) + (re_o * 0.0F - im_n * (rtInfF))) + (re_p * 0.0F -
    im_o * (rtInfF))) + (re_q * 0.0F - im_p * (rtInfF))) + (re_r * 0.0F - im_q *
    (rtInfF))) + (re_s * -0.0F - im_r * (rtMinusInfF))) + (re_t * -0.0F - im_s *
    (rtMinusInfF))) + (re_u * -0.0F - im_t * (rtMinusInfF))) + (re_v * 0.0F -
    im_u * (rtInfF))) + (re_w * 0.0F - im_v * (rtInfF))) + (re_x * -0.0F - im_w *
    (rtMinusInfF))) + (re_y * -0.0F - im_x * (rtMinusInfF))) + (re_z * 0.0F -
    im_y * (rtInfF))) + (re_10 * -0.0F - im_z * (rtMinusInfF))) + (re_11 * 0.0F
    - im_10 * (rtInfF))) + (re_12 * 0.0F - im_11 * (rtInfF))) + (re_13 * -0.0F -
    im_12 * (rtMinusInfF))) + (re_14 * -0.0F - im_13 * (rtMinusInfF))) + (re_15 *
    0.0F - im_14 * (rtInfF))) + (re_16 * 0.0F - im_15 * (rtInfF))) + (re_17 *
    -0.0F - im_16 * (rtMinusInfF))) + (re_18 * -0.0F - im_17 * (rtMinusInfF))) +
    (re_19 * 0.0F - im_18 * (rtInfF))) + (re_1a * 0.0F - im_19 * (rtInfF))) +
    (re_1b * -0.0F - im_1a * (rtMinusInfF))) + (re_1c * -0.0F - im_1b *
    (rtMinusInfF))) + (re_1d * 0.0F - im_1c * (rtInfF))) + (re_1e * 0.0F - im_1d
    * (rtInfF))) + (re_1f * -0.0F - im_1e * (rtMinusInfF))) + (re_1g * -0.0F -
    im_1f * (rtMinusInfF))) + (re_1h * 0.0F - im_1g * (rtInfF))) + (re_1i * 0.0F
    - im_1h * (rtInfF))) + (re_1j * 0.0F - im_1i * (rtInfF))) + (re_1k * -0.0F -
    im_1j * (rtMinusInfF))) + (re_1l * -0.0F - im_1k * (rtMinusInfF))) + (re_1m *
    -0.0F - im_1l * (rtMinusInfF))) + (re_1n * -0.0F - im_1m * (rtMinusInfF))) +
                     (re_1o * 0.0F - im_1n * (rtInfF))) + (re_1p * 0.0F - im_1o *
    (rtInfF))) + (re_1q * 0.0F - im_1p * (rtInfF))) + (re_1r * 0.0F - im_1q *
    (rtInfF))) + (re_1s * -0.0F - im_1r * (rtMinusInfF))) + (re_1t * -0.0F -
    im_1s * (rtMinusInfF))) + (re_1u * -0.0F - im_1t * (rtMinusInfF))) + (re_1v *
    0.0F - im_1u * (rtInfF))) + (re_1w * 0.0F - im_1v * (rtInfF))) + (re_1x *
             -0.0F - im_1w * (rtMinusInfF))) + (re_1y * -0.0F - im_1x *
            (rtMinusInfF))) + (re_1z * 0.0F - im_1y * (rtInfF))) + (re_20 * 0.0F
          - im_1z * (rtInfF))) + (re_21 * -0.0F - im_20 * (rtMinusInfF))) +
       (re_22 * -0.0F - im_21 * (rtMinusInfF))) + (re_23 * 0.0F - im_22 *
       (rtInfF))) + (re_24 * 0.0F - im_23 * (rtInfF))) + (re_25 * -0.0F - im_24 *
    (rtMinusInfF));
  t25.im =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((t3_re * (rtInfF) + t3_im * 0.0F) + (t3_re_0 *
    (rtMinusInfF) + t3_im_0 * -0.0F)) + (t3_re_1 * (rtMinusInfF) + t3_im_1 *
    -0.0F)) + (t3_re_2 * (rtInfF) + t3_im_2 * 0.0F)) + (t3_re_3 * (rtInfF) +
    t3_im_3 * 0.0F)) + (t3_re_4 * (rtMinusInfF) + t3_im_4 * -0.0F)) + (t3_re_5 *
    (rtMinusInfF) + t3_im_5 * -0.0F)) + (t3_re_6 * (rtInfF) + t3_im_6 * 0.0F)) +
    (t3_re_7 * (rtInfF) + t3_im_7 * 0.0F)) + (t3_re_8 * (rtMinusInfF) + t3_im_8 *
    -0.0F)) + (t3_re_9 * (rtMinusInfF) + t3_im_9 * -0.0F)) + (t3_re_a * (rtInfF)
    + t3_im_a * 0.0F)) + (t3_re_b * (rtInfF) + t3_im_b * 0.0F)) + (t3_re_c *
    (rtMinusInfF) + t3_im_c * -0.0F)) + (t3_re_d * (rtMinusInfF) + t3_im_d *
    -0.0F)) + (t3_re_e * (rtInfF) + t3_im_e * 0.0F)) + (t3_re_f * (rtInfF) +
    t3_im_f * 0.0F)) + (t3_re_g * (rtMinusInfF) + t3_im_g * -0.0F)) + (t3_re_h *
    (rtMinusInfF) + t3_im_h * -0.0F)) + (t3_re_i * (rtInfF) + t3_im_i * 0.0F)) +
    (t3_re_j * (rtInfF) + t3_im_j * 0.0F)) + (t3_re_k * (rtMinusInfF) + t3_im_k *
    -0.0F)) + (t3_re_l * (rtMinusInfF) + t3_im_l * -0.0F)) + (t3_re_m * (rtInfF)
    + t3_im_m * 0.0F)) + (re_0 * (rtMinusInfF) + im * -0.0F)) + (re_1 * (rtInfF)
    + im_0 * 0.0F)) + (re_2 * (rtInfF) + im_1 * 0.0F)) + (re_3 * (rtMinusInfF) +
    im_2 * -0.0F)) + (re_4 * (rtMinusInfF) + im_3 * -0.0F)) + (re_5 * (rtInfF) +
    im_4 * 0.0F)) + (re_6 * (rtMinusInfF) + im_5 * -0.0F)) + (re_7 * (rtInfF) +
    im_6 * 0.0F)) + (re_8 * (rtInfF) + im_7 * 0.0F)) + (re_9 * (rtMinusInfF) +
    im_8 * -0.0F)) + (re_a * (rtMinusInfF) + im_9 * -0.0F)) + (re_b * (rtInfF) +
    im_a * 0.0F)) + (re_c * (rtMinusInfF) + im_b * -0.0F)) + (re_d * (rtInfF) +
    im_c * 0.0F)) + (re_e * (rtInfF) + im_d * 0.0F)) + (re_f * (rtMinusInfF) +
    im_e * -0.0F)) + (re_g * (rtMinusInfF) + im_f * -0.0F)) + (re_h * (rtInfF) +
    im_g * 0.0F)) + (re_i * (rtInfF) + im_h * 0.0F)) + (re_j * (rtInfF) + im_i *
    0.0F)) + (re_k * (rtMinusInfF) + im_j * -0.0F)) + (re_l * (rtMinusInfF) +
    im_k * -0.0F)) + (re_m * (rtMinusInfF) + im_l * -0.0F)) + (re_n *
    (rtMinusInfF) + im_m * -0.0F)) + (re_o * (rtInfF) + im_n * 0.0F)) + (re_p *
    (rtInfF) + im_o * 0.0F)) + (re_q * (rtInfF) + im_p * 0.0F)) + (re_r *
    (rtInfF) + im_q * 0.0F)) + (re_s * (rtMinusInfF) + im_r * -0.0F)) + (re_t *
    (rtMinusInfF) + im_s * -0.0F)) + (re_u * (rtMinusInfF) + im_t * -0.0F)) +
    (re_v * (rtInfF) + im_u * 0.0F)) + (re_w * (rtInfF) + im_v * 0.0F)) + (re_x *
    (rtMinusInfF) + im_w * -0.0F)) + (re_y * (rtMinusInfF) + im_x * -0.0F)) +
    (re_z * (rtInfF) + im_y * 0.0F)) + (re_10 * (rtMinusInfF) + im_z * -0.0F)) +
    (re_11 * (rtInfF) + im_10 * 0.0F)) + (re_12 * (rtInfF) + im_11 * 0.0F)) +
    (re_13 * (rtMinusInfF) + im_12 * -0.0F)) + (re_14 * (rtMinusInfF) + im_13 *
    -0.0F)) + (re_15 * (rtInfF) + im_14 * 0.0F)) + (re_16 * (rtInfF) + im_15 *
    0.0F)) + (re_17 * (rtMinusInfF) + im_16 * -0.0F)) + (re_18 * (rtMinusInfF) +
    im_17 * -0.0F)) + (re_19 * (rtInfF) + im_18 * 0.0F)) + (re_1a * (rtInfF) +
    im_19 * 0.0F)) + (re_1b * (rtMinusInfF) + im_1a * -0.0F)) + (re_1c *
    (rtMinusInfF) + im_1b * -0.0F)) + (re_1d * (rtInfF) + im_1c * 0.0F)) +
    (re_1e * (rtInfF) + im_1d * 0.0F)) + (re_1f * (rtMinusInfF) + im_1e * -0.0F))
    + (re_1g * (rtMinusInfF) + im_1f * -0.0F)) + (re_1h * (rtInfF) + im_1g *
    0.0F)) + (re_1i * (rtInfF) + im_1h * 0.0F)) + (re_1j * (rtInfF) + im_1i *
    0.0F)) + (re_1k * (rtMinusInfF) + im_1j * -0.0F)) + (re_1l * (rtMinusInfF) +
    im_1k * -0.0F)) + (re_1m * (rtMinusInfF) + im_1l * -0.0F)) + (re_1n *
    (rtMinusInfF) + im_1m * -0.0F)) + (re_1o * (rtInfF) + im_1n * 0.0F)) +
                    (re_1p * (rtInfF) + im_1o * 0.0F)) + (re_1q * (rtInfF) +
    im_1p * 0.0F)) + (re_1r * (rtInfF) + im_1q * 0.0F)) + (re_1s * (rtMinusInfF)
    + im_1r * -0.0F)) + (re_1t * (rtMinusInfF) + im_1s * -0.0F)) + (re_1u *
    (rtMinusInfF) + im_1t * -0.0F)) + (re_1v * (rtInfF) + im_1u * 0.0F)) +
             (re_1w * (rtInfF) + im_1v * 0.0F)) + (re_1x * (rtMinusInfF) + im_1w
             * -0.0F)) + (re_1y * (rtMinusInfF) + im_1x * -0.0F)) + (re_1z *
           (rtInfF) + im_1y * 0.0F)) + (re_20 * (rtInfF) + im_1z * 0.0F)) +
        (re_21 * (rtMinusInfF) + im_20 * -0.0F)) + (re_22 * (rtMinusInfF) +
        im_21 * -0.0F)) + (re_23 * (rtInfF) + im_22 * 0.0F)) + (re_24 * (rtInfF)
      + im_23 * 0.0F)) + (re_25 * (rtMinusInfF) + im_24 * -0.0F);
  t166_re = (re_tmp * t9.re - im_tmp * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  t166_im = (re_tmp * t9.im + im_tmp * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  t168_re = (re_tmp * t9.re - im_tmp * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  t168_im = (re_tmp * t9.im + im_tmp * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  t170_re = (re_tmp * t9.re - im_tmp * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  t170_im = (re_tmp * t9.im + im_tmp * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  t177_re = (re_tmp * t11.re - im_tmp * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  t177_im = (re_tmp * t11.im + im_tmp * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  t178_re = (re_tmp * t11.re - im_tmp * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  t178_im = (re_tmp * t11.im + im_tmp * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  t179_re = (re_tmp * t11.re - im_tmp * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  t179_im = (re_tmp * t11.im + im_tmp * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  re_tmp_1 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * t5.re;
  t228_im = re_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0];
  t222_im = t228_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  im_tmp_1 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * t5.im;
  t229_re = im_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0];
  t223_re = t229_re * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  t230_im = re_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0];
  t223_im = t230_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t231_re = im_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0];
  t224_re = t231_re * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  re_tmp_2 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * t7.re;
  t232_im = re_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0];
  t224_im = t232_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  im_tmp_2 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * t7.im;
  t233_re = im_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0];
  t225_re = t233_re * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  t235_im = re_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0];
  t225_im = t235_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t236_re = im_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0];
  t226_re = t236_re * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  re_tmp_3 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * t9.re;
  t234_im = re_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0];
  t226_im = t234_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  im_tmp_3 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * t9.im;
  t235_re = im_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0];
  t227_re = t235_re * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  t238_im = re_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0];
  t227_im = t238_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t239_re = im_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0];
  t228_re = t239_re * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t228_im *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t229_re *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t231_im = re_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0];
  t229_im = t231_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t232_re = im_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0];
  t230_re = t232_re * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t230_im *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t231_re *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t231_im *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  t232_re *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  t232_im *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t233_re *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t237_im = re_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0];
  t233_im = t237_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t238_re = im_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0];
  t234_re = t238_re * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t234_im *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t235_re *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t235_im *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t236_re *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t239_im = re_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0];
  t236_im = t239_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t243_re = im_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0];
  t237_re = t243_re * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t237_im *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  t238_re *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  t238_im *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t239_re *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t239_im *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  t243_re *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  re_tmp_4 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * t11.re;
  t245_im = re_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0];
  t243_im = t245_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  im_tmp_4 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * t11.im;
  t246_re = im_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0];
  t244_re = t246_re * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  t247_im = re_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0];
  t244_im = t247_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t248_re = im_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0];
  t245_re = t248_re * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t245_im *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t246_re *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t248_im = re_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0];
  t246_im = t248_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t249_re = im_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0];
  t247_re = t249_re * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0];
  t247_im *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t248_re *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  t248_im *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  t249_re *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  re = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_0 = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_0 = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_1 = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1 = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_2 = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_2 = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_3 = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_3 = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_4 = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_4 = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_5 = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_5 = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_6 = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_6 = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_7 = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_7 = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_8 = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_8 = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_9 = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_9 = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_a = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_a = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_b = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_b = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_c = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_c = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_d = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_d = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_e = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_e = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_f = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_f = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_g = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_g = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_h = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_h = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_i = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_i = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_j = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_j = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_k = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_k = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_l = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_l = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_m = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_m = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_n = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_n = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_o = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_o = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_p = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_p = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_q = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_q = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_r = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_r = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_s = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_s = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_t = re_tmp * t7.re - im_tmp * t7.im;
  im_t = re_tmp * t7.im + im_tmp * t7.re;
  re_u = re_tmp * t9.re - im_tmp * t9.im;
  im_u = re_tmp * t9.im + im_tmp * t9.re;
  re_v = re_tmp * t7.re - im_tmp * t7.im;
  im_v = re_tmp * t7.im + im_tmp * t7.re;
  re_w = re_tmp * t9.re - im_tmp * t9.im;
  im_w = re_tmp * t9.im + im_tmp * t9.re;
  re_x = re_tmp * t7.re - im_tmp * t7.im;
  im_x = re_tmp * t7.im + im_tmp * t7.re;
  re_y = re_tmp * t9.re - im_tmp * t9.im;
  im_y = re_tmp * t9.im + im_tmp * t9.re;
  re_z = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_z = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_10 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_10 = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_11 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_11 = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_12 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_12 = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_13 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_13 = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_14 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_14 = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_15 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_15 = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_16 = (re_15 * t11.re - im_15 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_15 = (re_15 * t11.im + im_15 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_15 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_16 = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_17 = (re_15 * t11.re - im_16 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_16 = (re_15 * t11.im + im_16 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_15 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_17 = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_18 = (re_15 * t11.re - im_17 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_17 = (re_15 * t11.im + im_17 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_15 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_18 = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_19 = (re_15 * t11.re - im_18 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_18 = (re_15 * t11.im + im_18 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_15 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_19 = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_1a = (re_15 * t11.re - im_19 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_19 = (re_15 * t11.im + im_19 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_15 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_1a = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_1b = (re_15 * t11.re - im_1a * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1a = (re_15 * t11.im + im_1a * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_15 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_1b = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_1c = (re_15 * t11.re - im_1b * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1b = (re_15 * t11.im + im_1b * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_15 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_1c = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_1d = (re_15 * t11.re - im_1c * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1c = (re_15 * t11.im + im_1c * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_15 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_1d = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_1e = (re_15 * t11.re - im_1d * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1d = (re_15 * t11.im + im_1d * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re_15 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_1e = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_1f = (re_15 * t11.re - im_1e * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1e = (re_15 * t11.im + im_1e * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_15 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_1f = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_1g = (re_15 * t11.re - im_1f * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1f = (re_15 * t11.im + im_1f * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re_15 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_1g = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_1h = (re_15 * t11.re - im_1g * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1g = (re_15 * t11.im + im_1g * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re_15 = re_tmp * t7.re - im_tmp * t7.im;
  im_1h = re_tmp * t7.im + im_tmp * t7.re;
  re_1i = re_tmp * t9.re - im_tmp * t9.im;
  im_1i = re_tmp * t9.im + im_tmp * t9.re;
  re_1j = re_tmp * t7.re - im_tmp * t7.im;
  im_1j = re_tmp * t7.im + im_tmp * t7.re;
  re_1k = re_tmp * t9.re - im_tmp * t9.im;
  im_1k = re_tmp * t9.im + im_tmp * t9.re;
  re_1l = re_tmp * t7.re - im_tmp * t7.im;
  im_1l = re_tmp * t7.im + im_tmp * t7.re;
  re_1m = re_tmp * t9.re - im_tmp * t9.im;
  im_1m = re_tmp * t9.im + im_tmp * t9.re;
  re_1n = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_1n = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_1o = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_1o = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_1p = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_1p = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_1q = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_1q = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_1r = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_1r = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_1s = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_1s = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  tmp_tmp = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 9))[0];
  tmp_tmp_0 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 12))[0];
  tmp_tmp_1 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 15))[0];
  tmp_tmp_2 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 11))[0];
  tmp_tmp_3 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 8))[0];
  tmp_tmp_4 = *((const real32_T **)ssGetInputPortSignalPtrs(S, 3))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 14))[0];
  tmp_tmp_5 = re_tmp * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0];
  tmp_tmp_6 = re_tmp * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0];
  tmp_tmp_7 = re_tmp * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0];
  tmp_tmp_8 = re_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0];
  tmp_tmp_9 = re_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0];
  tmp_tmp_a = re_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0];
  tmp_tmp_b = re_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0];
  tmp_tmp_c = re_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0];
  t218_im = re_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0];
  tmp_tmp_d = re_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0];
  tmp_tmp_e = re_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0];
  tmp_tmp_f = re_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0];
  tmp_tmp_g = re_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0];
  tmp_tmp_h = re_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0];
  tmp_tmp_i = re_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0];
  re_tmp_4 = tmp_tmp * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  tmp_tmp_j = tmp_tmp_0 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0];
  tmp_tmp *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  tmp_tmp_k = tmp_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0];
  tmp_tmp_0 *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0];
  tmp_tmp_1 *= *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0];
  tmp_tmp_l = tmp_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))
    [0] * (rtInfF);
  tmp_tmp_m = tmp_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  tmp_tmp_n = tmp_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))
    [0] * (rtInfF);
  t204_re = re_tmp_4 * 0.0F;
  tmp_tmp_o = tmp_tmp_j * -0.0F;
  tmp_tmp_p = tmp_tmp * -0.0F;
  tmp_tmp_q = tmp_tmp_k * 0.0F;
  t208_re = tmp_tmp_0 * 0.0F;
  tmp_tmp_r = tmp_tmp_1 * -0.0F;
  tmp_tmp_s = tmp_tmp_7 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0]
    * (rtInfF);
  tmp_tmp_t = tmp_tmp_5 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))
    [0] * (rtInfF);
  t212_re = tmp_tmp_6 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0]
    * (rtInfF);
  tmp_tmp_u = tmp_tmp_c * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  tmp_tmp_x = tmp_tmp_d * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))
    [0] * (rtInfF);
  tmp_tmp_y = tmp_tmp_8 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))
    [0] * (rtInfF);
  tmp_tmp_z = tmp_tmp_b * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))
    [0] * (rtInfF);
  t220_re = tmp_tmp_f * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0]
    * (rtInfF);
  tmp_tmp_12 = tmp_tmp_a * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))
    [0] * (rtInfF);
  t240_re = tmp_tmp_h * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0]
    * (rtInfF);
  tmp_tmp_15 = tmp_tmp_i * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  t242_re = tmp_tmp_g * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0]
    * (rtInfF);
  tmp_tmp_2 = tmp_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  tmp_tmp_3 = tmp_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))
    [0] * (rtInfF);
  tmp_tmp_4 = tmp_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))
    [0] * (rtInfF);
  tmp_tmp_17 = tmp_tmp_e * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  tmp_tmp_18 = tmp_tmp_9 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))
    [0] * (rtInfF);
  tmp_tmp_19 = t218_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0]
    * (rtInfF);
  tmp_tmp_1c = ((((t12_re + t13_re) + t14_re) + t15_re) + t16_re) + t17_re;
  t146_re_tmp = tmp_tmp_9 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))
    [0] * (rtInfF);
  t146_re_tmp_0 = t218_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  t146_re_tmp_1 = tmp_tmp_e * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    16))[0] * (rtInfF);
  t146_re_tmp_2 = tmp_tmp_5 * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    12))[0] * (rtInfF);
  t146_re_tmp_3 = tmp_tmp_6 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))
    [0] * (rtInfF);
  t146_re_tmp_4 = tmp_tmp_7 * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    15))[0] * (rtInfF);
  t146_re_tmp_5 = tmp_tmp_8 * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    13))[0] * (rtInfF);
  t146_re_tmp_6 = tmp_tmp_a * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    10))[0] * (rtInfF);
  t146_re_tmp_7 = tmp_tmp_g * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    10))[0] * (rtInfF);
  t146_re_tmp_8 = tmp_tmp_b * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    10))[0] * (rtInfF);
  t146_re_tmp_9 = tmp_tmp_c * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    16))[0] * (rtInfF);
  t146_re_tmp_a = tmp_tmp_d * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    16))[0] * (rtInfF);
  t146_re_tmp_b = tmp_tmp_f * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    13))[0] * (rtInfF);
  t146_re_tmp_c = tmp_tmp_h * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    16))[0] * (rtInfF);
  t146_re_tmp_d = tmp_tmp_i * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    13))[0] * (rtInfF);
  t146_re =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((tmp_tmp_1c + tmp_tmp_l) + tmp_tmp_m) + tmp_tmp_n) +
    t204_re) + tmp_tmp_o) + tmp_tmp_p) + tmp_tmp_q) + t208_re) + tmp_tmp_r) +
    tmp_tmp_s) + tmp_tmp_t) + t212_re) + tmp_tmp_u) + tmp_tmp_17) + tmp_tmp_x) +
    tmp_tmp_y) + tmp_tmp_z) + tmp_tmp_18) + t220_re) + tmp_tmp_19) + tmp_tmp_12)
    + (t222_im * 0.0F - t223_re * (rtInfF))) + (t223_im * -0.0F - t224_re *
    (rtMinusInfF))) + (t224_im * -0.0F - t225_re * (rtMinusInfF))) + (t225_im *
    0.0F - t226_re * (rtInfF))) + (t226_im * 0.0F - t227_re * (rtInfF))) +
    (t227_im * -0.0F - t228_re * (rtMinusInfF))) + (t228_im * -0.0F - t229_re *
    (rtMinusInfF))) + (t229_im * 0.0F - t230_re * (rtInfF))) + (t230_im * 0.0F -
    t231_re * (rtInfF))) + (t231_im * -0.0F - t232_re * (rtMinusInfF))) +
    (t232_im * 0.0F - t233_re * (rtInfF))) + (t233_im * -0.0F - t234_re *
    (rtMinusInfF))) + (t234_im * -0.0F - t235_re * (rtMinusInfF))) + (t235_im *
    -0.0F - t236_re * (rtMinusInfF))) + (t236_im * 0.0F - t237_re * (rtInfF))) +
    (t237_im * 0.0F - t238_re * (rtInfF))) + (t238_im * 0.0F - t239_re * (rtInfF)))
    + (t239_im * -0.0F - t243_re * (rtMinusInfF))) + t240_re) + tmp_tmp_15) +
    t242_re) + (t243_im * 0.0F - t244_re * (rtInfF))) + (t244_im * -0.0F -
    t245_re * (rtMinusInfF))) + (t245_im * -0.0F - t246_re * (rtMinusInfF))) +
    (t246_im * 0.0F - t247_re * (rtInfF))) + (t247_im * 0.0F - t248_re * (rtInfF)))
    + (t248_im * -0.0F - t249_re * (rtMinusInfF))) + (re_tmp * t7.re - im_tmp *
    t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) + (re_tmp * t7.re
    - im_tmp * t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) +
    (re_tmp * t7.re - im_tmp * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF)) + (re_tmp_1 * t7.re -
    im_tmp_1 * t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) +
    (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) + (re_tmp_1 * t7.re -
    im_tmp_1 * t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) +
    (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) + (re_tmp_1 * t7.re -
    im_tmp_1 * t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) +
    (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) + (re * 0.0F - im * (rtInfF)))
    + (re_0 * -0.0F - im_0 * (rtMinusInfF))) + (re_1 * 0.0F - im_1 * (rtInfF)))
    + (re_2 * -0.0F - im_2 * (rtMinusInfF))) + (re_3 * -0.0F - im_3 *
    (rtMinusInfF))) + (re_4 * 0.0F - im_4 * (rtInfF))) + (re_5 * -0.0F - im_5 *
    (rtMinusInfF))) + (re_6 * 0.0F - im_6 * (rtInfF))) + (re_7 * 0.0F - im_7 *
    (rtInfF))) + (re_8 * -0.0F - im_8 * (rtMinusInfF))) + (re_9 * 0.0F - im_9 *
    (rtInfF))) + (re_a * -0.0F - im_a * (rtMinusInfF))) + (re_tmp_1 * t11.re -
    im_tmp_1 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) +
    (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) + (re_tmp_3 * t11.re -
    im_tmp_3 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) +
    (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) + (re_tmp_1 * t11.re -
    im_tmp_1 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) +
    (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) + (re_tmp_3 * t11.re -
    im_tmp_3 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) +
    (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) + (re_tmp_3 * t11.re -
    im_tmp_3 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) +
    (re_b * 0.0F - im_b * (rtInfF))) + (re_c * -0.0F - im_c * (rtMinusInfF))) +
    (re_d * -0.0F - im_d * (rtMinusInfF))) + (re_e * 0.0F - im_e * (rtInfF))) +
    (re_f * 0.0F - im_f * (rtInfF))) + (re_g * -0.0F - im_g * (rtMinusInfF))) +
    (re_h * -0.0F - im_h * (rtMinusInfF))) + (re_i * 0.0F - im_i * (rtInfF))) +
    (re_j * 0.0F - im_j * (rtInfF))) + (re_k * -0.0F - im_k * (rtMinusInfF))) +
    (re_l * 0.0F - im_l * (rtInfF))) + (re_m * -0.0F - im_m * (rtMinusInfF))) +
    (re_n * -0.0F - im_n * (rtMinusInfF))) + (re_o * -0.0F - im_o * (rtMinusInfF)))
    + (re_p * 0.0F - im_p * (rtInfF))) + (re_q * 0.0F - im_q * (rtInfF))) +
    (re_r * 0.0F - im_r * (rtInfF))) + (re_s * -0.0F - im_s * (rtMinusInfF))) +
    (re_t * t11.re - im_t * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) + (re_u * t11.re - im_u *
    t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF)) + (re_v * t11.re
    - im_v * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) + (re_w
    * t11.re - im_w * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    14))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF))
    + (re_x * t11.re - im_x * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF)) + (re_y * t11.re - im_y *
    t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) + (re_z *
    t11.re - im_z * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    11))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF))
    + (re_10 * t11.re - im_10 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) + (re_11 * t11.re - im_11 *
    t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) + (re_12 *
    t11.re - im_12 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    8))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF))
    + (re_13 * t11.re - im_13 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) + (re_14 * t11.re - im_14 *
    t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) + (re_16 *
    0.0F - im_15 * (rtInfF))) + (re_17 * -0.0F - im_16 * (rtMinusInfF))) +
    (re_18 * 0.0F - im_17 * (rtInfF))) + (re_19 * -0.0F - im_18 * (rtMinusInfF)))
    + (re_1a * -0.0F - im_19 * (rtMinusInfF))) + (re_1b * 0.0F - im_1a * (rtInfF)))
    + (re_1c * -0.0F - im_1b * (rtMinusInfF))) + (re_1d * 0.0F - im_1c * (rtInfF)))
    + (re_1e * 0.0F - im_1d * (rtInfF))) + (re_1f * -0.0F - im_1e * (rtMinusInfF)))
    + (re_1g * 0.0F - im_1f * (rtInfF))) + (re_1h * -0.0F - im_1g * (rtMinusInfF)))
    - tmp_tmp_2) - tmp_tmp_3) - tmp_tmp_4) - t146_re_tmp_2) - t146_re_tmp_3) -
    t146_re_tmp_4) - t146_re_tmp_5) - t146_re_tmp) - t146_re_tmp_6) -
    t146_re_tmp_8) - t146_re_tmp_9) - t146_re_tmp_0) - t146_re_tmp_a) -
    t146_re_tmp_1) - t146_re_tmp_b) - t146_re_tmp_7) - t146_re_tmp_c) -
    t146_re_tmp_d) - (re_tmp * t7.re - im_tmp * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF)) - t166_re) - (re_tmp * t7.re
    - im_tmp * t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) -
    t168_re) - (re_tmp * t7.re - im_tmp * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - t170_re) - (re_tmp_1 *
    t7.re - im_tmp_1 * t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    8))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF))
    - (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_1 * t7.re -
    im_tmp_1 * t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) -
    (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_tmp_1 * t9.re -
    im_tmp_1 * t9.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) -
    (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - t177_re) - t178_re) -
    t179_re) - (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_2 * t11.re -
    im_tmp_2 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
                       * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0]
                       * (rtInfF)) - (re_tmp_3 * t11.re - im_tmp_3 * t11.im) *
                      *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] *
                      *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] *
                      (rtInfF)) - (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_1 * t11.re -
    im_tmp_1 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
                    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] *
                    (rtInfF)) - (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_3 * t11.re -
    im_tmp_3 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
                  * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] *
                  (rtInfF)) - (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_tmp_3 * t11.re -
    im_tmp_3 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
                * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] *
                (rtInfF)) - (re_15 * t11.re - im_1h * t11.im) * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF)) - (re_1i * t11.re - im_1i *
    t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_1j *
              t11.re - im_1j * t11.im) * *((const real32_T **)
              ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
              ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_1k * t11.re -
             im_1k * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
              8))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] *
            (rtInfF)) - (re_1l * t11.re - im_1l * t11.im) * *((const real32_T **)
            ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
            ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_1m * t11.re -
           im_1m * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))
          [0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] *
          (rtInfF)) - (re_1n * t11.re - im_1n * t11.im) * *((const real32_T **)
          ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
          ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_1o * t11.re -
         im_1o * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))
        [0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF))
       - (re_1p * t11.re - im_1p * t11.im) * *((const real32_T **)
        ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
        ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_1q * t11.re -
       im_1q * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
      * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) -
     (re_1r * t11.re - im_1r * t11.im) * *((const real32_T **)
      ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
      ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_1s * t11.re - im_1s *
    t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  tmp_tmp_5 = im_tmp * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0];
  tmp_tmp_6 = im_tmp * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0];
  tmp_tmp_7 = im_tmp * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0];
  tmp_tmp_8 = im_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0];
  tmp_tmp_9 = im_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0];
  tmp_tmp_a = im_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0];
  tmp_tmp_b = im_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0];
  tmp_tmp_c = im_tmp_1 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0];
  t218_im = im_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0];
  tmp_tmp_d = im_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0];
  tmp_tmp_e = im_tmp_2 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0];
  tmp_tmp_f = im_tmp_3 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0];
  tmp_tmp_g = im_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0];
  tmp_tmp_h = im_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0];
  tmp_tmp_i = im_tmp_4 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0];
  t204_im = re_tmp_4 * (rtInfF);
  re_tmp_4 = tmp_tmp_j * (rtMinusInfF);
  tmp_tmp *= (rtMinusInfF);
  t207_im = tmp_tmp_k * (rtInfF);
  tmp_tmp_0 *= (rtInfF);
  tmp_tmp_1 *= (rtMinusInfF);
  tmp_tmp_j = tmp_tmp_7 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0]
    * (rtInfF);
  tmp_tmp_k = tmp_tmp_5 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))
    [0] * (rtInfF);
  im_tmp_4 = tmp_tmp_6 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0]
    * (rtInfF);
  tmp_tmp_v = tmp_tmp_c * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  tmp_tmp_w = tmp_tmp_9 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))
    [0] * (rtInfF);
  t215_im = tmp_tmp_d * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0]
    * (rtInfF);
  t216_im = tmp_tmp_8 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0]
    * (rtInfF);
  tmp_tmp_10 = tmp_tmp_b * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))
    [0] * (rtInfF);
  tmp_tmp_11 = tmp_tmp_f * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  tmp_tmp_13 = tmp_tmp_a * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))
    [0] * (rtInfF);
  tmp_tmp_14 = tmp_tmp_h * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))
    [0] * (rtInfF);
  tmp_tmp_16 = tmp_tmp_i * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  t242_im = tmp_tmp_g * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0]
    * (rtInfF);
  tmp_tmp_5 = tmp_tmp_5 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))
    [0] * (rtInfF);
  tmp_tmp_6 = tmp_tmp_6 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0]
    * (rtInfF);
  tmp_tmp_7 = tmp_tmp_7 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))
    [0] * (rtInfF);
  tmp_tmp_8 = tmp_tmp_8 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))
    [0] * (rtInfF);
  tmp_tmp_1a = tmp_tmp_e * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  tmp_tmp_a = tmp_tmp_a * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  tmp_tmp_9 = tmp_tmp_9 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))
    [0] * (rtInfF);
  tmp_tmp_1b = t218_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0]
    * (rtInfF);
  tmp_tmp_1d = ((((t12_im + t13_im) + t14_im) + t15_im) + t16_im) + t17_im;
  t218_im = t218_im * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] *
    (rtInfF);
  tmp_tmp_e = tmp_tmp_e * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))
    [0] * (rtInfF);
  tmp_tmp_g = tmp_tmp_g * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  tmp_tmp_b = tmp_tmp_b * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))
    [0] * (rtInfF);
  tmp_tmp_c = tmp_tmp_c * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))
    [0] * (rtInfF);
  tmp_tmp_d = tmp_tmp_d * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))
    [0] * (rtInfF);
  tmp_tmp_f = tmp_tmp_f * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))
    [0] * (rtInfF);
  tmp_tmp_h = tmp_tmp_h * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))
    [0] * (rtInfF);
  tmp_tmp_i = tmp_tmp_i * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))
    [0] * (rtInfF);
  t146_im =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((tmp_tmp_1d + t204_im) + re_tmp_4) + tmp_tmp) + t207_im) +
    tmp_tmp_0) + tmp_tmp_1) + tmp_tmp_j) + tmp_tmp_k) + im_tmp_4) + tmp_tmp_v) +
    tmp_tmp_1a) + t215_im) + t216_im) + tmp_tmp_10) + tmp_tmp_9) + tmp_tmp_11) +
    tmp_tmp_1b) + tmp_tmp_13) + (t222_im * (rtInfF) + t223_re * 0.0F)) +
    (t223_im * (rtMinusInfF) + t224_re * -0.0F)) + (t224_im * (rtMinusInfF) +
    t225_re * -0.0F)) + (t225_im * (rtInfF) + t226_re * 0.0F)) + (t226_im *
    (rtInfF) + t227_re * 0.0F)) + (t227_im * (rtMinusInfF) + t228_re * -0.0F)) +
    (t228_im * (rtMinusInfF) + t229_re * -0.0F)) + (t229_im * (rtInfF) + t230_re
    * 0.0F)) + (t230_im * (rtInfF) + t231_re * 0.0F)) + (t231_im * (rtMinusInfF)
    + t232_re * -0.0F)) + (t232_im * (rtInfF) + t233_re * 0.0F)) + (t233_im *
    (rtMinusInfF) + t234_re * -0.0F)) + (t234_im * (rtMinusInfF) + t235_re *
    -0.0F)) + (t235_im * (rtMinusInfF) + t236_re * -0.0F)) + (t236_im * (rtInfF)
    + t237_re * 0.0F)) + (t237_im * (rtInfF) + t238_re * 0.0F)) + (t238_im *
    (rtInfF) + t239_re * 0.0F)) + (t239_im * (rtMinusInfF) + t243_re * -0.0F)) +
    tmp_tmp_14) + tmp_tmp_16) + t242_im) + (t243_im * (rtInfF) + t244_re * 0.0F))
    + (t244_im * (rtMinusInfF) + t245_re * -0.0F)) + (t245_im * (rtMinusInfF) +
    t246_re * -0.0F)) + (t246_im * (rtInfF) + t247_re * 0.0F)) + (t247_im *
    (rtInfF) + t248_re * 0.0F)) + (t248_im * (rtMinusInfF) + t249_re * -0.0F)) +
    (re_tmp * t7.im + im_tmp * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) + (re_tmp * t7.im + im_tmp *
    t7.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) + (re_tmp *
    t7.im + im_tmp * t7.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    14))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF))
    + (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) + (re_tmp_1 * t9.im +
    im_tmp_1 * t9.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) +
    (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) + (re_tmp_1 * t9.im +
    im_tmp_1 * t9.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) +
    (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) + (re_tmp_1 * t9.im +
    im_tmp_1 * t9.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) + (re
    * (rtInfF) + im * 0.0F)) + (re_0 * (rtMinusInfF) + im_0 * -0.0F)) + (re_1 *
    (rtInfF) + im_1 * 0.0F)) + (re_2 * (rtMinusInfF) + im_2 * -0.0F)) + (re_3 *
    (rtMinusInfF) + im_3 * -0.0F)) + (re_4 * (rtInfF) + im_4 * 0.0F)) + (re_5 *
    (rtMinusInfF) + im_5 * -0.0F)) + (re_6 * (rtInfF) + im_6 * 0.0F)) + (re_7 *
    (rtInfF) + im_7 * 0.0F)) + (re_8 * (rtMinusInfF) + im_8 * -0.0F)) + (re_9 *
    (rtInfF) + im_9 * 0.0F)) + (re_a * (rtMinusInfF) + im_a * -0.0F)) +
    (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) + (re_tmp_2 * t11.im +
    im_tmp_2 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) +
    (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) + (re_tmp_1 * t11.im +
    im_tmp_1 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) +
    (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) + (re_tmp_2 * t11.im +
    im_tmp_2 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) +
    (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) + (re_tmp_2 * t11.im +
    im_tmp_2 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) +
    (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) + (re_b * (rtInfF) + im_b *
    0.0F)) + (re_c * (rtMinusInfF) + im_c * -0.0F)) + (re_d * (rtMinusInfF) +
    im_d * -0.0F)) + (re_e * (rtInfF) + im_e * 0.0F)) + (re_f * (rtInfF) + im_f *
    0.0F)) + (re_g * (rtMinusInfF) + im_g * -0.0F)) + (re_h * (rtMinusInfF) +
    im_h * -0.0F)) + (re_i * (rtInfF) + im_i * 0.0F)) + (re_j * (rtInfF) + im_j *
    0.0F)) + (re_k * (rtMinusInfF) + im_k * -0.0F)) + (re_l * (rtInfF) + im_l *
    0.0F)) + (re_m * (rtMinusInfF) + im_m * -0.0F)) + (re_n * (rtMinusInfF) +
    im_n * -0.0F)) + (re_o * (rtMinusInfF) + im_o * -0.0F)) + (re_p * (rtInfF) +
    im_p * 0.0F)) + (re_q * (rtInfF) + im_q * 0.0F)) + (re_r * (rtInfF) + im_r *
    0.0F)) + (re_s * (rtMinusInfF) + im_s * -0.0F)) + (re_t * t11.im + im_t *
    t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) + (re_u *
    t11.im + im_u * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))
    [0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF)) +
    (re_v * t11.im + im_v * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) + (re_w * t11.im + im_w *
    t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) + (re_x *
    t11.im + im_x * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    14))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF))
    + (re_y * t11.im + im_y * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) + (re_z * t11.im + im_z *
    t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) + (re_10 *
    t11.im + im_10 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    11))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF))
    + (re_11 * t11.im + im_11 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) + (re_12 * t11.im + im_12 *
    t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) + (re_13 *
    t11.im + im_13 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    14))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF))
    + (re_14 * t11.im + im_14 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) + (re_16 * (rtInfF) + im_15 *
    0.0F)) + (re_17 * (rtMinusInfF) + im_16 * -0.0F)) + (re_18 * (rtInfF) +
    im_17 * 0.0F)) + (re_19 * (rtMinusInfF) + im_18 * -0.0F)) + (re_1a *
    (rtMinusInfF) + im_19 * -0.0F)) + (re_1b * (rtInfF) + im_1a * 0.0F)) +
    (re_1c * (rtMinusInfF) + im_1b * -0.0F)) + (re_1d * (rtInfF) + im_1c * 0.0F))
    + (re_1e * (rtInfF) + im_1d * 0.0F)) + (re_1f * (rtMinusInfF) + im_1e *
    -0.0F)) + (re_1g * (rtInfF) + im_1f * 0.0F)) + (re_1h * (rtMinusInfF) +
    im_1g * -0.0F)) - tmp_tmp_5) - tmp_tmp_6) - tmp_tmp_7) - tmp_tmp_8) -
    tmp_tmp_w) - tmp_tmp_a) - tmp_tmp_b) - tmp_tmp_c) - t218_im) - tmp_tmp_d) -
    tmp_tmp_e) - tmp_tmp_f) - tmp_tmp_g) - tmp_tmp_h) - tmp_tmp_i) - (re_tmp *
    t7.im + im_tmp * t7.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))
    [0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF)) -
    t166_im) - (re_tmp * t7.im + im_tmp * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - t168_im) - (re_tmp * t7.im
    + im_tmp * t7.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) -
    t170_im) - (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_1 * t9.im +
    im_tmp_1 * t9.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
    (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_1 * t7.im +
    im_tmp_1 * t7.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) -
    (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_1 * t9.im +
    im_tmp_1 * t9.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) -
    t177_im) - t178_im) - t179_im) - (re_tmp_1 * t11.im + im_tmp_1 * t11.re) *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_2 * t11.im +
    im_tmp_2 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
                       * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0]
                       * (rtInfF)) - (re_tmp_3 * t11.im + im_tmp_3 * t11.re) *
                      *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] *
                      *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] *
                      (rtInfF)) - (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_1 * t11.im +
    im_tmp_1 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
                    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] *
                    (rtInfF)) - (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_3 * t11.im +
    im_tmp_3 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
                  * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] *
                  (rtInfF)) - (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_tmp_3 * t11.im +
    im_tmp_3 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
                * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] *
                (rtInfF)) - (re_15 * t11.im + im_1h * t11.re) * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF)) - (re_1i * t11.im + im_1i *
    t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_1j *
              t11.im + im_1j * t11.re) * *((const real32_T **)
              ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
              ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_1k * t11.im +
             im_1k * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
              8))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] *
            (rtInfF)) - (re_1l * t11.im + im_1l * t11.re) * *((const real32_T **)
            ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
            ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_1m * t11.im +
           im_1m * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))
          [0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] *
          (rtInfF)) - (re_1n * t11.im + im_1n * t11.re) * *((const real32_T **)
          ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
          ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_1o * t11.im +
         im_1o * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))
        [0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF))
       - (re_1p * t11.im + im_1p * t11.re) * *((const real32_T **)
        ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
        ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_1q * t11.im +
       im_1q * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
      * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) -
     (re_1r * t11.im + im_1r * t11.re) * *((const real32_T **)
      ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
      ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_1s * t11.im + im_1s *
    t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t222_re = t222_im * 0.0F - t223_re * (rtInfF);
  t222_im = t222_im * (rtInfF) + t223_re * 0.0F;
  t223_re = t223_im * -0.0F - t224_re * (rtMinusInfF);
  t223_im = t223_im * (rtMinusInfF) + t224_re * -0.0F;
  t224_re = t224_im * 0.0F - t225_re * (rtInfF);
  t224_im = t224_im * (rtInfF) + t225_re * 0.0F;
  t225_re = t225_im * -0.0F - t226_re * (rtMinusInfF);
  t225_im = t225_im * (rtMinusInfF) + t226_re * -0.0F;
  t226_re = t226_im * 0.0F - t227_re * (rtInfF);
  t226_im = t226_im * (rtInfF) + t227_re * 0.0F;
  t227_re = t227_im * -0.0F - t228_re * (rtMinusInfF);
  t227_im = t227_im * (rtMinusInfF) + t228_re * -0.0F;
  t228_re = t228_im * -0.0F - t229_re * (rtMinusInfF);
  t228_im = t228_im * (rtMinusInfF) + t229_re * -0.0F;
  t229_re = t229_im * 0.0F - t230_re * (rtInfF);
  t229_im = t229_im * (rtInfF) + t230_re * 0.0F;
  t230_re = t230_im * 0.0F - t231_re * (rtInfF);
  t230_im = t230_im * (rtInfF) + t231_re * 0.0F;
  t231_re = t231_im * -0.0F - t232_re * (rtMinusInfF);
  t231_im = t231_im * (rtMinusInfF) + t232_re * -0.0F;
  t232_re = t232_im * -0.0F - t233_re * (rtMinusInfF);
  t232_im = t232_im * (rtMinusInfF) + t233_re * -0.0F;
  t233_re = t233_im * 0.0F - t234_re * (rtInfF);
  t233_im = t233_im * (rtInfF) + t234_re * 0.0F;
  t234_re = t234_im * -0.0F - t235_re * (rtMinusInfF);
  t234_im = t234_im * (rtMinusInfF) + t235_re * -0.0F;
  t235_re = t235_im * 0.0F - t236_re * (rtInfF);
  t235_im = t235_im * (rtInfF) + t236_re * 0.0F;
  t236_re = t236_im * 0.0F - t237_re * (rtInfF);
  t236_im = t236_im * (rtInfF) + t237_re * 0.0F;
  t237_re = t237_im * -0.0F - t238_re * (rtMinusInfF);
  t237_im = t237_im * (rtMinusInfF) + t238_re * -0.0F;
  t238_re = t238_im * 0.0F - t239_re * (rtInfF);
  t238_im = t238_im * (rtInfF) + t239_re * 0.0F;
  t239_re = t239_im * -0.0F - t243_re * (rtMinusInfF);
  t239_im = t239_im * (rtMinusInfF) + t243_re * -0.0F;
  t243_re = t243_im * 0.0F - t244_re * (rtInfF);
  t243_im = t243_im * (rtInfF) + t244_re * 0.0F;
  t244_re = t244_im * -0.0F - t245_re * (rtMinusInfF);
  t244_im = t244_im * (rtMinusInfF) + t245_re * -0.0F;
  t245_re = t245_im * -0.0F - t246_re * (rtMinusInfF);
  t245_im = t245_im * (rtMinusInfF) + t246_re * -0.0F;
  t246_re = t246_im * 0.0F - t247_re * (rtInfF);
  t246_im = t246_im * (rtInfF) + t247_re * 0.0F;
  t247_re = t247_im * 0.0F - t248_re * (rtInfF);
  t247_im = t247_im * (rtInfF) + t248_re * 0.0F;
  t248_re = t248_im * -0.0F - t249_re * (rtMinusInfF);
  t248_im = t248_im * (rtMinusInfF) + t249_re * -0.0F;
  t249_re = (re_tmp * t7.re - im_tmp * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  t249_im = (re_tmp * t7.im + im_tmp * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  t250_re = (re_tmp * t7.re - im_tmp * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  t250_im = (re_tmp * t7.im + im_tmp * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  t251_re = (re_tmp * t7.re - im_tmp * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  t251_im = (re_tmp * t7.im + im_tmp * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  t252_re = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  t252_im = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  t253_re = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  t253_im = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  t254_re = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  t254_im = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  t255_re = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t255_im = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t256_re = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t256_im = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t257_re = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  t257_im = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  re = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t258_re = re * -0.0F - im * (rtMinusInfF);
  t258_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t259_re = re * 0.0F - im * (rtInfF);
  t259_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t260_re = re * 0.0F - im * (rtInfF);
  t260_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t261_re = re * -0.0F - im * (rtMinusInfF);
  t261_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t262_re = re * 0.0F - im * (rtInfF);
  t262_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t263_re = re * -0.0F - im * (rtMinusInfF);
  t263_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t264_re = re * -0.0F - im * (rtMinusInfF);
  t264_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t265_re = re * -0.0F - im * (rtMinusInfF);
  t265_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t266_re = re * 0.0F - im * (rtInfF);
  t266_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t267_re = re * 0.0F - im * (rtInfF);
  t267_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t268_re = re * 0.0F - im * (rtInfF);
  t268_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t269_re = re * -0.0F - im * (rtMinusInfF);
  t269_im = re * (rtMinusInfF) + im * -0.0F;
  t270_re = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  t270_im = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  t271_re = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  t271_im = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  t272_re = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  t272_im = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  t273_re = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t273_im = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t274_re = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  t274_im = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  t275_re = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  t275_im = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  t276_re = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t276_im = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t277_re = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  t277_im = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  t278_re = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t278_im = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  re = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t279_re = re * 0.0F - im * (rtInfF);
  t279_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t280_re = re * -0.0F - im * (rtMinusInfF);
  t280_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t281_re = re * 0.0F - im * (rtInfF);
  t281_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t282_re = re * -0.0F - im * (rtMinusInfF);
  t282_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t283_re = re * 0.0F - im * (rtInfF);
  t283_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t284_re = re * -0.0F - im * (rtMinusInfF);
  t284_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t285_re = re * -0.0F - im * (rtMinusInfF);
  t285_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t286_re = re * 0.0F - im * (rtInfF);
  t286_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t287_re = re * 0.0F - im * (rtInfF);
  t287_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t288_re = re * -0.0F - im * (rtMinusInfF);
  t288_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t289_re = re * -0.0F - im * (rtMinusInfF);
  t289_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t290_re = re * 0.0F - im * (rtInfF);
  t290_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t291_re = re * -0.0F - im * (rtMinusInfF);
  t291_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t292_re = re * 0.0F - im * (rtInfF);
  t292_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t293_re = re * 0.0F - im * (rtInfF);
  t293_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t294_re = re * -0.0F - im * (rtMinusInfF);
  t294_im = re * (rtMinusInfF) + im * -0.0F;
  re = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t295_re = re * 0.0F - im * (rtInfF);
  t295_im = re * (rtInfF) + im * 0.0F;
  re = (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t296_re = re * -0.0F - im * (rtMinusInfF);
  t296_im = re * (rtMinusInfF) + im * -0.0F;
  re = re_tmp * t7.re - im_tmp * t7.im;
  im = re_tmp * t7.im + im_tmp * t7.re;
  t297_re = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  t297_im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  re = re_tmp * t9.re - im_tmp * t9.im;
  im = re_tmp * t9.im + im_tmp * t9.re;
  t298_re = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  t298_im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF);
  re = re_tmp * t7.re - im_tmp * t7.im;
  im = re_tmp * t7.im + im_tmp * t7.re;
  t299_re = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  t299_im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  re = re_tmp * t7.re - im_tmp * t7.im;
  im = re_tmp * t7.im + im_tmp * t7.re;
  t300_re = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  t300_im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  re = re_tmp * t9.re - im_tmp * t9.im;
  im = re_tmp * t9.im + im_tmp * t9.re;
  t301_re = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  t301_im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF);
  re = re_tmp * t9.re - im_tmp * t9.im;
  im = re_tmp * t9.im + im_tmp * t9.re;
  t302_re = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  t302_im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF);
  re = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  t303_re = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  t303_im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  re = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  t304_re = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  t304_im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  re = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  t305_re = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  t305_im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF);
  re = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  t306_re = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t306_im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  re = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  t307_re = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t307_im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  re = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  t308_re = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  t308_im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF);
  re = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_0 = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t309_re = re_0 * -0.0F - im * (rtMinusInfF);
  t309_im = re_0 * (rtMinusInfF) + im * -0.0F;
  re = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_0 = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t310_re = re_0 * 0.0F - im * (rtInfF);
  t310_im = re_0 * (rtInfF) + im * 0.0F;
  re = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_0 = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t311_re = re_0 * 0.0F - im * (rtInfF);
  t311_im = re_0 * (rtInfF) + im * 0.0F;
  re = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_0 = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t312_re = re_0 * -0.0F - im * (rtMinusInfF);
  t312_im = re_0 * (rtMinusInfF) + im * -0.0F;
  re = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_0 = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t313_re = re_0 * 0.0F - im * (rtInfF);
  t313_im = re_0 * (rtInfF) + im * 0.0F;
  re = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_0 = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t314_re = re_0 * -0.0F - im * (rtMinusInfF);
  t314_im = re_0 * (rtMinusInfF) + im * -0.0F;
  re = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_0 = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t315_re = re_0 * -0.0F - im * (rtMinusInfF);
  t315_im = re_0 * (rtMinusInfF) + im * -0.0F;
  re = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_0 = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t316_re = re_0 * -0.0F - im * (rtMinusInfF);
  t316_im = re_0 * (rtMinusInfF) + im * -0.0F;
  re = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_0 = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t317_re = re_0 * 0.0F - im * (rtInfF);
  t317_im = re_0 * (rtInfF) + im * 0.0F;
  re = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_0 = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t318_re = re_0 * 0.0F - im * (rtInfF);
  t318_im = re_0 * (rtInfF) + im * 0.0F;
  re = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_0 = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t319_re = re_0 * 0.0F - im * (rtInfF);
  t319_im = re_0 * (rtInfF) + im * 0.0F;
  re = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_0 = (re * t11.re - im * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im = (re * t11.im + im * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t320_re = re_0 * -0.0F - im * (rtMinusInfF);
  t320_im = re_0 * (rtMinusInfF) + im * -0.0F;
  re = t25.re * t25.im + t25.im * t25.re;
  t25.re = (t25.re * t25.re - t25.im * t25.im) * 0.25F;
  t25.im = 0.25F * re;
  if (t146_im == 0.0F) {
    t425_re = 1.0F / t146_re;
    t425_im = 0.0F;
  } else if (t146_re == 0.0F) {
    t425_re = 0.0F;
    t425_im = -(1.0F / t146_im);
  } else {
    re = (real32_T)fabs(t146_re);
    im = (real32_T)fabs(t146_im);
    if (re > im) {
      re = t146_im / t146_re;
      im = re * t146_im + t146_re;
      t425_re = (re * 0.0F + 1.0F) / im;
      t425_im = (0.0F - re) / im;
    } else if (im == re) {
      im = t146_re > 0.0F ? 0.5F : -0.5F;
      re_0 = t146_im > 0.0F ? 0.5F : -0.5F;
      t425_re = (0.0F * re_0 + im) / re;
      t425_im = (0.0F * im - re_0) / re;
    } else {
      re = t146_re / t146_im;
      im = re * t146_re + t146_im;
      t425_re = re / im;
      t425_im = (re * 0.0F - 1.0F) / im;
    }
  }

  re = re_tmp * t7.re - im_tmp * t7.im;
  im = re_tmp * t7.im + im_tmp * t7.re;
  re_0 = re_tmp * t9.re - im_tmp * t9.im;
  im_0 = re_tmp * t9.im + im_tmp * t9.re;
  re_1 = re_tmp * t7.re - im_tmp * t7.im;
  im_1 = re_tmp * t7.im + im_tmp * t7.re;
  re_2 = re_tmp * t7.re - im_tmp * t7.im;
  im_2 = re_tmp * t7.im + im_tmp * t7.re;
  re_3 = re_tmp * t9.re - im_tmp * t9.im;
  im_3 = re_tmp * t9.im + im_tmp * t9.re;
  re_4 = re_tmp * t9.re - im_tmp * t9.im;
  im_4 = re_tmp * t9.im + im_tmp * t9.re;
  re_5 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_5 = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_6 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_6 = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_7 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_7 = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_8 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_8 = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_9 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_9 = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_a = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_a = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_b =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((t12_re + t13_re) + t14_re) + t15_re) + t16_re) +
    t17_re) + tmp_tmp_l) + tmp_tmp_m) + tmp_tmp_n) + t204_re) + tmp_tmp_o) +
    tmp_tmp_p) + tmp_tmp_q) + t208_re) + tmp_tmp_r) + tmp_tmp_s) + tmp_tmp_t) +
    t212_re) + tmp_tmp_u) + t146_re_tmp) + tmp_tmp_x) + tmp_tmp_y) + tmp_tmp_z)
    + t146_re_tmp_0) + t146_re_tmp_1) + t220_re) + tmp_tmp_12) + t222_re) +
    t223_re) + t224_re) + t225_re) + t226_re) + t227_re) + t228_re) + t229_re) +
    t230_re) + t231_re) + t232_re) + t233_re) + t234_re) + t235_re) + t236_re) +
    t237_re) + t238_re) + t239_re) + t240_re) + tmp_tmp_15) + t242_re) + t243_re)
    + t244_re) + t245_re) + t246_re) + t247_re) + t248_re) + t249_re) + t250_re)
    + t251_re) + t252_re) + t253_re) + t254_re) + t255_re) + t256_re) + t257_re)
    + t258_re) + t259_re) + t260_re) + t261_re) + t262_re) + t263_re) + t264_re)
    + t265_re) + t266_re) + t267_re) + t268_re) + t269_re) + t270_re) + t271_re)
    + t272_re) + t273_re) + t274_re) + t275_re) + t276_re) + t277_re) + t278_re)
    + t279_re) + t280_re) + t281_re) + t282_re) + t283_re) + t284_re) + t285_re)
    + t286_re) + t287_re) + t288_re) + t289_re) + t290_re) + t291_re) + t292_re)
    + t293_re) + t294_re) + t295_re) + t296_re) + t297_re) + t298_re) + t299_re)
    + t300_re) + t301_re) + t302_re) + t303_re) + t304_re) + t305_re) + t306_re)
    + t307_re) + t308_re) + t309_re) + t310_re) + t311_re) + t312_re) + t313_re)
    + t314_re) + t315_re) + t316_re) + t317_re) + t318_re) + t319_re) + t320_re)
    - tmp_tmp_2) - tmp_tmp_3) - tmp_tmp_4) - t146_re_tmp_2) - t146_re_tmp_3) -
    t146_re_tmp_4) - t146_re_tmp_5) - tmp_tmp_17) - t146_re_tmp_6) -
    t146_re_tmp_7) - t146_re_tmp_8) - t146_re_tmp_9) - tmp_tmp_18) - tmp_tmp_19)
    - t146_re_tmp_a) - t146_re_tmp_b) - t146_re_tmp_c) - t146_re_tmp_d) -
    (re_tmp * t7.re - im_tmp * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_tmp * t9.re - im_tmp *
    t9.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_tmp *
    t11.re - im_tmp * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    8))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF))
    - (re_tmp * t7.re - im_tmp * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_tmp * t7.re - im_tmp *
    t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF)) - (re_tmp *
    t9.re - im_tmp * t9.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))
    [0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) -
    (re_tmp * t9.re - im_tmp * t9.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF)) - (re_tmp * t11.re - im_tmp *
    t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_tmp *
    t11.re - im_tmp * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    11))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF))
    - (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_1 * t9.re -
    im_tmp_1 * t9.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
    (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_2 * t11.re -
    im_tmp_2 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) -
    (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_1 * t7.re -
    im_tmp_1 * t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) -
    (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_1 * t9.re -
    im_tmp_1 * t9.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
                       * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0]
                       * (rtInfF)) - (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_tmp_1 * t11.re -
    im_tmp_1 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
                     * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] *
                     (rtInfF)) - (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_tmp_2 * t11.re -
    im_tmp_2 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
                   * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] *
                   (rtInfF)) - (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_3 * t11.re -
    im_tmp_3 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
                 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] *
                 (rtInfF)) - (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re * t11.re - im * t11.im)
               * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_0 *
    t11.re - im_0 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    11))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF))
             - (re_1 * t11.re - im_1 * t11.im) * *((const real32_T **)
              ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
              ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_2 * t11.re -
             im_2 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
              14))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0]
            * (rtInfF)) - (re_3 * t11.re - im_3 * t11.im) * *((const real32_T **)
            ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
            ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_4 * t11.re -
           im_4 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))
          [0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] *
          (rtInfF)) - (re_5 * t11.re - im_5 * t11.im) * *((const real32_T **)
          ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
          ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_6 * t11.re -
         im_6 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
        * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
       (re_7 * t11.re - im_7 * t11.im) * *((const real32_T **)
        ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
        ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_8 * t11.re - im_8 *
       t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((
        const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
     (re_9 * t11.re - im_9 * t11.im) * *((const real32_T **)
      ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
      ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_a * t11.re - im_a *
    t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  re =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((t12_im + t13_im) + t14_im) + t15_im) + t16_im) + t17_im) +
    t204_im) + re_tmp_4) + tmp_tmp) + t207_im) + tmp_tmp_0) + tmp_tmp_1) +
    tmp_tmp_j) + tmp_tmp_k) + im_tmp_4) + tmp_tmp_v) + tmp_tmp_w) + t215_im) +
    t216_im) + tmp_tmp_10) + t218_im) + tmp_tmp_e) + tmp_tmp_11) + tmp_tmp_13) +
    t222_im) + t223_im) + t224_im) + t225_im) + t226_im) + t227_im) + t228_im) +
    t229_im) + t230_im) + t231_im) + t232_im) + t233_im) + t234_im) + t235_im) +
    t236_im) + t237_im) + t238_im) + t239_im) + tmp_tmp_14) + tmp_tmp_16) +
    t242_im) + t243_im) + t244_im) + t245_im) + t246_im) + t247_im) + t248_im) +
    t249_im) + t250_im) + t251_im) + t252_im) + t253_im) + t254_im) + t255_im) +
    t256_im) + t257_im) + t258_im) + t259_im) + t260_im) + t261_im) + t262_im) +
    t263_im) + t264_im) + t265_im) + t266_im) + t267_im) + t268_im) + t269_im) +
    t270_im) + t271_im) + t272_im) + t273_im) + t274_im) + t275_im) + t276_im) +
    t277_im) + t278_im) + t279_im) + t280_im) + t281_im) + t282_im) + t283_im) +
    t284_im) + t285_im) + t286_im) + t287_im) + t288_im) + t289_im) + t290_im) +
    t291_im) + t292_im) + t293_im) + t294_im) + t295_im) + t296_im) + t297_im) +
    t298_im) + t299_im) + t300_im) + t301_im) + t302_im) + t303_im) + t304_im) +
    t305_im) + t306_im) + t307_im) + t308_im) + t309_im) + t310_im) + t311_im) +
    t312_im) + t313_im) + t314_im) + t315_im) + t316_im) + t317_im) + t318_im) +
    t319_im) + t320_im) - tmp_tmp_5) - tmp_tmp_6) - tmp_tmp_7) - tmp_tmp_8) -
    tmp_tmp_1a) - tmp_tmp_a) - tmp_tmp_g) - tmp_tmp_b) - tmp_tmp_c) - tmp_tmp_9)
    - tmp_tmp_1b) - tmp_tmp_d) - tmp_tmp_f) - tmp_tmp_h) - tmp_tmp_i) - (re_tmp *
    t7.im + im_tmp * t7.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    11))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF))
    - (re_tmp * t9.im + im_tmp * t9.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_tmp * t11.im + im_tmp *
    t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF)) - (re_tmp *
    t7.im + im_tmp * t7.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))
    [0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) -
    (re_tmp * t7.im + im_tmp * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF)) - (re_tmp * t9.im + im_tmp *
    t9.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_tmp *
    t9.im + im_tmp * t9.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    14))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF))
    - (re_tmp * t11.im + im_tmp * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_tmp * t11.im + im_tmp *
    t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) -
    (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_1 * t9.im +
    im_tmp_1 * t9.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
    (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_2 * t11.im +
    im_tmp_2 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) -
    (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_1 * t7.im +
    im_tmp_1 * t7.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) -
    (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_1 * t9.im +
    im_tmp_1 * t9.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
                       * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0]
                       * (rtInfF)) - (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_tmp_1 * t11.im +
    im_tmp_1 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
                     * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] *
                     (rtInfF)) - (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_tmp_2 * t11.im +
    im_tmp_2 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
                   * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] *
                   (rtInfF)) - (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_3 * t11.im +
    im_tmp_3 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
                 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] *
                 (rtInfF)) - (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re * t11.im + im * t11.re)
               * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_0 *
    t11.im + im_0 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    11))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF))
             - (re_1 * t11.im + im_1 * t11.re) * *((const real32_T **)
              ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
              ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_2 * t11.im +
             im_2 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
              14))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0]
            * (rtInfF)) - (re_3 * t11.im + im_3 * t11.re) * *((const real32_T **)
            ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
            ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_4 * t11.im +
           im_4 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))
          [0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] *
          (rtInfF)) - (re_5 * t11.im + im_5 * t11.re) * *((const real32_T **)
          ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
          ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_6 * t11.im +
         im_6 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
        * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
       (re_7 * t11.im + im_7 * t11.re) * *((const real32_T **)
        ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
        ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_8 * t11.im + im_8 *
       t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((
        const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
     (re_9 * t11.im + im_9 * t11.re) * *((const real32_T **)
      ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
      ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_a * t11.im + im_a *
    t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t25_0.re = t25.re - (t146_re * re_b - t146_im * re);
  t25_0.im = t25.im - (t146_re * re + t146_im * re_b);
  t25_0 = Mother_my_sqrt(t25_0);
  t3_re = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_0 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_0 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_1 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_1 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_2 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_2 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_3 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_3 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_4 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_4 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_5 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_5 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_6 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_6 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_7 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_7 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_8 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_8 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_9 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_9 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_a = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_a = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_b = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_b = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_c = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_c = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_d = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_d = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_e = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_e = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_f = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_f = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_g = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_g = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_h = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_h = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_i = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_i = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_j = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_j = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_k = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_k = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_l = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_l = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_m = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_m = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im = re_tmp * t7.im + im_tmp * t7.re;
  re_0 = (re * t19.re - im * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im = (re * t19.im + im * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_0 = re_tmp * t7.im + im_tmp * t7.re;
  re_1 = (re * t19.re - im_0 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_0 = (re * t19.im + im_0 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_2 = (re * t19.re - im_1 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_1 = (re * t19.im + im_1 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_2 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_3 = (re * t19.re - im_2 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_2 = (re * t19.im + im_2 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_3 = re_tmp * t7.im + im_tmp * t7.re;
  re_4 = (re * t19.re - im_3 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_3 = (re * t19.im + im_3 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_4 = re_tmp * t7.im + im_tmp * t7.re;
  re_5 = (re * t19.re - im_4 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_4 = (re * t19.im + im_4 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_5 = re_tmp * t7.im + im_tmp * t7.re;
  re_6 = (re * t19.re - im_5 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_5 = (re * t19.im + im_5 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_6 = re_tmp * t7.im + im_tmp * t7.re;
  re_7 = (re * t19.re - im_6 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_6 = (re * t19.im + im_6 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_7 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_8 = (re * t19.re - im_7 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_7 = (re * t19.im + im_7 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_8 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_9 = (re * t19.re - im_8 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_8 = (re * t19.im + im_8 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_9 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_a = (re * t19.re - im_9 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_9 = (re * t19.im + im_9 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_a = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_b = (re * t19.re - im_a * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_a = (re * t19.im + im_a * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_b = re_tmp * t7.im + im_tmp * t7.re;
  re_c = (re * t19.re - im_b * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_b = (re * t19.im + im_b * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_c = re_tmp * t7.im + im_tmp * t7.re;
  re_d = (re * t19.re - im_c * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_c = (re * t19.im + im_c * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_d = re_tmp * t7.im + im_tmp * t7.re;
  re_e = (re * t19.re - im_d * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_d = (re * t19.im + im_d * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_e = re_tmp * t7.im + im_tmp * t7.re;
  re_f = (re * t19.re - im_e * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_e = (re * t19.im + im_e * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_f = re_tmp * t7.im + im_tmp * t7.re;
  re_g = (re * t19.re - im_f * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_f = (re * t19.im + im_f * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_g = re_tmp * t7.im + im_tmp * t7.re;
  re_h = (re * t19.re - im_g * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_g = (re * t19.im + im_g * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_h = re_tmp * t7.im + im_tmp * t7.re;
  re_i = (re * t19.re - im_h * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_h = (re * t19.im + im_h * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_i = re_tmp * t7.im + im_tmp * t7.re;
  re_j = (re * t19.re - im_i * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_i = (re * t19.im + im_i * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_j = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_k = (re * t19.re - im_j * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_j = (re * t19.im + im_j * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_k = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_l = (re * t19.re - im_k * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_k = (re * t19.im + im_k * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_l = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_m = (re * t19.re - im_l * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_l = (re * t19.im + im_l * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_m = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_n = (re * t19.re - im_m * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_m = (re * t19.im + im_m * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_n = re_tmp * t7.im + im_tmp * t7.re;
  re_o = (re * t19.re - im_n * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_n = (re * t19.im + im_n * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_o = re_tmp * t7.im + im_tmp * t7.re;
  re_p = (re * t19.re - im_o * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_o = (re * t19.im + im_o * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_p = re_tmp * t7.im + im_tmp * t7.re;
  re_q = (re * t19.re - im_p * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_p = (re * t19.im + im_p * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_q = re_tmp * t7.im + im_tmp * t7.re;
  re_r = (re * t19.re - im_q * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_q = (re * t19.im + im_q * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_r = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_s = (re * t19.re - im_r * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_r = (re * t19.im + im_r * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_s = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_t = (re * t19.re - im_s * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_s = (re * t19.im + im_s * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_t = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_u = (re * t19.re - im_t * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_t = (re * t19.im + im_t * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_u = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_v = (re * t19.re - im_u * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_u = (re * t19.im + im_u * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_v = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_w = (re * t19.re - im_v * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_v = (re * t19.im + im_v * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_w = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_x = (re * t19.re - im_w * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_w = (re * t19.im + im_w * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_x = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_y = (re * t19.re - im_x * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_x = (re * t19.im + im_x * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_y = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_z = (re * t19.re - im_y * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_y = (re * t19.im + im_y * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_z = re_tmp * t7.im + im_tmp * t7.re;
  re_10 = (re * t19.re - im_z * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_z = (re * t19.im + im_z * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_10 = re_tmp * t7.im + im_tmp * t7.re;
  re_11 = (re * t19.re - im_10 * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_10 = (re * t19.im + im_10 * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_11 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_12 = (re * t19.re - im_11 * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_11 = (re * t19.im + im_11 * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_12 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_13 = (re * t19.re - im_12 * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_12 = (re * t19.im + im_12 * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_13 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_14 = (re * t19.re - im_13 * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_13 = (re * t19.im + im_13 * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_14 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_15 = (re * t19.re - im_14 * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_14 = (re * t19.im + im_14 * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_15 = re_tmp * t7.im + im_tmp * t7.re;
  re_16 = (re * t19.re - im_15 * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_15 = (re * t19.im + im_15 * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_16 = re_tmp * t7.im + im_tmp * t7.re;
  re_17 = (re * t19.re - im_16 * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_16 = (re * t19.im + im_16 * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_17 = re_tmp * t7.im + im_tmp * t7.re;
  re_18 = (re * t19.re - im_17 * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_17 = (re * t19.im + im_17 * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_18 = re_tmp * t7.im + im_tmp * t7.re;
  re_19 = (re * t19.re - im_18 * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_18 = (re * t19.im + im_18 * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_19 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1a = (re * t19.re - im_19 * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_19 = (re * t19.im + im_19 * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1a = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1b = (re * t19.re - im_1a * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1a = (re * t19.im + im_1a * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1b = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1c = (re * t19.re - im_1b * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1b = (re * t19.im + im_1b * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1c = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1d = (re * t19.re - im_1c * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1c = (re * t19.im + im_1c * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1d = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1e = (re * t19.re - im_1d * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1d = (re * t19.im + im_1d * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1e = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1f = (re * t19.re - im_1e * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1e = (re * t19.im + im_1e * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1f = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1g = (re * t19.re - im_1f * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1f = (re * t19.im + im_1f * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1g = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1h = (re * t19.re - im_1g * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1g = (re * t19.im + im_1g * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1h = re_tmp * t7.im + im_tmp * t7.re;
  re_1i = (re * t19.re - im_1h * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1h = (re * t19.im + im_1h * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1i = re_tmp * t7.im + im_tmp * t7.re;
  re_1j = (re * t19.re - im_1i * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1i = (re * t19.im + im_1i * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1j = re_tmp * t7.im + im_tmp * t7.re;
  re_1k = (re * t19.re - im_1j * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1j = (re * t19.im + im_1j * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1k = re_tmp * t7.im + im_tmp * t7.re;
  re_1l = (re * t19.re - im_1k * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1k = (re * t19.im + im_1k * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1l = re_tmp * t7.im + im_tmp * t7.re;
  re_1m = (re * t19.re - im_1l * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1l = (re * t19.im + im_1l * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1m = re_tmp * t7.im + im_tmp * t7.re;
  re_1n = (re * t19.re - im_1m * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1m = (re * t19.im + im_1m * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1n = re_tmp * t7.im + im_tmp * t7.re;
  re_1o = (re * t19.re - im_1n * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1n = (re * t19.im + im_1n * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1o = re_tmp * t7.im + im_tmp * t7.re;
  re_1p = (re * t19.re - im_1o * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1o = (re * t19.im + im_1o * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1p = re_tmp * t7.im + im_tmp * t7.re;
  re_1q = (re * t19.re - im_1p * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1p = (re * t19.im + im_1p * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1q = re_tmp * t7.im + im_tmp * t7.re;
  re_1r = (re * t19.re - im_1q * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1q = (re * t19.im + im_1q * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1r = re_tmp * t7.im + im_tmp * t7.re;
  re_1s = (re * t19.re - im_1r * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1r = (re * t19.im + im_1r * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1s = re_tmp * t7.im + im_tmp * t7.re;
  re_1t = (re * t19.re - im_1s * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1s = (re * t19.im + im_1s * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1t = re_tmp * t7.im + im_tmp * t7.re;
  re_1u = (re * t19.re - im_1t * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1t = (re * t19.im + im_1t * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1u = re_tmp * t7.im + im_tmp * t7.re;
  re_1v = (re * t19.re - im_1u * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1u = (re * t19.im + im_1u * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1v = re_tmp * t7.im + im_tmp * t7.re;
  re_1w = (re * t19.re - im_1v * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1v = (re * t19.im + im_1v * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1w = re_tmp * t7.im + im_tmp * t7.re;
  re_1x = (re * t19.re - im_1w * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1w = (re * t19.im + im_1w * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1x = re_tmp * t7.im + im_tmp * t7.re;
  re_1y = (re * t19.re - im_1x * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1x = (re * t19.im + im_1x * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1y = re_tmp * t7.im + im_tmp * t7.re;
  re_1z = (re * t19.re - im_1y * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1y = (re * t19.im + im_1y * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1z = re_tmp * t7.im + im_tmp * t7.re;
  re_20 = (re * t19.re - im_1z * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1z = (re * t19.im + im_1z * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_20 = re_tmp * t7.im + im_tmp * t7.re;
  re_21 = (re * t19.re - im_20 * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_20 = (re * t19.im + im_20 * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_21 = re_tmp * t7.im + im_tmp * t7.re;
  re_22 = (re * t19.re - im_21 * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_21 = (re * t19.im + im_21 * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_22 = re_tmp * t7.im + im_tmp * t7.re;
  re_23 = (re * t19.re - im_22 * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_22 = (re * t19.im + im_22 * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_23 = re_tmp * t7.im + im_tmp * t7.re;
  re_24 = (re * t19.re - im_23 * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_23 = (re * t19.im + im_23 * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_24 = re_tmp * t7.im + im_tmp * t7.re;
  re_25 = (re * t19.re - im_24 * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_24 = (re * t19.im + im_24 * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((t3_re * 0.0F - t3_im * (rtInfF)) + t25_0.re) -
    (t3_re_0 * 0.0F - t3_im_0 * (rtInfF))) - (t3_re_1 * 0.0F - t3_im_1 * (rtInfF)))
    + (t3_re_2 * 0.0F - t3_im_2 * (rtInfF))) + (t3_re_3 * 0.0F - t3_im_3 *
    (rtInfF))) - (t3_re_4 * 0.0F - t3_im_4 * (rtInfF))) - (t3_re_5 * 0.0F -
    t3_im_5 * (rtInfF))) + (t3_re_6 * 0.0F - t3_im_6 * (rtInfF))) + (t3_re_7 *
    0.0F - t3_im_7 * (rtInfF))) - (t3_re_8 * 0.0F - t3_im_8 * (rtInfF))) -
    (t3_re_9 * 0.0F - t3_im_9 * (rtInfF))) + (t3_re_a * 0.0F - t3_im_a * (rtInfF)))
    + (t3_re_b * 0.0F - t3_im_b * (rtInfF))) - (t3_re_c * 0.0F - t3_im_c *
    (rtInfF))) - (t3_re_d * 0.0F - t3_im_d * (rtInfF))) + (t3_re_e * 0.0F -
    t3_im_e * (rtInfF))) + (t3_re_f * 0.0F - t3_im_f * (rtInfF))) - (t3_re_g *
    0.0F - t3_im_g * (rtInfF))) - (t3_re_h * 0.0F - t3_im_h * (rtInfF))) +
    (t3_re_i * 0.0F - t3_im_i * (rtInfF))) + (t3_re_j * 0.0F - t3_im_j * (rtInfF)))
    - (t3_re_k * 0.0F - t3_im_k * (rtInfF))) - (t3_re_l * 0.0F - t3_im_l *
    (rtInfF))) + (t3_re_m * 0.0F - t3_im_m * (rtInfF))) - (re_0 * 0.0F - im *
    (rtInfF))) + (re_1 * 0.0F - im_0 * (rtInfF))) - (re_2 * 0.0F - im_1 *
    (rtInfF))) + (re_3 * 0.0F - im_2 * (rtInfF))) + (re_4 * 0.0F - im_3 *
    (rtInfF))) - (re_5 * 0.0F - im_4 * (rtInfF))) - (re_6 * 0.0F - im_5 *
    (rtInfF))) + (re_7 * 0.0F - im_6 * (rtInfF))) + (re_8 * 0.0F - im_7 *
    (rtInfF))) - (re_9 * 0.0F - im_8 * (rtInfF))) - (re_a * 0.0F - im_9 *
    (rtInfF))) + (re_b * 0.0F - im_a * (rtInfF))) - (re_c * 0.0F - im_b *
    (rtInfF))) + (re_d * 0.0F - im_c * (rtInfF))) + (re_e * 0.0F - im_d *
    (rtInfF))) - (re_f * 0.0F - im_e * (rtInfF))) - (re_g * 0.0F - im_f *
    (rtInfF))) + (re_h * 0.0F - im_g * (rtInfF))) - (re_i * 0.0F - im_h *
    (rtInfF))) + (re_j * 0.0F - im_i * (rtInfF))) + (re_k * 0.0F - im_j *
    (rtInfF))) - (re_l * 0.0F - im_k * (rtInfF))) + (re_m * 0.0F - im_l *
    (rtInfF))) - (re_n * 0.0F - im_m * (rtInfF))) + (re_o * 0.0F - im_n *
    (rtInfF))) - (re_p * 0.0F - im_o * (rtInfF))) - (re_q * 0.0F - im_p *
    (rtInfF))) + (re_r * 0.0F - im_q * (rtInfF))) - (re_s * 0.0F - im_r *
    (rtInfF))) + (re_t * 0.0F - im_s * (rtInfF))) + (re_u * 0.0F - im_t *
    (rtInfF))) - (re_v * 0.0F - im_u * (rtInfF))) - (re_w * 0.0F - im_v *
    (rtInfF))) + (re_x * 0.0F - im_w * (rtInfF))) + (re_y * 0.0F - im_x *
    (rtInfF))) - (re_z * 0.0F - im_y * (rtInfF))) - (re_10 * 0.0F - im_z *
    (rtInfF))) + (re_11 * 0.0F - im_10 * (rtInfF))) + (re_12 * 0.0F - im_11 *
    (rtInfF))) - (re_13 * 0.0F - im_12 * (rtInfF))) - (re_14 * 0.0F - im_13 *
    (rtInfF))) + (re_15 * 0.0F - im_14 * (rtInfF))) + (re_16 * 0.0F - im_15 *
    (rtInfF))) - (re_17 * 0.0F - im_16 * (rtInfF))) - (re_18 * 0.0F - im_17 *
    (rtInfF))) + (re_19 * 0.0F - im_18 * (rtInfF))) - (re_1a * 0.0F - im_19 *
    (rtInfF))) + (re_1b * 0.0F - im_1a * (rtInfF))) + (re_1c * 0.0F - im_1b *
    (rtInfF))) - (re_1d * 0.0F - im_1c * (rtInfF))) + (re_1e * 0.0F - im_1d *
    (rtInfF))) - (re_1f * 0.0F - im_1e * (rtInfF))) - (re_1g * 0.0F - im_1f *
    (rtInfF))) + (re_1h * 0.0F - im_1g * (rtInfF))) - (re_1i * 0.0F - im_1h *
    (rtInfF))) + (re_1j * 0.0F - im_1i * (rtInfF))) + (re_1k * 0.0F - im_1j *
    (rtInfF))) - (re_1l * 0.0F - im_1k * (rtInfF))) + (re_1m * 0.0F - im_1l *
    (rtInfF))) - (re_1n * 0.0F - im_1m * (rtInfF))) - (re_1o * 0.0F - im_1n *
    (rtInfF))) + (re_1p * 0.0F - im_1o * (rtInfF))) - (re_1q * 0.0F - im_1p *
    (rtInfF))) + (re_1r * 0.0F - im_1q * (rtInfF))) + (re_1s * 0.0F - im_1r *
    (rtInfF))) - (re_1t * 0.0F - im_1s * (rtInfF))) + (re_1u * 0.0F - im_1t *
    (rtInfF))) - (re_1v * 0.0F - im_1u * (rtInfF))) + (re_1w * 0.0F - im_1v *
              (rtInfF))) - (re_1x * 0.0F - im_1w * (rtInfF))) - (re_1y * 0.0F -
            im_1x * (rtInfF))) + (re_1z * 0.0F - im_1y * (rtInfF))) + (re_20 *
          0.0F - im_1z * (rtInfF))) - (re_21 * 0.0F - im_20 * (rtInfF))) -
       (re_22 * 0.0F - im_21 * (rtInfF))) + (re_23 * 0.0F - im_22 * (rtInfF))) +
     (re_24 * 0.0F - im_23 * (rtInfF))) - (re_25 * 0.0F - im_24 * (rtInfF));
  im =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((t3_re * (rtInfF) + t3_im * 0.0F) + t25_0.im) -
    (t3_re_0 * (rtInfF) + t3_im_0 * 0.0F)) - (t3_re_1 * (rtInfF) + t3_im_1 *
    0.0F)) + (t3_re_2 * (rtInfF) + t3_im_2 * 0.0F)) + (t3_re_3 * (rtInfF) +
    t3_im_3 * 0.0F)) - (t3_re_4 * (rtInfF) + t3_im_4 * 0.0F)) - (t3_re_5 *
    (rtInfF) + t3_im_5 * 0.0F)) + (t3_re_6 * (rtInfF) + t3_im_6 * 0.0F)) +
    (t3_re_7 * (rtInfF) + t3_im_7 * 0.0F)) - (t3_re_8 * (rtInfF) + t3_im_8 *
    0.0F)) - (t3_re_9 * (rtInfF) + t3_im_9 * 0.0F)) + (t3_re_a * (rtInfF) +
    t3_im_a * 0.0F)) + (t3_re_b * (rtInfF) + t3_im_b * 0.0F)) - (t3_re_c *
    (rtInfF) + t3_im_c * 0.0F)) - (t3_re_d * (rtInfF) + t3_im_d * 0.0F)) +
    (t3_re_e * (rtInfF) + t3_im_e * 0.0F)) + (t3_re_f * (rtInfF) + t3_im_f *
    0.0F)) - (t3_re_g * (rtInfF) + t3_im_g * 0.0F)) - (t3_re_h * (rtInfF) +
    t3_im_h * 0.0F)) + (t3_re_i * (rtInfF) + t3_im_i * 0.0F)) + (t3_re_j *
    (rtInfF) + t3_im_j * 0.0F)) - (t3_re_k * (rtInfF) + t3_im_k * 0.0F)) -
    (t3_re_l * (rtInfF) + t3_im_l * 0.0F)) + (t3_re_m * (rtInfF) + t3_im_m *
    0.0F)) - (re_0 * (rtInfF) + im * 0.0F)) + (re_1 * (rtInfF) + im_0 * 0.0F)) -
    (re_2 * (rtInfF) + im_1 * 0.0F)) + (re_3 * (rtInfF) + im_2 * 0.0F)) + (re_4 *
    (rtInfF) + im_3 * 0.0F)) - (re_5 * (rtInfF) + im_4 * 0.0F)) - (re_6 *
    (rtInfF) + im_5 * 0.0F)) + (re_7 * (rtInfF) + im_6 * 0.0F)) + (re_8 *
    (rtInfF) + im_7 * 0.0F)) - (re_9 * (rtInfF) + im_8 * 0.0F)) - (re_a *
    (rtInfF) + im_9 * 0.0F)) + (re_b * (rtInfF) + im_a * 0.0F)) - (re_c *
    (rtInfF) + im_b * 0.0F)) + (re_d * (rtInfF) + im_c * 0.0F)) + (re_e *
    (rtInfF) + im_d * 0.0F)) - (re_f * (rtInfF) + im_e * 0.0F)) - (re_g *
    (rtInfF) + im_f * 0.0F)) + (re_h * (rtInfF) + im_g * 0.0F)) - (re_i *
    (rtInfF) + im_h * 0.0F)) + (re_j * (rtInfF) + im_i * 0.0F)) + (re_k *
    (rtInfF) + im_j * 0.0F)) - (re_l * (rtInfF) + im_k * 0.0F)) + (re_m *
    (rtInfF) + im_l * 0.0F)) - (re_n * (rtInfF) + im_m * 0.0F)) + (re_o *
    (rtInfF) + im_n * 0.0F)) - (re_p * (rtInfF) + im_o * 0.0F)) - (re_q *
    (rtInfF) + im_p * 0.0F)) + (re_r * (rtInfF) + im_q * 0.0F)) - (re_s *
    (rtInfF) + im_r * 0.0F)) + (re_t * (rtInfF) + im_s * 0.0F)) + (re_u *
    (rtInfF) + im_t * 0.0F)) - (re_v * (rtInfF) + im_u * 0.0F)) - (re_w *
    (rtInfF) + im_v * 0.0F)) + (re_x * (rtInfF) + im_w * 0.0F)) + (re_y *
    (rtInfF) + im_x * 0.0F)) - (re_z * (rtInfF) + im_y * 0.0F)) - (re_10 *
    (rtInfF) + im_z * 0.0F)) + (re_11 * (rtInfF) + im_10 * 0.0F)) + (re_12 *
    (rtInfF) + im_11 * 0.0F)) - (re_13 * (rtInfF) + im_12 * 0.0F)) - (re_14 *
    (rtInfF) + im_13 * 0.0F)) + (re_15 * (rtInfF) + im_14 * 0.0F)) + (re_16 *
    (rtInfF) + im_15 * 0.0F)) - (re_17 * (rtInfF) + im_16 * 0.0F)) - (re_18 *
    (rtInfF) + im_17 * 0.0F)) + (re_19 * (rtInfF) + im_18 * 0.0F)) - (re_1a *
    (rtInfF) + im_19 * 0.0F)) + (re_1b * (rtInfF) + im_1a * 0.0F)) + (re_1c *
    (rtInfF) + im_1b * 0.0F)) - (re_1d * (rtInfF) + im_1c * 0.0F)) + (re_1e *
    (rtInfF) + im_1d * 0.0F)) - (re_1f * (rtInfF) + im_1e * 0.0F)) - (re_1g *
    (rtInfF) + im_1f * 0.0F)) + (re_1h * (rtInfF) + im_1g * 0.0F)) - (re_1i *
    (rtInfF) + im_1h * 0.0F)) + (re_1j * (rtInfF) + im_1i * 0.0F)) + (re_1k *
    (rtInfF) + im_1j * 0.0F)) - (re_1l * (rtInfF) + im_1k * 0.0F)) + (re_1m *
    (rtInfF) + im_1l * 0.0F)) - (re_1n * (rtInfF) + im_1m * 0.0F)) - (re_1o *
    (rtInfF) + im_1n * 0.0F)) + (re_1p * (rtInfF) + im_1o * 0.0F)) - (re_1q *
    (rtInfF) + im_1p * 0.0F)) + (re_1r * (rtInfF) + im_1q * 0.0F)) + (re_1s *
    (rtInfF) + im_1r * 0.0F)) - (re_1t * (rtInfF) + im_1s * 0.0F)) + (re_1u *
    (rtInfF) + im_1t * 0.0F)) - (re_1v * (rtInfF) + im_1u * 0.0F)) + (re_1w *
              (rtInfF) + im_1v * 0.0F)) - (re_1x * (rtInfF) + im_1w * 0.0F)) -
           (re_1y * (rtInfF) + im_1x * 0.0F)) + (re_1z * (rtInfF) + im_1y * 0.0F))
         + (re_20 * (rtInfF) + im_1z * 0.0F)) - (re_21 * (rtInfF) + im_20 * 0.0F))
       - (re_22 * (rtInfF) + im_21 * 0.0F)) + (re_23 * (rtInfF) + im_22 * 0.0F))
     + (re_24 * (rtInfF) + im_23 * 0.0F)) - (re_25 * (rtInfF) + im_24 * 0.0F);
  h.re = t425_re * re - t425_im * im;
  h.im = t425_re * im + t425_im * re;
  Mother_log(&h);
  re = re_tmp * t7.re - im_tmp * t7.im;
  im = re_tmp * t7.im + im_tmp * t7.re;
  re_0 = re_tmp * t9.re - im_tmp * t9.im;
  im_0 = re_tmp * t9.im + im_tmp * t9.re;
  re_1 = re_tmp * t7.re - im_tmp * t7.im;
  im_1 = re_tmp * t7.im + im_tmp * t7.re;
  re_2 = re_tmp * t7.re - im_tmp * t7.im;
  im_2 = re_tmp * t7.im + im_tmp * t7.re;
  re_3 = re_tmp * t9.re - im_tmp * t9.im;
  im_3 = re_tmp * t9.im + im_tmp * t9.re;
  re_4 = re_tmp * t9.re - im_tmp * t9.im;
  im_4 = re_tmp * t9.im + im_tmp * t9.re;
  re_5 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_5 = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_6 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_6 = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_7 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_7 = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_8 = re_tmp_1 * t7.re - im_tmp_1 * t7.im;
  im_8 = re_tmp_1 * t7.im + im_tmp_1 * t7.re;
  re_9 = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_9 = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_a = re_tmp_1 * t9.re - im_tmp_1 * t9.im;
  im_a = re_tmp_1 * t9.im + im_tmp_1 * t9.re;
  re_b =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((tmp_tmp_1c - t166_re) - t168_re) - t170_re) - t177_re) -
    t178_re) - t179_re) + tmp_tmp_l) + tmp_tmp_m) + tmp_tmp_n) + t204_re) +
    tmp_tmp_o) + tmp_tmp_p) + tmp_tmp_q) + t208_re) + tmp_tmp_r) + tmp_tmp_s) +
    tmp_tmp_t) + t212_re) + tmp_tmp_u) + t146_re_tmp) + tmp_tmp_x) + tmp_tmp_y)
    + tmp_tmp_z) + t146_re_tmp_0) + t146_re_tmp_1) + t220_re) + tmp_tmp_12) +
    t222_re) + t223_re) + t224_re) + t225_re) + t226_re) + t227_re) + t228_re) +
    t229_re) + t230_re) + t231_re) + t232_re) + t233_re) + t234_re) + t235_re) +
    t236_re) + t237_re) + t238_re) + t239_re) + t240_re) + tmp_tmp_15) + t242_re)
    + t243_re) + t244_re) + t245_re) + t246_re) + t247_re) + t248_re) + t249_re)
    + t250_re) + t251_re) + t252_re) + t253_re) + t254_re) + t255_re) + t256_re)
    + t257_re) + t258_re) + t259_re) + t260_re) + t261_re) + t262_re) + t263_re)
    + t264_re) + t265_re) + t266_re) + t267_re) + t268_re) + t269_re) + t270_re)
    + t271_re) + t272_re) + t273_re) + t274_re) + t275_re) + t276_re) + t277_re)
    + t278_re) + t279_re) + t280_re) + t281_re) + t282_re) + t283_re) + t284_re)
    + t285_re) + t286_re) + t287_re) + t288_re) + t289_re) + t290_re) + t291_re)
    + t292_re) + t293_re) + t294_re) + t295_re) + t296_re) + t297_re) + t298_re)
    + t299_re) + t300_re) + t301_re) + t302_re) + t303_re) + t304_re) + t305_re)
    + t306_re) + t307_re) + t308_re) + t309_re) + t310_re) + t311_re) + t312_re)
    + t313_re) + t314_re) + t315_re) + t316_re) + t317_re) + t318_re) + t319_re)
    + t320_re) - tmp_tmp_2) - tmp_tmp_3) - tmp_tmp_4) - t146_re_tmp_2) -
    t146_re_tmp_3) - t146_re_tmp_4) - t146_re_tmp_5) - tmp_tmp_17) -
    t146_re_tmp_6) - t146_re_tmp_7) - t146_re_tmp_8) - t146_re_tmp_9) -
    tmp_tmp_18) - tmp_tmp_19) - t146_re_tmp_a) - t146_re_tmp_b) - t146_re_tmp_c)
    - t146_re_tmp_d) - (re_tmp * t7.re - im_tmp * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_tmp * t7.re - im_tmp *
    t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_tmp *
    t7.re - im_tmp * t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    14))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF))
    - (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_1 * t9.re -
    im_tmp_1 * t9.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
    (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_2 * t11.re -
    im_tmp_2 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) -
    (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_1 * t7.re -
    im_tmp_1 * t7.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) -
    (re_tmp_1 * t7.re - im_tmp_1 * t7.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_1 * t9.re -
    im_tmp_1 * t9.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
                       * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0]
                       * (rtInfF)) - (re_tmp_1 * t9.re - im_tmp_1 * t9.im) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_tmp_1 * t11.re -
    im_tmp_1 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
                     * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] *
                     (rtInfF)) - (re_tmp_1 * t11.re - im_tmp_1 * t11.im) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_tmp_2 * t11.re -
    im_tmp_2 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
                   * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] *
                   (rtInfF)) - (re_tmp_2 * t11.re - im_tmp_2 * t11.im) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_3 * t11.re -
    im_tmp_3 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
                 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] *
                 (rtInfF)) - (re_tmp_3 * t11.re - im_tmp_3 * t11.im) * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re * t11.re - im * t11.im)
               * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_0 *
    t11.re - im_0 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    11))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF))
             - (re_1 * t11.re - im_1 * t11.im) * *((const real32_T **)
              ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
              ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_2 * t11.re -
             im_2 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
              14))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0]
            * (rtInfF)) - (re_3 * t11.re - im_3 * t11.im) * *((const real32_T **)
            ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
            ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_4 * t11.re -
           im_4 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))
          [0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] *
          (rtInfF)) - (re_5 * t11.re - im_5 * t11.im) * *((const real32_T **)
          ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
          ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_6 * t11.re -
         im_6 * t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
        * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
       (re_7 * t11.re - im_7 * t11.im) * *((const real32_T **)
        ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
        ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_8 * t11.re - im_8 *
       t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((
        const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
     (re_9 * t11.re - im_9 * t11.im) * *((const real32_T **)
      ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
      ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_a * t11.re - im_a *
    t11.im) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  re =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((tmp_tmp_1d - t166_im) - t168_im) - t170_im) - t177_im) -
    t178_im) - t179_im) + t204_im) + re_tmp_4) + tmp_tmp) + t207_im) + tmp_tmp_0)
    + tmp_tmp_1) + tmp_tmp_j) + tmp_tmp_k) + im_tmp_4) + tmp_tmp_v) + tmp_tmp_w)
    + t215_im) + t216_im) + tmp_tmp_10) + t218_im) + tmp_tmp_e) + tmp_tmp_11) +
    tmp_tmp_13) + t222_im) + t223_im) + t224_im) + t225_im) + t226_im) + t227_im)
    + t228_im) + t229_im) + t230_im) + t231_im) + t232_im) + t233_im) + t234_im)
    + t235_im) + t236_im) + t237_im) + t238_im) + t239_im) + tmp_tmp_14) +
    tmp_tmp_16) + t242_im) + t243_im) + t244_im) + t245_im) + t246_im) + t247_im)
    + t248_im) + t249_im) + t250_im) + t251_im) + t252_im) + t253_im) + t254_im)
    + t255_im) + t256_im) + t257_im) + t258_im) + t259_im) + t260_im) + t261_im)
    + t262_im) + t263_im) + t264_im) + t265_im) + t266_im) + t267_im) + t268_im)
    + t269_im) + t270_im) + t271_im) + t272_im) + t273_im) + t274_im) + t275_im)
    + t276_im) + t277_im) + t278_im) + t279_im) + t280_im) + t281_im) + t282_im)
    + t283_im) + t284_im) + t285_im) + t286_im) + t287_im) + t288_im) + t289_im)
    + t290_im) + t291_im) + t292_im) + t293_im) + t294_im) + t295_im) + t296_im)
    + t297_im) + t298_im) + t299_im) + t300_im) + t301_im) + t302_im) + t303_im)
    + t304_im) + t305_im) + t306_im) + t307_im) + t308_im) + t309_im) + t310_im)
    + t311_im) + t312_im) + t313_im) + t314_im) + t315_im) + t316_im) + t317_im)
    + t318_im) + t319_im) + t320_im) - tmp_tmp_5) - tmp_tmp_6) - tmp_tmp_7) -
    tmp_tmp_8) - tmp_tmp_1a) - tmp_tmp_a) - tmp_tmp_g) - tmp_tmp_b) - tmp_tmp_c)
    - tmp_tmp_9) - tmp_tmp_1b) - tmp_tmp_d) - tmp_tmp_f) - tmp_tmp_h) -
    tmp_tmp_i) - (re_tmp * t7.im + im_tmp * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_tmp * t7.im + im_tmp *
    t7.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_tmp *
    t7.im + im_tmp * t7.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    14))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] * (rtInfF))
    - (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_1 * t9.im +
    im_tmp_1 * t9.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
    (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_2 * t11.im +
    im_tmp_2 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0]
    * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) -
    (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_tmp_1 * t7.im +
    im_tmp_1 * t7.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0] *
    *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) -
    (re_tmp_1 * t7.im + im_tmp_1 * t7.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_1 * t9.im +
    im_tmp_1 * t9.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
                       * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0]
                       * (rtInfF)) - (re_tmp_1 * t9.im + im_tmp_1 * t9.re) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_tmp_1 * t11.im +
    im_tmp_1 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0]
                     * *((const real32_T **)ssGetInputPortSignalPtrs(S, 10))[0] *
                     (rtInfF)) - (re_tmp_1 * t11.im + im_tmp_1 * t11.re) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_tmp_2 * t11.im +
    im_tmp_2 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
                   * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] *
                   (rtInfF)) - (re_tmp_2 * t11.im + im_tmp_2 * t11.re) * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re_tmp_3 * t11.im +
    im_tmp_3 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
                 * *((const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] *
                 (rtInfF)) - (re_tmp_3 * t11.im + im_tmp_3 * t11.re) * *((const
    real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) - (re * t11.im + im * t11.re)
               * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF)) - (re_0 *
    t11.im + im_0 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
    11))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 9))[0] * (rtInfF))
             - (re_1 * t11.im + im_1 * t11.re) * *((const real32_T **)
              ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
              ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_2 * t11.im +
             im_2 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S,
              14))[0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0]
            * (rtInfF)) - (re_3 * t11.im + im_3 * t11.re) * *((const real32_T **)
            ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
            ssGetInputPortSignalPtrs(S, 15))[0] * (rtInfF)) - (re_4 * t11.im +
           im_4 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))
          [0] * *((const real32_T **)ssGetInputPortSignalPtrs(S, 12))[0] *
          (rtInfF)) - (re_5 * t11.im + im_5 * t11.re) * *((const real32_T **)
          ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
          ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_6 * t11.im +
         im_6 * t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 8))[0]
        * *((const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
       (re_7 * t11.im + im_7 * t11.re) * *((const real32_T **)
        ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
        ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF)) - (re_8 * t11.im + im_8 *
       t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 14))[0] * *((
        const real32_T **)ssGetInputPortSignalPtrs(S, 13))[0] * (rtInfF)) -
     (re_9 * t11.im + im_9 * t11.re) * *((const real32_T **)
      ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
      ssGetInputPortSignalPtrs(S, 10))[0] * (rtInfF)) - (re_a * t11.im + im_a *
    t11.re) * *((const real32_T **)ssGetInputPortSignalPtrs(S, 11))[0] * *((
    const real32_T **)ssGetInputPortSignalPtrs(S, 16))[0] * (rtInfF);
  t25_1.re = t25.re - (t146_re * re_b - t146_im * re);
  t25_1.im = t25.im - (t146_re * re + t146_im * re_b);
  t25_0 = Mother_my_sqrt(t25_1);
  t3_re = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_0 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_0 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_1 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_1 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_2 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_2 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_3 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_3 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_4 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_4 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_5 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_5 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_6 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_6 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_7 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_7 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_8 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_8 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_9 = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_9 = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_a = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_a = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_b = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_b = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_c = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_c = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 5))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_d = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_d = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_e = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_e = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_f = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_f = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 6))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_g = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_im_g = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 7))[0];
  t3_re_h = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_h = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_i = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_i = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_j = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_im_j = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  t3_re_k = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_k = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_re_l = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_im_l = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  t3_re_m = (t3_re_tmp * t19.re - t3_im_tmp * t19.im) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  t3_im_m = (t3_re_tmp * t19.im + t3_im_tmp * t19.re) * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im = re_tmp * t7.im + im_tmp * t7.re;
  re_0 = (re * t19.re - im * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im = (re * t19.im + im * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_0 = re_tmp * t7.im + im_tmp * t7.re;
  re_1 = (re * t19.re - im_0 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_0 = (re * t19.im + im_0 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_2 = (re * t19.re - im_1 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_1 = (re * t19.im + im_1 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_2 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_3 = (re * t19.re - im_2 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_2 = (re * t19.im + im_2 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_3 = re_tmp * t7.im + im_tmp * t7.re;
  re_4 = (re * t19.re - im_3 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_3 = (re * t19.im + im_3 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_4 = re_tmp * t7.im + im_tmp * t7.re;
  re_5 = (re * t19.re - im_4 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_4 = (re * t19.im + im_4 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_5 = re_tmp * t7.im + im_tmp * t7.re;
  re_6 = (re * t19.re - im_5 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_5 = (re * t19.im + im_5 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_6 = re_tmp * t7.im + im_tmp * t7.re;
  re_7 = (re * t19.re - im_6 * t19.im) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_6 = (re * t19.im + im_6 * t19.re) * t21 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_7 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_8 = (re * t19.re - im_7 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_7 = (re * t19.im + im_7 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_8 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_9 = (re * t19.re - im_8 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_8 = (re * t19.im + im_8 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_9 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_a = (re * t19.re - im_9 * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_9 = (re * t19.im + im_9 * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_a = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_b = (re * t19.re - im_a * t19.im) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_a = (re * t19.im + im_a * t19.re) * t20 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_b = re_tmp * t7.im + im_tmp * t7.re;
  re_c = (re * t19.re - im_b * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_b = (re * t19.im + im_b * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_c = re_tmp * t7.im + im_tmp * t7.re;
  re_d = (re * t19.re - im_c * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_c = (re * t19.im + im_c * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_d = re_tmp * t7.im + im_tmp * t7.re;
  re_e = (re * t19.re - im_d * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_d = (re * t19.im + im_d * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_e = re_tmp * t7.im + im_tmp * t7.re;
  re_f = (re * t19.re - im_e * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  im_e = (re * t19.im + im_e * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_f = re_tmp * t7.im + im_tmp * t7.re;
  re_g = (re * t19.re - im_f * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  im_f = (re * t19.im + im_f * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_g = re_tmp * t7.im + im_tmp * t7.re;
  re_h = (re * t19.re - im_g * t19.im) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  im_g = (re * t19.im + im_g * t19.re) * t21 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_h = re_tmp * t7.im + im_tmp * t7.re;
  re_i = (re * t19.re - im_h * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_h = (re * t19.im + im_h * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_i = re_tmp * t7.im + im_tmp * t7.re;
  re_j = (re * t19.re - im_i * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_i = (re * t19.im + im_i * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_j = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_k = (re * t19.re - im_j * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_j = (re * t19.im + im_j * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_k = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_l = (re * t19.re - im_k * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_k = (re * t19.im + im_k * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_l = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_m = (re * t19.re - im_l * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_l = (re * t19.im + im_l * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_m = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_n = (re * t19.re - im_m * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_m = (re * t19.im + im_m * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_n = re_tmp * t7.im + im_tmp * t7.re;
  re_o = (re * t19.re - im_n * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_n = (re * t19.im + im_n * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_o = re_tmp * t7.im + im_tmp * t7.re;
  re_p = (re * t19.re - im_o * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_o = (re * t19.im + im_o * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_p = re_tmp * t7.im + im_tmp * t7.re;
  re_q = (re * t19.re - im_p * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_p = (re * t19.im + im_p * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_q = re_tmp * t7.im + im_tmp * t7.re;
  re_r = (re * t19.re - im_q * t19.im) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_q = (re * t19.im + im_q * t19.re) * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_r = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_s = (re * t19.re - im_r * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_r = (re * t19.im + im_r * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_s = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_t = (re * t19.re - im_s * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_s = (re * t19.im + im_s * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_t = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_u = (re * t19.re - im_t * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_t = (re * t19.im + im_t * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_u = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_v = (re * t19.re - im_u * t19.im) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_u = (re * t19.im + im_u * t19.re) * t20 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_v = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_w = (re * t19.re - im_v * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_v = (re * t19.im + im_v * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_w = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_x = (re * t19.re - im_w * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_w = (re * t19.im + im_w * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_x = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_y = (re * t19.re - im_x * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_x = (re * t19.im + im_x * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_y = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_z = (re * t19.re - im_y * t19.im) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_y = (re * t19.im + im_y * t19.re) * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_z = re_tmp * t7.im + im_tmp * t7.re;
  re_10 = (re * t19.re - im_z * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_z = (re * t19.im + im_z * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_10 = re_tmp * t7.im + im_tmp * t7.re;
  re_11 = (re * t19.re - im_10 * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_10 = (re * t19.im + im_10 * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_11 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_12 = (re * t19.re - im_11 * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_11 = (re * t19.im + im_11 * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_12 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_13 = (re * t19.re - im_12 * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_12 = (re * t19.im + im_12 * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_13 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_14 = (re * t19.re - im_13 * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_13 = (re * t19.im + im_13 * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_14 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_15 = (re * t19.re - im_14 * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_14 = (re * t19.im + im_14 * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_15 = re_tmp * t7.im + im_tmp * t7.re;
  re_16 = (re * t19.re - im_15 * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_15 = (re * t19.im + im_15 * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_16 = re_tmp * t7.im + im_tmp * t7.re;
  re_17 = (re * t19.re - im_16 * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_16 = (re * t19.im + im_16 * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_17 = re_tmp * t7.im + im_tmp * t7.re;
  re_18 = (re * t19.re - im_17 * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_17 = (re * t19.im + im_17 * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_18 = re_tmp * t7.im + im_tmp * t7.re;
  re_19 = (re * t19.re - im_18 * t19.im) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_18 = (re * t19.im + im_18 * t19.re) * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_19 = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1a = (re * t19.re - im_19 * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_19 = (re * t19.im + im_19 * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1a = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1b = (re * t19.re - im_1a * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1a = (re * t19.im + im_1a * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1b = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1c = (re * t19.re - im_1b * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1b = (re * t19.im + im_1b * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1c = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1d = (re * t19.re - im_1c * t19.im) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1c = (re * t19.im + im_1c * t19.re) * t20 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1d = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1e = (re * t19.re - im_1d * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1d = (re * t19.im + im_1d * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1e = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1f = (re * t19.re - im_1e * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1e = (re * t19.im + im_1e * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1f = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1g = (re * t19.re - im_1f * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1f = (re * t19.im + im_1f * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp_0 * t7.re - im_tmp_0 * t7.im;
  im_1g = re_tmp_0 * t7.im + im_tmp_0 * t7.re;
  re_1h = (re * t19.re - im_1g * t19.im) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1g = (re * t19.im + im_1g * t19.re) * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1h = re_tmp * t7.im + im_tmp * t7.re;
  re_1i = (re * t19.re - im_1h * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1h = (re * t19.im + im_1h * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1i = re_tmp * t7.im + im_tmp * t7.re;
  re_1j = (re * t19.re - im_1i * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1i = (re * t19.im + im_1i * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1j = re_tmp * t7.im + im_tmp * t7.re;
  re_1k = (re * t19.re - im_1j * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1j = (re * t19.im + im_1j * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1k = re_tmp * t7.im + im_tmp * t7.re;
  re_1l = (re * t19.re - im_1k * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1k = (re * t19.im + im_1k * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1l = re_tmp * t7.im + im_tmp * t7.re;
  re_1m = (re * t19.re - im_1l * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1l = (re * t19.im + im_1l * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1m = re_tmp * t7.im + im_tmp * t7.re;
  re_1n = (re * t19.re - im_1m * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1m = (re * t19.im + im_1m * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1n = re_tmp * t7.im + im_tmp * t7.re;
  re_1o = (re * t19.re - im_1n * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1n = (re * t19.im + im_1n * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1o = re_tmp * t7.im + im_tmp * t7.re;
  re_1p = (re * t19.re - im_1o * t19.im) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1o = (re * t19.im + im_1o * t19.re) * t20 * t21 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1p = re_tmp * t7.im + im_tmp * t7.re;
  re_1q = (re * t19.re - im_1p * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1p = (re * t19.im + im_1p * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 8))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1q = re_tmp * t7.im + im_tmp * t7.re;
  re_1r = (re * t19.re - im_1q * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1q = (re * t19.im + im_1q * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1r = re_tmp * t7.im + im_tmp * t7.re;
  re_1s = (re * t19.re - im_1r * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1r = (re * t19.im + im_1r * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 11))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1s = re_tmp * t7.im + im_tmp * t7.re;
  re_1t = (re * t19.re - im_1s * t19.im) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1s = (re * t19.im + im_1s * t19.re) * t21 * t22 * t23 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 14))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1t = re_tmp * t7.im + im_tmp * t7.re;
  re_1u = (re * t19.re - im_1t * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1t = (re * t19.im + im_1t * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1u = re_tmp * t7.im + im_tmp * t7.re;
  re_1v = (re * t19.re - im_1u * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1u = (re * t19.im + im_1u * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1v = re_tmp * t7.im + im_tmp * t7.re;
  re_1w = (re * t19.re - im_1v * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_1v = (re * t19.im + im_1v * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1w = re_tmp * t7.im + im_tmp * t7.re;
  re_1x = (re * t19.re - im_1w * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1w = (re * t19.im + im_1w * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1x = re_tmp * t7.im + im_tmp * t7.re;
  re_1y = (re * t19.re - im_1x * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1x = (re * t19.im + im_1x * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1y = re_tmp * t7.im + im_tmp * t7.re;
  re_1z = (re * t19.re - im_1y * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_1y = (re * t19.im + im_1y * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_1z = re_tmp * t7.im + im_tmp * t7.re;
  re_20 = (re * t19.re - im_1z * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_1z = (re * t19.im + im_1z * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_20 = re_tmp * t7.im + im_tmp * t7.re;
  re_21 = (re * t19.re - im_20 * t19.im) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_20 = (re * t19.im + im_20 * t19.re) * t20 * t21 * t22 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_21 = re_tmp * t7.im + im_tmp * t7.re;
  re_22 = (re * t19.re - im_21 * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_21 = (re * t19.im + im_21 * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 9))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_22 = re_tmp * t7.im + im_tmp * t7.re;
  re_23 = (re * t19.re - im_22 * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  im_22 = (re * t19.im + im_22 * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 10))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_23 = re_tmp * t7.im + im_tmp * t7.re;
  re_24 = (re * t19.re - im_23 * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  im_23 = (re * t19.im + im_23 * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 12))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 16))[0];
  re = re_tmp * t7.re - im_tmp * t7.im;
  im_24 = re_tmp * t7.im + im_tmp * t7.re;
  re_25 = (re * t19.re - im_24 * t19.im) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  im_24 = (re * t19.im + im_24 * t19.re) * t21 * t23 * t24 * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 15))[0] * *((const real32_T **)
    ssGetInputPortSignalPtrs(S, 13))[0];
  re =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((t25_0.re - (t3_re * 0.0F - t3_im * (rtInfF))) +
    (t3_re_0 * 0.0F - t3_im_0 * (rtInfF))) + (t3_re_1 * 0.0F - t3_im_1 * (rtInfF)))
    - (t3_re_2 * 0.0F - t3_im_2 * (rtInfF))) - (t3_re_3 * 0.0F - t3_im_3 *
    (rtInfF))) + (t3_re_4 * 0.0F - t3_im_4 * (rtInfF))) + (t3_re_5 * 0.0F -
    t3_im_5 * (rtInfF))) - (t3_re_6 * 0.0F - t3_im_6 * (rtInfF))) - (t3_re_7 *
    0.0F - t3_im_7 * (rtInfF))) + (t3_re_8 * 0.0F - t3_im_8 * (rtInfF))) +
    (t3_re_9 * 0.0F - t3_im_9 * (rtInfF))) - (t3_re_a * 0.0F - t3_im_a * (rtInfF)))
    - (t3_re_b * 0.0F - t3_im_b * (rtInfF))) + (t3_re_c * 0.0F - t3_im_c *
    (rtInfF))) + (t3_re_d * 0.0F - t3_im_d * (rtInfF))) - (t3_re_e * 0.0F -
    t3_im_e * (rtInfF))) - (t3_re_f * 0.0F - t3_im_f * (rtInfF))) + (t3_re_g *
    0.0F - t3_im_g * (rtInfF))) + (t3_re_h * 0.0F - t3_im_h * (rtInfF))) -
    (t3_re_i * 0.0F - t3_im_i * (rtInfF))) - (t3_re_j * 0.0F - t3_im_j * (rtInfF)))
    + (t3_re_k * 0.0F - t3_im_k * (rtInfF))) + (t3_re_l * 0.0F - t3_im_l *
    (rtInfF))) - (t3_re_m * 0.0F - t3_im_m * (rtInfF))) + (re_0 * 0.0F - im *
    (rtInfF))) - (re_1 * 0.0F - im_0 * (rtInfF))) + (re_2 * 0.0F - im_1 *
    (rtInfF))) - (re_3 * 0.0F - im_2 * (rtInfF))) - (re_4 * 0.0F - im_3 *
    (rtInfF))) + (re_5 * 0.0F - im_4 * (rtInfF))) + (re_6 * 0.0F - im_5 *
    (rtInfF))) - (re_7 * 0.0F - im_6 * (rtInfF))) - (re_8 * 0.0F - im_7 *
    (rtInfF))) + (re_9 * 0.0F - im_8 * (rtInfF))) + (re_a * 0.0F - im_9 *
    (rtInfF))) - (re_b * 0.0F - im_a * (rtInfF))) + (re_c * 0.0F - im_b *
    (rtInfF))) - (re_d * 0.0F - im_c * (rtInfF))) - (re_e * 0.0F - im_d *
    (rtInfF))) + (re_f * 0.0F - im_e * (rtInfF))) + (re_g * 0.0F - im_f *
    (rtInfF))) - (re_h * 0.0F - im_g * (rtInfF))) + (re_i * 0.0F - im_h *
    (rtInfF))) - (re_j * 0.0F - im_i * (rtInfF))) - (re_k * 0.0F - im_j *
    (rtInfF))) + (re_l * 0.0F - im_k * (rtInfF))) - (re_m * 0.0F - im_l *
    (rtInfF))) + (re_n * 0.0F - im_m * (rtInfF))) - (re_o * 0.0F - im_n *
    (rtInfF))) + (re_p * 0.0F - im_o * (rtInfF))) + (re_q * 0.0F - im_p *
    (rtInfF))) - (re_r * 0.0F - im_q * (rtInfF))) + (re_s * 0.0F - im_r *
    (rtInfF))) - (re_t * 0.0F - im_s * (rtInfF))) - (re_u * 0.0F - im_t *
    (rtInfF))) + (re_v * 0.0F - im_u * (rtInfF))) + (re_w * 0.0F - im_v *
    (rtInfF))) - (re_x * 0.0F - im_w * (rtInfF))) - (re_y * 0.0F - im_x *
    (rtInfF))) + (re_z * 0.0F - im_y * (rtInfF))) + (re_10 * 0.0F - im_z *
    (rtInfF))) - (re_11 * 0.0F - im_10 * (rtInfF))) - (re_12 * 0.0F - im_11 *
    (rtInfF))) + (re_13 * 0.0F - im_12 * (rtInfF))) + (re_14 * 0.0F - im_13 *
    (rtInfF))) - (re_15 * 0.0F - im_14 * (rtInfF))) - (re_16 * 0.0F - im_15 *
    (rtInfF))) + (re_17 * 0.0F - im_16 * (rtInfF))) + (re_18 * 0.0F - im_17 *
    (rtInfF))) - (re_19 * 0.0F - im_18 * (rtInfF))) + (re_1a * 0.0F - im_19 *
    (rtInfF))) - (re_1b * 0.0F - im_1a * (rtInfF))) - (re_1c * 0.0F - im_1b *
    (rtInfF))) + (re_1d * 0.0F - im_1c * (rtInfF))) - (re_1e * 0.0F - im_1d *
    (rtInfF))) + (re_1f * 0.0F - im_1e * (rtInfF))) + (re_1g * 0.0F - im_1f *
    (rtInfF))) - (re_1h * 0.0F - im_1g * (rtInfF))) + (re_1i * 0.0F - im_1h *
    (rtInfF))) - (re_1j * 0.0F - im_1i * (rtInfF))) - (re_1k * 0.0F - im_1j *
    (rtInfF))) + (re_1l * 0.0F - im_1k * (rtInfF))) - (re_1m * 0.0F - im_1l *
    (rtInfF))) + (re_1n * 0.0F - im_1m * (rtInfF))) + (re_1o * 0.0F - im_1n *
    (rtInfF))) - (re_1p * 0.0F - im_1o * (rtInfF))) + (re_1q * 0.0F - im_1p *
    (rtInfF))) - (re_1r * 0.0F - im_1q * (rtInfF))) - (re_1s * 0.0F - im_1r *
    (rtInfF))) + (re_1t * 0.0F - im_1s * (rtInfF))) - (re_1u * 0.0F - im_1t *
    (rtInfF))) + (re_1v * 0.0F - im_1u * (rtInfF))) - (re_1w * 0.0F - im_1v *
              (rtInfF))) + (re_1x * 0.0F - im_1w * (rtInfF))) + (re_1y * 0.0F -
            im_1x * (rtInfF))) - (re_1z * 0.0F - im_1y * (rtInfF))) - (re_20 *
          0.0F - im_1z * (rtInfF))) + (re_21 * 0.0F - im_20 * (rtInfF))) +
       (re_22 * 0.0F - im_21 * (rtInfF))) - (re_23 * 0.0F - im_22 * (rtInfF))) -
     (re_24 * 0.0F - im_23 * (rtInfF))) + (re_25 * 0.0F - im_24 * (rtInfF));
  im =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((t25_0.im - (t3_re * (rtInfF) + t3_im * 0.0F)) +
    (t3_re_0 * (rtInfF) + t3_im_0 * 0.0F)) + (t3_re_1 * (rtInfF) + t3_im_1 *
    0.0F)) - (t3_re_2 * (rtInfF) + t3_im_2 * 0.0F)) - (t3_re_3 * (rtInfF) +
    t3_im_3 * 0.0F)) + (t3_re_4 * (rtInfF) + t3_im_4 * 0.0F)) + (t3_re_5 *
    (rtInfF) + t3_im_5 * 0.0F)) - (t3_re_6 * (rtInfF) + t3_im_6 * 0.0F)) -
    (t3_re_7 * (rtInfF) + t3_im_7 * 0.0F)) + (t3_re_8 * (rtInfF) + t3_im_8 *
    0.0F)) + (t3_re_9 * (rtInfF) + t3_im_9 * 0.0F)) - (t3_re_a * (rtInfF) +
    t3_im_a * 0.0F)) - (t3_re_b * (rtInfF) + t3_im_b * 0.0F)) + (t3_re_c *
    (rtInfF) + t3_im_c * 0.0F)) + (t3_re_d * (rtInfF) + t3_im_d * 0.0F)) -
    (t3_re_e * (rtInfF) + t3_im_e * 0.0F)) - (t3_re_f * (rtInfF) + t3_im_f *
    0.0F)) + (t3_re_g * (rtInfF) + t3_im_g * 0.0F)) + (t3_re_h * (rtInfF) +
    t3_im_h * 0.0F)) - (t3_re_i * (rtInfF) + t3_im_i * 0.0F)) - (t3_re_j *
    (rtInfF) + t3_im_j * 0.0F)) + (t3_re_k * (rtInfF) + t3_im_k * 0.0F)) +
    (t3_re_l * (rtInfF) + t3_im_l * 0.0F)) - (t3_re_m * (rtInfF) + t3_im_m *
    0.0F)) + (re_0 * (rtInfF) + im * 0.0F)) - (re_1 * (rtInfF) + im_0 * 0.0F)) +
    (re_2 * (rtInfF) + im_1 * 0.0F)) - (re_3 * (rtInfF) + im_2 * 0.0F)) - (re_4 *
    (rtInfF) + im_3 * 0.0F)) + (re_5 * (rtInfF) + im_4 * 0.0F)) + (re_6 *
    (rtInfF) + im_5 * 0.0F)) - (re_7 * (rtInfF) + im_6 * 0.0F)) - (re_8 *
    (rtInfF) + im_7 * 0.0F)) + (re_9 * (rtInfF) + im_8 * 0.0F)) + (re_a *
    (rtInfF) + im_9 * 0.0F)) - (re_b * (rtInfF) + im_a * 0.0F)) + (re_c *
    (rtInfF) + im_b * 0.0F)) - (re_d * (rtInfF) + im_c * 0.0F)) - (re_e *
    (rtInfF) + im_d * 0.0F)) + (re_f * (rtInfF) + im_e * 0.0F)) + (re_g *
    (rtInfF) + im_f * 0.0F)) - (re_h * (rtInfF) + im_g * 0.0F)) + (re_i *
    (rtInfF) + im_h * 0.0F)) - (re_j * (rtInfF) + im_i * 0.0F)) - (re_k *
    (rtInfF) + im_j * 0.0F)) + (re_l * (rtInfF) + im_k * 0.0F)) - (re_m *
    (rtInfF) + im_l * 0.0F)) + (re_n * (rtInfF) + im_m * 0.0F)) - (re_o *
    (rtInfF) + im_n * 0.0F)) + (re_p * (rtInfF) + im_o * 0.0F)) + (re_q *
    (rtInfF) + im_p * 0.0F)) - (re_r * (rtInfF) + im_q * 0.0F)) + (re_s *
    (rtInfF) + im_r * 0.0F)) - (re_t * (rtInfF) + im_s * 0.0F)) - (re_u *
    (rtInfF) + im_t * 0.0F)) + (re_v * (rtInfF) + im_u * 0.0F)) + (re_w *
    (rtInfF) + im_v * 0.0F)) - (re_x * (rtInfF) + im_w * 0.0F)) - (re_y *
    (rtInfF) + im_x * 0.0F)) + (re_z * (rtInfF) + im_y * 0.0F)) + (re_10 *
    (rtInfF) + im_z * 0.0F)) - (re_11 * (rtInfF) + im_10 * 0.0F)) - (re_12 *
    (rtInfF) + im_11 * 0.0F)) + (re_13 * (rtInfF) + im_12 * 0.0F)) + (re_14 *
    (rtInfF) + im_13 * 0.0F)) - (re_15 * (rtInfF) + im_14 * 0.0F)) - (re_16 *
    (rtInfF) + im_15 * 0.0F)) + (re_17 * (rtInfF) + im_16 * 0.0F)) + (re_18 *
    (rtInfF) + im_17 * 0.0F)) - (re_19 * (rtInfF) + im_18 * 0.0F)) + (re_1a *
    (rtInfF) + im_19 * 0.0F)) - (re_1b * (rtInfF) + im_1a * 0.0F)) - (re_1c *
    (rtInfF) + im_1b * 0.0F)) + (re_1d * (rtInfF) + im_1c * 0.0F)) - (re_1e *
    (rtInfF) + im_1d * 0.0F)) + (re_1f * (rtInfF) + im_1e * 0.0F)) + (re_1g *
    (rtInfF) + im_1f * 0.0F)) - (re_1h * (rtInfF) + im_1g * 0.0F)) + (re_1i *
    (rtInfF) + im_1h * 0.0F)) - (re_1j * (rtInfF) + im_1i * 0.0F)) - (re_1k *
    (rtInfF) + im_1j * 0.0F)) + (re_1l * (rtInfF) + im_1k * 0.0F)) - (re_1m *
    (rtInfF) + im_1l * 0.0F)) + (re_1n * (rtInfF) + im_1m * 0.0F)) + (re_1o *
    (rtInfF) + im_1n * 0.0F)) - (re_1p * (rtInfF) + im_1o * 0.0F)) + (re_1q *
    (rtInfF) + im_1p * 0.0F)) - (re_1r * (rtInfF) + im_1q * 0.0F)) - (re_1s *
    (rtInfF) + im_1r * 0.0F)) + (re_1t * (rtInfF) + im_1s * 0.0F)) - (re_1u *
    (rtInfF) + im_1t * 0.0F)) + (re_1v * (rtInfF) + im_1u * 0.0F)) - (re_1w *
              (rtInfF) + im_1v * 0.0F)) + (re_1x * (rtInfF) + im_1w * 0.0F)) +
           (re_1y * (rtInfF) + im_1x * 0.0F)) - (re_1z * (rtInfF) + im_1y * 0.0F))
         - (re_20 * (rtInfF) + im_1z * 0.0F)) + (re_21 * (rtInfF) + im_20 * 0.0F))
       + (re_22 * (rtInfF) + im_21 * 0.0F)) - (re_23 * (rtInfF) + im_22 * 0.0F))
     - (re_24 * (rtInfF) + im_23 * 0.0F)) + (re_25 * (rtInfF) + im_24 * 0.0F);
  t25.re = -t425_re * re - -t425_im * im;
  t25.im = -t425_re * im + -t425_im * re;
  Mother_log(&t25);

  /* Outport: '<Root>/MCP_AA_s' incorporates:
   *  MATLAB Function: '<Root>/Mother of Kinematics'
   */
  ((creal32_T *)ssGetOutputPortSignal(S, 0))[0].re = h.re * 0.0F - (-h.im);
  ((creal32_T *)ssGetOutputPortSignal(S, 0))[0].im = h.im * 0.0F + -h.re;
  ((creal32_T *)ssGetOutputPortSignal(S, 0))[1].re = t25.re * 0.0F - (-t25.im);
  ((creal32_T *)ssGetOutputPortSignal(S, 0))[1].im = t25.im * 0.0F + -t25.re;
  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  UNUSED_PARAMETER(tid);
}

/* Termination for root system: '<Root>' */
static void mdlTerminate(SimStruct *S)
{

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

  if (ssGetUserData(S) != (NULL) ) {
    rt_FREE(ssGetLocalBlockIO(S));
  }

  rt_FREE(ssGetUserData(S));

#endif

}

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  include "Mother_mid.h"
#endif

/* Function to initialize sizes. */
static void mdlInitializeSizes(SimStruct *S)
{
  ssSetNumSampleTimes(S, 1);           /* Number of sample times */
  ssSetNumContStates(S, 0);            /* Number of continuous states */
  ssSetNumNonsampledZCs(S, 0);         /* Number of nonsampled ZCs */

  /* Number of output ports */
  if (!ssSetNumOutputPorts(S, 1))
    return;

  /* outport number: 0 */
  if (!ssSetOutputPortVectorDimension(S, 0, 2))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 0, SS_SINGLE);
  }

  ssSetOutputPortComplexSignal(S, 0, COMPLEX_YES);
  ssSetOutputPortSampleTime(S, 0, 0.01);
  ssSetOutputPortOffsetTime(S, 0, 0.0);
  ssSetOutputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);

  /* Number of input ports */
  if (!ssSetNumInputPorts(S, 17))
    return;

  /* inport number: 0 */
  {
    if (!ssSetInputPortVectorDimension(S, 0, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 0, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 0, 1);
    ssSetInputPortSampleTime(S, 0, 0.01);
    ssSetInputPortOffsetTime(S, 0, 0.0);
    ssSetInputPortOverWritable(S, 0, 0);
    ssSetInputPortOptimOpts(S, 0, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 1 */
  {
    if (!ssSetInputPortVectorDimension(S, 1, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 1, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 1, 1);
    ssSetInputPortSampleTime(S, 1, 0.01);
    ssSetInputPortOffsetTime(S, 1, 0.0);
    ssSetInputPortOverWritable(S, 1, 0);
    ssSetInputPortOptimOpts(S, 1, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 2 */
  {
    if (!ssSetInputPortVectorDimension(S, 2, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 2, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 2, 1);
    ssSetInputPortSampleTime(S, 2, 0.01);
    ssSetInputPortOffsetTime(S, 2, 0.0);
    ssSetInputPortOverWritable(S, 2, 0);
    ssSetInputPortOptimOpts(S, 2, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 3 */
  {
    if (!ssSetInputPortMatrixDimensions(S, 3, 1, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 3, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 3, 1);
    ssSetInputPortSampleTime(S, 3, 0.01);
    ssSetInputPortOffsetTime(S, 3, 0.0);
    ssSetInputPortOverWritable(S, 3, 0);
    ssSetInputPortOptimOpts(S, 3, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 4 */
  {
    if (!ssSetInputPortMatrixDimensions(S, 4, 1, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 4, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 4, 1);
    ssSetInputPortSampleTime(S, 4, 0.01);
    ssSetInputPortOffsetTime(S, 4, 0.0);
    ssSetInputPortOverWritable(S, 4, 0);
    ssSetInputPortOptimOpts(S, 4, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 5 */
  {
    if (!ssSetInputPortVectorDimension(S, 5, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 5, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 5, 1);
    ssSetInputPortSampleTime(S, 5, 0.01);
    ssSetInputPortOffsetTime(S, 5, 0.0);
    ssSetInputPortOverWritable(S, 5, 0);
    ssSetInputPortOptimOpts(S, 5, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 6 */
  {
    if (!ssSetInputPortVectorDimension(S, 6, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 6, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 6, 1);
    ssSetInputPortSampleTime(S, 6, 0.01);
    ssSetInputPortOffsetTime(S, 6, 0.0);
    ssSetInputPortOverWritable(S, 6, 0);
    ssSetInputPortOptimOpts(S, 6, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 7 */
  {
    if (!ssSetInputPortVectorDimension(S, 7, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 7, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 7, 1);
    ssSetInputPortSampleTime(S, 7, 0.01);
    ssSetInputPortOffsetTime(S, 7, 0.0);
    ssSetInputPortOverWritable(S, 7, 0);
    ssSetInputPortOptimOpts(S, 7, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 8 */
  {
    if (!ssSetInputPortVectorDimension(S, 8, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 8, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 8, 1);
    ssSetInputPortSampleTime(S, 8, 0.01);
    ssSetInputPortOffsetTime(S, 8, 0.0);
    ssSetInputPortOverWritable(S, 8, 0);
    ssSetInputPortOptimOpts(S, 8, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 9 */
  {
    if (!ssSetInputPortVectorDimension(S, 9, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 9, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 9, 1);
    ssSetInputPortSampleTime(S, 9, 0.01);
    ssSetInputPortOffsetTime(S, 9, 0.0);
    ssSetInputPortOverWritable(S, 9, 0);
    ssSetInputPortOptimOpts(S, 9, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 10 */
  {
    if (!ssSetInputPortVectorDimension(S, 10, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 10, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 10, 1);
    ssSetInputPortSampleTime(S, 10, 0.01);
    ssSetInputPortOffsetTime(S, 10, 0.0);
    ssSetInputPortOverWritable(S, 10, 0);
    ssSetInputPortOptimOpts(S, 10, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 11 */
  {
    if (!ssSetInputPortVectorDimension(S, 11, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 11, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 11, 1);
    ssSetInputPortSampleTime(S, 11, 0.01);
    ssSetInputPortOffsetTime(S, 11, 0.0);
    ssSetInputPortOverWritable(S, 11, 0);
    ssSetInputPortOptimOpts(S, 11, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 12 */
  {
    if (!ssSetInputPortVectorDimension(S, 12, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 12, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 12, 1);
    ssSetInputPortSampleTime(S, 12, 0.01);
    ssSetInputPortOffsetTime(S, 12, 0.0);
    ssSetInputPortOverWritable(S, 12, 0);
    ssSetInputPortOptimOpts(S, 12, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 13 */
  {
    if (!ssSetInputPortVectorDimension(S, 13, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 13, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 13, 1);
    ssSetInputPortSampleTime(S, 13, 0.01);
    ssSetInputPortOffsetTime(S, 13, 0.0);
    ssSetInputPortOverWritable(S, 13, 0);
    ssSetInputPortOptimOpts(S, 13, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 14 */
  {
    if (!ssSetInputPortVectorDimension(S, 14, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 14, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 14, 1);
    ssSetInputPortSampleTime(S, 14, 0.01);
    ssSetInputPortOffsetTime(S, 14, 0.0);
    ssSetInputPortOverWritable(S, 14, 0);
    ssSetInputPortOptimOpts(S, 14, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 15 */
  {
    if (!ssSetInputPortVectorDimension(S, 15, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 15, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 15, 1);
    ssSetInputPortSampleTime(S, 15, 0.01);
    ssSetInputPortOffsetTime(S, 15, 0.0);
    ssSetInputPortOverWritable(S, 15, 0);
    ssSetInputPortOptimOpts(S, 15, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 16 */
  {
    if (!ssSetInputPortVectorDimension(S, 16, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 16, SS_SINGLE);
    }

    ssSetInputPortDirectFeedThrough(S, 16, 1);
    ssSetInputPortSampleTime(S, 16, 0.01);
    ssSetInputPortOffsetTime(S, 16, 0.0);
    ssSetInputPortOverWritable(S, 16, 0);
    ssSetInputPortOptimOpts(S, 16, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  ssSetRTWGeneratedSFcn(S, 1);         /* Generated S-function */

  /* Tunable Parameters */
  ssSetNumSFcnParams(S, 0);

  /* Number of expected parameters */
#if defined(MATLAB_MEX_FILE)

  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {

#if defined(MDL_CHECK_PARAMETERS)

    mdlCheckParameters(S);

#endif                                 /* MDL_CHECK_PARAMETERS */

    if (ssGetErrorStatus(S) != (NULL) ) {
      return;
    }
  } else {
    return;                            /* Parameter mismatch will be reported by Simulink */
  }

#endif                                 /* MATLAB_MEX_FILE */

  /* Options */
  ssSetOptions(S, (SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE |
                   SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED ));

#if SS_SFCN_FOR_SIM

  {
    ssSupportsMultipleExecInstances(S, true);
    ssHasStateInsideForEachSS(S, false);
  }

#endif

}

/* Function to initialize sample times. */
static void mdlInitializeSampleTimes(SimStruct *S)
{
  /* task periods */
  ssSetSampleTime(S, 0, 0.01);

  /* task offsets */
  ssSetOffsetTime(S, 0, 0.0);
}

#if defined(MATLAB_MEX_FILE)
# include "fixedpoint.c"
# include "simulink.c"
#else
# undef S_FUNCTION_NAME
# define S_FUNCTION_NAME               Mother_sf
# include "cg_sfun.h"
#endif                                 /* defined(MATLAB_MEX_FILE) */
