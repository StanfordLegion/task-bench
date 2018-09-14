ifndef STARPU_DIR
$(error STARPU_DIR variable is not defined, aborting build)
endif

DEBUG ?= 0

CC         = mpic++

CFLAGS     = -DADD_ -fPIC -std=c++11
LDFLAGS    = -Wall -std=c++11

#STARPU_DIR = /home/wwu12/starpu/install
#MPI_DIR    = /sw/openmpi/2.1.1

ifeq ($(strip $(DEBUG)),0)
CFLAGS		 += -O3
LDFLAGS		 += -O3
else
CFLAGS		 += -g -O0
LDFLAGS		 += -g -O0
endif

# Include directories
INC        = -I$(STARPU_DIR)/include/starpu/1.2 -I../core
INC_EXT    = 

# Location of the libraries.
LIB        = -Wl,-rpath,$(STARPU_DIR)/lib: $(STARPU_DIR)/lib/libstarpu-1.2.so $(STARPU_DIR)/lib/libstarpumpi-1.2.so -L../core -lcore_s
LIB_EXT    = 

INC := $(INC) $(INC_EXT)
LIB := $(LIB) $(LIB_EXT)

CFLAGS += $(INC)

include ../core/make_blas.mk

TARGET = main
all: $(TARGET)

.PRECIOUS: %.c %.o

data.o: data.cc data.h
	$(CC) -c $(CFLAGS) $<

main.o: main.cc
	$(CC) -c $(CFLAGS) $<

main: main.o data.o
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean
