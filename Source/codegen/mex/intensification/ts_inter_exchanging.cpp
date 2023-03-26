//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ts_inter_exchanging.cpp
//
// Code generation for function 'ts_inter_exchanging'
//

// Include files
#include "ts_inter_exchanging.h"
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
static emlrtRSInfo se_emlrtRSI{
    12,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo te_emlrtRSI{
    38,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo ue_emlrtRSI{
    40,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo ve_emlrtRSI{
    53,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo we_emlrtRSI{
    65,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo xe_emlrtRSI{
    67,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo ye_emlrtRSI{
    81,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo af_emlrtRSI{
    102,                   // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo bf_emlrtRSI{
    46,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo cf_emlrtRSI{
    45,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo df_emlrtRSI{
    47,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo ef_emlrtRSI{
    48,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo ff_emlrtRSI{
    73,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo gf_emlrtRSI{
    72,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo hf_emlrtRSI{
    74,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo if_emlrtRSI{
    75,                    // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo jf_emlrtRSI{
    161,                   // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo kf_emlrtRSI{
    180,                   // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo lf_emlrtRSI{
    187,                   // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo mf_emlrtRSI{
    190,                   // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo nf_emlrtRSI{
    237,                   // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo of_emlrtRSI{
    239,                   // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo pf_emlrtRSI{
    251,                   // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtRSInfo qf_emlrtRSI{
    253,                   // lineNo
    "ts_inter_exchanging", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pathName
};

static emlrtDCInfo m_emlrtDCI{
    18,                    // lineNo
    26,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    1                       // checkKind
};

static emlrtBCInfo tf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    28,                    // lineNo
    27,                    // colNo
    "sol_info.routes",     // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    29,                    // lineNo
    33,                    // colNo
    "sol_info.a_r_time",   // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    30,                    // lineNo
    33,                    // colNo
    "sol_info.a_c_time",   // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    31,                    // lineNo
    33,                    // colNo
    "sol_info.z_c_time",   // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    32,                    // lineNo
    36,                    // colNo
    "sol_info.tw_forward", // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yf_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    33,                     // lineNo
    37,                     // colNo
    "sol_info.tw_backward", // aName
    "ts_inter_exchanging",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ag_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    35,                    // lineNo
    32,                    // colNo
    "sol_info.payload",    // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    38,                    // lineNo
    21,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    38,                    // lineNo
    23,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    39,                    // lineNo
    20,                    // colNo
    "a_r_r_1",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo eg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    39,                    // lineNo
    22,                    // colNo
    "a_r_r_1",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    51,                    // lineNo
    32,                    // colNo
    "sol_info.cost",       // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    55,                    // lineNo
    31,                    // colNo
    "sol_info.routes",     // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    56,                    // lineNo
    37,                    // colNo
    "sol_info.a_r_time",   // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ig_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    57,                    // lineNo
    37,                    // colNo
    "sol_info.a_c_time",   // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    58,                    // lineNo
    37,                    // colNo
    "sol_info.z_c_time",   // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    59,                    // lineNo
    40,                    // colNo
    "sol_info.tw_forward", // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lg_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    60,                     // lineNo
    41,                     // colNo
    "sol_info.tw_backward", // aName
    "ts_inter_exchanging",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    62,                    // lineNo
    36,                    // colNo
    "sol_info.payload",    // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ng_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    65,                    // lineNo
    25,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo og_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    65,                    // lineNo
    27,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    66,                    // lineNo
    24,                    // colNo
    "a_r_r_2",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    66,                    // lineNo
    26,                    // colNo
    "a_r_r_2",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    78,                    // lineNo
    36,                    // colNo
    "sol_info.cost",       // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    88,                    // lineNo
    27,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    145,                   // lineNo
    39,                    // colNo
    "tw_f_r_1",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ug_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    145,                   // lineNo
    55,                    // colNo
    "tw_b_r_1",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    156,                   // lineNo
    39,                    // colNo
    "tw_f_r_2",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    156,                   // lineNo
    55,                    // colNo
    "tw_b_r_2",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    170,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    171,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ah_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    172,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    172,                   // lineNo
    26,                    // colNo
    "new_rs",              // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ch_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    172,                   // lineNo
    28,                    // colNo
    "new_rs",              // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtECInfo n_emlrtECI{
    -1,                    // nDims
    172,                   // lineNo
    17,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtBCInfo dh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    173,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo eh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    173,                   // lineNo
    26,                    // colNo
    "new_rs",              // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    173,                   // lineNo
    28,                    // colNo
    "new_rs",              // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtECInfo o_emlrtECI{
    -1,                    // nDims
    173,                   // lineNo
    17,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo k_emlrtRTEI{
    232,                   // lineNo
    9,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtBCInfo gh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    182,                   // lineNo
    33,                    // colNo
    "pool_routes",         // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtECInfo p_emlrtECI{
    -1,                    // nDims
    182,                   // lineNo
    21,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtBCInfo hh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    236,                   // lineNo
    33,                    // colNo
    "pool_routes",         // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ih_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    245,                   // lineNo
    27,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    253,                   // lineNo
    44,                    // colNo
    "pool_routes",         // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    183,                   // lineNo
    30,                    // colNo
    "pool_del",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    254,                   // lineNo
    29,                    // colNo
    "pool_del",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    184,                   // lineNo
    30,                    // colNo
    "pool_ind",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    255,                   // lineNo
    21,                    // colNo
    "pool_ind",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo oh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    188,                   // lineNo
    34,                    // colNo
    "pool_payload",        // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ph_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    256,                   // lineNo
    48,                    // colNo
    "pool_payload",        // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtDCInfo n_emlrtDCI{
    14,                    // lineNo
    27,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo o_emlrtDCI{
    14,                    // lineNo
    27,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    4                       // checkKind
};

static emlrtDCInfo p_emlrtDCI{
    15,                    // lineNo
    24,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo q_emlrtDCI{
    16,                    // lineNo
    18,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo r_emlrtDCI{
    20,                    // lineNo
    22,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo s_emlrtDCI{
    14,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo t_emlrtDCI{
    15,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo u_emlrtDCI{
    16,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo v_emlrtDCI{
    17,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo w_emlrtDCI{
    19,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    1                       // checkKind
};

static emlrtDCInfo x_emlrtDCI{
    20,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    1                       // checkKind
};

static emlrtBCInfo qh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    233,                   // lineNo
    20,                    // colNo
    "empty_flag",          // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    234,                   // lineNo
    23,                    // colNo
    "pool_deter",          // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    242,                   // lineNo
    50,                    // colNo
    "pool_gen_cost",       // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo th_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    242,                   // lineNo
    31,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    34,                    // lineNo
    30,                    // colNo
    "sol_info.cost",       // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    239,                   // lineNo
    31,                    // colNo
    "pool_gen_cost",       // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    239,                   // lineNo
    78,                    // colNo
    "pool_dis",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    238,                   // lineNo
    31,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yh_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    61,                    // lineNo
    34,                    // colNo
    "sol_info.cost",       // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ai_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    85,                    // lineNo
    23,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    28,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ci_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    38,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo di_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    92,                    // lineNo
    28,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ei_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    92,                    // lineNo
    36,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    93,                    // lineNo
    28,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    93,                    // lineNo
    38,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    94,                    // lineNo
    28,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ii_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    94,                    // lineNo
    36,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ji_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    95,                    // lineNo
    28,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ki_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    95,                    // lineNo
    38,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo li_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    96,                    // lineNo
    28,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    96,                    // lineNo
    36,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ni_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    97,                    // lineNo
    28,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo oi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    97,                    // lineNo
    38,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    98,                    // lineNo
    28,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    98,                    // lineNo
    36,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ri_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    105,                   // lineNo
    29,                    // colNo
    "data.arc",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo si_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    105,                   // lineNo
    45,                    // colNo
    "data.arc",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ti_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    106,                   // lineNo
    30,                    // colNo
    "data.arc",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ui_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    106,                   // lineNo
    46,                    // colNo
    "data.arc",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    107,                   // lineNo
    30,                    // colNo
    "data.arc",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    107,                   // lineNo
    46,                    // colNo
    "data.arc",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    108,                   // lineNo
    30,                    // colNo
    "data.arc",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    108,                   // lineNo
    46,                    // colNo
    "data.arc",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo aj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    115,                   // lineNo
    28,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    117,                   // lineNo
    25,                    // colNo
    "new_r_2",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    116,                   // lineNo
    38,                    // colNo
    "new_r_2",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    116,                   // lineNo
    25,                    // colNo
    "new_r_1",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ej_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    121,                   // lineNo
    54,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    121,                   // lineNo
    58,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    121,                   // lineNo
    66,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    121,                   // lineNo
    70,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ij_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    122,                   // lineNo
    50,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    122,                   // lineNo
    54,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    122,                   // lineNo
    60,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    122,                   // lineNo
    64,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    123,                   // lineNo
    50,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    123,                   // lineNo
    54,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo oj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    123,                   // lineNo
    62,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    123,                   // lineNo
    66,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    124,                   // lineNo
    50,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    124,                   // lineNo
    54,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    124,                   // lineNo
    60,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    124,                   // lineNo
    64,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    125,                   // lineNo
    54,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    125,                   // lineNo
    58,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    125,                   // lineNo
    66,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    125,                   // lineNo
    70,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    50,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ak_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    54,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    60,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ck_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    64,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    127,                   // lineNo
    50,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ek_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    127,                   // lineNo
    54,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    127,                   // lineNo
    62,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    127,                   // lineNo
    66,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    128,                   // lineNo
    50,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ik_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    128,                   // lineNo
    54,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    128,                   // lineNo
    60,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    128,                   // lineNo
    64,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    130,                   // lineNo
    48,                    // colNo
    "data.dmd",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    130,                   // lineNo
    66,                    // colNo
    "data.dmd",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    131,                   // lineNo
    48,                    // colNo
    "data.dmd",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ok_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    131,                   // lineNo
    66,                    // colNo
    "data.dmd",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    136,                   // lineNo
    38,                    // colNo
    "z_c_r_1",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    136,                   // lineNo
    55,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    136,                   // lineNo
    61,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    136,                   // lineNo
    65,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    136,                   // lineNo
    83,                    // colNo
    "data.st",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    137,                   // lineNo
    40,                    // colNo
    "data.tw",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    138,                   // lineNo
    41,                    // colNo
    "data.tw",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    140,                   // lineNo
    40,                    // colNo
    "a_c_r_1",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    140,                   // lineNo
    57,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yk_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    140,                   // lineNo
    61,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo al_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    140,                   // lineNo
    68,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    140,                   // lineNo
    85,                    // colNo
    "data.st",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    140,                   // lineNo
    89,                    // colNo
    "r_1",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    141,                   // lineNo
    43,                    // colNo
    "data.tw",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo el_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    142,                   // lineNo
    44,                    // colNo
    "data.tw",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    147,                   // lineNo
    39,                    // colNo
    "z_c_r_2",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    147,                   // lineNo
    56,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    147,                   // lineNo
    62,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo il_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    147,                   // lineNo
    66,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    147,                   // lineNo
    84,                    // colNo
    "data.st",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    148,                   // lineNo
    40,                    // colNo
    "data.tw",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ll_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    149,                   // lineNo
    41,                    // colNo
    "data.tw",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ml_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    151,                   // lineNo
    40,                    // colNo
    "a_c_r_2",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    151,                   // lineNo
    57,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ol_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    151,                   // lineNo
    61,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    151,                   // lineNo
    68,                    // colNo
    "data.dist",           // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ql_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    151,                   // lineNo
    85,                    // colNo
    "data.st",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    151,                   // lineNo
    89,                    // colNo
    "r_2",                 // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    152,                   // lineNo
    43,                    // colNo
    "data.tw",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    153,                   // lineNo
    44,                    // colNo
    "data.tw",             // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ul_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    185,                   // lineNo
    32,                    // colNo
    "pool_deter",          // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    186,                   // lineNo
    35,                    // colNo
    "pool_gen_cost",       // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    187,                   // lineNo
    30,                    // colNo
    "pool_dis",            // aName
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xl_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    256,                     // lineNo
    1,                       // colNo
    "best_neighbor.payload", // aName
    "ts_inter_exchanging",   // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo id_emlrtRTEI{
    14,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo jd_emlrtRTEI{
    15,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo kd_emlrtRTEI{
    16,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo ld_emlrtRTEI{
    17,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo md_emlrtRTEI{
    18,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo nd_emlrtRTEI{
    19,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo od_emlrtRTEI{
    20,                    // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo pd_emlrtRTEI{
    38,                    // lineNo
    5,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo qd_emlrtRTEI{
    38,                    // lineNo
    9,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo rd_emlrtRTEI{
    39,                    // lineNo
    5,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo sd_emlrtRTEI{
    40,                    // lineNo
    12,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo td_emlrtRTEI{
    43,                    // lineNo
    9,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo ud_emlrtRTEI{
    41,                    // lineNo
    9,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo vd_emlrtRTEI{
    45,                    // lineNo
    5,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo wd_emlrtRTEI{
    46,                    // lineNo
    5,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo xd_emlrtRTEI{
    47,                    // lineNo
    5,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo yd_emlrtRTEI{
    48,                    // lineNo
    5,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo ae_emlrtRTEI{
    65,                    // lineNo
    9,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo be_emlrtRTEI{
    65,                    // lineNo
    13,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo ce_emlrtRTEI{
    66,                    // lineNo
    9,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo de_emlrtRTEI{
    67,                    // lineNo
    16,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo ee_emlrtRTEI{
    70,                    // lineNo
    13,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo fe_emlrtRTEI{
    68,                    // lineNo
    13,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo ge_emlrtRTEI{
    72,                    // lineNo
    9,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo he_emlrtRTEI{
    73,                    // lineNo
    9,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo ie_emlrtRTEI{
    74,                    // lineNo
    9,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo je_emlrtRTEI{
    75,                    // lineNo
    9,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo ke_emlrtRTEI{
    113,                   // lineNo
    17,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo le_emlrtRTEI{
    114,                   // lineNo
    17,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo me_emlrtRTEI{
    169,                   // lineNo
    17,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo ne_emlrtRTEI{
    187,                   // lineNo
    50,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo oe_emlrtRTEI{
    227,                   // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo pe_emlrtRTEI{
    231,                   // lineNo
    1,                     // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo qe_emlrtRTEI{
    253,                   // lineNo
    32,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo re_emlrtRTEI{
    236,                   // lineNo
    13,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

static emlrtRTEInfo se_emlrtRTEI{
    237,                   // lineNo
    13,                    // colNo
    "ts_inter_exchanging", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_exchanging.m" // pName
};

// Function Definitions
void ts_inter_exchanging(const emlrtStack *sp, const struct0_T *sol_info,
                         const struct1_T *data, const struct2_T *param_pen,
                         const coder::array<int16_T, 2U> &tabu_list,
                         const coder::array<real_T, 2U> &frequency,
                         real_T b_div, struct0_T *best_neighbor,
                         real_T *best_total_cost, int16_T best_del[8],
                         real_T best_ind[2])
{
  coder::array<real_T, 2U> a_c_r_1;
  coder::array<real_T, 2U> a_c_r_2;
  coder::array<real_T, 2U> pool_payload;
  coder::array<real_T, 2U> temp_frequency;
  coder::array<real_T, 2U> tw_b_r_1;
  coder::array<real_T, 2U> tw_b_r_2;
  coder::array<real_T, 2U> tw_f_r_1;
  coder::array<real_T, 2U> tw_f_r_2;
  coder::array<real_T, 2U> z_c_r_1;
  coder::array<real_T, 2U> z_c_r_2;
  coder::array<real_T, 1U> pool_dis;
  coder::array<real_T, 1U> pool_div_gen_cost;
  coder::array<real_T, 1U> pool_gen_cost;
  coder::array<int16_T, 3U> new_rs;
  coder::array<int16_T, 3U> pool_del;
  coder::array<int16_T, 3U> pool_routes;
  coder::array<int16_T, 2U> b_new_rs;
  coder::array<int16_T, 2U> new_r_1;
  coder::array<int16_T, 2U> new_r_2;
  coder::array<int16_T, 2U> r_1;
  coder::array<int16_T, 2U> r_2;
  coder::array<uint8_T, 2U> pool_ind;
  coder::array<boolean_T, 2U> temp;
  coder::array<boolean_T, 2U> time_del_ind;
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
  real_T new_cost[6];
  real_T back_time;
  real_T forward_time;
  real_T max_pool_cost;
  real_T sum_ori_cost;
  int32_T iv1[3];
  int32_T iv[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_i;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T f_loop_ub;
  int32_T g_loop_ub;
  int32_T h_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i10;
  int32_T i11;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i7;
  int32_T i8;
  int32_T i9;
  int32_T i_loop_ub;
  int32_T j_loop_ub;
  int32_T k;
  int32_T k_loop_ub;
  int32_T l_loop_ub;
  int32_T last;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T m_loop_ub;
  int32_T max_pool_ind;
  int32_T n_loop_ub;
  int32_T o_loop_ub;
  int32_T pool_del_tmp;
  int16_T add_arc[8];
  int16_T del_arc[8];
  int8_T b;
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
  // TS_INTER_EXCHANGING 两条线路之间交换客户点
  //  在路线方案中选择路线A和路线B
  //  将路线A中的客户a与路线B中的客户b进行交换
  //  遍历所有的情况的复杂度为O(n^2) n是客户的数量
  //  代码为四个for嵌套 分别控制路线A B a b
  //  初始化
  //  记录变化之后的成本
  //  顾客数量
  //  车辆数
  st.site = &se_emlrtRSI;
  sum_ori_cost = coder::sum(&st, sol_info->cost);
  //  原始解sol_inf的成本
  if (!(param_pen->pool_size >= 0.0)) {
    emlrtNonNegativeCheckR2012b(param_pen->pool_size, &o_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  back_time = static_cast<int32_T>(muDoubleScalarFloor(param_pen->pool_size));
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &n_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_routes.set_size(&id_emlrtRTEI, sp,
                       static_cast<int32_T>(param_pen->pool_size),
                       sol_info->routes.size(0), sol_info->routes.size(1));
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &s_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(param_pen->pool_size) *
            sol_info->routes.size(0) * sol_info->routes.size(1);
  for (i = 0; i < loop_ub; i++) {
    pool_routes[i] = 0;
  }
  //  邻域池子
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &p_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_del.set_size(&jd_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen->pool_size), 4, 2);
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &t_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(param_pen->pool_size) << 3;
  for (i = 0; i < loop_ub; i++) {
    pool_del[i] = 0;
  }
  //  每个邻域解对应删除的弧
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &q_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_ind.set_size(&kd_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen->pool_size), 2);
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &u_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub_tmp = static_cast<int32_T>(param_pen->pool_size) << 1;
  for (i = 0; i < loop_ub_tmp; i++) {
    pool_ind[i] = 0U;
  }
  //  每个邻域解对应变动索引
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &v_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_deter.set_size(&ld_emlrtRTEI, sp,
                      static_cast<int32_T>(param_pen->pool_size));
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &v_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(param_pen->pool_size);
  for (i = 0; i < loop_ub; i++) {
    pool_deter[i] = false;
  }
  //  每个邻域解是否退化
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &m_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(param_pen->pool_size);
  pool_gen_cost.set_size(&md_emlrtRTEI, sp,
                         static_cast<int32_T>(param_pen->pool_size));
  for (i = 0; i < loop_ub; i++) {
    pool_gen_cost[i] = rtInf;
  }
  //  每个邻域解的广义成本
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &w_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_dis.set_size(&nd_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen->pool_size));
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &w_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  last = static_cast<int32_T>(param_pen->pool_size);
  for (i = 0; i < last; i++) {
    pool_dis[i] = 0.0;
  }
  //  每个邻域解的总距离
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &r_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_payload.set_size(&od_emlrtRTEI, sp,
                        static_cast<int32_T>(param_pen->pool_size), 2);
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &x_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    pool_payload[i] = 0.0;
  }
  //  每个邻域解变动的装载量
  max_pool_ind = 1;
  //  初始池子中最大成本对应的索引
  max_pool_cost = rtInf;
  //  初始池子中最大成本
  //  循环换位置并记录最优的前nb_length个邻域
  //  路线A和B是等价的，只需要求j大于i即可
  i = data->vnum;
  if (data->vnum - 1 >= 0) {
    if (sol_info->routes.size(1) - 1 < 2) {
      i1 = 0;
      i2 = 0;
    } else {
      if (sol_info->routes.size(1) < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, sol_info->routes.size(1),
                                      &bg_emlrtBCI, (emlrtConstCTX)sp);
      }
      i1 = 1;
      if ((sol_info->routes.size(1) - 1 < 1) ||
          (sol_info->routes.size(1) - 1 > sol_info->routes.size(1))) {
        emlrtDynamicBoundsCheckR2012b(sol_info->routes.size(1) - 1, 1,
                                      sol_info->routes.size(1), &cg_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i2 = sol_info->routes.size(1) - 1;
    }
    b_loop_ub = sol_info->routes.size(1);
    c_loop_ub = i2 - i1;
    if (sol_info->a_r_time.size(1) < 2) {
      i3 = 0;
      i4 = 0;
    } else {
      if (sol_info->a_r_time.size(1) < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, sol_info->a_r_time.size(1),
                                      &dg_emlrtBCI, (emlrtConstCTX)sp);
      }
      i3 = 1;
      if (sol_info->a_r_time.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(sol_info->a_r_time.size(1), 1,
                                      sol_info->a_r_time.size(1), &eg_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i4 = sol_info->a_r_time.size(1);
    }
    d_loop_ub = i4 - i3;
    e_loop_ub = sol_info->a_c_time.size(1);
    f_loop_ub = sol_info->z_c_time.size(1);
    g_loop_ub = sol_info->tw_forward.size(1);
    h_loop_ub = sol_info->tw_backward.size(1);
    b = data->vnum;
  }
  for (b_i = 0; b_i < i; b_i++) {
    real_T dist_r_1;
    int32_T i5;
    int32_T i6;
    int8_T a;
    //  路线信息
    if (b_i + 1 > sol_info->routes.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->routes.size(0),
                                    &tf_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  第一个路径
    if (b_i + 1 > sol_info->a_r_time.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->a_r_time.size(0),
                                    &uf_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  实际最晚到达
    if (b_i + 1 > sol_info->a_c_time.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->a_c_time.size(0),
                                    &vf_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  修正最晚到达
    if (b_i + 1 > sol_info->z_c_time.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->z_c_time.size(0),
                                    &wf_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  修正最早到达
    if (b_i + 1 > sol_info->tw_forward.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->tw_forward.size(0),
                                    &xf_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  前向惩罚时间
    if (b_i + 1 > sol_info->tw_backward.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->tw_backward.size(0),
                                    &yf_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  反向惩罚时间
    if (b_i + 1 > sol_info->cost.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->cost.size(0),
                                    &uh_emlrtBCI, (emlrtConstCTX)sp);
    }
    dist_r_1 = sol_info->cost[b_i];
    //  距离
    if (b_i + 1 > sol_info->payload.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->payload.size(0),
                                    &ag_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  容量
    //  消除多余的0
    r_1.set_size(&pd_emlrtRTEI, sp, 1, sol_info->routes.size(1));
    for (i5 = 0; i5 < b_loop_ub; i5++) {
      r_1[i5] = sol_info->routes[b_i + sol_info->routes.size(0) * i5];
    }
    i5 = i2 - i1;
    time_del_ind.set_size(&qd_emlrtRTEI, sp, 1, i5 + 2);
    time_del_ind[0] = false;
    for (i6 = 0; i6 < c_loop_ub; i6++) {
      time_del_ind[i6 + 1] =
          (sol_info->routes[b_i + sol_info->routes.size(0) * (i1 + i6)] == 0);
    }
    time_del_ind[i5 + 1] = false;
    st.site = &te_emlrtRSI;
    coder::internal::nullAssignment(&st, r_1, time_del_ind);
    temp.set_size(&rd_emlrtRTEI, sp, 1, i4 - i3);
    for (i5 = 0; i5 < d_loop_ub; i5++) {
      temp[i5] =
          (sol_info->a_r_time[b_i + sol_info->a_r_time.size(0) * (i3 + i5)] ==
           0.0);
    }
    time_del_ind.set_size(&sd_emlrtRTEI, sp, 1, temp.size(1));
    last = temp.size(1);
    for (i5 = 0; i5 < last; i5++) {
      time_del_ind[i5] = temp[i5];
    }
    st.site = &ue_emlrtRSI;
    if (coder::all(&st, time_del_ind)) {
      //  全0
      if (temp.size(1) < 2) {
        i5 = 0;
        i6 = 0;
      } else {
        i5 = 1;
        i6 = temp.size(1);
      }
      last = i6 - i5;
      time_del_ind.set_size(&ud_emlrtRTEI, sp, 1, last + 2);
      time_del_ind[0] = false;
      time_del_ind[1] = false;
      for (i6 = 0; i6 < last; i6++) {
        time_del_ind[i6 + 2] = temp[i5 + i6];
      }
    } else {
      time_del_ind.set_size(&td_emlrtRTEI, sp, 1, temp.size(1) + 1);
      time_del_ind[0] = false;
      last = temp.size(1);
      for (i5 = 0; i5 < last; i5++) {
        time_del_ind[i5 + 1] = temp[i5];
      }
    }
    a_c_r_1.set_size(&vd_emlrtRTEI, sp, 1, sol_info->a_c_time.size(1));
    for (i5 = 0; i5 < e_loop_ub; i5++) {
      a_c_r_1[i5] = sol_info->a_c_time[b_i + sol_info->a_c_time.size(0) * i5];
    }
    st.site = &cf_emlrtRSI;
    coder::internal::b_nullAssignment(&st, a_c_r_1, time_del_ind);
    z_c_r_1.set_size(&wd_emlrtRTEI, sp, 1, sol_info->z_c_time.size(1));
    for (i5 = 0; i5 < f_loop_ub; i5++) {
      z_c_r_1[i5] = sol_info->z_c_time[b_i + sol_info->z_c_time.size(0) * i5];
    }
    st.site = &bf_emlrtRSI;
    coder::internal::b_nullAssignment(&st, z_c_r_1, time_del_ind);
    tw_f_r_1.set_size(&xd_emlrtRTEI, sp, 1, sol_info->tw_forward.size(1));
    for (i5 = 0; i5 < g_loop_ub; i5++) {
      tw_f_r_1[i5] =
          sol_info->tw_forward[b_i + sol_info->tw_forward.size(0) * i5];
    }
    st.site = &df_emlrtRSI;
    coder::internal::b_nullAssignment(&st, tw_f_r_1, time_del_ind);
    tw_b_r_1.set_size(&yd_emlrtRTEI, sp, 1, sol_info->tw_backward.size(1));
    for (i5 = 0; i5 < h_loop_ub; i5++) {
      tw_b_r_1[i5] =
          sol_info->tw_backward[b_i + sol_info->tw_backward.size(0) * i5];
    }
    st.site = &ef_emlrtRSI;
    coder::internal::b_nullAssignment(&st, tw_b_r_1, time_del_ind);
    //  原来的成本
    if (b_i + 1 > sol_info->cost.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->cost.size(0),
                                    &fg_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  距离
    i5 = b_i + 2;
    if (b_i + 2 > 127) {
      i5 = 127;
    }
    a = static_cast<int8_T>(i5);
    st.site = &ve_emlrtRSI;
    if ((static_cast<int8_T>(i5) <= data->vnum) && (data->vnum > 126)) {
      b_st.site = &p_emlrtRSI;
      coder::b_check_forloop_overflow_error(&b_st);
    }
    if (static_cast<int8_T>(i5) <= b) {
      if (sol_info->routes.size(1) - 1 < 2) {
        i7 = 0;
        i8 = 0;
      } else {
        if (sol_info->routes.size(1) < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, sol_info->routes.size(1),
                                        &ng_emlrtBCI, (emlrtConstCTX)sp);
        }
        i7 = 1;
        if ((sol_info->routes.size(1) - 1 < 1) ||
            (sol_info->routes.size(1) - 1 > sol_info->routes.size(1))) {
          emlrtDynamicBoundsCheckR2012b(sol_info->routes.size(1) - 1, 1,
                                        sol_info->routes.size(1), &og_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i8 = sol_info->routes.size(1) - 1;
      }
      i_loop_ub = sol_info->routes.size(1);
      j_loop_ub = i8 - i7;
      if (sol_info->a_r_time.size(1) < 2) {
        i9 = 0;
        i10 = 0;
      } else {
        if (sol_info->a_r_time.size(1) < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, sol_info->a_r_time.size(1),
                                        &pg_emlrtBCI, (emlrtConstCTX)sp);
        }
        i9 = 1;
        if (sol_info->a_r_time.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(sol_info->a_r_time.size(1), 1,
                                        sol_info->a_r_time.size(1),
                                        &qg_emlrtBCI, (emlrtConstCTX)sp);
        }
        i10 = sol_info->a_r_time.size(1);
      }
      k_loop_ub = i10 - i9;
      l_loop_ub = sol_info->a_c_time.size(1);
      m_loop_ub = sol_info->z_c_time.size(1);
      n_loop_ub = sol_info->tw_forward.size(1);
      o_loop_ub = sol_info->tw_backward.size(1);
      c_i = b_i + 1;
      i11 = r_1.size(1);
    }
    for (int8_T j{a}; j <= b; j++) {
      real_T b_sol_info[3];
      real_T dist_r_2_tmp;
      real_T old_sum_cost;
      //  路线信息
      if (j > sol_info->routes.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->routes.size(0), &gg_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j > sol_info->a_r_time.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->a_r_time.size(0), &hg_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j > sol_info->a_c_time.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->a_c_time.size(0), &ig_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j > sol_info->z_c_time.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->z_c_time.size(0), &jg_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j > sol_info->tw_forward.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->tw_forward.size(0),
                                      &kg_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (j > sol_info->tw_backward.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->tw_backward.size(0),
                                      &lg_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (j > sol_info->cost.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->cost.size(0), &yh_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      dist_r_2_tmp = sol_info->cost[j - 1];
      if (j > sol_info->payload.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->payload.size(0), &mg_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      //  消除多余的0
      r_2.set_size(&ae_emlrtRTEI, sp, 1, sol_info->routes.size(1));
      for (i5 = 0; i5 < i_loop_ub; i5++) {
        r_2[i5] = sol_info->routes[(j + sol_info->routes.size(0) * i5) - 1];
      }
      i5 = i8 - i7;
      time_del_ind.set_size(&be_emlrtRTEI, sp, 1, i5 + 2);
      time_del_ind[0] = false;
      for (i6 = 0; i6 < j_loop_ub; i6++) {
        time_del_ind[i6 + 1] =
            (sol_info->routes[(j + sol_info->routes.size(0) * (i7 + i6)) - 1] ==
             0);
      }
      time_del_ind[i5 + 1] = false;
      st.site = &we_emlrtRSI;
      coder::internal::nullAssignment(&st, r_2, time_del_ind);
      temp.set_size(&ce_emlrtRTEI, sp, 1, i10 - i9);
      for (i5 = 0; i5 < k_loop_ub; i5++) {
        temp[i5] =
            (sol_info->a_r_time[(j + sol_info->a_r_time.size(0) * (i9 + i5)) -
                                1] == 0.0);
      }
      //  判断是否全是0
      time_del_ind.set_size(&de_emlrtRTEI, sp, 1, temp.size(1));
      last = temp.size(1);
      for (i5 = 0; i5 < last; i5++) {
        time_del_ind[i5] = temp[i5];
      }
      st.site = &xe_emlrtRSI;
      if (coder::all(&st, time_del_ind)) {
        //  全0
        if (temp.size(1) < 2) {
          i5 = 0;
          i6 = 0;
        } else {
          i5 = 1;
          i6 = temp.size(1);
        }
        last = i6 - i5;
        time_del_ind.set_size(&fe_emlrtRTEI, sp, 1, last + 2);
        time_del_ind[0] = false;
        time_del_ind[1] = false;
        for (i6 = 0; i6 < last; i6++) {
          time_del_ind[i6 + 2] = temp[i5 + i6];
        }
      } else {
        time_del_ind.set_size(&ee_emlrtRTEI, sp, 1, temp.size(1) + 1);
        time_del_ind[0] = false;
        last = temp.size(1);
        for (i5 = 0; i5 < last; i5++) {
          time_del_ind[i5 + 1] = temp[i5];
        }
      }
      a_c_r_2.set_size(&ge_emlrtRTEI, sp, 1, sol_info->a_c_time.size(1));
      for (i5 = 0; i5 < l_loop_ub; i5++) {
        a_c_r_2[i5] =
            sol_info->a_c_time[(j + sol_info->a_c_time.size(0) * i5) - 1];
      }
      st.site = &gf_emlrtRSI;
      coder::internal::b_nullAssignment(&st, a_c_r_2, time_del_ind);
      z_c_r_2.set_size(&he_emlrtRTEI, sp, 1, sol_info->z_c_time.size(1));
      for (i5 = 0; i5 < m_loop_ub; i5++) {
        z_c_r_2[i5] =
            sol_info->z_c_time[(j + sol_info->z_c_time.size(0) * i5) - 1];
      }
      st.site = &ff_emlrtRSI;
      coder::internal::b_nullAssignment(&st, z_c_r_2, time_del_ind);
      tw_f_r_2.set_size(&ie_emlrtRTEI, sp, 1, sol_info->tw_forward.size(1));
      for (i5 = 0; i5 < n_loop_ub; i5++) {
        tw_f_r_2[i5] =
            sol_info->tw_forward[(j + sol_info->tw_forward.size(0) * i5) - 1];
      }
      st.site = &hf_emlrtRSI;
      coder::internal::b_nullAssignment(&st, tw_f_r_2, time_del_ind);
      tw_b_r_2.set_size(&je_emlrtRTEI, sp, 1, sol_info->tw_backward.size(1));
      for (i5 = 0; i5 < o_loop_ub; i5++) {
        tw_b_r_2[i5] =
            sol_info->tw_backward[(j + sol_info->tw_backward.size(0) * i5) - 1];
      }
      st.site = &if_emlrtRSI;
      coder::internal::b_nullAssignment(&st, tw_b_r_2, time_del_ind);
      //  原来的成本
      if (j > sol_info->cost.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->cost.size(0), &rg_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      //  距离
      //  旧的总成本
      b_sol_info[0] = dist_r_2_tmp + sol_info->cost[c_i - 1];
      b_sol_info[1] = sol_info->cost[(j + sol_info->cost.size(0)) - 1] +
                      sol_info->cost[(c_i + sol_info->cost.size(0)) - 1];
      b_sol_info[2] = sol_info->cost[(j + sol_info->cost.size(0) * 2) - 1] +
                      sol_info->cost[(c_i + sol_info->cost.size(0) * 2) - 1];
      st.site = &ye_emlrtRSI;
      old_sum_cost = coder::b_sum(b_sol_info);
      //  两个客户交换位置
      for (int32_T m{0}; m <= i11 - 3; m++) {
        int16_T v_1;
        if (m + 2 > r_1.size(1)) {
          emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1), &ai_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        v_1 = r_1[m + 1];
        //  第一个客户
        i5 = r_2.size(1);
        if (i5 - 3 >= 0) {
          add_arc[0] = r_1[m];
          add_arc[5] = r_1[m + 2];
          add_arc[6] = r_1[m + 1];
          add_arc[3] = r_1[m + 1];
          del_arc[0] = r_1[m];
          del_arc[4] = r_1[m + 1];
          del_arc[1] = r_1[m + 1];
          del_arc[5] = r_1[m + 2];
        }
        for (int32_T n{0}; n <= i5 - 3; n++) {
          if (n + 2 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1), &sg_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          //  第二个客户
          //  弧关系
          if (m + 1 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 1, 1, r_1.size(1), &bi_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (n + 2 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1), &ci_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          add_arc[4] = r_2[n + 1];
          if (n + 2 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1), &di_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          add_arc[1] = r_2[n + 1];
          if (m + 3 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 3, 1, r_1.size(1), &ei_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (n + 1 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 1, 1, r_2.size(1), &fi_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          add_arc[2] = r_2[n];
          if (m + 2 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1), &gi_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (m + 2 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1), &hi_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (n + 3 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 3, 1, r_2.size(1), &ii_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          add_arc[7] = r_2[n + 2];
          //  增加弧
          if (m + 1 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 1, 1, r_1.size(1), &ji_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (m + 2 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1), &ki_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (m + 2 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1), &li_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (m + 3 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 3, 1, r_1.size(1), &mi_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (n + 1 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 1, 1, r_2.size(1), &ni_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          del_arc[2] = r_2[n];
          if (n + 2 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1), &oi_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          del_arc[6] = r_2[n + 1];
          if (n + 2 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1), &pi_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          del_arc[3] = r_2[n + 1];
          if (n + 3 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 3, 1, r_2.size(1), &qi_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          del_arc[7] = r_2[n + 2];
          //  删除弧
          //  可行性判断
          //                  if any(ismember(add_arc, tabu_list, "rows"))
          st.site = &af_emlrtRSI;
          if (!b_myismember(&st, add_arc, tabu_list)) {
            int32_T i12;
            i6 = add_arc[0] + 1;
            if (add_arc[0] + 1 > 32767) {
              i6 = 32767;
            }
            if ((i6 < 1) || (i6 > data->arc.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i6, 1, data->arc.size(0),
                                            &ri_emlrtBCI, (emlrtConstCTX)sp);
            }
            i12 = add_arc[4] + 1;
            if (add_arc[4] + 1 > 32767) {
              i12 = 32767;
            }
            if ((i12 < 1) || (i12 > data->arc.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i12, 1, data->arc.size(1),
                                            &si_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (data->arc[(i6 + data->arc.size(0) * (i12 - 1)) - 1]) {
              i6 = add_arc[1] + 1;
              if (add_arc[1] + 1 > 32767) {
                i6 = 32767;
              }
              if ((i6 < 1) || (i6 > data->arc.size(0))) {
                emlrtDynamicBoundsCheckR2012b(i6, 1, data->arc.size(0),
                                              &ti_emlrtBCI, (emlrtConstCTX)sp);
              }
              i12 = add_arc[5] + 1;
              if (add_arc[5] + 1 > 32767) {
                i12 = 32767;
              }
              if ((i12 < 1) || (i12 > data->arc.size(1))) {
                emlrtDynamicBoundsCheckR2012b(i12, 1, data->arc.size(1),
                                              &ui_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (data->arc[(i6 + data->arc.size(0) * (i12 - 1)) - 1]) {
                i6 = add_arc[2] + 1;
                if (add_arc[2] + 1 > 32767) {
                  i6 = 32767;
                }
                if ((i6 < 1) || (i6 > data->arc.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(i6, 1, data->arc.size(0),
                                                &vi_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                i12 = add_arc[6] + 1;
                if (add_arc[6] + 1 > 32767) {
                  i12 = 32767;
                }
                if ((i12 < 1) || (i12 > data->arc.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(i12, 1, data->arc.size(1),
                                                &wi_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                if (data->arc[(i6 + data->arc.size(0) * (i12 - 1)) - 1]) {
                  i6 = add_arc[3] + 1;
                  if (add_arc[3] + 1 > 32767) {
                    i6 = 32767;
                  }
                  if ((i6 < 1) || (i6 > data->arc.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i6, 1, data->arc.size(0),
                                                  &xi_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i12 = add_arc[7] + 1;
                  if (add_arc[7] + 1 > 32767) {
                    i12 = 32767;
                  }
                  if ((i12 < 1) || (i12 > data->arc.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i12, 1, data->arc.size(1),
                                                  &yi_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (data->arc[(i6 + data->arc.size(0) * (i12 - 1)) - 1]) {
                    real_T maxval;
                    real_T payload_1;
                    real_T payload_2;
                    int32_T i13;
                    int32_T i14;
                    boolean_T deteriorate;
                    //  生成新路径
                    new_r_1.set_size(&ke_emlrtRTEI, sp, 1, r_1.size(1));
                    last = r_1.size(1);
                    for (i6 = 0; i6 < last; i6++) {
                      new_r_1[i6] = r_1[i6];
                    }
                    new_r_2.set_size(&le_emlrtRTEI, sp, 1, r_2.size(1));
                    last = r_2.size(1);
                    for (i6 = 0; i6 < last; i6++) {
                      new_r_2[i6] = r_2[i6];
                    }
                    if (m + 2 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1),
                                                    &aj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (n + 2 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1),
                                                    &bj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    new_r_2[n + 1] = r_1[m + 1];
                    if (n + 2 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1),
                                                    &cj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (m + 2 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1),
                                                    &dj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    new_r_1[m + 1] = r_2[n + 1];
                    //  计算新成本
                    //  1. 距离
                    if (m + 1 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 1, 1, r_1.size(1),
                                                    &fj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i6 = r_1[m] + 1;
                    if (i6 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data->dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data->dist.size(0),
                                                    &ej_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (m + 2 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1),
                                                    &hj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i12 = r_1[m + 1] + 1;
                    if (i12 > 32767) {
                      i12 = 32767;
                    }
                    if ((i12 < 1) || (i12 > data->dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(i12, 1, data->dist.size(1),
                                                    &gj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (m + 2 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1),
                                                    &jj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    loop_ub_tmp = r_1[m + 1] + 1;
                    if (loop_ub_tmp > 32767) {
                      loop_ub_tmp = 32767;
                    }
                    if ((loop_ub_tmp < 1) ||
                        (loop_ub_tmp > data->dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(
                          loop_ub_tmp, 1, data->dist.size(0), &ij_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    if (m + 3 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 3, 1, r_1.size(1),
                                                    &lj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    pool_del_tmp = r_1[m + 2] + 1;
                    if (pool_del_tmp > 32767) {
                      pool_del_tmp = 32767;
                    }
                    if ((pool_del_tmp < 1) ||
                        (pool_del_tmp > data->dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          pool_del_tmp, 1, data->dist.size(1), &kj_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    if (m + 1 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 1, 1, r_1.size(1),
                                                    &nj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    last = r_1[m] + 1;
                    if (last > 32767) {
                      last = 32767;
                    }
                    if ((last < 1) || (last > data->dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(last, 1, data->dist.size(0),
                                                    &mj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (n + 2 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1),
                                                    &pj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    k = r_2[n + 1] + 1;
                    if (k > 32767) {
                      k = 32767;
                    }
                    if ((k < 1) || (k > data->dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(k, 1, data->dist.size(1),
                                                    &oj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (n + 2 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1),
                                                    &rj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i13 = r_2[n + 1] + 1;
                    if (i13 > 32767) {
                      i13 = 32767;
                    }
                    if ((i13 < 1) || (i13 > data->dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i13, 1, data->dist.size(0),
                                                    &qj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (m + 3 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 3, 1, r_1.size(1),
                                                    &tj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i14 = r_1[m + 2] + 1;
                    if (i14 > 32767) {
                      i14 = 32767;
                    }
                    if ((i14 < 1) || (i14 > data->dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(i14, 1, data->dist.size(1),
                                                    &sj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    new_cost[0] =
                        (((dist_r_1 -
                           data->dist[(i6 + data->dist.size(0) * (i12 - 1)) -
                                      1]) -
                          data->dist[(loop_ub_tmp +
                                      data->dist.size(0) * (pool_del_tmp - 1)) -
                                     1]) +
                         data->dist[(last + data->dist.size(0) * (k - 1)) -
                                    1]) +
                        data->dist[(i13 + data->dist.size(0) * (i14 - 1)) - 1];
                    if (n + 1 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 1, 1, r_2.size(1),
                                                    &vj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i6 = r_2[n] + 1;
                    if (i6 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data->dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data->dist.size(0),
                                                    &uj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (n + 2 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1),
                                                    &xj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i12 = r_2[n + 1] + 1;
                    if (i12 > 32767) {
                      i12 = 32767;
                    }
                    if ((i12 < 1) || (i12 > data->dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(i12, 1, data->dist.size(1),
                                                    &wj_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (n + 2 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1),
                                                    &ak_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    loop_ub_tmp = r_2[n + 1] + 1;
                    if (loop_ub_tmp > 32767) {
                      loop_ub_tmp = 32767;
                    }
                    if ((loop_ub_tmp < 1) ||
                        (loop_ub_tmp > data->dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(
                          loop_ub_tmp, 1, data->dist.size(0), &yj_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    if (n + 3 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 3, 1, r_2.size(1),
                                                    &ck_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    pool_del_tmp = r_2[n + 2] + 1;
                    if (pool_del_tmp > 32767) {
                      pool_del_tmp = 32767;
                    }
                    if ((pool_del_tmp < 1) ||
                        (pool_del_tmp > data->dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          pool_del_tmp, 1, data->dist.size(1), &bk_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    if (n + 1 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 1, 1, r_2.size(1),
                                                    &ek_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    last = r_2[n] + 1;
                    if (last > 32767) {
                      last = 32767;
                    }
                    if ((last < 1) || (last > data->dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(last, 1, data->dist.size(0),
                                                    &dk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (m + 2 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1),
                                                    &gk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    k = r_1[m + 1] + 1;
                    if (k > 32767) {
                      k = 32767;
                    }
                    if ((k < 1) || (k > data->dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(k, 1, data->dist.size(1),
                                                    &fk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (m + 2 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1),
                                                    &ik_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i13 = r_1[m + 1] + 1;
                    if (i13 > 32767) {
                      i13 = 32767;
                    }
                    if ((i13 < 1) || (i13 > data->dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i13, 1, data->dist.size(0),
                                                    &hk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (n + 3 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 3, 1, r_2.size(1),
                                                    &kk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i14 = r_2[n + 2] + 1;
                    if (i14 > 32767) {
                      i14 = 32767;
                    }
                    if ((i14 < 1) || (i14 > data->dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(i14, 1, data->dist.size(1),
                                                    &jk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    new_cost[1] =
                        (((dist_r_2_tmp -
                           data->dist[(i6 + data->dist.size(0) * (i12 - 1)) -
                                      1]) -
                          data->dist[(loop_ub_tmp +
                                      data->dist.size(0) * (pool_del_tmp - 1)) -
                                     1]) +
                         data->dist[(last + data->dist.size(0) * (k - 1)) -
                                    1]) +
                        data->dist[(i13 + data->dist.size(0) * (i14 - 1)) - 1];
                    //  2. 容量
                    i6 = v_1 + 1;
                    if (v_1 + 1 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data->dmd.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data->dmd.size(0),
                                                    &lk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i12 = r_2[n + 1] + 1;
                    loop_ub_tmp = i12;
                    if (i12 > 32767) {
                      loop_ub_tmp = 32767;
                    }
                    if ((loop_ub_tmp < 1) ||
                        (loop_ub_tmp > data->dmd.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(
                          loop_ub_tmp, 1, data->dmd.size(0), &mk_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    payload_1 = (sol_info->payload[b_i] - data->dmd[i6 - 1]) +
                                data->dmd[loop_ub_tmp - 1];
                    i6 = v_1 + 1;
                    if (v_1 + 1 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data->dmd.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data->dmd.size(0),
                                                    &nk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    loop_ub_tmp = i12;
                    if (i12 > 32767) {
                      loop_ub_tmp = 32767;
                    }
                    if ((loop_ub_tmp < 1) ||
                        (loop_ub_tmp > data->dmd.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(
                          loop_ub_tmp, 1, data->dmd.size(0), &ok_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    payload_2 = (sol_info->payload[j - 1] + data->dmd[i6 - 1]) -
                                data->dmd[loop_ub_tmp - 1];
                    forward_time = payload_1 - data->cap;
                    if ((forward_time < 0.0) ||
                        muDoubleScalarIsNaN(forward_time)) {
                      forward_time = 0.0;
                    }
                    new_cost[2] = forward_time * param_pen->alpha_0;
                    forward_time = payload_2 - data->cap;
                    if ((forward_time < 0.0) ||
                        muDoubleScalarIsNaN(forward_time)) {
                      forward_time = 0.0;
                    }
                    new_cost[3] = forward_time * param_pen->alpha_0;
                    //  3. 时间
                    if (m + 3 > z_c_r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 3, 1, z_c_r_1.size(1),
                                                    &pk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i6 = i12;
                    if (i12 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data->dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data->dist.size(0),
                                                    &qk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (m + 3 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 3, 1, r_1.size(1),
                                                    &sk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    loop_ub_tmp = r_1[m + 2] + 1;
                    if (loop_ub_tmp > 32767) {
                      loop_ub_tmp = 32767;
                    }
                    if ((loop_ub_tmp < 1) ||
                        (loop_ub_tmp > data->dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          loop_ub_tmp, 1, data->dist.size(1), &rk_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_del_tmp = i12;
                    if (i12 > 32767) {
                      pool_del_tmp = 32767;
                    }
                    if ((pool_del_tmp < 1) ||
                        (pool_del_tmp > data->st.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(
                          pool_del_tmp, 1, data->st.size(0), &tk_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    back_time = (z_c_r_1[m + 2] -
                                 data->dist[(i6 + data->dist.size(0) *
                                                      (loop_ub_tmp - 1)) -
                                            1]) -
                                data->st[pool_del_tmp - 1];
                    i6 = i12;
                    if (i12 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data->tw.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data->tw.size(0),
                                                    &uk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (back_time > data->tw[(i6 + data->tw.size(0)) - 1]) {
                      i6 = i12;
                      if (i12 > 32767) {
                        i6 = 32767;
                      }
                      if ((i6 < 1) || (i6 > data->tw.size(0))) {
                        emlrtDynamicBoundsCheckR2012b(i6, 1, data->tw.size(0),
                                                      &vk_emlrtBCI,
                                                      (emlrtConstCTX)sp);
                      }
                      back_time = data->tw[(i6 + data->tw.size(0)) - 1];
                    }
                    if (m + 1 > a_c_r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 1, 1, a_c_r_1.size(1),
                                                    &wk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (m + 1 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 1, 1, r_1.size(1),
                                                    &yk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i6 = r_1[m] + 1;
                    if (i6 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data->dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data->dist.size(0),
                                                    &xk_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    loop_ub_tmp = i12;
                    if (i12 > 32767) {
                      loop_ub_tmp = 32767;
                    }
                    if ((loop_ub_tmp < 1) ||
                        (loop_ub_tmp > data->dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(
                          loop_ub_tmp, 1, data->dist.size(1), &al_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    if (m + 1 > r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 1, 1, r_1.size(1),
                                                    &cl_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    pool_del_tmp = r_1[m] + 1;
                    if (pool_del_tmp > 32767) {
                      pool_del_tmp = 32767;
                    }
                    if ((pool_del_tmp < 1) ||
                        (pool_del_tmp > data->st.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(
                          pool_del_tmp, 1, data->st.size(0), &bl_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    forward_time =
                        (a_c_r_1[m] + data->dist[(i6 + data->dist.size(0) *
                                                           (loop_ub_tmp - 1)) -
                                                 1]) +
                        data->st[pool_del_tmp - 1];
                    i6 = i12;
                    if (i12 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data->tw.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data->tw.size(0),
                                                    &dl_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (forward_time < data->tw[i6 - 1]) {
                      if (i12 > 32767) {
                        i12 = 32767;
                      }
                      if ((i12 < 1) || (i12 > data->tw.size(0))) {
                        emlrtDynamicBoundsCheckR2012b(i12, 1, data->tw.size(0),
                                                      &el_emlrtBCI,
                                                      (emlrtConstCTX)sp);
                      }
                      forward_time = data->tw[i12 - 1];
                    }
                    back_time = forward_time - back_time;
                    if (back_time > 0.0) {
                      maxval = back_time;
                    } else {
                      maxval = 0.0;
                    }
                    if (m + 1 > tw_f_r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 1, 1, tw_f_r_1.size(1),
                                                    &tg_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (m + 3 > tw_b_r_1.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(m + 3, 1, tw_b_r_1.size(1),
                                                    &ug_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (n + 3 > z_c_r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 3, 1, z_c_r_2.size(1),
                                                    &fl_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i6 = v_1 + 1;
                    if (v_1 + 1 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data->dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data->dist.size(0),
                                                    &gl_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (n + 3 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 3, 1, r_2.size(1),
                                                    &il_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i12 = r_2[n + 2] + 1;
                    if (i12 > 32767) {
                      i12 = 32767;
                    }
                    if ((i12 < 1) || (i12 > data->dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(i12, 1, data->dist.size(1),
                                                    &hl_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    loop_ub_tmp = v_1 + 1;
                    if (v_1 + 1 > 32767) {
                      loop_ub_tmp = 32767;
                    }
                    if ((loop_ub_tmp < 1) || (loop_ub_tmp > data->st.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(
                          loop_ub_tmp, 1, data->st.size(0), &jl_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    back_time =
                        (z_c_r_2[n + 2] -
                         data->dist[(i6 + data->dist.size(0) * (i12 - 1)) -
                                    1]) -
                        data->st[loop_ub_tmp - 1];
                    i6 = v_1 + 1;
                    if (v_1 + 1 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data->tw.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data->tw.size(0),
                                                    &kl_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (back_time > data->tw[(i6 + data->tw.size(0)) - 1]) {
                      i6 = v_1 + 1;
                      if (v_1 + 1 > 32767) {
                        i6 = 32767;
                      }
                      if ((i6 < 1) || (i6 > data->tw.size(0))) {
                        emlrtDynamicBoundsCheckR2012b(i6, 1, data->tw.size(0),
                                                      &ll_emlrtBCI,
                                                      (emlrtConstCTX)sp);
                      }
                      back_time = data->tw[(i6 + data->tw.size(0)) - 1];
                    }
                    if (n + 1 > a_c_r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 1, 1, a_c_r_2.size(1),
                                                    &ml_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (n + 1 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 1, 1, r_2.size(1),
                                                    &ol_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i6 = r_2[n] + 1;
                    if (i6 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data->dist.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data->dist.size(0),
                                                    &nl_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i12 = v_1 + 1;
                    if (v_1 + 1 > 32767) {
                      i12 = 32767;
                    }
                    if ((i12 < 1) || (i12 > data->dist.size(1))) {
                      emlrtDynamicBoundsCheckR2012b(i12, 1, data->dist.size(1),
                                                    &pl_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (n + 1 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 1, 1, r_2.size(1),
                                                    &rl_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    loop_ub_tmp = r_2[n] + 1;
                    if (loop_ub_tmp > 32767) {
                      loop_ub_tmp = 32767;
                    }
                    if ((loop_ub_tmp < 1) || (loop_ub_tmp > data->st.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(
                          loop_ub_tmp, 1, data->st.size(0), &ql_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    forward_time =
                        (a_c_r_2[n] +
                         data->dist[(i6 + data->dist.size(0) * (i12 - 1)) -
                                    1]) +
                        data->st[loop_ub_tmp - 1];
                    i6 = v_1 + 1;
                    if (v_1 + 1 > 32767) {
                      i6 = 32767;
                    }
                    if ((i6 < 1) || (i6 > data->tw.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i6, 1, data->tw.size(0),
                                                    &sl_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (forward_time < data->tw[i6 - 1]) {
                      i6 = v_1 + 1;
                      if (v_1 + 1 > 32767) {
                        i6 = 32767;
                      }
                      if ((i6 < 1) || (i6 > data->tw.size(0))) {
                        emlrtDynamicBoundsCheckR2012b(i6, 1, data->tw.size(0),
                                                      &tl_emlrtBCI,
                                                      (emlrtConstCTX)sp);
                      }
                      forward_time = data->tw[i6 - 1];
                    }
                    back_time = forward_time - back_time;
                    if (n + 1 > tw_f_r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 1, 1, tw_f_r_2.size(1),
                                                    &vg_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (n + 3 > tw_b_r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 3, 1, tw_b_r_2.size(1),
                                                    &wg_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    new_cost[4] = ((tw_f_r_1[m] + tw_b_r_1[m + 2]) + maxval) *
                                  param_pen->beta_0;
                    if (!(back_time > 0.0)) {
                      back_time = 0.0;
                    }
                    new_cost[5] =
                        ((tw_f_r_2[n] + tw_b_r_2[n + 2]) + back_time) *
                        param_pen->beta_0;
                    //  计算减量成本 & 标记退化
                    st.site = &jf_emlrtRSI;
                    back_time = old_sum_cost - coder::c_sum(new_cost);
                    if (back_time < 0.0) {
                      deteriorate = true;
                      //  找到的邻域还不如原来的
                    } else {
                      deteriorate = false;
                    }
                    //  计算新的路径
                    b_new_rs.set_size(&me_emlrtRTEI, sp,
                                      sol_info->routes.size(0),
                                      sol_info->routes.size(1));
                    last = sol_info->routes.size(0) * sol_info->routes.size(1);
                    for (i6 = 0; i6 < last; i6++) {
                      b_new_rs[i6] = sol_info->routes[i6];
                    }
                    //  new_routes
                    if (b_i + 1 > sol_info->routes.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          b_i + 1, 1, sol_info->routes.size(0), &xg_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    last = sol_info->routes.size(1);
                    for (i6 = 0; i6 < last; i6++) {
                      b_new_rs[b_i + b_new_rs.size(0) * i6] = 0;
                    }
                    if (j > b_new_rs.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(j), 1, b_new_rs.size(0),
                          &yg_emlrtBCI, (emlrtConstCTX)sp);
                    }
                    last = b_new_rs.size(1);
                    for (i6 = 0; i6 < last; i6++) {
                      b_new_rs[(j + b_new_rs.size(0) * i6) - 1] = 0;
                    }
                    if (new_r_1.size(1) < 1) {
                      i6 = 0;
                    } else {
                      if (b_new_rs.size(1) < 1) {
                        emlrtDynamicBoundsCheckR2012b(1, 1, b_new_rs.size(1),
                                                      &bh_emlrtBCI,
                                                      (emlrtConstCTX)sp);
                      }
                      if (new_r_1.size(1) > b_new_rs.size(1)) {
                        emlrtDynamicBoundsCheckR2012b(
                            new_r_1.size(1), 1, b_new_rs.size(1), &ch_emlrtBCI,
                            (emlrtConstCTX)sp);
                      }
                      i6 = new_r_1.size(1);
                    }
                    if (b_i + 1 > b_new_rs.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          b_i + 1, 1, b_new_rs.size(0), &ah_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    iv[0] = 1;
                    iv[1] = i6;
                    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, new_r_1.size(), 2,
                                                  &n_emlrtECI, (emlrtCTX)sp);
                    last = new_r_1.size(1);
                    for (i6 = 0; i6 < last; i6++) {
                      b_new_rs[b_i + b_new_rs.size(0) * i6] = new_r_1[i6];
                    }
                    if (new_r_2.size(1) < 1) {
                      i6 = 0;
                    } else {
                      if (b_new_rs.size(1) < 1) {
                        emlrtDynamicBoundsCheckR2012b(1, 1, b_new_rs.size(1),
                                                      &eh_emlrtBCI,
                                                      (emlrtConstCTX)sp);
                      }
                      if (new_r_2.size(1) > b_new_rs.size(1)) {
                        emlrtDynamicBoundsCheckR2012b(
                            new_r_2.size(1), 1, b_new_rs.size(1), &fh_emlrtBCI,
                            (emlrtConstCTX)sp);
                      }
                      i6 = new_r_2.size(1);
                    }
                    if (j > b_new_rs.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          static_cast<int32_T>(j), 1, b_new_rs.size(0),
                          &dh_emlrtBCI, (emlrtConstCTX)sp);
                    }
                    iv[0] = 1;
                    iv[1] = i6;
                    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, new_r_2.size(), 2,
                                                  &o_emlrtECI, (emlrtCTX)sp);
                    last = new_r_2.size(1);
                    for (i6 = 0; i6 < last; i6++) {
                      b_new_rs[(j + b_new_rs.size(0) * i6) - 1] = new_r_2[i6];
                    }
                    //  放入池子中
                    //  先找到池子中成本最大的解对应的索引
                    //  如果 当前解的成本 比 池子中最大成本的解 还大
                    //  那直接不要了 如果小于 则接受 把最大成本的解替换掉
                    st.site = &kf_emlrtRSI;
                    forward_time =
                        (sum_ori_cost - old_sum_cost) + coder::c_sum(new_cost);
                    if (forward_time < max_pool_cost) {
                      if (max_pool_ind > pool_routes.size(0)) {
                        emlrtDynamicBoundsCheckR2012b(
                            max_pool_ind, 1, pool_routes.size(0), &gh_emlrtBCI,
                            (emlrtConstCTX)sp);
                      }
                      iv1[0] = 1;
                      iv1[1] = pool_routes.size(1);
                      iv1[2] = pool_routes.size(2);
                      emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, b_new_rs.size(),
                                                    2, &p_emlrtECI,
                                                    (emlrtCTX)sp);
                      iv1[1] = pool_routes.size(1);
                      last = pool_routes.size(2);
                      for (i6 = 0; i6 < last; i6++) {
                        loop_ub_tmp = pool_routes.size(1);
                        for (i12 = 0; i12 < loop_ub_tmp; i12++) {
                          pool_routes[((max_pool_ind +
                                        pool_routes.size(0) * i12) +
                                       pool_routes.size(0) *
                                           pool_routes.size(1) * i6) -
                                      1] = b_new_rs[i12 + iv1[1] * i6];
                        }
                      }
                      //  加入邻域池子
                      if (max_pool_ind > pool_del.size(0)) {
                        emlrtDynamicBoundsCheckR2012b(
                            max_pool_ind, 1, pool_del.size(0), &kh_emlrtBCI,
                            (emlrtConstCTX)sp);
                      }
                      for (i6 = 0; i6 < 2; i6++) {
                        pool_del_tmp = i6 << 2;
                        pool_del[(max_pool_ind + pool_del.size(0) * 4 * i6) -
                                 1] = del_arc[pool_del_tmp];
                        pool_del[((max_pool_ind + pool_del.size(0)) +
                                  pool_del.size(0) * 4 * i6) -
                                 1] = del_arc[pool_del_tmp + 1];
                        pool_del[((max_pool_ind + pool_del.size(0) * 2) +
                                  pool_del.size(0) * 4 * i6) -
                                 1] = del_arc[pool_del_tmp + 2];
                        pool_del[((max_pool_ind + pool_del.size(0) * 3) +
                                  pool_del.size(0) * 4 * i6) -
                                 1] = del_arc[pool_del_tmp + 3];
                      }
                      //  每个邻域解对应删除的弧
                      if (max_pool_ind > pool_ind.size(0)) {
                        emlrtDynamicBoundsCheckR2012b(
                            max_pool_ind, 1, pool_ind.size(0), &mh_emlrtBCI,
                            (emlrtConstCTX)sp);
                      }
                      pool_ind[max_pool_ind - 1] =
                          static_cast<uint8_T>(b_i + 1);
                      pool_ind[(max_pool_ind + pool_ind.size(0)) - 1] =
                          static_cast<uint8_T>(j);
                      //  每个邻域解对应变动索引
                      if (max_pool_ind > pool_deter.size(0)) {
                        emlrtDynamicBoundsCheckR2012b(
                            max_pool_ind, 1, pool_deter.size(0), &ul_emlrtBCI,
                            (emlrtConstCTX)sp);
                      }
                      pool_deter[max_pool_ind - 1] = deteriorate;
                      if (max_pool_ind > pool_gen_cost.size(0)) {
                        emlrtDynamicBoundsCheckR2012b(
                            max_pool_ind, 1, pool_gen_cost.size(0),
                            &vl_emlrtBCI, (emlrtConstCTX)sp);
                      }
                      pool_gen_cost[max_pool_ind - 1] = forward_time;
                      pool_div_gen_cost.set_size(&ne_emlrtRTEI, sp,
                                                 sol_info->cost.size(0));
                      last = sol_info->cost.size(0);
                      for (i6 = 0; i6 < last; i6++) {
                        pool_div_gen_cost[i6] = sol_info->cost[i6];
                      }
                      if (max_pool_ind > pool_dis.size(0)) {
                        emlrtDynamicBoundsCheckR2012b(
                            max_pool_ind, 1, pool_dis.size(0), &wl_emlrtBCI,
                            (emlrtConstCTX)sp);
                      }
                      st.site = &lf_emlrtRSI;
                      pool_dis[max_pool_ind - 1] =
                          ((coder::sum(&st, pool_div_gen_cost) -
                            sol_info->cost[b_i]) -
                           dist_r_2_tmp) +
                          coder::d_sum(&new_cost[0]);
                      if (max_pool_ind > pool_payload.size(0)) {
                        emlrtDynamicBoundsCheckR2012b(
                            max_pool_ind, 1, pool_payload.size(0), &oh_emlrtBCI,
                            (emlrtConstCTX)sp);
                      }
                      pool_payload[max_pool_ind - 1] = payload_1;
                      pool_payload[(max_pool_ind + pool_payload.size(0)) - 1] =
                          payload_2;
                      //  更新最大索引
                      st.site = &mf_emlrtRSI;
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
                          back_time = pool_gen_cost[k - 1];
                          if (max_pool_cost < back_time) {
                            max_pool_cost = back_time;
                            max_pool_ind = k;
                          }
                        }
                      }
                    }
                    //                  % 退化则计算多样性成本
                    //                  if deteriorate
                    //                      % 更新频率
                    //                      temp_frequency =
                    //                      update_frequency(frequency, new_rs);
                    //                      % 计算距离
                    //                      total_distance =
                    //                      sum(sol_info.cost(:,1)) -
                    //                      old_cost_1(1) - old_cost_2(1) +
                    //                      sum(new_cost(1:2,1)); %
                    //                      更新frequency cost_div =
                    //                      calculate_diversity(new_rs, div,
                    //                      total_distance, cus_num, v_num,
                    //                      temp_frequency);
                    //                  else
                    //                      cost_div = 0;
                    //                  end
                    //
                    //                  % 计算 广义 + 多样性成本
                    //                  temp_gen_div_cost = sum_ori_cost +
                    //                  cost_div - old_sum_cost +
                    //                  sum(new_cost,'all'); if
                    //                  temp_gen_div_cost <= best_total_cost
                    //                      best_total_cost = temp_gen_div_cost;
                    //                      % 更新最佳成本 best_neighbor.routes
                    //                      = new_rs; % 路径
                    //
                    //                      best_neighbor.cost = sol_info.cost;
                    //                      change_route_ind = double([i,j]); %
                    //                      变动的路径
                    //
                    //                      best_neighbor.cost(change_route_ind,:)
                    //                      = new_cost; % 最佳成本
                    //
                    //                      best_neighbor.payload =
                    //                      sol_info.payload;
                    //                      best_neighbor.payload(change_route_ind)
                    //                      = [payload_1, payload_2]; best_del =
                    //                      del_arc; % 记录删除的弧
                    //                  end
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
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  从池子中计算多样性成本，返回相应的参数
  //  先清除没有填进去的位置
  empty_flag.set_size(&oe_emlrtRTEI, sp, pool_gen_cost.size(0));
  last = pool_gen_cost.size(0);
  for (i = 0; i < last; i++) {
    empty_flag[i] = (pool_gen_cost[i] == rtInf);
  }
  //  计算广义成本+多样性成本
  pool_div_gen_cost.set_size(&pe_emlrtRTEI, sp, pool_gen_cost.size(0));
  last = pool_gen_cost.size(0);
  for (i = 0; i < last; i++) {
    pool_div_gen_cost[i] = 0.0;
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, param_pen->pool_size, mxDOUBLE_CLASS,
                                static_cast<int32_T>(param_pen->pool_size),
                                &k_emlrtRTEI, (emlrtConstCTX)sp);
  b_i = 1;
  exitg1 = false;
  while ((!exitg1) && (b_i - 1 <= loop_ub - 1)) {
    if ((b_i < 1) || (b_i > empty_flag.size(0))) {
      emlrtDynamicBoundsCheckR2012b(b_i, 1, empty_flag.size(0), &qh_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (!empty_flag[b_i - 1]) {
      if (b_i > pool_deter.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_deter.size(0), &rh_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (pool_deter[b_i - 1]) {
        //  退化解记录多样性成本
        if (b_i > pool_routes.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_routes.size(0),
                                        &hh_emlrtBCI, (emlrtConstCTX)sp);
        }
        new_rs.set_size(&re_emlrtRTEI, sp, 1, pool_routes.size(1),
                        pool_routes.size(2));
        last = pool_routes.size(2);
        for (i = 0; i < last; i++) {
          b_loop_ub = pool_routes.size(1);
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            new_rs[i1 + new_rs.size(1) * i] =
                pool_routes[((b_i + pool_routes.size(0) * i1) +
                             pool_routes.size(0) * pool_routes.size(1) * i) -
                            1];
          }
        }
        temp_frequency.set_size(&se_emlrtRTEI, sp, frequency.size(0),
                                frequency.size(1));
        last = frequency.size(0) * frequency.size(1);
        for (i = 0; i < last; i++) {
          temp_frequency[i] = frequency[i];
        }
        st.site = &nf_emlrtRSI;
        update_frequency(&st, temp_frequency, new_rs);
        //  更新频率
        if (b_i > pool_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_gen_cost.size(0),
                                        &vh_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (b_i > pool_dis.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_dis.size(0), &wh_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (b_i > pool_div_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_div_gen_cost.size(0),
                                        &xh_emlrtBCI, (emlrtConstCTX)sp);
        }
        st.site = &of_emlrtRSI;
        pool_div_gen_cost[b_i - 1] =
            pool_gen_cost[b_i - 1] +
            calculate_diversity(&st, new_rs, b_div, pool_dis[b_i - 1],
                                static_cast<real_T>(data->dmd.size(0)) - 1.0,
                                data->vnum, temp_frequency);
      } else {
        //  非退化直接记录成本
        if (b_i > pool_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_gen_cost.size(0),
                                        &sh_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (b_i > pool_div_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_div_gen_cost.size(0),
                                        &th_emlrtBCI, (emlrtConstCTX)sp);
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
                                        &ih_emlrtBCI, (emlrtConstCTX)sp);
        }
        i = b_i - 1;
        i1 = pool_div_gen_cost.size(0);
      }
      loop_ub = i1 - i;
      for (i1 = 0; i1 < loop_ub; i1++) {
        pool_div_gen_cost[i + i1] = rtInf;
      }
      exitg1 = true;
    }
  }
  //  返回成本最小的解
  st.site = &pf_emlrtRSI;
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
      forward_time = pool_div_gen_cost[0];
      pool_del_tmp = 1;
    } else if ((pool_div_gen_cost[0] > pool_div_gen_cost[1]) ||
               (muDoubleScalarIsNaN(pool_div_gen_cost[0]) &&
                (!muDoubleScalarIsNaN(pool_div_gen_cost[1])))) {
      forward_time = pool_div_gen_cost[1];
      pool_del_tmp = 2;
    } else {
      forward_time = pool_div_gen_cost[0];
      pool_del_tmp = 1;
    }
  } else {
    f_st.site = &pc_emlrtRSI;
    if (!muDoubleScalarIsNaN(pool_div_gen_cost[0])) {
      pool_del_tmp = 1;
    } else {
      pool_del_tmp = 0;
      g_st.site = &qc_emlrtRSI;
      if (pool_div_gen_cost.size(0) > 2147483646) {
        h_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&h_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(pool_div_gen_cost[k - 1])) {
          pool_del_tmp = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (pool_del_tmp == 0) {
      forward_time = pool_div_gen_cost[0];
      pool_del_tmp = 1;
    } else {
      f_st.site = &oc_emlrtRSI;
      forward_time = pool_div_gen_cost[pool_del_tmp - 1];
      loop_ub_tmp = pool_del_tmp + 1;
      g_st.site = &rc_emlrtRSI;
      if ((pool_del_tmp + 1 <= pool_div_gen_cost.size(0)) &&
          (pool_div_gen_cost.size(0) > 2147483646)) {
        h_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&h_st);
      }
      for (k = loop_ub_tmp; k <= last; k++) {
        back_time = pool_div_gen_cost[k - 1];
        if (forward_time > back_time) {
          forward_time = back_time;
          pool_del_tmp = k;
        }
      }
    }
  }
  *best_neighbor = *sol_info;
  if ((pool_del_tmp < 1) || (pool_del_tmp > pool_routes.size(0))) {
    emlrtDynamicBoundsCheckR2012b(pool_del_tmp, 1, pool_routes.size(0),
                                  &jh_emlrtBCI, (emlrtConstCTX)sp);
  }
  new_rs.set_size(&qe_emlrtRTEI, sp, 1, pool_routes.size(1),
                  pool_routes.size(2));
  loop_ub = pool_routes.size(2);
  for (i = 0; i < loop_ub; i++) {
    last = pool_routes.size(1);
    for (i1 = 0; i1 < last; i1++) {
      new_rs[i1 + new_rs.size(1) * i] =
          pool_routes[((pool_del_tmp + pool_routes.size(0) * i1) +
                       pool_routes.size(0) * pool_routes.size(1) * i) -
                      1];
    }
  }
  st.site = &qf_emlrtRSI;
  coder::squeeze(&st, new_rs, best_neighbor->routes);
  if (pool_del_tmp > pool_del.size(0)) {
    emlrtDynamicBoundsCheckR2012b(pool_del_tmp, 1, pool_del.size(0),
                                  &lh_emlrtBCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < 2; i++) {
    loop_ub_tmp = i << 2;
    best_del[loop_ub_tmp] =
        pool_del[(pool_del_tmp + pool_del.size(0) * 4 * i) - 1];
    best_del[loop_ub_tmp + 1] = pool_del[((pool_del_tmp + pool_del.size(0)) +
                                          pool_del.size(0) * 4 * i) -
                                         1];
    best_del[loop_ub_tmp + 2] =
        pool_del[((pool_del_tmp + pool_del.size(0) * 2) +
                  pool_del.size(0) * 4 * i) -
                 1];
    best_del[loop_ub_tmp + 3] =
        pool_del[((pool_del_tmp + pool_del.size(0) * 3) +
                  pool_del.size(0) * 4 * i) -
                 1];
  }
  if (pool_del_tmp > pool_ind.size(0)) {
    emlrtDynamicBoundsCheckR2012b(pool_del_tmp, 1, pool_ind.size(0),
                                  &nh_emlrtBCI, (emlrtConstCTX)sp);
  }
  best_ind[0] = pool_ind[pool_del_tmp - 1];
  best_ind[1] = pool_ind[(pool_del_tmp + pool_ind.size(0)) - 1];
  if (pool_del_tmp > pool_payload.size(0)) {
    emlrtDynamicBoundsCheckR2012b(pool_del_tmp, 1, pool_payload.size(0),
                                  &ph_emlrtBCI, (emlrtConstCTX)sp);
  }
  i = pool_ind[pool_del_tmp - 1];
  if ((i < 1) || (i > sol_info->payload.size(0))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(pool_ind[pool_del_tmp - 1]), 1,
        sol_info->payload.size(0), &xl_emlrtBCI, (emlrtConstCTX)sp);
  }
  best_neighbor->payload[i - 1] = pool_payload[pool_del_tmp - 1];
  i = pool_ind[(pool_del_tmp + pool_ind.size(0)) - 1];
  if ((i < 1) || (i > sol_info->payload.size(0))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(pool_ind[(pool_del_tmp + pool_ind.size(0)) - 1]),
        1, sol_info->payload.size(0), &xl_emlrtBCI, (emlrtConstCTX)sp);
  }
  best_neighbor->payload[i - 1] =
      pool_payload[(pool_del_tmp + pool_payload.size(0)) - 1];
  *best_total_cost = forward_time;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (ts_inter_exchanging.cpp)
