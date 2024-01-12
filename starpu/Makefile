ifndef STARPU_DIR
$(error STARPU_DIR variable is not defined, aborting build)
endif

DEBUG ?= 0

CC         = mpic++

CFLAGS     = -DADD_ -fPIC -std=c++11
LDFLAGS    = -Wall -std=c++11

STARPU_VERSION ?= 1.3

#STARPU_DIR = /home/wwu12/starpu/install
#MPI_DIR    = /sw/openmpi/2.1.1

ifeq ($(strip $(DEBUG)),0)
CFLAGS		 += -O3
LDFLAGS		 += -O3 -lcublas -lcudart
else
CFLAGS		 += -g -O0
LDFLAGS		 += -g -O0 -lcublas -lcudart
endif

# Include directories
INC        = -I$(STARPU_DIR)/include/starpu/$(STARPU_VERSION) -I../core
INC_EXT    = -I/usr/local/cuda-11.6/targets/x86_64-linux/include

# Location of the libraries.
LIB        = -Wl,-rpath,$(STARPU_DIR)/lib: $(STARPU_DIR)/lib/libstarpu-$(STARPU_VERSION).so $(STARPU_DIR)/lib/libstarpumpi-$(STARPU_VERSION).so -L../core -lcore_s -L/usr/local/cuda-11.6/targets/x86_64-linux/lib
LIB_EXT    =

ifeq ($(strip $(TASKBENCH_USE_HWLOC)),1)
  INC_EXT += -I$(HWLOC_DIR)/include
endif

INC := $(INC) $(INC_EXT)
LIB := $(LIB) $(LIB_EXT)

CFLAGS += $(INC)

include ../core/make_blas.mk

TARGET = main main_buffer_core main_expl
all: $(TARGET)

.PRECIOUS: %.c %.o

data.o: data.cc data.h
	$(CC) -c $(CFLAGS) $<

main.o: main.cc
	$(CC) -c $(CFLAGS) $<

main: main.o data.o
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@ 

main_buffer_core.o: main_buffer_core.cc
	$(CC) -c $(CFLAGS) $<

main_buffer_core: main_buffer_core.o data.o
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@ 

main_expl.o: main_expl.cc
	$(CC) -c $(CFLAGS) $<

main_expl: main_expl.o data.o
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@

main_static.o: main_static.cc
	$(CC) -c $(CFLAGS) $<

main_static: main_static.o data.o
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@

clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean
