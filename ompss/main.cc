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

char **extra_local_memory;

void task1(tile_t *tile_out, payload_t payload)
{
  int tid = omp_get_thread_num();
#if defined (USE_CORE_VERIFICATION)    
  std::pair<long, long> *output = reinterpret_cast<std::pair<long, long> *>(tile_out->output_buff);
  output->first = payload.y;
  output->second = payload.x;
  Kernel k(payload.graph.kernel);
  k.execute(payload.y, payload.x, extra_local_memory[tid], payload.graph.scratch_bytes_per_task);
#else  
  tile_out->dep = 0;
  printf("Task1 tid %d, x %d, y %d, out %f\n", tid, payload.x, payload.y, tile_out->dep);
#endif  
}

void task2(tile_t *tile_out, tile_t *tile_in1, payload_t payload)
{
  int tid = omp_get_thread_num();
#if defined (USE_CORE_VERIFICATION)    
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)tile_out->output_buff;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)tile_in1->output_buff);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  graph.execute_point(payload.y, payload.x, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);
#else  
  tile_out->dep = tile_in1->dep + 1;
  printf("Task2 tid %d, x %d, y %d, out %f, in1 %f\n", tid, payload.x, payload.y, tile_out->dep,tile_in1->dep);
#endif
}

void task3(tile_t *tile_out, tile_t *tile_in1, tile_t *tile_in2, payload_t payload)
{
  int tid = omp_get_thread_num();
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
                     input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);
#else  
  tile_out->dep = tile_in1->dep + tile_in2->dep + 1;
  printf("Task3 tid %d, x %d, y %d, out %f, in1 %f, in2 %f\n", tid, payload.x, payload.y, tile_out->dep,tile_in1->dep, tile_in2->dep);
#endif
}

void task4(tile_t *tile_out, tile_t *tile_in1, tile_t *tile_in2, tile_t *tile_in3, payload_t payload)
{
  int tid = omp_get_thread_num();
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
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);
#else
  tile_out->dep = tile_in1->dep + tile_in2->dep + tile_in3->dep + 1;
  printf("Task4 tid %d, x %d, y %d, out %f, in1 %f, in2 %f, in3 %f\n", tid, payload.x, payload.y, tile_out->dep,tile_in1->dep, tile_in2->dep, tile_in3->dep);
#endif
}

void task5(tile_t *tile_out, tile_t *tile_in1, tile_t *tile_in2, tile_t *tile_in3, tile_t *tile_in4, payload_t payload)
{
  int tid = omp_get_thread_num();
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
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);
#else
  tile_out->dep = tile_in1->dep + tile_in2->dep + tile_in3->dep + tile_in4->dep + 1;
  printf("Task5 tid %d, x %d, y %d, out %f, in1 %f, in2 %f, in3 %f, in4 %f\n", tid, payload.x, payload.y, tile_out->dep,tile_in1->dep, tile_in2->dep, tile_in3->dep, tile_in4->dep);
#endif
}

void task6(tile_t *tile_out, tile_t *tile_in1, tile_t *tile_in2, tile_t *tile_in3, tile_t *tile_in4, tile_t *tile_in5, payload_t payload)
{
  int tid = omp_get_thread_num();
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
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);
#else
  tile_out->dep = tile_in1->dep + tile_in2->dep + tile_in3->dep + tile_in4->dep + tile_in5->dep + 1;
  printf("Task6 tid %d, x %d, y %d, out %f, in1 %f, in2 %f, in3 %f, in4 %f, in5 %f\n", tid, payload.x, payload.y, tile_out->dep,tile_in1->dep, tile_in2->dep, tile_in3->dep, tile_in4->dep, tile_in5->dep);
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
  int nb_fields;
  //matrix_t *matrix;
};

matrix_t *matrix = NULL;

OmpSsApp::OmpSsApp(int argc, char **argv)
  : App(argc, argv)
{ 
  nb_workers = 1;
  nb_fields = 0;
  
  for (int k = 1; k < argc; k++) {
    if (!strcmp(argv[k], "-worker")) {
      nb_workers = atol(argv[++k]);
    }
    if (!strcmp(argv[k], "-field")) {
      nb_fields = atol(argv[++k]);
    }
  }
  
  matrix = (matrix_t *)malloc(sizeof(matrix_t) * graphs.size());
  
  size_t max_scratch_bytes_per_task = 0;
  
  for (unsigned i = 0; i < graphs.size(); i++) {
    TaskGraph &graph = graphs[i];
    
    if (nb_fields == 0) {
      nb_fields = graph.timesteps;
    }
    matrix[i].M = nb_fields;
    matrix[i].N = graph.max_width;
    matrix[i].data = (tile_t*)malloc(sizeof(tile_t) * matrix[i].M * matrix[i].N);
  
    for (int j = 0; j < matrix[i].M * matrix[i].N; j++) {
      matrix[i].data[j].output_buff = (char *)malloc(sizeof(char) * graph.output_bytes_per_task);
    }
    
    if (graph.scratch_bytes_per_task > max_scratch_bytes_per_task) {
      max_scratch_bytes_per_task = graph.scratch_bytes_per_task;
    }
    
    printf("graph id %d, M = %d, N = %d\n", i, matrix[i].M, matrix[i].N);
  }
  
  extra_local_memory = (char**)malloc(sizeof(char*) * (nb_workers+1));
  assert(extra_local_memory != NULL);
  for (int k = 0; k < (nb_workers+1); k++) {
    if (max_scratch_bytes_per_task > 0) {
      extra_local_memory[k] = (char*)malloc(sizeof(char)*max_scratch_bytes_per_task);
    } else {
      extra_local_memory[k] = NULL;
    }
  }
  
  // omp_set_dynamic(1);
  omp_set_num_threads(nb_workers);
  

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

#pragma omp taskwait  
  
  double elapsed = Timer::time_end();
  report_timing(elapsed);
}

void OmpSsApp::execute_timestep(size_t idx, long t)
{
  const TaskGraph &g = graphs[idx];
  long offset = g.offset_at_timestep(t);
  long width = g.width_at_timestep(t);
  long dset = g.dependence_set_at_timestep(t);
  
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
        for (std::pair<long, long> dep : deps) {
          num_args += dep.second - dep.first + 1;
          debug_printf(1, "%d[%d, %d, %d] ", x, num_args, dep.first, dep.second); 
          for (int i = dep.first; i <= dep.second; i++) {
            task_args.x = i;
            task_args.y = (t-1) % nb_fields;
            args.push_back(task_args);
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
#pragma omp task depend(inout: mat[y0 * matrix[graph_id].N + x0])
      task1(&mat[y0 * matrix[graph_id].N + x0], payload);
    break;
  }
  
  case 2: 
  {
    int x1 = args[1].x;
    int y1 = args[1].y;
#pragma omp task depend(in: mat[y1 * matrix[graph_id].N + x1]) depend(inout: mat[y0 * matrix[graph_id].N + x0])
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
#pragma omp task depend(in: mat[y1 * matrix[graph_id].N + x1]) depend(in: mat[y2 * matrix[graph_id].N + x2]) depend(inout: mat[y0 * matrix[graph_id].N + x0])
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
#pragma omp task depend(in: mat[y1 * matrix[graph_id].N + x1]) depend(in: mat[y2 * matrix[graph_id].N + x2]) depend(in: mat[y3 * matrix[graph_id].N + x3]) depend(inout: mat[y0 * matrix[graph_id].N + x0])
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
#pragma omp task depend(in: mat[y1 * matrix[graph_id].N + x1]) depend(in: mat[y2 * matrix[graph_id].N + x2]) depend(in: mat[y3 * matrix[graph_id].N + x3]) depend(in: mat[y4 * matrix[graph_id].N + x4]) depend(inout: mat[y0 * matrix[graph_id].N + x0])
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
#pragma omp task depend(in: mat[y1 * matrix[graph_id].N + x1]) depend(in: mat[y2 * matrix[graph_id].N + x2]) depend(in: mat[y3 * matrix[graph_id].N + x3]) depend(in: mat[y4 * matrix[graph_id].N + x4]) depend(in: mat[y5 * matrix[graph_id].N + x5]) depend(inout: mat[y0 * matrix[graph_id].N + x0])
      task6(&mat[y0 * matrix[graph_id].N + x0], 
            &mat[y1 * matrix[graph_id].N + x1], 
            &mat[y2 * matrix[graph_id].N + x2], 
            &mat[y3 * matrix[graph_id].N + x3], 
            &mat[y4 * matrix[graph_id].N + x4], 
            &mat[y5 * matrix[graph_id].N + x5], payload);
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
