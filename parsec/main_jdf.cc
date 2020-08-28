/* Copyright 2020 Los Alamos National Laboratory
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdarg.h>

#include "core.h"
#include "common.h"
#include <parsec/execution_stream.h>
//#include <dplasmatypes.h>
#include <data_dist/matrix/two_dim_rectangle_cyclic.h>
#include <parsec/arena.h>

/* timings */
#if defined( PARSEC_HAVE_MPI)
#define MPI_TIMING
#endif
#include "timer.h"
#include "benchmark_internal.h"

#define MAX_ARGS  4

#define VERBOSE_LEVEL 0

#define USE_CORE_VERIFICATION
//#define TRACK_NB_TASKS

#if defined (TRACK_NB_TASKS)  
int nb_tasks_per_node[32];
#endif

char **extra_local_memory;

/* For timming */
double *timecount;
double *timecount_all;

typedef struct matrix_s{
  two_dim_block_cyclic_t dcC;
  int M;
  int N;
  int K;
  int NRHS;
  int IB;
  int MB;
  int NB;
  int SMB;
  int SNB;
  int HMB;
  int HNB;
  int MT;
  int NT;
  int KT;
}matrix_t;

struct ParsecApp : public App {
  ParsecApp(int argc, char **argv);
  ~ParsecApp();
  void execute_main_loop();
  void execute_timestep(size_t idx, long t);
  void debug_printf(int verbose_level, const char *format, ...);
private:
  parsec_context_t* parsec;
  int rank;
  int nodes;
  int cores;
  int gpus;
  int P;
  int Q;
  matrix_t mat_array[10];
  int check;
  int loud;
  int scheduler;
  int iparam[IPARAM_SIZEOF];
  int nb_tasks;
  int nb_fields;
};

ParsecApp::ParsecApp(int argc, char **argv)
  : App(argc, argv)
{ 
  int i;

  /* Set defaults for non argv iparams */
  iparam_default_gemm(iparam);
  iparam_default_ibnbmb(iparam, 0, 2, 2);
#if defined(HAVE_CUDA) && 1
  iparam[IPARAM_NGPUS] = 0;
#endif
  
  //sleep(10);
  
  /* Initialize PaRSEC */
  iparam[IPARAM_N] = 4;
  iparam[IPARAM_M] = 4;
  
  nb_fields = 0;
  
  int nb_fields_arg = 0;
  
  for (int i = 1; i < argc; i++) {
    if (!strcmp(argv[i], "-field")) {
      nb_fields_arg = atol(argv[++i]);
    }
  }
  
  parsec = setup_parsec(argc, argv, iparam);
  
  PASTE_CODE_IPARAM_LOCALS(iparam);

#if defined (TRACK_NB_TASKS)    
  for (i = 0; i < cores; i++) {
      nb_tasks_per_node[i] = 0;
  }
#endif
  
  debug_printf(0, "init parsec, pid %d\n", getpid());
  
  size_t max_scratch_bytes_per_task = 0;
  
  int MB_cal = 0;
  
  for (i = 0; i < graphs.size(); i++) {
    TaskGraph &graph = graphs[i];
    matrix_t &mat = mat_array[i];
    
    if (nb_fields_arg > 0) {
      nb_fields = nb_fields_arg;
    } else {
      nb_fields = graph.timesteps;
    }
    
    MB_cal = sqrt(graph.output_bytes_per_task / sizeof(float));
    
    if (MB_cal > iparam[IPARAM_MB]) {
      iparam[IPARAM_MB] = MB_cal;
      iparam[IPARAM_NB] = iparam[IPARAM_MB];
    }
    
    iparam[IPARAM_N] = graph.max_width * iparam[IPARAM_MB];
    iparam[IPARAM_M] = nb_fields * iparam[IPARAM_MB];
  
    parse_arguments(&argc, &argv, iparam);
    
    print_arguments(iparam);
    
    PASTE_CODE_IPARAM_LOCALS_MAT(iparam);
    
    debug_printf(0, "output_bytes_per_task %d, mb %d, nb %d\n", graph.output_bytes_per_task, mat.MB, mat.NB);
  
    assert(graph.output_bytes_per_task <= sizeof(float) * mat.MB * mat.NB);

    /* Set P to 1 */
    if( P != 1 ) {
       P = 1;
       Q = nodes;
       if( 0 == rank )
           printf("Warnning: set P = 1 Q = %d\n", nodes);
    }

    /* Set P to 1 */
    if( (mat.N/mat.NB % nodes == 0 && mat.SNB != mat.N/mat.NB/nodes)
        || (mat.N/mat.NB % nodes != 0 && mat.SNB != mat.N/mat.NB/nodes + 1) ) {
        if( 0 == mat.N/mat.NB % nodes )
            mat.SNB = mat.N/mat.NB/nodes;
        else
            mat.SNB = mat.N/mat.NB/nodes + 1;

        if( 0 == rank )
           printf("Warnning: set distribution to two dim block; SNB = %d\n", mat.SNB);
    }
  
    two_dim_block_cyclic_init(&mat.dcC, matrix_RealFloat, matrix_Tile,
                               nodes, rank, mat.MB, mat.NB, mat.M, mat.N, 0, 0,
                               mat.M, mat.N, mat.SMB, mat.SNB, P);

    mat.dcC.mat = parsec_data_allocate((size_t)mat.dcC.super.nb_local_tiles * \
                                   (size_t)mat.dcC.super.bsiz *      \
                                   (size_t)parsec_datadist_getsizeoftype(mat.dcC.super.mtype)); \
    parsec_data_collection_set_key((parsec_data_collection_t*)&(mat.dcC), "dcC"); 

    /* For timming */
    timecount = (double *)calloc(cores, sizeof(double));
    if( 0 == rank )
        timecount_all = (double *)calloc(nodes*cores, sizeof(double));

    /* matrix generation */
    //dplasma_dplrnt( parsec, 0, (parsec_tiled_matrix_dc_t *)&dcC, Cseed);
                            
    if (graph.scratch_bytes_per_task > max_scratch_bytes_per_task) {
      max_scratch_bytes_per_task = graph.scratch_bytes_per_task;
    }
    
  }
  
  nb_tasks = 0;
  
  extra_local_memory = (char**)malloc(sizeof(char*) * cores);
  assert(extra_local_memory != NULL);
  for (i = 0; i < cores; i++) {
    if (max_scratch_bytes_per_task > 0) {
      extra_local_memory[i] = (char*)malloc(sizeof(char)*max_scratch_bytes_per_task);
      TaskGraph::prepare_scratch(extra_local_memory[i], sizeof(char)*max_scratch_bytes_per_task);
    } else {
      extra_local_memory[i] = NULL;
    }
  }
  
  debug_printf(0, "max_scratch_bytes_per_task %lld\n", max_scratch_bytes_per_task);
}

ParsecApp::~ParsecApp()
{
  int i; 
  
  debug_printf(0, "clean up parsec\n");
  
  for (i = 0; i < cores; i++) {
    if (extra_local_memory[i] != NULL) {
      free(extra_local_memory[i]);
      extra_local_memory[i] = NULL;
    }
  }
  free(extra_local_memory);
  extra_local_memory = NULL;
  
}

void ParsecApp::execute_main_loop()
{
  
  if (rank == 0) {
    display();
  }
  
  //sleep(10);
  
  /* #### parsec context Starting #### */
  MPI_Barrier(MPI_COMM_WORLD);
  if (rank == 0) {
    Timer::time_start();
  }

  int x, y;
  
  parsec_taskpool_t* tp[10];
  for (int i = 0; i < graphs.size(); i++) {
    const TaskGraph &g = graphs[i];
    matrix_t &mat = mat_array[i];

    debug_printf(0, "rank %d, pid %d, M %d, N %d, MT %d, NT %d, nb_fields %d, timesteps %d\n", rank, getpid(), mat.M, mat.N, mat.MT, mat.NT, nb_fields, g.timesteps);
    
    if (g.dependence == DependenceType::STENCIL_1D) {
      //parsec_stencil_1d(parsec, (parsec_tiled_matrix_dc_t *)&mat, g, nb_fields, g.timesteps, i, extra_local_memory);
      tp[i] = parsec_stencil_1d_New((parsec_tiled_matrix_dc_t *)&mat, g, nb_fields, g.timesteps, i, extra_local_memory); 
    } else if (g.dependence == DependenceType::NEAREST && g.radix == 5) {
      //parsec_nearest_radix_5(parsec, (parsec_tiled_matrix_dc_t *)&mat, g, nb_fields, g.timesteps, i, extra_local_memory);
      tp[i] = parsec_nearest_radix_5_New((parsec_tiled_matrix_dc_t *)&mat, g, nb_fields, g.timesteps, i, extra_local_memory); 
    } else if (g.dependence == DependenceType::SPREAD && g.radix == 5) {
      //parsec_spread_radix5_period3(parsec, (parsec_tiled_matrix_dc_t *)&mat, g, nb_fields, g.timesteps, i, extra_local_memory);
      tp[i] = parsec_spread_radix5_period3_New((parsec_tiled_matrix_dc_t *)&mat, g, nb_fields, g.timesteps, i, extra_local_memory); 
    } else {
      assert(0);
      parsec_benchmark(parsec, (parsec_tiled_matrix_dc_t *)&mat, g, nb_fields, g.timesteps, i, extra_local_memory);
    }
    assert(tp[i] != NULL);
    parsec_enqueue(parsec, tp[i]);
  }
  
  parsec_context_start(parsec);
  parsec_context_wait(parsec);
  
  for (int i = 0; i < graphs.size(); i++) {
    const TaskGraph &g = graphs[i];
    
    if (g.dependence == DependenceType::STENCIL_1D) {
      parsec_stencil_1d_Destruct(tp[i]);
    } else if (g.dependence == DependenceType::NEAREST && g.radix == 5) {
      parsec_nearest_radix_5_Destruct(tp[i]);
    } else if (g.dependence == DependenceType::SPREAD && g.radix == 5) {
      parsec_spread_radix5_period3_Destruct(tp[i]);
    } else {
      assert(0);
    }
    tp[i] = NULL;
  }
  
  MPI_Barrier(MPI_COMM_WORLD);

  double elapsed;
  if (rank == 0) {
    elapsed = Timer::time_end();
    report_timing(elapsed);
    debug_printf(0, "[****] TIME(s) %12.5f : \tnb_tasks %d", elapsed, nb_tasks);
  }

#if defined (TRACK_NB_TASKS)    
  for (int i = 1; i < cores; i++) {
    nb_tasks_per_node[0] += nb_tasks_per_node[i];
  }
  printf("rank %d, nb_tasks %d\n", rank, nb_tasks_per_node[0]);
#endif

  /* For timming */
  MPI_Gather(timecount, cores, MPI_DOUBLE, timecount_all, cores, MPI_DOUBLE, 0, MPI_COMM_WORLD);

  if( 0 == rank ) {
    double time_sum = 0.0;
    double time_max = 0.0;
    for(int i = 0; i < cores * nodes; i++) {
        if( timecount_all[i] >= time_max )
            time_max = timecount_all[i];
        time_sum += timecount_all[i];
    }
    printf("\tKernel_time_max: %lf, Kernel_time_avg: %lf, Time_diff: %lf\n", time_max, time_sum/cores, elapsed-time_max);
  }

  cleanup_parsec(parsec, iparam);

}

void ParsecApp::debug_printf(int verbose_level, const char *format, ...)
{
  if (verbose_level > VERBOSE_LEVEL) {
    return;
  }
  if (rank == 0) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
  }
}

int main(int argc, char ** argv)
{
  //printf("pid %d\n", getpid());
  //sleep(10);
  ParsecApp app(argc, argv);
  app.execute_main_loop();

  return 0;
}
