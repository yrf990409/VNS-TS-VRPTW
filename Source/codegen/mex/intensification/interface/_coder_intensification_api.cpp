//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_intensification_api.cpp
//
// Code generation for function '_coder_intensification_api'
//

// Include files
#include "_coder_intensification_api.h"
#include "intensification.h"
#include "intensification_data.h"
#include "intensification_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<int16_T, 2U> &y);

static int8_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static struct3_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<int16_T, 2U> &ret);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<boolean_T, 2U> &y);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<int16_T, 2U> &ret);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static int16_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *data,
                             const char_T *identifier, struct1_T *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct1_T *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 2U> &y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct0_T *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<int16_T, 2U> &y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *sol_info,
                             const char_T *identifier, struct0_T *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *param_pen,
                             const char_T *identifier, struct2_T *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct2_T *y);

static struct3_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *param_ts,
                                  const char_T *identifier);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *tabu_list,
                             const char_T *identifier,
                             coder::array<int16_T, 2U> &y);

static const mxArray *emlrt_marshallOut(const coder::array<int16_T, 2U> &u);

static const mxArray *emlrt_marshallOut(const struct2_T *u);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u);

static const mxArray *emlrt_marshallOut(const struct0_T *u);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static int8_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<boolean_T, 2U> &ret);

static int16_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<int16_T, 2U> &y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static int8_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  int8_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret)
{
  static const int32_T dims{-1};
  int32_T i;
  const boolean_T b{true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, i);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &(ret.data())[0], 8, false);
  emlrtDestroyArray(&src);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static struct3_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[4]{"theta_min", "theta_max", "lambda_div",
                                     "eta_tabu"};
  emlrtMsgIdentifier thisId;
  struct3_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 4,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "theta_min";
  y.theta_min = e_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "theta_min")),
      &thisId);
  thisId.fIdentifier = "theta_max";
  y.theta_max = e_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "theta_max")),
      &thisId);
  thisId.fIdentifier = "lambda_div";
  y.lambda_div = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "lambda_div")),
      &thisId);
  thisId.fIdentifier = "eta_tabu";
  y.eta_tabu = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "eta_tabu")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<int16_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, -1};
  int32_T iv[2];
  const boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int16", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 2, false);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<boolean_T, 2U> &y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<int16_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, 2};
  int32_T iv[2];
  const boolean_T bv[2]{true, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int16", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.prealloc(iv[0] * iv[1]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  ret.set(static_cast<int16_T *>(emlrtMxGetData(src)), ret.size(0),
          ret.size(1));
  emlrtDestroyArray(&src);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, -1};
  int32_T iv[2];
  const boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static int16_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId)
{
  int16_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[9]{"routes",      "a_r_time", "a_c_time",
                                     "z_r_time",    "z_c_time", "tw_forward",
                                     "tw_backward", "payload",  "cost"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 9,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "routes";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "routes")),
      &thisId, y->routes);
  thisId.fIdentifier = "a_r_time";
  emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "a_r_time")),
      &thisId, y->a_r_time);
  thisId.fIdentifier = "a_c_time";
  emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "a_c_time")),
      &thisId, y->a_c_time);
  thisId.fIdentifier = "z_r_time";
  emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "z_r_time")),
      &thisId, y->z_r_time);
  thisId.fIdentifier = "z_c_time";
  emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "z_c_time")),
      &thisId, y->z_c_time);
  thisId.fIdentifier = "tw_forward";
  emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "tw_forward")),
      &thisId, y->tw_forward);
  thisId.fIdentifier = "tw_backward";
  emlrt_marshallIn(sp,
                   emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6,
                                                  "tw_backward")),
                   &thisId, y->tw_backward);
  thisId.fIdentifier = "payload";
  emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "payload")),
      &thisId, y->payload);
  thisId.fIdentifier = "cost";
  b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "cost")),
      &thisId, y->cost);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *data,
                             const char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(data), &thisId, y);
  emlrtDestroyArray(&data);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct1_T *y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[8]{"coord", "dmd", "tw",   "st",
                                     "dist",  "cap", "vnum", "arc"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 8,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "coord";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "coord")),
      &thisId, y->coord);
  thisId.fIdentifier = "dmd";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "dmd")),
      &thisId, y->dmd);
  thisId.fIdentifier = "tw";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "tw")),
      &thisId, y->tw);
  thisId.fIdentifier = "st";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "st")),
      &thisId, y->st);
  thisId.fIdentifier = "dist";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "dist")),
      &thisId, y->dist);
  thisId.fIdentifier = "cap";
  y->cap = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "cap")),
      &thisId);
  thisId.fIdentifier = "vnum";
  y->vnum = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "vnum")),
      &thisId);
  thisId.fIdentifier = "arc";
  d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "arc")),
      &thisId, y->arc);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 2U> &y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *sol_info,
                             const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(sol_info), &thisId, y);
  emlrtDestroyArray(&sol_info);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<int16_T, 2U> &y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *param_pen,
                             const char_T *identifier, struct2_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(param_pen), &thisId, y);
  emlrtDestroyArray(&param_pen);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct2_T *y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[9]{"alpha_0",  "beta_0",    "alpha_min",
                                     "beta_min", "alpha_max", "beta_max",
                                     "delta",    "eta_pen",   "pool_size"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 9,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "alpha_0";
  y->alpha_0 = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "alpha_0")),
      &thisId);
  thisId.fIdentifier = "beta_0";
  y->beta_0 = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "beta_0")),
      &thisId);
  thisId.fIdentifier = "alpha_min";
  y->alpha_min = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "alpha_min")),
      &thisId);
  thisId.fIdentifier = "beta_min";
  y->beta_min = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "beta_min")),
      &thisId);
  thisId.fIdentifier = "alpha_max";
  y->alpha_max = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "alpha_max")),
      &thisId);
  thisId.fIdentifier = "beta_max";
  y->beta_max = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "beta_max")),
      &thisId);
  thisId.fIdentifier = "delta";
  y->delta = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "delta")),
      &thisId);
  thisId.fIdentifier = "eta_pen";
  y->eta_pen = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "eta_pen")),
      &thisId);
  thisId.fIdentifier = "pool_size";
  y->pool_size = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "pool_size")),
      &thisId);
  emlrtDestroyArray(&u);
}

static struct3_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *param_ts,
                                  const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct3_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(param_ts), &thisId);
  emlrtDestroyArray(&param_ts);
  return y;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *tabu_list,
                             const char_T *identifier,
                             coder::array<int16_T, 2U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(tabu_list), &thisId, y);
  emlrtDestroyArray(&tabu_list);
}

static const mxArray *emlrt_marshallOut(const coder::array<int16_T, 2U> &u)
{
  static const int32_T iv[2]{0, 0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxINT16_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<int16_T, 2U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<int16_T, 2U> *)&u)->size(),
                     2);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const struct2_T *u)
{
  static const char_T *sv[9]{"alpha_0",  "beta_0",    "alpha_min",
                             "beta_min", "alpha_max", "beta_max",
                             "delta",    "eta_pen",   "pool_size"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&sv[0]));
  b_y = nullptr;
  m = emlrtCreateDoubleScalar(u->alpha_0);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "alpha_0", b_y, 0);
  c_y = nullptr;
  m = emlrtCreateDoubleScalar(u->beta_0);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "beta_0", c_y, 1);
  d_y = nullptr;
  m = emlrtCreateDoubleScalar(u->alpha_min);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "alpha_min", d_y, 2);
  e_y = nullptr;
  m = emlrtCreateDoubleScalar(u->beta_min);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "beta_min", e_y, 3);
  f_y = nullptr;
  m = emlrtCreateDoubleScalar(u->alpha_max);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "alpha_max", f_y, 4);
  g_y = nullptr;
  m = emlrtCreateDoubleScalar(u->beta_max);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "beta_max", g_y, 5);
  h_y = nullptr;
  m = emlrtCreateDoubleScalar(u->delta);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, "delta", h_y, 6);
  i_y = nullptr;
  m = emlrtCreateDoubleScalar(u->eta_pen);
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, "eta_pen", i_y, 7);
  j_y = nullptr;
  m = emlrtCreateDoubleScalar(u->pool_size);
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, "pool_size", j_y, 8);
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T i;
  y = nullptr;
  iv[0] = u.size(0);
  iv[1] = u.size(1);
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(1); b_i++) {
    for (int32_T c_i{0}; c_i < u.size(0); c_i++) {
      pData[i] = u[c_i + u.size(0) * b_i];
      i++;
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const struct0_T *u)
{
  static const char_T *sv[9]{"routes",      "a_r_time", "a_c_time",
                             "z_r_time",    "z_c_time", "tw_forward",
                             "tw_backward", "payload",  "cost"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  real_T *b_pData;
  int32_T iv[2];
  int32_T i;
  int16_T *pData;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&sv[0]));
  b_y = nullptr;
  iv[0] = u->routes.size(0);
  iv[1] = u->routes.size(1);
  m = emlrtCreateNumericArray(2, &iv[0], mxINT16_CLASS, mxREAL);
  pData = static_cast<int16_T *>(emlrtMxGetData(m));
  i = 0;
  for (int32_T b_i{0}; b_i < u->routes.size(1); b_i++) {
    for (int32_T c_i{0}; c_i < u->routes.size(0); c_i++) {
      pData[i] = u->routes[c_i + u->routes.size(0) * b_i];
      i++;
    }
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "routes", b_y, 0);
  emlrtSetFieldR2017b(y, 0, "a_r_time", emlrt_marshallOut(u->a_r_time), 1);
  emlrtSetFieldR2017b(y, 0, "a_c_time", emlrt_marshallOut(u->a_c_time), 2);
  emlrtSetFieldR2017b(y, 0, "z_r_time", emlrt_marshallOut(u->z_r_time), 3);
  emlrtSetFieldR2017b(y, 0, "z_c_time", emlrt_marshallOut(u->z_c_time), 4);
  emlrtSetFieldR2017b(y, 0, "tw_forward", emlrt_marshallOut(u->tw_forward), 5);
  emlrtSetFieldR2017b(y, 0, "tw_backward", emlrt_marshallOut(u->tw_backward),
                      6);
  c_y = nullptr;
  m = emlrtCreateNumericArray(1,
                              ((coder::array<real_T, 1U> *)&u->payload)->size(),
                              mxDOUBLE_CLASS, mxREAL);
  b_pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u->payload.size(0); b_i++) {
    b_pData[i] = u->payload[b_i];
    i++;
  }
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "payload", c_y, 7);
  d_y = nullptr;
  iv[0] = u->cost.size(0);
  iv[1] = 3;
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  b_pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u->cost.size(0); b_i++) {
    b_pData[i] = u->cost[b_i];
    i++;
  }
  for (int32_T b_i{0}; b_i < u->cost.size(0); b_i++) {
    b_pData[i] = u->cost[b_i + u->cost.size(0)];
    i++;
  }
  for (int32_T b_i{0}; b_i < u->cost.size(0); b_i++) {
    b_pData[i] = u->cost[b_i + u->cost.size(0) * 2];
    i++;
  }
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "cost", d_y, 8);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, 3};
  int32_T iv[2];
  const boolean_T bv[2]{true, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, 2};
  int32_T iv[2];
  const boolean_T bv[2]{true, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static int8_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  int8_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int8", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<int8_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<boolean_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, -1};
  int32_T iv[2];
  const boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "logical", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 1, false);
  emlrtDestroyArray(&src);
}

static int16_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  int16_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int16", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<int16_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

void intensification_api(const mxArray *const prhs[5], int32_T nlhs,
                         const mxArray *plhs[3])
{
  coder::array<int16_T, 2U> new_tabu_list;
  coder::array<int16_T, 2U> tabu_list;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *prhs_copy_idx_4;
  struct0_T best_sol_info;
  struct0_T sol_info;
  struct1_T data;
  struct2_T new_param_pen;
  struct2_T param_pen;
  struct3_T param_ts;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  prhs_copy_idx_4 = emlrtProtectR2012b(prhs[4], 4, false, -1);
  // Marshall function inputs
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "sol_info", &sol_info);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "data", &data);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "param_pen", &param_pen);
  param_ts = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "param_ts");
  tabu_list.no_free();
  emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_4), "tabu_list", tabu_list);
  // Invoke the target function
  intensification(&st, &sol_info, &data, &param_pen, &param_ts, tabu_list,
                  &best_sol_info, &new_param_pen, new_tabu_list);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(&best_sol_info);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(&new_param_pen);
  }
  if (nlhs > 2) {
    new_tabu_list.no_free();
    plhs[2] = emlrt_marshallOut(new_tabu_list);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_intensification_api.cpp)
