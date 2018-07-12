#ifndef __X10_XRX_FINISHSTATE__UNCOUNTEDFINISH_H
#define __X10_XRX_FINISHSTATE__UNCOUNTEDFINISH_H

#include <x10rt.h>


#define X10_XRX_FINISHSTATE_H_NODEPS
#include <x10/xrx/FinishState.h>
#undef X10_XRX_FINISHSTATE_H_NODEPS
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Activity;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace xrx { 
class Configuration;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishState__UncountedFinish_Strings {
  public:
    static ::x10::lang::String sl__161469;
};

class FinishState__UncountedFinish : public ::x10::xrx::FinishState   {
    public:
    RTT_H_DECLS_CLASS
    
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
    virtual ::x10::xrx::FinishState__UncountedFinish* x10__xrx__FinishState__UncountedFinish____this__x10__xrx__FinishState__UncountedFinish(
      );
    void _constructor();
    
    static ::x10::xrx::FinishState__UncountedFinish* _make();
    
    virtual void __fieldInitializers_x10_xrx_FinishState_UncountedFinish(
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
#endif // X10_XRX_FINISHSTATE__UNCOUNTEDFINISH_H

namespace x10 { namespace xrx { 
class FinishState__UncountedFinish;
} } 

#ifndef X10_XRX_FINISHSTATE__UNCOUNTEDFINISH_H_NODEPS
#define X10_XRX_FINISHSTATE__UNCOUNTEDFINISH_H_NODEPS
#ifndef X10_XRX_FINISHSTATE__UNCOUNTEDFINISH_H_GENERICS
#define X10_XRX_FINISHSTATE__UNCOUNTEDFINISH_H_GENERICS
#endif // X10_XRX_FINISHSTATE__UNCOUNTEDFINISH_H_GENERICS
#endif // __X10_XRX_FINISHSTATE__UNCOUNTEDFINISH_H_NODEPS
