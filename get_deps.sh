#!/bin/bash

set -e

USE_LEGION=${USE_LEGION:-1}
USE_GASNET=${USE_GASNET:-0}

if [[ -e deps ]]; then
    echo "The directory deps already exists, nothing to do."
    echo "Delete deps and run again if you want to re-download dependencies."
    false
fi

mkdir deps

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
    git clone https://gitlab.com/StanfordLegion/legion.git "$LEGION_DIR"
fi
