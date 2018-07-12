#ifndef __X10_XRX_FINISHSTATE__ROOTFINISHSPMD_H
#define __X10_XRX_FINISHSTATE__ROOTFINISHSPMD_H

#include <x10rt.h>


#define X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H_NODEPS
#include <x10/xrx/FinishState__RootFinishSkeleton.h>
#undef X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H_NODEPS
#define X10_UTIL_CONCURRENT_SIMPLELATCH_H_NODEPS
#include <x10/util/concurrent/SimpleLatch.h>
#undef X10_UTIL_CONCURRENT_SIMPLELATCH_H_NODEPS
#define X10_UTIL_CONCURRENT_ATOMICINTEGER_H_NODEPS
#include <x10/util/concurrent/AtomicInteger.h>
#undef X10_UTIL_CONCURRENT_ATOMICINTEGER_H_NODEPS
namespace x10 { namespace compiler { 
class Embed;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class Worker;
} } 
namespace x10 { namespace xrx { 
class Thread;
} } 
namespace x10 { namespace lang { 
class MultipleExceptions;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishState__RootFinishSPMD_Strings {
  public:
    static ::x10::lang::String sl__171935;
};

class FinishState__RootFinishSPMD : public ::x10::xrx::FinishState__RootFinishSkeleton
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::xrx::Runtime__Mortal::itable< ::x10::xrx::FinishState__RootFinishSPMD > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::xrx::FinishState__RootFinishSPMD > _itable_1;
    
    virtual x10_boolean _isMortal() { return true; }
    
    ::x10::util::concurrent::SimpleLatch _Embed_latch;
    ::x10::util::concurrent::SimpleLatch* FMGL(latch);
    
    ::x10::util::concurrent::AtomicInteger _Embed_count;
    ::x10::util::concurrent::AtomicInteger* FMGL(count);
    
    ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* FMGL(exceptions);
    
    virtual void notifySubActivitySpawn(::x10::lang::Place place);
    virtual void notifyShiftedActivitySpawn(::x10::lang::Place place);
    virtual void notifyRemoteContinuationCreated();
    virtual void notifyActivityCreationFailed(::x10::lang::Place srcPlace,
                                              ::x10::lang::CheckedThrowable* t);
    virtual void notifyActivityCreatedAndTerminated(::x10::lang::Place srcPlace);
    virtual void notifyActivityTermination();
    virtual void notifyShiftedActivityCompletion();
    virtual void pushException(::x10::lang::CheckedThrowable* t);
    virtual void waitForFinish();
    virtual ::x10::xrx::FinishState__RootFinishSPMD* x10__xrx__FinishState__RootFinishSPMD____this__x10__xrx__FinishState__RootFinishSPMD(
      );
    void _constructor();
    
    static ::x10::xrx::FinishState__RootFinishSPMD* _make(
             );
    
    virtual void __fieldInitializers_x10_xrx_FinishState_RootFinishSPMD(
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
#endif // X10_XRX_FINISHSTATE__ROOTFINISHSPMD_H

namespace x10 { namespace xrx { 
class FinishState__RootFinishSPMD;
} } 

#ifndef X10_XRX_FINISHSTATE__ROOTFINISHSPMD_H_NODEPS
#define X10_XRX_FINISHSTATE__ROOTFINISHSPMD_H_NODEPS
#ifndef X10_XRX_FINISHSTATE__ROOTFINISHSPMD_H_GENERICS
#define X10_XRX_FINISHSTATE__ROOTFINISHSPMD_H_GENERICS
#endif // X10_XRX_FINISHSTATE__ROOTFINISHSPMD_H_GENERICS
#endif // __X10_XRX_FINISHSTATE__ROOTFINISHSPMD_H_NODEPS
