#ifndef __X10_XRX_FINISHSTATE__ROOTFINISH_H
#define __X10_XRX_FINISHSTATE__ROOTFINISH_H

#include <x10rt.h>


#define X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H_NODEPS
#include <x10/xrx/FinishState__RootFinishSkeleton.h>
#undef X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H_NODEPS
#define X10_UTIL_CONCURRENT_SIMPLELATCH_H_NODEPS
#include <x10/util/concurrent/SimpleLatch.h>
#undef X10_UTIL_CONCURRENT_SIMPLELATCH_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { 
class Embed;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class Worker;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace xrx { 
class FinishState__FinishStates;
} } 
namespace x10 { namespace compiler { 
class Immediate;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class MultipleExceptions;
} } 
namespace x10 { namespace io { 
class Deserializer;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishState__RootFinish : public ::x10::xrx::FinishState__RootFinishSkeleton
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::xrx::Runtime__Mortal::itable< ::x10::xrx::FinishState__RootFinish > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::xrx::FinishState__RootFinish > _itable_1;
    
    virtual x10_boolean _isMortal() { return true; }
    
    ::x10::util::concurrent::SimpleLatch _Embed_latch;
    ::x10::util::concurrent::SimpleLatch* FMGL(latch);
    
    x10_int FMGL(count);
    
    ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* FMGL(exceptions);
    
    ::x10::util::HashMap<x10_long, x10_int>* FMGL(remoteActivities);
    
    void _constructor();
    
    static ::x10::xrx::FinishState__RootFinish* _make();
    
    void _constructor(::x10::util::concurrent::SimpleLatch* latch);
    
    static ::x10::xrx::FinishState__RootFinish* _make(::x10::util::concurrent::SimpleLatch* latch);
    
    virtual void ensureRemoteActivities();
    virtual void notifySubActivitySpawn(::x10::lang::Place place);
    virtual void notifyShiftedActivitySpawn(::x10::lang::Place place);
    virtual void notifyRemoteContinuationCreated();
    virtual void notifyActivityCreationFailed(::x10::lang::Place srcPlace,
                                              ::x10::lang::CheckedThrowable* t);
    virtual void notifyActivityTermination();
    virtual void notifyShiftedActivityCompletion();
    virtual void process(::x10::lang::CheckedThrowable* t);
    virtual void process(::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* excs);
    virtual void pushException(::x10::lang::CheckedThrowable* t);
    virtual void waitForFinish();
    virtual void process(::x10::util::HashMap<x10_long, x10_int>* remoteMap);
    virtual void notify(::x10::lang::Rail< x10_byte >* remoteMapBytes);
    virtual void notify(::x10::lang::Rail< x10_byte >* remoteMapBytes,
                        ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* excs);
    virtual void process(::x10::util::Pair<x10_long, x10_int> remoteEntry);
    virtual void notify(::x10::util::Pair<x10_long, x10_int> remoteEntry);
    virtual void notify(::x10::util::Pair<x10_long, x10_int> remoteEntry,
                        ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* excs);
    virtual ::x10::xrx::FinishState__RootFinish* x10__xrx__FinishState__RootFinish____this__x10__xrx__FinishState__RootFinish(
      );
    virtual void __fieldInitializers_x10_xrx_FinishState_RootFinish(
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


} } 
#endif // X10_XRX_FINISHSTATE__ROOTFINISH_H

namespace x10 { namespace xrx { 
class FinishState__RootFinish;
} } 

#ifndef X10_XRX_FINISHSTATE__ROOTFINISH_H_NODEPS
#define X10_XRX_FINISHSTATE__ROOTFINISH_H_NODEPS
#ifndef X10_XRX_FINISHSTATE__ROOTFINISH_H_GENERICS
#define X10_XRX_FINISHSTATE__ROOTFINISH_H_GENERICS
#endif // X10_XRX_FINISHSTATE__ROOTFINISH_H_GENERICS
#endif // __X10_XRX_FINISHSTATE__ROOTFINISH_H_NODEPS
