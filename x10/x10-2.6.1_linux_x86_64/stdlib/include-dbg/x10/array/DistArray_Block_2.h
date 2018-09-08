#ifndef __X10_ARRAY_DISTARRAY_BLOCK_2_H
#define __X10_ARRAY_DISTARRAY_BLOCK_2_H

#include <x10rt.h>


#define X10_ARRAY_DISTARRAY_H_NODEPS
#include <x10/array/DistArray.h>
#undef X10_ARRAY_DISTARRAY_H_NODEPS
#define X10_LANG_FUN_0_2_H_NODEPS
#include <x10/lang/Fun_0_2.h>
#undef X10_LANG_FUN_0_2_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace compiler { 
class TransientInitExpr;
} } 
namespace x10 { namespace array { 
template<class TPMGL(S)> class LocalState_B2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class PlaceLocalHandle;
} } 
namespace x10 { namespace array { 
template<class TPMGL(S)> class LocalState;
} } 
namespace x10 { namespace array { 
class Dist_Block_2;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace array { 
class BlockingUtils;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class DistArray_Block_2_Strings {
  public:
    static ::x10::lang::String sl__153865;
    static ::x10::lang::String sl__153866;
};

template<class TPMGL(T)> class DistArray_Block_2;
template <> class DistArray_Block_2<void>;
template<class TPMGL(T)> class DistArray_Block_2 : public ::x10::array::DistArray<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Iterable< ::x10::lang::Point*>::template itable< ::x10::array::DistArray_Block_2<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::array::DistArray_Block_2<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable< ::x10::array::DistArray_Block_2<TPMGL(T)> > _itable_2;
    
    x10_long rank();
    ::x10::array::DenseIterationSpace_2* FMGL(globalIndices);
    
    x10_long FMGL(numElems_1);
    
    x10_long FMGL(numElems_2);
    
    ::x10::array::DenseIterationSpace_2* FMGL(localIndices);
    
    virtual ::x10::array::DenseIterationSpace_2* reloadLocalIndices(
      );
    x10_long FMGL(minIndex_1);
    
    virtual x10_long reloadMinIndex_1();
    x10_long FMGL(numElemsLocal_1);
    
    virtual x10_long reloadNumElemsLocal_1();
    void _constructor(x10_long m, x10_long n, ::x10::lang::PlaceGroup* pg,
                      ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init);
    
    static ::x10::array::DistArray_Block_2<TPMGL(T)>* _make(x10_long m,
                                                            x10_long n,
                                                            ::x10::lang::PlaceGroup* pg,
                                                            ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init);
    
    void _constructor(x10_long m, x10_long n, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init);
    
    static ::x10::array::DistArray_Block_2<TPMGL(T)>* _make(
             x10_long m, x10_long n, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init);
    
    void _constructor(x10_long m, x10_long n, ::x10::lang::PlaceGroup* pg);
    
    static ::x10::array::DistArray_Block_2<TPMGL(T)>* _make(
             x10_long m, x10_long n, ::x10::lang::PlaceGroup* pg);
    
    void _constructor(x10_long m, x10_long n);
    
    static ::x10::array::DistArray_Block_2<TPMGL(T)>* _make(
             x10_long m, x10_long n);
    
    virtual ::x10::array::IterationSpace* globalIndices();
    virtual ::x10::array::IterationSpace* localIndices();
    virtual ::x10::lang::Place place(x10_long i, x10_long j);
    virtual ::x10::lang::Place place(::x10::lang::Point* p);
    virtual TPMGL(T) __apply(x10_long i, x10_long j);
    virtual TPMGL(T) __apply(::x10::lang::Point* p);
    virtual TPMGL(T) __set(x10_long i, x10_long j, TPMGL(T) v);
    virtual TPMGL(T) __set(::x10::lang::Point* p, TPMGL(T) v);
    virtual void validateIndex(x10_long i, x10_long j);
    virtual x10_long offset(x10_long i, x10_long j);
    virtual ::x10::lang::Rail< TPMGL(T) >* getPatch(::x10::array::IterationSpace* space);
    virtual ::x10::array::DistArray_Block_2<TPMGL(T)>* x10__array__DistArray_Block_2____this__x10__array__DistArray_Block_2(
      );
    virtual void __fieldInitializers_x10_array_DistArray_Block_2(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::array::DistArray_Block_2<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::array::DistArray_Block_2<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::array::DistArray_Block_2<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::array::DistArray<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.array.DistArray_Block_2";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class DistArray_Block_2<void> : public ::x10::array::DistArray<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    static x10_long validateSize(x10_long m, x10_long n);
    
    
};

} } 
#endif // X10_ARRAY_DISTARRAY_BLOCK_2_H

namespace x10 { namespace array { 
template<class TPMGL(T)> class DistArray_Block_2;
} } 

#ifndef X10_ARRAY_DISTARRAY_BLOCK_2_H_NODEPS
#define X10_ARRAY_DISTARRAY_BLOCK_2_H_NODEPS
#include <x10/array/DistArray.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Long.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/compiler/TransientInitExpr.h>
#include <x10/array/LocalState_B2.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/array/LocalState.h>
#include <x10/array/Dist_Block_2.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Place.h>
#include <x10/lang/Zero.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Boolean.h>
#include <x10/array/BlockingUtils.h>
#include <x10/lang/Point.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Rail.h>
#include <x10/array/IterationSpace.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_ARRAY_DISTARRAY_BLOCK_2_H_GENERICS
#define X10_ARRAY_DISTARRAY_BLOCK_2_H_GENERICS
#endif // X10_ARRAY_DISTARRAY_BLOCK_2_H_GENERICS
#ifndef X10_ARRAY_DISTARRAY_BLOCK_2_H_IMPLEMENTATION
#define X10_ARRAY_DISTARRAY_BLOCK_2_H_IMPLEMENTATION
#include <x10/array/DistArray_Block_2.h>

#ifndef X10_ARRAY_DISTARRAY_BLOCK_2__CLOSURE__2_CLOSURE
#define X10_ARRAY_DISTARRAY_BLOCK_2__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_array_DistArray_Block_2__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::array::LocalState_B2<TPMGL(T)>*>::template itable <x10_array_DistArray_Block_2__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::array::LocalState_B2<TPMGL(T)>* __apply(){
        return ::x10::array::LocalState_B2<void>::template make< TPMGL(T) >(
                 pg, m, n, init);
        
    }
    
    // captured environment
    ::x10::lang::PlaceGroup* pg;
    x10_long m;
    x10_long n;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pg);
        buf.write(this->m);
        buf.write(this->n);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray_Block_2__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_array_DistArray_Block_2__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceGroup* that_pg = buf.read< ::x10::lang::PlaceGroup*>();
        x10_long that_m = buf.read<x10_long>();
        x10_long that_n = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_array_DistArray_Block_2__closure__2<TPMGL(T) >* this_ = new (storage) x10_array_DistArray_Block_2__closure__2<TPMGL(T) >(that_pg, that_m, that_n, that_init);
        return this_;
    }
    
    x10_array_DistArray_Block_2__closure__2(::x10::lang::PlaceGroup* pg, x10_long m, x10_long n, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init) : pg(pg), m(m), n(n), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState_B2<TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState_B2<TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray_Block_2.x10:61";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::array::LocalState_B2<TPMGL(T)>*>::template itable <x10_array_DistArray_Block_2__closure__2<TPMGL(T) > >x10_array_DistArray_Block_2__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray_Block_2__closure__2<TPMGL(T) >::__apply, &x10_array_DistArray_Block_2__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_array_DistArray_Block_2__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState_B2<TPMGL(T)>*> >, &x10_array_DistArray_Block_2__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_array_DistArray_Block_2__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray_Block_2__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_ARRAY_DISTARRAY_BLOCK_2__CLOSURE__2_CLOSURE
#ifndef X10_ARRAY_DISTARRAY_BLOCK_2__CLOSURE__1_CLOSURE
#define X10_ARRAY_DISTARRAY_BLOCK_2__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_array_DistArray_Block_2__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>::template itable <x10_array_DistArray_Block_2__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::array::LocalState<TPMGL(T)>* __apply(){
        return reinterpret_cast< ::x10::array::LocalState<TPMGL(T)>*>(x10_array_DistArray_Block_2__closure__2<TPMGL(T)>(pg, m, n, init).__apply());
        
    }
    
    // captured environment
    ::x10::lang::PlaceGroup* pg;
    x10_long m;
    x10_long n;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pg);
        buf.write(this->m);
        buf.write(this->n);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray_Block_2__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_array_DistArray_Block_2__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceGroup* that_pg = buf.read< ::x10::lang::PlaceGroup*>();
        x10_long that_m = buf.read<x10_long>();
        x10_long that_n = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_array_DistArray_Block_2__closure__1<TPMGL(T) >* this_ = new (storage) x10_array_DistArray_Block_2__closure__1<TPMGL(T) >(that_pg, that_m, that_n, that_init);
        return this_;
    }
    
    x10_array_DistArray_Block_2__closure__1(::x10::lang::PlaceGroup* pg, x10_long m, x10_long n, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init) : pg(pg), m(m), n(n), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray_Block_2.x10:61";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>::template itable <x10_array_DistArray_Block_2__closure__1<TPMGL(T) > >x10_array_DistArray_Block_2__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray_Block_2__closure__1<TPMGL(T) >::__apply, &x10_array_DistArray_Block_2__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_array_DistArray_Block_2__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >, &x10_array_DistArray_Block_2__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_array_DistArray_Block_2__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray_Block_2__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_ARRAY_DISTARRAY_BLOCK_2__CLOSURE__1_CLOSURE
#ifndef X10_ARRAY_DISTARRAY_BLOCK_2__CLOSURE__3_CLOSURE
#define X10_ARRAY_DISTARRAY_BLOCK_2__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_array_DistArray_Block_2__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_array_DistArray_Block_2__closure__3<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long id__39, x10_long id__40){
        return ::x10aux::zeroValue< TPMGL(T) >();
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray_Block_2__closure__3<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_array_DistArray_Block_2__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_array_DistArray_Block_2__closure__3<TPMGL(T) >* this_ = new (storage) x10_array_DistArray_Block_2__closure__3<TPMGL(T) >();
        return this_;
    }
    
    x10_array_DistArray_Block_2__closure__3() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray_Block_2.x10:94";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_array_DistArray_Block_2__closure__3<TPMGL(T) > >x10_array_DistArray_Block_2__closure__3<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray_Block_2__closure__3<TPMGL(T) >::__apply, &x10_array_DistArray_Block_2__closure__3<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_array_DistArray_Block_2__closure__3<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >, &x10_array_DistArray_Block_2__closure__3<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_array_DistArray_Block_2__closure__3<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray_Block_2__closure__3<TPMGL(T) >::_deserialize);

#endif // X10_ARRAY_DISTARRAY_BLOCK_2__CLOSURE__3_CLOSURE
#ifndef X10_ARRAY_DISTARRAY_BLOCK_2__CLOSURE__4_CLOSURE
#define X10_ARRAY_DISTARRAY_BLOCK_2__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_array_DistArray_Block_2__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_array_DistArray_Block_2__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long id__41, x10_long id__42){
        return ::x10aux::zeroValue< TPMGL(T) >();
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray_Block_2__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_array_DistArray_Block_2__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_array_DistArray_Block_2__closure__4<TPMGL(T) >* this_ = new (storage) x10_array_DistArray_Block_2__closure__4<TPMGL(T) >();
        return this_;
    }
    
    x10_array_DistArray_Block_2__closure__4() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray_Block_2.x10:107";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_array_DistArray_Block_2__closure__4<TPMGL(T) > >x10_array_DistArray_Block_2__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray_Block_2__closure__4<TPMGL(T) >::__apply, &x10_array_DistArray_Block_2__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_array_DistArray_Block_2__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >, &x10_array_DistArray_Block_2__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_array_DistArray_Block_2__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray_Block_2__closure__4<TPMGL(T) >::_deserialize);

#endif // X10_ARRAY_DISTARRAY_BLOCK_2__CLOSURE__4_CLOSURE
template<class TPMGL(T)> typename ::x10::lang::Iterable< ::x10::lang::Point*>::template itable< ::x10::array::DistArray_Block_2<TPMGL(T)> >  x10::array::DistArray_Block_2<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::array::DistArray<TPMGL(T)>::iterator, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::array::DistArray_Block_2<TPMGL(T)> >  x10::array::DistArray_Block_2<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable< ::x10::array::DistArray_Block_2<TPMGL(T)> >  x10::array::DistArray_Block_2<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::array::DistArray_Block_2<TPMGL(T)>::__apply, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::array::DistArray_Block_2<TPMGL(T)>::_itables[4] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable< ::x10::lang::Point*> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(NULL, (void*)"::x10::array::DistArray_Block_2<TPMGL(T)>")};

//#line 26 "x10/array/DistArray_Block_2.x10"
template<class TPMGL(T)> x10_long x10::array::DistArray_Block_2<TPMGL(T)>::rank(
  ) {
    return ((x10_long)2ll);
    
}

//#line 28 "x10/array/DistArray_Block_2.x10"

//#line 30 "x10/array/DistArray_Block_2.x10"

//#line 32 "x10/array/DistArray_Block_2.x10"

//#line 35 "x10/array/DistArray_Block_2.x10"

//#line 36 "x10/array/DistArray_Block_2.x10"
template<class TPMGL(T)> ::x10::array::DenseIterationSpace_2* x10::array::DistArray_Block_2<TPMGL(T)>::reloadLocalIndices(
  ) {
    
    //#line 38 "x10/array/DistArray_Block_2.x10"
    ::x10::array::LocalState_B2<TPMGL(T)>* ls = ::x10aux::class_cast< ::x10::array::LocalState_B2<TPMGL(T)>*>(this->FMGL(localHandle)->x10::lang::template PlaceLocalHandle< ::x10::array::LocalState<TPMGL(T)>*>::__apply());
    
    //#line 39 "x10/array/DistArray_Block_2.x10"
    return (!::x10aux::struct_equals(ls, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))
      ? (::x10aux::nullCheck(ls)->FMGL(dist)->FMGL(localIndices))
      : (::x10::array::DenseIterationSpace_2::_make(((x10_long)0ll),
                                                    ((x10_long)0ll),
                                                    ((x10_long)-1ll),
                                                    ((x10_long)-1ll)));
    
}

//#line 43 "x10/array/DistArray_Block_2.x10"

//#line 44 "x10/array/DistArray_Block_2.x10"
template<class TPMGL(T)> x10_long x10::array::DistArray_Block_2<TPMGL(T)>::reloadMinIndex_1(
  ) {
    return this->FMGL(localIndices)->x10::array::DenseIterationSpace_2::min(
             ((x10_long)0ll));
    
}

//#line 47 "x10/array/DistArray_Block_2.x10"

//#line 48 "x10/array/DistArray_Block_2.x10"
template<class TPMGL(T)> x10_long x10::array::DistArray_Block_2<TPMGL(T)>::reloadNumElemsLocal_1(
  ) {
    return ((((this->FMGL(localIndices)->x10::array::DenseIterationSpace_2::max(
                 ((x10_long)0ll))) - (this->FMGL(minIndex_1)))) + (((x10_long)1ll)));
    
}

//#line 60 "x10/array/DistArray_Block_2.x10"
/**
     * Construct a m by n block distributed DistArray
     * whose data is distributed over pg and initialized using
     * the init function.
     *
     * @param m number of elements in the first dimension
     * @param n number of elements in the second dimension
     * @param pg the PlaceGroup to use to distibute the elements.
     * @param init the element initialization function
     */
template<class TPMGL(T)> void x10::array::DistArray_Block_2<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, ::x10::lang::PlaceGroup* pg,
                           ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init) {
    
    //#line 61 "x10/array/DistArray_Block_2.x10"
    (this)->::x10::array::DistArray<TPMGL(T)>::_constructor(
      pg, reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >(sizeof(x10_array_DistArray_Block_2__closure__1<TPMGL(T)>)))x10_array_DistArray_Block_2__closure__1<TPMGL(T)>(pg, m, n, init))),
      ::x10::array::DistArray_Block_2<void>::validateSize(
        m, n));
    
    //#line 60 "x10/array/DistArray_Block_2.x10"
    
    //#line 24 "x10/array/DistArray_Block_2.x10"
    this->x10::array::template DistArray_Block_2<TPMGL(T)>::__fieldInitializers_x10_array_DistArray_Block_2();
    
    //#line 62 "x10/array/DistArray_Block_2.x10"
    this->FMGL(globalIndices) = ::x10::array::DenseIterationSpace_2::_make(((x10_long)0ll),
                                                                           ((x10_long)0ll),
                                                                           ((m) - (((x10_long)1ll))),
                                                                           ((n) - (((x10_long)1ll))));
    
    //#line 63 "x10/array/DistArray_Block_2.x10"
    this->FMGL(numElems_1) = m;
    
    //#line 64 "x10/array/DistArray_Block_2.x10"
    this->FMGL(numElems_2) = n;
    
    //#line 65 "x10/array/DistArray_Block_2.x10"
    this->FMGL(localIndices) = this->x10::array::template DistArray_Block_2<TPMGL(T)>::reloadLocalIndices();
    
    //#line 66 "x10/array/DistArray_Block_2.x10"
    this->FMGL(minIndex_1) = this->x10::array::template DistArray_Block_2<TPMGL(T)>::reloadMinIndex_1();
    
    //#line 67 "x10/array/DistArray_Block_2.x10"
    this->FMGL(numElemsLocal_1) = this->x10::array::template DistArray_Block_2<TPMGL(T)>::reloadNumElemsLocal_1();
}
template<class TPMGL(T)> ::x10::array::DistArray_Block_2<TPMGL(T)>* x10::array::DistArray_Block_2<TPMGL(T)>::_make(
                           x10_long m, x10_long n, ::x10::lang::PlaceGroup* pg,
                           ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init)
{
    ::x10::array::DistArray_Block_2<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Block_2<TPMGL(T)> >()) ::x10::array::DistArray_Block_2<TPMGL(T)>();
    this_->_constructor(m, n, pg, init);
    return this_;
}



//#line 80 "x10/array/DistArray_Block_2.x10"
/**
     * Construct a m by n block distributed DistArray
     * whose data is distributed over Place.places() and 
     * initialized using the provided init closure.
     *
     * @param m number of elements in the first dimension
     * @param n number of elements in the second dimension
     * @param init the element initialization function
     */
template<class TPMGL(T)> void x10::array::DistArray_Block_2<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init) {
    
    //#line 81 "x10/array/DistArray_Block_2.x10"
    (this)->::x10::array::DistArray_Block_2<TPMGL(T)>::_constructor(
      m, n, ::x10::lang::Place::places(), init);
    
}
template<class TPMGL(T)> ::x10::array::DistArray_Block_2<TPMGL(T)>* x10::array::DistArray_Block_2<TPMGL(T)>::_make(
                           x10_long m, x10_long n, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init)
{
    ::x10::array::DistArray_Block_2<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Block_2<TPMGL(T)> >()) ::x10::array::DistArray_Block_2<TPMGL(T)>();
    this_->_constructor(m, n, init);
    return this_;
}



//#line 93 "x10/array/DistArray_Block_2.x10"
/**
     * Construct a m by n block distributed DistArray
     * whose data is distributed over pg and zero-initialized.
     *
     * @param m number of elements in the first dimension
     * @param n number of elements in the second dimension
     * @param pg the PlaceGroup to use to distibute the elements.
     */
template<class TPMGL(T)> void x10::array::DistArray_Block_2<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, ::x10::lang::PlaceGroup* pg) {
    
    //#line 94 "x10/array/DistArray_Block_2.x10"
    (this)->::x10::array::DistArray_Block_2<TPMGL(T)>::_constructor(
      m, n, pg, reinterpret_cast< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(sizeof(x10_array_DistArray_Block_2__closure__3<TPMGL(T)>)))x10_array_DistArray_Block_2__closure__3<TPMGL(T)>())));
    
}
template<class TPMGL(T)> ::x10::array::DistArray_Block_2<TPMGL(T)>* x10::array::DistArray_Block_2<TPMGL(T)>::_make(
                           x10_long m, x10_long n, ::x10::lang::PlaceGroup* pg)
{
    ::x10::array::DistArray_Block_2<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Block_2<TPMGL(T)> >()) ::x10::array::DistArray_Block_2<TPMGL(T)>();
    this_->_constructor(m, n, pg);
    return this_;
}



//#line 106 "x10/array/DistArray_Block_2.x10"
/**
     * Construct a m by n block distributed DistArray
     * whose data is distributed over Place.places() and 
     * zero-initialized.
     *
     * @param m number of elements in the first dimension
     * @param n number of elements in the second dimension
     */
template<class TPMGL(T)> void x10::array::DistArray_Block_2<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n) {
    
    //#line 107 "x10/array/DistArray_Block_2.x10"
    (this)->::x10::array::DistArray_Block_2<TPMGL(T)>::_constructor(
      m, n, ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(sizeof(x10_array_DistArray_Block_2__closure__4<TPMGL(T)>)))x10_array_DistArray_Block_2__closure__4<TPMGL(T)>())));
    
}
template<class TPMGL(T)> ::x10::array::DistArray_Block_2<TPMGL(T)>* x10::array::DistArray_Block_2<TPMGL(T)>::_make(
                           x10_long m, x10_long n) {
    ::x10::array::DistArray_Block_2<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Block_2<TPMGL(T)> >()) ::x10::array::DistArray_Block_2<TPMGL(T)>();
    this_->_constructor(m, n);
    return this_;
}



//#line 116 "x10/array/DistArray_Block_2.x10"
/**
     * Get an IterationSpace that represents all Points contained in
     * the global iteration space (valid indices) of the DistArray.
     * @return an IterationSpace for the DistArray
     */
template<class TPMGL(T)> ::x10::array::IterationSpace* x10::array::DistArray_Block_2<TPMGL(T)>::globalIndices(
  ) {
    return reinterpret_cast< ::x10::array::IterationSpace*>(this->FMGL(globalIndices));
    
}

//#line 124 "x10/array/DistArray_Block_2.x10"
/**
     * Get an IterationSpace that represents all Points contained in
     * the local iteration space (valid indices) of the DistArray at the current Place.
     * @return an IterationSpace for the local portion of the DistArray
     */
template<class TPMGL(T)> ::x10::array::IterationSpace* x10::array::DistArray_Block_2<TPMGL(T)>::localIndices(
  ) {
    return reinterpret_cast< ::x10::array::IterationSpace*>(this->FMGL(localIndices));
    
}

//#line 137 "x10/array/DistArray_Block_2.x10"
/**
     * Return the Place which contains the data for the argument
     * index or Place.INVALID_PLACE if the Point is not in the globalIndices
     * of this DistArray
     *
     * @param i the index in the first dimension
     * @param j the index in the second dimension
     * @return the Place where (i,j) is a valid index in the DistArray; 
     *          will return Place.INVALID_PLACE if (i,j) is not contained in globalIndices
     */
template<class TPMGL(T)> ::x10::lang::Place x10::array::DistArray_Block_2<TPMGL(T)>::place(
  x10_long i, x10_long j) {
    
    //#line 138 "x10/array/DistArray_Block_2.x10"
    if ((((j) < (((x10_long)0ll))) || ((j) >= (this->FMGL(numElems_2)))))
    {
        return ::x10::lang::Place::FMGL(INVALID_PLACE__get)();
        
    }
    
    //#line 139 "x10/array/DistArray_Block_2.x10"
    x10_long tmp = ::x10::array::BlockingUtils::mapIndexToBlockPartition(
                     ((x10_long)0ll), ((this->FMGL(numElems_1)) - (((x10_long)1ll))),
                     ::x10aux::nullCheck(this->FMGL(placeGroup))->x10::lang::PlaceGroup::size(),
                     i);
    
    //#line 140 "x10/array/DistArray_Block_2.x10"
    return (::x10aux::struct_equals(tmp, ((x10_long)-1ll)))
      ? (::x10::lang::Place::FMGL(INVALID_PLACE__get)()) : (::x10aux::nullCheck(this->FMGL(placeGroup))->__apply(
                                                              tmp));
    
}

//#line 153 "x10/array/DistArray_Block_2.x10"
/**
     * Return the Place which contains the data for the argument
     * Point or Place.INVALID_PLACE if the Point is not in the globalIndices
     * of this DistArray
     *
     * @param p the Point to lookup
     * @return the Place where p is a valid index in the DistArray; 
     *          will return Place.INVALID_PLACE if p is not contained in globalIndices
     */
template<class TPMGL(T)> ::x10::lang::Place x10::array::DistArray_Block_2<TPMGL(T)>::place(
  ::x10::lang::Point* p) {
    return this->x10::array::template DistArray_Block_2<TPMGL(T)>::place(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                   ((x10_long)1ll)));
    
}

//#line 164 "x10/array/DistArray_Block_2.x10"
/**
     * Return the element of this array corresponding to the given index.
     * 
     * @param i the given index in the first dimension
     * @param j the given index in the second dimension
     * @return the element of this array corresponding to the given index.
     * @see #set(T, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray_Block_2<TPMGL(T)>::__apply(
  x10_long i, x10_long j) {
    
    //#line 165 "x10/array/DistArray_Block_2.x10"
    if ((PLACE_CHECK_BOOL || BOUNDS_CHECK_BOOL)) {
        this->x10::array::template DistArray_Block_2<TPMGL(T)>::validateIndex(
          i, j);
    }
    
    //#line 166 "x10/array/DistArray_Block_2.x10"
    return (this->FMGL(raw))->unchecked_apply(this->x10::array::template DistArray_Block_2<TPMGL(T)>::offset(
                                                i, j));
    
}

//#line 177 "x10/array/DistArray_Block_2.x10"
/**
     * Return the element of this array corresponding to the given Point.
     * 
     * @param p the given Point
     * @return the element of this array corresponding to the given Point.
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray_Block_2<TPMGL(T)>::__apply(
  ::x10::lang::Point* p) {
    return this->x10::array::template DistArray_Block_2<TPMGL(T)>::__apply(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                   ((x10_long)1ll)));
    
}

//#line 190 "x10/array/DistArray_Block_2.x10"
/**
     * Set the element of this array corresponding to the given index to the given value.
     * Return the new value of the element.
     * 
     * @param v the given value
     * @param i the given index in the first dimension
     * @param j the given index in the second dimension
     * @return the new value of the element of this array corresponding to the given index.
     * @see #operator(Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray_Block_2<TPMGL(T)>::__set(
  x10_long i, x10_long j, TPMGL(T) v) {
    
    //#line 191 "x10/array/DistArray_Block_2.x10"
    if ((PLACE_CHECK_BOOL || BOUNDS_CHECK_BOOL)) {
        this->x10::array::template DistArray_Block_2<TPMGL(T)>::validateIndex(
          i, j);
    }
    
    //#line 192 "x10/array/DistArray_Block_2.x10"
    return (this->FMGL(raw))->unchecked_set(this->x10::array::template DistArray_Block_2<TPMGL(T)>::offset(
                                              i, j), v);
    
}

//#line 205 "x10/array/DistArray_Block_2.x10"
/**
     * Set the element of this array corresponding to the given Point to the given value.
     * Return the new value of the element.
     * 
     * @param v the given value
     * @param p the given Point
     * @return the new value of the element of this array corresponding to the given Point.
     * @see #operator(Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray_Block_2<TPMGL(T)>::__set(
  ::x10::lang::Point* p, TPMGL(T) v) {
    return this->x10::array::template DistArray_Block_2<TPMGL(T)>::__set(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                   ((x10_long)1ll)), v);
    
}

//#line 213 "x10/array/DistArray_Block_2.x10"
template<class TPMGL(T)> void x10::array::DistArray_Block_2<TPMGL(T)>::validateIndex(
  x10_long i, x10_long j) {
    
    //#line 214 "x10/array/DistArray_Block_2.x10"
    if ((PLACE_CHECK_BOOL || BOUNDS_CHECK_BOOL)) {
        
        //#line 215 "x10/array/DistArray_Block_2.x10"
        if ((BOUNDS_CHECK_BOOL && ((((j) < (((x10_long)0ll))) ||
                                   ((j) >= (this->FMGL(numElems_2)))))))
        {
            
            //#line 216 "x10/array/DistArray_Block_2.x10"
            ::x10::array::DistArray<void>::raiseBoundsError(
              i, j);
        }
        
        //#line 218 "x10/array/DistArray_Block_2.x10"
        if ((((i) < (this->FMGL(minIndex_1))) || ((i) >= (((this->FMGL(minIndex_1)) + (this->FMGL(numElemsLocal_1)))))))
        {
            
            //#line 219 "x10/array/DistArray_Block_2.x10"
            if ((BOUNDS_CHECK_BOOL && ((((i) < (((x10_long)0ll))) ||
                                       ((i) >= (this->FMGL(numElems_1)))))))
            {
                
                //#line 220 "x10/array/DistArray_Block_2.x10"
                ::x10::array::DistArray<void>::raiseBoundsError(
                  i, j);
            }
            
            //#line 222 "x10/array/DistArray_Block_2.x10"
            if (PLACE_CHECK_BOOL) {
                ::x10::array::DistArray<void>::raisePlaceError(
                  i, j);
            }
            
        }
        
    }
    
}

//#line 227 "x10/array/DistArray_Block_2.x10"
template<class TPMGL(T)> x10_long x10::array::DistArray_Block_2<TPMGL(T)>::offset(
  x10_long i, x10_long j) {
    
    //#line 228 "x10/array/DistArray_Block_2.x10"
    return ((j) + (((((i) - (this->FMGL(minIndex_1)))) * (this->FMGL(numElems_2)))));
    
}

//#line 239 "x10/array/DistArray_Block_2.x10"
/**
     * Returns the specified rectangular patch of this array as a Rail.
     * 
     * @param space the IterationSpace representing the portion of this array to copy
     * @see offset
     * @throws ArrayIndexOutOfBoundsException if the specified region is not
     *        contained in this array
     */
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::array::DistArray_Block_2<TPMGL(T)>::getPatch(
  ::x10::array::IterationSpace* space) {
    
    //#line 240 "x10/array/DistArray_Block_2.x10"
    ::x10::array::DenseIterationSpace_2* r = ::x10aux::class_cast< ::x10::array::DenseIterationSpace_2*>(space);
    
    //#line 242 "x10/array/DistArray_Block_2.x10"
    if ((BOUNDS_CHECK_BOOL && !((((((this->FMGL(localIndices)->FMGL(min0)) <= (::x10aux::nullCheck(r)->FMGL(min0))) &&
        ((::x10aux::nullCheck(r)->FMGL(max0)) <= (this->FMGL(localIndices)->FMGL(max0)))) &&
        ((this->FMGL(localIndices)->FMGL(min1)) <= (::x10aux::nullCheck(r)->FMGL(min1)))) &&
        ((::x10aux::nullCheck(r)->FMGL(max1)) <= (this->FMGL(localIndices)->FMGL(max1)))))))
    {
        
        //#line 245 "x10/array/DistArray_Block_2.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::ArrayIndexOutOfBoundsException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::array::DistArray_Block_2_Strings::sl__153865), r), (&::x10::array::DistArray_Block_2_Strings::sl__153866)), this->FMGL(localIndices)))));
    }
    
    //#line 248 "x10/array/DistArray_Block_2.x10"
    ::x10::lang::Rail< TPMGL(T) >* patch = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(::x10aux::nullCheck(r)->x10::array::DenseIterationSpace_2::size(), false);
    
    //#line 249 "x10/array/DistArray_Block_2.x10"
    x10_long patchIndex = ((x10_long)0ll);
    
    //#line 250 "x10/array/DistArray_Block_2.x10"
    ::x10::array::DenseIterationSpace_2* p__96589 = r;
    x10_long i1__96490min__96590 = ::x10aux::nullCheck(p__96589)->x10::array::DenseIterationSpace_2::min(
                                     ((x10_long)1ll));
    x10_long i1__96490max__96591 = ::x10aux::nullCheck(p__96589)->x10::array::DenseIterationSpace_2::max(
                                     ((x10_long)1ll));
    x10_long i0__96521min__96592 = ::x10aux::nullCheck(p__96589)->x10::array::DenseIterationSpace_2::min(
                                     ((x10_long)0ll));
    x10_long i0__96521max__96593 = ::x10aux::nullCheck(p__96589)->x10::array::DenseIterationSpace_2::max(
                                     ((x10_long)0ll));
    {
        x10_long i__96594;
        for (i__96594 = i0__96521min__96592; ((i__96594) <= (i0__96521max__96593));
             i__96594 = ((i__96594) + (((x10_long)1ll))))
        {
            x10_long i__96595 = i__96594;
            {
                x10_long i__96596;
                for (i__96596 = i1__96490min__96590; ((i__96596) <= (i1__96490max__96591));
                     i__96596 = ((i__96596) + (((x10_long)1ll))))
                {
                    x10_long i__96597 = i__96596;
                    
                    //#line 251 "x10/array/DistArray_Block_2.x10"
                    patch->x10::lang::template Rail< TPMGL(T) >::__set(
                      (__extension__ ({
                          x10_long pre__96588 = patchIndex;
                          patchIndex = ((patchIndex) + (((x10_long)1ll)));
                          pre__96588;
                      }))
                      , this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                          this->x10::array::template DistArray_Block_2<TPMGL(T)>::offset(
                            i__96595, i__96597)));
                }
            }
            
        }
    }
    
    //#line 253 "x10/array/DistArray_Block_2.x10"
    return patch;
    
}

//#line 256 "x10/array/DistArray_Block_2.x10"

//#line 24 "x10/array/DistArray_Block_2.x10"
template<class TPMGL(T)> ::x10::array::DistArray_Block_2<TPMGL(T)>*
  x10::array::DistArray_Block_2<TPMGL(T)>::x10__array__DistArray_Block_2____this__x10__array__DistArray_Block_2(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::array::DistArray_Block_2<TPMGL(T)>::__fieldInitializers_x10_array_DistArray_Block_2(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::array::DistArray_Block_2<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::array::DistArray_Block_2<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::array::DistArray_Block_2<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::array::DistArray<TPMGL(T)>::_serialize_body(buf);
    buf.write(this->FMGL(globalIndices));
    buf.write(this->FMGL(numElems_1));
    buf.write(this->FMGL(numElems_2));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::array::DistArray_Block_2<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::array::DistArray_Block_2<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Block_2<TPMGL(T)> >()) ::x10::array::DistArray_Block_2<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::array::DistArray_Block_2<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::array::DistArray<TPMGL(T)>::_deserialize_body(buf);
    FMGL(globalIndices) = buf.read< ::x10::array::DenseIterationSpace_2*>();
    FMGL(numElems_1) = buf.read<x10_long>();
    FMGL(numElems_2) = buf.read<x10_long>();
    /* fields with @TransientInitExpr annotations */
    FMGL(localIndices) = x10::array::template DistArray_Block_2<TPMGL(T)>::reloadLocalIndices();
    FMGL(minIndex_1) = x10::array::template DistArray_Block_2<TPMGL(T)>::reloadMinIndex_1();
    FMGL(numElemsLocal_1) = x10::array::template DistArray_Block_2<TPMGL(T)>::reloadNumElemsLocal_1();
    
}

#endif // X10_ARRAY_DISTARRAY_BLOCK_2_H_IMPLEMENTATION
#endif // __X10_ARRAY_DISTARRAY_BLOCK_2_H_NODEPS
