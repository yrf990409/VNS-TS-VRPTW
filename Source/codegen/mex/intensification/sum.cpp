//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sum.cpp
//
// Code generation for function 'sum'
//

// Include files
#include "sum.h"
#include "intensification_data.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
real_T b_sum(const emlrtStack *sp, const ::coder::array<real_T, 2U> &x)
{
  array<real_T, 1U> c_x;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ob_emlrtRSI;
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
  b_st.site = &tb_emlrtRSI;
  c_st.site = &ub_emlrtRSI;
  if (x.size(1) == 0) {
    y = 0.0;
  } else {
    d_st.site = &hc_emlrtRSI;
    e_st.site = &wb_emlrtRSI;
    if (x.size(1) < 4096) {
      int32_T b_x;
      b_x = x.size(1);
      c_x = x.reshape(b_x);
      f_st.site = &xb_emlrtRSI;
      y = sumColumnB(&f_st, c_x, x.size(1));
    } else {
      int32_T b_x;
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = static_cast<int32_T>(static_cast<uint32_T>(x.size(1)) >> 12);
      inb = nfb << 12;
      nleft = x.size(1) - inb;
      b_x = x.size(1);
      c_x = x.reshape(b_x);
      y = sumColumnB4(c_x, 1);
      if (nfb >= 2) {
        b_x = x.size(1);
      }
      for (int32_T ib{2}; ib <= nfb; ib++) {
        c_x = x.reshape(b_x);
        y += sumColumnB4(c_x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        b_x = x.size(1);
        c_x = x.reshape(b_x);
        f_st.site = &yb_emlrtRSI;
        y += sumColumnB(&f_st, c_x, nleft, inb + 1);
      }
    }
  }
  return y;
}

real_T b_sum(const real_T x[3])
{
  return sumColumnB(x);
}

real_T c_sum(const real_T x[6])
{
  return b_sumColumnB(x);
}

real_T d_sum(const real_T x[2])
{
  return c_sumColumnB(x);
}

real_T sum(const emlrtStack *sp, const ::coder::array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ob_emlrtRSI;
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
  b_st.site = &tb_emlrtRSI;
  c_st.site = &ub_emlrtRSI;
  if (x.size(0) == 0) {
    y = 0.0;
  } else {
    d_st.site = &vb_emlrtRSI;
    e_st.site = &wb_emlrtRSI;
    if (x.size(0) < 4096) {
      f_st.site = &xb_emlrtRSI;
      y = sumColumnB(&f_st, x, x.size(0));
    } else {
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = static_cast<int32_T>(static_cast<uint32_T>(x.size(0)) >> 12);
      inb = nfb << 12;
      nleft = x.size(0) - inb;
      y = sumColumnB4(x, 1);
      for (int32_T ib{2}; ib <= nfb; ib++) {
        y += sumColumnB4(x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        f_st.site = &yb_emlrtRSI;
        y += sumColumnB(&f_st, x, nleft, inb + 1);
      }
    }
  }
  return y;
}

real_T sum(const emlrtStack *sp, const ::coder::array<real_T, 2U> &x)
{
  array<real_T, 1U> c_x;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ob_emlrtRSI;
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
  b_st.site = &pb_emlrtRSI;
  c_st.site = &qb_emlrtRSI;
  d_st.site = &rb_emlrtRSI;
  e_st.site = &sb_emlrtRSI;
  f_st.site = &tb_emlrtRSI;
  g_st.site = &ub_emlrtRSI;
  if (x.size(0) * 3 == 0) {
    y = 0.0;
  } else {
    int32_T nleft;
    h_st.site = &vb_emlrtRSI;
    i_st.site = &wb_emlrtRSI;
    nleft = x.size(0) * 3;
    if (nleft < 4096) {
      int32_T b_x;
      b_x = x.size(0) * 3;
      c_x = x.reshape(b_x);
      j_st.site = &xb_emlrtRSI;
      y = sumColumnB(&j_st, c_x, nleft);
    } else {
      int32_T b_x;
      int32_T inb;
      int32_T nfb;
      nfb = nleft / 4096;
      inb = nfb << 12;
      nleft -= inb;
      b_x = x.size(0) * 3;
      c_x = x.reshape(b_x);
      y = sumColumnB4(c_x, 1);
      if (nfb >= 2) {
        b_x = x.size(0) * 3;
      }
      for (int32_T ib{2}; ib <= nfb; ib++) {
        c_x = x.reshape(b_x);
        y += sumColumnB4(c_x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        b_x = x.size(0) * 3;
        c_x = x.reshape(b_x);
        j_st.site = &yb_emlrtRSI;
        y += sumColumnB(&j_st, c_x, nleft, inb + 1);
      }
    }
  }
  return y;
}

real_T sum(const real_T x[3])
{
  return sumColumnB(x);
}

} // namespace coder

// End of code generation (sum.cpp)
