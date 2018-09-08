#ifndef __X10_REGIONARRAY_RECTREGION1D_H
#define __X10_REGIONARRAY_RECTREGION1D_H

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
class FailedDynamicCheckException;
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
namespace x10 { namespace regionarray { 
class RectRegion;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace regionarray { 
class RectRegion1D__RRIterator;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class RectRegion1D_Strings {
  public:
    static ::x10::lang::String sl__156776;
    static ::x10::lang::String sl__156769;
    static ::x10::lang::String sl__156772;
    static ::x10::lang::String sl__156770;
    static ::x10::lang::String sl__156773;
    static ::x10::lang::String sl__156771;
    static ::x10::lang::String sl__156775;
    static ::x10::lang::String sl__156777;
    static ::x10::lang::String sl__156774;
};

class RectRegion1D : public ::x10::regionarray::Region   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::x10::regionarray::Region::contains;
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterable< ::x10::lang::Point*>::itable< ::x10::regionarray::RectRegion1D > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::RectRegion1D > _itable_1;
    
    x10_long FMGL(size);
    
    x10_long FMGL(min);
    
    x10_long FMGL(max);
    
    void _constructor(x10_long minArg, x10_long maxArg);
    
    static ::x10::regionarray::RectRegion1D* _make(x10_long minArg, x10_long maxArg);
    
    void _constructor(x10_long maxArg);
    
    static ::x10::regionarray::RectRegion1D* _make(x10_long maxArg);
    
    virtual x10_long size();
    virtual x10_boolean isConvex();
    virtual x10_boolean isEmpty();
    virtual x10_long indexOf(::x10::lang::Point* pt);
    virtual x10_long indexOf(x10_long i0);
    virtual x10_long indexOf(x10_long i0, x10_long i1);
    virtual x10_long indexOf(x10_long i0, x10_long i1, x10_long i2);
    virtual x10_long indexOf(x10_long i0, x10_long i1, x10_long i2, x10_long i3);
    virtual x10_long min(x10_long i);
    virtual x10_long max(x10_long i);
    virtual ::x10::regionarray::Region* computeBoundingBox();
    virtual ::x10::regionarray::RectRegion* toRectRegion();
    virtual ::x10::lang::Fun_0_1<x10_long, x10_long>* min();
    virtual ::x10::lang::Fun_0_1<x10_long, x10_long>* max();
    virtual x10_boolean contains(::x10::regionarray::Region* that);
    virtual x10_boolean contains(::x10::lang::Point* p);
    virtual x10_boolean contains(x10_long i0);
    x10_boolean containsInternal(x10_long i0);
    virtual ::x10::regionarray::Region* toPolyRegion();
    virtual ::x10::regionarray::Region* intersection(::x10::regionarray::Region* that);
    virtual ::x10::regionarray::Region* product(::x10::regionarray::Region* that);
    virtual ::x10::regionarray::Region* translate(::x10::lang::Point* v);
    virtual ::x10::regionarray::Region* projection(x10_long axis);
    virtual ::x10::regionarray::Region* eliminate(x10_long axis);
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator();
    virtual ::x10::lang::String* toString();
    virtual ::x10::regionarray::RectRegion1D* x10__regionarray__RectRegion1D____this__x10__regionarray__RectRegion1D(
      );
    virtual void __fieldInitializers_x10_regionarray_RectRegion1D(
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
#endif // X10_REGIONARRAY_RECTREGION1D_H

namespace x10 { namespace regionarray { 
class RectRegion1D;
} } 

#ifndef X10_REGIONARRAY_RECTREGION1D_H_NODEPS
#define X10_REGIONARRAY_RECTREGION1D_H_NODEPS
#ifndef X10_REGIONARRAY_RECTREGION1D_H_GENERICS
#define X10_REGIONARRAY_RECTREGION1D_H_GENERICS
#endif // X10_REGIONARRAY_RECTREGION1D_H_GENERICS
#endif // __X10_REGIONARRAY_RECTREGION1D_H_NODEPS
