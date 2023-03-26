//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ts_intro_exchanging.h
//
// Code generation for function 'ts_intro_exchanging'
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
void ts_intro_exchanging(const emlrtStack *sp, struct0_T *sol_info,
                         const coder::array<real_T, 1U> &data_dmd,
                         const coder::array<real_T, 2U> &data_tw,
                         const coder::array<real_T, 1U> &data_st,
                         const coder::array<real_T, 2U> &data_dist,
                         int8_T data_vnum,
                         const coder::array<boolean_T, 2U> &data_arc,
                         real_T param_pen_beta_0, real_T param_pen_pool_size,
                         const coder::array<int16_T, 2U> &tabu_list,
                         const coder::array<real_T, 2U> &frequency,
                         real_T b_div, real_T *best_total_cost,
                         int16_T best_del[8], real_T *best_ind);

// End of code generation (ts_intro_exchanging.h)
