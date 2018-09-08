#ifndef __X10_REGIONARRAY_UNIQUEDIST_H
#define __X10_REGIONARRAY_UNIQUEDIST_H

#include <x10rt.h>


#define X10_REGIONARRAY_DIST_H_NODEPS
#include <x10/regionarray/Dist.h>
#undef X10_REGIONARRAY_DIST_H_NODEPS
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace regionarray { 
class WrappedDistRegionRestricted;
} } 
namespace x10 { namespace regionarray { 
class WrappedDistPlaceRestricted;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class UniqueDist_Strings {
  public:
    static ::x10::lang::String sl__157264;
    static ::x10::lang::String sl__157263;
    static ::x10::lang::String sl__157266;
    static ::x10::lang::String sl__157265;
    static ::x10::lang::String sl__157267;
};

class UniqueDist : public ::x10::regionarray::Dist   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Place>::itable< ::x10::regionarray::UniqueDist > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::UniqueDist > _itable_1;
    
    static ::x10::lang::Iterable< ::x10::lang::Point*>::itable< ::x10::regionarray::UniqueDist > _itable_2;
    
    ::x10::lang::PlaceGroup* FMGL(pg);
    
    ::x10::regionarray::Region* FMGL(regionForHere);
    
    void _constructor(::x10::lang::PlaceGroup* g);
    
    static ::x10::regionarray::UniqueDist* _make(::x10::lang::PlaceGroup* g);
    
    void _constructor();
    
    static ::x10::regionarray::UniqueDist* _make();
    
    virtual ::x10::lang::PlaceGroup* places();
    virtual x10_long numPlaces();
    virtual ::x10::lang::Iterable< ::x10::regionarray::Region*>* regions(
      );
    virtual ::x10::regionarray::Region* get(::x10::lang::Place p);
    virtual ::x10::regionarray::Region* __apply(::x10::lang::Place p);
    virtual ::x10::lang::Place __apply(::x10::lang::Point* pt);
    virtual ::x10::lang::Place __apply(x10_long i0);
    virtual ::x10::lang::Place __apply(x10_long i0, x10_long i1);
    virtual ::x10::lang::Place __apply(x10_long i0, x10_long i1, x10_long i2);
    virtual ::x10::lang::Place __apply(x10_long i0, x10_long i1, x10_long i2,
                                       x10_long i3);
    virtual ::x10::regionarray::Dist* restriction(::x10::regionarray::Region* r);
    virtual ::x10::regionarray::Dist* restriction(::x10::lang::Place p);
    virtual x10_boolean equals(::x10::lang::Any* thatObj);
    virtual ::x10::regionarray::UniqueDist* x10__regionarray__UniqueDist____this__x10__regionarray__UniqueDist(
      );
    virtual void __fieldInitializers_x10_regionarray_UniqueDist();
    
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
#endif // X10_REGIONARRAY_UNIQUEDIST_H

namespace x10 { namespace regionarray { 
class UniqueDist;
} } 

#ifndef X10_REGIONARRAY_UNIQUEDIST_H_NODEPS
#define X10_REGIONARRAY_UNIQUEDIST_H_NODEPS
#ifndef X10_REGIONARRAY_UNIQUEDIST_H_GENERICS
#define X10_REGIONARRAY_UNIQUEDIST_H_GENERICS
#endif // X10_REGIONARRAY_UNIQUEDIST_H_GENERICS
#endif // __X10_REGIONARRAY_UNIQUEDIST_H_NODEPS
