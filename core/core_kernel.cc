/* Copyright 2020 Stanford University
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
#include <cmath>
#include <random>

#if (__AVX2__ == 1) || (__AVX__ == 1)
#include <immintrin.h>
#endif

#include <string.h>

#include "core.h"
#include "core_kernel.h"
#include "core_random.h"

#ifdef USE_BLAS_KERNEL
#include <mkl.h>
#endif

#define DEBUG(...) { fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n"); }

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

void copy(char *scratch_ptr, size_t scratch_bytes)
{
  assert(scratch_bytes % 2 == 0);

  char *base_ptr = reinterpret_cast<char *>(scratch_ptr);
  intptr_t base_ptr_addr = reinterpret_cast<intptr_t>(base_ptr);
  size_t prolog_padding = 0;
  char *aligned_ptr = base_ptr;
  char *prolog_ptr = base_ptr;
  char *epilog_ptr = base_ptr;
  int i;
  
  assert(base_ptr_addr % 2 == 0);
  
  // compute prolog
  if (base_ptr_addr % 32 != 0) {
    prolog_padding = 32 - (base_ptr_addr % 32);
    aligned_ptr = base_ptr + prolog_padding;
  }
  
  // 32-byte alignment, 64 is because it will be divided into src and dst
  size_t nbytes_aligned = (scratch_bytes - prolog_padding) / 64 * 64;
  
  // epilog
  size_t epilog_padding = scratch_bytes - prolog_padding - nbytes_aligned;
  epilog_ptr = aligned_ptr + nbytes_aligned;
  
  // calculate src and dst for each part
  char *prolog_src = prolog_ptr;
  char *prolog_dst = prolog_ptr + prolog_padding / 2;
  size_t prolog_cp_size = prolog_padding / 2;
  
  size_t nb_m256 = nbytes_aligned / 64;
  
  char *epilog_src = epilog_ptr;
  char *epilog_dst = epilog_ptr + epilog_padding / 2;
  size_t epilog_cp_size = epilog_padding / 2;
  
  assert (prolog_padding + nbytes_aligned + epilog_padding == scratch_bytes);
  
  // copy src to dst
  if (prolog_padding != 0) {
    memcpy(prolog_dst, prolog_src, prolog_cp_size);
  }
  char *aligned_src = aligned_ptr;
  char *aligned_dst = aligned_ptr + nbytes_aligned / 2;
  assert ((intptr_t)aligned_src % 32 == 0);
  assert ((intptr_t)aligned_dst % 32 == 0);
#if (__AVX2__ == 1) || (__AVX__ == 1)
  for (i = 0; i < nb_m256; i++) {
    __m256d *dst_m256 = reinterpret_cast<__m256d *>(aligned_dst);
    *dst_m256 = _mm256_load_pd(reinterpret_cast<double *>(aligned_src));
    aligned_src += 32;
    aligned_dst += 32;
  }
#else
  memcpy(aligned_dst, aligned_src, nbytes_aligned/2);
#endif
  if (epilog_padding != 0) {
    memcpy(epilog_dst, epilog_src, epilog_cp_size);
  }
}

void execute_kernel_memory(const Kernel &kernel,
                           char *scratch_ptr, size_t scratch_bytes,
                           long timestep)
{
#if 1
  long iter = 0;

  size_t sample_bytes = scratch_bytes / kernel.samples;

  // Prologue
  {
    long start_idx = (timestep * kernel.iterations + iter) % kernel.samples;
    long stop_idx = std::min((long)kernel.samples, start_idx + kernel.iterations);
    long num_iter = stop_idx - start_idx;

    if (num_iter > 0) {
      char *sample_ptr = scratch_ptr + start_idx * sample_bytes;

      copy(sample_ptr, num_iter * sample_bytes);

      iter += num_iter;
    }
  }

  // Body
  for ( ; iter + kernel.samples <= kernel.iterations; iter += kernel.samples) {
    long start_idx = (timestep * kernel.iterations + iter) % kernel.samples;
    long num_iter = kernel.samples;

    char *sample_ptr = scratch_ptr + start_idx * sample_bytes;

    copy(sample_ptr, num_iter * sample_bytes);
  }

  // Epilogue
  {
    long start_idx = (timestep * kernel.iterations + iter) % kernel.samples;
    long stop_idx = start_idx + (kernel.iterations - iter);
    long num_iter = stop_idx - start_idx;

    if (num_iter > 0) {
      char *sample_ptr = scratch_ptr + start_idx * sample_bytes;

      copy(sample_ptr, num_iter * sample_bytes);

      iter += num_iter;
    }
  }

  assert(iter == kernel.iterations);
#else
  long long N = scratch_bytes / 2;
  char *src = reinterpret_cast<char *>(scratch_ptr);
  char *dst = reinterpret_cast<char *>(scratch_ptr + N);
  for (long iter = 0; iter < kernel.iterations; iter++) {
    memcpy(dst, src, N);
  }
#endif
}

void execute_kernel_dgemm(const Kernel &kernel,
                           char *scratch_ptr, size_t scratch_bytes)
{
#ifdef USE_BLAS_KERNEL
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
#else
  fprintf(stderr, "No BLAS is detected\n");
  fflush(stderr);
  abort();
#endif
}

void execute_kernel_daxpy(const Kernel &kernel,
                          char *scratch_large_ptr, size_t scratch_large_bytes,
                          long timestep)
{
#ifdef USE_BLAS_KERNEL
  for (long iter = 0; iter < kernel.iterations; iter++) {  
    size_t scratch_bytes = scratch_large_bytes / kernel.samples;
    int idx = (timestep * kernel.iterations + iter) % kernel.samples;
    char *scratch_ptr = scratch_large_ptr + idx * scratch_bytes;
  
    int N = scratch_bytes / (2 * sizeof(double));
    double alpha;

    alpha = 1.0;

    double *X = reinterpret_cast<double *>(scratch_ptr);
    double *Y = reinterpret_cast<double *>(scratch_ptr + N * sizeof(double));

    cblas_daxpy(N, alpha, X, 1, Y, 1);
  }
#else
  fprintf(stderr, "No BLAS is detected\n");
  fflush(stderr);
  abort();
#endif
}

double execute_kernel_compute(const Kernel &kernel)
{
#if __AVX2__ == 1
  __m256d A[16];
  
  for (int i = 0; i < 16; i++) {
    A[i] = _mm256_set_pd(1.0f, 2.0f, 3.0f, 4.0f);
  }
  
  for (long iter = 0; iter < kernel.iterations; iter++) {
    for (int i = 0; i < 16; i++) {
      A[i] = _mm256_fmadd_pd(A[i], A[i], A[i]);
    }
  }
#elif __AVX__ == 1
  __m256d A[16];
  
  for (int i = 0; i < 16; i++) {
    A[i] = _mm256_set_pd(1.0f, 2.0f, 3.0f, 4.0f);
  }
  
  for (long iter = 0; iter < kernel.iterations; iter++) {
    for (int i = 0; i < 16; i++) {
      A[i] = _mm256_mul_pd(A[i], A[i]);
      A[i] = _mm256_add_pd(A[i], A[i]);
    }
  }
#else
  double A[64];
  
  for (int i = 0; i < 64; i++) {
    A[i] = 1.2345;
  }
  
  for (long iter = 0; iter < kernel.iterations; iter++) {
    for (int i = 0; i < 64; i++) {
        A[i] = A[i] * A[i] + A[i];
    }
  } 
#endif
  double *C = (double *)A;
  double dot = 1.0;
  for (int i = 0; i < 64; i++) {
    dot *= C[i];
  }
  return dot;  
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

long select_imbalance_iterations(const Kernel &kernel,
                                 long graph_index, long timestep, long point)
{
  long seed[3] = {graph_index, timestep, point};
  double value = random_uniform(&seed[0], sizeof(seed));

  long iterations = (long)round((1 + (value - 0.5)*kernel.imbalance) * kernel.iterations);
  assert(iterations >= 0);
  return iterations;
}

double execute_kernel_imbalance(const Kernel &kernel,
                                long graph_index, long timestep, long point)
{
  long iterations = select_imbalance_iterations(kernel, graph_index, timestep, point);
  Kernel k(kernel);
  k.iterations = iterations;
  // printf("iteration %ld\n", iterations);
  return execute_kernel_compute(k);
}

long select_dist_iterations(const Kernel &kernel,
                                 long graph_index, long timestep, long point)
{
  long seed[3] = {graph_index, timestep, point};
  double value = random_uniform(&seed[0], sizeof(seed));
  uint64_t bits;
  gen_bits(&seed[0], sizeof(seed), &bits);
  int ratio = sizeof(uint64_t)/sizeof(unsigned);
  unsigned seed_u = bits/ratio; // TODO: make this a valid conversion
  std::default_random_engine generator(seed_u);

  long iterations;

  switch(kernel.dist.type) {
    case DistType::UNIFORM:
      {
      std::uniform_int_distribution<long> distribution(kernel.iterations, kernel.dist.max);
      iterations = distribution(generator);
      break;
      }
    case DistType::NORMAL:
      {
      // std::normal_distribution<long> distribution(kernel.iterations, kernel.dist.std);
      std::normal_distribution<double> distribution(0.0, 1.0);
      double val = distribution(generator);
      iterations = val*kernel.dist.std + kernel.iterations;
      break;
      }
    case DistType::GAMMA:
      {
        // Treat iterations as beta
      std::gamma_distribution<double> distribution(kernel.dist.a, 1);
      // std::gamma_distribution<long> distribution(kernel.dist.a, kernel.dist.b);
      double val = distribution(generator);
      iterations = kernel.iterations*val;
      break;
      }
    case DistType::CAUCHY:
      {
      // std::cauchy_distribution<long> distribution(kernel.dist.a, kernel.dist.b);
      std::cauchy_distribution<double> distribution(0.0, kernel.dist.b);
      // TODO: make b a double
      iterations = distribution(generator)+kernel.iterations;
      iterations = distribution(generator);
      break;
      }
    default:
      assert(false && "unimplemented kernel type");
  };

  if(iterations < 0) iterations = 0; // protects from bad values from user or long tails
  assert(iterations >= 0);
  return iterations;
}

double execute_kernel_distribution(const Kernel &kernel,
                                long graph_index, long timestep, long point)
{
  long iterations = select_dist_iterations(kernel, graph_index, timestep, point);
  Kernel k(kernel);
  k.iterations = iterations;
  return execute_kernel_compute(k);
}

double execute_kernel_compute_and_mem(const Kernel &kernel,
                           char *scratch_ptr, size_t scratch_bytes,
                           long timestep) {

assert(kernel.fraction_mem <= 1 && kernel.fraction_mem >= 0);
int mem_iter = kernel.iterations*kernel.fraction_mem;
int compute_iter = kernel.iterations - mem_iter;  

// Compute portion
#if __AVX2__ == 1
  __m256d A[16];
  
  for (int i = 0; i < 16; i++) {
    A[i] = _mm256_set_pd(1.0f, 2.0f, 3.0f, 4.0f);
  }
  
  for (long iter = 0; iter < compute_iter; iter++) {
    for (int i = 0; i < 16; i++) {
      A[i] = _mm256_fmadd_pd(A[i], A[i], A[i]);
    }
  }
#elif __AVX__ == 1
  __m256d A[16];
  
  for (int i = 0; i < 16; i++) {
    A[i] = _mm256_set_pd(1.0f, 2.0f, 3.0f, 4.0f);
  }
  
  for (long iter = 0; iter < compute_iter; iter++) {
    for (int i = 0; i < 16; i++) {
      A[i] = _mm256_mul_pd(A[i], A[i]);
      A[i] = _mm256_add_pd(A[i], A[i]);
    }
  }
#else
  double A[64];
  
  for (int i = 0; i < 64; i++) {
    A[i] = 1.2345;
  }
  
  for (long iter = 0; iter < compute_iter; iter++) {
    for (int i = 0; i < 64; i++) {
        A[i] = A[i] * A[i] + A[i];
    }
  } 
#endif

  // Memory portion
  long iter = 0;

  size_t sample_bytes = scratch_bytes / kernel.samples;

  // Prologue
  {
    long start_idx = (timestep * mem_iter + iter) % kernel.samples;
    long stop_idx = std::min((long)kernel.samples, start_idx + mem_iter);
    long num_iter = stop_idx - start_idx;

    if (num_iter > 0) {
      char *sample_ptr = scratch_ptr + start_idx * sample_bytes;

      copy(sample_ptr, num_iter * sample_bytes);

      iter += num_iter;
    }
  }

  // Body
  for ( ; iter + kernel.samples <= mem_iter; iter += kernel.samples) {
    long start_idx = (timestep * mem_iter + iter) % kernel.samples;
    long num_iter = kernel.samples;

    char *sample_ptr = scratch_ptr + start_idx * sample_bytes;

    copy(sample_ptr, num_iter * sample_bytes);
  }

  // Epilogue
  {
    long start_idx = (timestep * mem_iter + iter) % kernel.samples;
    long stop_idx = start_idx + (mem_iter - iter);
    long num_iter = stop_idx - start_idx;

    if (num_iter > 0) {
      char *sample_ptr = scratch_ptr + start_idx * sample_bytes;

      copy(sample_ptr, num_iter * sample_bytes);

      iter += num_iter;
    }
  }

  assert(iter == mem_iter);

  double *C = (double *)A;
  double dot = 1.0;
  for (int i = 0; i < 64; i++) {
    dot *= C[i];
  }
  return dot; 

}
