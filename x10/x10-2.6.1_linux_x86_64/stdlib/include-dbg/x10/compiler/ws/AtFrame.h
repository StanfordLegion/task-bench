#ifndef __X10_COMPILER_WS_ATFRAME_H
#define __X10_COMPILER_WS_ATFRAME_H

#include <x10rt.h>


#define X10_COMPILER_WS_FRAME_H_NODEPS
#include <x10/compiler/ws/Frame.h>
#undef X10_COMPILER_WS_FRAME_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
namespace x10 { namespace compiler { namespace ws { 
class FinishFrame;
} } } 
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace compiler { namespace ws { 
class ThrowFrame;
} } } 
namespace x10 { namespace xrx { 
class Deque;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class RemoteInvocation;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { namespace ws { 

class AtFrame_Strings {
  public:
    static ::x10::lang::String sl__154306;
};

class AtFrame : public ::x10::compiler::ws::Frame   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::GlobalRef< ::x10::compiler::ws::Frame* > FMGL(upRef);
    
    void _constructor(::x10::compiler::ws::Frame* up, ::x10::compiler::ws::FinishFrame* ff);
    
    static ::x10::compiler::ws::AtFrame* _make(::x10::compiler::ws::Frame* up,
                                               ::x10::compiler::ws::FinishFrame* ff);
    
    virtual ::x10::compiler::ws::Frame* remap();
    virtual void wrapResume(::x10::compiler::ws::Worker* worker);
    static void update(::x10::lang::GlobalRef< ::x10::compiler::ws::Frame* > upRef,
                       ::x10::lang::Exception* throwable);
    virtual ::x10::compiler::ws::AtFrame* x10__compiler__ws__AtFrame____this__x10__compiler__ws__AtFrame(
      );
    virtual void __fieldInitializers_x10_compiler_ws_AtFrame(
      );
    
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
#endif // X10_COMPILER_WS_ATFRAME_H

namespace x10 { namespace compiler { namespace ws { 
class AtFrame;
} } } 

#ifndef X10_COMPILER_WS_ATFRAME_H_NODEPS
#define X10_COMPILER_WS_ATFRAME_H_NODEPS
#ifndef X10_COMPILER_WS_ATFRAME_H_GENERICS
#define X10_COMPILER_WS_ATFRAME_H_GENERICS
#endif // X10_COMPILER_WS_ATFRAME_H_GENERICS
#endif // __X10_COMPILER_WS_ATFRAME_H_NODEPS
