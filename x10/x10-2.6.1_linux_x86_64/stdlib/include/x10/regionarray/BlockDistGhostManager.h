#ifndef __X10_REGIONARRAY_BLOCKDISTGHOSTMANAGER_H
#define __X10_REGIONARRAY_BLOCKDISTGHOSTMANAGER_H

#include <x10rt.h>


#define X10_REGIONARRAY_GHOSTMANAGER_H_NODEPS
#include <x10/regionarray/GhostManager.h>
#undef X10_REGIONARRAY_GHOSTMANAGER_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace regionarray { 
class BlockDist;
} } 
namespace x10 { namespace regionarray { 
class GhostManager__GhostNeighborFlag;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class BadPlaceException;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace regionarray { 
class Ghostable;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class BlockDistGhostManager_Strings {
  public:
    static ::x10::lang::String sl__166155;
    static ::x10::lang::String sl__166156;
    static ::x10::lang::String sl__166157;
};

class BlockDistGhostManager : public ::x10::regionarray::GhostManager   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::regionarray::BlockDist* FMGL(bd);
    
    ::x10::regionarray::GhostManager__GhostNeighborFlag* FMGL(leftNeighbor);
    
    ::x10::regionarray::GhostManager__GhostNeighborFlag* FMGL(rightNeighbor);
    
    x10_boolean FMGL(periodic);
    
    void _constructor(x10_long ghostWidth, ::x10::regionarray::BlockDist* bd,
                      x10_boolean periodic);
    
    static ::x10::regionarray::BlockDistGhostManager* _make(x10_long ghostWidth,
                                                            ::x10::regionarray::BlockDist* bd,
                                                            x10_boolean periodic);
    
    virtual ::x10::lang::Rail< ::x10::lang::Place >* getNeighbors(
      );
    virtual ::x10::regionarray::Region* getGhostRegion(::x10::lang::Place place);
    virtual x10_long getInverseNeighborIndex(x10_long neighborIndex);
    virtual void setNeighborReceived(::x10::lang::Place place, ::x10::lang::Point* shift);
    virtual x10_boolean allNeighborsReceived();
    virtual void resetNeighborsReceived();
    void setAllNeighborsReceived();
    virtual void sendGhosts(::x10::regionarray::Ghostable* array);
    virtual ::x10::regionarray::BlockDistGhostManager* x10__regionarray__BlockDistGhostManager____this__x10__regionarray__BlockDistGhostManager(
      );
    virtual void __fieldInitializers_x10_regionarray_BlockDistGhostManager(
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
#endif // X10_REGIONARRAY_BLOCKDISTGHOSTMANAGER_H

namespace x10 { namespace regionarray { 
class BlockDistGhostManager;
} } 

#ifndef X10_REGIONARRAY_BLOCKDISTGHOSTMANAGER_H_NODEPS
#define X10_REGIONARRAY_BLOCKDISTGHOSTMANAGER_H_NODEPS
#ifndef X10_REGIONARRAY_BLOCKDISTGHOSTMANAGER_H_GENERICS
#define X10_REGIONARRAY_BLOCKDISTGHOSTMANAGER_H_GENERICS
#endif // X10_REGIONARRAY_BLOCKDISTGHOSTMANAGER_H_GENERICS
#endif // __X10_REGIONARRAY_BLOCKDISTGHOSTMANAGER_H_NODEPS
