/* Include files */

#include <stddef.h>
#include "blas.h"
#include "HandExosThumbRAL_sfun.h"
#include "c5_HandExosThumbRAL.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "HandExosThumbRAL_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c5_debug_family_names[10] = { "ts", "tf", "b", "a", "i",
  "nargin", "nargout", "u", "y", "old_y" };

/* Function Declarations */
static void initialize_c5_HandExosThumbRAL(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance);
static void initialize_params_c5_HandExosThumbRAL
  (SFc5_HandExosThumbRALInstanceStruct *chartInstance);
static void enable_c5_HandExosThumbRAL(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance);
static void disable_c5_HandExosThumbRAL(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance);
static void c5_update_debugger_state_c5_HandExosThumbRAL
  (SFc5_HandExosThumbRALInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_HandExosThumbRAL
  (SFc5_HandExosThumbRALInstanceStruct *chartInstance);
static void set_sim_state_c5_HandExosThumbRAL
  (SFc5_HandExosThumbRALInstanceStruct *chartInstance, const mxArray *c5_st);
static void finalize_c5_HandExosThumbRAL(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance);
static void sf_c5_HandExosThumbRAL(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance);
static void initSimStructsc5_HandExosThumbRAL
  (SFc5_HandExosThumbRALInstanceStruct *chartInstance);
static void registerMessagesc5_HandExosThumbRAL
  (SFc5_HandExosThumbRALInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber);
static const mxArray *c5_sf_marshallOut(void *chartInstanceVoid, void *c5_inData);
static void c5_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_b_old_y, const char_T *c5_identifier, real_T
  c5_y[5]);
static void c5_b_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  real_T c5_y[5]);
static void c5_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_b_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static void c5_c_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_y, const char_T *c5_identifier, real_T
  c5_b_y[5]);
static void c5_d_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  real_T c5_y[5]);
static void c5_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_c_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static const mxArray *c5_d_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static real_T c5_e_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_e_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static int32_T c5_f_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static uint8_T c5_g_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_b_is_active_c5_HandExosThumbRAL, const
  char_T *c5_identifier);
static uint8_T c5_h_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void init_dsm_address_info(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c5_HandExosThumbRAL(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance)
{
  chartInstance->c5_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c5_old_y_not_empty = FALSE;
  chartInstance->c5_is_active_c5_HandExosThumbRAL = 0U;
}

static void initialize_params_c5_HandExosThumbRAL
  (SFc5_HandExosThumbRALInstanceStruct *chartInstance)
{
}

static void enable_c5_HandExosThumbRAL(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c5_HandExosThumbRAL(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c5_update_debugger_state_c5_HandExosThumbRAL
  (SFc5_HandExosThumbRALInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c5_HandExosThumbRAL
  (SFc5_HandExosThumbRALInstanceStruct *chartInstance)
{
  const mxArray *c5_st;
  const mxArray *c5_y = NULL;
  int32_T c5_i0;
  real_T c5_u[5];
  const mxArray *c5_b_y = NULL;
  int32_T c5_i1;
  real_T c5_b_u[5];
  const mxArray *c5_c_y = NULL;
  uint8_T c5_hoistedGlobal;
  uint8_T c5_c_u;
  const mxArray *c5_d_y = NULL;
  real_T (*c5_e_y)[5];
  c5_e_y = (real_T (*)[5])ssGetOutputPortSignal(chartInstance->S, 1);
  c5_st = NULL;
  c5_st = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_createcellarray(3), FALSE);
  for (c5_i0 = 0; c5_i0 < 5; c5_i0++) {
    c5_u[c5_i0] = (*c5_e_y)[c5_i0];
  }

  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_u, 0, 0U, 1U, 0U, 2, 1, 5), FALSE);
  sf_mex_setcell(c5_y, 0, c5_b_y);
  for (c5_i1 = 0; c5_i1 < 5; c5_i1++) {
    c5_b_u[c5_i1] = chartInstance->c5_old_y[c5_i1];
  }

  c5_c_y = NULL;
  if (!chartInstance->c5_old_y_not_empty) {
    sf_mex_assign(&c5_c_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_b_u, 0, 0U, 1U, 0U, 2, 1, 5),
                  FALSE);
  }

  sf_mex_setcell(c5_y, 1, c5_c_y);
  c5_hoistedGlobal = chartInstance->c5_is_active_c5_HandExosThumbRAL;
  c5_c_u = c5_hoistedGlobal;
  c5_d_y = NULL;
  sf_mex_assign(&c5_d_y, sf_mex_create("y", &c5_c_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_y, 2, c5_d_y);
  sf_mex_assign(&c5_st, c5_y, FALSE);
  return c5_st;
}

static void set_sim_state_c5_HandExosThumbRAL
  (SFc5_HandExosThumbRALInstanceStruct *chartInstance, const mxArray *c5_st)
{
  const mxArray *c5_u;
  real_T c5_dv0[5];
  int32_T c5_i2;
  real_T c5_dv1[5];
  int32_T c5_i3;
  real_T (*c5_y)[5];
  c5_y = (real_T (*)[5])ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c5_doneDoubleBufferReInit = TRUE;
  c5_u = sf_mex_dup(c5_st);
  c5_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 0)), "y",
                        c5_dv0);
  for (c5_i2 = 0; c5_i2 < 5; c5_i2++) {
    (*c5_y)[c5_i2] = c5_dv0[c5_i2];
  }

  c5_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 1)),
                      "old_y", c5_dv1);
  for (c5_i3 = 0; c5_i3 < 5; c5_i3++) {
    chartInstance->c5_old_y[c5_i3] = c5_dv1[c5_i3];
  }

  chartInstance->c5_is_active_c5_HandExosThumbRAL = c5_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 2)),
     "is_active_c5_HandExosThumbRAL");
  sf_mex_destroy(&c5_u);
  c5_update_debugger_state_c5_HandExosThumbRAL(chartInstance);
  sf_mex_destroy(&c5_st);
}

static void finalize_c5_HandExosThumbRAL(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance)
{
}

static void sf_c5_HandExosThumbRAL(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance)
{
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  real_T c5_u[5];
  uint32_T c5_debug_family_var_map[10];
  real_T c5_ts;
  real_T c5_tf;
  real_T c5_b;
  real_T c5_a;
  real_T c5_i;
  real_T c5_nargin = 1.0;
  real_T c5_nargout = 1.0;
  real_T c5_y[5];
  int32_T c5_i7;
  int32_T c5_i8;
  int32_T c5_b_i;
  int32_T c5_i9;
  real_T c5_hoistedGlobal[5];
  real_T c5_b_a;
  real_T c5_b_y;
  real_T c5_c_a;
  real_T c5_c_y;
  int32_T c5_i10;
  real_T (*c5_d_y)[5];
  real_T (*c5_b_u)[5];
  c5_d_y = (real_T (*)[5])ssGetOutputPortSignal(chartInstance->S, 1);
  c5_b_u = (real_T (*)[5])ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U, chartInstance->c5_sfEvent);
  for (c5_i4 = 0; c5_i4 < 5; c5_i4++) {
    _SFD_DATA_RANGE_CHECK((*c5_b_u)[c5_i4], 0U);
  }

  for (c5_i5 = 0; c5_i5 < 5; c5_i5++) {
    _SFD_DATA_RANGE_CHECK((*c5_d_y)[c5_i5], 1U);
  }

  chartInstance->c5_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c5_sfEvent);
  for (c5_i6 = 0; c5_i6 < 5; c5_i6++) {
    c5_u[c5_i6] = (*c5_b_u)[c5_i6];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 10U, 10U, c5_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c5_ts, 0U, c5_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c5_tf, 1U, c5_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c5_b, 2U, c5_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c5_a, 3U, c5_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_i, 4U, c5_d_sf_marshallOut,
    c5_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 5U, c5_d_sf_marshallOut,
    c5_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 6U, c5_d_sf_marshallOut,
    c5_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c5_u, 7U, c5_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c5_y, 8U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(chartInstance->c5_old_y, 9U,
    c5_sf_marshallOut, c5_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 4);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 5);
  if (CV_EML_IF(0, 1, 0, !chartInstance->c5_old_y_not_empty)) {
    _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 6);
    for (c5_i7 = 0; c5_i7 < 5; c5_i7++) {
      chartInstance->c5_old_y[c5_i7] = 0.0;
    }

    chartInstance->c5_old_y_not_empty = TRUE;
  }

  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 9);
  c5_ts = 0.02;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 10);
  c5_tf = 0.5;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 11);
  c5_b = 0.038461538461538464;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 12);
  c5_a = 0.96153846153846145;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 14);
  for (c5_i8 = 0; c5_i8 < 5; c5_i8++) {
    c5_y[c5_i8] = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 16);
  c5_i = 1.0;
  c5_b_i = 0;
  while (c5_b_i < 5) {
    c5_i = 1.0 + (real_T)c5_b_i;
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 18);
    for (c5_i9 = 0; c5_i9 < 5; c5_i9++) {
      c5_hoistedGlobal[c5_i9] = chartInstance->c5_old_y[c5_i9];
    }

    c5_b_a = c5_hoistedGlobal[(int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK(
      "old_y", (int32_T)_SFD_INTEGER_CHECK("i", c5_i), 1, 5, 1, 0) - 1];
    c5_b_y = c5_b_a * 0.96153846153846145;
    c5_c_a = c5_u[(int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("u", (int32_T)
      _SFD_INTEGER_CHECK("i", c5_i), 1, 5, 1, 0) - 1];
    c5_c_y = c5_c_a * 0.038461538461538464;
    c5_y[(int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("y", (int32_T)
      _SFD_INTEGER_CHECK("i", c5_i), 1, 5, 1, 0) - 1] = c5_b_y + c5_c_y;
    _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 19);
    chartInstance->c5_old_y[(int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("old_y",
      (int32_T)_SFD_INTEGER_CHECK("i", c5_i), 1, 5, 1, 0) - 1] = c5_y[(int32_T)
      (real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("y", (int32_T)_SFD_INTEGER_CHECK("i",
      c5_i), 1, 5, 1, 0) - 1];
    c5_b_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, -19);
  _SFD_SYMBOL_SCOPE_POP();
  for (c5_i10 = 0; c5_i10 < 5; c5_i10++) {
    (*c5_d_y)[c5_i10] = c5_y[c5_i10];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c5_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_HandExosThumbRALMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc5_HandExosThumbRAL
  (SFc5_HandExosThumbRALInstanceStruct *chartInstance)
{
}

static void registerMessagesc5_HandExosThumbRAL
  (SFc5_HandExosThumbRALInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber)
{
}

static const mxArray *c5_sf_marshallOut(void *chartInstanceVoid, void *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_i11;
  real_T c5_b_inData[5];
  int32_T c5_i12;
  real_T c5_u[5];
  const mxArray *c5_y = NULL;
  SFc5_HandExosThumbRALInstanceStruct *chartInstance;
  chartInstance = (SFc5_HandExosThumbRALInstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  for (c5_i11 = 0; c5_i11 < 5; c5_i11++) {
    c5_b_inData[c5_i11] = (*(real_T (*)[5])c5_inData)[c5_i11];
  }

  for (c5_i12 = 0; c5_i12 < 5; c5_i12++) {
    c5_u[c5_i12] = c5_b_inData[c5_i12];
  }

  c5_y = NULL;
  if (!chartInstance->c5_old_y_not_empty) {
    sf_mex_assign(&c5_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c5_y, sf_mex_create("y", c5_u, 0, 0U, 1U, 0U, 2, 1, 5), FALSE);
  }

  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static void c5_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_b_old_y, const char_T *c5_identifier, real_T
  c5_y[5])
{
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_old_y), &c5_thisId, c5_y);
  sf_mex_destroy(&c5_b_old_y);
}

static void c5_b_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  real_T c5_y[5])
{
  real_T c5_dv2[5];
  int32_T c5_i13;
  if (mxIsEmpty(c5_u)) {
    chartInstance->c5_old_y_not_empty = FALSE;
  } else {
    chartInstance->c5_old_y_not_empty = TRUE;
    sf_mex_import(c5_parentId, sf_mex_dup(c5_u), c5_dv2, 1, 0, 0U, 1, 0U, 2, 1,
                  5);
    for (c5_i13 = 0; c5_i13 < 5; c5_i13++) {
      c5_y[c5_i13] = c5_dv2[c5_i13];
    }
  }

  sf_mex_destroy(&c5_u);
}

static void c5_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_old_y;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y[5];
  int32_T c5_i14;
  SFc5_HandExosThumbRALInstanceStruct *chartInstance;
  chartInstance = (SFc5_HandExosThumbRALInstanceStruct *)chartInstanceVoid;
  c5_b_old_y = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_old_y), &c5_thisId, c5_y);
  sf_mex_destroy(&c5_b_old_y);
  for (c5_i14 = 0; c5_i14 < 5; c5_i14++) {
    (*(real_T (*)[5])c5_outData)[c5_i14] = c5_y[c5_i14];
  }

  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_b_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_i15;
  real_T c5_b_inData[5];
  int32_T c5_i16;
  real_T c5_u[5];
  const mxArray *c5_y = NULL;
  SFc5_HandExosThumbRALInstanceStruct *chartInstance;
  chartInstance = (SFc5_HandExosThumbRALInstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  for (c5_i15 = 0; c5_i15 < 5; c5_i15++) {
    c5_b_inData[c5_i15] = (*(real_T (*)[5])c5_inData)[c5_i15];
  }

  for (c5_i16 = 0; c5_i16 < 5; c5_i16++) {
    c5_u[c5_i16] = c5_b_inData[c5_i16];
  }

  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_u, 0, 0U, 1U, 0U, 2, 1, 5), FALSE);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static void c5_c_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_y, const char_T *c5_identifier, real_T
  c5_b_y[5])
{
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_y), &c5_thisId, c5_b_y);
  sf_mex_destroy(&c5_y);
}

static void c5_d_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  real_T c5_y[5])
{
  real_T c5_dv3[5];
  int32_T c5_i17;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), c5_dv3, 1, 0, 0U, 1, 0U, 2, 1, 5);
  for (c5_i17 = 0; c5_i17 < 5; c5_i17++) {
    c5_y[c5_i17] = c5_dv3[c5_i17];
  }

  sf_mex_destroy(&c5_u);
}

static void c5_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_y;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_b_y[5];
  int32_T c5_i18;
  SFc5_HandExosThumbRALInstanceStruct *chartInstance;
  chartInstance = (SFc5_HandExosThumbRALInstanceStruct *)chartInstanceVoid;
  c5_y = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_y), &c5_thisId, c5_b_y);
  sf_mex_destroy(&c5_y);
  for (c5_i18 = 0; c5_i18 < 5; c5_i18++) {
    (*(real_T (*)[5])c5_outData)[c5_i18] = c5_b_y[c5_i18];
  }

  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_c_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_i19;
  real_T c5_b_inData[5];
  int32_T c5_i20;
  real_T c5_u[5];
  const mxArray *c5_y = NULL;
  SFc5_HandExosThumbRALInstanceStruct *chartInstance;
  chartInstance = (SFc5_HandExosThumbRALInstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  for (c5_i19 = 0; c5_i19 < 5; c5_i19++) {
    c5_b_inData[c5_i19] = (*(real_T (*)[5])c5_inData)[c5_i19];
  }

  for (c5_i20 = 0; c5_i20 < 5; c5_i20++) {
    c5_u[c5_i20] = c5_b_inData[c5_i20];
  }

  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_u, 0, 0U, 1U, 0U, 1, 5), FALSE);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static const mxArray *c5_d_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  real_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_HandExosThumbRALInstanceStruct *chartInstance;
  chartInstance = (SFc5_HandExosThumbRALInstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(real_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static real_T c5_e_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  real_T c5_y;
  real_T c5_d0;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_d0, 1, 0, 0U, 0, 0U, 0);
  c5_y = c5_d0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_nargout;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y;
  SFc5_HandExosThumbRALInstanceStruct *chartInstance;
  chartInstance = (SFc5_HandExosThumbRALInstanceStruct *)chartInstanceVoid;
  c5_nargout = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_nargout), &c5_thisId);
  sf_mex_destroy(&c5_nargout);
  *(real_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

const mxArray *sf_c5_HandExosThumbRAL_get_eml_resolved_functions_info(void)
{
  const mxArray *c5_nameCaptureInfo;
  c5_ResolvedFunctionInfo c5_info[5];
  c5_ResolvedFunctionInfo (*c5_b_info)[5];
  const mxArray *c5_m0 = NULL;
  int32_T c5_i21;
  c5_ResolvedFunctionInfo *c5_r0;
  c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  c5_b_info = (c5_ResolvedFunctionInfo (*)[5])c5_info;
  (*c5_b_info)[0].context = "";
  (*c5_b_info)[0].name = "mrdivide";
  (*c5_b_info)[0].dominantType = "double";
  (*c5_b_info)[0].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c5_b_info)[0].fileTimeLo = 1357951548U;
  (*c5_b_info)[0].fileTimeHi = 0U;
  (*c5_b_info)[0].mFileTimeLo = 1319729966U;
  (*c5_b_info)[0].mFileTimeHi = 0U;
  (*c5_b_info)[1].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c5_b_info)[1].name = "rdivide";
  (*c5_b_info)[1].dominantType = "double";
  (*c5_b_info)[1].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c5_b_info)[1].fileTimeLo = 1346510388U;
  (*c5_b_info)[1].fileTimeHi = 0U;
  (*c5_b_info)[1].mFileTimeLo = 0U;
  (*c5_b_info)[1].mFileTimeHi = 0U;
  (*c5_b_info)[2].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c5_b_info)[2].name = "eml_scalexp_compatible";
  (*c5_b_info)[2].dominantType = "double";
  (*c5_b_info)[2].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  (*c5_b_info)[2].fileTimeLo = 1286818796U;
  (*c5_b_info)[2].fileTimeHi = 0U;
  (*c5_b_info)[2].mFileTimeLo = 0U;
  (*c5_b_info)[2].mFileTimeHi = 0U;
  (*c5_b_info)[3].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c5_b_info)[3].name = "eml_div";
  (*c5_b_info)[3].dominantType = "double";
  (*c5_b_info)[3].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c5_b_info)[3].fileTimeLo = 1313347810U;
  (*c5_b_info)[3].fileTimeHi = 0U;
  (*c5_b_info)[3].mFileTimeLo = 0U;
  (*c5_b_info)[3].mFileTimeHi = 0U;
  (*c5_b_info)[4].context = "";
  (*c5_b_info)[4].name = "mtimes";
  (*c5_b_info)[4].dominantType = "double";
  (*c5_b_info)[4].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c5_b_info)[4].fileTimeLo = 1289519692U;
  (*c5_b_info)[4].fileTimeHi = 0U;
  (*c5_b_info)[4].mFileTimeLo = 0U;
  (*c5_b_info)[4].mFileTimeHi = 0U;
  sf_mex_assign(&c5_m0, sf_mex_createstruct("nameCaptureInfo", 1, 5), FALSE);
  for (c5_i21 = 0; c5_i21 < 5; c5_i21++) {
    c5_r0 = &c5_info[c5_i21];
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", c5_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c5_r0->context)), "context", "nameCaptureInfo",
                    c5_i21);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", c5_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c5_r0->name)), "name", "nameCaptureInfo", c5_i21);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", c5_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c5_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c5_i21);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", c5_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c5_r0->resolved)), "resolved", "nameCaptureInfo",
                    c5_i21);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", &c5_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c5_i21);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", &c5_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c5_i21);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", &c5_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c5_i21);
    sf_mex_addfield(c5_m0, sf_mex_create("nameCaptureInfo", &c5_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c5_i21);
  }

  sf_mex_assign(&c5_nameCaptureInfo, c5_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c5_nameCaptureInfo);
  return c5_nameCaptureInfo;
}

static const mxArray *c5_e_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_HandExosThumbRALInstanceStruct *chartInstance;
  chartInstance = (SFc5_HandExosThumbRALInstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(int32_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static int32_T c5_f_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  int32_T c5_y;
  int32_T c5_i22;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_i22, 1, 6, 0U, 0, 0U, 0);
  c5_y = c5_i22;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_sfEvent;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  int32_T c5_y;
  SFc5_HandExosThumbRALInstanceStruct *chartInstance;
  chartInstance = (SFc5_HandExosThumbRALInstanceStruct *)chartInstanceVoid;
  c5_b_sfEvent = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_sfEvent),
    &c5_thisId);
  sf_mex_destroy(&c5_b_sfEvent);
  *(int32_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static uint8_T c5_g_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_b_is_active_c5_HandExosThumbRAL, const
  char_T *c5_identifier)
{
  uint8_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c5_b_is_active_c5_HandExosThumbRAL), &c5_thisId);
  sf_mex_destroy(&c5_b_is_active_c5_HandExosThumbRAL);
  return c5_y;
}

static uint8_T c5_h_emlrt_marshallIn(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint8_T c5_y;
  uint8_T c5_u0;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_u0, 1, 3, 0U, 0, 0U, 0);
  c5_y = c5_u0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void init_dsm_address_info(SFc5_HandExosThumbRALInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c5_HandExosThumbRAL_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3569164093U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2566819177U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2981046531U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4222331971U);
}

mxArray *sf_c5_HandExosThumbRAL_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("4dvLaCACNRl0LsNuLtIszG");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(5);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(5);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c5_HandExosThumbRAL_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

static const mxArray *sf_get_sim_state_info_c5_HandExosThumbRAL(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[5],T\"y\",},{M[4],M[0],T\"old_y\",S'l','i','p'{{M1x2[42 47],M[0],}}},{M[8],M[0],T\"is_active_c5_HandExosThumbRAL\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_HandExosThumbRAL_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc5_HandExosThumbRALInstanceStruct *chartInstance;
    chartInstance = (SFc5_HandExosThumbRALInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _HandExosThumbRALMachineNumber_,
           5,
           1,
           1,
           2,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           ssGetPath(S),
           (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation(_HandExosThumbRALMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_HandExosThumbRALMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _HandExosThumbRALMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"u");
          _SFD_SET_DATA_PROPS(1,2,0,1,"y");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,1,0,0,0,1,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,248);
        _SFD_CV_INIT_EML_IF(0,1,0,49,67,-1,95);
        _SFD_CV_INIT_EML_FOR(0,1,0,169,181,247);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 5;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 1;
          dimVector[1]= 5;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)
            c5_b_sf_marshallIn);
        }

        {
          real_T (*c5_u)[5];
          real_T (*c5_y)[5];
          c5_y = (real_T (*)[5])ssGetOutputPortSignal(chartInstance->S, 1);
          c5_u = (real_T (*)[5])ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, *c5_u);
          _SFD_SET_DATA_VALUE_PTR(1U, *c5_y);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _HandExosThumbRALMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "pBxVI1fS5M7Mjf3c3uZgNE";
}

static void sf_opaque_initialize_c5_HandExosThumbRAL(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc5_HandExosThumbRALInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c5_HandExosThumbRAL((SFc5_HandExosThumbRALInstanceStruct*)
    chartInstanceVar);
  initialize_c5_HandExosThumbRAL((SFc5_HandExosThumbRALInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c5_HandExosThumbRAL(void *chartInstanceVar)
{
  enable_c5_HandExosThumbRAL((SFc5_HandExosThumbRALInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c5_HandExosThumbRAL(void *chartInstanceVar)
{
  disable_c5_HandExosThumbRAL((SFc5_HandExosThumbRALInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c5_HandExosThumbRAL(void *chartInstanceVar)
{
  sf_c5_HandExosThumbRAL((SFc5_HandExosThumbRALInstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c5_HandExosThumbRAL(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c5_HandExosThumbRAL
    ((SFc5_HandExosThumbRALInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c5_HandExosThumbRAL();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

extern void sf_internal_set_sim_state_c5_HandExosThumbRAL(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c5_HandExosThumbRAL();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c5_HandExosThumbRAL((SFc5_HandExosThumbRALInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c5_HandExosThumbRAL(SimStruct* S)
{
  return sf_internal_get_sim_state_c5_HandExosThumbRAL(S);
}

static void sf_opaque_set_sim_state_c5_HandExosThumbRAL(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c5_HandExosThumbRAL(S, st);
}

static void sf_opaque_terminate_c5_HandExosThumbRAL(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_HandExosThumbRALInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_HandExosThumbRAL_optimization_info();
    }

    finalize_c5_HandExosThumbRAL((SFc5_HandExosThumbRALInstanceStruct*)
      chartInstanceVar);
    utFree((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc5_HandExosThumbRAL((SFc5_HandExosThumbRALInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_HandExosThumbRAL(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_HandExosThumbRAL((SFc5_HandExosThumbRALInstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c5_HandExosThumbRAL(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_HandExosThumbRAL_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      5);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,5,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,5,
      "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(S,sf_get_instance_specialization(),infoStruct,5);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,5,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,5,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,5);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(4039393898U));
  ssSetChecksum1(S,(2989509383U));
  ssSetChecksum2(S,(910609974U));
  ssSetChecksum3(S,(3625353203U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c5_HandExosThumbRAL(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c5_HandExosThumbRAL(SimStruct *S)
{
  SFc5_HandExosThumbRALInstanceStruct *chartInstance;
  chartInstance = (SFc5_HandExosThumbRALInstanceStruct *)utMalloc(sizeof
    (SFc5_HandExosThumbRALInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc5_HandExosThumbRALInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c5_HandExosThumbRAL;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_HandExosThumbRAL;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c5_HandExosThumbRAL;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c5_HandExosThumbRAL;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c5_HandExosThumbRAL;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_HandExosThumbRAL;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_HandExosThumbRAL;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_HandExosThumbRAL;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_HandExosThumbRAL;
  chartInstance->chartInfo.mdlStart = mdlStart_c5_HandExosThumbRAL;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c5_HandExosThumbRAL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c5_HandExosThumbRAL_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c5_HandExosThumbRAL(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_HandExosThumbRAL(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_HandExosThumbRAL(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_HandExosThumbRAL_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
