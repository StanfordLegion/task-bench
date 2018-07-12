#ifndef __X10_XRX_GETREGISTRY__GETHANDLE_H
#define __X10_XRX_GETREGISTRY__GETHANDLE_H

#include <x10rt.h>


#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class GetRegistry__GetHandle : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Place FMGL(srcPlace);
    
    ::x10::lang::Any* FMGL(dst);
    
    x10_int FMGL(dstIdx);
    
    x10_int FMGL(numElems);
    
    ::x10::xrx::FinishState* FMGL(finishState);
    
    ::x10::lang::VoidFun_0_0* FMGL(notifier);
    
    void _constructor(::x10::lang::Place srcPlace, ::x10::lang::Any* dst,
                      x10_int dstIdx, x10_int numElems, ::x10::xrx::FinishState* finishState,
                      ::x10::lang::VoidFun_0_0* notifier);
    
    static ::x10::xrx::GetRegistry__GetHandle* _make(::x10::lang::Place srcPlace,
                                                     ::x10::lang::Any* dst,
                                                     x10_int dstIdx,
                                                     x10_int numElems,
                                                     ::x10::xrx::FinishState* finishState,
                                                     ::x10::lang::VoidFun_0_0* notifier);
    
    virtual ::x10::xrx::GetRegistry__GetHandle* x10__xrx__GetRegistry__GetHandle____this__x10__xrx__GetRegistry__GetHandle(
      );
    virtual void __fieldInitializers_x10_xrx_GetRegistry_GetHandle(
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
#endif // X10_XRX_GETREGISTRY__GETHANDLE_H

namespace x10 { namespace xrx { 
class GetRegistry__GetHandle;
} } 

#ifndef X10_XRX_GETREGISTRY__GETHANDLE_H_NODEPS
#define X10_XRX_GETREGISTRY__GETHANDLE_H_NODEPS
#ifndef X10_XRX_GETREGISTRY__GETHANDLE_H_GENERICS
#define X10_XRX_GETREGISTRY__GETHANDLE_H_GENERICS
#endif // X10_XRX_GETREGISTRY__GETHANDLE_H_GENERICS
#endif // __X10_XRX_GETREGISTRY__GETHANDLE_H_NODEPS
