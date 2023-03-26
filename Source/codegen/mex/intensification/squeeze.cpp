//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// squeeze.cpp
//
// Code generation for function 'squeeze'
//

// Include files
#include "squeeze.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ad_emlrtRSI{
    38,        // lineNo
    "squeeze", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/squeeze.m" // pathName
};

static emlrtRTEInfo f_emlrtRTEI{
    74,                  // lineNo
    13,                  // colNo
    "reshapeSizeChecks", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo g_emlrtRTEI{
    81,                  // lineNo
    23,                  // colNo
    "reshapeSizeChecks", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo ub_emlrtRTEI{
    38,        // lineNo
    1,         // colNo
    "squeeze", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/squeeze.m" // pName
};

// Function Definitions
namespace coder {
void squeeze(const emlrtStack *sp, const ::coder::array<int16_T, 3U> &a,
             ::coder::array<int16_T, 2U> &b)
{
  emlrtStack st;
  int32_T szb[2];
  int32_T j;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  szb[0] = 1;
  szb[1] = a.size(1);
  if (a.size(2) != 1) {
    j = 0;
    if (a.size(1) != 1) {
      j = 1;
      szb[0] = a.size(1);
    }
    if (a.size(2) != 1) {
      szb[j] = a.size(2);
    }
  }
  st.site = &ad_emlrtRSI;
  nx = a.size(1) * a.size(2);
  j = 1;
  if (a.size(1) > 1) {
    j = a.size(1);
  }
  if (a.size(2) > j) {
    j = a.size(2);
  }
  j = muIntScalarMax_sint32(nx, j);
  if (szb[0] > j) {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if (szb[1] > j) {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  j = szb[0] * szb[1];
  if (j != nx) {
    emlrtErrorWithMessageIdR2018a(
        &st, &g_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  b.set_size(&ub_emlrtRTEI, sp, szb[0], szb[1]);
  for (nx = 0; nx < j; nx++) {
    b[nx] = a[nx];
  }
}

} // namespace coder

// End of code generation (squeeze.cpp)
