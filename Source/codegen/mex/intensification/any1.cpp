//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// any1.cpp
//
// Code generation for function 'any1'
//

// Include files
#include "any1.h"
#include "eml_int_forloop_overflow_check.h"
#include "intensification_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo tg_emlrtRSI{
    136,        // lineNo
    "allOrAny", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "allOrAny.m" // pathName
};

static emlrtRTEInfo emlrtRTEI{
    47,         // lineNo
    19,         // colNo
    "allOrAny", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "allOrAny.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    44,         // lineNo
    19,         // colNo
    "allOrAny", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "allOrAny.m" // pName
};

static emlrtRTEInfo lh_emlrtRTEI{
    13,                                                                // lineNo
    5,                                                                 // colNo
    "any",                                                             // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/any.m" // pName
};

// Function Definitions
namespace coder {
boolean_T any(const emlrtStack *sp, const ::coder::array<boolean_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = false;
  b_st.site = &gc_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x.size(0))) {
    if (x[ix - 1]) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }
  return y;
}

void b_any(const emlrtStack *sp, const ::coder::array<boolean_T, 2U> &x,
           ::coder::array<boolean_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i2;
  int32_T npages;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if ((x.size(0) == 0) && (x.size(1) == 0)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &o_emlrtRTEI, "Coder:toolbox:eml_all_or_any_specialEmpty",
        "Coder:toolbox:eml_all_or_any_specialEmpty", 0);
  }
  if ((x.size(0) == 1) && (x.size(1) != 1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:toolbox:eml_all_or_any_autoDimIncompatibility",
        "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
  }
  y.set_size(&lh_emlrtRTEI, &st, 1, x.size(1));
  npages = x.size(1);
  for (i2 = 0; i2 < npages; i2++) {
    y[i2] = false;
  }
  npages = x.size(1);
  i2 = 0;
  b_st.site = &tg_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (int32_T i{0}; i < npages; i++) {
    int32_T a;
    int32_T i1;
    boolean_T exitg1;
    a = i2 + x.size(0);
    i1 = i2 + 1;
    i2 += x.size(0);
    b_st.site = &gc_emlrtRSI;
    if ((i1 <= a) && (a > 2147483646)) {
      c_st.site = &p_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    exitg1 = false;
    while ((!exitg1) && (i1 <= a)) {
      if (x[i1 - 1]) {
        y[i] = true;
        exitg1 = true;
      } else {
        i1++;
      }
    }
  }
}

} // namespace coder

// End of code generation (any1.cpp)
