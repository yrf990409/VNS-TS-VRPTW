//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// update_frequency.h
//
// Code generation for function 'update_frequency'
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
void update_frequency(const emlrtStack *sp, coder::array<real_T, 2U> &frequency,
                      const coder::array<int16_T, 3U> &new_routes);

void update_frequency(const emlrtStack *sp, coder::array<real_T, 2U> &frequency,
                      const coder::array<int16_T, 2U> &new_routes);

// End of code generation (update_frequency.h)
