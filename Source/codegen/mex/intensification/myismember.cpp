//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// myismember.cpp
//
// Code generation for function 'myismember'
//

// Include files
#include "myismember.h"
#include "any1.h"
#include "intensification_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo ic_emlrtRSI{
    7,            // lineNo
    "myismember", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/m"
    "yismember.m" // pathName
};

static emlrtBCInfo l_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    7,            // lineNo
    14,           // colNo
    "b",          // aName
    "myismember", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/m"
    "yismember.m", // pName
    0              // checkKind
};

static emlrtRTEInfo qb_emlrtRTEI{
    1,            // lineNo
    17,           // colNo
    "myismember", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/m"
    "yismember.m" // pName
};

// Function Definitions
boolean_T b_myismember(const emlrtStack *sp, const int16_T a[8],
                       const coder::array<int16_T, 2U> &b)
{
  coder::array<int32_T, 1U> r;
  coder::array<boolean_T, 1U> b_ind_left_data;
  emlrtStack st;
  int32_T i;
  boolean_T ind_left_data[32767];
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // MYISMEMBER 个人ismember
  //  a和b只能是两列
  i = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (i < 4) {
      int32_T ind_left_size;
      int32_T loop_ub;
      ind_left_size = b.size(0);
      loop_ub = b.size(0);
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        ind_left_data[b_i] = (b[b_i] == a[i]);
      }
      loop_ub = ind_left_size - 1;
      ind_left_size = 0;
      for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
        if (ind_left_data[b_i]) {
          ind_left_size++;
        }
      }
      r.set_size(&qb_emlrtRTEI, sp, ind_left_size);
      ind_left_size = 0;
      for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
        if (ind_left_data[b_i]) {
          r[ind_left_size] = b_i + 1;
          ind_left_size++;
        }
      }
      ind_left_size = r.size(0);
      loop_ub = r.size(0);
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        if ((r[b_i] < 1) || (r[b_i] > b.size(0))) {
          emlrtDynamicBoundsCheckR2012b(r[b_i], 1, b.size(0), &l_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        ind_left_data[b_i] = (b[(r[b_i] + b.size(0)) - 1] == a[i + 4]);
      }
      b_ind_left_data.set(&ind_left_data[0], ind_left_size);
      st.site = &ic_emlrtRSI;
      if (coder::any(&st, b_ind_left_data)) {
        flag = true;
        exitg1 = 1;
      } else {
        i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    } else {
      flag = false;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return flag;
}

boolean_T c_myismember(const emlrtStack *sp, const int16_T a[4],
                       const coder::array<int16_T, 2U> &b)
{
  coder::array<int32_T, 1U> r;
  coder::array<boolean_T, 1U> b_ind_left_data;
  emlrtStack st;
  int32_T i;
  boolean_T ind_left_data[32767];
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // MYISMEMBER 个人ismember
  //  a和b只能是两列
  i = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (i < 2) {
      int32_T ind_left_size;
      int32_T loop_ub;
      ind_left_size = b.size(0);
      loop_ub = b.size(0);
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        ind_left_data[b_i] = (b[b_i] == a[i]);
      }
      loop_ub = ind_left_size - 1;
      ind_left_size = 0;
      for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
        if (ind_left_data[b_i]) {
          ind_left_size++;
        }
      }
      r.set_size(&qb_emlrtRTEI, sp, ind_left_size);
      ind_left_size = 0;
      for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
        if (ind_left_data[b_i]) {
          r[ind_left_size] = b_i + 1;
          ind_left_size++;
        }
      }
      ind_left_size = r.size(0);
      loop_ub = r.size(0);
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        if ((r[b_i] < 1) || (r[b_i] > b.size(0))) {
          emlrtDynamicBoundsCheckR2012b(r[b_i], 1, b.size(0), &l_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        ind_left_data[b_i] = (b[(r[b_i] + b.size(0)) - 1] == a[i + 2]);
      }
      b_ind_left_data.set(&ind_left_data[0], ind_left_size);
      st.site = &ic_emlrtRSI;
      if (coder::any(&st, b_ind_left_data)) {
        flag = true;
        exitg1 = 1;
      } else {
        i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    } else {
      flag = false;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return flag;
}

boolean_T myismember(const emlrtStack *sp, const int16_T a[6],
                     const coder::array<int16_T, 2U> &b)
{
  coder::array<int32_T, 1U> r;
  coder::array<boolean_T, 1U> b_ind_left_data;
  emlrtStack st;
  int32_T i;
  boolean_T ind_left_data[32767];
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // MYISMEMBER 个人ismember
  //  a和b只能是两列
  i = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (i < 3) {
      int32_T ind_left_size;
      int32_T loop_ub;
      ind_left_size = b.size(0);
      loop_ub = b.size(0);
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        ind_left_data[b_i] = (b[b_i] == a[i]);
      }
      loop_ub = ind_left_size - 1;
      ind_left_size = 0;
      for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
        if (ind_left_data[b_i]) {
          ind_left_size++;
        }
      }
      r.set_size(&qb_emlrtRTEI, sp, ind_left_size);
      ind_left_size = 0;
      for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
        if (ind_left_data[b_i]) {
          r[ind_left_size] = b_i + 1;
          ind_left_size++;
        }
      }
      ind_left_size = r.size(0);
      loop_ub = r.size(0);
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        if ((r[b_i] < 1) || (r[b_i] > b.size(0))) {
          emlrtDynamicBoundsCheckR2012b(r[b_i], 1, b.size(0), &l_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        ind_left_data[b_i] = (b[(r[b_i] + b.size(0)) - 1] == a[i + 3]);
      }
      b_ind_left_data.set(&ind_left_data[0], ind_left_size);
      st.site = &ic_emlrtRSI;
      if (coder::any(&st, b_ind_left_data)) {
        flag = true;
        exitg1 = 1;
      } else {
        i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    } else {
      flag = false;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return flag;
}

// End of code generation (myismember.cpp)
