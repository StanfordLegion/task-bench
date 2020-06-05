#!/bin/bash

root_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

if [[ $1 = crop ]]; then
    function crop {
        pdfcrop "$1" >/dev/null && mv "$(basename "$1" .pdf)"-crop.pdf "$1"
    }
else
    function crop { true; }
fi

if [[ $(basename $PWD) = compute ]]; then
    "$root_dir"/metg.py -m cori -g 1 -d stencil_1d --csv excel > metg_stencil.csv
    for pattern in nearest spread fft; do
        "$root_dir"/metg.py -m cori -g 1 -d $pattern --csv excel > metg_${pattern}.csv
    done
    "$root_dir"/metg.py -m cori -g 4 -d nearest --csv excel > metg_ngraphs_4_nearest.csv

    "$root_dir"/efficiency.py -m cori -g 1 -d stencil_1d -n 1 --csv excel > efficiency_stencil.csv
    "$root_dir"/efficiency.py -m cori -g 1 -d stencil_1d -n 1 -s 'mpi nonblock' --csv excel > efficiency_stencil_mpi.csv

    "$root_dir"/flops.py -m cori -g 1 -d stencil_1d -n 1 --csv excel > flops_stencil.csv
    "$root_dir"/flops.py -m cori -g 1 -d stencil_1d -n 1 -s 'mpi nonblock' --csv excel > flops_stencil_mpi.csv

    "$root_dir"/weak.py -m cori -g 1 -d stencil_1d --max-problem-size 262144 --min-problem-size 262144 --csv excel > weak.csv
    "$root_dir"/weak.py -m cori -g 1 -d stencil_1d -s 'mpi nonblock' --csv excel > weak_mpi.csv

    "$root_dir"/strong.py -m cori -g 1 -d stencil_1d --max-problem-size 1048576 --min-problem-size 1048576 --csv excel > strong.csv
    "$root_dir"/strong.py -m cori -g 1 -d stencil_1d --max-problem-size 4294967296 --min-problem-size 256 -s 'mpi nonblock' --csv excel > strong_mpi.csv

    "$root_dir"/strong_limit.py -m cori -g 1 -d stencil_1d -p 1048576 -s 'mpi nonblock' -s 'charm' -s 'parsec ptg' --csv excel > strong_limit_stencil.csv

    "$root_dir"/strong_limit.py -m cori -g 1 -d stencil_1d -p 1048576 --csv excel > strong_limit_all_stencil.csv
    for pattern in nearest spread fft; do
        "$root_dir"/strong_limit.py -m cori -g 1 -d $pattern -p 1048576 --csv excel > strong_limit_all_${pattern}.csv
    done
    "$root_dir"/strong_limit.py -m cori -g 4 -d nearest -p 1048576 --csv excel > strong_limit_all_ngraphs_4_nearest.csv

    # IMPORTANT: Use this only ONLY for rendering the graph so that the intersections appear in the right place for a log-log plot
    "$root_dir"/limit_intersect.py strong_limit_stencil.csv --log-log --csv excel > strong_limit_intersect_stencil_log_log.csv

    "$root_dir"/limit_intersect.py strong_limit_all_stencil.csv --csv excel > strong_limit_intersect_stencil.csv
    for pattern in nearest spread fft; do
        "$root_dir"/limit_intersect.py strong_limit_all_${pattern}.csv --csv excel > strong_limit_intersect_${pattern}.csv
    done
    "$root_dir"/limit_intersect.py strong_limit_all_ngraphs_4_nearest.csv --csv excel > strong_limit_intersect_ngraphs_4_nearest.csv

    "$root_dir"/render_metg.py metg_stencil.csv # --title "METG vs Nodes (Cori, Compute, Stencil)"
    for pattern in nearest spread fft; do
        "$root_dir"/render_metg.py metg_${pattern}.csv # --title "METG vs Nodes (Cori, Compute, ${pattern})"
    done
    "$root_dir"/render_metg.py metg_ngraphs_4_nearest.csv # --title 'METG vs Nodes (Cori, Compute, 4x Nearest)'

    "$root_dir"/efficiency_3d.py -m cori -g 1 -d stencil_1d -s 'mpi nonblock' \
               -x efficiency_3d_stencil_mpi_x.csv \
               -y efficiency_3d_stencil_mpi_y.csv \
               -z efficiency_3d_stencil_mpi_z.csv \
               --metg-x efficiency_3d_stencil_mpi_metg_x.csv \
               --metg-y efficiency_3d_stencil_mpi_metg_y.csv \
               --metg-z efficiency_3d_stencil_mpi_metg_z.csv \
               --csv excel
    "$root_dir"/efficiency_3d.py -m cori -g 1 -d stencil_1d -s 'realm subgraph seema2 socket' \
               -x efficiency_3d_stencil_realm_x.csv \
               -y efficiency_3d_stencil_realm_y.csv \
               -z efficiency_3d_stencil_realm_z.csv \
               --metg-x efficiency_3d_stencil_realm_metg_x.csv \
               --metg-y efficiency_3d_stencil_realm_metg_y.csv \
               --metg-z efficiency_3d_stencil_realm_metg_z.csv \
               --csv excel
    "$root_dir"/efficiency_3d.py -m cori -g 1 -d stencil_1d -s 'parsec' \
               -x efficiency_3d_stencil_parsec_x.csv \
               -y efficiency_3d_stencil_parsec_y.csv \
               -z efficiency_3d_stencil_parsec_z.csv \
               --metg-x efficiency_3d_stencil_parsec_metg_x.csv \
               --metg-y efficiency_3d_stencil_parsec_metg_y.csv \
               --metg-z efficiency_3d_stencil_parsec_metg_z.csv \
               --csv excel
    "$root_dir"/efficiency_3d.py -m cori -g 1 -d stencil_1d -s 'dask core' \
               -x efficiency_3d_stencil_dask_x.csv \
               -y efficiency_3d_stencil_dask_y.csv \
               -z efficiency_3d_stencil_dask_z.csv \
               --metg-x efficiency_3d_stencil_dask_metg_x.csv \
               --metg-y efficiency_3d_stencil_dask_metg_y.csv \
               --metg-z efficiency_3d_stencil_dask_metg_z.csv \
               --csv excel

    "$root_dir"/render_metg.py efficiency_stencil.csv \
               --xlabel 'Task Granularity (ms)' \
               --xdata 'time_per_task' \
               --x-invert \
               --xbase 10 \
               --no-xticks \
               --ylabel 'Efficiency' \
               --ylim '(-0.05,1.05)' \
               --no-ylog \
               --y-percent \
               --highlight-column 'metg' # \
               # --title 'Efficiency vs Task Granularity (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py efficiency_stencil_mpi.csv \
               --legend-position 'lower left' \
               --height 2.75 \
               --xlabel 'Task Granularity (ms)' \
               --xdata 'time_per_task' \
               --x-invert \
               --xbase 10 \
               --no-xticks \
               --ylabel 'Efficiency' \
               --ylim '(-0.05,1.05)' \
               --no-ylog \
               --y-percent \
               --highlight-column 'metg' # \
               # --title 'MPI Efficiency vs Task Granularity (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py flops_stencil.csv \
               --xlabel 'Problem Size' \
               --xdata 'iterations' \
               --x-invert \
               --no-xticks \
               --ylabel 'TFLOP/s' \
               --yscale 1e-12 \
               --no-ylog \
               --highlight-column 'metg' # \
               # --title 'FLOP/s vs Problem Size (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py flops_stencil_mpi.csv \
               --legend-position 'lower left' \
               --height 2.75 \
               --xlabel 'Problem Size' \
               --xdata 'iterations' \
               --x-invert \
               --no-xticks \
               --ylabel 'TFLOP/s' \
               --yscale 1e-12 \
               --no-ylog \
               --highlight-column 'metg' # \
               # --title 'MPI FLOP/s vs Problem Size (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py weak.csv \
               --ylabel 'Wall Time (s)' # \
               # --title 'Weak Scaling by Problem Size (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py weak_mpi.csv \
               --legend-base 2 \
               --filter-legend-even-powers \
               --height 4.0 \
               --width 12 \
               --ylabel 'Wall Time (s)' \
               --highlight-column 'metg' # \
               # --title 'Weak Scaling by Problem Size (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py strong.csv \
               --ylabel 'Wall Time (s)' # \
               # --title 'Strong Scaling by Problem Size (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py strong_mpi.csv \
               --legend-base 2 \
               --filter-legend-even-powers \
               --height 4.0 \
               --width 12 \
               --ylabel 'Wall Time (s)' \
               --highlight-column 'metg' # \
               # --title 'Strong Scaling by Problem Size (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py strong_limit_stencil.csv \
               --ylabel 'Wall Time (s)' \
               --legend-suffix '_actual' \
               --legend-suffix '_limit' \
               --limit-suffix '_limit' \
               --ideal 'ideal' \
               --limit-intersection-filename strong_limit_intersect_stencil_log_log.csv \
               --limit-intersection-system 'charm' \
               --width 10

    for system in mpi realm parsec dask; do
        "$root_dir"/render_efficiency_3d.py \
                   -x efficiency_3d_stencil_${system}_x.csv \
                   -y efficiency_3d_stencil_${system}_y.csv \
                   -z efficiency_3d_stencil_${system}_z.csv \
                   --metg-x efficiency_3d_stencil_${system}_metg_x.csv \
                   --metg-y efficiency_3d_stencil_${system}_metg_y.csv \
                   --metg-z efficiency_3d_stencil_${system}_metg_z.csv \
                   -o efficiency_3d_stencil_${system}.pdf
    done

    crop metg_stencil.pdf
    for pattern in nearest spread fft; do
        crop metg_${pattern}.pdf
    done
    crop metg_ngraphs_4_nearest.pdf
    crop efficiency_stencil.pdf
    crop efficiency_stencil_mpi.pdf
    crop flops_stencil.pdf
    crop flops_stencil_mpi.pdf
    crop weak_mpi.pdf
    crop strong_mpi.pdf
    crop strong_limit_stencil.pdf

    # for system in mpi realm parsec dask; do
    #     crop efficiency_3d_stencil_${system}.pdf
    # done

elif [[ $(basename $PWD) = cuda_compute ]]; then
    "$root_dir"/metg.py -m daint -g 1 -d stencil_1d --csv excel > metg_stencil.csv
    for pattern in nearest spread fft; do
        "$root_dir"/metg.py -m daint -g 1 -d $pattern --csv excel > metg_${pattern}.csv
    done

    "$root_dir"/efficiency.py -m daint -g 1 -d stencil_1d -n 1 --hide-metg --csv excel > efficiency_stencil.csv

    "$root_dir"/flops.py -m daint -g 1 -d stencil_1d -n 1 --hide-metg --csv excel > flops_stencil.csv
    "$root_dir"/flops.py -m daint -g 1 -d stencil_1d -n 1 -x flops --hide-metg --csv excel > flops_v_flops_stencil.csv
    cp flops_v_flops_stencil.csv flops_normalized_stencil.csv # copy so we can render two ways

    "$root_dir"/render_metg.py metg_stencil.csv \
               --legend ../gpu_legend.csv # \
               # --title "METG vs Nodes (Piz Daint, Compute, Stencil)"
    for pattern in nearest spread; do
        "$root_dir"/render_metg.py metg_${pattern}.csv \
               --legend ../gpu_legend.csv # \
               # --title "METG vs Nodes (Piz Daint, Compute, ${pattern})"
    done

    "$root_dir"/render_metg.py efficiency_stencil.csv \
               --xlabel 'Task Granularity (ms)' \
               --xdata 'time_per_task' \
               --x-invert \
               --xbase 10 \
               --no-xticks \
               --ylabel 'Efficiency' \
               --ylim '(-0.05,1.05)' \
               --no-ylog \
               --y-percent \
               --legend ../gpu_legend.csv # \
               # --title 'Efficiency vs Task Granularity (Piz Daint, Compute, Stencil)'


    "$root_dir"/render_metg.py flops_stencil.csv \
               --xlabel 'Problem Size' \
               --xdata 'iterations' \
               --x-invert \
               --no-xticks \
               --ylabel 'TFLOP/s' \
               --yscale 1e-12 \
               --no-ylog \
               --highlight-column 'metg' \
               --legend ../gpu_legend.csv # \
               # --title 'FLOP/s vs Problem Size (Piz Daint, Compute, Stencil)'

    "$root_dir"/render_metg.py flops_v_flops_stencil.csv \
               --xlabel 'TFLOP' \
               --xscale 1e-12 \
               --xbase 10 \
               --xdata 'flops' \
               --x-invert \
               --no-xticks \
               --ylabel 'TFLOP/s' \
               --yscale 1e-12 \
               --no-ylog \
               --connect-missing \
               --legend ../gpu_legend.csv # \
               # --title 'FLOP/s vs Problem Size (Piz Daint, Compute, Stencil)'

    "$root_dir"/render_metg.py flops_normalized_stencil.csv \
               --xlabel 'Normalized Problem Size' \
               --xscale $(bc <<< 'scale=20; 1/(2*64*1000*12)') \
               --xdata 'flops' \
               --height 3.5 \
               --x-invert \
               --no-xticks \
               --ylabel 'TFLOP/s' \
               --yscale 1e-12 \
               --no-ylog \
               --connect-missing \
               --legend ../gpu_legend.csv # \
               # --title 'FLOP/s vs Problem Size (Piz Daint, Compute, Stencil)'

    crop metg_stencil.pdf
    for pattern in nearest spread; do
        crop metg_${pattern}.pdf
    done
    crop efficiency_stencil.pdf
    crop flops_stencil.pdf
    crop flops_v_flops_stencil.pdf
    crop flops_normalized_stencil.pdf

elif [[ $(basename $PWD) = memory ]]; then

    "$root_dir"/flops.py -m cori -r bytes -g 1 -d stencil_1d -n 1 --csv excel > bytes_stencil.csv

    "$root_dir"/efficiency.py -m cori -r bytes -g 1 -d stencil_1d -n 1 --csv excel > efficiency_stencil.csv

    "$root_dir"/render_metg.py bytes_stencil.csv \
               --xlabel 'Problem Size' \
               --xdata 'iterations' \
               --x-invert \
               --no-xticks \
               --ylabel 'GB/s' \
               --yscale 1e-9 \
               --no-ylog \
               --highlight-column 'metg' # \
               # --title 'B/s vs Problem Size (Cori, Memory, Stencil)'

    "$root_dir"/render_metg.py efficiency_stencil.csv \
               --xlabel 'Task Granularity (ms)' \
               --xdata 'time_per_task' \
               --x-invert \
               --xbase 10 \
               --no-xticks \
               --ylabel 'Efficiency' \
               --ylim '(-0.05,1.05)' \
               --no-ylog \
               --y-percent \
               --highlight-column 'metg' # \
               # --title 'Efficiency vs Task Granularity (Cori, Memory, Stencil)'

    crop bytes_stencil.pdf
    crop efficiency_stencil.pdf

elif [[ $(basename $PWD) = radix ]]; then

    "$root_dir"/metg.py -m cori -g 1 -d nearest -n 1 -x radix --csv excel > metg_nearest.csv

    "$root_dir"/render_metg.py metg_nearest.csv \
               --xlabel 'Dependencies per Task' \
               --xdata 'radix' \
               --no-xlog # \
               # --title 'METG vs Dependencies per Task (Cori, Compute, Nearest)'

    crop metg_nearest.pdf

elif [[ $(basename $PWD) = cores_per_rank ]]; then

    "$root_dir"/metg.py -m cori -g 1 -d stencil_1d -n 1 -x cores_per_rank --csv excel > metg_stencil_nodes_1.csv

    "$root_dir"/metg.py -m cori -g 1 -d stencil_1d -n 16 -x cores_per_rank --csv excel > metg_stencil_nodes_16.csv

    "$root_dir"/metg.py -m cori -g 1 -d nearest -n 16 -x cores_per_rank --csv excel > metg_nearest_nodes_16.csv

    "$root_dir"/render_metg.py metg_stencil_nodes_1.csv \
               --xlabel 'Cores per Rank' \
               --xdata 'cores_per_rank' \
               --connect-missing \
               --no-xticks \
               --no-xlog \
               --no-ylog # \
               # --title 'METG vs Cores per Rank (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py metg_stencil_nodes_16.csv \
               --xlabel 'Cores per Rank' \
               --xdata 'cores_per_rank' \
               --connect-missing \
               --no-xticks \
               --no-xlog \
               --no-ylog # \
               # --title 'METG vs Cores per Rank (Cori, Compute, Stencil)'

    "$root_dir"/render_metg.py metg_nearest_nodes_16.csv \
               --xlabel 'Cores per Rank' \
               --xdata 'cores_per_rank' \
               --connect-missing \
               --no-xticks \
               --no-xlog \
               --no-ylog # \
               # --title 'METG vs Cores per Rank (Cori, Compute, Stencil)'

    crop metg_stencil_nodes_1.pdf
    crop metg_stencil_nodes_16.pdf
    crop metg_nearest_nodes_16.pdf

elif [[ $(basename $PWD) = communication ]]; then
    "$root_dir"/metg.py -m cori -g 4 -d spread -n 16 -x comm --csv excel > metg_nodes_16.csv
    "$root_dir"/metg.py -m cori -g 4 -d spread -n 64 -x comm --csv excel > metg_nodes_64.csv
    "$root_dir"/metg.py -m cori -g 4 -d spread -n 256 -x comm --csv excel > metg_nodes_256.csv

    for comm in 16 256 4096 65536; do
        "$root_dir"/efficiency.py -m cori -g 4 -d spread -n 16 -c ${comm} --hide-metg --csv excel > efficiency_nodes_16_comm_${comm}.csv
        "$root_dir"/efficiency.py -m cori -g 4 -d spread -n 64 -c ${comm} --hide-metg --csv excel > efficiency_nodes_64_comm_${comm}.csv
    done

    for comm in 256 4096 65536 1048576; do
        "$root_dir"/efficiency.py -m cori -g 4 -d spread -n 256 -c ${comm} --hide-metg --csv excel > efficiency_nodes_256_comm_${comm}.csv
    done

    "$root_dir"/render_metg.py metg_nodes_16.csv \
               --xlabel 'Message Size (B)' \
               --xdata 'comm' # \
               # --title 'METG vs Communication (Cori, Compute, 4x Spread)'

    "$root_dir"/render_metg.py metg_nodes_64.csv \
               --xlabel 'Message Size (B)' \
               --xdata 'comm' # \
               # --title 'METG vs Communication (Cori, Compute, 4x Spread)'

    "$root_dir"/render_metg.py metg_nodes_256.csv \
               --xlabel 'Message Size (B)' \
               --xdata 'comm' # \
               # --title 'METG vs Communication (Cori, Compute, 4x Spread)'

    for comm in 16 256 4096 65536; do
        "$root_dir"/render_metg.py efficiency_nodes_16_comm_${comm}.csv \
                   --xlabel 'Task Granularity (ms)' \
                   --xdata 'time_per_task' \
                   --x-invert \
                   --xbase 10 \
                   --no-xticks \
                   --ylabel 'Efficiency' \
                   --ylim '(-0.05,1.05)' \
                   --no-ylog \
                   --y-percent \
                   --highlight-column 'metg' # \
                   # --title "Efficiency vs Task Granularity (Cori, Compute, Stencil, Comm ${comm})"

        "$root_dir"/render_metg.py efficiency_nodes_64_comm_${comm}.csv \
                   --xlabel 'Task Granularity (ms)' \
                   --xdata 'time_per_task' \
                   --x-invert \
                   --xbase 10 \
                   --no-xticks \
                   --ylabel 'Efficiency' \
                   --ylim '(-0.05,1.05)' \
                   --no-ylog \
                   --y-percent \
                   --highlight-column 'metg' # \
                   # --title "Efficiency vs Task Granularity (Cori, Compute, Stencil, Comm ${comm})"
    done

    for comm in 256 4096 65536 1048576; do
        "$root_dir"/render_metg.py efficiency_nodes_256_comm_${comm}.csv \
                   --xlabel 'Task Granularity (ms)' \
                   --xdata 'time_per_task' \
                   --x-invert \
                   --xbase 10 \
                   --no-xticks \
                   --ylabel 'Efficiency' \
                   --ylim '(-0.05,1.05)' \
                   --no-ylog \
                   --y-percent \
                   --highlight-column 'metg' # \
                   # --title "Efficiency vs Task Granularity (Cori, Compute, Stencil, Comm ${comm})"
    done

    crop metg_nodes_16.pdf
    crop metg_nodes_64.pdf
    crop metg_nodes_256.pdf
    for comm in 16 256 4096 65536; do
        crop efficiency_nodes_16_comm_${comm}.pdf
        crop efficiency_nodes_64_comm_${comm}.pdf
    done
    for comm in 256 4096 65536 1048576; do
        crop efficiency_nodes_256_comm_${comm}.pdf
    done

elif [[ $(basename $PWD) = cuda_communication ]]; then
    for comm in 16 256 4096 65536; do
        "$root_dir"/efficiency.py -m daint -g 4 -d spread -n 64 -c ${comm} --hide-metg --csv excel > efficiency_nodes_64_comm_${comm}.csv
    done

    for comm in 16 256 4096 65536; do
        "$root_dir"/render_metg.py efficiency_nodes_64_comm_${comm}.csv \
                   --xlabel 'Task Granularity (ms)' \
                   --xdata 'time_per_task' \
                   --x-invert \
                   --xbase 10 \
                   --no-xticks \
                   --ylabel 'Efficiency' \
                   --ylim '(-0.05,1.05)' \
                   --no-ylog \
                   --y-percent \
                   --highlight-column 'metg' \
                   --legend ../gpu_legend.csv # \
                   # --title "Efficiency vs Task Granularity (Piz Daint, Compute, Stencil, Comm ${comm})"
    done

    for comm in 16 256 4096 65536; do
        crop efficiency_nodes_64_comm_${comm}.pdf
    done

elif [[ $(basename $PWD) = imbalance ]]; then
    "$root_dir"/metg.py -m cori -g 4 -d nearest -n 1 -x imbalance --csv excel > metg_ngraphs_4_nearest.csv

    for imbalance in 0.0 0.5 1.0 1.5 2.0; do
        "$root_dir"/efficiency.py -m cori -g 4 -d nearest -n 1 -i ${imbalance} --hide-metg --csv excel > efficiency_imbalance_${imbalance}.csv
    done

    "$root_dir"/render_metg.py metg_ngraphs_4_nearest.csv \
               --xlabel 'Imbalance' \
               --xdata 'imbalance' \
               --no-xlog # \
               # --title 'METG vs Imbalance (Cori, Compute, 4x Nearest)'

    for imbalance in 0.0 0.5 1.0 1.5 2.0; do
        "$root_dir"/render_metg.py efficiency_imbalance_${imbalance}.csv \
                   --xlabel 'Task Granularity (ms)' \
                   --xdata 'time_per_task' \
                   --x-invert \
                   --xbase 10 \
                   --no-xticks \
                   --ylabel 'Efficiency' \
                   --ylim '(-0.05,1.05)' \
                   --no-ylog \
                   --y-percent \
                   --highlight-column 'metg' # \
                   # --title "Efficiency vs Task Granularity (Cori, Compute, Stencil, Imbalance ${imbalance})"
    done

    crop metg_ngraphs_4_nearest.pdf
    for imbalance in 0.0 0.5 1.0 1.5 2.0; do
        crop efficiency_imbalance_${imbalance}.pdf
    done
else
    echo "Not in a data directory, change to 'compute' or 'imbalance' and then rerun."
fi
