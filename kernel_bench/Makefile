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
LIB        = 
LIB_EXT    = 

INC := $(INC) $(INC_EXT)
LIB := $(LIB) $(LIB_EXT)

CXXFLAGS += $(INC)

include ../core/make_blas.mk

TARGET = main
all: $(TARGET)

.PRECIOUS: %.cc %.o

core.o: ../core/core.cc ../core/core.h ../core/core_kernel.h
	$(CXX) -c $(CXXFLAGS) $<

core_kernel.o: ../core/core_kernel.cc ../core/core_kernel.h
	$(CXX) -c $(CXXFLAGS) $<

main.o: main.cc ../core/timer.h
	$(CXX) -c $(CXXFLAGS) $<

main: main.o core.o core_kernel.o
	$(CXX) $^ $(LIB) $(LDFLAGS) -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean
