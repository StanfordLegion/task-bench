#ifndef __X10_XRX_WORKER_H
#define __X10_XRX_WORKER_H

#include <x10rt.h>


#define X10_XRX_THREAD_H_NODEPS
#include <x10/xrx/Thread.h>
#undef X10_XRX_THREAD_H_NODEPS
#define X10_IO_UNSERIALIZABLE_H_NODEPS
#include <x10/io/Unserializable.h>
#undef X10_IO_UNSERIALIZABLE_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace xrx { 
class Activity;
} } 
namespace x10 { namespace xrx { 
class Deque;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace xrx { 
class Workers;
} } 
namespace x10 { namespace xrx { 
class Pool;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace xrx { 
class FinishState__UncountedFinish;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace xrx { 
class Configuration;
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
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Latch;
} } } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace util { namespace concurrent { 
class SimpleLatch;
} } } 
namespace x10 { namespace compiler { 
class NoInline;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class Worker_Strings {
  public:
    static ::x10::lang::String sl__172232;
    static ::x10::lang::String sl__172231;
};

class Worker : public ::x10::xrx::Thread   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::xrx::Worker > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::xrx::Worker > _itable_1;
    
    /* Static field: FMGL(BOUND) */
    static const x10_int FMGL(BOUND) = 100;
    static x10_int FMGL(BOUND__get)();
    
    ::x10::xrx::Activity* FMGL(activity);
    
    x10_boolean FMGL(promoted);
    
    ::x10::xrx::Deque* FMGL(queue);
    
    ::x10::util::Random* FMGL(random);
    
    x10_int FMGL(workerId);
    
    ::x10::xrx::Deque* FMGL(wsfifo);
    
    void _constructor(x10_int workerId);
    
    static ::x10::xrx::Worker* _make(x10_int workerId);
    
    void _constructor(x10_int workerId, x10_boolean promoted, ::x10::lang::String* name);
    
    static ::x10::xrx::Worker* _make(x10_int workerId, x10_boolean promoted,
                                     ::x10::lang::String* name);
    
    void _constructor(x10_int workerId, x10_boolean promoted);
    
    static ::x10::xrx::Worker* _make(x10_int workerId, x10_boolean promoted);
    
    virtual x10_int size();
    virtual ::x10::xrx::Activity* activity();
    virtual ::x10::xrx::Activity* poll();
    virtual ::x10::xrx::Activity* steal();
    virtual void push(::x10::xrx::Activity* activity);
    virtual void __apply();
    x10_boolean loop();
    x10_boolean immediatePollLoop();
    virtual void probe();
    virtual void join(::x10::util::concurrent::SimpleLatch* latch);
    x10_boolean loop2(x10_long epoch, ::x10::util::concurrent::SimpleLatch* latch);
    static void park();
    virtual void unpark();
    virtual ::x10::xrx::Worker* x10__xrx__Worker____this__x10__xrx__Worker(
      );
    virtual void __fieldInitializers_x10_xrx_Worker();
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.xrx.Worker");
    }
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.xrx.Worker");
    }
    
    
};


} } 
#endif // X10_XRX_WORKER_H

namespace x10 { namespace xrx { 
class Worker;
} } 

#ifndef X10_XRX_WORKER_H_NODEPS
#define X10_XRX_WORKER_H_NODEPS
#ifndef X10_XRX_WORKER_H_GENERICS
#define X10_XRX_WORKER_H_GENERICS
inline x10_int x10::xrx::Worker::FMGL(BOUND__get)() {
    return x10::xrx::Worker::FMGL(BOUND);
}

#endif // X10_XRX_WORKER_H_GENERICS
#endif // __X10_XRX_WORKER_H_NODEPS
