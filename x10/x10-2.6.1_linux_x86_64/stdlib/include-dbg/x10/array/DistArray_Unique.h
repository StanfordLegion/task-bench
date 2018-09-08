#ifndef __X10_ARRAY_DISTARRAY_UNIQUE_H
#define __X10_ARRAY_DISTARRAY_UNIQUE_H

#include <x10rt.h>


#define X10_ARRAY_DISTARRAY_H_NODEPS
#include <x10/array/DistArray.h>
#undef X10_ARRAY_DISTARRAY_H_NODEPS
#define X10_LANG_FUN_0_1_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#undef X10_LANG_FUN_0_1_H_NODEPS
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace array { 
template<class TPMGL(S)> class LocalState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_1;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class DistArray_Unique_Strings {
  public:
    static ::x10::lang::String sl__154119;
};

template<class TPMGL(T)> class DistArray_Unique;
template <> class DistArray_Unique<void>;
template<class TPMGL(T)> class DistArray_Unique : public ::x10::array::DistArray<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Iterable< ::x10::lang::Point*>::template itable< ::x10::array::DistArray_Unique<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::array::DistArray_Unique<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::template itable< ::x10::array::DistArray_Unique<TPMGL(T)> > _itable_2;
    
    x10_long rank();
    void _constructor();
    
    static ::x10::array::DistArray_Unique<TPMGL(T)>* _make();
    
    void _constructor(::x10::lang::PlaceGroup* pg);
    
    static ::x10::array::DistArray_Unique<TPMGL(T)>* _make(::x10::lang::PlaceGroup* pg);
    
    void _constructor(::x10::lang::Fun_0_0<TPMGL(T)>* init);
    
    static ::x10::array::DistArray_Unique<TPMGL(T)>* _make(::x10::lang::Fun_0_0<TPMGL(T)>* init);
    
    void _constructor(::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_0<TPMGL(T)>* init);
    
    static ::x10::array::DistArray_Unique<TPMGL(T)>* _make(::x10::lang::PlaceGroup* pg,
                                                           ::x10::lang::Fun_0_0<TPMGL(T)>* init);
    
    virtual ::x10::array::IterationSpace* globalIndices();
    virtual ::x10::array::IterationSpace* localIndices();
    virtual ::x10::lang::Place place(x10_long i);
    virtual ::x10::lang::Place place(::x10::lang::Point* p);
    virtual TPMGL(T) __apply(x10_long i);
    virtual TPMGL(T) __apply(::x10::lang::Point* p);
    virtual TPMGL(T) __set(x10_long i, TPMGL(T) v);
    virtual TPMGL(T) __set(::x10::lang::Point* p, TPMGL(T) v);
    virtual ::x10::lang::Rail< TPMGL(T) >* getPatch(::x10::array::IterationSpace* space);
    void validateIndex(x10_long i);
    virtual ::x10::array::DistArray_Unique<TPMGL(T)>* x10__array__DistArray_Unique____this__x10__array__DistArray_Unique(
      );
    virtual void __fieldInitializers_x10_array_DistArray_Unique(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::array::DistArray_Unique<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::array::DistArray_Unique<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::array::DistArray_Unique<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::array::DistArray<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.array.DistArray_Unique";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class DistArray_Unique<void> : public ::x10::array::DistArray<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_ARRAY_DISTARRAY_UNIQUE_H

namespace x10 { namespace array { 
template<class TPMGL(T)> class DistArray_Unique;
} } 

#ifndef X10_ARRAY_DISTARRAY_UNIQUE_H_NODEPS
#define X10_ARRAY_DISTARRAY_UNIQUE_H_NODEPS
#include <x10/array/DistArray.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Long.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/array/LocalState.h>
#include <x10/lang/Rail.h>
#include <x10/array/DenseIterationSpace_1.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Point.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Inline.h>
#include <x10/array/IterationSpace.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_ARRAY_DISTARRAY_UNIQUE_H_GENERICS
#define X10_ARRAY_DISTARRAY_UNIQUE_H_GENERICS
#endif // X10_ARRAY_DISTARRAY_UNIQUE_H_GENERICS
#ifndef X10_ARRAY_DISTARRAY_UNIQUE_H_IMPLEMENTATION
#define X10_ARRAY_DISTARRAY_UNIQUE_H_IMPLEMENTATION
#include <x10/array/DistArray_Unique.h>

#ifndef X10_ARRAY_DISTARRAY_UNIQUE__CLOSURE__1_CLOSURE
#define X10_ARRAY_DISTARRAY_UNIQUE__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_array_DistArray_Unique__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>::template itable <x10_array_DistArray_Unique__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::array::LocalState<TPMGL(T)>* __apply(){
        return ::x10::array::LocalState<TPMGL(T)>::_make(pg, ::x10::lang::Rail< TPMGL(T) >::_make(((x10_long)1ll)),
                                                         pg->x10::lang::PlaceGroup::size());
        
    }
    
    // captured environment
    ::x10::lang::PlaceGroup* pg;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pg);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray_Unique__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_array_DistArray_Unique__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceGroup* that_pg = buf.read< ::x10::lang::PlaceGroup*>();
        x10_array_DistArray_Unique__closure__1<TPMGL(T) >* this_ = new (storage) x10_array_DistArray_Unique__closure__1<TPMGL(T) >(that_pg);
        return this_;
    }
    
    x10_array_DistArray_Unique__closure__1(::x10::lang::PlaceGroup* pg) : pg(pg) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray_Unique.x10:37";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>::template itable <x10_array_DistArray_Unique__closure__1<TPMGL(T) > >x10_array_DistArray_Unique__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray_Unique__closure__1<TPMGL(T) >::__apply, &x10_array_DistArray_Unique__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_array_DistArray_Unique__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >, &x10_array_DistArray_Unique__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_array_DistArray_Unique__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray_Unique__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_ARRAY_DISTARRAY_UNIQUE__CLOSURE__1_CLOSURE
#ifndef X10_ARRAY_DISTARRAY_UNIQUE__CLOSURE__2_CLOSURE
#define X10_ARRAY_DISTARRAY_UNIQUE__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_array_DistArray_Unique__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>::template itable <x10_array_DistArray_Unique__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::array::LocalState<TPMGL(T)>* __apply(){
        return ::x10::array::LocalState<TPMGL(T)>::_make(pg, ::x10::lang::Rail< TPMGL(T) >::_make(((x10_long)1ll),
                                                                                                  ::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(init))),
                                                         pg->x10::lang::PlaceGroup::size());
        
    }
    
    // captured environment
    ::x10::lang::PlaceGroup* pg;
    ::x10::lang::Fun_0_0<TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pg);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray_Unique__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_array_DistArray_Unique__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceGroup* that_pg = buf.read< ::x10::lang::PlaceGroup*>();
        ::x10::lang::Fun_0_0<TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_0<TPMGL(T)>*>();
        x10_array_DistArray_Unique__closure__2<TPMGL(T) >* this_ = new (storage) x10_array_DistArray_Unique__closure__2<TPMGL(T) >(that_pg, that_init);
        return this_;
    }
    
    x10_array_DistArray_Unique__closure__2(::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_0<TPMGL(T)>* init) : pg(pg), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray_Unique.x10:54";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>::template itable <x10_array_DistArray_Unique__closure__2<TPMGL(T) > >x10_array_DistArray_Unique__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray_Unique__closure__2<TPMGL(T) >::__apply, &x10_array_DistArray_Unique__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_array_DistArray_Unique__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >, &x10_array_DistArray_Unique__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_array_DistArray_Unique__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray_Unique__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_ARRAY_DISTARRAY_UNIQUE__CLOSURE__2_CLOSURE
template<class TPMGL(T)> typename ::x10::lang::Iterable< ::x10::lang::Point*>::template itable< ::x10::array::DistArray_Unique<TPMGL(T)> >  x10::array::DistArray_Unique<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::array::DistArray<TPMGL(T)>::iterator, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::array::DistArray_Unique<TPMGL(T)> >  x10::array::DistArray_Unique<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::template itable< ::x10::array::DistArray_Unique<TPMGL(T)> >  x10::array::DistArray_Unique<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::array::DistArray_Unique<TPMGL(T)>::__apply, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::array::DistArray_Unique<TPMGL(T)>::_itables[4] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable< ::x10::lang::Point*> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(NULL, (void*)"::x10::array::DistArray_Unique<TPMGL(T)>")};

//#line 24 "x10/array/DistArray_Unique.x10"
template<class TPMGL(T)> x10_long x10::array::DistArray_Unique<TPMGL(T)>::rank(
  ) {
    return ((x10_long)1ll);
    
}

//#line 29 "x10/array/DistArray_Unique.x10"
/**
     * Construct a zero-initialized DistArray_Unique object over Place.places()
     */
template<class TPMGL(T)> void x10::array::DistArray_Unique<TPMGL(T)>::_constructor(
                           ) {
    
    //#line 30 "x10/array/DistArray_Unique.x10"
    (this)->::x10::array::DistArray_Unique<TPMGL(T)>::_constructor(
      ::x10::lang::Place::places());
    
}
template<class TPMGL(T)> ::x10::array::DistArray_Unique<TPMGL(T)>* x10::array::DistArray_Unique<TPMGL(T)>::_make(
                           ) {
    ::x10::array::DistArray_Unique<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Unique<TPMGL(T)> >()) ::x10::array::DistArray_Unique<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 36 "x10/array/DistArray_Unique.x10"
/**
     * Construct a zero-initialized DistArray_Unique object over the given PlaceGroup
     */
template<class TPMGL(T)> void x10::array::DistArray_Unique<TPMGL(T)>::_constructor(
                           ::x10::lang::PlaceGroup* pg) {
    
    //#line 37 "x10/array/DistArray_Unique.x10"
    (this)->::x10::array::DistArray<TPMGL(T)>::_constructor(
      pg, reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >(sizeof(x10_array_DistArray_Unique__closure__1<TPMGL(T)>)))x10_array_DistArray_Unique__closure__1<TPMGL(T)>(pg))),
      pg->x10::lang::PlaceGroup::size());
    
    //#line 36 "x10/array/DistArray_Unique.x10"
    
    //#line 22 "x10/array/DistArray_Unique.x10"
    this->x10::array::template DistArray_Unique<TPMGL(T)>::__fieldInitializers_x10_array_DistArray_Unique();
}
template<class TPMGL(T)> ::x10::array::DistArray_Unique<TPMGL(T)>* x10::array::DistArray_Unique<TPMGL(T)>::_make(
                           ::x10::lang::PlaceGroup* pg) {
    ::x10::array::DistArray_Unique<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Unique<TPMGL(T)> >()) ::x10::array::DistArray_Unique<TPMGL(T)>();
    this_->_constructor(pg);
    return this_;
}



//#line 45 "x10/array/DistArray_Unique.x10"
/**
     * Construct a DistArray_Unique object over Place.places() using the
     * given initialization function.
     */
template<class TPMGL(T)> void x10::array::DistArray_Unique<TPMGL(T)>::_constructor(
                           ::x10::lang::Fun_0_0<TPMGL(T)>* init) {
    
    //#line 46 "x10/array/DistArray_Unique.x10"
    (this)->::x10::array::DistArray_Unique<TPMGL(T)>::_constructor(
      ::x10::lang::Place::places(), init);
    
}
template<class TPMGL(T)> ::x10::array::DistArray_Unique<TPMGL(T)>* x10::array::DistArray_Unique<TPMGL(T)>::_make(
                           ::x10::lang::Fun_0_0<TPMGL(T)>* init)
{
    ::x10::array::DistArray_Unique<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Unique<TPMGL(T)> >()) ::x10::array::DistArray_Unique<TPMGL(T)>();
    this_->_constructor(init);
    return this_;
}



//#line 53 "x10/array/DistArray_Unique.x10"
/**
     * Construct a DistArray_Unique object using the given PlaceGroup and
     * initialization function.
     */
template<class TPMGL(T)> void x10::array::DistArray_Unique<TPMGL(T)>::_constructor(
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_0<TPMGL(T)>* init) {
    
    //#line 54 "x10/array/DistArray_Unique.x10"
    (this)->::x10::array::DistArray<TPMGL(T)>::_constructor(
      pg, reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >(sizeof(x10_array_DistArray_Unique__closure__2<TPMGL(T)>)))x10_array_DistArray_Unique__closure__2<TPMGL(T)>(pg, init))),
      pg->x10::lang::PlaceGroup::size());
    
    //#line 53 "x10/array/DistArray_Unique.x10"
    
    //#line 22 "x10/array/DistArray_Unique.x10"
    this->x10::array::template DistArray_Unique<TPMGL(T)>::__fieldInitializers_x10_array_DistArray_Unique();
}
template<class TPMGL(T)> ::x10::array::DistArray_Unique<TPMGL(T)>* x10::array::DistArray_Unique<TPMGL(T)>::_make(
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_0<TPMGL(T)>* init)
{
    ::x10::array::DistArray_Unique<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Unique<TPMGL(T)> >()) ::x10::array::DistArray_Unique<TPMGL(T)>();
    this_->_constructor(pg, init);
    return this_;
}



//#line 62 "x10/array/DistArray_Unique.x10"
/**
     * Get an IterationSpace that represents all Points contained in
     * the global iteration space (valid indices) of the DistArray.
     * @return an IterationSpace for the DistArray
     */
template<class TPMGL(T)> ::x10::array::IterationSpace* x10::array::DistArray_Unique<TPMGL(T)>::globalIndices(
  ) {
    
    //#line 63 "x10/array/DistArray_Unique.x10"
    return reinterpret_cast< ::x10::array::IterationSpace*>(::x10::array::DenseIterationSpace_1::_make(((x10_long)0ll),
                                                                                                       ((::x10aux::nullCheck(this->FMGL(placeGroup))->x10::lang::PlaceGroup::size()) - (((x10_long)1ll)))));
    
}

//#line 71 "x10/array/DistArray_Unique.x10"
/**
     * Get an IterationSpace that represents all Points contained in
     * the local iteration space (valid indices) of the DistArray at the current Place.
     * @return an IterationSpace for the Array
     */
template<class TPMGL(T)> ::x10::array::IterationSpace* x10::array::DistArray_Unique<TPMGL(T)>::localIndices(
  ) {
    
    //#line 72 "x10/array/DistArray_Unique.x10"
    x10_long idx = ::x10aux::nullCheck(this->FMGL(placeGroup))->indexOf(
                     ::x10::lang::Place::_make(::x10aux::here));
    
    //#line 73 "x10/array/DistArray_Unique.x10"
    return reinterpret_cast< ::x10::array::IterationSpace*>(::x10::array::DenseIterationSpace_1::_make(idx,
                                                                                                       idx));
    
}

//#line 85 "x10/array/DistArray_Unique.x10"
/**
     * Return the Place which contains the data for the argument
     * index or Place.INVALID_PLACE if the Point is not in the globalIndices
     * of this DistArray
     *
     * @param i the index to lookup
     * @return the Place where i is a valid index in the DistArray; 
     *          will return Place.INVALID_PLACE if i is not contained in globalIndices
     */
template<class TPMGL(T)> ::x10::lang::Place x10::array::DistArray_Unique<TPMGL(T)>::place(
  x10_long i) {
    return (((i) >= (((x10_long)0ll))) && ((i) < (::x10aux::nullCheck(this->FMGL(placeGroup))->x10::lang::PlaceGroup::size())))
      ? (::x10aux::nullCheck(this->FMGL(placeGroup))->__apply(
           i)) : (::x10::lang::Place::FMGL(INVALID_PLACE__get)());
    
}

//#line 97 "x10/array/DistArray_Unique.x10"
/**
     * Return the Place which contains the data for the argument
     * Point or Place.INVALID_PLACE if the Point is not in the globalIndices
     * of this DistArray
     *
     * @param p the Point to lookup
     * @return the Place where p is a valid index in the DistArray; 
     *          will return Place.INVALID_PLACE if p is not contained in globalIndices
     */
template<class TPMGL(T)> ::x10::lang::Place x10::array::DistArray_Unique<TPMGL(T)>::place(
  ::x10::lang::Point* p) {
    return this->x10::array::template DistArray_Unique<TPMGL(T)>::place(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)));
    
}

//#line 107 "x10/array/DistArray_Unique.x10"
/**
     * Return the element of this array corresponding to the given index.
     * 
     * @param i the given index in the first dimension
     * @return the element of this array corresponding to the given index.
     * @see #set(T, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray_Unique<TPMGL(T)>::__apply(
  x10_long i) {
    
    //#line 108 "x10/array/DistArray_Unique.x10"
    if ((PLACE_CHECK_BOOL || BOUNDS_CHECK_BOOL)) {
        this->x10::array::template DistArray_Unique<TPMGL(T)>::validateIndex(
          i);
    }
    
    //#line 109 "x10/array/DistArray_Unique.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             ((x10_long)0ll));
    
}

//#line 119 "x10/array/DistArray_Unique.x10"
/**
     * Return the element of this array corresponding to the given Point.
     * 
     * @param p the given Point
     * @return the element of this array corresponding to the given Point.
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray_Unique<TPMGL(T)>::__apply(
  ::x10::lang::Point* p) {
    return this->x10::array::template DistArray_Unique<TPMGL(T)>::__apply(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)));
    
}

//#line 131 "x10/array/DistArray_Unique.x10"
/**
     * Set the element of this array corresponding to the given index to the given value.
     * Return the new value of the element.
     * 
     * @param v the given value
     * @param i the given index in the first dimension
     * @return the new value of the element of this array corresponding to the given index.
     * @see #operator(Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray_Unique<TPMGL(T)>::__set(
  x10_long i, TPMGL(T) v) {
    
    //#line 132 "x10/array/DistArray_Unique.x10"
    if ((PLACE_CHECK_BOOL || BOUNDS_CHECK_BOOL)) {
        this->x10::array::template DistArray_Unique<TPMGL(T)>::validateIndex(
          i);
    }
    
    //#line 133 "x10/array/DistArray_Unique.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      ((x10_long)0ll), v);
    
    //#line 134 "x10/array/DistArray_Unique.x10"
    return v;
    
}

//#line 146 "x10/array/DistArray_Unique.x10"
/**
     * Set the element of this array corresponding to the given Point to the given value.
     * Return the new value of the element.
     * 
     * @param v the given value
     * @param p the given Point
     * @return the new value of the element of this array corresponding to the given Point.
     * @see #operator(Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray_Unique<TPMGL(T)>::__set(
  ::x10::lang::Point* p, TPMGL(T) v) {
    return this->x10::array::template DistArray_Unique<TPMGL(T)>::__set(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)), v);
    
}

//#line 148 "x10/array/DistArray_Unique.x10"
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::array::DistArray_Unique<TPMGL(T)>::getPatch(
  ::x10::array::IterationSpace* space) {
    
    //#line 149 "x10/array/DistArray_Unique.x10"
    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::UnsupportedOperationException::_make((&::x10::array::DistArray_Unique_Strings::sl__154119))));
}

//#line 157 "x10/array/DistArray_Unique.x10"
template<class TPMGL(T)> void x10::array::DistArray_Unique<TPMGL(T)>::validateIndex(
  x10_long i) {
    
    //#line 158 "x10/array/DistArray_Unique.x10"
    if ((BOUNDS_CHECK_BOOL || PLACE_CHECK_BOOL)) {
        
        //#line 159 "x10/array/DistArray_Unique.x10"
        if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(placeGroup))->indexOf(
                                        ::x10::lang::Place::_make(::x10aux::here)),
                                      i))) {
            
            //#line 160 "x10/array/DistArray_Unique.x10"
            if ((BOUNDS_CHECK_BOOL && ((((i) < (((x10_long)0ll))) ||
                                       ((i) >= (::x10aux::nullCheck(this->FMGL(placeGroup))->x10::lang::PlaceGroup::size()))))))
            {
                ::x10::array::DistArray<void>::raiseBoundsError(
                  i);
            }
            
            //#line 161 "x10/array/DistArray_Unique.x10"
            if (PLACE_CHECK_BOOL) {
                ::x10::array::DistArray<void>::raisePlaceError(
                  i);
            }
            
        }
        
    }
    
}

//#line 22 "x10/array/DistArray_Unique.x10"
template<class TPMGL(T)> ::x10::array::DistArray_Unique<TPMGL(T)>*
  x10::array::DistArray_Unique<TPMGL(T)>::x10__array__DistArray_Unique____this__x10__array__DistArray_Unique(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::array::DistArray_Unique<TPMGL(T)>::__fieldInitializers_x10_array_DistArray_Unique(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::array::DistArray_Unique<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::array::DistArray_Unique<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::array::DistArray_Unique<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::array::DistArray<TPMGL(T)>::_serialize_body(buf);
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::array::DistArray_Unique<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::array::DistArray_Unique<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Unique<TPMGL(T)> >()) ::x10::array::DistArray_Unique<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::array::DistArray_Unique<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::array::DistArray<TPMGL(T)>::_deserialize_body(buf);
    
}

#endif // X10_ARRAY_DISTARRAY_UNIQUE_H_IMPLEMENTATION
#endif // __X10_ARRAY_DISTARRAY_UNIQUE_H_NODEPS
