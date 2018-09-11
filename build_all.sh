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

if [[ $USE_LEGION -eq 1 || $USE_REALM -eq 1 ]]; then
    make -C legion clean
    make -C realm clean
fi
if [[ $USE_LEGION -eq 1 ]]; then
    make -C legion -j$THREADS
fi
if [[ $USE_REALM -eq 1 ]]; then
    make -C realm -j$THREADS
fi

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

if [[ $USE_SPARK -eq 1 ]]; then
    pushd "$SPARK_SWIG_DIR"
    ./configure --prefix="$PWD"
    make
    make install
    #make -k check #can run this on a compute node and pass -j$THREADS to make this faster
    popd

    #put .cxx in swig dir, java files in /src/main/java
    pushd "$SPARK_SWIG_DIR"
    ./swig -c++ -java -outcurrentdir -outdir "$SPARK_PROJ_DIR"/src/main/java "$SPARK_PROJ_DIR"/core_c.i #core_c.i has full path to core_c.h, typemaps

    #make *.so in swig dir
    g++ -fpic -c -O3 -std=c++11 -I"$JAVA_HOME"/include -I"$JAVA_HOME"/include/linux core_c_wrap.cxx
    g++ -shared -O3 -z noexecstack -std=c++11 "$CORE_DIR"/core_c.o core_c_wrap.o -L"$CORE_DIR" -lcore -o libcore_c.so
    popd

    #make jar in sbt dir
    pushd "$SPARK_PROJ_DIR" #task-bench/spark
    "$SPARK_SBT_DIR"/sbt assembly
    popd
fi

(if [[ $USE_SWIFT -eq 1 ]]; then
    export PATH="$SWIFT_PREFIX"/bin:"$PATH"
    export LD_LIBRARY_PATH="$SWIFT_PREFIX"/lib:"$LD_LIBRARY_PATH"
    pushd "$SWIFT_DIR"

    # x11
    pushd "$SWIFT_PREFIX"/src
    echo -e "util/macros \nfont/util \ndoc/xorg-sgml-doctools \ndoc/xorg-docs \nproto/xorgproto \nxcb/proto \nlib/libxtrans" > modulefile
    echo -e "lib/libXau \nlib/libXdmcp \nxcb/pthread-stubs \nxcb/libxcb \nxcb/util \nxcb/util-image \nxcb/util-keysyms" >> modulefile
    echo -e "xcb/util-renderutil \nxcb/util-wm \nlib/libX11" >> modulefile
    ./util/modular/build.sh --clone --modfile modulefile "$SWIFT_PREFIX"
    rm modulefile
    popd

    # tcl
    pushd tcl8.6.8/unix
    ./configure --enable-shared --prefix="$SWIFT_PREFIX"
    make
    make install
    popd

    # tk
    pushd tk8.6.8/unix
    ./configure --enable-shared --prefix="$SWIFT_PREFIX" --with-tcl="$SWIFT_DIR"/tcl8.6.8/unix --x-includes="$SWIFT_PREFIX"/include --x-libraries="$SWIFT_PREFIX"/lib
    make
    make install
    popd

    # swig
    (
        pushd swig-3.0.12
        export LDFLAGS=-L"$SWIFT_PREFIX"/lib
        export CPPFLAGS=-I"$SWIFT_PREFIX"/include
        mkdir build
        cd build
        ../configure --enable-shared --prefix="$SWIFT_PREFIX"
        make
        make install
        popd
    )

    # jdk
    export JAVA_HOME="$SWIFT_DIR"/jdk-10.0.2
    export PATH="$JAVA_HOME"/bin:"$PATH"

    # ant
    pushd apache-ant-1.10.5
    export ANT_HOME="$PWD"
    export PATH="$ANT_HOME"/bin:"$PATH"
    popd

    # ncurses
    (
        pushd ncurses-6.1
        export CXXFLAGS=" -fPIC"
        export CFLAGS=" -fPIC"
        mkdir build
        cd build
        ../configure --prefix="$SWIFT_PREFIX" --enable-shared
        make
        make install
        popd
    )

    # zsh
    (
        pushd zsh-5.5.1
        export CPPFLAGS="-I$SWIFT_PREFIX/include"
        export LDFLAGS="-L$SWIFT_PREFIX/lib"
        ./configure --prefix="$SWIFT_PREFIX"
        make
        make install
        popd
    )

    # swift-t
    pushd swift-t-1.4
    ./dev/build/init-settings.sh
    sed -i 's@SWIFT_T_PREFIX=/tmp/swift-t-install@SWIFT_T_PREFIX='"$SWIFT_PREFIX"'@g' ./dev/build/swift-t-settings.sh
    sed -i 's@# TCLSH_LOCAL=/usr/bin/tclsh@TCLSH_LOCAL='"$SWIFT_PREFIX"'/bin/tclsh8.6@g' ./dev/build/swift-t-settings.sh
    sed -i 's@# TCL_LIB_DIR=/path/to/tcl/lib@TCL_LIB_DIR='"$SWIFT_PREFIX"'/lib@g' ./dev/build/swift-t-settings.sh
    sed -i 's@# TCL_INCLUDE_DIR=/path/to/tcl/include@TCL_INCLUDE_DIR='"$SWIFT_PREFIX"'/include@g' ./dev/build/swift-t-settings.sh
    sed -i 's@# TCL_SYSLIB_DIR=/path/to/tcl/lib@TCL_SYSLIB_DIR='"$SWIFT_PREFIX"'/lib@g' ./dev/build/swift-t-settings.sh
    sed -i 's@# export JAVA_HOME=@export JAVA_HOME='"$SWIFT_DIR"'/jdk-10.0.2@g' ./dev/build/swift-t-settings.sh
    sed -i 's@# export ANT_HOME=@export ANT_HOME='"$SWIFT_DIR"'/apache-ant-1.10.5@g' ./dev/build/swift-t-settings.sh

    ./dev/build/build-all.sh
    export PATH="$SWIFT_PREFIX"/stc/bin:"$SWIFT_PREFIX"/turbine/bin:$PATH
    find "$SWIFT_PREFIX"/stc -type f -exec sed -i 's@/bin/zsh@'"$SWIFT_PREFIX"'/bin/zsh@g' {} +
    find "$SWIFT_PREFIX"/turbine -type f -exec sed -i 's@/bin/zsh@'"$SWIFT_PREFIX"'/bin/zsh@g' {} +
    popd

    popd
fi)

echo
echo "Build completed successfully."
