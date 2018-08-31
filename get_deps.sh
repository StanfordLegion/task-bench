#!/bin/bash

set -e

DEFAULT_FEATURES=${DEFAULT_FEATURES:-1}

TASKBENCH_USE_MPI=${TASKBENCH_USE_MPI:-$DEFAULT_FEATURES}
USE_GASNET=${USE_GASNET:-0}
TASKBENCH_USE_HWLOC=${TASKBENCH_USE_HWLOC:-$DEFAULT_FEATURES}
USE_LEGION=${USE_LEGION:-$DEFAULT_FEATURES}
USE_STARPU=${USE_STARPU:-$DEFAULT_FEATURES}
USE_PARSEC=${USE_PARSEC:-$DEFAULT_FEATURES}
USE_CHARM=${USE_CHARM:-$DEFAULT_FEATURES}
USE_OPENMP=${USE_OPENMP:-$DEFAULT_FEATURES}
USE_OMPSS=${USE_OMPSS:-$DEFAULT_FEATURES}
USE_SWIFT=${USE_SWIFT:-$DEFAULT_FEATURES}

if [[ -e deps ]]; then
    echo "The directory deps already exists, nothing to do."
    echo "Delete deps and run again if you want to re-download dependencies."
    false
fi

mkdir deps

if [[ $TASKBENCH_USE_MPI -eq 1 ]]; then
    cat >>deps/env.sh <<EOF
export TASKBENCH_USE_MPI=$TASKBENCH_USE_MPI
EOF
    source deps/env.sh
fi

if [[ $USE_GASNET -eq 1 ]]; then
    if [ -z ${CONDUIT+x} ]; then
        echo "CONDUIT is required for GASNet build."
        echo "Please set CONDUIT and run again."
        false
    fi
    export GASNET_DIR="$PWD"/deps/gasnet
    cat >>deps/env.sh <<EOF
export USE_GASNET=$USE_GASNET
export GASNET_DIR="$GASNET_DIR"
export GASNET="$GASNET_DIR"/release
export CONDUIT=$CONDUIT
EOF
    git clone https://github.com/StanfordLegion/gasnet.git "$GASNET_DIR"
fi

if [[ $TASKBENCH_USE_HWLOC -eq 1 ]]; then
    export HWLOC_DL_DIR="$PWD"/deps/hwloc
    cat >>deps/env.sh <<EOF
export TASKBENCH_USE_HWLOC=$TASKBENCH_USE_HWLOC
export HWLOC_SRC_DIR=$HWLOC_DL_DIR/hwloc-1.11.10
export HWLOC_DIR=$HWLOC_DL_DIR/install
EOF
    wget https://download.open-mpi.org/release/hwloc/v1.11/hwloc-1.11.10.tar.gz
    mkdir -p "$HWLOC_DL_DIR"
    tar -zxf hwloc-1.11.10.tar.gz -C "$HWLOC_DL_DIR"
    rm -rf hwloc-1.11.10.tar.gz
fi

if [[ $USE_LEGION -eq 1 ]]; then
    export LEGION_DIR="$PWD"/deps/legion
    cat >>deps/env.sh <<EOF
export USE_LEGION=$USE_LEGION
export LG_RT_DIR="$LEGION_DIR"/runtime
export USE_LIBDL=0
EOF
    git clone -b control_replication https://gitlab.com/StanfordLegion/legion.git "$LEGION_DIR"
fi

if [[ $USE_STARPU -eq 1 ]]; then
    export STARPU_DL_DIR="$PWD"/deps/starpu
    cat >>deps/env.sh <<EOF
export USE_STARPU=$USE_STARPU
export STARPU_SRC_DIR=$STARPU_DL_DIR/starpu-1.2.4
export STARPU_DIR=$STARPU_DL_DIR
EOF
    wget http://starpu.gforge.inria.fr/files/starpu-1.2.4/starpu-1.2.4.tar.gz
    mkdir -p "$STARPU_DL_DIR"
    tar -zxf starpu-1.2.4.tar.gz -C "$STARPU_DL_DIR"
    rm -rf starpu-1.2.4.tar.gz
fi

if [[ $USE_PARSEC -eq 1 ]]; then
    export PARSEC_DL_DIR="$PWD"/deps/parsec
    cat >>deps/env.sh <<EOF
export USE_PARSEC=$USE_PARSEC
export PARSEC_DIR=$PARSEC_DL_DIR/build
EOF
    mkdir -p "$PARSEC_DL_DIR"
    git clone https://wwu12@bitbucket.org/wwu12/parsec.git "$PARSEC_DL_DIR" 
fi

if [[ $USE_CHARM -eq 1 ]]; then
    export CHARM_DIR="$PWD"/deps/charm++
    export CHARM_SMP_DIR="$PWD"/deps/charm++_smp
    cat >>deps/env.sh <<EOF
export CHARM_VERSION=${CHARM_VERSION:-netlrts-linux-x86_64}
export USE_CHARM=$USE_CHARM
export CHARM_DIR=$CHARM_DIR
export CHARM_SMP_DIR=$CHARM_SMP_DIR
EOF
    git clone http://charm.cs.illinois.edu/gerrit/charm "$CHARM_DIR"
    git clone http://charm.cs.illinois.edu/gerrit/charm "$CHARM_SMP_DIR"
fi

if [[ $USE_OPENMP -eq 1 ]]; then
    cat >>deps/env.sh <<EOF
export USE_OPENMP=$USE_OPENMP
EOF
    source deps/env.sh
fi

if [[ $USE_OMPSS -eq 1 ]]; then
    export OMPSS_DL_DIR="$PWD"/deps/ompss
    cat >>deps/env.sh <<EOF
export USE_OMPSS=$USE_OMPSS
export OMPSS_DL_DIR=$OMPSS_DL_DIR
export NANOS_SRC_DIR=$OMPSS_DL_DIR/nanox-0.14.1
export NANOS_PREFIX=$OMPSS_DL_DIR/nanox-0.14.1/install
export MERCURIUM_SRC_DIR=$OMPSS_DL_DIR/mcxx-2.1.0
export MERCURIUM_PREFIX=$OMPSS_DL_DIR/mcxx-2.1.0/install
EOF
    mkdir -p "$OMPSS_DL_DIR"
    wget https://pm.bsc.es/sites/default/files/ftp/ompss/releases/ompss-17.12.1.tar.gz
    tar -zxf ompss-17.12.1.tar.gz -C "$OMPSS_DL_DIR" --strip-components 1
    rm -rf ompss-17.12.1.tar.gz
fi

if [[ $USE_SWIFT -eq 1 ]]; then
    export SWIFT_DIR="$PWD"/deps/swift
    export SWIFT_PREFIX="$SWIFT_DIR"/install
    cat >>deps/env.sh <<EOF
export USE_SWIFT=$USE_SWIFT
export SWIFT_DIR=$SWIFT_DIR
export SWIFT_PREFIX=$SWIFT_PREFIX
EOF
    mkdir -p "$SWIFT_DIR"
    mkdir -p "$SWIFT_PREFIX"
    mkdir -p "$SWIFT_PREFIX"/src

    pushd "$SWIFT_PREFIX"/src
    git clone git://anongit.freedesktop.org/git/xorg/util/modular util/modular
    popd

    wget https://prdownloads.sourceforge.net/tcl/tcl8.6.8-src.tar.gz
    tar xfz tcl8.6.8-src.tar.gz -C "$SWIFT_DIR"
    rm tcl8.6.8-src.tar.gz

    wget https://prdownloads.sourceforge.net/tcl/tk8.6.8-src.tar.gz
    tar xfz tk8.6.8-src.tar.gz -C "$SWIFT_DIR"
    rm tk8.6.8-src.tar.gz

    wget https://prdownloads.sourceforge.net/swig/swig-3.0.12.tar.gz
    tar xfz swig-3.0.12.tar.gz -C "$SWIFT_DIR"
    rm swig-3.0.12.tar.gz

    wget --no-check-certificate -c --header "Cookie: oraclelicense=accept-securebackup-cookie" http://download.oracle.com/otn-pub/java/jdk/10.0.2+13/19aef61b38124481863b1413dce1855f/jdk-10.0.2_linux-x64_bin.tar.gz
    tar xfz jdk-10.0.2_linux-x64_bin.tar.gz -C "$SWIFT_DIR"
    rm jdk-10.0.2_linux-x64_bin.tar.gz

    wget http://mirrors.sonic.net/apache//ant/binaries/apache-ant-1.10.5-bin.tar.gz
    tar xfz apache-ant-1.10.5-bin.tar.gz -C "$SWIFT_DIR"
    rm apache-ant-1.10.5-bin.tar.gz

    wget https://ftp.gnu.org/pub/gnu/ncurses/ncurses-6.1.tar.gz
    tar xfz ncurses-6.1.tar.gz -C "$SWIFT_DIR"
    rm ncurses-6.1.tar.gz

    wget https://sourceforge.net/projects/zsh/files/zsh/5.5.1/zsh-5.5.1.tar.gz
    tar xfz zsh-5.5.1.tar.gz -C "$SWIFT_DIR"
    rm zsh-5.5.1.tar.gz

    wget http://swift-lang.github.io/swift-t-downloads/1.4/swift-t-1.4.tar.gz
    tar xfz swift-t-1.4.tar.gz -C "$SWIFT_DIR"
    rm swift-t-1.4.tar.gz
fi
