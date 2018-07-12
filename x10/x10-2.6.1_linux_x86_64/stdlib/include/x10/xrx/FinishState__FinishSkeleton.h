#ifndef __X10_XRX_FINISHSTATE__FINISHSKELETON_H
#define __X10_XRX_FINISHSTATE__FINISHSKELETON_H

#include <x10rt.h>


#define X10_XRX_FINISHSTATE_H_NODEPS
#include <x10/xrx/FinishState.h>
#undef X10_XRX_FINISHSTATE_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
namespace x10 { namespace xrx { 
class FinishState__RootFinishSkeleton;
} } 
namespace x10 { namespace io { 
class Serializer;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Activity;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishState__FinishSkeleton : public ::x10::xrx::FinishState   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > FMGL(ref);
    
    ::x10::xrx::FinishState* FMGL(me);
    
    void _constructor(::x10::xrx::FinishState__RootFinishSkeleton* root);
    
    void _constructor(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref);
    
    virtual void serialize(::x10::io::Serializer* s);
    virtual void notifySubActivitySpawn(::x10::lang::Place place);
    virtual void notifyShiftedActivitySpawn(::x10::lang::Place place);
    virtual void notifyRemoteContinuationCreated();
    virtual x10_boolean notifyActivityCreation(::x10::lang::Place srcPlace,
                                               ::x10::xrx::Activity* activity);
    virtual x10_boolean notifyShiftedActivityCreation(::x10::lang::Place srcPlace);
    virtual void notifyActivityCreationFailed(::x10::lang::Place srcPlace,
                                              ::x10::lang::CheckedThrowable* t);
    virtual void notifyActivityCreatedAndTerminated(::x10::lang::Place srcPlace);
    virtual void notifyActivityTermination();
    virtual void notifyShiftedActivityCompletion();
    virtual void pushException(::x10::lang::CheckedThrowable* t);
    virtual void waitForFinish();
    virtual ::x10::xrx::FinishState__FinishSkeleton* x10__xrx__FinishState__FinishSkeleton____this__x10__xrx__FinishState__FinishSkeleton(
      );
    virtual void __fieldInitializers_x10_xrx_FinishState_FinishSkeleton(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_XRX_FINISHSTATE__FINISHSKELETON_H

namespace x10 { namespace xrx { 
class FinishState__FinishSkeleton;
} } 

#ifndef X10_XRX_FINISHSTATE__FINISHSKELETON_H_NODEPS
#define X10_XRX_FINISHSTATE__FINISHSKELETON_H_NODEPS
#ifndef X10_XRX_FINISHSTATE__FINISHSKELETON_H_GENERICS
#define X10_XRX_FINISHSTATE__FINISHSKELETON_H_GENERICS
#endif // X10_XRX_FINISHSTATE__FINISHSKELETON_H_GENERICS
#endif // __X10_XRX_FINISHSTATE__FINISHSKELETON_H_NODEPS
