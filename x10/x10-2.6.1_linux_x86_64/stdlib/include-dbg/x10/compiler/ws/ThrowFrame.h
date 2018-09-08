#ifndef __X10_COMPILER_WS_THROWFRAME_H
#define __X10_COMPILER_WS_THROWFRAME_H

#include <x10rt.h>


#define X10_COMPILER_WS_FRAME_H_NODEPS
#include <x10/compiler/ws/Frame.h>
#undef X10_COMPILER_WS_FRAME_H_NODEPS
namespace x10 { namespace lang { 
class Exception;
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

class ThrowFrame : public ::x10::compiler::ws::Frame   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Exception* FMGL(throwable);
    
    void _constructor(::x10::compiler::ws::Frame* up, ::x10::lang::Exception* throwable);
    
    static ::x10::compiler::ws::ThrowFrame* _make(::x10::compiler::ws::Frame* up,
                                                  ::x10::lang::Exception* throwable);
    
    virtual ::x10::compiler::ws::Frame* remap();
    virtual void wrapResume(::x10::compiler::ws::Worker* worker);
    virtual ::x10::compiler::ws::ThrowFrame* x10__compiler__ws__ThrowFrame____this__x10__compiler__ws__ThrowFrame(
      );
    virtual void __fieldInitializers_x10_compiler_ws_ThrowFrame(
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
#endif // X10_COMPILER_WS_THROWFRAME_H

namespace x10 { namespace compiler { namespace ws { 
class ThrowFrame;
} } } 

#ifndef X10_COMPILER_WS_THROWFRAME_H_NODEPS
#define X10_COMPILER_WS_THROWFRAME_H_NODEPS
#ifndef X10_COMPILER_WS_THROWFRAME_H_GENERICS
#define X10_COMPILER_WS_THROWFRAME_H_GENERICS
#endif // X10_COMPILER_WS_THROWFRAME_H_GENERICS
#endif // __X10_COMPILER_WS_THROWFRAME_H_NODEPS
