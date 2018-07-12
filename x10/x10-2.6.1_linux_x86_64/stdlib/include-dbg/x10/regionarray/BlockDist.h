#ifndef __X10_REGIONARRAY_BLOCKDIST_H
#define __X10_REGIONARRAY_BLOCKDIST_H

#include <x10rt.h>


#define X10_REGIONARRAY_DIST_H_NODEPS
#include <x10/regionarray/Dist.h>
#undef X10_REGIONARRAY_DIST_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace regionarray { 
class RectRegion;
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
namespace x10 { namespace regionarray { 
class RectRegion1D;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace regionarray { 
class WrappedDistRegionRestricted;
} } 
namespace x10 { namespace regionarray { 
class WrappedDistPlaceRestricted;
} } 
namespace x10 { namespace regionarray { 
class BlockDistGhostManager;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class BlockDist_Strings {
  public:
    static ::x10::lang::String sl__155956;
};

class BlockDist : public ::x10::regionarray::Dist   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Place>::itable< ::x10::regionarray::BlockDist > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::BlockDist > _itable_1;
    
    static ::x10::lang::Iterable< ::x10::lang::Point*>::itable< ::x10::regionarray::BlockDist > _itable_2;
    
    ::x10::lang::PlaceGroup* FMGL(pg);
    
    x10_long FMGL(axis);
    
    ::x10::regionarray::Region* FMGL(regionForHere);
    
    void _constructor(::x10::regionarray::Region* r, x10_long axis, ::x10::lang::PlaceGroup* pg);
    
    static ::x10::regionarray::BlockDist* _make(::x10::regionarray::Region* r,
                                                x10_long axis, ::x10::lang::PlaceGroup* pg);
    
    ::x10::regionarray::Region* blockRegionForPlace(::x10::lang::Place place);
    ::x10::lang::Place mapIndexToPlace(x10_long index);
    virtual ::x10::lang::PlaceGroup* places();
    virtual x10_long numPlaces();
    virtual ::x10::lang::Iterable< ::x10::regionarray::Region*>* regions(
      );
    virtual ::x10::regionarray::Region* get(::x10::lang::Place p);
    virtual x10_boolean containsLocally(::x10::lang::Point* p);
    virtual ::x10::regionarray::Region* __apply(::x10::lang::Place p);
    virtual ::x10::lang::Place __apply(::x10::lang::Point* pt);
    virtual ::x10::lang::Place __apply(x10_long i0);
    virtual ::x10::lang::Place __apply(x10_long i0, x10_long i1);
    virtual ::x10::lang::Place __apply(x10_long i0, x10_long i1, x10_long i2);
    virtual ::x10::lang::Place __apply(x10_long i0, x10_long i1, x10_long i2,
                                       x10_long i3);
    virtual ::x10::regionarray::Dist* restriction(::x10::regionarray::Region* r);
    virtual ::x10::regionarray::Dist* restriction(::x10::lang::Place p);
    virtual ::x10::regionarray::GhostManager* getLocalGhostManager(x10_long ghostWidth,
                                                                   x10_boolean periodic);
    virtual x10_boolean equals(::x10::lang::Any* thatObj);
    virtual ::x10::regionarray::BlockDist* x10__regionarray__BlockDist____this__x10__regionarray__BlockDist(
      );
    virtual void __fieldInitializers_x10_regionarray_BlockDist(
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
#endif // X10_REGIONARRAY_BLOCKDIST_H

namespace x10 { namespace regionarray { 
class BlockDist;
} } 

#ifndef X10_REGIONARRAY_BLOCKDIST_H_NODEPS
#define X10_REGIONARRAY_BLOCKDIST_H_NODEPS
#ifndef X10_REGIONARRAY_BLOCKDIST_H_GENERICS
#define X10_REGIONARRAY_BLOCKDIST_H_GENERICS
#endif // X10_REGIONARRAY_BLOCKDIST_H_GENERICS
#endif // __X10_REGIONARRAY_BLOCKDIST_H_NODEPS
