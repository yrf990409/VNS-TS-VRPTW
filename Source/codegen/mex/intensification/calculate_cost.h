//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// calculate_cost.h
//
// Code generation for function 'calculate_cost'
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

// Type Declarations
struct struct0_T;

// Function Declarations
void calculate_cost(const emlrtStack *sp, const struct0_T *sol_info,
                    real_T param_pen_alpha_0, real_T param_pen_beta_0,
                    const coder::array<real_T, 1U> &data_dmd,
                    const coder::array<real_T, 2U> &data_dist, real_T data_cap,
                    coder::array<real_T, 2U> &general_cost);

// End of code generation (calculate_cost.h)
