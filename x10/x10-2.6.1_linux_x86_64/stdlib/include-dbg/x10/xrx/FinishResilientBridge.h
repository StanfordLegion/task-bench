#ifndef __X10_XRX_FINISHRESILIENTBRIDGE_H
#define __X10_XRX_FINISHRESILIENTBRIDGE_H

#include <x10rt.h>


#define X10_XRX_FINISHRESILIENT_H_NODEPS
#include <x10/xrx/FinishResilient.h>
#undef X10_XRX_FINISHRESILIENT_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace xrx { 
class Activity;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { namespace concurrent { 
class SimpleLatch;
} } } 
namespace x10 { namespace xrx { 
class Worker;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishResilientBridge : public ::x10::xrx::FinishResilient   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(verbose) */
    static x10_long FMGL(verbose);
    static void FMGL(verbose__do_init)();
    static void FMGL(verbose__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(verbose__status);
    static ::x10::lang::CheckedThrowable* FMGL(verbose__exception);
    static x10_long FMGL(verbose__get)();
    
    static void debug(::x10::lang::String* msg);
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
    virtual void joinFinish(::x10::util::concurrent::SimpleLatch* latch);
    virtual ::x10::xrx::FinishResilientBridge* x10__xrx__FinishResilientBridge____this__x10__xrx__FinishResilientBridge(
      );
    void _constructor();
    
    static ::x10::xrx::FinishResilientBridge* _make();
    
    virtual void __fieldInitializers_x10_xrx_FinishResilientBridge(
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
#endif // X10_XRX_FINISHRESILIENTBRIDGE_H

namespace x10 { namespace xrx { 
class FinishResilientBridge;
} } 

#ifndef X10_XRX_FINISHRESILIENTBRIDGE_H_NODEPS
#define X10_XRX_FINISHRESILIENTBRIDGE_H_NODEPS
#ifndef X10_XRX_FINISHRESILIENTBRIDGE_H_GENERICS
#define X10_XRX_FINISHRESILIENTBRIDGE_H_GENERICS
inline x10_long x10::xrx::FinishResilientBridge::FMGL(verbose__get)() {
    if (FMGL(verbose__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(verbose__init)();
    }
    return x10::xrx::FinishResilientBridge::FMGL(verbose);
}

#endif // X10_XRX_FINISHRESILIENTBRIDGE_H_GENERICS
#endif // __X10_XRX_FINISHRESILIENTBRIDGE_H_NODEPS
