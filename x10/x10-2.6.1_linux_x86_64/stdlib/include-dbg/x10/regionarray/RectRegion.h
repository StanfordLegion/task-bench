#ifndef __X10_REGIONARRAY_RECTREGION_H
#define __X10_REGIONARRAY_RECTREGION_H

#include <x10rt.h>


#define X10_REGIONARRAY_REGION_H_NODEPS
#include <x10/regionarray/Region.h>
#undef X10_REGIONARRAY_REGION_H_NODEPS
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
class IllegalArgumentException;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace regionarray { 
class UnboundedRegionException;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace regionarray { 
class RectRegion1D;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace regionarray { 
class FullRegion;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace regionarray { 
class RectRegion__RRIterator;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class RectRegion_Strings {
  public:
    static ::x10::lang::String sl__156858;
    static ::x10::lang::String sl__156859;
    static ::x10::lang::String sl__156852;
    static ::x10::lang::String sl__156850;
    static ::x10::lang::String sl__156853;
    static ::x10::lang::String sl__156855;
    static ::x10::lang::String sl__156851;
    static ::x10::lang::String sl__156854;
    static ::x10::lang::String sl__156856;
    static ::x10::lang::String sl__156857;
    static ::x10::lang::String sl__156860;
    static ::x10::lang::String sl__156849;
};

class RectRegion : public ::x10::regionarray::Region   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterable< ::x10::lang::Point*>::itable< ::x10::regionarray::RectRegion > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::RectRegion > _itable_1;
    
    x10_long FMGL(size);
    
    ::x10::lang::Rail< x10_long >* FMGL(mins);
    
    ::x10::lang::Rail< x10_long >* FMGL(maxs);
    
    x10_long FMGL(min0);
    
    x10_long FMGL(min1);
    
    x10_long FMGL(min2);
    
    x10_long FMGL(min3);
    
    x10_long FMGL(max0);
    
    x10_long FMGL(max1);
    
    x10_long FMGL(max2);
    
    x10_long FMGL(max3);
    
    ::x10::regionarray::Region* FMGL(polyRep);
    
    static x10_boolean allZeros(::x10::lang::Rail< x10_long >* a);
    void _constructor(::x10::lang::Rail< x10_long >* minArg, ::x10::lang::Rail< x10_long >* maxArg);
    
    static ::x10::regionarray::RectRegion* _make(::x10::lang::Rail< x10_long >* minArg,
                                                 ::x10::lang::Rail< x10_long >* maxArg);
    
    void _constructor(x10_long min, x10_long max);
    
    static ::x10::regionarray::RectRegion* _make(x10_long min, x10_long max);
    
    virtual x10_long size();
    virtual x10_boolean isConvex();
    virtual x10_boolean isEmpty();
    virtual x10_long indexOf(::x10::lang::Point* pt);
    virtual x10_long indexOf(x10_long i0);
    virtual x10_long indexOf(x10_long i0, x10_long i1);
    virtual x10_long indexOf(x10_long i0, x10_long i1, x10_long i2);
    virtual x10_long indexOf(x10_long i0, x10_long i1, x10_long i2,
                             x10_long i3);
    virtual x10_long min(x10_long i);
    virtual x10_long max(x10_long i);
    virtual ::x10::regionarray::Region* computeBoundingBox();
    virtual ::x10::lang::Fun_0_1<x10_long, x10_long>* min();
    virtual ::x10::lang::Fun_0_1<x10_long, x10_long>* max();
    virtual x10_boolean contains(::x10::regionarray::Region* that);
    virtual x10_boolean contains(::x10::lang::Point* p);
    virtual x10_boolean contains(x10_long i0);
    virtual x10_boolean contains(x10_long i0, x10_long i1);
    virtual x10_boolean contains(x10_long i0, x10_long i1, x10_long i2);
    virtual x10_boolean contains(x10_long i0, x10_long i1, x10_long i2,
                                 x10_long i3);
    x10_boolean containsInternal(x10_long i0);
    x10_boolean containsInternal(x10_long i0, x10_long i1);
    x10_boolean containsInternal(x10_long i0, x10_long i1, x10_long i2);
    x10_boolean containsInternal(x10_long i0, x10_long i1, x10_long i2,
                                 x10_long i3);
    virtual ::x10::regionarray::Region* toPolyRegion();
    virtual ::x10::regionarray::Region* intersection(::x10::regionarray::Region* that);
    virtual ::x10::regionarray::Region* product(::x10::regionarray::Region* that);
    virtual ::x10::regionarray::Region* translate(::x10::lang::Point* v);
    virtual ::x10::regionarray::Region* projection(x10_long axis);
    virtual ::x10::regionarray::Region* eliminate(x10_long axis);
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator(
      );
    virtual x10_boolean equals(::x10::lang::Any* thatObj);
    virtual ::x10::lang::String* toString();
    virtual ::x10::regionarray::RectRegion* x10__regionarray__RectRegion____this__x10__regionarray__RectRegion(
      );
    virtual void __fieldInitializers_x10_regionarray_RectRegion(
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
#endif // X10_REGIONARRAY_RECTREGION_H

namespace x10 { namespace regionarray { 
class RectRegion;
} } 

#ifndef X10_REGIONARRAY_RECTREGION_H_NODEPS
#define X10_REGIONARRAY_RECTREGION_H_NODEPS
#ifndef X10_REGIONARRAY_RECTREGION_H_GENERICS
#define X10_REGIONARRAY_RECTREGION_H_GENERICS
#endif // X10_REGIONARRAY_RECTREGION_H_GENERICS
#endif // __X10_REGIONARRAY_RECTREGION_H_NODEPS
