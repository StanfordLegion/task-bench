#ifndef __X10_UTIL_MAPITERATOR_H
#define __X10_UTIL_MAPITERATOR_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

template<class TPMGL(S), class TPMGL(T)> class MapIterator;
template <> class MapIterator<void, void>;
template<class TPMGL(S), class TPMGL(T)> class MapIterator : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Iterator<TPMGL(T)>::template itable< ::x10::util::MapIterator<TPMGL(S), TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::MapIterator<TPMGL(S), TPMGL(T)> > _itable_1;
    
    ::x10::lang::Iterator<TPMGL(S)>* FMGL(i);
    
    ::x10::lang::Fun_0_1<TPMGL(S), TPMGL(T)>* FMGL(f);
    
    void _constructor(::x10::lang::Iterator<TPMGL(S)>* i, ::x10::lang::Fun_0_1<TPMGL(S), TPMGL(T)>* f);
    
    static ::x10::util::MapIterator<TPMGL(S), TPMGL(T)>* _make(::x10::lang::Iterator<TPMGL(S)>* i,
                                                               ::x10::lang::Fun_0_1<TPMGL(S), TPMGL(T)>* f);
    
    virtual x10_boolean hasNext();
    virtual TPMGL(T) next();
    virtual ::x10::util::MapIterator<TPMGL(S), TPMGL(T)>*
      x10__util__MapIterator____this__x10__util__MapIterator(
      );
    virtual void __fieldInitializers_x10_util_MapIterator(
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

template<class TPMGL(S), class TPMGL(T)> ::x10aux::RuntimeType x10::util::MapIterator<TPMGL(S), TPMGL(T)>::rtt;
template<class TPMGL(S), class TPMGL(T)> void x10::util::MapIterator<TPMGL(S), TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::MapIterator<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Iterator<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(S)>(), ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.MapIterator";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 2, params, variances);
}

template <> class MapIterator<void, void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_MAPITERATOR_H

namespace x10 { namespace util { 
template<class TPMGL(S), class TPMGL(T)> class MapIterator;
} } 

#ifndef X10_UTIL_MAPITERATOR_H_NODEPS
#define X10_UTIL_MAPITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_MAPITERATOR_H_GENERICS
#define X10_UTIL_MAPITERATOR_H_GENERICS
#endif // X10_UTIL_MAPITERATOR_H_GENERICS
#ifndef X10_UTIL_MAPITERATOR_H_IMPLEMENTATION
#define X10_UTIL_MAPITERATOR_H_IMPLEMENTATION
#include <x10/util/MapIterator.h>

template<class TPMGL(S), class TPMGL(T)> typename ::x10::lang::Iterator<TPMGL(T)>::template itable< ::x10::util::MapIterator<TPMGL(S), TPMGL(T)> >  x10::util::MapIterator<TPMGL(S), TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &x10::util::MapIterator<TPMGL(S), TPMGL(T)>::hasNext, &::x10::lang::X10Class::hashCode, &x10::util::MapIterator<TPMGL(S), TPMGL(T)>::next, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(S), class TPMGL(T)> ::x10::lang::Any::itable< ::x10::util::MapIterator<TPMGL(S), TPMGL(T)> >  x10::util::MapIterator<TPMGL(S), TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(S), class TPMGL(T)> ::x10aux::itable_entry x10::util::MapIterator<TPMGL(S), TPMGL(T)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterator<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::util::MapIterator<TPMGL(S), TPMGL(T)>")};

//#line 15 "x10/util/MapIterator.x10"

//#line 16 "x10/util/MapIterator.x10"

//#line 18 "x10/util/MapIterator.x10"
template<class TPMGL(S), class TPMGL(T)> void x10::util::MapIterator<TPMGL(S), TPMGL(T)>::_constructor(
                                           ::x10::lang::Iterator<TPMGL(S)>* i,
                                           ::x10::lang::Fun_0_1<TPMGL(S), TPMGL(T)>* f) {
    
    //#line 19 "x10/util/MapIterator.x10"
    this->FMGL(i) = i;
    
    //#line 20 "x10/util/MapIterator.x10"
    this->FMGL(f) = (f);
}
template<class TPMGL(S), class TPMGL(T)> ::x10::util::MapIterator<TPMGL(S), TPMGL(T)>* x10::util::MapIterator<TPMGL(S), TPMGL(T)>::_make(
                                           ::x10::lang::Iterator<TPMGL(S)>* i,
                                           ::x10::lang::Fun_0_1<TPMGL(S), TPMGL(T)>* f)
{
    ::x10::util::MapIterator<TPMGL(S), TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::MapIterator<TPMGL(S), TPMGL(T)> >()) ::x10::util::MapIterator<TPMGL(S), TPMGL(T)>();
    this_->_constructor(i, f);
    return this_;
}



//#line 23 "x10/util/MapIterator.x10"
template<class TPMGL(S), class TPMGL(T)> x10_boolean x10::util::MapIterator<TPMGL(S), TPMGL(T)>::hasNext(
  ) {
    return ::x10::lang::Iterator<TPMGL(S)>::hasNext(::x10aux::nullCheck(this->FMGL(i)));
    
}

//#line 24 "x10/util/MapIterator.x10"
template<class TPMGL(S), class TPMGL(T)> TPMGL(T) x10::util::MapIterator<TPMGL(S), TPMGL(T)>::next(
  ) {
    return ::x10::lang::Fun_0_1<TPMGL(S), TPMGL(T)>::__apply(::x10aux::nullCheck(this->FMGL(f)), 
      ::x10::lang::Iterator<TPMGL(S)>::next(::x10aux::nullCheck(this->FMGL(i))));
    
}

//#line 14 "x10/util/MapIterator.x10"
template<class TPMGL(S), class TPMGL(T)> ::x10::util::MapIterator<TPMGL(S), TPMGL(T)>*
  x10::util::MapIterator<TPMGL(S), TPMGL(T)>::x10__util__MapIterator____this__x10__util__MapIterator(
  ) {
    return this;
    
}
template<class TPMGL(S), class TPMGL(T)> void x10::util::MapIterator<TPMGL(S), TPMGL(T)>::__fieldInitializers_x10_util_MapIterator(
  ) {
 
}
template<class TPMGL(S), class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::MapIterator<TPMGL(S), TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::MapIterator<TPMGL(S), TPMGL(T)>::_deserializer);

template<class TPMGL(S), class TPMGL(T)> void x10::util::MapIterator<TPMGL(S), TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(i));
    buf.write(this->FMGL(f));
    
}

template<class TPMGL(S), class TPMGL(T)> ::x10::lang::Reference* ::x10::util::MapIterator<TPMGL(S), TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::MapIterator<TPMGL(S), TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::MapIterator<TPMGL(S), TPMGL(T)> >()) ::x10::util::MapIterator<TPMGL(S), TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(S), class TPMGL(T)> void x10::util::MapIterator<TPMGL(S), TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(i) = buf.read< ::x10::lang::Iterator<TPMGL(S)>*>();
    FMGL(f) = buf.read< ::x10::lang::Fun_0_1<TPMGL(S), TPMGL(T)>*>();
}

#endif // X10_UTIL_MAPITERATOR_H_IMPLEMENTATION
#endif // __X10_UTIL_MAPITERATOR_H_NODEPS
