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

if [[ $TASKBENCH_USE_MPI -eq 1 ]]; then
    make -C mpi clean
    make -C mpi all -j$THREADS
fi

if [[ $USE_GASNET -eq 1 ]]; then
    make -C "$GASNET_DIR"
fi

if [[ $TASKBENCH_USE_HWLOC -eq 1 ]]; then
    pushd "$HWLOC_SRC_DIR"
    ./configure --prefix=$HWLOC_DIR
    make -j$THREADS
    make install
    popd
fi

if [[ $USE_LEGION -eq 1 ]]; then
    make -C legion clean
    make -C legion -j$THREADS
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
  
if [[ $USE_OPENMP -eq 1 ]]; then
    make -C openmp clean
    make -C openmp -j$THREADS
fi

if [[ $USE_SWIFT -eq 1 ]]; then
    export PATH="$SWIFT_INSTALL"/bin:"$PATH"
    export LD_LIBRARY_PATH="$SWIFT_INSTALL"/lib:"$LD_LIBRARY_PATH"
    module load openmpi/3.0.1
    pushd "$SWIFT_DIR"
    # x11
    pushd "$SWIFT_INSTALL"/src
    echo -e "util/macros \nfont/util \ndoc/xorg-sgml-doctools \ndoc/xorg-docs \nproto/xorgproto \nxcb/proto \nlib/libxtrans" > modulefile
    echo -e "lib/libXau \nlib/libXdmcp \nxcb/pthread-stubs \nxcb/libxcb \nxcb/util \nxcb/util-image \nxcb/util-keysyms" >> modulefile
    echo -e "xcb/util-renderutil \nxcb/util-wm \nlib/libX11" >> modulefile
    ./util/modular/build.sh --clone --modfile modulefile "$SWIFT_INSTALL"
    rm modulefile
    popd
    # tcl
    cd tcl8.6.8/unix
    ./configure --enable-shared --prefix="$SWIFT_INSTALL"
    make
    make install
    # tk
    cd ../../tk8.6.8/unix
    ./configure --enable-shared --prefix="$SWIFT_INSTALL" --with-tcl="$SWIFT_DIR"/tcl8.6.8/unix --x-includes="$SWIFT_INSTALL"/include --x-libraries="$SWIFT_INSTALL"/lib
    make
    make install
    # swig
    cd ../../swig-3.0.12
    export LDFLAGS=-L"$SWIFT_INSTALL"/lib
    export CPPFLAGS=-I"$SWIFT_INSTALL"/include
    ./configure --enable-shared --prefix="$SWIFT_INSTALL"
    make
    make install
    cd ..
    # jdk
    export JAVA_HOME="$SWIFT_DIR"/jdk-10.0.2
    export PATH="$JAVA_HOME"/bin:"$PATH"
    # ant
    cd apache-ant-1.10.5
    export ANT_HOME="$PWD"
    export PATH="$ANT_HOME"/bin:"$PATH"
    # ncurses
    cd ../ncurses-6.1
    export CXXFLAGS=" -fPIC"
    export CFLAGS=" -fPIC"
    ./configure --prefix="$SWIFT_INSTALL" --enable-shared
    make
    make install
    # zsh
    cd ../zsh-5.5.1
    export CPPFLAGS="-I$SWIFT_INSTALL/include"
    export LDFLAGS="-L$SWIFT_INSTALL/lib"
    ./configure --prefix="$SWIFT_INSTALL"
    make
    make install
    # swift-t
    cd ../swift-t-1.4
    ./dev/build/init-settings.sh
    sed -i 's@SWIFT_T_PREFIX=/tmp/swift-t-install@SWIFT_T_PREFIX='"$SWIFT_INSTALL"'@g' ./dev/build/swift-t-settings.sh
    sed -i 's@# TCLSH_LOCAL=/usr/bin/tclsh@TCLSH_LOCAL='"$SWIFT_INSTALL"'/bin/tclsh8.6@g' ./dev/build/swift-t-settings.sh
    sed -i 's@# TCL_LIB_DIR=/path/to/tcl/lib@TCL_LIB_DIR='"$SWIFT_INSTALL"'/lib@g' ./dev/build/swift-t-settings.sh
    sed -i 's@# TCL_INCLUDE_DIR=/path/to/tcl/include@TCL_INCLUDE_DIR='"$SWIFT_INSTALL"'/include@g' ./dev/build/swift-t-settings.sh
    sed -i 's@# TCL_SYSLIB_DIR=/path/to/tcl/lib@TCL_SYSLIB_DIR='"$SWIFT_INSTALL"'/lib@g' ./dev/build/swift-t-settings.sh
    sed -i 's@# export JAVA_HOME=@export JAVA_HOME='"$SWIFT_DIR"'/jdk-10.0.2@g' ./dev/build/swift-t-settings.sh
    sed -i 's@# export ANT_HOME=@export ANT_HOME='"$SWIFT_DIR"'/apache-ant-1.10.5@g' ./dev/build/swift-t-settings.sh

    ./dev/build/build-all.sh
    export PATH="$SWIFT_INSTALL"/stc/bin:"$SWIFT_INSTALL"/turbine/bin:$PATH
    find "$SWIFT_INSTALL"/stc -type f -exec sed -i 's@/bin/zsh@'"$SWIFT_INSTALL"'/bin/zsh@g' {} +
    find "$SWIFT_INSTALL"/turbine -type f -exec sed -i 's@/bin/zsh@'"$SWIFT_INSTALL"'/bin/zsh@g' {} +
    popd
fi
