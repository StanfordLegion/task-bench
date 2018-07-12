#ifndef __X10_UTIL_OPTIONSPARSER__ERR_H
#define __X10_UTIL_OPTIONSPARSER__ERR_H

#include <x10rt.h>


#define X10_LANG_EXCEPTION_H_NODEPS
#include <x10/lang/Exception.h>
#undef X10_LANG_EXCEPTION_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class OptionsParser__Err : public ::x10::lang::Exception   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(::x10::lang::String* m);
    
    static ::x10::util::OptionsParser__Err* _make(::x10::lang::String* m);
    
    virtual ::x10::util::OptionsParser__Err* x10__util__OptionsParser__Err____this__x10__util__OptionsParser__Err(
      );
    virtual void __fieldInitializers_x10_util_OptionsParser_Err();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_UTIL_OPTIONSPARSER__ERR_H

namespace x10 { namespace util { 
class OptionsParser__Err;
} } 

#ifndef X10_UTIL_OPTIONSPARSER__ERR_H_NODEPS
#define X10_UTIL_OPTIONSPARSER__ERR_H_NODEPS
#ifndef X10_UTIL_OPTIONSPARSER__ERR_H_GENERICS
#define X10_UTIL_OPTIONSPARSER__ERR_H_GENERICS
#endif // X10_UTIL_OPTIONSPARSER__ERR_H_GENERICS
#endif // __X10_UTIL_OPTIONSPARSER__ERR_H_NODEPS
