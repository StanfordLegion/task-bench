#ifndef CUDA_KERNEL_H
#define CUDA_KERNEL_H

#include <cuda.h>
#include <cuda_runtime.h>

struct Kernel;

void execute_kernel_compute_cuda(const Kernel &kernel, char *A, size_t bytes);

__global__ void execute_kernel_compute_cuda_kernel(long iter, double *A);

#endif