//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ts_two_optimization.cpp
//
// Code generation for function 'ts_two_optimization'
//

// Include files
#include "ts_two_optimization.h"
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
static emlrtRSInfo rf_emlrtRSI{
    261,                   // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo sf_emlrtRSI{
    259,                   // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo tf_emlrtRSI{
    247,                   // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo uf_emlrtRSI{
    245,                   // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo vf_emlrtRSI{
    193,                   // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo wf_emlrtRSI{
    189,                   // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo xf_emlrtRSI{
    182,                   // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo yf_emlrtRSI{
    163,                   // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo ag_emlrtRSI{
    40,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo bg_emlrtRSI{
    75,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo cg_emlrtRSI{
    38,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo dg_emlrtRSI{
    73,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo eg_emlrtRSI{
    76,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo fg_emlrtRSI{
    39,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo gg_emlrtRSI{
    74,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo hg_emlrtRSI{
    37,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo ig_emlrtRSI{
    133,                   // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo jg_emlrtRSI{
    81,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo kg_emlrtRSI{
    68,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo lg_emlrtRSI{
    66,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo mg_emlrtRSI{
    56,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo ng_emlrtRSI{
    32,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo og_emlrtRSI{
    30,                    // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtRSInfo pg_emlrtRSI{
    7,                     // lineNo
    "ts_two_optimization", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pathName
};

static emlrtBCInfo yl_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    264,                   // lineNo
    48,                    // colNo
    "pool_payload",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo am_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    190,                   // lineNo
    34,                    // colNo
    "pool_payload",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    263,                   // lineNo
    21,                    // colNo
    "pool_ind",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    186,                   // lineNo
    30,                    // colNo
    "pool_ind",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    262,                   // lineNo
    29,                    // colNo
    "pool_del",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo em_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    185,                   // lineNo
    30,                    // colNo
    "pool_del",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    261,                   // lineNo
    44,                    // colNo
    "pool_routes",         // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    253,                   // lineNo
    27,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    244,                   // lineNo
    33,                    // colNo
    "pool_routes",         // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtECInfo q_emlrtECI{
    -1,                    // nDims
    184,                   // lineNo
    21,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtBCInfo im_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    184,                   // lineNo
    33,                    // colNo
    "pool_routes",         // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo l_emlrtRTEI{
    240,                   // lineNo
    9,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtECInfo r_emlrtECI{
    -1,                    // nDims
    175,                   // lineNo
    17,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtBCInfo jm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    175,                   // lineNo
    28,                    // colNo
    "new_rs",              // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo km_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    175,                   // lineNo
    26,                    // colNo
    "new_rs",              // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    175,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtECInfo s_emlrtECI{
    -1,                    // nDims
    174,                   // lineNo
    17,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtBCInfo mm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    174,                   // lineNo
    28,                    // colNo
    "new_rs",              // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    174,                   // lineNo
    26,                    // colNo
    "new_rs",              // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo om_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    174,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    173,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    172,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    158,                   // lineNo
    53,                    // colNo
    "tw_b_r_1",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    158,                   // lineNo
    39,                    // colNo
    "tw_f_r_2",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    156,                   // lineNo
    53,                    // colNo
    "tw_b_r_2",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo um_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    156,                   // lineNo
    39,                    // colNo
    "tw_f_r_1",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    128,                   // lineNo
    46,                    // colNo
    "r_1_r",               // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    127,                   // lineNo
    46,                    // colNo
    "r_2_r",               // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xm_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    123,                   // lineNo
    29,                    // colNo
    "r_2",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ym_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    122,                   // lineNo
    31,                    // colNo
    "r_2",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo an_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    122,                   // lineNo
    29,                    // colNo
    "r_2",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    107,                   // lineNo
    45,                    // colNo
    "sol_info.payload",    // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    98,                    // lineNo
    25,                    // colNo
    "r_1",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    97,                    // lineNo
    27,                    // colNo
    "r_1",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo en_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    97,                    // lineNo
    25,                    // colNo
    "r_1",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    89,                    // lineNo
    22,                    // colNo
    "cum_dist_b_2",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    79,                    // lineNo
    36,                    // colNo
    "sol_info.cost",       // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    67,                    // lineNo
    26,                    // colNo
    "a_r_r_2",             // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo in_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    67,                    // lineNo
    24,                    // colNo
    "a_r_r_2",             // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    66,                    // lineNo
    27,                    // colNo
    "r_2",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    66,                    // lineNo
    25,                    // colNo
    "r_2",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ln_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    63,                     // lineNo
    41,                     // colNo
    "sol_info.tw_backward", // aName
    "ts_two_optimization",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    62,                    // lineNo
    40,                    // colNo
    "sol_info.tw_forward", // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    61,                    // lineNo
    37,                    // colNo
    "sol_info.z_c_time",   // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo on_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    60,                    // lineNo
    37,                    // colNo
    "sol_info.a_c_time",   // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    59,                    // lineNo
    37,                    // colNo
    "sol_info.a_r_time",   // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    58,                    // lineNo
    31,                    // colNo
    "sol_info.routes",     // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    51,                    // lineNo
    18,                    // colNo
    "cum_dist_b_1",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    43,                    // lineNo
    32,                    // colNo
    "sol_info.cost",       // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    31,                    // lineNo
    22,                    // colNo
    "a_r_r_1",             // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo un_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    31,                    // lineNo
    20,                    // colNo
    "a_r_r_1",             // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    30,                    // lineNo
    23,                    // colNo
    "r_1",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    30,                    // lineNo
    21,                    // colNo
    "r_1",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xn_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    27,                     // lineNo
    37,                     // colNo
    "sol_info.tw_backward", // aName
    "ts_two_optimization",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yn_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    26,                    // lineNo
    36,                    // colNo
    "sol_info.tw_forward", // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ao_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    25,                    // lineNo
    33,                    // colNo
    "sol_info.z_c_time",   // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    24,                    // lineNo
    33,                    // colNo
    "sol_info.a_c_time",   // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo co_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    23,                    // lineNo
    33,                    // colNo
    "sol_info.a_r_time",   // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo do_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    22,                    // lineNo
    27,                    // colNo
    "sol_info.routes",     // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtDCInfo y_emlrtDCI{
    13,                    // lineNo
    26,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    1                       // checkKind
};

static emlrtDCInfo ab_emlrtDCI{
    9,                     // lineNo
    27,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    1                       // checkKind
};

static emlrtDCInfo bb_emlrtDCI{
    9,                     // lineNo
    27,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    4                       // checkKind
};

static emlrtDCInfo cb_emlrtDCI{
    10,                    // lineNo
    24,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    1                       // checkKind
};

static emlrtDCInfo db_emlrtDCI{
    11,                    // lineNo
    18,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    1                       // checkKind
};

static emlrtDCInfo eb_emlrtDCI{
    15,                    // lineNo
    22,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    1                       // checkKind
};

static emlrtDCInfo fb_emlrtDCI{
    9,                     // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    1                       // checkKind
};

static emlrtDCInfo gb_emlrtDCI{
    10,                    // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    1                       // checkKind
};

static emlrtDCInfo hb_emlrtDCI{
    11,                    // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    1                       // checkKind
};

static emlrtDCInfo ib_emlrtDCI{
    12,                    // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    1                       // checkKind
};

static emlrtDCInfo jb_emlrtDCI{
    14,                    // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    1                       // checkKind
};

static emlrtDCInfo kb_emlrtDCI{
    15,                    // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    1                       // checkKind
};

static emlrtBCInfo eo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    241,                   // lineNo
    20,                    // colNo
    "empty_flag",          // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    242,                   // lineNo
    23,                    // colNo
    "pool_deter",          // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo go_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    250,                   // lineNo
    50,                    // colNo
    "pool_gen_cost",       // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ho_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    250,                   // lineNo
    31,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo io_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    247,                   // lineNo
    31,                    // colNo
    "pool_gen_cost",       // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    247,                   // lineNo
    78,                    // colNo
    "pool_dis",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ko_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    246,                   // lineNo
    31,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    48,                    // lineNo
    40,                    // colNo
    "cum_dist_f_1",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    48,                    // lineNo
    57,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo no_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    48,                    // lineNo
    61,                    // colNo
    "r_1",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo oo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    48,                    // lineNo
    69,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo po_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    48,                    // lineNo
    73,                    // colNo
    "r_1",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    48,                    // lineNo
    22,                    // colNo
    "cum_dist_f_1",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ro_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    51,                    // lineNo
    37,                    // colNo
    "cum_dist_f_1",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo so_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    53,                    // lineNo
    40,                    // colNo
    "cum_dist_b_1",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo to_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    53,                    // lineNo
    57,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    53,                    // lineNo
    61,                    // colNo
    "r_1",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    53,                    // lineNo
    69,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    53,                    // lineNo
    73,                    // colNo
    "r_1",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    53,                    // lineNo
    22,                    // colNo
    "cum_dist_b_1",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yo_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    86,                    // lineNo
    44,                    // colNo
    "cum_dist_f_2",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ap_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    86,                    // lineNo
    61,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    86,                    // lineNo
    65,                    // colNo
    "r_2",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    86,                    // lineNo
    73,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    86,                    // lineNo
    77,                    // colNo
    "r_2",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ep_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    86,                    // lineNo
    26,                    // colNo
    "cum_dist_f_2",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    89,                    // lineNo
    40,                    // colNo
    "cum_dist_f_2",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    44,                    // colNo
    "cum_dist_b_2",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    61,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ip_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    65,                    // colNo
    "r_2",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    73,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    77,                    // colNo
    "r_2",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    26,                    // colNo
    "cum_dist_b_2",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    100,                   // lineNo
    44,                    // colNo
    "data.dmd",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo np_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    101,                   // lineNo
    41,                    // colNo
    "sol_info.payload",    // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo op_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    106,                   // lineNo
    48,                    // colNo
    "data.dmd",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    106,                   // lineNo
    52,                    // colNo
    "r_2",                 // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    136,                   // lineNo
    29,                    // colNo
    "data.arc",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    136,                   // lineNo
    45,                    // colNo
    "data.arc",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    137,                   // lineNo
    30,                    // colNo
    "data.arc",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    137,                   // lineNo
    46,                    // colNo
    "data.arc",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo up_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    147,                   // lineNo
    46,                    // colNo
    "cum_dist_f_1",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    147,                   // lineNo
    64,                    // colNo
    "cum_dist_b_2",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    147,                   // lineNo
    81,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    147,                   // lineNo
    95,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yp_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    148,                   // lineNo
    46,                    // colNo
    "cum_dist_f_2",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo aq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    148,                   // lineNo
    64,                    // colNo
    "cum_dist_b_1",        // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    148,                   // lineNo
    81,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    148,                   // lineNo
    95,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    155,                   // lineNo
    36,                    // colNo
    "a_c_r_1",             // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo eq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    155,                   // lineNo
    49,                    // colNo
    "data.st",             // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    155,                   // lineNo
    75,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    155,                   // lineNo
    88,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    155,                   // lineNo
    110,                   // colNo
    "z_c_r_2",             // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo iq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    157,                   // lineNo
    36,                    // colNo
    "a_c_r_2",             // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    157,                   // lineNo
    49,                    // colNo
    "data.st",             // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    157,                   // lineNo
    75,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    157,                   // lineNo
    88,                    // colNo
    "data.dist",           // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    157,                   // lineNo
    110,                   // colNo
    "z_c_r_1",             // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    187,                   // lineNo
    32,                    // colNo
    "pool_deter",          // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo oq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    188,                   // lineNo
    35,                    // colNo
    "pool_gen_cost",       // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pq_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    189,                   // lineNo
    30,                    // colNo
    "pool_dis",            // aName
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qq_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    264,                     // lineNo
    1,                       // colNo
    "best_neighbor.payload", // aName
    "ts_two_optimization",   // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo te_emlrtRTEI{
    9,                     // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo ue_emlrtRTEI{
    10,                    // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo ve_emlrtRTEI{
    11,                    // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo we_emlrtRTEI{
    12,                    // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo xe_emlrtRTEI{
    13,                    // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo ye_emlrtRTEI{
    14,                    // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo af_emlrtRTEI{
    15,                    // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo bf_emlrtRTEI{
    30,                    // lineNo
    5,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo cf_emlrtRTEI{
    30,                    // lineNo
    9,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo df_emlrtRTEI{
    31,                    // lineNo
    5,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo ef_emlrtRTEI{
    32,                    // lineNo
    12,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo ff_emlrtRTEI{
    35,                    // lineNo
    9,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo gf_emlrtRTEI{
    33,                    // lineNo
    9,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo hf_emlrtRTEI{
    37,                    // lineNo
    5,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo if_emlrtRTEI{
    38,                    // lineNo
    5,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo jf_emlrtRTEI{
    39,                    // lineNo
    5,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo kf_emlrtRTEI{
    40,                    // lineNo
    5,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo lf_emlrtRTEI{
    46,                    // lineNo
    5,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo mf_emlrtRTEI{
    50,                    // lineNo
    5,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo nf_emlrtRTEI{
    66,                    // lineNo
    9,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo of_emlrtRTEI{
    66,                    // lineNo
    13,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo pf_emlrtRTEI{
    67,                    // lineNo
    9,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo qf_emlrtRTEI{
    68,                    // lineNo
    16,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo rf_emlrtRTEI{
    71,                    // lineNo
    13,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo sf_emlrtRTEI{
    69,                    // lineNo
    13,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo tf_emlrtRTEI{
    73,                    // lineNo
    9,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo uf_emlrtRTEI{
    74,                    // lineNo
    9,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo vf_emlrtRTEI{
    75,                    // lineNo
    9,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo wf_emlrtRTEI{
    76,                    // lineNo
    9,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo xf_emlrtRTEI{
    84,                    // lineNo
    9,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo yf_emlrtRTEI{
    88,                    // lineNo
    9,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo ag_emlrtRTEI{
    142,                   // lineNo
    17,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo bg_emlrtRTEI{
    143,                   // lineNo
    17,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo cg_emlrtRTEI{
    171,                   // lineNo
    17,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo dg_emlrtRTEI{
    189,                   // lineNo
    50,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo eg_emlrtRTEI{
    235,                   // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo fg_emlrtRTEI{
    239,                   // lineNo
    1,                     // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo gg_emlrtRTEI{
    261,                   // lineNo
    32,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo hg_emlrtRTEI{
    244,                   // lineNo
    13,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

static emlrtRTEInfo ig_emlrtRTEI{
    245,                   // lineNo
    13,                    // colNo
    "ts_two_optimization", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_two_optimization.m" // pName
};

// Function Definitions
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
                         real_T best_ind[2])
{
  coder::array<real_T, 2U> a_c_r_1;
  coder::array<real_T, 2U> a_c_r_2;
  coder::array<real_T, 2U> cum_dist_b_1;
  coder::array<real_T, 2U> cum_dist_b_2;
  coder::array<real_T, 2U> cum_dist_f_1;
  coder::array<real_T, 2U> cum_dist_f_2;
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
  real_T max_pool_cost;
  real_T pun_time;
  real_T sum_ori_cost;
  real_T temp_gen_cost;
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
  int32_T i12;
  int32_T i2;
  int32_T i3;
  int32_T i4;
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
  int32_T p_loop_ub;
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
  //  路线之间2-OPT*交换
  //  初始化
  //  记录变化之后的成本
  //  顾客数量
  //  车辆数
  st.site = &pg_emlrtRSI;
  sum_ori_cost = coder::sum(&st, sol_info->cost);
  //  原始解sol_inf的成本
  if (!(param_pen->pool_size >= 0.0)) {
    emlrtNonNegativeCheckR2012b(param_pen->pool_size, &bb_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  pun_time = static_cast<int32_T>(muDoubleScalarFloor(param_pen->pool_size));
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &ab_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_routes.set_size(&te_emlrtRTEI, sp,
                       static_cast<int32_T>(param_pen->pool_size),
                       sol_info->routes.size(0), sol_info->routes.size(1));
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &fb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(param_pen->pool_size) *
            sol_info->routes.size(0) * sol_info->routes.size(1);
  for (i = 0; i < loop_ub; i++) {
    pool_routes[i] = 0;
  }
  //  邻域池子
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &cb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_del.set_size(&ue_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen->pool_size), 2, 2);
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &gb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(param_pen->pool_size) << 2;
  for (i = 0; i < loop_ub; i++) {
    pool_del[i] = 0;
  }
  //  每个邻域解对应删除的弧
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &db_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_ind.set_size(&ve_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen->pool_size), 2);
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &hb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub_tmp = static_cast<int32_T>(param_pen->pool_size) << 1;
  for (i = 0; i < loop_ub_tmp; i++) {
    pool_ind[i] = 0U;
  }
  //  每个邻域解对应变动索引
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &ib_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_deter.set_size(&we_emlrtRTEI, sp,
                      static_cast<int32_T>(param_pen->pool_size));
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &ib_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(param_pen->pool_size);
  for (i = 0; i < loop_ub; i++) {
    pool_deter[i] = false;
  }
  //  每个邻域解是否退化
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &y_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(param_pen->pool_size);
  pool_gen_cost.set_size(&xe_emlrtRTEI, sp,
                         static_cast<int32_T>(param_pen->pool_size));
  for (i = 0; i < loop_ub; i++) {
    pool_gen_cost[i] = rtInf;
  }
  //  每个邻域解的广义成本
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &jb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_dis.set_size(&ye_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen->pool_size));
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &jb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  last = static_cast<int32_T>(param_pen->pool_size);
  for (i = 0; i < last; i++) {
    pool_dis[i] = 0.0;
  }
  //  每个邻域解的总距离
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &eb_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_payload.set_size(&af_emlrtRTEI, sp,
                        static_cast<int32_T>(param_pen->pool_size), 2);
  if (param_pen->pool_size != pun_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &kb_emlrtDCI,
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
  //  交换
  i = data_vnum;
  if (data_vnum - 1 >= 0) {
    if (sol_info->routes.size(1) - 1 < 2) {
      i1 = 0;
      i2 = 0;
    } else {
      if (sol_info->routes.size(1) < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, sol_info->routes.size(1),
                                      &wn_emlrtBCI, (emlrtConstCTX)sp);
      }
      i1 = 1;
      if ((sol_info->routes.size(1) - 1 < 1) ||
          (sol_info->routes.size(1) - 1 > sol_info->routes.size(1))) {
        emlrtDynamicBoundsCheckR2012b(sol_info->routes.size(1) - 1, 1,
                                      sol_info->routes.size(1), &vn_emlrtBCI,
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
                                      &un_emlrtBCI, (emlrtConstCTX)sp);
      }
      i3 = 1;
      if (sol_info->a_r_time.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(sol_info->a_r_time.size(1), 1,
                                      sol_info->a_r_time.size(1), &tn_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i4 = sol_info->a_r_time.size(1);
    }
    d_loop_ub = i4 - i3;
    e_loop_ub = sol_info->a_c_time.size(1);
    f_loop_ub = sol_info->z_c_time.size(1);
    g_loop_ub = sol_info->tw_forward.size(1);
    h_loop_ub = sol_info->tw_backward.size(1);
  }
  for (b_i = 0; b_i < i; b_i++) {
    int32_T i5;
    int32_T i6;
    int32_T i7;
    int8_T a;
    //  路线信息
    if (b_i + 1 > sol_info->routes.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->routes.size(0),
                                    &do_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  第一个路径
    if (b_i + 1 > sol_info->a_r_time.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->a_r_time.size(0),
                                    &co_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  实际最晚到达
    if (b_i + 1 > sol_info->a_c_time.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->a_c_time.size(0),
                                    &bo_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  修正最晚到达
    if (b_i + 1 > sol_info->z_c_time.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->z_c_time.size(0),
                                    &ao_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  修正最早到达
    if (b_i + 1 > sol_info->tw_forward.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->tw_forward.size(0),
                                    &yn_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  前向惩罚时间
    if (b_i + 1 > sol_info->tw_backward.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->tw_backward.size(0),
                                    &xn_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  反向惩罚时间
    //  消除多余的0
    r_1.set_size(&bf_emlrtRTEI, sp, 1, sol_info->routes.size(1));
    for (i5 = 0; i5 < b_loop_ub; i5++) {
      r_1[i5] = sol_info->routes[b_i + sol_info->routes.size(0) * i5];
    }
    i5 = i2 - i1;
    time_del_ind.set_size(&cf_emlrtRTEI, sp, 1, i5 + 2);
    time_del_ind[0] = false;
    for (i6 = 0; i6 < c_loop_ub; i6++) {
      time_del_ind[i6 + 1] =
          (sol_info->routes[b_i + sol_info->routes.size(0) * (i1 + i6)] == 0);
    }
    time_del_ind[i5 + 1] = false;
    st.site = &og_emlrtRSI;
    coder::internal::nullAssignment(&st, r_1, time_del_ind);
    temp.set_size(&df_emlrtRTEI, sp, 1, i4 - i3);
    for (i5 = 0; i5 < d_loop_ub; i5++) {
      temp[i5] =
          (sol_info->a_r_time[b_i + sol_info->a_r_time.size(0) * (i3 + i5)] ==
           0.0);
    }
    time_del_ind.set_size(&ef_emlrtRTEI, sp, 1, temp.size(1));
    last = temp.size(1);
    for (i5 = 0; i5 < last; i5++) {
      time_del_ind[i5] = temp[i5];
    }
    st.site = &ng_emlrtRSI;
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
      time_del_ind.set_size(&gf_emlrtRTEI, sp, 1, last + 2);
      time_del_ind[0] = false;
      time_del_ind[1] = false;
      for (i6 = 0; i6 < last; i6++) {
        time_del_ind[i6 + 2] = temp[i5 + i6];
      }
    } else {
      time_del_ind.set_size(&ff_emlrtRTEI, sp, 1, temp.size(1) + 1);
      time_del_ind[0] = false;
      last = temp.size(1);
      for (i5 = 0; i5 < last; i5++) {
        time_del_ind[i5 + 1] = temp[i5];
      }
    }
    a_c_r_1.set_size(&hf_emlrtRTEI, sp, 1, sol_info->a_c_time.size(1));
    for (i5 = 0; i5 < e_loop_ub; i5++) {
      a_c_r_1[i5] = sol_info->a_c_time[b_i + sol_info->a_c_time.size(0) * i5];
    }
    st.site = &hg_emlrtRSI;
    coder::internal::b_nullAssignment(&st, a_c_r_1, time_del_ind);
    z_c_r_1.set_size(&if_emlrtRTEI, sp, 1, sol_info->z_c_time.size(1));
    for (i5 = 0; i5 < f_loop_ub; i5++) {
      z_c_r_1[i5] = sol_info->z_c_time[b_i + sol_info->z_c_time.size(0) * i5];
    }
    st.site = &cg_emlrtRSI;
    coder::internal::b_nullAssignment(&st, z_c_r_1, time_del_ind);
    tw_f_r_1.set_size(&jf_emlrtRTEI, sp, 1, sol_info->tw_forward.size(1));
    for (i5 = 0; i5 < g_loop_ub; i5++) {
      tw_f_r_1[i5] =
          sol_info->tw_forward[b_i + sol_info->tw_forward.size(0) * i5];
    }
    st.site = &fg_emlrtRSI;
    coder::internal::b_nullAssignment(&st, tw_f_r_1, time_del_ind);
    tw_b_r_1.set_size(&kf_emlrtRTEI, sp, 1, sol_info->tw_backward.size(1));
    for (i5 = 0; i5 < h_loop_ub; i5++) {
      tw_b_r_1[i5] =
          sol_info->tw_backward[b_i + sol_info->tw_backward.size(0) * i5];
    }
    st.site = &ag_emlrtRSI;
    coder::internal::b_nullAssignment(&st, tw_b_r_1, time_del_ind);
    //  原来的成本
    if (b_i + 1 > sol_info->cost.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->cost.size(0),
                                    &sn_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  计算第一个路径的累加前向反向距离
    last = r_1.size(1);
    cum_dist_f_1.set_size(&lf_emlrtRTEI, sp, 1, r_1.size(1));
    for (i5 = 0; i5 < last; i5++) {
      cum_dist_f_1[i5] = 0.0;
    }
    i5 = r_1.size(1);
    for (loop_ub_tmp = 0; loop_ub_tmp <= i5 - 2; loop_ub_tmp++) {
      if (loop_ub_tmp + 1 > cum_dist_f_1.size(1)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, cum_dist_f_1.size(1),
                                      &lo_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (loop_ub_tmp + 1 > r_1.size(1)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, r_1.size(1),
                                      &no_emlrtBCI, (emlrtConstCTX)sp);
      }
      i6 = r_1[loop_ub_tmp] + 1;
      if (i6 > 32767) {
        i6 = 32767;
      }
      if ((i6 < 1) || (i6 > data_dist.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i6, 1, data_dist.size(0), &mo_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (loop_ub_tmp + 2 > r_1.size(1)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 2, 1, r_1.size(1),
                                      &po_emlrtBCI, (emlrtConstCTX)sp);
      }
      i7 = r_1[loop_ub_tmp + 1] + 1;
      if (i7 > 32767) {
        i7 = 32767;
      }
      if ((i7 < 1) || (i7 > data_dist.size(1))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, data_dist.size(1), &oo_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (loop_ub_tmp + 2 > cum_dist_f_1.size(1)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 2, 1, cum_dist_f_1.size(1),
                                      &qo_emlrtBCI, (emlrtConstCTX)sp);
      }
      cum_dist_f_1[loop_ub_tmp + 1] =
          cum_dist_f_1[loop_ub_tmp] +
          data_dist[(i6 + data_dist.size(0) * (i7 - 1)) - 1];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    last = r_1.size(1);
    cum_dist_b_1.set_size(&mf_emlrtRTEI, sp, 1, r_1.size(1));
    for (i5 = 0; i5 < last; i5++) {
      cum_dist_b_1[i5] = 0.0;
    }
    if (r_1.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, r_1.size(1), &rn_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (cum_dist_f_1.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(cum_dist_f_1.size(1), 1,
                                    cum_dist_f_1.size(1), &ro_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    cum_dist_b_1[0] = cum_dist_f_1[cum_dist_f_1.size(1) - 1];
    i5 = r_1.size(1);
    for (loop_ub_tmp = 0; loop_ub_tmp <= i5 - 2; loop_ub_tmp++) {
      if (loop_ub_tmp + 1 > cum_dist_b_1.size(1)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, cum_dist_b_1.size(1),
                                      &so_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (loop_ub_tmp + 1 > r_1.size(1)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, r_1.size(1),
                                      &uo_emlrtBCI, (emlrtConstCTX)sp);
      }
      i6 = r_1[loop_ub_tmp] + 1;
      if (i6 > 32767) {
        i6 = 32767;
      }
      if ((i6 < 1) || (i6 > data_dist.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i6, 1, data_dist.size(0), &to_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (loop_ub_tmp + 2 > r_1.size(1)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 2, 1, r_1.size(1),
                                      &wo_emlrtBCI, (emlrtConstCTX)sp);
      }
      i7 = r_1[loop_ub_tmp + 1] + 1;
      if (i7 > 32767) {
        i7 = 32767;
      }
      if ((i7 < 1) || (i7 > data_dist.size(1))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, data_dist.size(1), &vo_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (loop_ub_tmp + 2 > cum_dist_b_1.size(1)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 2, 1, cum_dist_b_1.size(1),
                                      &xo_emlrtBCI, (emlrtConstCTX)sp);
      }
      cum_dist_b_1[loop_ub_tmp + 1] =
          cum_dist_b_1[loop_ub_tmp] -
          data_dist[(i6 + data_dist.size(0) * (i7 - 1)) - 1];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    i5 = b_i + 2;
    if (b_i + 2 > 127) {
      i5 = 127;
    }
    a = static_cast<int8_T>(i5);
    st.site = &mg_emlrtRSI;
    if ((static_cast<int8_T>(i5) <= data_vnum) && (data_vnum > 126)) {
      b_st.site = &p_emlrtRSI;
      coder::b_check_forloop_overflow_error(&b_st);
    }
    if (static_cast<int8_T>(i5) <= data_vnum) {
      if (sol_info->routes.size(1) - 1 < 2) {
        i8 = 0;
        i9 = 0;
      } else {
        if (sol_info->routes.size(1) < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, sol_info->routes.size(1),
                                        &kn_emlrtBCI, (emlrtConstCTX)sp);
        }
        i8 = 1;
        if ((sol_info->routes.size(1) - 1 < 1) ||
            (sol_info->routes.size(1) - 1 > sol_info->routes.size(1))) {
          emlrtDynamicBoundsCheckR2012b(sol_info->routes.size(1) - 1, 1,
                                        sol_info->routes.size(1), &jn_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i9 = sol_info->routes.size(1) - 1;
      }
      j_loop_ub = sol_info->routes.size(1);
      k_loop_ub = i9 - i8;
      if (sol_info->a_r_time.size(1) < 2) {
        i10 = 0;
        i11 = 0;
      } else {
        if (sol_info->a_r_time.size(1) < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, sol_info->a_r_time.size(1),
                                        &in_emlrtBCI, (emlrtConstCTX)sp);
        }
        i10 = 1;
        if (sol_info->a_r_time.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(sol_info->a_r_time.size(1), 1,
                                        sol_info->a_r_time.size(1),
                                        &hn_emlrtBCI, (emlrtConstCTX)sp);
        }
        i11 = sol_info->a_r_time.size(1);
      }
      l_loop_ub = i11 - i10;
      m_loop_ub = sol_info->a_c_time.size(1);
      n_loop_ub = sol_info->z_c_time.size(1);
      o_loop_ub = sol_info->tw_forward.size(1);
      p_loop_ub = sol_info->tw_backward.size(1);
      c_i = b_i + 1;
      i12 = r_1.size(1);
    }
    for (int8_T j{a}; j <= data_vnum; j++) {
      real_T b_sol_info[3];
      real_T load_1_l;
      real_T old_sum_cost;
      real_T sol_info_tmp;
      //  路线信息
      if (j > sol_info->routes.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->routes.size(0), &qn_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j > sol_info->a_r_time.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->a_r_time.size(0), &pn_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j > sol_info->a_c_time.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->a_c_time.size(0), &on_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j > sol_info->z_c_time.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->z_c_time.size(0), &nn_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j > sol_info->tw_forward.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->tw_forward.size(0),
                                      &mn_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (j > sol_info->tw_backward.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->tw_backward.size(0),
                                      &ln_emlrtBCI, (emlrtConstCTX)sp);
      }
      //  消除多余的0
      r_2.set_size(&nf_emlrtRTEI, sp, 1, sol_info->routes.size(1));
      for (i5 = 0; i5 < j_loop_ub; i5++) {
        r_2[i5] = sol_info->routes[(j + sol_info->routes.size(0) * i5) - 1];
      }
      i5 = i9 - i8;
      time_del_ind.set_size(&of_emlrtRTEI, sp, 1, i5 + 2);
      time_del_ind[0] = false;
      for (i6 = 0; i6 < k_loop_ub; i6++) {
        time_del_ind[i6 + 1] =
            (sol_info->routes[(j + sol_info->routes.size(0) * (i8 + i6)) - 1] ==
             0);
      }
      time_del_ind[i5 + 1] = false;
      st.site = &lg_emlrtRSI;
      coder::internal::nullAssignment(&st, r_2, time_del_ind);
      temp.set_size(&pf_emlrtRTEI, sp, 1, i11 - i10);
      for (i5 = 0; i5 < l_loop_ub; i5++) {
        temp[i5] =
            (sol_info->a_r_time[(j + sol_info->a_r_time.size(0) * (i10 + i5)) -
                                1] == 0.0);
      }
      //  判断是否全是0
      time_del_ind.set_size(&qf_emlrtRTEI, sp, 1, temp.size(1));
      last = temp.size(1);
      for (i5 = 0; i5 < last; i5++) {
        time_del_ind[i5] = temp[i5];
      }
      st.site = &kg_emlrtRSI;
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
        time_del_ind.set_size(&sf_emlrtRTEI, sp, 1, last + 2);
        time_del_ind[0] = false;
        time_del_ind[1] = false;
        for (i6 = 0; i6 < last; i6++) {
          time_del_ind[i6 + 2] = temp[i5 + i6];
        }
      } else {
        time_del_ind.set_size(&rf_emlrtRTEI, sp, 1, temp.size(1) + 1);
        time_del_ind[0] = false;
        last = temp.size(1);
        for (i5 = 0; i5 < last; i5++) {
          time_del_ind[i5 + 1] = temp[i5];
        }
      }
      a_c_r_2.set_size(&tf_emlrtRTEI, sp, 1, sol_info->a_c_time.size(1));
      for (i5 = 0; i5 < m_loop_ub; i5++) {
        a_c_r_2[i5] =
            sol_info->a_c_time[(j + sol_info->a_c_time.size(0) * i5) - 1];
      }
      st.site = &dg_emlrtRSI;
      coder::internal::b_nullAssignment(&st, a_c_r_2, time_del_ind);
      z_c_r_2.set_size(&uf_emlrtRTEI, sp, 1, sol_info->z_c_time.size(1));
      for (i5 = 0; i5 < n_loop_ub; i5++) {
        z_c_r_2[i5] =
            sol_info->z_c_time[(j + sol_info->z_c_time.size(0) * i5) - 1];
      }
      st.site = &gg_emlrtRSI;
      coder::internal::b_nullAssignment(&st, z_c_r_2, time_del_ind);
      tw_f_r_2.set_size(&vf_emlrtRTEI, sp, 1, sol_info->tw_forward.size(1));
      for (i5 = 0; i5 < o_loop_ub; i5++) {
        tw_f_r_2[i5] =
            sol_info->tw_forward[(j + sol_info->tw_forward.size(0) * i5) - 1];
      }
      st.site = &bg_emlrtRSI;
      coder::internal::b_nullAssignment(&st, tw_f_r_2, time_del_ind);
      tw_b_r_2.set_size(&wf_emlrtRTEI, sp, 1, sol_info->tw_backward.size(1));
      for (i5 = 0; i5 < p_loop_ub; i5++) {
        tw_b_r_2[i5] =
            sol_info->tw_backward[(j + sol_info->tw_backward.size(0) * i5) - 1];
      }
      st.site = &eg_emlrtRSI;
      coder::internal::b_nullAssignment(&st, tw_b_r_2, time_del_ind);
      //  原来的成本
      if (j > sol_info->cost.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                      sol_info->cost.size(0), &gn_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      //  旧的总成本
      sol_info_tmp = sol_info->cost[j - 1];
      b_sol_info[0] = sol_info_tmp + sol_info->cost[c_i - 1];
      b_sol_info[1] = sol_info->cost[(j + sol_info->cost.size(0)) - 1] +
                      sol_info->cost[(c_i + sol_info->cost.size(0)) - 1];
      b_sol_info[2] = sol_info->cost[(j + sol_info->cost.size(0) * 2) - 1] +
                      sol_info->cost[(c_i + sol_info->cost.size(0) * 2) - 1];
      st.site = &jg_emlrtRSI;
      old_sum_cost = coder::b_sum(b_sol_info);
      //  计算第二个路径的累加前向反向距离
      last = r_2.size(1);
      cum_dist_f_2.set_size(&xf_emlrtRTEI, sp, 1, r_2.size(1));
      for (i5 = 0; i5 < last; i5++) {
        cum_dist_f_2[i5] = 0.0;
      }
      i5 = r_2.size(1);
      for (int32_T m{0}; m <= i5 - 2; m++) {
        if (m + 1 > cum_dist_f_2.size(1)) {
          emlrtDynamicBoundsCheckR2012b(m + 1, 1, cum_dist_f_2.size(1),
                                        &yo_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (m + 1 > r_2.size(1)) {
          emlrtDynamicBoundsCheckR2012b(m + 1, 1, r_2.size(1), &bp_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i6 = r_2[m] + 1;
        if (i6 > 32767) {
          i6 = 32767;
        }
        if ((i6 < 1) || (i6 > data_dist.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, data_dist.size(0), &ap_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (m + 2 > r_2.size(1)) {
          emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_2.size(1), &dp_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i7 = r_2[m + 1] + 1;
        if (i7 > 32767) {
          i7 = 32767;
        }
        if ((i7 < 1) || (i7 > data_dist.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, data_dist.size(1), &cp_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (m + 2 > cum_dist_f_2.size(1)) {
          emlrtDynamicBoundsCheckR2012b(m + 2, 1, cum_dist_f_2.size(1),
                                        &ep_emlrtBCI, (emlrtConstCTX)sp);
        }
        cum_dist_f_2[m + 1] =
            cum_dist_f_2[m] +
            data_dist[(i6 + data_dist.size(0) * (i7 - 1)) - 1];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      last = r_2.size(1);
      cum_dist_b_2.set_size(&yf_emlrtRTEI, sp, 1, r_2.size(1));
      for (i5 = 0; i5 < last; i5++) {
        cum_dist_b_2[i5] = 0.0;
      }
      if (r_2.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, r_2.size(1), &fn_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (cum_dist_f_2.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(cum_dist_f_2.size(1), 1,
                                      cum_dist_f_2.size(1), &fp_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      cum_dist_b_2[0] = cum_dist_f_2[cum_dist_f_2.size(1) - 1];
      i5 = r_2.size(1);
      for (int32_T m{0}; m <= i5 - 2; m++) {
        if (m + 1 > cum_dist_b_2.size(1)) {
          emlrtDynamicBoundsCheckR2012b(m + 1, 1, cum_dist_b_2.size(1),
                                        &gp_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (m + 1 > r_2.size(1)) {
          emlrtDynamicBoundsCheckR2012b(m + 1, 1, r_2.size(1), &ip_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i6 = r_2[m] + 1;
        if (i6 > 32767) {
          i6 = 32767;
        }
        if ((i6 < 1) || (i6 > data_dist.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, data_dist.size(0), &hp_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (m + 2 > r_2.size(1)) {
          emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_2.size(1), &kp_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i7 = r_2[m + 1] + 1;
        if (i7 > 32767) {
          i7 = 32767;
        }
        if ((i7 < 1) || (i7 > data_dist.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, data_dist.size(1), &jp_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (m + 2 > cum_dist_b_2.size(1)) {
          emlrtDynamicBoundsCheckR2012b(m + 2, 1, cum_dist_b_2.size(1),
                                        &lp_emlrtBCI, (emlrtConstCTX)sp);
        }
        cum_dist_b_2[m + 1] =
            cum_dist_b_2[m] -
            data_dist[(i6 + data_dist.size(0) * (i7 - 1)) - 1];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      load_1_l = 0.0;
      for (int32_T m{0}; m <= i12 - 2; m++) {
        real_T load_1_r;
        real_T load_2_l;
        int32_T i13;
        //  第一条路径
        if (r_1.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, r_1.size(1), &en_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (m + 1 > r_1.size(1)) {
          emlrtDynamicBoundsCheckR2012b(m + 1, 1, r_1.size(1), &dn_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        //  left
        if (m + 2 > r_1.size(1)) {
          i5 = 0;
          i6 = 0;
        } else {
          if (m + 2 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1), &cn_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i5 = m + 1;
          i6 = r_1.size(1);
        }
        //  right
        i7 = r_1[m] + 1;
        i13 = i7;
        if (i7 > 32767) {
          i13 = 32767;
        }
        if ((i13 < 1) || (i13 > data_dmd.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i13, 1, data_dmd.size(0), &mp_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        load_1_l += data_dmd[i13 - 1];
        if (b_i + 1 > sol_info->payload.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->payload.size(0),
                                        &np_emlrtBCI, (emlrtConstCTX)sp);
        }
        load_1_r = sol_info->payload[b_i] - load_1_l;
        load_2_l = 0.0;
        i13 = r_2.size(1);
        for (int32_T n{0}; n <= i13 - 2; n++) {
          int32_T i14;
          if (n + 1 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 1, 1, r_2.size(1), &pp_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i14 = r_2[n] + 1;
          if (i14 > 32767) {
            i14 = 32767;
          }
          if ((i14 < 1) || (i14 > data_dmd.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i14, 1, data_dmd.size(0),
                                          &op_emlrtBCI, (emlrtConstCTX)sp);
          }
          load_2_l += data_dmd[i14 - 1];
          if (j > sol_info->payload.size(0)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                          sol_info->payload.size(0),
                                          &bn_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (((m + 1 != r_1.size(1) - 1) || (n + 1 != r_2.size(1) - 1)) &&
              ((m + 1 != 1) || (n + 1 != 1)) &&
              ((m + 1 != r_1.size(1) - 2) || (n + 1 != r_2.size(1) - 2)) &&
              ((m + 1 != 2) || (n + 1 != 2))) {
            int32_T i15;
            int16_T add_arc[4];
            if (r_2.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, r_2.size(1), &an_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (n + 1 > r_2.size(1)) {
              emlrtDynamicBoundsCheckR2012b(n + 1, 1, r_2.size(1), &ym_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            //  left
            if (n + 2 > r_2.size(1)) {
              i14 = 0;
              i15 = 0;
            } else {
              if (n + 2 > r_2.size(1)) {
                emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1),
                                              &xm_emlrtBCI, (emlrtConstCTX)sp);
              }
              i14 = n + 1;
              i15 = r_2.size(1);
            }
            //  right
            //  弧关系
            last = i15 - i14;
            if (last < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, last, &wm_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            i_loop_ub = i6 - i5;
            if (i_loop_ub < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, i_loop_ub, &vm_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            add_arc[0] = r_1[m];
            add_arc[2] = r_2[i14];
            add_arc[1] = r_2[n];
            add_arc[3] = r_1[i5];
            //  增加弧
            //  删除弧
            //  可行性判断
            st.site = &ig_emlrtRSI;
            if (!c_myismember(&st, add_arc, tabu_list)) {
              int32_T i16;
              i16 = add_arc[0] + 1;
              if (add_arc[0] + 1 > 32767) {
                i16 = 32767;
              }
              if ((i16 < 1) || (i16 > data_arc.size(0))) {
                emlrtDynamicBoundsCheckR2012b(i16, 1, data_arc.size(0),
                                              &qp_emlrtBCI, (emlrtConstCTX)sp);
              }
              k = add_arc[2] + 1;
              if (add_arc[2] + 1 > 32767) {
                k = 32767;
              }
              if ((k < 1) || (k > data_arc.size(1))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, data_arc.size(1),
                                              &rp_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (data_arc[(i16 + data_arc.size(0) * (k - 1)) - 1]) {
                i16 = add_arc[1] + 1;
                if (add_arc[1] + 1 > 32767) {
                  i16 = 32767;
                }
                if ((i16 < 1) || (i16 > data_arc.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(i16, 1, data_arc.size(0),
                                                &sp_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                k = add_arc[3] + 1;
                if (add_arc[3] + 1 > 32767) {
                  k = 32767;
                }
                if ((k < 1) || (k > data_arc.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(
                      k, 1, data_arc.size(1), &tp_emlrtBCI, (emlrtConstCTX)sp);
                }
                if (data_arc[(i16 + data_arc.size(0) * (k - 1)) - 1]) {
                  real_T payload_1;
                  real_T payload_2;
                  boolean_T deteriorate;
                  //  生成新路径
                  new_r_1.set_size(&ag_emlrtRTEI, sp, 1, ((m + i15) - i14) + 1);
                  for (i15 = 0; i15 <= m; i15++) {
                    new_r_1[i15] = r_1[i15];
                  }
                  for (i15 = 0; i15 < last; i15++) {
                    new_r_1[(i15 + m) + 1] = r_2[i14 + i15];
                  }
                  new_r_2.set_size(&bg_emlrtRTEI, sp, 1, ((n + i6) - i5) + 1);
                  for (i15 = 0; i15 <= n; i15++) {
                    new_r_2[i15] = r_2[i15];
                  }
                  for (i15 = 0; i15 < i_loop_ub; i15++) {
                    new_r_2[(i15 + n) + 1] = r_1[i5 + i15];
                  }
                  //  计算成本
                  //  1. 距离
                  if (m + 1 > cum_dist_f_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 1, 1, cum_dist_f_1.size(1), &up_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  if (n + 2 > cum_dist_b_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        n + 2, 1, cum_dist_b_2.size(1), &vp_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  i15 = i7;
                  if (i7 > 32767) {
                    i15 = 32767;
                  }
                  if ((i15 < 1) || (i15 > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i15, 1, data_dist.size(0),
                                                  &wp_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i16 = r_2[i14] + 1;
                  k = i16;
                  if (i16 > 32767) {
                    k = 32767;
                  }
                  if ((k < 1) || (k > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, data_dist.size(1),
                                                  &xp_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  new_cost[0] =
                      (cum_dist_f_1[m] + cum_dist_b_2[n + 1]) +
                      data_dist[(i15 + data_dist.size(0) * (k - 1)) - 1];
                  if (n + 1 > cum_dist_f_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        n + 1, 1, cum_dist_f_2.size(1), &yp_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  if (m + 2 > cum_dist_b_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 2, 1, cum_dist_b_1.size(1), &aq_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  i15 = r_2[n] + 1;
                  k = i15;
                  if (i15 > 32767) {
                    k = 32767;
                  }
                  if ((k < 1) || (k > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, data_dist.size(0),
                                                  &bq_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  loop_ub_tmp = r_1[i5] + 1;
                  last = loop_ub_tmp;
                  if (loop_ub_tmp > 32767) {
                    last = 32767;
                  }
                  if ((last < 1) || (last > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(last, 1, data_dist.size(1),
                                                  &cq_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  new_cost[1] =
                      (cum_dist_f_2[n] + cum_dist_b_1[m + 1]) +
                      data_dist[(k + data_dist.size(0) * (last - 1)) - 1];
                  //  2. 容量
                  payload_1 = load_1_l + (sol_info->payload[j - 1] - load_2_l);
                  payload_2 = load_2_l + load_1_r;
                  temp_gen_cost = payload_1 - data_cap;
                  if ((temp_gen_cost < 0.0) ||
                      muDoubleScalarIsNaN(temp_gen_cost)) {
                    temp_gen_cost = 0.0;
                  }
                  new_cost[2] = temp_gen_cost * param_pen->alpha_0;
                  temp_gen_cost = payload_2 - data_cap;
                  if ((temp_gen_cost < 0.0) ||
                      muDoubleScalarIsNaN(temp_gen_cost)) {
                    temp_gen_cost = 0.0;
                  }
                  new_cost[3] = temp_gen_cost * param_pen->alpha_0;
                  //  3. 时间
                  if (m + 1 > a_c_r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(m + 1, 1, a_c_r_1.size(1),
                                                  &dq_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  k = i7;
                  if (i7 > 32767) {
                    k = 32767;
                  }
                  if ((k < 1) || (k > data_st.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(
                        k, 1, data_st.size(0), &eq_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  last = i7;
                  if (i7 > 32767) {
                    last = 32767;
                  }
                  if ((last < 1) || (last > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(last, 1, data_dist.size(0),
                                                  &fq_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (i16 > 32767) {
                    i16 = 32767;
                  }
                  if ((i16 < 1) || (i16 > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i16, 1, data_dist.size(1),
                                                  &gq_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (n + 2 > z_c_r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(n + 2, 1, z_c_r_2.size(1),
                                                  &hq_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  pun_time =
                      ((a_c_r_1[m] + data_st[k - 1]) +
                       data_dist[(last + data_dist.size(0) * (i16 - 1)) - 1]) -
                      z_c_r_2[n + 1];
                  if (pun_time > 0.0) {
                    temp_gen_cost = pun_time;
                  } else {
                    temp_gen_cost = 0.0;
                  }
                  if (m + 1 > tw_f_r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(m + 1, 1, tw_f_r_1.size(1),
                                                  &um_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (n + 2 > tw_b_r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(n + 2, 1, tw_b_r_2.size(1),
                                                  &tm_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (n + 1 > a_c_r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(n + 1, 1, a_c_r_2.size(1),
                                                  &iq_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i16 = i15;
                  if (i15 > 32767) {
                    i16 = 32767;
                  }
                  if ((i16 < 1) || (i16 > data_st.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i16, 1, data_st.size(0),
                                                  &jq_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (i15 > 32767) {
                    i15 = 32767;
                  }
                  if ((i15 < 1) || (i15 > data_dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i15, 1, data_dist.size(0),
                                                  &kq_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (loop_ub_tmp > 32767) {
                    loop_ub_tmp = 32767;
                  }
                  if ((loop_ub_tmp < 1) || (loop_ub_tmp > data_dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(
                        loop_ub_tmp, 1, data_dist.size(1), &lq_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  if (m + 2 > z_c_r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(m + 2, 1, z_c_r_1.size(1),
                                                  &mq_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  pun_time =
                      ((a_c_r_2[n] + data_st[i16 - 1]) +
                       data_dist[(i15 + data_dist.size(0) * (loop_ub_tmp - 1)) -
                                 1]) -
                      z_c_r_1[m + 1];
                  if (n + 1 > tw_f_r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(n + 1, 1, tw_f_r_2.size(1),
                                                  &sm_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 2 > tw_b_r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(m + 2, 1, tw_b_r_1.size(1),
                                                  &rm_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  new_cost[4] =
                      ((tw_f_r_1[m] + tw_b_r_2[n + 1]) + temp_gen_cost) *
                      param_pen->beta_0;
                  if (!(pun_time > 0.0)) {
                    pun_time = 0.0;
                  }
                  new_cost[5] = ((tw_f_r_2[n] + tw_b_r_1[m + 1]) + pun_time) *
                                param_pen->beta_0;
                  //  计算减量成本 & 标记退化
                  st.site = &yf_emlrtRSI;
                  pun_time = old_sum_cost - coder::c_sum(new_cost);
                  if (pun_time < 0.0) {
                    deteriorate = true;
                    //  找到的邻域还不如原来的
                  } else {
                    deteriorate = false;
                  }
                  //  计算新的路径
                  b_new_rs.set_size(&cg_emlrtRTEI, sp, sol_info->routes.size(0),
                                    sol_info->routes.size(1));
                  last = sol_info->routes.size(0) * sol_info->routes.size(1);
                  for (i15 = 0; i15 < last; i15++) {
                    b_new_rs[i15] = sol_info->routes[i15];
                  }
                  //  new_routes
                  if (b_i + 1 > sol_info->routes.size(0)) {
                    emlrtDynamicBoundsCheckR2012b(
                        b_i + 1, 1, sol_info->routes.size(0), &qm_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  last = sol_info->routes.size(1);
                  for (i15 = 0; i15 < last; i15++) {
                    b_new_rs[b_i + b_new_rs.size(0) * i15] = 0;
                  }
                  if (j > b_new_rs.size(0)) {
                    emlrtDynamicBoundsCheckR2012b(
                        static_cast<int32_T>(j), 1, b_new_rs.size(0),
                        &pm_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  last = b_new_rs.size(1);
                  for (i15 = 0; i15 < last; i15++) {
                    b_new_rs[(j + b_new_rs.size(0) * i15) - 1] = 0;
                  }
                  if (b_new_rs.size(1) < 1) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, b_new_rs.size(1),
                                                  &nm_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if ((new_r_1.size(1) < 1) ||
                      (new_r_1.size(1) > b_new_rs.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(
                        new_r_1.size(1), 1, b_new_rs.size(1), &mm_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  if (b_i + 1 > b_new_rs.size(0)) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b_new_rs.size(0),
                                                  &om_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  iv[0] = 1;
                  iv[1] = new_r_1.size(1);
                  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, new_r_1.size(), 2,
                                                &s_emlrtECI, (emlrtCTX)sp);
                  last = new_r_1.size(1);
                  for (i15 = 0; i15 < last; i15++) {
                    b_new_rs[b_i + b_new_rs.size(0) * i15] = new_r_1[i15];
                  }
                  if (b_new_rs.size(1) < 1) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, b_new_rs.size(1),
                                                  &km_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if ((new_r_2.size(1) < 1) ||
                      (new_r_2.size(1) > b_new_rs.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(
                        new_r_2.size(1), 1, b_new_rs.size(1), &jm_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  if (j > b_new_rs.size(0)) {
                    emlrtDynamicBoundsCheckR2012b(
                        static_cast<int32_T>(j), 1, b_new_rs.size(0),
                        &lm_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  iv[0] = 1;
                  iv[1] = new_r_2.size(1);
                  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, new_r_2.size(), 2,
                                                &r_emlrtECI, (emlrtCTX)sp);
                  last = new_r_2.size(1);
                  for (i15 = 0; i15 < last; i15++) {
                    b_new_rs[(j + b_new_rs.size(0) * i15) - 1] = new_r_2[i15];
                  }
                  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                  //  放入池子中
                  //  先找到池子中成本最大的解对应的索引
                  //  如果 当前解的成本 比 池子中最大成本的解 还大 那直接不要了
                  //  如果小于 则接受 把最大成本的解替换掉
                  st.site = &xf_emlrtRSI;
                  temp_gen_cost =
                      (sum_ori_cost - old_sum_cost) + coder::c_sum(new_cost);
                  if (temp_gen_cost < max_pool_cost) {
                    if (max_pool_ind > pool_routes.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_routes.size(0), &im_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    iv1[0] = 1;
                    iv1[1] = pool_routes.size(1);
                    iv1[2] = pool_routes.size(2);
                    emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, b_new_rs.size(),
                                                  2, &q_emlrtECI, (emlrtCTX)sp);
                    iv1[1] = pool_routes.size(1);
                    last = pool_routes.size(2);
                    for (i15 = 0; i15 < last; i15++) {
                      i_loop_ub = pool_routes.size(1);
                      for (i16 = 0; i16 < i_loop_ub; i16++) {
                        pool_routes
                            [((max_pool_ind + pool_routes.size(0) * i16) +
                              pool_routes.size(0) * pool_routes.size(1) * i15) -
                             1] = b_new_rs[i16 + iv1[1] * i15];
                      }
                    }
                    //  加入邻域池子
                    if (max_pool_ind > pool_del.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_del.size(0), &em_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_del[max_pool_ind - 1] = r_1[m];
                    pool_del[(max_pool_ind + pool_del.size(0)) - 1] = r_2[n];
                    pool_del[(max_pool_ind + pool_del.size(0) * 2) - 1] =
                        r_1[i5];
                    pool_del[((max_pool_ind + pool_del.size(0)) +
                              pool_del.size(0) * 2) -
                             1] = r_2[i14];
                    //  每个邻域解对应删除的弧
                    if (max_pool_ind > pool_ind.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_ind.size(0), &cm_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_ind[max_pool_ind - 1] = static_cast<uint8_T>(b_i + 1);
                    pool_ind[(max_pool_ind + pool_ind.size(0)) - 1] =
                        static_cast<uint8_T>(j);
                    //  每个邻域解对应变动索引
                    if (max_pool_ind > pool_deter.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_deter.size(0), &nq_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_deter[max_pool_ind - 1] = deteriorate;
                    if (max_pool_ind > pool_gen_cost.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_gen_cost.size(0), &oq_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_gen_cost[max_pool_ind - 1] = temp_gen_cost;
                    pool_div_gen_cost.set_size(&dg_emlrtRTEI, sp,
                                               sol_info->cost.size(0));
                    last = sol_info->cost.size(0);
                    for (i14 = 0; i14 < last; i14++) {
                      pool_div_gen_cost[i14] = sol_info->cost[i14];
                    }
                    if (max_pool_ind > pool_dis.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_dis.size(0), &pq_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    st.site = &wf_emlrtRSI;
                    pool_dis[max_pool_ind - 1] =
                        ((coder::sum(&st, pool_div_gen_cost) -
                          sol_info->cost[b_i]) -
                         sol_info_tmp) +
                        coder::d_sum(&new_cost[0]);
                    if (max_pool_ind > pool_payload.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_payload.size(0), &am_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_payload[max_pool_ind - 1] = payload_1;
                    pool_payload[(max_pool_ind + pool_payload.size(0)) - 1] =
                        payload_2;
                    //  更新最大索引
                    st.site = &vf_emlrtRSI;
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
                        pun_time = pool_gen_cost[k - 1];
                        if (max_pool_cost < pun_time) {
                          max_pool_cost = pun_time;
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
                  //
                  //                      % 计算距离
                  //                      total_distance =
                  //                      sum(sol_info.cost(:,1)) -
                  //                      old_cost_1(1) - old_cost_2(1) +
                  //                      sum(new_cost(1:2,1));
                  //
                  //                      % 更新frequency
                  //                      cost_div = calculate_diversity(new_rs,
                  //                      div, total_distance, cus_num, v_num,
                  //                      temp_frequency);
                  //                  else
                  //                      cost_div = 0;
                  //                  end
                  //
                  //                   % 计算 广义 + 多样性成本
                  //                  temp_gen_div_cost = sum_ori_cost +
                  //                  cost_div - old_sum_cost +
                  //                  sum(new_cost,'all');
                  //
                  //                  % 更新
                  //                  if temp_gen_div_cost <= best_total_cost
                  //                      best_total_cost = temp_gen_div_cost; %
                  //                      更新最佳成本
                  //
                  //                      best_neighbor.routes = new_rs; % 路径
                  //                      best_neighbor.cost = sol_info.cost;
                  //
                  //                      change_route_ind = double([i,j]); %
                  //                      变动的路径
                  //
                  //                      best_neighbor.cost(change_route_ind,:)
                  //                      = new_cost; % 最佳成本
                  //
                  //                      best_neighbor.payload =
                  //                      sol_info.payload;
                  //                      best_neighbor.payload(change_route_ind)
                  //                      = [payload_1, payload_2];
                  //
                  //                      best_del = del_arc; % 记录删除的弧
                  //                  end
                }
              }
            }
          } else {
            //  只换了仓库
            //  只换了仓库
            //  只换最后一个客户
            //  只换了最后一个客户(interexchange已经换过)
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
  empty_flag.set_size(&eg_emlrtRTEI, sp, pool_gen_cost.size(0));
  last = pool_gen_cost.size(0);
  for (i = 0; i < last; i++) {
    empty_flag[i] = (pool_gen_cost[i] == rtInf);
  }
  //  计算广义成本+多样性成本
  pool_div_gen_cost.set_size(&fg_emlrtRTEI, sp, pool_gen_cost.size(0));
  last = pool_gen_cost.size(0);
  for (i = 0; i < last; i++) {
    pool_div_gen_cost[i] = 0.0;
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, param_pen->pool_size, mxDOUBLE_CLASS,
                                static_cast<int32_T>(param_pen->pool_size),
                                &l_emlrtRTEI, (emlrtConstCTX)sp);
  b_i = 1;
  exitg1 = false;
  while ((!exitg1) && (b_i - 1 <= loop_ub - 1)) {
    if ((b_i < 1) || (b_i > empty_flag.size(0))) {
      emlrtDynamicBoundsCheckR2012b(b_i, 1, empty_flag.size(0), &eo_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (!empty_flag[b_i - 1]) {
      if (b_i > pool_deter.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_deter.size(0), &fo_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (pool_deter[b_i - 1]) {
        //  退化解记录多样性成本
        if (b_i > pool_routes.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_routes.size(0),
                                        &hm_emlrtBCI, (emlrtConstCTX)sp);
        }
        new_rs.set_size(&hg_emlrtRTEI, sp, 1, pool_routes.size(1),
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
        temp_frequency.set_size(&ig_emlrtRTEI, sp, frequency.size(0),
                                frequency.size(1));
        last = frequency.size(0) * frequency.size(1);
        for (i = 0; i < last; i++) {
          temp_frequency[i] = frequency[i];
        }
        st.site = &uf_emlrtRSI;
        update_frequency(&st, temp_frequency, new_rs);
        //  更新频率
        if (b_i > pool_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_gen_cost.size(0),
                                        &io_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (b_i > pool_dis.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_dis.size(0), &jo_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (b_i > pool_div_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_div_gen_cost.size(0),
                                        &ko_emlrtBCI, (emlrtConstCTX)sp);
        }
        st.site = &tf_emlrtRSI;
        pool_div_gen_cost[b_i - 1] =
            pool_gen_cost[b_i - 1] +
            calculate_diversity(&st, new_rs, b_div, pool_dis[b_i - 1],
                                static_cast<real_T>(data_dmd.size(0)) - 1.0,
                                data_vnum, temp_frequency);
      } else {
        //  非退化直接记录成本
        if (b_i > pool_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_gen_cost.size(0),
                                        &go_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (b_i > pool_div_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_div_gen_cost.size(0),
                                        &ho_emlrtBCI, (emlrtConstCTX)sp);
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
                                        &gm_emlrtBCI, (emlrtConstCTX)sp);
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
  st.site = &sf_emlrtRSI;
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
      temp_gen_cost = pool_div_gen_cost[0];
      i_loop_ub = 1;
    } else if ((pool_div_gen_cost[0] > pool_div_gen_cost[1]) ||
               (muDoubleScalarIsNaN(pool_div_gen_cost[0]) &&
                (!muDoubleScalarIsNaN(pool_div_gen_cost[1])))) {
      temp_gen_cost = pool_div_gen_cost[1];
      i_loop_ub = 2;
    } else {
      temp_gen_cost = pool_div_gen_cost[0];
      i_loop_ub = 1;
    }
  } else {
    f_st.site = &pc_emlrtRSI;
    if (!muDoubleScalarIsNaN(pool_div_gen_cost[0])) {
      i_loop_ub = 1;
    } else {
      i_loop_ub = 0;
      g_st.site = &qc_emlrtRSI;
      if (pool_div_gen_cost.size(0) > 2147483646) {
        h_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&h_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(pool_div_gen_cost[k - 1])) {
          i_loop_ub = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (i_loop_ub == 0) {
      temp_gen_cost = pool_div_gen_cost[0];
      i_loop_ub = 1;
    } else {
      f_st.site = &oc_emlrtRSI;
      temp_gen_cost = pool_div_gen_cost[i_loop_ub - 1];
      loop_ub_tmp = i_loop_ub + 1;
      g_st.site = &rc_emlrtRSI;
      if ((i_loop_ub + 1 <= pool_div_gen_cost.size(0)) &&
          (pool_div_gen_cost.size(0) > 2147483646)) {
        h_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&h_st);
      }
      for (k = loop_ub_tmp; k <= last; k++) {
        pun_time = pool_div_gen_cost[k - 1];
        if (temp_gen_cost > pun_time) {
          temp_gen_cost = pun_time;
          i_loop_ub = k;
        }
      }
    }
  }
  *best_neighbor = *sol_info;
  if ((i_loop_ub < 1) || (i_loop_ub > pool_routes.size(0))) {
    emlrtDynamicBoundsCheckR2012b(i_loop_ub, 1, pool_routes.size(0),
                                  &fm_emlrtBCI, (emlrtConstCTX)sp);
  }
  new_rs.set_size(&gg_emlrtRTEI, sp, 1, pool_routes.size(1),
                  pool_routes.size(2));
  loop_ub = pool_routes.size(2);
  for (i = 0; i < loop_ub; i++) {
    last = pool_routes.size(1);
    for (i1 = 0; i1 < last; i1++) {
      new_rs[i1 + new_rs.size(1) * i] =
          pool_routes[((i_loop_ub + pool_routes.size(0) * i1) +
                       pool_routes.size(0) * pool_routes.size(1) * i) -
                      1];
    }
  }
  st.site = &rf_emlrtRSI;
  coder::squeeze(&st, new_rs, best_neighbor->routes);
  if (i_loop_ub > pool_del.size(0)) {
    emlrtDynamicBoundsCheckR2012b(i_loop_ub, 1, pool_del.size(0), &dm_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  best_del[0] = pool_del[i_loop_ub - 1];
  best_del[1] = pool_del[(i_loop_ub + pool_del.size(0)) - 1];
  best_del[2] = pool_del[(i_loop_ub + pool_del.size(0) * 2) - 1];
  best_del[3] =
      pool_del[((i_loop_ub + pool_del.size(0)) + pool_del.size(0) * 2) - 1];
  if (i_loop_ub > pool_ind.size(0)) {
    emlrtDynamicBoundsCheckR2012b(i_loop_ub, 1, pool_ind.size(0), &bm_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  best_ind[0] = pool_ind[i_loop_ub - 1];
  best_ind[1] = pool_ind[(i_loop_ub + pool_ind.size(0)) - 1];
  if (i_loop_ub > pool_payload.size(0)) {
    emlrtDynamicBoundsCheckR2012b(i_loop_ub, 1, pool_payload.size(0),
                                  &yl_emlrtBCI, (emlrtConstCTX)sp);
  }
  i = pool_ind[i_loop_ub - 1];
  if ((i < 1) || (i > sol_info->payload.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(pool_ind[i_loop_ub - 1]),
                                  1, sol_info->payload.size(0), &qq_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  best_neighbor->payload[i - 1] = pool_payload[i_loop_ub - 1];
  i = pool_ind[(i_loop_ub + pool_ind.size(0)) - 1];
  if ((i < 1) || (i > sol_info->payload.size(0))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(pool_ind[(i_loop_ub + pool_ind.size(0)) - 1]), 1,
        sol_info->payload.size(0), &qq_emlrtBCI, (emlrtConstCTX)sp);
  }
  best_neighbor->payload[i - 1] =
      pool_payload[(i_loop_ub + pool_payload.size(0)) - 1];
  *best_total_cost = temp_gen_cost;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (ts_two_optimization.cpp)
