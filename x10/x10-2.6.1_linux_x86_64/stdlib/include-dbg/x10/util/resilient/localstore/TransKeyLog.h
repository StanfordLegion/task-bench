#ifndef __X10_UTIL_RESILIENT_LOCALSTORE_TRANSKEYLOG_H
#define __X10_UTIL_RESILIENT_LOCALSTORE_TRANSKEYLOG_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace localstore { 

class TransKeyLog : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::resilient::localstore::Cloneable* FMGL(value);
    
    x10_boolean FMGL(readOnly);
    
    x10_boolean FMGL(deleted);
    
    void _constructor(::x10::util::resilient::localstore::Cloneable* initValue);
    
    static ::x10::util::resilient::localstore::TransKeyLog* _make(::x10::util::resilient::localstore::Cloneable* initValue);
    
    virtual void update(::x10::util::resilient::localstore::Cloneable* n);
    virtual void _kwd__delete();
    virtual ::x10::util::resilient::localstore::Cloneable* getValue();
    virtual x10_boolean readOnly();
    virtual x10_boolean isDeleted();
    virtual ::x10::util::resilient::localstore::TransKeyLog* x10__util__resilient__localstore__TransKeyLog____this__x10__util__resilient__localstore__TransKeyLog(
      );
    virtual void __fieldInitializers_x10_util_resilient_localstore_TransKeyLog(
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
#endif // X10_UTIL_RESILIENT_LOCALSTORE_TRANSKEYLOG_H

namespace x10 { namespace util { namespace resilient { namespace localstore { 
class TransKeyLog;
} } } } 

#ifndef X10_UTIL_RESILIENT_LOCALSTORE_TRANSKEYLOG_H_NODEPS
#define X10_UTIL_RESILIENT_LOCALSTORE_TRANSKEYLOG_H_NODEPS
#ifndef X10_UTIL_RESILIENT_LOCALSTORE_TRANSKEYLOG_H_GENERICS
#define X10_UTIL_RESILIENT_LOCALSTORE_TRANSKEYLOG_H_GENERICS
#endif // X10_UTIL_RESILIENT_LOCALSTORE_TRANSKEYLOG_H_GENERICS
#endif // __X10_UTIL_RESILIENT_LOCALSTORE_TRANSKEYLOG_H_NODEPS
