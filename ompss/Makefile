DEBUG ?= 0

MCXX = $(OMPSS_TARGET)/bin/clang++

GCC_INSTALL_DIR := $(patsubst %/,%,$(dir $(shell g++ -print-libgcc-file-name)))

CXXFLAGS = -fompss-2 -std=c++11 -Wall -Wno-unused --gcc-install-dir=$(GCC_INSTALL_DIR)
LDFLAGS  = -fompss-2 -std=c++11 -Wall -Wno-unused --gcc-install-dir=$(GCC_INSTALL_DIR)

ifeq ($(strip $(DEBUG)),1)
CXXFLAGS += -g -O0 -mavx
LDFLAGS  += -g -O0
else
CXXFLAGS += -O3 -march=native -mavx
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

TARGET = main
all: $(TARGET)

.PRECIOUS: %.cc %.o

main.o: main.cc ../core/timer.h
	$(MCXX) $(CXXFLAGS) -c $<

main: main.o ../core/libcore.a
	$(MCXX) $^ $(LIB) $(LDFLAGS) -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean
