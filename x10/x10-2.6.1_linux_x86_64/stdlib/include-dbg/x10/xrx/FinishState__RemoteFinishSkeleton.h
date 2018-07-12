#ifndef __X10_XRX_FINISHSTATE__REMOTEFINISHSKELETON_H
#define __X10_XRX_FINISHSTATE__REMOTEFINISHSKELETON_H

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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishState__RemoteFinishSkeleton : public ::x10::xrx::FinishState 
 {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > FMGL(xxxx);
    
    void _constructor(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > root);
    
    virtual ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref();
    virtual void waitForFinish();
    virtual void notifyRemoteContinuationCreated();
    virtual ::x10::xrx::FinishState__RemoteFinishSkeleton* x10__xrx__FinishState__RemoteFinishSkeleton____this__x10__xrx__FinishState__RemoteFinishSkeleton(
      );
    virtual void __fieldInitializers_x10_xrx_FinishState_RemoteFinishSkeleton(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_XRX_FINISHSTATE__REMOTEFINISHSKELETON_H

namespace x10 { namespace xrx { 
class FinishState__RemoteFinishSkeleton;
} } 

#ifndef X10_XRX_FINISHSTATE__REMOTEFINISHSKELETON_H_NODEPS
#define X10_XRX_FINISHSTATE__REMOTEFINISHSKELETON_H_NODEPS
#ifndef X10_XRX_FINISHSTATE__REMOTEFINISHSKELETON_H_GENERICS
#define X10_XRX_FINISHSTATE__REMOTEFINISHSKELETON_H_GENERICS
#endif // X10_XRX_FINISHSTATE__REMOTEFINISHSKELETON_H_GENERICS
#endif // __X10_XRX_FINISHSTATE__REMOTEFINISHSKELETON_H_NODEPS
