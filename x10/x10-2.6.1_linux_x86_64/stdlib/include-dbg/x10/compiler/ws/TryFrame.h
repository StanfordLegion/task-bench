#ifndef __X10_COMPILER_WS_TRYFRAME_H
#define __X10_COMPILER_WS_TRYFRAME_H

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
class Abort;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { namespace ws { 

class TryFrame : public ::x10::compiler::ws::RegularFrame   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(::x10::compiler::ws::Frame* up, ::x10::compiler::ws::FinishFrame* ff) {
        
        //#line 22 "x10/compiler/ws/TryFrame.x10"
        (this)->::x10::compiler::ws::RegularFrame::_constructor(up, ff);
        
        //#line 21 "x10/compiler/ws/TryFrame.x10"
        
        //#line 20 "x10/compiler/ws/TryFrame.x10"
        this->x10::compiler::ws::TryFrame::__fieldInitializers_x10_compiler_ws_TryFrame();
    }
    void _constructor(x10_int id__115, ::x10::compiler::ws::TryFrame* o);
    
    virtual void wrapResume(::x10::compiler::ws::Worker* worker);
    virtual ::x10::compiler::ws::TryFrame* x10__compiler__ws__TryFrame____this__x10__compiler__ws__TryFrame(
      );
    virtual void __fieldInitializers_x10_compiler_ws_TryFrame();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_COMPILER_WS_TRYFRAME_H

namespace x10 { namespace compiler { namespace ws { 
class TryFrame;
} } } 

#ifndef X10_COMPILER_WS_TRYFRAME_H_NODEPS
#define X10_COMPILER_WS_TRYFRAME_H_NODEPS
#include <x10/compiler/ws/RegularFrame.h>
#include <x10/compiler/ws/Frame.h>
#include <x10/compiler/ws/FinishFrame.h>
#include <x10/compiler/Header.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Ifdef.h>
#include <x10/compiler/ws/Worker.h>
#include <x10/compiler/Abort.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_COMPILER_WS_TRYFRAME_H_GENERICS
#define X10_COMPILER_WS_TRYFRAME_H_GENERICS
#endif // X10_COMPILER_WS_TRYFRAME_H_GENERICS
#endif // __X10_COMPILER_WS_TRYFRAME_H_NODEPS
