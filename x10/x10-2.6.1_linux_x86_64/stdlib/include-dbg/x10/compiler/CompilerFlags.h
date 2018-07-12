#ifndef __X10_COMPILER_COMPILERFLAGS_H
#define __X10_COMPILER_COMPILERFLAGS_H

#include <x10rt.h>


namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class CompileTimeConstant;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { 

class CompilerFlags : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual ::x10::compiler::CompilerFlags* x10__compiler__CompilerFlags____this__x10__compiler__CompilerFlags(
      );
    void _constructor();
    
    static ::x10::compiler::CompilerFlags* _make();
    
    virtual void __fieldInitializers_x10_compiler_CompilerFlags();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_COMPILER_COMPILERFLAGS_H

namespace x10 { namespace compiler { 
class CompilerFlags;
} } 

#ifndef X10_COMPILER_COMPILERFLAGS_H_NODEPS
#define X10_COMPILER_COMPILERFLAGS_H_NODEPS
#ifndef X10_COMPILER_COMPILERFLAGS_H_GENERICS
#define X10_COMPILER_COMPILERFLAGS_H_GENERICS
#endif // X10_COMPILER_COMPILERFLAGS_H_GENERICS
#endif // __X10_COMPILER_COMPILERFLAGS_H_NODEPS
