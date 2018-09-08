#ifndef __X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H
#define __X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H

#include <x10rt.h>


#define X10_XRX_FINISHSTATE_H_NODEPS
#include <x10/xrx/FinishState.h>
#undef X10_XRX_FINISHSTATE_H_NODEPS
#define X10_XRX_RUNTIME__MORTAL_H_NODEPS
#include <x10/xrx/Runtime__Mortal.h>
#undef X10_XRX_RUNTIME__MORTAL_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Activity;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishState__RootFinishSkeleton : public ::x10::xrx::FinishState   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual x10_boolean _isMortal() { return true; }
    
    ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > FMGL(xxxx);
    
    virtual ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref();
    virtual x10_boolean notifyActivityCreation(::x10::lang::Place srcPlace,
                                               ::x10::xrx::Activity* activity);
    virtual x10_boolean notifyShiftedActivityCreation(::x10::lang::Place srcPlace);
    virtual void notifyActivityCreatedAndTerminated(::x10::lang::Place srcPlace);
    virtual ::x10::xrx::FinishState__RootFinishSkeleton* x10__xrx__FinishState__RootFinishSkeleton____this__x10__xrx__FinishState__RootFinishSkeleton(
      );
    void _constructor();
    
    virtual void __fieldInitializers_x10_xrx_FinishState_RootFinishSkeleton(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H

namespace x10 { namespace xrx { 
class FinishState__RootFinishSkeleton;
} } 

#ifndef X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H_NODEPS
#define X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H_NODEPS
#ifndef X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H_GENERICS
#define X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H_GENERICS
#endif // X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H_GENERICS
#endif // __X10_XRX_FINISHSTATE__ROOTFINISHSKELETON_H_NODEPS
