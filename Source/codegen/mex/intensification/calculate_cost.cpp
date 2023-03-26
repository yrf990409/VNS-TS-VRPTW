//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// calculate_cost.cpp
//
// Code generation for function 'calculate_cost'
//

// Include files
#include "calculate_cost.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "intensification_data.h"
#include "intensification_types.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ug_emlrtRSI{
    12,               // lineNo
    "calculate_cost", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pathName
};

static emlrtRSInfo vg_emlrtRSI{
    13,               // lineNo
    "calculate_cost", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pathName
};

static emlrtRSInfo wg_emlrtRSI{
    14,               // lineNo
    "calculate_cost", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pathName
};

static emlrtRSInfo xg_emlrtRSI{
    15,               // lineNo
    "calculate_cost", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pathName
};

static emlrtRSInfo yg_emlrtRSI{
    18,               // lineNo
    "calculate_cost", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pathName
};

static emlrtRSInfo ah_emlrtRSI{
    21,               // lineNo
    "calculate_cost", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pathName
};

static emlrtRSInfo bh_emlrtRSI{
    36,    // lineNo
    "cat", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

static emlrtRSInfo dh_emlrtRSI{
    16,        // lineNo
    "sub2ind", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" // pathName
};

static emlrtRSInfo eh_emlrtRSI{
    40,            // lineNo
    "eml_sub2ind", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" // pathName
};

static emlrtRSInfo fh_emlrtRSI{
    72,        // lineNo
    "prodsub", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" // pathName
};

static emlrtRSInfo ih_emlrtRSI{
    15,    // lineNo
    "max", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/max.m" // pathName
};

static emlrtRSInfo jh_emlrtRSI{
    44,         // lineNo
    "minOrMax", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

static emlrtRSInfo kh_emlrtRSI{
    79,        // lineNo
    "maximum", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

static emlrtRSInfo lh_emlrtRSI{
    190,             // lineNo
    "unaryMinOrMax", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pathName
};

static emlrtRSInfo mh_emlrtRSI{
    901,                    // lineNo
    "maxRealVectorOmitNaN", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pathName
};

static emlrtRTEInfo i_emlrtRTEI{
    28,              // lineNo
    27,              // colNo
    "unaryMinOrMax", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    42,            // lineNo
    19,            // colNo
    "eml_sub2ind", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    32,            // lineNo
    23,            // colNo
    "eml_sub2ind", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" // pName
};

static emlrtBCInfo qt_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    21,                    // lineNo
    68,                    // colNo
    "sol_info.tw_forward", // aName
    "calculate_cost",      // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m", // pName
    0                  // checkKind
};

static emlrtBCInfo rt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    13,               // lineNo
    25,               // colNo
    "route",          // aName
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m", // pName
    0                  // checkKind
};

static emlrtBCInfo st_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    13,               // lineNo
    23,               // colNo
    "route",          // aName
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m", // pName
    0                  // checkKind
};

static emlrtBCInfo tt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    12,               // lineNo
    27,               // colNo
    "route",          // aName
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ut_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    12,               // lineNo
    25,               // colNo
    "route",          // aName
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m", // pName
    0                  // checkKind
};

static emlrtBCInfo vt_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    11,                // lineNo
    29,                // colNo
    "sol_info.routes", // aName
    "calculate_cost",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m", // pName
    0                  // checkKind
};

static emlrtBCInfo wt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    15,               // lineNo
    39,               // colNo
    "data.dist",      // aName
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m", // pName
    0                  // checkKind
};

static emlrtBCInfo xt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    15,               // lineNo
    18,               // colNo
    "general_cost",   // aName
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m", // pName
    0                  // checkKind
};

static emlrtBCInfo yt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    18,               // lineNo
    63,               // colNo
    "data.dmd",       // aName
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m", // pName
    0                  // checkKind
};

static emlrtBCInfo au_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    18,               // lineNo
    18,               // colNo
    "general_cost",   // aName
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m", // pName
    0                  // checkKind
};

static emlrtBCInfo bu_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    21,               // lineNo
    18,               // colNo
    "general_cost",   // aName
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m", // pName
    0                  // checkKind
};

static emlrtRTEInfo mh_emlrtRTEI{
    7,                // lineNo
    1,                // colNo
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pName
};

static emlrtRTEInfo nh_emlrtRTEI{
    12,               // lineNo
    5,                // colNo
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pName
};

static emlrtRTEInfo oh_emlrtRTEI{
    12,               // lineNo
    11,               // colNo
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pName
};

static emlrtRTEInfo ph_emlrtRTEI{
    13,               // lineNo
    5,                // colNo
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pName
};

static emlrtRTEInfo qh_emlrtRTEI{
    14,               // lineNo
    5,                // colNo
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pName
};

static emlrtRTEInfo rh_emlrtRTEI{
    15,               // lineNo
    29,               // colNo
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pName
};

static emlrtRTEInfo sh_emlrtRTEI{
    18,               // lineNo
    54,               // colNo
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pName
};

static emlrtRTEInfo th_emlrtRTEI{
    21,               // lineNo
    48,               // colNo
    "calculate_cost", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_cost.m" // pName
};

// Function Definitions
void calculate_cost(const emlrtStack *sp, const struct0_T *sol_info,
                    real_T param_pen_alpha_0, real_T param_pen_beta_0,
                    const coder::array<real_T, 1U> &data_dmd,
                    const coder::array<real_T, 2U> &data_dist, real_T data_cap,
                    coder::array<real_T, 2U> &general_cost)
{
  coder::array<real_T, 2U> c_data_dist;
  coder::array<real_T, 2U> dist_ind;
  coder::array<real_T, 1U> c_data_dmd;
  coder::array<int16_T, 2U> dist_sub;
  coder::array<int16_T, 2U> route;
  coder::array<boolean_T, 2U> r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  int32_T varargin_2[2];
  int32_T b_data_dist;
  int32_T b_data_dmd;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T idx;
  int32_T last;
  int32_T loop_ub;
  int32_T siz_idx_0;
  int32_T siz_idx_1;
  boolean_T b;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // CALCULATE_COST 计算广义成本
  //  general_cost [距离, 容量, 时间, 多样性(0)]
  //  初始化
  general_cost.set_size(&mh_emlrtRTEI, sp, sol_info->routes.size(0), 3);
  idx = sol_info->routes.size(0) * 3;
  for (i = 0; i < idx; i++) {
    general_cost[i] = 0.0;
  }
  i = sol_info->routes.size(0);
  if (sol_info->routes.size(0) - 1 >= 0) {
    if (sol_info->routes.size(1) - 1 < 2) {
      i1 = 0;
      i2 = 0;
    } else {
      if (sol_info->routes.size(1) < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, sol_info->routes.size(1),
                                      &ut_emlrtBCI, (emlrtConstCTX)sp);
      }
      i1 = 1;
      if ((sol_info->routes.size(1) - 1 < 1) ||
          (sol_info->routes.size(1) - 1 > sol_info->routes.size(1))) {
        emlrtDynamicBoundsCheckR2012b(sol_info->routes.size(1) - 1, 1,
                                      sol_info->routes.size(1), &tt_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i2 = sol_info->routes.size(1) - 1;
    }
    loop_ub = sol_info->routes.size(1);
    b_loop_ub = i2 - i1;
    varargin_2[0] = 1;
    b_data_dist = data_dist.size(0) * data_dist.size(1);
    b_data_dmd = data_dmd.size(0);
    c_loop_ub = sol_info->tw_forward.size(1);
    b = true;
    last = sol_info->tw_forward.size(1);
    siz_idx_0 = data_dist.size(0);
    siz_idx_1 = data_dist.size(1);
  }
  for (int32_T b_i{0}; b_i < i; b_i++) {
    real_T varargin_1[2];
    real_T ex;
    real_T maxval;
    int32_T iv[2];
    int32_T d_loop_ub;
    int32_T i3;
    int32_T i4;
    int32_T k;
    boolean_T exitg1;
    boolean_T p;
    //  计算距离
    if (b_i + 1 > sol_info->routes.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->routes.size(0),
                                    &vt_emlrtBCI, (emlrtConstCTX)sp);
    }
    route.set_size(&nh_emlrtRTEI, sp, 1, sol_info->routes.size(1));
    for (i3 = 0; i3 < loop_ub; i3++) {
      route[i3] = sol_info->routes[b_i + sol_info->routes.size(0) * i3];
    }
    i3 = i2 - i1;
    r.set_size(&oh_emlrtRTEI, sp, 1, i3 + 2);
    r[0] = false;
    for (i4 = 0; i4 < b_loop_ub; i4++) {
      r[i4 + 1] =
          (sol_info->routes[b_i + sol_info->routes.size(0) * (i1 + i4)] == 0);
    }
    r[i3 + 1] = false;
    st.site = &ug_emlrtRSI;
    coder::internal::nullAssignment(&st, route, r);
    if (route.size(1) - 1 < 1) {
      idx = 0;
    } else {
      if (route.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, route.size(1), &st_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((route.size(1) - 1 < 1) || (route.size(1) - 1 > route.size(1))) {
        emlrtDynamicBoundsCheckR2012b(route.size(1) - 1, 1, route.size(1),
                                      &rt_emlrtBCI, (emlrtConstCTX)sp);
      }
      idx = route.size(1) - 1;
    }
    if (route.size(1) < 2) {
      i3 = 0;
      i4 = 0;
    } else {
      i3 = 1;
      i4 = route.size(1);
    }
    st.site = &vg_emlrtRSI;
    b_st.site = &bh_emlrtRSI;
    c_st.site = &ch_emlrtRSI;
    d_loop_ub = i4 - i3;
    if (d_loop_ub != idx) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    dist_sub.set_size(&ph_emlrtRTEI, sp, 2, idx);
    for (i4 = 0; i4 < idx; i4++) {
      k = route[i4] + 1;
      if (k > 32767) {
        k = 32767;
      }
      dist_sub[2 * i4] = static_cast<int16_T>(k);
    }
    for (i4 = 0; i4 < d_loop_ub; i4++) {
      k = route[i3 + i4] + 1;
      if (k > 32767) {
        k = 32767;
      }
      dist_sub[2 * i4 + 1] = static_cast<int16_T>(k);
    }
    st.site = &wg_emlrtRSI;
    b_st.site = &dh_emlrtRSI;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= dist_sub.size(1) - 1)) {
      if ((dist_sub[2 * k] >= 1) && (dist_sub[2 * k] <= siz_idx_0)) {
        k++;
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &p_emlrtRTEI,
                                      "MATLAB:sub2ind:IndexOutOfRange",
                                      "MATLAB:sub2ind:IndexOutOfRange", 0);
      }
    }
    varargin_1[0] = 1.0;
    varargin_1[1] = (static_cast<real_T>(dist_sub.size(1)) - 1.0) + 1.0;
    varargin_2[1] = dist_sub.size(1);
    p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (static_cast<int32_T>(varargin_1[k]) != varargin_2[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (!p) {
      emlrtErrorWithMessageIdR2018a(&b_st, &q_emlrtRTEI,
                                    "MATLAB:sub2ind:SubscriptVectorSize",
                                    "MATLAB:sub2ind:SubscriptVectorSize", 0);
    }
    c_st.site = &eh_emlrtRSI;
    d_st.site = &fh_emlrtRSI;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= dist_sub.size(1) - 1)) {
      if ((dist_sub[2 * k + 1] >= 1) && (dist_sub[2 * k + 1] <= siz_idx_1)) {
        k++;
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &p_emlrtRTEI,
                                      "MATLAB:sub2ind:IndexOutOfRange",
                                      "MATLAB:sub2ind:IndexOutOfRange", 0);
      }
    }
    dist_ind.set_size(&qh_emlrtRTEI, &st, 1, dist_sub.size(1));
    idx = dist_sub.size(1);
    for (i3 = 0; i3 < idx; i3++) {
      dist_ind[i3] = dist_sub[2 * i3] + siz_idx_0 * (dist_sub[2 * i3 + 1] - 1);
    }
    int32_T iv1[2];
    iv[0] =
        (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&data_dist)->size())[0];
    iv[1] =
        (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&data_dist)->size())[1];
    iv1[0] = (*(int32_T(*)[2])dist_ind.size())[0];
    iv1[1] = (*(int32_T(*)[2])dist_ind.size())[1];
    st.site = &xg_emlrtRSI;
    coder::internal::indexShapeCheck(&st, iv, iv1);
    c_data_dist.set_size(&rh_emlrtRTEI, sp, 1, dist_ind.size(1));
    idx = dist_ind.size(1);
    for (i3 = 0; i3 < idx; i3++) {
      i4 = static_cast<int32_T>(dist_ind[i3]);
      if ((i4 < 1) || (i4 > b_data_dist)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(dist_ind[i3]), 1,
                                      b_data_dist, &wt_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      c_data_dist[i3] = data_dist[i4 - 1];
    }
    if (b_i + 1 > general_cost.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, general_cost.size(0),
                                    &xt_emlrtBCI, (emlrtConstCTX)sp);
    }
    st.site = &xg_emlrtRSI;
    general_cost[b_i] = coder::b_sum(&st, c_data_dist);
    //  每辆车的距离 cost(1)
    //  计算容量惩罚
    iv[0] = (*(int32_T(*)[2])route.size())[0];
    iv[1] = (*(int32_T(*)[2])route.size())[1];
    st.site = &yg_emlrtRSI;
    coder::internal::indexShapeCheck(&st, data_dmd.size(0), iv);
    c_data_dmd.set_size(&sh_emlrtRTEI, sp, route.size(1));
    idx = route.size(1);
    for (i3 = 0; i3 < idx; i3++) {
      i4 = route[i3] + 1;
      if (i4 > 32767) {
        i4 = 32767;
      }
      if ((i4 < 1) || (i4 > b_data_dmd)) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, b_data_dmd, &yt_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      c_data_dmd[i3] = data_dmd[i4 - 1];
    }
    emlrtStack *r1;
    st.site = &yg_emlrtRSI;
    r1 = &st;
    maxval = coder::sum(r1, c_data_dmd);
    varargin_1[0] = maxval - data_cap;
    if ((varargin_1[0] < 0.0) || muDoubleScalarIsNaN(varargin_1[0])) {
      maxval = 0.0;
    } else {
      maxval = varargin_1[0];
    }
    if (b_i + 1 > general_cost.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, general_cost.size(0),
                                    &au_emlrtBCI, &st);
    }
    general_cost[b_i + general_cost.size(0)] = param_pen_alpha_0 * maxval;
    //  计算时间惩罚
    b_st.site = &ah_emlrtRSI;
    if (b_i + 1 > sol_info->tw_forward.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->tw_forward.size(0),
                                    &qt_emlrtBCI, &b_st);
    }
    dist_ind.set_size(&th_emlrtRTEI, &b_st, 1, sol_info->tw_forward.size(1));
    for (i3 = 0; i3 < c_loop_ub; i3++) {
      dist_ind[i3] =
          sol_info->tw_forward[b_i + sol_info->tw_forward.size(0) * i3];
    }
    c_st.site = &ih_emlrtRSI;
    d_st.site = &jh_emlrtRSI;
    e_st.site = &kh_emlrtRSI;
    if (!b) {
      emlrtErrorWithMessageIdR2018a(&e_st, &i_emlrtRTEI,
                                    "Coder:toolbox:autoDimIncompatibility",
                                    "Coder:toolbox:autoDimIncompatibility", 0);
    }
    if (sol_info->tw_forward.size(1) < 1) {
      emlrtErrorWithMessageIdR2018a(
          &e_st, &j_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    f_st.site = &lh_emlrtRSI;
    g_st.site = &mh_emlrtRSI;
    if (sol_info->tw_forward.size(1) <= 2) {
      if (sol_info->tw_forward.size(1) == 1) {
        ex = sol_info->tw_forward[b_i];
      } else if ((sol_info->tw_forward[b_i] <
                  sol_info->tw_forward[b_i + sol_info->tw_forward.size(0) *
                                                 (sol_info->tw_forward.size(1) -
                                                  1)]) ||
                 (muDoubleScalarIsNaN(sol_info->tw_forward[b_i]) &&
                  (!muDoubleScalarIsNaN(
                      sol_info
                          ->tw_forward[b_i + sol_info->tw_forward.size(0) *
                                                 (sol_info->tw_forward.size(1) -
                                                  1)])))) {
        ex = sol_info->tw_forward[b_i + sol_info->tw_forward.size(0) *
                                            (sol_info->tw_forward.size(1) - 1)];
      } else {
        ex = sol_info->tw_forward[b_i];
      }
    } else {
      h_st.site = &pc_emlrtRSI;
      if (!muDoubleScalarIsNaN(sol_info->tw_forward[b_i])) {
        idx = 1;
      } else {
        idx = 0;
        i_st.site = &qc_emlrtRSI;
        if (sol_info->tw_forward.size(1) > 2147483646) {
          j_st.site = &p_emlrtRSI;
          coder::check_forloop_overflow_error(&j_st);
        }
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k <= last)) {
          if (!muDoubleScalarIsNaN(dist_ind[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }
      if (idx == 0) {
        ex = sol_info->tw_forward[b_i];
      } else {
        h_st.site = &oc_emlrtRSI;
        ex = sol_info
                 ->tw_forward[b_i + sol_info->tw_forward.size(0) * (idx - 1)];
        d_loop_ub = idx + 1;
        i_st.site = &rc_emlrtRSI;
        if ((idx + 1 <= sol_info->tw_forward.size(1)) &&
            (sol_info->tw_forward.size(1) > 2147483646)) {
          j_st.site = &p_emlrtRSI;
          coder::check_forloop_overflow_error(&j_st);
        }
        for (k = d_loop_ub; k <= last; k++) {
          maxval = dist_ind[k - 1];
          if (ex < maxval) {
            ex = maxval;
          }
        }
      }
    }
    if (b_i + 1 > general_cost.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, general_cost.size(0),
                                    &bu_emlrtBCI, &st);
    }
    general_cost[b_i + general_cost.size(0) * 2] = param_pen_beta_0 * ex;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (calculate_cost.cpp)
