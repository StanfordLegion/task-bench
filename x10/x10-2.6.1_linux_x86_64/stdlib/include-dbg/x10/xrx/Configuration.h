#ifndef __X10_XRX_CONFIGURATION_H
#define __X10_XRX_CONFIGURATION_H

#include <x10rt.h>


namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class NumberFormatException;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class Configuration_Strings {
  public:
    static ::x10::lang::String sl__161084;
    static ::x10::lang::String sl__161076;
    static ::x10::lang::String sl__161075;
    static ::x10::lang::String sl__161087;
    static ::x10::lang::String sl__161086;
    static ::x10::lang::String sl__161079;
    static ::x10::lang::String sl__161090;
    static ::x10::lang::String sl__161077;
    static ::x10::lang::String sl__161078;
    static ::x10::lang::String sl__161080;
    static ::x10::lang::String sl__161085;
    static ::x10::lang::String sl__161089;
    static ::x10::lang::String sl__161088;
    static ::x10::lang::String sl__161081;
    static ::x10::lang::String sl__161083;
    static ::x10::lang::String sl__161082;
    static ::x10::lang::String sl__161091;
};

class Configuration : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_boolean envOrElse(::x10::lang::String* s, x10_boolean b);
    static x10_boolean sysPropOrElse(::x10::lang::String* s, x10_boolean b);
    static x10_int sysPropOrElse(::x10::lang::String* s, x10_int i);
    static x10_boolean strict_finish();
    static x10_boolean stable_pool_size();
    static x10_boolean static_threads();
    static x10_boolean warn_on_thread_creation();
    static x10_boolean busy_waiting();
    static x10_boolean cancellable();
    static x10_boolean silenceInternalWarnings();
    static x10_int nthreads();
    static x10_int max_threads();
    static x10_int num_immediate_threads();
    /* Static field: FMGL(RESILIENT_MODE_NONE) */
    static const x10_int FMGL(RESILIENT_MODE_NONE) = 0;
    static x10_int FMGL(RESILIENT_MODE_NONE__get)();
    
    /* Static field: FMGL(RESILIENT_MODE_DEFAULT) */
    static const x10_int FMGL(RESILIENT_MODE_DEFAULT) = 1;
    static x10_int FMGL(RESILIENT_MODE_DEFAULT__get)();
    
    /* Static field: FMGL(RESILIENT_MODE_PLACE0) */
    static const x10_int FMGL(RESILIENT_MODE_PLACE0) = 11;
    static x10_int FMGL(RESILIENT_MODE_PLACE0__get)();
    
    /* Static field: FMGL(RESILIENT_MODE_HC) */
    static const x10_int FMGL(RESILIENT_MODE_HC) = 12;
    static x10_int FMGL(RESILIENT_MODE_HC__get)();
    
    /* Static field: FMGL(RESILIENT_MODE_X10RT_ONLY) */
    static const x10_int FMGL(RESILIENT_MODE_X10RT_ONLY) = 99;
    static x10_int FMGL(RESILIENT_MODE_X10RT_ONLY__get)();
    
    static x10_int resilient_mode();
    virtual ::x10::xrx::Configuration* x10__xrx__Configuration____this__x10__xrx__Configuration(
      );
    void _constructor();
    
    static ::x10::xrx::Configuration* _make();
    
    virtual void __fieldInitializers_x10_xrx_Configuration();
    
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
#endif // X10_XRX_CONFIGURATION_H

namespace x10 { namespace xrx { 
class Configuration;
} } 

#ifndef X10_XRX_CONFIGURATION_H_NODEPS
#define X10_XRX_CONFIGURATION_H_NODEPS
#ifndef X10_XRX_CONFIGURATION_H_GENERICS
#define X10_XRX_CONFIGURATION_H_GENERICS
inline x10_int x10::xrx::Configuration::FMGL(RESILIENT_MODE_NONE__get)() {
    return x10::xrx::Configuration::FMGL(RESILIENT_MODE_NONE);
}

inline x10_int x10::xrx::Configuration::FMGL(RESILIENT_MODE_DEFAULT__get)() {
    return x10::xrx::Configuration::FMGL(RESILIENT_MODE_DEFAULT);
}

inline x10_int x10::xrx::Configuration::FMGL(RESILIENT_MODE_PLACE0__get)() {
    return x10::xrx::Configuration::FMGL(RESILIENT_MODE_PLACE0);
}

inline x10_int x10::xrx::Configuration::FMGL(RESILIENT_MODE_HC__get)() {
    return x10::xrx::Configuration::FMGL(RESILIENT_MODE_HC);
}

inline x10_int x10::xrx::Configuration::FMGL(RESILIENT_MODE_X10RT_ONLY__get)() {
    return x10::xrx::Configuration::FMGL(RESILIENT_MODE_X10RT_ONLY);
}

#endif // X10_XRX_CONFIGURATION_H_GENERICS
#endif // __X10_XRX_CONFIGURATION_H_NODEPS
