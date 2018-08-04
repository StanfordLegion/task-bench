DEBUG			 = 0

CC         = mpic++

CFLAGS     = -std=c++11
LDFLAGS    = -m64 -std=c++11 -Wall

ifeq ($(strip $(DEBUG)),1)
CFLAGS		 += -g -O0
LDFLAGS		 += -g -O0
else
CFLAGS		 += -O3
LDFLAGS		 += -O3
endif

# Include directories
INC        = -I../core
INC_EXT    =  

# Location of the libraries.
LIB        = 
LIB_EXT    = 

INC := $(INC) $(INC_EXT)
LIB := $(LIB) $(LIB_EXT)

CFLAGS += $(INC)

TARGET = main
all: $(TARGET)

.PRECIOUS: %.cc %.o

core.o: ../core/core.cc ../core/core.h ../core/core_kernel.h
	$(CC) -c $(CFLAGS) $<

core_kernel.o: ../core/core_kernel.cc ../core/core_kernel.h
	$(CC) -c $(CFLAGS) $<

main.o: main.cc ../core/timer.h
	$(CC) -c $(CFLAGS) $<

main: main.o core.o core_kernel.o
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean