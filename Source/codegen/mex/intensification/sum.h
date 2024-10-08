//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sum.h
//
// Code generation for function 'sum'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
real_T b_sum(const emlrtStack *sp, const ::coder::array<real_T, 2U> &x);

real_T b_sum(const real_T x[3]);

real_T c_sum(const real_T x[6]);

real_T d_sum(const real_T x[2]);

real_T sum(const emlrtStack *sp, const ::coder::array<real_T, 1U> &x);

real_T sum(const emlrtStack *sp, const ::coder::array<real_T, 2U> &x);

real_T sum(const real_T x[3]);

} // namespace coder

// End of code generation (sum.h)
