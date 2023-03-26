//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// calculate_diversity.h
//
// Code generation for function 'calculate_diversity'
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
real_T calculate_diversity(const emlrtStack *sp,
                           const coder::array<int16_T, 3U> &routes,
                           real_T b_div, real_T total_distance, real_T cus_num,
                           int8_T v_num,
                           const coder::array<real_T, 2U> &frequency);

// End of code generation (calculate_diversity.h)
