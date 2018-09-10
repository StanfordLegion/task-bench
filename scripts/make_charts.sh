#!/bin/bash

script_dir="$(dirname "${BASH_SOURCE[0]}")"
c=$1
n=$2
if [[ -n $3 ]]; then
    peak_flops="--peak-compute-bandwidth $3"
fi
if [[ -n $4 ]]; then
    peak_bytes="--peak-memory-bandwidth $4"
fi
for f in *_nodes_$n.log; do
    (set -x; "$script_dir"/metg_chart.py $f -c $c -n $n $peak_flops $peak_bytes)
done
