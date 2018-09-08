#ifndef __X10_COMPILER_ABORT_H
#define __X10_COMPILER_ABORT_H

#include <x10rt.h>


#define X10_LANG_EXCEPTION_H_NODEPS
#include <x10/lang/Exception.h>
#undef X10_LANG_EXCEPTION_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { 

class Abort : public ::x10::lang::Exception   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(ABORT) */
    static ::x10::compiler::Abort* FMGL(ABORT);
    static void FMGL(ABORT__do_init)();
    static void FMGL(ABORT__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(ABORT__status);
    static ::x10::lang::CheckedThrowable* FMGL(ABORT__exception);
    static ::x10::compiler::Abort* FMGL(ABORT__get)();
    
    void _constructor();
    
    static ::x10::compiler::Abort* _make();
    
    virtual ::x10::compiler::Abort* x10__compiler__Abort____this__x10__compiler__Abort(
      );
    virtual void __fieldInitializers_x10_compiler_Abort();
    
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
#endif // X10_COMPILER_ABORT_H

namespace x10 { namespace compiler { 
class Abort;
} } 

#ifndef X10_COMPILER_ABORT_H_NODEPS
#define X10_COMPILER_ABORT_H_NODEPS
#include <x10/lang/Exception.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_COMPILER_ABORT_H_GENERICS
#define X10_COMPILER_ABORT_H_GENERICS
inline ::x10::compiler::Abort* x10::compiler::Abort::FMGL(ABORT__get)() {
    if (FMGL(ABORT__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(ABORT__init)();
    }
    return x10::compiler::Abort::FMGL(ABORT);
}

#endif // X10_COMPILER_ABORT_H_GENERICS
#endif // __X10_COMPILER_ABORT_H_NODEPS
