/* Copyright 2018 Los Alamos National Laboratory
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

#ifndef DATA_H
#define DATA_H
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct starpu_ddesc_s starpu_ddesc_t;

struct starpu_ddesc_s {
  // function to get matrix tiles address
  void *(*get_blkaddr)( const starpu_ddesc_t*, int, int );
  // function to get matrix tiles leading dimension
  int   (*get_blkldd )( const starpu_ddesc_t*, int );
  // function to get matrix tiles MPI rank
  int   (*get_rankof) ( const starpu_ddesc_t*, int, int );
  void *mat;        // pointer to the beginning of the matrix
  size_t A21;       // pointer to the beginning of the matrix A21
  size_t A12;       // pointer to the beginning of the matrix A12
  size_t A22;       // pointer to the beginning of the matrix A22
  int styp;         // storage layout of the matrix
  int dtyp;         // precision of the matrix
  int mb;           // number of rows in a tile
  int nb;           // number of columns in a tile
  int bsiz;         // size in elements including padding
  int lm;           // number of rows of the entire matrix
  int ln;           // number of columns of the entire matrix
  int lmt;          // number of tile rows of the entire matrix - derived parameter
  int lnt;          // number of tile columns of the entire matrix - derived parameter
  int i;            // row index to the beginning of the submatrix
  int j;            // column index to the beginning of the submatrix
  int m;            // number of rows of the submatrix
  int n;            // number of columns of the submatrix
  int mt;           // number of tile rows of the submatrix - derived parameter
  int nt;           // number of tile columns of the submatrix - derived parameter
                    // Data for distributed cases
  int p;            // number of rows of the 2D distribution grid
  int q;            // number of columns of the 2D distribution grid
  int llm;          // number of rows of the 2D distribution grid
  int lln;          // number of columns of the 2D distribution grid
  int llm1;         // number of tile rows of the A11 matrix - derived parameter
  int lln1;         // number of tile columns of the A11 matrix - derived parameter
  int llmt;         // number of tile rows of the local (to a node) matrix
  int llnt;         // number of tile columns of the local (to a node) matrix
  int id;           // identification number of the descriptor
  int occurences;   // identify main matrix desc (occurances=1) or
                    // submatrix desc (occurances>1) to avoid unregistering
                    // GPU data twice
  int use_mat;      // 1 if we have a pointer to the overall data mat - else 0
  int alloc_mat;    // 1 if we handle the allocation of mat - else 0
  int register_mat; // 1 if we have to register mat - else 0 (handled by the application)
  int myrank;       // MPI rank of the descriptor
  starpu_data_handle_t *starpu_handle;   // scheduler (QUARK|StarPU) specific structure
};


starpu_ddesc_t* create_and_distribute_data(int rank, int world, int mb, int nb, int mt, int nt, int p, int q, int desc_id);

void destroy_data(starpu_ddesc_t *ddesc);

starpu_data_handle_t starpu_desc_getaddr(starpu_ddesc_t *desc, int m, int n);

int desc_islocal(const starpu_ddesc_t *A, int m, int n);

#ifdef __cplusplus
}
#endif

#endif
