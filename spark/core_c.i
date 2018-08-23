%module core_c
%{
#include "../../../core/core_c.h" /* assumes running swig in swig dir */
%}

%include "../../../spark/myTypemaps.i" /* argc, argv, and input_ptr are mapped in myTypemaps */
%apply char* NOCOPYBYTE { char *output_ptr};
%apply size_t* LONG { size_t* input_bytes}; 

%include "../../../core/core_c.h"

