#ifndef __X10_LANG_PLACETOPOLOGY_H
#define __X10_LANG_PLACETOPOLOGY_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class PlaceTopology__FlatPlaceTopology;
} } 
namespace x10 { namespace lang { 
class PlaceTopology__OneLevelPlaceTopology;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class PlaceTopology : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10::lang::PlaceTopology* getTopology();
    virtual x10_long numPrimaryPlaces() = 0;
    virtual x10_long numChildrenPlaces() = 0;
    virtual x10_boolean isPrimary(::x10::lang::Place p) = 0;
    virtual x10_boolean isCUDA(::x10::lang::Place p) = 0;
    virtual ::x10::lang::Place getParent(::x10::lang::Place p) = 0;
    virtual x10_long numChildren(::x10::lang::Place p) = 0;
    virtual ::x10::lang::Iterable< ::x10::lang::Place>* children(::x10::lang::Place p) = 0;
    virtual ::x10::lang::Place getChild(::x10::lang::Place p, x10_long c) = 0;
    virtual x10_long childIndex(::x10::lang::Place c) = 0;
    virtual ::x10::lang::PlaceTopology* x10__lang__PlaceTopology____this__x10__lang__PlaceTopology(
      );
    void _constructor();
    
    virtual void __fieldInitializers_x10_lang_PlaceTopology();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_LANG_PLACETOPOLOGY_H

namespace x10 { namespace lang { 
class PlaceTopology;
} } 

#ifndef X10_LANG_PLACETOPOLOGY_H_NODEPS
#define X10_LANG_PLACETOPOLOGY_H_NODEPS
#ifndef X10_LANG_PLACETOPOLOGY_H_GENERICS
#define X10_LANG_PLACETOPOLOGY_H_GENERICS
#endif // X10_LANG_PLACETOPOLOGY_H_GENERICS
#endif // __X10_LANG_PLACETOPOLOGY_H_NODEPS
