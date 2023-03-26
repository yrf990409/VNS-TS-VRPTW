//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// all.cpp
//
// Code generation for function 'all'
//

// Include files
#include "all.h"
#include "eml_int_forloop_overflow_check.h"
#include "intensification_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo fc_emlrtRSI{
    13,    // lineNo
    "all", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/all.m" // pathName
};

// Function Definitions
namespace coder {
boolean_T all(const emlrtStack *sp, const ::coder::array<boolean_T, 2U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = true;
  b_st.site = &gc_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x.size(1))) {
    if (!x[ix - 1]) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }
  return y;
}

} // namespace coder

// End of code generation (all.cpp)
