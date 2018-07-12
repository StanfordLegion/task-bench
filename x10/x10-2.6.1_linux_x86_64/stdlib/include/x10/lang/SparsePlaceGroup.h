#ifndef __X10_LANG_SPARSEPLACEGROUP_H
#define __X10_LANG_SPARSEPLACEGROUP_H

#include <x10rt.h>


#define X10_LANG_PLACEGROUP_H_NODEPS
#include <x10/lang/PlaceGroup.h>
#undef X10_LANG_PLACEGROUP_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class HashSet;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class MapSet;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class SparsePlaceGroup_Strings {
  public:
    static ::x10::lang::String sl__165662;
};

class SparsePlaceGroup : public ::x10::lang::PlaceGroup   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::x10::lang::PlaceGroup::contains;
    using ::x10::lang::PlaceGroup::indexOf;
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterable< ::x10::lang::Place>::itable< ::x10::lang::SparsePlaceGroup > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::lang::SparsePlaceGroup > _itable_1;
    
    ::x10::lang::Rail< ::x10::lang::Place >* FMGL(places);
    
    void _constructor(::x10::lang::Rail< ::x10::lang::Place >* ps);
    
    static ::x10::lang::SparsePlaceGroup* _make(::x10::lang::Rail< ::x10::lang::Place >* ps);
    
    void _constructor(::x10::lang::PlaceGroup* pg);
    
    static ::x10::lang::SparsePlaceGroup* _make(::x10::lang::PlaceGroup* pg);
    
    void _constructor(::x10::lang::Place p);
    
    static ::x10::lang::SparsePlaceGroup* _make(::x10::lang::Place p);
    
    virtual ::x10::lang::Place __apply(x10_long i);
    virtual ::x10::lang::Iterator< ::x10::lang::Place>* iterator();
    virtual x10_long numPlaces();
    virtual x10_boolean contains(x10_long id);
    virtual x10_long indexOf(x10_long id);
    virtual ::x10::lang::SparsePlaceGroup* x10__lang__SparsePlaceGroup____this__x10__lang__SparsePlaceGroup(
      );
    virtual void __fieldInitializers_x10_lang_SparsePlaceGroup();
    
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
#endif // X10_LANG_SPARSEPLACEGROUP_H

namespace x10 { namespace lang { 
class SparsePlaceGroup;
} } 

#ifndef X10_LANG_SPARSEPLACEGROUP_H_NODEPS
#define X10_LANG_SPARSEPLACEGROUP_H_NODEPS
#ifndef X10_LANG_SPARSEPLACEGROUP_H_GENERICS
#define X10_LANG_SPARSEPLACEGROUP_H_GENERICS
#endif // X10_LANG_SPARSEPLACEGROUP_H_GENERICS
#endif // __X10_LANG_SPARSEPLACEGROUP_H_NODEPS
