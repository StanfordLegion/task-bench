#ifndef __X10_GLB_GLBPARAMETERS_H
#define __X10_GLB_GLBPARAMETERS_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace glb { 

class GLBParameters_Strings {
  public:
    static ::x10::lang::String sl__164367;
    static ::x10::lang::String sl__164365;
    static ::x10::lang::String sl__164366;
    static ::x10::lang::String sl__164364;
    static ::x10::lang::String sl__164368;
    static ::x10::lang::String sl__164362;
    static ::x10::lang::String sl__164363;
};

class GLBParameters   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::glb::GLBParameters* operator->() { return this; }
    
    x10_int FMGL(n);
    
    x10_int FMGL(w);
    
    x10_int FMGL(l);
    
    x10_int FMGL(z);
    
    x10_int FMGL(m);
    
    x10_int FMGL(v);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::glb::GLBParameters > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::glb::GLBParameters _alloc(){::x10::glb::GLBParameters t; return t; }
    
    static x10_int computeZ(x10_long p, x10_int l);
    /* Static field: FMGL(Default) */
    static ::x10::glb::GLBParameters FMGL(Default);
    static void FMGL(Default__do_init)();
    static void FMGL(Default__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(Default__status);
    static ::x10::lang::CheckedThrowable* FMGL(Default__exception);
    static ::x10::glb::GLBParameters FMGL(Default__get)();
    
    /* Static field: FMGL(SHOW_RESULT_FLAG) */
    static const x10_int FMGL(SHOW_RESULT_FLAG) = 1;
    static x10_int FMGL(SHOW_RESULT_FLAG__get)();
    
    /* Static field: FMGL(SHOW_TIMING_FLAG) */
    static const x10_int FMGL(SHOW_TIMING_FLAG) = 2;
    static x10_int FMGL(SHOW_TIMING_FLAG__get)();
    
    /* Static field: FMGL(SHOW_TASKFRAME_LOG_FLAG) */
    static const x10_int FMGL(SHOW_TASKFRAME_LOG_FLAG) = 4;
    static x10_int FMGL(SHOW_TASKFRAME_LOG_FLAG__get)();
    
    /* Static field: FMGL(SHOW_GLB_FLAG) */
    static const x10_int FMGL(SHOW_GLB_FLAG) = 8;
    static x10_int FMGL(SHOW_GLB_FLAG__get)();
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::glb::GLBParameters other) {
        return ((((((::x10aux::struct_equals((*this)->FMGL(n), other->FMGL(n))) &&
        (::x10aux::struct_equals((*this)->FMGL(w), other->FMGL(w)))) &&
        (::x10aux::struct_equals((*this)->FMGL(l), other->FMGL(l)))) &&
        (::x10aux::struct_equals((*this)->FMGL(z), other->FMGL(z)))) &&
        (::x10aux::struct_equals((*this)->FMGL(m), other->FMGL(m)))) &&
        (::x10aux::struct_equals((*this)->FMGL(v), other->FMGL(v))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::glb::GLBParameters other) {
        return ((((((::x10aux::struct_equals((*this)->FMGL(n), other->FMGL(n))) &&
        (::x10aux::struct_equals((*this)->FMGL(w), other->FMGL(w)))) &&
        (::x10aux::struct_equals((*this)->FMGL(l), other->FMGL(l)))) &&
        (::x10aux::struct_equals((*this)->FMGL(z), other->FMGL(z)))) &&
        (::x10aux::struct_equals((*this)->FMGL(m), other->FMGL(m)))) &&
        (::x10aux::struct_equals((*this)->FMGL(v), other->FMGL(v))));
        
    }
    ::x10::glb::GLBParameters x10__glb__GLBParameters____this__x10__glb__GLBParameters(
      ) {
        return (*this);
        
    }
    void _constructor(x10_int n, x10_int w, x10_int l, x10_int z,
                      x10_int m, x10_int v) {
        FMGL(n) = n;
        FMGL(w) = w;
        FMGL(l) = l;
        FMGL(z) = z;
        FMGL(m) = m;
        FMGL(v) = v;
        
    }
    static ::x10::glb::GLBParameters _make(x10_int n, x10_int w,
                                           x10_int l, x10_int z,
                                           x10_int m, x10_int v)
    {
        ::x10::glb::GLBParameters this_; 
        this_->_constructor(n, w, l, z, m, v);
        return this_;
    }
    
    void __fieldInitializers_x10_glb_GLBParameters() {
     
    }
    
    static void _serialize(::x10::glb::GLBParameters this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::glb::GLBParameters _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::glb::GLBParameters this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_GLB_GLBPARAMETERS_H

namespace x10 { namespace glb { 
class GLBParameters;
} } 

#ifndef X10_GLB_GLBPARAMETERS_H_NODEPS
#define X10_GLB_GLBPARAMETERS_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Place.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_GLB_GLBPARAMETERS_H_GENERICS
#define X10_GLB_GLBPARAMETERS_H_GENERICS
inline ::x10::glb::GLBParameters x10::glb::GLBParameters::FMGL(Default__get)() {
    if (FMGL(Default__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(Default__init)();
    }
    return x10::glb::GLBParameters::FMGL(Default);
}

inline x10_int x10::glb::GLBParameters::FMGL(SHOW_RESULT_FLAG__get)() {
    return x10::glb::GLBParameters::FMGL(SHOW_RESULT_FLAG);
}

inline x10_int x10::glb::GLBParameters::FMGL(SHOW_TIMING_FLAG__get)() {
    return x10::glb::GLBParameters::FMGL(SHOW_TIMING_FLAG);
}

inline x10_int x10::glb::GLBParameters::FMGL(SHOW_TASKFRAME_LOG_FLAG__get)() {
    return x10::glb::GLBParameters::FMGL(SHOW_TASKFRAME_LOG_FLAG);
}

inline x10_int x10::glb::GLBParameters::FMGL(SHOW_GLB_FLAG__get)() {
    return x10::glb::GLBParameters::FMGL(SHOW_GLB_FLAG);
}

#endif // X10_GLB_GLBPARAMETERS_H_GENERICS
#endif // __X10_GLB_GLBPARAMETERS_H_NODEPS
