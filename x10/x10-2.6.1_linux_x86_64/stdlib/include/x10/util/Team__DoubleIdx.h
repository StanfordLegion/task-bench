#ifndef __X10_UTIL_TEAM__DOUBLEIDX_H
#define __X10_UTIL_TEAM__DOUBLEIDX_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
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

namespace x10 { namespace util { 

class Team__DoubleIdx_Strings {
  public:
    static ::x10::lang::String sl__171361;
    static ::x10::lang::String sl__171362;
    static ::x10::lang::String sl__171360;
};

class Team__DoubleIdx   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::util::Team__DoubleIdx* operator->() { return this; }
    
    x10_double FMGL(value);
    
    x10_int FMGL(idx);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::util::Team__DoubleIdx > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::util::Team__DoubleIdx _alloc(){::x10::util::Team__DoubleIdx t; return t; }
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::util::Team__DoubleIdx other) {
        return ((::x10aux::struct_equals((*this)->FMGL(value), other->FMGL(value))) &&
        (::x10aux::struct_equals((*this)->FMGL(idx), other->FMGL(idx))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::util::Team__DoubleIdx other) {
        return ((::x10aux::struct_equals((*this)->FMGL(value), other->FMGL(value))) &&
        (::x10aux::struct_equals((*this)->FMGL(idx), other->FMGL(idx))));
        
    }
    ::x10::util::Team__DoubleIdx x10__util__Team__DoubleIdx____this__x10__util__Team__DoubleIdx(
      ) {
        return (*this);
        
    }
    void _constructor(x10_double value, x10_int idx) {
        FMGL(value) = value;
        FMGL(idx) = idx;
        
    }
    static ::x10::util::Team__DoubleIdx _make(x10_double value,
                                              x10_int idx)
    {
        ::x10::util::Team__DoubleIdx this_; 
        this_->_constructor(value, idx);
        return this_;
    }
    
    void __fieldInitializers_x10_util_Team_DoubleIdx() {
     
    }
    
    static void _serialize(::x10::util::Team__DoubleIdx this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::util::Team__DoubleIdx _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::util::Team__DoubleIdx this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_UTIL_TEAM__DOUBLEIDX_H

namespace x10 { namespace util { 
class Team__DoubleIdx;
} } 

#ifndef X10_UTIL_TEAM__DOUBLEIDX_H_NODEPS
#define X10_UTIL_TEAM__DOUBLEIDX_H_NODEPS
#ifndef X10_UTIL_TEAM__DOUBLEIDX_H_GENERICS
#define X10_UTIL_TEAM__DOUBLEIDX_H_GENERICS
#endif // X10_UTIL_TEAM__DOUBLEIDX_H_GENERICS
#endif // __X10_UTIL_TEAM__DOUBLEIDX_H_NODEPS
