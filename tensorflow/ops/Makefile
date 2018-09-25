LIBS=no_input.so one_input.so two_input.so three_input.so four_input.so five_input.so

CXX ?= g++

DEBUG ?= 0

CXXFLAGS ?=
CXXFLAGS += -std=c++11 -I../../core -I. -fPIC

LDFLAGS ?=
LDFLAGS += -L../../core -lcore_s

ifeq ($(strip $(DEBUG)),0)
	CXXFLAGS += -O3
else
	CXXFLAGS += -O0 -ggdb
endif

.PHONY: all
all: $(LIBS)

$(LIBS): %.so: %.cc
	$(CXX) -shared $< -o $@ $(CXXFLAGS) $(TF_CFLAGS) $(LDFLAGS) $(TF_LFLAGS)

.PHONY: clean
clean:
	rm -f $(LIBS)
