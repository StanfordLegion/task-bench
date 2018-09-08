#ifndef __X10_LANG_INTRANGE__INTRANGEIT_H
#define __X10_LANG_INTRANGE__INTRANGEIT_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class IntRange__IntRangeIt : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterator<x10_int>::itable< ::x10::lang::IntRange__IntRangeIt > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::lang::IntRange__IntRangeIt > _itable_1;
    
    x10_int FMGL(cur);
    
    x10_int FMGL(max);
    
    void _constructor(x10_int min, x10_int max);
    
    static ::x10::lang::IntRange__IntRangeIt* _make(x10_int min, x10_int max);
    
    virtual x10_boolean hasNext();
    virtual x10_int next();
    virtual ::x10::lang::IntRange__IntRangeIt* x10__lang__IntRange__IntRangeIt____this__x10__lang__IntRange__IntRangeIt(
      );
    virtual void __fieldInitializers_x10_lang_IntRange_IntRangeIt(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_LANG_INTRANGE__INTRANGEIT_H

namespace x10 { namespace lang { 
class IntRange__IntRangeIt;
} } 

#ifndef X10_LANG_INTRANGE__INTRANGEIT_H_NODEPS
#define X10_LANG_INTRANGE__INTRANGEIT_H_NODEPS
#ifndef X10_LANG_INTRANGE__INTRANGEIT_H_GENERICS
#define X10_LANG_INTRANGE__INTRANGEIT_H_GENERICS
#endif // X10_LANG_INTRANGE__INTRANGEIT_H_GENERICS
#endif // __X10_LANG_INTRANGE__INTRANGEIT_H_NODEPS
