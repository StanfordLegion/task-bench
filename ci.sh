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
  sudo apt-get install -qq openmpi-bin libopenmpi-dev libpcre3-dev binutils-dev
  # To avoid error where OpenMPI doesn't think it has enough slots available.
  export OMPI_MCA_rmaps_base_oversubscribe=yes
  export OMPI_MCA_rmaps_base_mapping_policy="core:OVERSUBSCRIBE"
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
