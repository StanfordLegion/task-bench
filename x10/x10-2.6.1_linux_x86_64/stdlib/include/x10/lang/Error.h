#ifndef __X10_LANG_ERROR_H
#define __X10_LANG_ERROR_H

#include <x10rt.h>


#define X10_LANG_CHECKEDTHROWABLE_H_NODEPS
#include <x10/lang/CheckedThrowable.h>
#undef X10_LANG_CHECKEDTHROWABLE_H_NODEPS
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeRep;
} } 

namespace x10 { namespace lang { 

class Error : public ::x10::lang::CheckedThrowable   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor();
    
    static ::x10::lang::Error* _make();
    
    void _constructor(::x10::lang::String* message);
    
    static ::x10::lang::Error* _make(::x10::lang::String* message);
    
    void _constructor(::x10::lang::CheckedThrowable* cause);
    
    static ::x10::lang::Error* _make(::x10::lang::CheckedThrowable* cause);
    
    void _constructor(::x10::lang::String* message, ::x10::lang::CheckedThrowable* cause);
    
    static ::x10::lang::Error* _make(::x10::lang::String* message, ::x10::lang::CheckedThrowable* cause);
    
    virtual ::x10::lang::Error* x10__lang__Error____this__x10__lang__Error(
      );
    virtual void __fieldInitializers_x10_lang_Error();
    
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
#endif // X10_LANG_ERROR_H

namespace x10 { namespace lang { 
class Error;
} } 

#ifndef X10_LANG_ERROR_H_NODEPS
#define X10_LANG_ERROR_H_NODEPS
#ifndef X10_LANG_ERROR_H_GENERICS
#define X10_LANG_ERROR_H_GENERICS
#endif // X10_LANG_ERROR_H_GENERICS
#endif // __X10_LANG_ERROR_H_NODEPS
