#ifndef __X10_LANG_DEADPLACEEXCEPTION_H
#define __X10_LANG_DEADPLACEEXCEPTION_H

#include <x10rt.h>


#define X10_LANG_EXCEPTION_H_NODEPS
#include <x10/lang/Exception.h>
#undef X10_LANG_EXCEPTION_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class DeadPlaceException_Strings {
  public:
    static ::x10::lang::String sl__165008;
};

class DeadPlaceException : public ::x10::lang::Exception   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Place FMGL(place);
    
    void _constructor();
    
    static ::x10::lang::DeadPlaceException* _make();
    
    void _constructor(::x10::lang::String* message);
    
    static ::x10::lang::DeadPlaceException* _make(::x10::lang::String* message);
    
    void _constructor(::x10::lang::Place p);
    
    static ::x10::lang::DeadPlaceException* _make(::x10::lang::Place p);
    
    void _constructor(::x10::lang::Place p, ::x10::lang::String* message);
    
    static ::x10::lang::DeadPlaceException* _make(::x10::lang::Place p, ::x10::lang::String* message);
    
    virtual ::x10::lang::DeadPlaceException* x10__lang__DeadPlaceException____this__x10__lang__DeadPlaceException(
      );
    virtual void __fieldInitializers_x10_lang_DeadPlaceException(
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
#endif // X10_LANG_DEADPLACEEXCEPTION_H

namespace x10 { namespace lang { 
class DeadPlaceException;
} } 

#ifndef X10_LANG_DEADPLACEEXCEPTION_H_NODEPS
#define X10_LANG_DEADPLACEEXCEPTION_H_NODEPS
#ifndef X10_LANG_DEADPLACEEXCEPTION_H_GENERICS
#define X10_LANG_DEADPLACEEXCEPTION_H_GENERICS
#endif // X10_LANG_DEADPLACEEXCEPTION_H_GENERICS
#endif // __X10_LANG_DEADPLACEEXCEPTION_H_NODEPS
