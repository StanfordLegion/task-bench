#ifndef __X10_REGIONARRAY_REGION_H
#define __X10_REGIONARRAY_REGION_H

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
namespace x10 { namespace regionarray { 
class EmptyRegion;
} } 
namespace x10 { namespace regionarray { 
class FullRegion;
} } 
namespace x10 { namespace regionarray { 
class PolyMatBuilder;
} } 
namespace x10 { namespace regionarray { 
class PolyRow;
} } 
namespace x10 { namespace regionarray { 
class MatBuilder;
} } 
namespace x10 { namespace regionarray { 
class Row;
} } 
namespace x10 { namespace regionarray { 
class PolyMat;
} } 
namespace x10 { namespace regionarray { 
class PolyRegion;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
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
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace regionarray { 
class RectRegion;
} } 
namespace x10 { namespace lang { 
class IntRange;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class Region_Strings {
  public:
    static ::x10::lang::String sl__157218;
    static ::x10::lang::String sl__157223;
    static ::x10::lang::String sl__157219;
    static ::x10::lang::String sl__157222;
    static ::x10::lang::String sl__157221;
    static ::x10::lang::String sl__157217;
    static ::x10::lang::String sl__157220;
    static ::x10::lang::String sl__157215;
    static ::x10::lang::String sl__157216;
};

class Region : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(rank);
    
    x10_boolean FMGL(rect);
    
    x10_boolean FMGL(zeroBased);
    
    x10_boolean FMGL(rail);
    
    x10_long rank();
    x10_boolean rect();
    x10_boolean zeroBased();
    x10_boolean rail();
    static ::x10::regionarray::Region* makeEmpty(x10_long rank);
    static ::x10::regionarray::Region* makeFull(x10_long rank);
    static ::x10::regionarray::Region* makeUnit();
    static ::x10::regionarray::Region* makeHalfspace(::x10::lang::Point* normal,
                                                     x10_long k);
    static ::x10::regionarray::Region* makeRectangularPoly(::x10::lang::Rail< x10_long >* minArg,
                                                           ::x10::lang::Rail< x10_long >* maxArg);
    static ::x10::regionarray::Region* makeRectangular(::x10::lang::Rail< x10_long >* minArg,
                                                       ::x10::lang::Rail< x10_long >* maxArg);
    static ::x10::regionarray::Region* makeRectangular(::x10::lang::Rail< ::x10::lang::IntRange >* ranges);
    static ::x10::regionarray::Region* make(::x10::lang::Rail< ::x10::lang::IntRange >* ranges);
    static ::x10::regionarray::Region* makeRectangular(::x10::lang::Rail< ::x10::lang::LongRange >* ranges);
    static ::x10::regionarray::Region* make(::x10::lang::Rail< ::x10::lang::LongRange >* ranges);
    static ::x10::regionarray::Region* make(::x10::lang::IntRange r);
    static ::x10::regionarray::Region* makeRectangular(::x10::lang::IntRange r);
    static ::x10::regionarray::Region* make(::x10::lang::LongRange r);
    static ::x10::regionarray::Region* makeRectangular(::x10::lang::LongRange r);
    static ::x10::regionarray::Region* makeRectangular(::x10::lang::IntRange r1,
                                                       ::x10::lang::IntRange r2);
    static ::x10::regionarray::Region* make(::x10::lang::IntRange r1,
                                            ::x10::lang::IntRange r2);
    static ::x10::regionarray::Region* makeRectangular(::x10::lang::LongRange r1,
                                                       ::x10::lang::LongRange r2);
    static ::x10::regionarray::Region* make(::x10::lang::LongRange r1,
                                            ::x10::lang::LongRange r2);
    static ::x10::regionarray::Region* makeRectangular(::x10::lang::IntRange r1,
                                                       ::x10::lang::IntRange r2,
                                                       ::x10::lang::IntRange r3);
    static ::x10::regionarray::Region* make(::x10::lang::IntRange r1,
                                            ::x10::lang::IntRange r2,
                                            ::x10::lang::IntRange r3);
    static ::x10::regionarray::Region* makeRectangular(::x10::lang::LongRange r1,
                                                       ::x10::lang::LongRange r2,
                                                       ::x10::lang::LongRange r3);
    static ::x10::regionarray::Region* make(::x10::lang::LongRange r1,
                                            ::x10::lang::LongRange r2,
                                            ::x10::lang::LongRange r3);
    static ::x10::regionarray::Region* makeRectangular(::x10::lang::IntRange r1,
                                                       ::x10::lang::IntRange r2,
                                                       ::x10::lang::IntRange r3,
                                                       ::x10::lang::IntRange r4);
    static ::x10::regionarray::Region* make(::x10::lang::IntRange r1,
                                            ::x10::lang::IntRange r2,
                                            ::x10::lang::IntRange r3,
                                            ::x10::lang::IntRange r4);
    static ::x10::regionarray::Region* makeRectangular(::x10::lang::LongRange r1,
                                                       ::x10::lang::LongRange r2,
                                                       ::x10::lang::LongRange r3,
                                                       ::x10::lang::LongRange r4);
    static ::x10::regionarray::Region* make(::x10::lang::LongRange r1,
                                            ::x10::lang::LongRange r2,
                                            ::x10::lang::LongRange r3,
                                            ::x10::lang::LongRange r4);
    static ::x10::regionarray::Region* makeRectangular(x10_long min,
                                                       x10_long max);
    static ::x10::regionarray::Region* make(x10_long min,
                                            x10_long max);
    static ::x10::regionarray::Region* makeBanded(x10_long size,
                                                  x10_long upper,
                                                  x10_long lower);
    static ::x10::regionarray::Region* makeBanded(x10_long size);
    static ::x10::regionarray::Region* makeUpperTriangular(
      x10_long size);
    static ::x10::regionarray::Region* makeUpperTriangular(
      x10_long rowMin, x10_long colMin, x10_long size);
    static ::x10::regionarray::Region* makeLowerTriangular(
      x10_long size);
    static ::x10::regionarray::Region* makeLowerTriangular(
      x10_long rowMin, x10_long colMin, x10_long size);
    virtual x10_long size() = 0;
    virtual x10_boolean isConvex() = 0;
    virtual x10_boolean isEmpty() = 0;
    virtual x10_long indexOf(::x10::lang::Point* p) = 0;
    virtual x10_long indexOf(x10_long i0);
    virtual x10_long indexOf(x10_long i0, x10_long i1);
    virtual x10_long indexOf(x10_long i0, x10_long i1, x10_long i2);
    virtual x10_long indexOf(x10_long i0, x10_long i1, x10_long i2,
                             x10_long i3);
    virtual ::x10::regionarray::Region* boundingBox();
    virtual ::x10::regionarray::Region* computeBoundingBox(
      ) = 0;
    virtual ::x10::lang::Fun_0_1<x10_long, x10_long>* min(
      ) = 0;
    virtual ::x10::lang::Fun_0_1<x10_long, x10_long>* max(
      ) = 0;
    virtual x10_long min(x10_long i);
    virtual x10_long max(x10_long i);
    virtual ::x10::lang::Point* minPoint();
    virtual ::x10::lang::Point* maxPoint();
    virtual ::x10::regionarray::Region* intersection(::x10::regionarray::Region* that) = 0;
    virtual x10_boolean disjoint(::x10::regionarray::Region* that);
    virtual ::x10::regionarray::Region* product(::x10::regionarray::Region* that) = 0;
    virtual ::x10::regionarray::Region* translate(::x10::lang::Point* v) = 0;
    virtual ::x10::regionarray::Region* projection(x10_long axis) = 0;
    virtual ::x10::regionarray::Region* eliminate(x10_long axis) = 0;
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator(
      ) = 0;
    virtual ::x10::regionarray::Region* __and(::x10::regionarray::Region* that);
    virtual ::x10::regionarray::Region* __times(::x10::regionarray::Region* that);
    virtual ::x10::regionarray::Region* __plus(::x10::lang::Point* v);
    virtual ::x10::regionarray::Region* __inv_plus(::x10::lang::Point* v);
    virtual ::x10::regionarray::Region* __minus(::x10::lang::Point* v);
    virtual x10_boolean equals(::x10::lang::Any* that);
    virtual x10_boolean contains(::x10::regionarray::Region* that) = 0;
    virtual x10_boolean contains(::x10::lang::Point* p) = 0;
    virtual x10_boolean contains(x10_long i);
    virtual x10_boolean contains(x10_long i0, x10_long i1);
    virtual x10_boolean contains(x10_long i0, x10_long i1,
                                 x10_long i2);
    virtual x10_boolean contains(x10_long i0, x10_long i1,
                                 x10_long i2, x10_long i3);
    void _constructor(x10_long r, x10_boolean t, x10_boolean z);
    
    void _constructor(x10_long r);
    
    virtual ::x10::regionarray::Dist* __arrow(::x10::lang::Place p);
    virtual ::x10::regionarray::Region* x10__regionarray__Region____this__x10__regionarray__Region(
      );
    virtual void __fieldInitializers_x10_regionarray_Region(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_REGIONARRAY_REGION_H

namespace x10 { namespace regionarray { 
class Region;
} } 

#ifndef X10_REGIONARRAY_REGION_H_NODEPS
#define X10_REGIONARRAY_REGION_H_NODEPS
#ifndef X10_REGIONARRAY_REGION_H_GENERICS
#define X10_REGIONARRAY_REGION_H_GENERICS
#endif // X10_REGIONARRAY_REGION_H_GENERICS
#endif // __X10_REGIONARRAY_REGION_H_NODEPS
