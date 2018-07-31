#!/bin/bash

script_dir="$(dirname "${BASH_SOURCE[0]}")"
c=$1
n=$2
for f in *_nodes_$n.log; do
    (set -x; "$script_dir"/emtg_chart.py $f -c $c -n $n)
done
