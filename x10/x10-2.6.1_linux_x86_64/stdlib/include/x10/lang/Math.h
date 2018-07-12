#ifndef __X10_LANG_MATH_H
#define __X10_LANG_MATH_H

#include <x10rt.h>

#include "x10/lang/MathNatives.h"

namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class Complex;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 

namespace x10 { namespace lang { 

class Math : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(E) */
    static x10_double FMGL(E);
    static x10_double FMGL(E__get)();
    
    /* Static field: FMGL(PI) */
    static x10_double FMGL(PI);
    static x10_double FMGL(PI__get)();
    
    static x10_int abs(x10_int a);
    static x10_long abs(x10_long a);
    static x10_double pow(x10_int a, x10_double b);
    static x10_double pow(x10_double a, x10_int b);
    static x10_double pow(x10_int a, x10_int b);
    static x10_double pow(x10_long a, x10_double b);
    static x10_double pow(x10_double a, x10_long b);
    static x10_double pow(x10_long a, x10_long b);
    static x10_complex pow(x10_complex a, x10_complex b);
    static x10_double exp(x10_int a);
    static x10_double exp(x10_long a);
    static x10_complex exp(x10_complex a);
    static x10_complex cos(x10_complex z);
    static x10_complex sin(x10_complex z);
    static x10_complex tan(x10_complex z);
    static x10_complex acos(x10_complex z);
    static x10_complex asin(x10_complex z);
    static x10_complex atan(x10_complex z);
    static x10_complex cosh(x10_complex z);
    static x10_complex sinh(x10_complex z);
    static x10_complex tanh(x10_complex z);
    static x10_double sqrt(x10_int a);
    static x10_double sqrt(x10_long a);
    static x10_complex sqrt(x10_complex z);
    static x10_double log(x10_int a);
    static x10_double log(x10_long a);
    static x10_complex log(x10_complex a);
    static x10_int max(x10_int a, x10_int b);
    static x10_int min(x10_int a, x10_int b);
    static x10_uint max(x10_uint a, x10_uint b);
    static x10_uint min(x10_uint a, x10_uint b);
    static x10_long max(x10_long a, x10_long b);
    static x10_long min(x10_long a, x10_long b);
    static x10_ulong max(x10_ulong a, x10_ulong b);
    static x10_ulong min(x10_ulong a, x10_ulong b);
    static x10_int signum(x10_int a);
    static x10_long signum(x10_long a);
    static x10_float signum(x10_float a);
    static x10_double signum(x10_double a);
    static x10_int nextPowerOf2(x10_int p);
    static x10_long nextPowerOf2(x10_long p);
    static x10_boolean powerOf2(x10_int p);
    static x10_boolean powerOf2(x10_long p);
    static x10_int _kwd__log2(x10_int p);
    static x10_long _kwd__log2(x10_long p);
    static x10_int pow2(x10_int i);
    static x10_long pow2(x10_long i);
    virtual ::x10::lang::Math* x10__lang__Math____this__x10__lang__Math();
    void _constructor();
    
    static ::x10::lang::Math* _make();
    
    virtual void __fieldInitializers_x10_lang_Math();
    
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
#endif // X10_LANG_MATH_H

namespace x10 { namespace lang { 
class Math;
} } 

#ifndef X10_LANG_MATH_H_NODEPS
#define X10_LANG_MATH_H_NODEPS
#ifndef X10_LANG_MATH_H_GENERICS
#define X10_LANG_MATH_H_GENERICS
inline x10_double x10::lang::Math::FMGL(E__get)() {
    return x10::lang::Math::FMGL(E);
}

inline x10_double x10::lang::Math::FMGL(PI__get)() {
    return x10::lang::Math::FMGL(PI);
}

#endif // X10_LANG_MATH_H_GENERICS
#endif // __X10_LANG_MATH_H_NODEPS
