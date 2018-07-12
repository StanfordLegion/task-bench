#ifndef __X10_UTIL_CONCURRENT_ATOMICFLOAT_H
#define __X10_UTIL_CONCURRENT_ATOMICFLOAT_H

#include <x10rt.h>


namespace x10 { namespace util { namespace concurrent { 
class AtomicInteger;
} } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace concurrent { 

class AtomicFloat : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::concurrent::AtomicInteger* FMGL(v);
    
    void _constructor();
    
    static ::x10::util::concurrent::AtomicFloat* _make();
    
    void _constructor(x10_float v);
    
    static ::x10::util::concurrent::AtomicFloat* _make(x10_float v);
    
    virtual x10_float get();
    virtual void set(x10_float v);
    virtual x10_boolean compareAndSet(x10_float expect, x10_float update);
    virtual x10_boolean weakCompareAndSet(x10_float expect, x10_float update);
    virtual x10_float getAndIncrement();
    virtual x10_float getAndDecrement();
    virtual x10_float getAndAdd(x10_float delta);
    virtual x10_float incrementAndGet();
    virtual x10_float decrementAndGet();
    virtual x10_float addAndGet(x10_float delta);
    virtual ::x10::lang::String* toString();
    virtual x10_int intValue();
    virtual x10_long longValue();
    virtual x10_float floatValue();
    virtual x10_double doubleValue();
    virtual ::x10::util::concurrent::AtomicFloat* x10__util__concurrent__AtomicFloat____this__x10__util__concurrent__AtomicFloat(
      );
    virtual void __fieldInitializers_x10_util_concurrent_AtomicFloat(
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
#endif // X10_UTIL_CONCURRENT_ATOMICFLOAT_H

namespace x10 { namespace util { namespace concurrent { 
class AtomicFloat;
} } } 

#ifndef X10_UTIL_CONCURRENT_ATOMICFLOAT_H_NODEPS
#define X10_UTIL_CONCURRENT_ATOMICFLOAT_H_NODEPS
#ifndef X10_UTIL_CONCURRENT_ATOMICFLOAT_H_GENERICS
#define X10_UTIL_CONCURRENT_ATOMICFLOAT_H_GENERICS
#endif // X10_UTIL_CONCURRENT_ATOMICFLOAT_H_GENERICS
#endif // __X10_UTIL_CONCURRENT_ATOMICFLOAT_H_NODEPS
