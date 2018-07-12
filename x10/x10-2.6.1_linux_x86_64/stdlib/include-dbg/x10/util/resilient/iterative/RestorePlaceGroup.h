#ifndef __X10_UTIL_RESILIENT_ITERATIVE_RESTOREPLACEGROUP_H
#define __X10_UTIL_RESILIENT_ITERATIVE_RESTOREPLACEGROUP_H

#include <x10rt.h>


#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace iterative { 

class RestorePlaceGroup : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::PlaceGroup* FMGL(newGroup);
    
    ::x10::util::ArrayList< ::x10::lang::Place>* FMGL(newAddedPlaces);
    
    void _constructor(::x10::lang::PlaceGroup* g, ::x10::util::ArrayList< ::x10::lang::Place>* n);
    
    static ::x10::util::resilient::iterative::RestorePlaceGroup* _make(::x10::lang::PlaceGroup* g,
                                                                       ::x10::util::ArrayList< ::x10::lang::Place>* n);
    
    virtual ::x10::util::resilient::iterative::RestorePlaceGroup*
      x10__util__resilient__iterative__RestorePlaceGroup____this__x10__util__resilient__iterative__RestorePlaceGroup(
      );
    virtual void __fieldInitializers_x10_util_resilient_iterative_RestorePlaceGroup(
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


} } } } 
#endif // X10_UTIL_RESILIENT_ITERATIVE_RESTOREPLACEGROUP_H

namespace x10 { namespace util { namespace resilient { namespace iterative { 
class RestorePlaceGroup;
} } } } 

#ifndef X10_UTIL_RESILIENT_ITERATIVE_RESTOREPLACEGROUP_H_NODEPS
#define X10_UTIL_RESILIENT_ITERATIVE_RESTOREPLACEGROUP_H_NODEPS
#ifndef X10_UTIL_RESILIENT_ITERATIVE_RESTOREPLACEGROUP_H_GENERICS
#define X10_UTIL_RESILIENT_ITERATIVE_RESTOREPLACEGROUP_H_GENERICS
#endif // X10_UTIL_RESILIENT_ITERATIVE_RESTOREPLACEGROUP_H_GENERICS
#endif // __X10_UTIL_RESILIENT_ITERATIVE_RESTOREPLACEGROUP_H_NODEPS
