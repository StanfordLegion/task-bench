#ifndef __X10_UTIL_RESILIENT_PLACEMANAGER_H
#define __X10_UTIL_RESILIENT_PLACEMANAGER_H

#include <x10rt.h>


#define X10_IO_UNSERIALIZABLE_H_NODEPS
#include <x10/io/Unserializable.h>
#undef X10_IO_UNSERIALIZABLE_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
class PlaceGroup__SimplePlaceGroup;
} } 
namespace x10 { namespace lang { 
class SparsePlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace util { namespace resilient { 
class PlaceManager__ChangeDescription;
} } } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { 

class PlaceManager_Strings {
  public:
    static ::x10::lang::String sl__159965;
    static ::x10::lang::String sl__159969;
    static ::x10::lang::String sl__159974;
    static ::x10::lang::String sl__159972;
    static ::x10::lang::String sl__159967;
    static ::x10::lang::String sl__159970;
    static ::x10::lang::String sl__159968;
    static ::x10::lang::String sl__159973;
    static ::x10::lang::String sl__159976;
    static ::x10::lang::String sl__159964;
    static ::x10::lang::String sl__159966;
    static ::x10::lang::String sl__159971;
    static ::x10::lang::String sl__159975;
};

class PlaceManager : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::util::resilient::PlaceManager > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::resilient::PlaceManager > _itable_1;
    
    /* Static field: FMGL(VERBOSE) */
    static const x10_boolean FMGL(VERBOSE) = true;
    static x10_boolean FMGL(VERBOSE__get)();
    
    ::x10::lang::PlaceGroup* FMGL(activePlaces);
    
    ::x10::util::ArrayList< ::x10::lang::Place>* FMGL(sparePlaces);
    
    x10_boolean FMGL(allowShrinking);
    
    x10_long FMGL(numSpares);
    
    void _constructor();
    
    static ::x10::util::resilient::PlaceManager* _make();
    
    void _constructor(x10_long numSpares, x10_boolean allowShrinking);
    
    static ::x10::util::resilient::PlaceManager* _make(x10_long numSpares,
                                                       x10_boolean allowShrinking);
    
    virtual ::x10::lang::PlaceGroup* activePlaces();
    virtual ::x10::util::resilient::PlaceManager__ChangeDescription rebuildActivePlaces(
      );
    virtual ::x10::util::resilient::PlaceManager* x10__util__resilient__PlaceManager____this__x10__util__resilient__PlaceManager(
      );
    virtual void __fieldInitializers_x10_util_resilient_PlaceManager(
      );
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.resilient.PlaceManager");
    }
    
    virtual ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.resilient.PlaceManager");
    }
    
    
};


} } } 
#endif // X10_UTIL_RESILIENT_PLACEMANAGER_H

namespace x10 { namespace util { namespace resilient { 
class PlaceManager;
} } } 

#ifndef X10_UTIL_RESILIENT_PLACEMANAGER_H_NODEPS
#define X10_UTIL_RESILIENT_PLACEMANAGER_H_NODEPS
#include <x10/io/Unserializable.h>
#include <x10/lang/Place.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/PlaceGroup__SimplePlaceGroup.h>
#include <x10/lang/SparsePlaceGroup.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Iterator.h>
#include <x10/util/resilient/PlaceManager__ChangeDescription.h>
#include <x10/lang/System.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Double.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_RESILIENT_PLACEMANAGER_H_GENERICS
#define X10_UTIL_RESILIENT_PLACEMANAGER_H_GENERICS
inline x10_boolean x10::util::resilient::PlaceManager::FMGL(VERBOSE__get)() {
    return x10::util::resilient::PlaceManager::FMGL(VERBOSE);
}

#endif // X10_UTIL_RESILIENT_PLACEMANAGER_H_GENERICS
#endif // __X10_UTIL_RESILIENT_PLACEMANAGER_H_NODEPS
