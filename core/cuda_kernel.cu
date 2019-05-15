#include <assert.h>
#include "core.h"
#include "cuda_kernel.h"

std::vector<char*> local_buffer;
size_t local_buffer_size;

#define CUDA_ERROR_CHECK(err)                                      \
  if (err != cudaSuccess) {                                        \
    printf("CUDA calls error %s\n", cudaGetErrorString(err));      \
  }                                                                \

void init_cuda_support(const std::vector<TaskGraph> &graphs)
{
  int nb_gpus = 1;
  cudaError_t cuda_err;
  
  local_buffer.reserve(nb_gpus);
  int nb_blocks = graphs[0].kernel.nb_blocks;
  int threads_per_block = graphs[0].kernel.threads_per_block;
  printf("init cuda support nb_blocks %d, threads_per_block %d\n", nb_blocks, threads_per_block);
  local_buffer_size = nb_blocks * threads_per_block * sizeof(double);
  for (int i = 0; i < nb_gpus; i++) {
    cuda_err = cudaSetDevice(0);
    CUDA_ERROR_CHECK(cuda_err);
    cuda_err = cudaMalloc((void**)&(local_buffer[i]), sizeof(double) * nb_blocks * threads_per_block);
    CUDA_ERROR_CHECK(cuda_err);
    assert(local_buffer[i] != NULL);
  }
}

void execute_kernel_compute_cuda(const Kernel &kernel, char *scratch_ptr, size_t scratch_bytes)
{
  cudaError_t cuda_err;
  printf("CUDA COMPUTE KERNEL buffer %p, size %lld, nb_blocks %d, threads_per_block %d\n", scratch_ptr, scratch_bytes, kernel.nb_blocks, kernel.threads_per_block);
  assert(scratch_bytes <= local_buffer_size);
  if (kernel.memcpy_required == 1) {
    printf("enable memcpy in\n");
    cuda_err = cudaMemcpy(local_buffer[kernel.gpu_id], scratch_ptr, scratch_bytes, cudaMemcpyHostToDevice);
    CUDA_ERROR_CHECK(cuda_err);
  }
  assert(kernel.gpu_id == 0);
  cuda_err = cudaSetDevice(kernel.gpu_id);
  CUDA_ERROR_CHECK(cuda_err);
  execute_kernel_compute_cuda_kernel<<<kernel.nb_blocks, kernel.threads_per_block>>>(kernel.iterations, (double *)local_buffer[kernel.gpu_id]);
  cuda_err = cudaDeviceSynchronize();
  CUDA_ERROR_CHECK(cuda_err);
  if (kernel.memcpy_required == 1) {
    printf("enable memcpy out\n");
    cuda_err = cudaMemcpy(scratch_ptr, local_buffer[kernel.gpu_id], scratch_bytes, cudaMemcpyDeviceToHost);
    CUDA_ERROR_CHECK(cuda_err);
  }
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
