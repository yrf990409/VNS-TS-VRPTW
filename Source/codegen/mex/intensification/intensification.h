//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// intensification.h
//
// Code generation for function 'intensification'
//

#pragma once

// Include files
#include "intensification_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
emlrtCTX emlrtGetRootTLSGlobal();

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

void intensification(const emlrtStack *sp, struct0_T *sol_info,
                     const struct1_T *data, struct2_T *param_pen,
                     const struct3_T *param_ts,
                     coder::array<int16_T, 2U> &tabu_list,
                     struct0_T *best_sol_info, struct2_T *new_param_pen,
                     coder::array<int16_T, 2U> &new_tabu_list);

// End of code generation (intensification.h)
