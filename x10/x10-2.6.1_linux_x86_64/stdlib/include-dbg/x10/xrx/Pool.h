#ifndef __X10_XRX_POOL_H
#define __X10_XRX_POOL_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { namespace concurrent { 
class Latch;
} } } 
namespace x10 { namespace xrx { 
class Runtime__Watcher;
} } 
namespace x10 { namespace xrx { 
class Workers;
} } 
namespace x10 { namespace xrx { 
class Deque;
} } 
namespace x10 { namespace xrx { 
class Thread;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace xrx { 
class Worker;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class Configuration;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace xrx { 
class Activity;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Condition;
} } } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class Pool_Strings {
  public:
    static ::x10::lang::String sl__161651;
};

class Pool : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::concurrent::Latch* FMGL(latch);
    
    ::x10::xrx::Runtime__Watcher* FMGL(watcher);
    
    ::x10::xrx::Runtime__Watcher* FMGL(cancelWatcher);
    
    x10_boolean FMGL(wsEnd);
    
    ::x10::xrx::Workers* FMGL(workers);
    
    ::x10::xrx::Deque* FMGL(wsBlockedContinuations);
    
    x10_long FMGL(numDead);
    
    virtual void removeThreadLocalContexts();
    virtual void __apply(x10_int n);
    virtual void run();
    virtual void increase();
    virtual ::x10::xrx::Worker* wrapNativeThread();
    virtual void decrease(x10_int n);
    virtual x10_boolean deal(::x10::xrx::Activity* activity);
    virtual void release(x10_boolean promoted);
    virtual ::x10::xrx::Activity* scan(::x10::util::Random* random, ::x10::xrx::Worker* worker);
    virtual x10_int size();
    virtual void flush(x10_long e);
    virtual ::x10::xrx::Pool* x10__xrx__Pool____this__x10__xrx__Pool();
    void _constructor();
    
    static ::x10::xrx::Pool* _make();
    
    virtual void __fieldInitializers_x10_xrx_Pool();
    
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
#endif // X10_XRX_POOL_H

namespace x10 { namespace xrx { 
class Pool;
} } 

#ifndef X10_XRX_POOL_H_NODEPS
#define X10_XRX_POOL_H_NODEPS
#ifndef X10_XRX_POOL_H_GENERICS
#define X10_XRX_POOL_H_GENERICS
#endif // X10_XRX_POOL_H_GENERICS
#endif // __X10_XRX_POOL_H_NODEPS
