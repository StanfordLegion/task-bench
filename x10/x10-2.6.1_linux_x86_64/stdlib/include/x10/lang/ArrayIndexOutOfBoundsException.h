#ifndef __X10_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_H
#define __X10_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_H

#include <x10rt.h>


#define X10_LANG_INDEXOUTOFBOUNDSEXCEPTION_H_NODEPS
#include <x10/lang/IndexOutOfBoundsException.h>
#undef X10_LANG_INDEXOUTOFBOUNDSEXCEPTION_H_NODEPS
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

class ArrayIndexOutOfBoundsException : public ::x10::lang::IndexOutOfBoundsException
  {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor();
    
    static ::x10::lang::ArrayIndexOutOfBoundsException* _make();
    
    void _constructor(::x10::lang::String* message);
    
    static ::x10::lang::ArrayIndexOutOfBoundsException* _make(::x10::lang::String* message);
    
    virtual ::x10::lang::ArrayIndexOutOfBoundsException* x10__lang__ArrayIndexOutOfBoundsException____this__x10__lang__ArrayIndexOutOfBoundsException(
      );
    virtual void __fieldInitializers_x10_lang_ArrayIndexOutOfBoundsException(
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
#endif // X10_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_H

namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 

#ifndef X10_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_H_NODEPS
#define X10_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_H_NODEPS
#ifndef X10_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_H_GENERICS
#define X10_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_H_GENERICS
#endif // X10_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_H_GENERICS
#endif // __X10_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_H_NODEPS
