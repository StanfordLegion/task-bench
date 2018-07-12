#ifndef __X10_LANG_PLACETOPOLOGY__FLATPLACETOPOLOGY_H
#define __X10_LANG_PLACETOPOLOGY__FLATPLACETOPOLOGY_H

#include <x10rt.h>


#define X10_LANG_PLACETOPOLOGY_H_NODEPS
#include <x10/lang/PlaceTopology.h>
#undef X10_LANG_PLACETOPOLOGY_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
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
class BadPlaceException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class PlaceTopology__FlatPlaceTopology_Strings {
  public:
    static ::x10::lang::String sl__155141;
    static ::x10::lang::String sl__155142;
};

class PlaceTopology__FlatPlaceTopology : public ::x10::lang::PlaceTopology
  {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(numPlaces);
    
    void _constructor(x10_long np);
    
    static ::x10::lang::PlaceTopology__FlatPlaceTopology* _make(x10_long np);
    
    virtual x10_long numPrimaryPlaces();
    virtual x10_long numChildrenPlaces();
    virtual x10_boolean isPrimary(::x10::lang::Place p);
    virtual x10_boolean isCUDA(::x10::lang::Place p);
    virtual ::x10::lang::Place getParent(::x10::lang::Place p);
    virtual x10_long numChildren(::x10::lang::Place p);
    virtual ::x10::lang::Iterable< ::x10::lang::Place>* children(::x10::lang::Place p);
    virtual ::x10::lang::Place getChild(::x10::lang::Place p, x10_long c);
    virtual x10_long childIndex(::x10::lang::Place c);
    virtual ::x10::lang::PlaceTopology__FlatPlaceTopology* x10__lang__PlaceTopology__FlatPlaceTopology____this__x10__lang__PlaceTopology__FlatPlaceTopology(
      );
    virtual void __fieldInitializers_x10_lang_PlaceTopology_FlatPlaceTopology(
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
#endif // X10_LANG_PLACETOPOLOGY__FLATPLACETOPOLOGY_H

namespace x10 { namespace lang { 
class PlaceTopology__FlatPlaceTopology;
} } 

#ifndef X10_LANG_PLACETOPOLOGY__FLATPLACETOPOLOGY_H_NODEPS
#define X10_LANG_PLACETOPOLOGY__FLATPLACETOPOLOGY_H_NODEPS
#ifndef X10_LANG_PLACETOPOLOGY__FLATPLACETOPOLOGY_H_GENERICS
#define X10_LANG_PLACETOPOLOGY__FLATPLACETOPOLOGY_H_GENERICS
#endif // X10_LANG_PLACETOPOLOGY__FLATPLACETOPOLOGY_H_GENERICS
#endif // __X10_LANG_PLACETOPOLOGY__FLATPLACETOPOLOGY_H_NODEPS
