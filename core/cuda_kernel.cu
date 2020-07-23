#include <assert.h>
#include "core.h"
#include "cuda_kernel.h"

std::vector<char*> local_buffer;
size_t local_buffer_size;
cudaStream_t cuda_stream_array[8];

#define UNROLL_1  1
#define UNROLL_4  4
#define UNROLL_8  8
#define UNROLL_16 16

#define gpuErrchk(ans) { gpuAssert((ans), __FILE__, __LINE__); }
inline void gpuAssert(cudaError_t code, const char *file, int line, bool abort=true)
{
   if (code != cudaSuccess) 
   {
      fprintf(stderr,"GPUassert: %s %s %d\n", cudaGetErrorString(code), file, line);
      if (abort) exit(code);
   }
}                                                               \

__global__ void execute_kernel_compute_cuda_kernel_unroll_1(long iter, double *A);
__global__ void execute_kernel_compute_cuda_kernel_unroll_4(long iter, double *A);
__global__ void execute_kernel_compute_cuda_kernel_unroll_8(long iter, double *A);
__global__ void execute_kernel_compute_cuda_kernel_unroll_16(long iter, double *A);

void init_cuda_support(const std::vector<TaskGraph> &graphs, const std::vector<int> &local_gpus)
{
  int nb_gpus = local_gpus.size();
  
  local_buffer.reserve(nb_gpus);
  int nb_blocks = graphs[0].kernel.nb_blocks;
  int threads_per_block = graphs[0].kernel.threads_per_block;
  int cuda_unroll = graphs[0].kernel.cuda_unroll;
  // printf("init cuda support nb_gpus %d nb_blocks %d, threads_per_block %d, cuda_unroll %d\n", nb_gpus, nb_blocks, threads_per_block, cuda_unroll);
  local_buffer_size = nb_blocks * threads_per_block * sizeof(double);
  for (int i = 0; i < nb_gpus; i++) {
    gpuErrchk( cudaSetDevice(local_gpus[i]) );
    gpuErrchk( cudaMalloc((void**)&(local_buffer[i]), sizeof(double) * nb_blocks * threads_per_block * cuda_unroll) );
    assert(local_buffer[i] != NULL);
    gpuErrchk( cudaStreamCreate(&(cuda_stream_array[i])) );
  }
}

void fini_cuda_support(const std::vector<int> &local_gpus)
{
  // printf("fini cuda support nb_gpus %d\n", local_gpus.size());
  for (int i = 0; i < local_buffer.size(); i++) {
    gpuErrchk( cudaSetDevice(local_gpus[i]) );
    gpuErrchk( cudaFree(local_buffer[i]) );
    local_buffer[i] = NULL;
    gpuErrchk( cudaStreamDestroy(cuda_stream_array[i]) );
  }
  local_buffer.clear();
}

void execute_kernel_compute_cuda(const Kernel &kernel, char *scratch_ptr, size_t scratch_bytes, int gpu_id)
{
  // printf("CUDA COMPUTE KERNEL buffer %p, size %lld, nb_blocks %d, threads_per_block %d\n", scratch_ptr, scratch_bytes, kernel.nb_blocks, kernel.threads_per_block);
  assert(scratch_bytes <= local_buffer_size);

  if (kernel.memcpy_required == 1) {
 //   printf("enable memcpy in\n");
    gpuErrchk( cudaMemcpyAsync(local_buffer[gpu_id], scratch_ptr, scratch_bytes, cudaMemcpyHostToDevice, cuda_stream_array[gpu_id]) ); 
    gpuErrchk( cudaStreamSynchronize(cuda_stream_array[gpu_id]) );
  }
  if (kernel.cuda_unroll == 4) {
    execute_kernel_compute_cuda_kernel_unroll_4<<<kernel.nb_blocks, kernel.threads_per_block, 0, cuda_stream_array[gpu_id]>>>(kernel.iterations, (double *)local_buffer[gpu_id]);
  } else if (kernel.cuda_unroll == 8) {
    execute_kernel_compute_cuda_kernel_unroll_8<<<kernel.nb_blocks, kernel.threads_per_block, 0, cuda_stream_array[gpu_id]>>>(kernel.iterations, (double *)local_buffer[gpu_id]);
  } else if (kernel.cuda_unroll == 16) {
    execute_kernel_compute_cuda_kernel_unroll_16<<<kernel.nb_blocks, kernel.threads_per_block, 0, cuda_stream_array[gpu_id]>>>(kernel.iterations, (double *)local_buffer[gpu_id]);
  } else {
    execute_kernel_compute_cuda_kernel_unroll_1<<<kernel.nb_blocks, kernel.threads_per_block, 0, cuda_stream_array[gpu_id]>>>(kernel.iterations, (double *)local_buffer[gpu_id]);
  }
  gpuErrchk( cudaPeekAtLastError() );
  gpuErrchk( cudaStreamSynchronize(cuda_stream_array[gpu_id]) );
  if (kernel.memcpy_required == 1) {
 //   printf("enable memcpy out\n");
    gpuErrchk( cudaMemcpyAsync(scratch_ptr, local_buffer[gpu_id], scratch_bytes, cudaMemcpyDeviceToHost, cuda_stream_array[gpu_id]) );
    gpuErrchk( cudaStreamSynchronize(cuda_stream_array[gpu_id]) );
  }
}

void execute_kernel_compute_cuda(const Kernel &kernel, char *scratch_ptr, size_t scratch_bytes, char *device_ptr, size_t device_bytes) {
  printf("CUDA COMPUTE KERNEL scratch_ptr %p, size %lld, nb_blocks %d, threads_per_block %d, device_ptr %p, size %lld\n", scratch_ptr, scratch_bytes, kernel.nb_blocks, kernel.threads_per_block, device_ptr, device_bytes);
  assert(scratch_bytes <= device_bytes);

  if (kernel.memcpy_required == 1) {
 //   printf("enable memcpy in\n");
    gpuErrchk( cudaMemcpyAsync(device_ptr, scratch_ptr, scratch_bytes, cudaMemcpyHostToDevice, 0) ); 
    gpuErrchk( cudaStreamSynchronize(0) );
  }
  if (kernel.cuda_unroll == 4) {
    execute_kernel_compute_cuda_kernel_unroll_4<<<kernel.nb_blocks, kernel.threads_per_block, 0, 0>>>(kernel.iterations, (double *)device_ptr);
  } else if (kernel.cuda_unroll == 8) {
    execute_kernel_compute_cuda_kernel_unroll_8<<<kernel.nb_blocks, kernel.threads_per_block, 0, 0>>>(kernel.iterations, (double *)device_ptr);
  } else if (kernel.cuda_unroll == 16) {
    execute_kernel_compute_cuda_kernel_unroll_16<<<kernel.nb_blocks, kernel.threads_per_block, 0, 0>>>(kernel.iterations, (double *)device_ptr);
  } else {
    execute_kernel_compute_cuda_kernel_unroll_1<<<kernel.nb_blocks, kernel.threads_per_block, 0, 0>>>(kernel.iterations, (double *)device_ptr);
  }
  gpuErrchk( cudaPeekAtLastError() );
  gpuErrchk( cudaStreamSynchronize(0) );
  if (kernel.memcpy_required == 1) {
 //   printf("enable memcpy out\n");
    gpuErrchk( cudaMemcpyAsync(scratch_ptr, device_ptr, scratch_bytes, cudaMemcpyDeviceToHost, 0) );
    gpuErrchk( cudaStreamSynchronize(0) );
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
