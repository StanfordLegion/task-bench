CC         = gcc

CFLAGS     = -g -O0 -g3
LDFLAGS    = -m64 -std=c1x  -Wall  -g -O0 -g3

PARSEC_DIR = /home/wwu12/parsec-master/install
PARSEC_SRC_DIR = /home/wwu12/parsec-master
DPLASMA_DIR = /home/wwu12/parsec-master/install
PLASMA_DIR = /sw/plasma/2.8.0g
MPI_DIR    = /sw/openmpi/2.1.1-thread-multiple

# Include directories
INC        = -I$(PARSEC_DIR)/include -I$(PARSEC_DIR)/include/parsec -I$(DPLASMA_DIR)/include
INC_EXT    = -I$(MPI_DIR)/include -I$(PLASMA_DIR)/include -I$(PARSEC_SRC_DIR)/dplasma/testing

# Location of the libraries.
LIB        = -Wl,-rpath,$(PARSEC_DIR)/lib:$(MPI_DIR)/lib:$(DPLASMA_DIR)/lib $(DPLASMA_DIR)/lib/libdplasma.so.2.0 $(MPI_DIR)/lib/libmpi.so $(PARSEC_DIR)/lib/libparsec.so.2.0.0 $(PARSEC_SRC_DIR)/dplasma/testing/libcommon.a 
LIB_EXT    = -lpthread -lm -latomic

INC := $(INC) $(INC_EXT)
LIB := $(LIB) $(LIB_EXT)

CFLAGS += $(INC)

TARGET = dom no_comm 1d_stencil
all: $(TARGET)
	
.PRECIOUS: %.c %.o

%: %.c

%.o: %.c
	$(CC) -c $(CFLAGS) $<
	
%: %.o
	$(CC) $^ $(LIB) -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean