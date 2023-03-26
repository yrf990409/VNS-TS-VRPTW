//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ts_inter_relocating.cpp
//
// Code generation for function 'ts_inter_relocating'
//

// Include files
#include "ts_inter_relocating.h"
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
static emlrtRSInfo dd_emlrtRSI{
    207,                   // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo ed_emlrtRSI{
    205,                   // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo fd_emlrtRSI{
    193,                   // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo gd_emlrtRSI{
    191,                   // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo hd_emlrtRSI{
    172,                   // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo id_emlrtRSI{
    169,                   // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo jd_emlrtRSI{
    162,                   // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo kd_emlrtRSI{
    143,                   // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo ld_emlrtRSI{
    73,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo md_emlrtRSI{
    72,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo nd_emlrtRSI{
    70,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo od_emlrtRSI{
    71,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo pd_emlrtRSI{
    43,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo qd_emlrtRSI{
    42,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo rd_emlrtRSI{
    41,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo sd_emlrtRSI{
    40,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo td_emlrtRSI{
    107,                   // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo ud_emlrtRSI{
    96,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo vd_emlrtRSI{
    80,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo wd_emlrtRSI{
    65,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo xd_emlrtRSI{
    63,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo yd_emlrtRSI{
    35,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo ae_emlrtRSI{
    33,                    // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtRSInfo be_emlrtRSI{
    7,                     // lineNo
    "ts_inter_relocating", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pathName
};

static emlrtBCInfo o_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    210,                   // lineNo
    48,                    // colNo
    "pool_payload",        // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo p_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    170,                   // lineNo
    34,                    // colNo
    "pool_payload",        // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    209,                   // lineNo
    21,                    // colNo
    "pool_ind",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    166,                   // lineNo
    30,                    // colNo
    "pool_ind",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    208,                   // lineNo
    29,                    // colNo
    "pool_del",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo t_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    165,                   // lineNo
    30,                    // colNo
    "pool_del",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    207,                   // lineNo
    44,                    // colNo
    "pool_routes",         // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    199,                   // lineNo
    27,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    190,                   // lineNo
    33,                    // colNo
    "pool_routes",         // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtECInfo k_emlrtECI{
    -1,                    // nDims
    164,                   // lineNo
    21,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtBCInfo x_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    164,                   // lineNo
    33,                    // colNo
    "pool_routes",         // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo h_emlrtRTEI{
    186,                   // lineNo
    9,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtECInfo l_emlrtECI{
    -1,                    // nDims
    155,                   // lineNo
    17,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtBCInfo y_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    155,                   // lineNo
    28,                    // colNo
    "new_rs",              // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    155,                   // lineNo
    26,                    // colNo
    "new_rs",              // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    155,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtECInfo m_emlrtECI{
    -1,                    // nDims
    154,                   // lineNo
    17,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtBCInfo cb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    154,                   // lineNo
    28,                    // colNo
    "new_rs",              // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    154,                   // lineNo
    26,                    // colNo
    "new_rs",              // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    154,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    153,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    152,                   // lineNo
    24,                    // colNo
    "new_rs",              // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    138,                   // lineNo
    53,                    // colNo
    "tw_b_r_2",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    138,                   // lineNo
    39,                    // colNo
    "tw_f_r_2",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    127,                   // lineNo
    55,                    // colNo
    "tw_b_r_1",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    127,                   // lineNo
    39,                    // colNo
    "tw_f_r_1",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    108,                   // lineNo
    45,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    108,                   // lineNo
    34,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    108,                   // lineNo
    32,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    77,                    // lineNo
    36,                    // colNo
    "sol_info.cost",       // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    64,                    // lineNo
    26,                    // colNo
    "a_r_r_2",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    64,                    // lineNo
    24,                    // colNo
    "a_r_r_2",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    63,                    // lineNo
    27,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    63,                    // lineNo
    25,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    60,                    // lineNo
    36,                    // colNo
    "sol_info.payload",    // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ub_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    58,                     // lineNo
    41,                     // colNo
    "sol_info.tw_backward", // aName
    "ts_inter_relocating",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    57,                    // lineNo
    40,                    // colNo
    "sol_info.tw_forward", // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    56,                    // lineNo
    37,                    // colNo
    "sol_info.z_c_time",   // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    55,                    // lineNo
    37,                    // colNo
    "sol_info.a_c_time",   // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    54,                    // lineNo
    37,                    // colNo
    "sol_info.a_r_time",   // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ac_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    53,                    // lineNo
    31,                    // colNo
    "sol_info.routes",     // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    46,                    // lineNo
    32,                    // colNo
    "sol_info.cost",       // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    34,                    // lineNo
    22,                    // colNo
    "a_r_r_1",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    34,                    // lineNo
    20,                    // colNo
    "a_r_r_1",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ec_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    33,                    // lineNo
    23,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    33,                    // lineNo
    21,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    30,                    // lineNo
    32,                    // colNo
    "sol_info.payload",    // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hc_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    28,                     // lineNo
    37,                     // colNo
    "sol_info.tw_backward", // aName
    "ts_inter_relocating",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ic_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    27,                    // lineNo
    36,                    // colNo
    "sol_info.tw_forward", // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    26,                    // lineNo
    33,                    // colNo
    "sol_info.z_c_time",   // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    25,                    // lineNo
    33,                    // colNo
    "sol_info.a_c_time",   // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    24,                    // lineNo
    33,                    // colNo
    "sol_info.a_r_time",   // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    23,                    // lineNo
    27,                    // colNo
    "sol_info.routes",     // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtDCInfo emlrtDCI{
    13,                    // lineNo
    26,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    9,                     // lineNo
    27,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    9,                     // lineNo
    27,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    4                       // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    10,                    // lineNo
    24,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    11,                    // lineNo
    18,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    15,                    // lineNo
    22,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    9,                     // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo h_emlrtDCI{
    10,                    // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo i_emlrtDCI{
    11,                    // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo j_emlrtDCI{
    12,                    // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo k_emlrtDCI{
    14,                    // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    1                       // checkKind
};

static emlrtDCInfo l_emlrtDCI{
    15,                    // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    1                       // checkKind
};

static emlrtBCInfo nc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    187,                   // lineNo
    20,                    // colNo
    "empty_flag",          // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo oc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    188,                   // lineNo
    23,                    // colNo
    "pool_deter",          // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    196,                   // lineNo
    50,                    // colNo
    "pool_gen_cost",       // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    196,                   // lineNo
    31,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    29,                    // lineNo
    30,                    // colNo
    "sol_info.cost",       // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    193,                   // lineNo
    31,                    // colNo
    "pool_gen_cost",       // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    193,                   // lineNo
    78,                    // colNo
    "pool_dis",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    192,                   // lineNo
    31,                    // colNo
    "pool_div_gen_cost",   // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    59,                    // lineNo
    34,                    // colNo
    "sol_info.cost",       // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    84,                    // lineNo
    21,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    88,                    // lineNo
    28,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    88,                    // lineNo
    38,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ad_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    89,                    // lineNo
    28,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    89,                    // lineNo
    40,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    90,                    // lineNo
    28,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    90,                    // lineNo
    38,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ed_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    28,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    40,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    92,                    // lineNo
    28,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    92,                    // lineNo
    38,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo id_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    93,                    // lineNo
    28,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    93,                    // lineNo
    38,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    99,                    // lineNo
    29,                    // colNo
    "data.arc",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ld_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    99,                    // lineNo
    45,                    // colNo
    "data.arc",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo md_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    100,                   // lineNo
    30,                    // colNo
    "data.arc",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    100,                   // lineNo
    46,                    // colNo
    "data.arc",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo od_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    101,                   // lineNo
    30,                    // colNo
    "data.arc",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    101,                   // lineNo
    46,                    // colNo
    "data.arc",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    112,                   // lineNo
    54,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    112,                   // lineNo
    58,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    112,                   // lineNo
    68,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo td_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    112,                   // lineNo
    72,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ud_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    113,                   // lineNo
    50,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    113,                   // lineNo
    54,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    113,                   // lineNo
    62,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    113,                   // lineNo
    66,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    114,                   // lineNo
    50,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ae_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    114,                   // lineNo
    54,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo be_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    114,                   // lineNo
    62,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ce_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    114,                   // lineNo
    66,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo de_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    115,                   // lineNo
    54,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ee_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    115,                   // lineNo
    58,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fe_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    115,                   // lineNo
    66,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ge_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    115,                   // lineNo
    70,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo he_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    116,                   // lineNo
    50,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ie_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    116,                   // lineNo
    54,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo je_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    116,                   // lineNo
    60,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ke_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    116,                   // lineNo
    64,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo le_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    117,                   // lineNo
    50,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo me_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    117,                   // lineNo
    54,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ne_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    117,                   // lineNo
    60,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo oe_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    117,                   // lineNo
    64,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pe_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    120,                   // lineNo
    48,                    // colNo
    "data.dmd",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qe_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    121,                   // lineNo
    48,                    // colNo
    "data.dmd",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo re_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    36,                    // colNo
    "a_c_r_1",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo se_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    51,                    // colNo
    "data.st",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo te_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    55,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ue_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    75,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ve_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    79,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo we_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    86,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xe_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    90,                    // colNo
    "r_1",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ye_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    126,                   // lineNo
    108,                   // colNo
    "z_c_r_1",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo af_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    129,                   // lineNo
    37,                    // colNo
    "z_c_r_2",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    129,                   // lineNo
    54,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    129,                   // lineNo
    58,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo df_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    129,                   // lineNo
    62,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ef_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    129,                   // lineNo
    80,                    // colNo
    "data.st",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ff_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    130,                   // lineNo
    40,                    // colNo
    "data.tw",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    131,                   // lineNo
    41,                    // colNo
    "data.tw",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    40,                    // colNo
    "a_c_r_2",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo if_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    53,                    // colNo
    "data.st",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    57,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    75,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    79,                    // colNo
    "r_2",                 // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    84,                    // colNo
    "data.dist",           // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    134,                   // lineNo
    43,                    // colNo
    "data.tw",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo of_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    135,                   // lineNo
    44,                    // colNo
    "data.tw",             // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    167,                   // lineNo
    32,                    // colNo
    "pool_deter",          // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    168,                   // lineNo
    35,                    // colNo
    "pool_gen_cost",       // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rf_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    169,                   // lineNo
    30,                    // colNo
    "pool_dis",            // aName
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sf_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    210,                     // lineNo
    1,                       // colNo
    "best_neighbor.payload", // aName
    "ts_inter_relocating",   // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo vb_emlrtRTEI{
    9,                     // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo wb_emlrtRTEI{
    10,                    // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo xb_emlrtRTEI{
    11,                    // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo yb_emlrtRTEI{
    12,                    // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo ac_emlrtRTEI{
    13,                    // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo bc_emlrtRTEI{
    14,                    // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo cc_emlrtRTEI{
    15,                    // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo dc_emlrtRTEI{
    33,                    // lineNo
    5,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo ec_emlrtRTEI{
    33,                    // lineNo
    9,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo fc_emlrtRTEI{
    34,                    // lineNo
    5,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo gc_emlrtRTEI{
    35,                    // lineNo
    12,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo hc_emlrtRTEI{
    38,                    // lineNo
    9,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo ic_emlrtRTEI{
    36,                    // lineNo
    9,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo jc_emlrtRTEI{
    40,                    // lineNo
    5,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo kc_emlrtRTEI{
    41,                    // lineNo
    5,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo lc_emlrtRTEI{
    42,                    // lineNo
    5,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo mc_emlrtRTEI{
    43,                    // lineNo
    5,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo nc_emlrtRTEI{
    63,                    // lineNo
    9,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo oc_emlrtRTEI{
    63,                    // lineNo
    13,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo pc_emlrtRTEI{
    64,                    // lineNo
    9,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo qc_emlrtRTEI{
    65,                    // lineNo
    16,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo rc_emlrtRTEI{
    68,                    // lineNo
    13,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo sc_emlrtRTEI{
    66,                    // lineNo
    13,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo tc_emlrtRTEI{
    70,                    // lineNo
    9,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo uc_emlrtRTEI{
    71,                    // lineNo
    9,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo vc_emlrtRTEI{
    72,                    // lineNo
    9,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo wc_emlrtRTEI{
    73,                    // lineNo
    9,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo xc_emlrtRTEI{
    107,                   // lineNo
    17,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo yc_emlrtRTEI{
    107,                   // lineNo
    25,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo ad_emlrtRTEI{
    108,                   // lineNo
    17,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo bd_emlrtRTEI{
    151,                   // lineNo
    17,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo cd_emlrtRTEI{
    169,                   // lineNo
    50,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo dd_emlrtRTEI{
    181,                   // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo ed_emlrtRTEI{
    185,                   // lineNo
    1,                     // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo fd_emlrtRTEI{
    207,                   // lineNo
    32,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo gd_emlrtRTEI{
    190,                   // lineNo
    13,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

static emlrtRTEInfo hd_emlrtRTEI{
    191,                   // lineNo
    13,                    // colNo
    "ts_inter_relocating", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/t"
    "s_inter_relocating.m" // pName
};

// Function Definitions
void ts_inter_relocating(const emlrtStack *sp, const struct0_T *sol_info,
                         const struct1_T *data, const struct2_T *param_pen,
                         const coder::array<int16_T, 2U> &tabu_list,
                         const coder::array<real_T, 2U> &frequency,
                         real_T b_div, struct0_T *best_neighbor,
                         real_T *best_total_cost, int16_T best_del[6],
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
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T f_loop_ub;
  int32_T g_loop_ub;
  int32_T h_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i_loop_ub;
  int32_T k;
  int32_T last;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T max_pool_ind;
  int16_T add_arc[6];
  int16_T del_arc[6];
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
  //  路线之间重新安排顾客的位置
  //  初始化
  //  记录变化之后的成本
  //  顾客数量
  //  车辆数
  st.site = &be_emlrtRSI;
  sum_ori_cost = coder::sum(&st, sol_info->cost);
  //  原始解sol_inf的成本
  if (!(param_pen->pool_size >= 0.0)) {
    emlrtNonNegativeCheckR2012b(param_pen->pool_size, &c_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  back_time = static_cast<int32_T>(muDoubleScalarFloor(param_pen->pool_size));
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &b_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_routes.set_size(&vb_emlrtRTEI, sp,
                       static_cast<int32_T>(param_pen->pool_size),
                       sol_info->routes.size(0), sol_info->routes.size(1));
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &g_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(param_pen->pool_size) *
            sol_info->routes.size(0) * sol_info->routes.size(1);
  for (i = 0; i < loop_ub; i++) {
    pool_routes[i] = 0;
  }
  //  邻域池子
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &d_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_del.set_size(&wb_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen->pool_size), 3, 2);
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &h_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = (static_cast<int32_T>(param_pen->pool_size) * 3) << 1;
  for (i = 0; i < loop_ub; i++) {
    pool_del[i] = 0;
  }
  //  每个邻域解对应删除的弧
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &e_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_ind.set_size(&xb_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen->pool_size), 2);
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &i_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub_tmp = static_cast<int32_T>(param_pen->pool_size) << 1;
  for (i = 0; i < loop_ub_tmp; i++) {
    pool_ind[i] = 0U;
  }
  //  每个邻域解对应变动索引
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &j_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_deter.set_size(&yb_emlrtRTEI, sp,
                      static_cast<int32_T>(param_pen->pool_size));
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &j_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(param_pen->pool_size);
  for (i = 0; i < loop_ub; i++) {
    pool_deter[i] = false;
  }
  //  每个邻域解是否退化
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(param_pen->pool_size);
  pool_gen_cost.set_size(&ac_emlrtRTEI, sp,
                         static_cast<int32_T>(param_pen->pool_size));
  for (i = 0; i < loop_ub; i++) {
    pool_gen_cost[i] = rtInf;
  }
  //  每个邻域解的广义成本
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &k_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_dis.set_size(&bc_emlrtRTEI, sp,
                    static_cast<int32_T>(param_pen->pool_size));
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &k_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  last = static_cast<int32_T>(param_pen->pool_size);
  for (i = 0; i < last; i++) {
    pool_dis[i] = 0.0;
  }
  //  每个邻域解的总距离
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &f_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  pool_payload.set_size(&cc_emlrtRTEI, sp,
                        static_cast<int32_T>(param_pen->pool_size), 2);
  if (param_pen->pool_size != back_time) {
    emlrtIntegerCheckR2012b(param_pen->pool_size, &l_emlrtDCI,
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
  //  路线A和B是不等价的
  i = data->vnum;
  if (data->vnum - 1 >= 0) {
    if (sol_info->routes.size(1) - 1 < 2) {
      i1 = 0;
      i2 = 0;
    } else {
      if (sol_info->routes.size(1) < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, sol_info->routes.size(1),
                                      &fc_emlrtBCI, (emlrtConstCTX)sp);
      }
      i1 = 1;
      if ((sol_info->routes.size(1) - 1 < 1) ||
          (sol_info->routes.size(1) - 1 > sol_info->routes.size(1))) {
        emlrtDynamicBoundsCheckR2012b(sol_info->routes.size(1) - 1, 1,
                                      sol_info->routes.size(1), &ec_emlrtBCI,
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
                                      &dc_emlrtBCI, (emlrtConstCTX)sp);
      }
      i3 = 1;
      if (sol_info->a_r_time.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(sol_info->a_r_time.size(1), 1,
                                      sol_info->a_r_time.size(1), &cc_emlrtBCI,
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
    real_T dist_r_1;
    int32_T i5;
    int32_T i6;
    int32_T j;
    //  路线信息
    if (b_i + 1 > sol_info->routes.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->routes.size(0),
                                    &mc_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  第一个路径
    if (b_i + 1 > sol_info->a_r_time.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->a_r_time.size(0),
                                    &lc_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  实际最晚到达
    if (b_i + 1 > sol_info->a_c_time.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->a_c_time.size(0),
                                    &kc_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  修正最晚到达
    if (b_i + 1 > sol_info->z_c_time.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->z_c_time.size(0),
                                    &jc_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  修正最早到达
    if (b_i + 1 > sol_info->tw_forward.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->tw_forward.size(0),
                                    &ic_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  前向惩罚时间
    if (b_i + 1 > sol_info->tw_backward.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->tw_backward.size(0),
                                    &hc_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  反向惩罚时间
    if (b_i + 1 > sol_info->cost.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->cost.size(0),
                                    &rc_emlrtBCI, (emlrtConstCTX)sp);
    }
    dist_r_1 = sol_info->cost[b_i];
    //  距离
    if (b_i + 1 > sol_info->payload.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->payload.size(0),
                                    &gc_emlrtBCI, (emlrtConstCTX)sp);
    }
    //  容量
    //  消除多余的0
    r_1.set_size(&dc_emlrtRTEI, sp, 1, sol_info->routes.size(1));
    for (i5 = 0; i5 < b_loop_ub; i5++) {
      r_1[i5] = sol_info->routes[b_i + sol_info->routes.size(0) * i5];
    }
    i5 = i2 - i1;
    time_del_ind.set_size(&ec_emlrtRTEI, sp, 1, i5 + 2);
    time_del_ind[0] = false;
    for (i6 = 0; i6 < c_loop_ub; i6++) {
      time_del_ind[i6 + 1] =
          (sol_info->routes[b_i + sol_info->routes.size(0) * (i1 + i6)] == 0);
    }
    time_del_ind[i5 + 1] = false;
    st.site = &ae_emlrtRSI;
    coder::internal::nullAssignment(&st, r_1, time_del_ind);
    temp.set_size(&fc_emlrtRTEI, sp, 1, i4 - i3);
    for (i5 = 0; i5 < d_loop_ub; i5++) {
      temp[i5] =
          (sol_info->a_r_time[b_i + sol_info->a_r_time.size(0) * (i3 + i5)] ==
           0.0);
    }
    time_del_ind.set_size(&gc_emlrtRTEI, sp, 1, temp.size(1));
    last = temp.size(1);
    for (i5 = 0; i5 < last; i5++) {
      time_del_ind[i5] = temp[i5];
    }
    st.site = &yd_emlrtRSI;
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
      time_del_ind.set_size(&ic_emlrtRTEI, sp, 1, last + 2);
      time_del_ind[0] = false;
      time_del_ind[1] = false;
      for (i6 = 0; i6 < last; i6++) {
        time_del_ind[i6 + 2] = temp[i5 + i6];
      }
    } else {
      time_del_ind.set_size(&hc_emlrtRTEI, sp, 1, temp.size(1) + 1);
      time_del_ind[0] = false;
      last = temp.size(1);
      for (i5 = 0; i5 < last; i5++) {
        time_del_ind[i5 + 1] = temp[i5];
      }
    }
    a_c_r_1.set_size(&jc_emlrtRTEI, sp, 1, sol_info->a_c_time.size(1));
    for (i5 = 0; i5 < e_loop_ub; i5++) {
      a_c_r_1[i5] = sol_info->a_c_time[b_i + sol_info->a_c_time.size(0) * i5];
    }
    st.site = &sd_emlrtRSI;
    coder::internal::b_nullAssignment(&st, a_c_r_1, time_del_ind);
    z_c_r_1.set_size(&kc_emlrtRTEI, sp, 1, sol_info->z_c_time.size(1));
    for (i5 = 0; i5 < f_loop_ub; i5++) {
      z_c_r_1[i5] = sol_info->z_c_time[b_i + sol_info->z_c_time.size(0) * i5];
    }
    st.site = &rd_emlrtRSI;
    coder::internal::b_nullAssignment(&st, z_c_r_1, time_del_ind);
    tw_f_r_1.set_size(&lc_emlrtRTEI, sp, 1, sol_info->tw_forward.size(1));
    for (i5 = 0; i5 < g_loop_ub; i5++) {
      tw_f_r_1[i5] =
          sol_info->tw_forward[b_i + sol_info->tw_forward.size(0) * i5];
    }
    st.site = &qd_emlrtRSI;
    coder::internal::b_nullAssignment(&st, tw_f_r_1, time_del_ind);
    tw_b_r_1.set_size(&mc_emlrtRTEI, sp, 1, sol_info->tw_backward.size(1));
    for (i5 = 0; i5 < h_loop_ub; i5++) {
      tw_b_r_1[i5] =
          sol_info->tw_backward[b_i + sol_info->tw_backward.size(0) * i5];
    }
    st.site = &pd_emlrtRSI;
    coder::internal::b_nullAssignment(&st, tw_b_r_1, time_del_ind);
    //  原来的成本
    if (b_i + 1 > sol_info->cost.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sol_info->cost.size(0),
                                    &bc_emlrtBCI, (emlrtConstCTX)sp);
    }
    j = 0;
    while ((j <= data->vnum - 1) && (b_i != j)) {
      real_T b_sol_info[3];
      real_T dist_r_2;
      real_T old_sum_cost_routes;
      int32_T i7;
      //  路线信息
      if (j + 1 > sol_info->routes.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, sol_info->routes.size(0),
                                      &ac_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (j + 1 > sol_info->a_r_time.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, sol_info->a_r_time.size(0),
                                      &yb_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (j + 1 > sol_info->a_c_time.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, sol_info->a_c_time.size(0),
                                      &xb_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (j + 1 > sol_info->z_c_time.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, sol_info->z_c_time.size(0),
                                      &wb_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (j + 1 > sol_info->tw_forward.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, sol_info->tw_forward.size(0),
                                      &vb_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (j + 1 > sol_info->tw_backward.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, sol_info->tw_backward.size(0),
                                      &ub_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (j + 1 > sol_info->cost.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, sol_info->cost.size(0),
                                      &vc_emlrtBCI, (emlrtConstCTX)sp);
      }
      dist_r_2 = sol_info->cost[j];
      if (j + 1 > sol_info->payload.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, sol_info->payload.size(0),
                                      &tb_emlrtBCI, (emlrtConstCTX)sp);
      }
      //  消除多余的0
      if (sol_info->routes.size(1) - 1 < 2) {
        i5 = 0;
        i6 = 0;
      } else {
        if (sol_info->routes.size(1) < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, sol_info->routes.size(1),
                                        &sb_emlrtBCI, (emlrtConstCTX)sp);
        }
        i5 = 1;
        if ((sol_info->routes.size(1) - 1 < 1) ||
            (sol_info->routes.size(1) - 1 > sol_info->routes.size(1))) {
          emlrtDynamicBoundsCheckR2012b(sol_info->routes.size(1) - 1, 1,
                                        sol_info->routes.size(1), &rb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i6 = sol_info->routes.size(1) - 1;
      }
      r_2.set_size(&nc_emlrtRTEI, sp, 1, sol_info->routes.size(1));
      last = sol_info->routes.size(1);
      for (i7 = 0; i7 < last; i7++) {
        r_2[i7] = sol_info->routes[j + sol_info->routes.size(0) * i7];
      }
      last = i6 - i5;
      time_del_ind.set_size(&oc_emlrtRTEI, sp, 1, last + 2);
      time_del_ind[0] = false;
      for (i6 = 0; i6 < last; i6++) {
        time_del_ind[i6 + 1] =
            (sol_info->routes[j + sol_info->routes.size(0) * (i5 + i6)] == 0);
      }
      time_del_ind[last + 1] = false;
      st.site = &xd_emlrtRSI;
      coder::internal::nullAssignment(&st, r_2, time_del_ind);
      if (sol_info->a_r_time.size(1) < 2) {
        i5 = 0;
        i6 = 0;
      } else {
        if (sol_info->a_r_time.size(1) < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, sol_info->a_r_time.size(1),
                                        &qb_emlrtBCI, (emlrtConstCTX)sp);
        }
        i5 = 1;
        if (sol_info->a_r_time.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(sol_info->a_r_time.size(1), 1,
                                        sol_info->a_r_time.size(1),
                                        &pb_emlrtBCI, (emlrtConstCTX)sp);
        }
        i6 = sol_info->a_r_time.size(1);
      }
      last = i6 - i5;
      temp.set_size(&pc_emlrtRTEI, sp, 1, last);
      for (i6 = 0; i6 < last; i6++) {
        temp[i6] =
            (sol_info->a_r_time[j + sol_info->a_r_time.size(0) * (i5 + i6)] ==
             0.0);
      }
      //  判断是否全是0
      time_del_ind.set_size(&qc_emlrtRTEI, sp, 1, temp.size(1));
      last = temp.size(1);
      for (i5 = 0; i5 < last; i5++) {
        time_del_ind[i5] = temp[i5];
      }
      st.site = &wd_emlrtRSI;
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
        time_del_ind.set_size(&sc_emlrtRTEI, sp, 1, last + 2);
        time_del_ind[0] = false;
        time_del_ind[1] = false;
        for (i6 = 0; i6 < last; i6++) {
          time_del_ind[i6 + 2] = temp[i5 + i6];
        }
      } else {
        time_del_ind.set_size(&rc_emlrtRTEI, sp, 1, temp.size(1) + 1);
        time_del_ind[0] = false;
        last = temp.size(1);
        for (i5 = 0; i5 < last; i5++) {
          time_del_ind[i5 + 1] = temp[i5];
        }
      }
      a_c_r_2.set_size(&tc_emlrtRTEI, sp, 1, sol_info->a_c_time.size(1));
      last = sol_info->a_c_time.size(1);
      for (i5 = 0; i5 < last; i5++) {
        a_c_r_2[i5] = sol_info->a_c_time[j + sol_info->a_c_time.size(0) * i5];
      }
      st.site = &nd_emlrtRSI;
      coder::internal::b_nullAssignment(&st, a_c_r_2, time_del_ind);
      z_c_r_2.set_size(&uc_emlrtRTEI, sp, 1, sol_info->z_c_time.size(1));
      last = sol_info->z_c_time.size(1);
      for (i5 = 0; i5 < last; i5++) {
        z_c_r_2[i5] = sol_info->z_c_time[j + sol_info->z_c_time.size(0) * i5];
      }
      st.site = &od_emlrtRSI;
      coder::internal::b_nullAssignment(&st, z_c_r_2, time_del_ind);
      tw_f_r_2.set_size(&vc_emlrtRTEI, sp, 1, sol_info->tw_forward.size(1));
      last = sol_info->tw_forward.size(1);
      for (i5 = 0; i5 < last; i5++) {
        tw_f_r_2[i5] =
            sol_info->tw_forward[j + sol_info->tw_forward.size(0) * i5];
      }
      st.site = &md_emlrtRSI;
      coder::internal::b_nullAssignment(&st, tw_f_r_2, time_del_ind);
      tw_b_r_2.set_size(&wc_emlrtRTEI, sp, 1, sol_info->tw_backward.size(1));
      last = sol_info->tw_backward.size(1);
      for (i5 = 0; i5 < last; i5++) {
        tw_b_r_2[i5] =
            sol_info->tw_backward[j + sol_info->tw_backward.size(0) * i5];
      }
      st.site = &ld_emlrtRSI;
      coder::internal::b_nullAssignment(&st, tw_b_r_2, time_del_ind);
      //  原来的成本
      if (j + 1 > sol_info->cost.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, sol_info->cost.size(0),
                                      &ob_emlrtBCI, (emlrtConstCTX)sp);
      }
      //  距离
      //  旧的总成本
      b_sol_info[0] = sol_info->cost[j] + sol_info->cost[b_i];
      b_sol_info[1] = sol_info->cost[j + sol_info->cost.size(0)] +
                      sol_info->cost[b_i + sol_info->cost.size(0)];
      b_sol_info[2] = sol_info->cost[j + sol_info->cost.size(0) * 2] +
                      sol_info->cost[b_i + sol_info->cost.size(0) * 2];
      st.site = &vd_emlrtRSI;
      old_sum_cost_routes = coder::b_sum(b_sol_info);
      //  重新安排客户
      i5 = r_1.size(1);
      for (int32_T m{0}; m <= i5 - 3; m++) {
        int16_T v;
        if (m + 2 > r_1.size(1)) {
          emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1), &wc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        v = r_1[m + 1];
        //  被丢出的客户
        i6 = r_2.size(1);
        if (i6 - 2 >= 0) {
          add_arc[0] = r_1[m];
          add_arc[3] = r_1[m + 2];
          add_arc[4] = r_1[m + 1];
          add_arc[2] = r_1[m + 1];
          del_arc[0] = r_1[m];
          del_arc[3] = r_1[m + 1];
          del_arc[1] = r_1[m + 1];
          del_arc[4] = r_1[m + 2];
        }
        for (int32_T n{0}; n <= i6 - 2; n++) {
          //  弧关系
          if (m + 1 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 1, 1, r_1.size(1), &xc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (m + 3 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 3, 1, r_1.size(1), &yc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (n + 1 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 1, 1, r_2.size(1), &ad_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          add_arc[1] = r_2[n];
          if (m + 2 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1), &bd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (m + 2 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1), &cd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (n + 2 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1), &dd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          add_arc[5] = r_2[n + 1];
          //  增加弧
          if (m + 1 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 1, 1, r_1.size(1), &ed_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (m + 2 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1), &fd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (m + 2 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 2, 1, r_1.size(1), &gd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (m + 3 > r_1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(m + 3, 1, r_1.size(1), &hd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (n + 1 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 1, 1, r_2.size(1), &id_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          del_arc[2] = r_2[n];
          if (n + 2 > r_2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1), &jd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          del_arc[5] = r_2[n + 1];
          //  删除弧
          //  可行性判断
          st.site = &ud_emlrtRSI;
          if (!myismember(&st, add_arc, tabu_list)) {
            int32_T i8;
            i7 = add_arc[0] + 1;
            if (add_arc[0] + 1 > 32767) {
              i7 = 32767;
            }
            if ((i7 < 1) || (i7 > data->arc.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i7, 1, data->arc.size(0),
                                            &kd_emlrtBCI, (emlrtConstCTX)sp);
            }
            i8 = add_arc[3] + 1;
            if (add_arc[3] + 1 > 32767) {
              i8 = 32767;
            }
            if ((i8 < 1) || (i8 > data->arc.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i8, 1, data->arc.size(1),
                                            &ld_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (data->arc[(i7 + data->arc.size(0) * (i8 - 1)) - 1]) {
              i7 = add_arc[1] + 1;
              if (add_arc[1] + 1 > 32767) {
                i7 = 32767;
              }
              if ((i7 < 1) || (i7 > data->arc.size(0))) {
                emlrtDynamicBoundsCheckR2012b(i7, 1, data->arc.size(0),
                                              &md_emlrtBCI, (emlrtConstCTX)sp);
              }
              i8 = add_arc[4] + 1;
              if (add_arc[4] + 1 > 32767) {
                i8 = 32767;
              }
              if ((i8 < 1) || (i8 > data->arc.size(1))) {
                emlrtDynamicBoundsCheckR2012b(i8, 1, data->arc.size(1),
                                              &nd_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (data->arc[(i7 + data->arc.size(0) * (i8 - 1)) - 1]) {
                i7 = add_arc[2] + 1;
                if (add_arc[2] + 1 > 32767) {
                  i7 = 32767;
                }
                if ((i7 < 1) || (i7 > data->arc.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(i7, 1, data->arc.size(0),
                                                &od_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                i8 = add_arc[5] + 1;
                if (add_arc[5] + 1 > 32767) {
                  i8 = 32767;
                }
                if ((i8 < 1) || (i8 > data->arc.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(i8, 1, data->arc.size(1),
                                                &pd_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                if (data->arc[(i7 + data->arc.size(0) * (i8 - 1)) - 1]) {
                  real_T payload_1;
                  real_T payload_2;
                  real_T pun_time;
                  boolean_T deteriorate;
                  //  生成新路径
                  new_r_1.set_size(&xc_emlrtRTEI, sp, 1, r_1.size(1));
                  last = r_1.size(1);
                  for (i7 = 0; i7 < last; i7++) {
                    new_r_1[i7] = r_1[i7];
                  }
                  time_del_ind.set_size(&yc_emlrtRTEI, sp, 1, r_1.size(1));
                  last = r_1.size(1);
                  for (i7 = 0; i7 < last; i7++) {
                    time_del_ind[i7] = (r_1[i7] == v);
                  }
                  st.site = &td_emlrtRSI;
                  coder::internal::nullAssignment(&st, new_r_1, time_del_ind);
                  if (r_2.size(1) < 1) {
                    emlrtDynamicBoundsCheckR2012b(
                        1, 1, r_2.size(1), &nb_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  if (n + 1 > r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        n + 1, 1, r_2.size(1), &mb_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  if (n + 2 > r_2.size(1)) {
                    i7 = 0;
                    i8 = 0;
                  } else {
                    if (n + 2 > r_2.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(n + 2, 1, r_2.size(1),
                                                    &lb_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    i7 = n + 1;
                    i8 = r_2.size(1);
                  }
                  new_r_2.set_size(&ad_emlrtRTEI, sp, 1, ((n + i8) - i7) + 2);
                  for (k = 0; k <= n; k++) {
                    new_r_2[k] = r_2[k];
                  }
                  new_r_2[n + 1] = v;
                  last = i8 - i7;
                  for (i8 = 0; i8 < last; i8++) {
                    new_r_2[(i8 + n) + 2] = r_2[i7 + i8];
                  }
                  //  计算成本
                  //  1. 距离成本
                  if (m + 1 > r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 1, 1, r_1.size(1), &rd_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  i7 = r_1[m] + 1;
                  if (i7 > 32767) {
                    i7 = 32767;
                  }
                  if ((i7 < 1) || (i7 > data->dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i7, 1, data->dist.size(0),
                                                  &qd_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 2 > r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 2, 1, r_1.size(1), &td_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  i8 = r_1[m + 1] + 1;
                  if (i8 > 32767) {
                    i8 = 32767;
                  }
                  if ((i8 < 1) || (i8 > data->dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i8, 1, data->dist.size(1),
                                                  &sd_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 2 > r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 2, 1, r_1.size(1), &vd_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  k = r_1[m + 1] + 1;
                  if (k > 32767) {
                    k = 32767;
                  }
                  if ((k < 1) || (k > data->dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, data->dist.size(0),
                                                  &ud_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 3 > r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 3, 1, r_1.size(1), &xd_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  loop_ub_tmp = r_1[m + 2] + 1;
                  if (loop_ub_tmp > 32767) {
                    loop_ub_tmp = 32767;
                  }
                  if ((loop_ub_tmp < 1) || (loop_ub_tmp > data->dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(
                        loop_ub_tmp, 1, data->dist.size(1), &wd_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  if (m + 1 > r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 1, 1, r_1.size(1), &ae_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  i_loop_ub = r_1[m] + 1;
                  if (i_loop_ub > 32767) {
                    i_loop_ub = 32767;
                  }
                  if ((i_loop_ub < 1) || (i_loop_ub > data->dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(
                        i_loop_ub, 1, data->dist.size(0), &yd_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  if (m + 3 > r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 3, 1, r_1.size(1), &ce_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  last = r_1[m + 2] + 1;
                  if (last > 32767) {
                    last = 32767;
                  }
                  if ((last < 1) || (last > data->dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(last, 1, data->dist.size(1),
                                                  &be_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  new_cost[0] =
                      ((dist_r_1 -
                        data->dist[(i7 + data->dist.size(0) * (i8 - 1)) - 1]) -
                       data->dist[(k + data->dist.size(0) * (loop_ub_tmp - 1)) -
                                  1]) +
                      data->dist[(i_loop_ub + data->dist.size(0) * (last - 1)) -
                                 1];
                  if (n + 1 > r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        n + 1, 1, r_2.size(1), &ee_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  i7 = r_2[n] + 1;
                  if (i7 > 32767) {
                    i7 = 32767;
                  }
                  if ((i7 < 1) || (i7 > data->dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i7, 1, data->dist.size(0),
                                                  &de_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 2 > r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 2, 1, r_1.size(1), &ge_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  i8 = r_1[m + 1] + 1;
                  if (i8 > 32767) {
                    i8 = 32767;
                  }
                  if ((i8 < 1) || (i8 > data->dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i8, 1, data->dist.size(1),
                                                  &fe_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 2 > r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 2, 1, r_1.size(1), &ie_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  k = r_1[m + 1] + 1;
                  if (k > 32767) {
                    k = 32767;
                  }
                  if ((k < 1) || (k > data->dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, data->dist.size(0),
                                                  &he_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (n + 2 > r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        n + 2, 1, r_2.size(1), &ke_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  loop_ub_tmp = r_2[n + 1] + 1;
                  if (loop_ub_tmp > 32767) {
                    loop_ub_tmp = 32767;
                  }
                  if ((loop_ub_tmp < 1) || (loop_ub_tmp > data->dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(
                        loop_ub_tmp, 1, data->dist.size(1), &je_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  if (n + 1 > r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        n + 1, 1, r_2.size(1), &me_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  i_loop_ub = r_2[n] + 1;
                  if (i_loop_ub > 32767) {
                    i_loop_ub = 32767;
                  }
                  if ((i_loop_ub < 1) || (i_loop_ub > data->dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(
                        i_loop_ub, 1, data->dist.size(0), &le_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  if (n + 2 > r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        n + 2, 1, r_2.size(1), &oe_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  last = r_2[n + 1] + 1;
                  if (last > 32767) {
                    last = 32767;
                  }
                  if ((last < 1) || (last > data->dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(last, 1, data->dist.size(1),
                                                  &ne_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  new_cost[1] =
                      ((dist_r_2 +
                        data->dist[(i7 + data->dist.size(0) * (i8 - 1)) - 1]) +
                       data->dist[(k + data->dist.size(0) * (loop_ub_tmp - 1)) -
                                  1]) -
                      data->dist[(i_loop_ub + data->dist.size(0) * (last - 1)) -
                                 1];
                  //  2. 容量惩罚
                  i7 = v + 1;
                  if (v + 1 > 32767) {
                    i7 = 32767;
                  }
                  if ((i7 < 1) || (i7 > data->dmd.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i7, 1, data->dmd.size(0),
                                                  &pe_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  payload_1 = sol_info->payload[b_i] - data->dmd[i7 - 1];
                  i7 = v + 1;
                  if (v + 1 > 32767) {
                    i7 = 32767;
                  }
                  if ((i7 < 1) || (i7 > data->dmd.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i7, 1, data->dmd.size(0),
                                                  &qe_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  payload_2 = sol_info->payload[j] + data->dmd[i7 - 1];
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
                  //  3. 时间惩罚
                  if (m + 1 > a_c_r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(m + 1, 1, a_c_r_1.size(1),
                                                  &re_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 1 > r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 1, 1, r_1.size(1), &te_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  i7 = r_1[m] + 1;
                  if (i7 > 32767) {
                    i7 = 32767;
                  }
                  if ((i7 < 1) || (i7 > data->st.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i7, 1, data->st.size(0),
                                                  &se_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 1 > r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 1, 1, r_1.size(1), &ve_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  i8 = r_1[m] + 1;
                  if (i8 > 32767) {
                    i8 = 32767;
                  }
                  if ((i8 < 1) || (i8 > data->dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i8, 1, data->dist.size(0),
                                                  &ue_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 3 > r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        m + 3, 1, r_1.size(1), &xe_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  k = r_1[m + 2] + 1;
                  if (k > 32767) {
                    k = 32767;
                  }
                  if ((k < 1) || (k > data->dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, data->dist.size(1),
                                                  &we_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 3 > z_c_r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(m + 3, 1, z_c_r_1.size(1),
                                                  &ye_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  pun_time =
                      ((a_c_r_1[m] + data->st[i7 - 1]) +
                       data->dist[(i8 + data->dist.size(0) * (k - 1)) - 1]) -
                      z_c_r_1[m + 2];
                  if (m + 1 > tw_f_r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(m + 1, 1, tw_f_r_1.size(1),
                                                  &kb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (m + 3 > tw_b_r_1.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(m + 3, 1, tw_b_r_1.size(1),
                                                  &jb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (n + 2 > z_c_r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(n + 2, 1, z_c_r_2.size(1),
                                                  &af_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i7 = v + 1;
                  if (v + 1 > 32767) {
                    i7 = 32767;
                  }
                  if ((i7 < 1) || (i7 > data->dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i7, 1, data->dist.size(0),
                                                  &bf_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (n + 2 > r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        n + 2, 1, r_2.size(1), &df_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  i8 = r_2[n + 1] + 1;
                  if (i8 > 32767) {
                    i8 = 32767;
                  }
                  if ((i8 < 1) || (i8 > data->dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(i8, 1, data->dist.size(1),
                                                  &cf_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  k = v + 1;
                  if (v + 1 > 32767) {
                    k = 32767;
                  }
                  if ((k < 1) || (k > data->st.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, data->st.size(0),
                                                  &ef_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  back_time =
                      (z_c_r_2[n + 1] -
                       data->dist[(i7 + data->dist.size(0) * (i8 - 1)) - 1]) -
                      data->st[k - 1];
                  i7 = v + 1;
                  if (v + 1 > 32767) {
                    i7 = 32767;
                  }
                  if ((i7 < 1) || (i7 > data->tw.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i7, 1, data->tw.size(0),
                                                  &ff_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (back_time > data->tw[(i7 + data->tw.size(0)) - 1]) {
                    i7 = v + 1;
                    if (v + 1 > 32767) {
                      i7 = 32767;
                    }
                    if ((i7 < 1) || (i7 > data->tw.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i7, 1, data->tw.size(0),
                                                    &gf_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    back_time = data->tw[(i7 + data->tw.size(0)) - 1];
                  }
                  if (n + 1 > a_c_r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(n + 1, 1, a_c_r_2.size(1),
                                                  &hf_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (n + 1 > r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        n + 1, 1, r_2.size(1), &jf_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  i7 = r_2[n] + 1;
                  if (i7 > 32767) {
                    i7 = 32767;
                  }
                  if ((i7 < 1) || (i7 > data->st.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i7, 1, data->st.size(0),
                                                  &if_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (n + 1 > r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(
                        n + 1, 1, r_2.size(1), &lf_emlrtBCI, (emlrtConstCTX)sp);
                  }
                  i8 = r_2[n] + 1;
                  if (i8 > 32767) {
                    i8 = 32767;
                  }
                  if ((i8 < 1) || (i8 > data->dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i8, 1, data->dist.size(0),
                                                  &kf_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  k = v + 1;
                  if (v + 1 > 32767) {
                    k = 32767;
                  }
                  if ((k < 1) || (k > data->dist.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, data->dist.size(1),
                                                  &mf_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  forward_time =
                      (a_c_r_2[n] + data->st[i7 - 1]) +
                      data->dist[(i8 + data->dist.size(0) * (k - 1)) - 1];
                  i7 = v + 1;
                  if (v + 1 > 32767) {
                    i7 = 32767;
                  }
                  if ((i7 < 1) || (i7 > data->tw.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(i7, 1, data->tw.size(0),
                                                  &nf_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (forward_time < data->tw[i7 - 1]) {
                    i7 = v + 1;
                    if (v + 1 > 32767) {
                      i7 = 32767;
                    }
                    if ((i7 < 1) || (i7 > data->tw.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(i7, 1, data->tw.size(0),
                                                    &of_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    forward_time = data->tw[i7 - 1];
                  }
                  back_time = forward_time - back_time;
                  if (n + 1 > tw_f_r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(n + 1, 1, tw_f_r_2.size(1),
                                                  &ib_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (n + 2 > tw_b_r_2.size(1)) {
                    emlrtDynamicBoundsCheckR2012b(n + 2, 1, tw_b_r_2.size(1),
                                                  &hb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (!(pun_time > 0.0)) {
                    pun_time = 0.0;
                  }
                  new_cost[4] = ((tw_f_r_1[m] + tw_b_r_1[m + 2]) + pun_time) *
                                param_pen->beta_0;
                  if (!(back_time > 0.0)) {
                    back_time = 0.0;
                  }
                  new_cost[5] = ((tw_f_r_2[n] + tw_b_r_2[n + 1]) + back_time) *
                                param_pen->beta_0;
                  //  计算减量成本 & 标记退化
                  st.site = &kd_emlrtRSI;
                  back_time = old_sum_cost_routes - coder::c_sum(new_cost);
                  if (back_time < 0.0) {
                    deteriorate = true;
                    //  找到的邻域还不如原来的
                  } else {
                    deteriorate = false;
                  }
                  //  计算新的路径
                  b_new_rs.set_size(&bd_emlrtRTEI, sp, sol_info->routes.size(0),
                                    sol_info->routes.size(1));
                  last = sol_info->routes.size(0) * sol_info->routes.size(1);
                  for (i7 = 0; i7 < last; i7++) {
                    b_new_rs[i7] = sol_info->routes[i7];
                  }
                  //  new_routes
                  if (b_i + 1 > sol_info->routes.size(0)) {
                    emlrtDynamicBoundsCheckR2012b(
                        b_i + 1, 1, sol_info->routes.size(0), &gb_emlrtBCI,
                        (emlrtConstCTX)sp);
                  }
                  last = sol_info->routes.size(1);
                  for (i7 = 0; i7 < last; i7++) {
                    b_new_rs[b_i + b_new_rs.size(0) * i7] = 0;
                  }
                  if (j + 1 > b_new_rs.size(0)) {
                    emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_new_rs.size(0),
                                                  &fb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  last = b_new_rs.size(1);
                  for (i7 = 0; i7 < last; i7++) {
                    b_new_rs[j + b_new_rs.size(0) * i7] = 0;
                  }
                  if (new_r_1.size(1) < 1) {
                    i7 = 0;
                  } else {
                    if (b_new_rs.size(1) < 1) {
                      emlrtDynamicBoundsCheckR2012b(1, 1, b_new_rs.size(1),
                                                    &db_emlrtBCI,
                                                    (emlrtConstCTX)sp);
                    }
                    if (new_r_1.size(1) > b_new_rs.size(1)) {
                      emlrtDynamicBoundsCheckR2012b(
                          new_r_1.size(1), 1, b_new_rs.size(1), &cb_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    i7 = new_r_1.size(1);
                  }
                  if (b_i + 1 > b_new_rs.size(0)) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b_new_rs.size(0),
                                                  &eb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  iv[0] = 1;
                  iv[1] = i7;
                  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, new_r_1.size(), 2,
                                                &m_emlrtECI, (emlrtCTX)sp);
                  last = new_r_1.size(1);
                  for (i7 = 0; i7 < last; i7++) {
                    b_new_rs[b_i + b_new_rs.size(0) * i7] = new_r_1[i7];
                  }
                  if (b_new_rs.size(1) < 1) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, b_new_rs.size(1),
                                                  &ab_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if ((new_r_2.size(1) < 1) ||
                      (new_r_2.size(1) > b_new_rs.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(new_r_2.size(1), 1,
                                                  b_new_rs.size(1), &y_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (j + 1 > b_new_rs.size(0)) {
                    emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_new_rs.size(0),
                                                  &bb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  iv[0] = 1;
                  iv[1] = new_r_2.size(1);
                  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, new_r_2.size(), 2,
                                                &l_emlrtECI, (emlrtCTX)sp);
                  last = new_r_2.size(1);
                  for (i7 = 0; i7 < last; i7++) {
                    b_new_rs[j + b_new_rs.size(0) * i7] = new_r_2[i7];
                  }
                  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                  //  放入池子中
                  //  先找到池子中成本最大的解对应的索引
                  //  如果 当前解的成本 比 池子中最大成本的解 还大 那直接不要了
                  //  如果小于 则接受 把最大成本的解替换掉
                  st.site = &jd_emlrtRSI;
                  forward_time = (sum_ori_cost - old_sum_cost_routes) +
                                 coder::c_sum(new_cost);
                  if (forward_time < max_pool_cost) {
                    if (max_pool_ind > pool_routes.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_routes.size(0), &x_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    iv1[0] = 1;
                    iv1[1] = pool_routes.size(1);
                    iv1[2] = pool_routes.size(2);
                    emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, b_new_rs.size(),
                                                  2, &k_emlrtECI, (emlrtCTX)sp);
                    iv1[1] = pool_routes.size(1);
                    last = pool_routes.size(2);
                    for (i7 = 0; i7 < last; i7++) {
                      i_loop_ub = pool_routes.size(1);
                      for (i8 = 0; i8 < i_loop_ub; i8++) {
                        pool_routes[((max_pool_ind + pool_routes.size(0) * i8) +
                                     pool_routes.size(0) * pool_routes.size(1) *
                                         i7) -
                                    1] = b_new_rs[i8 + iv1[1] * i7];
                      }
                    }
                    //  加入邻域池子
                    if (max_pool_ind > pool_del.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_del.size(0), &t_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    for (i7 = 0; i7 < 2; i7++) {
                      pool_del[(max_pool_ind + pool_del.size(0) * 3 * i7) - 1] =
                          del_arc[3 * i7];
                      pool_del[((max_pool_ind + pool_del.size(0)) +
                                pool_del.size(0) * 3 * i7) -
                               1] = del_arc[3 * i7 + 1];
                      pool_del[((max_pool_ind + pool_del.size(0) * 2) +
                                pool_del.size(0) * 3 * i7) -
                               1] = del_arc[3 * i7 + 2];
                    }
                    //  每个邻域解对应删除的弧
                    if (max_pool_ind > pool_ind.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_ind.size(0), &r_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_ind[max_pool_ind - 1] = static_cast<uint8_T>(b_i + 1);
                    pool_ind[(max_pool_ind + pool_ind.size(0)) - 1] =
                        static_cast<uint8_T>(j + 1);
                    //  每个邻域解对应变动索引
                    if (max_pool_ind > pool_deter.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_deter.size(0), &pf_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_deter[max_pool_ind - 1] = deteriorate;
                    if (max_pool_ind > pool_gen_cost.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_gen_cost.size(0), &qf_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_gen_cost[max_pool_ind - 1] = forward_time;
                    pool_div_gen_cost.set_size(&cd_emlrtRTEI, sp,
                                               sol_info->cost.size(0));
                    last = sol_info->cost.size(0);
                    for (i7 = 0; i7 < last; i7++) {
                      pool_div_gen_cost[i7] = sol_info->cost[i7];
                    }
                    if (max_pool_ind > pool_dis.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_dis.size(0), &rf_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    st.site = &id_emlrtRSI;
                    pool_dis[max_pool_ind - 1] =
                        ((coder::sum(&st, pool_div_gen_cost) -
                          sol_info->cost[b_i]) -
                         sol_info->cost[j]) +
                        coder::d_sum(&new_cost[0]);
                    if (max_pool_ind > pool_payload.size(0)) {
                      emlrtDynamicBoundsCheckR2012b(
                          max_pool_ind, 1, pool_payload.size(0), &p_emlrtBCI,
                          (emlrtConstCTX)sp);
                    }
                    pool_payload[max_pool_ind - 1] = payload_1;
                    pool_payload[(max_pool_ind + pool_payload.size(0)) - 1] =
                        payload_2;
                    //  更新最大索引
                    st.site = &hd_emlrtRSI;
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
      j++;
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
  empty_flag.set_size(&dd_emlrtRTEI, sp, pool_gen_cost.size(0));
  last = pool_gen_cost.size(0);
  for (i = 0; i < last; i++) {
    empty_flag[i] = (pool_gen_cost[i] == rtInf);
  }
  //  计算广义成本+多样性成本
  pool_div_gen_cost.set_size(&ed_emlrtRTEI, sp, pool_gen_cost.size(0));
  last = pool_gen_cost.size(0);
  for (i = 0; i < last; i++) {
    pool_div_gen_cost[i] = 0.0;
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, param_pen->pool_size, mxDOUBLE_CLASS,
                                static_cast<int32_T>(param_pen->pool_size),
                                &h_emlrtRTEI, (emlrtConstCTX)sp);
  b_i = 1;
  exitg1 = false;
  while ((!exitg1) && (b_i - 1 <= loop_ub - 1)) {
    if ((b_i < 1) || (b_i > empty_flag.size(0))) {
      emlrtDynamicBoundsCheckR2012b(b_i, 1, empty_flag.size(0), &nc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (!empty_flag[b_i - 1]) {
      if (b_i > pool_deter.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_deter.size(0), &oc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (pool_deter[b_i - 1]) {
        //  退化解记录多样性成本
        if (b_i > pool_routes.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_routes.size(0),
                                        &w_emlrtBCI, (emlrtConstCTX)sp);
        }
        new_rs.set_size(&gd_emlrtRTEI, sp, 1, pool_routes.size(1),
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
        temp_frequency.set_size(&hd_emlrtRTEI, sp, frequency.size(0),
                                frequency.size(1));
        last = frequency.size(0) * frequency.size(1);
        for (i = 0; i < last; i++) {
          temp_frequency[i] = frequency[i];
        }
        st.site = &gd_emlrtRSI;
        update_frequency(&st, temp_frequency, new_rs);
        //  更新频率
        if (b_i > pool_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_gen_cost.size(0),
                                        &sc_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (b_i > pool_dis.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_dis.size(0), &tc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (b_i > pool_div_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_div_gen_cost.size(0),
                                        &uc_emlrtBCI, (emlrtConstCTX)sp);
        }
        st.site = &fd_emlrtRSI;
        pool_div_gen_cost[b_i - 1] =
            pool_gen_cost[b_i - 1] +
            calculate_diversity(&st, new_rs, b_div, pool_dis[b_i - 1],
                                static_cast<real_T>(data->dmd.size(0)) - 1.0,
                                data->vnum, temp_frequency);
      } else {
        //  非退化直接记录成本
        if (b_i > pool_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_gen_cost.size(0),
                                        &pc_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (b_i > pool_div_gen_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, pool_div_gen_cost.size(0),
                                        &qc_emlrtBCI, (emlrtConstCTX)sp);
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
                                        &v_emlrtBCI, (emlrtConstCTX)sp);
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
  st.site = &ed_emlrtRSI;
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
      i_loop_ub = 1;
    } else if ((pool_div_gen_cost[0] > pool_div_gen_cost[1]) ||
               (muDoubleScalarIsNaN(pool_div_gen_cost[0]) &&
                (!muDoubleScalarIsNaN(pool_div_gen_cost[1])))) {
      forward_time = pool_div_gen_cost[1];
      i_loop_ub = 2;
    } else {
      forward_time = pool_div_gen_cost[0];
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
      forward_time = pool_div_gen_cost[0];
      i_loop_ub = 1;
    } else {
      f_st.site = &oc_emlrtRSI;
      forward_time = pool_div_gen_cost[i_loop_ub - 1];
      loop_ub_tmp = i_loop_ub + 1;
      g_st.site = &rc_emlrtRSI;
      if ((i_loop_ub + 1 <= pool_div_gen_cost.size(0)) &&
          (pool_div_gen_cost.size(0) > 2147483646)) {
        h_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&h_st);
      }
      for (k = loop_ub_tmp; k <= last; k++) {
        back_time = pool_div_gen_cost[k - 1];
        if (forward_time > back_time) {
          forward_time = back_time;
          i_loop_ub = k;
        }
      }
    }
  }
  *best_neighbor = *sol_info;
  if ((i_loop_ub < 1) || (i_loop_ub > pool_routes.size(0))) {
    emlrtDynamicBoundsCheckR2012b(i_loop_ub, 1, pool_routes.size(0),
                                  &u_emlrtBCI, (emlrtConstCTX)sp);
  }
  new_rs.set_size(&fd_emlrtRTEI, sp, 1, pool_routes.size(1),
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
  st.site = &dd_emlrtRSI;
  coder::squeeze(&st, new_rs, best_neighbor->routes);
  if (i_loop_ub > pool_del.size(0)) {
    emlrtDynamicBoundsCheckR2012b(i_loop_ub, 1, pool_del.size(0), &s_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  for (i = 0; i < 2; i++) {
    best_del[3 * i] = pool_del[(i_loop_ub + pool_del.size(0) * 3 * i) - 1];
    best_del[3 * i + 1] =
        pool_del[((i_loop_ub + pool_del.size(0)) + pool_del.size(0) * 3 * i) -
                 1];
    best_del[3 * i + 2] = pool_del[((i_loop_ub + pool_del.size(0) * 2) +
                                    pool_del.size(0) * 3 * i) -
                                   1];
  }
  if (i_loop_ub > pool_ind.size(0)) {
    emlrtDynamicBoundsCheckR2012b(i_loop_ub, 1, pool_ind.size(0), &q_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  best_ind[0] = pool_ind[i_loop_ub - 1];
  best_ind[1] = pool_ind[(i_loop_ub + pool_ind.size(0)) - 1];
  if (i_loop_ub > pool_payload.size(0)) {
    emlrtDynamicBoundsCheckR2012b(i_loop_ub, 1, pool_payload.size(0),
                                  &o_emlrtBCI, (emlrtConstCTX)sp);
  }
  i = pool_ind[i_loop_ub - 1];
  if ((i < 1) || (i > sol_info->payload.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(pool_ind[i_loop_ub - 1]),
                                  1, sol_info->payload.size(0), &sf_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  best_neighbor->payload[i - 1] = pool_payload[i_loop_ub - 1];
  i = pool_ind[(i_loop_ub + pool_ind.size(0)) - 1];
  if ((i < 1) || (i > sol_info->payload.size(0))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(pool_ind[(i_loop_ub + pool_ind.size(0)) - 1]), 1,
        sol_info->payload.size(0), &sf_emlrtBCI, (emlrtConstCTX)sp);
  }
  best_neighbor->payload[i - 1] =
      pool_payload[(i_loop_ub + pool_payload.size(0)) - 1];
  *best_total_cost = forward_time;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (ts_inter_relocating.cpp)
