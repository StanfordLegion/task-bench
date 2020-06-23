/* Copyright 2020 Los Alamos National Laboratory
* Copyright 2009-2018 Purdue University and Purdue University Research Foundation
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

/*******************************************************************************
*   This example demonstrates threading impact on computing real matrix product 
*   C=alpha*A*B+beta*C using Intel(R) MKL subroutine DGEMM, where A, B, and C 
*   are matrices and alpha and beta are double precision scalars. 
*
*   In this simple example, practices such as memory management, data alignment, 
*   and I/O that are necessary for good programming style and high Intel(R) MKL 
*   performance are omitted to improve readability.
********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <mkl.h>
#include <omp.h>
#include <string.h>

#include <sys/time.h>

double get_cur_time(){
    struct timeval tv;
    struct timezone tz;
    double cur_time;
    gettimeofday(&tv, &tz);
    cur_time= tv.tv_sec + tv.tv_usec/1000000.0;
    return cur_time;
}

/* Consider adjusting LOOP_COUNT based on the performance of your computer */
/* to make sure that total run time is at least 1 second */
#define LOOP_COUNT 50  

int main(int argc, char** argv)
{
  double flops;
  int N = 256;
  int loop_cnt;
  int nb_threads = 1;

  //parse command line
  for (int k = 1; k < argc; k++) {
    if (!strcmp(argv[k], "-size")) {
      N = atoi(argv[++k]);
    }
    if (!strcmp(argv[k], "-cnt")) {
      loop_cnt = atoi(argv[++k]);
    }
    if (!strcmp(argv[k], "-thread")) {
      nb_threads = atoi(argv[++k]);
    }
  }  
  
  omp_set_dynamic(0);

  double *A = NULL;
  double *B = NULL;
  double *C = NULL;
  int i, j, r, max_threads;
  double alpha, beta;
  double s_initial, s_elapsed;

  loop_cnt = LOOP_COUNT;  

  alpha = 1.0; beta = 1.0;
  
  A = (double *)mkl_malloc( N*N*sizeof( double ), 64 );
  B = (double *)mkl_malloc( N*N*sizeof( double ), 64 );
  C = (double *)mkl_malloc( N*N*sizeof( double ), 64 );
  
  if (A == NULL || B == NULL || C == NULL) {
      printf( "\n ERROR: Can't allocate memory for matrices. Aborting... \n\n");
      if (A != NULL) mkl_free(A);
      if (B != NULL) mkl_free(B);
      if (C != NULL) mkl_free(C);
    //  return 1;
  }

  for (i = 0; i < (N * N); i++) {
      A[i] = (double)(i+1);
      B[i] = (double)(-i-1);
      C[i] = 0.0;
  }
    
  mkl_set_num_threads(nb_threads);

  // warmup
  for (r = 0; r < 10; r++) {
    cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, 
                N, N, N, alpha, A, N, B, N, beta, C, N);
  }
  
  s_initial = get_cur_time();
  for (r = 0; r < loop_cnt; r++) {
    cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, 
                N, N, N, alpha, A, N, B, N, beta, C, N);
  }
  s_elapsed = (get_cur_time() - s_initial) / loop_cnt;
  flops = 2*(double)N*(double)N*(double)N/s_elapsed*1e-9;

  printf ("MKL DGEMM N=%d, time %.5f milliseconds, GFLOPS=%.3f\n", 
          N, (s_elapsed * 1000), flops);
  
  mkl_free(A);
  mkl_free(B);
  mkl_free(C);


  printf (" Example completed. \n\n");
  return 0;

}
