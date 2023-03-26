//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// myismember.h
//
// Code generation for function 'myismember'
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
boolean_T b_myismember(const emlrtStack *sp, const int16_T a[8],
                       const coder::array<int16_T, 2U> &b);

boolean_T c_myismember(const emlrtStack *sp, const int16_T a[4],
                       const coder::array<int16_T, 2U> &b);

boolean_T myismember(const emlrtStack *sp, const int16_T a[6],
                     const coder::array<int16_T, 2U> &b);

// End of code generation (myismember.h)
