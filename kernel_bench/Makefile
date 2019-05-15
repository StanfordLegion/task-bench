DEBUG ?= 0

CXX ?= g++

CXXFLAGS = -std=c++11 -Wall
LDFLAGS  = -std=c++11 -Wall -lpthread

ifeq ($(strip $(DEBUG)),1)
CXXFLAGS += -g -O0
LDFLAGS  += -g -O0
else
CXXFLAGS += -O3 -march=native
LDFLAGS  += -O3 -march=native
endif

# Include directories
INC        = -I../core
INC_EXT    =  

# Location of the libraries.
LIB        = -L../core -lcore_s
LIB_EXT    = 

INC := $(INC) $(INC_EXT)
LIB := $(LIB) $(LIB_EXT)

CXXFLAGS += $(INC)

include ../core/make_blas.mk
include ../core/make_cuda_app.mk

ifeq ($(strip $(HAVE_CUDA)),1)
TARGET = main main_cuda
else
TARGET = main
endif

all: $(TARGET)

.PRECIOUS: %.cc %.o

main.o: main.cc ../core/timer.h
	$(CXX) -c $(CXXFLAGS) $<

main: main.o
	$(CXX) $^ $(LIB) $(LDFLAGS) -o $@ 
	
ifeq ($(strip $(HAVE_CUDA)),1)	
main_cuda.o: main_cuda.cc ../core/timer.h
	$(CXX) -c $(CXXFLAGS) $<

main_cuda: main_cuda.o
	$(CXX) $^ $(LIB) $(LDFLAGS) -o $@ 
endif

clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean
