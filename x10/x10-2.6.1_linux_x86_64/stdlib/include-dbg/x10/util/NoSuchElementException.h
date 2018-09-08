#ifndef __X10_UTIL_NOSUCHELEMENTEXCEPTION_H
#define __X10_UTIL_NOSUCHELEMENTEXCEPTION_H

#include <x10rt.h>


#define X10_LANG_EXCEPTION_H_NODEPS
#include <x10/lang/Exception.h>
#undef X10_LANG_EXCEPTION_H_NODEPS
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

namespace x10 { namespace util { 

class NoSuchElementException : public ::x10::lang::Exception   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor();
    
    static ::x10::util::NoSuchElementException* _make();
    
    void _constructor(::x10::lang::String* message);
    
    static ::x10::util::NoSuchElementException* _make(::x10::lang::String* message);
    
    virtual ::x10::util::NoSuchElementException* x10__util__NoSuchElementException____this__x10__util__NoSuchElementException(
      );
    virtual void __fieldInitializers_x10_util_NoSuchElementException(
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
#endif // X10_UTIL_NOSUCHELEMENTEXCEPTION_H

namespace x10 { namespace util { 
class NoSuchElementException;
} } 

#ifndef X10_UTIL_NOSUCHELEMENTEXCEPTION_H_NODEPS
#define X10_UTIL_NOSUCHELEMENTEXCEPTION_H_NODEPS
#ifndef X10_UTIL_NOSUCHELEMENTEXCEPTION_H_GENERICS
#define X10_UTIL_NOSUCHELEMENTEXCEPTION_H_GENERICS
#endif // X10_UTIL_NOSUCHELEMENTEXCEPTION_H_GENERICS
#endif // __X10_UTIL_NOSUCHELEMENTEXCEPTION_H_NODEPS
