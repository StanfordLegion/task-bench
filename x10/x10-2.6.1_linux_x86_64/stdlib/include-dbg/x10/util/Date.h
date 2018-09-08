#ifndef __X10_UTIL_DATE_H
#define __X10_UTIL_DATE_H

#include <x10rt.h>

#include "x10/lang/RuntimeNatives.h"

#define X10_LANG_COMPARABLE_H_NODEPS
#include <x10/lang/Comparable.h>
#undef X10_LANG_COMPARABLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 

namespace x10 { namespace util { 

class Date : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::x10::lang::X10Class::equals;
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Comparable< ::x10::util::Date* >::itable< ::x10::util::Date > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::Date > _itable_1;
    
    x10_long FMGL(millis);
    
    void _constructor();
    
    static ::x10::util::Date* _make();
    
    void _constructor(x10_long millis);
    
    static ::x10::util::Date* _make(x10_long millis);
    
    virtual x10_long getTime();
    virtual void setTime(x10_long millis);
    virtual x10_int compareTo(::x10::util::Date* x);
    virtual x10_boolean equals(::x10::util::Date* x);
    virtual x10_boolean before(::x10::util::Date* x);
    virtual x10_boolean after(::x10::util::Date* x);
    virtual ::x10::lang::String* toString();
    virtual ::x10::util::Date* x10__util__Date____this__x10__util__Date();
    virtual void __fieldInitializers_x10_util_Date();
    
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
#endif // X10_UTIL_DATE_H

namespace x10 { namespace util { 
class Date;
} } 

#ifndef X10_UTIL_DATE_H_NODEPS
#define X10_UTIL_DATE_H_NODEPS
#ifndef X10_UTIL_DATE_H_GENERICS
#define X10_UTIL_DATE_H_GENERICS
#endif // X10_UTIL_DATE_H_GENERICS
#endif // __X10_UTIL_DATE_H_NODEPS
