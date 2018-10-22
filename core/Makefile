SLIB=libcore.a
DLIB=libcore.so
OBJS=core.o core_c.o core_kernel.o murmur_hash3.o timer.o
COBJS=core_random.o
HEADERS=core.h core_c.h core_kernel.h core_random.h murmur_hash3.h timer.h

# Second name for library that can be used to exclusively statically link.
SLIB_SYMLINK=libcore_s.a

DEBUG ?= 0

CFLAGS ?=
CFLAGS += -std=c11 -fPIC

CXXFLAGS ?=
CXXFLAGS += -std=c++11 -fPIC

ifeq ($(strip $(DEBUG)),0)
	CFLAGS += -O3
	CXXFLAGS += -O3
else
	CFLAGS += -O0 -ggdb -DDEBUG_CORE
	CXXFLAGS += -O0 -ggdb -DDEBUG_CORE
endif

#check AVX support
HAVE_AVX2 ?= $(shell grep " avx2 " /proc/cpuinfo | wc -l)
HAVE_AVX ?= $(shell grep " avx " /proc/cpuinfo | wc -l)
ifneq ($(strip $(HAVE_AVX2)),0)
	HAVE_AVX2 = 1
endif
ifneq ($(strip $(HAVE_AVX)),0)
  HAVE_AVX = 1
endif
ifeq ($(strip $(HAVE_AVX2)),1)
	CFLAGS += -mavx2 -mfma
	CXXFLAGS += -mavx2 -mfma
else ifeq ($(strip $(HAVE_AVX)),1)
	CFLAGS += -mavx
	CXXFLAGS += -mavx
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

include make_blas.mk

.PHONY: all
all: $(SLIB) $(DLIB) $(SLIB_SYMLINK)

$(SLIB): $(OBJS) $(COBJS)
	rm -f $@
	$(AR) rc $@ $^

$(DLIB): $(SLIB)
	rm -f $@
	$(CXX) $(LDFLAGS) -o $@.0
	mv $@.0 $@

$(SLIB_SYMLINK):
	ln -sf $(SLIB) $@

$(OBJS) : %.o : %.cc $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(COBJS) : %.o : %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(OBJS) $(COBJS) $(SLIB) $(DLIB)
