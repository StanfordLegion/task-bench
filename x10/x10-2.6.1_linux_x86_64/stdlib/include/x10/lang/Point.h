#ifndef __X10_LANG_POINT_H
#define __X10_LANG_POINT_H

#include <x10rt.h>


#define X10_LANG_FUN_0_1_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#undef X10_LANG_FUN_0_1_H_NODEPS
#define X10_UTIL_ORDERED_H_NODEPS
#include <x10/util/Ordered.h>
#undef X10_UTIL_ORDERED_H_NODEPS
#define X10_LANG_COMPARABLE_H_NODEPS
#include <x10/lang/Comparable.h>
#undef X10_LANG_COMPARABLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class Point_Strings {
  public:
    static ::x10::lang::String sl__165247;
    static ::x10::lang::String sl__165245;
    static ::x10::lang::String sl__165249;
    static ::x10::lang::String sl__165250;
    static ::x10::lang::String sl__165251;
    static ::x10::lang::String sl__165248;
    static ::x10::lang::String sl__165246;
};

class Point : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(rank);
    
    static ::x10aux::itable_entry _itables[5];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Fun_0_1<x10_long, x10_long>::itable< ::x10::lang::Point > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::lang::Point > _itable_1;
    
    static ::x10::util::Ordered< ::x10::lang::Point* >::itable< ::x10::lang::Point > _itable_2;
    
    static ::x10::lang::Comparable< ::x10::lang::Point* >::itable< ::x10::lang::Point > _itable_3;
    
    x10_long FMGL(c0);
    
    x10_long FMGL(c1);
    
    x10_long FMGL(c2);
    
    x10_long FMGL(c3);
    
    ::x10::lang::Rail< x10_long >* FMGL(cs);
    
    void _constructor(::x10::lang::Rail< x10_long >* coords);
    
    static ::x10::lang::Point* _make(::x10::lang::Rail< x10_long >* coords);
    
    void _constructor(x10_long i0);
    
    static ::x10::lang::Point* _make(x10_long i0);
    
    void _constructor(x10_long i0, x10_long i1);
    
    static ::x10::lang::Point* _make(x10_long i0, x10_long i1);
    
    void _constructor(x10_long i0, x10_long i1, x10_long i2);
    
    static ::x10::lang::Point* _make(x10_long i0, x10_long i1, x10_long i2);
    
    void _constructor(x10_long i0, x10_long i1, x10_long i2, x10_long i3);
    
    static ::x10::lang::Point* _make(x10_long i0, x10_long i1, x10_long i2,
                                     x10_long i3);
    
    virtual x10_long __apply(x10_long i);
    virtual ::x10::lang::Fun_0_1<x10_long, x10_long>* coords();
    static ::x10::lang::Point* make(::x10::lang::Rail< x10_int >* r);
    static ::x10::lang::Point* make(::x10::lang::Rail< x10_long >* r);
    static ::x10::lang::Point* make(x10_long rank, ::x10::lang::Fun_0_1<x10_long, x10_long>* init);
    static ::x10::lang::Point* make(x10_int i0);
    static ::x10::lang::Point* make(x10_int i0, x10_int i1);
    static ::x10::lang::Point* make(x10_int i0, x10_int i1, x10_int i2);
    static ::x10::lang::Point* make(x10_int i0, x10_int i1, x10_int i2, x10_int i3);
    static ::x10::lang::Point* make(x10_long i0);
    static ::x10::lang::Point* make(x10_long i0, x10_long i1);
    static ::x10::lang::Point* make(x10_long i0, x10_long i1, x10_long i2);
    static ::x10::lang::Point* make(x10_long i0, x10_long i1, x10_long i2,
                                    x10_long i3);
    static ::x10::lang::Point* __implicit_convert(::x10::lang::Rail< x10_long >* r);
    static ::x10::lang::Point* __implicit_convert(::x10::lang::Rail< x10_int >* r);
    virtual ::x10::lang::Point* __plus();
    virtual ::x10::lang::Point* __minus();
    virtual ::x10::lang::Point* __plus(::x10::lang::Point* that);
    virtual ::x10::lang::Point* __minus(::x10::lang::Point* that);
    virtual ::x10::lang::Point* __times(::x10::lang::Point* that);
    virtual ::x10::lang::Point* __over(::x10::lang::Point* that);
    virtual ::x10::lang::Point* __plus(x10_long c);
    virtual ::x10::lang::Point* __minus(x10_long c);
    virtual ::x10::lang::Point* __times(x10_long c);
    virtual ::x10::lang::Point* __over(x10_long c);
    virtual ::x10::lang::Point* __inv_plus(x10_long c);
    virtual ::x10::lang::Point* __inv_minus(x10_long c);
    virtual ::x10::lang::Point* __inv_times(x10_long c);
    virtual ::x10::lang::Point* __inv_over(x10_long c);
    virtual x10_int compareTo(::x10::lang::Point* that);
    virtual x10_int hashCode();
    virtual x10_boolean equals(::x10::lang::Any* other);
    virtual x10_boolean __lt(::x10::lang::Point* that);
    virtual x10_boolean __gt(::x10::lang::Point* that);
    virtual x10_boolean __le(::x10::lang::Point* that);
    virtual x10_boolean __ge(::x10::lang::Point* that);
    virtual ::x10::lang::String* toString();
    virtual ::x10::lang::Point* x10__lang__Point____this__x10__lang__Point(
      );
    virtual void __fieldInitializers_x10_lang_Point();
    
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
#endif // X10_LANG_POINT_H

namespace x10 { namespace lang { 
class Point;
} } 

#ifndef X10_LANG_POINT_H_NODEPS
#define X10_LANG_POINT_H_NODEPS
#ifndef X10_LANG_POINT_H_GENERICS
#define X10_LANG_POINT_H_GENERICS
#endif // X10_LANG_POINT_H_GENERICS
#endif // __X10_LANG_POINT_H_NODEPS
