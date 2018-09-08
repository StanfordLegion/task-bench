#ifndef __UTS_H
#define __UTS_H

#include <x10rt.h>


#define SHA1RAND_H_NODEPS
#include <SHA1Rand.h>
#undef SHA1RAND_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class UTS_Strings {
  public:
    static ::x10::lang::String sl__1718;
    static ::x10::lang::String sl__1721;
    static ::x10::lang::String sl__1720;
    static ::x10::lang::String sl__1719;
    static ::x10::lang::String sl__1716;
    static ::x10::lang::String sl__1722;
    static ::x10::lang::String sl__1717;
};

class UTS : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< ::SHA1Rand >* FMGL(hash);
    
    ::x10::lang::Rail< x10_int >* FMGL(lower);
    
    ::x10::lang::Rail< x10_int >* FMGL(upper);
    
    x10_long FMGL(size);
    
    x10_double FMGL(den);
    
    x10_long FMGL(count);
    
    void _constructor(x10_int factor);
    
    static ::UTS* _make(x10_int factor);
    
    virtual void init(x10_int seed, x10_int height);
    virtual void push(::SHA1Rand h);
    virtual void expand();
    virtual void grow();
    static ::x10::lang::String* sub(::x10::lang::String* str, x10_int start,
                                    x10_int end);
    static void print(x10_long time, x10_long count);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* id__0);
    virtual ::UTS* UTS____this__UTS();
    virtual void __fieldInitializers_UTS();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // UTS_H

class UTS;

#ifndef UTS_H_NODEPS
#define UTS_H_NODEPS
#ifndef UTS_H_GENERICS
#define UTS_H_GENERICS
#endif // UTS_H_GENERICS
#endif // __UTS_H_NODEPS
