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


void execute_kernel_memory(const Kernel &kernel)
{
  // for (r = 0; r < loop_cnt; r++) {
  //   for (i = 0; i < step; i++) {
  //       for (j = 0; j < (N*N/step); j++) {
  //          k = (i+j*step) % (N*N);
  //          C[k] = A[k] + B[k]; 
  //       }
  //   }   
  // }
}

void execute_kernel_compute(const Kernel &kernel)
{

  // for (r = 0; r < loop_cnt; r++) {
  //   for (i = 0; i < m*p; i++) {
  //       temp = A[i];
  //       sum = temp;
  //       for (j=0; j<kernel.bound; j++){
  //           temp *=temp;
  //           sum += temp;
  //       }    
  //       A[i] = sum;
  //   }    
  // }

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

  // for (r = 0; r < loop_cnt; r++) {
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