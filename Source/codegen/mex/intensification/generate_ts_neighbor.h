//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// generate_ts_neighbor.h
//
// Code generation for function 'generate_ts_neighbor'
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

struct struct1_T;

struct struct2_T;

// Function Declarations
void generate_ts_neighbor(const emlrtStack *sp, const struct0_T *sol_info,
                          const struct1_T *data, const struct2_T *param_pen,
                          const coder::array<int16_T, 2U> &tabu_list,
                          const coder::array<real_T, 2U> &frequency,
                          real_T b_div, struct0_T *neighbor,
                          int16_T arc_del_data[], int32_T arc_del_size[2],
                          real_T route_ind_data[], int32_T route_ind_size[2]);

// End of code generation (generate_ts_neighbor.h)
