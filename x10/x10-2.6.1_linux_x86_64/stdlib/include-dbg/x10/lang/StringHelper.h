#ifndef __X10_LANG_STRINGHELPER_H
#define __X10_LANG_STRINGHELPER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class StringHelper_Strings {
  public:
    static ::x10::lang::String sl__155646;
};

class StringHelper : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10::lang::Rail< ::x10::lang::String* >* split(::x10::lang::String* delim,
                                                            ::x10::lang::String* str);
    virtual ::x10::lang::StringHelper* x10__lang__StringHelper____this__x10__lang__StringHelper(
      );
    void _constructor();
    
    static ::x10::lang::StringHelper* _make();
    
    virtual void __fieldInitializers_x10_lang_StringHelper(
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
#endif // X10_LANG_STRINGHELPER_H

namespace x10 { namespace lang { 
class StringHelper;
} } 

#ifndef X10_LANG_STRINGHELPER_H_NODEPS
#define X10_LANG_STRINGHELPER_H_NODEPS
#ifndef X10_LANG_STRINGHELPER_H_GENERICS
#define X10_LANG_STRINGHELPER_H_GENERICS
#endif // X10_LANG_STRINGHELPER_H_GENERICS
#endif // __X10_LANG_STRINGHELPER_H_NODEPS
