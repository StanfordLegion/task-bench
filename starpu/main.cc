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

struct starpu_codelet cl_task1; 
struct starpu_codelet cl_task2;
struct starpu_codelet cl_task3;
struct starpu_codelet cl_task4;

struct StarPUApp : public App {
public:
  StarPUApp(int argc, char **argv);
  ~StarPUApp();
  void execute_main_loop();
  void execute_timestep(size_t idx, long t);
private:
  void insert_task(int num_args, int i, int j, std::vector<void*> &args);
  void parse_argument(int argc, char **argv);
private:
  struct starpu_conf *conf;
  starpu_ddesc_t *ddescA;
  int rank;
  int world;
  int nb_cores;
  int MT;
  int NT;
  int P;
  int Q;
  int MB;
};

void StarPUApp::insert_task(int num_args, int i, int j, std::vector<void*> &args)
{
  void (*callback)(void*) = NULL;
  switch(num_args) {
  case 1:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(cl_task1),
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
        MPI_COMM_WORLD, &(cl_task2),
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
        MPI_COMM_WORLD, &(cl_task3),
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
        MPI_COMM_WORLD, &(cl_task4),
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

void StarPUApp::parse_argument(int argc, char **argv)
{
  for (int i = 1; i < argc; i++) {
    if (!strcmp(argv[i], "-mb")) {
      MB = atol(argv[++i]);
    }
    if (!strcmp(argv[i], "-core")) {
      nb_cores = atol(argv[++i]);
    }
    if (!strcmp(argv[i], "-p")) {
      P = atol(argv[++i]);
    }
  }
}

StarPUApp::StarPUApp(int argc, char **argv)
  : App(argc, argv)
{
  cl_task1.where     = STARPU_CPU;                                   
  cl_task1.cpu_funcs[0]  = task1;                                       
  cl_task1.nbuffers  = 1;                                           
  cl_task1.name      = "task1";
  
  cl_task2.where     = STARPU_CPU;                                   
  cl_task2.cpu_funcs[0]  = task2;                                       
  cl_task2.nbuffers  = 2;                                           
  cl_task2.name      = "task2";
  
  cl_task3.where     = STARPU_CPU;                                   
  cl_task3.cpu_funcs[0]  = task3;                                       
  cl_task3.nbuffers  = 3;                                           
  cl_task3.name      = "task3";
  
  cl_task4.where     = STARPU_CPU;                                   
  cl_task4.cpu_funcs[0]  = task4;                                       
  cl_task4.nbuffers  = 4;                                           
  cl_task4.name      = "task4";
  
  P = 1;
  MB = 10;
  nb_cores = 1;
  
  parse_argument(argc, argv);
  
  conf =  (struct starpu_conf *)malloc (sizeof(struct starpu_conf));
  starpu_conf_init( conf );

  conf->ncpus = nb_cores;
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
  
  Q = world/P;
  assert(P*Q == world);  
  
  TaskGraph &graph = graphs[0];
  NT = graph.max_width;
  MT = graph.timesteps;
  
  printf("mt %d, nt %d\n", MT, NT);

  ddescA = create_and_distribute_data(rank, world, MB, MB, MT, NT, P, Q);
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
  for( y = 0; y < mt; y++ ) {
      for (x = 0; x < nt; x++) {
          if (y == 0) {
             // printf("insert x %d, y %d\n");
              starpu_mpi_insert_task(
                  MPI_COMM_WORLD, &(cl_task1),
                  STARPU_VALUE,    &y,  sizeof(int),
                  STARPU_VALUE,    &x,  sizeof(int),
                  STARPU_RW, starpu_desc_getaddr( ddescA, y, x ),
                  STARPU_CALLBACK,  callback,
                  STARPU_PRIORITY,  0,
                  STARPU_NAME, "chain1",
                  0);
          } else if (x == 0 && y != 0) {
             // printf("insert x %d, y %d\n");
              starpu_mpi_insert_task(
                  MPI_COMM_WORLD, &(cl_task3),
                  STARPU_VALUE,    &y,  sizeof(int),
                  STARPU_VALUE,    &x,  sizeof(int),
                  STARPU_R, starpu_desc_getaddr( ddescA, y-1, x ),
                  STARPU_R, starpu_desc_getaddr( ddescA, y-1, x+1 ),
                  STARPU_RW, starpu_desc_getaddr( ddescA, y, x ),
                  STARPU_CALLBACK,  callback,
                  STARPU_PRIORITY,  0,
                  STARPU_NAME, "chain3",
                  0);
          } else if (x == (nt-1) && y != 0) {
             // printf("insert x %d, y %d\n");
              starpu_mpi_insert_task(
                  MPI_COMM_WORLD, &(cl_task3),
                  STARPU_VALUE,    &y,  sizeof(int),
                  STARPU_VALUE,    &x,  sizeof(int),
                  STARPU_R, starpu_desc_getaddr( ddescA, y-1, x-1 ),
                  STARPU_R, starpu_desc_getaddr( ddescA, y-1, x ),
                  STARPU_RW, starpu_desc_getaddr( ddescA, y, x ),
                  STARPU_CALLBACK,  callback,
                  STARPU_PRIORITY,  0,
                  STARPU_NAME, "chain3",
                  0);
          } else {
            starpu_mpi_insert_task(
                MPI_COMM_WORLD, &(cl_task4),
                STARPU_VALUE,    &y,  sizeof(int),
                STARPU_VALUE,    &x,  sizeof(int),
                STARPU_R, starpu_desc_getaddr( ddescA, y-1, x-1 ),
                STARPU_R, starpu_desc_getaddr( ddescA, y-1, x ),
                STARPU_R, starpu_desc_getaddr( ddescA, y-1, x+1 ),
                STARPU_RW, starpu_desc_getaddr( ddescA, y, x ),
                STARPU_CALLBACK,  callback,
                STARPU_PRIORITY,  0,
                STARPU_NAME, "chain4",
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
  printf("pid %d, %d\n", getpid(), STARPU_NMAXBUFS);
  //sleep(10); 

  
  StarPUApp app(argc, argv);
  app.execute_main_loop();

  return 0;
}
