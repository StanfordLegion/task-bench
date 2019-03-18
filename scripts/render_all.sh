#!/bin/bash

root_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

if [[ $1 = crop ]]; then
    function crop {
        pdfcrop "$1" && mv "$(basename "$1" .pdf)"-crop.pdf "$1"
    }
else
    function crop { true; }
fi

if [[ $(basename $PWD) = compute ]]; then
    "$root_dir"/metg.py -m cori -g 1 -d no_comm --csv excel > metg_no_comm.csv
    "$root_dir"/metg.py -m cori -g 1 -d stencil_1d --csv excel > metg_stencil.csv
    "$root_dir"/metg.py -m cori -g 1 -d nearest --csv excel > metg_nearest.csv
    "$root_dir"/metg.py -m cori -g 1 -d spread --csv excel > metg_spread.csv
    "$root_dir"/metg.py -m cori -g 4 -d nearest --csv excel > metg_ngraphs_4_nearest.csv

    "$root_dir"/efficiency.py -m cori -g 1 -d stencil_1d -n 1 --csv excel > efficiency_stencil.csv

    "$root_dir"/flops.py -m cori -g 1 -d stencil_1d -n 1 --csv excel > flops_stencil.csv

    "$root_dir"/weak.py -m cori -g 1 -d stencil_1d -s 'mpi nonblock' --csv excel > weak_mpi.csv
    "$root_dir"/strong.py -m cori -g 1 -d stencil_1d -s 'mpi nonblock' --csv excel > strong_mpi.csv

    "$root_dir"/render_metg.py metg_no_comm.csv # --title 'METG vs Nodes (Cori, Compute, No Comm)'
    "$root_dir"/render_metg.py metg_stencil.csv # --title 'METG vs Nodes (Cori, Compute, Stencil)'
    "$root_dir"/render_metg.py metg_nearest.csv # --title 'METG vs Nodes (Cori, Compute, Nearest)'
    "$root_dir"/render_metg.py metg_spread.csv # --title 'METG vs Nodes (Cori, Compute, Spread)'
    "$root_dir"/render_metg.py metg_ngraphs_4_nearest.csv # --title 'METG vs Nodes (Cori, Compute, 4x Nearest)'
    "$root_dir"/render_metg.py efficiency_stencil.csv \
               --xlabel 'Efficiency' \
               --xdata 'efficiency' \
               --no-xlog \
               --no-xticks \
               --x-percent \
               --ylabel 'Task Granularity (ms)' # \
               # --title 'Task Granularity vs Efficiency (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py flops_stencil.csv \
               --xlabel 'Problem Size' \
               --xdata 'iterations' \
               --xlim "($(( 1 << 27 )),$(( 1 << 4 )))" \
               --no-xticks \
               --ylabel 'TFLOPS' \
               --yscale 1e-12 \
               --no-ylog # \
               # --title 'FLOPS vs Problem Size (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py weak_mpi.csv \
               --legend '' \
               --xlabel 'Nodes' \
               --xdata 'nodes' \
               --ylabel 'Wall Time (s)' # \
               # --title 'Weak Scaling by Problem Size (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py strong_mpi.csv \
               --legend '' \
               --xlabel 'Nodes' \
               --xdata 'nodes' \
               --ylabel 'Wall Time (s)' # \
               # --title 'Strong Scaling by Problem Size (Cori, Compute, Stencil)'

    crop metg_no_comm.pdf
    crop metg_stencil.pdf
    crop metg_nearest.pdf
    crop metg_spread.pdf
    crop metg_ngraphs_4_nearest.pdf
    crop efficiency_stencil.pdf
    crop flops_stencil.pdf
    crop weak_mpi.pdf
    crop strong_mpi.pdf

elif [[ $(basename $PWD) = communication ]]; then

    "$root_dir"/comm.py -m cori -g 4 -d spread -n 16 --csv excel > metg_ngraphs_4_spread_nodes_16.csv
    "$root_dir"/comm.py -m cori -g 4 -d spread -n 64 --csv excel > metg_ngraphs_4_spread_nodes_64.csv

    "$root_dir"/comm_efficiency.py -m cori -g 4 -d spread -n 16 -s 'mpi nonblock' --csv excel > efficiency_mpi.csv

    "$root_dir"/comm_efficiency.py -m cori -g 4 -d spread -n 16 -s 'charm' --csv excel > efficiency_charm.csv

    "$root_dir"/render_metg.py metg_ngraphs_4_spread_nodes_16.csv \
               --xlabel 'Message Size (B)' \
               --xdata 'comm' # \
               # --title 'METG vs Communication (Cori, Compute, 4x Spread)'

    "$root_dir"/render_metg.py metg_ngraphs_4_spread_nodes_64.csv \
               --xlabel 'Message Size (B)' \
               --xdata 'comm' # \
               # --title 'METG vs Communication (Cori, Compute, 4x Spread)'

    "$root_dir"/render_metg.py efficiency_mpi.csv \
               --xlabel 'Efficiency' \
               --xdata 'efficiency' \
               --no-xlog \
               --no-xticks \
               --x-percent \
               --ylabel 'Task Granularity (ms)' # \
               # --title 'MPI Task Granularity vs Efficiency (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py efficiency_charm.csv \
               --xlabel 'Efficiency' \
               --xdata 'efficiency' \
               --no-xlog \
               --no-xticks \
               --x-percent \
               --ylabel 'Task Granularity (ms)' # \
               # --title 'Charm++ Task Granularity vs Efficiency (Cori, Compute, Stencil)'

    crop metg_ngraphs_4_spread_nodes_16.pdf
    crop metg_ngraphs_4_spread_nodes_64.pdf
    crop efficiency_mpi.pdf
    crop efficiency_charm.pdf

elif [[ $(basename $PWD) = imbalance ]]; then
    "$root_dir"/imbalance.py -m cori -g 4 -d nearest -n 1 --csv excel > metg_ngraphs_4_nearest.csv

    "$root_dir"/imbalance_efficiency.py -m cori -g 4 -d nearest -n 1 -s 'mpi nonblock' --csv excel > efficiency_mpi.csv

    "$root_dir"/render_metg.py metg_ngraphs_4_nearest.csv \
               --xlabel 'Imbalance' \
               --xdata 'imbalance' \
               --no-xlog # \
               # --title 'METG vs Imbalance (Cori, Compute, 4x Nearest)'

    "$root_dir"/render_metg.py efficiency_mpi.csv \
               --xlabel 'Efficiency' \
               --xdata 'efficiency' \
               --no-xlog \
               --no-xticks \
               --x-percent \
               --ylabel 'Task Granularity (ms)' # \
               # --title 'MPI Task Granularity vs Efficiency (Cori, Compute, Stencil)'

    crop metg_ngraphs_4_nearest.pdf
    crop efficiency_mpi.pdf
else
    echo "Not in a data directory, change to 'compute' or 'imbalance' and then rerun."
fi
