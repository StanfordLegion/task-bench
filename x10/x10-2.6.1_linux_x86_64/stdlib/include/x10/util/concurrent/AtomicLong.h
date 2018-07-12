#ifndef __X10_UTIL_CONCURRENT_ATOMICLONG_H
#define __X10_UTIL_CONCURRENT_ATOMICLONG_H

#include <x10rt.h>

#include "x10/util/concurrent/AtomicLongNatives.h"

#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
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

class AtomicLong : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    volatile x10_long FMGL(value);
    
    void _constructor();
    
    static ::x10::util::concurrent::AtomicLong* _make();
    
    void _constructor(x10_long v);
    
    static ::x10::util::concurrent::AtomicLong* _make(x10_long v);
    
    virtual x10_long get();
    virtual void set(x10_long newV);
    virtual x10_boolean compareAndSet(x10_long expect, x10_long update);
    virtual x10_boolean weakCompareAndSet(x10_long expect, x10_long update);
    virtual x10_long getAndIncrement();
    virtual x10_long getAndDecrement();
    virtual x10_long getAndAdd(x10_long delta);
    virtual x10_long incrementAndGet();
    virtual x10_long decrementAndGet();
    virtual x10_long addAndGet(x10_long delta);
    virtual ::x10::lang::String* toString();
    virtual x10_int intValue();
    virtual x10_long longValue();
    virtual x10_float floatValue();
    virtual x10_double doubleValue();
    virtual ::x10::util::concurrent::AtomicLong* x10__util__concurrent__AtomicLong____this__x10__util__concurrent__AtomicLong(
      );
    virtual void __fieldInitializers_x10_util_concurrent_AtomicLong(
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
#endif // X10_UTIL_CONCURRENT_ATOMICLONG_H

namespace x10 { namespace util { namespace concurrent { 
class AtomicLong;
} } } 

#ifndef X10_UTIL_CONCURRENT_ATOMICLONG_H_NODEPS
#define X10_UTIL_CONCURRENT_ATOMICLONG_H_NODEPS
#ifndef X10_UTIL_CONCURRENT_ATOMICLONG_H_GENERICS
#define X10_UTIL_CONCURRENT_ATOMICLONG_H_GENERICS
#endif // X10_UTIL_CONCURRENT_ATOMICLONG_H_GENERICS
#endif // __X10_UTIL_CONCURRENT_ATOMICLONG_H_NODEPS
