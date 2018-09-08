#ifndef __X10_UTIL_RESILIENT_LOCALSTORE_LOCALTRANSACTION_H
#define __X10_UTIL_RESILIENT_LOCALSTORE_LOCALTRANSACTION_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class LocalStore;
} } } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class MapData;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class TransKeyLog;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace util { namespace concurrent { 
class SimpleLatch;
} } } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class SlaveStore;
} } } } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
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

class LocalTransaction_Strings {
  public:
    static ::x10::lang::String sl__170379;
};

class LocalTransaction : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::PlaceLocalHandle< ::x10::util::resilient::localstore::LocalStore*>
      FMGL(plh);
    
    x10_long FMGL(id);
    
    ::x10::lang::String* FMGL(mapName);
    
    ::x10::util::resilient::localstore::MapData* FMGL(masterMapData);
    
    ::x10::lang::String* FMGL(moduleName);
    
    ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::TransKeyLog*>*
      FMGL(transLog);
    
    x10_boolean FMGL(alive);
    
    virtual ::x10::util::resilient::localstore::Cloneable*
      put(::x10::lang::String* key, ::x10::util::resilient::localstore::Cloneable* newValue);
    virtual ::x10::util::resilient::localstore::Cloneable*
      _kwd__delete(::x10::lang::String* key);
    virtual ::x10::util::resilient::localstore::Cloneable*
      get(::x10::lang::String* key);
    virtual void commit();
    x10_boolean isReadOnlyTransaction();
    virtual ::x10::util::resilient::localstore::LocalTransaction*
      x10__util__resilient__localstore__LocalTransaction____this__x10__util__resilient__localstore__LocalTransaction(
      );
    void _constructor(::x10::lang::PlaceLocalHandle< ::x10::util::resilient::localstore::LocalStore*> plh,
                      x10_long id, ::x10::lang::String* mapName,
                      ::x10::util::resilient::localstore::MapData* masterMapData);
    
    static ::x10::util::resilient::localstore::LocalTransaction* _make(
             ::x10::lang::PlaceLocalHandle< ::x10::util::resilient::localstore::LocalStore*> plh,
             x10_long id, ::x10::lang::String* mapName, ::x10::util::resilient::localstore::MapData* masterMapData);
    
    virtual void __fieldInitializers_x10_util_resilient_localstore_LocalTransaction(
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
#endif // X10_UTIL_RESILIENT_LOCALSTORE_LOCALTRANSACTION_H

namespace x10 { namespace util { namespace resilient { namespace localstore { 
class LocalTransaction;
} } } } 

#ifndef X10_UTIL_RESILIENT_LOCALSTORE_LOCALTRANSACTION_H_NODEPS
#define X10_UTIL_RESILIENT_LOCALSTORE_LOCALTRANSACTION_H_NODEPS
#ifndef X10_UTIL_RESILIENT_LOCALSTORE_LOCALTRANSACTION_H_GENERICS
#define X10_UTIL_RESILIENT_LOCALSTORE_LOCALTRANSACTION_H_GENERICS
#endif // X10_UTIL_RESILIENT_LOCALSTORE_LOCALTRANSACTION_H_GENERICS
#endif // __X10_UTIL_RESILIENT_LOCALSTORE_LOCALTRANSACTION_H_NODEPS
