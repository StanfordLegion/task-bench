#ifndef __X10_UTIL_CONCURRENT_FENCES_H
#define __X10_UTIL_CONCURRENT_FENCES_H

#include <x10rt.h>

#include "x10aux/atomic_ops.h"

namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 

namespace x10 { namespace util { namespace concurrent { 

class Fences : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual ::x10::util::concurrent::Fences* x10__util__concurrent__Fences____this__x10__util__concurrent__Fences(
      );
    void _constructor();
    
    static ::x10::util::concurrent::Fences* _make();
    
    virtual void __fieldInitializers_x10_util_concurrent_Fences();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_UTIL_CONCURRENT_FENCES_H

namespace x10 { namespace util { namespace concurrent { 
class Fences;
} } } 

#ifndef X10_UTIL_CONCURRENT_FENCES_H_NODEPS
#define X10_UTIL_CONCURRENT_FENCES_H_NODEPS
#ifndef X10_UTIL_CONCURRENT_FENCES_H_GENERICS
#define X10_UTIL_CONCURRENT_FENCES_H_GENERICS
#endif // X10_UTIL_CONCURRENT_FENCES_H_GENERICS
#endif // __X10_UTIL_CONCURRENT_FENCES_H_NODEPS
