#ifndef __X10_ARRAY_DISTARRAY_H
#define __X10_ARRAY_DISTARRAY_H

#include <x10rt.h>


#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
namespace x10 { namespace lang { 
class Point;
} } 
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace array { 
template<class TPMGL(S)> class LocalState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class TransientInitExpr;
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
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace array { 
template<class TPMGL(U), class TPMGL(T)> class DistArray__Anonymous__7909;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace compiler { 
class NoInline;
} } 
namespace x10 { namespace compiler { 
class NoReturn;
} } 
namespace x10 { namespace lang { 
class BadPlaceException;
} } 
namespace x10 { namespace lang { 
class NegativeArraySizeException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class DistArray_Strings {
  public:
    static ::x10::lang::String sl__164085;
    static ::x10::lang::String sl__164081;
    static ::x10::lang::String sl__164080;
    static ::x10::lang::String sl__164082;
    static ::x10::lang::String sl__164086;
    static ::x10::lang::String sl__164084;
    static ::x10::lang::String sl__164083;
    static ::x10::lang::String sl__164087;
};

template<class TPMGL(T)> class DistArray;
template <> class DistArray<void>;
template<class TPMGL(T)> class DistArray : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(size);
    
    x10_long rank();
    ::x10::lang::PlaceLocalHandle< ::x10::array::LocalState<TPMGL(T)>*> FMGL(localHandle);
    
    ::x10::lang::Rail< TPMGL(T) >* FMGL(raw);
    
    virtual ::x10::lang::Rail< TPMGL(T) >* getRailFromLocalHandle();
    ::x10::lang::PlaceGroup* FMGL(placeGroup);
    
    void _constructor(::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>* init,
                      x10_long sz);
    
    virtual ::x10::lang::Rail< TPMGL(T) >* raw();
    virtual ::x10::lang::PlaceGroup* placeGroup();
    virtual ::x10::array::IterationSpace* globalIndices() = 0;
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator(
      );
    virtual ::x10::array::IterationSpace* localIndices() = 0;
    virtual ::x10::lang::Place place(::x10::lang::Point* p) = 0;
    virtual TPMGL(T) __apply(::x10::lang::Point* p) = 0;
    virtual TPMGL(T) __set(::x10::lang::Point* p, TPMGL(T) v) = 0;
    virtual ::x10::lang::Rail< TPMGL(T) >* getPatch(::x10::array::IterationSpace* space) = 0;
    virtual TPMGL(T) reduce(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
                            TPMGL(T) unit);
    template<class TPMGL(U)> TPMGL(U) reduce(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* lop,
                                             ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* gop,
                                             TPMGL(U) unit);
    template<class TPMGL(U)> ::x10::array::DistArray<TPMGL(U)>*
      map(::x10::array::DistArray<TPMGL(U)>* dst, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(S), class TPMGL(U)> ::x10::array::DistArray<TPMGL(U)>*
      map(::x10::array::DistArray<TPMGL(S)>* src2, ::x10::array::DistArray<TPMGL(U)>* dst,
          ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(S), TPMGL(U)>* op);
    virtual ::x10::array::DistArray<TPMGL(T)>* x10__array__DistArray____this__x10__array__DistArray(
      );
    virtual void __fieldInitializers_x10_array_DistArray(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::array::DistArray<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::array::DistArray<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::array::DistArray<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Iterable< ::x10::lang::Point*> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.array.DistArray";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class DistArray<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    static void raiseBoundsError(x10_long i) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(x10_long i, x10_long j) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(x10_long i, x10_long j, x10_long k) X10_PRAGMA_NORETURN ;
    
    static void raisePlaceError(x10_long i) X10_PRAGMA_NORETURN ;
    
    static void raisePlaceError(x10_long i, x10_long j) X10_PRAGMA_NORETURN ;
    
    static void raisePlaceError(x10_long i, x10_long j, x10_long k) X10_PRAGMA_NORETURN ;
    
    static void raiseNegativeArraySizeException() X10_PRAGMA_NORETURN ;
    
    
};

} } 
#endif // X10_ARRAY_DISTARRAY_H

namespace x10 { namespace array { 
template<class TPMGL(T)> class DistArray;
} } 

#ifndef X10_ARRAY_DISTARRAY_H_NODEPS
#define X10_ARRAY_DISTARRAY_H_NODEPS
#include <x10/lang/Iterable.h>
#include <x10/lang/Point.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Long.h>
#include <x10/array/LocalState.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/TransientInitExpr.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/compiler/Inline.h>
#include <x10/array/IterationSpace.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Place.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/array/DistArray__Anonymous__7909.h>
#include <x10/xrx/FinishState.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/String.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/compiler/NoInline.h>
#include <x10/compiler/NoReturn.h>
#include <x10/lang/BadPlaceException.h>
#include <x10/lang/NegativeArraySizeException.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_ARRAY_DISTARRAY__CLOSURE__1_CLOSURE
#define X10_ARRAY_DISTARRAY__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(U)> class x10_array_DistArray__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 205 "x10/array/DistArray.x10"
        TPMGL(U) localRes = (__extension__ ({
            ::x10::lang::Rail< TPMGL(T) >* src__102141 = (__extension__ ({
                ::x10::array::DistArray<TPMGL(T)>* this__102139 = saved_this;
                ::x10aux::nullCheck(this__102139)->FMGL(raw);
            }))
            ;
            
            //#line 132 "x10/util/RailUtils.x10"
            TPMGL(U) accum__102144 = unit;
            
            //#line 133 "x10/util/RailUtils.x10"
            x10_long i__96508max__102181 = (x10_long)(::x10aux::nullCheck(src__102141)->FMGL(size));
            {
                x10_long i__102182;
                for (i__102182 = ((x10_long)0ll); ((i__102182) < (i__96508max__102181));
                     i__102182 = ((i__102182) + (((x10_long)1ll))))
                {
                    
                    //#line 134 "x10/util/RailUtils.x10"
                    accum__102144 = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(lop), 
                      accum__102144, ::x10aux::nullCheck(src__102141)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                       i__102182));
                }
            }
            accum__102144;
        }))
        ;
        
        //#line 206 "x10/array/DistArray.x10"
        ::x10::xrx::Runtime::template makeOffer< TPMGL(U) >(
          localRes);
    }
    
    // captured environment
    ::x10::array::DistArray<TPMGL(T)>* saved_this;
    ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* lop;
    TPMGL(U) unit;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->lop);
        buf.write(this->unit);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::array::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::array::DistArray<TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* that_lop = buf.read< ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>*>();
        TPMGL(U) that_unit = buf.read<TPMGL(U)>();
        x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) >* this_ = new (storage) x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) >(that_saved_this, that_lop, that_unit);
        return this_;
    }
    
    x10_array_DistArray__closure__1(::x10::array::DistArray<TPMGL(T)>* saved_this, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* lop, TPMGL(U) unit) : saved_this(saved_this), lop(lop), unit(unit) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray.x10:204-207";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename ::x10::lang::VoidFun_0_0::template itable <x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) > >x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) >::__apply, &x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) >::_deserialize);
template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_ARRAY_DISTARRAY__CLOSURE__1_CLOSURE
#ifndef X10_ARRAY_DISTARRAY__CLOSURE__2_CLOSURE
#define X10_ARRAY_DISTARRAY__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(U)> class x10_array_DistArray__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 233 "x10/array/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* s = (__extension__ ({
            ::x10::array::DistArray<TPMGL(T)>* this__102151 = saved_this;
            ::x10aux::nullCheck(this__102151)->FMGL(raw);
        }))
        ;
        
        //#line 234 "x10/array/DistArray.x10"
        ::x10::lang::Rail< TPMGL(U) >* d = ::x10aux::nullCheck(dst)->FMGL(raw);
        
        //#line 180 "x10/util/RailUtils.x10"
        x10_long i__96546max__102188 = (x10_long)(::x10aux::nullCheck(s)->FMGL(size));
        {
            x10_long i__102189;
            for (i__102189 = ((x10_long)0ll); ((i__102189) < (i__96546max__102188));
                 i__102189 = ((i__102189) + (((x10_long)1ll)))) {
                
                //#line 181 "x10/util/RailUtils.x10"
                d->x10::lang::template Rail< TPMGL(U) >::__set(i__102189,
                                                               ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                                                                 s->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                                   i__102189)));
            }
        }
        
    }
    
    // captured environment
    ::x10::array::DistArray<TPMGL(T)>* saved_this;
    ::x10::array::DistArray<TPMGL(U)>* dst;
    ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->dst);
        buf.write(this->op);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::array::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::array::DistArray<TPMGL(T)>*>();
        ::x10::array::DistArray<TPMGL(U)>* that_dst = buf.read< ::x10::array::DistArray<TPMGL(U)>*>();
        ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* that_op = buf.read< ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>*>();
        x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) >* this_ = new (storage) x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) >(that_saved_this, that_dst, that_op);
        return this_;
    }
    
    x10_array_DistArray__closure__2(::x10::array::DistArray<TPMGL(T)>* saved_this, ::x10::array::DistArray<TPMGL(U)>* dst, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) : saved_this(saved_this), dst(dst), op(op) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray.x10:232-236";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename ::x10::lang::VoidFun_0_0::template itable <x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) > >x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) >::__apply, &x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U) >::_deserialize);

#endif // X10_ARRAY_DISTARRAY__CLOSURE__2_CLOSURE
#ifndef X10_ARRAY_DISTARRAY__CLOSURE__3_CLOSURE
#define X10_ARRAY_DISTARRAY__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> class x10_array_DistArray__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 261 "x10/array/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* s1 = (__extension__ ({
            ::x10::array::DistArray<TPMGL(T)>* this__102163 = saved_this;
            ::x10aux::nullCheck(this__102163)->FMGL(raw);
        }))
        ;
        
        //#line 262 "x10/array/DistArray.x10"
        ::x10::lang::Rail< TPMGL(S) >* s2 = ::x10aux::nullCheck(src2)->FMGL(raw);
        
        //#line 263 "x10/array/DistArray.x10"
        ::x10::lang::Rail< TPMGL(U) >* d = ::x10aux::nullCheck(dst)->FMGL(raw);
        
        //#line 264 "x10/array/DistArray.x10"
        if ((!::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(s1)->FMGL(size)),
                                      (x10_long)(::x10aux::nullCheck(s2)->FMGL(size)))))
        {
            
            //#line 265 "x10/array/DistArray.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::array::DistArray_Strings::sl__164080), (x10_long)(::x10aux::nullCheck(s1)->FMGL(size))), (&::x10::array::DistArray_Strings::sl__164081)), (x10_long)(::x10aux::nullCheck(s2)->FMGL(size))), (&::x10::array::DistArray_Strings::sl__164082)), ::x10::lang::Place::_make(::x10aux::here)))));
        }
        
        //#line 267 "x10/array/DistArray.x10"
        ::x10::lang::Rail< TPMGL(S) >* src__102199 = (__extension__ ({
            ::x10::lang::Rail< TPMGL(S) >* t__102200 = s2;
            if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__102200)->FMGL(size)),
                                           (x10_long)(::x10aux::nullCheck(s1)->FMGL(size))))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::array::DistArray_Strings::sl__164083))));
            }
            t__102200;
        }))
        ;
        
        //#line 203 "x10/util/RailUtils.x10"
        x10_long i__96565max__102195 = (x10_long)(::x10aux::nullCheck(s1)->FMGL(size));
        {
            x10_long i__102196;
            for (i__102196 = ((x10_long)0ll); ((i__102196) < (i__96565max__102195));
                 i__102196 = ((i__102196) + (((x10_long)1ll))))
            {
                
                //#line 204 "x10/util/RailUtils.x10"
                d->x10::lang::template Rail< TPMGL(U) >::__set(
                  i__102196, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(S), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                    s1->x10::lang::template Rail< TPMGL(T) >::__apply(
                      i__102196), ::x10aux::nullCheck(src__102199)->x10::lang::template Rail< TPMGL(S) >::__apply(
                                    i__102196)));
            }
        }
        
    }
    
    // captured environment
    ::x10::array::DistArray<TPMGL(T)>* saved_this;
    ::x10::array::DistArray<TPMGL(S)>* src2;
    ::x10::array::DistArray<TPMGL(U)>* dst;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(S), TPMGL(U)>* op;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->src2);
        buf.write(this->dst);
        buf.write(this->op);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::array::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::array::DistArray<TPMGL(T)>*>();
        ::x10::array::DistArray<TPMGL(S)>* that_src2 = buf.read< ::x10::array::DistArray<TPMGL(S)>*>();
        ::x10::array::DistArray<TPMGL(U)>* that_dst = buf.read< ::x10::array::DistArray<TPMGL(U)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(S), TPMGL(U)>* that_op = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(S), TPMGL(U)>*>();
        x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) >* this_ = new (storage) x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) >(that_saved_this, that_src2, that_dst, that_op);
        return this_;
    }
    
    x10_array_DistArray__closure__3(::x10::array::DistArray<TPMGL(T)>* saved_this, ::x10::array::DistArray<TPMGL(S)>* src2, ::x10::array::DistArray<TPMGL(U)>* dst, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(S), TPMGL(U)>* op) : saved_this(saved_this), src2(src2), dst(dst), op(op) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray.x10:260-268";
    }

};

template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> typename ::x10::lang::VoidFun_0_0::template itable <x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) > >x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) >::__apply, &x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> ::x10aux::itable_entry x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> const ::x10aux::serialization_id_t x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U) >::_deserialize);

#endif // X10_ARRAY_DISTARRAY__CLOSURE__3_CLOSURE
#ifndef X10_ARRAY_DISTARRAY_H_GENERICS
#define X10_ARRAY_DISTARRAY_H_GENERICS
#ifndef X10_ARRAY_DISTARRAY_H_reduce_249
#define X10_ARRAY_DISTARRAY_H_reduce_249
template<class TPMGL(T)> template<class TPMGL(U)> TPMGL(U) x10::array::DistArray<TPMGL(T)>::reduce(
  ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* lop, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* gop,
  TPMGL(U) unit) {
    
    //#line 197 "x10/array/DistArray.x10"
    ::x10::array::DistArray__Anonymous__7909<TPMGL(U), TPMGL(T)>* reducer =
       (new (::x10aux::alloc_z< ::x10::array::DistArray__Anonymous__7909<TPMGL(U), TPMGL(T)> >()) ::x10::array::DistArray__Anonymous__7909<TPMGL(U), TPMGL(T)>());
    ::x10::array::DistArray<TPMGL(T)>* out__102184 = this;
    
    //#line 39 "x10/array/DistArray.x10"
    reducer->FMGL(out__) = out__102184;
    
    //#line 196 "x10/array/DistArray.x10"
    reducer->FMGL(unit) = unit;
    reducer->FMGL(gop) = gop;
    
    //#line 202 "x10/array/DistArray.x10"
    TPMGL(U) result;
    {
        ::x10::xrx::FinishState* fs__102211 = ::x10aux::class_cast_unchecked< ::x10::xrx::FinishState*>(::x10::xrx::Runtime::template startCollectingFinish< TPMGL(U) >(
                                                                                                          reinterpret_cast< ::x10::lang::Reducible<TPMGL(U)>*>(reducer)));
        try {
            {
                
                //#line 203 "x10/array/DistArray.x10"
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* where__99080;
                    for (where__99080 = ::x10aux::nullCheck(this->FMGL(placeGroup))->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(where__99080));
                         ) {
                        ::x10::lang::Place where = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(where__99080));
                        
                        //#line 204 "x10/array/DistArray.x10"
                        ::x10::xrx::Runtime::runAsync(where,
                                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U)>)))x10_array_DistArray__closure__1<TPMGL(T),TPMGL(U)>(this, lop, unit))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc250) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc250;
                {
                    ::x10::xrx::Runtime::pushException(__lowerer__var__0__);
                }
            }
        }
        result = ::x10::xrx::Runtime::template stopCollectingFinish< TPMGL(U) >(
                   fs__102211);
    }
    
    //#line 211 "x10/array/DistArray.x10"
    return result;
    
}
#endif // X10_ARRAY_DISTARRAY_H_reduce_249
#ifndef X10_ARRAY_DISTARRAY_H_map_251
#define X10_ARRAY_DISTARRAY_H_map_251
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::array::DistArray<TPMGL(U)>*
  x10::array::DistArray<TPMGL(T)>::map(::x10::array::DistArray<TPMGL(U)>* dst,
                                       ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 232 "x10/array/DistArray.x10"
    ::x10aux::nullCheck(this->FMGL(placeGroup))->broadcastFlat(
      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U)>)))x10_array_DistArray__closure__2<TPMGL(T),TPMGL(U)>(this, dst, op))));
    
    //#line 237 "x10/array/DistArray.x10"
    return dst;
    
}
#endif // X10_ARRAY_DISTARRAY_H_map_251
#ifndef X10_ARRAY_DISTARRAY_H_map_252
#define X10_ARRAY_DISTARRAY_H_map_252
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::array::DistArray<TPMGL(U)>* x10::array::DistArray<TPMGL(T)>::map(
  ::x10::array::DistArray<TPMGL(S)>* src2, ::x10::array::DistArray<TPMGL(U)>* dst,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(S), TPMGL(U)>* op) {
    
    //#line 260 "x10/array/DistArray.x10"
    ::x10aux::nullCheck(this->FMGL(placeGroup))->broadcastFlat(
      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U)>)))x10_array_DistArray__closure__3<TPMGL(T),TPMGL(S),TPMGL(U)>(this, src2, dst, op))));
    
    //#line 269 "x10/array/DistArray.x10"
    return dst;
    
}
#endif // X10_ARRAY_DISTARRAY_H_map_252
#endif // X10_ARRAY_DISTARRAY_H_GENERICS
#ifndef X10_ARRAY_DISTARRAY_H_IMPLEMENTATION
#define X10_ARRAY_DISTARRAY_H_IMPLEMENTATION
#include <x10/array/DistArray.h>


//#line 43 "x10/array/DistArray.x10"
/**
         * The number of data values in the array.
         */

//#line 49 "x10/array/DistArray.x10"
/**
     * @return the rank (dimensionality) of the DistArray
     */

//#line 54 "x10/array/DistArray.x10"
/** 
     * The place-local state for the DistArray 
     */

//#line 60 "x10/array/DistArray.x10"
/**
     * The place-local backing storage for elements of the DistArray.
     */

//#line 61 "x10/array/DistArray.x10"
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::array::DistArray<TPMGL(T)>::getRailFromLocalHandle(
  ) {
    
    //#line 62 "x10/array/DistArray.x10"
    ::x10::array::LocalState<TPMGL(T)>* ls = this->FMGL(localHandle)->x10::lang::template PlaceLocalHandle< ::x10::array::LocalState<TPMGL(T)>*>::__apply();
    
    //#line 63 "x10/array/DistArray.x10"
    return (!::x10aux::struct_equals(ls, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))
      ? (::x10aux::nullCheck(ls)->FMGL(rail)) : (::x10::lang::Rail< TPMGL(T) >::_make());
    
}

//#line 69 "x10/array/DistArray.x10"
/**
     * The PlaceGroup over which this DistArray is defined.
     */

//#line 78 "x10/array/DistArray.x10"
/**
     * Construct the DistArray using the argument PlaceGroup
     * and initialization closure to create the LocalState of
     * the DistArray in every Place in the PlaceGroup.
     * @param pg the PlaceGroup over which the DistArray is defined.
     * @param init the closure to pass to PlaceLocalHandle.make
     */
template<class TPMGL(T)> void x10::array::DistArray<TPMGL(T)>::_constructor(
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>* init,
                           x10_long sz) {
    
    //#line 79 "x10/array/DistArray.x10"
    FMGL(size) = sz;
    
    //#line 80 "x10/array/DistArray.x10"
    ::x10::lang::PlaceLocalHandle< ::x10::array::LocalState<TPMGL(T)>*> plh =
      ::x10::lang::PlaceLocalHandle<void>::template makeFlat< ::x10::array::LocalState<TPMGL(T)>* >(
        pg, init);
    
    //#line 81 "x10/array/DistArray.x10"
    plh->x10::lang::template PlaceLocalHandle< ::x10::array::LocalState<TPMGL(T)>*>::__apply();
    
    //#line 82 "x10/array/DistArray.x10"
    this->FMGL(localHandle) = plh;
    
    //#line 83 "x10/array/DistArray.x10"
    this->FMGL(placeGroup) = pg;
    
    //#line 84 "x10/array/DistArray.x10"
    this->FMGL(raw) = this->x10::array::template DistArray<TPMGL(T)>::getRailFromLocalHandle();
}


//#line 99 "x10/array/DistArray.x10"
/**
     * <p>Return the Rail[T] that is providing the backing storage for the array.
     * This method is primarily intended to be used to interface with native libraries 
     * (eg BLAS, ESSL) and to support bulk copy operations using the asyncCopy 
     * methods of Rail.</p>
     * 
     * This method should be used sparingly, since it may make client code dependent on the layout
     * algorithm used to map the local portion of the rank-dimensional array indicies to 
     * the 1-dimensional indicies in the backing Rail.
     * 
     * @return the Rail[T] that is the backing storage for the DistArray object in this Place.
     */
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::array::DistArray<TPMGL(T)>::raw(
  ) {
    return this->FMGL(raw);
    
}

//#line 104 "x10/array/DistArray.x10"
/**
     * The PlaceGroup over which the DistArray is defined
     */
template<class TPMGL(T)> ::x10::lang::PlaceGroup* x10::array::DistArray<TPMGL(T)>::placeGroup(
  ) {
    return this->FMGL(placeGroup);
    
}

//#line 111 "x10/array/DistArray.x10"
/**
     * Get an IterationSpace that represents all Points contained in
     * the global iteration space (valid indices) of the DistArray.
     * @return an IterationSpace for the DistArray
     */

//#line 117 "x10/array/DistArray.x10"
/**
     * Define default iteration to be over globalIndices to support
     * idiomatic usage in <code>ateach</code>
     */
template<class TPMGL(T)> ::x10::lang::Iterator< ::x10::lang::Point*>*
  x10::array::DistArray<TPMGL(T)>::iterator() {
    return this->globalIndices()->iterator();
    
}

//#line 124 "x10/array/DistArray.x10"
/**
     * Get an IterationSpace that represents all Points contained in
     * the local iteration space (valid indices) of the DistArray at the current Place.
     * @return an IterationSpace for the Array
     */

//#line 135 "x10/array/DistArray.x10"
/**
     * Return the Place which contains the data for the argument
     * Point or Place.INVALID_PLACE if the Point is not in the globalIndices
     * of this DistArray
     *
     * @param p the Point to lookup
     * @return the Place where p is a valid index in the DistArray; 
     *          will return Place.INVALID_PLACE if p is not contained in globalIndices
     */

//#line 147 "x10/array/DistArray.x10"
/**
     * Return the element of this array corresponding to the given point.
     * The rank of the given point has to be the same as the rank of this array.
     * If the distribution does not map the given Point to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param p the given point
     * @return the element of this array corresponding to the given point.
     * @see #set(T, Point)
     */

//#line 161 "x10/array/DistArray.x10"
/**
     * Set the element of this array corresponding to the given point to the given value.
     * Return the new value of the element.
     * The rank of the given point has to be the same as the rank of this array.
     * If the distribution does not map the given Point to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param v the given value
     * @param p the given point
     * @return the new value of the element of this array corresponding to the given point.
     * @see #operator(Point)
     */

//#line 170 "x10/array/DistArray.x10"
/**
     * Returns the specified rectangular patch of this array as a Rail.
     * 
     * @param space the IterationSpace representing the portion of this array to copy
     * @throws ArrayIndexOutOfBoundsException if the specified region is not
     *        contained in this array
     */

//#line 183 "x10/array/DistArray.x10"
/**
     * Reduce this array using the given function and the given initial value.
     * Each element of the array will be given as an argument to the reduction
     * function exactly once, but in an arbitrary order.  The reduction function
     * may be applied concurrently to implement a parallel reduction.
     * 
     * @param op the reduction function
     * @param unit the given initial value
     * @return the final result of the reduction.
     * @see #reduce((U,T)=>U,(U,U)=>U,U)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray<TPMGL(T)>::reduce(
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
  TPMGL(T) unit) {
    return this->template reduce< TPMGL(T) >(op, op, unit);
    
}

//#line 196 "x10/array/DistArray.x10"
/**
     * Reduce this array using the given function and the given initial value.
     * Each element of the array will be given as an argument to the reduction
     * function exactly once, but in an arbitrary order.  The reduction function
     * may be applied concurrently to implement a parallel reduction.
     * 
     * @param lop the local reduction function
     * @param gop the global reduction function
     * @param unit the given initial value
     * @return the final result of the reduction.
     */

//#line 231 "x10/array/DistArray.x10"
/**
     * Map the given function onto the elements of this array
     * storing the results in the dst array. For maximum flexibility
     * of use, map does not require that the src and destination array
     * have the same dimesionality, rank or distribution, only that they have the same
     * number of elements as every Place.  
     * When applied to arrays that use the same IterationSpace,
     * the result will be that for all <code>pt</code> in the IterationSpace
     * </code> dst(pt) == op(src(pt)) </code>.  When applied to arrays that use
     * a different iteration space, the mapping from src to dst is defined in
     * terms of the index of the backing rails, that is <code>dst.raw()(i) = op(src.raw()(i))</code>
     * for i in <code>0..(src.size()-1)</code>.
     * 
     * @param dst the destination array for the results of the map operation
     * @param op the function to apply to each element of the array
     * @return dst after updating its contents to contain the result of the map operation.
     */

//#line 259 "x10/array/DistArray.x10"
/**
     * Map the given function onto the elements of this array
     * and the argument src array storing the results in the dst array. 
     * For maximum flexibility of use, map does not require that the three arrays
     * have the same dimesionality, rank or distribution, only that they have the same
     * number of elements at every Place.  
     * When applied to arrays that use the same IterationSpace,
     * the result will be that for all <code>pt</code> in the IterationSpace
     * </code> dst(pt) == op(this(pt), src(pt)) </code>.  When applied to arrays that use
     * a different iteration space, the mapping from src to dst is defined in
     * terms of the index of the backing rails, that is 
     * <code>dst.raw()(i) = op(this.raw()(i), src.raw()(i))</code>
     * for i in <code>0..(src.size()-1)</code>.
     * 
     * @param src2 the second source array to use as input to the map function
     * @param dst the destination array for the results of the map operation
     * @param op the function to apply to each element of the arrays
     * @return dst after updating its contents to contain the result of the map operation.
     */

//#line 272 "x10/array/DistArray.x10"

//#line 275 "x10/array/DistArray.x10"

//#line 278 "x10/array/DistArray.x10"

//#line 282 "x10/array/DistArray.x10"

//#line 285 "x10/array/DistArray.x10"

//#line 288 "x10/array/DistArray.x10"

//#line 292 "x10/array/DistArray.x10"

//#line 39 "x10/array/DistArray.x10"
template<class TPMGL(T)> ::x10::array::DistArray<TPMGL(T)>*
  x10::array::DistArray<TPMGL(T)>::x10__array__DistArray____this__x10__array__DistArray(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::array::DistArray<TPMGL(T)>::__fieldInitializers_x10_array_DistArray(
  ) {
 
}
template<class TPMGL(T)> void x10::array::DistArray<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(localHandle));
    buf.write(this->FMGL(placeGroup));
    buf.write(this->FMGL(size));
    
}

template<class TPMGL(T)> void x10::array::DistArray<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(localHandle) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::array::LocalState<TPMGL(T)>*> >();
    FMGL(placeGroup) = buf.read< ::x10::lang::PlaceGroup*>();
    FMGL(size) = buf.read<x10_long>();
    /* fields with @TransientInitExpr annotations */
    FMGL(raw) = x10::array::template DistArray<TPMGL(T)>::getRailFromLocalHandle();
    
}

#endif // X10_ARRAY_DISTARRAY_H_IMPLEMENTATION
#endif // __X10_ARRAY_DISTARRAY_H_NODEPS
