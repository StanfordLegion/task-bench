#include <stdarg.h>
#include <assert.h>
#include <string.h>
#include <algorithm> 
#include "core.h"
#include "timer.h"

#define VERBOSE_LEVEL 0

pthread_barrier_t mybarrier;

typedef struct task_args_s {
  int tid;
  int nb_tasks;
  double *time_start;
  double *time_end;
  char *thread_buff;
  TaskGraph graph;
}task_args_t;

static void bind_thread(int core_id)
{
  cpu_set_t cpuset;
  CPU_ZERO(&cpuset);
  CPU_SET(core_id, &cpuset);
  
  pthread_t thread = pthread_self();
  
  int s = pthread_setaffinity_np(thread, sizeof(cpu_set_t), &cpuset);
  if (s != 0) {
     printf("pthread_setaffinity_np error %d\n", s);
  }
  
  cpu_set_t cpuset_valid;
  CPU_ZERO(&cpuset_valid);
  s = pthread_getaffinity_np(thread, sizeof(cpu_set_t), &cpuset_valid);
  if (s != 0) {
    printf("pthread_getaffinity_np error %d\n", s);
  }
  for (int i = 0; i < CPU_SETSIZE; i++) {
    if (i == core_id) {
      assert(CPU_ISSET(i, &cpuset_valid) == 1);
    } else {
      assert(CPU_ISSET(i, &cpuset_valid) == 0);
    }
  }
  
 // printf("thread %d set to %d\n", core_id-1, core_id);
}

void *execute_task(void *tr)
{
  task_args_t *task_arg = (task_args_t *)tr;
  
  bind_thread(task_arg->tid+1);
  
  Kernel k(task_arg->graph.kernel);
  
  // warm up
  for (int i = 0; i < 10; i++) {
    k.execute(0, 0, task_arg->thread_buff, task_arg->graph.scratch_bytes_per_task);
  }
  
  pthread_barrier_wait(&mybarrier);
  
  *(task_arg->time_start) = Timer::get_cur_time();
  for (int i = 0; i < task_arg->nb_tasks; i++) {
    k.execute(i, task_arg->tid, task_arg->thread_buff, task_arg->graph.scratch_bytes_per_task);
  }
  *(task_arg->time_end) = Timer::get_cur_time();
  
  long long flops = flops_per_task(task_arg->graph) * task_arg->nb_tasks;
  
  printf("thread #%d, nb_tasks %d, time (%p, %p), %f ms, flop/s %e\n", 
        task_arg->tid, task_arg->nb_tasks, 
        task_arg->time_start, task_arg->time_end, (*(task_arg->time_end) - *(task_arg->time_start)) * 1e3,
        flops / (*(task_arg->time_end) - *(task_arg->time_start)));

  return NULL;
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
  int nb_workers;
};

KernelBenchApp::KernelBenchApp(int argc, char **argv)
  : App(argc, argv)
{
  assert(graphs.size() == 1);
  TaskGraph &graph = graphs[0];
  
  assert(graph.dependence == TRIVIAL);
  
  nb_workers = 1;
  
  int i;
  for (i = 1; i < argc; i++) {
    if (!strcmp(argv[i], "-worker")) {
      nb_workers = atol(argv[++i]);
    }
  }
  
  nb_tasks = graph.max_width * graph.timesteps;
  assert(nb_tasks % nb_workers == 0);
  
  // init buffer for memory kernel
  local_buff = nullptr;
  local_buff = (char**)malloc(sizeof(char*) * nb_workers);
  assert(local_buff != nullptr);
  
  for (i = 0; i < nb_workers; i++) {
    if (graph.scratch_bytes_per_task > 0) {
      local_buff[i] = (char*)malloc(sizeof(char) * graph.scratch_bytes_per_task);
      assert(local_buff[i] != nullptr);
    } else {
      local_buff[i] = nullptr;
    }
  }
  
  // init timer array
  time_start = nullptr;
  time_end = nullptr;
  time_start = (double*)malloc(sizeof(double) * nb_workers);
  time_end = (double*)malloc(sizeof(double) * nb_workers);
  assert(time_start != nullptr);
  assert(time_end != nullptr);
  
  threads = nullptr;
  threads = (pthread_t*)malloc(sizeof(pthread_t) * nb_workers);
  assert(threads != nullptr);
  
  pthread_barrier_init(&mybarrier, NULL, nb_workers);
  
  // map main thread to 0
  bind_thread(0);
}

KernelBenchApp::~KernelBenchApp()
{
  if (local_buff != nullptr) {
    for (int i = 0; i < nb_workers; i++) {
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
  
  task_args_t *task_args = (task_args_t*)malloc(sizeof(task_args_t) * nb_workers);
  assert(task_args != nullptr);
  
  // create worker threads
  for (i = 0; i < nb_workers; i++) {
    task_args[i].tid = i;
    task_args[i].time_start = &(time_start[i]);
    task_args[i].time_end = &(time_end[i]);
    task_args[i].thread_buff = local_buff[i];
    task_args[i].graph = graphs[0];
    task_args[i].nb_tasks = nb_tasks/nb_workers;
    rc = pthread_create(&threads[i], NULL, execute_task, (void *)&(task_args[i]));
    if (rc){
      debug_printf(0, "ERROR; return code from pthread_create() is %d\n", rc);
      return;
    }
  }
  
  // worker join
  void *status;
  for (i = 0; i < nb_workers; i++) {
    rc = pthread_join(threads[i], &status);
    if (rc) {
      debug_printf(0, "ERROR; return code from pthread_join() is %d\n", rc);
      return;
    }
  }
  
  free(task_args);
  task_args = nullptr;
  
  // timing
  double min_time_start = *std::min_element(time_start,time_start+nb_workers);
  double max_time_end = *std::max_element(time_end,time_end+nb_workers);
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
