#ifndef __X10_INTEROP_JAVA__ARRAY_H
#define __X10_INTEROP_JAVA__ARRAY_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeRep;
} } 

namespace x10 { namespace interop { 

template<class TPMGL(T)> class Java__array;
template <> class Java__array<void>;
template<class TPMGL(T)> class Java__array : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    x10_int FMGL(length);
    
    virtual ::x10::interop::Java__array<TPMGL(T)>* x10__interop__Java__array____this__x10__interop__Java__array(
      );
    virtual void __fieldInitializers_x10_interop_Java_array();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::interop::Java__array<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::interop::Java__array<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::interop::Java__array<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.interop.Java.array";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class Java__array<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_INTEROP_JAVA__ARRAY_H

namespace x10 { namespace interop { 
template<class TPMGL(T)> class Java__array;
} } 

#ifndef X10_INTEROP_JAVA__ARRAY_H_NODEPS
#define X10_INTEROP_JAVA__ARRAY_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeRep.h>
#ifndef X10_INTEROP_JAVA__ARRAY_H_GENERICS
#define X10_INTEROP_JAVA__ARRAY_H_GENERICS
#endif // X10_INTEROP_JAVA__ARRAY_H_GENERICS
#ifndef X10_INTEROP_JAVA__ARRAY_H_IMPLEMENTATION
#define X10_INTEROP_JAVA__ARRAY_H_IMPLEMENTATION
#include <x10/interop/Java__array.h>


//#line 26 "x10/interop/Java.x10"

//#line 29 "x10/interop/Java.x10"

//#line 31 "x10/interop/Java.x10"

//#line 33 "x10/interop/Java.x10"

//#line 24 "x10/interop/Java.x10"
template<class TPMGL(T)> ::x10::interop::Java__array<TPMGL(T)>* x10::interop::Java__array<TPMGL(T)>::x10__interop__Java__array____this__x10__interop__Java__array(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::interop::Java__array<TPMGL(T)>::__fieldInitializers_x10_interop_Java_array(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::interop::Java__array<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::interop::Java__array<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::interop::Java__array<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(length));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::interop::Java__array<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::interop::Java__array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::interop::Java__array<TPMGL(T)> >()) ::x10::interop::Java__array<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::interop::Java__array<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(length) = buf.read<x10_int>();
}

#endif // X10_INTEROP_JAVA__ARRAY_H_IMPLEMENTATION
#endif // __X10_INTEROP_JAVA__ARRAY_H_NODEPS
