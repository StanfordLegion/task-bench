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

files=()
while IFS= read -r -d $'\0'; do
    files+=("$REPLY")
done < <(find . -name '*_nodes_'"$n"'.log' -print0)

for f in "${files[@]}"; do
    (set -x; "$script_dir"/steps_chart.py "$f" -c $c -n $n $peak_flops $peak_bytes)
done
