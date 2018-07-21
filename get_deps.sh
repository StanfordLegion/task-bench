#!/bin/bash

set -e

TASKBENCH_USE_MPI=${TASKBENCH_USE_MPI:-1}
USE_GASNET=${USE_GASNET:-0}
USE_LEGION=${USE_LEGION:-1}
USE_STARPU=${USE_STARPU:-1}
USE_PARSEC=${USE_PARSEC:-1}

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

if [[ $USE_LEGION -eq 1 ]]; then
    export LEGION_DIR="$PWD"/deps/legion
    cat >>deps/env.sh <<EOF
export USE_LEGION=$USE_LEGION
export LG_RT_DIR="$LEGION_DIR"/runtime
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
