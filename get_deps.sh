#!/bin/bash

set -e

DEFAULT_FEATURES=${DEFAULT_FEATURES:-1}

TASKBENCH_USE_MPI=${TASKBENCH_USE_MPI:-$DEFAULT_FEATURES}
USE_GASNET=${USE_GASNET:-0}
TASKBENCH_USE_HWLOC=${TASKBENCH_USE_HWLOC:-$DEFAULT_FEATURES}
USE_LEGION=${USE_LEGION:-$DEFAULT_FEATURES}
USE_STARPU=${USE_STARPU:-$DEFAULT_FEATURES}
USE_PARSEC=${USE_PARSEC:-$DEFAULT_FEATURES}
USE_CHARM=${USE_CHARM:-$DEFAULT_FEATURES}
USE_OPENMP=${USE_OPENMP:-$DEFAULT_FEATURES}
USE_SPARK=${USE_SPARK:-$DEFAULT_FEATURES}

if [[ -e deps ]]; then
    echo "The directory deps already exists, nothing to do."
    echo "Delete deps and run again if you want to re-download dependencies."
    false
fi

mkdir deps

if [[ $TASKBENCH_USE_MPI -eq 1 ]]; then
    cat >>deps/env.sh <<EOF
export TASKBENCH_USE_MPI=$TASKBENCH_USE_MPI
EOF
    source deps/env.sh
fi

if [[ $USE_GASNET -eq 1 ]]; then
    if [ -z ${CONDUIT+x} ]; then
        echo "CONDUIT is required for GASNet build."
        echo "Please set CONDUIT and run again."
        false
    fi
    export GASNET_DIR="$PWD"/deps/gasnet
    cat >>deps/env.sh <<EOF
export USE_GASNET=$USE_GASNET
export GASNET_DIR="$GASNET_DIR"
export GASNET="$GASNET_DIR"/release
export CONDUIT=$CONDUIT
EOF
    git clone https://github.com/StanfordLegion/gasnet.git "$GASNET_DIR"
fi

if [[ $TASKBENCH_USE_HWLOC -eq 1 ]]; then
    export HWLOC_DL_DIR="$PWD"/deps/hwloc
    cat >>deps/env.sh <<EOF
export TASKBENCH_USE_HWLOC=$TASKBENCH_USE_HWLOC
export HWLOC_SRC_DIR=$HWLOC_DL_DIR/hwloc-1.11.10
export HWLOC_DIR=$HWLOC_DL_DIR
EOF
    wget https://download.open-mpi.org/release/hwloc/v1.11/hwloc-1.11.10.tar.gz
    mkdir -p "$HWLOC_DL_DIR"
    tar -zxf hwloc-1.11.10.tar.gz -C "$HWLOC_DL_DIR"
    rm -rf hwloc-1.11.10.tar.gz
fi

if [[ $USE_LEGION -eq 1 ]]; then
    export LEGION_DIR="$PWD"/deps/legion
    cat >>deps/env.sh <<EOF
export USE_LEGION=$USE_LEGION
export LG_RT_DIR="$LEGION_DIR"/runtime
export USE_LIBDL=0
EOF
    git clone -b control_replication https://gitlab.com/StanfordLegion/legion.git "$LEGION_DIR"
fi

if [[ $USE_STARPU -eq 1 ]]; then
    export STARPU_DL_DIR="$PWD"/deps/starpu
    cat >>deps/env.sh <<EOF
export USE_STARPU=$USE_STARPU
export STARPU_SRC_DIR=$STARPU_DL_DIR/starpu-1.2.4
export STARPU_DIR=$STARPU_DL_DIR
EOF
    wget http://starpu.gforge.inria.fr/files/starpu-1.2.4/starpu-1.2.4.tar.gz
    mkdir -p "$STARPU_DL_DIR"
    tar -zxf starpu-1.2.4.tar.gz -C "$STARPU_DL_DIR"
    rm -rf starpu-1.2.4.tar.gz
fi

if [[ $USE_PARSEC -eq 1 ]]; then
    export PARSEC_DL_DIR="$PWD"/deps/parsec
    cat >>deps/env.sh <<EOF
export USE_PARSEC=$USE_PARSEC
export PARSEC_DIR=$PARSEC_DL_DIR/build
EOF
    mkdir -p "$PARSEC_DL_DIR"
    git clone https://wwu12@bitbucket.org/wwu12/parsec.git "$PARSEC_DL_DIR" 
fi

if [[ $USE_CHARM -eq 1 ]]; then
    export CHARM_DIR="$PWD"/deps/charm++
    export CHARM_SMP_DIR="$PWD"/deps/charm++_smp
    cat >>deps/env.sh <<EOF
export CHARM_VERSION=${CHARM_VERSION:-netlrts-linux-x86_64}
export USE_CHARM=$USE_CHARM
export CHARM_DIR=$CHARM_DIR
export CHARM_SMP_DIR=$CHARM_SMP_DIR
EOF
    wget http://charm.cs.illinois.edu/distrib/charm-6.8.2.tar.gz
    mkdir -p "$CHARM_DIR"
    mkdir -p "$CHARM_SMP_DIR"
    tar -zxf charm-6.8.2.tar.gz -C "$CHARM_DIR" --strip-components 1
    tar -zxf charm-6.8.2.tar.gz -C "$CHARM_SMP_DIR" --strip-components 1
fi

if [[ $USE_OPENMP -eq 1 ]]; then
    cat >>deps/env.sh <<EOF
export USE_OPENMP=$USE_OPENMP
EOF
    source deps/env.sh
fi

if [[ $USE_SPARK -eq 1 ]]; then
    export SPARK_DIR="$PWD"/deps/spark
    export SWIG_DIR=$SPARK_DIR/swig-3.0.12
    cat >>deps/env.sh <<EOF
export USE_SPARK=$USE_SPARK
export SPARK_DIR=$SPARK_DIR
export SPARK_SRC_DIR=$SPARK_DIR/spark-2.3.0-bin-hadoop2.7  
export SPARK_SBT_DIR=$SPARK_DIR/sbt/bin 
export SPARK_SWIG_DIR=$SWIG_DIR
export SPARK_PROJ_DIR="$PWD"/spark
export CORE_DIR="$PWD"/core
EOF
    mkdir -p "$SPARK_DIR" #make deps/spark 
    #don’t install Scala--use 2.11.8 that comes with Spark 2.3.0

    #Spark 2.3.0   
    wget https://archive.apache.org/dist/spark/spark-2.3.0/spark-2.3.0-bin-hadoop2.7.tgz #spark-shell doesn’t work without hadoop
    tar -zxf spark-2.3.0-bin-hadoop2.7.tgz -C "$SPARK_DIR" #didn’t add to path—put full paths in emtg script
    rm -rf spark-2.3.0-bin-hadoop2.7.tgz

    #SWIG 3.0.12
    module load java
    module load cmake
    module load pcre
    wget https://downloads.sourceforge.net/project/swig/swig/swig-3.0.12/swig-3.0.12.tar.gz
    tar -zxf swig-3.0.12.tar.gz -C "$SPARK_DIR"
    rm -rf swig-3.0.12.tar.gz
    pushd "$SWIG_DIR"  
    ./configure --prefix="$PWD" #must be absolute path not starting with ~; not found messages are ok
    make
    make install
    #make -k check #can run this on a compute node and pass -j$THREADS to make this faster
    popd

    #SBT 1.1.6
    wget https://sbt-downloads.cdnedge.bluemix.net/releases/v1.1.6/sbt-1.1.6.tgz
    tar -zxf sbt-1.1.6.tgz -C "$SPARK_DIR"
    rm -rf swig-3.0.12.tar.gz    
fi
