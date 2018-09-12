#!/bin/bash

set -e

if [[ -e deps ]]; then
    echo "The directory deps already exists, nothing to do."
    echo "Delete deps and run again if you want to re-download dependencies."
    false
fi

mkdir deps

DEFAULT_FEATURES=${DEFAULT_FEATURES:-1}

cat >>deps/env.sh <<EOF
TASKBENCH_USE_MPI=${TASKBENCH_USE_MPI:-$DEFAULT_FEATURES}
USE_GASNET=${USE_GASNET:-0}
TASKBENCH_USE_HWLOC=${TASKBENCH_USE_HWLOC:-$DEFAULT_FEATURES}
USE_LEGION=${USE_LEGION:-$DEFAULT_FEATURES}
USE_REALM=${USE_REALM:-$DEFAULT_FEATURES}
USE_STARPU=${USE_STARPU:-$DEFAULT_FEATURES}
USE_PARSEC=${USE_PARSEC:-$DEFAULT_FEATURES}
USE_CHARM=${USE_CHARM:-$DEFAULT_FEATURES}
USE_CHAPEL=${USE_CHAPEL:-$DEFAULT_FEATURES}
USE_OPENMP=${USE_OPENMP:-$DEFAULT_FEATURES}
USE_OMPSS=${USE_OMPSS:-$DEFAULT_FEATURES}
USE_SPARK=${USE_SPARK:-$DEFAULT_FEATURES}
USE_SWIFT=${USE_SWIFT:-$DEFAULT_FEATURES}
EOF

source deps/env.sh

if [[ $USE_GASNET -eq 1 ]]; then
    if [ -z ${CONDUIT+x} ]; then
        echo "CONDUIT is required for GASNet build."
        echo "Please set CONDUIT and run again."
        false
    fi
    export GASNET_DIR="$PWD"/deps/gasnet
    cat >>deps/env.sh <<EOF
export GASNET_DIR="$GASNET_DIR"
export GASNET="$GASNET_DIR"/release
export CONDUIT=$CONDUIT
EOF
    git clone https://github.com/StanfordLegion/gasnet.git "$GASNET_DIR"
fi

if [[ $TASKBENCH_USE_HWLOC -eq 1 ]]; then
    export HWLOC_DL_DIR="$PWD"/deps/hwloc
    cat >>deps/env.sh <<EOF
export HWLOC_SRC_DIR=$HWLOC_DL_DIR/hwloc-1.11.10
export HWLOC_DIR=$HWLOC_DL_DIR/install
EOF
    wget https://download.open-mpi.org/release/hwloc/v1.11/hwloc-1.11.10.tar.gz
    mkdir -p "$HWLOC_DL_DIR"
    tar -zxf hwloc-1.11.10.tar.gz -C "$HWLOC_DL_DIR"
    rm -rf hwloc-1.11.10.tar.gz
fi

if [[ $USE_LEGION -eq 1 || $USE_REALM -eq 1 ]]; then
    export LEGION_DIR="$PWD"/deps/legion
    cat >>deps/env.sh <<EOF
export LG_RT_DIR="$LEGION_DIR"/runtime
export USE_LIBDL=0
EOF
    git clone -b control_replication https://gitlab.com/StanfordLegion/legion.git "$LEGION_DIR"
fi

if [[ $USE_STARPU -eq 1 ]]; then
    export STARPU_DL_DIR="$PWD"/deps/starpu
    cat >>deps/env.sh <<EOF
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
export CHARM_DIR=$CHARM_DIR
export CHARM_SMP_DIR=$CHARM_SMP_DIR
EOF
    git clone http://charm.cs.illinois.edu/gerrit/charm "$CHARM_DIR"
    git clone http://charm.cs.illinois.edu/gerrit/charm "$CHARM_SMP_DIR"
fi

if [[ $USE_CHAPEL -eq 1 ]]; then
    export CHPL_HOME="$PWD"/deps/chapel
    cat >>deps/env.sh <<EOF
export CHPL_HOME=$CHPL_HOME
export CHPL_HOST_PLATFORM=\$(\$CHPL_HOME/util/chplenv/chpl_platform.py)
export CHPL_LLVM=llvm
export CHPL_TARGET_ARCH=native
EOF
    if [[ $USE_GASNET -eq 1 ]]; then
        cat >>deps/env.sh <<EOF
export CHPL_COMM=gasnet
export CHPL_COMM_SUBSTRATE=$CONDUIT
export CHPL_LAUNCHER=${CHPL_LAUNCHER:-slurm-srun}
export CHPL_GASNET_MORE_CFG_OPTIONS=$CHPL_GASNET_MORE_CFG_OPTIONS
EOF
    fi

    if [[ -n $TRAVIS ]]; then
        cat >>deps/env.sh <<EOF
# overrides to make Travis fast
export CHPL_TASKS=fifo
# export CHPL_MEM=cstdlib # FIXME: Breaks input size array
export CHPL_GMP=none
export CHPL_REGEXP=none
export CHPL_LLVM=system
EOF
    fi

    git clone https://github.com/chapel-lang/chapel.git "$CHPL_HOME"
fi

if [[ $USE_OMPSS -eq 1 ]]; then
    export OMPSS_DL_DIR="$PWD"/deps/ompss
    cat >>deps/env.sh <<EOF
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

if [[ $USE_SPARK -eq 1 ]]; then
    export SPARK_DIR="$PWD"/deps/spark
    export SPARK_SWIG_DIR=$SPARK_DIR/swig-3.0.12
    export JAVA_HOME="$SPARK_DIR"/jdk1.8.0_131
    cat >>deps/env.sh <<EOF
export SPARK_DIR=$SPARK_DIR
export SPARK_SRC_DIR=$SPARK_DIR/spark-2.3.0-bin-hadoop2.7  
export SPARK_SBT_DIR=$SPARK_DIR/sbt/bin 
export SPARK_SWIG_DIR=$SPARK_SWIG_DIR
export SPARK_PROJ_DIR="$PWD"/spark
export CORE_DIR="$PWD"/core
export JAVA_HOME="$JAVA_HOME"
export PATH="\$JAVA_HOME/bin:\$PATH"
EOF
    mkdir -p "$SPARK_DIR"
    pushd "$SPARK_DIR"
    # don't install Scala--use 2.11.8 that comes with Spark 2.3.0

    # Java
    wget -c --header "Cookie: oraclelicense=accept-securebackup-cookie" http://download.oracle.com/otn-pub/java/jdk/8u131-b11/d54c1d3a095b4ff2b6607d096fa80163/jdk-8u131-linux-x64.tar.gz
    tar -zxf jdk-8u131-linux-x64.tar.gz -C "$SPARK_DIR"
    rm jdk-8u131-linux-x64.tar.gz

    # Spark 2.3.0
    wget https://archive.apache.org/dist/spark/spark-2.3.0/spark-2.3.0-bin-hadoop2.7.tgz #spark-shell doesn't work without hadoop
    tar -zxf spark-2.3.0-bin-hadoop2.7.tgz -C "$SPARK_DIR" #didn't add to path-put full paths in emtg script
    rm spark-2.3.0-bin-hadoop2.7.tgz

    # SWIG 3.0.12
    wget https://downloads.sourceforge.net/project/swig/swig/swig-3.0.12/swig-3.0.12.tar.gz
    tar -zxf swig-3.0.12.tar.gz -C "$SPARK_DIR"
    rm swig-3.0.12.tar.gz

    # SBT 1.1.6
    wget https://sbt-downloads.cdnedge.bluemix.net/releases/v1.1.6/sbt-1.1.6.tgz
    tar -zxf sbt-1.1.6.tgz -C "$SPARK_DIR"
    rm sbt-1.1.6.tgz

    popd
fi

if [[ $USE_SWIFT -eq 1 ]]; then
    export SWIFT_DIR="$PWD"/deps/swift
    export SWIFT_PREFIX="$SWIFT_DIR"/install
    cat >>deps/env.sh <<EOF
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
