/* Copyright 2018 Los Alamos National Laboratory
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
#include <interfaces/superscalar/insert_function.h>
#include <parsec/arena.h>

/* timings */
#if defined( PARSEC_HAVE_MPI)
#define MPI_TIMING
#endif
#include "timer.h"

#define MAX_ARGS  4

#define VERBOSE_LEVEL 0

#define USE_CORE_VERIFICATION

enum regions {
  TILE_FULL,
};

typedef struct payload_s {
  int i;
  int j;
  TaskGraph graph;
}payload_t;

static inline int
dplasma_add2arena_tile( parsec_arena_t *arena, size_t elem_size, size_t alignment,
                        parsec_datatype_t oldtype, unsigned int tile_mb )
{
  (void)elem_size;
  return parsec_matrix_add2arena( arena, oldtype,
                                 matrix_UpperLower, 1, tile_mb, tile_mb, tile_mb,
                                 alignment, -1 );
}

static int test_task1(parsec_execution_stream_t *es, parsec_task_t *this_task)
{
  (void)es;
  payload_t payload;
  float *data1;

  parsec_dtd_unpack_args(this_task, &payload, &data1);

#if defined (USE_CORE_VERIFICATION)    
  std::pair<long, long> *output = reinterpret_cast<std::pair<long, long> *>(data1);
  output->first = payload.i;
  output->second = payload.j;
  Kernel k(payload.graph.kernel);
  k.execute();
#else   
  *data1 = 0.0;
  printf("\nTask 1, rank %d, core %d, i %d, j %d, data1 %f\n", this_task->taskpool->context->my_rank, es->core_id, payload.i, payload.j, *data1);
#endif

  return PARSEC_HOOK_RETURN_DONE;
}

static int test_task2(parsec_execution_stream_t *es, parsec_task_t *this_task)
{
  (void)es;
  payload_t payload;
  float *data1, *data2;

  parsec_dtd_unpack_args(this_task, &payload, &data1, &data2);

#if defined (USE_CORE_VERIFICATION)      
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)data2;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)data1);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size());
#else
  *data2 = *data1 + 1.0;
  printf("\nTask 2, rank %d, core %d, i %d, j %d, data 1 %f data2 %f\n", this_task->taskpool->context->my_rank, es->core_id, payload.i, payload.j, *data1, *data2);
#endif

  return PARSEC_HOOK_RETURN_DONE;
}

static int test_task3(parsec_execution_stream_t *es, parsec_task_t *this_task)
{
  (void)es;
  payload_t payload;
  float *data1, *data2, *data3;

  parsec_dtd_unpack_args(this_task, &payload, &data1, &data2, &data3);

#if defined (USE_CORE_VERIFICATION)      
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)data3;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)data1);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)data2);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                     input_ptrs.data(), input_bytes.data(), input_ptrs.size());

#else    
  *data3 = *data1 + *data2 + 1.0;
  printf("\nTask 3, rank %d, core %d, i %d, j %d, data1 %f, data2 %f, data3 %f\n", this_task->taskpool->context->my_rank, es->core_id, payload.i, payload.j, *data1, *data2, *data3);
#endif

  return PARSEC_HOOK_RETURN_DONE;
}

static int test_task4(parsec_execution_stream_t *es, parsec_task_t *this_task)
{
  (void)es;
  payload_t payload;
  float *data1, *data2, *data3, *data4;

  parsec_dtd_unpack_args(this_task, &payload, &data1, &data2, &data3, &data4);

#if defined (USE_CORE_VERIFICATION)  
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)data4;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)data1);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)data2);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)data3);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size());
#else
  *data4 = *data1 + *data2 + *data3 + 1.0;
  printf("\nTask 4, rank %d, core %d, i %d, j %d, data1 %f, data2 %f, data3 %f, data4 %f\n", this_task->taskpool->context->my_rank, es->core_id, payload.i, payload.j, *data1, *data2, *data3, *data4);                   
#endif
  
  return PARSEC_HOOK_RETURN_DONE;
}

struct ParsecApp : public App {
  ParsecApp(int argc, char **argv);
  ~ParsecApp();
  void execute_main_loop();
  void execute_timestep(size_t idx, long t);
  void debug_printf(int verbose_level, const char *format, ...);
private:
  void insert_task(int num_args, payload_t payload, std::vector<parsec_dtd_tile_t*> &args);
private:
  parsec_context_t* parsec;
  parsec_taskpool_t *dtd_tp;
  two_dim_block_cyclic_t *__dcC;
  two_dim_block_cyclic_t dcC;
  int rank;
  int nodes;
  int cores;
  int gpus;
  int P;
  int Q;
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
  int check;
  int loud;
  int scheduler;
  int iparam[IPARAM_SIZEOF];
};

void ParsecApp::insert_task(int num_args, payload_t payload, std::vector<parsec_dtd_tile_t*> &args)
{
  switch(num_args) {
  case 1:
    parsec_dtd_taskpool_insert_task(dtd_tp, test_task1,    0,  "test_task1",
                                    sizeof(payload_t), &payload, VALUE,
                                    PASSED_BY_REF,  args[0], INOUT | TILE_FULL | AFFINITY,
                                    PARSEC_DTD_ARG_END);
    break;
  case 2:
    parsec_dtd_taskpool_insert_task(dtd_tp, test_task2,    0,  "test_task2",
                                    sizeof(payload_t), &payload, VALUE,
                                    PASSED_BY_REF,  args[1], INPUT | TILE_FULL,
                                    PASSED_BY_REF,  args[0], INOUT | TILE_FULL | AFFINITY,
                                    PARSEC_DTD_ARG_END);
    break;
  case 3:
    parsec_dtd_taskpool_insert_task(dtd_tp, test_task3,    0,  "test_task3",
                                    sizeof(payload_t), &payload, VALUE,
                                    PASSED_BY_REF,  args[1], INPUT | TILE_FULL,
                                    PASSED_BY_REF,  args[2], INPUT | TILE_FULL,
                                    PASSED_BY_REF,  args[0], INOUT | TILE_FULL | AFFINITY,
                                    PARSEC_DTD_ARG_END);
    break;
  case 4:
    parsec_dtd_taskpool_insert_task(dtd_tp, test_task4,    0,  "test_task4",
                                    sizeof(payload_t), &payload, VALUE,
                                    PASSED_BY_REF,  args[1], INPUT | TILE_FULL,
                                    PASSED_BY_REF,  args[2], INPUT | TILE_FULL,
                                    PASSED_BY_REF,  args[3], INPUT | TILE_FULL,
                                    PASSED_BY_REF,  args[0], INOUT | TILE_FULL | AFFINITY,
                                    PARSEC_DTD_ARG_END);
    break;
  default:
    assert(false && "unexpected num_args");
  };
}

ParsecApp::ParsecApp(int argc, char **argv)
  : App(argc, argv)
{ 
  int Cseed = 0;

  /* Set defaults for non argv iparams */
  iparam_default_gemm(iparam);
  iparam_default_ibnbmb(iparam, 0, 4, 4);
#if defined(HAVE_CUDA) && 1
  iparam[IPARAM_NGPUS] = 0;
#endif
  
  TaskGraph &graph = graphs[0];
  iparam[IPARAM_N] = graph.max_width;
  iparam[IPARAM_M] = graph.timesteps;
  
  /* Initialize PaRSEC */
  parsec = setup_parsec(argc, argv, iparam);
  
  iparam[IPARAM_N] = graph.max_width * iparam[IPARAM_MB];
  iparam[IPARAM_M] = graph.timesteps * iparam[IPARAM_MB];
  
  print_arguments(iparam);
  
  
  PASTE_CODE_IPARAM_LOCALS(iparam);

  debug_printf(0, "init parsec, pid %d\n", getpid());
 // sleep(10);
  
  assert(graph.output_bytes_per_task <= sizeof(float)*MB*NB);
  
  two_dim_block_cyclic_init(&dcC, matrix_RealFloat, matrix_Tile,
                             nodes, rank, MB, NB, M, N, 0, 0,
                             M, N, SMB, SNB, P);

  dcC.mat = parsec_data_allocate((size_t)dcC.super.nb_local_tiles * \
                                 (size_t)dcC.super.bsiz *      \
                                 (size_t)parsec_datadist_getsizeoftype(dcC.super.mtype)); \
  parsec_data_collection_set_key((parsec_data_collection_t*)&dcC, "dcC"); 
  

  /* Initializing dc for dtd */
  __dcC = &dcC;
  parsec_dtd_data_collection_init((parsec_data_collection_t *)&dcC);



  /* Getting new parsec handle of dtd type */
  dtd_tp = parsec_dtd_taskpool_new();

  /* Default type */
  dplasma_add2arena_tile( parsec_dtd_arenas[TILE_FULL],
                          dcC.super.mb*dcC.super.nb*sizeof(double),
                          PARSEC_ARENA_ALIGNMENT_SSE,
                          parsec_datatype_double_t, dcC.super.mb );

  /* matrix generation */
  //dplasma_dplrnt( parsec, 0, (parsec_tiled_matrix_dc_t *)&dcC, Cseed);


  parsec_context_add_taskpool( parsec, dtd_tp );
}

ParsecApp::~ParsecApp()
{
  debug_printf(0, "clean up parsec\n");
  
  /* #### PaRSEC context is done #### */
  
  /* Cleaning up the parsec handle */
  parsec_taskpool_free( dtd_tp );

  /* Cleaning data arrays we allocated for communication */
  parsec_matrix_del2arena( parsec_dtd_arenas[0] );


  /* Cleaning data arrays we allocated for communication */
  parsec_dtd_data_collection_fini( (parsec_data_collection_t *)&dcC );

  parsec_data_free(dcC.mat);
  parsec_tiled_matrix_dc_destroy( (parsec_tiled_matrix_dc_t*)&dcC);

  cleanup_parsec(parsec, iparam);
}

void ParsecApp::execute_main_loop()
{
  
  if (rank == 0) {
    display();
  }
  
  debug_printf(0, "rank %d, pid %d, M %d, N %d\n", rank, getpid(), M, N);
  //sleep(10);
  
  /* #### parsec context Starting #### */
  MPI_Barrier(MPI_COMM_WORLD);
  if (rank == 0) {
    Timer::time_start();
  }
  /* start parsec context */
  parsec_context_start(parsec);
  int i, j;
  
  int x, y;
  
  const TaskGraph &g = graphs[0];
  
  for (y = 0; y < g.timesteps; y++) {
    execute_timestep(0, y);
  }

  parsec_dtd_data_flush_all( dtd_tp, (parsec_data_collection_t *)&dcC );

  /* finishing all the tasks inserted, but not finishing the handle */
  parsec_dtd_taskpool_wait( parsec, dtd_tp );

  /* Waiting on all handle and turning everything off for this context */
  parsec_context_wait( parsec );
  
  MPI_Barrier(MPI_COMM_WORLD);
  if (rank == 0) {
    double elapsed = Timer::time_end();
    report_timing(elapsed);
    debug_printf(0, "[****] TIME(s) %12.5f : \tPxQ= %3d %-3d NB= %4d N= %7d M= %7d\n", elapsed, P, Q, NB, N, M);
  }
}

void ParsecApp::execute_timestep(size_t idx, long t)
{
  const TaskGraph &g = graphs[idx];
  long offset = g.offset_at_timestep(t);
  long width = g.width_at_timestep(t);
  long dset = g.dependence_set_at_timestep(t);
  
  std::vector<parsec_dtd_tile_t*> args;
  payload_t payload;
  
  debug_printf(1, "ts %d, offset %d, width %d, offset+width-1 %d\n", t, offset, width, offset+width-1);
  for (int x = offset; x <= offset+width-1; x++) {
    std::vector<std::pair<long, long> > deps = g.dependencies(dset, x);
    int num_args;    
    
    if (deps.size() == 0) {
      num_args = 1;
      debug_printf(1, "%d[%d] ", x, num_args);
      args.push_back(TILE_OF(C, t, x)); 
    } else {
      if (t == 0) {
        num_args = 1;
        debug_printf(1, "%d[%d] ", x, num_args);
        args.push_back(TILE_OF(C, t, x)); 
      } else {
        num_args = 1;
        args.push_back(TILE_OF(C, t, x));
        for (std::pair<long, long> dep : deps) {
          num_args += dep.second - dep.first + 1;
          debug_printf(1, "%d[%d, %d, %d] ", x, num_args, dep.first, dep.second); 
          for (int i = dep.first; i <= dep.second; i++) {
            args.push_back(TILE_OF(C, t-1, i));  
          }
        }
      }
    }
    payload.i = t;
    payload.j = x;
    payload.graph = g;
    insert_task(num_args, payload, args); 
    args.clear();
  }
  debug_printf(1, "\n");
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
  printf("pid %d\n", getpid());
 // sleep(10);
  ParsecApp app(argc, argv);
  app.execute_main_loop();

  return 0;
}
