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

#include "core.h"
#include "core_kernel.h"

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

// -- add by Yuankun
void execute_kernel_memory(const Kernel &kernel)
{
	//currently use two src input
	long long jump = kernel.kernel_arg.jump;
	long long N = kernel.kernel_arg.input_bytes_per_src[0] / (sizeof(double)*2);
	double *A = reinterpret_cast<double *>(kernel.kernel_arg.input_data[0]);
	double *B = reinterpret_cast<double *>(kernel.kernel_arg.input_data[0] + N * sizeof(double));
	double *C = reinterpret_cast<double *>(kernel.kernel_arg.output_data);

	if( (kernel.kernel_arg.num_src_input==2) && (kernel.kernel_arg.input_data[1] != NULL) ){
		N = N * 2;
		B = reinterpret_cast<double *>(kernel.kernel_arg.input_data[1]);
		// printf("B get 1\n");
	}
	// else{
	// 	printf("B get 0\n");
	// }

	for (long iter = 0; iter < kernel.iterations; iter++) {
		for (long i = 2; i < jump; i++) {
		    for (long j = 0; j < (N/jump); j++) {
		       long k = (i+j*jump) % (N);
		       C[k] = A[k] + B[k]; 
		    }
		}   
	}
	// printf("execute_kernel_memory! C[N/jump-1]=%f, N=%lld, jump=%lld\n", C[N*N/jump-1], N, jump);
}

void execute_kernel_compute(const Kernel &kernel)
{

	long long max_power = kernel.kernel_arg.max_power;
	long long N = kernel.kernel_arg.input_bytes_per_src[0] / sizeof(double);
	double temp, sum;
	double *A = reinterpret_cast<double *>(kernel.kernel_arg.input_data[0]);
	for (long iter = 0; iter < kernel.iterations; iter++) {
		for (long i = 0; i < N; i++) {
		    temp = A[i];
		    sum = temp;
		    for (long j=0; j<max_power; j++){
		        temp *=temp;
		        sum += temp;
		    }    
		    A[i] = sum;
		}    
	}

	// printf("execute_kernel_memory! A[N-1]=%f, N=%lld, max_power=%lld\n", A[N*N-1], N, max_power);

}

void execute_kernel_io(const Kernel &kernel)
{
  
}

void execute_kernel_imbalance(const Kernel &kernel)
{
  //random pick one task to be compute bound

  // Use current time as seed for random generator
  // srand((dsecnd()+myid)); 
  // bound = rand() % bound;

  // for (long iter = 0; iter < kernel.iterations; iter++) {
  //   for (i = 0; i < m*p; i++) {
  //       temp = A[i];
  //       sum = temp;
  //       for (j=0; j<bound; j++){
  //           temp *=temp;
  //           sum += temp;
  //       }    
  //       A[i] = sum;
  //   }    
  // }

}

// -- add by Yuankun