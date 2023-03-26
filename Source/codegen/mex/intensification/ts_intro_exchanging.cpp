//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ts_intro_exchanging.cpp
//
// Code generation for function 'ts_intro_exchanging'
//

// Include files
#include "ts_intro_exchanging.h"
#include "all.h"
#include "calculate_diversity.h"
#include "eml_int_forloop_overflow_check.h"
#include "intensification_data.h"
#include "intensification_types.h"
#include "myismember.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "squeeze.h"
#include "sum.h"
#include "ts_intro_relocating.h"
#include "update_frequency.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ce_emlrtRSI{
    238,                   // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo de_emlrtRSI{
    236,                   // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo ee_emlrtRSI{
    224,                   // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo fe_emlrtRSI{
    222,                   // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo ge_emlrtRSI{
    177,                   // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo he_emlrtRSI{
    174,                   // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo ie_emlrtRSI{
    167,                   // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo je_emlrtRSI{
    151,                   // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo ke_emlrtRSI{
    148,                   // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo le_emlrtRSI{
    89,                    // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo me_emlrtRSI{
    47,                    // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo ne_emlrtRSI{
    41,                    // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo oe_emlrtRSI{
    37,                    // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo pe_emlrtRSI{
    32,                    // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo qe_emlrtRSI{
    28,                    // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtRSInfo re_emlrtRSI{
    11,                    // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

static emlrtBCInfo dy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    239,                   // lineNo
    29,                    // colNo
    "pool_del",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ey_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    170,                   // lineNo
    26,                    // colNo
    "pool_del",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    238,                   // lineNo
    44,                    // colNo
    "pool_routes",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    230,                   // lineNo
    27,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    221,                   // lineNo
    33,                    // colNo
    "pool_routes",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtECInfo eb_emlrtECI{
    -1,                    // nDims
    169,                   // lineNo
    17,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtBCInfo iy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    169,                   // lineNo
    29,                    // colNo
    "pool_routes",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo w_emlrtRTEI{
    217,                   // lineNo
    9,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtECInfo fb_emlrtECI{
    -1,                    // nDims
    161,                   // lineNo
    13,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtBCInfo jy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    161,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ky_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    161,                   // lineNo
    22,                    // colNo
    "new_rs",              // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ly_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    161,                   // lineNo
    20,                    // colNo
    "new_rs",              // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo my_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    160,                   // lineNo
    20,                    // colNo
    "new_rs",              // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ny_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    131,                   // lineNo
    37,                    // colNo
    "new_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo oy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    130,                   // lineNo
    38,                    // colNo
    "new_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo py_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    105,                   // lineNo
    27,                    // colNo
    "partial_2",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    104,                   // lineNo
    39,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ry_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    104,                   // lineNo
    35,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    103,                   // lineNo
    37,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ty_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    103,                   // lineNo
    35,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    102,                   // lineNo
    37,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    102,                   // lineNo
    35,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    66,                    // lineNo
    29,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    50,                    // lineNo
    36,                    // colNo
    "sol_info.payload",    // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    46,                    // lineNo
    30,                    // colNo
    "sol_info.cost",       // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtECInfo gb_emlrtECI{
    2,                     // nDims
    42,                    // lineNo
    19,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtBCInfo aab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    40,                    // lineNo
    37,                    // colNo
    "sol_info.a_r_time",   // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    31,                    // lineNo
    37,                    // colNo
    "sol_info.a_c_time",   // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    27,                    // lineNo
    40,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    27,                    // lineNo
    38,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo eab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    26,                    // lineNo
    33,                    // colNo
    "sol_info.routes",     // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtDCInfo ub_emlrtDCI{
    17,                    // lineNo
    26,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo vb_emlrtDCI{
    13,                    // lineNo
    27,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo wb_emlrtDCI{
    13,                    // lineNo
    27,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    4                       // checkKind
};

static emlrtDCInfo xb_emlrtDCI{
    14,                    // lineNo
    24,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo yb_emlrtDCI{
    13,                    // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo ac_emlrtDCI{
    14,                    // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo bc_emlrtDCI{
    15,                    // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo cc_emlrtDCI{
    16,                    // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo dc_emlrtDCI{
    18,                    // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    1                       // checkKind
};

static emlrtBCInfo fab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    218,                   // lineNo
    20,                    // colNo
    "empty_flag",          // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    219,                   // lineNo
    23,                    // colNo
    "pool_deter",          // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    227,                   // lineNo
    50,                    // colNo
    "pool_gen_cost",       // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo iab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    227,                   // lineNo
    31,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    224,                   // lineNo
    31,                    // colNo
    "pool_gen_cost",       // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    224,                   // lineNo
    78,                    // colNo
    "pool_dis",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    223,                   // lineNo
    31,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    240,                   // lineNo
    21,                    // colNo
    "pool_ind",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    42,                    // lineNo
    41,                    // colNo
    "data.tw",             // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo oab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    43,                    // lineNo
    17,                    // colNo
    "old_puntime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    61,                    // lineNo
    25,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    79,                    // lineNo
    28,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    80,                    // lineNo
    26,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    81,                    // lineNo
    21,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    82,                    // lineNo
    26,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    70,                    // lineNo
    28,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    70,                    // lineNo
    44,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    71,                    // lineNo
    21,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    71,                    // lineNo
    35,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    72,                    // lineNo
    21,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo abb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    72,                    // lineNo
    35,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    83,                    // lineNo
    28,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    84,                    // lineNo
    26,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    85,                    // lineNo
    21,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ebb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    86,                    // lineNo
    26,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    74,                    // lineNo
    28,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    74,                    // lineNo
    44,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    75,                    // lineNo
    30,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ibb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    75,                    // lineNo
    44,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    76,                    // lineNo
    30,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    76,                    // lineNo
    44,                    // colNo
    "old_route",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    93,                    // lineNo
    25,                    // colNo
    "data.arc",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    93,                    // lineNo
    41,                    // colNo
    "data.arc",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    94,                    // lineNo
    30,                    // colNo
    "data.arc",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo obb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    94,                    // lineNo
    46,                    // colNo
    "data.arc",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    95,                    // lineNo
    30,                    // colNo
    "data.arc",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    95,                    // lineNo
    46,                    // colNo
    "data.arc",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    96,                    // lineNo
    30,                    // colNo
    "data.arc",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    96,                    // lineNo
    46,                    // colNo
    "data.arc",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    114,                   // lineNo
    25,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ubb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    114,                   // lineNo
    41,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    115,                   // lineNo
    25,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    115,                   // lineNo
    41,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    116,                   // lineNo
    25,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ybb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    116,                   // lineNo
    41,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo acb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    117,                   // lineNo
    25,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    117,                   // lineNo
    41,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ccb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    118,                   // lineNo
    25,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    118,                   // lineNo
    41,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ecb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    119,                   // lineNo
    25,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    119,                   // lineNo
    41,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    120,                   // lineNo
    25,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    120,                   // lineNo
    41,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo icb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    121,                   // lineNo
    25,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    121,                   // lineNo
    41,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    46,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    61,                    // colNo
    "data.st",             // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    85,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ncb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    96,                    // colNo
    "data.dist",           // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ocb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    29,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    134,                   // lineNo
    32,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    134,                   // lineNo
    45,                    // colNo
    "data.tw",             // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    137,                   // lineNo
    36,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo scb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    137,                   // lineNo
    49,                    // colNo
    "data.tw",             // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    141,                   // lineNo
    33,                    // colNo
    "new_puntime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ucb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    135,                   // lineNo
    46,                    // colNo
    "data.tw",             // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    135,                   // lineNo
    33,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    138,                   // lineNo
    50,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xcb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    138,                   // lineNo
    63,                    // colNo
    "data.tw",             // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ycb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    138,                   // lineNo
    33,                    // colNo
    "new_puntime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo adb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    136,                   // lineNo
    33,                    // colNo
    "new_puntime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bdb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    139,                   // lineNo
    46,                    // colNo
    "data.tw",             // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cdb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    139,                   // lineNo
    33,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ddb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    144,                   // lineNo
    41,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo edb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    144,                   // lineNo
    57,                    // colNo
    "old_arrtime",         // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fdb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    171,                   // lineNo
    26,                    // colNo
    "pool_ind",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gdb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    172,                   // lineNo
    28,                    // colNo
    "pool_deter",          // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hdb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    173,                   // lineNo
    31,                    // colNo
    "pool_gen_cost",       // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo idb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    174,                   // lineNo
    26,                    // colNo
    "pool_dis",            // aName
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo gj_emlrtRTEI{
    13,                    // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo hj_emlrtRTEI{
    14,                    // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo ij_emlrtRTEI{
    15,                    // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo jj_emlrtRTEI{
    16,                    // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo kj_emlrtRTEI{
    17,                    // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo lj_emlrtRTEI{
    18,                    // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo mj_emlrtRTEI{
    28,                    // lineNo
    5,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo nj_emlrtRTEI{
    27,                    // lineNo
    21,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo oj_emlrtRTEI{
    32,                    // lineNo
    12,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo pj_emlrtRTEI{
    35,                    // lineNo
    9,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo qj_emlrtRTEI{
    33,                    // lineNo
    9,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo rj_emlrtRTEI{
    37,                    // lineNo
    5,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo sj_emlrtRTEI{
    41,                    // lineNo
    5,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo tj_emlrtRTEI{
    42,                    // lineNo
    33,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo uj_emlrtRTEI{
    42,                    // lineNo
    5,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo vj_emlrtRTEI{
    103,                   // lineNo
    13,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo wj_emlrtRTEI{
    108,                   // lineNo
    13,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo xj_emlrtRTEI{
    127,                   // lineNo
    13,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo yj_emlrtRTEI{
    128,                   // lineNo
    13,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo ak_emlrtRTEI{
    159,                   // lineNo
    13,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo bk_emlrtRTEI{
    174,                   // lineNo
    46,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo ck_emlrtRTEI{
    212,                   // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo dk_emlrtRTEI{
    216,                   // lineNo
    1,                     // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo ek_emlrtRTEI{
    238,                   // lineNo
    32,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo fk_emlrtRTEI{
    221,                   // lineNo
    13,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRTEInfo gk_emlrtRTEI{
    222,                   // lineNo
    13,                    // colNo
    "ts_intro_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pName
};

static emlrtRSInfo qh_emlrtRSI{
    42,                    // lineNo
    "ts_intro_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_exchanging.m" // pathName
};

// Function Definitions
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
                         int16_T best_del[8], real_T *best_ind)
{
  coder::array<real_T, 2U> new_arrtime;
  coder::array<real_T, 2U> new_puntime;
  coder::array<real_T, 2U> old_arrtime;
  coder::array<real_T, 2U> old_puntime;
  coder::array<real_T, 2U> temp_frequency;
  coder::array<real_T, 1U> pool_dis;
  coder::array<real_T, 1U> pool_div_gen_cost;
  coder::array<real_T, 1U> pool_gen_cost;
  coder::array<int16_T, 3U> new_rs;
  coder::array<int16_T, 3U> pool_del;
  coder::array<int16_T, 3U> pool_routes;
  coder::array<int16_T, 2U> b_new_rs;
  coder::array<int16_T, 2U> new_route;
  coder::array<int16_T, 2U> old_route;
  coder::array<int16_T, 2U> partial_2;
  coder::array<uint8_T, 1U> pool_ind;
  coder::array<boolean_T, 2U> del_ind_time;
  coder::array<boolean_T, 1U> empty_flag;
  coder::array<boolean_T, 1U> pool_deter;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  real_T new_cost[3];
  real_T max_pool_cost;
  real_T sum_ori_cost;
  real_T temp_decrz;
  int32_T iv[3];
  int32_T b_pool_ind[2];
  int32_T b_data_tw;
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T k;
  int32_T last;
  int32_T loop_ub;
  int32_T max_pool_ind;
  int16_T add_arc[8];
  boolean_T exitg1;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  线路内部两个客户位置交换
  //  将每个线路中每个客户的位置重新分配
  //  与交换位置不同，重新分配并不改变其他客户的顺序
  //  进行三个循环的嵌套，分别控制选择的路径，路径中的客户，重新插入的位置
  //  初始化申请内存
  //  记录变化之后的成本
  //  顾客数量
  //  车辆数
  st.site = &re_emlrtRSI;
  sum_ori_cost = coder::sum(&st, sol_info->cost);
  //  原始解sol_inf的成本
  if (!(param_pen_pool_size >= 0.0)) {
    emlrtNonNegativeCheckR2012b(param_pen_pool_size, &wb_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(param_pen_pool_size));
  if (param_pen_pool_size != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &vb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_routes.set_size(&gj_emlrtRTEI, sp,
                       static_cast<int32_T>(param_pen_pool_size),
                       sol_info->routes.size(0), sol_info->routes.size(1));
  if (param_pen_pool_size != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &yb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  last = static_cast<int32_T>(param_pen_pool_size) * sol_info->routes.size(0) *
         sol_info->routes.size(1);
  for (i1 = 0; i1 < last; i1++) {
    pool_routes[i1] = 0;
  }
  //  邻域池子
  if (param_pen_pool_size != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &xb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  last = static_cast<int32_T>(param_pen_pool_size);
  pool_del.set_size(&hj_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen_pool_size), 4, 2);
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &ac_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(param_pen_pool_size) << 3;
  for (i1 = 0; i1 < loop_ub; i1++) {
    pool_del[i1] = 0;
  }
  //  每个邻域解对应删除的弧
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &bc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_ind.set_size(&ij_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen_pool_size));
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &bc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (i1 = 0; i1 < last; i1++) {
    pool_ind[i1] = 0U;
  }
  //  每个邻域解对应变动索引
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &cc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_deter.set_size(&jj_emlrtRTEI, sp,
                      static_cast<int32_T>(param_pen_pool_size));
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &cc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (i1 = 0; i1 < last; i1++) {
    pool_deter[i1] = false;
  }
  //  每个邻域解是否退化
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &ub_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_gen_cost.set_size(&kj_emlrtRTEI, sp,
                         static_cast<int32_T>(param_pen_pool_size));
  for (i1 = 0; i1 < last; i1++) {
    pool_gen_cost[i1] = rtInf;
  }
  //  每个邻域解的广义成本
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &dc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_dis.set_size(&lj_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen_pool_size));
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &dc_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (i = 0; i < last; i++) {
    pool_dis[i] = 0.0;
  }
  //  每个邻域解的总距离
  max_pool_ind = 1;
  //  初始池子中最大成本对应的索引
  max_pool_cost = rtInf;
  //  初始池子中最大成本
  //  循环换位置并记录最优的前nb_length个邻域
  i = data_vnum;
  if (data_vnum - 1 >= 0) {
    if (sol_info->routes.size(1) - 1 < 2) {
      i2 = 0;
      i3 = 0;
    } else {
      i1 = sol_info->routes.size(1);
      if (i1 < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, i1, &dab_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i2 = 1;
      i1 = sol_info->routes.size(1);
      i3 = sol_info->routes.size(1) - 1;
      if ((i3 < 1) || (i3 > i1)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &cab_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    b_loop_ub = sol_info->routes.size(1);
    c_loop_ub = i3 - i2;
    d_loop_ub = sol_info->a_c_time.size(1);
    e_loop_ub = sol_info->a_r_time.size(1);
    b_data_tw = data_tw.size(0);
  }
  for (int32_T j{0}; j < i; j++) {
    real_T old_cost[3];
    real_T sum_old_cost;
    int32_T i4;
    //  获取一辆车的路径 修正最晚到达时间 惩罚时间 成本
    //  路径
    i1 = sol_info->routes.size(0);
    if (j + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, &eab_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    old_route.set_size(&mj_emlrtRTEI, sp, 1, sol_info->routes.size(1));
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      old_route[i1] = sol_info->routes[j + sol_info->routes.size(0) * i1];
    }
    i1 = i3 - i2;
    del_ind_time.set_size(&nj_emlrtRTEI, sp, 1, i1 + 2);
    del_ind_time[0] = false;
    for (i4 = 0; i4 < c_loop_ub; i4++) {
      del_ind_time[i4 + 1] =
          (sol_info->routes[j + sol_info->routes.size(0) * (i2 + i4)] == 0);
    }
    del_ind_time[i1 + 1] = false;
    st.site = &qe_emlrtRSI;
    coder::internal::nullAssignment(&st, old_route, del_ind_time);
    //  去掉不必要的0
    //  到达时间
    i1 = sol_info->a_c_time.size(0);
    if (j + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, &bab_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    //  获取路径的到达时间
    del_ind_time.set_size(&oj_emlrtRTEI, sp, 1, old_route.size(1));
    last = old_route.size(1);
    for (i1 = 0; i1 < last; i1++) {
      del_ind_time[i1] = (old_route[i1] == 0);
    }
    st.site = &pe_emlrtRSI;
    if (coder::all(&st, del_ind_time)) {
      i1 = sol_info->a_c_time.size(1);
      if (i1 < 3) {
        i4 = 0;
        i1 = 0;
      } else {
        i4 = 2;
      }
      last = i1 - i4;
      del_ind_time.set_size(&qj_emlrtRTEI, sp, 1, last + 2);
      del_ind_time[0] = false;
      del_ind_time[1] = false;
      for (i1 = 0; i1 < last; i1++) {
        del_ind_time[i1 + 2] =
            (sol_info->a_c_time[j + sol_info->a_c_time.size(0) * (i4 + i1)] ==
             0.0);
      }
    } else {
      i1 = sol_info->a_c_time.size(1);
      if (i1 < 2) {
        i4 = 0;
        i1 = 0;
      } else {
        i4 = 1;
      }
      last = i1 - i4;
      del_ind_time.set_size(&pj_emlrtRTEI, sp, 1, last + 1);
      del_ind_time[0] = false;
      for (i1 = 0; i1 < last; i1++) {
        del_ind_time[i1 + 1] =
            (sol_info->a_c_time[j + sol_info->a_c_time.size(0) * (i4 + i1)] ==
             0.0);
      }
    }
    old_arrtime.set_size(&rj_emlrtRTEI, sp, 1, sol_info->a_c_time.size(1));
    for (i1 = 0; i1 < d_loop_ub; i1++) {
      old_arrtime[i1] = sol_info->a_c_time[j + sol_info->a_c_time.size(0) * i1];
    }
    st.site = &oe_emlrtRSI;
    coder::internal::b_nullAssignment(&st, old_arrtime, del_ind_time);
    //  去掉不必要的0
    //  惩罚时间
    i1 = sol_info->a_r_time.size(0);
    if (j + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, &aab_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    //  计算惩罚时间
    old_puntime.set_size(&sj_emlrtRTEI, sp, 1, sol_info->a_r_time.size(1));
    for (i1 = 0; i1 < e_loop_ub; i1++) {
      old_puntime[i1] = sol_info->a_r_time[j + sol_info->a_r_time.size(0) * i1];
    }
    st.site = &ne_emlrtRSI;
    coder::internal::b_nullAssignment(&st, old_puntime, del_ind_time);
    //  去掉不必要的0
    pool_div_gen_cost.set_size(&tj_emlrtRTEI, sp, old_route.size(1));
    last = old_route.size(1);
    for (i1 = 0; i1 < last; i1++) {
      i4 = old_route[i1] + 1;
      if (i4 > 32767) {
        i4 = 32767;
      }
      if ((i4 < 1) || (i4 > b_data_tw)) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, b_data_tw, &nab_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      pool_div_gen_cost[i1] = data_tw[(i4 + data_tw.size(0)) - 1];
    }
    if ((old_puntime.size(1) != old_route.size(1)) &&
        ((old_puntime.size(1) != 1) && (old_route.size(1) != 1))) {
      emlrtDimSizeImpxCheckR2021b(old_puntime.size(1), old_route.size(1),
                                  &gb_emlrtECI, (emlrtConstCTX)sp);
    }
    if (pool_div_gen_cost.size(0) == old_puntime.size(1)) {
      old_puntime.set_size(&uj_emlrtRTEI, sp, 1, old_puntime.size(1));
      last = old_puntime.size(1);
      for (i1 = 0; i1 < last; i1++) {
        old_puntime[i1] = old_puntime[i1] - pool_div_gen_cost[i1];
      }
    } else {
      st.site = &qh_emlrtRSI;
      binary_expand_op(&st, old_puntime, pool_div_gen_cost);
    }
    //  实际到达时间减去右时间窗
    loop_ub = old_puntime.size(1);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      if (old_puntime[b_i] < 0.0) {
        if (b_i + 1 > old_puntime.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, old_puntime.size(1),
                                        &oab_emlrtBCI, (emlrtConstCTX)sp);
        }
        old_puntime[b_i] = 0.0;
      }
    }
    //  成本
    i1 = sol_info->cost.size(0);
    if (j + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, &yy_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    old_cost[0] = sol_info->cost[j];
    old_cost[1] = sol_info->cost[j + sol_info->cost.size(0)];
    old_cost[2] = sol_info->cost[j + sol_info->cost.size(0) * 2];
    st.site = &me_emlrtRSI;
    sum_old_cost = coder::sum(old_cost);
    //  装载量
    i1 = sol_info->payload.size(0);
    if (j + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, &xy_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    //  获取装载量
    //  封装一下
    //  循环取出路径中的每个客户并重新安排至每个位置
    i1 = old_route.size(1);
    for (int32_T m{0}; m <= i1 - 3; m++) {
      int16_T v_1;
      //  route前后是0 因此索引2是第一个客户
      if (m + 2 > old_route.size(1)) {
        emlrtDynamicBoundsCheckR2012b(m + 2, 1, old_route.size(1),
                                      &pab_emlrtBCI, (emlrtConstCTX)sp);
      }
      v_1 = old_route[m + 1];
      //  注意 n 只能在 m 后面: 1/3交换和3/1交换是等价的
      i4 = old_route.size(1) - m;
      for (int32_T n{0}; n <= i4 - 4; n++) {
        uint32_T b_n;
        int16_T del_arc[8];
        b_n = (static_cast<uint32_T>(m) + static_cast<uint32_T>(n)) + 3U;
        //  p 是重新分配后的索引
        if ((static_cast<int32_T>(b_n) < 1) ||
            (static_cast<int32_T>(b_n) > old_route.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_n), 1,
                                        old_route.size(1), &wy_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        //  弧关系
        if ((static_cast<int32_T>(b_n) - m) - 2 == 1) {
          int16_T add_arc_tmp;
          if (m + 1 > old_route.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 1, 1, old_route.size(1),
                                          &uab_emlrtBCI, (emlrtConstCTX)sp);
          }
          add_arc[0] = old_route[m];
          if ((static_cast<int32_T>(b_n) < 1) ||
              (static_cast<int32_T>(b_n) > old_route.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_n), 1,
                                          old_route.size(1), &vab_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          add_arc_tmp = old_route[static_cast<int32_T>(b_n) - 1];
          add_arc[4] = add_arc_tmp;
          if ((static_cast<int32_T>(b_n) < 1) ||
              (static_cast<int32_T>(b_n) > old_route.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_n), 1,
                                          old_route.size(1), &wab_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          add_arc[1] = add_arc_tmp;
          if (m + 2 > old_route.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, old_route.size(1),
                                          &xab_emlrtBCI, (emlrtConstCTX)sp);
          }
          add_arc[5] = old_route[m + 1];
          if (m + 2 > old_route.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, old_route.size(1),
                                          &yab_emlrtBCI, (emlrtConstCTX)sp);
          }
          add_arc[2] = old_route[m + 1];
          if ((static_cast<int32_T>(b_n + 1U) < 1) ||
              (static_cast<int32_T>(b_n + 1U) > old_route.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_n + 1U), 1,
                                          old_route.size(1), &abb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          add_arc[6] = old_route[static_cast<int32_T>(b_n)];
          add_arc[3] = 0;
          add_arc[7] = 0;
          //  增加的弧
          if (m + 1 > old_route.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 1, 1, old_route.size(1),
                                          &fbb_emlrtBCI, (emlrtConstCTX)sp);
          }
          del_arc[0] = old_route[m];
          if (m + 2 > old_route.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, old_route.size(1),
                                          &gbb_emlrtBCI, (emlrtConstCTX)sp);
          }
          del_arc[4] = old_route[m + 1];
          if (m + 2 > old_route.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, old_route.size(1),
                                          &hbb_emlrtBCI, (emlrtConstCTX)sp);
          }
          del_arc[1] = old_route[m + 1];
          if (m + 3 > old_route.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 3, 1, old_route.size(1),
                                          &ibb_emlrtBCI, (emlrtConstCTX)sp);
          }
          del_arc[5] = old_route[m + 2];
          if ((static_cast<int32_T>(b_n) < 1) ||
              (static_cast<int32_T>(b_n) > old_route.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_n), 1,
                                          old_route.size(1), &jbb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          del_arc[2] = add_arc_tmp;
          if ((static_cast<int32_T>(b_n + 1U) < 1) ||
              (static_cast<int32_T>(b_n + 1U) > old_route.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_n + 1U), 1,
                                          old_route.size(1), &kbb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          del_arc[6] = old_route[static_cast<int32_T>(b_n)];
          del_arc[3] = 0;
          del_arc[7] = 0;
          //  删除的弧
        } else {
          int16_T add_arc_tmp;
          if (m + 1 > old_route.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 1, 1, old_route.size(1),
                                          &qab_emlrtBCI, (emlrtConstCTX)sp);
          }
          add_arc[0] = old_route[m];
          add_arc_tmp = old_route[static_cast<int32_T>(b_n) - 1];
          add_arc[4] = add_arc_tmp;
          add_arc[1] = add_arc_tmp;
          if (m + 3 > old_route.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 3, 1, old_route.size(1),
                                          &rab_emlrtBCI, (emlrtConstCTX)sp);
          }
          add_arc[5] = old_route[m + 2];
          if ((static_cast<int32_T>(b_n) - 1 < 1) ||
              (static_cast<int32_T>(b_n) - 1 > old_route.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_n) - 1, 1,
                                          old_route.size(1), &sab_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          add_arc[2] = old_route[static_cast<int32_T>(b_n) - 2];
          add_arc[6] = v_1;
          add_arc[3] = v_1;
          if ((static_cast<int32_T>(b_n + 1U) < 1) ||
              (static_cast<int32_T>(b_n + 1U) > old_route.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_n + 1U), 1,
                                          old_route.size(1), &tab_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          add_arc[7] = old_route[static_cast<int32_T>(b_n)];
          //  增加的弧
          if (m + 1 > old_route.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 1, 1, old_route.size(1),
                                          &bbb_emlrtBCI, (emlrtConstCTX)sp);
          }
          del_arc[0] = old_route[m];
          del_arc[4] = v_1;
          del_arc[1] = v_1;
          if (m + 3 > old_route.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 3, 1, old_route.size(1),
                                          &cbb_emlrtBCI, (emlrtConstCTX)sp);
          }
          del_arc[5] = old_route[m + 2];
          if ((static_cast<int32_T>(b_n) - 1 < 1) ||
              (static_cast<int32_T>(b_n) - 1 > old_route.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_n) - 1, 1,
                                          old_route.size(1), &dbb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          del_arc[2] = old_route[static_cast<int32_T>(b_n) - 2];
          del_arc[6] = add_arc_tmp;
          del_arc[3] = add_arc_tmp;
          if ((static_cast<int32_T>(b_n + 1U) < 1) ||
              (static_cast<int32_T>(b_n + 1U) > old_route.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_n + 1U), 1,
                                          old_route.size(1), &ebb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          del_arc[7] = old_route[static_cast<int32_T>(b_n)];
          //  删除的弧
        }
        st.site = &le_emlrtRSI;
        if (!b_myismember(&st, add_arc, tabu_list)) {
          int32_T i5;
          int32_T i6;
          i5 = add_arc[0] + 1;
          if (add_arc[0] + 1 > 32767) {
            i5 = 32767;
          }
          if ((i5 < 1) || (i5 > data_arc.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, data_arc.size(0),
                                          &lbb_emlrtBCI, (emlrtConstCTX)sp);
          }
          i6 = add_arc[4] + 1;
          if (add_arc[4] + 1 > 32767) {
            i6 = 32767;
          }
          if ((i6 < 1) || (i6 > data_arc.size(1))) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, data_arc.size(1),
                                          &mbb_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (data_arc[(i5 + data_arc.size(0) * (i6 - 1)) - 1]) {
            i5 = add_arc[1] + 1;
            if (add_arc[1] + 1 > 32767) {
              i5 = 32767;
            }
            if ((i5 < 1) || (i5 > data_arc.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, data_arc.size(0),
                                            &nbb_emlrtBCI, (emlrtConstCTX)sp);
            }
            i6 = add_arc[5] + 1;
            if (add_arc[5] + 1 > 32767) {
              i6 = 32767;
            }
            if ((i6 < 1) || (i6 > data_arc.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i6, 1, data_arc.size(1),
                                            &obb_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (data_arc[(i5 + data_arc.size(0) * (i6 - 1)) - 1]) {
              i5 = add_arc[2] + 1;
              if (add_arc[2] + 1 > 32767) {
                i5 = 32767;
              }
              if ((i5 < 1) || (i5 > data_arc.size(0))) {
                emlrtDynamicBoundsCheckR2012b(i5, 1, data_arc.size(0),
                                              &pbb_emlrtBCI, (emlrtConstCTX)sp);
              }
              i6 = add_arc[6] + 1;
              if (add_arc[6] + 1 > 32767) {
                i6 = 32767;
              }
              if ((i6 < 1) || (i6 > data_arc.size(1))) {
                emlrtDynamicBoundsCheckR2012b(i6, 1, data_arc.size(1),
                                              &qbb_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (data_arc[(i5 + data_arc.size(0) * (i6 - 1)) - 1]) {
                i5 = add_arc[3] + 1;
                if (add_arc[3] + 1 > 32767) {
                  i5 = 32767;
                }
                if ((i5 < 1) || (i5 > data_arc.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(i5, 1, data_arc.size(0),
                                                &rbb_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                i6 = add_arc[7] + 1;
                if (add_arc[7] + 1 > 32767) {
                  i6 = 32767;
                }
                if ((i6 < 1) || (i6 > data_arc.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(i6, 1, data_arc.size(1),
                                                &sbb_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                if (data_arc[(i5 + data_arc.size(0) * (i6 - 1)) - 1]) {
                  int32_T i10;
                  int32_T i11;
                  int32_T i12;
                  int32_T i13;
                  int32_T i14;
                  int32_T i15;
                  int32_T i16;
                  int32_T i7;
                  int32_T i8;
                  int32_T i9;
                  boolean_T deteriorate;
                  //  生成新的路径
                  //  把路径分成三份，第一份和第三份是不变动的，第二份是变动的
                  if (old_route.size(1) < 1) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, old_route.size(1),
                                                  &vy_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 1 > old_route.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(m + 1, 1, old_route.size(1),
                                                  &uy_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 2 > static_cast<int32_T>(b_n)) {
                    i5 = 0;
                    i6 = 0;
                  } else {
                    if (m + 2 > old_route.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 2, 1, old_route.size(1),
                                                    &ty_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i5 = m + 1;
                    if ((static_cast<int32_T>(b_n) < 1) ||
                        (static_cast<int32_T>(b_n) > old_route.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(b_n), 1, old_route.size(1),
                          &sy_emlrtBCI, (emlrtConstCTX)sp);
                    }
                    i6 = static_cast<int32_T>(b_n);
                  }
                  last = i6 - i5;
                  partial_2.set_size(&vj_emlrtRTEI, sp, 1, last);
                  for (i7 = 0; i7 < last; i7++) {
                    partial_2[i7] = old_route[i5 + i7];
                  }
                  if (b_n + 1U > static_cast<uint32_T>(old_route.size(1))) {
                    i7 = 0;
                    i8 = 0;
                  } else {
                    if ((static_cast<int32_T>(b_n + 1U) < 1) ||
                        (static_cast<int32_T>(b_n + 1U) > old_route.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(b_n + 1U), 1, old_route.size(1),
                          &ry_emlrtBCI, (emlrtConstCTX)sp);
                    }
                    i7 = static_cast<int32_T>(b_n);
                    if (old_route.size(1) < 1) {
                      emlrtDynamicBoundsCheckR2012b(
                          old_route.size(1), 1, old_route.size(1), &qy_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    i8 = old_route.size(1);
                  }
                  if (last < 1) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, last, &py_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  //  start
                  //  end
                  partial_2[0] = old_route[i6 - 1];
                  partial_2[last - 1] = old_route[i5];
                  new_route.set_size(&wj_emlrtRTEI, sp, 1,
                                     (((m + partial_2.size(1)) + i8) - i7) + 1);
                  for (i5 = 0; i5 <= m; i5++) {
                    new_route[i5] = old_route[i5];
                  }
                  last = partial_2.size(1);
                  for (i5 = 0; i5 < last; i5++) {
                    new_route[(i5 + m) + 1] = partial_2[i5];
                  }
                  last = i8 - i7;
                  for (i5 = 0; i5 < last; i5++) {
                    new_route[((i5 + m) + partial_2.size(1)) + 1] =
                        old_route[i7 + i5];
                  }
                  //  拼接成新路径
                  //  计算新成本
                  //  1.计算距离
                  i5 = add_arc[0] + 1;
                  if (add_arc[0] + 1 > 32767) {
                    i5 = 32767;
                  }
                  if ((i5 < 1) || (i5 > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i5, 1, data_dist.size(0),
                                                  &tbb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i6 = add_arc[4] + 1;
                  if (add_arc[4] + 1 > 32767) {
                    i6 = 32767;
                  }
                  if ((i6 < 1) || (i6 > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i6, 1, data_dist.size(1),
                                                  &ubb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i7 = add_arc[1] + 1;
                  if (add_arc[1] + 1 > 32767) {
                    i7 = 32767;
                  }
                  if ((i7 < 1) || (i7 > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i7, 1, data_dist.size(0),
                                                  &vbb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i8 = add_arc[5] + 1;
                  if (add_arc[5] + 1 > 32767) {
                    i8 = 32767;
                  }
                  if ((i8 < 1) || (i8 > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i8, 1, data_dist.size(1),
                                                  &wbb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i9 = add_arc[2] + 1;
                  if (add_arc[2] + 1 > 32767) {
                    i9 = 32767;
                  }
                  if ((i9 < 1) || (i9 > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i9, 1, data_dist.size(0),
                                                  &xbb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  b_i = add_arc[6] + 1;
                  if (add_arc[6] + 1 > 32767) {
                    b_i = 32767;
                  }
                  if ((b_i < 1) || (b_i > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(b_i, 1, data_dist.size(1),
                                                  &ybb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  last = add_arc[3] + 1;
                  if (add_arc[3] + 1 > 32767) {
                    last = 32767;
                  }
                  if ((last < 1) || (last > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(last, 1, data_dist.size(0),
                                                  &acb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  loop_ub = add_arc[7] + 1;
                  if (add_arc[7] + 1 > 32767) {
                    loop_ub = 32767;
                  }
                  if ((loop_ub < 1) || (loop_ub > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, data_dist.size(1),
                                                  &bcb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  k = del_arc[0] + 1;
                  if (del_arc[0] + 1 > 32767) {
                    k = 32767;
                  }
                  if ((k < 1) || (k > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, data_dist.size(0),
                                                  &ccb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i10 = del_arc[4] + 1;
                  if (del_arc[4] + 1 > 32767) {
                    i10 = 32767;
                  }
                  if ((i10 < 1) || (i10 > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i10, 1, data_dist.size(1),
                                                  &dcb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i11 = del_arc[1] + 1;
                  if (del_arc[1] + 1 > 32767) {
                    i11 = 32767;
                  }
                  if ((i11 < 1) || (i11 > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i11, 1, data_dist.size(0),
                                                  &ecb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i12 = del_arc[5] + 1;
                  if (del_arc[5] + 1 > 32767) {
                    i12 = 32767;
                  }
                  if ((i12 < 1) || (i12 > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i12, 1, data_dist.size(1),
                                                  &fcb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i13 = del_arc[2] + 1;
                  if (del_arc[2] + 1 > 32767) {
                    i13 = 32767;
                  }
                  if ((i13 < 1) || (i13 > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i13, 1, data_dist.size(0),
                                                  &gcb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i14 = del_arc[6] + 1;
                  if (del_arc[6] + 1 > 32767) {
                    i14 = 32767;
                  }
                  if ((i14 < 1) || (i14 > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i14, 1, data_dist.size(1),
                                                  &hcb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i15 = del_arc[3] + 1;
                  if (del_arc[3] + 1 > 32767) {
                    i15 = 32767;
                  }
                  if ((i15 < 1) || (i15 > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i15, 1, data_dist.size(0),
                                                  &icb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i16 = del_arc[7] + 1;
                  if (del_arc[7] + 1 > 32767) {
                    i16 = 32767;
                  }
                  if ((i16 < 1) || (i16 > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i16, 1, data_dist.size(1),
                                                  &jcb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  new_cost[0] =
                      (((((((sol_info->cost[j] +
                             data_dist[(i5 + data_dist.size(0) * (i6 - 1)) -
                                       1]) +
                            data_dist[(i7 + data_dist.size(0) * (i8 - 1)) -
                                      1]) +
                           data_dist[(i9 + data_dist.size(0) * (b_i - 1)) -
                                     1]) +
                          data_dist[(last + data_dist.size(0) * (loop_ub - 1)) -
                                    1]) -
                         data_dist[(k + data_dist.size(0) * (i10 - 1)) - 1]) -
                        data_dist[(i11 + data_dist.size(0) * (i12 - 1)) - 1]) -
                       data_dist[(i13 + data_dist.size(0) * (i14 - 1)) - 1]) -
                      data_dist[(i15 + data_dist.size(0) * (i16 - 1)) - 1];
                  //  2. 惩罚容量
                  new_cost[1] = sol_info->cost[j + sol_info->cost.size(0)];
                  //  3. 时间惩罚
                  new_arrtime.set_size(&xj_emlrtRTEI, sp, 1,
                                       old_arrtime.size(1));
                  last = old_arrtime.size(1);
                  for (i5 = 0; i5 < last; i5++) {
                    new_arrtime[i5] = old_arrtime[i5];
                  }
                  new_puntime.set_size(&yj_emlrtRTEI, sp, 1,
                                       old_puntime.size(1));
                  last = old_puntime.size(1);
                  for (i5 = 0; i5 < last; i5++) {
                    new_puntime[i5] = old_puntime[i5];
                  }
                  i5 = old_route.size(1) - m;
                  k = 0;
                  exitg1 = false;
                  while ((!exitg1) && (k <= i5 - 2)) {
                    uint32_T b_k;
                    boolean_T guard1{false};
                    b_k =
                        (static_cast<uint32_T>(m) + static_cast<uint32_T>(k)) +
                        2U;
                    if ((static_cast<int32_T>(static_cast<real_T>(b_k) - 1.0) <
                         1) ||
                        (static_cast<int32_T>(static_cast<real_T>(b_k) - 1.0) >
                         new_route.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(static_cast<real_T>(b_k) - 1.0),
                          1, new_route.size(1), &oy_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    //  前一个点
                    if ((static_cast<int32_T>(b_k) < 1) ||
                        (static_cast<int32_T>(b_k) > new_route.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(b_k), 1, new_route.size(1),
                          &ny_emlrtBCI, (emlrtConstCTX)sp);
                    }
                    //  当前点
                    //  新的到达时间
                    if ((static_cast<int32_T>(b_k) - 1 < 1) ||
                        (static_cast<int32_T>(b_k) - 1 > new_arrtime.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(b_k) - 1, 1, new_arrtime.size(1),
                          &kcb_emlrtBCI, (emlrtConstCTX)sp);
                    }
                    i6 = new_route[static_cast<int32_T>(b_k) - 2] + 1;
                    i7 = i6;
                    if (i6 > 32767) {
                      i7 = 32767;
                    }
                    if ((i7 < 1) || (i7 > data_st.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i7, 1, data_st.size(0),
                                                    &lcb_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (i6 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data_dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data_dist.size(0),
                                                    &mcb_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i8 = new_route[static_cast<int32_T>(b_k) - 1] + 1;
                    i9 = i8;
                    if (i8 > 32767) {
                      i9 = 32767;
                    }
                    if ((i9 < 1) || (i9 > data_dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(i9, 1, data_dist.size(1),
                                                    &ncb_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if ((static_cast<int32_T>(b_k) < 1) ||
                        (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                          &ocb_emlrtBCI, (emlrtConstCTX)sp);
                    }
                    new_arrtime[static_cast<int32_T>(b_k) - 1] =
                        (new_arrtime[static_cast<int32_T>(b_k) - 2] +
                         data_st[i7 - 1]) +
                        data_dist[(i6 + data_dist.size(0) * (i9 - 1)) - 1];
                    if ((static_cast<int32_T>(b_k) < 1) ||
                        (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                          &pcb_emlrtBCI, (emlrtConstCTX)sp);
                    }
                    i6 = i8;
                    if (i8 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data_tw.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data_tw.size(0),
                                                    &qcb_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    temp_decrz = new_arrtime[static_cast<int32_T>(b_k) - 1];
                    if (temp_decrz < data_tw[i6 - 1]) {
                      //  小于最早到达
                      if (i8 > 32767) {
                        i8 = 32767;
                      }
                      if ((i8 < 1) || (i8 > data_tw.size(0))) {
                        emlrtDynamicBoundsCheckR2012b(i8, 1, data_tw.size(0),
                                                      &ucb_emlrtBCI,
                                                      (emlrtConstCTX)sp);
                      }
                      if ((static_cast<int32_T>(b_k) < 1) ||
                          (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                        emlrtDynamicBoundsCheckR2012b(
                            static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                            &vcb_emlrtBCI, (emlrtConstCTX)sp);
                      }
                      new_arrtime[static_cast<int32_T>(b_k) - 1] =
                          data_tw[i8 - 1];
                      if ((static_cast<int32_T>(b_k) < 1) ||
                          (static_cast<int32_T>(b_k) > new_puntime.size(1))) {
                        emlrtDynamicBoundsCheckR2012b(
                            static_cast<int32_T>(b_k), 1, new_puntime.size(1),
                            &adb_emlrtBCI, (emlrtConstCTX)sp);
                      }
                      new_puntime[static_cast<int32_T>(b_k) - 1] = 0.0;
                    } else {
                      if ((static_cast<int32_T>(b_k) < 1) ||
                          (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                        emlrtDynamicBoundsCheckR2012b(
                            static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                            &rcb_emlrtBCI, (emlrtConstCTX)sp);
                      }
                      i6 = i8;
                      if (i8 > 32767) {
                        i6 = 32767;
                      }
                      if ((i6 < 1) || (i6 > data_tw.size(0))) {
                        emlrtDynamicBoundsCheckR2012b(i6, 1, data_tw.size(0),
                                                      &scb_emlrtBCI,
                                                      (emlrtConstCTX)sp);
                      }
                      if (temp_decrz > data_tw[(i6 + data_tw.size(0)) - 1]) {
                        //  大于最晚到达
                        if ((static_cast<int32_T>(b_k) < 1) ||
                            (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                          emlrtDynamicBoundsCheckR2012b(
                              static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                              &wcb_emlrtBCI, (emlrtConstCTX)sp);
                        }
                        i6 = i8;
                        if (i8 > 32767) {
                          i6 = 32767;
                        }
                        if ((i6 < 1) || (i6 > data_tw.size(0))) {
                          emlrtDynamicBoundsCheckR2012b(i6, 1, data_tw.size(0),
                                                        &xcb_emlrtBCI,
                                                        (emlrtConstCTX)sp);
                        }
                        if ((static_cast<int32_T>(b_k) < 1) ||
                            (static_cast<int32_T>(b_k) > new_puntime.size(1))) {
                          emlrtDynamicBoundsCheckR2012b(
                              static_cast<int32_T>(b_k), 1, new_puntime.size(1),
                              &ycb_emlrtBCI, (emlrtConstCTX)sp);
                        }
                        new_puntime[static_cast<int32_T>(b_k) - 1] =
                            temp_decrz - data_tw[(i6 + data_tw.size(0)) - 1];
                        if (i8 > 32767) {
                          i8 = 32767;
                        }
                        if ((i8 < 1) || (i8 > data_tw.size(0))) {
                          emlrtDynamicBoundsCheckR2012b(i8, 1, data_tw.size(0),
                                                        &bdb_emlrtBCI,
                                                        (emlrtConstCTX)sp);
                        }
                        if ((static_cast<int32_T>(b_k) < 1) ||
                            (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                          emlrtDynamicBoundsCheckR2012b(
                              static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                              &cdb_emlrtBCI, (emlrtConstCTX)sp);
                        }
                        new_arrtime[static_cast<int32_T>(b_k) - 1] =
                            data_tw[(i8 + data_tw.size(0)) - 1];
                      } else {
                        if ((static_cast<int32_T>(b_k) < 1) ||
                            (static_cast<int32_T>(b_k) > new_puntime.size(1))) {
                          emlrtDynamicBoundsCheckR2012b(
                              static_cast<int32_T>(b_k), 1, new_puntime.size(1),
                              &tcb_emlrtBCI, (emlrtConstCTX)sp);
                        }
                        new_puntime[static_cast<int32_T>(b_k) - 1] = 0.0;
                      }
                    }
                    guard1 = false;
                    if (static_cast<int32_T>(b_k) > static_cast<int32_T>(b_n)) {
                      if ((static_cast<int32_T>(b_k) < 1) ||
                          (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                        emlrtDynamicBoundsCheckR2012b(
                            static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                            &ddb_emlrtBCI, (emlrtConstCTX)sp);
                      }
                      if ((static_cast<int32_T>(b_k) < 1) ||
                          (static_cast<int32_T>(b_k) > old_arrtime.size(1))) {
                        emlrtDynamicBoundsCheckR2012b(
                            static_cast<int32_T>(b_k), 1, old_arrtime.size(1),
                            &edb_emlrtBCI, (emlrtConstCTX)sp);
                      }
                      if (new_arrtime[static_cast<int32_T>(b_k) - 1] ==
                          old_arrtime[static_cast<int32_T>(b_k) - 1]) {
                        exitg1 = true;
                      } else {
                        guard1 = true;
                      }
                    } else {
                      guard1 = true;
                    }
                    if (guard1) {
                      k++;
                      if (*emlrtBreakCheckR2012bFlagVar != 0) {
                        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
                      }
                    }
                  }
                  st.site = &ke_emlrtRSI;
                  new_cost[2] =
                      coder::b_sum(&st, new_puntime) * param_pen_beta_0;
                  //  计算减量成本 & 标记退化
                  st.site = &je_emlrtRSI;
                  temp_decrz = coder::sum(old_cost) - coder::sum(new_cost);
                  if (temp_decrz < 0.0) {
                    deteriorate = true;
                    //  找到的邻域还不如原来的
                  } else {
                    deteriorate = false;
                  }
                  //  计算新路径
                  b_new_rs.set_size(&ak_emlrtRTEI, sp, sol_info->routes.size(0),
                                    sol_info->routes.size(1));
                  last = sol_info->routes.size(0) * sol_info->routes.size(1);
                  for (i5 = 0; i5 < last; i5++) {
                    b_new_rs[i5] = sol_info->routes[i5];
                  }
                  //  new_routes
                  i5 = sol_info->routes.size(0);
                  if (j + 1 > i5) {
                    emlrtDynamicBoundsCheckR2012b(j + 1, 1, i5, &my_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  last = sol_info->routes.size(1);
                  for (i5 = 0; i5 < last; i5++) {
                    b_new_rs[j + b_new_rs.size(0) * i5] = 0;
                  }
                  if (b_new_rs.size(1) < 1) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, b_new_rs.size(1),
                                                  &ky_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if ((new_route.size(1) < 1) ||
                      (new_route.size(1) > b_new_rs.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(
                        new_route.size(1), 1, b_new_rs.size(1), &jy_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  if (j + 1 > b_new_rs.size(0)) {
                    emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_new_rs.size(0),
                                                  &ly_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  b_pool_ind[0] = 1;
                  b_pool_ind[1] = new_route.size(1);
                  emlrtSubAssignSizeCheckR2012b(&b_pool_ind[0], 2,
                                                new_route.size(), 2,
                                                &fb_emlrtECI, (emlrtCTX)sp);
                  last = new_route.size(1);
                  for (i5 = 0; i5 < last; i5++) {
                    b_new_rs[j + b_new_rs.size(0) * i5] = new_route[i5];
                  }
                  //  放入池子中
                  //  先找到池子中成本最大的解对应的索引
                  //  如果 当前解的成本 比 池子中最大成本的解 还大 那直接不要了
                  //  如果小于 则接受 把最大成本的解替换掉
                  st.site = &ie_emlrtRSI;
                  temp_decrz =
                      (sum_ori_cost - sum_old_cost) + coder::b_sum(new_cost);
                  if (temp_decrz < max_pool_cost) {
                    if (max_pool_ind > pool_routes.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_routes.size(0), &iy_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    iv[0] = 1;
                    iv[1] = pool_routes.size(1);
                    iv[2] = pool_routes.size(2);
                    emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_new_rs.size(), 2,
                                                  &eb_emlrtECI, (emlrtCTX)sp);
                    iv[1] = pool_routes.size(1);
                    last = pool_routes.size(2);
                    for (i5 = 0; i5 < last; i5++) {
                      loop_ub = pool_routes.size(1);
                      for (i6 = 0; i6 < loop_ub; i6++) {
                        pool_routes[((max_pool_ind + pool_routes.size(0) * i6) +
                                     pool_routes.size(0) * pool_routes.size(1) *
                                         i5) -
                                    1] = b_new_rs[i6 + iv[1] * i5];
                      }
                    }
                    //  加入邻域池子
                    if (max_pool_ind > pool_del.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_del.size(0), &ey_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    for (i5 = 0; i5 < 2; i5++) {
                      b_i = i5 << 2;
                      pool_del[(max_pool_ind + pool_del.size(0) * 4 * i5) - 1] =
                          del_arc[b_i];
                      pool_del[((max_pool_ind + pool_del.size(0)) +
                                pool_del.size(0) * 4 * i5) -
                               1] = del_arc[b_i + 1];
                      pool_del[((max_pool_ind + pool_del.size(0) * 2) +
                                pool_del.size(0) * 4 * i5) -
                               1] = del_arc[b_i + 2];
                      pool_del[((max_pool_ind + pool_del.size(0) * 3) +
                                pool_del.size(0) * 4 * i5) -
                               1] = del_arc[b_i + 3];
                    }
                    //  每个邻域解对应删除的弧
                    if (max_pool_ind > pool_ind.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_ind.size(0), &fdb_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_ind[max_pool_ind - 1] = static_cast<uint8_T>(j + 1);
                    //  每个邻域解对应变动索引
                    if (max_pool_ind > pool_deter.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_deter.size(0), &gdb_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_deter[max_pool_ind - 1] = deteriorate;
                    if (max_pool_ind > pool_gen_cost.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_gen_cost.size(0), &hdb_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_gen_cost[max_pool_ind - 1] = temp_decrz;
                    pool_div_gen_cost.set_size(&bk_emlrtRTEI, sp,
                                               sol_info->cost.size(0));
                    last = sol_info->cost.size(0);
                    for (i5 = 0; i5 < last; i5++) {
                      pool_div_gen_cost[i5] = sol_info->cost[i5];
                    }
                    if (max_pool_ind > pool_dis.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_dis.size(0), &idb_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    st.site = &he_emlrtRSI;
                    pool_dis[max_pool_ind - 1] =
                        (coder::sum(&st, pool_div_gen_cost) -
                         sol_info->cost[j]) +
                        new_cost[0];
                    //  更新最大索引
                    st.site = &ge_emlrtRSI;
                    b_st.site = &kc_emlrtRSI;
                    c_st.site = &lc_emlrtRSI;
                    d_st.site = &mc_emlrtRSI;
                    if (pool_gen_cost.size(0) < 1) {
                      emlrtErrorWithMessageIdR2018a(
                          &d_st, &j_emlrtRTEI,
                          "Coder:toolbox:eml_min_or_max_varDimZero",
                          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
                    }
                    e_st.site = &nc_emlrtRSI;
                    last = pool_gen_cost.size(0);
                    if (pool_gen_cost.size(0) <= 2) {
                      if (pool_gen_cost.size(0) == 1) {
                        max_pool_cost = pool_gen_cost[0];
                        max_pool_ind = 1;
                      } else if (pool_gen_cost[0] < pool_gen_cost[1]) {
                        max_pool_cost = pool_gen_cost[1];
                        max_pool_ind = 2;
                      } else {
                        max_pool_cost = pool_gen_cost[0];
                        max_pool_ind = 1;
                      }
                    } else {
                      f_st.site = &pc_emlrtRSI;
                      f_st.site = &oc_emlrtRSI;
                      max_pool_cost = pool_gen_cost[0];
                      max_pool_ind = 1;
                      g_st.site = &rc_emlrtRSI;
                      if (pool_gen_cost.size(0) > 2147483646) {
                        h_st.site = &p_emlrtRSI;
                        coder::check_forloop_overflow_error(&h_st);
                      }
                      for (k = 2; k <= last; k++) {
                        temp_decrz = pool_gen_cost[k - 1];
                        if (max_pool_cost < temp_decrz) {
                          max_pool_cost = temp_decrz;
                          max_pool_ind = k;
                        }
                      }
                    }
                  }
                  //              % 计算多样性成本
                  //              if deteriorate
                  //                  % 更新频率
                  //                  temp_frequency =
                  //                  update_frequency(frequency, new_rs);
                  //
                  //                  % 计算距离
                  //                  total_distance = sum(sol_info.cost(:,1)) -
                  //                  old_cost(1) + new_cost(1);
                  //
                  //                  % 更新frequency
                  //                  cost_div = calculate_diversity(new_rs,
                  //                  div, total_distance, cus_num, v_num,
                  //                  temp_frequency);
                  //              else
                  //                  cost_div = 0;
                  //              end
                  //
                  //              % 计算 广义 + 多样性成本
                  //              temp_gen_div_cost = sum_ori_cost + cost_div -
                  //              sum_old_cost + sum(new_cost,'all');
                  //
                  //              % 更新
                  //              if temp_gen_div_cost <= best_total_cost
                  //                  best_total_cost = temp_gen_div_cost; %
                  //                  更新最佳成本 best_neighbor.routes =
                  //                  new_rs; % 路径 best_neighbor.cost =
                  //                  sol_info.cost; best_neighbor.cost(j,:) =
                  //                  new_cost; % 最佳成本 change_route_ind =
                  //                  double(j); % 变动的路径 best_del =
                  //                  del_arc; % 记录删除的弧
                  //
                  //              end
                }
              }
            }
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  从池子中计算多样性成本，返回相应的参数
  //  先清除没有填进去的位置
  empty_flag.set_size(&ck_emlrtRTEI, sp, pool_gen_cost.size(0));
  last = pool_gen_cost.size(0);
  for (i = 0; i < last; i++) {
    empty_flag[i] = (pool_gen_cost[i] == rtInf);
  }
  //  计算广义成本+多样性成本
  pool_div_gen_cost.set_size(&dk_emlrtRTEI, sp, pool_gen_cost.size(0));
  last = pool_gen_cost.size(0);
  for (i = 0; i < last; i++) {
    pool_div_gen_cost[i] = 0.0;
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, param_pen_pool_size, mxDOUBLE_CLASS,
                                static_cast<int32_T>(param_pen_pool_size),
                                &w_emlrtRTEI, (emlrtConstCTX)sp);
  b_i = 1;
  exitg1 = false;
  while ((!exitg1) &&
         (b_i - 1 <= static_cast<int32_T>(param_pen_pool_size) - 1)) {
    if ((b_i < 1) || (b_i > empty_flag.size(0))) {
      emlrtDynamicBoundsCheckR2012b(b_i, 1, empty_flag.size(0), &fab_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (!empty_flag[b_i - 1]) {
      if (b_i > pool_deter.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_deter.size(0), &gab_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (pool_deter[b_i - 1]) {
        //  退化解记录多样性成本
        if (b_i > pool_routes.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_routes.size(0),
                                        &hy_emlrtBCI, (emlrtConstCTX)sp);
        }
        new_rs.set_size(&fk_emlrtRTEI, sp, 1, pool_routes.size(1),
                        pool_routes.size(2));
        last = pool_routes.size(2);
        for (i = 0; i < last; i++) {
          loop_ub = pool_routes.size(1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            new_rs[i1 + new_rs.size(1) * i] =
                pool_routes[((b_i + pool_routes.size(0) * i1) +
                             pool_routes.size(0) * pool_routes.size(1) * i) -
                            1];
          }
        }
        temp_frequency.set_size(&gk_emlrtRTEI, sp, frequency.size(0),
                                frequency.size(1));
        last = frequency.size(0) * frequency.size(1);
        for (i = 0; i < last; i++) {
          temp_frequency[i] = frequency[i];
        }
        st.site = &fe_emlrtRSI;
        update_frequency(&st, temp_frequency, new_rs);
        //  更新频率
        if (b_i > pool_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_gen_cost.size(0),
                                        &jab_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (b_i > pool_dis.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_dis.size(0), &kab_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (b_i > pool_div_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_div_gen_cost.size(0),
                                        &lab_emlrtBCI, (emlrtConstCTX)sp);
        }
        st.site = &ee_emlrtRSI;
        pool_div_gen_cost[b_i - 1] =
            pool_gen_cost[b_i - 1] +
            calculate_diversity(&st, new_rs, b_div, pool_dis[b_i - 1],
                                static_cast<real_T>(data_dmd.size(0)) - 1.0,
                                data_vnum, temp_frequency);
      } else {
        //  非退化直接记录成本
        if (b_i > pool_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_gen_cost.size(0),
                                        &hab_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (b_i > pool_div_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_div_gen_cost.size(0),
                                        &iab_emlrtBCI, (emlrtConstCTX)sp);
        }
        pool_div_gen_cost[b_i - 1] = pool_gen_cost[b_i - 1];
      }
      b_i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    } else {
      if (b_i > pool_div_gen_cost.size(0)) {
        i = 0;
        i1 = 0;
      } else {
        if (b_i > pool_div_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_div_gen_cost.size(0),
                                        &gy_emlrtBCI, (emlrtConstCTX)sp);
        }
        i = b_i - 1;
        i1 = pool_div_gen_cost.size(0);
      }
      last = i1 - i;
      for (i1 = 0; i1 < last; i1++) {
        pool_div_gen_cost[i + i1] = rtInf;
      }
      exitg1 = true;
    }
  }
  //  返回成本最小的解
  st.site = &de_emlrtRSI;
  b_st.site = &wc_emlrtRSI;
  c_st.site = &xc_emlrtRSI;
  d_st.site = &yc_emlrtRSI;
  if (pool_div_gen_cost.size(0) < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &j_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &nc_emlrtRSI;
  last = pool_div_gen_cost.size(0);
  if (pool_div_gen_cost.size(0) <= 2) {
    if (pool_div_gen_cost.size(0) == 1) {
      *best_total_cost = pool_div_gen_cost[0];
      b_i = 1;
    } else if ((pool_div_gen_cost[0] > pool_div_gen_cost[1]) ||
               (muDoubleScalarIsNaN(pool_div_gen_cost[0]) &&
                (!muDoubleScalarIsNaN(pool_div_gen_cost[1])))) {
      *best_total_cost = pool_div_gen_cost[1];
      b_i = 2;
    } else {
      *best_total_cost = pool_div_gen_cost[0];
      b_i = 1;
    }
  } else {
    f_st.site = &pc_emlrtRSI;
    if (!muDoubleScalarIsNaN(pool_div_gen_cost[0])) {
      b_i = 1;
    } else {
      b_i = 0;
      g_st.site = &qc_emlrtRSI;
      if (pool_div_gen_cost.size(0) > 2147483646) {
        h_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&h_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(pool_div_gen_cost[k - 1])) {
          b_i = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (b_i == 0) {
      *best_total_cost = pool_div_gen_cost[0];
      b_i = 1;
    } else {
      f_st.site = &oc_emlrtRSI;
      *best_total_cost = pool_div_gen_cost[b_i - 1];
      loop_ub = b_i + 1;
      g_st.site = &rc_emlrtRSI;
      if ((b_i + 1 <= pool_div_gen_cost.size(0)) &&
          (pool_div_gen_cost.size(0) > 2147483646)) {
        h_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&h_st);
      }
      for (k = loop_ub; k <= last; k++) {
        temp_decrz = pool_div_gen_cost[k - 1];
        if (*best_total_cost > temp_decrz) {
          *best_total_cost = temp_decrz;
          b_i = k;
        }
      }
    }
  }
  if ((b_i < 1) || (b_i > pool_routes.size(0))) {
    emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_routes.size(0), &fy_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  new_rs.set_size(&ek_emlrtRTEI, sp, 1, pool_routes.size(1),
                  pool_routes.size(2));
  last = pool_routes.size(2);
  for (i = 0; i < last; i++) {
    loop_ub = pool_routes.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      new_rs[i1 + new_rs.size(1) * i] =
          pool_routes[((b_i + pool_routes.size(0) * i1) +
                       pool_routes.size(0) * pool_routes.size(1) * i) -
                      1];
    }
  }
  st.site = &ce_emlrtRSI;
  coder::squeeze(&st, new_rs, sol_info->routes);
  if (b_i > pool_del.size(0)) {
    emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_del.size(0), &dy_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  for (i = 0; i < 2; i++) {
    loop_ub = i << 2;
    best_del[loop_ub] = pool_del[(b_i + pool_del.size(0) * 4 * i) - 1];
    best_del[loop_ub + 1] =
        pool_del[((b_i + pool_del.size(0)) + pool_del.size(0) * 4 * i) - 1];
    best_del[loop_ub + 2] =
        pool_del[((b_i + pool_del.size(0) * 2) + pool_del.size(0) * 4 * i) - 1];
    best_del[loop_ub + 3] =
        pool_del[((b_i + pool_del.size(0) * 3) + pool_del.size(0) * 4 * i) - 1];
  }
  if (b_i > pool_ind.size(0)) {
    emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_ind.size(0), &mab_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  *best_ind = pool_ind[b_i - 1];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (ts_intro_exchanging.cpp)
