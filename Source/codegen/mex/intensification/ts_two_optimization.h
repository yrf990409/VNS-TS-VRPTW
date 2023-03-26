//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ts_two_optimization.h
//
// Code generation for function 'ts_two_optimization'
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

struct struct2_T;

// Function Declarations
void ts_two_optimization(const emlrtStack *sp, const struct0_T *sol_info,
                         const coder::array<real_T, 1U> &data_dmd,
                         const coder::array<real_T, 1U> &data_st,
                         const coder::array<real_T, 2U> &data_dist,
                         real_T data_cap, int8_T data_vnum,
                         const coder::array<boolean_T, 2U> &data_arc,
                         const struct2_T *param_pen,
                         const coder::array<int16_T, 2U> &tabu_list,
                         const coder::array<real_T, 2U> &frequency,
                         real_T b_div, struct0_T *best_neighbor,
                         real_T *best_total_cost, int16_T best_del[4],
                         real_T best_ind[2]);

// End of code generation (ts_two_optimization.h)
