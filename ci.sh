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
  sudo apt-get install -qq mpich libmpich-dev libpcre3-dev binutils-dev
  if [[ $USE_CHAPEL -eq 1 || $USE_REGENT -eq 1 ]]; then
    sudo apt-get install -qq clang-12 libclang-12-dev libclang-cpp12-dev llvm-12-dev libedit-dev libncurses5-dev zlib1g-dev
    export CMAKE_PREFIX_PATH=/usr/lib/llvm-12:/usr/share/llvm-12
  fi
  if [[ $USE_OMPSS2 -eq 1 ]]; then
    sudo apt-get install -qq libnuma-dev gperf libboost1.71-dev
  fi
  if [[ $USE_OMPSS2 -eq 1 || $USE_HPX -eq 1 ]]; then
    sudo apt-get install -qq libboost1.71-dev
  fi
  if [[ $USE_PARSEC -eq 1 || $USE_HPX -eq 1 ]]; then
    sudo snap install cmake --classic
    export PATH=/snap/bin:$PATH
    cmake --version
  fi
fi

./get_deps.sh
./build_all.sh
./test_all.sh
