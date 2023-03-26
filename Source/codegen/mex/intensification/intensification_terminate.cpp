//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// intensification_terminate.cpp
//
// Code generation for function 'intensification_terminate'
//

// Include files
#include "intensification_terminate.h"
#include "_coder_intensification_mex.h"
#include "intensification_data.h"
#include "rt_nonfinite.h"

// Function Definitions
void intensification_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void intensification_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (intensification_terminate.cpp)
