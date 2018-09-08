#ifndef __X10_COMPILER_WS_MAINFRAME_H
#define __X10_COMPILER_WS_MAINFRAME_H

#include <x10rt.h>


#define X10_COMPILER_WS_REGULARFRAME_H_NODEPS
#include <x10/compiler/ws/RegularFrame.h>
#undef X10_COMPILER_WS_REGULARFRAME_H_NODEPS
namespace x10 { namespace compiler { namespace ws { 
class Frame;
} } } 
namespace x10 { namespace compiler { namespace ws { 
class FinishFrame;
} } } 
namespace x10 { namespace compiler { 
class Header;
} } 
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { namespace ws { 

class MainFrame : public ::x10::compiler::ws::RegularFrame   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(::x10::compiler::ws::Frame* up, ::x10::compiler::ws::FinishFrame* ff) {
        
        //#line 20 "x10/compiler/ws/MainFrame.x10"
        (this)->::x10::compiler::ws::RegularFrame::_constructor(up, ff);
        
        //#line 19 "x10/compiler/ws/MainFrame.x10"
        
    }
    void _constructor(x10_int id__113, ::x10::compiler::ws::MainFrame* o);
    
    virtual void fast(::x10::compiler::ws::Worker* worker) = 0;
    virtual ::x10::compiler::ws::MainFrame* x10__compiler__ws__MainFrame____this__x10__compiler__ws__MainFrame(
      );
    virtual void __fieldInitializers_x10_compiler_ws_MainFrame();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_COMPILER_WS_MAINFRAME_H

namespace x10 { namespace compiler { namespace ws { 
class MainFrame;
} } } 

#ifndef X10_COMPILER_WS_MAINFRAME_H_NODEPS
#define X10_COMPILER_WS_MAINFRAME_H_NODEPS
#include <x10/compiler/ws/RegularFrame.h>
#include <x10/compiler/ws/Frame.h>
#include <x10/compiler/ws/FinishFrame.h>
#include <x10/compiler/Header.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Ifdef.h>
#include <x10/compiler/ws/Worker.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_COMPILER_WS_MAINFRAME_H_GENERICS
#define X10_COMPILER_WS_MAINFRAME_H_GENERICS
#endif // X10_COMPILER_WS_MAINFRAME_H_GENERICS
#endif // __X10_COMPILER_WS_MAINFRAME_H_NODEPS
