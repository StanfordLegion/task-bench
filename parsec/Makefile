CC         = g++

CFLAGS     = -g -O0 -g3 -std=c++11 -D_GNU_SOURCE -Wsubobject-linkage -Wwrite-strings
LDFLAGS    = -m64 -std=c++11 -Wall  -g -O0 -g3 -D_GNU_SOURCE -Wsubobject-linkage -Wwrite-strings

PARSEC_DIR = /home/wwu12/parsec-master/install
DPLASMA_DIR = /home/wwu12/parsec-master/install
PLASMA_DIR = /sw/plasma/2.8.0g
MPI_DIR    = /sw/openmpi/2.1.1-thread-multiple

# Include directories
INC        = -I$(PARSEC_DIR)/include -I$(PARSEC_DIR)/include/parsec -I$(DPLASMA_DIR)/include -I../core
INC_EXT    = -I$(MPI_DIR)/include -I$(PLASMA_DIR)/include

# Location of the libraries.
LIB        = -Wl,-rpath,$(PARSEC_DIR)/lib:$(MPI_DIR)/lib:$(DPLASMA_DIR)/lib $(DPLASMA_DIR)/lib/libdplasma.so.2.0 $(MPI_DIR)/lib/libmpi.so $(PARSEC_DIR)/lib/libparsec.so.2.0.0
LIB_EXT    = -lpthread -lm -latomic

INC := $(INC) $(INC_EXT)
LIB := $(LIB) $(LIB_EXT)

CFLAGS += $(INC)

TARGET = main
all: $(TARGET)
	
.PRECIOUS: %.cc %.o
	
core.o: ../core/core.cc ../core/core.h
	$(CC) -c $(CFLAGS) $<

common.o: common.cc common.h common_timing.h flops.h
	$(CC) -c $(CFLAGS) $<

main.o: main.cc 
	$(CC) -c $(CFLAGS) $<
	
main: main.o common.o core.o
	$(CC) $^ $(LIB) -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean