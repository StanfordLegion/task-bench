#ifndef __X10_LANG_RAILITERATOR_H
#define __X10_LANG_RAILITERATOR_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

template<class TPMGL(T)> class RailIterator;
template <> class RailIterator<void>;
template<class TPMGL(T)> class RailIterator : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Iterator<TPMGL(T)>::template itable< ::x10::lang::RailIterator<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::lang::RailIterator<TPMGL(T)> > _itable_1;
    
    ::x10::lang::Rail< TPMGL(T) >* FMGL(rail);
    
    x10_long FMGL(cur);
    
    void _constructor(::x10::lang::Rail< TPMGL(T) >* x);
    
    static ::x10::lang::RailIterator<TPMGL(T)>* _make(::x10::lang::Rail< TPMGL(T) >* x);
    
    virtual TPMGL(T) next();
    virtual x10_boolean hasNext();
    virtual ::x10::lang::RailIterator<TPMGL(T)>* x10__lang__RailIterator____this__x10__lang__RailIterator(
      );
    virtual void __fieldInitializers_x10_lang_RailIterator();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::lang::RailIterator<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::lang::RailIterator<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::lang::RailIterator<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Iterator<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.lang.RailIterator";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class RailIterator<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_LANG_RAILITERATOR_H

namespace x10 { namespace lang { 
template<class TPMGL(T)> class RailIterator;
} } 

#ifndef X10_LANG_RAILITERATOR_H_NODEPS
#define X10_LANG_RAILITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_LANG_RAILITERATOR_H_GENERICS
#define X10_LANG_RAILITERATOR_H_GENERICS
#endif // X10_LANG_RAILITERATOR_H_GENERICS
#ifndef X10_LANG_RAILITERATOR_H_IMPLEMENTATION
#define X10_LANG_RAILITERATOR_H_IMPLEMENTATION
#include <x10/lang/RailIterator.h>

template<class TPMGL(T)> typename ::x10::lang::Iterator<TPMGL(T)>::template itable< ::x10::lang::RailIterator<TPMGL(T)> >  x10::lang::RailIterator<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &x10::lang::RailIterator<TPMGL(T)>::hasNext, &::x10::lang::X10Class::hashCode, &x10::lang::RailIterator<TPMGL(T)>::next, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::lang::RailIterator<TPMGL(T)> >  x10::lang::RailIterator<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::lang::RailIterator<TPMGL(T)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterator<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::lang::RailIterator<TPMGL(T)>")};

//#line 20 "x10/lang/RailIterator.x10"

//#line 21 "x10/lang/RailIterator.x10"

//#line 23 "x10/lang/RailIterator.x10"
template<class TPMGL(T)> void x10::lang::RailIterator<TPMGL(T)>::_constructor(
                           ::x10::lang::Rail< TPMGL(T) >* x) {
    
    //#line 19 "x10/lang/RailIterator.x10"
    this->x10::lang::template RailIterator<TPMGL(T)>::__fieldInitializers_x10_lang_RailIterator();
    
    //#line 24 "x10/lang/RailIterator.x10"
    this->FMGL(rail) = x;
    
    //#line 25 "x10/lang/RailIterator.x10"
    this->FMGL(cur) = ((x10_long)0ll);
}
template<class TPMGL(T)> ::x10::lang::RailIterator<TPMGL(T)>* x10::lang::RailIterator<TPMGL(T)>::_make(
                           ::x10::lang::Rail< TPMGL(T) >* x) {
    ::x10::lang::RailIterator<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::lang::RailIterator<TPMGL(T)> >()) ::x10::lang::RailIterator<TPMGL(T)>();
    this_->_constructor(x);
    return this_;
}



//#line 28 "x10/lang/RailIterator.x10"
template<class TPMGL(T)> TPMGL(T) x10::lang::RailIterator<TPMGL(T)>::next(
  ) {
    return ::x10aux::nullCheck(this->FMGL(rail))->x10::lang::template Rail< TPMGL(T) >::__apply(
             ((this->FMGL(cur) = ((this->FMGL(cur)) + (((x10_long)1ll)))) - (((x10_long)1ll))));
    
}

//#line 30 "x10/lang/RailIterator.x10"
template<class TPMGL(T)> x10_boolean x10::lang::RailIterator<TPMGL(T)>::hasNext(
  ) {
    return ((this->FMGL(cur)) < ((x10_long)(::x10aux::nullCheck(this->FMGL(rail))->FMGL(size))));
    
}

//#line 19 "x10/lang/RailIterator.x10"
template<class TPMGL(T)> ::x10::lang::RailIterator<TPMGL(T)>*
  x10::lang::RailIterator<TPMGL(T)>::x10__lang__RailIterator____this__x10__lang__RailIterator(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::lang::RailIterator<TPMGL(T)>::__fieldInitializers_x10_lang_RailIterator(
  ) {
    this->FMGL(cur) = ((x10_long)0ll);
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::lang::RailIterator<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::lang::RailIterator<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::lang::RailIterator<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(rail));
    buf.write(this->FMGL(cur));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::lang::RailIterator<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::lang::RailIterator<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::lang::RailIterator<TPMGL(T)> >()) ::x10::lang::RailIterator<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::lang::RailIterator<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(rail) = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
    FMGL(cur) = buf.read<x10_long>();
}

#endif // X10_LANG_RAILITERATOR_H_IMPLEMENTATION
#endif // __X10_LANG_RAILITERATOR_H_NODEPS
