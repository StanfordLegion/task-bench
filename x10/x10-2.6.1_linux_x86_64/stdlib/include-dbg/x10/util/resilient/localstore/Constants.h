#ifndef __X10_UTIL_RESILIENT_LOCALSTORE_CONSTANTS_H
#define __X10_UTIL_RESILIENT_LOCALSTORE_CONSTANTS_H

#include <x10rt.h>


namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace localstore { 

class Constants : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(TRANS_STATUS_UNFOUND) */
    static const x10_long FMGL(TRANS_STATUS_UNFOUND) = -1;
    static x10_long FMGL(TRANS_STATUS_UNFOUND__get)();
    
    /* Static field: FMGL(TRANS_STATUS_PENDING) */
    static const x10_long FMGL(TRANS_STATUS_PENDING) = 1;
    static x10_long FMGL(TRANS_STATUS_PENDING__get)();
    
    /* Static field: FMGL(TRANS_STATUS_COMMITTED) */
    static const x10_long FMGL(TRANS_STATUS_COMMITTED) = 2;
    static x10_long FMGL(TRANS_STATUS_COMMITTED__get)();
    
    /* Static field: FMGL(TRANS_STATUS_ROLLEDBACK) */
    static const x10_long FMGL(TRANS_STATUS_ROLLEDBACK) = 3;
    static x10_long FMGL(TRANS_STATUS_ROLLEDBACK__get)();
    
    virtual ::x10::util::resilient::localstore::Constants* x10__util__resilient__localstore__Constants____this__x10__util__resilient__localstore__Constants(
      );
    void _constructor();
    
    static ::x10::util::resilient::localstore::Constants* _make();
    
    virtual void __fieldInitializers_x10_util_resilient_localstore_Constants(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // X10_UTIL_RESILIENT_LOCALSTORE_CONSTANTS_H

namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Constants;
} } } } 

#ifndef X10_UTIL_RESILIENT_LOCALSTORE_CONSTANTS_H_NODEPS
#define X10_UTIL_RESILIENT_LOCALSTORE_CONSTANTS_H_NODEPS
#ifndef X10_UTIL_RESILIENT_LOCALSTORE_CONSTANTS_H_GENERICS
#define X10_UTIL_RESILIENT_LOCALSTORE_CONSTANTS_H_GENERICS
inline x10_long x10::util::resilient::localstore::Constants::FMGL(TRANS_STATUS_UNFOUND__get)() {
    return x10::util::resilient::localstore::Constants::FMGL(TRANS_STATUS_UNFOUND);
}

inline x10_long x10::util::resilient::localstore::Constants::FMGL(TRANS_STATUS_PENDING__get)() {
    return x10::util::resilient::localstore::Constants::FMGL(TRANS_STATUS_PENDING);
}

inline x10_long x10::util::resilient::localstore::Constants::FMGL(TRANS_STATUS_COMMITTED__get)() {
    return x10::util::resilient::localstore::Constants::FMGL(TRANS_STATUS_COMMITTED);
}

inline x10_long x10::util::resilient::localstore::Constants::FMGL(TRANS_STATUS_ROLLEDBACK__get)() {
    return x10::util::resilient::localstore::Constants::FMGL(TRANS_STATUS_ROLLEDBACK);
}

#endif // X10_UTIL_RESILIENT_LOCALSTORE_CONSTANTS_H_GENERICS
#endif // __X10_UTIL_RESILIENT_LOCALSTORE_CONSTANTS_H_NODEPS
