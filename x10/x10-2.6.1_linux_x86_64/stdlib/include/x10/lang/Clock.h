#ifndef __X10_LANG_CLOCK_H
#define __X10_LANG_CLOCK_H

#include <x10rt.h>


#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class ClockUseException;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class Clock__ClockPhases;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
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
namespace x10 { namespace compiler { 
class Pinned;
} } 
namespace x10 { namespace compiler { 
class Global;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class Clock_Strings {
  public:
    static ::x10::lang::String sl__164872;
    static ::x10::lang::String sl__164875;
    static ::x10::lang::String sl__164876;
    static ::x10::lang::String sl__164878;
    static ::x10::lang::String sl__164873;
    static ::x10::lang::String sl__164881;
    static ::x10::lang::String sl__164874;
    static ::x10::lang::String sl__164879;
    static ::x10::lang::String sl__164877;
    static ::x10::lang::String sl__164880;
};

class Clock : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::String* FMGL(name);
    
    ::x10::lang::GlobalRef< ::x10::lang::Clock* > FMGL(root);
    
    virtual x10_boolean equals(::x10::lang::Any* a);
    virtual x10_int hashCode();
    static ::x10::lang::Clock* make();
    static ::x10::lang::Clock* make(::x10::lang::String* name);
    /* Static field: FMGL(FIRST_PHASE) */
    static const x10_int FMGL(FIRST_PHASE) = 1;
    static x10_int FMGL(FIRST_PHASE__get)();
    
    x10_int FMGL(count);
    
    x10_int FMGL(alive);
    
    x10_int FMGL(phase);
    
    void _constructor(::x10::lang::String* name);
    
    static ::x10::lang::Clock* _make(::x10::lang::String* name);
    
    void resumeLocal();
    void dropLocal(x10_int ph);
    x10_int get();
    x10_int put(x10_int ph);
    x10_int remove();
    virtual x10_int _kwd__register();
    virtual void resumeUnsafe();
    virtual void advanceUnsafe();
    virtual void dropUnsafe();
    virtual void dropInternal();
    virtual x10_boolean registered();
    virtual x10_boolean dropped();
    virtual x10_int phase();
    virtual void resume();
    virtual void advance();
    virtual void drop();
    virtual ::x10::lang::String* toString();
    void clockUseException(::x10::lang::String* method);
    static void advanceAll();
    static void resumeAll();
    virtual ::x10::lang::Clock* x10__lang__Clock____this__x10__lang__Clock(
      );
    virtual void __fieldInitializers_x10_lang_Clock();
    
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
#endif // X10_LANG_CLOCK_H

namespace x10 { namespace lang { 
class Clock;
} } 

#ifndef X10_LANG_CLOCK_H_NODEPS
#define X10_LANG_CLOCK_H_NODEPS
#ifndef X10_LANG_CLOCK_H_GENERICS
#define X10_LANG_CLOCK_H_GENERICS
inline x10_int x10::lang::Clock::FMGL(FIRST_PHASE__get)() {
    return x10::lang::Clock::FMGL(FIRST_PHASE);
}

#endif // X10_LANG_CLOCK_H_GENERICS
#endif // __X10_LANG_CLOCK_H_NODEPS
