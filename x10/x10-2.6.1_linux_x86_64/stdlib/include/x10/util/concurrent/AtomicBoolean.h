#ifndef __X10_UTIL_CONCURRENT_ATOMICBOOLEAN_H
#define __X10_UTIL_CONCURRENT_ATOMICBOOLEAN_H

#include <x10rt.h>

#include "x10/util/concurrent/AtomicBooleanNatives.h"

#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace compiler { 
class Volatile;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Fences;
} } } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 
namespace x10 { namespace compiler { 
class NativeRep;
} } 

namespace x10 { namespace util { namespace concurrent { 

class AtomicBoolean : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    volatile x10_int FMGL(value);
    
    void _constructor();
    
    static ::x10::util::concurrent::AtomicBoolean* _make();
    
    void _constructor(x10_boolean v);
    
    static ::x10::util::concurrent::AtomicBoolean* _make(x10_boolean v);
    
    virtual x10_boolean get();
    virtual void set(x10_boolean v);
    virtual x10_boolean compareAndSet(x10_boolean expect, x10_boolean update);
    virtual x10_boolean weakCompareAndSet(x10_boolean expect, x10_boolean update);
    virtual x10_boolean getAndSet(x10_boolean v);
    virtual ::x10::lang::String* toString();
    virtual ::x10::util::concurrent::AtomicBoolean* x10__util__concurrent__AtomicBoolean____this__x10__util__concurrent__AtomicBoolean(
      );
    virtual void __fieldInitializers_x10_util_concurrent_AtomicBoolean(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_UTIL_CONCURRENT_ATOMICBOOLEAN_H

namespace x10 { namespace util { namespace concurrent { 
class AtomicBoolean;
} } } 

#ifndef X10_UTIL_CONCURRENT_ATOMICBOOLEAN_H_NODEPS
#define X10_UTIL_CONCURRENT_ATOMICBOOLEAN_H_NODEPS
#ifndef X10_UTIL_CONCURRENT_ATOMICBOOLEAN_H_GENERICS
#define X10_UTIL_CONCURRENT_ATOMICBOOLEAN_H_GENERICS
#endif // X10_UTIL_CONCURRENT_ATOMICBOOLEAN_H_GENERICS
#endif // __X10_UTIL_CONCURRENT_ATOMICBOOLEAN_H_NODEPS
