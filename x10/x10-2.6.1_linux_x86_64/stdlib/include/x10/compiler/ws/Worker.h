#ifndef __X10_COMPILER_WS_WORKER_H
#define __X10_COMPILER_WS_WORKER_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace xrx { 
class Deque;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { namespace ws { 
class RegularFrame;
} } } 
namespace x10 { namespace compiler { namespace ws { 
class Frame;
} } } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Monitor;
} } } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace compiler { namespace ws { 
class FinishFrame;
} } } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace xrx { 
class Pool;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace compiler { 
class NoReturn;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace compiler { 
class RemoteInvocation;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace xrx { 
class Worker;
} } 
namespace x10 { namespace xrx { 
class Thread;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace compiler { namespace ws { 
class MainFrame;
} } } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { namespace ws { 

class Worker_Strings {
  public:
    static ::x10::lang::String sl__164343;
    static ::x10::lang::String sl__164342;
};

class Worker : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< ::x10::compiler::ws::Worker* >* FMGL(workers);
    
    ::x10::util::Random* FMGL(random);
    
    x10_int FMGL(id);
    
    ::x10::xrx::Deque* FMGL(deque);
    
    ::x10::xrx::Deque* FMGL(fifo);
    
    ::x10::util::concurrent::Lock* FMGL(lock);
    
    ::x10::lang::Exception* FMGL(throwable);
    
    void _constructor(x10_int i, ::x10::lang::Rail< ::x10::compiler::ws::Worker* >* workers);
    
    static ::x10::compiler::ws::Worker* _make(x10_int i, ::x10::lang::Rail< ::x10::compiler::ws::Worker* >* workers);
    
    virtual void migrate();
    virtual void run();
    virtual ::x10::lang::Any* find();
    virtual void unroll(::x10::compiler::ws::Frame* frame) X10_PRAGMA_NORETURN ;
    static void wsRunAsync(x10_long id, ::x10::lang::VoidFun_0_0* body);
    static void runAsyncAt(::x10::lang::Place place, ::x10::compiler::ws::RegularFrame* frame);
    static void runAt(::x10::lang::Place place, ::x10::compiler::ws::RegularFrame* frame) X10_PRAGMA_NORETURN ;
    static void stop();
    static ::x10::compiler::ws::Worker* startHere();
    static ::x10::compiler::ws::Worker* start();
    static void main(::x10::compiler::ws::MainFrame* frame);
    virtual void rethrow();
    virtual ::x10::compiler::ws::Worker* x10__compiler__ws__Worker____this__x10__compiler__ws__Worker(
      );
    virtual void __fieldInitializers_x10_compiler_ws_Worker();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_COMPILER_WS_WORKER_H

namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 

#ifndef X10_COMPILER_WS_WORKER_H_NODEPS
#define X10_COMPILER_WS_WORKER_H_NODEPS
#ifndef X10_COMPILER_WS_WORKER_H_GENERICS
#define X10_COMPILER_WS_WORKER_H_GENERICS
#endif // X10_COMPILER_WS_WORKER_H_GENERICS
#endif // __X10_COMPILER_WS_WORKER_H_NODEPS
