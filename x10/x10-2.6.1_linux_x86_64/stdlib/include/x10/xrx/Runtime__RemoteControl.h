#ifndef __X10_XRX_RUNTIME__REMOTECONTROL_H
#define __X10_XRX_RUNTIME__REMOTECONTROL_H

#include <x10rt.h>


#define X10_UTIL_CONCURRENT_SIMPLELATCH_H_NODEPS
#include <x10/util/concurrent/SimpleLatch.h>
#undef X10_UTIL_CONCURRENT_SIMPLELATCH_H_NODEPS
#define X10_XRX_RUNTIME__MORTAL_H_NODEPS
#include <x10/xrx/Runtime__Mortal.h>
#undef X10_XRX_RUNTIME__MORTAL_H_NODEPS
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Clock__ClockPhases;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class Runtime__RemoteControl : public ::x10::util::concurrent::SimpleLatch
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::xrx::Runtime__RemoteControl > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::xrx::Runtime__RemoteControl > _itable_1;
    
    static ::x10::xrx::Runtime__Mortal::itable< ::x10::xrx::Runtime__RemoteControl > _itable_2;
    
    virtual x10_boolean _isMortal() { return true; }
    
    void _constructor();
    
    static ::x10::xrx::Runtime__RemoteControl* _make();
    
    ::x10::lang::CheckedThrowable* FMGL(e);
    
    ::x10::lang::Clock__ClockPhases* FMGL(clockPhases);
    
    virtual ::x10::xrx::Runtime__RemoteControl* x10__xrx__Runtime__RemoteControl____this__x10__xrx__Runtime__RemoteControl(
      );
    virtual void __fieldInitializers_x10_xrx_Runtime_RemoteControl(
      );
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.xrx.Runtime$RemoteControl");
    }
    
    virtual ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.xrx.Runtime$RemoteControl");
    }
    
    
};


} } 
#endif // X10_XRX_RUNTIME__REMOTECONTROL_H

namespace x10 { namespace xrx { 
class Runtime__RemoteControl;
} } 

#ifndef X10_XRX_RUNTIME__REMOTECONTROL_H_NODEPS
#define X10_XRX_RUNTIME__REMOTECONTROL_H_NODEPS
#ifndef X10_XRX_RUNTIME__REMOTECONTROL_H_GENERICS
#define X10_XRX_RUNTIME__REMOTECONTROL_H_GENERICS
#endif // X10_XRX_RUNTIME__REMOTECONTROL_H_GENERICS
#endif // __X10_XRX_RUNTIME__REMOTECONTROL_H_NODEPS
