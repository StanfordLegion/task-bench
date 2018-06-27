#ifndef TIMER_H
#define TIMER_H

template<class TIMER_POLICY>
struct Timer__ : public TIMER_POLICY {
public:
  static double time_elapsed;
  static double sync_time_elapsed;
  
  static inline double get_cur_time()
  {
    return TIMER_POLICY::get_cur_time();
  }
  
  static inline double time_start()
  {
    do {
      time_elapsed = get_cur_time();
    } while(0);
    return time_elapsed;
  }
  
  static inline double time_end()
  {
    do {
      time_elapsed = get_cur_time() - time_elapsed;
    } while(0);
    return time_elapsed;
  }
  
  static inline double sync_time_start()
  {
    do {
      TIMER_POLICY::fence();
      sync_time_elapsed = get_cur_time();
    } while(0);
    return sync_time_elapsed;
  }
  
  static inline double sync_time_end()
  {
    do {
      TIMER_POLICY::fence();
      sync_time_elapsed = get_cur_time() - time_elapsed;
    } while(0);
    return sync_time_elapsed;
  }
};

#if defined(MPI_TIMING)

#include <mpi.h>

struct MPITimer {
public:  
  static inline double get_cur_time()
  {
    printf("mpi time\n");
    return MPI_Wtime();
  }
  
  static inline void fence() 
  {
    MPI_Barrier(MPI_COMM_WORLD);
  }
};

using RUNTIME_TIMER_POLICY = MPITimer;

#else

#include <sys/time.h>

struct SystemTimer {
public:  
  static inline double get_cur_time()
  {
    struct timeval tv;
    double t;

    gettimeofday(&tv,NULL);
    t = tv.tv_sec + tv.tv_usec / 1e6;
    printf("system time\n");
    return t;
  }
  
  static inline void fence() {}
};

using RUNTIME_TIMER_POLICY = SystemTimer;

#endif



using Timer = Timer__<RUNTIME_TIMER_POLICY>;

template<class RUNTIME_TIMER_POLICY>
double Timer__<RUNTIME_TIMER_POLICY>::time_elapsed = 0;

template<class RUNTIME_TIMER_POLICY>
double Timer__<RUNTIME_TIMER_POLICY>::sync_time_elapsed = 0;


#endif //TIMER_H