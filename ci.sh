#!/bin/bash

set -e
set -x

if [[ "$SYSTEM" = "MPI" ]]; then
    export TASKBENCH_USE_${SYSTEM}=1
else
    export USE_${SYSTEM}=1
fi

if [[ "$(uname)" = "Linux" ]]; then
  sudo apt-get update -qq
  sudo apt-get install -qq openmpi-bin libopenmpi-dev libhwloc-dev libpcre3-dev binutils-dev
  # To avoid error where OpenMPI doesn't think it has enough slots available.
  export OMPI_MCA_rmaps_base_oversubscribe=yes
  export OMPI_MCA_rmaps_base_mapping_policy="core:OVERSUBSCRIBE"
  # Don't bind cores either.
  export OMPI_MCA_hwloc_base_binding_policy=none
  # Print stack traces on failure of MPI programs.
  export OMPI_MCA_mpi_abort_print_stack=1
  # Debug StarPU CI-only crash: dump topology, force single worker, enable core dumps.
  if [[ $USE_STARPU -eq 1 ]]; then
    echo "=== lscpu ==="; lscpu || true
    echo "=== nproc ==="; nproc || true
    echo "=== /proc/cpuinfo (summary) ==="; grep -c ^processor /proc/cpuinfo || true
    export STARPU_SILENT=0
    export STARPU_WORKER_STATS=1
    export STARPU_WORKERS_NOBIND=1
    ulimit -c unlimited || true
    sudo sysctl -w kernel.core_pattern="$PWD/core.%e.%p" || true
    sudo apt-get install -qq gdb
    dump_cores() {
      for c in "$PWD"/core.*; do
        [[ -e "$c" ]] || continue
        echo "=== backtrace for $c ==="
        gdb -batch -ex "thread apply all bt" ./starpu/main "$c" || true
        gdb -batch -ex "thread apply all bt" ./starpu/main_expl "$c" || true
      done
    }
    trap dump_cores EXIT
  fi
  if [[ $USE_CHAPEL -eq 1 ]]; then
    sudo apt-get install -qq clang-18 libclang-18-dev libclang-cpp18-dev llvm-18-dev libedit-dev libncurses5-dev zlib1g-dev
    export CMAKE_PREFIX_PATH=/usr/lib/llvm-18:/usr/share/llvm-18
  fi
  if [[ $USE_OMPSS2 -eq 1 ]]; then
    sudo apt-get install -qq libnuma-dev gperf libboost1.74-dev
  fi
  if [[ $USE_OMPSS2 -eq 1 || $USE_HPX -eq 1 ]]; then
    sudo apt-get install -qq libboost1.74-dev
  fi
fi

if [[ ! -d deps ]]; then
    ./get_deps.sh
fi
./build_all.sh
./test_all.sh
