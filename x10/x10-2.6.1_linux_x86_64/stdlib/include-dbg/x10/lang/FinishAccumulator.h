#ifndef __X10_LANG_FINISHACCUMULATOR_H
#define __X10_LANG_FINISHACCUMULATOR_H

#include <x10rt.h>


namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

template<class TPMGL(T)> class FinishAccumulator;
template <> class FinishAccumulator<void>;
template<class TPMGL(T)> class FinishAccumulator : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual ::x10::lang::FinishAccumulator<TPMGL(T)>* x10__lang__FinishAccumulator____this__x10__lang__FinishAccumulator(
      );
    void _constructor();
    
    static ::x10::lang::FinishAccumulator<TPMGL(T)>* _make();
    
    virtual void __fieldInitializers_x10_lang_FinishAccumulator();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::lang::FinishAccumulator<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::lang::FinishAccumulator<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::lang::FinishAccumulator<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.lang.FinishAccumulator";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class FinishAccumulator<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_LANG_FINISHACCUMULATOR_H

namespace x10 { namespace lang { 
template<class TPMGL(T)> class FinishAccumulator;
} } 

#ifndef X10_LANG_FINISHACCUMULATOR_H_NODEPS
#define X10_LANG_FINISHACCUMULATOR_H_NODEPS
#include <x10/compiler/Synthetic.h>
#ifndef X10_LANG_FINISHACCUMULATOR_H_GENERICS
#define X10_LANG_FINISHACCUMULATOR_H_GENERICS
#endif // X10_LANG_FINISHACCUMULATOR_H_GENERICS
#ifndef X10_LANG_FINISHACCUMULATOR_H_IMPLEMENTATION
#define X10_LANG_FINISHACCUMULATOR_H_IMPLEMENTATION
#include <x10/lang/FinishAccumulator.h>


//#line 22 "x10/lang/FinishAccumulator.x10"
template<class TPMGL(T)> ::x10::lang::FinishAccumulator<TPMGL(T)>* x10::lang::FinishAccumulator<TPMGL(T)>::x10__lang__FinishAccumulator____this__x10__lang__FinishAccumulator(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::lang::FinishAccumulator<TPMGL(T)>::_constructor(
                           ) {
    this->x10::lang::template FinishAccumulator<TPMGL(T)>::__fieldInitializers_x10_lang_FinishAccumulator();
}
template<class TPMGL(T)> ::x10::lang::FinishAccumulator<TPMGL(T)>* x10::lang::FinishAccumulator<TPMGL(T)>::_make(
                           ) {
    ::x10::lang::FinishAccumulator<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::lang::FinishAccumulator<TPMGL(T)> >()) ::x10::lang::FinishAccumulator<TPMGL(T)>();
    this_->_constructor();
    return this_;
}


template<class TPMGL(T)> void x10::lang::FinishAccumulator<TPMGL(T)>::__fieldInitializers_x10_lang_FinishAccumulator(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::lang::FinishAccumulator<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::lang::FinishAccumulator<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::lang::FinishAccumulator<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::lang::FinishAccumulator<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::lang::FinishAccumulator<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::lang::FinishAccumulator<TPMGL(T)> >()) ::x10::lang::FinishAccumulator<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::lang::FinishAccumulator<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

#endif // X10_LANG_FINISHACCUMULATOR_H_IMPLEMENTATION
#endif // __X10_LANG_FINISHACCUMULATOR_H_NODEPS
