//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// nullAssignment.cpp
//
// Code generation for function 'nullAssignment'
//

// Include files
#include "nullAssignment.h"
#include "eml_int_forloop_overflow_check.h"
#include "intensification_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo k_emlrtRSI{
    13,               // lineNo
    "nullAssignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    17,               // lineNo
    "nullAssignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    169,                      // lineNo
    "onearg_null_assignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    172,                      // lineNo
    "onearg_null_assignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    132,        // lineNo
    "num_true", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRTEInfo t_emlrtRTEI{
    85,                // lineNo
    27,                // colNo
    "validate_inputs", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    184,                      // lineNo
    9,                        // colNo
    "onearg_null_assignment", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pName
};

static emlrtRTEInfo yh_emlrtRTEI{
    17,               // lineNo
    9,                // colNo
    "nullAssignment", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pName
};

// Function Declarations
namespace coder {
namespace internal {
static int32_T num_true(const emlrtStack *sp,
                        const ::coder::array<boolean_T, 2U> &b);

}
} // namespace coder

// Function Definitions
namespace coder {
namespace internal {
static int32_T num_true(const emlrtStack *sp,
                        const ::coder::array<boolean_T, 2U> &b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_b;
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = 0;
  b_b = b.size(1);
  st.site = &o_emlrtRSI;
  if (b.size(1) > 2147483646) {
    b_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (int32_T k{0}; k < b_b; k++) {
    n += b[k];
  }
  return n;
}

void b_nullAssignment(const emlrtStack *sp, ::coder::array<real_T, 2U> &x,
                      const ::coder::array<boolean_T, 2U> &idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T k0;
  int32_T nxin;
  int32_T nxout;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &k_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = idx.size(1);
  while ((k >= 1) && (!idx[k - 1])) {
    k--;
  }
  if (k > x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&st, &t_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  st.site = &l_emlrtRSI;
  nxin = x.size(1);
  b_st.site = &m_emlrtRSI;
  nxout = x.size(1) - num_true(&b_st, idx);
  k0 = -1;
  b_st.site = &n_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < nxin; k++) {
    if ((k + 1 > idx.size(1)) || (!idx[k])) {
      k0++;
      x[k0] = x[k];
    }
  }
  if (nxout > x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&st, &u_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nxout < 1) {
    nxout = 0;
  }
  x.set_size(&yh_emlrtRTEI, &st, x.size(0), nxout);
}

void nullAssignment(const emlrtStack *sp, ::coder::array<int16_T, 2U> &x,
                    const ::coder::array<boolean_T, 2U> &idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T k0;
  int32_T nxin;
  int32_T nxout;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &k_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = idx.size(1);
  while ((k >= 1) && (!idx[k - 1])) {
    k--;
  }
  if (k > x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&st, &t_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  st.site = &l_emlrtRSI;
  nxin = x.size(1);
  b_st.site = &m_emlrtRSI;
  nxout = x.size(1) - num_true(&b_st, idx);
  k0 = -1;
  b_st.site = &n_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < nxin; k++) {
    if ((k + 1 > idx.size(1)) || (!idx[k])) {
      k0++;
      x[k0] = x[k];
    }
  }
  if (nxout > x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&st, &u_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nxout < 1) {
    nxout = 0;
  }
  x.set_size(&yh_emlrtRTEI, &st, x.size(0), nxout);
}

} // namespace internal
} // namespace coder

// End of code generation (nullAssignment.cpp)
