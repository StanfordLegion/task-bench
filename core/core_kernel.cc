/* Copyright 2018 Stanford University
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

#include <cassert>
#include "core.h"
#include "core_kernel.h"
#include "mkl.h"
#include <math.h>

void execute_kernel_empty(const Kernel &kernel)
{
  // Do nothing...
}

long long execute_kernel_busy_wait(const Kernel &kernel)
{
  long long acc = 113;
  for (long iter = 0; iter < kernel.iterations; iter++) {
    acc = acc * 139 % 2147483647;
  }
  return acc;
}

void execute_kernel_memory(const Kernel &kernel,
                           char *scratch_ptr, size_t scratch_bytes)
{
  long long jump = kernel.jump;
  long long N = scratch_bytes / (3 * sizeof(double));

  double *A = reinterpret_cast<double *>(scratch_ptr);
  double *B = reinterpret_cast<double *>(scratch_ptr + N * sizeof(double));
  double *C = reinterpret_cast<double *>(scratch_ptr + 2 * N * sizeof(double));

  for (long iter = 0; iter < kernel.iterations; iter++) {
    for (long i = 0; i < jump; i++) {
      for (long j = 0; j < (N/jump); j++) {
        long t = (i + j * jump) % (N);
        C[t] = A[t] + B[t];
      }
    }
  }
  // printf("execute_kernel_memory! C[N-1]=%f, N=%lld, jump=%lld\n", C[N-1], N, jump);
}

void execute_kernel_dgemm(const Kernel &kernel,
                           char *scratch_ptr, size_t scratch_bytes)
{
#if defined(USE_BLAS_KERNEL)
  long long N = scratch_bytes / (3 * sizeof(double));
  int m, n, p;
  double alpha, beta;

  m = n = p = sqrt(N);
  alpha = 1.0; beta = 1.0;

  double *A = reinterpret_cast<double *>(scratch_ptr);
  double *B = reinterpret_cast<double *>(scratch_ptr + N * sizeof(double));
  double *C = reinterpret_cast<double *>(scratch_ptr + 2 * N * sizeof(double));

  for (long iter = 0; iter < kernel.iterations; iter++) {
    cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, 
                m, n, p, alpha, A, p, B, n, beta, C, n);
  }
  // printf("execute_kernel_memory! C[N-1]=%f, N=%lld, jump=%lld\n", C[N-1], N, jump);
#else
  printf("No BLAS is detected\n");
  assert(0);
#endif
}

void execute_kernel_compute(const Kernel &kernel)
{
  long long max_power = kernel.max_power;
  double temp, sum;
  double A[128];

  for (long iter = 0; iter < kernel.iterations; iter++) {
    for (long i = 0; i < 128; i++) {
      temp = ((double) rand() / (RAND_MAX));
      sum = temp;
      for (long j=0; j<max_power; j++) {
        temp *=temp;
        sum += temp;
      }
      A[i] = sum;
    }
  }
  // printf("execute_kernel_memory! A[127]=%f, max_power=%lld\n", A[127], max_power);
}

double execute_kernel_compute2(const Kernel &kernel)
{
  constexpr size_t N = 32;
  double A[N] = {0};
  double B[N] = {0};
  double C[N] = {0};

  for (size_t i = 0; i < N; ++i) {
    A[i] = 1.2345;
    B[i] = 1.010101;
  }

  for (long iter = 0; iter < kernel.iterations; iter++) {
    for (size_t i = 0; i < N; ++i) {
      C[i] = C[i] + (A[i] * B[i]);
    }
  }

  double sum = 0;
  for (size_t i = 0; i < N; ++i) {
    sum += C[i];
  }
  return sum;
}

void execute_kernel_io(const Kernel &kernel)
{
  assert(false);
}

void execute_kernel_imbalance(const Kernel &kernel)
{
  //random pick one task to be compute bound

  // Use current time as seed for random generator
  // srand(Timer::get_cur_time());

  long long max_power = rand() % kernel.max_power;
  Kernel k(kernel);
  k.max_power = max_power;
  execute_kernel_compute(k);
}
