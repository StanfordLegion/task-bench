#ifndef __X10_COMPILER_X10JAVADESERIALIZER_H
#define __X10_COMPILER_X10JAVADESERIALIZER_H

#include <x10rt.h>


namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeRep;
} } 

namespace x10 { namespace compiler { 

class X10JavaDeserializer : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual ::x10::compiler::X10JavaDeserializer* x10__compiler__X10JavaDeserializer____this__x10__compiler__X10JavaDeserializer(
      );
    void _constructor();
    
    static ::x10::compiler::X10JavaDeserializer* _make();
    
    virtual void __fieldInitializers_x10_compiler_X10JavaDeserializer(
      );
    
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
#endif // X10_COMPILER_X10JAVADESERIALIZER_H

namespace x10 { namespace compiler { 
class X10JavaDeserializer;
} } 

#ifndef X10_COMPILER_X10JAVADESERIALIZER_H_NODEPS
#define X10_COMPILER_X10JAVADESERIALIZER_H_NODEPS
#ifndef X10_COMPILER_X10JAVADESERIALIZER_H_GENERICS
#define X10_COMPILER_X10JAVADESERIALIZER_H_GENERICS
#endif // X10_COMPILER_X10JAVADESERIALIZER_H_GENERICS
#endif // __X10_COMPILER_X10JAVADESERIALIZER_H_NODEPS
