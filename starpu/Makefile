CC         = g++

CFLAGS     = -g -O0  -DADD_ -fPIC
LDFLAGS    = -Wall -g -O0

STARPU_DIR = /home/wwu/starpu/build
MPI_DIR    = /projects/opt/centos7/mpich/3.2-gcc_6.2.0

# Include directories
INC        = -I$(STARPU_DIR)/include/starpu/1.2 -I../core
INC_EXT    = -I$(MPI_DIR)/include

# Location of the libraries.
LIB        = -Wl,-rpath,$(STARPU_DIR)/lib:$(MPI_DIR)/lib $(STARPU_DIR)/lib/libstarpu-1.2.so.4.0.0 $(STARPU_DIR)/lib/libstarpumpi-1.2.so.3.0.0 $(MPI_DIR)/lib/libmpi.so 
LIB_EXT    = 

INC := $(INC) $(INC_EXT)
LIB := $(LIB) $(LIB_EXT)

CFLAGS += $(INC)

TARGET = main
all: $(TARGET)
	
.PRECIOUS: %.c %.o

core.o: ../core/core.cc ../core/core.h
	$(CC) -c $(CFLAGS) $<

data.o: data.cc data.h
	$(CC) -c $(CFLAGS) $<

main.o: main.cc
	$(CC) -c $(CFLAGS) $<
	
main: main.o data.o core.o
	$(CC) $^ $(LIB) -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean
