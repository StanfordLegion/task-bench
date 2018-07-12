#ifndef __X10_LANG_ACC_H
#define __X10_LANG_ACC_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class Acc : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void supply(::x10::lang::Any* t) = 0;
    virtual void reset(::x10::lang::Any* t) = 0;
    virtual ::x10::lang::Any* result() = 0;
    virtual ::x10::lang::Any* calcResult() = 0;
    virtual void acceptResult(::x10::lang::Any* a) = 0;
    virtual ::x10::lang::GlobalRef< ::x10::lang::Acc* > getRoot() = 0;
    virtual ::x10::lang::Place home() = 0;
    virtual ::x10::lang::Acc* x10__lang__Acc____this__x10__lang__Acc();
    void _constructor();
    
    virtual void __fieldInitializers_x10_lang_Acc();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_LANG_ACC_H

namespace x10 { namespace lang { 
class Acc;
} } 

#ifndef X10_LANG_ACC_H_NODEPS
#define X10_LANG_ACC_H_NODEPS
#ifndef X10_LANG_ACC_H_GENERICS
#define X10_LANG_ACC_H_GENERICS
#endif // X10_LANG_ACC_H_GENERICS
#endif // __X10_LANG_ACC_H_NODEPS
