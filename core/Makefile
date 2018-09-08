SLIB=libcore.a
DLIB=libcore.so
OBJS=core.o core_c.o core_kernel.o
HEADERS=core.h core_c.h core_kernel.h timer.h

CXXFLAGS ?=
CXXFLAGS += -std=c++11 -fPIC
ifeq ($(strip $(DEBUG)),0)
	CXXFLAGS += -O3 -mavx
else
	CXXFLAGS += -O0 -ggdb -mavx
endif

LDFLAGS ?=

ifeq ($(shell uname), Darwin)
	LDFLAGS += -dynamiclib -single_module -undefined dynamic_lookup -fPIC
else
	LDFLAGS += -shared
endif

ifeq ($(shell uname), Darwin)
	LDFLAGS += -L. -Wl,-force_load,libcore.a
else
	LDFLAGS += -L. -Wl,--whole-archive -lcore -Wl,--no-whole-archive
endif


.PHONY: all
all: $(SLIB) $(DLIB)

$(SLIB): $(OBJS)
	rm -f $@
	$(AR) rc $@ $^

$(DLIB): $(SLIB)
	rm -f $@
	$(CXX) $(LDFLAGS) -o $@.0
	mv $@.0 $@

$(OBJS) : %.o : %.cc $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(OBJS) $(SLIB) $(DLIB)
