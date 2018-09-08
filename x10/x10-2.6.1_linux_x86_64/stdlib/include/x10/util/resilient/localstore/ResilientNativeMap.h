#ifndef __X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTNATIVEMAP_H
#define __X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTNATIVEMAP_H

#include <x10rt.h>


#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class LocalStore;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class LocalTransaction;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class MapData;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class MasterStore;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace util { namespace concurrent { 
class SimpleLatch;
} } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class TransKeyLog;
} } } } 
namespace x10 { namespace util { namespace concurrent { 
class AtomicLong;
} } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace localstore { 

class ResilientNativeMap_Strings {
  public:
    static ::x10::lang::String sl__170410;
};

class ResilientNativeMap : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::String* FMGL(name);
    
    ::x10::lang::PlaceLocalHandle< ::x10::util::resilient::localstore::LocalStore*>
      FMGL(plh);
    
    virtual ::x10::util::resilient::localstore::Cloneable* get(::x10::lang::String* k);
    virtual void set(::x10::lang::String* k, ::x10::util::resilient::localstore::Cloneable* v);
    virtual void _kwd__delete(::x10::lang::String* k);
    virtual ::x10::util::Set< ::x10::lang::String*>* keySet();
    virtual void setAll(::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>* data);
    virtual ::x10::util::resilient::localstore::LocalTransaction*
      startLocalTransaction();
    virtual x10_long getNextTransactionId();
    virtual ::x10::util::resilient::localstore::ResilientNativeMap*
      x10__util__resilient__localstore__ResilientNativeMap____this__x10__util__resilient__localstore__ResilientNativeMap(
      );
    void _constructor(::x10::lang::String* name, ::x10::lang::PlaceLocalHandle< ::x10::util::resilient::localstore::LocalStore*> plh);
    
    static ::x10::util::resilient::localstore::ResilientNativeMap* _make(
             ::x10::lang::String* name, ::x10::lang::PlaceLocalHandle< ::x10::util::resilient::localstore::LocalStore*> plh);
    
    virtual void __fieldInitializers_x10_util_resilient_localstore_ResilientNativeMap(
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
#endif // X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTNATIVEMAP_H

namespace x10 { namespace util { namespace resilient { namespace localstore { 
class ResilientNativeMap;
} } } } 

#ifndef X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTNATIVEMAP_H_NODEPS
#define X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTNATIVEMAP_H_NODEPS
#ifndef X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTNATIVEMAP_H_GENERICS
#define X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTNATIVEMAP_H_GENERICS
#endif // X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTNATIVEMAP_H_GENERICS
#endif // __X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTNATIVEMAP_H_NODEPS
