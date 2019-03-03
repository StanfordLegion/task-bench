#!/bin/bash

root_dir="$(dirname "$(readlink -f "${BASH_SOURCE[0]}")")"

"$root_dir"/metg.py -m cori -g 1 -d stencil_1d --csv excel > metg_stencil.csv
"$root_dir"/metg.py -m cori -g 1 -d nearest --csv excel > metg_nearest.csv
"$root_dir"/metg.py -m cori -g 1 -d spread --csv excel > metg_spread.csv
"$root_dir"/metg.py -m cori -g 4 -d nearest --csv excel > metg_ngraphs_4_nearest.csv

"$root_dir"/render_metg.py metg_stencil.csv
"$root_dir"/render_metg.py metg_nearest.csv
"$root_dir"/render_metg.py metg_spread.csv
"$root_dir"/render_metg.py metg_ngraphs_4_nearest.csv
