#ifndef __X10_UTIL_STRINGBUILDER_H
#define __X10_UTIL_STRINGBUILDER_H

#include <x10rt.h>


#define X10_UTIL_BUILDER_H_NODEPS
#include <x10/util/Builder.h>
#undef X10_UTIL_BUILDER_H_NODEPS
#define X10_LANG_CHAR_H_NODEPS
#include <x10/lang/Char.h>
#undef X10_LANG_CHAR_H_NODEPS
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class StringBuilder_Strings {
  public:
    static ::x10::lang::String sl__160546;
};

class StringBuilder : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::util::Builder< ::x10::lang::Any*, ::x10::lang::String*>::itable< ::x10::util::StringBuilder > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::StringBuilder > _itable_1;
    
    ::x10::util::GrowableRail<x10_char>* FMGL(buf);
    
    void _constructor();
    
    static ::x10::util::StringBuilder* _make();
    
    virtual ::x10::lang::String* toString();
    virtual ::x10::util::Builder< ::x10::lang::Any*, ::x10::lang::String*>*
      add(::x10::lang::Any* o);
    virtual ::x10::util::StringBuilder* insert(x10_int p, ::x10::lang::Any* o);
    virtual ::x10::util::StringBuilder* add(x10_char x);
    virtual ::x10::util::StringBuilder* add(x10_boolean x);
    virtual ::x10::util::StringBuilder* add(x10_byte x);
    virtual ::x10::util::StringBuilder* add(x10_short x);
    virtual ::x10::util::StringBuilder* add(x10_int x);
    virtual ::x10::util::StringBuilder* add(x10_long x);
    virtual ::x10::util::StringBuilder* add(x10_float x);
    virtual ::x10::util::StringBuilder* add(x10_double x);
    virtual ::x10::util::StringBuilder* add(::x10::lang::String* x);
    virtual ::x10::util::StringBuilder* insert(x10_int p, x10_boolean x);
    virtual ::x10::util::StringBuilder* insert(x10_int p, x10_byte x);
    virtual ::x10::util::StringBuilder* insert(x10_int p, x10_char x);
    virtual ::x10::util::StringBuilder* insert(x10_int p, x10_short x);
    virtual ::x10::util::StringBuilder* insert(x10_int p, x10_int x);
    virtual ::x10::util::StringBuilder* insert(x10_int p, x10_long x);
    virtual ::x10::util::StringBuilder* insert(x10_int p, x10_float x);
    virtual ::x10::util::StringBuilder* insert(x10_int p, x10_double x);
    virtual ::x10::util::StringBuilder* insert(x10_int p, ::x10::lang::String* x);
    virtual ::x10::util::StringBuilder* addString(::x10::lang::String* s);
    virtual ::x10::util::StringBuilder* insertString(x10_int pos, ::x10::lang::String* s);
    virtual x10_long length();
    virtual ::x10::lang::String* result();
    virtual ::x10::util::StringBuilder* x10__util__StringBuilder____this__x10__util__StringBuilder(
      );
    virtual void __fieldInitializers_x10_util_StringBuilder();
    
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
#endif // X10_UTIL_STRINGBUILDER_H

namespace x10 { namespace util { 
class StringBuilder;
} } 

#ifndef X10_UTIL_STRINGBUILDER_H_NODEPS
#define X10_UTIL_STRINGBUILDER_H_NODEPS
#ifndef X10_UTIL_STRINGBUILDER_H_GENERICS
#define X10_UTIL_STRINGBUILDER_H_GENERICS
#endif // X10_UTIL_STRINGBUILDER_H_GENERICS
#endif // __X10_UTIL_STRINGBUILDER_H_NODEPS
