#ifndef __X10_XRX_FINISHSTATE__FINISHHERE_H
#define __X10_XRX_FINISHSTATE__FINISHHERE_H

#include <x10rt.h>


#define X10_XRX_FINISHSTATE__FINISHSKELETON_H_NODEPS
#include <x10/xrx/FinishState__FinishSkeleton.h>
#undef X10_XRX_FINISHSTATE__FINISHSKELETON_H_NODEPS
#define X10_IO_CUSTOMSERIALIZATION_H_NODEPS
#include <x10/io/CustomSerialization.h>
#undef X10_IO_CUSTOMSERIALIZATION_H_NODEPS
namespace x10 { namespace xrx { 
class FinishState__RootFinishSkeleton;
} } 
namespace x10 { namespace xrx { 
class FinishState__RootFinishSPMD;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace io { 
class Deserializer;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace xrx { 
class FinishState__UncountedFinish;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishState__FinishHere_Strings {
  public:
    static ::x10::lang::String sl__161458;
};

class FinishState__FinishHere : public ::x10::xrx::FinishState__FinishSkeleton
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::CustomSerialization::itable< ::x10::xrx::FinishState__FinishHere > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::xrx::FinishState__FinishHere > _itable_1;
    
    void _constructor();
    
    static ::x10::xrx::FinishState__FinishHere* _make();
    
    void _constructor(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref);
    
    static ::x10::xrx::FinishState__FinishHere* _make(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref);
    
    void _constructor(::x10::io::Deserializer* ds);
    
    static ::x10::xrx::FinishState__FinishHere* _make(::x10::io::Deserializer* ds);
    
    virtual ::x10::xrx::FinishState__FinishHere* x10__xrx__FinishState__FinishHere____this__x10__xrx__FinishState__FinishHere(
      );
    virtual void __fieldInitializers_x10_xrx_FinishState_FinishHere(
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
#endif // X10_XRX_FINISHSTATE__FINISHHERE_H

namespace x10 { namespace xrx { 
class FinishState__FinishHere;
} } 

#ifndef X10_XRX_FINISHSTATE__FINISHHERE_H_NODEPS
#define X10_XRX_FINISHSTATE__FINISHHERE_H_NODEPS
#ifndef X10_XRX_FINISHSTATE__FINISHHERE_H_GENERICS
#define X10_XRX_FINISHSTATE__FINISHHERE_H_GENERICS
#endif // X10_XRX_FINISHSTATE__FINISHHERE_H_GENERICS
#endif // __X10_XRX_FINISHSTATE__FINISHHERE_H_NODEPS
