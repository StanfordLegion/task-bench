#ifndef __X10_COMPILER_WS_ROOTFINISH_H
#define __X10_COMPILER_WS_ROOTFINISH_H

#include <x10rt.h>


#define X10_COMPILER_WS_FINISHFRAME_H_NODEPS
#include <x10/compiler/ws/FinishFrame.h>
#undef X10_COMPILER_WS_FINISHFRAME_H_NODEPS
namespace x10 { namespace compiler { namespace ws { 
class Frame;
} } } 
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { namespace ws { 

class RootFinish : public ::x10::compiler::ws::FinishFrame   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor();
    
    static ::x10::compiler::ws::RootFinish* _make();
    
    virtual ::x10::compiler::ws::Frame* remap();
    virtual void wrapResume(::x10::compiler::ws::Worker* worker);
    virtual ::x10::compiler::ws::RootFinish* x10__compiler__ws__RootFinish____this__x10__compiler__ws__RootFinish(
      );
    virtual void __fieldInitializers_x10_compiler_ws_RootFinish();
    
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
#endif // X10_COMPILER_WS_ROOTFINISH_H

namespace x10 { namespace compiler { namespace ws { 
class RootFinish;
} } } 

#ifndef X10_COMPILER_WS_ROOTFINISH_H_NODEPS
#define X10_COMPILER_WS_ROOTFINISH_H_NODEPS
#ifndef X10_COMPILER_WS_ROOTFINISH_H_GENERICS
#define X10_COMPILER_WS_ROOTFINISH_H_GENERICS
#endif // X10_COMPILER_WS_ROOTFINISH_H_GENERICS
#endif // __X10_COMPILER_WS_ROOTFINISH_H_NODEPS
