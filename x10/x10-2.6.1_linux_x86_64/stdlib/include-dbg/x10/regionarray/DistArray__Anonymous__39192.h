#ifndef __X10_REGIONARRAY_DISTARRAY__ANONYMOUS__39192_H
#define __X10_REGIONARRAY_DISTARRAY__ANONYMOUS__39192_H

#include <x10rt.h>


#define X10_LANG_REDUCIBLE_H_NODEPS
#include <x10/lang/Reducible.h>
#undef X10_LANG_REDUCIBLE_H_NODEPS
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 

namespace x10 { namespace regionarray { 

template<class TPMGL(U), class TPMGL(T)> class DistArray__Anonymous__39192;
template <> class DistArray__Anonymous__39192<void, void>;
template<class TPMGL(U), class TPMGL(T)> class DistArray__Anonymous__39192 : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Reducible<TPMGL(U)>::template itable< ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)> > _itable_1;
    
    ::x10::regionarray::DistArray<TPMGL(T)>* FMGL(out__);
    
    TPMGL(U) FMGL(unit);
    
    ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* FMGL(gop);
    
    virtual TPMGL(U) zero();
    virtual TPMGL(U) __apply(TPMGL(U) a, TPMGL(U) b);
    void _constructor(::x10::regionarray::DistArray<TPMGL(T)>* out__,
                      TPMGL(U) unit, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* gop);
    
    static ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>* _make(
             ::x10::regionarray::DistArray<TPMGL(T)>* out__,
             TPMGL(U) unit, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* gop);
    
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(U), class TPMGL(T)> ::x10aux::RuntimeType x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::rtt;
template<class TPMGL(U), class TPMGL(T)> void x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::regionarray::DistArray__Anonymous__39192<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Reducible<TPMGL(U)> >()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(U)>(), ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.regionarray.DistArray.Anonymous.39192";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 2, params, variances);
}

template <> class DistArray__Anonymous__39192<void, void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_REGIONARRAY_DISTARRAY__ANONYMOUS__39192_H

namespace x10 { namespace regionarray { 
template<class TPMGL(U), class TPMGL(T)> class DistArray__Anonymous__39192;
} } 

#ifndef X10_REGIONARRAY_DISTARRAY__ANONYMOUS__39192_H_NODEPS
#define X10_REGIONARRAY_DISTARRAY__ANONYMOUS__39192_H_NODEPS
#include <x10/lang/Reducible.h>
#include <x10/regionarray/DistArray.h>
#include <x10/lang/Fun_0_2.h>
#ifndef X10_REGIONARRAY_DISTARRAY__ANONYMOUS__39192_H_GENERICS
#define X10_REGIONARRAY_DISTARRAY__ANONYMOUS__39192_H_GENERICS
#endif // X10_REGIONARRAY_DISTARRAY__ANONYMOUS__39192_H_GENERICS
#ifndef X10_REGIONARRAY_DISTARRAY__ANONYMOUS__39192_H_IMPLEMENTATION
#define X10_REGIONARRAY_DISTARRAY__ANONYMOUS__39192_H_IMPLEMENTATION
#include <x10/regionarray/DistArray__Anonymous__39192.h>

template<class TPMGL(U), class TPMGL(T)> typename ::x10::lang::Reducible<TPMGL(U)>::template itable< ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)> >  x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::__apply, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName, &x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::zero);
template<class TPMGL(U), class TPMGL(T)> ::x10::lang::Any::itable< ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)> >  x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(U), class TPMGL(T)> ::x10aux::itable_entry x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<TPMGL(U)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>")};

//#line 45 "x10/regionarray/DistArray.x10"

//#line 939 "x10/regionarray/DistArray.x10"

//#line 941 "x10/regionarray/DistArray.x10"
template<class TPMGL(U), class TPMGL(T)> TPMGL(U) x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::zero(
  ) {
    return ::x10aux::nullCheck(this)->FMGL(unit);
    
}

//#line 942 "x10/regionarray/DistArray.x10"
template<class TPMGL(U), class TPMGL(T)> TPMGL(U) x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::__apply(
  TPMGL(U) a, TPMGL(U) b) {
    return ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>::__apply(::x10aux::nullCheck(::x10aux::nullCheck(this)->FMGL(gop)), 
      a, b);
    
}

//#line 940 "x10/regionarray/DistArray.x10"
template<class TPMGL(U), class TPMGL(T)> void x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::_constructor(
                                           ::x10::regionarray::DistArray<TPMGL(T)>* out__,
                                           TPMGL(U) unit,
                                           ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* gop) {
    
    //#line 45 "x10/regionarray/DistArray.x10"
    this->FMGL(out__) = out__;
    
    //#line 939 "x10/regionarray/DistArray.x10"
    this->FMGL(unit) = unit;
    this->FMGL(gop) = gop;
}
template<class TPMGL(U), class TPMGL(T)> ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>* x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::_make(
                                           ::x10::regionarray::DistArray<TPMGL(T)>* out__,
                                           TPMGL(U) unit,
                                           ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* gop)
{
    ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)> >()) ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>();
    this_->_constructor(out__, unit, gop);
    return this_;
}


template<class TPMGL(U), class TPMGL(T)> const ::x10aux::serialization_id_t x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::_deserializer);

template<class TPMGL(U), class TPMGL(T)> void x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(unit));
    buf.write(this->FMGL(gop));
    buf.write(this->FMGL(out__));
    
}

template<class TPMGL(U), class TPMGL(T)> ::x10::lang::Reference* ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)> >()) ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(U), class TPMGL(T)> void x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(unit) = buf.read<TPMGL(U)>();
    FMGL(gop) = buf.read< ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>*>();
    FMGL(out__) = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
}

#endif // X10_REGIONARRAY_DISTARRAY__ANONYMOUS__39192_H_IMPLEMENTATION
#endif // __X10_REGIONARRAY_DISTARRAY__ANONYMOUS__39192_H_NODEPS
