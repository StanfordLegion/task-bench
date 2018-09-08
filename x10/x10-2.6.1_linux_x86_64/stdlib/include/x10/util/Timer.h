#ifndef __X10_UTIL_TIMER_H
#define __X10_UTIL_TIMER_H

#include <x10rt.h>

#include "x10/lang/RuntimeNatives.h"

namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 

namespace x10 { namespace util { 

class Timer : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual ::x10::util::Timer* x10__util__Timer____this__x10__util__Timer(
      );
    void _constructor();
    
    static ::x10::util::Timer* _make();
    
    virtual void __fieldInitializers_x10_util_Timer();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_UTIL_TIMER_H

namespace x10 { namespace util { 
class Timer;
} } 

#ifndef X10_UTIL_TIMER_H_NODEPS
#define X10_UTIL_TIMER_H_NODEPS
#ifndef X10_UTIL_TIMER_H_GENERICS
#define X10_UTIL_TIMER_H_GENERICS
#endif // X10_UTIL_TIMER_H_GENERICS
#endif // __X10_UTIL_TIMER_H_NODEPS
