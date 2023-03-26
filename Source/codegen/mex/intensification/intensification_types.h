//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// intensification_types.h
//
// Code generation for function 'intensification'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#define MAX_THREADS omp_get_max_threads()

// Type Definitions
struct struct2_T {
  real_T alpha_0;
  real_T beta_0;
  real_T alpha_min;
  real_T beta_min;
  real_T alpha_max;
  real_T beta_max;
  real_T delta;
  real_T eta_pen;
  real_T pool_size;
};

struct struct3_T {
  int16_T theta_min;
  int16_T theta_max;
  real_T lambda_div;
  real_T eta_tabu;
};

struct struct0_T {
  coder::array<int16_T, 2U> routes;
  coder::array<real_T, 2U> a_r_time;
  coder::array<real_T, 2U> a_c_time;
  coder::array<real_T, 2U> z_r_time;
  coder::array<real_T, 2U> z_c_time;
  coder::array<real_T, 2U> tw_forward;
  coder::array<real_T, 2U> tw_backward;
  coder::array<real_T, 1U> payload;
  coder::array<real_T, 2U> cost;
};

struct struct1_T {
  coder::array<real_T, 2U> coord;
  coder::array<real_T, 1U> dmd;
  coder::array<real_T, 2U> tw;
  coder::array<real_T, 1U> st;
  coder::array<real_T, 2U> dist;
  real_T cap;
  int8_T vnum;
  coder::array<boolean_T, 2U> arc;
};

// End of code generation (intensification_types.h)
