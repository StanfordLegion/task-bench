#ifndef __X10_ARRAY_DENSEITERATIONSPACE_1__DIS_1_IT_H
#define __X10_ARRAY_DENSEITERATIONSPACE_1__DIS_1_IT_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
namespace x10 { namespace lang { 
class Point;
} } 
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class DenseIterationSpace_1__DIS_1_It : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterator< ::x10::lang::Point*>::itable< ::x10::array::DenseIterationSpace_1__DIS_1_It > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::array::DenseIterationSpace_1__DIS_1_It > _itable_1;
    
    x10_long FMGL(cur);
    
    x10_long FMGL(last);
    
    void _constructor(x10_long min, x10_long max);
    
    static ::x10::array::DenseIterationSpace_1__DIS_1_It* _make(x10_long min,
                                                                x10_long max);
    
    virtual x10_boolean hasNext();
    virtual ::x10::lang::Point* next();
    virtual ::x10::array::DenseIterationSpace_1__DIS_1_It* x10__array__DenseIterationSpace_1__DIS_1_It____this__x10__array__DenseIterationSpace_1__DIS_1_It(
      );
    virtual void __fieldInitializers_x10_array_DenseIterationSpace_1_DIS_1_It(
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
#endif // X10_ARRAY_DENSEITERATIONSPACE_1__DIS_1_IT_H

namespace x10 { namespace array { 
class DenseIterationSpace_1__DIS_1_It;
} } 

#ifndef X10_ARRAY_DENSEITERATIONSPACE_1__DIS_1_IT_H_NODEPS
#define X10_ARRAY_DENSEITERATIONSPACE_1__DIS_1_IT_H_NODEPS
#ifndef X10_ARRAY_DENSEITERATIONSPACE_1__DIS_1_IT_H_GENERICS
#define X10_ARRAY_DENSEITERATIONSPACE_1__DIS_1_IT_H_GENERICS
#endif // X10_ARRAY_DENSEITERATIONSPACE_1__DIS_1_IT_H_GENERICS
#endif // __X10_ARRAY_DENSEITERATIONSPACE_1__DIS_1_IT_H_NODEPS
