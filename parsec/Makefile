ifndef PARSEC_DIR
$(error PARSEC_DIR variable is not defined, aborting build)
endif

CC         = mpic++

CFLAGS     = -g -O0 -g3 -std=c++11 -D_GNU_SOURCE
LDFLAGS    = -m64 -std=c++11 -Wall  -g -O0 -g3 -D_GNU_SOURCE

#PARSEC_DIR = /home/wwu12/parsec-master/install
#DPLASMA_DIR = $(PARSEC_DIR)
#PLASMA_DIR = /sw/plasma/2.8.0g

# Include directories
INC        = -I$(PARSEC_DIR)/include -I$(PARSEC_DIR)/include/parsec -I../core
INC_EXT    = 

# Location of the libraries.
LIB        = -Wl,-rpath,$(PARSEC_DIR)/lib $(PARSEC_DIR)/lib/libparsec.so
LIB_EXT    = -lpthread -lm -latomic

INC := $(INC) $(INC_EXT)
LIB := $(LIB) $(LIB_EXT)

CFLAGS += $(INC)

TARGET = main
all: $(TARGET)
	
.PRECIOUS: %.cc %.o
	
core.o: ../core/core.cc ../core/core.h
	$(CC) -c $(CFLAGS) $<

common.o: common.cc common.h
	$(CC) -c $(CFLAGS) $<

main.o: main.cc ../core/timer.h
	$(CC) -c $(CFLAGS) $<
	
main: main.o common.o core.o
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean
