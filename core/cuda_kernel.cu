#include <assert.h>
#include "core.h"
#include "cuda_kernel.h"

std::vector<char*> local_buffer;
size_t local_buffer_size;

#define UNROLL_1  1
#define UNROLL_4  4
#define UNROLL_8  8
#define UNROLL_16 16

#define CUDA_ERROR_CHECK(err)                                      \
  if (err != cudaSuccess) {                                        \
    printf("CUDA calls error %s\n", cudaGetErrorString(err));      \
  }                                                                \

__global__ void execute_kernel_compute_cuda_kernel_unroll_1(long iter, double *A);
__global__ void execute_kernel_compute_cuda_kernel_unroll_4(long iter, double *A);
__global__ void execute_kernel_compute_cuda_kernel_unroll_8(long iter, double *A);
__global__ void execute_kernel_compute_cuda_kernel_unroll_16(long iter, double *A);

void init_cuda_support(const std::vector<TaskGraph> &graphs)
{
  int nb_gpus = 1;
  cudaError_t cuda_err;
  
  local_buffer.reserve(nb_gpus);
  int nb_blocks = graphs[0].kernel.nb_blocks;
  int threads_per_block = graphs[0].kernel.threads_per_block;
  int cuda_unroll = graphs[0].kernel.cuda_unroll;
  printf("init cuda support nb_blocks %d, threads_per_block %d, cuda_unroll %d\n", nb_blocks, threads_per_block, cuda_unroll);
  local_buffer_size = nb_blocks * threads_per_block * sizeof(double);
  for (int i = 0; i < nb_gpus; i++) {
    cuda_err = cudaSetDevice(0);
    CUDA_ERROR_CHECK(cuda_err);
    cuda_err = cudaMalloc((void**)&(local_buffer[i]), sizeof(double) * nb_blocks * threads_per_block * cuda_unroll);
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
  if (kernel.cuda_unroll == 4) {
    execute_kernel_compute_cuda_kernel_unroll_4<<<kernel.nb_blocks, kernel.threads_per_block>>>(kernel.iterations, (double *)local_buffer[kernel.gpu_id]);
  } else if (kernel.cuda_unroll == 8) {
    execute_kernel_compute_cuda_kernel_unroll_8<<<kernel.nb_blocks, kernel.threads_per_block>>>(kernel.iterations, (double *)local_buffer[kernel.gpu_id]);
  } else if (kernel.cuda_unroll == 16) {
    execute_kernel_compute_cuda_kernel_unroll_16<<<kernel.nb_blocks, kernel.threads_per_block>>>(kernel.iterations, (double *)local_buffer[kernel.gpu_id]);
  } else {
    execute_kernel_compute_cuda_kernel_unroll_1<<<kernel.nb_blocks, kernel.threads_per_block>>>(kernel.iterations, (double *)local_buffer[kernel.gpu_id]);
  }
  cuda_err = cudaDeviceSynchronize();
  CUDA_ERROR_CHECK(cuda_err);
  if (kernel.memcpy_required == 1) {
    printf("enable memcpy out\n");
    cuda_err = cudaMemcpy(scratch_ptr, local_buffer[kernel.gpu_id], scratch_bytes, cudaMemcpyDeviceToHost);
    CUDA_ERROR_CHECK(cuda_err);
  }
}

__global__ void execute_kernel_compute_cuda_kernel_unroll_1(long iter, double *A)
{
  int tid = blockIdx.x * blockDim.x + threadIdx.x;
  double A_local = A[tid];
  for (int i = 0; i < iter; i++) {
    A_local = fma(A_local, A_local, A_local);
  }
  A[tid] = A_local;
}

__global__ void execute_kernel_compute_cuda_kernel_unroll_4(long iter, double *A)
{
  int tid = blockIdx.x * blockDim.x + threadIdx.x;
  double A_local[UNROLL_4];
  int u;
  #pragma unroll
  for (u = 0; u < UNROLL_4; u++) {
    A_local[u] = A[tid + u * blockDim.x * gridDim.x];
  }
  for (int i = 0; i < iter; i++) {
    #pragma unroll
    for (u = 0; u < UNROLL_4; u++) {
      A_local[u]= fma(A_local[u], A_local[u], A_local[u]);
    }
   // A_local = A_local * A_local + A_local;
  }
  #pragma unroll
  for (u = 0; u < UNROLL_4; u++) {
    A[tid + u * blockDim.x * gridDim.x] = A_local[u];
  }
}

__global__ void execute_kernel_compute_cuda_kernel_unroll_8(long iter, double *A)
{
  int tid = blockIdx.x * blockDim.x + threadIdx.x;
  double A_local[UNROLL_8];
  int u;
  #pragma unroll
  for (u = 0; u < UNROLL_8; u++) {
    A_local[u] = A[tid + u * blockDim.x * gridDim.x];
  }
  for (int i = 0; i < iter; i++) {
    #pragma unroll
    for (u = 0; u < UNROLL_8; u++) {
      A_local[u]= fma(A_local[u], A_local[u], A_local[u]);
    }
   // A_local = A_local * A_local + A_local;
  }
  #pragma unroll
  for (u = 0; u < UNROLL_8; u++) {
    A[tid + u * blockDim.x * gridDim.x] = A_local[u];
  }
}

__global__ void execute_kernel_compute_cuda_kernel_unroll_16(long iter, double *A)
{
  int tid = blockIdx.x * blockDim.x + threadIdx.x;
  double A_local[UNROLL_16];
  int u;
  #pragma unroll
  for (u = 0; u < UNROLL_16; u++) {
    A_local[u] = A[tid + u * blockDim.x * gridDim.x];
  }
  for (int i = 0; i < iter; i++) {
    #pragma unroll
    for (u = 0; u < UNROLL_16; u++) {
      A_local[u]= fma(A_local[u], A_local[u], A_local[u]);
    }
   // A_local = A_local * A_local + A_local;
  }
  #pragma unroll
  for (u = 0; u < UNROLL_16; u++) {
    A[tid + u * blockDim.x * gridDim.x] = A_local[u];
  }
}
