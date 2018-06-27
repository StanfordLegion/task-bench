#!/bin/bash

set -e

if [[ ! -d deps ]]; then
    echo "The directory deps does not exist."
    echo "Please run ./get_deps.sh and try again."
    false
fi

source deps/env.sh

if [[ $USE_LEGION -eq 1 ]]; then
    ./legion/task_bench -steps 9 -type dom
fi
