#ifndef __X10_XRX_WORKERS_H
#define __X10_XRX_WORKERS_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace xrx { 
class Deque;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace xrx { 
class Worker;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class InternalError;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace xrx { 
class Activity;
} } 
namespace x10 { namespace xrx { 
class FinishState__FinishStates;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class Workers_Strings {
  public:
    static ::x10::lang::String sl__161706;
    static ::x10::lang::String sl__161708;
    static ::x10::lang::String sl__161709;
    static ::x10::lang::String sl__161707;
};

class Workers : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(epoch);
    
    ::x10::util::concurrent::Lock* FMGL(lock);
    
    ::x10::xrx::Deque* FMGL(inboundTasks);
    
    ::x10::lang::Rail< ::x10::xrx::Worker* >* FMGL(workers);
    
    ::x10::lang::Rail< ::x10::xrx::Worker* >* FMGL(parkedWorkers);
    
    x10_int FMGL(count);
    
    x10_int FMGL(spareCount);
    
    x10_int FMGL(idleCount);
    
    x10_int FMGL(deadCount);
    
    x10_int FMGL(spareNeeded);
    
    x10_boolean FMGL(multiplace);
    
    x10_boolean FMGL(busyWaiting);
    
    x10_boolean FMGL(probing);
    
    virtual void reduce(x10_int n);
    virtual x10_int increase();
    virtual x10_int promote();
    virtual void check(x10_int new_count);
    virtual void convert();
    virtual ::x10::xrx::Activity* yield(::x10::xrx::Worker* worker);
    virtual ::x10::xrx::Activity* take(::x10::xrx::Worker* worker);
    virtual void submit(::x10::xrx::Activity* activity);
    virtual ::x10::xrx::Activity* probeInbound();
    virtual x10_boolean give(::x10::xrx::Activity* activity);
    virtual void reclaim(x10_boolean promoted);
    virtual ::x10::xrx::Worker* __apply(x10_int i);
    virtual void __set(x10_int i, ::x10::xrx::Worker* worker);
    virtual void flush(x10_long e);
    virtual ::x10::xrx::Workers* x10__xrx__Workers____this__x10__xrx__Workers(
      );
    void _constructor();
    
    static ::x10::xrx::Workers* _make();
    
    virtual void __fieldInitializers_x10_xrx_Workers();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_XRX_WORKERS_H

namespace x10 { namespace xrx { 
class Workers;
} } 

#ifndef X10_XRX_WORKERS_H_NODEPS
#define X10_XRX_WORKERS_H_NODEPS
#ifndef X10_XRX_WORKERS_H_GENERICS
#define X10_XRX_WORKERS_H_GENERICS
#endif // X10_XRX_WORKERS_H_GENERICS
#endif // __X10_XRX_WORKERS_H_NODEPS
