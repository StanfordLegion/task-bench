#ifndef __X10_LANG_PLACE_H
#define __X10_LANG_PLACE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class PlaceGroup__SimplePlaceGroup;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace lang { 
class Place__PlaceGroupCache;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace lang { 
class SparsePlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class Place_Strings {
  public:
    static ::x10::lang::String sl__155171;
    static ::x10::lang::String sl__155170;
    static ::x10::lang::String sl__155172;
};

class Place   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::lang::Place* operator->() { return this; }
    
    x10_long FMGL(id);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::lang::Place > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::lang::Place _alloc(){::x10::lang::Place t; return t; }
    
    x10_long id() {
        return (*this)->FMGL(id);
        
    }
    /* Static field: FMGL(FIRST_PLACE) */
    static ::x10::lang::Place FMGL(FIRST_PLACE);
    static void FMGL(FIRST_PLACE__do_init)();
    static void FMGL(FIRST_PLACE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(FIRST_PLACE__status);
    static ::x10::lang::CheckedThrowable* FMGL(FIRST_PLACE__exception);
    static ::x10::lang::Place FMGL(FIRST_PLACE__get)();
    
    /* Static field: FMGL(INVALID_PLACE) */
    static ::x10::lang::Place FMGL(INVALID_PLACE);
    static void FMGL(INVALID_PLACE__do_init)();
    static void FMGL(INVALID_PLACE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(INVALID_PLACE__status);
    static ::x10::lang::CheckedThrowable* FMGL(INVALID_PLACE__exception);
    static ::x10::lang::Place FMGL(INVALID_PLACE__get)();
    
    static x10_boolean isDead(x10_long id){
        return x10rt_is_place_dead((x10_int)id);
    }
    static ::x10::lang::PlaceGroup* places();
    void _constructor(x10_long id);
    
    static ::x10::lang::Place _make(x10_long id);
    
    x10_boolean isDead() {
        return x10rt_is_place_dead((x10_int)(*this)->FMGL(id));
        
    }
    x10_boolean isCUDA(){
        return ::x10aux::is_cuda((x10_int)(((*this))->FMGL(id)));
    }
    ::x10::lang::Place parent(){
        return ::x10::lang::Place::_make(::x10aux::parent((x10_int)(((*this))->FMGL(id))));
    }
    ::x10::lang::String* toString();
    x10_boolean equals(::x10::lang::Place p) {
        return (::x10aux::struct_equals(p->FMGL(id), (*this)->FMGL(id)));
        
    }
    x10_boolean equals(::x10::lang::Any* p);
    x10_int hashCode();
    /* Static field: FMGL(CUR_WORLD) */
    static ::x10::lang::Place__PlaceGroupCache* FMGL(CUR_WORLD);
    static void FMGL(CUR_WORLD__do_init)();
    static void FMGL(CUR_WORLD__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(CUR_WORLD__status);
    static ::x10::lang::CheckedThrowable* FMGL(CUR_WORLD__exception);
    static ::x10::lang::Place__PlaceGroupCache* FMGL(CUR_WORLD__get)();
    
    ::x10::lang::String* typeName();
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::lang::Place other) {
        return (::x10aux::struct_equals((*this)->FMGL(id), other->FMGL(id)));
        
    }
    ::x10::lang::Place x10__lang__Place____this__x10__lang__Place() {
        return (*this);
        
    }
    void __fieldInitializers_x10_lang_Place() {
     
    }
    
    static void _serialize(::x10::lang::Place this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::lang::Place _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::lang::Place this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_LANG_PLACE_H

namespace x10 { namespace lang { 
class Place;
} } 

#ifndef X10_LANG_PLACE_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/PlaceGroup__SimplePlaceGroup.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/lang/Place__PlaceGroupCache.h>
#include <x10/util/GrowableRail.h>
#include <x10/lang/SparsePlaceGroup.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Finalization.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/lang/GlobalRef.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_LANG_PLACE_H_GENERICS
#define X10_LANG_PLACE_H_GENERICS
inline ::x10::lang::Place x10::lang::Place::FMGL(FIRST_PLACE__get)() {
    if (FMGL(FIRST_PLACE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(FIRST_PLACE__init)();
    }
    return x10::lang::Place::FMGL(FIRST_PLACE);
}

inline ::x10::lang::Place x10::lang::Place::FMGL(INVALID_PLACE__get)() {
    if (FMGL(INVALID_PLACE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(INVALID_PLACE__init)();
    }
    return x10::lang::Place::FMGL(INVALID_PLACE);
}

inline ::x10::lang::Place__PlaceGroupCache* x10::lang::Place::FMGL(CUR_WORLD__get)() {
    if (FMGL(CUR_WORLD__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(CUR_WORLD__init)();
    }
    return x10::lang::Place::FMGL(CUR_WORLD);
}

#endif // X10_LANG_PLACE_H_GENERICS
#endif // __X10_LANG_PLACE_H_NODEPS
