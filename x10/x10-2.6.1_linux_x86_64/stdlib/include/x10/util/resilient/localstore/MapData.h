#ifndef __X10_UTIL_RESILIENT_LOCALSTORE_MAPDATA_H
#define __X10_UTIL_RESILIENT_LOCALSTORE_MAPDATA_H

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
namespace x10 { namespace util { namespace concurrent { 
class SimpleLatch;
} } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class TransKeyLog;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace localstore { 

class MapData : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>*
      FMGL(data);
    
    ::x10::util::concurrent::SimpleLatch* FMGL(lock);
    
    void _constructor();
    
    static ::x10::util::resilient::localstore::MapData* _make();
    
    void _constructor(::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>* data);
    
    static ::x10::util::resilient::localstore::MapData* _make(::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>* data);
    
    virtual ::x10::util::resilient::localstore::Cloneable* getCopy(
      ::x10::lang::String* key);
    virtual ::x10::util::resilient::localstore::Cloneable* getNoCopy(
      ::x10::lang::String* key);
    ::x10::util::resilient::localstore::Cloneable* get(::x10::lang::String* key,
                                                       x10_boolean copy);
    virtual void commit(x10_long transId, ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::TransKeyLog*>* transLog);
    virtual ::x10::util::Set< ::x10::lang::String*>* keySet();
    virtual ::x10::util::resilient::localstore::MapData* x10__util__resilient__localstore__MapData____this__x10__util__resilient__localstore__MapData(
      );
    virtual void __fieldInitializers_x10_util_resilient_localstore_MapData(
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
#endif // X10_UTIL_RESILIENT_LOCALSTORE_MAPDATA_H

namespace x10 { namespace util { namespace resilient { namespace localstore { 
class MapData;
} } } } 

#ifndef X10_UTIL_RESILIENT_LOCALSTORE_MAPDATA_H_NODEPS
#define X10_UTIL_RESILIENT_LOCALSTORE_MAPDATA_H_NODEPS
#ifndef X10_UTIL_RESILIENT_LOCALSTORE_MAPDATA_H_GENERICS
#define X10_UTIL_RESILIENT_LOCALSTORE_MAPDATA_H_GENERICS
#endif // X10_UTIL_RESILIENT_LOCALSTORE_MAPDATA_H_GENERICS
#endif // __X10_UTIL_RESILIENT_LOCALSTORE_MAPDATA_H_NODEPS
