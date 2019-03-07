#!/bin/bash

root_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

"$root_dir"/metg.py -m cori -g 1 -d no_comm --csv excel "$@" > metg_no_comm.csv
"$root_dir"/metg.py -m cori -g 1 -d stencil_1d --csv excel "$@" > metg_stencil.csv
"$root_dir"/metg.py -m cori -g 1 -d nearest --csv excel "$@" > metg_nearest.csv
"$root_dir"/metg.py -m cori -g 1 -d spread --csv excel "$@" > metg_spread.csv
"$root_dir"/metg.py -m cori -g 4 -d nearest --csv excel "$@" > metg_ngraphs_4_nearest.csv

"$root_dir"/render_metg.py metg_no_comm.csv
"$root_dir"/render_metg.py metg_stencil.csv
"$root_dir"/render_metg.py metg_nearest.csv
"$root_dir"/render_metg.py metg_spread.csv
"$root_dir"/render_metg.py metg_ngraphs_4_nearest.csv
