#include <stdarg.h>
#include <assert.h>
#include <string.h>
#include <algorithm> 
#include "core.h"
#include "timer.h"

#define VERBOSE_LEVEL 0

typedef struct task_args_s {
  int tid;
  int nb_tasks;
  double *time_start;
  double *time_end;
  char *thread_buff;
  TaskGraph graph;
}task_args_t;

void *execute_task(void *tr)
{
  task_args_t *task_arg = (task_args_t *)tr;
  
  cpu_set_t cpuset;
  CPU_ZERO(&cpuset);
  CPU_SET(task_arg->tid, &cpuset);
  
  pthread_t thread = pthread_self();
  
  int s = pthread_setaffinity_np(thread, sizeof(cpu_set_t), &cpuset);
  if (s != 0) {
     printf("pthread_setaffinity_np error %d\n", s);
   }
  
  *(task_arg->time_start) = Timer::get_cur_time();
  Kernel k(task_arg->graph.kernel);
  for (int i = 0; i < task_arg->nb_tasks; i++) {
    k.execute(task_arg->thread_buff, task_arg->graph.scratch_bytes_per_task);
  }
  *(task_arg->time_end) = Timer::get_cur_time();
  
  printf("thread #%d, nb_tasks %d, time (%p, %p), %f ms\n", task_arg->tid, task_arg->nb_tasks, task_arg->time_start, task_arg->time_end, (*(task_arg->time_end) - *(task_arg->time_start)) * 1e3);
}

struct KernelBenchApp : public App {
  KernelBenchApp(int argc, char **argv);
  ~KernelBenchApp();
  void execute_main_loop();
private:
  void debug_printf(int verbose_level, const char *format, ...);
private:
  size_t nb_tasks;
  char **local_buff;
  double *time_start;
  double *time_end;
  pthread_t *threads;
  int nb_cores;
};

KernelBenchApp::KernelBenchApp(int argc, char **argv)
  : App(argc, argv)
{
  assert(graphs.size() == 1);
  TaskGraph &graph = graphs[0];
  
  assert(graph.dependence == TRIVIAL);
  
  nb_cores = 1;
  
  int i;
  for (i = 1; i < argc; i++) {
    if (!strcmp(argv[i], "-core")) {
      nb_cores = atol(argv[++i]);
    }
  }
  
  nb_tasks = graph.max_width * graph.timesteps;
  assert(nb_tasks % nb_cores == 0);
  
  local_buff = nullptr;
  local_buff = (char**)malloc(sizeof(char*) * nb_cores);
  assert(local_buff != nullptr);
  
  for (i = 0; i < nb_cores; i++) {
    if (graph.kernel.type == MEMORY_BOUND) {
      local_buff[i] = (char*)malloc(sizeof(char) * graph.scratch_bytes_per_task);
      assert(local_buff[i] != nullptr);
    } else {
      local_buff[i] = nullptr;
    }
  }
  
  time_start = nullptr;
  time_end = nullptr;
  time_start = (double*)malloc(sizeof(double) * nb_cores);
  time_end = (double*)malloc(sizeof(double) * nb_cores);
  assert(time_start != nullptr);
  assert(time_end != nullptr);
  
  threads = nullptr;
  threads = (pthread_t*)malloc(sizeof(pthread_t) * nb_cores);
  assert(threads != nullptr);
}

KernelBenchApp::~KernelBenchApp()
{
  if (local_buff != nullptr) {
    for (int i = 0; i < nb_cores; i++) {
      free(local_buff[i]);
      local_buff[i] = nullptr;
    }
    local_buff = nullptr;
  }
  
  if (time_start != nullptr) {
    free(time_start);
    time_start = nullptr;
  }
  
  if (time_end != nullptr) {
    free(time_end);
    time_end = nullptr;
  }
}

void KernelBenchApp::execute_main_loop()
{
  int i, rc;
  
  display();
  
  task_args_t *task_args = (task_args_t*)malloc(sizeof(task_args_t) * nb_cores);
  assert(task_args != nullptr);
  
  for (i = 0; i < nb_cores; i++) {
    task_args[i].tid = i;
    task_args[i].time_start = &(time_start[i]);
    task_args[i].time_end = &(time_end[i]);
    task_args[i].thread_buff = local_buff[i];
    task_args[i].graph = graphs[0];
    task_args[i].nb_tasks = nb_tasks/nb_cores;
    rc = pthread_create(&threads[i], NULL, execute_task, (void *)&(task_args[i]));
    if (rc){
      debug_printf(0, "ERROR; return code from pthread_create() is %d\n", rc);
      return;
    }
  }
  
  void *status;
  for (i = 0; i < nb_cores; i++) {
    rc = pthread_join(threads[i], &status);
    if (rc) {
      debug_printf(0, "ERROR; return code from pthread_join() is %d\n", rc);
      return;
    }
  }
  
  free(task_args);
  task_args = nullptr;
  
  double min_time_start = *std::min_element(time_start,time_start+nb_cores);
  double max_time_end = *std::max_element(time_end,time_end+nb_cores);
  double time_elapsed = max_time_end - min_time_start;
  
  report_timing(time_elapsed);
  debug_printf(0, "total time (%f, %f) %f ms\n", min_time_start*1e3, max_time_end*1e3, time_elapsed * 1e3);
}

void KernelBenchApp::debug_printf(int verbose_level, const char *format, ...)
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
  KernelBenchApp app(argc, argv);
  app.execute_main_loop();

  return 0;
}