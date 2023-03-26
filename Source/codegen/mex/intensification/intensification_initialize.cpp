//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// intensification_initialize.cpp
//
// Code generation for function 'intensification_initialize'
//

// Include files
#include "intensification_initialize.h"
#include "_coder_intensification_mex.h"
#include "intensification_data.h"
#include "rt_nonfinite.h"

// Function Declarations
static void intensification_once();

// Function Definitions
static void intensification_once()
{
  mex_InitInfAndNan();
}

void intensification_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    intensification_once();
  }
}

// End of code generation (intensification_initialize.cpp)
