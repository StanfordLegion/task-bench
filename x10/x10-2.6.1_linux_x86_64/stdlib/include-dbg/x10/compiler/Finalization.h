#ifndef __X10_COMPILER_FINALIZATION_H
#define __X10_COMPILER_FINALIZATION_H

#include <x10rt.h>


#define X10_LANG_EXCEPTION_H_NODEPS
#include <x10/lang/Exception.h>
#undef X10_LANG_EXCEPTION_H_NODEPS
#define X10_IO_UNSERIALIZABLE_H_NODEPS
#include <x10/io/Unserializable.h>
#undef X10_IO_UNSERIALIZABLE_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { 

class Finalization : public ::x10::lang::Exception   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::compiler::Finalization > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::compiler::Finalization > _itable_1;
    
    ::x10::lang::Any* FMGL(value);
    
    ::x10::lang::String* FMGL(label);
    
    x10_boolean FMGL(isReturn);
    
    x10_boolean FMGL(isBreak);
    
    x10_boolean FMGL(isContinue);
    
    /* Static field: FMGL(FALLTHROUGH) */
    static ::x10::compiler::Finalization* FMGL(FALLTHROUGH);
    static void FMGL(FALLTHROUGH__do_init)();
    static void FMGL(FALLTHROUGH__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(FALLTHROUGH__status);
    static ::x10::lang::CheckedThrowable* FMGL(FALLTHROUGH__exception);
    static ::x10::compiler::Finalization* FMGL(FALLTHROUGH__get)();
    
    /* Static field: FMGL(RETURN_VOID) */
    static ::x10::compiler::Finalization* FMGL(RETURN_VOID);
    static void FMGL(RETURN_VOID__do_init)();
    static void FMGL(RETURN_VOID__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(RETURN_VOID__status);
    static ::x10::lang::CheckedThrowable* FMGL(RETURN_VOID__exception);
    static ::x10::compiler::Finalization* FMGL(RETURN_VOID__get)();
    
    /* Static field: FMGL(SIMPLE_BREAK) */
    static ::x10::compiler::Finalization* FMGL(SIMPLE_BREAK);
    static void FMGL(SIMPLE_BREAK__do_init)();
    static void FMGL(SIMPLE_BREAK__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(SIMPLE_BREAK__status);
    static ::x10::lang::CheckedThrowable* FMGL(SIMPLE_BREAK__exception);
    static ::x10::compiler::Finalization* FMGL(SIMPLE_BREAK__get)();
    
    /* Static field: FMGL(SIMPLE_CONTINUE) */
    static ::x10::compiler::Finalization* FMGL(SIMPLE_CONTINUE);
    static void FMGL(SIMPLE_CONTINUE__do_init)();
    static void FMGL(SIMPLE_CONTINUE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(SIMPLE_CONTINUE__status);
    static ::x10::lang::CheckedThrowable* FMGL(SIMPLE_CONTINUE__exception);
    static ::x10::compiler::Finalization* FMGL(SIMPLE_CONTINUE__get)();
    
    void _constructor(x10_boolean ret, x10_boolean br, x10_boolean cont);
    
    static ::x10::compiler::Finalization* _make(x10_boolean ret, x10_boolean br,
                                                x10_boolean cont);
    
    static void throwReturn();
    static void throwReturn(::x10::lang::Any* v);
    static void throwBreak();
    static void throwBreak(::x10::lang::String* l);
    static void throwContinue();
    static void throwContinue(::x10::lang::String* l);
    static void plausibleThrow();
    void _constructor();
    
    static ::x10::compiler::Finalization* _make();
    
    virtual ::x10::compiler::Finalization* x10__compiler__Finalization____this__x10__compiler__Finalization(
      );
    virtual void __fieldInitializers_x10_compiler_Finalization();
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.compiler.Finalization");
    }
    
    virtual ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.compiler.Finalization");
    }
    
    
};


} } 
#endif // X10_COMPILER_FINALIZATION_H

namespace x10 { namespace compiler { 
class Finalization;
} } 

#ifndef X10_COMPILER_FINALIZATION_H_NODEPS
#define X10_COMPILER_FINALIZATION_H_NODEPS
#include <x10/lang/Exception.h>
#include <x10/io/Unserializable.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_COMPILER_FINALIZATION_H_GENERICS
#define X10_COMPILER_FINALIZATION_H_GENERICS
inline ::x10::compiler::Finalization* x10::compiler::Finalization::FMGL(FALLTHROUGH__get)() {
    if (FMGL(FALLTHROUGH__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(FALLTHROUGH__init)();
    }
    return x10::compiler::Finalization::FMGL(FALLTHROUGH);
}

inline ::x10::compiler::Finalization* x10::compiler::Finalization::FMGL(RETURN_VOID__get)() {
    if (FMGL(RETURN_VOID__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(RETURN_VOID__init)();
    }
    return x10::compiler::Finalization::FMGL(RETURN_VOID);
}

inline ::x10::compiler::Finalization* x10::compiler::Finalization::FMGL(SIMPLE_BREAK__get)() {
    if (FMGL(SIMPLE_BREAK__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(SIMPLE_BREAK__init)();
    }
    return x10::compiler::Finalization::FMGL(SIMPLE_BREAK);
}

inline ::x10::compiler::Finalization* x10::compiler::Finalization::FMGL(SIMPLE_CONTINUE__get)() {
    if (FMGL(SIMPLE_CONTINUE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(SIMPLE_CONTINUE__init)();
    }
    return x10::compiler::Finalization::FMGL(SIMPLE_CONTINUE);
}

#endif // X10_COMPILER_FINALIZATION_H_GENERICS
#endif // __X10_COMPILER_FINALIZATION_H_NODEPS
