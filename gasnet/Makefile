MPICXX ?= mpicxx

DEBUG ?= 0

CXXFLAGS ?=
CXXFLAGS += -std=c++11 -I../core
CXXFLAGS += $(shell PKG_CONFIG_PATH="$(GASNET)/lib/pkgconfig" pkg-config gasnet-$(CONDUIT)-seq --cflags)

LDFLAGS ?=
LDFLAGS += -L../core -lcore_s
LDFLAGS += $(shell PKG_CONFIG_PATH="$(GASNET)/lib/pkgconfig" pkg-config gasnet-$(CONDUIT)-seq --libs)

ifeq ($(strip $(DEBUG)),0)
	CXXFLAGS += -O3
else
	CXXFLAGS += -O0 -ggdb
endif

include ../core/make_blas.mk

BIN := seq

.PHONY: all
all:  $(BIN)

$(BIN): %:%.cc
	$(MPICXX) -o $@ $(CXXFLAGS) $< $(LDFLAGS)

.PHONY: clean
clean:
	rm -f *.o $(BIN)
