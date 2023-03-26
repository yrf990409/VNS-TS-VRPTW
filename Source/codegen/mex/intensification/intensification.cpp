//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// intensification.cpp
//
// Code generation for function 'intensification'
//

// Include files
#include "intensification.h"
#include "any1.h"
#include "calculate_cost.h"
#include "calculate_time.h"
#include "eml_int_forloop_overflow_check.h"
#include "generate_ts_neighbor.h"
#include "intensification_data.h"
#include "intensification_types.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "update_frequency.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include "omp.h"

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    15,                // lineNo
    "intensification", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    23,                // lineNo
    "intensification", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    24,                // lineNo
    "intensification", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    28,                // lineNo
    "intensification", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    38,                // lineNo
    "intensification", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    71,                // lineNo
    "intensification", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    73,                // lineNo
    "intensification", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    80,                // lineNo
    "intensification", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    83,                // lineNo
    "intensification", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pathName
};

static emlrtRSInfo rg_emlrtRSI{
    10,             // lineNo
    "jdg_feasible", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/j"
    "dg_feasible.m" // pathName
};

static emlrtRSInfo sg_emlrtRSI{
    17,             // lineNo
    "jdg_feasible", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/j"
    "dg_feasible.m" // pathName
};

static emlrtRSInfo nh_emlrtRSI{
    38,    // lineNo
    "cat", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

static emlrtBCInfo emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    84,                // lineNo
    29,                // colNo
    "temp_tabu",       // aName
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m", // pName
    0                   // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    84,                // lineNo
    27,                // colNo
    "temp_tabu",       // aName
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m", // pName
    0                   // checkKind
};

static emlrtECInfo emlrtECI{
    -1,                // nDims
    68,                // lineNo
    5,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtECInfo b_emlrtECI{
    -1,                // nDims
    60,                // lineNo
    5,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtECInfo c_emlrtECI{
    -1,                // nDims
    58,                // lineNo
    5,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtECInfo d_emlrtECI{
    -1,                // nDims
    50,                // lineNo
    5,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtECInfo e_emlrtECI{
    -1,                // nDims
    33,                // lineNo
    6,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtECInfo f_emlrtECI{
    -1,                // nDims
    32,                // lineNo
    6,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtECInfo g_emlrtECI{
    -1,                // nDims
    31,                // lineNo
    6,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtECInfo h_emlrtECI{
    -1,                // nDims
    30,                // lineNo
    6,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtECInfo i_emlrtECI{
    -1,                // nDims
    29,                // lineNo
    6,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtECInfo j_emlrtECI{
    -1,                // nDims
    28,                // lineNo
    6,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtBCInfo c_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    25,                // lineNo
    69,                // colNo
    "tabu_list",       // aName
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m", // pName
    0                   // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    25,                // lineNo
    67,                // colNo
    "tabu_list",       // aName
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m", // pName
    0                   // checkKind
};

static emlrtRTEInfo c_emlrtRTEI{
    20,                // lineNo
    9,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtBCInfo e_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    28,                       // lineNo
    29,                       // colNo
    "best_neighbor.a_r_time", // aName
    "intensification",        // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m", // pName
    0                   // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    29,                       // lineNo
    29,                       // colNo
    "best_neighbor.a_c_time", // aName
    "intensification",        // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m", // pName
    0                   // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    30,                       // lineNo
    29,                       // colNo
    "best_neighbor.z_r_time", // aName
    "intensification",        // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m", // pName
    0                   // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    31,                       // lineNo
    29,                       // colNo
    "best_neighbor.z_c_time", // aName
    "intensification",        // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m", // pName
    0                   // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    32,                         // lineNo
    31,                         // colNo
    "best_neighbor.tw_forward", // aName
    "intensification",          // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m", // pName
    0                   // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    33,                          // lineNo
    32,                          // colNo
    "best_neighbor.tw_backward", // aName
    "intensification",           // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m", // pName
    0                   // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    84,                // lineNo
    48,                // colNo
    "temp_tabu",       // aName
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m", // pName
    0                   // checkKind
};

static emlrtRTEInfo x_emlrtRTEI{
    15,                // lineNo
    1,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    25,                // lineNo
    57,                // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    10,             // lineNo
    12,             // colNo
    "jdg_feasible", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/j"
    "dg_feasible.m" // pName
};

static emlrtRTEInfo bb_emlrtRTEI{
    17,             // lineNo
    8,              // colNo
    "jdg_feasible", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/j"
    "dg_feasible.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    50,                // lineNo
    31,                // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    58,                // lineNo
    31,                // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    60,                // lineNo
    31,                // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    68,                // lineNo
    31,                // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtRTEInfo gb_emlrtRTEI{
    83,                // lineNo
    5,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtRTEInfo hb_emlrtRTEI{
    84,                // lineNo
    5,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

static emlrtRTEInfo ib_emlrtRTEI{
    89,                // lineNo
    1,                 // colNo
    "intensification", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/i"
    "ntensification.m" // pName
};

// Function Definitions
emlrtCTX emlrtGetRootTLSGlobal()
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

void intensification(const emlrtStack *sp, struct0_T *sol_info,
                     const struct1_T *data, struct2_T *param_pen,
                     const struct3_T *param_ts,
                     coder::array<int16_T, 2U> &tabu_list,
                     struct0_T *best_sol_info, struct2_T *new_param_pen,
                     coder::array<int16_T, 2U> &new_tabu_list)
{
  coder::array<real_T, 2U> frequency;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> r1;
  coder::array<real_T, 2U> r2;
  coder::array<real_T, 2U> r3;
  coder::array<real_T, 2U> r4;
  coder::array<real_T, 2U> r5;
  coder::array<real_T, 1U> r6;
  coder::array<int16_T, 2U> b_tabu_list;
  coder::array<int16_T, 2U> temp_tabu;
  coder::array<boolean_T, 2U> b_sol_info;
  coder::array<boolean_T, 2U> x;
  coder::array<boolean_T, 1U> c_sol_info;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  struct0_T b_best_neighbor;
  struct0_T best_neighbor;
  real_T change_route_ind_data[2];
  real_T count_cap;
  real_T count_time;
  int32_T best_del_size[2];
  int32_T change_route_ind_size[2];
  int32_T sizes[2];
  int32_T i;
  int32_T loop_ub;
  int16_T best_del_data[8];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  禁忌搜索强化扰动后的解
  //  初始化
  //  客户的数目
  //  sol_info.cost = calculate_cost(sol_info, param_pen, data);
  //  使用的车辆数
  //  先计算sol_info的广义成本
  *best_sol_info = *sol_info;
  //  记录搜索到的最佳解
  //  初始化频率
  frequency.set_size(&x_emlrtRTEI, sp, sol_info->routes.size(0),
                     data->dmd.size(0));
  loop_ub = sol_info->routes.size(0) * data->dmd.size(0);
  for (i = 0; i < loop_ub; i++) {
    frequency[i] = 0.0;
  }
  st.site = &emlrtRSI;
  update_frequency(&st, frequency, sol_info->routes);
  //  进入禁忌搜索迭代
  count_time = 0.0;
  count_cap = 0.0;
  i = static_cast<int32_T>(param_ts->eta_tabu);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, param_ts->eta_tabu, mxDOUBLE_CLASS,
                                static_cast<int32_T>(param_ts->eta_tabu),
                                &c_emlrtRTEI, (emlrtConstCTX)sp);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    real_T a;
    int32_T tmp_data[2];
    int32_T b_loop_ub;
    int32_T i1;
    int32_T i3;
    int32_T sizes_idx_0;
    int32_T tmp_size_tmp;
    int16_T i2;
    int8_T i4;
    boolean_T b;
    boolean_T exitg1;
    boolean_T y;
    //  生成最佳的邻域
    //  随机禁忌长度
    st.site = &b_emlrtRSI;
    a = coder::b_rand();
    i1 = param_ts->theta_max - param_ts->theta_min;
    if (i1 > 32767) {
      i1 = 32767;
    } else if (i1 < -32768) {
      i1 = -32768;
    }
    a = muDoubleScalarRound(a * static_cast<real_T>(i1));
    if (a < 32768.0) {
      if (a >= -32768.0) {
        i2 = static_cast<int16_T>(a);
      } else {
        i2 = MIN_int16_T;
      }
    } else if (a >= 32768.0) {
      i2 = MAX_int16_T;
    } else {
      i2 = 0;
    }
    loop_ub = param_ts->theta_min + i2;
    if (loop_ub > 32767) {
      loop_ub = 32767;
    } else if (loop_ub < -32768) {
      loop_ub = -32768;
    }
    if (loop_ub < 1) {
      loop_ub = 0;
    } else {
      if (tabu_list.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, tabu_list.size(0), &d_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (loop_ub > tabu_list.size(0)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, tabu_list.size(0),
                                      &c_emlrtBCI, (emlrtConstCTX)sp);
      }
    }
    b_tabu_list.set_size(&y_emlrtRTEI, sp, loop_ub, 2);
    for (i1 = 0; i1 < 2; i1++) {
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_tabu_list[i3 + b_tabu_list.size(0) * i1] =
            tabu_list[i3 + tabu_list.size(0) * i1];
      }
    }
    st.site = &c_emlrtRSI;
    generate_ts_neighbor(&st, sol_info, data, param_pen, b_tabu_list, frequency,
                         param_ts->lambda_div, &best_neighbor, best_del_data,
                         best_del_size, change_route_ind_data,
                         change_route_ind_size);
    //  更新这个解的时间相关信息
    st.site = &d_emlrtRSI;
    calculate_time(&st, best_neighbor.routes, data->tw, data->st, data->dist,
                   change_route_ind_data, change_route_ind_size, r, r1, r2, r3,
                   r4, r5);
    tmp_size_tmp = change_route_ind_size[0] * change_route_ind_size[1];
    for (i1 = 0; i1 < tmp_size_tmp; i1++) {
      i3 = static_cast<int32_T>(change_route_ind_data[i1]);
      if ((i3 < 1) || (i3 > best_neighbor.a_r_time.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, best_neighbor.a_r_time.size(0),
                                      &e_emlrtBCI, (emlrtConstCTX)sp);
      }
      tmp_data[i1] = i3 - 1;
    }
    sizes[0] = tmp_size_tmp;
    sizes[1] = best_neighbor.a_r_time.size(1);
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, r.size(), 2, &j_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = r.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = r.size(0);
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        best_neighbor
            .a_r_time[tmp_data[i3] + best_neighbor.a_r_time.size(0) * i1] =
            r[i3 + r.size(0) * i1];
      }
    }
    for (i1 = 0; i1 < tmp_size_tmp; i1++) {
      i3 = static_cast<int32_T>(change_route_ind_data[i1]);
      if ((i3 < 1) || (i3 > best_neighbor.a_c_time.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, best_neighbor.a_c_time.size(0),
                                      &f_emlrtBCI, (emlrtConstCTX)sp);
      }
      tmp_data[i1] = i3 - 1;
    }
    sizes[0] = tmp_size_tmp;
    sizes[1] = best_neighbor.a_c_time.size(1);
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, r1.size(), 2, &i_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = r1.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = r1.size(0);
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        best_neighbor
            .a_c_time[tmp_data[i3] + best_neighbor.a_c_time.size(0) * i1] =
            r1[i3 + r1.size(0) * i1];
      }
    }
    for (i1 = 0; i1 < tmp_size_tmp; i1++) {
      i3 = static_cast<int32_T>(change_route_ind_data[i1]);
      if ((i3 < 1) || (i3 > best_neighbor.z_r_time.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, best_neighbor.z_r_time.size(0),
                                      &g_emlrtBCI, (emlrtConstCTX)sp);
      }
      tmp_data[i1] = i3 - 1;
    }
    sizes[0] = tmp_size_tmp;
    sizes[1] = best_neighbor.z_r_time.size(1);
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, r2.size(), 2, &h_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = r2.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = r2.size(0);
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        best_neighbor
            .z_r_time[tmp_data[i3] + best_neighbor.z_r_time.size(0) * i1] =
            r2[i3 + r2.size(0) * i1];
      }
    }
    for (i1 = 0; i1 < tmp_size_tmp; i1++) {
      i3 = static_cast<int32_T>(change_route_ind_data[i1]);
      if ((i3 < 1) || (i3 > best_neighbor.z_c_time.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, best_neighbor.z_c_time.size(0),
                                      &h_emlrtBCI, (emlrtConstCTX)sp);
      }
      tmp_data[i1] = i3 - 1;
    }
    sizes[0] = tmp_size_tmp;
    sizes[1] = best_neighbor.z_c_time.size(1);
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, r3.size(), 2, &g_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = r3.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = r3.size(0);
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        best_neighbor
            .z_c_time[tmp_data[i3] + best_neighbor.z_c_time.size(0) * i1] =
            r3[i3 + r3.size(0) * i1];
      }
    }
    for (i1 = 0; i1 < tmp_size_tmp; i1++) {
      i3 = static_cast<int32_T>(change_route_ind_data[i1]);
      if ((i3 < 1) || (i3 > best_neighbor.tw_forward.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, best_neighbor.tw_forward.size(0),
                                      &i_emlrtBCI, (emlrtConstCTX)sp);
      }
      tmp_data[i1] = i3 - 1;
    }
    sizes[0] = tmp_size_tmp;
    sizes[1] = best_neighbor.tw_forward.size(1);
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, r4.size(), 2, &f_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = r4.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = r4.size(0);
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        best_neighbor
            .tw_forward[tmp_data[i3] + best_neighbor.tw_forward.size(0) * i1] =
            r4[i3 + r4.size(0) * i1];
      }
    }
    for (i1 = 0; i1 < tmp_size_tmp; i1++) {
      i3 = static_cast<int32_T>(change_route_ind_data[i1]);
      if ((i3 < 1) || (i3 > best_neighbor.tw_backward.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, best_neighbor.tw_backward.size(0),
                                      &j_emlrtBCI, (emlrtConstCTX)sp);
      }
      tmp_data[i1] = i3 - 1;
    }
    sizes[0] = tmp_size_tmp;
    sizes[1] = best_neighbor.tw_backward.size(1);
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, r5.size(), 2, &e_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = r5.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = r5.size(0);
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        best_neighbor.tw_backward[tmp_data[i3] +
                                  best_neighbor.tw_backward.size(0) * i1] =
            r5[i3 + r5.size(0) * i1];
      }
    }
    //  更新惩罚因子
    st.site = &e_emlrtRSI;
    // 判断一个路径方案是否是可行解
    //  可行为true 不可行为false
    //  两项指标 第一个是时间 第二个是容量
    //  初始
    //  时间
    b_st.site = &rg_emlrtRSI;
    b_sol_info.set_size(&ab_emlrtRTEI, &b_st, sol_info->tw_forward.size(0),
                        sol_info->tw_forward.size(1));
    loop_ub = sol_info->tw_forward.size(0) * sol_info->tw_forward.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_sol_info[i1] = (sol_info->tw_forward[i1] > 0.0);
    }
    c_st.site = &rg_emlrtRSI;
    coder::b_any(&c_st, b_sol_info, x);
    c_st.site = &jc_emlrtRSI;
    y = false;
    d_st.site = &gc_emlrtRSI;
    if (x.size(1) > 2147483646) {
      e_st.site = &p_emlrtRSI;
      coder::check_forloop_overflow_error(&e_st);
    }
    tmp_size_tmp = 1;
    exitg1 = false;
    while ((!exitg1) && (tmp_size_tmp <= x.size(1))) {
      if (x[tmp_size_tmp - 1]) {
        y = true;
        exitg1 = true;
      } else {
        tmp_size_tmp++;
      }
    }
    //  容量
    c_sol_info.set_size(&bb_emlrtRTEI, &st, sol_info->payload.size(0));
    loop_ub = sol_info->payload.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_sol_info[i1] = (sol_info->payload[i1] > data->cap);
    }
    b_st.site = &sg_emlrtRSI;
    if (coder::any(&b_st, c_sol_info)) {
      b = false;
    } else {
      b = true;
    }
    if (!y) {
      count_time--;
      //  可行则减少
    } else {
      count_time++;
      //  不可行则增加
    }
    if (b) {
      count_cap--;
    } else {
      count_cap++;
    }
    loop_ub = best_sol_info->cost.size(0);
    r6.set_size(&cb_emlrtRTEI, sp, best_sol_info->cost.size(0));
    for (i1 = 0; i1 < loop_ub; i1++) {
      r6[i1] = best_sol_info->cost[i1 + best_sol_info->cost.size(0) * 2] /
               param_pen->beta_0;
    }
    emlrtSubAssignSizeCheckR2012b(best_sol_info->cost.size(), 1, r6.size(), 1,
                                  &d_emlrtECI, (emlrtCTX)sp);
    loop_ub = r6.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      best_sol_info->cost[i1 + best_sol_info->cost.size(0) * 2] = r6[i1];
    }
    if (count_time > param_pen->eta_pen) {
      a = param_pen->beta_0 * param_pen->delta;
      if ((a > param_pen->beta_max) ||
          (muDoubleScalarIsNaN(a) &&
           (!muDoubleScalarIsNaN(param_pen->beta_max)))) {
        param_pen->beta_0 = param_pen->beta_max;
      } else {
        param_pen->beta_0 = a;
      }
      count_time = 0.0;
    } else if (count_time < -param_pen->eta_pen) {
      a = param_pen->beta_0 / param_pen->delta;
      if ((a < param_pen->beta_min) ||
          (muDoubleScalarIsNaN(a) &&
           (!muDoubleScalarIsNaN(param_pen->beta_min)))) {
        param_pen->beta_0 = param_pen->beta_min;
      } else {
        param_pen->beta_0 = a;
      }
      count_time = 0.0;
    }
    loop_ub = best_sol_info->cost.size(0);
    r6.set_size(&db_emlrtRTEI, sp, best_sol_info->cost.size(0));
    for (i1 = 0; i1 < loop_ub; i1++) {
      r6[i1] = best_sol_info->cost[i1 + best_sol_info->cost.size(0) * 2] *
               param_pen->beta_0;
    }
    emlrtSubAssignSizeCheckR2012b(best_sol_info->cost.size(), 1, r6.size(), 1,
                                  &c_emlrtECI, (emlrtCTX)sp);
    loop_ub = r6.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      best_sol_info->cost[i1 + best_sol_info->cost.size(0) * 2] = r6[i1];
    }
    loop_ub = best_sol_info->cost.size(0);
    r6.set_size(&eb_emlrtRTEI, sp, best_sol_info->cost.size(0));
    for (i1 = 0; i1 < loop_ub; i1++) {
      r6[i1] = best_sol_info->cost[i1 + best_sol_info->cost.size(0)] /
               param_pen->alpha_0;
    }
    emlrtSubAssignSizeCheckR2012b(best_sol_info->cost.size(), 1, r6.size(), 1,
                                  &b_emlrtECI, (emlrtCTX)sp);
    loop_ub = r6.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      best_sol_info->cost[i1 + best_sol_info->cost.size(0)] = r6[i1];
    }
    if (count_cap > param_pen->eta_pen) {
      a = param_pen->alpha_0 * param_pen->delta;
      if ((a > param_pen->alpha_max) ||
          (muDoubleScalarIsNaN(a) &&
           (!muDoubleScalarIsNaN(param_pen->alpha_max)))) {
        param_pen->alpha_0 = param_pen->alpha_max;
      } else {
        param_pen->alpha_0 = a;
      }
      count_cap = 0.0;
    } else if (count_cap < -param_pen->eta_pen) {
      a = param_pen->alpha_0 / param_pen->delta;
      if ((a < param_pen->alpha_min) ||
          (muDoubleScalarIsNaN(a) &&
           (!muDoubleScalarIsNaN(param_pen->alpha_min)))) {
        param_pen->alpha_0 = param_pen->alpha_min;
      } else {
        param_pen->alpha_0 = a;
      }
      count_cap = 0.0;
    }
    loop_ub = best_sol_info->cost.size(0);
    r6.set_size(&fb_emlrtRTEI, sp, best_sol_info->cost.size(0));
    for (i1 = 0; i1 < loop_ub; i1++) {
      r6[i1] = best_sol_info->cost[i1 + best_sol_info->cost.size(0)] *
               param_pen->alpha_0;
    }
    emlrtSubAssignSizeCheckR2012b(best_sol_info->cost.size(), 1, r6.size(), 1,
                                  &emlrtECI, (emlrtCTX)sp);
    loop_ub = r6.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      best_sol_info->cost[i1 + best_sol_info->cost.size(0)] = r6[i1];
    }
    //  更新这个解的成本
    b_best_neighbor = best_neighbor;
    st.site = &f_emlrtRSI;
    calculate_cost(&st, &b_best_neighbor, param_pen->alpha_0, param_pen->beta_0,
                   data->dmd, data->dist, data->cap, best_neighbor.cost);
    st.site = &g_emlrtRSI;
    if (coder::sum(&st, best_neighbor.cost) <=
        coder::sum(&st, best_sol_info->cost)) {
      //  得到了更小成本的解
      *best_sol_info = best_neighbor;
    }
    //  更新频率
    *sol_info = best_neighbor;
    st.site = &h_emlrtRSI;
    update_frequency(&st, frequency, best_neighbor.routes);
    //  更新禁忌表
    st.site = &i_emlrtRSI;
    b_st.site = &nh_emlrtRSI;
    if ((best_del_size[0] != 0) && (best_del_size[1] != 0)) {
      sizes[1] = best_del_size[1];
    } else if (tabu_list.size(0) != 0) {
      sizes[1] = 2;
    } else {
      sizes[1] = 2;
    }
    c_st.site = &ch_emlrtRSI;
    if ((best_del_size[1] != sizes[1]) &&
        ((best_del_size[0] != 0) && (best_del_size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((sizes[1] != 2) && (tabu_list.size(0) != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((best_del_size[0] != 0) && (best_del_size[1] != 0)) {
      i4 = static_cast<int8_T>(best_del_size[0]);
    } else {
      i4 = 0;
    }
    if ((best_del_size[0] != 0) && (best_del_size[1] != 0)) {
      tmp_size_tmp = static_cast<int8_T>(best_del_size[0]);
    } else {
      tmp_size_tmp = 0;
    }
    if (tabu_list.size(0) != 0) {
      sizes_idx_0 = tabu_list.size(0);
    } else {
      sizes_idx_0 = 0;
    }
    if (tabu_list.size(0) != 0) {
      i1 = tabu_list.size(0);
    } else {
      i1 = 0;
    }
    temp_tabu.set_size(&gb_emlrtRTEI, &b_st, i4 + i1, sizes[1]);
    loop_ub = sizes[1];
    b_loop_ub = i4;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        temp_tabu[i3 + temp_tabu.size(0) * i1] =
            best_del_data[i3 + tmp_size_tmp * i1];
      }
    }
    loop_ub = sizes[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i3 = 0; i3 < sizes_idx_0; i3++) {
        temp_tabu[(i3 + i4) + temp_tabu.size(0) * i1] =
            tabu_list[i3 + sizes_idx_0 * i1];
      }
    }
    if (param_ts->theta_max < 1) {
      loop_ub = 0;
    } else {
      if (temp_tabu.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, temp_tabu.size(0), &b_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (param_ts->theta_max > temp_tabu.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(param_ts->theta_max),
                                      1, temp_tabu.size(0), &emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = param_ts->theta_max;
    }
    tabu_list.set_size(&hb_emlrtRTEI, sp, loop_ub, 2);
    for (i1 = 0; i1 < 2; i1++) {
      for (i3 = 0; i3 < loop_ub; i3++) {
        if (i1 + 1 > temp_tabu.size(1)) {
          emlrtDynamicBoundsCheckR2012b(2, 1, temp_tabu.size(1), &k_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        tabu_list[i3 + tabu_list.size(0) * i1] =
            temp_tabu[i3 + temp_tabu.size(0) * i1];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  *new_param_pen = *param_pen;
  //  记录新参数
  new_tabu_list.set_size(&ib_emlrtRTEI, sp, tabu_list.size(0), 2);
  loop_ub = tabu_list.size(0) * 2;
  for (i = 0; i < loop_ub; i++) {
    new_tabu_list[i] = tabu_list[i];
  }
  //  禁忌列表
  //  % payload测试
  //  employ_num = size(sol_info.routes, 1);
  //  temp = zeros(employ_num,1);
  //  for mm = 1:employ_num
  //      % 计算容量惩罚
  //      route = best_sol_info.routes(mm,:);
  //      route([false, route(2:end-1)==0 ,false]) = [];
  //      temp(mm) = sum(data.dmd(route+1));
  //  end
  //  disp('inten')
  //  best_sol_info.payload - temp
  //  if any(abs(best_sol_info.payload - temp) > 0)
  //      warning('?')
  //  end
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (intensification.cpp)
