#ifndef __X10_REGIONARRAY_ARRAY__ANONYMOUS__14520__ANONYMOUS__14577_H
#define __X10_REGIONARRAY_ARRAY__ANONYMOUS__14520__ANONYMOUS__14577_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array__Anonymous__14520;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 

namespace x10 { namespace regionarray { 

template<class TPMGL(T)> class Array__Anonymous__14520__Anonymous__14577;
template <> class Array__Anonymous__14520__Anonymous__14577<void>;
template<class TPMGL(T)> class Array__Anonymous__14520__Anonymous__14577 : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Iterator<TPMGL(T)>::template itable< ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)> > _itable_1;
    
    ::x10::regionarray::Array__Anonymous__14520<TPMGL(T)>* FMGL(out__);
    
    ::x10::lang::Iterator< ::x10::lang::Point*>* FMGL(regIt);
    
    virtual TPMGL(T) next();
    virtual x10_boolean hasNext();
    void _constructor(::x10::regionarray::Array__Anonymous__14520<TPMGL(T)>* out__);
    
    static ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>* _make(
             ::x10::regionarray::Array__Anonymous__14520<TPMGL(T)>* out__);
    
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Iterator<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.regionarray.Array.Anonymous.14520.Anonymous.14577";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class Array__Anonymous__14520__Anonymous__14577<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_REGIONARRAY_ARRAY__ANONYMOUS__14520__ANONYMOUS__14577_H

namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array__Anonymous__14520__Anonymous__14577;
} } 

#ifndef X10_REGIONARRAY_ARRAY__ANONYMOUS__14520__ANONYMOUS__14577_H_NODEPS
#define X10_REGIONARRAY_ARRAY__ANONYMOUS__14520__ANONYMOUS__14577_H_NODEPS
#include <x10/lang/Iterator.h>
#include <x10/regionarray/Array__Anonymous__14520.h>
#include <x10/lang/Point.h>
#include <x10/regionarray/Array.h>
#include <x10/lang/Boolean.h>
#ifndef X10_REGIONARRAY_ARRAY__ANONYMOUS__14520__ANONYMOUS__14577_H_GENERICS
#define X10_REGIONARRAY_ARRAY__ANONYMOUS__14520__ANONYMOUS__14577_H_GENERICS
#endif // X10_REGIONARRAY_ARRAY__ANONYMOUS__14520__ANONYMOUS__14577_H_GENERICS
#ifndef X10_REGIONARRAY_ARRAY__ANONYMOUS__14520__ANONYMOUS__14577_H_IMPLEMENTATION
#define X10_REGIONARRAY_ARRAY__ANONYMOUS__14520__ANONYMOUS__14577_H_IMPLEMENTATION
#include <x10/regionarray/Array__Anonymous__14520__Anonymous__14577.h>

template<class TPMGL(T)> typename ::x10::lang::Iterator<TPMGL(T)>::template itable< ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)> >  x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::hasNext, &::x10::lang::X10Class::hashCode, &x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::next, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)> >  x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterator<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>")};

//#line 422 "x10/regionarray/Array.x10"

//#line 424 "x10/regionarray/Array.x10"

//#line 425 "x10/regionarray/Array.x10"
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::next(
  ) {
    return ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->x10::regionarray::template Array<TPMGL(T)>::__apply(
             ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(this->FMGL(regIt))));
    
}

//#line 426 "x10/regionarray/Array.x10"
template<class TPMGL(T)> x10_boolean x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::hasNext(
  ) {
    return ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(this->FMGL(regIt)));
    
}

//#line 423 "x10/regionarray/Array.x10"
template<class TPMGL(T)> void x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Array__Anonymous__14520<TPMGL(T)>* out__) {
    
    //#line 422 "x10/regionarray/Array.x10"
    this->FMGL(out__) = out__;
    
    //#line 424 "x10/regionarray/Array.x10"
    this->FMGL(regIt) = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(out__))->FMGL(out__))->x10::regionarray::template Array<TPMGL(T)>::iterator();
}
template<class TPMGL(T)> ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>* x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::_make(
                           ::x10::regionarray::Array__Anonymous__14520<TPMGL(T)>* out__)
{
    ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)> >()) ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>();
    this_->_constructor(out__);
    return this_;
}


template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(regIt));
    buf.write(this->FMGL(out__));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)> >()) ::x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::regionarray::Array__Anonymous__14520__Anonymous__14577<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(regIt) = buf.read< ::x10::lang::Iterator< ::x10::lang::Point*>*>();
    FMGL(out__) = buf.read< ::x10::regionarray::Array__Anonymous__14520<TPMGL(T)>*>();
}

#endif // X10_REGIONARRAY_ARRAY__ANONYMOUS__14520__ANONYMOUS__14577_H_IMPLEMENTATION
#endif // __X10_REGIONARRAY_ARRAY__ANONYMOUS__14520__ANONYMOUS__14577_H_NODEPS
