#ifndef __X10_REGIONARRAY_GHOSTMANAGER__GHOSTNEIGHBORFLAG_H
#define __X10_REGIONARRAY_GHOSTMANAGER__GHOSTNEIGHBORFLAG_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class GhostManager__GhostNeighborFlag : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Place FMGL(place);
    
    ::x10::lang::Point* FMGL(shift);
    
    x10_boolean FMGL(received);
    
    virtual ::x10::regionarray::GhostManager__GhostNeighborFlag* x10__regionarray__GhostManager__GhostNeighborFlag____this__x10__regionarray__GhostManager__GhostNeighborFlag(
      );
    void _constructor(::x10::lang::Place place, ::x10::lang::Point* shift);
    
    static ::x10::regionarray::GhostManager__GhostNeighborFlag* _make(
             ::x10::lang::Place place, ::x10::lang::Point* shift);
    
    virtual void __fieldInitializers_x10_regionarray_GhostManager_GhostNeighborFlag(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_REGIONARRAY_GHOSTMANAGER__GHOSTNEIGHBORFLAG_H

namespace x10 { namespace regionarray { 
class GhostManager__GhostNeighborFlag;
} } 

#ifndef X10_REGIONARRAY_GHOSTMANAGER__GHOSTNEIGHBORFLAG_H_NODEPS
#define X10_REGIONARRAY_GHOSTMANAGER__GHOSTNEIGHBORFLAG_H_NODEPS
#ifndef X10_REGIONARRAY_GHOSTMANAGER__GHOSTNEIGHBORFLAG_H_GENERICS
#define X10_REGIONARRAY_GHOSTMANAGER__GHOSTNEIGHBORFLAG_H_GENERICS
#endif // X10_REGIONARRAY_GHOSTMANAGER__GHOSTNEIGHBORFLAG_H_GENERICS
#endif // __X10_REGIONARRAY_GHOSTMANAGER__GHOSTNEIGHBORFLAG_H_NODEPS
