ifndef PARSEC_DIR
$(error PARSEC_DIR variable is not defined, aborting build)
endif

PARSEC_SRC = $PARSEC_DIR/../../

#PARSEC_DIR = /home/qcao3/task-bench/software/parsec/build/install
#PARSEC_SRC = /home/qcao3/task-bench/software/parsec

#PARSEC_DIR = /home/qcao3/task-bench/software/parsec-dtd-interface/build/install
#PARSEC_SRC = /home/qcao3/task-bench/software/parsec-dtd-interface

DEBUG ?= 0

CC         = mpic++
cc         = mpicc
PP = ${PARSEC_DIR}/bin/parsec_ptgpp

CFLAGS     = -std=c++11 -D_GNU_SOURCE
LDFLAGS    = -m64 -std=c++11 -Wall -D_GNU_SOURCE

CFLAGS_JDF     = -D_GNU_SOURCE

ifeq ($(strip $(DEBUG)),0)
CFLAGS		 += -O3
CFLAGS_JDF	 += -O3
LDFLAGS		 += -O3
else
CFLAGS		 += -g -O0
CFLAGS_JDF	 += -g -O0
LDFLAGS		 += -g -O0
endif

#PARSEC_DIR = /home/wwu12/parsec-master/install
#DPLASMA_DIR = $(PARSEC_DIR)
#PLASMA_DIR = /sw/plasma/2.8.0g

# Include directories
INC        = -I$(PARSEC_DIR)/include -I$(PARSEC_DIR)/include/parsec -I$(PARSEC_DIR)/../ -I../core -I$(PARSEC_SRC) -I$(PARSEC_SRC)/parsec
INC_EXT    = -I$(HWLOC_DIR)/include 

# Location of the libraries.
LIB        = -Wl,-rpath,$(PARSEC_DIR)/lib $(PARSEC_DIR)/lib/libparsec.so -L../core -lcore_s
LIB_EXT    = -lpthread -lm -latomic

INC := $(INC) $(INC_EXT)
LIB := $(LIB) $(LIB_EXT)

CFLAGS += $(INC)

include ../core/make_blas.mk

TARGET = main main_shard main_checkfirst main_jdf
all: $(TARGET)

.PRECIOUS: %.cc %.o

stencil_1d.c stencil_1d.h: stencil_1d.jdf
	$(PP) -E -i $< -o $(basename $<)

stencil_1d.o: stencil_1d.c stencil_1d.h benchmark_internal.h
	$(cc) -c $(CFLAGS_JDF) $(INC) $<

benchmark.c benchmark.h: benchmark.jdf
	$(PP) -E -i $< -o $(basename $<)

benchmark.o: benchmark.c benchmark.h benchmark_internal.h
	$(cc) -c $(CFLAGS_JDF) $(INC) $<

benchmark_internal.o: benchmark_internal.cc
	$(CC) -c $(CFLAGS) $<

common.o: common.cc common.h
	$(CC) -c $(CFLAGS) $<

main.o: main.cc ../core/timer.h
	$(CC) -c $(CFLAGS) $<
	
main_shard.o: main_shard.cc ../core/timer.h
	$(CC) -c $(CFLAGS) $<

main_checkfirst.o: main_checkfirst.cc ../core/timer.h
	$(CC) -c $(CFLAGS) $<

main_jdf.o: main_jdf.cc ../core/timer.h ../core/core_c.h
	$(CC) -c $(CFLAGS) $<

main: main.o common.o 
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@ 
	
main_shard: main_shard.o common.o 
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@ 

main_checkfirst: main_checkfirst.o common.o
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@

main_jdf: main_jdf.o common.o stencil_1d.o benchmark_internal.o benchmark.o
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@

clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean
