/* Copyright 2018 Stanford University
 * Copyright 2018 Los Alamos National Laboratory
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
    time_elapsed = get_cur_time();
    return time_elapsed;
  }
  
  static inline double time_end()
  {
    time_elapsed = get_cur_time() - time_elapsed;
    return time_elapsed;
  }
  
  static inline double sync_time_start()
  {
    TIMER_POLICY::fence();
    sync_time_elapsed = get_cur_time();
    return sync_time_elapsed;
  }
  
  static inline double sync_time_end()
  {
    TIMER_POLICY::fence();
    sync_time_elapsed = get_cur_time() - sync_time_elapsed;
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