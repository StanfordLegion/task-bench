#ifndef __X10_UTIL_MISSINGRESOURCEEXCEPTION_H
#define __X10_UTIL_MISSINGRESOURCEEXCEPTION_H

#include <x10rt.h>


#define X10_LANG_EXCEPTION_H_NODEPS
#include <x10/lang/Exception.h>
#undef X10_LANG_EXCEPTION_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeRep;
} } 

namespace x10 { namespace util { 

class MissingResourceException : public ::x10::lang::Exception   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::String* FMGL(className);
    
    ::x10::lang::String* FMGL(key);
    
    void _constructor(::x10::lang::String* message, ::x10::lang::String* className,
                      ::x10::lang::String* key);
    
    static ::x10::util::MissingResourceException* _make(::x10::lang::String* message,
                                                        ::x10::lang::String* className,
                                                        ::x10::lang::String* key);
    
    void _constructor(::x10::lang::String* message, ::x10::lang::String* className,
                      ::x10::lang::String* key, ::x10::lang::CheckedThrowable* cause);
    
    static ::x10::util::MissingResourceException* _make(::x10::lang::String* message,
                                                        ::x10::lang::String* className,
                                                        ::x10::lang::String* key,
                                                        ::x10::lang::CheckedThrowable* cause);
    
    virtual ::x10::lang::String* getClassName();
    virtual ::x10::lang::String* getKey();
    virtual ::x10::util::MissingResourceException* x10__util__MissingResourceException____this__x10__util__MissingResourceException(
      );
    virtual void __fieldInitializers_x10_util_MissingResourceException(
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
#endif // X10_UTIL_MISSINGRESOURCEEXCEPTION_H

namespace x10 { namespace util { 
class MissingResourceException;
} } 

#ifndef X10_UTIL_MISSINGRESOURCEEXCEPTION_H_NODEPS
#define X10_UTIL_MISSINGRESOURCEEXCEPTION_H_NODEPS
#ifndef X10_UTIL_MISSINGRESOURCEEXCEPTION_H_GENERICS
#define X10_UTIL_MISSINGRESOURCEEXCEPTION_H_GENERICS
#endif // X10_UTIL_MISSINGRESOURCEEXCEPTION_H_GENERICS
#endif // __X10_UTIL_MISSINGRESOURCEEXCEPTION_H_NODEPS
