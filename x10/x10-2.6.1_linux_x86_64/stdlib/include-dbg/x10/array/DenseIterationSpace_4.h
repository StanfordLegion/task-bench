#ifndef __X10_ARRAY_DENSEITERATIONSPACE_4_H
#define __X10_ARRAY_DENSEITERATIONSPACE_4_H

#include <x10rt.h>


#define X10_ARRAY_ITERATIONSPACE_H_NODEPS
#include <x10/array/IterationSpace.h>
#undef X10_ARRAY_ITERATIONSPACE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_4__DIS4_It;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class DenseIterationSpace_4_Strings {
  public:
    static ::x10::lang::String sl__153811;
    static ::x10::lang::String sl__153809;
    static ::x10::lang::String sl__153810;
    static ::x10::lang::String sl__153812;
    static ::x10::lang::String sl__153813;
};

class DenseIterationSpace_4 : public ::x10::array::IterationSpace   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterable< ::x10::lang::Point*>::itable< ::x10::array::DenseIterationSpace_4 > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::array::DenseIterationSpace_4 > _itable_1;
    
    x10_long FMGL(min0);
    
    x10_long FMGL(min1);
    
    x10_long FMGL(min2);
    
    x10_long FMGL(min3);
    
    x10_long FMGL(max0);
    
    x10_long FMGL(max1);
    
    x10_long FMGL(max2);
    
    x10_long FMGL(max3);
    
    /* Static field: FMGL(EMPTY) */
    static ::x10::array::DenseIterationSpace_4* FMGL(EMPTY);
    static void FMGL(EMPTY__do_init)();
    static void FMGL(EMPTY__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(EMPTY__status);
    static ::x10::lang::CheckedThrowable* FMGL(EMPTY__exception);
    static ::x10::array::DenseIterationSpace_4* FMGL(EMPTY__get)();
    
    void _constructor(x10_long min0, x10_long min1, x10_long min2, x10_long min3,
                      x10_long max0, x10_long max1, x10_long max2,
                      x10_long max3);
    
    static ::x10::array::DenseIterationSpace_4* _make(x10_long min0,
                                                      x10_long min1,
                                                      x10_long min2,
                                                      x10_long min3,
                                                      x10_long max0,
                                                      x10_long max1,
                                                      x10_long max2,
                                                      x10_long max3);
    
    virtual x10_long min(x10_long i);
    virtual x10_long max(x10_long i);
    virtual x10_boolean isEmpty();
    virtual x10_long size();
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator(
      );
    virtual ::x10::lang::String* toString();
    virtual ::x10::array::DenseIterationSpace_4* x10__array__DenseIterationSpace_4____this__x10__array__DenseIterationSpace_4(
      );
    virtual void __fieldInitializers_x10_array_DenseIterationSpace_4(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_ARRAY_DENSEITERATIONSPACE_4_H

namespace x10 { namespace array { 
class DenseIterationSpace_4;
} } 

#ifndef X10_ARRAY_DENSEITERATIONSPACE_4_H_NODEPS
#define X10_ARRAY_DENSEITERATIONSPACE_4_H_NODEPS
#include <x10/array/IterationSpace.h>
#include <x10/lang/Long.h>
#include <x10/lang/IllegalOperationException.h>
#include <x10/lang/String.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Point.h>
#include <x10/array/DenseIterationSpace_4__DIS4_It.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_ARRAY_DENSEITERATIONSPACE_4_H_GENERICS
#define X10_ARRAY_DENSEITERATIONSPACE_4_H_GENERICS
inline ::x10::array::DenseIterationSpace_4* x10::array::DenseIterationSpace_4::FMGL(EMPTY__get)() {
    if (FMGL(EMPTY__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(EMPTY__init)();
    }
    return x10::array::DenseIterationSpace_4::FMGL(EMPTY);
}

#endif // X10_ARRAY_DENSEITERATIONSPACE_4_H_GENERICS
#endif // __X10_ARRAY_DENSEITERATIONSPACE_4_H_NODEPS
