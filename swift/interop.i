%module interop
%{
#include "interop.cc"
#include "../core/core_c.h"
%}

%include "interop.cc"
%include "../core/core_c.h"