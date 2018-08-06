#!/bin/bash

set -e

if [[ ! -d deps ]]; then
    echo "The directory deps does not exist."
    echo "Please run ./get_deps.sh and try again."
    false
fi

source deps/env.sh

set -x

if [[ $TASKBENCH_USE_MPI -eq 1 ]]; then
    for t in no_comm stencil_1d stencil_1d_periodic dom tree fft nearest all_to_all; do # FIXME: trivial is broken
        mpirun -np 4 ./mpi/nonblock      -steps 9 -width 4 -type $t
    done
    for t in no_comm stencil_1d stencil_1d_periodic fft all_to_all; do # FIXME: trivial, dom, tree, nearest are broken
        mpirun -np 4 ./mpi/bcast         -steps 9 -width 4 -type $t
        mpirun -np 4 ./mpi/alltoall      -steps 9 -width 4 -type $t
        mpirun -np 4 ./mpi/buffered_send -steps 9 -width 4 -type $t
    done
fi

basic_types="trivial no_comm stencil_1d stencil_1d_periodic dom tree fft nearest"
extended_types="$basic_types all_to_all"

if [[ $USE_LEGION -eq 1 ]]; then
    for t in $extended_types; do
        ./legion/task_bench -steps 9 -type $t
    done
fi

if [[ $USE_STARPU -eq 1 ]]; then
    for t in $basic_types; do
        mpirun -np 1 ./starpu/main -steps 9 -type $t
        mpirun -np 4 ./starpu/main -steps 9 -type $t -p 1
        mpirun -np 4 ./starpu/main -steps 9 -type $t -p 2
        mpirun -np 4 ./starpu/main -steps 9 -type $t -p 4
        mpirun -np 4 ./starpu/main -steps 9 -type $t -p 1 -kernel memory_bound -scratch 64
    done
fi

if [[ $USE_PARSEC -eq 1 ]]; then
    for t in $basic_types; do
        mpirun -np 1 ./parsec/main -steps 9 -type $t
        mpirun -np 4 ./parsec/main -steps 9 -type $t -p 1
        mpirun -np 4 ./parsec/main -steps 9 -type $t -p 2
        mpirun -np 4 ./parsec/main -steps 9 -type $t -p 4
        mpirun -np 4 ./parsec/main -steps 9 -type $t -p 1 -kernel memory_bound -scratch 64
    done
fi

if [[ $USE_CHARM -eq 1 ]]; then
    for t in $extended_types; do
        ./charm++/charmrun +p1 ++mpiexec ./charm++/benchmark -steps 9 -type $t
    done
    rm charmrun.*
fi
