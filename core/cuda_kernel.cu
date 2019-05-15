#include <assert.h>
#include "core.h"
#include "cuda_kernel.h"

void execute_kernel_compute_cuda(const Kernel &kernel, char *A, size_t bytes)
{
  assert(kernel.nb_blocks * kernel.threads_per_block * sizeof(double) == bytes);
  execute_kernel_compute_cuda_kernel<<<16, 256>>>(kernel.iterations, (double *)A);
}


__global__ void execute_kernel_compute_cuda_kernel(long iter, double *A)
{
  int tid = blockIdx.x * blockDim.x + threadIdx.x;
  double A_local = A[tid];
  for (int i = 0; i < iter; i++) {
    A_local = fma(A_local, A_local, A_local);
  }
  A[tid] = A_local;
}
