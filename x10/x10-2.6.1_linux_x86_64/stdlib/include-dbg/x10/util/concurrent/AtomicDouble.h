#ifndef __X10_UTIL_CONCURRENT_ATOMICDOUBLE_H
#define __X10_UTIL_CONCURRENT_ATOMICDOUBLE_H

#include <x10rt.h>


namespace x10 { namespace util { namespace concurrent { 
class AtomicLong;
} } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace concurrent { 

class AtomicDouble : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::concurrent::AtomicLong* FMGL(v);
    
    void _constructor();
    
    static ::x10::util::concurrent::AtomicDouble* _make();
    
    void _constructor(x10_double v);
    
    static ::x10::util::concurrent::AtomicDouble* _make(x10_double v);
    
    virtual x10_double get();
    virtual void set(x10_double v);
    virtual x10_boolean compareAndSet(x10_double expect, x10_double update);
    virtual x10_boolean weakCompareAndSet(x10_double expect, x10_double update);
    virtual x10_double getAndIncrement();
    virtual x10_double getAndDecrement();
    virtual x10_double getAndAdd(x10_double delta);
    virtual x10_double incrementAndGet();
    virtual x10_double decrementAndGet();
    virtual x10_double addAndGet(x10_double delta);
    virtual ::x10::lang::String* toString();
    virtual x10_int intValue();
    virtual x10_long longValue();
    virtual x10_float floatValue();
    virtual x10_double doubleValue();
    virtual ::x10::util::concurrent::AtomicDouble* x10__util__concurrent__AtomicDouble____this__x10__util__concurrent__AtomicDouble(
      );
    virtual void __fieldInitializers_x10_util_concurrent_AtomicDouble(
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
#endif // X10_UTIL_CONCURRENT_ATOMICDOUBLE_H

namespace x10 { namespace util { namespace concurrent { 
class AtomicDouble;
} } } 

#ifndef X10_UTIL_CONCURRENT_ATOMICDOUBLE_H_NODEPS
#define X10_UTIL_CONCURRENT_ATOMICDOUBLE_H_NODEPS
#ifndef X10_UTIL_CONCURRENT_ATOMICDOUBLE_H_GENERICS
#define X10_UTIL_CONCURRENT_ATOMICDOUBLE_H_GENERICS
#endif // X10_UTIL_CONCURRENT_ATOMICDOUBLE_H_GENERICS
#endif // __X10_UTIL_CONCURRENT_ATOMICDOUBLE_H_NODEPS
