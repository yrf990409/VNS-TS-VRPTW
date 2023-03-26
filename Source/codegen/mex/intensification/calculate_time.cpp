//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// calculate_time.cpp
//
// Code generation for function 'calculate_time'
//

// Include files
#include "calculate_time.h"
#include "intensification_data.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo qg_emlrtRSI{
    23,               // lineNo
    "calculate_time", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pathName
};

static emlrtBCInfo rq_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    22,               // lineNo
    16,               // colNo
    "routes",         // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo sq_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    23,               // lineNo
    17,               // colNo
    "r",              // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo tq_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    23,               // lineNo
    19,               // colNo
    "r",              // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo uq_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    34,               // lineNo
    30,               // colNo
    "data.tw",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo vq_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    35,               // lineNo
    30,               // colNo
    "data.tw",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo wq_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    37,               // lineNo
    26,               // colNo
    "r",              // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo xq_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    38,               // lineNo
    25,               // colNo
    "r",              // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo yq_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    35,               // lineNo
    17,               // colNo
    "a_c",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ar_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    34,               // lineNo
    17,               // colNo
    "a_r",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtRTEInfo m_emlrtRTEI{
    49,               // lineNo
    13,               // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtBCInfo br_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    52,               // lineNo
    30,               // colNo
    "data.tw",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo cr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    53,               // lineNo
    30,               // colNo
    "data.tw",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo dr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    55,               // lineNo
    23,               // colNo
    "r",              // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo er_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    56,               // lineNo
    25,               // colNo
    "r",              // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo fr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    68,               // lineNo
    14,               // colNo
    "a_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo gr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    68,               // lineNo
    18,               // colNo
    "a_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo hr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    68,               // lineNo
    20,               // colNo
    "a_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtECInfo t_emlrtECI{
    -1,               // nDims
    68,               // lineNo
    5,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtBCInfo ir_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    73,               // lineNo
    21,               // colNo
    "a_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo jr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    73,               // lineNo
    25,               // colNo
    "a_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo kr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    73,               // lineNo
    27,               // colNo
    "a_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtECInfo u_emlrtECI{
    2,                // nDims
    73,               // lineNo
    12,               // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtBCInfo lr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    70,               // lineNo
    14,               // colNo
    "z_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo mr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    70,               // lineNo
    18,               // colNo
    "z_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo nr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    70,               // lineNo
    20,               // colNo
    "z_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtECInfo v_emlrtECI{
    -1,               // nDims
    70,               // lineNo
    5,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtBCInfo or_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    81,               // lineNo
    39,               // colNo
    "z_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo pr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    81,               // lineNo
    43,               // colNo
    "z_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo qr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    81,               // lineNo
    45,               // colNo
    "z_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtECInfo w_emlrtECI{
    2,                // nDims
    81,               // lineNo
    12,               // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    84,               // lineNo
    13,               // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtBCInfo rr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    69,               // lineNo
    14,               // colNo
    "a_c_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo sr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    69,               // lineNo
    18,               // colNo
    "a_c_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo tr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    69,               // lineNo
    20,               // colNo
    "a_c_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtECInfo x_emlrtECI{
    -1,               // nDims
    69,               // lineNo
    5,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtBCInfo ur_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    71,               // lineNo
    14,               // colNo
    "z_c_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo vr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    71,               // lineNo
    18,               // colNo
    "z_c_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo wr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    71,               // lineNo
    20,               // colNo
    "z_c_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtECInfo y_emlrtECI{
    -1,               // nDims
    71,               // lineNo
    5,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtBCInfo xr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    21,               // lineNo
    21,               // colNo
    "route_ind",      // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo yr_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    91,               // lineNo
    21,               // colNo
    "a_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo as_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    92,               // lineNo
    21,               // colNo
    "a_c_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo bs_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    93,               // lineNo
    21,               // colNo
    "z_r_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo cs_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    40,               // lineNo
    26,               // colNo
    "a_c",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ds_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    40,               // lineNo
    41,               // colNo
    "data.st",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo es_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    40,               // lineNo
    65,               // colNo
    "data.dist",      // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo fs_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    40,               // lineNo
    76,               // colNo
    "data.dist",      // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo gs_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    40,               // lineNo
    17,               // colNo
    "a_r",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo hs_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    41,               // lineNo
    20,               // colNo
    "a_r",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo is_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    41,               // lineNo
    34,               // colNo
    "data.tw",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo js_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    44,               // lineNo
    34,               // colNo
    "data.tw",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ks_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    44,               // lineNo
    21,               // colNo
    "a_c",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ls_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    52,               // lineNo
    17,               // colNo
    "z_r",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ms_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    42,               // lineNo
    31,               // colNo
    "a_r",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ns_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    42,               // lineNo
    38,               // colNo
    "data.tw",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo os_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    58,               // lineNo
    26,               // colNo
    "z_c",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ps_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    58,               // lineNo
    43,               // colNo
    "data.dist",      // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo qs_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    58,               // lineNo
    53,               // colNo
    "data.dist",      // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo rs_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    58,               // lineNo
    72,               // colNo
    "data.st",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ss_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    58,               // lineNo
    17,               // colNo
    "z_r",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ts_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    60,               // lineNo
    20,               // colNo
    "z_r",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo us_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    60,               // lineNo
    34,               // colNo
    "data.tw",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo vs_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    53,               // lineNo
    17,               // colNo
    "z_c",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ws_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    63,               // lineNo
    34,               // colNo
    "data.tw",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo xs_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    63,               // lineNo
    21,               // colNo
    "z_c",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ys_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    42,               // lineNo
    21,               // colNo
    "a_c",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo at_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    94,               // lineNo
    21,               // colNo
    "z_c_time",       // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo bt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    61,               // lineNo
    31,               // colNo
    "z_r",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ct_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    61,               // lineNo
    39,               // colNo
    "data.tw",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo dt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    61,               // lineNo
    21,               // colNo
    "z_c",            // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo et_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    95,               // lineNo
    25,               // colNo
    "tw_forward",     // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ft_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    96,               // lineNo
    27,               // colNo
    "tw_backward",    // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo gt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    73,               // lineNo
    50,               // colNo
    "data.tw",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ht_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    74,               // lineNo
    10,               // colNo
    "temp",           // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo it_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    77,               // lineNo
    30,               // colNo
    "temp",           // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo jt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    78,               // lineNo
    20,               // colNo
    "tw_forward",     // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo kt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    78,               // lineNo
    24,               // colNo
    "tw_forward",     // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo lt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    81,               // lineNo
    20,               // colNo
    "data.tw",        // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo mt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    82,               // lineNo
    10,               // colNo
    "temp",           // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo nt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    85,               // lineNo
    30,               // colNo
    "temp",           // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo ot_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    86,               // lineNo
    21,               // colNo
    "tw_backward",    // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtBCInfo pt_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    86,               // lineNo
    25,               // colNo
    "tw_backward",    // aName
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m", // pName
    0                  // checkKind
};

static emlrtRTEInfo jg_emlrtRTEI{
    12,               // lineNo
    1,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo kg_emlrtRTEI{
    14,               // lineNo
    1,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo lg_emlrtRTEI{
    15,               // lineNo
    1,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo mg_emlrtRTEI{
    16,               // lineNo
    1,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo ng_emlrtRTEI{
    17,               // lineNo
    1,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo og_emlrtRTEI{
    18,               // lineNo
    1,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo pg_emlrtRTEI{
    23,               // lineNo
    5,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo qg_emlrtRTEI{
    23,               // lineNo
    7,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo rg_emlrtRTEI{
    25,               // lineNo
    5,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo sg_emlrtRTEI{
    27,               // lineNo
    5,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo tg_emlrtRTEI{
    28,               // lineNo
    5,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo ug_emlrtRTEI{
    29,               // lineNo
    5,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo vg_emlrtRTEI{
    73,               // lineNo
    50,               // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo wg_emlrtRTEI{
    73,               // lineNo
    5,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo xg_emlrtRTEI{
    81,               // lineNo
    5,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo yg_emlrtRTEI{
    91,               // lineNo
    12,               // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo ah_emlrtRTEI{
    91,               // lineNo
    1,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo bh_emlrtRTEI{
    92,               // lineNo
    12,               // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo ch_emlrtRTEI{
    92,               // lineNo
    1,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo dh_emlrtRTEI{
    93,               // lineNo
    12,               // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo eh_emlrtRTEI{
    93,               // lineNo
    1,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo fh_emlrtRTEI{
    94,               // lineNo
    12,               // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo gh_emlrtRTEI{
    94,               // lineNo
    1,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo hh_emlrtRTEI{
    95,               // lineNo
    14,               // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo ih_emlrtRTEI{
    95,               // lineNo
    1,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo jh_emlrtRTEI{
    96,               // lineNo
    15,               // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRTEInfo kh_emlrtRTEI{
    96,               // lineNo
    1,                // colNo
    "calculate_time", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pName
};

static emlrtRSInfo oh_emlrtRSI{
    81,               // lineNo
    "calculate_time", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pathName
};

static emlrtRSInfo ph_emlrtRSI{
    73,               // lineNo
    "calculate_time", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/c"
    "alculate_time.m" // pathName
};

// Function Declarations
static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2,
                             const coder::array<int16_T, 1U> &in3,
                             const coder::array<real_T, 2U> &in4,
                             const real_T in5_data[], int32_T in6, int32_T in7);

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2,
                             const real_T in3_data[], int32_T in4, int32_T in5,
                             const coder::array<real_T, 2U> &in6,
                             const coder::array<int16_T, 1U> &in7);

// Function Definitions
static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2,
                             const coder::array<int16_T, 1U> &in3,
                             const coder::array<real_T, 2U> &in4,
                             const real_T in5_data[], int32_T in6, int32_T in7)
{
  int32_T i;
  int32_T in5;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in5 = static_cast<int32_T>(in5_data[in6]);
  if (in7 == 1) {
    i = in3.size(0);
  } else {
    i = in7;
  }
  in1.set_size(&xg_emlrtRTEI, sp, 1, i);
  stride_0_1 = (in3.size(0) != 1);
  stride_1_1 = (in7 != 1);
  if (in7 == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in7;
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = in2[in3[i * stride_0_1] - 1] -
             in4[(in5 + in4.size(0) * (i * stride_1_1)) - 1];
  }
}

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2,
                             const real_T in3_data[], int32_T in4, int32_T in5,
                             const coder::array<real_T, 2U> &in6,
                             const coder::array<int16_T, 1U> &in7)
{
  int32_T i;
  int32_T in3;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in3 = static_cast<int32_T>(in3_data[in4]);
  if (in7.size(0) == 1) {
    i = in5;
  } else {
    i = in7.size(0);
  }
  in1.set_size(&wg_emlrtRTEI, sp, 1, i);
  stride_0_1 = (in5 != 1);
  stride_1_1 = (in7.size(0) != 1);
  if (in7.size(0) == 1) {
    loop_ub = in5;
  } else {
    loop_ub = in7.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = in2[(in3 + in2.size(0) * (i * stride_0_1)) - 1] -
             in6[(in7[i * stride_1_1] + in6.size(0)) - 1];
  }
}

void calculate_time(
    const emlrtStack *sp, const coder::array<int16_T, 2U> &routes,
    const coder::array<real_T, 2U> &data_tw,
    const coder::array<real_T, 1U> &data_st,
    const coder::array<real_T, 2U> &data_dist, const real_T route_ind_data[],
    const int32_T route_ind_size[2], coder::array<real_T, 2U> &a_r_time,
    coder::array<real_T, 2U> &a_c_time, coder::array<real_T, 2U> &z_r_time,
    coder::array<real_T, 2U> &z_c_time, coder::array<real_T, 2U> &tw_forward,
    coder::array<real_T, 2U> &tw_backward)
{
  coder::array<real_T, 2U> a_c;
  coder::array<real_T, 2U> b_a_r_time;
  coder::array<real_T, 2U> r_time;
  coder::array<real_T, 2U> z_c;
  coder::array<real_T, 2U> z_r;
  coder::array<int16_T, 2U> r;
  coder::array<int16_T, 1U> r1;
  coder::array<boolean_T, 2U> b_r;
  emlrtStack st;
  int32_T iv[2];
  int32_T b_data_tw;
  int32_T b_loop_ub;
  int32_T c_data_tw;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T n;
  uint32_T b_route_ind_data[2];
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  计算路径的各种时间，支持多条路径
  //  返回参数：
  //  a_r_time      double  n*m 实际最晚到达时间 real
  //  a_c_time      double  n*m 修正最晚到达时间 correct
  //  z_r_time      double  n*m 实际最早出发时间 real
  //  z_c_time      double  n*m 修正最早出发时间 correct
  //  tw_forward    double  n*m 累计向前惩罚量
  //  tw_backward   double  n*m 累计向后惩罚量
  //  初始化
  a_r_time.set_size(&jg_emlrtRTEI, sp, routes.size(0), routes.size(1));
  loop_ub = routes.size(0) * routes.size(1);
  for (i = 0; i < loop_ub; i++) {
    a_r_time[i] = 0.0;
  }
  //  各种空的时间 待填充
  //  实际最晚到达时间 real
  a_c_time.set_size(&kg_emlrtRTEI, sp, routes.size(0), routes.size(1));
  loop_ub = routes.size(0) * routes.size(1);
  for (i = 0; i < loop_ub; i++) {
    a_c_time[i] = 0.0;
  }
  //  修正最晚到达时间 correct
  z_r_time.set_size(&lg_emlrtRTEI, sp, routes.size(0), routes.size(1));
  loop_ub = routes.size(0) * routes.size(1);
  for (i = 0; i < loop_ub; i++) {
    z_r_time[i] = 0.0;
  }
  //  实际最早出发时间
  z_c_time.set_size(&mg_emlrtRTEI, sp, routes.size(0), routes.size(1));
  loop_ub = routes.size(0) * routes.size(1);
  for (i = 0; i < loop_ub; i++) {
    z_c_time[i] = 0.0;
  }
  //  修正最早出发时间
  tw_forward.set_size(&ng_emlrtRTEI, sp, routes.size(0), routes.size(1));
  loop_ub = routes.size(0) * routes.size(1);
  for (i = 0; i < loop_ub; i++) {
    tw_forward[i] = 0.0;
  }
  //  累计向前惩罚量
  tw_backward.set_size(&og_emlrtRTEI, sp, routes.size(0), routes.size(1));
  loop_ub = routes.size(0) * routes.size(1);
  for (i = 0; i < loop_ub; i++) {
    tw_backward[i] = 0.0;
  }
  //  累计向后惩罚量
  if ((route_ind_size[0] == 0) || (route_ind_size[1] == 0)) {
    n = 0;
  } else {
    n = route_ind_size[1];
    if (routes.size(1) - 1 < 2) {
      i1 = 0;
      i2 = 0;
    } else {
      if (routes.size(1) < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, routes.size(1), &sq_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i1 = 1;
      if ((routes.size(1) - 1 < 1) || (routes.size(1) - 1 > routes.size(1))) {
        emlrtDynamicBoundsCheckR2012b(routes.size(1) - 1, 1, routes.size(1),
                                      &tq_emlrtBCI, (emlrtConstCTX)sp);
      }
      i2 = routes.size(1) - 1;
    }
    b_loop_ub = routes.size(1);
    c_loop_ub = i2 - i1;
    b_data_tw = data_tw.size(0);
    c_data_tw = data_tw.size(0);
  }
  for (int32_T k{0}; k < n; k++) {
    real_T count;
    real_T d;
    real_T varargin_1_idx_1;
    int32_T b_j;
    int32_T i3;
    int32_T i4;
    i = route_ind_size[0] * route_ind_size[1];
    if (k + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i, &xr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    d = route_ind_data[k];
    if ((static_cast<int32_T>(d) < 1) ||
        (static_cast<int32_T>(d) > routes.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, routes.size(0),
                                    &rq_emlrtBCI, (emlrtConstCTX)sp);
    }
    r.set_size(&pg_emlrtRTEI, sp, 1, routes.size(1));
    for (i = 0; i < b_loop_ub; i++) {
      r[i] = routes[(static_cast<int32_T>(route_ind_data[k]) +
                     routes.size(0) * i) -
                    1];
    }
    i = i2 - i1;
    b_r.set_size(&qg_emlrtRTEI, sp, 1, i + 2);
    b_r[0] = false;
    for (i3 = 0; i3 < c_loop_ub; i3++) {
      b_r[i3 + 1] = (routes[(static_cast<int32_T>(route_ind_data[k]) +
                             routes.size(0) * (i1 + i3)) -
                            1] == 0);
    }
    b_r[i + 1] = false;
    st.site = &qg_emlrtRSI;
    coder::internal::nullAssignment(&st, r, b_r);
    //  r仅保留前后DC和中间的客户 清除多余0
    loop_ub = r.size(1);
    r_time.set_size(&rg_emlrtRTEI, sp, 1, r.size(1));
    for (i = 0; i < loop_ub; i++) {
      r_time[i] = 0.0;
    }
    //  空时间窗
    a_c.set_size(&sg_emlrtRTEI, sp, 1, r.size(1));
    for (i = 0; i < loop_ub; i++) {
      a_c[i] = 0.0;
    }
    z_r.set_size(&tg_emlrtRTEI, sp, 1, r.size(1));
    for (i = 0; i < loop_ub; i++) {
      z_r[i] = 0.0;
    }
    z_c.set_size(&ug_emlrtRTEI, sp, 1, r.size(1));
    for (i = 0; i < loop_ub; i++) {
      z_c[i] = 0.0;
    }
    i = r.size(1);
    for (int32_T j{0}; j < i; j++) {
      //  计算实际最晚到达时间和修正最晚到达时间
      if (j + 1 == 1) {
        if (r_time.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, r_time.size(1), &ar_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (data_tw.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, data_tw.size(0), &uq_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        r_time[0] = data_tw[0];
        if (a_c.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, a_c.size(1), &yq_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (data_tw.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, data_tw.size(0), &vq_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        a_c[0] = data_tw[0];
      } else {
        if ((j < 1) || (j > r.size(1))) {
          emlrtDynamicBoundsCheckR2012b(j, 1, r.size(1), &wq_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (j + 1 > r.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, r.size(1), &xq_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (j > a_c.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j, 1, a_c.size(1), &cs_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i3 = r[j - 1] + 1;
        loop_ub = i3;
        if (i3 > 32767) {
          loop_ub = 32767;
        }
        if ((loop_ub < 1) || (loop_ub > data_st.size(0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, data_st.size(0),
                                        &ds_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (i3 > 32767) {
          i3 = 32767;
        }
        if ((i3 < 1) || (i3 > data_dist.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, data_dist.size(0), &es_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        d_loop_ub = r[j] + 1;
        i4 = d_loop_ub;
        if (d_loop_ub > 32767) {
          i4 = 32767;
        }
        if ((i4 < 1) || (i4 > data_dist.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, data_dist.size(1), &fs_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (j + 1 > r_time.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, r_time.size(1), &gs_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        r_time[j] = (a_c[j - 1] + data_st[loop_ub - 1]) +
                    data_dist[(i3 + data_dist.size(0) * (i4 - 1)) - 1];
        if (j + 1 > r_time.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, r_time.size(1), &hs_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i3 = d_loop_ub;
        if (d_loop_ub > 32767) {
          i3 = 32767;
        }
        if ((i3 < 1) || (i3 > data_tw.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, data_tw.size(0), &is_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (r_time[j] <= data_tw[(i3 + data_tw.size(0)) - 1]) {
          if (j + 1 > r_time.size(1)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, r_time.size(1),
                                          &ms_emlrtBCI, (emlrtConstCTX)sp);
          }
          count = r_time[j];
          if (d_loop_ub > 32767) {
            d_loop_ub = 32767;
          }
          if ((d_loop_ub < 1) || (d_loop_ub > data_tw.size(0))) {
            emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, data_tw.size(0),
                                          &ns_emlrtBCI, (emlrtConstCTX)sp);
          }
          varargin_1_idx_1 = data_tw[d_loop_ub - 1];
          if ((count < varargin_1_idx_1) ||
              (muDoubleScalarIsNaN(count) &&
               (!muDoubleScalarIsNaN(varargin_1_idx_1)))) {
            if (j + 1 > a_c.size(1)) {
              emlrtDynamicBoundsCheckR2012b(j + 1, 1, a_c.size(1), &ys_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            a_c[j] = varargin_1_idx_1;
          } else {
            if (j + 1 > a_c.size(1)) {
              emlrtDynamicBoundsCheckR2012b(j + 1, 1, a_c.size(1), &ys_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            a_c[j] = count;
          }
        } else {
          if (d_loop_ub > 32767) {
            d_loop_ub = 32767;
          }
          if ((d_loop_ub < 1) || (d_loop_ub > data_tw.size(0))) {
            emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, data_tw.size(0),
                                          &js_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (j + 1 > a_c.size(1)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, a_c.size(1), &ks_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          a_c[j] = data_tw[(d_loop_ub + data_tw.size(0)) - 1];
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    i = r.size(1);
    emlrtForLoopVectorCheckR2021a(static_cast<real_T>(r.size(1)), -1.0, 1.0,
                                  mxDOUBLE_CLASS, r.size(1), &m_emlrtRTEI,
                                  (emlrtConstCTX)sp);
    for (int32_T j{0}; j < i; j++) {
      b_j = r.size(1) - j;
      //  计算实际最早到达时间和修正最早到达时间
      if (b_j == r.size(1)) {
        if (data_tw.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, data_tw.size(0), &br_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if ((b_j < 1) || (b_j > z_r.size(1))) {
          emlrtDynamicBoundsCheckR2012b(b_j, 1, z_r.size(1), &ls_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        z_r[b_j - 1] = data_tw[data_tw.size(0)];
        if (data_tw.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, data_tw.size(0), &cr_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (b_j > z_c.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_j, 1, z_c.size(1), &vs_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        z_c[b_j - 1] = data_tw[data_tw.size(0)];
      } else {
        if ((b_j + 1 < 1) || (b_j + 1 > r.size(1))) {
          emlrtDynamicBoundsCheckR2012b(b_j + 1, 1, r.size(1), &dr_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if ((b_j < 1) || (b_j > r.size(1))) {
          emlrtDynamicBoundsCheckR2012b(b_j, 1, r.size(1), &er_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(static_cast<uint32_T>(b_j) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(b_j) + 1U) >
             z_c.size(1))) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(b_j) + 1U), 1,
              z_c.size(1), &os_emlrtBCI, (emlrtConstCTX)sp);
        }
        i3 = r[b_j - 1] + 1;
        loop_ub = i3;
        if (i3 > 32767) {
          loop_ub = 32767;
        }
        if ((loop_ub < 1) || (loop_ub > data_dist.size(0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, data_dist.size(0),
                                        &ps_emlrtBCI, (emlrtConstCTX)sp);
        }
        d_loop_ub = r[b_j] + 1;
        if (d_loop_ub > 32767) {
          d_loop_ub = 32767;
        }
        if ((d_loop_ub < 1) || (d_loop_ub > data_dist.size(1))) {
          emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, data_dist.size(1),
                                        &qs_emlrtBCI, (emlrtConstCTX)sp);
        }
        i4 = i3;
        if (i3 > 32767) {
          i4 = 32767;
        }
        if ((i4 < 1) || (i4 > data_st.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, data_st.size(0), &rs_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (b_j > z_r.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_j, 1, z_r.size(1), &ss_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        z_r[b_j - 1] =
            (z_c[b_j] -
             data_dist[(loop_ub + data_dist.size(0) * (d_loop_ub - 1)) - 1]) -
            data_st[i4 - 1];
        if (b_j > z_r.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_j, 1, z_r.size(1), &ts_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        loop_ub = i3;
        if (i3 > 32767) {
          loop_ub = 32767;
        }
        if ((loop_ub < 1) || (loop_ub > data_tw.size(0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, data_tw.size(0),
                                        &us_emlrtBCI, (emlrtConstCTX)sp);
        }
        count = z_r[b_j - 1];
        if (count >= data_tw[loop_ub - 1]) {
          if (b_j > z_r.size(1)) {
            emlrtDynamicBoundsCheckR2012b(b_j, 1, z_r.size(1), &bt_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (i3 > 32767) {
            i3 = 32767;
          }
          if ((i3 < 1) || (i3 > data_tw.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, data_tw.size(0), &ct_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          varargin_1_idx_1 = data_tw[(i3 + data_tw.size(0)) - 1];
          if (count > varargin_1_idx_1) {
            if (b_j > z_c.size(1)) {
              emlrtDynamicBoundsCheckR2012b(b_j, 1, z_c.size(1), &dt_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            z_c[b_j - 1] = varargin_1_idx_1;
          } else {
            if (b_j > z_c.size(1)) {
              emlrtDynamicBoundsCheckR2012b(b_j, 1, z_c.size(1), &dt_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            z_c[b_j - 1] = count;
          }
        } else {
          if (i3 > 32767) {
            i3 = 32767;
          }
          if ((i3 < 1) || (i3 > data_tw.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, data_tw.size(0), &ws_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (b_j > z_c.size(1)) {
            emlrtDynamicBoundsCheckR2012b(b_j, 1, z_c.size(1), &xs_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          z_c[b_j - 1] = data_tw[i3 - 1];
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (r_time.size(1) < 1) {
      i = 0;
    } else {
      if (a_r_time.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, a_r_time.size(1), &gr_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (r_time.size(1) > a_r_time.size(1)) {
        emlrtDynamicBoundsCheckR2012b(r_time.size(1), 1, a_r_time.size(1),
                                      &hr_emlrtBCI, (emlrtConstCTX)sp);
      }
      i = r_time.size(1);
    }
    i3 = static_cast<int32_T>(route_ind_data[k]);
    if ((i3 < 1) || (i3 > a_r_time.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, a_r_time.size(0), &fr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    iv[0] = 1;
    iv[1] = i;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r_time.size(), 2, &t_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = r_time.size(1);
    for (i = 0; i < loop_ub; i++) {
      a_r_time[(static_cast<int32_T>(route_ind_data[k]) +
                a_r_time.size(0) * i) -
               1] = r_time[i];
    }
    if (r_time.size(1) < 1) {
      i = 0;
    } else {
      if (a_c_time.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, a_c_time.size(1), &sr_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (r_time.size(1) > a_c_time.size(1)) {
        emlrtDynamicBoundsCheckR2012b(r_time.size(1), 1, a_c_time.size(1),
                                      &tr_emlrtBCI, (emlrtConstCTX)sp);
      }
      i = r_time.size(1);
    }
    i3 = static_cast<int32_T>(route_ind_data[k]);
    if ((i3 < 1) || (i3 > a_c_time.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, a_c_time.size(0), &rr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    iv[0] = 1;
    iv[1] = i;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, a_c.size(), 2, &x_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = a_c.size(1);
    for (i = 0; i < loop_ub; i++) {
      a_c_time[(static_cast<int32_T>(route_ind_data[k]) +
                a_c_time.size(0) * i) -
               1] = a_c[i];
    }
    if (r_time.size(1) < 1) {
      i = 0;
    } else {
      if (z_r_time.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, z_r_time.size(1), &mr_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (r_time.size(1) > z_r_time.size(1)) {
        emlrtDynamicBoundsCheckR2012b(r_time.size(1), 1, z_r_time.size(1),
                                      &nr_emlrtBCI, (emlrtConstCTX)sp);
      }
      i = r_time.size(1);
    }
    i3 = static_cast<int32_T>(route_ind_data[k]);
    if ((i3 < 1) || (i3 > z_r_time.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, z_r_time.size(0), &lr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    iv[0] = 1;
    iv[1] = i;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, z_r.size(), 2, &v_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = z_r.size(1);
    for (i = 0; i < loop_ub; i++) {
      z_r_time[(static_cast<int32_T>(route_ind_data[k]) +
                z_r_time.size(0) * i) -
               1] = z_r[i];
    }
    if (r_time.size(1) < 1) {
      i = 0;
    } else {
      if (z_c_time.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, z_c_time.size(1), &vr_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (r_time.size(1) > z_c_time.size(1)) {
        emlrtDynamicBoundsCheckR2012b(r_time.size(1), 1, z_c_time.size(1),
                                      &wr_emlrtBCI, (emlrtConstCTX)sp);
      }
      i = r_time.size(1);
    }
    i3 = static_cast<int32_T>(route_ind_data[k]);
    if ((i3 < 1) || (i3 > z_c_time.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, z_c_time.size(0), &ur_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    iv[0] = 1;
    iv[1] = i;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, z_c.size(), 2, &y_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = z_c.size(1);
    for (i = 0; i < loop_ub; i++) {
      z_c_time[(static_cast<int32_T>(route_ind_data[k]) +
                z_c_time.size(0) * i) -
               1] = z_c[i];
    }
    if (r_time.size(1) < 1) {
      loop_ub = 0;
    } else {
      if (a_r_time.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, a_r_time.size(1), &jr_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (r_time.size(1) > a_r_time.size(1)) {
        emlrtDynamicBoundsCheckR2012b(r_time.size(1), 1, a_r_time.size(1),
                                      &kr_emlrtBCI, (emlrtConstCTX)sp);
      }
      loop_ub = r_time.size(1);
    }
    i = static_cast<int32_T>(route_ind_data[k]);
    if ((i < 1) || (i > a_r_time.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, a_r_time.size(0), &ir_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    r1.set_size(&vg_emlrtRTEI, sp, r.size(1));
    d_loop_ub = r.size(1);
    for (i = 0; i < d_loop_ub; i++) {
      i3 = r[i] + 1;
      if (i3 > 32767) {
        i3 = 32767;
      }
      r1[i] = static_cast<int16_T>(i3);
    }
    d_loop_ub = r1.size(0);
    for (i = 0; i < d_loop_ub; i++) {
      if ((r1[i] < 1) || (r1[i] > b_data_tw)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(r1[i]), 1, b_data_tw,
                                      &gt_emlrtBCI, (emlrtConstCTX)sp);
      }
    }
    if ((loop_ub != r1.size(0)) && ((loop_ub != 1) && (r1.size(0) != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, r1.size(0), &u_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (loop_ub == r1.size(0)) {
      a_c.set_size(&wg_emlrtRTEI, sp, 1, loop_ub);
      for (i = 0; i < loop_ub; i++) {
        a_c[i] = a_r_time[(static_cast<int32_T>(route_ind_data[k]) +
                           a_r_time.size(0) * i) -
                          1] -
                 data_tw[(r1[i] + data_tw.size(0)) - 1];
      }
    } else {
      st.site = &ph_emlrtRSI;
      binary_expand_op(&st, a_c, a_r_time, route_ind_data, k, loop_ub, data_tw,
                       r1);
    }
    d_loop_ub = a_c.size(1);
    for (loop_ub = 0; loop_ub < d_loop_ub; loop_ub++) {
      if (a_c[loop_ub] < 0.0) {
        if (loop_ub + 1 > a_c.size(1)) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, a_c.size(1),
                                        &ht_emlrtBCI, (emlrtConstCTX)sp);
        }
        a_c[loop_ub] = 0.0;
      }
    }
    count = 0.0;
    i = a_c.size(1);
    for (int32_T j{0}; j < i; j++) {
      if (j + 1 > a_c.size(1)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, a_c.size(1), &it_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      count += a_c[j];
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > tw_forward.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                      tw_forward.size(0), &jt_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j + 1 > tw_forward.size(1)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, tw_forward.size(1),
                                      &kt_emlrtBCI, (emlrtConstCTX)sp);
      }
      tw_forward[(static_cast<int32_T>(d) + tw_forward.size(0) * j) - 1] =
          count;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (r_time.size(1) < 1) {
      i = 0;
    } else {
      if (z_r_time.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, z_r_time.size(1), &pr_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (r_time.size(1) > z_r_time.size(1)) {
        emlrtDynamicBoundsCheckR2012b(r_time.size(1), 1, z_r_time.size(1),
                                      &qr_emlrtBCI, (emlrtConstCTX)sp);
      }
      i = r_time.size(1);
    }
    loop_ub = r1.size(0);
    for (i3 = 0; i3 < loop_ub; i3++) {
      if ((r1[i3] < 1) || (r1[i3] > c_data_tw)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(r1[i3]), 1,
                                      c_data_tw, &lt_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    i3 = static_cast<int32_T>(route_ind_data[k]);
    if ((i3 < 1) || (i3 > z_r_time.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, z_r_time.size(0), &or_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((r1.size(0) != i) && ((r1.size(0) != 1) && (i != 1))) {
      emlrtDimSizeImpxCheckR2021b(r1.size(0), i, &w_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (r1.size(0) == i) {
      a_c.set_size(&xg_emlrtRTEI, sp, 1, r1.size(0));
      loop_ub = r1.size(0);
      for (i = 0; i < loop_ub; i++) {
        a_c[i] = data_tw[r1[i] - 1] -
                 z_r_time[(static_cast<int32_T>(route_ind_data[k]) +
                           z_r_time.size(0) * i) -
                          1];
      }
    } else {
      st.site = &oh_emlrtRSI;
      binary_expand_op(&st, a_c, data_tw, r1, z_r_time, route_ind_data, k, i);
    }
    d_loop_ub = a_c.size(1);
    for (loop_ub = 0; loop_ub < d_loop_ub; loop_ub++) {
      if (a_c[loop_ub] < 0.0) {
        if (loop_ub + 1 > a_c.size(1)) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, a_c.size(1),
                                        &mt_emlrtBCI, (emlrtConstCTX)sp);
        }
        a_c[loop_ub] = 0.0;
      }
    }
    count = 0.0;
    i = a_c.size(1);
    emlrtForLoopVectorCheckR2021a(static_cast<real_T>(a_c.size(1)), -1.0, 1.0,
                                  mxDOUBLE_CLASS, a_c.size(1), &n_emlrtRTEI,
                                  (emlrtConstCTX)sp);
    for (int32_T j{0}; j < i; j++) {
      b_j = a_c.size(1) - j;
      if ((b_j < 1) || (b_j > a_c.size(1))) {
        emlrtDynamicBoundsCheckR2012b(b_j, 1, a_c.size(1), &nt_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      count += a_c[b_j - 1];
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > tw_backward.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                      tw_backward.size(0), &ot_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_j > tw_backward.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_j, 1, tw_backward.size(1), &pt_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      tw_backward[(static_cast<int32_T>(d) + tw_backward.size(0) * (b_j - 1)) -
                  1] = count;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  切片返回
  loop_ub = route_ind_size[0] * route_ind_size[1];
  for (i = 0; i < loop_ub; i++) {
    i1 = static_cast<int32_T>(route_ind_data[i]);
    if ((i1 < 1) || (i1 > a_r_time.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, a_r_time.size(0), &yr_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_route_ind_data[i] = static_cast<uint32_T>(i1);
  }
  loop_ub = route_ind_size[0] * route_ind_size[1];
  d_loop_ub = a_r_time.size(1);
  b_a_r_time.set_size(&yg_emlrtRTEI, sp, loop_ub, a_r_time.size(1));
  for (i = 0; i < d_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_a_r_time[i1 + b_a_r_time.size(0) * i] =
          a_r_time[(static_cast<int32_T>(b_route_ind_data[i1]) +
                    a_r_time.size(0) * i) -
                   1];
    }
  }
  a_r_time.set_size(&ah_emlrtRTEI, sp, b_a_r_time.size(0), b_a_r_time.size(1));
  loop_ub = b_a_r_time.size(0) * b_a_r_time.size(1);
  for (i = 0; i < loop_ub; i++) {
    a_r_time[i] = b_a_r_time[i];
  }
  loop_ub = route_ind_size[0] * route_ind_size[1];
  for (i = 0; i < loop_ub; i++) {
    i1 = static_cast<int32_T>(route_ind_data[i]);
    if ((i1 < 1) || (i1 > a_c_time.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, a_c_time.size(0), &as_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_route_ind_data[i] = static_cast<uint32_T>(i1);
  }
  loop_ub = route_ind_size[0] * route_ind_size[1];
  d_loop_ub = a_c_time.size(1);
  b_a_r_time.set_size(&bh_emlrtRTEI, sp, loop_ub, a_c_time.size(1));
  for (i = 0; i < d_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_a_r_time[i1 + b_a_r_time.size(0) * i] =
          a_c_time[(static_cast<int32_T>(b_route_ind_data[i1]) +
                    a_c_time.size(0) * i) -
                   1];
    }
  }
  a_c_time.set_size(&ch_emlrtRTEI, sp, b_a_r_time.size(0), b_a_r_time.size(1));
  loop_ub = b_a_r_time.size(0) * b_a_r_time.size(1);
  for (i = 0; i < loop_ub; i++) {
    a_c_time[i] = b_a_r_time[i];
  }
  loop_ub = route_ind_size[0] * route_ind_size[1];
  for (i = 0; i < loop_ub; i++) {
    i1 = static_cast<int32_T>(route_ind_data[i]);
    if ((i1 < 1) || (i1 > z_r_time.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, z_r_time.size(0), &bs_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_route_ind_data[i] = static_cast<uint32_T>(i1);
  }
  loop_ub = route_ind_size[0] * route_ind_size[1];
  d_loop_ub = z_r_time.size(1);
  b_a_r_time.set_size(&dh_emlrtRTEI, sp, loop_ub, z_r_time.size(1));
  for (i = 0; i < d_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_a_r_time[i1 + b_a_r_time.size(0) * i] =
          z_r_time[(static_cast<int32_T>(b_route_ind_data[i1]) +
                    z_r_time.size(0) * i) -
                   1];
    }
  }
  z_r_time.set_size(&eh_emlrtRTEI, sp, b_a_r_time.size(0), b_a_r_time.size(1));
  loop_ub = b_a_r_time.size(0) * b_a_r_time.size(1);
  for (i = 0; i < loop_ub; i++) {
    z_r_time[i] = b_a_r_time[i];
  }
  loop_ub = route_ind_size[0] * route_ind_size[1];
  for (i = 0; i < loop_ub; i++) {
    i1 = static_cast<int32_T>(route_ind_data[i]);
    if ((i1 < 1) || (i1 > z_c_time.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, z_c_time.size(0), &at_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_route_ind_data[i] = static_cast<uint32_T>(i1);
  }
  loop_ub = route_ind_size[0] * route_ind_size[1];
  d_loop_ub = z_c_time.size(1);
  b_a_r_time.set_size(&fh_emlrtRTEI, sp, loop_ub, z_c_time.size(1));
  for (i = 0; i < d_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_a_r_time[i1 + b_a_r_time.size(0) * i] =
          z_c_time[(static_cast<int32_T>(b_route_ind_data[i1]) +
                    z_c_time.size(0) * i) -
                   1];
    }
  }
  z_c_time.set_size(&gh_emlrtRTEI, sp, b_a_r_time.size(0), b_a_r_time.size(1));
  loop_ub = b_a_r_time.size(0) * b_a_r_time.size(1);
  for (i = 0; i < loop_ub; i++) {
    z_c_time[i] = b_a_r_time[i];
  }
  loop_ub = route_ind_size[0] * route_ind_size[1];
  for (i = 0; i < loop_ub; i++) {
    i1 = static_cast<int32_T>(route_ind_data[i]);
    if ((i1 < 1) || (i1 > tw_forward.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, tw_forward.size(0), &et_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_route_ind_data[i] = static_cast<uint32_T>(i1);
  }
  loop_ub = route_ind_size[0] * route_ind_size[1];
  d_loop_ub = tw_forward.size(1);
  b_a_r_time.set_size(&hh_emlrtRTEI, sp, loop_ub, tw_forward.size(1));
  for (i = 0; i < d_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_a_r_time[i1 + b_a_r_time.size(0) * i] =
          tw_forward[(static_cast<int32_T>(b_route_ind_data[i1]) +
                      tw_forward.size(0) * i) -
                     1];
    }
  }
  tw_forward.set_size(&ih_emlrtRTEI, sp, b_a_r_time.size(0),
                      b_a_r_time.size(1));
  loop_ub = b_a_r_time.size(0) * b_a_r_time.size(1);
  for (i = 0; i < loop_ub; i++) {
    tw_forward[i] = b_a_r_time[i];
  }
  loop_ub = route_ind_size[0] * route_ind_size[1];
  for (i = 0; i < loop_ub; i++) {
    i1 = static_cast<int32_T>(route_ind_data[i]);
    if ((i1 < 1) || (i1 > tw_backward.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, tw_backward.size(0), &ft_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_route_ind_data[i] = static_cast<uint32_T>(i1);
  }
  loop_ub = route_ind_size[0] * route_ind_size[1];
  d_loop_ub = tw_backward.size(1);
  b_a_r_time.set_size(&jh_emlrtRTEI, sp, loop_ub, tw_backward.size(1));
  for (i = 0; i < d_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_a_r_time[i1 + b_a_r_time.size(0) * i] =
          tw_backward[(static_cast<int32_T>(b_route_ind_data[i1]) +
                       tw_backward.size(0) * i) -
                      1];
    }
  }
  tw_backward.set_size(&kh_emlrtRTEI, sp, b_a_r_time.size(0),
                       b_a_r_time.size(1));
  loop_ub = b_a_r_time.size(0) * b_a_r_time.size(1);
  for (i = 0; i < loop_ub; i++) {
    tw_backward[i] = b_a_r_time[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (calculate_time.cpp)
