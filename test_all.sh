#!/bin/bash

set -e

if [[ ! -d deps ]]; then
    echo "The directory deps does not exist."
    echo "Please run ./get_deps.sh and try again."
    false
fi

source deps/env.sh

basic_types="trivial no_comm stencil_1d stencil_1d_periodic dom tree fft nearest"
extended_types="$basic_types all_to_all"

compute_kernel="-kernel compute_bound -iter 1024"
memory_kernel="-kernel memory_bound -iter 1024 -scratch 64"

compute_kernels=("" "$compute_kernel")
kernels=("" "$compute_kernel" "$memory_kernel")

set -x

if [[ $TASKBENCH_USE_MPI -eq 1 ]]; then
    for t in no_comm stencil_1d stencil_1d_periodic dom tree fft nearest all_to_all; do # FIXME: trivial is broken
        for k in "${compute_kernels[@]}"; do # FIXME: memory-bound kernel is broken
            mpirun -np 4 ./mpi/nonblock      -steps 9 -width 4 -type $t $k
        done
    done
    for t in no_comm stencil_1d stencil_1d_periodic fft all_to_all; do # FIXME: trivial, dom, tree, nearest are broken
        for k in "${compute_kernels[@]}"; do # FIXME: memory-bound kernel is broken
            for binary in bcast alltoall buffered_send; do
                mpirun -np 4 ./mpi/$binary   -steps 9 -width 4 -type $t $k
            done
        done
    done
fi

if [[ $USE_LEGION -eq 1 ]]; then
    for t in $extended_types; do
        for k in "${kernels[@]}"; do
            ./legion/task_bench -steps 9 -type $t $k
            ./legion/task_bench -steps 9 -type $t $k -ll:cpu 2
        done
    done
fi

if [[ $USE_REALM -eq 1 ]]; then
    for t in $extended_types; do
        for k in "${compute_kernels[@]}"; do # FIXME: memory-bound kernel is broken
            ./realm/task_bench -steps 9 -type $t $k
            ./realm/task_bench -steps 9 -type $t $k -ll:cpu 2
        done
    done
fi

if [[ $USE_STARPU -eq 1 ]]; then
    for t in $basic_types; do
        for k in "${kernels[@]}"; do
            mpirun -np 1 ./starpu/main -steps 9 -type $t $k -core 2
            mpirun -np 4 ./starpu/main -steps 9 -type $t $k -p 1 -core 2
            mpirun -np 4 ./starpu/main -steps 9 -type $t $k -p 2 -core 2
            mpirun -np 4 ./starpu/main -steps 9 -type $t $k -p 4 -core 2
        done
    done
fi

if [[ $USE_PARSEC -eq 1 ]]; then
    for t in $basic_types; do
        for k in "${kernels[@]}"; do
            mpirun -np 1 ./parsec/main -steps 9 -type $t $k -c 2
            mpirun -np 4 ./parsec/main -steps 9 -type $t $k -p 1 -c 2
            mpirun -np 4 ./parsec/main -steps 9 -type $t $k -p 2 -c 2
            mpirun -np 4 ./parsec/main -steps 9 -type $t $k -p 4 -c 2
        done
    done
fi

if [[ $USE_CHARM -eq 1 ]]; then
    for t in $extended_types; do
        for k in "${compute_kernels[@]}"; do # FIXME: memory-bound kernel is broken
            ./charm++/charmrun +p1 ++mpiexec ./charm++/benchmark -steps 9 -type $t $k
        done
    done
    rm charmrun.*
fi

if [[ $USE_CHAPEL -eq 1 ]]; then
    for t in no_comm stencil_1d nearest all_to_all; do # FIXME: trivial stencil_1d_periodic dom tree fft
        for k in "${compute_kernels[@]}"; do # FIXME: memory-bound kernel is broken
            ./chapel/task_benchmark -- -steps 9 -type $t $k
        done
    done
fi

if [[ $USE_OPENMP -eq 1 ]]; then
    export LD_LIBRARY_PATH=/usr/local/clang/lib:$LD_LIBRARY_PATH
    for t in $basic_types; do
        for k in "${kernels[@]}"; do
            ./openmp/main -steps 9 -type $t $k -worker 2
        done
    done
fi

if [[ $USE_OMPSS -eq 1 ]]; then
    for t in $basic_types; do
        for k in "${kernels[@]}"; do
            ./ompss/main -steps 9 -type $t $k
        done
    done
fi

(if [[ $USE_SPARK -eq 1 ]]; then
    export SPARK_LOCAL_IP=localhost
    export SPARK_MASTER_IP=localhost
    export SPARK_MASTER_HOST=localhost
    export LD_LIBRARY_PATH="$CORE_DIR:$SPARK_SWIG_DIR:$LD_LIBRARY_PATH"

    # These tests require a running ssh server that allows
    # passwordless connections to localhost. On Travis we do this by
    # setting up a passwordless SSH key. However, these are not
    # changes I'm comfortable making to an arbitrary user's machine.
    if [[ -n $TRAVIS ]]; then
        ssh-keygen -N "" -f "$HOME/.ssh/id_rsa"
        cat "$HOME/.ssh/id_rsa.pub" >> "$HOME/.ssh/authorized_keys"
        echo "id_rsa.pub:"
        cat "$HOME/.ssh/id_rsa.pub"
        echo "authorized_keys:"
        cat "$HOME/.ssh/authorized_keys"
    fi

    # if ! ssh -q -o BatchMode=yes localhost exit; then
    #     echo "Passwordless SSH is required for running Spark tests"
    #     exit 1
    # fi

    $SPARK_SRC_DIR/sbin/start-all.sh 
    #run standalone cluster, not local
    MASTER_URL=spark://localhost:7077
    
    for t in $extended_types; do
        for k in "${kernels[@]}"; do
           $SPARK_SRC_DIR/bin/spark-submit --class "Main" \
                --master ${MASTER_URL} \
                --files $SPARK_SWIG_DIR/libcore_c.so \
                --conf spark.scheduler.listenerbus.eventqueue.capacity=20000 \
                --conf spark.executor.extraLibraryPath=$CORE_DIR:$SPARK_SWIG_DIR:$LD_LIBRARY_PATH \
                $SPARK_PROJ_DIR/target/scala-2.11/Taskbench-assembly-1.0.jar \
                -steps 9 -type $t $k #logging is off...
        done
    done

    $SPARK_SRC_DIR/sbin/stop-all.sh 
fi)

set +x

echo
echo "Tests completed successfully."
