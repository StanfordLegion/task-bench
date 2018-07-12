#ifndef __X10_REGIONARRAY_GHOSTMANAGER_H
#define __X10_REGIONARRAY_GHOSTMANAGER_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace regionarray { 
class Ghostable;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class GhostManager : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(ghostWidth);
    
    x10_byte FMGL(currentPhase);
    
    void _constructor(x10_long ghostWidth);
    
    virtual x10_byte currentPhase();
    virtual ::x10::lang::Rail< ::x10::lang::Place >* getNeighbors() = 0;
    virtual ::x10::regionarray::Region* getGhostRegion(::x10::lang::Place place) = 0;
    virtual void setNeighborReceived(::x10::lang::Place place, ::x10::lang::Point* shift) = 0;
    virtual x10_boolean allNeighborsReceived() = 0;
    virtual void resetNeighborsReceived() = 0;
    virtual void sendGhosts(::x10::regionarray::Ghostable* array) = 0;
    virtual void waitOnGhosts();
    virtual void prepareToSendGhosts();
    virtual ::x10::regionarray::GhostManager* x10__regionarray__GhostManager____this__x10__regionarray__GhostManager(
      );
    virtual void __fieldInitializers_x10_regionarray_GhostManager(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_REGIONARRAY_GHOSTMANAGER_H

namespace x10 { namespace regionarray { 
class GhostManager;
} } 

#ifndef X10_REGIONARRAY_GHOSTMANAGER_H_NODEPS
#define X10_REGIONARRAY_GHOSTMANAGER_H_NODEPS
#ifndef X10_REGIONARRAY_GHOSTMANAGER_H_GENERICS
#define X10_REGIONARRAY_GHOSTMANAGER_H_GENERICS
#endif // X10_REGIONARRAY_GHOSTMANAGER_H_GENERICS
#endif // __X10_REGIONARRAY_GHOSTMANAGER_H_NODEPS
