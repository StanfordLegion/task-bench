#ifndef __X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP_H
#define __X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP_H

#include <x10rt.h>


#define X10_LANG_PLACEGROUP_H_NODEPS
#include <x10/lang/PlaceGroup.h>
#undef X10_LANG_PLACEGROUP_H_NODEPS
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
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class PlaceGroup__SimplePlaceGroup__Anonymous__6956;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace io { 
class Serializer;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace compiler { 
class Pragma;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace io { 
class Deserializer;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class PlaceGroup__SimplePlaceGroup : public ::x10::lang::PlaceGroup   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::x10::lang::PlaceGroup::contains;
    using ::x10::lang::PlaceGroup::indexOf;
    using ::x10::lang::PlaceGroup::broadcastFlat;
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterable< ::x10::lang::Place>::itable< ::x10::lang::PlaceGroup__SimplePlaceGroup > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::lang::PlaceGroup__SimplePlaceGroup > _itable_1;
    
    x10_long FMGL(numPlaces);
    
    void _constructor(x10_long numPlaces);
    
    static ::x10::lang::PlaceGroup__SimplePlaceGroup* _make(x10_long numPlaces);
    
    virtual ::x10::lang::Place __apply(x10_long i);
    virtual x10_long numPlaces();
    virtual x10_boolean contains(x10_long id);
    virtual x10_long indexOf(x10_long id);
    virtual ::x10::lang::Iterator< ::x10::lang::Place>* iterator();
    virtual x10_boolean equals(::x10::lang::Any* thatObj);
    virtual x10_int hashCode();
    virtual void broadcastFlat(::x10::lang::VoidFun_0_0* cl);
    virtual ::x10::lang::PlaceGroup__SimplePlaceGroup* x10__lang__PlaceGroup__SimplePlaceGroup____this__x10__lang__PlaceGroup__SimplePlaceGroup(
      );
    virtual void __fieldInitializers_x10_lang_PlaceGroup_SimplePlaceGroup(
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
#endif // X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP_H

namespace x10 { namespace lang { 
class PlaceGroup__SimplePlaceGroup;
} } 

#ifndef X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP_H_NODEPS
#define X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP_H_NODEPS
#ifndef X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP_H_GENERICS
#define X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP_H_GENERICS
#endif // X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP_H_GENERICS
#endif // __X10_LANG_PLACEGROUP__SIMPLEPLACEGROUP_H_NODEPS
