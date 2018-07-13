#!/bin/bash

set -e

if [[ ! -d deps ]]; then
    echo "The directory deps does not exist."
    echo "Please run ./get_deps.sh and try again."
    false
fi

source deps/env.sh

if [[ $TASKBENCH_USE_MPI -eq 1 ]]; then
    # mpirun -np 4 ./mpi/basic    -steps 9 -width 4 -type stencil_1d # FIXME: Freezes
    mpirun -np 4 ./mpi/nonblock -steps 9 -width 4 -type stencil_1d
    mpirun -np 4 ./mpi/bcast    -steps 9 -width 4 -type stencil_1d
    mpirun -np 4 ./mpi/alltoall -steps 9 -width 4 -type stencil_1d
fi

if [[ $USE_LEGION -eq 1 ]]; then
    ./legion/task_bench -steps 9 -type dom
fi

if [[ $USE_STARPU -eq 1 ]]; then
    mpirun -np 1 ./starpu/main -steps 7 -width 4 -type dom
fi

if [[ $USE_PARSEC -eq 1 ]]; then
    mpirun -np 1 ./parsec/main -steps 7 -width 4 -type dom
fi

