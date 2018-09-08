#ifndef __X10_UTIL_RANDOM_H
#define __X10_UTIL_RANDOM_H

#include <x10rt.h>


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
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace util { namespace concurrent { 
class AtomicLong;
} } } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class Random : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(defaultGen) */
    static ::x10::util::concurrent::AtomicLong* FMGL(defaultGen);
    static void FMGL(defaultGen__do_init)();
    static void FMGL(defaultGen__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(defaultGen__status);
    static ::x10::lang::CheckedThrowable* FMGL(defaultGen__exception);
    static ::x10::util::concurrent::AtomicLong* FMGL(defaultGen__get)();
    
    /* Static field: FMGL(GOLDEN_GAMMA) */
    static const x10_long FMGL(GOLDEN_GAMMA) = -7046029254386353131;
    static x10_long FMGL(GOLDEN_GAMMA__get)();
    
    /* Static field: FMGL(FLOAT_ULP) */
    static x10_float FMGL(FLOAT_ULP);
    static void FMGL(FLOAT_ULP__do_init)();
    static void FMGL(FLOAT_ULP__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(FLOAT_ULP__status);
    static ::x10::lang::CheckedThrowable* FMGL(FLOAT_ULP__exception);
    static x10_float FMGL(FLOAT_ULP__get)();
    
    /* Static field: FMGL(DOUBLE_ULP) */
    static x10_double FMGL(DOUBLE_ULP);
    static void FMGL(DOUBLE_ULP__do_init)();
    static void FMGL(DOUBLE_ULP__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(DOUBLE_ULP__status);
    static ::x10::lang::CheckedThrowable* FMGL(DOUBLE_ULP__exception);
    static x10_double FMGL(DOUBLE_ULP__get)();
    
    x10_long FMGL(seed);
    
    x10_long FMGL(gamma);
    
    x10_double FMGL(storedGaussian);
    
    x10_boolean FMGL(haveStoredGaussian);
    
    void _constructor(x10_long seed, x10_long gamma);
    
    static ::x10::util::Random* _make(x10_long seed, x10_long gamma);
    
    void _constructor(x10_long seed);
    
    static ::x10::util::Random* _make(x10_long seed);
    
    void _constructor();
    
    static ::x10::util::Random* _make();
    
    virtual ::x10::util::Random* split();
    virtual x10_int nextInt();
    virtual x10_int nextInt(x10_int maxPlus1);
    virtual void nextBytes(::x10::lang::Rail< x10_byte >* buf);
    virtual x10_long nextLong();
    virtual x10_long nextLong(x10_long maxPlus1);
    virtual x10_boolean nextBoolean();
    virtual x10_float nextFloat();
    virtual x10_double nextDouble();
    virtual x10_double nextGaussian();
    x10_long nextSeed();
    static x10_long mix64(x10_long z);
    static x10_int mix32(x10_long z);
    static x10_long mix64variant13(x10_long z);
    static x10_long mixGamma(x10_long z);
    virtual ::x10::util::Random* x10__util__Random____this__x10__util__Random(
      );
    virtual void __fieldInitializers_x10_util_Random();
    
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
#endif // X10_UTIL_RANDOM_H

namespace x10 { namespace util { 
class Random;
} } 

#ifndef X10_UTIL_RANDOM_H_NODEPS
#define X10_UTIL_RANDOM_H_NODEPS
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <x10/util/concurrent/AtomicLong.h>
#include <x10/lang/System.h>
#include <x10/lang/Float.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_RANDOM_H_GENERICS
#define X10_UTIL_RANDOM_H_GENERICS
inline ::x10::util::concurrent::AtomicLong* x10::util::Random::FMGL(defaultGen__get)() {
    if (FMGL(defaultGen__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(defaultGen__init)();
    }
    return x10::util::Random::FMGL(defaultGen);
}

inline x10_long x10::util::Random::FMGL(GOLDEN_GAMMA__get)() {
    return x10::util::Random::FMGL(GOLDEN_GAMMA);
}

inline x10_float x10::util::Random::FMGL(FLOAT_ULP__get)() {
    if (FMGL(FLOAT_ULP__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(FLOAT_ULP__init)();
    }
    return x10::util::Random::FMGL(FLOAT_ULP);
}

inline x10_double x10::util::Random::FMGL(DOUBLE_ULP__get)() {
    if (FMGL(DOUBLE_ULP__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(DOUBLE_ULP__init)();
    }
    return x10::util::Random::FMGL(DOUBLE_ULP);
}

#endif // X10_UTIL_RANDOM_H_GENERICS
#endif // __X10_UTIL_RANDOM_H_NODEPS
