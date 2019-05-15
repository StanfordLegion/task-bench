HAVE_CUDA ?= 0

ifeq ($(strip $(HAVE_CUDA)),1)
ifndef CUDA_ROOT
$(error CUDA_ROOT variable is not defined, aborting build)
endif
CUDA_SLIB=libcore_cuda.a
CUDA_DLIB=libcore_cuda.so
CUDA_OBJS=cuda_kernel.o
CUDA_HEADERS=cuda_kernel.h
CUDA_SLIB_SYMLINK=libcore_cuda_s.a

NVCC			?= $(CUDA_ROOT)/bin/nvcc
NVCCFLAGS ?=
NVCCFLAGS += -std=c++11  --compiler-options '-fPIC' -DENABLE_CUDA
CFLAGS    += -DENABLE_CUDA
CXXFLAGS  += -DENABLE_CUDA
NVCCLDFLAGS ?=

ifeq ($(strip $(DEBUG)),0)
	NVCCFLAGS += -O3
else
	NVCCFLAGS += -O0 -g
endif

ifeq ($(shell uname), Darwin)
	NVCCLDFLAGS += -dynamiclib -single_module -undefined dynamic_lookup -fPIC
else
	NVCCLDFLAGS += -shared
endif

ifeq ($(shell uname), Darwin)
	NVCCLDFLAGS += -L. -Wl,-force_load,libcore_cuda.a
else
	NVCCLDFLAGS += -L. -Wl,--whole-archive -lcore_cuda -Wl,--no-whole-archive
endif


endif
