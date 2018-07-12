#ifndef __X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP__ANONYMOUS__6956_H
#define __X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP__ANONYMOUS__6956_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
namespace x10 { namespace lang { 
class Place;
} } 
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class PlaceGroup__SimplePlaceGroup;
} } 

namespace x10 { namespace lang { 

class PlaceGroup__SimplePlaceGroup__Anonymous__6956 : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterator< ::x10::lang::Place>::itable< ::x10::lang::PlaceGroup__SimplePlaceGroup__Anonymous__6956 > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::lang::PlaceGroup__SimplePlaceGroup__Anonymous__6956 > _itable_1;
    
    ::x10::lang::PlaceGroup__SimplePlaceGroup* FMGL(out__);
    
    x10_long FMGL(i);
    
    virtual x10_boolean hasNext();
    virtual ::x10::lang::Place next();
    void _constructor(::x10::lang::PlaceGroup__SimplePlaceGroup* out__);
    
    static ::x10::lang::PlaceGroup__SimplePlaceGroup__Anonymous__6956* _make(
             ::x10::lang::PlaceGroup__SimplePlaceGroup* out__);
    
    
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
#endif // X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP__ANONYMOUS__6956_H

namespace x10 { namespace lang { 
class PlaceGroup__SimplePlaceGroup__Anonymous__6956;
} } 

#ifndef X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP__ANONYMOUS__6956_H_NODEPS
#define X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP__ANONYMOUS__6956_H_NODEPS
#ifndef X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP__ANONYMOUS__6956_H_GENERICS
#define X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP__ANONYMOUS__6956_H_GENERICS
#endif // X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP__ANONYMOUS__6956_H_GENERICS
#endif // __X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP__ANONYMOUS__6956_H_NODEPS
