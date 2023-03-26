//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// intensification_data.cpp
//
// Code generation for function 'intensification_data'
//

// Include files
#include "intensification_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131627U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "intensification",                                    // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

emlrtRSInfo p_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" // pathName
};

emlrtRSInfo ob_emlrtRSI{
    20,    // lineNo
    "sum", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/sum.m" // pathName
};

emlrtRSInfo pb_emlrtRSI{
    42,        // lineNo
    "sumprod", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" // pathName
};

emlrtRSInfo qb_emlrtRSI{
    106,                   // lineNo
    "applyToMultipleDims", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "applyToMultipleDims.m" // pathName
};

emlrtRSInfo rb_emlrtRSI{
    63,                               // lineNo
    "function_handle/parenReference", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "function_handle.m" // pathName
};

emlrtRSInfo sb_emlrtRSI{
    38,                                                             // lineNo
    "@(x)sumprod(op,x,coder.internal.indexInt(1),varargin{2:end})", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" // pathName
};

emlrtRSInfo tb_emlrtRSI{
    99,        // lineNo
    "sumprod", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" // pathName
};

emlrtRSInfo ub_emlrtRSI{
    74,                      // lineNo
    "combineVectorElements", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" // pathName
};

emlrtRSInfo vb_emlrtRSI{
    107,                // lineNo
    "blockedSummation", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

emlrtRSInfo wb_emlrtRSI{
    22,                    // lineNo
    "sumMatrixIncludeNaN", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

emlrtRSInfo xb_emlrtRSI{
    42,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

emlrtRSInfo yb_emlrtRSI{
    57,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

emlrtRSInfo gc_emlrtRSI{
    143,        // lineNo
    "allOrAny", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "allOrAny.m" // pathName
};

emlrtRSInfo hc_emlrtRSI{
    99,                 // lineNo
    "blockedSummation", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

emlrtRSInfo jc_emlrtRSI{
    13,    // lineNo
    "any", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/any.m" // pathName
};

emlrtRSInfo kc_emlrtRSI{
    17,    // lineNo
    "max", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/max.m" // pathName
};

emlrtRSInfo lc_emlrtRSI{
    38,         // lineNo
    "minOrMax", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

emlrtRSInfo mc_emlrtRSI{
    77,        // lineNo
    "maximum", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

emlrtRSInfo nc_emlrtRSI{
    173,             // lineNo
    "unaryMinOrMax", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pathName
};

emlrtRSInfo oc_emlrtRSI{
    72,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

emlrtRSInfo pc_emlrtRSI{
    64,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

emlrtRSInfo qc_emlrtRSI{
    113,         // lineNo
    "findFirst", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

emlrtRSInfo rc_emlrtRSI{
    130,                        // lineNo
    "minOrMaxRealVectorKernel", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

emlrtRSInfo wc_emlrtRSI{
    17,    // lineNo
    "min", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/min.m" // pathName
};

emlrtRSInfo xc_emlrtRSI{
    40,         // lineNo
    "minOrMax", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

emlrtRSInfo yc_emlrtRSI{
    90,        // lineNo
    "minimum", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

emlrtRSInfo ch_emlrtRSI{
    110,        // lineNo
    "cat_impl", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

omp_lock_t emlrtLockGlobal;

omp_nest_lock_t intensification_nestLockGlobal;

emlrtRTEInfo b_emlrtRTEI{
    285,                   // lineNo
    27,                    // colNo
    "check_non_axis_size", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/cat.m" // pName
};

emlrtRTEInfo j_emlrtRTEI{
    134,             // lineNo
    27,              // colNo
    "unaryMinOrMax", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pName
};

// End of code generation (intensification_data.cpp)
