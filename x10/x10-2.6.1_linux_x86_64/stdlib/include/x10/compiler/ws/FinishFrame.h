#ifndef __X10_COMPILER_WS_FINISHFRAME_H
#define __X10_COMPILER_WS_FINISHFRAME_H

#include <x10rt.h>


#define X10_COMPILER_WS_FRAME_H_NODEPS
#include <x10/compiler/ws/Frame.h>
#undef X10_COMPILER_WS_FRAME_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace compiler { 
class Uninitialized;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace x10 { namespace compiler { 
class Header;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace util { namespace concurrent { 
class Monitor;
} } } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace lang { 
class MultipleExceptions;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace compiler { 
class NoInline;
} } 
namespace x10 { namespace compiler { 
class NoReturn;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { namespace ws { 

class FinishFrame : public ::x10::compiler::ws::Frame   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_int FMGL(asyncs);
    
    ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* FMGL(exceptions);
    
    ::x10::compiler::ws::FinishFrame* FMGL(redirect);
    
    void _constructor(::x10::compiler::ws::Frame* up) {
        
        //#line 34 "x10/compiler/ws/FinishFrame.x10"
        ::x10::compiler::ws::Frame* this__107607 = this;
        
        //#line 31 "x10/compiler/ws/Frame.x10"
        ::x10aux::nullCheck(this__107607)->FMGL(up) = up;
        
        //#line 33 "x10/compiler/ws/FinishFrame.x10"
        
        //#line 35 "x10/compiler/ws/FinishFrame.x10"
        this->FMGL(exceptions) = (::x10aux::class_cast_unchecked< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        {
            
            //#line 37 "x10/compiler/ws/FinishFrame.x10"
            this->FMGL(redirect) = (::x10aux::class_cast_unchecked< ::x10::compiler::ws::FinishFrame*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
    }
    void _constructor(x10_int id__112, ::x10::compiler::ws::FinishFrame* o);
    
    virtual ::x10::compiler::ws::Frame* remap() = 0;
    virtual ::x10::compiler::ws::Frame* realloc();
    virtual void wrapBack(::x10::compiler::ws::Worker* worker, ::x10::compiler::ws::Frame* frame);
    virtual void wrapResume(::x10::compiler::ws::Worker* worker);
    virtual void append(::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* s);
    virtual void append(::x10::compiler::ws::FinishFrame* ff);
    virtual void caught(::x10::lang::CheckedThrowable* t);
    virtual void rethrow();
    virtual void rethrowSlow() X10_PRAGMA_NORETURN ;
    virtual void check();
    virtual ::x10::compiler::ws::FinishFrame* x10__compiler__ws__FinishFrame____this__x10__compiler__ws__FinishFrame(
      );
    virtual void __fieldInitializers_x10_compiler_ws_FinishFrame(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_COMPILER_WS_FINISHFRAME_H

namespace x10 { namespace compiler { namespace ws { 
class FinishFrame;
} } } 

#ifndef X10_COMPILER_WS_FINISHFRAME_H_NODEPS
#define X10_COMPILER_WS_FINISHFRAME_H_NODEPS
#include <x10/compiler/ws/Frame.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Uninitialized.h>
#include <x10/util/GrowableRail.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Ifdef.h>
#include <x10/compiler/Header.h>
#include <x10/lang/Long.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/util/concurrent/Monitor.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/ws/Worker.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Abort.h>
#include <x10/lang/MultipleExceptions.h>
#include <x10/compiler/Inline.h>
#include <x10/compiler/NoInline.h>
#include <x10/compiler/NoReturn.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_COMPILER_WS_FINISHFRAME_H_GENERICS
#define X10_COMPILER_WS_FINISHFRAME_H_GENERICS
#endif // X10_COMPILER_WS_FINISHFRAME_H_GENERICS
#endif // __X10_COMPILER_WS_FINISHFRAME_H_NODEPS
