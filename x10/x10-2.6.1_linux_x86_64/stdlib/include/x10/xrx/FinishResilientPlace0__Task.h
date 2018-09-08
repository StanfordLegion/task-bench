#ifndef __X10_XRX_FINISHRESILIENTPLACE0__TASK_H
#define __X10_XRX_FINISHRESILIENTPLACE0__TASK_H

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

namespace x10 { namespace xrx { 

class FinishResilientPlace0__Task_Strings {
  public:
    static ::x10::lang::String sl__171691;
    static ::x10::lang::String sl__171690;
    static ::x10::lang::String sl__171692;
    static ::x10::lang::String sl__171689;
    static ::x10::lang::String sl__171693;
};

class FinishResilientPlace0__Task   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::xrx::FinishResilientPlace0__Task* operator->() { return this; }
    
    x10_int FMGL(place);
    
    x10_int FMGL(kind);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::xrx::FinishResilientPlace0__Task > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::xrx::FinishResilientPlace0__Task _alloc(){::x10::xrx::FinishResilientPlace0__Task t; return t; }
    
    ::x10::lang::String* toString();
    void _constructor(x10_long place, x10_int kind);
    
    static ::x10::xrx::FinishResilientPlace0__Task _make(x10_long place, x10_int kind);
    
    ::x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::xrx::FinishResilientPlace0__Task other) {
        return ((::x10aux::struct_equals((*this)->FMGL(place), other->FMGL(place))) &&
        (::x10aux::struct_equals((*this)->FMGL(kind), other->FMGL(kind))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::xrx::FinishResilientPlace0__Task other) {
        return ((::x10aux::struct_equals((*this)->FMGL(place), other->FMGL(place))) &&
        (::x10aux::struct_equals((*this)->FMGL(kind), other->FMGL(kind))));
        
    }
    ::x10::xrx::FinishResilientPlace0__Task x10__xrx__FinishResilientPlace0__Task____this__x10__xrx__FinishResilientPlace0__Task(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_x10_xrx_FinishResilientPlace0_Task(
      ) {
     
    }
    
    static void _serialize(::x10::xrx::FinishResilientPlace0__Task this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::xrx::FinishResilientPlace0__Task _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::xrx::FinishResilientPlace0__Task this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_XRX_FINISHRESILIENTPLACE0__TASK_H

namespace x10 { namespace xrx { 
class FinishResilientPlace0__Task;
} } 

#ifndef X10_XRX_FINISHRESILIENTPLACE0__TASK_H_NODEPS
#define X10_XRX_FINISHRESILIENTPLACE0__TASK_H_NODEPS
#ifndef X10_XRX_FINISHRESILIENTPLACE0__TASK_H_GENERICS
#define X10_XRX_FINISHRESILIENTPLACE0__TASK_H_GENERICS
#endif // X10_XRX_FINISHRESILIENTPLACE0__TASK_H_GENERICS
#endif // __X10_XRX_FINISHRESILIENTPLACE0__TASK_H_NODEPS
