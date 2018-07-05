#!/bin/bash

set -e

if [[ ! -d deps ]]; then
    echo "The directory deps does not exist."
    echo "Please run ./get_deps.sh and try again."
    false
fi

source deps/env.sh

if [[ $USE_GASNET -eq 1 ]]; then
    make -C "$GASNET_DIR"
fi

if [[ $USE_LEGION -eq 1 ]]; then
    make -C legion clean
    make -C legion -j${THREADS:-4}
fi

if [[ $USE_STARPU -eq 1 ]]; then
    cd "$STARPU_SRC_DIR"
    ./configure --prefix=$STARPU_DIR --disable-cuda
    make -j${THREADS:-4}
    make install
    cd ../../../
    make -C starpu clean
    make -C starpu
fi
