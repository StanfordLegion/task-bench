#ifndef __X10_XRX_RUNTIME__PROFILE_H
#define __X10_XRX_RUNTIME__PROFILE_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class Runtime__Profile : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(bytes);
    
    x10_long FMGL(serializationNanos);
    
    x10_long FMGL(communicationNanos);
    
    virtual void reset();
    virtual ::x10::xrx::Runtime__Profile* x10__xrx__Runtime__Profile____this__x10__xrx__Runtime__Profile(
      );
    void _constructor();
    
    static ::x10::xrx::Runtime__Profile* _make();
    
    virtual void __fieldInitializers_x10_xrx_Runtime_Profile();
    
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
#endif // X10_XRX_RUNTIME__PROFILE_H

namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 

#ifndef X10_XRX_RUNTIME__PROFILE_H_NODEPS
#define X10_XRX_RUNTIME__PROFILE_H_NODEPS
#ifndef X10_XRX_RUNTIME__PROFILE_H_GENERICS
#define X10_XRX_RUNTIME__PROFILE_H_GENERICS
#endif // X10_XRX_RUNTIME__PROFILE_H_GENERICS
#endif // __X10_XRX_RUNTIME__PROFILE_H_NODEPS
