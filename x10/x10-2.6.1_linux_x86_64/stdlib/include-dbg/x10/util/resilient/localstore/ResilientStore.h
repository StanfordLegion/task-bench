#ifndef __X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTSTORE_H
#define __X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTSTORE_H

#include <x10rt.h>


#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class LocalStore;
} } } } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class ResilientNativeMap;
} } } } 
namespace x10 { namespace util { namespace concurrent { 
class SimpleLatch;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace util { namespace resilient { 
class PlaceManager__ChangeDescription;
} } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class MasterState;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class SlaveStore;
} } } } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class MasterStore;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace localstore { 

class ResilientStore_Strings {
  public:
    static ::x10::lang::String sl__159940;
    static ::x10::lang::String sl__159939;
};

class ResilientStore : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::PlaceLocalHandle< ::x10::util::resilient::localstore::LocalStore*>
      FMGL(plh);
    
    ::x10::lang::PlaceGroup* FMGL(activePlaces);
    
    ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::ResilientNativeMap*>*
      FMGL(appMaps);
    
    ::x10::util::concurrent::SimpleLatch* FMGL(lock);
    
    void _constructor(::x10::lang::PlaceGroup* pg, ::x10::lang::PlaceLocalHandle< ::x10::util::resilient::localstore::LocalStore*> plh);
    
    static ::x10::util::resilient::localstore::ResilientStore* _make(
             ::x10::lang::PlaceGroup* pg, ::x10::lang::PlaceLocalHandle< ::x10::util::resilient::localstore::LocalStore*> plh);
    
    static ::x10::util::resilient::localstore::ResilientStore*
      make(::x10::lang::PlaceGroup* pg);
    virtual ::x10::util::resilient::localstore::ResilientNativeMap*
      makeMap(::x10::lang::String* name);
    virtual x10_long getVirtualPlaceId();
    virtual ::x10::lang::PlaceGroup* getActivePlaces();
    ::x10::lang::Place getMaster(::x10::lang::Place p);
    ::x10::lang::Place getSlave(::x10::lang::Place p);
    virtual void updateForChangedPlaces(::x10::util::resilient::PlaceManager__ChangeDescription changes);
    void checkIfBothMasterAndSlaveDied(::x10::util::resilient::PlaceManager__ChangeDescription changes);
    void recoverMasters(::x10::util::resilient::PlaceManager__ChangeDescription changes);
    void recoverSlaves(::x10::util::resilient::PlaceManager__ChangeDescription changes);
    virtual ::x10::util::resilient::localstore::ResilientStore*
      x10__util__resilient__localstore__ResilientStore____this__x10__util__resilient__localstore__ResilientStore(
      );
    virtual void __fieldInitializers_x10_util_resilient_localstore_ResilientStore(
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
#endif // X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTSTORE_H

namespace x10 { namespace util { namespace resilient { namespace localstore { 
class ResilientStore;
} } } } 

#ifndef X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTSTORE_H_NODEPS
#define X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTSTORE_H_NODEPS
#ifndef X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTSTORE_H_GENERICS
#define X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTSTORE_H_GENERICS
#endif // X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTSTORE_H_GENERICS
#endif // __X10_UTIL_RESILIENT_LOCALSTORE_RESILIENTSTORE_H_NODEPS
