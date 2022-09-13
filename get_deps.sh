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
TASKBENCH_DEPS_DIR="\$(cd "\$(dirname "\${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"
TASKBENCH_ROOT_DIR="\$(dirname "\$TASKBENCH_DEPS_DIR")"

EOF

if [[ $(hostname --fqdn) = *"summit"* ]]; then
    cat >>deps/env.sh <<EOF
module load gcc/6.4.0
module load cuda/9.2.148
module load cmake/3.14.2
module load git/2.13.0
export CC=gcc
export CXX=g++
export MPICXX=mpicxx

EOF
elif [[ $(hostname) = "cori"* ]]; then
    cat >>deps/env.sh <<EOF
module unload PrgEnv-intel
module load PrgEnv-gnu
module swap gcc/8.3.0 gcc/7.3.0 # GCC 8 cannot build LLVM 3.8
module load cmake
module load pcre
module unload craype-hugepages2M # this got added after the 2019-07-30 system maintenance, but it causes some systems to stop building
export CC=cc
export CXX=CC
export MPICXX=CC

EOF
elif [[ $(hostname) = "daint"* ]]; then
    cat >>deps/env.sh <<EOF
module load daint-gpu
module unload PrgEnv-cray
module load PrgEnv-gnu
# module load cudatoolkit # FIXME (Elliott 2020-12-10): this must have broken in a recent Piz Daint upgrade, C compiler cannot build executables
export CC=cc
export CXX=CC
export MPICXX=CC
export CRAYPE_LINK_TYPE=static

EOF
fi

cat >>deps/env.sh <<EOF
export TASKBENCH_USE_MPI=${TASKBENCH_USE_MPI:-$DEFAULT_FEATURES}
export USE_MPI_OPENMP=${USE_MPI_OPENMP:-$DEFAULT_FEATURES}
export USE_GASNET=${USE_GASNET:-0}
export TASKBENCH_USE_HWLOC=${TASKBENCH_USE_HWLOC:-$DEFAULT_FEATURES}
export USE_LEGION=${USE_LEGION:-$DEFAULT_FEATURES}
export USE_PYGION=${USE_PYGION:-$DEFAULT_FEATURES}
export USE_REGENT=${USE_REGENT:-$DEFAULT_FEATURES}
export USE_REALM=${USE_REALM:-$DEFAULT_FEATURES}
export USE_STARPU=${USE_STARPU:-$DEFAULT_FEATURES}
export USE_PARSEC=${USE_PARSEC:-$DEFAULT_FEATURES}
export USE_CHARM=${USE_CHARM:-$DEFAULT_FEATURES}
export USE_HPX=${USE_HPX:-$DEFAULT_FEATURES}
export USE_CHAPEL=${USE_CHAPEL:-$DEFAULT_FEATURES}
export USE_X10=${USE_X10:-$DEFAULT_FEATURES}
export USE_OPENMP=${USE_OPENMP:-$DEFAULT_FEATURES}
export USE_OMPSS=${USE_OMPSS:-$DEFAULT_FEATURES}
export USE_OMPSS2=${USE_OMPSS2:-$DEFAULT_FEATURES}
export USE_SPARK=${USE_SPARK:-$DEFAULT_FEATURES}
export USE_SWIFT=${USE_SWIFT:-$DEFAULT_FEATURES}
export USE_TENSORFLOW=${USE_TENSORFLOW:-$DEFAULT_FEATURES}
export USE_DASK=${USE_DASK:-$DEFAULT_FEATURES}

EOF

source deps/env.sh

# Older Apache releases get cut from the mirrors too aggressively, so
# in order to have a stable build we need to use the original servers.
APACHE_MIRROR="https://archive.apache.org/dist"

SOURCEFORGE_MIRROR="https://prdownloads.sourceforge.net"

if [[ $USE_GASNET -eq 1 ]]; then
    if [ -z ${CONDUIT+x} ]; then
        echo "CONDUIT is required for GASNet build."
        echo "Please set CONDUIT and run again."
        false
    fi
    export GASNET_DIR="$TASKBENCH_DEPS_DIR"/gasnet
    cat >>deps/env.sh <<EOF
export GASNET_DIR="\$TASKBENCH_DEPS_DIR"/gasnet
export GASNET="\$GASNET_DIR"/release
export CONDUIT=$CONDUIT

EOF
    git clone https://github.com/StanfordLegion/gasnet.git "$GASNET_DIR"
fi

if [[ $TASKBENCH_USE_HWLOC -eq 1 ]]; then
    export HWLOC_DL_DIR="$TASKBENCH_DEPS_DIR"/hwloc
    cat >>deps/env.sh <<EOF
export HWLOC_DL_DIR="\$TASKBENCH_DEPS_DIR"/hwloc
export HWLOC_SRC_DIR=$HWLOC_DL_DIR/hwloc-1.11.10
export HWLOC_DIR=$HWLOC_DL_DIR/install

EOF
    wget -nv https://download.open-mpi.org/release/hwloc/v1.11/hwloc-1.11.10.tar.gz
    mkdir -p "$HWLOC_DL_DIR"
    tar -zxf hwloc-1.11.10.tar.gz -C "$HWLOC_DL_DIR"
    rm -rf hwloc-1.11.10.tar.gz
fi

if [[ $USE_LEGION -eq 1 || $USE_PYGION -eq 1 || $USE_REGENT -eq 1 || $USE_REALM -eq 1 ]]; then
    export LEGION_DIR="$TASKBENCH_DEPS_DIR"/legion
    cat >>deps/env.sh <<EOF
export LEGION_DIR="\$TASKBENCH_DEPS_DIR"/legion
export LG_RT_DIR="\$LEGION_DIR"/runtime
export REGENT_DIR="\$LEGION_DIR"/language
export USE_PYTHON=\$USE_PYGION
export USE_LIBDL=\$USE_PYGION

EOF
    git clone -b control_replication https://gitlab.com/StanfordLegion/legion.git "$LEGION_DIR"
fi

(if [[ $USE_PYGION -eq 1 ]]; then
    export PYGION_DIR="$TASKBENCH_DEPS_DIR"/pygion
    cat >>deps/env.sh <<EOF
export PYGION_DIR="\$TASKBENCH_DEPS_DIR"/pygion
# see pygion/env.sh for Pygion configuration

EOF

    mkdir -p "$PYGION_DIR"

    cat >>"$PYGION_DIR"/env.sh <<EOF
export CONDA_PREFIX="\$PYGION_DIR"/conda
export PATH="\$CONDA_PREFIX"/bin:"\$PATH"

export PYTHONPATH="\$PYTHONPATH:\$LEGION_DIR/bindings/python:\$TASKBENCH_ROOT_DIR/pygion"
EOF

    source "$PYGION_DIR"/env.sh

    wget -nv https://repo.continuum.io/miniconda/Miniconda3-latest-Linux-x86_64.sh
    bash Miniconda3-latest-Linux-x86_64.sh -b -p "$CONDA_PREFIX"
    rm Miniconda3-latest-Linux-x86_64.sh
    conda update -y conda
    conda install -y cffi numpy
fi)

if [[ $USE_STARPU -eq 1 ]]; then
    export STARPU_DL_DIR="$TASKBENCH_DEPS_DIR"/starpu
    cat >>deps/env.sh <<EOF
export STARPU_DL_DIR="\$TASKBENCH_DEPS_DIR"/starpu
export STARPU_SRC_DIR="\$STARPU_DL_DIR"/starpu-1.3.4
export STARPU_DIR="\$STARPU_DL_DIR"

EOF
    #wget -nv http://starpu.gforge.inria.fr/files/starpu-1.2.4/starpu-1.2.4.tar.gz
    wget -nv https://files.inria.fr/starpu/starpu-1.3.4/starpu-1.3.4.tar.gz
    mkdir -p "$STARPU_DL_DIR"
    tar -zxf starpu-1.3.4.tar.gz -C "$STARPU_DL_DIR"
    rm starpu-1.3.4.tar.gz
fi

if [[ $USE_PARSEC -eq 1 ]]; then
    export PARSEC_DL_DIR="$TASKBENCH_DEPS_DIR"/parsec
    cat >>deps/env.sh <<EOF
export PARSEC_DL_DIR="\$TASKBENCH_DEPS_DIR"/parsec
export PARSEC_DIR="\$PARSEC_DL_DIR"/build

EOF
    mkdir -p "$PARSEC_DL_DIR"
    git clone https://bitbucket.org/icldistcomp/parsec.git "$PARSEC_DL_DIR" 
    pushd "$PARSEC_DL_DIR"
    git reset --hard 242498dd7ce3974c01db888d7e4d759a69e5bcdb
    git apply ../../parsec/patch.diff
    popd
fi

if [[ $USE_CHARM -eq 1 ]]; then
    export CHARM_DIR="$TASKBENCH_DEPS_DIR"/charm++
    export CHARM_SMP_DIR="$TASKBENCH_DEPS_DIR"/charm++_smp
    cat >>deps/env.sh <<EOF
export CHARM_VERSION=${CHARM_VERSION:-netlrts-linux-x86_64}
export CHARM_DIR="\$TASKBENCH_DEPS_DIR"/charm++
export CHARM_SMP_DIR="\$TASKBENCH_DEPS_DIR"/charm++_smp

EOF
    mkdir "$CHARM_DIR"
    mkdir "$CHARM_SMP_DIR"
    wget -nv https://charm.cs.illinois.edu/distrib/charm-6.9.0.tar.gz
    tar xfz charm-6.9.0.tar.gz -C "$CHARM_DIR" --strip-components 1
    tar xfz charm-6.9.0.tar.gz -C "$CHARM_SMP_DIR" --strip-components 1
    rm charm-6.9.0.tar.gz

    # git clone http://charm.cs.illinois.edu/gerrit/charm "$CHARM_DIR"
    # git clone http://charm.cs.illinois.edu/gerrit/charm "$CHARM_SMP_DIR"
fi

if [[ $USE_CHAPEL -eq 1 ]]; then
    export CHPL_HOME="$TASKBENCH_DEPS_DIR"/chapel
    cat >>deps/env.sh <<EOF
export CHPL_HOME="\$TASKBENCH_DEPS_DIR"/chapel
export CHPL_HOST_PLATFORM=\$(\$CHPL_HOME/util/chplenv/chpl_platform.py)
export CHPL_HOST_ARCH=\$(\$CHPL_HOME/util/chplenv/chpl_arch.py)
export CHPL_LLVM=bundled
export CHPL_TARGET_CPU=native
# export CHPL_QTHREAD_SCHEDULER=distrib # or sherwood # Enables Chapel work stealing scheduler
# Note: distrib scheduler needs QTHREAD_STEAL_RATIO=8 set at runtime
EOF
    if [[ -n $CHPL_COMM ]]; then
        cat >>deps/env.sh <<EOF
export CHPL_COMM=$CHPL_COMM
export CHPL_LAUNCHER=${CHPL_LAUNCHER:-slurm-srun}
EOF
    elif [[ $USE_GASNET -eq 1 ]]; then
        cat >>deps/env.sh <<EOF
export CHPL_COMM=gasnet
export CHPL_COMM_SUBSTRATE=$CONDUIT
export CHPL_LAUNCHER=${CHPL_LAUNCHER:-slurm-srun}
export CHPL_GASNET_MORE_CFG_OPTIONS=$CHPL_GASNET_MORE_CFG_OPTIONS
EOF
    fi

    if [[ -n $GITHUB_ACTIONS ]]; then
        cat >>deps/env.sh <<EOF
# overrides to make CI fast
export CHPL_TASKS=fifo
# export CHPL_MEM=cstdlib # FIXME: Breaks input size array
export CHPL_GMP=none
export CHPL_REGEXP=none
export CHPL_LLVM=system
EOF
    fi

    cat >>deps/env.sh <<EOF

EOF

    wget -nv https://github.com/chapel-lang/chapel/releases/download/1.27.0/chapel-1.27.0.tar.gz
    mkdir "$CHPL_HOME"
    tar xfz chapel-1.27.0.tar.gz -C "$CHPL_HOME" --strip-components 1
    rm chapel-1.27.0.tar.gz
fi

if [[ $USE_X10 -eq 1 ]]; then
    export X10_DIR="$TASKBENCH_DEPS_DIR"/x10
    cat >>deps/env.sh <<EOF
export X10_DIR="\$TASKBENCH_DEPS_DIR"/x10

EOF

    mkdir -p "$X10_DIR"

    cat >>"$X10_DIR"/env.sh <<EOF
export PATH="\$X10_DIR"/x10/x10.dist/bin:"\$PATH"

export JAVA_HOME="\$X10_DIR"/jdk1.8.0_131
export PATH="\$JAVA_HOME"/bin:"\$PATH"

export ANT_HOME="\$X10_DIR"/apache-ant-1.10.7
export PATH="\$ANT_HOME"/bin:"\$PATH"
EOF

    wget -c --header "Cookie: oraclelicense=accept-securebackup-cookie" http://download.oracle.com/otn-pub/java/jdk/8u131-b11/d54c1d3a095b4ff2b6607d096fa80163/jdk-8u131-linux-x64.tar.gz
    tar -zxf jdk-8u131-linux-x64.tar.gz -C "$X10_DIR"
    rm jdk-8u131-linux-x64.tar.gz

    wget -nv "$APACHE_MIRROR"/ant/binaries/apache-ant-1.10.7-bin.tar.gz
    tar xfz apache-ant-1.10.7-bin.tar.gz -C "$X10_DIR"
    rm apache-ant-1.10.7-bin.tar.gz

    # FIXME: hitting https://github.com/x10-lang/x10/issues/32
    # git clone https://github.com/x10-lang/x10.git "$X10_DIR"/x10
    # git -C "$X10_DIR"/x10 reset --hard 9212dc271c8bcba805c82114617d47506747ee3a
    git clone -b task-bench https://github.com/elliottslaughter/x10.git "$X10_DIR"/x10
fi

(if [[ $USE_HPX -eq 1 ]]; then
    export HPX_DIR="$TASKBENCH_DEPS_DIR"/hpx
    cat >>deps/env.sh <<EOF
export HPX_DIR="\$TASKBENCH_DEPS_DIR"/hpx

EOF

    mkdir -p "$HPX_DIR"

    cat >>"$HPX_DIR"/env.sh <<EOF
export HPX_SOURCE_ROOT="\$HPX_DIR"/src
export HPX_INSTALL_ROOT="\$HPX_DIR"/install
export HWLOC_SRC_DIR="\$HPX_SOURCE_ROOT"/hwloc-2.7.1
export JEMALLOC_SRC_DIR="\$HPX_SOURCE_ROOT"/jemalloc-5.2.1

export LD_LIBRARY_PATH="\$LD_LIBRARY_PATH:\$HPX_INSTALL_ROOT/hpx/lib"
EOF

    source "$HPX_DIR"/env.sh

    mkdir -p $HPX_SOURCE_ROOT
    mkdir -p $HPX_INSTALL_ROOT

    wget -nv https://download.open-mpi.org/release/hwloc/v2.7/hwloc-2.7.1.tar.gz
    tar xfz hwloc-2.7.1.tar.gz -C "$HPX_SOURCE_ROOT"
    rm hwloc-2.7.1.tar.gz

    cat /usr/include/boost/version.hpp | grep "BOOST_LIB_VERSION"

    wget -nv https://github.com/jemalloc/jemalloc/releases/download/5.2.1/jemalloc-5.2.1.tar.bz2
    tar xfj jemalloc-5.2.1.tar.bz2 -C "$HPX_SOURCE_ROOT"
    rm jemalloc-5.2.1.tar.bz2

    git clone https://github.com/STEllAR-GROUP/hpx.git "$HPX_SOURCE_ROOT"/hpx
fi)

if [[ $USE_OMPSS -eq 1 ]]; then
    export OMPSS_DL_DIR="$TASKBENCH_DEPS_DIR"/ompss
    cat >>deps/env.sh <<EOF
export OMPSS_DL_DIR="\$TASKBENCH_DEPS_DIR"/ompss
export NANOS_SRC_DIR="\$OMPSS_DL_DIR"/nanox-0.15
export NANOS_PREFIX="\$OMPSS_DL_DIR"/nanox-0.15/install
export MERCURIUM_SRC_DIR="\$OMPSS_DL_DIR"/mcxx-2.3.0
export MERCURIUM_PREFIX="\$OMPSS_DL_DIR"/mcxx-2.3.0/install

EOF
    mkdir -p "$OMPSS_DL_DIR"
    wget -nv https://pm.bsc.es/ftp/ompss/releases/ompss-19.06.tar.gz
    tar -zxf ompss-19.06.tar.gz -C "$OMPSS_DL_DIR" --strip-components 1
    rm -rf ompss-19.06.tar.gz
fi

if [[ $USE_OMPSS2 -eq 1 ]]; then
    export OMPSS2_DL_DIR="$TASKBENCH_DEPS_DIR"/ompss2
    cat >>deps/env.sh <<EOF
export OMPSS2_DL_DIR="\$TASKBENCH_DEPS_DIR"/ompss2
export OMPSS2_TARGET="\$OMPSS2_DL_DIR"
export OMPSS2_NANOS6_SRC_DIR="\$OMPSS2_DL_DIR"/ompss2-release/nanos6
export OMPSS2_MCXX_SRC_DIR="\$OMPSS2_DL_DIR"/ompss2-release/mcxx
export BOOST_SRC_DIR="\$OMPSS2_DL_DIR"/boost_1_68_0

EOF
    mkdir -p "$OMPSS2_DL_DIR"
    git clone -b 2021.11.1 --depth 1 https://github.com/bsc-pm/ompss-2-releases.git "$OMPSS2_DL_DIR/ompss2-release"
    # Note: don't initialize llvm submodule, it's large and not needed
    for m in nanos6 mcxx; do
        git -C "$OMPSS2_DL_DIR/ompss2-release" submodule update --init --recursive --depth 1 $m
    done
    
    # wget -nv https://dl.bintray.com/boostorg/release/1.68.0/source/boost_1_68_0.tar.gz
    # tar -zxf boost_1_68_0.tar.gz -C "$OMPSS2_DL_DIR"
    # rm -rf boost_1_68_0.tar.gz
    cat /usr/include/boost/version.hpp | grep "BOOST_LIB_VERSION"
fi

if [[ $USE_SPARK -eq 1 ]]; then
    export SPARK_DIR="$TASKBENCH_DEPS_DIR"/spark
    cat >>deps/env.sh <<EOF
export SPARK_DIR="\$TASKBENCH_DEPS_DIR"/spark
# see spark/env.sh for Spark configuration

EOF

    mkdir -p "$SPARK_DIR"

    cat >>"$SPARK_DIR"/env.sh <<EOF
export SPARK_PREFIX="\$SPARK_DIR"/install
export SPARK_SRC_DIR="\$SPARK_DIR"/spark-2.4.8-bin-hadoop2.7
export SPARK_SBT_DIR="\$SPARK_DIR"/sbt/bin
export SPARK_SWIG_DIR="\$SPARK_DIR"/swig-3.0.12
export PATH="\$SPARK_PREFIX/bin:\$PATH"

export JAVA_HOME="\$SPARK_DIR"/jdk1.8.0_131
export PATH="\$JAVA_HOME/bin:\$PATH"
EOF

    pushd "$SPARK_DIR"
    # don't install Scala--use 2.11.8 that comes with Spark 2.4.8

    # Java
    wget -c --header "Cookie: oraclelicense=accept-securebackup-cookie" http://download.oracle.com/otn-pub/java/jdk/8u131-b11/d54c1d3a095b4ff2b6607d096fa80163/jdk-8u131-linux-x64.tar.gz
    tar -zxf jdk-8u131-linux-x64.tar.gz -C "$SPARK_DIR"
    rm jdk-8u131-linux-x64.tar.gz

    # Spark 2.4.8
    wget -nv "$APACHE_MIRROR"/spark/spark-2.4.8/spark-2.4.8-bin-hadoop2.7.tgz #spark-shell doesn't work without hadoop
    tar -zxf spark-2.4.8-bin-hadoop2.7.tgz -C "$SPARK_DIR" #didn't add to path-put full paths in emtg script
    rm spark-2.4.8-bin-hadoop2.7.tgz

    # SWIG 3.0.12
    wget -nv $SOURCEFORGE_MIRROR/swig/swig/swig-3.0.12/swig-3.0.12.tar.gz
    tar -zxf swig-3.0.12.tar.gz -C "$SPARK_DIR"
    rm swig-3.0.12.tar.gz

    # SBT 1.7.1
    wget -nv https://github.com/sbt/sbt/releases/download/v1.7.1/sbt-1.7.1.tgz
    tar -zxf sbt-1.7.1.tgz -C "$SPARK_DIR"
    rm sbt-1.7.1.tgz

    popd
fi

if [[ $USE_SWIFT -eq 1 ]]; then
    export SWIFT_DIR="$TASKBENCH_DEPS_DIR"/swift
    cat >>deps/env.sh <<EOF
export SWIFT_DIR="\$TASKBENCH_DEPS_DIR"/swift
# see swift/env.sh for Swift/T configuration

EOF

    mkdir -p "$SWIFT_DIR"

    cat >>"$SWIFT_DIR"/env.sh <<EOF
export SWIFT_PREFIX="\$SWIFT_DIR"/install
export PATH="\$SWIFT_PREFIX"/bin:"\$SWIFT_PREFIX"/stc/bin:"\$SWIFT_PREFIX"/turbine/bin:"\$PATH"
export LD_LIBRARY_PATH="\$SWIFT_PREFIX"/lib:"\$LD_LIBRARY_PATH"

export JAVA_HOME="\$SWIFT_DIR"/java
export PATH="\$JAVA_HOME"/bin:"\$PATH"

export ANT_HOME="\$SWIFT_DIR"/ant
export PATH="\$ANT_HOME"/bin:"\$PATH"
EOF

    wget -nv $SOURCEFORGE_MIRROR/tcl/tcl8.6.8-src.tar.gz
    tar xfz tcl8.6.8-src.tar.gz -C "$SWIFT_DIR"
    rm tcl8.6.8-src.tar.gz

    wget -nv $SOURCEFORGE_MIRROR/swig/swig-3.0.12.tar.gz
    tar xfz swig-3.0.12.tar.gz -C "$SWIFT_DIR"
    rm swig-3.0.12.tar.gz

    wget -nv https://download.java.net/java/GA/jdk10/10.0.2/19aef61b38124481863b1413dce1855f/13/openjdk-10.0.2_linux-x64_bin.tar.gz
    mkdir "$SWIFT_DIR"/java
    tar xfz openjdk-10.0.2_linux-x64_bin.tar.gz -C "$SWIFT_DIR"/java --strip-components=1
    rm openjdk-10.0.2_linux-x64_bin.tar.gz

    wget -nv "$APACHE_MIRROR"/ant/binaries/apache-ant-1.10.7-bin.tar.gz
    mkdir "$SWIFT_DIR"/ant
    tar xfz apache-ant-1.10.7-bin.tar.gz -C "$SWIFT_DIR"/ant --strip-components=1
    rm apache-ant-1.10.7-bin.tar.gz

    wget -nv https://ftp.gnu.org/pub/gnu/ncurses/ncurses-6.1.tar.gz
    tar xfz ncurses-6.1.tar.gz -C "$SWIFT_DIR"
    rm ncurses-6.1.tar.gz

    wget -nv $SOURCEFORGE_MIRROR/zsh/5.5.1/zsh-5.5.1.tar.gz
    tar xfz zsh-5.5.1.tar.gz -C "$SWIFT_DIR"
    rm zsh-5.5.1.tar.gz

    wget -nv http://swift-lang.github.io/swift-t-downloads/1.5/swift-t-1.5.0.tar.gz
    tar xfz swift-t-1.5.0.tar.gz -C "$SWIFT_DIR"
    rm swift-t-1.5.0.tar.gz
fi

(if [[ $USE_TENSORFLOW -eq 1 ]]; then
    export TENSORFLOW_DIR="$TASKBENCH_DEPS_DIR"/tensorflow
    cat >>deps/env.sh <<EOF
export TENSORFLOW_DIR="\$TASKBENCH_DEPS_DIR"/tensorflow
# see tensorflow/env.sh for TensorFlow configuration

EOF

    mkdir -p "$TENSORFLOW_DIR"

    cat >>"$TENSORFLOW_DIR"/env.sh <<EOF
export CONDA_PREFIX="\$TENSORFLOW_DIR"/conda
export PATH="\$CONDA_PREFIX"/bin:"\$PATH"
export CUDA_VISIBLE_DEVICES=-1 # explicitly disable GPU
EOF

    source "$TENSORFLOW_DIR"/env.sh

    cat >>"$TENSORFLOW_DIR"/env.sh <<EOF
source "\$CONDA_PREFIX"/etc/profile.d/conda.sh
conda activate myenv
EOF

    wget -nv https://repo.continuum.io/miniconda/Miniconda3-latest-Linux-x86_64.sh
    bash Miniconda3-latest-Linux-x86_64.sh -b -p "$CONDA_PREFIX"
    rm Miniconda3-latest-Linux-x86_64.sh
    conda update -y conda
    source $CONDA_PREFIX/etc/profile.d/conda.sh
    conda create -y -n myenv python=3.7 cffi tensorflow=2.1.0
    conda activate myenv
    # Hack: Try to install via pip to avoid compiler version incompatibility
    # Elliott: I turned this off to fix CI, but it may be required to make deployment to supercomputers work (i.e., it may need to be conditional on CI)
    # pip install -q tensorflow==2.1.0
fi)

(if [[ $USE_DASK -eq 1 ]]; then
    export DASK_DIR="$TASKBENCH_DEPS_DIR"/dask
    cat >>deps/env.sh <<EOF
export DASK_DIR="\$TASKBENCH_DEPS_DIR"/dask
# see dask/env.sh for Dask configuration

EOF

    mkdir -p "$DASK_DIR"

    cat >>"$DASK_DIR"/env.sh <<EOF
export CONDA_PREFIX="\$DASK_DIR"/conda
export PATH="\$CONDA_PREFIX"/bin:"\$PATH"
EOF

    source "$DASK_DIR"/env.sh

    wget -nv https://repo.continuum.io/miniconda/Miniconda3-latest-Linux-x86_64.sh
    bash Miniconda3-latest-Linux-x86_64.sh -b -p "$CONDA_PREFIX"
    rm Miniconda3-latest-Linux-x86_64.sh
    conda update -y conda
    conda install -y dask
fi)
