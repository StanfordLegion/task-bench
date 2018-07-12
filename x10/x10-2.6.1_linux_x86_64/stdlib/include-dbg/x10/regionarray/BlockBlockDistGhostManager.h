#ifndef __X10_REGIONARRAY_BLOCKBLOCKDISTGHOSTMANAGER_H
#define __X10_REGIONARRAY_BLOCKBLOCKDISTGHOSTMANAGER_H

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
class BlockBlockDist;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace regionarray { 
class GhostManager__GhostNeighborFlag;
} } 
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class BadPlaceException;
} } 
namespace x10 { namespace lang { 
class String;
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
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class BlockBlockDistGhostManager_Strings {
  public:
    static ::x10::lang::String sl__155790;
    static ::x10::lang::String sl__155794;
    static ::x10::lang::String sl__155789;
    static ::x10::lang::String sl__155791;
    static ::x10::lang::String sl__155792;
    static ::x10::lang::String sl__155793;
};

class BlockBlockDistGhostManager : public ::x10::regionarray::GhostManager
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::regionarray::BlockBlockDist* FMGL(bbd);
    
    ::x10::lang::Rail< ::x10::regionarray::GhostManager__GhostNeighborFlag* >*
      FMGL(neighbors);
    
    x10_boolean FMGL(periodic);
    
    void _constructor(x10_long ghostWidth, ::x10::regionarray::Dist* bbd,
                      x10_boolean periodic);
    
    static ::x10::regionarray::BlockBlockDistGhostManager* _make(x10_long ghostWidth,
                                                                 ::x10::regionarray::Dist* bbd,
                                                                 x10_boolean periodic);
    
    virtual ::x10::lang::Rail< ::x10::lang::Place >* getNeighbors(
      );
    ::x10::lang::Rail< ::x10::regionarray::GhostManager__GhostNeighborFlag* >*
      createNeighbors();
    virtual x10_long getInverseNeighborIndex(x10_long neighborIndex);
    virtual void setNeighborReceived(::x10::lang::Place place,
                                     ::x10::lang::Point* shift);
    virtual x10_boolean allNeighborsReceived();
    virtual void resetNeighborsReceived();
    void setAllNeighborsReceived();
    ::x10::lang::Point* getNeighborShift(x10_long neighborBlockIndex0,
                                         x10_long neighborBlockIndex1,
                                         x10_long divisions0,
                                         x10_long divisions1,
                                         x10_boolean periodic);
    ::x10::lang::Point* getShift(x10_long axis0Shift, x10_long axis1Shift);
    virtual void sendGhosts(::x10::regionarray::Ghostable* array);
    virtual ::x10::regionarray::Region* getGhostRegion(::x10::lang::Place place);
    static x10_long getGroupIndex(x10_long neighborBlockIndex0,
                                  x10_long neighborBlockIndex1,
                                  x10_long divisions0, x10_long divisions1,
                                  x10_long leftOver, x10_boolean periodic,
                                  x10_long groupIndexHere);
    virtual ::x10::regionarray::BlockBlockDistGhostManager*
      x10__regionarray__BlockBlockDistGhostManager____this__x10__regionarray__BlockBlockDistGhostManager(
      );
    virtual void __fieldInitializers_x10_regionarray_BlockBlockDistGhostManager(
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
#endif // X10_REGIONARRAY_BLOCKBLOCKDISTGHOSTMANAGER_H

namespace x10 { namespace regionarray { 
class BlockBlockDistGhostManager;
} } 

#ifndef X10_REGIONARRAY_BLOCKBLOCKDISTGHOSTMANAGER_H_NODEPS
#define X10_REGIONARRAY_BLOCKBLOCKDISTGHOSTMANAGER_H_NODEPS
#ifndef X10_REGIONARRAY_BLOCKBLOCKDISTGHOSTMANAGER_H_GENERICS
#define X10_REGIONARRAY_BLOCKBLOCKDISTGHOSTMANAGER_H_GENERICS
#endif // X10_REGIONARRAY_BLOCKBLOCKDISTGHOSTMANAGER_H_GENERICS
#endif // __X10_REGIONARRAY_BLOCKBLOCKDISTGHOSTMANAGER_H_NODEPS
