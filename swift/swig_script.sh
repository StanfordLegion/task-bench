#!/bin/bash

swig -tcl interop.i
g++ -O3 -fPIC -I"$SWIFT_PREFIX"/include -c interop_wrap.c -o interop_wrap.o
g++ -shared interop_wrap.o -L../core -lcore_s -o interop.so
