#ifndef __X10_XRX_RUNTIME__MEMORYALLOCATOR_H
#define __X10_XRX_RUNTIME__MEMORYALLOCATOR_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class OutOfMemoryError;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class Runtime__MemoryAllocator_Strings {
  public:
    static ::x10::lang::String sl__172209;
};

class Runtime__MemoryAllocator : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(DEFAULT_ALLOCATOR) */
    static ::x10::xrx::Runtime__MemoryAllocator* FMGL(DEFAULT_ALLOCATOR);
    static void FMGL(DEFAULT_ALLOCATOR__do_init)();
    static void FMGL(DEFAULT_ALLOCATOR__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(DEFAULT_ALLOCATOR__status);
    static ::x10::lang::CheckedThrowable* FMGL(DEFAULT_ALLOCATOR__exception);
    static ::x10::xrx::Runtime__MemoryAllocator* FMGL(DEFAULT_ALLOCATOR__get)();
    
    /* Static field: FMGL(ALLOC_HC) */
    static ::x10::xrx::Runtime__MemoryAllocator* FMGL(ALLOC_HC);
    static void FMGL(ALLOC_HC__do_init)();
    static void FMGL(ALLOC_HC__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(ALLOC_HC__status);
    static ::x10::lang::CheckedThrowable* FMGL(ALLOC_HC__exception);
    static ::x10::xrx::Runtime__MemoryAllocator* FMGL(ALLOC_HC__get)();
    
    /* Static field: FMGL(ALLOC_H) */
    static ::x10::xrx::Runtime__MemoryAllocator* FMGL(ALLOC_H);
    static void FMGL(ALLOC_H__do_init)();
    static void FMGL(ALLOC_H__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(ALLOC_H__status);
    static ::x10::lang::CheckedThrowable* FMGL(ALLOC_H__exception);
    static ::x10::xrx::Runtime__MemoryAllocator* FMGL(ALLOC_H__get)();
    
    /* Static field: FMGL(ALLOC_C) */
    static ::x10::xrx::Runtime__MemoryAllocator* FMGL(ALLOC_C);
    static void FMGL(ALLOC_C__do_init)();
    static void FMGL(ALLOC_C__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(ALLOC_C__status);
    static ::x10::lang::CheckedThrowable* FMGL(ALLOC_C__exception);
    static ::x10::xrx::Runtime__MemoryAllocator* FMGL(ALLOC_C__get)();
    
    x10_boolean FMGL(hugePages);
    
    x10_boolean FMGL(congruent);
    
    void _constructor(x10_boolean h, x10_boolean c);
    
    static ::x10::xrx::Runtime__MemoryAllocator* _make(x10_boolean h, x10_boolean c);
    
    static ::x10::xrx::Runtime__MemoryAllocator* requestAllocator(x10_boolean hugePages,
                                                                  x10_boolean congruent);
    static ::x10::xrx::Runtime__MemoryAllocator* requireAllocator(
      x10_boolean hugePages, x10_boolean congruent);
    virtual ::x10::xrx::Runtime__MemoryAllocator* x10__xrx__Runtime__MemoryAllocator____this__x10__xrx__Runtime__MemoryAllocator(
      );
    virtual void __fieldInitializers_x10_xrx_Runtime_MemoryAllocator(
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
#endif // X10_XRX_RUNTIME__MEMORYALLOCATOR_H

namespace x10 { namespace xrx { 
class Runtime__MemoryAllocator;
} } 

#ifndef X10_XRX_RUNTIME__MEMORYALLOCATOR_H_NODEPS
#define X10_XRX_RUNTIME__MEMORYALLOCATOR_H_NODEPS
#include <x10/lang/Boolean.h>
#include <x10/compiler/Native.h>
#include <x10/lang/OutOfMemoryError.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_XRX_RUNTIME__MEMORYALLOCATOR_H_GENERICS
#define X10_XRX_RUNTIME__MEMORYALLOCATOR_H_GENERICS
inline ::x10::xrx::Runtime__MemoryAllocator* x10::xrx::Runtime__MemoryAllocator::FMGL(DEFAULT_ALLOCATOR__get)() {
    if (FMGL(DEFAULT_ALLOCATOR__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(DEFAULT_ALLOCATOR__init)();
    }
    return x10::xrx::Runtime__MemoryAllocator::FMGL(DEFAULT_ALLOCATOR);
}

inline ::x10::xrx::Runtime__MemoryAllocator* x10::xrx::Runtime__MemoryAllocator::FMGL(ALLOC_HC__get)() {
    if (FMGL(ALLOC_HC__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(ALLOC_HC__init)();
    }
    return x10::xrx::Runtime__MemoryAllocator::FMGL(ALLOC_HC);
}

inline ::x10::xrx::Runtime__MemoryAllocator* x10::xrx::Runtime__MemoryAllocator::FMGL(ALLOC_H__get)() {
    if (FMGL(ALLOC_H__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(ALLOC_H__init)();
    }
    return x10::xrx::Runtime__MemoryAllocator::FMGL(ALLOC_H);
}

inline ::x10::xrx::Runtime__MemoryAllocator* x10::xrx::Runtime__MemoryAllocator::FMGL(ALLOC_C__get)() {
    if (FMGL(ALLOC_C__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(ALLOC_C__init)();
    }
    return x10::xrx::Runtime__MemoryAllocator::FMGL(ALLOC_C);
}

#endif // X10_XRX_RUNTIME__MEMORYALLOCATOR_H_GENERICS
#endif // __X10_XRX_RUNTIME__MEMORYALLOCATOR_H_NODEPS
