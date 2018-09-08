#ifndef __X10_UTIL_OPTION_H
#define __X10_UTIL_OPTION_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Char;
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

namespace x10 { namespace util { 

class Option_Strings {
  public:
    static ::x10::lang::String sl__159547;
    static ::x10::lang::String sl__159562;
    static ::x10::lang::String sl__159559;
    static ::x10::lang::String sl__159556;
    static ::x10::lang::String sl__159561;
    static ::x10::lang::String sl__159552;
    static ::x10::lang::String sl__159549;
    static ::x10::lang::String sl__159550;
    static ::x10::lang::String sl__159557;
    static ::x10::lang::String sl__159553;
    static ::x10::lang::String sl__159546;
    static ::x10::lang::String sl__159555;
    static ::x10::lang::String sl__159558;
    static ::x10::lang::String sl__159564;
    static ::x10::lang::String sl__159554;
    static ::x10::lang::String sl__159560;
    static ::x10::lang::String sl__159565;
    static ::x10::lang::String sl__159548;
    static ::x10::lang::String sl__159551;
    static ::x10::lang::String sl__159563;
};

class Option   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::util::Option* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::util::Option > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::util::Option _alloc(){::x10::util::Option t; return t; }
    
    ::x10::lang::String* FMGL(shortForm);
    
    ::x10::lang::String* FMGL(longForm);
    
    ::x10::lang::String* FMGL(description);
    
    x10_int FMGL(minFollow);
    
    x10_boolean FMGL(arbFollow);
    
    x10_boolean FMGL(required);
    
    x10_boolean FMGL(onTheFly);
    
    void _constructor(::x10::lang::String* s, ::x10::lang::String* l, ::x10::lang::String* d);
    
    static ::x10::util::Option _make(::x10::lang::String* s, ::x10::lang::String* l,
                                     ::x10::lang::String* d);
    
    void _constructor(::x10::lang::String* s, ::x10::lang::String* l,
                      ::x10::lang::String* d, x10_int followers);
    
    static ::x10::util::Option _make(::x10::lang::String* s, ::x10::lang::String* l,
                                     ::x10::lang::String* d,
                                     x10_int followers);
    
    void _constructor(::x10::lang::String* s, ::x10::lang::String* l,
                      ::x10::lang::String* d, x10_int followers,
                      x10_boolean mayBeMore);
    
    static ::x10::util::Option _make(::x10::lang::String* s,
                                     ::x10::lang::String* l,
                                     ::x10::lang::String* d,
                                     x10_int followers, x10_boolean mayBeMore);
    
    void _constructor(::x10::lang::String* s, ::x10::lang::String* l,
                      ::x10::lang::String* d, x10_int followers,
                      x10_boolean mayBeMore, x10_boolean mustSee);
    
    static ::x10::util::Option _make(::x10::lang::String* s,
                                     ::x10::lang::String* l,
                                     ::x10::lang::String* d,
                                     x10_int followers, x10_boolean mayBeMore,
                                     x10_boolean mustSee);
    
    void _constructor(::x10::lang::String* s, ::x10::lang::String* l,
                      ::x10::lang::String* d, x10_int followers,
                      x10_boolean mayBeMore, x10_boolean mustSee,
                      x10_boolean otf);
    
    static ::x10::util::Option _make(::x10::lang::String* s,
                                     ::x10::lang::String* l,
                                     ::x10::lang::String* d,
                                     x10_int followers, x10_boolean mayBeMore,
                                     x10_boolean mustSee,
                                     x10_boolean otf);
    
    ::x10::util::Option asFlag();
    ::x10::util::Option asSimpleParm();
    ::x10::lang::String* otherForm(::x10::lang::String* key);
    ::x10::lang::String* toString();
    ::x10::lang::String* usage();
    /* Static field: FMGL(HELP) */
    static ::x10::util::Option FMGL(HELP);
    static void FMGL(HELP__do_init)();
    static void FMGL(HELP__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(HELP__status);
    static ::x10::lang::CheckedThrowable* FMGL(HELP__exception);
    static ::x10::util::Option FMGL(HELP__get)();
    
    /* Static field: FMGL(BAD) */
    static ::x10::util::Option FMGL(BAD);
    static void FMGL(BAD__do_init)();
    static void FMGL(BAD__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(BAD__status);
    static ::x10::lang::CheckedThrowable* FMGL(BAD__exception);
    static ::x10::util::Option FMGL(BAD__get)();
    
    ::x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::util::Option other) {
        return (((((((::x10aux::struct_equals((*this)->FMGL(shortForm),
                                              other->FMGL(shortForm))) &&
        (::x10aux::struct_equals((*this)->FMGL(longForm),
                                 other->FMGL(longForm)))) &&
        (::x10aux::struct_equals((*this)->FMGL(description),
                                 other->FMGL(description)))) &&
        (::x10aux::struct_equals((*this)->FMGL(minFollow),
                                 other->FMGL(minFollow)))) &&
        (::x10aux::struct_equals((*this)->FMGL(arbFollow),
                                 other->FMGL(arbFollow)))) &&
        (::x10aux::struct_equals((*this)->FMGL(required),
                                 other->FMGL(required)))) &&
        (::x10aux::struct_equals((*this)->FMGL(onTheFly),
                                 other->FMGL(onTheFly))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::util::Option other) {
        return (((((((::x10aux::struct_equals((*this)->FMGL(shortForm),
                                              other->FMGL(shortForm))) &&
        (::x10aux::struct_equals((*this)->FMGL(longForm),
                                 other->FMGL(longForm)))) &&
        (::x10aux::struct_equals((*this)->FMGL(description),
                                 other->FMGL(description)))) &&
        (::x10aux::struct_equals((*this)->FMGL(minFollow),
                                 other->FMGL(minFollow)))) &&
        (::x10aux::struct_equals((*this)->FMGL(arbFollow),
                                 other->FMGL(arbFollow)))) &&
        (::x10aux::struct_equals((*this)->FMGL(required),
                                 other->FMGL(required)))) &&
        (::x10aux::struct_equals((*this)->FMGL(onTheFly),
                                 other->FMGL(onTheFly))));
        
    }
    ::x10::util::Option x10__util__Option____this__x10__util__Option(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_x10_util_Option() {
     
    }
    
    static void _serialize(::x10::util::Option this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::util::Option _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::util::Option this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_UTIL_OPTION_H

namespace x10 { namespace util { 
class Option;
} } 

#ifndef X10_UTIL_OPTION_H_NODEPS
#define X10_UTIL_OPTION_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/lang/Char.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_OPTION_H_GENERICS
#define X10_UTIL_OPTION_H_GENERICS
inline ::x10::util::Option x10::util::Option::FMGL(HELP__get)() {
    if (FMGL(HELP__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(HELP__init)();
    }
    return x10::util::Option::FMGL(HELP);
}

inline ::x10::util::Option x10::util::Option::FMGL(BAD__get)() {
    if (FMGL(BAD__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(BAD__init)();
    }
    return x10::util::Option::FMGL(BAD);
}

#endif // X10_UTIL_OPTION_H_GENERICS
#endif // __X10_UTIL_OPTION_H_NODEPS
