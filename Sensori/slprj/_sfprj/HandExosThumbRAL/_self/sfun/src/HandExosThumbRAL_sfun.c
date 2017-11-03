/* Include files */

#include "HandExosThumbRAL_sfun.h"
#include "HandExosThumbRAL_sfun_debug_macros.h"
#include "c1_HandExosThumbRAL.h"
#include "c2_HandExosThumbRAL.h"
#include "c4_HandExosThumbRAL.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _HandExosThumbRALMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void HandExosThumbRAL_initializer(void)
{
}

void HandExosThumbRAL_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_HandExosThumbRAL_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_HandExosThumbRAL_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_HandExosThumbRAL_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_HandExosThumbRAL_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_HandExosThumbRAL_process_check_sum_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2325510086U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1651660778U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3657972964U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1245147948U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1609580868U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1944664147U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(112030932U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1769481083U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_HandExosThumbRAL_get_check_sum(mxArray *plhs[]);
          sf_c1_HandExosThumbRAL_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_HandExosThumbRAL_get_check_sum(mxArray *plhs[]);
          sf_c2_HandExosThumbRAL_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_HandExosThumbRAL_get_check_sum(mxArray *plhs[]);
          sf_c4_HandExosThumbRAL_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3564696471U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(678668628U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1090454852U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3896867807U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2273750012U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2447130577U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(887066474U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(590616383U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_HandExosThumbRAL_autoinheritance_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(aiChksum, "u5e5Ba7cgbbdxotyiR5LsD") == 0) {
          extern mxArray *sf_c1_HandExosThumbRAL_get_autoinheritance_info(void);
          plhs[0] = sf_c1_HandExosThumbRAL_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "K5zqRxmRz1Rf3O9mLExQaB") == 0) {
          extern mxArray *sf_c2_HandExosThumbRAL_get_autoinheritance_info(void);
          plhs[0] = sf_c2_HandExosThumbRAL_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 4:
      {
        if (strcmp(aiChksum, "K5zqRxmRz1Rf3O9mLExQaB") == 0) {
          extern mxArray *sf_c4_HandExosThumbRAL_get_autoinheritance_info(void);
          plhs[0] = sf_c4_HandExosThumbRAL_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_HandExosThumbRAL_get_eml_resolved_functions_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        extern const mxArray
          *sf_c1_HandExosThumbRAL_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_HandExosThumbRAL_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray
          *sf_c2_HandExosThumbRAL_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_HandExosThumbRAL_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray
          *sf_c4_HandExosThumbRAL_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_HandExosThumbRAL_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_HandExosThumbRAL_third_party_uses_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "h02CNBlCKzGcfrWPcBx25D") == 0) {
          extern mxArray *sf_c1_HandExosThumbRAL_third_party_uses_info(void);
          plhs[0] = sf_c1_HandExosThumbRAL_third_party_uses_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "3ysgGyKEmmyYLdU6UyZsuE") == 0) {
          extern mxArray *sf_c2_HandExosThumbRAL_third_party_uses_info(void);
          plhs[0] = sf_c2_HandExosThumbRAL_third_party_uses_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "3ysgGyKEmmyYLdU6UyZsuE") == 0) {
          extern mxArray *sf_c4_HandExosThumbRAL_third_party_uses_info(void);
          plhs[0] = sf_c4_HandExosThumbRAL_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void HandExosThumbRAL_debug_initialize(struct SfDebugInstanceStruct*
  debugInstance)
{
  _HandExosThumbRALMachineNumber_ = sf_debug_initialize_machine(debugInstance,
    "HandExosThumbRAL","sfun",0,3,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,
    _HandExosThumbRALMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,
    _HandExosThumbRALMachineNumber_,0);
}

void HandExosThumbRAL_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_HandExosThumbRAL_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "HandExosThumbRAL", "HandExosThumbRAL");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_HandExosThumbRAL_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
