//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// calculate_time.h
//
// Code generation for function 'calculate_time'
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
void calculate_time(
    const emlrtStack *sp, const coder::array<int16_T, 2U> &routes,
    const coder::array<real_T, 2U> &data_tw,
    const coder::array<real_T, 1U> &data_st,
    const coder::array<real_T, 2U> &data_dist, const real_T route_ind_data[],
    const int32_T route_ind_size[2], coder::array<real_T, 2U> &a_r_time,
    coder::array<real_T, 2U> &a_c_time, coder::array<real_T, 2U> &z_r_time,
    coder::array<real_T, 2U> &z_c_time, coder::array<real_T, 2U> &tw_forward,
    coder::array<real_T, 2U> &tw_backward);

// End of code generation (calculate_time.h)
