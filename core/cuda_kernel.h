#ifndef CUDA_KERNEL_H
#define CUDA_KERNEL_H

#include <cuda.h>
#include <cuda_runtime.h>

struct Kernel;
struct TaskGraph;

extern std::vector<char*> local_buffer;

extern size_t local_buffer_size;

void init_cuda_support(const std::vector<TaskGraph> &graphs, const std::vector<int> &local_gpus);

void fini_cuda_support(const std::vector<int> &local_gpus);

void execute_kernel_compute_cuda(const Kernel &kernel, char *scratch_ptr, size_t scratch_bytes, int gpu_id);

void execute_kernel_compute_cuda(const Kernel &kernel, char *scratch_ptr, size_t scratch_bytes, char *device_ptr, size_t device_bytes);

#endif