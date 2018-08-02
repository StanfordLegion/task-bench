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

//#define ENABLE_PRUNE_MPI_TASK_INSERT
#if defined (ENABLE_PRUNE_MPI_TASK_INSERT) 
#include <interfaces/superscalar/insert_function_internal.h>
#endif

//#define TRACK_NB_TASKS
#if defined (TRACK_NB_TASKS)  
int nb_tasks_per_node[32];
#endif

char **extra_local_memory;

enum regions {
  TILE_FULL,
};

typedef struct payload_s {
  int graph_id;
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
  float *out;

  parsec_dtd_unpack_args(this_task, &payload, &out);

#if defined (USE_CORE_VERIFICATION)    
  std::pair<long, long> *output = reinterpret_cast<std::pair<long, long> *>(out);
  output->first = payload.i;
  output->second = payload.j;
  Kernel k(payload.graph.kernel);
  k.execute(extra_local_memory[es->core_id], payload.graph.scratch_bytes_per_task);
#else   
  *out = 0.0;
  printf("Graph %d, Task1, [%d, %d], rank %d, core %d, out %.2f, local_mem %p\n", 
        payload.graph_id, payload.i, payload.j, this_task->taskpool->context->my_rank, es->core_id, *out, extra_local_memory[es->core_id]);
#endif


#if defined (TRACK_NB_TASKS)        
  nb_tasks_per_node[es->core_id] ++;
#endif
  //usleep(10);

  return PARSEC_HOOK_RETURN_DONE;
}

static int test_task2(parsec_execution_stream_t *es, parsec_task_t *this_task)
{
  (void)es;
  payload_t payload;
  float *in1, *out;

  parsec_dtd_unpack_args(this_task, &payload, &in1, &out);

#if defined (USE_CORE_VERIFICATION)      
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)in1);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[es->core_id], graph.scratch_bytes_per_task);
#else
  *out = *in1 + 1.0;
  printf("Graph %d, Task2, [%d, %d], rank %d, core %d, in1 %.2f out %.2f, local_mem %p\n", 
        payload.graph_id, payload.i, payload.j, this_task->taskpool->context->my_rank, es->core_id, *in1, *out, extra_local_memory[es->core_id]);
#endif

#if defined (TRACK_NB_TASKS)          
  nb_tasks_per_node[es->core_id] ++;
#endif

  return PARSEC_HOOK_RETURN_DONE;
}

static int test_task3(parsec_execution_stream_t *es, parsec_task_t *this_task)
{
  (void)es;
  payload_t payload;
  float *in1, *in2, *out;

  parsec_dtd_unpack_args(this_task, &payload, &in1, &in2, &out);

#if defined (USE_CORE_VERIFICATION)      
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)in1);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in2);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                     input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[es->core_id], graph.scratch_bytes_per_task);

#else    
  *out = *in1 + *in2 + 1.0;
  printf("Graph %d, Task3, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, out %.2f, local_mem %p\n", 
        payload.graph_id, payload.i, payload.j, this_task->taskpool->context->my_rank, es->core_id, *in1, *in2, *out, extra_local_memory[es->core_id]);
#endif

#if defined (TRACK_NB_TASKS)          
  nb_tasks_per_node[es->core_id] ++;
#endif

  return PARSEC_HOOK_RETURN_DONE;
}

static int test_task4(parsec_execution_stream_t *es, parsec_task_t *this_task)
{
  (void)es;
  payload_t payload;
  float *in1, *in2, *in3, *out;

  parsec_dtd_unpack_args(this_task, &payload, &in1, &in2, &in3, &out);

#if defined (USE_CORE_VERIFICATION)  
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)in1);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in2);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in3);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[es->core_id], graph.scratch_bytes_per_task);
#else
  *out = *in1 + *in2 + *in3 + 1.0;
  printf("Graph %d, Task4, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, out %.2f, local_mem %p\n", 
        payload.graph_id, payload.i, payload.j, this_task->taskpool->context->my_rank, es->core_id, *in1, *in2, *in3, *out, extra_local_memory[es->core_id]);                   
#endif

#if defined (TRACK_NB_TASKS)          
  nb_tasks_per_node[es->core_id] ++;
#endif  
  
  return PARSEC_HOOK_RETURN_DONE;
}

typedef struct matrix_s{
  two_dim_block_cyclic_t *__dcC;
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
  void insert_task(int num_args, payload_t payload, std::vector<parsec_dtd_tile_t*> &args);
#if defined (ENABLE_PRUNE_MPI_TASK_INSERT) 
  int desc_islocal(const parsec_dtd_tile_t *A);
#endif
private:
  parsec_context_t* parsec;
  parsec_taskpool_t *dtd_tp;
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

#if defined (ENABLE_PRUNE_MPI_TASK_INSERT) 
int ParsecApp::desc_islocal(const parsec_dtd_tile_t *A)
{
  return (rank == A->rank);
}
#endif

void ParsecApp::insert_task(int num_args, payload_t payload, std::vector<parsec_dtd_tile_t*> &args)
{ 
  nb_tasks ++;
  switch(num_args) {
  case 1:
#if defined (ENABLE_PRUNE_MPI_TASK_INSERT)
    if(desc_islocal(args[0]) == 1) 
#endif
    {
     // printf("insert %d\n", rank);
      parsec_dtd_taskpool_insert_task(dtd_tp, test_task1,    0,  "test_task1",
                                      sizeof(payload_t), &payload, VALUE,
                                      PASSED_BY_REF,  args[0], INOUT | TILE_FULL | AFFINITY,
                                      PARSEC_DTD_ARG_END);
    }
    break;
  case 2:
#if defined (ENABLE_PRUNE_MPI_TASK_INSERT)
    if(desc_islocal(args[0]) == 1 || desc_islocal(args[1]) == 1)
#endif
    {
      parsec_dtd_taskpool_insert_task(dtd_tp, test_task2,    0,  "test_task2",
                                      sizeof(payload_t), &payload, VALUE,
                                      PASSED_BY_REF,  args[1], INPUT | TILE_FULL,
                                      PASSED_BY_REF,  args[0], INOUT | TILE_FULL | AFFINITY,
                                      PARSEC_DTD_ARG_END);
    }
    break;
  case 3:
#if defined (ENABLE_PRUNE_MPI_TASK_INSERT)
    if(desc_islocal(args[0]) == 1 || desc_islocal(args[1]) == 1 || desc_islocal(args[2]) == 1) 
#endif
    {
      parsec_dtd_taskpool_insert_task(dtd_tp, test_task3,    0,  "test_task3",
                                      sizeof(payload_t), &payload, VALUE,
                                      PASSED_BY_REF,  args[1], INPUT | TILE_FULL,
                                      PASSED_BY_REF,  args[2], INPUT | TILE_FULL,
                                      PASSED_BY_REF,  args[0], INOUT | TILE_FULL | AFFINITY,
                                      PARSEC_DTD_ARG_END);
    }
    break;
  case 4:
#if defined (ENABLE_PRUNE_MPI_TASK_INSERT)
    if(desc_islocal(args[0]) == 1 || desc_islocal(args[1]) == 1 || desc_islocal(args[2]) == 1 || desc_islocal(args[3]) == 1)
#endif
    {
      parsec_dtd_taskpool_insert_task(dtd_tp, test_task4,    0,  "test_task4",
                                      sizeof(payload_t), &payload, VALUE,
                                      PASSED_BY_REF,  args[1], INPUT | TILE_FULL,
                                      PASSED_BY_REF,  args[2], INPUT | TILE_FULL,
                                      PASSED_BY_REF,  args[3], INPUT | TILE_FULL,
                                      PASSED_BY_REF,  args[0], INOUT | TILE_FULL | AFFINITY,
                                      PARSEC_DTD_ARG_END);
    }
    break;
  default:
    assert(false && "unexpected num_args");
  };
}

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
  
 // parse_arguments(&argc, &argv, iparam);
  
  parsec = setup_parsec(argc, argv, iparam);
  
  PASTE_CODE_IPARAM_LOCALS(iparam);

#if defined (TRACK_NB_TASKS)    
  for (i = 0; i < cores; i++) {
      nb_tasks_per_node[i] = 0;
  }
#endif
  
  debug_printf(0, "init parsec, pid %d\n", getpid());
  
  /* Getting new parsec handle of dtd type */
  dtd_tp = parsec_dtd_taskpool_new();
  
  size_t max_scratch_bytes_per_task = 0;
  
  for (i = 0; i < graphs.size(); i++) {
    TaskGraph &graph = graphs[i];
    matrix_t &mat = mat_array[i];
    
    iparam[IPARAM_N] = graph.max_width * iparam[IPARAM_MB];
    iparam[IPARAM_M] = graph.timesteps * iparam[IPARAM_MB];
  
    parse_arguments(&argc, &argv, iparam);
    
    print_arguments(iparam);
    
    PASTE_CODE_IPARAM_LOCALS_MAT(iparam);
  
    assert(graph.output_bytes_per_task <= sizeof(float) * mat.MB * mat.NB);
  
    two_dim_block_cyclic_init(&mat.dcC, matrix_RealFloat, matrix_Tile,
                               nodes, rank, mat.MB, mat.NB, mat.M, mat.N, 0, 0,
                               mat.M, mat.N, mat.SMB, mat.SNB, P);

    mat.dcC.mat = parsec_data_allocate((size_t)mat.dcC.super.nb_local_tiles * \
                                   (size_t)mat.dcC.super.bsiz *      \
                                   (size_t)parsec_datadist_getsizeoftype(mat.dcC.super.mtype)); \
    parsec_data_collection_set_key((parsec_data_collection_t*)&(mat.dcC), "dcC"); 
  

    /* Initializing dc for dtd */
    mat.__dcC = &(mat.dcC);
    parsec_dtd_data_collection_init((parsec_data_collection_t *)&(mat.dcC));


    /* Default type */
    dplasma_add2arena_tile( parsec_dtd_arenas[i],
                            mat.dcC.super.mb * mat.dcC.super.nb*sizeof(float),
                            PARSEC_ARENA_ALIGNMENT_SSE,
                            parsec_datatype_float_t, mat.dcC.super.mb );

    /* matrix generation */
    //dplasma_dplrnt( parsec, 0, (parsec_tiled_matrix_dc_t *)&dcC, Cseed);
                            
    if (graph.scratch_bytes_per_task > max_scratch_bytes_per_task) {
      max_scratch_bytes_per_task = graph.scratch_bytes_per_task;
    }
    
    if (nb_fields < graph.timesteps) {
      nb_fields = graph.timesteps;
    }
  }
  
  if (nb_fields_arg > 0) {
    nb_fields = nb_fields_arg;
  }
  
  nb_tasks = 0;
  
  extra_local_memory = (char**)malloc(sizeof(char*) * cores);
  assert(extra_local_memory != NULL);
  for (i = 0; i < cores; i++) {
    if (max_scratch_bytes_per_task > 0) {
      extra_local_memory[i] = (char*)malloc(sizeof(char)*max_scratch_bytes_per_task);
    } else {
      extra_local_memory[i] = NULL;
    }
  }
  
  debug_printf(0, "max_scratch_bytes_per_task %lld\n", max_scratch_bytes_per_task);

  parsec_context_add_taskpool( parsec, dtd_tp );
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
  
  /* #### PaRSEC context is done #### */
  
  /* Cleaning up the parsec handle */
  parsec_taskpool_free( dtd_tp );
  
  for (i = 0; i < graphs.size(); i++) {
    matrix_t &mat = mat_array[i];
    
    /* Cleaning data arrays we allocated for communication */
    parsec_matrix_del2arena( parsec_dtd_arenas[i] );


    /* Cleaning data arrays we allocated for communication */
    parsec_dtd_data_collection_fini( (parsec_data_collection_t *)&(mat.dcC) );

    parsec_data_free(mat.dcC.mat);
    parsec_tiled_matrix_dc_destroy( (parsec_tiled_matrix_dc_t*)&(mat.dcC));
  }

  cleanup_parsec(parsec, iparam);
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
  /* start parsec context */
  parsec_context_start(parsec);
  
  int x, y;
  
  for (int i = 0; i < graphs.size(); i++) {
    const TaskGraph &g = graphs[i];
    matrix_t &mat = mat_array[i];

    debug_printf(0, "rank %d, pid %d, M %d, N %d, MT %d, NT %d, nb_fields %d\n", rank, getpid(), mat.M, mat.N, mat.MT, mat.NT, nb_fields);

    for (y = 0; y < g.timesteps; y++) {
      execute_timestep(i, y);
    }

    parsec_dtd_data_flush_all( dtd_tp, (parsec_data_collection_t *)&(mat.dcC) );
  }

  /* finishing all the tasks inserted, but not finishing the handle */
  parsec_dtd_taskpool_wait( parsec, dtd_tp );

  /* Waiting on all handle and turning everything off for this context */
  parsec_context_wait( parsec );
  
  MPI_Barrier(MPI_COMM_WORLD);
  if (rank == 0) {
    double elapsed = Timer::time_end();
    report_timing(elapsed);
    debug_printf(0, "[****] TIME(s) %12.5f : \tnb_tasks %d\n", elapsed, nb_tasks);
  }

#if defined (TRACK_NB_TASKS)    
  for (int i = 1; i < cores; i++) {
    nb_tasks_per_node[0] += nb_tasks_per_node[i];
  }
  printf("rank %d, nb_tasks %d\n", rank, nb_tasks_per_node[0]);
#endif
}

void ParsecApp::execute_timestep(size_t idx, long t)
{
  const TaskGraph &g = graphs[idx];
  long offset = g.offset_at_timestep(t);
  long width = g.width_at_timestep(t);
  long dset = g.dependence_set_at_timestep(t);
  matrix_t &mat = mat_array[idx];
  
  std::vector<parsec_dtd_tile_t*> args;
  std::vector<std::pair<long, long>> args_loc;
  payload_t payload;
  
  debug_printf(1, "ts %d, offset %d, width %d, offset+width-1 %d\n", t, offset, width, offset+width-1);
  for (int x = offset; x <= offset+width-1; x++) {
    std::vector<std::pair<long, long> > deps = g.dependencies(dset, x);
    int num_args;    
    
    if (deps.size() == 0) {
      num_args = 1;
      debug_printf(1, "%d[%d] ", x, num_args);
      args.push_back(TILE_OF_MAT(C, t%nb_fields, x)); 
    } else {
      if (t == 0) {
        num_args = 1;
        debug_printf(1, "%d[%d] ", x, num_args);
        args.push_back(TILE_OF_MAT(C, t%nb_fields, x)); 
      } else {
        num_args = 1;
        args.push_back(TILE_OF_MAT(C, t%nb_fields, x));
        for (std::pair<long, long> dep : deps) {
          num_args += dep.second - dep.first + 1;
          debug_printf(1, "%d[%d, %d, %d] ", x, num_args, dep.first, dep.second); 
          for (int i = dep.first; i <= dep.second; i++) {
            args.push_back(TILE_OF_MAT(C, (t-1)%nb_fields, i));  
          }
        }
      }
    }
    payload.i = t;
    payload.j = x;
    payload.graph = g;
    payload.graph_id = idx;
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
