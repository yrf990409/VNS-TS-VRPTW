//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// generate_ts_neighbor.cpp
//
// Code generation for function 'generate_ts_neighbor'
//

// Include files
#include "generate_ts_neighbor.h"
#include "intensification_data.h"
#include "intensification_types.h"
#include "rt_nonfinite.h"
#include "ts_inter_exchanging.h"
#include "ts_inter_relocating.h"
#include "ts_intro_exchanging.h"
#include "ts_intro_relocating.h"
#include "ts_two_optimization.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include "omp.h"

// Type Definitions
struct cell_wrap_0 {
  coder::array<int16_T, 2U> f1;
};

struct cell_wrap_1 {
  coder::bounded_array<real_T, 2U, 2U> f1;
};

// Variable Definitions
static emlrtRSInfo s_emlrtRSI{
    71,                     // lineNo
    "generate_ts_neighbor", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/g"
    "enerate_ts_neighbor.m" // pathName
};

static emlrtRSInfo t_emlrtRSI{
    61,                     // lineNo
    "generate_ts_neighbor", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/g"
    "enerate_ts_neighbor.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    51,                     // lineNo
    "generate_ts_neighbor", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/g"
    "enerate_ts_neighbor.m" // pathName
};

static emlrtRSInfo v_emlrtRSI{
    41,                     // lineNo
    "generate_ts_neighbor", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/g"
    "enerate_ts_neighbor.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    30,                     // lineNo
    "generate_ts_neighbor", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/g"
    "enerate_ts_neighbor.m" // pathName
};

static emlrtRTEInfo jb_emlrtRTEI{
    21,                     // lineNo
    19,                     // colNo
    "generate_ts_neighbor", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/g"
    "enerate_ts_neighbor.m" // pName
};

static emlrtRTEInfo kb_emlrtRTEI{
    21,                     // lineNo
    5,                      // colNo
    "generate_ts_neighbor", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/g"
    "enerate_ts_neighbor.m" // pName
};

static emlrtRTEInfo lb_emlrtRTEI{
    74,                     // lineNo
    9,                      // colNo
    "generate_ts_neighbor", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/g"
    "enerate_ts_neighbor.m" // pName
};

static emlrtRTEInfo mb_emlrtRTEI{
    64,                     // lineNo
    9,                      // colNo
    "generate_ts_neighbor", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/g"
    "enerate_ts_neighbor.m" // pName
};

static emlrtRTEInfo nb_emlrtRTEI{
    54,                     // lineNo
    9,                      // colNo
    "generate_ts_neighbor", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/g"
    "enerate_ts_neighbor.m" // pName
};

static emlrtRTEInfo ob_emlrtRTEI{
    44,                     // lineNo
    9,                      // colNo
    "generate_ts_neighbor", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/g"
    "enerate_ts_neighbor.m" // pName
};

static emlrtRTEInfo pb_emlrtRTEI{
    33,                     // lineNo
    9,                      // colNo
    "generate_ts_neighbor", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/M"
    "atlabZip/VNS-TS/VNS-TS/Source/g"
    "enerate_ts_neighbor.m" // pName
};

// Function Definitions
void generate_ts_neighbor(const emlrtStack *sp, const struct0_T *sol_info,
                          const struct1_T *data, const struct2_T *param_pen,
                          const coder::array<int16_T, 2U> &tabu_list,
                          const coder::array<real_T, 2U> &frequency,
                          real_T b_div, struct0_T *neighbor,
                          int16_T arc_del_data[], int32_T arc_del_size[2],
                          real_T route_ind_data[], int32_T route_ind_size[2])
{
  cell_wrap_0 del_cell[5];
  cell_wrap_1 ind_cell[5];
  emlrtStack b_st;
  emlrtStack st;
  struct0_T nb_cell[5];
  struct0_T best_neighbor;
  real_T rec_cost[5];
  real_T change_route_ind[2];
  real_T b_change_route_ind;
  real_T best_total_cost;
  real_T d;
  real_T ex;
  int32_T b_i;
  int32_T generate_ts_neighbor_numThreads;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T iindx;
  int32_T k;
  int16_T b_best_del[8];
  int16_T c_best_del[6];
  int16_T best_del[4];
  boolean_T emlrtHadParallelError{false};
  boolean_T exitg1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  生成邻域解
  //  采用五种方法，探索sol_info的全部邻域
  //  每次得到一个邻域解，则将这个邻域解和已知最好的邻域进行对比
  //  最终返回最佳的一个邻域，无论这个邻域是否比sol_info要好
  //  best_neighbor = struct();
  //  best_total_cost = inf;
  //  best_del = [];
  //  change_route_ind = [];
  //  线路内部客户重新分配位置
  for (i = 0; i < 5; i++) {
    rec_cost[i] = 0.0;
  }
  nb_cell[0] = *sol_info;
  del_cell[0].f1.set_size(&jb_emlrtRTEI, sp, 0, 0);
  ind_cell[0].f1.size[0] = 0;
  ind_cell[0].f1.size[1] = 0;
  nb_cell[1] = *sol_info;
  del_cell[1].f1.set_size(&kb_emlrtRTEI, sp, 0, 0);
  ind_cell[1].f1.size[0] = 0;
  ind_cell[1].f1.size[1] = 0;
  nb_cell[2] = *sol_info;
  del_cell[2].f1.set_size(&kb_emlrtRTEI, sp, 0, 0);
  ind_cell[2].f1.size[0] = 0;
  ind_cell[2].f1.size[1] = 0;
  nb_cell[3] = *sol_info;
  del_cell[3].f1.set_size(&kb_emlrtRTEI, sp, 0, 0);
  ind_cell[3].f1.size[0] = 0;
  ind_cell[3].f1.size[1] = 0;
  nb_cell[4] = *sol_info;
  del_cell[4].f1.set_size(&kb_emlrtRTEI, sp, 0, 0);
  ind_cell[4].f1.size[0] = 0;
  ind_cell[4].f1.size[1] = 0;
  emlrtEnterParallelRegion((emlrtCTX)sp,
                           static_cast<boolean_T>(omp_in_parallel()));
  generate_ts_neighbor_numThreads =
      emlrtAllocRegionTLSs(sp->tls, static_cast<boolean_T>(omp_in_parallel()),
                           omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(generate_ts_neighbor_numThreads) private(     \
    best_neighbor, change_route_ind, best_del, best_total_cost, b_best_del,    \
    b_change_route_ind, c_best_del, b_st, i1)                                  \
    firstprivate(st, emlrtHadParallelError)
  {
    try {

      st.prev = sp;
      st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      st.site = nullptr;
      b_st.prev = &st;
      b_st.tls = st.tls;
    } catch (...) {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (b_i = 0; b_i < 5; b_i++) {
      if (emlrtHadParallelError) {
        continue;
      }
      try {

        //  5种方法
        //  在每个case下赋值，防止编译C不通过
        if (b_i + 1 == 1) {
          //  线路内部的客户重新分配位置
          best_neighbor = *sol_info;
          b_st.site = &w_emlrtRSI;
          ts_intro_relocating(&b_st, &best_neighbor, data->dmd, data->tw,
                              data->st, data->dist, data->vnum, data->arc,
                              param_pen->beta_0, param_pen->pool_size,
                              tabu_list, frequency, b_div, &best_total_cost,
                              c_best_del, &b_change_route_ind);
          nb_cell[0] = best_neighbor;
          del_cell[0].f1.set_size(&pb_emlrtRTEI, &st, 3, 2);
          for (i1 = 0; i1 < 6; i1++) {
            del_cell[0].f1[i1] = c_best_del[i1];
          }
          ind_cell[0].f1.size[0] = 1;
          ind_cell[0].f1.size[1] = 1;
          ind_cell[0].f1.data[0] = b_change_route_ind;
          rec_cost[0] = best_total_cost;
        } else if (b_i + 1 == 2) {
          //  线路之间的客户重新分配位置
          b_st.site = &v_emlrtRSI;
          ts_inter_relocating(&b_st, sol_info, data, param_pen, tabu_list,
                              frequency, b_div, &best_neighbor,
                              &best_total_cost, c_best_del, change_route_ind);
          nb_cell[1] = best_neighbor;
          del_cell[1].f1.set_size(&ob_emlrtRTEI, &st, 3, 2);
          for (i1 = 0; i1 < 6; i1++) {
            del_cell[1].f1[i1] = c_best_del[i1];
          }
          ind_cell[1].f1.size[0] = 1;
          ind_cell[1].f1.size[1] = 2;
          ind_cell[1].f1.data[0] = change_route_ind[0];
          ind_cell[1].f1.data[1] = change_route_ind[1];
          rec_cost[1] = best_total_cost;
        } else if (b_i + 1 == 3) {
          //  线路内部交换客户位置
          best_neighbor = *sol_info;
          b_st.site = &u_emlrtRSI;
          ts_intro_exchanging(&b_st, &best_neighbor, data->dmd, data->tw,
                              data->st, data->dist, data->vnum, data->arc,
                              param_pen->beta_0, param_pen->pool_size,
                              tabu_list, frequency, b_div, &best_total_cost,
                              b_best_del, &b_change_route_ind);
          nb_cell[2] = best_neighbor;
          del_cell[2].f1.set_size(&nb_emlrtRTEI, &st, 4, 2);
          for (i1 = 0; i1 < 8; i1++) {
            del_cell[2].f1[i1] = b_best_del[i1];
          }
          ind_cell[2].f1.size[0] = 1;
          ind_cell[2].f1.size[1] = 1;
          ind_cell[2].f1.data[0] = b_change_route_ind;
          rec_cost[2] = best_total_cost;
        } else if (b_i + 1 == 4) {
          //  线路之间交换客户的位置
          b_st.site = &t_emlrtRSI;
          ts_inter_exchanging(&b_st, sol_info, data, param_pen, tabu_list,
                              frequency, b_div, &best_neighbor,
                              &best_total_cost, b_best_del, change_route_ind);
          nb_cell[3] = best_neighbor;
          del_cell[3].f1.set_size(&mb_emlrtRTEI, &st, 4, 2);
          for (i1 = 0; i1 < 8; i1++) {
            del_cell[3].f1[i1] = b_best_del[i1];
          }
          ind_cell[3].f1.size[0] = 1;
          ind_cell[3].f1.size[1] = 2;
          ind_cell[3].f1.data[0] = change_route_ind[0];
          ind_cell[3].f1.data[1] = change_route_ind[1];
          rec_cost[3] = best_total_cost;
        } else {
          //  线路之间 2-opt*
          b_st.site = &s_emlrtRSI;
          ts_two_optimization(&b_st, sol_info, data->dmd, data->st, data->dist,
                              data->cap, data->vnum, data->arc, param_pen,
                              tabu_list, frequency, b_div, &best_neighbor,
                              &best_total_cost, best_del, change_route_ind);
          nb_cell[4] = best_neighbor;
          del_cell[4].f1.set_size(&lb_emlrtRTEI, &st, 2, 2);
          del_cell[4].f1[0] = best_del[0];
          del_cell[4].f1[1] = best_del[1];
          del_cell[4].f1[2] = best_del[2];
          del_cell[4].f1[3] = best_del[3];
          ind_cell[4].f1.size[0] = 1;
          ind_cell[4].f1.size[1] = 2;
          ind_cell[4].f1.data[0] = change_route_ind[0];
          ind_cell[4].f1.data[1] = change_route_ind[1];
          rec_cost[4] = best_total_cost;
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }
    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 1);
    }
  }
  emlrtExitParallelRegion((emlrtCTX)sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  if (!muDoubleScalarIsNaN(rec_cost[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (!muDoubleScalarIsNaN(rec_cost[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (idx == 0) {
    iindx = 0;
  } else {
    ex = rec_cost[idx - 1];
    iindx = idx - 1;
    i = idx + 1;
    for (k = i; k < 6; k++) {
      d = rec_cost[k - 1];
      if (ex > d) {
        ex = d;
        iindx = k - 1;
      }
    }
  }
  *neighbor = nb_cell[iindx];
  arc_del_size[0] = del_cell[iindx].f1.size(0);
  arc_del_size[1] = del_cell[iindx].f1.size(1);
  idx = del_cell[iindx].f1.size(0) * del_cell[iindx].f1.size(1);
  for (i = 0; i < idx; i++) {
    arc_del_data[i] = del_cell[iindx].f1[i];
  }
  route_ind_size[0] = ind_cell[iindx].f1.size[0];
  route_ind_size[1] = ind_cell[iindx].f1.size[1];
  idx = ind_cell[iindx].f1.size[0] * ind_cell[iindx].f1.size[1];
  for (i = 0; i < idx; i++) {
    route_ind_data[i] = ind_cell[iindx].f1.data[i];
  }
  //  % 测试
  //  employ_num = size(sol_info.routes, 1);
  //  temp = zeros(employ_num,1);
  //  for mm = 1:employ_num
  //      % 计算容量惩罚
  //      route = neighbor.routes(mm,:);
  //      route([false, route(2:end-1)==0 ,false]) = [];
  //      temp(mm) = sum(data.dmd(route+1));
  //  end
  //  neighbor.payload - temp
  //  if any(abs(neighbor.payload - temp) > 0)
  //      warning('?')
  //  end
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (generate_ts_neighbor.cpp)
