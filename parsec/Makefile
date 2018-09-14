ifndef PARSEC_DIR
$(error PARSEC_DIR variable is not defined, aborting build)
endif

DEBUG ?= 0

CC         = mpic++

CFLAGS     = -std=c++11 -D_GNU_SOURCE
LDFLAGS    = -m64 -std=c++11 -Wall -D_GNU_SOURCE

ifeq ($(strip $(DEBUG)),0)
CFLAGS		 += -O3
LDFLAGS		 += -O3
else
CFLAGS		 += -g -O0
LDFLAGS		 += -g -O0
endif

#PARSEC_DIR = /home/wwu12/parsec-master/install
#DPLASMA_DIR = $(PARSEC_DIR)
#PLASMA_DIR = /sw/plasma/2.8.0g

# Include directories
INC        = -I$(PARSEC_DIR)/include -I$(PARSEC_DIR)/include/parsec -I../core
INC_EXT    = -I$(HWLOC_DIR)/include 

# Location of the libraries.
LIB        = -Wl,-rpath,$(PARSEC_DIR)/lib $(PARSEC_DIR)/lib/libparsec.so -L../core -lcore_s
LIB_EXT    = -lpthread -lm -latomic

INC := $(INC) $(INC_EXT)
LIB := $(LIB) $(LIB_EXT)

CFLAGS += $(INC)

include ../core/make_blas.mk

TARGET = main
all: $(TARGET)

.PRECIOUS: %.cc %.o

common.o: common.cc common.h
	$(CC) -c $(CFLAGS) $<

main.o: main.cc ../core/timer.h
	$(CC) -c $(CFLAGS) $<

main: main.o common.o 
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean
