SLIB=libcore.a
DLIB=libcore.0.so
OBJS=core.o core_c.o
HEADERS=core.h core_c.h timer.h

CXXFLAGS ?=
CXXFLAGS += -std=c++11 -fPIC

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
	$(CXX) $(LDFLAGS) -o $@

$(OBJS) : %.o : %.cc $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(OBJS) $(SLIB) $(DLIB)
