#ifndef __X10_COMPILER_WS_FRAME_H
#define __X10_COMPILER_WS_FRAME_H

#include <x10rt.h>


namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Uninitialized;
} } 
namespace x10 { namespace compiler { 
class Header;
} } 
namespace x10 { namespace compiler { 
class Ifdef;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { namespace ws { 

class Frame : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::compiler::ws::Frame* FMGL(up);
    
    void _constructor(::x10::compiler::ws::Frame* up) {
        
        //#line 23 "x10/compiler/ws/Frame.x10"
        this->x10::compiler::ws::Frame::__fieldInitializers_x10_compiler_ws_Frame();
        
        //#line 31 "x10/compiler/ws/Frame.x10"
        this->FMGL(up) = up;
    }
    virtual ::x10::compiler::ws::Frame* remap() = 0;
    virtual ::x10::compiler::ws::Frame* realloc();
    virtual void back(::x10::compiler::ws::Worker* worker, ::x10::compiler::ws::Frame* frame);
    virtual void wrapBack(::x10::compiler::ws::Worker* worker, ::x10::compiler::ws::Frame* frame);
    virtual void resume(::x10::compiler::ws::Worker* worker);
    virtual void wrapResume(::x10::compiler::ws::Worker* worker);
    virtual ::x10::compiler::ws::Frame* x10__compiler__ws__Frame____this__x10__compiler__ws__Frame(
      );
    virtual void __fieldInitializers_x10_compiler_ws_Frame();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_COMPILER_WS_FRAME_H

namespace x10 { namespace compiler { namespace ws { 
class Frame;
} } } 

#ifndef X10_COMPILER_WS_FRAME_H_NODEPS
#define X10_COMPILER_WS_FRAME_H_NODEPS
#include <x10/compiler/Native.h>
#include <x10/compiler/Uninitialized.h>
#include <x10/compiler/Header.h>
#include <x10/compiler/Ifdef.h>
#include <x10/compiler/ws/Worker.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_COMPILER_WS_FRAME_H_GENERICS
#define X10_COMPILER_WS_FRAME_H_GENERICS
#endif // X10_COMPILER_WS_FRAME_H_GENERICS
#endif // __X10_COMPILER_WS_FRAME_H_NODEPS
