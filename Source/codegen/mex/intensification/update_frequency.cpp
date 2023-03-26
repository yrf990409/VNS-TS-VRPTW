//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// update_frequency.cpp
//
// Code generation for function 'update_frequency'
//

// Include files
#include "update_frequency.h"
#include "intensification_data.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo j_emlrtRSI{
    7,                  // lineNo
    "update_frequency", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/u"
    "pdate_frequency.m" // pathName
};

static emlrtBCInfo cu_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    6,                  // lineNo
    20,                 // colNo
    "new_routes",       // aName
    "update_frequency", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/u"
    "pdate_frequency.m", // pName
    0                    // checkKind
};

static emlrtBCInfo du_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    8,                  // lineNo
    32,                 // colNo
    "frequency",        // aName
    "update_frequency", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/u"
    "pdate_frequency.m", // pName
    0                    // checkKind
};

static emlrtBCInfo eu_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    8,                  // lineNo
    15,                 // colNo
    "frequency",        // aName
    "update_frequency", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/u"
    "pdate_frequency.m", // pName
    0                    // checkKind
};

static emlrtECInfo ab_emlrtECI{
    -1,                 // nDims
    8,                  // lineNo
    5,                  // colNo
    "update_frequency", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/u"
    "pdate_frequency.m" // pName
};

static emlrtBCInfo fu_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    8,                  // lineNo
    17,                 // colNo
    "frequency",        // aName
    "update_frequency", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/u"
    "pdate_frequency.m", // pName
    0                    // checkKind
};

static emlrtBCInfo gu_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    8,                  // lineNo
    34,                 // colNo
    "frequency",        // aName
    "update_frequency", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/u"
    "pdate_frequency.m", // pName
    0                    // checkKind
};

static emlrtRTEInfo uh_emlrtRTEI{
    7,                  // lineNo
    5,                  // colNo
    "update_frequency", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/u"
    "pdate_frequency.m" // pName
};

static emlrtRTEInfo vh_emlrtRTEI{
    7,                  // lineNo
    7,                  // colNo
    "update_frequency", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/u"
    "pdate_frequency.m" // pName
};

static emlrtRTEInfo wh_emlrtRTEI{
    8,                  // lineNo
    17,                 // colNo
    "update_frequency", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/u"
    "pdate_frequency.m" // pName
};

static emlrtRTEInfo xh_emlrtRTEI{
    8,                  // lineNo
    22,                 // colNo
    "update_frequency", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/u"
    "pdate_frequency.m" // pName
};

static emlrtRTEInfo fj_emlrtRTEI{
    6,                  // lineNo
    5,                  // colNo
    "update_frequency", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/u"
    "pdate_frequency.m" // pName
};

// Function Definitions
void update_frequency(const emlrtStack *sp, coder::array<real_T, 2U> &frequency,
                      const coder::array<int16_T, 3U> &new_routes)
{
  coder::array<real_T, 2U> c_frequency;
  coder::array<int16_T, 2U> r;
  coder::array<int16_T, 1U> r1;
  coder::array<int16_T, 1U> r2;
  coder::array<boolean_T, 2U> b_r;
  emlrtStack st;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T b_frequency;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  频率更新函数
  //  给定旧的频率和新的路线 计算新的频率
  loop_ub = new_routes.size(1) * new_routes.size(2);
  r.set_size(&fj_emlrtRTEI, sp, 1, loop_ub);
  for (i = 0; i < loop_ub; i++) {
    r[i] = new_routes[i];
  }
  b_r.set_size(&vh_emlrtRTEI, sp, 1, r.size(1));
  loop_ub = r.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_r[i] = (r[i] == 0);
  }
  st.site = &j_emlrtRSI;
  coder::internal::nullAssignment(&st, r, b_r);
  //  去掉仓库和0
  i = frequency.size(0);
  if (i < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i, &eu_emlrtBCI, (emlrtConstCTX)sp);
  }
  r1.set_size(&wh_emlrtRTEI, sp, r.size(1));
  loop_ub = r.size(1);
  for (i = 0; i < loop_ub; i++) {
    r1[i] = r[i];
  }
  b_frequency = frequency.size(1);
  r2.set_size(&wh_emlrtRTEI, sp, r1.size(0));
  loop_ub = r1.size(0);
  for (i = 0; i < loop_ub; i++) {
    if ((r1[i] < 1) || (r1[i] > b_frequency)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(r1[i]), 1, b_frequency,
                                    &fu_emlrtBCI, (emlrtConstCTX)sp);
    }
    r2[i] = static_cast<int16_T>(r1[i] - 1);
  }
  i = frequency.size(0);
  if (i < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i, &du_emlrtBCI, (emlrtConstCTX)sp);
  }
  b_frequency = frequency.size(1);
  loop_ub = r1.size(0);
  for (i = 0; i < loop_ub; i++) {
    if ((r1[i] < 1) || (r1[i] > b_frequency)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(r1[i]), 1, b_frequency,
                                    &gu_emlrtBCI, (emlrtConstCTX)sp);
    }
  }
  iv[0] = 1;
  iv[1] = r2.size(0);
  iv1[0] = 1;
  iv1[1] = r1.size(0);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &ab_emlrtECI,
                                (emlrtCTX)sp);
  c_frequency.set_size(&xh_emlrtRTEI, sp, 1, r1.size(0));
  loop_ub = r1.size(0);
  for (i = 0; i < loop_ub; i++) {
    c_frequency[i] = frequency[frequency.size(0) * (r1[i] - 1)] + 1.0;
  }
  loop_ub = c_frequency.size(1);
  for (i = 0; i < loop_ub; i++) {
    frequency[frequency.size(0) * r2[i]] = c_frequency[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void update_frequency(const emlrtStack *sp, coder::array<real_T, 2U> &frequency,
                      const coder::array<int16_T, 2U> &new_routes)
{
  coder::array<real_T, 2U> c_frequency;
  coder::array<int16_T, 2U> r;
  coder::array<int16_T, 1U> b_r;
  coder::array<int16_T, 1U> r1;
  coder::array<boolean_T, 2U> b_new_routes;
  emlrtStack st;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  频率更新函数
  //  给定旧的频率和新的路线 计算新的频率
  i = new_routes.size(0);
  if (new_routes.size(0) - 1 >= 0) {
    loop_ub = new_routes.size(1);
    iv[0] = 1;
    iv1[0] = 1;
  }
  for (int32_T b_i{0}; b_i < i; b_i++) {
    int32_T b_frequency;
    int32_T b_loop_ub;
    int32_T i1;
    if (b_i + 1 > new_routes.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, new_routes.size(0),
                                    &cu_emlrtBCI, (emlrtConstCTX)sp);
    }
    r.set_size(&uh_emlrtRTEI, sp, 1, new_routes.size(1));
    b_new_routes.set_size(&vh_emlrtRTEI, sp, 1, new_routes.size(1));
    for (i1 = 0; i1 < loop_ub; i1++) {
      int16_T i2;
      i2 = new_routes[b_i + new_routes.size(0) * i1];
      r[i1] = i2;
      b_new_routes[i1] = (i2 == 0);
    }
    st.site = &j_emlrtRSI;
    coder::internal::nullAssignment(&st, r, b_new_routes);
    //  去掉仓库和0
    i1 = frequency.size(0);
    if (b_i + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &eu_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_r.set_size(&wh_emlrtRTEI, sp, r.size(1));
    b_loop_ub = r.size(1);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_r[i1] = r[i1];
    }
    b_frequency = frequency.size(1);
    r1.set_size(&wh_emlrtRTEI, sp, b_r.size(0));
    b_loop_ub = b_r.size(0);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      if ((b_r[i1] < 1) || (b_r[i1] > b_frequency)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_r[i1]), 1,
                                      b_frequency, &fu_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      r1[i1] = static_cast<int16_T>(b_r[i1] - 1);
    }
    i1 = frequency.size(0);
    if (b_i + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &du_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_frequency = frequency.size(1);
    b_loop_ub = b_r.size(0);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      if ((b_r[i1] < 1) || (b_r[i1] > b_frequency)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_r[i1]), 1,
                                      b_frequency, &gu_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    iv[1] = r1.size(0);
    iv1[1] = b_r.size(0);
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &ab_emlrtECI,
                                  (emlrtCTX)sp);
    c_frequency.set_size(&xh_emlrtRTEI, sp, 1, b_r.size(0));
    b_loop_ub = b_r.size(0);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      c_frequency[i1] =
          frequency[b_i + frequency.size(0) * (b_r[i1] - 1)] + 1.0;
    }
    b_loop_ub = c_frequency.size(1);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      frequency[b_i + frequency.size(0) * r1[i1]] = c_frequency[i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (update_frequency.cpp)
