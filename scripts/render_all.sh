#!/bin/bash

root_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

if [[ $(basename $PWD) = compute ]]; then
    "$root_dir"/metg.py -m cori -g 1 -d no_comm --csv excel "$@" > metg_no_comm.csv
    "$root_dir"/metg.py -m cori -g 1 -d stencil_1d --csv excel "$@" > metg_stencil.csv
    "$root_dir"/metg.py -m cori -g 1 -d nearest --csv excel "$@" > metg_nearest.csv
    "$root_dir"/metg.py -m cori -g 1 -d spread --csv excel "$@" > metg_spread.csv
    "$root_dir"/metg.py -m cori -g 4 -d nearest --csv excel "$@" > metg_ngraphs_4_nearest.csv

    "$root_dir"/render_metg.py metg_no_comm.csv --title 'METG vs Nodes (Cori, Compute, No Comm)'
    "$root_dir"/render_metg.py metg_stencil.csv --title 'METG vs Nodes (Cori, Compute, Stencil)'
    "$root_dir"/render_metg.py metg_nearest.csv --title 'METG vs Nodes (Cori, Compute, Nearest)'
    "$root_dir"/render_metg.py metg_spread.csv --title 'METG vs Nodes (Cori, Compute, Spread)'
    "$root_dir"/render_metg.py metg_ngraphs_4_nearest.csv --title 'METG vs Nodes (Cori, Compute, 4x Nearest)'
elif [[ $(basename $PWD) = imbalance ]]; then
    "$root_dir"/imbalance.py -m cori -g 4 -d nearest -n 1 --csv excel "$@" > metg_ngraphs_4_nearest.csv

    "$root_dir"/render_metg.py metg_ngraphs_4_nearest.csv \
               --title 'METG vs Imbalance (Cori, Compute, 4x Nearest)' \
               --xlabel 'Imbalance' \
               --xcol 'imbalance' \
               --no-xlog
else
    echo "Not in a data directory, change to 'compute' or 'imbalance' and then rerun."
fi
