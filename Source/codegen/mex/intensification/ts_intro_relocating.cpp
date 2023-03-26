//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ts_intro_relocating.cpp
//
// Code generation for function 'ts_intro_relocating'
//

// Include files
#include "ts_intro_relocating.h"
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
#include "update_frequency.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo x_emlrtRSI{
    219,                   // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo y_emlrtRSI{
    217,                   // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo ab_emlrtRSI{
    205,                   // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo bb_emlrtRSI{
    203,                   // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo cb_emlrtRSI{
    186,                   // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    183,                   // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo eb_emlrtRSI{
    176,                   // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    159,                   // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo gb_emlrtRSI{
    156,                   // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo hb_emlrtRSI{
    105,                   // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    56,                    // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo jb_emlrtRSI{
    50,                    // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    46,                    // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo lb_emlrtRSI{
    41,                    // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo mb_emlrtRSI{
    37,                    // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    20,                    // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

static emlrtBCInfo hu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    220,                   // lineNo
    29,                    // colNo
    "pool_del",            // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo iu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    179,                   // lineNo
    26,                    // colNo
    "pool_del",            // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ju_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    219,                   // lineNo
    44,                    // colNo
    "pool_routes",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ku_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    211,                   // lineNo
    27,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    202,                   // lineNo
    33,                    // colNo
    "pool_routes",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtECInfo bb_emlrtECI{
    -1,                    // nDims
    178,                   // lineNo
    17,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtBCInfo mu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    178,                   // lineNo
    29,                    // colNo
    "pool_routes",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo v_emlrtRTEI{
    198,                   // lineNo
    9,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtECInfo cb_emlrtECI{
    -1,                    // nDims
    169,                   // lineNo
    13,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtBCInfo nu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    169,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ou_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    169,                   // lineNo
    22,                    // colNo
    "new_rs",              // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    169,                   // lineNo
    20,                    // colNo
    "new_rs",              // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    168,                   // lineNo
    20,                    // colNo
    "new_rs",              // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ru_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    139,                   // lineNo
    37,                    // colNo
    "new_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo su_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    138,                   // lineNo
    38,                    // colNo
    "new_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    118,                   // lineNo
    35,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    117,                   // lineNo
    37,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    117,                   // lineNo
    35,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    100,                   // lineNo
    49,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    100,                   // lineNo
    39,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yu_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    83,                    // lineNo
    49,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo av_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    83,                    // lineNo
    39,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    55,                    // lineNo
    30,                    // colNo
    "sol_info.cost",       // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtECInfo db_emlrtECI{
    2,                     // nDims
    51,                    // lineNo
    19,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtBCInfo cv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    49,                    // lineNo
    37,                    // colNo
    "sol_info.a_r_time",   // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    40,                    // lineNo
    37,                    // colNo
    "sol_info.a_c_time",   // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ev_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    37,                    // lineNo
    34,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    37,                    // lineNo
    32,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    36,                    // lineNo
    33,                    // colNo
    "sol_info.routes",     // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtDCInfo lb_emlrtDCI{
    26,                    // lineNo
    26,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo mb_emlrtDCI{
    22,                    // lineNo
    27,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo nb_emlrtDCI{
    22,                    // lineNo
    27,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    4                       // checkKind
};

static emlrtDCInfo ob_emlrtDCI{
    23,                    // lineNo
    24,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo pb_emlrtDCI{
    22,                    // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo qb_emlrtDCI{
    23,                    // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo rb_emlrtDCI{
    24,                    // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo sb_emlrtDCI{
    25,                    // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo tb_emlrtDCI{
    27,                    // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    1                       // checkKind
};

static emlrtBCInfo hv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    199,                   // lineNo
    20,                    // colNo
    "empty_flag",          // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo iv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    200,                   // lineNo
    23,                    // colNo
    "pool_deter",          // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    208,                   // lineNo
    50,                    // colNo
    "pool_gen_cost",       // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    208,                   // lineNo
    31,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    205,                   // lineNo
    31,                    // colNo
    "pool_gen_cost",       // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    205,                   // lineNo
    78,                    // colNo
    "pool_dis",            // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    204,                   // lineNo
    31,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ov_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    221,                   // lineNo
    21,                    // colNo
    "pool_ind",            // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    51,                    // lineNo
    41,                    // colNo
    "data.tw",             // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    52,                    // lineNo
    17,                    // colNo
    "old_puntime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    61,                    // lineNo
    23,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    88,                    // lineNo
    28,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    88,                    // lineNo
    44,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    89,                    // lineNo
    28,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    90,                    // lineNo
    31,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    72,                    // lineNo
    28,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    73,                    // lineNo
    31,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    74,                    // lineNo
    28,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo aw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    74,                    // lineNo
    44,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    28,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    42,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    92,                    // lineNo
    28,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ew_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    93,                    // lineNo
    31,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    75,                    // lineNo
    28,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    75,                    // lineNo
    44,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    76,                    // lineNo
    28,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo iw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    77,                    // lineNo
    31,                    // colNo
    "old_route",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    102,                   // lineNo
    39,                    // colNo
    "partial_2",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    85,                    // lineNo
    39,                    // colNo
    "partial_2",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    109,                   // lineNo
    25,                    // colNo
    "data.arc",            // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    109,                   // lineNo
    41,                    // colNo
    "data.arc",            // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    110,                   // lineNo
    25,                    // colNo
    "data.arc",            // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ow_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    110,                   // lineNo
    41,                    // colNo
    "data.arc",            // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    111,                   // lineNo
    25,                    // colNo
    "data.arc",            // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    111,                   // lineNo
    41,                    // colNo
    "data.arc",            // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    124,                   // lineNo
    29,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    124,                   // lineNo
    45,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    125,                   // lineNo
    29,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    125,                   // lineNo
    45,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    29,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ww_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    45,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    127,                   // lineNo
    29,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    127,                   // lineNo
    45,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ax_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    128,                   // lineNo
    29,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    128,                   // lineNo
    45,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    129,                   // lineNo
    29,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    129,                   // lineNo
    45,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ex_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    141,                   // lineNo
    46,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    141,                   // lineNo
    61,                    // colNo
    "data.st",             // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    141,                   // lineNo
    85,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    141,                   // lineNo
    96,                    // colNo
    "data.dist",           // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ix_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    141,                   // lineNo
    29,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    142,                   // lineNo
    32,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    142,                   // lineNo
    45,                    // colNo
    "data.tw",             // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    145,                   // lineNo
    36,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    145,                   // lineNo
    49,                    // colNo
    "data.tw",             // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    149,                   // lineNo
    33,                    // colNo
    "new_puntime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ox_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    143,                   // lineNo
    46,                    // colNo
    "data.tw",             // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo px_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    143,                   // lineNo
    33,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    146,                   // lineNo
    50,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    146,                   // lineNo
    63,                    // colNo
    "data.tw",             // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    146,                   // lineNo
    33,                    // colNo
    "new_puntime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    144,                   // lineNo
    33,                    // colNo
    "new_puntime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ux_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    147,                   // lineNo
    46,                    // colNo
    "data.tw",             // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    147,                   // lineNo
    33,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    152,                   // lineNo
    47,                    // colNo
    "new_arrtime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    152,                   // lineNo
    63,                    // colNo
    "old_arrtime",         // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yx_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    180,                   // lineNo
    26,                    // colNo
    "pool_ind",            // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ay_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    181,                   // lineNo
    28,                    // colNo
    "pool_deter",          // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo by_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    182,                   // lineNo
    31,                    // colNo
    "pool_gen_cost",       // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cy_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    183,                   // lineNo
    26,                    // colNo
    "pool_dis",            // aName
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo ai_emlrtRTEI{
    22,                    // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo bi_emlrtRTEI{
    23,                    // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo ci_emlrtRTEI{
    24,                    // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo di_emlrtRTEI{
    25,                    // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo ei_emlrtRTEI{
    26,                    // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo fi_emlrtRTEI{
    27,                    // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo gi_emlrtRTEI{
    37,                    // lineNo
    5,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo hi_emlrtRTEI{
    37,                    // lineNo
    15,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo ii_emlrtRTEI{
    41,                    // lineNo
    12,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo ji_emlrtRTEI{
    44,                    // lineNo
    9,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo ki_emlrtRTEI{
    42,                    // lineNo
    9,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo li_emlrtRTEI{
    46,                    // lineNo
    5,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo mi_emlrtRTEI{
    50,                    // lineNo
    5,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo ni_emlrtRTEI{
    51,                    // lineNo
    33,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo oi_emlrtRTEI{
    51,                    // lineNo
    5,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo pi_emlrtRTEI{
    28,      // lineNo
    9,       // colNo
    "colon", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/colon.m" // pName
};

static emlrtRTEInfo qi_emlrtRTEI{
    102,                   // lineNo
    39,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo ri_emlrtRTEI{
    102,                   // lineNo
    17,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo si_emlrtRTEI{
    85,                    // lineNo
    39,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo ti_emlrtRTEI{
    85,                    // lineNo
    17,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo ui_emlrtRTEI{
    119,                   // lineNo
    13,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo vi_emlrtRTEI{
    135,                   // lineNo
    13,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo wi_emlrtRTEI{
    136,                   // lineNo
    13,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo xi_emlrtRTEI{
    167,                   // lineNo
    13,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo yi_emlrtRTEI{
    183,                   // lineNo
    46,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo aj_emlrtRTEI{
    193,                   // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo bj_emlrtRTEI{
    197,                   // lineNo
    1,                     // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo cj_emlrtRTEI{
    219,                   // lineNo
    32,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo dj_emlrtRTEI{
    202,                   // lineNo
    13,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo ej_emlrtRTEI{
    203,                   // lineNo
    13,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRTEInfo hk_emlrtRTEI{
    51,                    // lineNo
    19,                    // colNo
    "ts_intro_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pName
};

static emlrtRSInfo rh_emlrtRSI{
    51,                    // lineNo
    "ts_intro_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_intro_relocating.m" // pathName
};

// Function Definitions
void binary_expand_op(const emlrtStack *sp, coder::array<real_T, 2U> &in1,
                      const coder::array<real_T, 1U> &in2)
{
  coder::array<real_T, 2U> b_in1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in2.size(0) == 1) {
    i = in1.size(1);
  } else {
    i = in2.size(0);
  }
  b_in1.set_size(&hk_emlrtRTEI, sp, 1, i);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_1 = (in2.size(0) != 1);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(1);
  } else {
    loop_ub = in2.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_1] - in2[i * stride_1_1];
  }
  in1.set_size(&oi_emlrtRTEI, sp, 1, b_in1.size(1));
  loop_ub = b_in1.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void ts_intro_relocating(const emlrtStack *sp, struct0_T *sol_info,
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
                         int16_T best_del[6], real_T *best_ind)
{
  coder::array<real_T, 2U> new_arrtime;
  coder::array<real_T, 2U> new_puntime;
  coder::array<real_T, 2U> old_arrtime;
  coder::array<real_T, 2U> old_puntime;
  coder::array<real_T, 2U> temp_frequency;
  coder::array<real_T, 1U> pool_dis;
  coder::array<real_T, 1U> pool_div_gen_cost;
  coder::array<real_T, 1U> pool_gen_cost;
  coder::array<int32_T, 2U> b_new_arrtime;
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
  int32_T idx;
  int32_T k;
  int32_T last;
  int32_T loop_ub;
  int32_T max_pool_ind;
  int16_T add_arc[6];
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
  // INTRARELOCATION 线路内部客户重新分配位置
  //  将每个线路中每个客户的位置重新分配
  //  与交换位置不同，重新分配并不改变其他客户的顺序
  //  进行三个循环的嵌套，分别控制选择的路径，路径中的客户，重新插入的位置
  //  返回该邻域下最佳的一个解
  //  传出
  //  neighbor      1*n+2*nb_length     邻域
  //  decrz_cost    1*nb_length         减量成本
  //  cost_rec      4*nb_length         成本记录
  //  del_arc       3*2                 删除的弧
  //  change_id     1*nb_length         变动的路径
  //  inferior      1*nb_length         退化标记
  //  初始化申请内存
  //  记录变化之后的成本
  //  顾客数量
  //  车辆数
  st.site = &nb_emlrtRSI;
  sum_ori_cost = coder::sum(&st, sol_info->cost);
  //  原始解sol_inf的成本
  if (!(param_pen_pool_size >= 0.0)) {
    emlrtNonNegativeCheckR2012b(param_pen_pool_size, &nb_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(param_pen_pool_size));
  if (param_pen_pool_size != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &mb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_routes.set_size(&ai_emlrtRTEI, sp,
                       static_cast<int32_T>(param_pen_pool_size),
                       sol_info->routes.size(0), sol_info->routes.size(1));
  if (param_pen_pool_size != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &pb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  last = static_cast<int32_T>(param_pen_pool_size) * sol_info->routes.size(0) *
         sol_info->routes.size(1);
  for (i1 = 0; i1 < last; i1++) {
    pool_routes[i1] = 0;
  }
  //  邻域池子
  if (param_pen_pool_size != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &ob_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  last = static_cast<int32_T>(param_pen_pool_size);
  pool_del.set_size(&bi_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen_pool_size), 3, 2);
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &qb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = (static_cast<int32_T>(param_pen_pool_size) * 3) << 1;
  for (i1 = 0; i1 < loop_ub; i1++) {
    pool_del[i1] = 0;
  }
  //  每个邻域解对应删除的弧
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &rb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_ind.set_size(&ci_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen_pool_size));
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &rb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (i1 = 0; i1 < last; i1++) {
    pool_ind[i1] = 0U;
  }
  //  每个邻域解对应变动索引
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &sb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_deter.set_size(&di_emlrtRTEI, sp,
                      static_cast<int32_T>(param_pen_pool_size));
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &sb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (i1 = 0; i1 < last; i1++) {
    pool_deter[i1] = false;
  }
  //  每个邻域解是否退化
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &lb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_gen_cost.set_size(&ei_emlrtRTEI, sp,
                         static_cast<int32_T>(param_pen_pool_size));
  for (i1 = 0; i1 < last; i1++) {
    pool_gen_cost[i1] = rtInf;
  }
  //  每个邻域解的广义成本
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &tb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_dis.set_size(&fi_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen_pool_size));
  if (static_cast<int32_T>(param_pen_pool_size) != i) {
    emlrtIntegerCheckR2012b(param_pen_pool_size, &tb_emlrtDCI,
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
        emlrtDynamicBoundsCheckR2012b(2, 1, i1, &fv_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i2 = 1;
      i1 = sol_info->routes.size(1);
      i3 = sol_info->routes.size(1) - 1;
      if ((i3 < 1) || (i3 > i1)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ev_emlrtBCI,
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
    //  命名为old_系列 表示未进行操作的原始路径
    //  路径
    i1 = sol_info->routes.size(0);
    if (j + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, &gv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    old_route.set_size(&gi_emlrtRTEI, sp, 1, sol_info->routes.size(1));
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      old_route[i1] = sol_info->routes[j + sol_info->routes.size(0) * i1];
    }
    i1 = i3 - i2;
    del_ind_time.set_size(&hi_emlrtRTEI, sp, 1, i1 + 2);
    del_ind_time[0] = false;
    for (i4 = 0; i4 < c_loop_ub; i4++) {
      del_ind_time[i4 + 1] =
          (sol_info->routes[j + sol_info->routes.size(0) * (i2 + i4)] == 0);
    }
    del_ind_time[i1 + 1] = false;
    st.site = &mb_emlrtRSI;
    coder::internal::nullAssignment(&st, old_route, del_ind_time);
    //  去掉不必要的0
    //  到达时间
    i1 = sol_info->a_c_time.size(0);
    if (j + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, &dv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    //  获取路径的到达时间
    del_ind_time.set_size(&ii_emlrtRTEI, sp, 1, old_route.size(1));
    last = old_route.size(1);
    for (i1 = 0; i1 < last; i1++) {
      del_ind_time[i1] = (old_route[i1] == 0);
    }
    st.site = &lb_emlrtRSI;
    if (coder::all(&st, del_ind_time)) {
      i1 = sol_info->a_c_time.size(1);
      if (i1 < 3) {
        i4 = 0;
        i1 = 0;
      } else {
        i4 = 2;
      }
      last = i1 - i4;
      del_ind_time.set_size(&ki_emlrtRTEI, sp, 1, last + 2);
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
      del_ind_time.set_size(&ji_emlrtRTEI, sp, 1, last + 1);
      del_ind_time[0] = false;
      for (i1 = 0; i1 < last; i1++) {
        del_ind_time[i1 + 1] =
            (sol_info->a_c_time[j + sol_info->a_c_time.size(0) * (i4 + i1)] ==
             0.0);
      }
    }
    old_arrtime.set_size(&li_emlrtRTEI, sp, 1, sol_info->a_c_time.size(1));
    for (i1 = 0; i1 < d_loop_ub; i1++) {
      old_arrtime[i1] = sol_info->a_c_time[j + sol_info->a_c_time.size(0) * i1];
    }
    st.site = &kb_emlrtRSI;
    coder::internal::b_nullAssignment(&st, old_arrtime, del_ind_time);
    //  去掉不必要的0
    //  惩罚时间
    i1 = sol_info->a_r_time.size(0);
    if (j + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, &cv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    //  计算惩罚时间
    old_puntime.set_size(&mi_emlrtRTEI, sp, 1, sol_info->a_r_time.size(1));
    for (i1 = 0; i1 < e_loop_ub; i1++) {
      old_puntime[i1] = sol_info->a_r_time[j + sol_info->a_r_time.size(0) * i1];
    }
    st.site = &jb_emlrtRSI;
    coder::internal::b_nullAssignment(&st, old_puntime, del_ind_time);
    //  去掉不必要的0
    pool_div_gen_cost.set_size(&ni_emlrtRTEI, sp, old_route.size(1));
    last = old_route.size(1);
    for (i1 = 0; i1 < last; i1++) {
      i4 = old_route[i1] + 1;
      if (i4 > 32767) {
        i4 = 32767;
      }
      if ((i4 < 1) || (i4 > b_data_tw)) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, b_data_tw, &pv_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      pool_div_gen_cost[i1] = data_tw[(i4 + data_tw.size(0)) - 1];
    }
    if ((old_puntime.size(1) != old_route.size(1)) &&
        ((old_puntime.size(1) != 1) && (old_route.size(1) != 1))) {
      emlrtDimSizeImpxCheckR2021b(old_puntime.size(1), old_route.size(1),
                                  &db_emlrtECI, (emlrtConstCTX)sp);
    }
    if (pool_div_gen_cost.size(0) == old_puntime.size(1)) {
      old_puntime.set_size(&oi_emlrtRTEI, sp, 1, old_puntime.size(1));
      last = old_puntime.size(1);
      for (i1 = 0; i1 < last; i1++) {
        old_puntime[i1] = old_puntime[i1] - pool_div_gen_cost[i1];
      }
    } else {
      st.site = &rh_emlrtRSI;
      binary_expand_op(&st, old_puntime, pool_div_gen_cost);
    }
    //  实际到达时间减去右时间窗
    loop_ub = old_puntime.size(1);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      if (old_puntime[b_i] < 0.0) {
        if (b_i + 1 > old_puntime.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, old_puntime.size(1),
                                        &qv_emlrtBCI, (emlrtConstCTX)sp);
        }
        old_puntime[b_i] = 0.0;
      }
    }
    //  成本
    i1 = sol_info->cost.size(0);
    if (j + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, &bv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    old_cost[0] = sol_info->cost[j];
    old_cost[1] = sol_info->cost[j + sol_info->cost.size(0)];
    old_cost[2] = sol_info->cost[j + sol_info->cost.size(0) * 2];
    st.site = &ib_emlrtRSI;
    sum_old_cost = coder::sum(old_cost);
    //  循环取出路径中的每个客户并重新安排至每个位置
    i1 = old_route.size(1);
    for (b_i = 0; b_i <= i1 - 3; b_i++) {
      int16_T v;
      //  route前后是0 因此索引2是第一个客户
      if (b_i + 2 > old_route.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, old_route.size(1),
                                      &rv_emlrtBCI, (emlrtConstCTX)sp);
      }
      v = old_route[b_i + 1];
      i4 = old_route.size(1);
      for (int32_T p{0}; p <= i4 - 3; p++) {
        //  p 是重新分配后的索引
        if (p != b_i) {
          int32_T end_ind;
          int32_T i5;
          int32_T i6;
          int32_T i7;
          int32_T i8;
          int32_T start_ind;
          int16_T del_arc[6];
          if (p < b_i) {
            //  选定的客户被分配到更前面的位置
            //  弧关系
            if (p + 1 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(p + 1, 1, old_route.size(1),
                                            &wv_emlrtBCI, (emlrtConstCTX)sp);
            }
            add_arc[0] = old_route[p];
            add_arc[3] = v;
            add_arc[1] = v;
            if (p + 2 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(p + 2, 1, old_route.size(1),
                                            &xv_emlrtBCI, (emlrtConstCTX)sp);
            }
            add_arc[4] = old_route[p + 1];
            if (b_i + 1 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, old_route.size(1),
                                            &yv_emlrtBCI, (emlrtConstCTX)sp);
            }
            add_arc[2] = old_route[b_i];
            if (b_i + 3 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(b_i + 3, 1, old_route.size(1),
                                            &aw_emlrtBCI, (emlrtConstCTX)sp);
            }
            add_arc[5] = old_route[b_i + 2];
            //  增加的弧
            if (p + 1 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(p + 1, 1, old_route.size(1),
                                            &fw_emlrtBCI, (emlrtConstCTX)sp);
            }
            del_arc[0] = old_route[p];
            if (p + 2 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(p + 2, 1, old_route.size(1),
                                            &gw_emlrtBCI, (emlrtConstCTX)sp);
            }
            del_arc[3] = old_route[p + 1];
            if (b_i + 1 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, old_route.size(1),
                                            &hw_emlrtBCI, (emlrtConstCTX)sp);
            }
            del_arc[1] = old_route[b_i];
            del_arc[4] = v;
            del_arc[2] = v;
            if (b_i + 3 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(b_i + 3, 1, old_route.size(1),
                                            &iw_emlrtBCI, (emlrtConstCTX)sp);
            }
            del_arc[5] = old_route[b_i + 2];
            //  删除的弧
            //  变动点
            start_ind = p;
            //  变动起点
            end_ind = b_i + 3;
            //  变动终点
            //  进行交换
            if (p > b_i) {
              i5 = 0;
              i6 = 0;
            } else {
              if (p + 2 > old_route.size(1)) {
                emlrtDynamicBoundsCheckR2012b(p + 2, 1, old_route.size(1),
                                              &av_emlrtBCI, (emlrtConstCTX)sp);
              }
              i5 = p + 1;
              if (b_i + 2 > old_route.size(1)) {
                emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, old_route.size(1),
                                              &yu_emlrtBCI, (emlrtConstCTX)sp);
              }
              i6 = b_i + 2;
            }
            i6 -= i5;
            if (i6 - 1 < 1) {
              new_arrtime.set_size(&pi_emlrtRTEI, sp, 1, 0);
            } else {
              new_arrtime.set_size(
                  &pi_emlrtRTEI, sp, 1,
                  static_cast<int32_T>((static_cast<real_T>(i6) - 1.0) - 1.0) +
                      1);
              last =
                  static_cast<int32_T>((static_cast<real_T>(i6) - 1.0) - 1.0);
              for (i7 = 0; i7 <= last; i7++) {
                new_arrtime[i7] = static_cast<real_T>(i7) + 1.0;
              }
            }
            b_new_arrtime.set_size(&si_emlrtRTEI, sp, 1,
                                   new_arrtime.size(1) + 1);
            if (i6 < 1) {
              emlrtDynamicBoundsCheckR2012b(i6, 1, i6, &kw_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            b_new_arrtime[0] = i6 - 1;
            last = new_arrtime.size(1);
            for (i7 = 0; i7 < last; i7++) {
              i8 = static_cast<int32_T>(new_arrtime[i7]);
              if (i8 > i6) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(new_arrtime[i7]), 1, i6, &kw_emlrtBCI,
                    (emlrtConstCTX)sp);
              }
              b_new_arrtime[i7 + 1] = i8 - 1;
            }
            partial_2.set_size(&ti_emlrtRTEI, sp, 1, b_new_arrtime.size(1));
            last = b_new_arrtime.size(1);
            for (i6 = 0; i6 < last; i6++) {
              partial_2[i6] = old_route[i5 + b_new_arrtime[i6]];
            }
          } else {
            //  p > i 选定的客户被分配到更后面的位置
            //  弧关系
            if (b_i + 1 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, old_route.size(1),
                                            &sv_emlrtBCI, (emlrtConstCTX)sp);
            }
            add_arc[0] = old_route[b_i];
            if (b_i + 3 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(b_i + 3, 1, old_route.size(1),
                                            &tv_emlrtBCI, (emlrtConstCTX)sp);
            }
            add_arc[3] = old_route[b_i + 2];
            if (p + 2 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(p + 2, 1, old_route.size(1),
                                            &uv_emlrtBCI, (emlrtConstCTX)sp);
            }
            add_arc[1] = old_route[p + 1];
            add_arc[4] = v;
            add_arc[2] = v;
            if (p + 3 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(p + 3, 1, old_route.size(1),
                                            &vv_emlrtBCI, (emlrtConstCTX)sp);
            }
            add_arc[5] = old_route[p + 2];
            //  增加的弧
            if (p + 2 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(p + 2, 1, old_route.size(1),
                                            &bw_emlrtBCI, (emlrtConstCTX)sp);
            }
            del_arc[0] = old_route[p + 1];
            if (p + 3 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(p + 3, 1, old_route.size(1),
                                            &cw_emlrtBCI, (emlrtConstCTX)sp);
            }
            del_arc[3] = old_route[p + 2];
            if (b_i + 1 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, old_route.size(1),
                                            &dw_emlrtBCI, (emlrtConstCTX)sp);
            }
            del_arc[1] = old_route[b_i];
            del_arc[4] = v;
            del_arc[2] = v;
            if (b_i + 3 > old_route.size(1)) {
              emlrtDynamicBoundsCheckR2012b(b_i + 3, 1, old_route.size(1),
                                            &ew_emlrtBCI, (emlrtConstCTX)sp);
            }
            del_arc[5] = old_route[b_i + 2];
            //  删除的弧
            //  变动点
            start_ind = b_i;
            end_ind = p + 3;
            //  进行交换
            if (b_i > p) {
              i5 = 0;
              i6 = 0;
            } else {
              if (b_i + 2 > old_route.size(1)) {
                emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, old_route.size(1),
                                              &xu_emlrtBCI, (emlrtConstCTX)sp);
              }
              i5 = b_i + 1;
              if (p + 2 > old_route.size(1)) {
                emlrtDynamicBoundsCheckR2012b(p + 2, 1, old_route.size(1),
                                              &wu_emlrtBCI, (emlrtConstCTX)sp);
              }
              i6 = p + 2;
            }
            i6 -= i5;
            if (i6 < 2) {
              new_arrtime.set_size(&pi_emlrtRTEI, sp, 1, 0);
            } else {
              new_arrtime.set_size(&pi_emlrtRTEI, sp, 1, i6 - 1);
              last = i6 - 2;
              for (i7 = 0; i7 <= last; i7++) {
                new_arrtime[i7] = static_cast<real_T>(i7) + 2.0;
              }
            }
            b_new_arrtime.set_size(&qi_emlrtRTEI, sp, 1,
                                   new_arrtime.size(1) + 1);
            last = new_arrtime.size(1);
            for (i7 = 0; i7 < last; i7++) {
              i8 = static_cast<int32_T>(new_arrtime[i7]);
              if (i8 > i6) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(new_arrtime[i7]), 1, i6, &jw_emlrtBCI,
                    (emlrtConstCTX)sp);
              }
              b_new_arrtime[i7] = i8 - 1;
            }
            if (i6 < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, i6, &jw_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            b_new_arrtime[new_arrtime.size(1)] = 0;
            partial_2.set_size(&ri_emlrtRTEI, sp, 1, b_new_arrtime.size(1));
            last = b_new_arrtime.size(1);
            for (i6 = 0; i6 < last; i6++) {
              partial_2[i6] = old_route[i5 + b_new_arrtime[i6]];
            }
          }
          st.site = &hb_emlrtRSI;
          if (!myismember(&st, add_arc, tabu_list)) {
            i5 = add_arc[0] + 1;
            if (add_arc[0] + 1 > 32767) {
              i5 = 32767;
            }
            if ((i5 < 1) || (i5 > data_arc.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, data_arc.size(0),
                                            &lw_emlrtBCI, (emlrtConstCTX)sp);
            }
            i6 = add_arc[3] + 1;
            if (add_arc[3] + 1 > 32767) {
              i6 = 32767;
            }
            if ((i6 < 1) || (i6 > data_arc.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i6, 1, data_arc.size(1),
                                            &mw_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (data_arc[(i5 + data_arc.size(0) * (i6 - 1)) - 1]) {
              i5 = add_arc[1] + 1;
              if (add_arc[1] + 1 > 32767) {
                i5 = 32767;
              }
              if ((i5 < 1) || (i5 > data_arc.size(0))) {
                emlrtDynamicBoundsCheckR2012b(i5, 1, data_arc.size(0),
                                              &nw_emlrtBCI, (emlrtConstCTX)sp);
              }
              i6 = add_arc[4] + 1;
              if (add_arc[4] + 1 > 32767) {
                i6 = 32767;
              }
              if ((i6 < 1) || (i6 > data_arc.size(1))) {
                emlrtDynamicBoundsCheckR2012b(i6, 1, data_arc.size(1),
                                              &ow_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (data_arc[(i5 + data_arc.size(0) * (i6 - 1)) - 1]) {
                i5 = add_arc[2] + 1;
                if (add_arc[2] + 1 > 32767) {
                  i5 = 32767;
                }
                if ((i5 < 1) || (i5 > data_arc.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(
                      i5, 1, data_arc.size(0), &pw_emlrtBCI, (emlrtConstCTX)sp);
                }
                i6 = add_arc[5] + 1;
                if (add_arc[5] + 1 > 32767) {
                  i6 = 32767;
                }
                if ((i6 < 1) || (i6 > data_arc.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(
                      i6, 1, data_arc.size(1), &qw_emlrtBCI, (emlrtConstCTX)sp);
                }
                if (data_arc[(i5 + data_arc.size(0) * (i6 - 1)) - 1]) {
                  int32_T i10;
                  int32_T i11;
                  int32_T i12;
                  int32_T i9;
                  boolean_T deteriorate;
                  //  生成新的路径
                  //  把路径分成三份，第一份和第三份是不变动的，第二份是变动的
                  if (old_route.size(1) < 1) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, old_route.size(1),
                                                  &vu_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (start_ind + 1 > old_route.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        start_ind + 1, 1, old_route.size(1), &uu_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  if (end_ind > old_route.size(1)) {
                    i5 = 0;
                    i6 = 0;
                  } else {
                    if (end_ind > old_route.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(
                          end_ind, 1, old_route.size(1), &tu_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    i5 = end_ind - 1;
                    i6 = old_route.size(1);
                  }
                  new_route.set_size(
                      &ui_emlrtRTEI, sp, 1,
                      (((start_ind + partial_2.size(1)) + i6) - i5) + 1);
                  for (i7 = 0; i7 <= start_ind; i7++) {
                    new_route[i7] = old_route[i7];
                  }
                  last = partial_2.size(1);
                  for (i7 = 0; i7 < last; i7++) {
                    new_route[(i7 + start_ind) + 1] = partial_2[i7];
                  }
                  last = i6 - i5;
                  for (i6 = 0; i6 < last; i6++) {
                    new_route[((i6 + start_ind) + partial_2.size(1)) + 1] =
                        old_route[i5 + i6];
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
                                                  &rw_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i6 = add_arc[3] + 1;
                  if (add_arc[3] + 1 > 32767) {
                    i6 = 32767;
                  }
                  if ((i6 < 1) || (i6 > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i6, 1, data_dist.size(1),
                                                  &sw_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i7 = add_arc[1] + 1;
                  if (add_arc[1] + 1 > 32767) {
                    i7 = 32767;
                  }
                  if ((i7 < 1) || (i7 > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i7, 1, data_dist.size(0),
                                                  &tw_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i8 = add_arc[4] + 1;
                  if (add_arc[4] + 1 > 32767) {
                    i8 = 32767;
                  }
                  if ((i8 < 1) || (i8 > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i8, 1, data_dist.size(1),
                                                  &uw_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i9 = add_arc[2] + 1;
                  if (add_arc[2] + 1 > 32767) {
                    i9 = 32767;
                  }
                  if ((i9 < 1) || (i9 > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i9, 1, data_dist.size(0),
                                                  &vw_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  idx = add_arc[5] + 1;
                  if (add_arc[5] + 1 > 32767) {
                    idx = 32767;
                  }
                  if ((idx < 1) || (idx > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(idx, 1, data_dist.size(1),
                                                  &ww_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  last = del_arc[0] + 1;
                  if (del_arc[0] + 1 > 32767) {
                    last = 32767;
                  }
                  if ((last < 1) || (last > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(last, 1, data_dist.size(0),
                                                  &xw_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  loop_ub = del_arc[3] + 1;
                  if (del_arc[3] + 1 > 32767) {
                    loop_ub = 32767;
                  }
                  if ((loop_ub < 1) || (loop_ub > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, data_dist.size(1),
                                                  &yw_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  k = del_arc[1] + 1;
                  if (del_arc[1] + 1 > 32767) {
                    k = 32767;
                  }
                  if ((k < 1) || (k > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, data_dist.size(0),
                                                  &ax_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i10 = del_arc[4] + 1;
                  if (del_arc[4] + 1 > 32767) {
                    i10 = 32767;
                  }
                  if ((i10 < 1) || (i10 > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i10, 1, data_dist.size(1),
                                                  &bx_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i11 = del_arc[2] + 1;
                  if (del_arc[2] + 1 > 32767) {
                    i11 = 32767;
                  }
                  if ((i11 < 1) || (i11 > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i11, 1, data_dist.size(0),
                                                  &cx_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i12 = del_arc[5] + 1;
                  if (del_arc[5] + 1 > 32767) {
                    i12 = 32767;
                  }
                  if ((i12 < 1) || (i12 > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i12, 1, data_dist.size(1),
                                                  &dx_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  new_cost[0] =
                      (((((sol_info->cost[j] +
                           data_dist[(i5 + data_dist.size(0) * (i6 - 1)) - 1]) +
                          data_dist[(i7 + data_dist.size(0) * (i8 - 1)) - 1]) +
                         data_dist[(i9 + data_dist.size(0) * (idx - 1)) - 1]) -
                        data_dist[(last + data_dist.size(0) * (loop_ub - 1)) -
                                  1]) -
                       data_dist[(k + data_dist.size(0) * (i10 - 1)) - 1]) -
                      data_dist[(i11 + data_dist.size(0) * (i12 - 1)) - 1];
                  //  2. 惩罚容量
                  new_cost[1] = sol_info->cost[j + sol_info->cost.size(0)];
                  //  3. 时间惩罚
                  new_arrtime.set_size(&vi_emlrtRTEI, sp, 1,
                                       old_arrtime.size(1));
                  last = old_arrtime.size(1);
                  for (i5 = 0; i5 < last; i5++) {
                    new_arrtime[i5] = old_arrtime[i5];
                  }
                  new_puntime.set_size(&wi_emlrtRTEI, sp, 1,
                                       old_puntime.size(1));
                  last = old_puntime.size(1);
                  for (i5 = 0; i5 < last; i5++) {
                    new_puntime[i5] = old_puntime[i5];
                  }
                  i5 = old_route.size(1) - start_ind;
                  k = 0;
                  exitg1 = false;
                  while ((!exitg1) && (k <= i5 - 2)) {
                    uint32_T b_k;
                    boolean_T guard1{false};
                    b_k = (static_cast<uint32_T>(start_ind) +
                           static_cast<uint32_T>(k)) +
                          2U;
                    if ((static_cast<int32_T>(static_cast<real_T>(b_k) - 1.0) <
                         1) ||
                        (static_cast<int32_T>(static_cast<real_T>(b_k) - 1.0) >
                         new_route.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(static_cast<real_T>(b_k) - 1.0),
                          1, new_route.size(1), &su_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    //  前一个点
                    if ((static_cast<int32_T>(b_k) < 1) ||
                        (static_cast<int32_T>(b_k) > new_route.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(b_k), 1, new_route.size(1),
                          &ru_emlrtBCI, (emlrtConstCTX)sp);
                    }
                    //  当前点
                    //  新的到达时间
                    if ((static_cast<int32_T>(b_k) - 1 < 1) ||
                        (static_cast<int32_T>(b_k) - 1 > new_arrtime.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(b_k) - 1, 1, new_arrtime.size(1),
                          &ex_emlrtBCI, (emlrtConstCTX)sp);
                    }
                    i6 = new_route[static_cast<int32_T>(b_k) - 2] + 1;
                    i7 = i6;
                    if (i6 > 32767) {
                      i7 = 32767;
                    }
                    if ((i7 < 1) || (i7 > data_st.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i7, 1, data_st.size(0),
                                                    &fx_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (i6 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data_dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data_dist.size(0),
                                                    &gx_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i8 = new_route[static_cast<int32_T>(b_k) - 1] + 1;
                    i9 = i8;
                    if (i8 > 32767) {
                      i9 = 32767;
                    }
                    if ((i9 < 1) || (i9 > data_dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(i9, 1, data_dist.size(1),
                                                    &hx_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if ((static_cast<int32_T>(b_k) < 1) ||
                        (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                          &ix_emlrtBCI, (emlrtConstCTX)sp);
                    }
                    new_arrtime[static_cast<int32_T>(b_k) - 1] =
                        (new_arrtime[static_cast<int32_T>(b_k) - 2] +
                         data_st[i7 - 1]) +
                        data_dist[(i6 + data_dist.size(0) * (i9 - 1)) - 1];
                    if ((static_cast<int32_T>(b_k) < 1) ||
                        (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                          &jx_emlrtBCI, (emlrtConstCTX)sp);
                    }
                    i6 = i8;
                    if (i8 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data_tw.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data_tw.size(0),
                                                    &kx_emlrtBCI,
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
                                                      &ox_emlrtBCI,
                                                      (emlrtConstCTX)sp);
                      }
                      if ((static_cast<int32_T>(b_k) < 1) ||
                          (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                        emlrtDynamicBoundsCheckR2012b(
                            static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                            &px_emlrtBCI, (emlrtConstCTX)sp);
                      }
                      new_arrtime[static_cast<int32_T>(b_k) - 1] =
                          data_tw[i8 - 1];
                      if ((static_cast<int32_T>(b_k) < 1) ||
                          (static_cast<int32_T>(b_k) > new_puntime.size(1))) {
                        emlrtDynamicBoundsCheckR2012b(
                            static_cast<int32_T>(b_k), 1, new_puntime.size(1),
                            &tx_emlrtBCI, (emlrtConstCTX)sp);
                      }
                      new_puntime[static_cast<int32_T>(b_k) - 1] = 0.0;
                    } else {
                      if ((static_cast<int32_T>(b_k) < 1) ||
                          (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                        emlrtDynamicBoundsCheckR2012b(
                            static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                            &lx_emlrtBCI, (emlrtConstCTX)sp);
                      }
                      i6 = i8;
                      if (i8 > 32767) {
                        i6 = 32767;
                      }
                      if ((i6 < 1) || (i6 > data_tw.size(0))) {
                        emlrtDynamicBoundsCheckR2012b(i6, 1, data_tw.size(0),
                                                      &mx_emlrtBCI,
                                                      (emlrtConstCTX)sp);
                      }
                      if (temp_decrz > data_tw[(i6 + data_tw.size(0)) - 1]) {
                        //  大于最晚到达
                        if ((static_cast<int32_T>(b_k) < 1) ||
                            (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                          emlrtDynamicBoundsCheckR2012b(
                              static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                              &qx_emlrtBCI, (emlrtConstCTX)sp);
                        }
                        i6 = i8;
                        if (i8 > 32767) {
                          i6 = 32767;
                        }
                        if ((i6 < 1) || (i6 > data_tw.size(0))) {
                          emlrtDynamicBoundsCheckR2012b(i6, 1, data_tw.size(0),
                                                        &rx_emlrtBCI,
                                                        (emlrtConstCTX)sp);
                        }
                        if ((static_cast<int32_T>(b_k) < 1) ||
                            (static_cast<int32_T>(b_k) > new_puntime.size(1))) {
                          emlrtDynamicBoundsCheckR2012b(
                              static_cast<int32_T>(b_k), 1, new_puntime.size(1),
                              &sx_emlrtBCI, (emlrtConstCTX)sp);
                        }
                        new_puntime[static_cast<int32_T>(b_k) - 1] =
                            temp_decrz - data_tw[(i6 + data_tw.size(0)) - 1];
                        if (i8 > 32767) {
                          i8 = 32767;
                        }
                        if ((i8 < 1) || (i8 > data_tw.size(0))) {
                          emlrtDynamicBoundsCheckR2012b(i8, 1, data_tw.size(0),
                                                        &ux_emlrtBCI,
                                                        (emlrtConstCTX)sp);
                        }
                        if ((static_cast<int32_T>(b_k) < 1) ||
                            (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                          emlrtDynamicBoundsCheckR2012b(
                              static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                              &vx_emlrtBCI, (emlrtConstCTX)sp);
                        }
                        new_arrtime[static_cast<int32_T>(b_k) - 1] =
                            data_tw[(i8 + data_tw.size(0)) - 1];
                      } else {
                        if ((static_cast<int32_T>(b_k) < 1) ||
                            (static_cast<int32_T>(b_k) > new_puntime.size(1))) {
                          emlrtDynamicBoundsCheckR2012b(
                              static_cast<int32_T>(b_k), 1, new_puntime.size(1),
                              &nx_emlrtBCI, (emlrtConstCTX)sp);
                        }
                        new_puntime[static_cast<int32_T>(b_k) - 1] = 0.0;
                      }
                    }
                    guard1 = false;
                    if (static_cast<int32_T>(b_k) > end_ind - 1) {
                      if ((static_cast<int32_T>(b_k) < 1) ||
                          (static_cast<int32_T>(b_k) > new_arrtime.size(1))) {
                        emlrtDynamicBoundsCheckR2012b(
                            static_cast<int32_T>(b_k), 1, new_arrtime.size(1),
                            &wx_emlrtBCI, (emlrtConstCTX)sp);
                      }
                      if ((static_cast<int32_T>(b_k) < 1) ||
                          (static_cast<int32_T>(b_k) > old_arrtime.size(1))) {
                        emlrtDynamicBoundsCheckR2012b(
                            static_cast<int32_T>(b_k), 1, old_arrtime.size(1),
                            &xx_emlrtBCI, (emlrtConstCTX)sp);
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
                  st.site = &gb_emlrtRSI;
                  new_cost[2] =
                      coder::b_sum(&st, new_puntime) * param_pen_beta_0;
                  //  计算减量成本 & 标记退化
                  st.site = &fb_emlrtRSI;
                  temp_decrz = coder::sum(old_cost) - coder::sum(new_cost);
                  if (temp_decrz < 0.0) {
                    deteriorate = true;
                    //  找到的邻域还不如原来的
                  } else {
                    deteriorate = false;
                  }
                  //  计算新路径
                  b_new_rs.set_size(&xi_emlrtRTEI, sp, sol_info->routes.size(0),
                                    sol_info->routes.size(1));
                  last = sol_info->routes.size(0) * sol_info->routes.size(1);
                  for (i5 = 0; i5 < last; i5++) {
                    b_new_rs[i5] = sol_info->routes[i5];
                  }
                  //  new_routes
                  i5 = sol_info->routes.size(0);
                  if (j + 1 > i5) {
                    emlrtDynamicBoundsCheckR2012b(j + 1, 1, i5, &qu_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  last = sol_info->routes.size(1);
                  for (i5 = 0; i5 < last; i5++) {
                    b_new_rs[j + b_new_rs.size(0) * i5] = 0;
                  }
                  if (b_new_rs.size(1) < 1) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, b_new_rs.size(1),
                                                  &ou_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if ((new_route.size(1) < 1) ||
                      (new_route.size(1) > b_new_rs.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(
                        new_route.size(1), 1, b_new_rs.size(1), &nu_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  if (j + 1 > b_new_rs.size(0)) {
                    emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_new_rs.size(0),
                                                  &pu_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  b_pool_ind[0] = 1;
                  b_pool_ind[1] = new_route.size(1);
                  emlrtSubAssignSizeCheckR2012b(&b_pool_ind[0], 2,
                                                new_route.size(), 2,
                                                &cb_emlrtECI, (emlrtCTX)sp);
                  last = new_route.size(1);
                  for (i5 = 0; i5 < last; i5++) {
                    b_new_rs[j + b_new_rs.size(0) * i5] = new_route[i5];
                  }
                  //  放入池子中
                  //  先找到池子中成本最大的解对应的索引
                  //  如果 当前解的成本 比 池子中最大成本的解 还大 那直接不要了
                  //  如果小于 则接受 把最大成本的解替换掉
                  st.site = &eb_emlrtRSI;
                  temp_decrz =
                      (sum_ori_cost - sum_old_cost) + coder::b_sum(new_cost);
                  if (temp_decrz < max_pool_cost) {
                    if (max_pool_ind > pool_routes.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_routes.size(0), &mu_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    iv[0] = 1;
                    iv[1] = pool_routes.size(1);
                    iv[2] = pool_routes.size(2);
                    emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_new_rs.size(), 2,
                                                  &bb_emlrtECI, (emlrtCTX)sp);
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
                          max_pool_ind, 1, pool_del.size(0), &iu_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    for (i5 = 0; i5 < 2; i5++) {
                      pool_del[(max_pool_ind + pool_del.size(0) * 3 * i5) - 1] =
                          del_arc[3 * i5];
                      pool_del[((max_pool_ind + pool_del.size(0)) +
                                pool_del.size(0) * 3 * i5) -
                               1] = del_arc[3 * i5 + 1];
                      pool_del[((max_pool_ind + pool_del.size(0) * 2) +
                                pool_del.size(0) * 3 * i5) -
                               1] = del_arc[3 * i5 + 2];
                    }
                    //  每个邻域解对应删除的弧
                    if (max_pool_ind > pool_ind.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_ind.size(0), &yx_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_ind[max_pool_ind - 1] = static_cast<uint8_T>(j + 1);
                    //  每个邻域解对应变动索引
                    if (max_pool_ind > pool_deter.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_deter.size(0), &ay_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_deter[max_pool_ind - 1] = deteriorate;
                    if (max_pool_ind > pool_gen_cost.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_gen_cost.size(0), &by_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_gen_cost[max_pool_ind - 1] = temp_decrz;
                    pool_div_gen_cost.set_size(&yi_emlrtRTEI, sp,
                                               sol_info->cost.size(0));
                    last = sol_info->cost.size(0);
                    for (i5 = 0; i5 < last; i5++) {
                      pool_div_gen_cost[i5] = sol_info->cost[i5];
                    }
                    if (max_pool_ind > pool_dis.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_dis.size(0), &cy_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    st.site = &db_emlrtRSI;
                    pool_dis[max_pool_ind - 1] =
                        (coder::sum(&st, pool_div_gen_cost) -
                         sol_info->cost[j]) +
                        new_cost[0];
                    //  更新最大索引
                    st.site = &cb_emlrtRSI;
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
  empty_flag.set_size(&aj_emlrtRTEI, sp, pool_gen_cost.size(0));
  last = pool_gen_cost.size(0);
  for (i = 0; i < last; i++) {
    empty_flag[i] = (pool_gen_cost[i] == rtInf);
  }
  //  计算广义成本+多样性成本
  pool_div_gen_cost.set_size(&bj_emlrtRTEI, sp, pool_gen_cost.size(0));
  last = pool_gen_cost.size(0);
  for (i = 0; i < last; i++) {
    pool_div_gen_cost[i] = 0.0;
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, param_pen_pool_size, mxDOUBLE_CLASS,
                                static_cast<int32_T>(param_pen_pool_size),
                                &v_emlrtRTEI, (emlrtConstCTX)sp);
  b_i = 1;
  exitg1 = false;
  while ((!exitg1) &&
         (b_i - 1 <= static_cast<int32_T>(param_pen_pool_size) - 1)) {
    if ((b_i < 1) || (b_i > empty_flag.size(0))) {
      emlrtDynamicBoundsCheckR2012b(b_i, 1, empty_flag.size(0), &hv_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (!empty_flag[b_i - 1]) {
      if (b_i > pool_deter.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_deter.size(0), &iv_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (pool_deter[b_i - 1]) {
        //  退化解记录多样性成本
        if (b_i > pool_routes.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_routes.size(0),
                                        &lu_emlrtBCI, (emlrtConstCTX)sp);
        }
        new_rs.set_size(&dj_emlrtRTEI, sp, 1, pool_routes.size(1),
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
        temp_frequency.set_size(&ej_emlrtRTEI, sp, frequency.size(0),
                                frequency.size(1));
        last = frequency.size(0) * frequency.size(1);
        for (i = 0; i < last; i++) {
          temp_frequency[i] = frequency[i];
        }
        st.site = &bb_emlrtRSI;
        update_frequency(&st, temp_frequency, new_rs);
        //  更新频率
        if (b_i > pool_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_gen_cost.size(0),
                                        &lv_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (b_i > pool_dis.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_dis.size(0), &mv_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (b_i > pool_div_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_div_gen_cost.size(0),
                                        &nv_emlrtBCI, (emlrtConstCTX)sp);
        }
        st.site = &ab_emlrtRSI;
        pool_div_gen_cost[b_i - 1] =
            pool_gen_cost[b_i - 1] +
            calculate_diversity(&st, new_rs, b_div, pool_dis[b_i - 1],
                                static_cast<real_T>(data_dmd.size(0)) - 1.0,
                                data_vnum, temp_frequency);
      } else {
        //  非退化直接记录成本
        if (b_i > pool_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_gen_cost.size(0),
                                        &jv_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (b_i > pool_div_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_div_gen_cost.size(0),
                                        &kv_emlrtBCI, (emlrtConstCTX)sp);
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
                                        &ku_emlrtBCI, (emlrtConstCTX)sp);
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
  st.site = &y_emlrtRSI;
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
      idx = 1;
    } else if ((pool_div_gen_cost[0] > pool_div_gen_cost[1]) ||
               (muDoubleScalarIsNaN(pool_div_gen_cost[0]) &&
                (!muDoubleScalarIsNaN(pool_div_gen_cost[1])))) {
      *best_total_cost = pool_div_gen_cost[1];
      idx = 2;
    } else {
      *best_total_cost = pool_div_gen_cost[0];
      idx = 1;
    }
  } else {
    f_st.site = &pc_emlrtRSI;
    if (!muDoubleScalarIsNaN(pool_div_gen_cost[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &qc_emlrtRSI;
      if (pool_div_gen_cost.size(0) > 2147483646) {
        h_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&h_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(pool_div_gen_cost[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      *best_total_cost = pool_div_gen_cost[0];
      idx = 1;
    } else {
      f_st.site = &oc_emlrtRSI;
      *best_total_cost = pool_div_gen_cost[idx - 1];
      loop_ub = idx + 1;
      g_st.site = &rc_emlrtRSI;
      if ((idx + 1 <= pool_div_gen_cost.size(0)) &&
          (pool_div_gen_cost.size(0) > 2147483646)) {
        h_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&h_st);
      }
      for (k = loop_ub; k <= last; k++) {
        temp_decrz = pool_div_gen_cost[k - 1];
        if (*best_total_cost > temp_decrz) {
          *best_total_cost = temp_decrz;
          idx = k;
        }
      }
    }
  }
  if ((idx < 1) || (idx > pool_routes.size(0))) {
    emlrtDynamicBoundsCheckR2012b(idx, 1, pool_routes.size(0), &ju_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  new_rs.set_size(&cj_emlrtRTEI, sp, 1, pool_routes.size(1),
                  pool_routes.size(2));
  last = pool_routes.size(2);
  for (i = 0; i < last; i++) {
    loop_ub = pool_routes.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      new_rs[i1 + new_rs.size(1) * i] =
          pool_routes[((idx + pool_routes.size(0) * i1) +
                       pool_routes.size(0) * pool_routes.size(1) * i) -
                      1];
    }
  }
  st.site = &x_emlrtRSI;
  coder::squeeze(&st, new_rs, sol_info->routes);
  if (idx > pool_del.size(0)) {
    emlrtDynamicBoundsCheckR2012b(idx, 1, pool_del.size(0), &hu_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  for (i = 0; i < 2; i++) {
    best_del[3 * i] = pool_del[(idx + pool_del.size(0) * 3 * i) - 1];
    best_del[3 * i + 1] =
        pool_del[((idx + pool_del.size(0)) + pool_del.size(0) * 3 * i) - 1];
    best_del[3 * i + 2] =
        pool_del[((idx + pool_del.size(0) * 2) + pool_del.size(0) * 3 * i) - 1];
  }
  if (idx > pool_ind.size(0)) {
    emlrtDynamicBoundsCheckR2012b(idx, 1, pool_ind.size(0), &ov_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  *best_ind = pool_ind[idx - 1];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (ts_intro_relocating.cpp)
