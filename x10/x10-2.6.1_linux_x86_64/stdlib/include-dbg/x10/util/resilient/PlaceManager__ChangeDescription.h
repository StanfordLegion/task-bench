#ifndef __X10_UTIL_RESILIENT_PLACEMANAGER__CHANGEDESCRIPTION_H
#define __X10_UTIL_RESILIENT_PLACEMANAGER__CHANGEDESCRIPTION_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { 

class PlaceManager__ChangeDescription_Strings {
  public:
    static ::x10::lang::String sl__160016;
    static ::x10::lang::String sl__160019;
    static ::x10::lang::String sl__160018;
    static ::x10::lang::String sl__160020;
    static ::x10::lang::String sl__160017;
};

class PlaceManager__ChangeDescription   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::util::resilient::PlaceManager__ChangeDescription* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::util::resilient::PlaceManager__ChangeDescription > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::util::resilient::PlaceManager__ChangeDescription _alloc(){::x10::util::resilient::PlaceManager__ChangeDescription t; return t; }
    
    ::x10::lang::PlaceGroup* FMGL(oldActivePlaces);
    
    ::x10::lang::PlaceGroup* FMGL(newActivePlaces);
    
    ::x10::util::ArrayList< ::x10::lang::Place>* FMGL(removedPlaces);
    
    ::x10::util::ArrayList< ::x10::lang::Place>* FMGL(addedPlaces);
    
    void _constructor(::x10::lang::PlaceGroup* o, ::x10::lang::PlaceGroup* n,
                      ::x10::util::ArrayList< ::x10::lang::Place>* r, ::x10::util::ArrayList< ::x10::lang::Place>* a);
    
    static ::x10::util::resilient::PlaceManager__ChangeDescription _make(
             ::x10::lang::PlaceGroup* o, ::x10::lang::PlaceGroup* n, ::x10::util::ArrayList< ::x10::lang::Place>* r,
             ::x10::util::ArrayList< ::x10::lang::Place>* a);
    
    x10_boolean somethingChanged() {
        return (!::x10aux::struct_equals((*this)->FMGL(oldActivePlaces),
                                         (*this)->FMGL(newActivePlaces)));
        
    }
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::util::resilient::PlaceManager__ChangeDescription other) {
        return ((((::x10aux::struct_equals((*this)->FMGL(oldActivePlaces),
                                           other->FMGL(oldActivePlaces))) &&
        (::x10aux::struct_equals((*this)->FMGL(newActivePlaces), other->FMGL(newActivePlaces)))) &&
        (::x10aux::struct_equals((*this)->FMGL(removedPlaces),
                                 other->FMGL(removedPlaces)))) &&
        (::x10aux::struct_equals((*this)->FMGL(addedPlaces),
                                 other->FMGL(addedPlaces))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::util::resilient::PlaceManager__ChangeDescription other) {
        return ((((::x10aux::struct_equals((*this)->FMGL(oldActivePlaces),
                                           other->FMGL(oldActivePlaces))) &&
        (::x10aux::struct_equals((*this)->FMGL(newActivePlaces),
                                 other->FMGL(newActivePlaces)))) &&
        (::x10aux::struct_equals((*this)->FMGL(removedPlaces),
                                 other->FMGL(removedPlaces)))) &&
        (::x10aux::struct_equals((*this)->FMGL(addedPlaces),
                                 other->FMGL(addedPlaces))));
        
    }
    ::x10::util::resilient::PlaceManager__ChangeDescription
      x10__util__resilient__PlaceManager__ChangeDescription____this__x10__util__resilient__PlaceManager__ChangeDescription(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_x10_util_resilient_PlaceManager_ChangeDescription(
      ) {
     
    }
    
    static void _serialize(::x10::util::resilient::PlaceManager__ChangeDescription this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::util::resilient::PlaceManager__ChangeDescription _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::util::resilient::PlaceManager__ChangeDescription this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_UTIL_RESILIENT_PLACEMANAGER__CHANGEDESCRIPTION_H

namespace x10 { namespace util { namespace resilient { 
class PlaceManager__ChangeDescription;
} } } 

#ifndef X10_UTIL_RESILIENT_PLACEMANAGER__CHANGEDESCRIPTION_H_NODEPS
#define X10_UTIL_RESILIENT_PLACEMANAGER__CHANGEDESCRIPTION_H_NODEPS
#ifndef X10_UTIL_RESILIENT_PLACEMANAGER__CHANGEDESCRIPTION_H_GENERICS
#define X10_UTIL_RESILIENT_PLACEMANAGER__CHANGEDESCRIPTION_H_GENERICS
#endif // X10_UTIL_RESILIENT_PLACEMANAGER__CHANGEDESCRIPTION_H_GENERICS
#endif // __X10_UTIL_RESILIENT_PLACEMANAGER__CHANGEDESCRIPTION_H_NODEPS
