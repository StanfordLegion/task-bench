#ifndef __X10_REGIONARRAY_ARRAY__LAYOUTHELPER_H
#define __X10_REGIONARRAY_ARRAY__LAYOUTHELPER_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace regionarray { 
class Region;
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

namespace x10 { namespace regionarray { 

class Array__LayoutHelper_Strings {
  public:
    static ::x10::lang::String sl__165976;
    static ::x10::lang::String sl__165974;
    static ::x10::lang::String sl__165975;
    static ::x10::lang::String sl__165978;
    static ::x10::lang::String sl__165973;
    static ::x10::lang::String sl__165977;
};

class Array__LayoutHelper   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::regionarray::Array__LayoutHelper* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::regionarray::Array__LayoutHelper > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::regionarray::Array__LayoutHelper _alloc(){::x10::regionarray::Array__LayoutHelper t; return t; }
    
    x10_long FMGL(min0);
    
    x10_long FMGL(stride1);
    
    x10_long FMGL(min1);
    
    x10_long FMGL(size);
    
    ::x10::lang::Rail< x10_long >* FMGL(layout);
    
    void _constructor(::x10::regionarray::Region* reg);
    
    static ::x10::regionarray::Array__LayoutHelper _make(::x10::regionarray::Region* reg);
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::regionarray::Array__LayoutHelper other) {
        return (((((::x10aux::struct_equals((*this)->FMGL(min0), other->FMGL(min0))) &&
        (::x10aux::struct_equals((*this)->FMGL(stride1), other->FMGL(stride1)))) &&
        (::x10aux::struct_equals((*this)->FMGL(min1), other->FMGL(min1)))) &&
        (::x10aux::struct_equals((*this)->FMGL(size), other->FMGL(size)))) &&
        (::x10aux::struct_equals((*this)->FMGL(layout), other->FMGL(layout))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::regionarray::Array__LayoutHelper other) {
        return (((((::x10aux::struct_equals((*this)->FMGL(min0),
                                            other->FMGL(min0))) &&
        (::x10aux::struct_equals((*this)->FMGL(stride1), other->FMGL(stride1)))) &&
        (::x10aux::struct_equals((*this)->FMGL(min1), other->FMGL(min1)))) &&
        (::x10aux::struct_equals((*this)->FMGL(size), other->FMGL(size)))) &&
        (::x10aux::struct_equals((*this)->FMGL(layout), other->FMGL(layout))));
        
    }
    ::x10::regionarray::Array__LayoutHelper x10__regionarray__Array__LayoutHelper____this__x10__regionarray__Array__LayoutHelper(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_x10_regionarray_Array_LayoutHelper(
      ) {
     
    }
    
    static void _serialize(::x10::regionarray::Array__LayoutHelper this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::regionarray::Array__LayoutHelper _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::regionarray::Array__LayoutHelper this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_REGIONARRAY_ARRAY__LAYOUTHELPER_H

namespace x10 { namespace regionarray { 
class Array__LayoutHelper;
} } 

#ifndef X10_REGIONARRAY_ARRAY__LAYOUTHELPER_H_NODEPS
#define X10_REGIONARRAY_ARRAY__LAYOUTHELPER_H_NODEPS
#ifndef X10_REGIONARRAY_ARRAY__LAYOUTHELPER_H_GENERICS
#define X10_REGIONARRAY_ARRAY__LAYOUTHELPER_H_GENERICS
#endif // X10_REGIONARRAY_ARRAY__LAYOUTHELPER_H_GENERICS
#endif // __X10_REGIONARRAY_ARRAY__LAYOUTHELPER_H_NODEPS
