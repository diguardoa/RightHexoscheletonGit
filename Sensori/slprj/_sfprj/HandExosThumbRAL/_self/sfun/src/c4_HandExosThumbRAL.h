#ifndef __c4_HandExosThumbRAL_h__
#define __c4_HandExosThumbRAL_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc4_HandExosThumbRALInstanceStruct
#define typedef_SFc4_HandExosThumbRALInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c4_sfEvent;
  boolean_T c4_isStable;
  boolean_T c4_doneDoubleBufferReInit;
  uint8_T c4_is_active_c4_HandExosThumbRAL;
  real_T c4_y_old[5];
  boolean_T c4_y_old_not_empty;
} SFc4_HandExosThumbRALInstanceStruct;

#endif                                 /*typedef_SFc4_HandExosThumbRALInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c4_HandExosThumbRAL_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c4_HandExosThumbRAL_get_check_sum(mxArray *plhs[]);
extern void c4_HandExosThumbRAL_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
