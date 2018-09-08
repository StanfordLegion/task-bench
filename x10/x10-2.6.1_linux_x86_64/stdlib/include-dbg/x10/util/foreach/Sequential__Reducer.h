#ifndef __X10_UTIL_FOREACH_SEQUENTIAL__REDUCER_H
#define __X10_UTIL_FOREACH_SEQUENTIAL__REDUCER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace util { namespace foreach { 
class ReduceNotReady;
} } } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace util { namespace foreach { 
class Sequential;
} } } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace foreach { 

template<class TPMGL(T)> class Sequential__Reducer;
template <> class Sequential__Reducer<void>;
template<class TPMGL(T)> class Sequential__Reducer : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Cell<TPMGL(T)>* FMGL(result);
    
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* FMGL(reduce);
    
    TPMGL(T) FMGL(identity);
    
    virtual TPMGL(T) value();
    void _constructor(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                      TPMGL(T) identity);
    
    static ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>* _make(
             ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
             TPMGL(T) identity);
    
    void _constructor(::x10::lang::Reducible<TPMGL(T)>* red);
    
    static ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>* _make(
             ::x10::lang::Reducible<TPMGL(T)>* red);
    
    virtual TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                               ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body);
    virtual TPMGL(T) _kwd__for(::x10::array::DenseIterationSpace_2* space,
                               ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body);
    virtual ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>*
      x10__util__foreach__Sequential__Reducer____this__x10__util__foreach__Sequential__Reducer(
      );
    virtual void __fieldInitializers_x10_util_foreach_Sequential_Reducer(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::foreach::Sequential__Reducer<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::foreach::Sequential__Reducer<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::foreach::Sequential__Reducer<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.foreach.Sequential.Reducer";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class Sequential__Reducer<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // X10_UTIL_FOREACH_SEQUENTIAL__REDUCER_H

namespace x10 { namespace util { namespace foreach { 
template<class TPMGL(T)> class Sequential__Reducer;
} } } 

#ifndef X10_UTIL_FOREACH_SEQUENTIAL__REDUCER_H_NODEPS
#define X10_UTIL_FOREACH_SEQUENTIAL__REDUCER_H_NODEPS
#include <x10/lang/Cell.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/util/foreach/ReduceNotReady.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Long.h>
#include <x10/util/foreach/Sequential.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_FOREACH_SEQUENTIAL__REDUCER_H_GENERICS
#define X10_UTIL_FOREACH_SEQUENTIAL__REDUCER_H_GENERICS
#endif // X10_UTIL_FOREACH_SEQUENTIAL__REDUCER_H_GENERICS
#ifndef X10_UTIL_FOREACH_SEQUENTIAL__REDUCER_H_IMPLEMENTATION
#define X10_UTIL_FOREACH_SEQUENTIAL__REDUCER_H_IMPLEMENTATION
#include <x10/util/foreach/Sequential__Reducer.h>

#ifndef X10_UTIL_FOREACH_SEQUENTIAL__REDUCER__CLOSURE__1_CLOSURE
#define X10_UTIL_FOREACH_SEQUENTIAL__REDUCER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_foreach_Sequential__Reducer__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(TPMGL(T) a, TPMGL(T) b){
        return ::x10::lang::Reducible<TPMGL(T)>::__apply(::x10aux::nullCheck(red), 
                 a, b);
        
    }
    
    // captured environment
    ::x10::lang::Reducible<TPMGL(T)>* red;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->red);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Reducible<TPMGL(T)>* that_red = buf.read< ::x10::lang::Reducible<TPMGL(T)>*>();
        x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) >(that_red);
        return this_;
    }
    
    x10_util_foreach_Sequential__Reducer__closure__1(::x10::lang::Reducible<TPMGL(T)>* red) : red(red) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Sequential.x10:150";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) > >x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) >::__apply, &x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >, &x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_SEQUENTIAL__REDUCER__CLOSURE__1_CLOSURE

//#line 113 "x10/util/foreach/Sequential.x10"

//#line 118 "x10/util/foreach/Sequential.x10"
/**
         * The reduction operation.
         */

//#line 123 "x10/util/foreach/Sequential.x10"
/**
         * The identity value for the reduction operation such that reduce(identity,f)=f.
         */

//#line 130 "x10/util/foreach/Sequential.x10"
/**
         * Access to the result of the last reduction. It may
         * raise <code>ReduceNotReady</code> if no result has been
         * computed yet.
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Sequential__Reducer<TPMGL(T)>::value(
  ) {
    
    //#line 131 "x10/util/foreach/Sequential.x10"
    if ((::x10aux::struct_equals(this->FMGL(result), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::util::foreach::ReduceNotReady::_make()));
    }
    
    //#line 132 "x10/util/foreach/Sequential.x10"
    return ::x10aux::nullCheck(this->FMGL(result))->x10::lang::template Cell<TPMGL(T)>::__apply();
    
}

//#line 140 "x10/util/foreach/Sequential.x10"
/**
         * Constructor for collecting loop with reducer.
         * @param reduce the reduction operation
         * @param identity the identity value for the reduction operation such that reduce(identity,f)=f
         */
template<class TPMGL(T)> void x10::util::foreach::Sequential__Reducer<TPMGL(T)>::_constructor(
                           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                           TPMGL(T) identity) {
    
    //#line 112 "x10/util/foreach/Sequential.x10"
    this->x10::util::foreach::template Sequential__Reducer<TPMGL(T)>::__fieldInitializers_x10_util_foreach_Sequential_Reducer();
    
    //#line 141 "x10/util/foreach/Sequential.x10"
    this->FMGL(reduce) = (reduce);
    
    //#line 142 "x10/util/foreach/Sequential.x10"
    this->FMGL(identity) = identity;
}
template<class TPMGL(T)> ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>* x10::util::foreach::Sequential__Reducer<TPMGL(T)>::_make(
                           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                           TPMGL(T) identity) {
    ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Sequential__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>();
    this_->_constructor(reduce, identity);
    return this_;
}



//#line 149 "x10/util/foreach/Sequential.x10"
/**
         * Constructor for collecting loop with reducer.
         * @param red the reduction operation
         */
template<class TPMGL(T)> void x10::util::foreach::Sequential__Reducer<TPMGL(T)>::_constructor(
                           ::x10::lang::Reducible<TPMGL(T)>* red) {
    
    //#line 112 "x10/util/foreach/Sequential.x10"
    this->x10::util::foreach::template Sequential__Reducer<TPMGL(T)>::__fieldInitializers_x10_util_foreach_Sequential_Reducer();
    
    //#line 150 "x10/util/foreach/Sequential.x10"
    this->FMGL(reduce) = reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(sizeof(x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T)>)))x10_util_foreach_Sequential__Reducer__closure__1<TPMGL(T)>(red)));
    
    //#line 151 "x10/util/foreach/Sequential.x10"
    this->FMGL(identity) = ::x10::lang::Reducible<TPMGL(T)>::zero(::x10aux::nullCheck(red));
}
template<class TPMGL(T)> ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>* x10::util::foreach::Sequential__Reducer<TPMGL(T)>::_make(
                           ::x10::lang::Reducible<TPMGL(T)>* red)
{
    ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Sequential__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>();
    this_->_constructor(red);
    return this_;
}



//#line 159 "x10/util/foreach/Sequential.x10"
/**
         * Reduce over a range of indices in sequence in a single activity.
         * @param range the iteration space
         * @param body a closure that executes over a single value of the index
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Sequential__Reducer<TPMGL(T)>::_kwd__for(
  ::x10::lang::LongRange range, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 161 "x10/util/foreach/Sequential.x10"
    TPMGL(T) res = ::x10::util::foreach::Sequential::template _kwd__for< TPMGL(T) >(
                     range, this->FMGL(reduce), this->FMGL(identity),
                     body);
    
    //#line 162 "x10/util/foreach/Sequential.x10"
    this->FMGL(result) = ::x10::lang::Cell<TPMGL(T)>::_make(res);
    
    //#line 163 "x10/util/foreach/Sequential.x10"
    return res;
    
}

//#line 171 "x10/util/foreach/Sequential.x10"
/**
         * Reduce over a range of indices in sequence in a single activity.
         * @param space the 2D dense space over which to reduce
         * @param body a closure that executes over a single index [i,j]
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Sequential__Reducer<TPMGL(T)>::_kwd__for(
  ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
    
    //#line 173 "x10/util/foreach/Sequential.x10"
    TPMGL(T) res = ::x10::util::foreach::Sequential::template _kwd__for< TPMGL(T) >(
                     space, this->FMGL(reduce), this->FMGL(identity),
                     body);
    
    //#line 174 "x10/util/foreach/Sequential.x10"
    this->FMGL(result) = ::x10::lang::Cell<TPMGL(T)>::_make(res);
    
    //#line 175 "x10/util/foreach/Sequential.x10"
    return res;
    
}

//#line 112 "x10/util/foreach/Sequential.x10"
template<class TPMGL(T)> ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>*
  x10::util::foreach::Sequential__Reducer<TPMGL(T)>::x10__util__foreach__Sequential__Reducer____this__x10__util__foreach__Sequential__Reducer(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::foreach::Sequential__Reducer<TPMGL(T)>::__fieldInitializers_x10_util_foreach_Sequential_Reducer(
  ) {
    this->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::foreach::Sequential__Reducer<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::foreach::Sequential__Reducer<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::util::foreach::Sequential__Reducer<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(result));
    buf.write(this->FMGL(reduce));
    buf.write(this->FMGL(identity));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Sequential__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Sequential__Reducer<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::util::foreach::Sequential__Reducer<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(result) = buf.read< ::x10::lang::Cell<TPMGL(T)>*>();
    FMGL(reduce) = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
    FMGL(identity) = buf.read<TPMGL(T)>();
}

#endif // X10_UTIL_FOREACH_SEQUENTIAL__REDUCER_H_IMPLEMENTATION
#endif // __X10_UTIL_FOREACH_SEQUENTIAL__REDUCER_H_NODEPS
