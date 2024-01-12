#!/bin/bash

set -e

if [[ ! -d deps ]]; then
    echo "The directory deps does not exist."
    echo "Please run ./get_deps.sh and try again."
    false
fi

source deps/env.sh

basic_types=(
    trivial
    no_comm
    stencil_1d
    stencil_1d_periodic
    dom
    tree
    fft
    nearest
    "spread -period 2"
    random_nearest
)
extended_types=(
    "${basic_types[@]}"
    all_to_all
)

compute_bound="-kernel compute_bound -iter 1024"
memory_bound="-kernel memory_bound -iter 1024 -scratch $((64*16))"
imbalanced="-kernel load_imbalance -iter 1024 -imbalance 0.1"
communication_bound="-output 1024"

kernels=("" "$compute_bound" "$memory_bound" "$imbalanced" "$communication_bound")
noncomm_kernels=("" "$compute_bound" "$memory_bound" "$imbalanced")

steps=23 # chosen to be relatively prime with 2, 3, 5

set -x

if [[ $TASKBENCH_USE_MPI -eq 1 ]]; then
    for t in "${extended_types[@]}"; do
        for k in "${kernels[@]}"; do
            for binary in nonblock bulk_synchronous; do
                mpirun -np 1 ./mpi/$binary -steps $steps -type $t $k -nodes 1
                mpirun -np 2 ./mpi/$binary -steps $steps -type $t $k -nodes 2
                mpirun -np 4 ./mpi/$binary -steps $steps -type $t $k -nodes 4
                mpirun -np 4 ./mpi/$binary -steps $steps -type $t $k -and -steps $steps -type $t $k -nodes 4
            done
        done
    done
    for t in no_comm stencil_1d stencil_1d_periodic all_to_all; do # FIXME: trivial dom tree fft nearest spread random_nearest are broken
        for k in "${kernels[@]}"; do
            for binary in deprecated/bcast deprecated/alltoall deprecated/buffered_send; do
                mpirun -np 4 ./mpi/$binary -steps $steps -type $t $k -nodes 4
                mpirun -np 4 ./mpi/$binary -steps $steps -type $t $k -and -steps $steps -type $t $k -nodes 4
            done
        done
    done
fi

if [[ $USE_MPI_OPENMP -eq 1 ]]; then
    for t in "${extended_types[@]}"; do
        for k in "${kernels[@]}"; do
            mpirun -np 1 ./mpi_openmp/forall -steps $steps -type $t $k -nodes 1
            mpirun -np 2 ./mpi_openmp/forall -steps $steps -type $t $k -nodes 2
            mpirun -np 4 ./mpi_openmp/forall -steps $steps -type $t $k -nodes 4
            mpirun -np 4 ./mpi_openmp/forall -steps $steps -type $t $k -and -steps $steps -type $t $k -nodes 4
        done
    done
fi

if [[ $USE_LEGION -eq 1 ]]; then
    for t in "${extended_types[@]}"; do
        for k in "${kernels[@]}"; do
            ./legion/task_bench -steps $steps -type $t $k -ll:cpu 2
            if [[ $USE_GASNET -eq 1 ]]; then
                mpirun -np 2 ./legion/task_bench -steps $steps -type $t $k -ll:cpu 1 -nodes 2
                mpirun -np 4 ./legion/task_bench -steps $steps -type $t $k -ll:cpu 1 -nodes 4
            fi
            ./legion/task_bench -steps $steps -type $t $k -and -steps $steps -type $t $k -ll:cpu 2 -nodes 1
        done
    done
fi

(if [[ $USE_PYGION -eq 1 ]]; then
    source "$PYGION_DIR"/env.sh
    for t in "${extended_types[@]}"; do
        for k in "${kernels[@]}"; do
            for native in 0 1; do
                export TASK_BENCH_USE_NATIVE=$native
                ./pygion/task_bench -steps $steps -type $t $k -ll:py 1
                ./pygion/task_bench -steps $steps -type $t $k -ll:py 1 -and  -steps $steps -type $t $k -ll:py 1
            done
        done
    done
fi)

if [[ $USE_REALM -eq 1 ]]; then
    for t in "${extended_types[@]}"; do
        for k in "${kernels[@]}"; do
            for variant in realm realm_subgraph; do
                for option in "" "-force-copies"; do
                    ./$variant/task_bench -steps $steps -type $t $k -ll:cpu 1 $option
                    ./$variant/task_bench -steps $steps -type $t $k -ll:cpu 2 $option
                    ./$variant/task_bench -steps $steps -type $t $k -ll:cpu 4 $option
                    if [[ $USE_GASNET -eq 1 ]]; then
                        mpirun -np 2 ./$variant/task_bench -steps $steps -type $t $k -ll:cpu 1 $option -nodes 2
                        mpirun -np 2 ./$variant/task_bench -steps $steps -type $t $k -ll:cpu 2 $option -nodes 2
                        mpirun -np 4 ./$variant/task_bench -steps $steps -type $t $k -ll:cpu 1 $option -nodes 4
                    fi
                    ./$variant/task_bench -steps $steps -type $t $k -and -steps $steps -type $t $k -ll:cpu 2 $option
                done
            done

            # FIXME: Realm old triggers a bug in GASNet MPI conduit with higher steps.
            ./realm_old/task_bench -steps 9 -type $t $k -ll:cpu 1
            ./realm_old/task_bench -steps 9 -type $t $k -ll:cpu 2
            ./realm_old/task_bench -steps 9 -type $t $k -ll:cpu 4
            if [[ $USE_GASNET -eq 1 ]]; then
                mpirun -np 2 ./realm_old/task_bench -steps 9 -type $t $k -ll:cpu 1 -nodes 2
                mpirun -np 2 ./realm_old/task_bench -steps 9 -type $t $k -ll:cpu 2 -nodes 2
                mpirun -np 4 ./realm_old/task_bench -steps 9 -type $t $k -ll:cpu 1 -nodes 4
            fi
            ./realm_old/task_bench -steps 9 -type $t $k -and -steps 9 -type $t $k -ll:cpu 2
        done
    done
fi

if [[ $USE_REGENT -eq 1 ]]; then
    for t in trivial no_comm stencil_1d stencil_1d_periodic nearest "spread -period 2" random_nearest all_to_all; do # FIXME: dom tree fft
        for k in "${kernels[@]}"; do
            ./regent/main.shard15 -steps $steps -type $t $k -ll:io 1
            ./regent/main.shard15 -steps $steps -type $t $k -ll:io 1 -ll:cpu 2
            # FIXME: Regent doesn't support multiple graphs
        done
    done
fi

if [[ $USE_STARPU -eq 1 ]]; then
    export STARPU_RESERVE_NCPU=1
    for t in "${basic_types[@]}"; do
        for k in "${kernels[@]}"; do
            for binary in main main_expl; do
                echo mpirun -np 1 ./starpu/$binary -steps $steps -type $t $k -core 2 -nodes 1
                echo mpirun -np 4 ./starpu/$binary -steps $steps -type $t $k -p 1 -core 2 -nodes 4
                echo mpirun -np 4 ./starpu/$binary -steps $steps -type $t $k -p 2 -core 2 -nodes 4
                echo mpirun -np 4 ./starpu/$binary -field 4 -steps $steps -type $t $k -p 2 -core 2 -nodes 4
                echo mpirun -np 4 ./starpu/$binary -steps $steps -type $t $k -p 4 -core 2 -nodes 4
                echo mpirun -np 1 ./starpu/$binary -steps $steps -type $t $k -and -steps $steps -type $t $k -core 2 -nodes 1
                echo mpirun -np 4 ./starpu/$binary -steps 16 -width 8 -type $t $k -p 1 -core 2 -S -nodes 4
                echo mpirun -np 4 ./starpu/$binary -steps 16 -width 8 -type $t $k -and -steps 16 -width 8 -type $t $k -core 2 -p 1 -S -nodes 4
            done
        done
    done
fi

if [[ $USE_PARSEC -eq 1 ]]; then
    for t in "${basic_types[@]}"; do
        for k in "${kernels[@]}"; do
            mpirun -np 1 ./parsec/main_shard -steps $steps -type $t $k -c 2 -p 1 -nodes 1
            mpirun -np 4 ./parsec/main_shard -width 16 -steps $steps -type $t $k -p 1 -c 2 -S 4 -nodes 4
            mpirun -np 1 ./parsec/main_shard -steps $steps -type $t $k -and -steps $steps -type $t $k -c 2 -p 1 -nodes 1
            mpirun -np 1 ./parsec/main_buffer -steps $steps -type $t $k -c 2 -nodes 1
            mpirun -np 4 ./parsec/main_buffer -steps $steps -type $t $k -p 1 -c 2 -nodes 4
            mpirun -np 4 ./parsec/main_buffer -steps $steps -type $t $k -p 2 -c 2 -nodes 4
            mpirun -np 4 ./parsec/main_buffer -steps $steps -type $t $k -p 4 -c 2 -nodes 4
            mpirun -np 1 ./parsec/main_buffer -steps $steps -type $t $k -and -steps $steps -type $t $k -c 2 -nodes 1
            mpirun -np 1 ./parsec/main_dtd -steps $steps -type $t $k -c 2 -nodes 1
            mpirun -np 4 ./parsec/main_dtd -steps $steps -type $t $k -p 1 -c 2 -nodes 4
            mpirun -np 4 ./parsec/main_dtd -steps $steps -type $t $k -p 2 -c 2 -nodes 4
            mpirun -np 4 ./parsec/main_dtd -steps $steps -type $t $k -p 4 -c 2 -nodes 4
            mpirun -np 1 ./parsec/main_dtd -steps $steps -type $t $k -and -steps $steps -type $t $k -c 2 -nodes 1
        done
    done
    for k in "${kernels[@]}"; do
        mpirun -np 2 ./parsec/main_ptg -p 1 -S 4 -c 2 -steps $steps -type stencil_1d $k -width 8 -field 2 -nodes 2
        mpirun -np 2 ./parsec/main_ptg -p 1 -S 4 -c 2 -steps $steps -type stencil_1d $k -width 8 -and -steps $steps -type stencil_1d $k -width 8 -nodes 2
        mpirun -np 2 ./parsec/main_ptg -p 1 -S 4 -c 2 -steps $steps -type nearest -radix 5 $k -width 8 -field 2 -nodes 2
        mpirun -np 2 ./parsec/main_ptg -p 1 -S 4 -c 2 -steps $steps -type nearest -radix 5 $k -width 8 -and -steps $steps -type nearest -radix 5 $k -width 8 -nodes 2
    done
fi

if [[ $USE_CHARM -eq 1 ]]; then
    for t in "${extended_types[@]}"; do
        for k in "${kernels[@]}"; do
            ./charm++/charmrun +p1 ++mpiexec ./charm++/benchmark -steps $steps -type $t $k
            ./charm++/charmrun +p1 ++mpiexec ./charm++/benchmark -steps $steps -type $t $k -and -steps $steps -type $t $k
        done
    done
    rm charmrun.*
fi

(if [[ $USE_HPX -eq 1 ]]; then
    source "$HPX_DIR"/env.sh

    for t in "${extended_types[@]}"; do
        for k in "${kernels[@]}"; do
            mpirun -np 1 ./hpx/bin/hpx_distributed -steps $steps -type $t $k
            mpirun -np 2 ./hpx/bin/hpx_distributed -steps $steps -type $t $k
            mpirun -np 4 ./hpx/bin/hpx_distributed -steps $steps -type $t $k
            mpirun -np 4 ./hpx/bin/hpx_distributed -steps $steps -type $t $k  -and -steps $steps -type $t $k
        done
    done
fi)

if [[ $USE_CHAPEL -eq 1 ]]; then
    for t in "${extended_types[@]}"; do
        for k in "${kernels[@]}"; do
            ./chapel/task_benchmark -- -steps $steps -type $t $k
            ./chapel/task_benchmark -- -steps $steps -type $t $k -and -steps $steps -type $t $k
        done
    done
fi

(if [[ $USE_X10 -eq 1 ]]; then
    source "$X10_DIR"/env.sh

    for t in "${extended_types[@]}"; do
        for k in "${kernels[@]}"; do
            mpirun -np 1 ./x10/main -steps $steps -type $t $k -nodes 1
            mpirun -np 2 ./x10/main -steps $steps -type $t $k -nodes 2
            mpirun -np 4 ./x10/main -steps $steps -type $t $k -nodes 4
            mpirun -np 4 ./x10/main -steps $steps -type $t $k -and -steps $steps -type $t $k -nodes 4
        done
    done
fi)

if [[ $USE_OPENMP -eq 1 ]]; then
    export LD_LIBRARY_PATH=/usr/local/clang/lib:$LD_LIBRARY_PATH
    for t in "${basic_types[@]}"; do
        for k in "${kernels[@]}"; do
            ./openmp/main -steps $steps -type $t $k -worker 2
            ./openmp/main -steps $steps -type $t $k -and -steps $steps -type $t $k -worker 2
        done
    done
fi

if [[ $USE_OMPSS -eq 1 ]]; then
    for t in "${basic_types[@]}"; do
        for k in "${kernels[@]}"; do
            ./ompss/main -steps $steps -type $t $k
            ./ompss/main -steps $steps -type $t $k -and -steps $steps -type $t $k
        done
    done
fi

if [[ $USE_OMPSS2 -eq 1 ]]; then
    for t in "${basic_types[@]}"; do
        for k in "${kernels[@]}"; do
            taskset -c 0-1 ./ompss2/main -steps $steps -type $t $k
            taskset -c 0-1 ./ompss2/main -steps $steps -type $t $k -and -steps $steps -type $t $k
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
    # passwordless connections to localhost. On CI we do this by
    # setting up a passwordless SSH key. However, these are not
    # changes I'm comfortable making to an arbitrary user's machine.
    if [[ -n $GITHUB_ACTIONS ]]; then
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

    for t in trivial no_comm stencil_1d stencil_1d_periodic dom tree fft nearest random_nearest; do # FIXME: spread is broken
        for k in "${kernels[@]}"; do
            run_spark -steps $steps -type $t $k -skip-graph-validation
            run_spark -steps $steps -type $t $k -and -steps $steps -type $t $k -skip-graph-validation
        done
    done

    $SPARK_SRC_DIR/sbin/stop-all.sh 
fi)

(if [[ $USE_SWIFT -eq 1 ]]; then
    source "$SWIFT_DIR"/env.sh

    pushd swift
    for t in "${extended_types[@]}"; do
        for k in "${noncomm_kernels[@]}"; do
            turbine -n 4 benchmark.tic -type $t $k -steps $steps
            # FIXME: Swift breaks with multiple task graphs
            # turbine -n 4 benchmark.tic -type $t $k -steps $steps -and -type $t $k -steps $steps
        done
    done
    popd
fi)

(if [[ $USE_TENSORFLOW -eq 1 ]]; then
    source "$TENSORFLOW_DIR"/env.sh

    export LD_LIBRARY_PATH="$PWD"/core:"$PWD"/tensorflow/ops:"$LD_LIBRARY_PATH"

    pushd tensorflow
    for t in "${extended_types[@]}"; do
        for k in "${kernels[@]}"; do
            python task_bench.py -steps $steps -type $t $k
            python task_bench.py -steps $steps -type $t $k -and -steps $steps -type $t $k
        done
    done
    popd
fi)

(if [[ $USE_DASK -eq 1 ]]; then
    source "$DASK_DIR"/env.sh

    export LD_LIBRARY_PATH="$PWD"/core:"$LD_LIBRARY_PATH"
    export PYTHONPATH="$PWD"/dask:"$PYTHONPATH"

    SCHEDULER_HOST=localhost
    SCHEDULER_PORT=8786
    SCHEDULER_URL=$SCHEDULER_HOST:$SCHEDULER_PORT
    dask-scheduler --port $SCHEDULER_PORT &
    dask-worker $SCHEDULER_URL &
    dask-worker $SCHEDULER_URL &

    for t in "${extended_types[@]}"; do
        for k in "${kernels[@]}"; do
            for variant in "" _direct; do
                python ./dask/task_bench$variant.py -steps $steps -type $t $k -scheduler $SCHEDULER_URL -expect-workers 2 -skip-graph-validation
                python ./dask/task_bench$variant.py -steps $steps -type $t $k -and -steps $steps -type $t $k -scheduler $SCHEDULER_URL -expect-workers 2 -skip-graph-validation
            done
        done
    done

    kill %3
    kill %2
    kill %1
fi)

set +x

echo
echo "Tests completed successfully."
