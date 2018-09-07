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
        ./legion/task_bench -steps 9 -type $t -ll:cpu 2
    done
fi

if [[ $USE_REALM -eq 1 ]]; then
    for t in $extended_types; do
        ./realm/task_bench -steps 9 -type $t
        ./realm/task_bench -steps 9 -type $t -ll:cpu 2
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

if [[ $USE_CHAPEL -eq 1 ]]; then
    for t in trivial no_comm stencil_1d nearest all_to_all; do # FIXME: stencil_1d_periodic dom tree fft
        ./chapel/task_benchmark -- -steps 9 -type $t
    done
fi

if [[ $USE_OPENMP -eq 1 ]]; then
    export LD_LIBRARY_PATH=/usr/local/clang/lib:$LD_LIBRARY_PATH
    for t in $basic_types; do
        ./openmp/main -steps 9 -type $t
        ./openmp/main -steps 9 -type $t -kernel memory_bound -scratch 64
    done
fi

if [[ $USE_OMPSS -eq 1 ]]; then
    for t in $basic_types; do
        ./ompss/main -steps 9 -type $t
        ./ompss/main -steps 9 -type $t -kernel memory_bound -scratch 64
    done
fi

if [[ $USE_OMPSS2 -eq 1 ]]; then
    for t in $basic_types; do
        ./ompss2/main -steps 9 -type $t
        ./ompss2/main -steps 9 -type $t -kernel memory_bound -scratch 64
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
       $SPARK_SRC_DIR/bin/spark-submit --class "Main" \
            --master ${MASTER_URL} \
            --files $SPARK_SWIG_DIR/libcore_c.so \
            --conf spark.scheduler.listenerbus.eventqueue.capacity=20000 \
            --conf spark.executor.extraLibraryPath=$CORE_DIR:$SPARK_SWIG_DIR:$LD_LIBRARY_PATH \
            $SPARK_PROJ_DIR/target/scala-2.11/Taskbench-assembly-1.0.jar \
            -steps 9 -type $t #logging is off...
    done

    $SPARK_SRC_DIR/sbin/stop-all.sh 
fi)

set +x

echo
echo "Tests completed successfully."
