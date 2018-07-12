#ifndef __SHA1RAND_H
#define __SHA1RAND_H

#include <x10rt.h>

#include "brg_types.h"
#include "brg_sha1.h"
#include "brg_endian.h"

#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 
namespace x10 { namespace compiler { 
class NativeCPPCompilationUnit;
} } 

class SHA1Rand_Strings {
  public:
    static ::x10::lang::String sl__1731;
    static ::x10::lang::String sl__1730;
    static ::x10::lang::String sl__1729;
    static ::x10::lang::String sl__1728;
    static ::x10::lang::String sl__1727;
    static ::x10::lang::String sl__1732;
    static ::x10::lang::String sl__1726;
};

class SHA1Rand   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::SHA1Rand* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::SHA1Rand > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::SHA1Rand _alloc(){::SHA1Rand t; return t; }
    
    x10_int FMGL(w0);
    
    x10_int FMGL(w1);
    
    x10_int FMGL(w2);
    
    x10_int FMGL(w3);
    
    x10_int FMGL(w4);
    
    x10_int FMGL(depth);
    
    void _constructor(x10_int seed, x10_int depth) {
        
        //#line 5 "/home/users/nicolaig/x10/x10-2.6.1_linux_x86_64/samples/GLB/uts/SHA1Rand.x10"
        (*this)->SHA1Rand::__fieldInitializers_SHA1Rand();
        rng_init((RNG_state*)this, seed);
        
        //#line 16 "/home/users/nicolaig/x10/x10-2.6.1_linux_x86_64/samples/GLB/uts/SHA1Rand.x10"
        (*this)->FMGL(depth) = depth;
    }
    static ::SHA1Rand _make(x10_int seed, x10_int depth) {
        ::SHA1Rand this_; 
        this_->_constructor(seed, depth);
        return this_;
    }
    
    void _constructor(::SHA1Rand parent, x10_int spawnNumber, x10_int depth) {
        
        //#line 5 "/home/users/nicolaig/x10/x10-2.6.1_linux_x86_64/samples/GLB/uts/SHA1Rand.x10"
        (*this)->SHA1Rand::__fieldInitializers_SHA1Rand();
        rng_spawn((RNG_state*)&parent, (RNG_state*)this, spawnNumber);
        
        //#line 22 "/home/users/nicolaig/x10/x10-2.6.1_linux_x86_64/samples/GLB/uts/SHA1Rand.x10"
        (*this)->FMGL(depth) = depth;
    }
    static ::SHA1Rand _make(::SHA1Rand parent, x10_int spawnNumber, x10_int depth)
    {
        ::SHA1Rand this_; 
        this_->_constructor(parent, spawnNumber, depth);
        return this_;
    }
    
    x10_int __apply() {
        return rng_rand((RNG_state*)this);
    }
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::SHA1Rand other) {
        return ((((((::x10aux::struct_equals((*this)->FMGL(w0), other->FMGL(w0))) &&
        (::x10aux::struct_equals((*this)->FMGL(w1), other->FMGL(w1)))) &&
        (::x10aux::struct_equals((*this)->FMGL(w2), other->FMGL(w2)))) &&
        (::x10aux::struct_equals((*this)->FMGL(w3), other->FMGL(w3)))) &&
        (::x10aux::struct_equals((*this)->FMGL(w4), other->FMGL(w4)))) &&
        (::x10aux::struct_equals((*this)->FMGL(depth), other->FMGL(depth))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::SHA1Rand other) {
        return ((((((::x10aux::struct_equals((*this)->FMGL(w0),
                                             other->FMGL(w0))) &&
        (::x10aux::struct_equals((*this)->FMGL(w1), other->FMGL(w1)))) &&
        (::x10aux::struct_equals((*this)->FMGL(w2), other->FMGL(w2)))) &&
        (::x10aux::struct_equals((*this)->FMGL(w3), other->FMGL(w3)))) &&
        (::x10aux::struct_equals((*this)->FMGL(w4), other->FMGL(w4)))) &&
        (::x10aux::struct_equals((*this)->FMGL(depth), other->FMGL(depth))));
        
    }
    ::SHA1Rand SHA1Rand____this__SHA1Rand() {
        return (*this);
        
    }
    void __fieldInitializers_SHA1Rand() {
        (*this)->FMGL(w0) = ((x10_int)0);
        (*this)->FMGL(w1) = ((x10_int)0);
        (*this)->FMGL(w2) = ((x10_int)0);
        (*this)->FMGL(w3) = ((x10_int)0);
        (*this)->FMGL(w4) = ((x10_int)0);
    }
    
    static void _serialize(::SHA1Rand this_, ::x10aux::serialization_buffer& buf);
    
    static ::SHA1Rand _deserialize(::x10aux::deserialization_buffer& buf) {
        ::SHA1Rand this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // SHA1RAND_H

class SHA1Rand;

#ifndef SHA1RAND_H_NODEPS
#define SHA1RAND_H_NODEPS
#ifndef SHA1RAND_H_GENERICS
#define SHA1RAND_H_GENERICS
#endif // SHA1RAND_H_GENERICS
#endif // __SHA1RAND_H_NODEPS
