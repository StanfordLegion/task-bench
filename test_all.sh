#!/bin/bash

set -e

if [[ ! -d deps ]]; then
    echo "The directory deps does not exist."
    echo "Please run ./get_deps.sh and try again."
    false
fi

source deps/env.sh

if [[ $TASKBENCH_USE_MPI -eq 1 ]]; then
    for t in no_comm stencil_1d stencil_1d_periodic fft; do # FIXME: trivial, dom, tree are broken
        # mpirun -np 4 ./mpi/basic         -steps 9 -width 4 -type $t # FIXME: Freezes
        mpirun -np 4 ./mpi/nonblock      -steps 9 -width 4 -type $t
        mpirun -np 4 ./mpi/bcast         -steps 9 -width 4 -type $t
        mpirun -np 4 ./mpi/alltoall      -steps 9 -width 4 -type $t
        mpirun -np 4 ./mpi/buffered_send -steps 9 -width 4 -type $t
    done
fi

if [[ $USE_LEGION -eq 1 ]]; then
    for t in trivial no_comm stencil_1d stencil_1d_periodic dom tree fft all_to_all; do
        ./legion/task_bench -steps 9 -type $t
    done
fi

if [[ $USE_STARPU -eq 1 ]]; then
    for t in trivial no_comm stencil_1d stencil_1d_periodic dom tree fft; do
        mpirun -np 1 ./starpu/main -steps 9 -type $t
        mpirun -np 4 ./starpu/main -steps 9 -type $t -p 1
        mpirun -np 4 ./starpu/main -steps 9 -type $t -p 2
        mpirun -np 4 ./starpu/main -steps 9 -type $t -p 4
    done
fi

if [[ $USE_PARSEC -eq 1 ]]; then
    for t in trivial no_comm stencil_1d stencil_1d_periodic dom tree fft; do
        mpirun -np 1 ./parsec/main -steps 9 -type $t
        mpirun -np 4 ./parsec/main -steps 9 -type $t -p 1
        mpirun -np 4 ./parsec/main -steps 9 -type $t -p 2
        mpirun -np 4 ./parsec/main -steps 9 -type $t -p 4
    done
fi

if [[ $USE_CHARM -eq 1 ]]; then
    for t in trivial no_comm stencil_1d stencil_1d_periodic dom tree fft all_to_all; do
        ./charm++/charmrun +p1 ++mpiexec ./charm++/benchmark -steps 9 -type $t
    done
    rm charmrun.*
fi
