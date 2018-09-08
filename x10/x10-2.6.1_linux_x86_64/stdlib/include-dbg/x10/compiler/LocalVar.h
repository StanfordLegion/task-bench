#ifndef __X10_COMPILER_LOCALVAR_H
#define __X10_COMPILER_LOCALVAR_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeRep;
} } 

namespace x10 { namespace compiler { 

template<class TPMGL(T)> class LocalVar;
template <> class LocalVar<void>;
template<class TPMGL(T)> class LocalVar : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(TPMGL(T) local);
    
    static ::x10::compiler::LocalVar<TPMGL(T)>* _make(TPMGL(T) local);
    
    virtual TPMGL(T) __apply();
    virtual TPMGL(T) get();
    virtual TPMGL(T) __apply(TPMGL(T) local);
    virtual ::x10::compiler::LocalVar<TPMGL(T)>* x10__compiler__LocalVar____this__x10__compiler__LocalVar(
      );
    virtual void __fieldInitializers_x10_compiler_LocalVar();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::compiler::LocalVar<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::compiler::LocalVar<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::compiler::LocalVar<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.compiler.LocalVar";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class LocalVar<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_COMPILER_LOCALVAR_H

namespace x10 { namespace compiler { 
template<class TPMGL(T)> class LocalVar;
} } 

#ifndef X10_COMPILER_LOCALVAR_H_NODEPS
#define X10_COMPILER_LOCALVAR_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeRep.h>
#ifndef X10_COMPILER_LOCALVAR_H_GENERICS
#define X10_COMPILER_LOCALVAR_H_GENERICS
#endif // X10_COMPILER_LOCALVAR_H_GENERICS
#ifndef X10_COMPILER_LOCALVAR_H_IMPLEMENTATION
#define X10_COMPILER_LOCALVAR_H_IMPLEMENTATION
#include <x10/compiler/LocalVar.h>


//#line 17 "x10/compiler/LocalVar.x10"
template<class TPMGL(T)> void x10::compiler::LocalVar<TPMGL(T)>::_constructor(
                           TPMGL(T) local) {
    
    //#line 14 "x10/compiler/LocalVar.x10"
    this->x10::compiler::template LocalVar<TPMGL(T)>::__fieldInitializers_x10_compiler_LocalVar();
}
template<class TPMGL(T)> ::x10::compiler::LocalVar<TPMGL(T)>* x10::compiler::LocalVar<TPMGL(T)>::_make(
                           TPMGL(T) local) {
    ::x10::compiler::LocalVar<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::compiler::LocalVar<TPMGL(T)> >()) ::x10::compiler::LocalVar<TPMGL(T)>();
    this_->_constructor(local);
    return this_;
}



//#line 19 "x10/compiler/LocalVar.x10"
template<class TPMGL(T)> TPMGL(T) x10::compiler::LocalVar<TPMGL(T)>::__apply(
  ) {
    
    //#line 20 "x10/compiler/LocalVar.x10"
    return ::x10aux::class_cast<TPMGL(T)>(::x10aux::class_cast_unchecked< ::x10::lang::Any*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 22 "x10/compiler/LocalVar.x10"
template<class TPMGL(T)> TPMGL(T) x10::compiler::LocalVar<TPMGL(T)>::get(
  ) {
    
    //#line 23 "x10/compiler/LocalVar.x10"
    return ::x10aux::class_cast<TPMGL(T)>(::x10aux::class_cast_unchecked< ::x10::lang::Any*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 25 "x10/compiler/LocalVar.x10"
template<class TPMGL(T)> TPMGL(T) x10::compiler::LocalVar<TPMGL(T)>::__apply(
  TPMGL(T) local) {
    
    //#line 26 "x10/compiler/LocalVar.x10"
    return local;
    
}

//#line 14 "x10/compiler/LocalVar.x10"
template<class TPMGL(T)> ::x10::compiler::LocalVar<TPMGL(T)>* x10::compiler::LocalVar<TPMGL(T)>::x10__compiler__LocalVar____this__x10__compiler__LocalVar(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::compiler::LocalVar<TPMGL(T)>::__fieldInitializers_x10_compiler_LocalVar(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::compiler::LocalVar<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::compiler::LocalVar<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::compiler::LocalVar<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::compiler::LocalVar<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::compiler::LocalVar<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::compiler::LocalVar<TPMGL(T)> >()) ::x10::compiler::LocalVar<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::compiler::LocalVar<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

#endif // X10_COMPILER_LOCALVAR_H_IMPLEMENTATION
#endif // __X10_COMPILER_LOCALVAR_H_NODEPS
