#!/bin/bash

set -e

if [[ ! -d deps ]]; then
    echo "The directory deps does not exist."
    echo "Please run ./get_deps.sh and try again."
    false
fi

source deps/env.sh

basic_types="trivial no_comm stencil_1d stencil_1d_periodic dom tree fft nearest random_nearest"
extended_types="$basic_types all_to_all"

compute_bound="-kernel compute_bound -iter 1024"
memory_bound="-kernel memory_bound -iter 1024 -scratch $((64*16))"
imbalanced="-kernel load_imbalance -iter 1024"
communication_bound="-output 1024"

kernels=("" "$compute_bound" "$memory_bound" "$imbalanced" "$communication_bound")
compute_kernels=("" "$compute_bound" "$imbalanced")

set -x

if [[ $TASKBENCH_USE_MPI -eq 1 ]]; then
    for t in $extended_types; do
        for k in "${kernels[@]}"; do
            mpirun -np 1 ./mpi/nonblock -steps 9 -type $t $k
            mpirun -np 2 ./mpi/nonblock -steps 9 -type $t $k
            mpirun -np 4 ./mpi/nonblock -steps 9 -type $t $k
            mpirun -np 4 ./mpi/nonblock -steps 9 -type $t $k -and -steps 9 -type $t $k
        done
    done
    for t in no_comm stencil_1d stencil_1d_periodic all_to_all; do # FIXME: trivial dom tree fft nearest random_nearest are broken
        for k in "${kernels[@]}"; do
            for binary in bcast alltoall buffered_send; do
                mpirun -np 4 ./mpi/$binary -steps 9 -type $t $k
                mpirun -np 4 ./mpi/$binary -steps 9 -type $t $k -and -steps 9 -type $t $k
            done
        done
    done
fi

if [[ $USE_LEGION -eq 1 ]]; then
    for t in $extended_types; do
        for k in "${kernels[@]}"; do
            ./legion/task_bench -steps 9 -type $t $k -ll:cpu 2
            ./legion/task_bench -steps 9 -type $t $k -and -steps 9 -type $t $k -ll:cpu 2
        done
    done
fi

if [[ $USE_REALM -eq 1 ]]; then
    for t in $extended_types; do
        for k in "${kernels[@]}"; do
            ./realm/task_bench -steps 9 -type $t $k -ll:cpu 1
            ./realm/task_bench -steps 9 -type $t $k -ll:cpu 2
            ./realm/task_bench -steps 9 -type $t $k -ll:cpu 4
            if [[ $USE_GASNET -eq 1 ]]; then
                mpirun -np 2 ./realm/task_bench -steps 9 -type $t $k -ll:cpu 1
                mpirun -np 2 ./realm/task_bench -steps 9 -type $t $k -ll:cpu 2
                mpirun -np 4 ./realm/task_bench -steps 9 -type $t $k -ll:cpu 1
            fi
            ./realm/task_bench -steps 9 -type $t $k -and -steps 9 -type $t $k -ll:cpu 2
        done
    done
fi

if [[ $USE_REGENT -eq 1 ]]; then
    for t in trivial no_comm stencil_1d nearest; do # FIXME: stencil_1d_periodic dom tree fft random_nearest all_to_all
        for k in "${kernels[@]}"; do
            # FIXME: Regent needs even number of timesteps
            ./regent/main.shard20 -steps 10 -type $t $k
            ./regent/main.shard20 -steps 10 -type $t $k -ll:cpu 2
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
            mpirun -np 1 ./starpu/main -steps 9 -type $t $k -and -steps 9 -type $t $k -core 2
            mpirun -np 4 ./starpu/main -steps 16 -width 8 -type $t $k -p 1 -core 2 -S
            mpirun -np 4 ./starpu/main -steps 16 -width 8 -type $t $k -and -steps 16 -width 8 -type $t $k -core 2 -p 1 -S
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
            mpirun -np 1 ./parsec/main -steps 9 -type $t $k -and -steps 9 -type $t $k -c 2
        done
    done
fi

if [[ $USE_CHARM -eq 1 ]]; then
    for t in $extended_types; do
        for k in "${kernels[@]}"; do
            ./charm++/charmrun +p1 ++mpiexec ./charm++/benchmark -steps 9 -type $t $k
            ./charm++/charmrun +p1 ++mpiexec ./charm++/benchmark -steps 9 -type $t $k -and -steps 9 -type $t $k
        done
    done
    rm charmrun.*
fi

if [[ $USE_CHAPEL -eq 1 ]]; then
    for t in $extended_types; do
        for k in "${kernels[@]}"; do
            ./chapel/task_benchmark -- -steps 9 -type $t $k
            ./chapel/task_benchmark -- -steps 9 -type $t $k -and -steps 9 -type $t $k
        done
    done
fi

(if [[ $USE_X10 -eq 1 ]]; then
    source "$X10_DIR"/env.sh

    for t in $extended_types; do
        for k in "${kernels[@]}"; do
            mpirun -np 1 ./x10/main -steps 9 -type $t $k
            mpirun -np 2 ./x10/main -steps 9 -type $t $k
            mpirun -np 4 ./x10/main -steps 9 -type $t $k
            mpirun -np 4 ./x10/main -steps 9 -type $t $k -and -steps 9 -type $t $k
        done
    done
fi)

if [[ $USE_OPENMP -eq 1 ]]; then
    export LD_LIBRARY_PATH=/usr/local/clang/lib:$LD_LIBRARY_PATH
    for t in $basic_types; do
        for k in "${kernels[@]}"; do
            ./openmp/main -steps 9 -type $t $k -worker 2
            ./openmp/main -steps 9 -type $t $k -and -steps 9 -type $t $k -worker 2
        done
    done
fi

if [[ $USE_OMPSS -eq 1 ]]; then
    for t in $basic_types; do
        for k in "${kernels[@]}"; do
            ./ompss/main -steps 9 -type $t $k
            ./ompss/main -steps 9 -type $t $k -and -steps 9 -type $t $k
        done
    done
fi

(if [[ $USE_SPARK -eq 1 ]]; then
    source "$SPARK_DIR"/env.sh

    export CORE_DIR="$PWD"/core
    export SPARK_PROJ_DIR="$PWD"/spark

    export SPARK_LOCAL_IP=localhost
    export SPARK_MASTER_IP=localhost
    export SPARK_MASTER_HOST=localhost
    export LD_LIBRARY_PATH="$CORE_DIR:$SPARK_PROJ_DIR:$LD_LIBRARY_PATH"

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

    function run_spark {
        $SPARK_SRC_DIR/bin/spark-submit \
            --class "Main" \
            --master ${MASTER_URL} \
            --files $SPARK_PROJ_DIR/libcore_c.so \
            --conf spark.scheduler.listenerbus.eventqueue.capacity=20000 \
            --conf spark.executor.extraLibraryPath=$CORE_DIR:$SPARK_PROJ_DIR:$LD_LIBRARY_PATH \
            $SPARK_PROJ_DIR/target/scala-2.11/Taskbench-assembly-1.0.jar \
            "$@"
        #logging is off...
    }

    for t in $extended_types; do
        for k in "${kernels[@]}"; do
            run_spark -steps 9 -type $t $k -skip-graph-validation
            run_spark -steps 9 -type $t $k -and -steps 9 -type $t $k -skip-graph-validation
        done
    done

    $SPARK_SRC_DIR/sbin/stop-all.sh 
fi)

(if [[ $USE_SWIFT -eq 1 ]]; then
    source "$SWIFT_DIR"/env.sh

    pushd swift
    for t in $extended_types; do
        for k in "${compute_kernels[@]}"; do
            turbine -n 4 benchmark.tic -type $t $k -steps 9
            # FIXME: Swift breaks with multiple task graphs
            # turbine -n 4 benchmark.tic -type $t $k -steps 9 -and -type $t $k -steps 9
        done
    done
    popd
fi)

(if [[ $USE_TENSORFLOW -eq 1 ]]; then
    source "$TENSORFLOW_DIR"/env.sh

    export LD_LIBRARY_PATH="$PWD"/core:"$PWD"/tensorflow/ops:"$LD_LIBRARY_PATH"

    pushd tensorflow
    for t in $extended_types; do
        for k in "${compute_kernels[@]}"; do
            python task_bench.py -steps 9 -type $t $k
            python task_bench.py -steps 9 -type $t $k -and -steps 9 -type $t $k
        done
    done
    popd
fi)

set +x

echo
echo "Tests completed successfully."
