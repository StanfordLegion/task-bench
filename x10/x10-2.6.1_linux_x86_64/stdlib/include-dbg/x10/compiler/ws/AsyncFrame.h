#ifndef __X10_COMPILER_WS_ASYNCFRAME_H
#define __X10_COMPILER_WS_ASYNCFRAME_H

#include <x10rt.h>


#define X10_COMPILER_WS_FRAME_H_NODEPS
#include <x10/compiler/ws/Frame.h>
#undef X10_COMPILER_WS_FRAME_H_NODEPS
namespace x10 { namespace compiler { 
class Header;
} } 
namespace x10 { namespace compiler { namespace ws { 
class FinishFrame;
} } } 
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 
namespace x10 { namespace xrx { 
class Deque;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace compiler { 
class NoInline;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { namespace ws { 

class AsyncFrame : public ::x10::compiler::ws::Frame   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(::x10::compiler::ws::Frame* up) {
        
        //#line 22 "x10/compiler/ws/AsyncFrame.x10"
        (this)->::x10::compiler::ws::Frame::_constructor(up);
        
        //#line 21 "x10/compiler/ws/AsyncFrame.x10"
        
        //#line 20 "x10/compiler/ws/AsyncFrame.x10"
        this->x10::compiler::ws::AsyncFrame::__fieldInitializers_x10_compiler_ws_AsyncFrame();
    }
    void _constructor(x10_int id__111, ::x10::compiler::ws::AsyncFrame* o);
    
    virtual ::x10::compiler::ws::FinishFrame* ff();
    virtual void move(::x10::compiler::ws::FinishFrame* ff) = 0;
    virtual void poll(::x10::compiler::ws::Worker* worker);
    virtual void pollSlow(::x10::compiler::ws::Worker* worker);
    virtual void caught(::x10::lang::Exception* t);
    virtual ::x10::compiler::ws::AsyncFrame* x10__compiler__ws__AsyncFrame____this__x10__compiler__ws__AsyncFrame(
      );
    virtual void __fieldInitializers_x10_compiler_ws_AsyncFrame();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_COMPILER_WS_ASYNCFRAME_H

namespace x10 { namespace compiler { namespace ws { 
class AsyncFrame;
} } } 

#ifndef X10_COMPILER_WS_ASYNCFRAME_H_NODEPS
#define X10_COMPILER_WS_ASYNCFRAME_H_NODEPS
#include <x10/compiler/ws/Frame.h>
#include <x10/compiler/Header.h>
#include <x10/lang/Int.h>
#include <x10/compiler/ws/FinishFrame.h>
#include <x10/compiler/Ifdef.h>
#include <x10/compiler/Inline.h>
#include <x10/compiler/ws/Worker.h>
#include <x10/xrx/Deque.h>
#include <x10/lang/Any.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/compiler/NoInline.h>
#include <x10/lang/Exception.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_COMPILER_WS_ASYNCFRAME_H_GENERICS
#define X10_COMPILER_WS_ASYNCFRAME_H_GENERICS
#endif // X10_COMPILER_WS_ASYNCFRAME_H_GENERICS
#endif // __X10_COMPILER_WS_ASYNCFRAME_H_NODEPS
