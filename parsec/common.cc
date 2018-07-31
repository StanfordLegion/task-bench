/* Copyright 2018 Los Alamos National Laboratory
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
#include "parsec/runtime.h"
#include "parsec/execution_stream.h"
#include "parsec/utils/mca_param.h"

#include "common.h"

#include <stdlib.h>
#include <stdio.h>
#ifdef PARSEC_HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef PARSEC_HAVE_LIMITS_H
#include <limits.h>
#endif
#if defined(PARSEC_HAVE_GETOPT_H)
#include <getopt.h>
#endif  /* defined(PARSEC_HAVE_GETOPT_H) */
#ifdef PARSEC_HAVE_MPI
#include <mpi.h>
#endif
#if defined(PARSEC_HAVE_CUDA)
#include "parsec/devices/cuda/dev_cuda.h"
#endif

const char *PARSEC_SCHED_NAME[] = {
    "", /* default */
    "lfq",
    "ltq",
    "ap",
    "lhq",
    "gd",
    "pbq",
    "ip",
    "rnd",
};

/*******************************
 * globals and argv set values *
 *******************************/
#if defined(PARSEC_HAVE_MPI)
MPI_Datatype SYNCHRO = MPI_BYTE;
#endif  /* PARSEC_HAVE_MPI */

/**********************************
 * Command line arguments
 **********************************/
void print_usage(void)
{
    fprintf(stderr,
            "Mandatory argument:\n"
            " number            : dimension (N) of the matrices (required)\n"
            "Optional arguments:\n"
            " -p -P --grid-rows : rows (P) in the PxQ process grid   (default: NP)\n"
            " -q -Q --grid-cols : columns (Q) in the PxQ process grid (default: NP/P)\n"
            "\n"
            " -N                : dimension (N) of the matrices (required)\n"
            " -M                : dimension (M) of the matrices (default: N)\n"
            " -K --NRHS C<-A*B+C: dimension (K) of the matrices (default: N)\n"
            "           AX=B    : columns in the right hand side (default: 1)\n"
            " -i --IB           : inner blocking     (default: autotuned)\n"
            " -t --MB           : rows in a tile     (default: autotuned)\n"
            " -T --NB           : columns in a tile  (default: autotuned)\n"
            " -s --SMB          : rows of tiles in a supertile (default: 1)\n"
            " -S --SNB          : columns of tiles in a supertile (default: 1)\n"
            " -z --HNB --HMB    : Inner NB/MB used for recursive algorithms (default: MB)\n"
            " -x --check        : verify the results\n"
            "\n"
            " -v --verbose      : extra verbose output\n"
            " -h --help         : this message\n"
            "\n"
            );
    fprintf(stderr,
            "\n"
            " -c --cores        : number of concurent threads (default: number of physical hyper-threads)\n"
            " -g --gpus         : number of GPU (default: 0)\n"
            " -o --scheduler    : select the scheduler (default: LFQ)\n"
            "                     Accepted values:\n"
            "                       LFQ -- Local Flat Queues\n"
            "                       LTQ -- Local Tree Queues\n"
            "                       AP  -- Absolute Priorities\n"
            "                       LHQ -- Local Hierarchical Queues\n"
            "                       GD  -- Global Dequeue\n"
            "                       PBQ -- Priority Based Local Flat Queues\n"
            "                       IP  -- Inverse Priorities\n"
            "                       RND -- Random\n"
            "\n"
            "    --dot          : create a dot output file (default: don't)\n"
            "\n"
            "    --ht nbth      : enable a SMT/HyperThreadind binding using nbth hyper-thread per core.\n"
            "                     This parameter must be declared before the virtual process distribution parameter\n"
            " -V --vpmap        : select the virtual process map (default: flat map)\n"
            "                     Accepted values:\n"
            "                       flat  -- Flat Map: all cores defined with -c are under the same virtual process\n"
            "                       hwloc -- Hardware Locality based: threads up to -c are created and threads\n"
            "                                bound on cores that are under the same socket are also under the same\n"
            "                                virtual process\n"
            "                       rr:n:p:c -- create n virtual processes per real process, each virtual process with p threads\n"
            "                                   bound in a round-robin fashion on the number of cores c (overloads the -c flag)\n"
            "                       file:filename -- uses filename to load the virtual process map. Each entry details a virtual\n"
            "                                        process mapping using the semantic  [mpi_rank]:nb_thread:binding  with:\n"
            "                                        - mpi_rank : the mpi process rank (empty if not relevant)\n"
            "                                        - nb_thread : the number of threads under the virtual process\n"
            "                                                      (overloads the -c flag)\n"
            "                                        - binding : a set of cores for the thread binding. Accepted values are:\n"
            "                                          -- a core list          (exp: 1,3,5-6)\n"
            "                                          -- a hexadecimal mask   (exp: 0xff012)\n"
            "                                          -- a binding range expression: [start];[end];[step] \n"
            "                                             wich defines a round-robin one thread per core distribution from start\n"
            "                                             (default 0) to end (default physical core number) by step (default 1)\n"
            "\n"
            "\n"
            "ENVIRONMENT\n"
            "  [SDCZ]<FUNCTION> : defines the priority limit of a given function for a given precision\n"
            "\n");
            parsec_usage();
}

#define GETOPT_STRING "bc:o:g::p:P:q:Q:N:M:K:A:B:C:i:t:T:s:S:xv::hd:V:"

#if defined(PARSEC_HAVE_GETOPT_LONG)
static struct option long_options[] =
{
    /* PaRSEC specific options */
    {"cores",       required_argument,  0, 'c'},
    {"c",           required_argument,  0, 'c'},
    {"o",           required_argument,  0, 'o'},
    {"scheduler",   required_argument,  0, 'o'},
    {"gpus",        required_argument,  0, 'g'},
    {"g",           required_argument,  0, 'g'},
    {"V",           required_argument,  0, 'V'},
    {"vpmap",       required_argument,  0, 'V'},
    {"ht",          required_argument,  0, 'H'},
    {"dot",         required_argument,  0, '.'},

    /* Generic Options */
    {"grid-rows",   required_argument,  0, 'p'},
    {"p",           required_argument,  0, 'p'},
    {"P",           required_argument,  0, 'p'},
    {"grid-cols",   required_argument,  0, 'q'},
    {"q",           required_argument,  0, 'q'},
    {"Q",           required_argument,  0, 'q'},

    {"N",           required_argument,  0, 'N'},
    {"M",           required_argument,  0, 'M'},
    {"K",           required_argument,  0, 'K'},
    {"NRHS",        required_argument,  0, 'K'},
    {"IB",          required_argument,  0, 'i'},
    {"i",           required_argument,  0, 'i'},
    {"MB",          required_argument,  0, 't'},
    {"t",           required_argument,  0, 't'},
    {"NB",          required_argument,  0, 'T'},
    {"T",           required_argument,  0, 'T'},
    {"SMB",         required_argument,  0, 's'},
    {"s",           required_argument,  0, 's'},
    {"SNB",         required_argument,  0, 'S'},
    {"S",           required_argument,  0, 'S'},
    {"check",       no_argument,        0, 'x'},
    {"x",           no_argument,        0, 'x'},

    /* Recursive options */
    {"z",           required_argument,  0, 'z'},
    {"HNB",         required_argument,  0, 'z'},
    {"HMB",         required_argument,  0, 'z'},

    /* Auxiliary options */
    {"verbose",     optional_argument,  0, 'v'},
    {"v",           optional_argument,  0, 'v'},
    {"help",        no_argument,        0, 'h'},
    {"h",           no_argument,        0, 'h'},
    {0, 0, 0, 0}
};
#endif  /* defined(PARSEC_HAVE_GETOPT_LONG) */

void parse_arguments(int *_argc, char*** _argv, int* iparam)
{
    extern char **environ;
    int opt = 0;
    int rc, c;
    int argc = *_argc;
    char **argv = *_argv;
    char *add_dot = NULL;
    char *value;

    do {
#if defined(PARSEC_HAVE_GETOPT_LONG)
        c = getopt_long_only(argc, argv, "",
                        long_options, &opt);
#else
        c = getopt(argc, argv, GETOPT_STRING);
        (void) opt;
#endif  /* defined(PARSEC_HAVE_GETOPT_LONG) */

        // printf("%c: %s = %s\n", c, long_options[opt].name, optarg);
        switch(c)
        {
            case 'c': iparam[IPARAM_NCORES] = atoi(optarg); break;
            case 'o':
                if( !strcmp(optarg, "LFQ") )
                    iparam[IPARAM_SCHEDULER] = PARSEC_SCHEDULER_LFQ;
                else if( !strcmp(optarg, "LTQ") )
                    iparam[IPARAM_SCHEDULER] = PARSEC_SCHEDULER_LTQ;
                else if( !strcmp(optarg, "AP") )
                    iparam[IPARAM_SCHEDULER] = PARSEC_SCHEDULER_AP;
                else if( !strcmp(optarg, "LHQ") )
                    iparam[IPARAM_SCHEDULER] = PARSEC_SCHEDULER_LHQ;
                else if( !strcmp(optarg, "GD") )
                    iparam[IPARAM_SCHEDULER] = PARSEC_SCHEDULER_GD;
                else if( !strcmp(optarg, "PBQ") )
                    iparam[IPARAM_SCHEDULER] = PARSEC_SCHEDULER_PBQ;
                else if( !strcmp(optarg, "IP") )
                    iparam[IPARAM_SCHEDULER] = PARSEC_SCHEDULER_IP;
                else if( !strcmp(optarg, "RND") )
                    iparam[IPARAM_SCHEDULER] = PARSEC_SCHEDULER_RND;
                else {
                    fprintf(stderr, "#!!!!! malformed scheduler value %s (accepted: LFQ LTQ PBQ AP GD RND LHQ IP). Reverting to default LFQ\n",
                            optarg);
                    iparam[IPARAM_SCHEDULER] = PARSEC_SCHEDULER_LFQ;
                }
                parsec_setenv_mca_param( (char *)"mca_sched", (char *)PARSEC_SCHED_NAME[iparam[IPARAM_SCHEDULER]], &environ );
                break;

            case 'g':
                if(iparam[IPARAM_NGPUS] == -1) {
                    fprintf(stderr, "#!!!!! This test does not have GPU support. GPU disabled.\n");
                    break;
                }
                if(optarg)  iparam[IPARAM_NGPUS] = atoi(optarg);
                else        iparam[IPARAM_NGPUS] = INT_MAX;

                rc = asprintf(&value, "%d", iparam[IPARAM_NGPUS]);
                parsec_setenv_mca_param( (char *)"device_cuda_enabled", value, &environ );
                free(value);
                break;

            case 'p': case 'P': iparam[IPARAM_P] = atoi(optarg); break;
            case 'q': case 'Q': iparam[IPARAM_Q] = atoi(optarg); break;
            case 'N': iparam[IPARAM_N] = atoi(optarg); break;
            case 'M': iparam[IPARAM_M] = atoi(optarg); break;
            case 'K': iparam[IPARAM_K] = atoi(optarg); break;

            case 'i': iparam[IPARAM_IB] = atoi(optarg); break;
            case 't': iparam[IPARAM_MB] = atoi(optarg); break;
            case 'T': iparam[IPARAM_NB] = atoi(optarg); break;
            case 's': iparam[IPARAM_SMB] = atoi(optarg); break;
            case 'S': iparam[IPARAM_SNB] = atoi(optarg); break;

            case 'x': iparam[IPARAM_CHECK] = 1; iparam[IPARAM_VERBOSE] = max(2, iparam[IPARAM_VERBOSE]); break;

                /* Recursive parameters */
            case 'z': iparam[IPARAM_HNB] = iparam[IPARAM_HMB] = atoi(optarg); break;

            case 'v':
                if(optarg)  iparam[IPARAM_VERBOSE] = atoi(optarg);
                else        iparam[IPARAM_VERBOSE] = 2;
                break;

            case 'H':
                if( 0 == iparam[IPARAM_RANK] ) fprintf(stderr, "#!!!!! option '%s' deprecated in testing programs, it should be passed to PaRSEC instead in the exact same format after --\n", long_options[opt].name);
                exit(-10);  /* No kidding! */
                break;  /* because some compilers are just too annoying */

            case 'V':
                if( 0 == iparam[IPARAM_RANK] ) fprintf(stderr, "#!!!!! option '%s' deprecated in testing programs, it should be passed to PaRSEC instead in the exact same format after --\n", long_options[opt].name);
                exit(-10);  /* No kidding! */
                break;  /* because some compilers are just too annoying */

            case '.':
                add_dot = optarg;
                break;

            case 'h': print_usage(); exit(0);
                break;

        //    case '?': /* getopt_long already printed an error message. */
           //     exit(1);
          //      break;  /* because some compilers are just too annoying */

            default:
                break; /* Assume anything else is parsec/mpi stuff */
        }
    } while(-1 != c);

    if( NULL != add_dot ) {
        int i, has_dashdash = 0, has_parsecdot = 0;
        for(i = 1; i < argc; i++) {
            if( !strcmp( argv[i], "--") ) {
                has_dashdash = 1;
            }
            if( has_dashdash && !strncmp( argv[i], "--parsec_dot", 11 ) ) {
                has_parsecdot = 1;
                break;
            }
        }
        if( !has_parsecdot ) {
            char **tmp;
            int  tmpc;
            if( !has_dashdash ) {
                tmpc = *(_argc) + 2;
                tmp = (char **)malloc((tmpc+1) * sizeof(char*));
                tmp[ tmpc - 2 ] = strdup("--");
            } else {
                tmpc = *(_argc) + 1;
                tmp = (char **)malloc((tmpc+1) * sizeof(char*));
            }
            for(i = 0; i < (*_argc);i++)
                tmp[i] = (*_argv)[i];

            rc = asprintf( &tmp[ tmpc - 1 ], "--parsec_dot=%s", add_dot );
            tmp[ tmpc     ] = NULL;

            *_argc = tmpc;
            *_argv = tmp;
        }
    }

    int verbose = iparam[IPARAM_RANK] ? 0 : iparam[IPARAM_VERBOSE];

    if(iparam[IPARAM_NGPUS] < 0) iparam[IPARAM_NGPUS] = 0;
    if(iparam[IPARAM_NGPUS] > 0) {
        if (iparam[IPARAM_VERBOSE] > 3) {
            parsec_setenv_mca_param( (char *)"device_show_capabilities", (char *)"1", &environ );
        }
        if (iparam[IPARAM_VERBOSE] > 2) {
            parsec_setenv_mca_param( (char *)"device_show_statistics", (char *)"1", &environ );
        }
    }

    /* Check the process grid */
    if(0 == iparam[IPARAM_P])
        iparam[IPARAM_P] = iparam[IPARAM_NNODES];
    else if(iparam[IPARAM_P] > iparam[IPARAM_NNODES])
    {
        fprintf(stderr, "#XXXXX There are only %d nodes in the world, and you requested P=%d\n",
                iparam[IPARAM_NNODES], iparam[IPARAM_P]);
        exit(2);
    }
    if(0 == iparam[IPARAM_Q])
        iparam[IPARAM_Q] = iparam[IPARAM_NNODES] / iparam[IPARAM_P];
    int pqnp = iparam[IPARAM_Q] * iparam[IPARAM_P];
    if(pqnp > iparam[IPARAM_NNODES])
    {
        fprintf(stderr, "#XXXXX the process grid PxQ (%dx%d) is larger than the number of nodes (%d)!\n", iparam[IPARAM_P], iparam[IPARAM_Q], iparam[IPARAM_NNODES]);
        exit(2);
    }
    if(verbose && (pqnp < iparam[IPARAM_NNODES]))
    {
        fprintf(stderr, "#!!!!! the process grid PxQ (%dx%d) is smaller than the number of nodes (%d). Some nodes are idling!\n", iparam[IPARAM_P], iparam[IPARAM_Q], iparam[IPARAM_NNODES]);
    }

    assert(iparam[IPARAM_N] != 0);
    if(0 == iparam[IPARAM_M]) iparam[IPARAM_M] = iparam[IPARAM_N];
    if(0 == iparam[IPARAM_K]) iparam[IPARAM_K] = iparam[IPARAM_N];

    /* Set no defaults for IB, NB, MB, the algorithm have to do it */
    assert(iparam[IPARAM_IB]); /* check that defaults have been set */
    if(iparam[IPARAM_NB] <= 0 && iparam[IPARAM_MB] > 0) iparam[IPARAM_NB] = iparam[IPARAM_MB];
    if(iparam[IPARAM_MB] <= 0 && iparam[IPARAM_NB] > 0) iparam[IPARAM_MB] = iparam[IPARAM_NB];
    if(iparam[IPARAM_NGPUS] && iparam[IPARAM_MB] < 0) iparam[IPARAM_MB] = -384;
    if(iparam[IPARAM_NGPUS] && iparam[IPARAM_NB] < 0) iparam[IPARAM_NB] = -384;
    if(iparam[IPARAM_MB] < 0) iparam[IPARAM_MB] = -iparam[IPARAM_MB];
    if(iparam[IPARAM_NB] < 0) iparam[IPARAM_NB] = -iparam[IPARAM_NB];

    /* No supertiling by default */
    if(-'p' == iparam[IPARAM_SMB]) iparam[IPARAM_SMB] = (iparam[IPARAM_M]/iparam[IPARAM_MB])/iparam[IPARAM_P];
    if(-'q' == iparam[IPARAM_SNB]) iparam[IPARAM_SNB] = (iparam[IPARAM_N]/iparam[IPARAM_NB])/iparam[IPARAM_Q];
    if(0 == iparam[IPARAM_SMB]) iparam[IPARAM_SMB] = 1;
    if(0 == iparam[IPARAM_SNB]) iparam[IPARAM_SNB] = 1;
    if(0 == iparam[IPARAM_HMB]) iparam[IPARAM_HMB] = iparam[IPARAM_MB];
    if(0 == iparam[IPARAM_HNB]) iparam[IPARAM_HNB] = iparam[IPARAM_NB];

    (void)rc;
}

void print_arguments(int* iparam)
{
    int verbose = iparam[IPARAM_RANK] ? 0 : iparam[IPARAM_VERBOSE];

    if(verbose)
        fprintf(stderr, "#+++++ cores detected       : %d\n", iparam[IPARAM_NCORES]);

    if(verbose > 1) fprintf(stderr, "#+++++ nodes x cores + gpu  : %d x %d + %d (%d+%d)\n"
                                    "#+++++ P x Q                : %d x %d (%d/%d)\n",
                            iparam[IPARAM_NNODES],
                            iparam[IPARAM_NCORES],
                            iparam[IPARAM_NGPUS],
                            iparam[IPARAM_NNODES] * iparam[IPARAM_NCORES],
                            iparam[IPARAM_NNODES] * iparam[IPARAM_NGPUS],
                            iparam[IPARAM_P], iparam[IPARAM_Q],
                            iparam[IPARAM_Q] * iparam[IPARAM_P], iparam[IPARAM_NNODES]);

    if(verbose)
    {
        fprintf(stderr, "#+++++ M x N x K|NRHS       : %d x %d x %d\n",
                iparam[IPARAM_M], iparam[IPARAM_N], iparam[IPARAM_K]);

        if(iparam[IPARAM_IB] > 0)
            fprintf(stderr, "#+++++ MB x NB , IB         : %d x %d , %d\n",
                            iparam[IPARAM_MB], iparam[IPARAM_NB], iparam[IPARAM_IB]);
        else
            fprintf(stderr, "#+++++ MB x NB              : %d x %d\n",
                    iparam[IPARAM_MB], iparam[IPARAM_NB]);
        if(iparam[IPARAM_SNB] * iparam[IPARAM_SMB] != 1)
            fprintf(stderr, "#+++++ SMB x SNB            : %d x %d\n", iparam[IPARAM_SMB], iparam[IPARAM_SNB]);
        if((iparam[IPARAM_HNB] != iparam[IPARAM_NB]) || (iparam[IPARAM_HMB] != iparam[IPARAM_MB]))
            fprintf(stderr, "#+++++ HMB x HNB            : %d x %d\n", iparam[IPARAM_HMB], iparam[IPARAM_HNB]);
    }
}




static void iparam_default(int* iparam)
{
    /* Just in case someone forget to add the initialization :) */
    memset(iparam, 0, IPARAM_SIZEOF * sizeof(int));
    iparam[IPARAM_NNODES] = 1;
    iparam[IPARAM_NGPUS]  = -1;
}

void iparam_default_ibnbmb(int* iparam, int ib, int nb, int mb)
{
    iparam[IPARAM_IB] = ib ? ib : -1;
    iparam[IPARAM_NB] = -nb;
    iparam[IPARAM_MB] = -mb;
}

void iparam_default_gemm(int* iparam)
{
    iparam_default(iparam);
    iparam[IPARAM_K] = 0;
    /* no support for transpose yet */
}

#ifdef PARSEC_PROF_TRACE
static char* argvzero;
char cwd[1024];
int unix_timestamp;
#endif

parsec_context_t* setup_parsec(int argc, char **argv, int *iparam)
{
#ifdef PARSEC_PROF_TRACE
    argvzero = argv[0];
    unix_timestamp = time(NULL);
    getcwd(cwd, sizeof(cwd));
#endif
#ifdef PARSEC_HAVE_MPI
    {
        int provided;
        MPI_Init_thread(&argc, &argv, MPI_THREAD_SERIALIZED, &provided);
    }
    MPI_Comm_size(MPI_COMM_WORLD, &iparam[IPARAM_NNODES]);
    MPI_Comm_rank(MPI_COMM_WORLD, &iparam[IPARAM_RANK]);
#else
    iparam[IPARAM_NNODES] = 1;
    iparam[IPARAM_RANK] = 0;
#endif
    parse_arguments(&argc, &argv, iparam);
    int verbose = iparam[IPARAM_VERBOSE];
    if(iparam[IPARAM_RANK] > 0 && verbose < 4) verbose = 0;

    /* Once we got out arguments, we should pass whatever is left down */
    int parsec_argc, idx;
    char** parsec_argv = (char**)calloc(argc, sizeof(char*));
    parsec_argv[0] = argv[0];  /* the app name */
    for( idx = parsec_argc = 1;
         (idx < argc) && (0 != strcmp(argv[idx], "--")); idx++);
    if( idx != argc ) {
        for( parsec_argc = 1, idx++; idx < argc;
             parsec_argv[parsec_argc] = argv[idx], parsec_argc++, idx++);
    }
    parsec_context_t* ctx = parsec_init(iparam[IPARAM_NCORES],
                                      &parsec_argc, &parsec_argv);
    free(parsec_argv);
    if( NULL == ctx ) {
        /* Failed to correctly initialize. In a correct scenario report
         * upstream, but in this particular case bail out.
         */
        exit(-1);
    }

    /* If the number of cores has not been defined as a parameter earlier
     update it with the default parameter computed in parsec_init. */
    if(iparam[IPARAM_NCORES] <= 0)
    {
        int p, nb_total_comp_threads = 0;
        for(p = 0; p < ctx->nb_vp; p++) {
            nb_total_comp_threads += ctx->virtual_processes[p]->nb_cores;
        }
        iparam[IPARAM_NCORES] = nb_total_comp_threads;
    }

    return ctx;
}

void cleanup_parsec(parsec_context_t* parsec, int *iparam)
{
    parsec_fini(&parsec);

#ifdef PARSEC_HAVE_MPI
    MPI_Finalize();
#endif
    (void)iparam;
}
