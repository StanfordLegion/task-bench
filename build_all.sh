#!/bin/bash

set -e

if [[ ! -d deps ]]; then
    echo "The directory deps does not exist."
    echo "Please run ./get_deps.sh and try again."
    false
fi

source deps/env.sh

if [[ $(uname -s) = Linux ]]; then
    DEFAULT_THREADS=$(nproc --all)
elif [[ $(uname -s) = Darwin ]]; then
    DEFAULT_THREADS=$(sysctl -n hw.ncpu)
else
    DEFAULT_THREADS=4
fi
THREADS=${THREADS:-$DEFAULT_THREADS}

make -C core clean
make -C core -j$THREADS

make -C kernel_bench clean
make -C kernel_bench all -j$THREADS


if [[ $TASKBENCH_USE_MPI -eq 1 ]]; then
    make -C mpi clean
    make -C mpi all -j$THREADS
fi

if [[ $USE_GASNET -eq 1 ]]; then
    make -C "$GASNET_DIR"
fi

if [[ $TASKBENCH_USE_HWLOC -eq 1 ]]; then
    pushd "$HWLOC_SRC_DIR"
    if [[ ! -d build ]]; then
        mkdir build
        cd build
        ../configure --prefix=$HWLOC_DIR
        make -j$THREADS
        make install
    fi
    popd
fi

(
if [[ -n $TRAVIS ]]; then
  if [[ "$(uname)" = "Linux" && "$CXX" = "g++"* ]]; then
      export CXX="g++-4.9" CC="gcc-4.9"
  fi
fi
if [[ -n $CRAYPE_VERSION ]]; then
    export HOST_CC=gcc HOST_CXX=g++
fi
if [[ $USE_LEGION -eq 1 || $USE_REGENT -eq 1 || $USE_REALM -eq 1 ]]; then
    make -C legion clean
    make -C regent clean
    make -C realm clean
fi
if [[ $USE_REGENT -eq 1 ]]; then
    pushd "$REGENT_DIR"
    if [[ $USE_GASNET -eq 1 ]]; then
        ln -sf "$GASNET_DIR" gasnet
    fi
    (
        if [[ -z $CC ]]; then
            export CC=cc
        fi
        if [[ -z $CXX ]]; then
            export CXX=c++
        fi
        unset LG_RT_DIR
        if [[ -z $TRAVIS ]]; then
            ./scripts/setup_env.py --terra-url https://github.com/StanfordLegion/terra.git --terra-branch luajit2.1 --llvm-version=38
        else
            LLVM_CONFIG=llvm-config-3.5 ./install.py --terra-url https://github.com/StanfordLegion/terra.git --terra-branch luajit2.1 --rdir=auto
        fi
    )
    popd
    (
        if [[ -n $CRAYPE_VERSION ]]; then
            export CC=gcc CXX=g++
        fi
        make -C regent -j$THREADS
    )
fi
if [[ $USE_LEGION -eq 1 ]]; then
    make -C legion -j$THREADS
fi
if [[ $USE_REALM -eq 1 ]]; then
    make -C realm -j$THREADS
fi
)

if [[ $USE_STARPU -eq 1 ]]; then
    STARPU_CONFIGURE_FLAG="--disable-cuda --disable-opencl --disable-fortran --disable-build-tests --disable-build-examples "
    if [[ $TASKBENCH_USE_HWLOC -eq 1 ]]; then
      STARPU_CONFIGURE_FLAG+=""
    else
      STARPU_CONFIGURE_FLAG+="--without-hwloc"
    fi
    pushd "$STARPU_SRC_DIR"
    PKG_CONFIG_PATH=$HWLOC_DIR/lib/pkgconfig ./configure --prefix=$STARPU_DIR $STARPU_CONFIGURE_FLAG
    make -j$THREADS
    make install
    popd
    make -C starpu clean
    make -C starpu -j$THREADS
fi

if [[ $USE_PARSEC -eq 1 ]]; then
    mkdir -p "$PARSEC_DIR"
    pushd "$PARSEC_DIR"
    if [[ $TASKBENCH_USE_HWLOC -eq 1 ]]; then
      ../contrib/platforms/config.linux -DPARSEC_GPU_WITH_CUDA=OFF -DCMAKE_INSTALL_PREFIX=$PWD -DHWLOC_DIR=$HWLOC_DIR
    else
      ../contrib/platforms/config.linux -DPARSEC_GPU_WITH_CUDA=OFF -DCMAKE_INSTALL_PREFIX=$PWD
    fi
    make -j$THREADS
    make install
    popd
    make -C parsec clean
    make -C parsec -j$THREADS
fi

(if [[ $USE_CHARM -eq 1 ]]; then
    if [[ -n $CRAYPE_VERSION ]]; then
        module load craype-hugepages8M
    fi
    pushd "$CHARM_DIR"
    ./build charm++ $CHARM_VERSION --with-production -j$THREADS
    popd
    pushd "$CHARM_SMP_DIR"
    ./build charm++ $CHARM_VERSION smp --with-production -j$THREADS
    popd
    make -C charm++ clean
    make -C charm++
    (
        export CHARM_DIR="$CHARM_SMP_DIR"
        rm -rf charm++_smp
        cp -r charm++ charm++_smp
        make -C charm++_smp clean
        make -C charm++_smp
     )
fi)

(if [[ $USE_CHAPEL -eq 1 ]]; then
    if [[ -n $CRAYPE_VERSION ]]; then
        module load craype-hugepages16M
    fi

    export PATH="$CHPL_HOME/bin/$CHPL_HOST_PLATFORM:$PATH"
    pushd "$CHPL_HOME"
    make -j$THREADS
    popd

    make -C chapel clean
    make -C chapel
fi)

if [[ $USE_OPENMP -eq 1 ]]; then
    make -C openmp clean
    make -C openmp -j$THREADS
fi

if [[ $USE_OMPSS -eq 1 ]]; then
    pushd "$NANOS_SRC_DIR"
    if [[ ! -d build ]]; then
        mkdir build
        cd build
        ../configure --prefix=$NANOS_PREFIX --disable-instrumentation --disable-debug
        make -j$THREADS
        make install
    fi
    popd

    pushd "$MERCURIUM_SRC_DIR"
    if [[ ! -d build ]]; then
        mkdir build
        cd build
        ../configure --prefix=$MERCURIUM_PREFIX --enable-ompss --with-nanox=$NANOS_PREFIX
        make -j$THREADS
        make install
    fi
    popd

    export PATH=$NANOS_PREFIX/bin:$MERCURIUM_PREFIX/bin:$PATH
    export LD_LIBRARY_PATH=$NANOS_PREFIX/lib:$MERCURIUM_PREFIX/lib:$LD_LIBRARY_PATH
    make -C ompss clean
    make -C ompss -j$THREADS
fi

(if [[ $USE_SPARK -eq 1 ]]; then
    source "$SPARK_DIR"/env.sh

    export CORE_DIR="$PWD"/core
    export SPARK_PROJ_DIR="$PWD"/spark

    pushd "$SPARK_SWIG_DIR"
    if [[ ! -d build ]]; then
        mkdir build
        cd build
        ../configure --prefix="$SPARK_PREFIX"
        make -j$THREADS
        make install
    fi
    popd

    pushd "$SPARK_PROJ_DIR"
    swig -c++ -java -outcurrentdir -I../core -outdir "$SPARK_PROJ_DIR"/src/main/java core_c.i

    g++ -fpic -c -O3 -std=c++11 -I../core -I"$JAVA_HOME"/include -I"$JAVA_HOME"/include/linux core_c_wrap.cxx
    g++ -shared -O3 -z noexecstack -std=c++11 core_c_wrap.o -L"$CORE_DIR" -lcore -o libcore_c.so
    popd

    #make jar in sbt dir
    pushd "$SPARK_PROJ_DIR"
    "$SPARK_SBT_DIR"/sbt assembly
    popd
fi)

(if [[ $USE_SWIFT -eq 1 ]]; then
    source "$SWIFT_DIR"/env.sh
    pushd "$SWIFT_DIR"

    # tcl
    (
        if [[ -n $CRAYPE_VERSION ]]; then
            export CC=gcc CXX=g++
        fi

        pushd tcl8.6.8/unix
        if [[ ! -d build ]]; then
            mkdir build
            cd build
            ../configure --prefix="$SWIFT_PREFIX" --enable-shared
            make -j$THREADS
            make install
        fi
        popd
    )

    # swig
    (
        if [[ -n $CRAYPE_VERSION ]]; then
            export CC=gcc CXX=g++
        fi

        pushd swig-3.0.12
        export LDFLAGS=-L"$SWIFT_PREFIX"/lib
        export CPPFLAGS=-I"$SWIFT_PREFIX"/include
        if [[ ! -d build ]]; then
            mkdir build
            cd build
            ../configure --prefix="$SWIFT_PREFIX" --enable-shared
            make -j$THREADS
            make install
        fi
        popd
    )

    # ncurses
    (
        if [[ -n $CRAYPE_VERSION ]]; then
            export CC=gcc CXX=g++
        fi

        pushd ncurses-6.1
        export CXXFLAGS=" -fPIC"
        export CFLAGS=" -fPIC"
        if [[ ! -d build ]]; then
            mkdir build
            cd build
            ../configure --prefix="$SWIFT_PREFIX" --enable-shared
            make -j$THREADS
            make install
        fi
        popd
    )

    # zsh
    (
        if [[ -n $CRAYPE_VERSION ]]; then
            export CC=gcc CXX=g++
        fi

        pushd zsh-5.5.1
        export CPPFLAGS="-I$SWIFT_PREFIX/include"
        export LDFLAGS="-L$SWIFT_PREFIX/lib"
        if [[ ! -d build ]]; then
            mkdir build
            cd build
            ../configure --prefix="$SWIFT_PREFIX"
            make -j$THREADS
            make install
        fi
        popd
    )

    # swift-t

    if [[ -n $CRAYPE_VERSION ]]; then
        if [[ ! -d cc-wrapper ]]; then
            mkdir cc-wrapper
            pushd cc-wrapper
            cat >cc <<EOF
#!/bin/bash

$(which cc) -dynamic "\$@"
EOF
            chmod +x cc
            popd
        fi
        export PATH="$PWD"/cc-wrapper:"$PATH"
    fi

    pushd swift-t-1.4
    if [[ ! -f ./dev/build/swift-t-settings.sh ]]; then
        ./dev/build/init-settings.sh
        sed -i 's@SWIFT_T_PREFIX=/tmp/swift-t-install@SWIFT_T_PREFIX='"$SWIFT_PREFIX"'@g' ./dev/build/swift-t-settings.sh
        sed -i 's@# TCLSH_LOCAL=/usr/bin/tclsh@TCLSH_LOCAL='"$SWIFT_PREFIX"'/bin/tclsh8.6@g' ./dev/build/swift-t-settings.sh
        sed -i 's@# TCL_LIB_DIR=/path/to/tcl/lib@TCL_LIB_DIR='"$SWIFT_PREFIX"'/lib@g' ./dev/build/swift-t-settings.sh
        sed -i 's@# TCL_INCLUDE_DIR=/path/to/tcl/include@TCL_INCLUDE_DIR='"$SWIFT_PREFIX"'/include@g' ./dev/build/swift-t-settings.sh
        sed -i 's@# TCL_SYSLIB_DIR=/path/to/tcl/lib@TCL_SYSLIB_DIR='"$SWIFT_PREFIX"'/lib@g' ./dev/build/swift-t-settings.sh
        sed -i 's@# export JAVA_HOME=@export JAVA_HOME='"$JAVA_HOME"'@g' ./dev/build/swift-t-settings.sh
        sed -i 's@# export ANT_HOME=@export ANT_HOME='"$ANT_HOME"'@g' ./dev/build/swift-t-settings.sh
        sed -i 's@MAKE_PARALLELISM=1@MAKE_PARALLELISM='"$THREADS"'@g' ./dev/build/swift-t-settings.sh

        if [[ -n $CRAYPE_VERSION ]]; then
            sed -i 's@export CC=mpicc@export CC=cc@g' ./dev/build/swift-t-settings.sh
        fi
    fi

    export SWIFT_T_OPT_BUILD=1

    if [[ -n $CRAYPE_VERSION ]]; then
        sed -i 's@mpicc@cc@g' ./dev/build/check-tools.sh

        export CFLAGS="-fPIC"
        export SWIFT_T_CUSTOM_MPI=1
        export MPI_INCLUDE=$CRAY_MPICH_DIR/include
        export MPI_LIB_DIR=$CRAY_MPICH_DIR/lib

        # extra flags for turbine configure script
        export CRAY_ARGS="--with-launcher=/usr/bin/srun"
    fi

    ./dev/build/build-all.sh
    find "$SWIFT_PREFIX"/stc -type f -exec sed -i 's@#!/bin/zsh@'"#!$SWIFT_PREFIX"'/bin/zsh@g' {} +
    find "$SWIFT_PREFIX"/turbine -type f -exec sed -i 's@#!/bin/zsh@'"#!$SWIFT_PREFIX"'/bin/zsh@g' {} +
    popd

    popd

    pushd swift
    ./swig_script.sh
    stc -O3 benchmark.swift
    popd
fi)

(if [[ $USE_TENSORFLOW -eq 1 ]]; then
    source "$TENSORFLOW_DIR"/env.sh

    export TF_CFLAGS="$(python -c 'import tensorflow as tf; print(" ".join(tf.sysconfig.get_compile_flags()))')"
    export TF_LFLAGS="$(python -c 'import tensorflow as tf; print(" ".join(tf.sysconfig.get_link_flags()))')"

    make -C tensorflow/ops clean
    make -C tensorflow/ops all -j$THREADS
fi)

echo
echo "Build completed successfully."
