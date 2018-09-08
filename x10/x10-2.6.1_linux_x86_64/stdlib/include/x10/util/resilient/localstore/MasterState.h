#ifndef __X10_UTIL_RESILIENT_LOCALSTORE_MASTERSTATE_H
#define __X10_UTIL_RESILIENT_LOCALSTORE_MASTERSTATE_H

#include <x10rt.h>


namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace localstore { 

class MasterState : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>*>*
      FMGL(maps);
    
    void _constructor(::x10::util::HashMap< ::x10::lang::String*, ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>*>* maps);
    
    static ::x10::util::resilient::localstore::MasterState* _make(
             ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>*>* maps);
    
    virtual ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>*
      getMapData(::x10::lang::String* mapName);
    virtual ::x10::util::resilient::localstore::MasterState*
      x10__util__resilient__localstore__MasterState____this__x10__util__resilient__localstore__MasterState(
      );
    virtual void __fieldInitializers_x10_util_resilient_localstore_MasterState(
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
#endif // X10_UTIL_RESILIENT_LOCALSTORE_MASTERSTATE_H

namespace x10 { namespace util { namespace resilient { namespace localstore { 
class MasterState;
} } } } 

#ifndef X10_UTIL_RESILIENT_LOCALSTORE_MASTERSTATE_H_NODEPS
#define X10_UTIL_RESILIENT_LOCALSTORE_MASTERSTATE_H_NODEPS
#ifndef X10_UTIL_RESILIENT_LOCALSTORE_MASTERSTATE_H_GENERICS
#define X10_UTIL_RESILIENT_LOCALSTORE_MASTERSTATE_H_GENERICS
#endif // X10_UTIL_RESILIENT_LOCALSTORE_MASTERSTATE_H_GENERICS
#endif // __X10_UTIL_RESILIENT_LOCALSTORE_MASTERSTATE_H_NODEPS
