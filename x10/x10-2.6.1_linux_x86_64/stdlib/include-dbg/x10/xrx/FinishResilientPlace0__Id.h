#ifndef __X10_XRX_FINISHRESILIENTPLACE0__ID_H
#define __X10_XRX_FINISHRESILIENTPLACE0__ID_H

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

class FinishResilientPlace0__Id_Strings {
  public:
    static ::x10::lang::String sl__161214;
    static ::x10::lang::String sl__161215;
    static ::x10::lang::String sl__161216;
};

class FinishResilientPlace0__Id   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::xrx::FinishResilientPlace0__Id* operator->() { return this; }
    
    x10_int FMGL(home);
    
    x10_int FMGL(id);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::xrx::FinishResilientPlace0__Id > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::xrx::FinishResilientPlace0__Id _alloc(){::x10::xrx::FinishResilientPlace0__Id t; return t; }
    
    ::x10::lang::String* toString();
    ::x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::xrx::FinishResilientPlace0__Id other) {
        return ((::x10aux::struct_equals((*this)->FMGL(home), other->FMGL(home))) &&
        (::x10aux::struct_equals((*this)->FMGL(id), other->FMGL(id))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::xrx::FinishResilientPlace0__Id other) {
        return ((::x10aux::struct_equals((*this)->FMGL(home), other->FMGL(home))) &&
        (::x10aux::struct_equals((*this)->FMGL(id), other->FMGL(id))));
        
    }
    ::x10::xrx::FinishResilientPlace0__Id x10__xrx__FinishResilientPlace0__Id____this__x10__xrx__FinishResilientPlace0__Id(
      ) {
        return (*this);
        
    }
    void _constructor(x10_int home, x10_int id) {
        FMGL(home) = home;
        FMGL(id) = id;
        (*this)->x10::xrx::FinishResilientPlace0__Id::__fieldInitializers_x10_xrx_FinishResilientPlace0_Id();
    }
    static ::x10::xrx::FinishResilientPlace0__Id _make(x10_int home,
                                                       x10_int id)
    {
        ::x10::xrx::FinishResilientPlace0__Id this_; 
        this_->_constructor(home, id);
        return this_;
    }
    
    void __fieldInitializers_x10_xrx_FinishResilientPlace0_Id(
      ) {
     
    }
    
    static void _serialize(::x10::xrx::FinishResilientPlace0__Id this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::xrx::FinishResilientPlace0__Id _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::xrx::FinishResilientPlace0__Id this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_XRX_FINISHRESILIENTPLACE0__ID_H

namespace x10 { namespace xrx { 
class FinishResilientPlace0__Id;
} } 

#ifndef X10_XRX_FINISHRESILIENTPLACE0__ID_H_NODEPS
#define X10_XRX_FINISHRESILIENTPLACE0__ID_H_NODEPS
#ifndef X10_XRX_FINISHRESILIENTPLACE0__ID_H_GENERICS
#define X10_XRX_FINISHRESILIENTPLACE0__ID_H_GENERICS
#endif // X10_XRX_FINISHRESILIENTPLACE0__ID_H_GENERICS
#endif // __X10_XRX_FINISHRESILIENTPLACE0__ID_H_NODEPS
