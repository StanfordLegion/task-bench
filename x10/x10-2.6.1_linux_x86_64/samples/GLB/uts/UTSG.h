#ifndef __UTSG_H
#define __UTSG_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class OptionsParser;
} } 
namespace x10 { namespace util { 
class Option;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace glb { 
class GLBParameters;
} } 
namespace x10 { namespace lang { 
class Place;
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
template<class TPMGL(U)> class Fun_0_0;
} } 
class Queue;
namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class GLB;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
class UTS;
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class UTSG_Strings {
  public:
    static ::x10::lang::String sl__3263;
    static ::x10::lang::String sl__3294;
    static ::x10::lang::String sl__3291;
    static ::x10::lang::String sl__3279;
    static ::x10::lang::String sl__3270;
    static ::x10::lang::String sl__3278;
    static ::x10::lang::String sl__3281;
    static ::x10::lang::String sl__3276;
    static ::x10::lang::String sl__3283;
    static ::x10::lang::String sl__3284;
    static ::x10::lang::String sl__3282;
    static ::x10::lang::String sl__3262;
    static ::x10::lang::String sl__3293;
    static ::x10::lang::String sl__3267;
    static ::x10::lang::String sl__3280;
    static ::x10::lang::String sl__3274;
    static ::x10::lang::String sl__3285;
    static ::x10::lang::String sl__3288;
    static ::x10::lang::String sl__3266;
    static ::x10::lang::String sl__3286;
    static ::x10::lang::String sl__3268;
    static ::x10::lang::String sl__3290;
    static ::x10::lang::String sl__3273;
    static ::x10::lang::String sl__3275;
    static ::x10::lang::String sl__3269;
    static ::x10::lang::String sl__3272;
    static ::x10::lang::String sl__3295;
    static ::x10::lang::String sl__3264;
    static ::x10::lang::String sl__3265;
    static ::x10::lang::String sl__3277;
    static ::x10::lang::String sl__3271;
    static ::x10::lang::String sl__3289;
    static ::x10::lang::String sl__3296;
    static ::x10::lang::String sl__3287;
    static ::x10::lang::String sl__3292;
};

class UTSG : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10::lang::Rail< x10_long >* compute(::x10::lang::Rail< ::x10::lang::String* >* args);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    static ::x10::lang::Rail< x10_long >* mainTest(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::UTSG* UTSG____this__UTSG();
    void _constructor();
    
    static ::UTSG* _make();
    
    virtual void __fieldInitializers_UTSG();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // UTSG_H

class UTSG;

#ifndef UTSG_H_NODEPS
#define UTSG_H_NODEPS
#ifndef UTSG_H_GENERICS
#define UTSG_H_GENERICS
#endif // UTSG_H_GENERICS
#endif // __UTSG_H_NODEPS
