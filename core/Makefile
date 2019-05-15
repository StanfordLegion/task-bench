SLIB=libcore.a
DLIB=libcore.so
OBJS=core.o core_c.o core_kernel.o timer.o
COBJS=core_random.o siphash.o
HEADERS=core.h core_c.h core_kernel.h core_random.h timer.h

CUDA_SLIB=libcore_cuda.a
CUDA_DLIB=libcore_cuda.so
CUDA_OBJS=cuda_kernel.o
CUDA_HEADERS=cuda_kernel.h

# Second name for library that can be used to exclusively statically link.
SLIB_SYMLINK=libcore_s.a
CUDA_SLIB_SYMLINK=libcore_cuda_s.a

DEBUG ?= 0

CFLAGS ?=
CFLAGS += -std=c11 -fPIC

CXXFLAGS ?=
CXXFLAGS += -std=c++11 -fPIC

NVCCFLAGS ?=
NVCCFLAGS += -std=c++11  --compiler-options '-fPIC' -DENABLE_CUDA

ifeq ($(strip $(DEBUG)),0)
	CFLAGS += -O3
	CXXFLAGS += -O3
	NVCCFLAGS += -O3
else
	CFLAGS += -O0 -ggdb -DDEBUG_CORE
	CXXFLAGS += -O0 -ggdb -DDEBUG_CORE
	NVCCFLAGS += -O0 -g
endif

#check AVX support
ifeq ($(strip $(shell uname)),Darwin)
HAVE_AVX2 ?= $(sysctl -a | grep machdep.cpu.features | grep " FMA " | wc -l)
HAVE_AVX ?= $(sysctl -a | grep machdep.cpu.features | grep " AVX1.0 " | wc -l)
else
HAVE_AVX2 ?= $(shell grep " avx2 " /proc/cpuinfo | wc -l)
HAVE_AVX ?= $(shell grep " avx " /proc/cpuinfo | wc -l)
endif
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

ifeq ($(strip $(HAVE_CUDA)),1)
	CFLAGS += -DENABLE_CUDA
	CXXFLAGS += -DENABLE_CUDA
endif

LDFLAGS ?=
NVCCLDFLAGS ?=

ifeq ($(shell uname), Darwin)
	LDFLAGS += -dynamiclib -single_module -undefined dynamic_lookup -fPIC
	NVCCLDFLAGS += -dynamiclib -single_module -undefined dynamic_lookup -fPIC
else
	LDFLAGS += -shared
	NVCCLDFLAGS += -shared
endif

ifeq ($(shell uname), Darwin)
	LDFLAGS += -L. -Wl,-force_load,libcore.a
	NVCCLDFLAGS += -L. -Wl,-force_load,libcore_cuda.a
else
	LDFLAGS += -L. -Wl,--whole-archive -lcore -Wl,--no-whole-archive
	NVCCLDFLAGS += -L. -Wl,--whole-archive -lcore_cuda -Wl,--no-whole-archive
endif

include make_blas.mk

.PHONY: all
ifeq ($(strip $(HAVE_CUDA)),1)
all: $(SLIB) $(DLIB) $(SLIB_SYMLINK) $(CUDA_SLIB) $(CUDA_DLIB) $(CUDA_SLIB_SYMLINK)
else
all: $(SLIB) $(DLIB) $(SLIB_SYMLINK)
endif

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

ifeq ($(strip $(HAVE_CUDA)),1)	
$(CUDA_SLIB): $(CUDA_OBJS)
	rm -f $@
	$(AR) rc $@ $^

$(CUDA_DLIB): $(CUDA_SLIB)
	rm -f $@
	$(CXX) $(NVCCLDFLAGS) -o $@.0
	mv $@.0 $@

$(CUDA_SLIB_SYMLINK):
	ln -sf $(CUDA_SLIB) $@

$(CUDA_OBJS) : %.o : %.cu $(CUDA_HEADERS)
	nvcc $(NVCCFLAGS) -c -o $@ $<
endif

.PHONY: clean
ifeq ($(strip $(HAVE_CUDA)),1)
clean:
	rm -f $(OBJS) $(COBJS) $(SLIB) $(DLIB) $(CUDA_OBJS) $(CUDA_SLIB) $(CUDA_DLIB)
else
clean:
	rm -f $(OBJS) $(COBJS) $(SLIB) $(DLIB)
endif