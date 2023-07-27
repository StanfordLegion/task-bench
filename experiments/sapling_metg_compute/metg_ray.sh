#!/bin/bash

cores=40
root_dir="$(dirname "$(dirname "$PWD")")"

export LD_LIBRARY_PATH="$root_dir"/core:"$LD_LIBRARY_PATH"
export PYTHONPATH="$root_dir"/ray:"$PYTHONPATH"
SCHEDULER_PORT=1234

function launch {
    python3 "$root_dir"/ray/task_bench.py "${@:2}" -skip-graph-validation
}

function repeat {
    local -n result=$1
    local n=$2
    result=()
    for i in $(seq 1 $n); do
        result+=("${@:3}")
        if (( i < n )); then
            result+=("-and")
        fi
    done
}

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18; do
        for rep in 0 1 2 3 4; do
            if [[ $rep -le $s ]]; then
		ray start --head --port $SCHEDULER_PORT --num-cpus $cores > /dev/null
                local args
                repeat args $3 -kernel compute_bound -iter $(( 1 << (30-s) )) -type $4 -radix ${RADIX:-5} -steps ${STEPS:-1000} -width $(( $2 * cores ))
                $1 $2 "${args[@]}"
		ray stop > /dev/null
            fi
        done
    done
}

n=1
for g in ${NGRAPHS:-1}; do
    for t in ${PATTERN:-stencil_1d}; do
        sweep launch $n $g $t > ray_ngraphs_${g}_type_${t}_nodes_${n}.log
    done
done
