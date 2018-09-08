#ifndef __X10_XRX_FINISHSTATE__REMOTEFINISHASYNC_H
#define __X10_XRX_FINISHSTATE__REMOTEFINISHASYNC_H

#include <x10rt.h>


#define X10_XRX_FINISHSTATE__REMOTEFINISHSKELETON_H_NODEPS
#include <x10/xrx/FinishState__RemoteFinishSkeleton.h>
#undef X10_XRX_FINISHSTATE__REMOTEFINISHSKELETON_H_NODEPS
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Activity;
} } 
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class Immediate;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishState__RemoteFinishAsync_Strings {
  public:
    static ::x10::lang::String sl__161452;
};

class FinishState__RemoteFinishAsync : public ::x10::xrx::FinishState__RemoteFinishSkeleton
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::CheckedThrowable* FMGL(exception);
    
    void _constructor(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref);
    
    static ::x10::xrx::FinishState__RemoteFinishAsync* _make(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref);
    
    virtual x10_boolean notifyActivityCreation(::x10::lang::Place srcPlace,
                                               ::x10::xrx::Activity* activity);
    virtual x10_boolean notifyShiftedActivityCreation(::x10::lang::Place place);
    virtual void notifyActivityCreationFailed(::x10::lang::Place srcPlace,
                                              ::x10::lang::CheckedThrowable* t);
    virtual void notifyActivityCreatedAndTerminated(::x10::lang::Place srcPlace);
    virtual void notifySubActivitySpawn(::x10::lang::Place place);
    virtual void notifyShiftedActivitySpawn(::x10::lang::Place place);
    virtual void notifyRemoteContinuationCreated();
    virtual void pushException(::x10::lang::CheckedThrowable* t);
    virtual void notifyActivityTermination();
    virtual void notifyShiftedActivityCompletion();
    virtual ::x10::xrx::FinishState__RemoteFinishAsync* x10__xrx__FinishState__RemoteFinishAsync____this__x10__xrx__FinishState__RemoteFinishAsync(
      );
    virtual void __fieldInitializers_x10_xrx_FinishState_RemoteFinishAsync(
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
#endif // X10_XRX_FINISHSTATE__REMOTEFINISHASYNC_H

namespace x10 { namespace xrx { 
class FinishState__RemoteFinishAsync;
} } 

#ifndef X10_XRX_FINISHSTATE__REMOTEFINISHASYNC_H_NODEPS
#define X10_XRX_FINISHSTATE__REMOTEFINISHASYNC_H_NODEPS
#ifndef X10_XRX_FINISHSTATE__REMOTEFINISHASYNC_H_GENERICS
#define X10_XRX_FINISHSTATE__REMOTEFINISHASYNC_H_GENERICS
#endif // X10_XRX_FINISHSTATE__REMOTEFINISHASYNC_H_GENERICS
#endif // __X10_XRX_FINISHSTATE__REMOTEFINISHASYNC_H_NODEPS
