#!/bin/bash

cd ..
SWIFT_DEPS=$PWD/deps/swift
SWIFT_INSTALL=$SWIFT_DEPS/install
export PATH=$SWIFT_INSTALL/bin:$PATH
export LD_LIBRARY_PATH=$SWIFT_INSTALL/lib:$LD_LIBRARY_PATH
export JAVA_HOME=$SWIFT_DEPS/jdk-10.0.2
export PATH=$JAVA_HOME/bin:$PATH
export ANT_HOME=$SWIFT_DEPS/apache-ant-1.10.5
export PATH=$ANT_HOME/bin:$PATH
export PATH=$SWIFT_INSTALL/stc/bin:$SWIFT_INSTALL/turbine/bin:$PATH
cd swift

