HAVE_CUDA ?= 0

ifeq ($(strip $(HAVE_CUDA)),1)
ifndef CUDA_ROOT
$(error CUDA_ROOT variable is not defined, aborting build)
endif

CFLAGS    += -DENABLE_CUDA
CXXFLAGS  += -DENABLE_CUDA
LDFLAGS 	+= -L../core -lcore_cuda_s -L$(CUDA_ROOT)/lib64


endif
