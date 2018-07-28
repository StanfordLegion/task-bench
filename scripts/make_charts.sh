#!/bin/bash

script_dir="$(dirname "${BASH_SOURCE[0]}")"
n=$1
for f in *_nodes_$n.log; do
    (set -x; "$script_dir"/emtg_chart.py $f -c 32 -n $n)
done
