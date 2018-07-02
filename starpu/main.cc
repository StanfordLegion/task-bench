#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <mpi.h>
#include <starpu_mpi.h>
#include <starpu_profiling.h>
#include "data.h"
#include "core.h"

#include <unistd.h>

static void task1(void *descr[], void *cl_arg)
{
    float *a;
    int i, j;
    a = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
    starpu_codelet_unpack_args(cl_arg, &i, &j);
    
    a[0] = 0.0;
    int rank;
    starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

    printf("Task1 i %d, j %d, rank %d, data %f\n", i, j, rank, a[0]);
}

static void task2(void *descr[], void *cl_arg)
{
    float *a, *b;
    int i, j;
    a = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
    b = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
    starpu_codelet_unpack_args(cl_arg, &i, &j);
    
    b[0] = a[0] + 1.0;
    
    int rank;
    starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

    printf("Task2 i %d, j %d, rank %d, value %f\n", i, j, rank, b[0]);
}

static void task3(void *descr[], void *cl_arg)
{
    float *a, *b, *c;
    int i, j;
    a = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
    b = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
    c = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
    starpu_codelet_unpack_args(cl_arg, &i, &j);
    
    c[0] = a[0] + b[0] + 1.0;
    
    int rank;
    starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

    printf("Task3 i %d, j %d, rank %d, value %f\n", i, j, rank, c[0]);
}

static void task4(void *descr[], void *cl_arg)
{
    float *a, *b, *c, *d;
    int i, j;
    a = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
    b = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
    c = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
    d = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
    starpu_codelet_unpack_args(cl_arg, &i, &j);
    
    d[0] = a[0] + b[0] + c[0] + 1.0;
    
    int rank;
    starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

    printf("Task4 i %d, j %d, rank %d, value %f\n", i, j, rank, d[0]);
}

class Codelet {
public:
  Codelet(int nbuffers, starpu_cpu_func_t cpu_func, uint32_t original_location, const char* name);
  ~Codelet();
  void set_performance_model(enum starpu_perfmodel_type type);
public:
  struct starpu_codelet codelet;
};

Codelet::Codelet(int nbuffers, starpu_cpu_func_t cpu_func, uint32_t original_location, const char* name)
{
  codelet.where = original_location;
  codelet.cpu_funcs[0] = cpu_func;
  codelet.nbuffers = nbuffers;
  codelet.name = name;
  codelet.model = NULL;
  
//  set_performance_model(STARPU_HISTORY_BASED);
}

Codelet::~Codelet()
{
  if (codelet.model != NULL) {
    free(codelet.model);
  }
}

void Codelet::set_performance_model(enum starpu_perfmodel_type type)
{
  if (codelet.model != NULL) {
      free(codelet.model);
      codelet.model = NULL;
  }
  struct starpu_perfmodel *model = (struct starpu_perfmodel *)malloc(sizeof(struct starpu_perfmodel));
  model->type = type;
  model->symbol = codelet.name;
  codelet.model = model;
}

struct StarPUApp : public App {
public:
  StarPUApp(int argc, char **argv);
  ~StarPUApp();
  void execute_main_loop();
  void execute_timestep(size_t idx, long t);
private:
  void insert_task(int num_args, int i, int j, std::vector<void*> &args);
private:
  Codelet codelet_task1;
  Codelet codelet_task2;
  Codelet codelet_task3;
  Codelet codelet_task4;
  struct starpu_conf *conf;
  starpu_ddesc_t *ddescA;
  int rank;
  int world;
  int mt;
  int nt;
};

void StarPUApp::insert_task(int num_args, int i, int j, std::vector<void*> &args)
{
  void (*callback)(void*) = NULL;
  switch(num_args) {
  case 1:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(codelet_task1.codelet),
        STARPU_VALUE,    &i,  sizeof(int),
        STARPU_VALUE,    &j,  sizeof(int),
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task2",
        0);
    break;
  case 2:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(codelet_task2.codelet),
        STARPU_VALUE,    &i,  sizeof(int),
        STARPU_VALUE,    &j,  sizeof(int),
        STARPU_R, args[1],
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task2",
        0);
    break;
  case 3:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(codelet_task3.codelet),
        STARPU_VALUE,    &i,  sizeof(int),
        STARPU_VALUE,    &j,  sizeof(int),
        STARPU_R, args[1],
        STARPU_R, args[2],
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task3",
        0);
    break;
  case 4:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(codelet_task4.codelet),
        STARPU_VALUE,    &i,  sizeof(int),
        STARPU_VALUE,    &j,  sizeof(int),
        STARPU_R, args[1],
        STARPU_R, args[2],
        STARPU_R, args[3],
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task4",
        0);
    break;
  default:
    assert(false && "unexpected num_args");
  };
}

StarPUApp::StarPUApp(int argc, char **argv)
  : App(argc, argv), 
  codelet_task1(1, task1, STARPU_CPU, "task1"),
  codelet_task2(2, task2, STARPU_CPU, "task2"),
  codelet_task3(3, task3, STARPU_CPU, "task3"),
  codelet_task4(4, task4, STARPU_CPU, "task4")
{
  conf =  (struct starpu_conf *)malloc (sizeof(struct starpu_conf));
  starpu_conf_init( conf );

  conf->ncpus = 1;
  conf->ncuda = 0;
  conf->nopencl = 0;
  conf->sched_policy_name = "lws";
  
  int ret;
  ret = starpu_init(conf);
  STARPU_CHECK_RETURN_VALUE(ret, "starpu_init");
  ret = starpu_mpi_init(&argc, &argv, 1);
  STARPU_CHECK_RETURN_VALUE(ret, "starpu_mpi_init");
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);
  starpu_mpi_comm_size(MPI_COMM_WORLD, &world);
  
  int p, q;
  
  p = 1;
  q = 1;
  
  
  int size_of_data = 10;
  
  TaskGraph &graph = graphs[0];
  mt = graph.max_width;
  nt = graph.timesteps;
  
  printf("mt %d, nt %d\n", mt, nt);

  ddescA = create_and_distribute_data(rank, world, size_of_data, size_of_data, mt, nt, p, q);
}

StarPUApp::~StarPUApp()
{
  if (conf != NULL) {
    free (conf);
  } 
  starpu_mpi_shutdown();
  starpu_shutdown();
}

void StarPUApp::execute_main_loop()
{
  display();

  void (*callback)(void*) = NULL;

  int x, y;

  /* start timer */
  starpu_mpi_barrier(MPI_COMM_WORLD);
  
  const TaskGraph &g = graphs[0];
#if 1
  for (y = 0; y < g.timesteps; y++) {
    execute_timestep(0, y);
  }
#endif

#if 0
  for( y = 0; y < mt; y++ ) {
      for (x = 0; x < nt; x++) {
          if (y == 0) {
             // printf("insert x %d, y %d\n");
              starpu_mpi_insert_task(
                  MPI_COMM_WORLD, &(codelet_task1.codelet),
                  STARPU_VALUE,    &y,  sizeof(int),
                  STARPU_VALUE,    &x,  sizeof(int),
                  STARPU_RW, starpu_desc_getaddr( ddescA, y, x ),
                  STARPU_CALLBACK,  callback,
                  STARPU_PRIORITY,  0,
                  STARPU_NAME, "chain1",
                  0);
          } else {
             // printf("insert x %d, y %d\n");
              starpu_mpi_insert_task(
                  MPI_COMM_WORLD, &(codelet_task2.codelet),
                  STARPU_VALUE,    &y,  sizeof(int),
                  STARPU_VALUE,    &x,  sizeof(int),
                  STARPU_R, starpu_desc_getaddr( ddescA, y-1, x ),
                  STARPU_RW, starpu_desc_getaddr( ddescA, y, x ),
                  STARPU_CALLBACK,  callback,
                  STARPU_PRIORITY,  0,
                  STARPU_NAME, "chain2",
                  0);
          }
      }
  }
#endif
  
#if 0
  std::vector<void*> args;
  for( y = 0; y < mt; y++ ) {
      for (x = 0; x < nt; x++) {
          if (y == 0) {
             // printf("insert x %d, y %d\n");
            args.clear();
            args.push_back(starpu_desc_getaddr( ddescA, y, x ));
            insert_task(1, y, x, args);
          } else {
             // printf("insert x %d, y %d\n");
            args.clear();
            args.push_back(starpu_desc_getaddr( ddescA, y, x ));
            args.push_back(starpu_desc_getaddr( ddescA, y-1, x ));
            insert_task(2, y, x, args);
          }
      }
  }
#endif
  
#if 0
  std::vector<void*> args;
  for( y = 0; y < mt; y++ ) {
    for (x = 0; x < nt; x++) {
      args.clear();
      args.push_back(starpu_desc_getaddr( ddescA, y, x ));
      insert_task(1, y, x, args);
    }
  }
#endif


  starpu_task_wait_for_all();
  starpu_mpi_barrier(MPI_COMM_WORLD);
}

void StarPUApp::execute_timestep(size_t idx, long t)
{
  const TaskGraph &g = graphs[idx];
  long offset = g.offset_at_timestep(t);
  long width = g.width_at_timestep(t);
  long dset = g.dependence_set_at_timestep(t);
  
  std::vector<void*> args;
  
  printf("ts %d, offset %d, width %d, offset+width-1 %d\n", t, offset, width, offset+width-1);
  for (int x = offset; x <= offset+width-1; x++) {
    std::vector<std::pair<long, long> > deps = g.dependencies(dset, x);
    int num_args;    
    
    if (deps.size() == 0) {
      num_args = 1;
      printf("%d[%d] ", x, num_args);
      args.push_back(starpu_desc_getaddr( ddescA, t, x ));
    } else {
      if (t == 0) {
        num_args = 1;
        printf("%d[%d] ", x, num_args);
        args.push_back(starpu_desc_getaddr( ddescA, t, x ));
      } else {
        num_args = 1;
        args.push_back(starpu_desc_getaddr( ddescA, t, x ));
        for (std::pair<long, long> dep : deps) {
          num_args += dep.second - dep.first + 1;
          printf("%d[%d, %d, %d] ", x, num_args, dep.first, dep.second); 
          for (int i = dep.first; i <= dep.second; i++) {
            args.push_back(starpu_desc_getaddr( ddescA, t-1, i ));
          }
        }
      }
    }
    insert_task(num_args, t, x, args); 
    args.clear();
  }
  printf("\n");
}

int main(int argc, char **argv)
{
  printf("pid %d\n", getpid());
  //sleep(10); 
  StarPUApp app(argc, argv);
  app.execute_main_loop();

  return 0;
}
