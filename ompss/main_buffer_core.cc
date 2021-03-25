#include <stdarg.h>
#include <assert.h>
#include <string.h>
#include <algorithm> 
#include <unistd.h>
#include <omp.h>
#include "core.h"
#include "timer.h"

#define VERBOSE_LEVEL 0

#define USE_CORE_VERIFICATION

#if defined(OMPSS)
#include <omp.h>
#define OMPSS_TASKWAIT #pragma omp taskwait
#define OMPSS_TASK_DEPEND  #pragma omp task depend
inline int ompss_get_thread_num()
{
  return omp_get_thread_num();
}

inline void ompss_set_num_threads(int nb_threads)
{
  omp_set_num_threads(nb_threads);
}
#elif defined(OMPSS2)
#include <nanos6/debug.h>
#define OMPSS_TASKWAIT #pragma oss taskwait
#define OMPSS_TASK_DEPEND #pragma oss task depend
inline int ompss_get_thread_num()
{
  return nanos6_get_current_virtual_cpu();
}

inline void ompss_set_num_threads(int nb_threads)
{
}
#endif

typedef struct tile_s {
  float dep;
  char *output_buff;
}tile_t;

typedef struct payload_s {
  int x;
  int y;
  TaskGraph graph;
}payload_t;

typedef struct task_args_s {
  int x;
  int y;
}task_args_t;

typedef struct matrix_s {
  tile_t *data;
  int M;
  int N;
}matrix_t;

#define NB_LOCAL_MEMORY 8

char **extra_local_memory;
int *extra_local_memory_idx;
int memory_block_size = -1;

void task1(tile_t *tile_out, payload_t payload)
{
  int tid = ompss_get_thread_num();
#if defined (USE_CORE_VERIFICATION)    
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)tile_out->output_buff;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)tile_out->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  graph.execute_point(payload.y, payload.x, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid]+extra_local_memory_idx[tid]*memory_block_size, graph.scratch_bytes_per_task);
  extra_local_memory_idx[tid]++;
  extra_local_memory_idx[tid] = extra_local_memory_idx[tid] % NB_LOCAL_MEMORY;
#else  
  tile_out->dep = 0;
  printf("Task1 tid %d, x %d, y %d, out %f\n", tid, payload.x, payload.y, tile_out->dep);
#endif  
}

void task2(tile_t *tile_out, tile_t *tile_in1, payload_t payload)
{
  int tid = ompss_get_thread_num();
#if defined (USE_CORE_VERIFICATION)    
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)tile_out->output_buff;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)tile_in1->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  graph.execute_point(payload.y, payload.x, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid]+extra_local_memory_idx[tid]*memory_block_size, graph.scratch_bytes_per_task);
  extra_local_memory_idx[tid]++;
  extra_local_memory_idx[tid] = extra_local_memory_idx[tid] % NB_LOCAL_MEMORY;
#else  
  tile_out->dep = tile_in1->dep + 1;
  printf("Task2 tid %d, x %d, y %d, out %f, in1 %f\n", tid, payload.x, payload.y, tile_out->dep,tile_in1->dep);
#endif
}

void task3(tile_t *tile_out, tile_t *tile_in1, tile_t *tile_in2, payload_t payload)
{
  int tid = ompss_get_thread_num();
#if defined (USE_CORE_VERIFICATION)    
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)tile_out->output_buff;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)tile_in1->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in2->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.y, payload.x, output_ptr, output_bytes,
                     input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid]+extra_local_memory_idx[tid]*memory_block_size, graph.scratch_bytes_per_task);
  extra_local_memory_idx[tid]++;
  extra_local_memory_idx[tid] = extra_local_memory_idx[tid] % NB_LOCAL_MEMORY;
#else  
  tile_out->dep = tile_in1->dep + tile_in2->dep + 1;
  printf("Task3 tid %d, x %d, y %d, out %f, in1 %f, in2 %f\n", tid, payload.x, payload.y, tile_out->dep,tile_in1->dep, tile_in2->dep);
#endif
}

void task4(tile_t *tile_out, tile_t *tile_in1, tile_t *tile_in2, tile_t *tile_in3, payload_t payload)
{
  int tid = ompss_get_thread_num();
#if defined (USE_CORE_VERIFICATION)    
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)tile_out->output_buff;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)tile_in1->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in2->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in3->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.y, payload.x, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid]+extra_local_memory_idx[tid]*memory_block_size, graph.scratch_bytes_per_task);
  extra_local_memory_idx[tid]++;
  extra_local_memory_idx[tid] = extra_local_memory_idx[tid] % NB_LOCAL_MEMORY;
#else
  tile_out->dep = tile_in1->dep + tile_in2->dep + tile_in3->dep + 1;
  printf("Task4 tid %d, x %d, y %d, out %f, in1 %f, in2 %f, in3 %f\n", tid, payload.x, payload.y, tile_out->dep,tile_in1->dep, tile_in2->dep, tile_in3->dep);
#endif
}

void task5(tile_t *tile_out, tile_t *tile_in1, tile_t *tile_in2, tile_t *tile_in3, tile_t *tile_in4, payload_t payload)
{
  int tid = ompss_get_thread_num();
#if defined (USE_CORE_VERIFICATION)    
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)tile_out->output_buff;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)tile_in1->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in2->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in3->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in4->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.y, payload.x, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid]+extra_local_memory_idx[tid]*memory_block_size, graph.scratch_bytes_per_task);
  extra_local_memory_idx[tid]++;
  extra_local_memory_idx[tid] = extra_local_memory_idx[tid] % NB_LOCAL_MEMORY;
#else
  tile_out->dep = tile_in1->dep + tile_in2->dep + tile_in3->dep + tile_in4->dep + 1;
  printf("Task5 tid %d, x %d, y %d, out %f, in1 %f, in2 %f, in3 %f, in4 %f\n", tid, payload.x, payload.y, tile_out->dep,tile_in1->dep, tile_in2->dep, tile_in3->dep, tile_in4->dep);
#endif
}

void task6(tile_t *tile_out, tile_t *tile_in1, tile_t *tile_in2, tile_t *tile_in3, tile_t *tile_in4, tile_t *tile_in5, payload_t payload)
{
  int tid = ompss_get_thread_num();
#if defined (USE_CORE_VERIFICATION)    
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)tile_out->output_buff;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)tile_in1->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in2->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in3->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in4->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in5->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.y, payload.x, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid]+extra_local_memory_idx[tid]*memory_block_size, graph.scratch_bytes_per_task);
  extra_local_memory_idx[tid]++;
  extra_local_memory_idx[tid] = extra_local_memory_idx[tid] % NB_LOCAL_MEMORY;
#else
  tile_out->dep = tile_in1->dep + tile_in2->dep + tile_in3->dep + tile_in4->dep + tile_in5->dep + 1;
  printf("Task6 tid %d, x %d, y %d, out %f, in1 %f, in2 %f, in3 %f, in4 %f, in5 %f\n", tid, payload.x, payload.y, tile_out->dep,tile_in1->dep, tile_in2->dep, tile_in3->dep, tile_in4->dep, tile_in5->dep);
#endif
}

void task7(tile_t *tile_out, tile_t *tile_in1, tile_t *tile_in2, tile_t *tile_in3, tile_t *tile_in4, tile_t *tile_in5, tile_t *tile_in6, payload_t payload)
{
  int tid = ompss_get_thread_num();
#if defined (USE_CORE_VERIFICATION)    
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)tile_out->output_buff;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)tile_in1->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in2->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in3->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in4->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in5->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in6->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.y, payload.x, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid]+extra_local_memory_idx[tid]*memory_block_size, graph.scratch_bytes_per_task);
  extra_local_memory_idx[tid]++;
  extra_local_memory_idx[tid] = extra_local_memory_idx[tid] % NB_LOCAL_MEMORY;
#else
  tile_out->dep = tile_in1->dep + tile_in2->dep + tile_in3->dep + tile_in4->dep + tile_in5->dep + tile_in6->dep + 1;
  printf("Task7 tid %d, x %d, y %d, out %f, in1 %f, in2 %f, in3 %f, in4 %f, in5 %f, in6 %f\n", 
    tid, payload.x, payload.y, tile_out->dep,tile_in1->dep, tile_in2->dep, tile_in3->dep, tile_in4->dep, tile_in5->dep, tile_in6->dep);
#endif
}

void task8(tile_t *tile_out, tile_t *tile_in1, tile_t *tile_in2, tile_t *tile_in3, tile_t *tile_in4, tile_t *tile_in5, tile_t *tile_in6, tile_t *tile_in7, payload_t payload)
{
  int tid = ompss_get_thread_num();
#if defined (USE_CORE_VERIFICATION)    
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)tile_out->output_buff;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)tile_in1->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in2->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in3->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in4->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in5->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in6->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in7->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.y, payload.x, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid]+extra_local_memory_idx[tid]*memory_block_size, graph.scratch_bytes_per_task);
  extra_local_memory_idx[tid]++;
  extra_local_memory_idx[tid] = extra_local_memory_idx[tid] % NB_LOCAL_MEMORY;
#else
  tile_out->dep = tile_in1->dep + tile_in2->dep + tile_in3->dep + tile_in4->dep + tile_in5->dep + tile_in6->dep + tile_in7->dep + 1;
  printf("Task8 tid %d, x %d, y %d, out %f, in1 %f, in2 %f, in3 %f, in4 %f, in5 %f, in6 %f, in7 %f\n", 
    tid, payload.x, payload.y, tile_out->dep,tile_in1->dep, tile_in2->dep, tile_in3->dep, tile_in4->dep, tile_in5->dep, tile_in6->dep, tile_in7->dep);
#endif
}

void task9(tile_t *tile_out, tile_t *tile_in1, tile_t *tile_in2, tile_t *tile_in3, tile_t *tile_in4, tile_t *tile_in5, tile_t *tile_in6, tile_t *tile_in7, tile_t *tile_in8, payload_t payload)
{
  int tid = ompss_get_thread_num();
#if defined (USE_CORE_VERIFICATION)    
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)tile_out->output_buff;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)tile_in1->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in2->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in3->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in4->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in5->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in6->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in7->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in8->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.y, payload.x, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid]+extra_local_memory_idx[tid]*memory_block_size, graph.scratch_bytes_per_task);
  extra_local_memory_idx[tid]++;
  extra_local_memory_idx[tid] = extra_local_memory_idx[tid] % NB_LOCAL_MEMORY;
#else
  tile_out->dep = tile_in1->dep + tile_in2->dep + tile_in3->dep + tile_in4->dep + tile_in5->dep + tile_in6->dep + tile_in7->dep + tile_in8->dep + 1;
  printf("Task9 tid %d, x %d, y %d, out %f, in1 %f, in2 %f, in3 %f, in4 %f, in5 %f, in6 %f, in7 %f, in8 %f\n", 
    tid, payload.x, payload.y, tile_out->dep,tile_in1->dep, tile_in2->dep, tile_in3->dep, tile_in4->dep, tile_in5->dep, tile_in6->dep, tile_in7->dep, tile_in8->dep);
#endif
}

void task10(tile_t *tile_out, tile_t *tile_in1, tile_t *tile_in2, tile_t *tile_in3, tile_t *tile_in4, tile_t *tile_in5, tile_t *tile_in6, tile_t *tile_in7, tile_t *tile_in8, tile_t *tile_in9, payload_t payload)
{
  int tid = ompss_get_thread_num();
#if defined (USE_CORE_VERIFICATION)    
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)tile_out->output_buff;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)tile_in1->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in2->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in3->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in4->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in5->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in6->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in7->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in8->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)tile_in9->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.y, payload.x, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid]+extra_local_memory_idx[tid]*memory_block_size, graph.scratch_bytes_per_task);
  extra_local_memory_idx[tid]++;
  extra_local_memory_idx[tid] = extra_local_memory_idx[tid] % NB_LOCAL_MEMORY;
#else
  tile_out->dep = tile_in1->dep + tile_in2->dep + tile_in3->dep + tile_in4->dep + tile_in5->dep + tile_in6->dep + tile_in7->dep + tile_in8->dep + tile_in9->dep + 1;
  printf("Task10 tid %d, x %d, y %d, out %f, in1 %f, in2 %f, in3 %f, in4 %f, in5 %f, in6 %f, in7 %f, in8 %f, in9 %f\n", 
    tid, payload.x, payload.y, tile_out->dep,tile_in1->dep, tile_in2->dep, tile_in3->dep, tile_in4->dep, tile_in5->dep, tile_in6->dep, tile_in7->dep, tile_in8->dep, tile_in9->dep);
#endif
}

struct OmpSsApp : public App {
  OmpSsApp(int argc, char **argv);
  ~OmpSsApp();
  void execute_main_loop();
  void execute_timestep(size_t idx, long t);
private:
  void insert_task(std::vector<task_args_t> args, payload_t payload, size_t graph_id);
  void debug_printf(int verbose_level, const char *format, ...);
private:
  int nb_workers;
  //matrix_t *matrix;
};

matrix_t *matrix = NULL;

OmpSsApp::OmpSsApp(int argc, char **argv)
  : App(argc, argv)
{ 
  nb_workers = 1;
  
  for (int k = 1; k < argc; k++) {
    if (!strcmp(argv[k], "-worker")) {
      nb_workers = atol(argv[++k]);
    }
  }
  
  matrix = (matrix_t *)malloc(sizeof(matrix_t) * graphs.size());
  
  size_t max_scratch_bytes_per_task = 0;
  
  for (unsigned i = 0; i < graphs.size(); i++) {
    TaskGraph &graph = graphs[i];
    
    matrix[i].M = graph.nb_fields;
    matrix[i].N = graph.max_width;
    matrix[i].data = (tile_t*)malloc(sizeof(tile_t) * matrix[i].M * matrix[i].N);
  
    for (int j = 0; j < matrix[i].M * matrix[i].N; j++) {
      matrix[i].data[j].output_buff = (char *)malloc(sizeof(char) * graph.output_bytes_per_task);
    }
    
    if (graph.scratch_bytes_per_task > max_scratch_bytes_per_task) {
      max_scratch_bytes_per_task = graph.scratch_bytes_per_task;
    }
    
    printf("graph id %d, M = %d, N = %d\n, nb_fields %d", i, matrix[i].M, matrix[i].N, graph.nb_fields);
  }
  
  extra_local_memory = (char**)malloc(sizeof(char*) * (nb_workers+1));
  assert(extra_local_memory != NULL);
  extra_local_memory_idx = (int*)malloc(sizeof(int) * nb_workers);
  assert(extra_local_memory_idx != NULL);
  for (int k = 0; k < (nb_workers+1); k++) {
    if (max_scratch_bytes_per_task > 0) {
      extra_local_memory[k] = (char*)malloc(sizeof(char) * max_scratch_bytes_per_task * NB_LOCAL_MEMORY);
      //TaskGraph::prepare_scratch(extra_local_memory[k], sizeof(char)*max_scratch_bytes_per_task);
    } else {
      extra_local_memory[k] = NULL;
    }
    extra_local_memory_idx[k] = 0;
  }
  
  memory_block_size = max_scratch_bytes_per_task;
  
  // omp_set_dynamic(1);
  ompss_set_num_threads(nb_workers);

  if (max_scratch_bytes_per_task > 0) {
#if defined(OMPSS)    
    int numa_nodes;
    nanos_get_num_sockets( &numa_nodes );
#endif
    size_t buffer_size_bytes = sizeof(char)*max_scratch_bytes_per_task;
    for (int kk = 0; kk < (nb_workers); kk++) {
#if defined(OMPSS)      
      nanos_current_socket( kk % numa_nodes );
//      printf("init %p, numa_nodes %d\n", extra_local_memory[kk], numa_nodes);  
      #pragma omp task in(kk, buffer_size_bytes)
#else
      #pragma oss task in(kk, buffer_size_bytes)
#endif
      {
        //printf("init tid %d\n", ompss_get_thread_num());
        for (int k = 0; k < NB_LOCAL_MEMORY; k++) {
          TaskGraph::prepare_scratch(extra_local_memory[kk] + k * max_scratch_bytes_per_task, sizeof(char)*max_scratch_bytes_per_task);
        }
      }
    }
    OMPSS_TASKWAIT
  }

}

OmpSsApp::~OmpSsApp()
{
  for (unsigned i = 0; i < graphs.size(); i++) {
    for (int j = 0; j < matrix[i].M * matrix[i].N; j++) {
      free(matrix[i].data[j].output_buff);
      matrix[i].data[j].output_buff = NULL;
    }
    free(matrix[i].data);
    matrix[i].data = NULL;
  }
  
  free(matrix);
  matrix = NULL;
  
  for (int j = 0; j < nb_workers; j++) {
    if (extra_local_memory[j] != NULL) {
      free(extra_local_memory[j]);
      extra_local_memory[j] = NULL;
    }
  }
  free(extra_local_memory);
  extra_local_memory = NULL;
  free(extra_local_memory_idx);
  extra_local_memory_idx = NULL;
}

void OmpSsApp::execute_main_loop()
{ 
  display();
  
  Timer::time_start();
  
  for (unsigned i = 0; i < graphs.size(); i++) {
    const TaskGraph &g = graphs[i];
  
/*#pragma omp parallel*/
    //{
//#pragma omp master
      /*{*/
        for (int y = 0; y < g.timesteps; y++) {
          execute_timestep(i, y);
        }
/*      }*/
    //}
  }

OMPSS_TASKWAIT
  
  double elapsed = Timer::time_end();
  report_timing(elapsed);
}

void OmpSsApp::execute_timestep(size_t idx, long t)
{
  const TaskGraph &g = graphs[idx];
  long offset = g.offset_at_timestep(t);
  long width = g.width_at_timestep(t);
  long dset = g.dependence_set_at_timestep(t);
  int nb_fields = g.nb_fields;
  
  std::vector<task_args_t> args;
  payload_t payload;
  task_args_t task_args;

  for (int x = offset; x <= offset+width-1; x++) {
    std::vector<std::pair<long, long> > deps = g.dependencies(dset, x);   
    int num_args;    
    
    if (deps.size() == 0) {
      num_args = 1;
      debug_printf(1, "%d[%d] ", x, num_args);
      task_args.x = x;
      task_args.y = t % nb_fields;
      args.push_back(task_args);
    } else {
      if (t == 0) {
        num_args = 1;
        debug_printf(1, "%d[%d] ", x, num_args);
        task_args.x = x;
        task_args.y = t % nb_fields;
        args.push_back(task_args);
      } else {
        num_args = 1;
        task_args.x = x;
        task_args.y = t % nb_fields;
        args.push_back(task_args);
        long last_offset = g.offset_at_timestep(t-1);
        long last_width = g.width_at_timestep(t-1);
        for (std::pair<long, long> dep : deps) {
          num_args += dep.second - dep.first + 1;
          debug_printf(1, "%d[%d, %d, %d] ", x, num_args, dep.first, dep.second); 
          for (int i = dep.first; i <= dep.second; i++) {
            if (i >= last_offset && i < last_offset + last_width) {
              task_args.x = i;
              task_args.y = (t-1) % nb_fields;
              args.push_back(task_args);
            } else {
              num_args --;
            }
          }
        }
      }
    }
    
    payload.y = t;
    payload.x = x;
    payload.graph = g;
    insert_task(args, payload, idx);
    args.clear();
  }
}

void OmpSsApp::insert_task(std::vector<task_args_t> args, payload_t payload, size_t graph_id)
{
  int num_args = args.size();
  tile_t *mat = matrix[graph_id].data;
  int x0 = args[0].x;
  int y0 = args[0].y;
 // printf("x %d, y %d\n", x0, y0);
  switch(num_args) {
  case 1:
  {
OMPSS_TASK_DEPEND(inout: mat[y0 * matrix[graph_id].N + x0])
      task1(&mat[y0 * matrix[graph_id].N + x0], payload);
    break;
  }
  
  case 2: 
  {
    int x1 = args[1].x;
    int y1 = args[1].y;
OMPSS_TASK_DEPEND(in: mat[y1 * matrix[graph_id].N + x1]) depend(inout: mat[y0 * matrix[graph_id].N + x0])
      task2(&mat[y0 * matrix[graph_id].N + x0], 
            &mat[y1 * matrix[graph_id].N + x1], payload);
    break;
  }
  
  case 3: 
  {
    int x1 = args[1].x;
    int y1 = args[1].y;
    int x2 = args[2].x;
    int y2 = args[2].y;
OMPSS_TASK_DEPEND(in: mat[y1 * matrix[graph_id].N + x1]) depend(in: mat[y2 * matrix[graph_id].N + x2]) depend(inout: mat[y0 * matrix[graph_id].N + x0])
      task3(&mat[y0 * matrix[graph_id].N + x0], 
            &mat[y1 * matrix[graph_id].N + x1], 
            &mat[y2 * matrix[graph_id].N + x2], payload);
    break;
  }
  
  case 4: 
  {
    int x1 = args[1].x;
    int y1 = args[1].y;
    int x2 = args[2].x;
    int y2 = args[2].y;
    int x3 = args[3].x;
    int y3 = args[3].y;
OMPSS_TASK_DEPEND(in: mat[y1 * matrix[graph_id].N + x1]) depend(in: mat[y2 * matrix[graph_id].N + x2]) depend(in: mat[y3 * matrix[graph_id].N + x3]) depend(inout: mat[y0 * matrix[graph_id].N + x0])
      task4(&mat[y0 * matrix[graph_id].N + x0], 
            &mat[y1 * matrix[graph_id].N + x1], 
            &mat[y2 * matrix[graph_id].N + x2], 
            &mat[y3 * matrix[graph_id].N + x3], payload);
    break;
  }
  
  case 5: 
  {
    int x1 = args[1].x;
    int y1 = args[1].y;
    int x2 = args[2].x;
    int y2 = args[2].y;
    int x3 = args[3].x;
    int y3 = args[3].y;
    int x4 = args[4].x;
    int y4 = args[4].y;
OMPSS_TASK_DEPEND(in: mat[y1 * matrix[graph_id].N + x1]) depend(in: mat[y2 * matrix[graph_id].N + x2]) depend(in: mat[y3 * matrix[graph_id].N + x3]) depend(in: mat[y4 * matrix[graph_id].N + x4]) depend(inout: mat[y0 * matrix[graph_id].N + x0])
      task5(&mat[y0 * matrix[graph_id].N + x0], 
            &mat[y1 * matrix[graph_id].N + x1], 
            &mat[y2 * matrix[graph_id].N + x2], 
            &mat[y3 * matrix[graph_id].N + x3], 
            &mat[y4 * matrix[graph_id].N + x4], payload);
    break;
  }
  
  case 6: 
  {
    int x1 = args[1].x;
    int y1 = args[1].y;
    int x2 = args[2].x;
    int y2 = args[2].y;
    int x3 = args[3].x;
    int y3 = args[3].y;
    int x4 = args[4].x;
    int y4 = args[4].y;
    int x5 = args[5].x;
    int y5 = args[5].y;
OMPSS_TASK_DEPEND(in: mat[y1 * matrix[graph_id].N + x1]) depend(in: mat[y2 * matrix[graph_id].N + x2]) depend(in: mat[y3 * matrix[graph_id].N + x3]) depend(in: mat[y4 * matrix[graph_id].N + x4]) depend(in: mat[y5 * matrix[graph_id].N + x5]) depend(inout: mat[y0 * matrix[graph_id].N + x0])
      task6(&mat[y0 * matrix[graph_id].N + x0], 
            &mat[y1 * matrix[graph_id].N + x1], 
            &mat[y2 * matrix[graph_id].N + x2], 
            &mat[y3 * matrix[graph_id].N + x3], 
            &mat[y4 * matrix[graph_id].N + x4], 
            &mat[y5 * matrix[graph_id].N + x5], payload);
    break;
  }
  
  case 7: 
  {
    int x1 = args[1].x;
    int y1 = args[1].y;
    int x2 = args[2].x;
    int y2 = args[2].y;
    int x3 = args[3].x;
    int y3 = args[3].y;
    int x4 = args[4].x;
    int y4 = args[4].y;
    int x5 = args[5].x;
    int y5 = args[5].y;
    int x6 = args[6].x;
    int y6 = args[6].y;
OMPSS_TASK_DEPEND(in: mat[y1 * matrix[graph_id].N + x1]) depend(in: mat[y2 * matrix[graph_id].N + x2]) depend(in: mat[y3 * matrix[graph_id].N + x3]) depend(in: mat[y4 * matrix[graph_id].N + x4]) depend(in: mat[y5 * matrix[graph_id].N + x5]) depend(in: mat[y6 * matrix[graph_id].N + x6]) depend(inout: mat[y0 * matrix[graph_id].N + x0]) untied mergeable
      task7(&mat[y0 * matrix[graph_id].N + x0], 
            &mat[y1 * matrix[graph_id].N + x1], 
            &mat[y2 * matrix[graph_id].N + x2], 
            &mat[y3 * matrix[graph_id].N + x3], 
            &mat[y4 * matrix[graph_id].N + x4], 
            &mat[y5 * matrix[graph_id].N + x5], 
            &mat[y6 * matrix[graph_id].N + x6], payload);
    break;
  }
  
  case 8: 
  {
    int x1 = args[1].x;
    int y1 = args[1].y;
    int x2 = args[2].x;
    int y2 = args[2].y;
    int x3 = args[3].x;
    int y3 = args[3].y;
    int x4 = args[4].x;
    int y4 = args[4].y;
    int x5 = args[5].x;
    int y5 = args[5].y;
    int x6 = args[6].x;
    int y6 = args[6].y;
    int x7 = args[7].x;
    int y7 = args[7].y;
OMPSS_TASK_DEPEND(in: mat[y1 * matrix[graph_id].N + x1]) depend(in: mat[y2 * matrix[graph_id].N + x2]) depend(in: mat[y3 * matrix[graph_id].N + x3]) depend(in: mat[y4 * matrix[graph_id].N + x4]) depend(in: mat[y5 * matrix[graph_id].N + x5]) depend(in: mat[y6 * matrix[graph_id].N + x6]) depend(in: mat[y7 * matrix[graph_id].N + x7]) depend(inout: mat[y0 * matrix[graph_id].N + x0]) untied mergeable
      task8(&mat[y0 * matrix[graph_id].N + x0], 
            &mat[y1 * matrix[graph_id].N + x1], 
            &mat[y2 * matrix[graph_id].N + x2], 
            &mat[y3 * matrix[graph_id].N + x3], 
            &mat[y4 * matrix[graph_id].N + x4], 
            &mat[y5 * matrix[graph_id].N + x5], 
            &mat[y6 * matrix[graph_id].N + x6], 
            &mat[y7 * matrix[graph_id].N + x7], payload);
    break;
  }
  
  case 9: 
  {
    int x1 = args[1].x;
    int y1 = args[1].y;
    int x2 = args[2].x;
    int y2 = args[2].y;
    int x3 = args[3].x;
    int y3 = args[3].y;
    int x4 = args[4].x;
    int y4 = args[4].y;
    int x5 = args[5].x;
    int y5 = args[5].y;
    int x6 = args[6].x;
    int y6 = args[6].y;
    int x7 = args[7].x;
    int y7 = args[7].y;
    int x8 = args[8].x;
    int y8 = args[8].y;
OMPSS_TASK_DEPEND(in: mat[y1 * matrix[graph_id].N + x1]) depend(in: mat[y2 * matrix[graph_id].N + x2]) depend(in: mat[y3 * matrix[graph_id].N + x3]) depend(in: mat[y4 * matrix[graph_id].N + x4]) depend(in: mat[y5 * matrix[graph_id].N + x5]) depend(in: mat[y6 * matrix[graph_id].N + x6]) depend(in: mat[y7 * matrix[graph_id].N + x7]) depend(in: mat[y8 * matrix[graph_id].N + x8]) depend(inout: mat[y0 * matrix[graph_id].N + x0]) untied mergeable
      task9(&mat[y0 * matrix[graph_id].N + x0], 
            &mat[y1 * matrix[graph_id].N + x1], 
            &mat[y2 * matrix[graph_id].N + x2], 
            &mat[y3 * matrix[graph_id].N + x3], 
            &mat[y4 * matrix[graph_id].N + x4], 
            &mat[y5 * matrix[graph_id].N + x5], 
            &mat[y6 * matrix[graph_id].N + x6], 
            &mat[y7 * matrix[graph_id].N + x7], 
            &mat[y8 * matrix[graph_id].N + x8], payload);
    break;
  }
  
  case 10: 
  {
    int x1 = args[1].x;
    int y1 = args[1].y;
    int x2 = args[2].x;
    int y2 = args[2].y;
    int x3 = args[3].x;
    int y3 = args[3].y;
    int x4 = args[4].x;
    int y4 = args[4].y;
    int x5 = args[5].x;
    int y5 = args[5].y;
    int x6 = args[6].x;
    int y6 = args[6].y;
    int x7 = args[7].x;
    int y7 = args[7].y;
    int x8 = args[8].x;
    int y8 = args[8].y;
    int x9 = args[9].x;
    int y9 = args[9].y;
OMPSS_TASK_DEPEND(in: mat[y1 * matrix[graph_id].N + x1]) depend(in: mat[y2 * matrix[graph_id].N + x2]) depend(in: mat[y3 * matrix[graph_id].N + x3]) depend(in: mat[y4 * matrix[graph_id].N + x4]) depend(in: mat[y5 * matrix[graph_id].N + x5]) depend(in: mat[y6 * matrix[graph_id].N + x6]) depend(in: mat[y7 * matrix[graph_id].N + x7]) depend(in: mat[y8 * matrix[graph_id].N + x8]) depend(in: mat[y9 * matrix[graph_id].N + x9]) depend(inout: mat[y0 * matrix[graph_id].N + x0]) untied mergeable
      task10(&mat[y0 * matrix[graph_id].N + x0], 
            &mat[y1 * matrix[graph_id].N + x1], 
            &mat[y2 * matrix[graph_id].N + x2], 
            &mat[y3 * matrix[graph_id].N + x3], 
            &mat[y4 * matrix[graph_id].N + x4], 
            &mat[y5 * matrix[graph_id].N + x5], 
            &mat[y6 * matrix[graph_id].N + x6], 
            &mat[y7 * matrix[graph_id].N + x7], 
            &mat[y8 * matrix[graph_id].N + x8], 
            &mat[y9 * matrix[graph_id].N + x9], payload);
    break;
  }
  
  default:
    assert(false && "unexpected num_args");
  };
}

void OmpSsApp::debug_printf(int verbose_level, const char *format, ...)
{
  if (verbose_level > VERBOSE_LEVEL) {
    return;
  }
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  va_end(args);
}

int main(int argc, char ** argv)
{
  OmpSsApp app(argc, argv);
  app.execute_main_loop();

  return 0;
}
