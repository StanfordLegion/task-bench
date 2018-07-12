#ifndef __X10_XRX_FINISHSTATE_H
#define __X10_XRX_FINISHSTATE_H

#include <x10rt.h>


namespace x10 { namespace xrx { 
class Configuration;
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
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace xrx { 
class FinishState__UncountedFinish;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishState_Strings {
  public:
    static ::x10::lang::String sl__171916;
    static ::x10::lang::String sl__171915;
};

class FinishState : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(VERBOSE) */
    static x10_boolean FMGL(VERBOSE);
    static void FMGL(VERBOSE__do_init)();
    static void FMGL(VERBOSE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(VERBOSE__status);
    static ::x10::lang::CheckedThrowable* FMGL(VERBOSE__exception);
    static x10_boolean FMGL(VERBOSE__get)();
    
    virtual void notifySubActivitySpawn(::x10::lang::Place dstPlace) = 0;
    virtual void notifyShiftedActivitySpawn(::x10::lang::Place dstPlace) = 0;
    virtual void notifyRemoteContinuationCreated() = 0;
    virtual x10_boolean notifyActivityCreation(::x10::lang::Place srcPlace,
                                               ::x10::xrx::Activity* activity) = 0;
    virtual x10_boolean notifyShiftedActivityCreation(::x10::lang::Place srcPlace) = 0;
    virtual void notifyActivityCreationFailed(::x10::lang::Place srcPlace,
                                              ::x10::lang::CheckedThrowable* t) = 0;
    virtual void notifyActivityCreatedAndTerminated(::x10::lang::Place srcPlace) = 0;
    virtual void notifyActivityTermination() = 0;
    virtual void notifyShiftedActivityCompletion() = 0;
    virtual void pushException(::x10::lang::CheckedThrowable* t) = 0;
    virtual void waitForFinish() = 0;
    virtual void spawnRemoteActivity(::x10::lang::Place place, ::x10::lang::VoidFun_0_0* body,
                                     ::x10::xrx::Runtime__Profile* prof);
    template<class TPMGL(T)> static TPMGL(T) deref(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > root);
    /* Static field: FMGL(UNCOUNTED_FINISH) */
    static ::x10::xrx::FinishState__UncountedFinish* FMGL(UNCOUNTED_FINISH);
    static void FMGL(UNCOUNTED_FINISH__do_init)();
    static void FMGL(UNCOUNTED_FINISH__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(UNCOUNTED_FINISH__status);
    static ::x10::lang::CheckedThrowable* FMGL(UNCOUNTED_FINISH__exception);
    static ::x10::xrx::FinishState__UncountedFinish* FMGL(UNCOUNTED_FINISH__get)();
    
    virtual ::x10::xrx::FinishState* x10__xrx__FinishState____this__x10__xrx__FinishState(
      );
    void _constructor();
    
    virtual void __fieldInitializers_x10_xrx_FinishState(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_XRX_FINISHSTATE_H

namespace x10 { namespace xrx { 
class FinishState;
} } 

#ifndef X10_XRX_FINISHSTATE_H_NODEPS
#define X10_XRX_FINISHSTATE_H_NODEPS
#include <x10/lang/Boolean.h>
#include <x10/xrx/Configuration.h>
#include <x10/lang/Place.h>
#include <x10/xrx/Activity.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Long.h>
#include <x10/lang/GlobalRef.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/xrx/FinishState__UncountedFinish.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_XRX_FINISHSTATE_H_GENERICS
#define X10_XRX_FINISHSTATE_H_GENERICS
inline x10_boolean x10::xrx::FinishState::FMGL(VERBOSE__get)() {
    if (FMGL(VERBOSE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(VERBOSE__init)();
    }
    return x10::xrx::FinishState::FMGL(VERBOSE);
}

#ifndef X10_XRX_FINISHSTATE_H_deref_3288
#define X10_XRX_FINISHSTATE_H_deref_3288
template<class TPMGL(T)> TPMGL(T) x10::xrx::FinishState::deref(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > root) {
    return ::x10aux::class_cast<TPMGL(T)>(((__extension__ ({
        ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > t__154208 = root;
        if (!((::x10aux::struct_equals(::x10::lang::Place::_make((t__154208)->location),
                                       ::x10::lang::Place::_make(::x10aux::here)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::xrx::FinishState_Strings::sl__171916))));
        }
        t__154208;
    }))
    )->__apply());
    
}
#endif // X10_XRX_FINISHSTATE_H_deref_3288
inline ::x10::xrx::FinishState__UncountedFinish* x10::xrx::FinishState::FMGL(UNCOUNTED_FINISH__get)() {
    if (FMGL(UNCOUNTED_FINISH__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(UNCOUNTED_FINISH__init)();
    }
    return x10::xrx::FinishState::FMGL(UNCOUNTED_FINISH);
}

#endif // X10_XRX_FINISHSTATE_H_GENERICS
#endif // __X10_XRX_FINISHSTATE_H_NODEPS
