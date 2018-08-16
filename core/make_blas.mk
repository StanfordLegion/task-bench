ENABLE_BLAS ?= 0

ifeq ($(strip $(ENABLE_BLAS)),1)
ifndef MKLROOT
$(error MKLROOT variable is not defined, aborting build)
endif
CFLAGS		+= -DMKL_ILP64 -m64 -I${MKLROOT}/include -DUSE_BLAS_KERNEL
LDFLAGS		+= -L${MKLROOT}/lib/intel64 -Wl,--no-as-needed -lmkl_intel_ilp64 -lmkl_sequential -lmkl_core -lpthread -lm -ldl
CXXFLAGS	+= -DMKL_ILP64 -m64 -I${MKLROOT}/include -DUSE_BLAS_KERNEL
CC_FLAGS	+= -DMKL_ILP64 -m64 -I${MKLROOT}/include -DUSE_BLAS_KERNEL
LD_FLAGS	+= -L${MKLROOT}/lib/intel64 -Wl,--no-as-needed -lmkl_intel_ilp64 -lmkl_sequential -lmkl_core -lpthread -lm -ldl
endif
