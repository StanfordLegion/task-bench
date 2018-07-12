#ifndef __X10_UTIL_ARRAYLIST__IT_H
#define __X10_UTIL_ARRAYLIST__IT_H

#include <x10rt.h>


#define X10_UTIL_LISTITERATOR_H_NODEPS
#include <x10/util/ListIterator.h>
#undef X10_UTIL_LISTITERATOR_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

template<class TPMGL(S)> class ArrayList__It;
template <> class ArrayList__It<void>;
template<class TPMGL(S)> class ArrayList__It : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[5];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::util::ListIterator<TPMGL(S)>::template itable< ::x10::util::ArrayList__It<TPMGL(S)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::ArrayList__It<TPMGL(S)> > _itable_1;
    
    static typename ::x10::util::CollectionIterator<TPMGL(S)>::template itable< ::x10::util::ArrayList__It<TPMGL(S)> > _itable_2;
    
    static typename ::x10::lang::Iterator<TPMGL(S)>::template itable< ::x10::util::ArrayList__It<TPMGL(S)> > _itable_3;
    
    x10_long FMGL(i);
    
    ::x10::util::ArrayList<TPMGL(S)>* FMGL(al);
    
    void _constructor(::x10::util::ArrayList<TPMGL(S)>* al);
    
    static ::x10::util::ArrayList__It<TPMGL(S)>* _make(::x10::util::ArrayList<TPMGL(S)>* al);
    
    void _constructor(::x10::util::ArrayList<TPMGL(S)>* al, x10_long i);
    
    static ::x10::util::ArrayList__It<TPMGL(S)>* _make(::x10::util::ArrayList<TPMGL(S)>* al,
                                                       x10_long i);
    
    virtual x10_boolean hasNext();
    virtual x10_long nextIndex();
    virtual TPMGL(S) next();
    virtual x10_boolean hasPrevious();
    virtual x10_long previousIndex();
    virtual TPMGL(S) previous();
    virtual void remove();
    virtual void set(TPMGL(S) v);
    virtual void add(TPMGL(S) v);
    virtual ::x10::util::ArrayList__It<TPMGL(S)>* x10__util__ArrayList__It____this__x10__util__ArrayList__It(
      );
    virtual void __fieldInitializers_x10_util_ArrayList_It(
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

template<class TPMGL(S)> ::x10aux::RuntimeType x10::util::ArrayList__It<TPMGL(S)>::rtt;
template<class TPMGL(S)> void x10::util::ArrayList__It<TPMGL(S)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::ArrayList__It<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::util::ListIterator<TPMGL(S)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(S)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.ArrayList.It";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class ArrayList__It<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_ARRAYLIST__IT_H

namespace x10 { namespace util { 
template<class TPMGL(S)> class ArrayList__It;
} } 

#ifndef X10_UTIL_ARRAYLIST__IT_H_NODEPS
#define X10_UTIL_ARRAYLIST__IT_H_NODEPS
#include <x10/util/ListIterator.h>
#include <x10/lang/Long.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Boolean.h>
#include <x10/util/GrowableRail.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_ARRAYLIST__IT_H_GENERICS
#define X10_UTIL_ARRAYLIST__IT_H_GENERICS
#endif // X10_UTIL_ARRAYLIST__IT_H_GENERICS
#ifndef X10_UTIL_ARRAYLIST__IT_H_IMPLEMENTATION
#define X10_UTIL_ARRAYLIST__IT_H_IMPLEMENTATION
#include <x10/util/ArrayList__It.h>

template<class TPMGL(S)> typename ::x10::util::ListIterator<TPMGL(S)>::template itable< ::x10::util::ArrayList__It<TPMGL(S)> >  x10::util::ArrayList__It<TPMGL(S)>::_itable_0(&x10::util::ArrayList__It<TPMGL(S)>::add, &::x10::lang::X10Class::equals, &x10::util::ArrayList__It<TPMGL(S)>::hasNext, &x10::util::ArrayList__It<TPMGL(S)>::hasPrevious, &::x10::lang::X10Class::hashCode, &x10::util::ArrayList__It<TPMGL(S)>::next, &x10::util::ArrayList__It<TPMGL(S)>::nextIndex, &x10::util::ArrayList__It<TPMGL(S)>::previous, &x10::util::ArrayList__It<TPMGL(S)>::previousIndex, &x10::util::ArrayList__It<TPMGL(S)>::remove, &x10::util::ArrayList__It<TPMGL(S)>::set, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(S)> ::x10::lang::Any::itable< ::x10::util::ArrayList__It<TPMGL(S)> >  x10::util::ArrayList__It<TPMGL(S)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(S)> typename ::x10::util::CollectionIterator<TPMGL(S)>::template itable< ::x10::util::ArrayList__It<TPMGL(S)> >  x10::util::ArrayList__It<TPMGL(S)>::_itable_2(&::x10::lang::X10Class::equals, &x10::util::ArrayList__It<TPMGL(S)>::hasNext, &::x10::lang::X10Class::hashCode, &x10::util::ArrayList__It<TPMGL(S)>::next, &x10::util::ArrayList__It<TPMGL(S)>::remove, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(S)> typename ::x10::lang::Iterator<TPMGL(S)>::template itable< ::x10::util::ArrayList__It<TPMGL(S)> >  x10::util::ArrayList__It<TPMGL(S)>::_itable_3(&::x10::lang::X10Class::equals, &x10::util::ArrayList__It<TPMGL(S)>::hasNext, &::x10::lang::X10Class::hashCode, &x10::util::ArrayList__It<TPMGL(S)>::next, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(S)> ::x10aux::itable_entry x10::util::ArrayList__It<TPMGL(S)>::_itables[5] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::ListIterator<TPMGL(S)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::CollectionIterator<TPMGL(S)> >, &_itable_2), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterator<TPMGL(S)> >, &_itable_3), ::x10aux::itable_entry(NULL, (void*)"::x10::util::ArrayList__It<TPMGL(S)>")};

//#line 190 "x10/util/ArrayList.x10"

//#line 191 "x10/util/ArrayList.x10"

//#line 193 "x10/util/ArrayList.x10"
template<class TPMGL(S)> void x10::util::ArrayList__It<TPMGL(S)>::_constructor(
                           ::x10::util::ArrayList<TPMGL(S)>* al) {
    
    //#line 194 "x10/util/ArrayList.x10"
    (this)->::x10::util::ArrayList__It<TPMGL(S)>::_constructor(al, ((x10_long)-1ll));
    
}
template<class TPMGL(S)> ::x10::util::ArrayList__It<TPMGL(S)>* x10::util::ArrayList__It<TPMGL(S)>::_make(
                           ::x10::util::ArrayList<TPMGL(S)>* al) {
    ::x10::util::ArrayList__It<TPMGL(S)>* this_ = new (::x10aux::alloc_z< ::x10::util::ArrayList__It<TPMGL(S)> >()) ::x10::util::ArrayList__It<TPMGL(S)>();
    this_->_constructor(al);
    return this_;
}



//#line 197 "x10/util/ArrayList.x10"
template<class TPMGL(S)> void x10::util::ArrayList__It<TPMGL(S)>::_constructor(
                           ::x10::util::ArrayList<TPMGL(S)>* al, x10_long i) {
    
    //#line 188 "x10/util/ArrayList.x10"
    this->x10::util::template ArrayList__It<TPMGL(S)>::__fieldInitializers_x10_util_ArrayList_It();
    
    //#line 198 "x10/util/ArrayList.x10"
    this->FMGL(al) = al;
    
    //#line 199 "x10/util/ArrayList.x10"
    this->FMGL(i) = i;
}
template<class TPMGL(S)> ::x10::util::ArrayList__It<TPMGL(S)>* x10::util::ArrayList__It<TPMGL(S)>::_make(
                           ::x10::util::ArrayList<TPMGL(S)>* al,
                           x10_long i) {
    ::x10::util::ArrayList__It<TPMGL(S)>* this_ = new (::x10aux::alloc_z< ::x10::util::ArrayList__It<TPMGL(S)> >()) ::x10::util::ArrayList__It<TPMGL(S)>();
    this_->_constructor(al, i);
    return this_;
}



//#line 202 "x10/util/ArrayList.x10"
template<class TPMGL(S)> x10_boolean x10::util::ArrayList__It<TPMGL(S)>::hasNext(
  ) {
    
    //#line 203 "x10/util/ArrayList.x10"
    return ((((this->FMGL(i)) + (((x10_long)1ll)))) < (::x10aux::nullCheck(this->FMGL(al))->size()));
    
}

//#line 206 "x10/util/ArrayList.x10"
template<class TPMGL(S)> x10_long x10::util::ArrayList__It<TPMGL(S)>::nextIndex(
  ) {
    
    //#line 207 "x10/util/ArrayList.x10"
    return this->FMGL(i) = ((this->FMGL(i)) + (((x10_long)1ll)));
    
}

//#line 210 "x10/util/ArrayList.x10"
template<class TPMGL(S)> TPMGL(S) x10::util::ArrayList__It<TPMGL(S)>::next(
  ) {
    
    //#line 211 "x10/util/ArrayList.x10"
    return ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(al))->FMGL(a))->x10::util::template GrowableRail<TPMGL(S)>::__apply(
             this->FMGL(i) = ((this->FMGL(i)) + (((x10_long)1ll))));
    
}

//#line 214 "x10/util/ArrayList.x10"
template<class TPMGL(S)> x10_boolean x10::util::ArrayList__It<TPMGL(S)>::hasPrevious(
  ) {
    
    //#line 215 "x10/util/ArrayList.x10"
    return ((((this->FMGL(i)) - (((x10_long)1ll)))) >= (((x10_long)0ll)));
    
}

//#line 218 "x10/util/ArrayList.x10"
template<class TPMGL(S)> x10_long x10::util::ArrayList__It<TPMGL(S)>::previousIndex(
  ) {
    
    //#line 219 "x10/util/ArrayList.x10"
    return this->FMGL(i) = ((this->FMGL(i)) - (((x10_long)1ll)));
    
}

//#line 222 "x10/util/ArrayList.x10"
template<class TPMGL(S)> TPMGL(S) x10::util::ArrayList__It<TPMGL(S)>::previous(
  ) {
    
    //#line 223 "x10/util/ArrayList.x10"
    return ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(al))->FMGL(a))->x10::util::template GrowableRail<TPMGL(S)>::__apply(
             this->FMGL(i) = ((this->FMGL(i)) - (((x10_long)1ll))));
    
}

//#line 226 "x10/util/ArrayList.x10"
template<class TPMGL(S)> void x10::util::ArrayList__It<TPMGL(S)>::remove(
  ) {
    
    //#line 227 "x10/util/ArrayList.x10"
    ::x10aux::nullCheck(this->FMGL(al))->removeAt(this->FMGL(i));
}

//#line 230 "x10/util/ArrayList.x10"
template<class TPMGL(S)> void x10::util::ArrayList__It<TPMGL(S)>::set(
  TPMGL(S) v) {
    
    //#line 231 "x10/util/ArrayList.x10"
    ::x10aux::nullCheck(this->FMGL(al))->set(v, this->FMGL(i));
}

//#line 234 "x10/util/ArrayList.x10"
template<class TPMGL(S)> void x10::util::ArrayList__It<TPMGL(S)>::add(
  TPMGL(S) v) {
    
    //#line 235 "x10/util/ArrayList.x10"
    ::x10aux::nullCheck(this->FMGL(al))->addBefore(this->FMGL(i),
                                                   v);
}

//#line 188 "x10/util/ArrayList.x10"
template<class TPMGL(S)> ::x10::util::ArrayList__It<TPMGL(S)>*
  x10::util::ArrayList__It<TPMGL(S)>::x10__util__ArrayList__It____this__x10__util__ArrayList__It(
  ) {
    return this;
    
}
template<class TPMGL(S)> void x10::util::ArrayList__It<TPMGL(S)>::__fieldInitializers_x10_util_ArrayList_It(
  ) {
    this->FMGL(i) = ((x10_long)0ll);
}
template<class TPMGL(S)> const ::x10aux::serialization_id_t x10::util::ArrayList__It<TPMGL(S)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::ArrayList__It<TPMGL(S)>::_deserializer);

template<class TPMGL(S)> void x10::util::ArrayList__It<TPMGL(S)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(i));
    buf.write(this->FMGL(al));
    
}

template<class TPMGL(S)> ::x10::lang::Reference* ::x10::util::ArrayList__It<TPMGL(S)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::ArrayList__It<TPMGL(S)>* this_ = new (::x10aux::alloc_z< ::x10::util::ArrayList__It<TPMGL(S)> >()) ::x10::util::ArrayList__It<TPMGL(S)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(S)> void x10::util::ArrayList__It<TPMGL(S)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(i) = buf.read<x10_long>();
    FMGL(al) = buf.read< ::x10::util::ArrayList<TPMGL(S)>*>();
}

#endif // X10_UTIL_ARRAYLIST__IT_H_IMPLEMENTATION
#endif // __X10_UTIL_ARRAYLIST__IT_H_NODEPS
