/* Copyright 2019 Los Alamos National Laboratory
 * Copyright 2009-2018 The University of Tennessee and The University 
 *                     of Tennessee Research Foundation
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
#ifndef _TESTSCOMMON_H
#define _TESTSCOMMON_H

/* parsec things */
#include "parsec.h"

/* system and io */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* Plasma and math libs */
#include <math.h>
//#include <cblas.h>
//#include <lapacke.h>
//#include <core_blas.h>

#include "parsec/profiling.h"
#include "parsec/parsec_internal.h"
#include "parsec/utils/debug.h"
//#include "dplasma.h"

#ifdef __cplusplus
extern "C" {
#endif

/* these are globals in common.c */
extern const char *PARSEC_SCHED_NAME[];
extern int unix_timestamp;
extern char cwd[];

/* Update PASTE_CODE_PROGRESS_KERNEL below if you change this list */
enum iparam_t {
  IPARAM_RANK,         /* Rank                              */
  IPARAM_NNODES,       /* Number of nodes                   */
  IPARAM_NCORES,       /* Number of cores                   */
  IPARAM_NGPUS,        /* Number of GPUs                    */
  IPARAM_P,            /* Rows in the process grid          */
  IPARAM_Q,            /* Columns in the process grid       */
  IPARAM_M,            /* Number of rows of the matrix      */
  IPARAM_N,            /* Number of columns of the matrix   */
  IPARAM_K,            /* RHS or K                          */
  IPARAM_IB,           /* Inner-blocking size               */
  IPARAM_NB,           /* Number of columns in a tile       */
  IPARAM_MB,           /* Number of rows in a tile          */
  IPARAM_SNB,          /* Number of columns in a super-tile */
  IPARAM_SMB,          /* Number of rows in a super-tile    */
  IPARAM_HMB,          /* Small MB for recursive hdags */
  IPARAM_HNB,          /* Small NB for recursive hdags */
  IPARAM_CHECK,        /* Checking activated or not         */
  IPARAM_VERBOSE,      /* How much noise do we want?        */
  IPARAM_SCHEDULER,    /* User-selected scheduler */
  IPARAM_SIZEOF
};

#define PARSEC_SCHEDULER_DEFAULT 0
#define PARSEC_SCHEDULER_LFQ 1
#define PARSEC_SCHEDULER_LTQ 2
#define PARSEC_SCHEDULER_AP  3
#define PARSEC_SCHEDULER_LHQ 4
#define PARSEC_SCHEDULER_GD  5
#define PARSEC_SCHEDULER_PBQ 6
#define PARSEC_SCHEDULER_IP  7
#define PARSEC_SCHEDULER_RND 8

void iparam_default_gemm(int* iparam);
void iparam_default_ibnbmb(int* iparam, int ib, int nb, int mb);

#define PASTE_CODE_IPARAM_LOCALS(iparam)                                \
    rank  = iparam[IPARAM_RANK];                                    \
    nodes = iparam[IPARAM_NNODES];                                  \
    cores = iparam[IPARAM_NCORES];                                  \
    gpus  = iparam[IPARAM_NGPUS];                                   \
    P     = iparam[IPARAM_P];                                       \
    Q     = iparam[IPARAM_Q];                                       \
    check = iparam[IPARAM_CHECK];                                   \
    loud  = iparam[IPARAM_VERBOSE];                                 \
    scheduler = iparam[IPARAM_SCHEDULER];                           \
    (void)rank;(void)nodes;(void)cores;(void)gpus;(void)P;(void)Q;(void)check;(void)loud; \
    (void)scheduler;
    
#define PASTE_CODE_IPARAM_LOCALS_MAT(iparam)                                \
    mat.M     = iparam[IPARAM_M];                                       \
    mat.N     = iparam[IPARAM_N];                                       \
    mat.K     = iparam[IPARAM_K];                                       \
    mat.NRHS  = mat.K;                                                      \
    mat.IB    = iparam[IPARAM_IB];                                      \
    mat.MB    = iparam[IPARAM_MB];                                      \
    mat.NB    = iparam[IPARAM_NB];                                      \
    mat.SMB   = iparam[IPARAM_SMB];                                     \
    mat.SNB   = iparam[IPARAM_SNB];                                     \
    mat.HMB   = iparam[IPARAM_HMB];                                     \
    mat.HNB   = iparam[IPARAM_HNB];                                     \
    mat.MT    = (mat.M%mat.MB==0) ? (mat.M/mat.MB) : (mat.M/mat.MB+1);                          \
    mat.NT    = (mat.N%mat.NB==0) ? (mat.N/mat.NB) : (mat.N/mat.NB+1);                          \
    mat.KT    = (mat.K%mat.MB==0) ? (mat.K/mat.MB) : (mat.K/mat.MB+1);                          \
    (void)mat.M;(void)mat.N;(void)mat.K;(void)mat.NRHS; \
    (void)mat.IB;(void)mat.MB;(void)mat.NB;(void)mat.MT;(void)mat.NT;(void)mat.KT; \
    (void)mat.SMB;(void)mat.SNB;(void)mat.HMB;(void)mat.HNB;

/*******************************
 * globals values
 *******************************/

#if defined(PARSEC_HAVE_MPI)
extern MPI_Datatype SYNCHRO;
#endif  /* PARSEC_HAVE_MPI */

void print_usage(void);
void print_arguments(int* iparam);
void parse_arguments(int *_argc, char*** _argv, int* iparam);

parsec_context_t *setup_parsec(int argc, char* argv[], int *iparam);
void cleanup_parsec(parsec_context_t* parsec, int *iparam);

/**
 * No macro with the name max or min is acceptable as there is
 * no way to correctly define them without borderline effects.
 */
#undef max
#undef min
static inline int max(int a, int b) { return a > b ? a : b; }
static inline int min(int a, int b) { return a < b ? a : b; }


/* Paste code to allocate a matrix in desc if cond_init is true */
#define PASTE_CODE_ALLOCATE_MATRIX(DC, COND, TYPE, INIT_PARAMS)      \
    if(COND) {                                                          \
        DC.mat = parsec_data_allocate((size_t)DC.super.nb_local_tiles * \
                                        (size_t)DC.super.bsiz *      \
                                        (size_t)parsec_datadist_getsizeoftype(DC.super.mtype)); \
        parsec_data_collection_set_key((parsec_data_collection_t*)&DC, #DC);          \
    }

#define TILE_OF_MAT(DC, I, J) \
    parsec_dtd_tile_of(&(mat.__dc##DC->super.super), (&(mat.__dc##DC->super.super))->data_key(&(mat.__dc##DC->super.super), I, J))

#ifdef __cplusplus
}
#endif

#endif /* _TESTSCOMMON_H */
