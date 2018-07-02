#!/bin/bash

set -e

USE_LEGION=${USE_LEGION:-1}
#USE_MPI=${USE_MPI:-1}

if [[ -e deps ]]; then
    echo "The directory deps already exists, nothing to do."
    echo "Delete deps and run again if you want to re-download dependencies."
    false
fi

mkdir deps

if [[ $USE_LEGION -eq 1 ]]; then
    export LEGION_DIR=$PWD/deps/legion
    cat >>deps/env.sh <<EOF
export USE_LEGION=$USE_LEGION
export LG_RT_DIR=$LEGION_DIR/runtime
EOF
    source deps/env.sh
    git clone https://gitlab.com/StanfordLegion/legion.git $LEGION_DIR
fi
#if [[ $USE_MPI -eq 1]]; then
#    export USE_MPI=$USE_MPI
#    module load openmpi/3.0.1
#fi
