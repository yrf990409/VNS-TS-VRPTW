//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// calculate_diversity.cpp
//
// Code generation for function 'calculate_diversity'
//

// Include files
#include "calculate_diversity.h"
#include "intensification_data.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo sc_emlrtRSI{
    7,                     // lineNo
    "calculate_diversity", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_diversity.m" // pathName
};

static emlrtRSInfo tc_emlrtRSI{
    13,                    // lineNo
    "calculate_diversity", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_diversity.m" // pathName
};

static emlrtRSInfo uc_emlrtRSI{
    14,                    // lineNo
    "calculate_diversity", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_diversity.m" // pathName
};

static emlrtRSInfo vc_emlrtRSI{
    17,                    // lineNo
    "calculate_diversity", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_diversity.m" // pathName
};

static emlrtRTEInfo e_emlrtRTEI{
    13,     // lineNo
    9,      // colNo
    "sqrt", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" // pName
};

static emlrtBCInfo m_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    14,                    // lineNo
    38,                    // colNo
    "frequency",           // aName
    "calculate_diversity", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_diversity.m", // pName
    0                       // checkKind
};

static emlrtBCInfo n_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    14,                    // lineNo
    40,                    // colNo
    "frequency",           // aName
    "calculate_diversity", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_diversity.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo rb_emlrtRTEI{
    12,                    // lineNo
    5,                     // colNo
    "calculate_diversity", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_diversity.m" // pName
};

static emlrtRTEInfo sb_emlrtRTEI{
    13,                    // lineNo
    7,                     // colNo
    "calculate_diversity", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_diversity.m" // pName
};

static emlrtRTEInfo tb_emlrtRTEI{
    14,                    // lineNo
    28,                    // colNo
    "calculate_diversity", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_diversity.m" // pName
};

// Function Definitions
real_T calculate_diversity(const emlrtStack *sp,
                           const coder::array<int16_T, 3U> &routes,
                           real_T b_div, real_T total_distance, real_T cus_num,
                           int8_T v_num,
                           const coder::array<real_T, 2U> &frequency)
{
  coder::array<real_T, 2U> b_x;
  coder::array<real_T, 1U> c_x;
  coder::array<int16_T, 2U> r;
  coder::array<boolean_T, 2U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack st;
  real_T div_cost;
  real_T s;
  real_T x;
  int32_T inb;
  int32_T nfb;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  计算多样性成本
  //  公式
  //  div_cost = div * total_distance * sqrt(cus_num * v_num) * sum(frequency)
  st.site = &sc_emlrtRSI;
  x = cus_num * static_cast<real_T>(v_num);
  if (x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  x = muDoubleScalarSqrt(x);
  nfb = routes.size(1) * routes.size(2);
  r.set_size(&rb_emlrtRTEI, sp, 1, nfb);
  for (inb = 0; inb < nfb; inb++) {
    r[inb] = routes[inb];
  }
  b_r.set_size(&sb_emlrtRTEI, sp, 1, r.size(1));
  nfb = r.size(1);
  for (inb = 0; inb < nfb; inb++) {
    b_r[inb] = (r[inb] == 0);
  }
  st.site = &tc_emlrtRSI;
  coder::internal::nullAssignment(&st, r, b_r);
  //  去掉仓库
  if (frequency.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, frequency.size(0), &m_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  st.site = &uc_emlrtRSI;
  b_x.set_size(&tb_emlrtRTEI, &st, 1, r.size(1));
  nfb = r.size(1);
  for (inb = 0; inb < nfb; inb++) {
    if ((r[inb] < 1) || (r[inb] > frequency.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(r[inb]), 1,
                                    frequency.size(1), &n_emlrtBCI, &st);
    }
    b_x[inb] = frequency[frequency.size(0) * (r[inb] - 1)];
  }
  b_st.site = &ob_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  e_st.site = &rb_emlrtRSI;
  f_st.site = &sb_emlrtRSI;
  g_st.site = &tb_emlrtRSI;
  h_st.site = &ub_emlrtRSI;
  if (r.size(1) == 0) {
    s = 0.0;
  } else {
    i_st.site = &vb_emlrtRSI;
    j_st.site = &wb_emlrtRSI;
    if (r.size(1) < 4096) {
      int32_T c_r;
      c_r = r.size(1);
      c_x = b_x.reshape(c_r);
      k_st.site = &xb_emlrtRSI;
      s = coder::sumColumnB(&k_st, c_x, r.size(1));
    } else {
      int32_T c_r;
      int32_T nleft;
      nfb = static_cast<int32_T>(static_cast<uint32_T>(r.size(1)) >> 12);
      inb = nfb << 12;
      nleft = r.size(1) - inb;
      c_r = r.size(1);
      c_x = b_x.reshape(c_r);
      s = coder::sumColumnB4(c_x, 1);
      if (nfb >= 2) {
        c_r = r.size(1);
      }
      for (int32_T ib{2}; ib <= nfb; ib++) {
        c_x = b_x.reshape(c_r);
        s += coder::sumColumnB4(c_x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        c_r = r.size(1);
        c_x = b_x.reshape(c_r);
        k_st.site = &yb_emlrtRSI;
        s += coder::sumColumnB(&k_st, c_x, nleft, inb + 1);
      }
    }
  }
  st.site = &vc_emlrtRSI;
  b_st.site = &ob_emlrtRSI;
  c_st.site = &tb_emlrtRSI;
  d_st.site = &ub_emlrtRSI;
  e_st.site = &hc_emlrtRSI;
  f_st.site = &wb_emlrtRSI;
  g_st.site = &xb_emlrtRSI;
  s = coder::sumColumnB(s);
  div_cost = b_div * total_distance * x * s;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return div_cost;
}

// End of code generation (calculate_diversity.cpp)
