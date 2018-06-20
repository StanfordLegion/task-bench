/*
 * Copyright (c) 2015-2017 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 *
 * @generated d Wed Jun 13 16:01:32 2018
 *
 */

#include <common.h>
#include <dplasmatypes.h>
#include <data_dist/matrix/two_dim_rectangle_cyclic.h>
#include <interfaces/superscalar/insert_function.h>

enum regions {
               TILE_FULL,
             };


static int
test_task1(parsec_execution_stream_t *es, parsec_task_t *this_task)
{
    (void)es;
    int i, j;
    double *data1;

    parsec_dtd_unpack_args(this_task, &i, &j, &data1);
    
    *data1 = 0.0;
    printf("i %d, j %d, data1 %f\n", i, j, *data1);

    return PARSEC_HOOK_RETURN_DONE;
}

static int
test_task2(parsec_execution_stream_t *es, parsec_task_t *this_task)
{
    (void)es;
    int i, j;
    double *data1, *data2;

    parsec_dtd_unpack_args(this_task, &i, &j, &data1, &data2);
    
    *data2 = *data1 + 1.0;
    printf("i %d, j %d, data2 %f\n", i, j, *data2);

    return PARSEC_HOOK_RETURN_DONE;
}


int main(int argc, char ** argv)
{
    parsec_context_t* parsec;
    int iparam[IPARAM_SIZEOF];
    int info_solution = 0;

    int Cseed = 0;


    /* Set defaults for non argv iparams */
    iparam_default_gemm(iparam);
    iparam_default_ibnbmb(iparam, 0, 1, 1);
#if defined(HAVE_CUDA) && 1
    iparam[IPARAM_NGPUS] = 0;
#endif
    /* Initialize PaRSEC */
    parsec = setup_parsec(argc, argv, iparam);
    PASTE_CODE_IPARAM_LOCALS(iparam);

    PASTE_CODE_FLOPS(FLOPS_DGEMM, ((DagDouble_t)M,(DagDouble_t)N,(DagDouble_t)K));

    LDA = max(LDA, max(M, K));
    LDB = max(LDB, max(K, N));
    LDC = max(LDC, M);

    PASTE_CODE_ALLOCATE_MATRIX(dcC, 1,
        two_dim_block_cyclic, (&dcC, matrix_RealDouble, matrix_Tile,
                               nodes, rank, MB, NB, LDC, N, 0, 0,
                               M, N, SMB, SNB, P));

    /* Initializing dc for dtd */
    two_dim_block_cyclic_t *__dcC = &dcC;
    parsec_dtd_data_collection_init((parsec_data_collection_t *)&dcC);

    /* initializing matrix structure */
    if(!check)
    {

        /* Getting new parsec handle of dtd type */
        parsec_taskpool_t *dtd_tp = parsec_dtd_taskpool_new();

        /* Default type */
        dplasma_add2arena_tile( parsec_dtd_arenas[TILE_FULL],
                                dcC.super.mb*dcC.super.nb*sizeof(double),
                                PARSEC_ARENA_ALIGNMENT_SSE,
                                parsec_datatype_double_t, dcC.super.mb );

        /* matrix generation */
        if(loud > 2) printf("+++ Generate matrices ... ");
        dplasma_dplrnt( parsec, 0, (parsec_tiled_matrix_dc_t *)&dcC, Cseed);
        if(loud > 2) printf("Done\n");


        parsec_context_add_taskpool( parsec, dtd_tp );

        SYNC_TIME_START();

        /* #### parsec context Starting #### */

        /* start parsec context */
        parsec_context_start(parsec);
        int i, j;
        
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++ ) {
                if (i == 0) {
                    parsec_dtd_taskpool_insert_task(dtd_tp, test_task1,    0,  "test_task",
                                                    sizeof(int),    &i,  VALUE,
                                                    sizeof(int),    &j,  VALUE,
                                                    PASSED_BY_REF,    TILE_OF(C, 0, j), INOUT | TILE_FULL | AFFINITY,
                                                    PARSEC_DTD_ARG_END);
                } else {
                    parsec_dtd_taskpool_insert_task(dtd_tp, test_task2,    0,  "test_task",
                                                    sizeof(int),    &i,  VALUE,
                                                    sizeof(int),    &j,  VALUE,
                                                    PASSED_BY_REF,    TILE_OF(C, i-1, j), INPUT | TILE_FULL,
                                                    PASSED_BY_REF,    TILE_OF(C, i, j), INOUT | TILE_FULL | AFFINITY,
                                                    PARSEC_DTD_ARG_END);
                }
                
            }
        }
        
#if 0
        
        i = 0; j = 0;
        parsec_dtd_taskpool_insert_task(dtd_tp, test_task1,    0,  "test_task",
                                        sizeof(int),    &i,  VALUE,
                                        sizeof(int),    &j,  VALUE,
                                        PASSED_BY_REF,    TILE_OF(C, 0, 0), INOUT | TILE_FULL | AFFINITY,
                                        PARSEC_DTD_ARG_END);
        i = 1; j = 0;                            
        parsec_dtd_taskpool_insert_task(dtd_tp, test_task2,    0,  "test_task",
                                        sizeof(int),    &i,  VALUE,
                                        sizeof(int),    &j,  VALUE,
                                        PASSED_BY_REF,    TILE_OF(C, 0, 0), INPUT | TILE_FULL,
                                        PASSED_BY_REF,    TILE_OF(C, 1, 0), INOUT | TILE_FULL | AFFINITY,
                                        PARSEC_DTD_ARG_END);
        i = 1; j = 1;                                  
        parsec_dtd_taskpool_insert_task(dtd_tp, test_task3,    0,  "test_task",
                                        sizeof(int),    &i,  VALUE,
                                        sizeof(int),    &j,  VALUE,
                                        PASSED_BY_REF,    TILE_OF(C, 0, 0), INPUT | TILE_FULL,
                                        PASSED_BY_REF,    TILE_OF(C, 0, 1), INPUT | TILE_FULL,
                                        PASSED_BY_REF,    TILE_OF(C, 1, 1), INOUT | TILE_FULL | AFFINITY,
                                        PARSEC_DTD_ARG_END);
        
        i = 2; j = 0; 
        parsec_dtd_taskpool_insert_task(dtd_tp, test_task2,    0,  "test_task",
                                        sizeof(int),    &i,  VALUE,
                                        sizeof(int),    &j,  VALUE,
                                        PASSED_BY_REF,    TILE_OF(C, 1, 0), INPUT | TILE_FULL,
                                        PASSED_BY_REF,    TILE_OF(C, 2, 0), INOUT | TILE_FULL | AFFINITY,
                                        PARSEC_DTD_ARG_END);
        
        i = 2; j = 1;                                 
        parsec_dtd_taskpool_insert_task(dtd_tp, test_task3,    0,  "test_task",
                                        sizeof(int),    &i,  VALUE,
                                        sizeof(int),    &j,  VALUE,
                                        PASSED_BY_REF,    TILE_OF(C, 1, 0), INPUT | TILE_FULL,
                                        PASSED_BY_REF,    TILE_OF(C, 1, 1), INPUT | TILE_FULL,
                                        PASSED_BY_REF,    TILE_OF(C, 2, 1), INOUT | TILE_FULL | AFFINITY,
                                        PARSEC_DTD_ARG_END);
        
        i = 2; j = 2; 
        parsec_dtd_taskpool_insert_task(dtd_tp, test_task3,    0,  "test_task",
                                        sizeof(int),    &i,  VALUE,
                                        sizeof(int),    &j,  VALUE,
                                        PASSED_BY_REF,    TILE_OF(C, 1, 1), INPUT | TILE_FULL,
                                        PASSED_BY_REF,    TILE_OF(C, 1, 2), INPUT | TILE_FULL,
                                        PASSED_BY_REF,    TILE_OF(C, 2, 2), INOUT | TILE_FULL | AFFINITY,
                                        PARSEC_DTD_ARG_END);

#endif
        parsec_dtd_data_flush_all( dtd_tp, (parsec_data_collection_t *)&dcC );

        /* finishing all the tasks inserted, but not finishing the handle */
        parsec_dtd_taskpool_wait( parsec, dtd_tp );

        /* Waiting on all handle and turning everything off for this context */
        parsec_context_wait( parsec );

        /* #### PaRSEC context is done #### */

        SYNC_TIME_PRINT(rank, ("\tPxQ= %3d %-3d NB= %4d N= %7d : %14f gflops\n",
                               P, Q, NB, N,
                               gflops=(flops/1e9)/sync_time_elapsed));

        /* Cleaning up the parsec handle */
        parsec_taskpool_free( dtd_tp );

        /* Cleaning data arrays we allocated for communication */
        parsec_matrix_del2arena( parsec_dtd_arenas[0] );

    } else {
    }

    /* Cleaning data arrays we allocated for communication */
    parsec_dtd_data_collection_fini( (parsec_data_collection_t *)&dcC );

    parsec_data_free(dcC.mat);
    parsec_tiled_matrix_dc_destroy( (parsec_tiled_matrix_dc_t*)&dcC);

    cleanup_parsec(parsec, iparam);

    return info_solution;
}
