#ifndef __X10_UTIL_RESILIENT_LOCALSTORE_LOCALSTORE_H
#define __X10_UTIL_RESILIENT_LOCALSTORE_LOCALSTORE_H

#include <x10rt.h>


#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class MasterStore;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class SlaveStore;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 

namespace x10 { namespace util { namespace resilient { namespace localstore { 

class LocalStore_Strings {
  public:
    static ::x10::lang::String sl__170378;
};

class LocalStore : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::String* FMGL(moduleName);
    
    ::x10::util::resilient::localstore::MasterStore* FMGL(masterStore);
    
    ::x10::lang::Place FMGL(slave);
    
    ::x10::util::resilient::localstore::SlaveStore* FMGL(slaveStore);
    
    x10_long FMGL(virtualPlaceId);
    
    void _constructor(x10_long virtualPlaceId, ::x10::lang::Place slave);
    
    static ::x10::util::resilient::localstore::LocalStore* _make(x10_long virtualPlaceId,
                                                                 ::x10::lang::Place slave);
    
    void _constructor();
    
    static ::x10::util::resilient::localstore::LocalStore* _make(
             );
    
    virtual void joinAsMaster(x10_long virtualPlaceId, ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>*>* data);
    virtual ::x10::util::resilient::localstore::LocalStore* x10__util__resilient__localstore__LocalStore____this__x10__util__resilient__localstore__LocalStore(
      );
    virtual void __fieldInitializers_x10_util_resilient_localstore_LocalStore(
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
#endif // X10_UTIL_RESILIENT_LOCALSTORE_LOCALSTORE_H

namespace x10 { namespace util { namespace resilient { namespace localstore { 
class LocalStore;
} } } } 

#ifndef X10_UTIL_RESILIENT_LOCALSTORE_LOCALSTORE_H_NODEPS
#define X10_UTIL_RESILIENT_LOCALSTORE_LOCALSTORE_H_NODEPS
#ifndef X10_UTIL_RESILIENT_LOCALSTORE_LOCALSTORE_H_GENERICS
#define X10_UTIL_RESILIENT_LOCALSTORE_LOCALSTORE_H_GENERICS
#endif // X10_UTIL_RESILIENT_LOCALSTORE_LOCALSTORE_H_GENERICS
#endif // __X10_UTIL_RESILIENT_LOCALSTORE_LOCALSTORE_H_NODEPS
