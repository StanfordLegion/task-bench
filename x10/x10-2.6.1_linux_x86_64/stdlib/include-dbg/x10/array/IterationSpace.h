#ifndef __X10_ARRAY_ITERATIONSPACE_H
#define __X10_ARRAY_ITERATIONSPACE_H

#include <x10rt.h>


#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
namespace x10 { namespace lang { 
class Point;
} } 
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace lang { 
class IntRange;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_1;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class IterationSpace_Strings {
  public:
    static ::x10::lang::String sl__154201;
    static ::x10::lang::String sl__154200;
    static ::x10::lang::String sl__154203;
    static ::x10::lang::String sl__154202;
};

class IterationSpace : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(rank);
    
    x10_boolean FMGL(rect);
    
    void _constructor(x10_long rank, x10_boolean rect);
    
    static ::x10::array::IterationSpace* __implicit_convert(::x10::lang::IntRange r);
    static ::x10::array::IterationSpace* __implicit_convert(::x10::lang::LongRange r);
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator() = 0;
    virtual x10_long min(x10_long i) = 0;
    virtual x10_long max(x10_long i) = 0;
    virtual x10_boolean isEmpty() = 0;
    virtual x10_long size() = 0;
    virtual ::x10::lang::String* toString();
    virtual ::x10::array::IterationSpace* x10__array__IterationSpace____this__x10__array__IterationSpace(
      );
    virtual void __fieldInitializers_x10_array_IterationSpace();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_ARRAY_ITERATIONSPACE_H

namespace x10 { namespace array { 
class IterationSpace;
} } 

#ifndef X10_ARRAY_ITERATIONSPACE_H_NODEPS
#define X10_ARRAY_ITERATIONSPACE_H_NODEPS
#ifndef X10_ARRAY_ITERATIONSPACE_H_GENERICS
#define X10_ARRAY_ITERATIONSPACE_H_GENERICS
#endif // X10_ARRAY_ITERATIONSPACE_H_GENERICS
#endif // __X10_ARRAY_ITERATIONSPACE_H_NODEPS
