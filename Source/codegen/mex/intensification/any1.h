//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// any1.h
//
// Code generation for function 'any1'
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
boolean_T any(const emlrtStack *sp, const ::coder::array<boolean_T, 1U> &x);

void b_any(const emlrtStack *sp, const ::coder::array<boolean_T, 2U> &x,
           ::coder::array<boolean_T, 2U> &y);

} // namespace coder

// End of code generation (any1.h)
