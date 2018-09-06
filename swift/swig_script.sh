#!/usr/bin/sh -f

swig -tcl interop.i
g++ -O3 -fpic -I../deps/swift/install/include -c interop_wrap.c
g++ -shared interop_wrap.o ../core/core.o ../core/core_c.o ../core/core_kernel.o -o interop.so
