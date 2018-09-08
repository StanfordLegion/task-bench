#ifndef __X10_LANG_PLACETOPOLOGY__ONELEVELPLACETOPOLOGY_H
#define __X10_LANG_PLACETOPOLOGY__ONELEVELPLACETOPOLOGY_H

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
namespace x10 { namespace compiler { 
class Native;
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
class BadPlaceException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class PlaceTopology__OneLevelPlaceTopology_Strings {
  public:
    static ::x10::lang::String sl__155156;
    static ::x10::lang::String sl__155157;
};

class PlaceTopology__OneLevelPlaceTopology : public ::x10::lang::PlaceTopology
  {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(numPrimary);
    
    x10_long FMGL(numChild);
    
    void _constructor(x10_long np, x10_long nc);
    
    static ::x10::lang::PlaceTopology__OneLevelPlaceTopology* _make(x10_long np,
                                                                    x10_long nc);
    
    virtual x10_long numPrimaryPlaces();
    virtual x10_long numChildrenPlaces();
    virtual x10_boolean isPrimary(::x10::lang::Place p);
    virtual x10_boolean isCUDA(::x10::lang::Place p);
    virtual ::x10::lang::Place getParent(::x10::lang::Place p);
    virtual x10_long numChildren(::x10::lang::Place p);
    virtual ::x10::lang::Iterable< ::x10::lang::Place>* children(::x10::lang::Place p);
    virtual ::x10::lang::Place getChild(::x10::lang::Place p, x10_long c);
    virtual x10_long childIndex(::x10::lang::Place c);
    virtual ::x10::lang::PlaceTopology__OneLevelPlaceTopology* x10__lang__PlaceTopology__OneLevelPlaceTopology____this__x10__lang__PlaceTopology__OneLevelPlaceTopology(
      );
    virtual void __fieldInitializers_x10_lang_PlaceTopology_OneLevelPlaceTopology(
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
#endif // X10_LANG_PLACETOPOLOGY__ONELEVELPLACETOPOLOGY_H

namespace x10 { namespace lang { 
class PlaceTopology__OneLevelPlaceTopology;
} } 

#ifndef X10_LANG_PLACETOPOLOGY__ONELEVELPLACETOPOLOGY_H_NODEPS
#define X10_LANG_PLACETOPOLOGY__ONELEVELPLACETOPOLOGY_H_NODEPS
#ifndef X10_LANG_PLACETOPOLOGY__ONELEVELPLACETOPOLOGY_H_GENERICS
#define X10_LANG_PLACETOPOLOGY__ONELEVELPLACETOPOLOGY_H_GENERICS
#endif // X10_LANG_PLACETOPOLOGY__ONELEVELPLACETOPOLOGY_H_GENERICS
#endif // __X10_LANG_PLACETOPOLOGY__ONELEVELPLACETOPOLOGY_H_NODEPS
