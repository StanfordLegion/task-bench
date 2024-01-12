DEBUG ?= 0

CXX ?= g++

CXXFLAGS = -std=c++11 -Wall
LDFLAGS  = -std=c++11 -Wall -lpthread

ifeq ($(strip $(DEBUG)),1)
CXXFLAGS += -g -O0
LDFLAGS  += -g -O0
else
CXXFLAGS += -O3 # -march=native
LDFLAGS  += -O3 # -march=native
endif

# Include directories
INC        = -I../core -I/usr/local/cuda-11.6/targets/x86_64-linux/include
INC_EXT    =  

# Location of the libraries.
LIB        = -L/usr/local/cuda-11.6/targets/x86_64-linux/lib -L../core -lcore_s -lcudart
LIB_EXT    = 

INC := $(INC) $(INC_EXT)
LIB := $(LIB) $(LIB_EXT)

CXXFLAGS += $(INC)

include ../core/make_blas.mk
LDFLAGS += -lcublas

TARGET = main
all: $(TARGET)

.PRECIOUS: %.cc %.o

main.o: main.cc ../core/timer.h
	$(CXX) -c $(CXXFLAGS) $<

main: main.o
	$(CXX) $^ $(LIB) $(LDFLAGS) -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean
