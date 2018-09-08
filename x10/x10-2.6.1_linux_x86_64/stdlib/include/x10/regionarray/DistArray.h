#ifndef __X10_REGIONARRAY_DISTARRAY_H
#define __X10_REGIONARRAY_DISTARRAY_H

#include <x10rt.h>


#define X10_LANG_FUN_0_1_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#undef X10_LANG_FUN_0_1_H_NODEPS
namespace x10 { namespace lang { 
class Point;
} } 
#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
#define X10_REGIONARRAY_GHOSTABLE_H_NODEPS
#include <x10/regionarray/Ghostable.h>
#undef X10_REGIONARRAY_GHOSTABLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace regionarray { 
class GhostManager;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray__LocalState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class TransientInitExpr;
} } 
namespace x10 { namespace regionarray { 
class EmptyRegion;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace regionarray { 
class Array__LayoutHelper;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace regionarray { 
class PeriodicBoundaryConditions;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace xrx { 
class FinishState;
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
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(U), class TPMGL(T)> class DistArray__Anonymous__39192;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Uncounted;
} } 
namespace x10 { namespace lang { 
class BadPlaceException;
} } 
namespace x10 { namespace compiler { 
class NoInline;
} } 
namespace x10 { namespace compiler { 
class NoReturn;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class DistArray_Strings {
  public:
    static ::x10::lang::String sl__166423;
    static ::x10::lang::String sl__166429;
    static ::x10::lang::String sl__166408;
    static ::x10::lang::String sl__166418;
    static ::x10::lang::String sl__166421;
    static ::x10::lang::String sl__166425;
    static ::x10::lang::String sl__166410;
    static ::x10::lang::String sl__166411;
    static ::x10::lang::String sl__166424;
    static ::x10::lang::String sl__166419;
    static ::x10::lang::String sl__166420;
    static ::x10::lang::String sl__166426;
    static ::x10::lang::String sl__166412;
    static ::x10::lang::String sl__166415;
    static ::x10::lang::String sl__166417;
    static ::x10::lang::String sl__166427;
    static ::x10::lang::String sl__166409;
    static ::x10::lang::String sl__166414;
    static ::x10::lang::String sl__166428;
    static ::x10::lang::String sl__166416;
    static ::x10::lang::String sl__166413;
    static ::x10::lang::String sl__166422;
};

template<class TPMGL(T)> class DistArray;
template <> class DistArray<void>;
template<class TPMGL(T)> class DistArray : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::regionarray::Dist* FMGL(dist);
    
    static ::x10aux::itable_entry _itables[5];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::template itable< ::x10::regionarray::DistArray<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::DistArray<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Iterable< ::x10::lang::Point*>::template itable< ::x10::regionarray::DistArray<TPMGL(T)> > _itable_2;
    
    static ::x10::regionarray::Ghostable::itable< ::x10::regionarray::DistArray<TPMGL(T)> > _itable_3;
    
    ::x10::regionarray::Region* region();
    x10_long rank();
    virtual ::x10::regionarray::Dist* getDist();
    ::x10::lang::PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>
      FMGL(localHandle);
    
    ::x10::lang::Rail< TPMGL(T) >* FMGL(raw);
    
    virtual ::x10::lang::Rail< TPMGL(T) >* getRawFromLocalHandle(
      );
    virtual ::x10::lang::Rail< TPMGL(T) >* raw();
    ::x10::regionarray::Region* FMGL(localRegion);
    
    virtual ::x10::regionarray::Region* getLocalRegionFromLocalHandle(
      );
    virtual ::x10::regionarray::Region* localRegion();
    virtual ::x10::regionarray::Array<TPMGL(T)>* getLocalPortion(
      );
    void _constructor(::x10::regionarray::Dist* dist);
    
    static ::x10::regionarray::DistArray<TPMGL(T)>* _make(::x10::regionarray::Dist* dist);
    
    void _constructor(::x10::regionarray::Dist* dist, x10_long ghostWidth,
                      x10_boolean periodic);
    
    static ::x10::regionarray::DistArray<TPMGL(T)>* _make(::x10::regionarray::Dist* dist,
                                                          x10_long ghostWidth,
                                                          x10_boolean periodic);
    
    void _constructor(::x10::regionarray::Dist* dist, ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init,
                      x10_long ghostWidth, x10_boolean periodic);
    
    static ::x10::regionarray::DistArray<TPMGL(T)>* _make(
             ::x10::regionarray::Dist* dist, ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init,
             x10_long ghostWidth, x10_boolean periodic);
    
    void _constructor(::x10::regionarray::Dist* dist, TPMGL(T) init,
                      x10_long ghostWidth, x10_boolean periodic);
    
    static ::x10::regionarray::DistArray<TPMGL(T)>* _make(
             ::x10::regionarray::Dist* dist, TPMGL(T) init,
             x10_long ghostWidth, x10_boolean periodic);
    
    void _constructor(::x10::regionarray::DistArray<TPMGL(T)>* a,
                      ::x10::regionarray::Dist* d);
    
    static ::x10::regionarray::DistArray<TPMGL(T)>* _make(
             ::x10::regionarray::DistArray<TPMGL(T)>* a, ::x10::regionarray::Dist* d);
    
    void _constructor(::x10::regionarray::Dist* d, ::x10::lang::PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> pls);
    
    static ::x10::regionarray::DistArray<TPMGL(T)>* _make(
             ::x10::regionarray::Dist* d, ::x10::lang::PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> pls);
    
    virtual TPMGL(T) __apply(::x10::lang::Point* pt);
    virtual TPMGL(T) __apply(x10_long i0);
    virtual TPMGL(T) __apply(x10_long i0, x10_long i1);
    virtual TPMGL(T) __apply(x10_long i0, x10_long i1, x10_long i2);
    virtual TPMGL(T) __apply(x10_long i0, x10_long i1, x10_long i2,
                             x10_long i3);
    virtual TPMGL(T) getPeriodic(::x10::lang::Point* pt);
    virtual TPMGL(T) getPeriodic(x10_long i0, x10_long i1,
                                 x10_long i2);
    virtual TPMGL(T) __set(::x10::lang::Point* pt, TPMGL(T) v);
    virtual TPMGL(T) __set(x10_long i0, TPMGL(T) v);
    virtual TPMGL(T) __set(x10_long i0, x10_long i1, TPMGL(T) v);
    virtual TPMGL(T) __set(x10_long i0, x10_long i1, x10_long i2,
                           TPMGL(T) v);
    virtual TPMGL(T) __set(x10_long i0, x10_long i1, x10_long i2,
                           x10_long i3, TPMGL(T) v);
    virtual TPMGL(T) setPeriodic(::x10::lang::Point* pt, TPMGL(T) v);
    virtual ::x10::regionarray::DistArray<TPMGL(T)>* restriction(
      ::x10::regionarray::Dist* d);
    virtual ::x10::regionarray::DistArray<TPMGL(T)>* restriction(
      ::x10::regionarray::Region* r);
    virtual ::x10::regionarray::DistArray<TPMGL(T)>* restriction(
      ::x10::lang::Place p);
    virtual ::x10::regionarray::DistArray<TPMGL(T)>* __bar(
      ::x10::regionarray::Region* r);
    virtual ::x10::regionarray::DistArray<TPMGL(T)>* __bar(
      ::x10::lang::Place p);
    virtual ::x10::regionarray::Array<TPMGL(T)>* getPatch(
      ::x10::regionarray::Region* r);
    virtual void fill(TPMGL(T) v);
    template<class TPMGL(U)> ::x10::regionarray::DistArray<TPMGL(U)>*
      map(::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(U)> ::x10::regionarray::DistArray<TPMGL(U)>*
      map(::x10::regionarray::DistArray<TPMGL(U)>* dst, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(U)> ::x10::regionarray::DistArray<TPMGL(U)>*
      map(::x10::regionarray::DistArray<TPMGL(U)>* dst, ::x10::regionarray::Region* filter,
          ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(S), class TPMGL(U)> ::x10::regionarray::DistArray<TPMGL(S)>*
      map(::x10::regionarray::DistArray<TPMGL(U)>* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op);
    template<class TPMGL(S), class TPMGL(U)> ::x10::regionarray::DistArray<TPMGL(S)>*
      map(::x10::regionarray::DistArray<TPMGL(S)>* dst, ::x10::regionarray::DistArray<TPMGL(U)>* src,
          ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op);
    template<class TPMGL(S), class TPMGL(U)> ::x10::regionarray::DistArray<TPMGL(S)>*
      map(::x10::regionarray::DistArray<TPMGL(S)>* dst, ::x10::regionarray::DistArray<TPMGL(U)>* src,
          ::x10::regionarray::Region* filter, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op);
    virtual TPMGL(T) reduce(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
                            TPMGL(T) unit);
    template<class TPMGL(U)> TPMGL(U) reduce(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* lop,
                                             ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* gop,
                                             TPMGL(U) unit);
    virtual void updateGhosts();
    virtual void sendGhostsLocal();
    virtual void waitForGhostsLocal();
    virtual void putOverlap(::x10::regionarray::Region* overlap,
                            ::x10::lang::Place neighborPlace,
                            ::x10::lang::Point* shift, x10_byte phase);
    void putOverlap3(::x10::regionarray::Region* overlap,
                     ::x10::lang::Place neighborPlace, ::x10::lang::Point* shift,
                     x10_byte phase);
    virtual ::x10::lang::String* toString();
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator(
      );
    virtual ::x10::regionarray::DistArray<TPMGL(T)>* x10__regionarray__DistArray____this__x10__regionarray__DistArray(
      );
    virtual void __fieldInitializers_x10_regionarray_DistArray(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::regionarray::DistArray<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::regionarray::DistArray<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[3] = { ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Iterable< ::x10::lang::Point*> >(), ::x10aux::getRTT< ::x10::regionarray::Ghostable>()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.regionarray.DistArray";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 3, parents, 1, params, variances);
}

template <> class DistArray<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    static ::x10::regionarray::GhostManager* getGhostManager(
      ::x10::regionarray::Dist* d, x10_long ghostWidth, x10_boolean periodic);
    
    template<class TPMGL(T)> static ::x10::regionarray::DistArray<TPMGL(T)>*
      make(::x10::regionarray::Dist* dist);
    
    template<class TPMGL(T)> static ::x10::regionarray::DistArray<TPMGL(T)>*
      make(::x10::regionarray::Dist* dist, x10_long ghostWidth,
           x10_boolean periodic);
    
    template<class TPMGL(T)> static ::x10::regionarray::DistArray<TPMGL(T)>*
      make(::x10::regionarray::Dist* dist, ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init);
    
    template<class TPMGL(T)> static ::x10::regionarray::DistArray<TPMGL(T)>*
      make(::x10::regionarray::Dist* dist, ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init,
           x10_long ghostWidth, x10_boolean periodic);
    
    template<class TPMGL(T)> static ::x10::regionarray::DistArray<TPMGL(T)>*
      make(::x10::regionarray::Dist* dist, TPMGL(T) init);
    
    template<class TPMGL(T)> static ::x10::regionarray::DistArray<TPMGL(T)>*
      make(::x10::regionarray::Dist* dist, TPMGL(T) init,
           x10_long ghostWidth, x10_boolean periodic);
    
    static void raisePlaceError(x10_long i0) X10_PRAGMA_NORETURN ;
    
    static void raisePlaceError(x10_long i0, x10_long i1) X10_PRAGMA_NORETURN ;
    
    static void raisePlaceError(x10_long i0, x10_long i1,
                                x10_long i2) X10_PRAGMA_NORETURN ;
    
    static void raisePlaceError(x10_long i0, x10_long i1,
                                x10_long i2, x10_long i3) X10_PRAGMA_NORETURN ;
    
    static void raisePlaceError(::x10::lang::Point* pt) X10_PRAGMA_NORETURN ;
    
    
};

} } 
#endif // X10_REGIONARRAY_DISTARRAY_H

namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 

#ifndef X10_REGIONARRAY_DISTARRAY_H_NODEPS
#define X10_REGIONARRAY_DISTARRAY_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Point.h>
#include <x10/lang/Iterable.h>
#include <x10/regionarray/Ghostable.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/regionarray/Dist.h>
#include <x10/regionarray/Region.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/regionarray/GhostManager.h>
#include <x10/regionarray/DistArray__LocalState.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/TransientInitExpr.h>
#include <x10/regionarray/EmptyRegion.h>
#include <x10/regionarray/Array.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/lang/String.h>
#include <x10/lang/Any.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/regionarray/Array__LayoutHelper.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Iterator.h>
#include <x10/regionarray/PeriodicBoundaryConditions.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/regionarray/DistArray__Anonymous__39192.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/Byte.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Uncounted.h>
#include <x10/lang/BadPlaceException.h>
#include <x10/compiler/NoInline.h>
#include <x10/compiler/NoReturn.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__7_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T), class TPMGL(U)> class x10_regionarray_DistArray__closure__7 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(U)>*>::template itable <x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::regionarray::DistArray__LocalState<TPMGL(U)>* __apply(){
        
        //#line 751 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* srcRail = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132271 = saved_this;
            ::x10aux::nullCheck(this__132271)->FMGL(raw);
        }))
        ;
        
        //#line 752 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* localRegion = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132273 = saved_this;
            ::x10aux::nullCheck(this__132273)->FMGL(localRegion);
        }))
        ;
        
        //#line 753 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(U) >* newRail = ::x10::lang::Rail< TPMGL(U) >::_makeUnsafe(::x10aux::nullCheck(localRegion)->size(), false);
        
        //#line 754 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* reg = ::x10aux::nullCheck(saved_this->FMGL(dist))->__apply(
                                            ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 755 "x10/regionarray/DistArray.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* pt__132003;
            for (pt__132003 = ::x10aux::nullCheck(reg)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(pt__132003));
                 ) {
                ::x10::lang::Point* pt = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(pt__132003));
                
                //#line 756 "x10/regionarray/DistArray.x10"
                x10_long offset = ::x10aux::nullCheck(localRegion)->indexOf(
                                    pt);
                
                //#line 757 "x10/regionarray/DistArray.x10"
                newRail->x10::lang::template Rail< TPMGL(U) >::__set(
                  offset, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                    srcRail->x10::lang::template Rail< TPMGL(T) >::__apply(
                      offset)));
            }
        }
        
        //#line 759 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::DistArray__LocalState<TPMGL(U)>* alloc__132376 =
           (new (::x10aux::alloc_z< ::x10::regionarray::DistArray__LocalState<TPMGL(U)> >()) ::x10::regionarray::DistArray__LocalState<TPMGL(U)>());
        (alloc__132376)->::x10::regionarray::DistArray__LocalState<TPMGL(U)>::_constructor(
          saved_this->FMGL(dist), newRail);
        return alloc__132376;
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* saved_this;
    ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->op);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* that_op = buf.read< ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>*>();
        x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) >* this_ = new (storage) x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) >(that_saved_this, that_op);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__7(::x10::regionarray::DistArray<TPMGL(T)>* saved_this, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) : saved_this(saved_this), op(op) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(U)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(U)>*> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:750-760";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(U)>*>::template itable <x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) > >x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) >::__apply, &x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(U)>*> >, &x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U) >::_deserialize);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__7_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__8_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(U)> class x10_regionarray_DistArray__closure__8 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 778 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* reg = ::x10aux::nullCheck(saved_this->FMGL(dist))->__apply(
                                            ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 779 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* localRegion = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132275 =
              saved_this;
            ::x10aux::nullCheck(this__132275)->FMGL(localRegion);
        }))
        ;
        
        //#line 780 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* srcRail = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132277 =
              saved_this;
            ::x10aux::nullCheck(this__132277)->FMGL(raw);
        }))
        ;
        
        //#line 781 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(U) >* dstRail = ::x10aux::nullCheck(dst)->FMGL(raw);
        
        //#line 782 "x10/regionarray/DistArray.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* pt__132005;
            for (pt__132005 = ::x10aux::nullCheck(reg)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(pt__132005));
                 ) {
                ::x10::lang::Point* pt = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(pt__132005));
                
                //#line 783 "x10/regionarray/DistArray.x10"
                x10_long offset = ::x10aux::nullCheck(localRegion)->indexOf(
                                    pt);
                
                //#line 784 "x10/regionarray/DistArray.x10"
                dstRail->x10::lang::template Rail< TPMGL(U) >::__set(
                  offset, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                    srcRail->x10::lang::template Rail< TPMGL(T) >::__apply(
                      offset)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* saved_this;
    ::x10::regionarray::DistArray<TPMGL(U)>* dst;
    ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->dst);
        buf.write(this->op);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        ::x10::regionarray::DistArray<TPMGL(U)>* that_dst = buf.read< ::x10::regionarray::DistArray<TPMGL(U)>*>();
        ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* that_op = buf.read< ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>*>();
        x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) >* this_ = new (storage) x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) >(that_saved_this, that_dst, that_op);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__8(::x10::regionarray::DistArray<TPMGL(T)>* saved_this, ::x10::regionarray::DistArray<TPMGL(U)>* dst, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) : saved_this(saved_this), dst(dst), op(op) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:777-786";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) > >x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) >::__apply, &x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) >::_deserialize);
template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__8_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__9_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(U)> class x10_regionarray_DistArray__closure__9 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 808 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* reg = ::x10aux::nullCheck(saved_this->FMGL(dist))->__apply(
                                            ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 809 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* localRegion = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132280 =
              saved_this;
            ::x10aux::nullCheck(this__132280)->FMGL(localRegion);
        }))
        ;
        
        //#line 810 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* freg = ::x10aux::nullCheck(reg)->__and(
                                             filter);
        
        //#line 811 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* srcRail = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132282 =
              saved_this;
            ::x10aux::nullCheck(this__132282)->FMGL(raw);
        }))
        ;
        
        //#line 812 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(U) >* dstRail = ::x10aux::nullCheck(dst)->FMGL(raw);
        
        //#line 813 "x10/regionarray/DistArray.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* pt__132009;
            for (pt__132009 = ::x10aux::nullCheck(freg)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(pt__132009));
                 ) {
                ::x10::lang::Point* pt = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(pt__132009));
                
                //#line 814 "x10/regionarray/DistArray.x10"
                x10_long offset = ::x10aux::nullCheck(localRegion)->indexOf(
                                    pt);
                
                //#line 815 "x10/regionarray/DistArray.x10"
                dstRail->x10::lang::template Rail< TPMGL(U) >::__set(
                  offset, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                    srcRail->x10::lang::template Rail< TPMGL(T) >::__apply(
                      offset)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* saved_this;
    ::x10::regionarray::Region* filter;
    ::x10::regionarray::DistArray<TPMGL(U)>* dst;
    ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->filter);
        buf.write(this->dst);
        buf.write(this->op);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        ::x10::regionarray::Region* that_filter = buf.read< ::x10::regionarray::Region*>();
        ::x10::regionarray::DistArray<TPMGL(U)>* that_dst = buf.read< ::x10::regionarray::DistArray<TPMGL(U)>*>();
        ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* that_op = buf.read< ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>*>();
        x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) >* this_ = new (storage) x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) >(that_saved_this, that_filter, that_dst, that_op);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__9(::x10::regionarray::DistArray<TPMGL(T)>* saved_this, ::x10::regionarray::Region* filter, ::x10::regionarray::DistArray<TPMGL(U)>* dst, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) : saved_this(saved_this), filter(filter), dst(dst), op(op) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:807-817";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) > >x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) >::__apply, &x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) >::_deserialize);
template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__9_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__10_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> class x10_regionarray_DistArray__closure__10 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(S)>*>::template itable <x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::regionarray::DistArray__LocalState<TPMGL(S)>* __apply(){
        
        //#line 837 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* src1Rail = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132285 = saved_this;
            ::x10aux::nullCheck(this__132285)->FMGL(raw);
        }))
        ;
        
        //#line 838 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(U) >* src2Rail = ::x10aux::nullCheck(src)->FMGL(raw);
        
        //#line 839 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* localRegion = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132288 = saved_this;
            ::x10aux::nullCheck(this__132288)->FMGL(localRegion);
        }))
        ;
        
        //#line 840 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(S) >* newRail = ::x10::lang::Rail< TPMGL(S) >::_makeUnsafe(::x10aux::nullCheck(localRegion)->size(), false);
        
        //#line 841 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* reg = ::x10aux::nullCheck(saved_this->FMGL(dist))->__apply(
                                            ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 842 "x10/regionarray/DistArray.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* pt__132013;
            for (pt__132013 = ::x10aux::nullCheck(reg)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(pt__132013));
                 ) {
                ::x10::lang::Point* pt = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(pt__132013));
                
                //#line 843 "x10/regionarray/DistArray.x10"
                x10_long offset = ::x10aux::nullCheck(localRegion)->indexOf(
                                    pt);
                
                //#line 844 "x10/regionarray/DistArray.x10"
                newRail->x10::lang::template Rail< TPMGL(S) >::__set(
                  offset, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
                    src1Rail->x10::lang::template Rail< TPMGL(T) >::__apply(
                      offset), src2Rail->x10::lang::template Rail< TPMGL(U) >::__apply(
                                 offset)));
            }
        }
        
        //#line 846 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::DistArray__LocalState<TPMGL(S)>* alloc__132378 =
           (new (::x10aux::alloc_z< ::x10::regionarray::DistArray__LocalState<TPMGL(S)> >()) ::x10::regionarray::DistArray__LocalState<TPMGL(S)>());
        (alloc__132378)->::x10::regionarray::DistArray__LocalState<TPMGL(S)>::_constructor(
          saved_this->FMGL(dist), newRail);
        return alloc__132378;
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* saved_this;
    ::x10::regionarray::DistArray<TPMGL(U)>* src;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->src);
        buf.write(this->op);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        ::x10::regionarray::DistArray<TPMGL(U)>* that_src = buf.read< ::x10::regionarray::DistArray<TPMGL(U)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* that_op = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>*>();
        x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) >* this_ = new (storage) x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) >(that_saved_this, that_src, that_op);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__10(::x10::regionarray::DistArray<TPMGL(T)>* saved_this, ::x10::regionarray::DistArray<TPMGL(U)>* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) : saved_this(saved_this), src(src), op(op) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(S)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(S)>*> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:836-847";
    }

};

template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> typename ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(S)>*>::template itable <x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) > >x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) >::__apply, &x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(S)>*> >, &x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U) >::_deserialize);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__10_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__11_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> class x10_regionarray_DistArray__closure__11 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 866 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* reg = ::x10aux::nullCheck(saved_this->FMGL(dist))->__apply(
                                            ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 867 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* localRegion = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132290 =
              saved_this;
            ::x10aux::nullCheck(this__132290)->FMGL(localRegion);
        }))
        ;
        
        //#line 868 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* src1Rail = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132292 =
              saved_this;
            ::x10aux::nullCheck(this__132292)->FMGL(raw);
        }))
        ;
        
        //#line 869 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(U) >* src2Rail = ::x10aux::nullCheck(src)->FMGL(raw);
        
        //#line 870 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(S) >* dstRail = ::x10aux::nullCheck(dst)->FMGL(raw);
        
        //#line 871 "x10/regionarray/DistArray.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* pt__132015;
            for (pt__132015 = ::x10aux::nullCheck(reg)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(pt__132015));
                 ) {
                ::x10::lang::Point* pt = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(pt__132015));
                
                //#line 872 "x10/regionarray/DistArray.x10"
                x10_long offset = ::x10aux::nullCheck(localRegion)->indexOf(
                                    pt);
                
                //#line 873 "x10/regionarray/DistArray.x10"
                dstRail->x10::lang::template Rail< TPMGL(S) >::__set(
                  offset, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
                    src1Rail->x10::lang::template Rail< TPMGL(T) >::__apply(
                      offset), src2Rail->x10::lang::template Rail< TPMGL(U) >::__apply(
                                 offset)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* saved_this;
    ::x10::regionarray::DistArray<TPMGL(U)>* src;
    ::x10::regionarray::DistArray<TPMGL(S)>* dst;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->src);
        buf.write(this->dst);
        buf.write(this->op);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        ::x10::regionarray::DistArray<TPMGL(U)>* that_src = buf.read< ::x10::regionarray::DistArray<TPMGL(U)>*>();
        ::x10::regionarray::DistArray<TPMGL(S)>* that_dst = buf.read< ::x10::regionarray::DistArray<TPMGL(S)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* that_op = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>*>();
        x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) >* this_ = new (storage) x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) >(that_saved_this, that_src, that_dst, that_op);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__11(::x10::regionarray::DistArray<TPMGL(T)>* saved_this, ::x10::regionarray::DistArray<TPMGL(U)>* src, ::x10::regionarray::DistArray<TPMGL(S)>* dst, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) : saved_this(saved_this), src(src), dst(dst), op(op) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:865-875";
    }

};

template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) > >x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) >::__apply, &x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) >::_deserialize);
template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__11_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__12_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> class x10_regionarray_DistArray__closure__12 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 897 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* reg = ::x10aux::nullCheck(saved_this->FMGL(dist))->__apply(
                                            ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 898 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* localRegion = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132296 =
              saved_this;
            ::x10aux::nullCheck(this__132296)->FMGL(localRegion);
        }))
        ;
        
        //#line 899 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* freg = ::x10aux::nullCheck(reg)->__and(
                                             filter);
        
        //#line 900 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* src1Rail = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132298 =
              saved_this;
            ::x10aux::nullCheck(this__132298)->FMGL(raw);
        }))
        ;
        
        //#line 901 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(U) >* src2Rail = ::x10aux::nullCheck(src)->FMGL(raw);
        
        //#line 902 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(S) >* dstRail = ::x10aux::nullCheck(dst)->FMGL(raw);
        
        //#line 903 "x10/regionarray/DistArray.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* pt__132019;
            for (pt__132019 = ::x10aux::nullCheck(freg)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(pt__132019));
                 ) {
                ::x10::lang::Point* pt = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(pt__132019));
                
                //#line 904 "x10/regionarray/DistArray.x10"
                x10_long offset = ::x10aux::nullCheck(localRegion)->indexOf(
                                    pt);
                
                //#line 905 "x10/regionarray/DistArray.x10"
                dstRail->x10::lang::template Rail< TPMGL(S) >::__set(
                  offset, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
                    src1Rail->x10::lang::template Rail< TPMGL(T) >::__apply(
                      offset), src2Rail->x10::lang::template Rail< TPMGL(U) >::__apply(
                                 offset)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* saved_this;
    ::x10::regionarray::Region* filter;
    ::x10::regionarray::DistArray<TPMGL(U)>* src;
    ::x10::regionarray::DistArray<TPMGL(S)>* dst;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->filter);
        buf.write(this->src);
        buf.write(this->dst);
        buf.write(this->op);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        ::x10::regionarray::Region* that_filter = buf.read< ::x10::regionarray::Region*>();
        ::x10::regionarray::DistArray<TPMGL(U)>* that_src = buf.read< ::x10::regionarray::DistArray<TPMGL(U)>*>();
        ::x10::regionarray::DistArray<TPMGL(S)>* that_dst = buf.read< ::x10::regionarray::DistArray<TPMGL(S)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* that_op = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>*>();
        x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) >* this_ = new (storage) x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) >(that_saved_this, that_filter, that_src, that_dst, that_op);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__12(::x10::regionarray::DistArray<TPMGL(T)>* saved_this, ::x10::regionarray::Region* filter, ::x10::regionarray::DistArray<TPMGL(U)>* src, ::x10::regionarray::DistArray<TPMGL(S)>* dst, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) : saved_this(saved_this), filter(filter), src(src), dst(dst), op(op) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:896-907";
    }

};

template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) > >x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) >::__apply, &x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) >::_deserialize);
template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__12_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__13_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(U)> class x10_regionarray_DistArray__closure__13 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 948 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* reg = ::x10aux::nullCheck(saved_this->FMGL(dist))->__apply(
                                            ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 949 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* localRegion = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132306 =
              saved_this;
            ::x10aux::nullCheck(this__132306)->FMGL(localRegion);
        }))
        ;
        
        //#line 950 "x10/regionarray/DistArray.x10"
        TPMGL(U) localRes = unit;
        
        //#line 951 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* rail = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132308 =
              saved_this;
            ::x10aux::nullCheck(this__132308)->FMGL(raw);
        }))
        ;
        
        //#line 952 "x10/regionarray/DistArray.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* pt__132023;
            for (pt__132023 = ::x10aux::nullCheck(reg)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(pt__132023));
                 ) {
                ::x10::lang::Point* pt = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(pt__132023));
                
                //#line 953 "x10/regionarray/DistArray.x10"
                localRes = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(lop), 
                  localRes, rail->x10::lang::template Rail< TPMGL(T) >::__apply(
                              ::x10aux::nullCheck(localRegion)->indexOf(
                                pt)));
            }
        }
        
        //#line 955 "x10/regionarray/DistArray.x10"
        ::x10::xrx::Runtime::template makeOffer< TPMGL(U) >(
          localRes);
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* saved_this;
    TPMGL(U) unit;
    ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* lop;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->unit);
        buf.write(this->lop);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        TPMGL(U) that_unit = buf.read<TPMGL(U)>();
        ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* that_lop = buf.read< ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>*>();
        x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) >* this_ = new (storage) x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) >(that_saved_this, that_unit, that_lop);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__13(::x10::regionarray::DistArray<TPMGL(T)>* saved_this, TPMGL(U) unit, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* lop) : saved_this(saved_this), unit(unit), lop(lop) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:947-956";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) > >x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) >::__apply, &x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) >::_deserialize);
template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__13_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY_H_GENERICS
#define X10_REGIONARRAY_DISTARRAY_H_GENERICS
#ifndef X10_REGIONARRAY_DISTARRAY_H_map_1534
#define X10_REGIONARRAY_DISTARRAY_H_map_1534
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::DistArray<TPMGL(U)>*
  x10::regionarray::DistArray<TPMGL(T)>::map(::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 748 "x10/regionarray/DistArray.x10"
    ::x10::lang::PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(U)>*> plh =
      ::x10::lang::PlaceLocalHandle<void>::template make< ::x10::regionarray::DistArray__LocalState<TPMGL(U)>* >(
        ::x10aux::nullCheck(this->FMGL(dist))->places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(U)>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(U)>*> >(sizeof(x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U)>)))x10_regionarray_DistArray__closure__7<TPMGL(T),TPMGL(U)>(this, op))));
    
    //#line 761 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::DistArray<TPMGL(U)>* alloc__132377 =
       (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(U)> >()) ::x10::regionarray::DistArray<TPMGL(U)>());
    (alloc__132377)->::x10::regionarray::DistArray<TPMGL(U)>::_constructor(
      this->FMGL(dist), plh);
    return alloc__132377;
    
}
#endif // X10_REGIONARRAY_DISTARRAY_H_map_1534
#ifndef X10_REGIONARRAY_DISTARRAY_H_map_1535
#define X10_REGIONARRAY_DISTARRAY_H_map_1535
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::DistArray<TPMGL(U)>*
  x10::regionarray::DistArray<TPMGL(T)>::map(::x10::regionarray::DistArray<TPMGL(U)>* dst,
                                             ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    {
        
        //#line 775 "x10/regionarray/DistArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__132421 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 776 "x10/regionarray/DistArray.x10"
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* where__132007;
                    for (where__132007 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->places())->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(where__132007));
                         ) {
                        ::x10::lang::Place where = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(where__132007));
                        
                        //#line 777 "x10/regionarray/DistArray.x10"
                        ::x10::xrx::Runtime::runAsync(where,
                                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U)>)))x10_regionarray_DistArray__closure__8<TPMGL(T),TPMGL(U)>(this, dst, op))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1536) {
            {
                ::x10::lang::CheckedThrowable* ct__132419 =
                  __exc1536;
                {
                    ::x10::xrx::Runtime::pushException(ct__132419);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__132421);
    }
    
    //#line 789 "x10/regionarray/DistArray.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_DISTARRAY_H_map_1535
#ifndef X10_REGIONARRAY_DISTARRAY_H_map_1537
#define X10_REGIONARRAY_DISTARRAY_H_map_1537
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::DistArray<TPMGL(U)>*
  x10::regionarray::DistArray<TPMGL(T)>::map(::x10::regionarray::DistArray<TPMGL(U)>* dst,
                                             ::x10::regionarray::Region* filter,
                                             ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    {
        
        //#line 805 "x10/regionarray/DistArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__132428 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 806 "x10/regionarray/DistArray.x10"
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* where__132011;
                    for (where__132011 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->places())->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(where__132011));
                         ) {
                        ::x10::lang::Place where = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(where__132011));
                        
                        //#line 807 "x10/regionarray/DistArray.x10"
                        ::x10::xrx::Runtime::runAsync(where,
                                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U)>)))x10_regionarray_DistArray__closure__9<TPMGL(T),TPMGL(U)>(this, filter, dst, op))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1538) {
            {
                ::x10::lang::CheckedThrowable* ct__132426 =
                  __exc1538;
                {
                    ::x10::xrx::Runtime::pushException(ct__132426);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__132428);
    }
    
    //#line 820 "x10/regionarray/DistArray.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_DISTARRAY_H_map_1537
#ifndef X10_REGIONARRAY_DISTARRAY_H_map_1539
#define X10_REGIONARRAY_DISTARRAY_H_map_1539
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::regionarray::DistArray<TPMGL(S)>* x10::regionarray::DistArray<TPMGL(T)>::map(
  ::x10::regionarray::DistArray<TPMGL(U)>* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) {
    
    //#line 834 "x10/regionarray/DistArray.x10"
    ::x10::lang::PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(S)>*> plh =
      ::x10::lang::PlaceLocalHandle<void>::template make< ::x10::regionarray::DistArray__LocalState<TPMGL(S)>* >(
        ::x10aux::nullCheck(this->FMGL(dist))->places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(S)>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(S)>*> >(sizeof(x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U)>)))x10_regionarray_DistArray__closure__10<TPMGL(T),TPMGL(S),TPMGL(U)>(this, src, op))));
    
    //#line 848 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::DistArray<TPMGL(S)>* alloc__132379 =
       (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(S)> >()) ::x10::regionarray::DistArray<TPMGL(S)>());
    (alloc__132379)->::x10::regionarray::DistArray<TPMGL(S)>::_constructor(
      this->FMGL(dist), plh);
    return alloc__132379;
    
}
#endif // X10_REGIONARRAY_DISTARRAY_H_map_1539
#ifndef X10_REGIONARRAY_DISTARRAY_H_map_1540
#define X10_REGIONARRAY_DISTARRAY_H_map_1540
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::regionarray::DistArray<TPMGL(S)>* x10::regionarray::DistArray<TPMGL(T)>::map(
  ::x10::regionarray::DistArray<TPMGL(S)>* dst, ::x10::regionarray::DistArray<TPMGL(U)>* src,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) {
    {
        
        //#line 863 "x10/regionarray/DistArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__132435 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 864 "x10/regionarray/DistArray.x10"
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* where__132017;
                    for (where__132017 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->places())->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(where__132017));
                         ) {
                        ::x10::lang::Place where = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(where__132017));
                        
                        //#line 865 "x10/regionarray/DistArray.x10"
                        ::x10::xrx::Runtime::runAsync(where,
                                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U)>)))x10_regionarray_DistArray__closure__11<TPMGL(T),TPMGL(S),TPMGL(U)>(this, src, dst, op))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1541) {
            {
                ::x10::lang::CheckedThrowable* ct__132433 =
                  __exc1541;
                {
                    ::x10::xrx::Runtime::pushException(ct__132433);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__132435);
    }
    
    //#line 878 "x10/regionarray/DistArray.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_DISTARRAY_H_map_1540
#ifndef X10_REGIONARRAY_DISTARRAY_H_map_1542
#define X10_REGIONARRAY_DISTARRAY_H_map_1542
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::regionarray::DistArray<TPMGL(S)>* x10::regionarray::DistArray<TPMGL(T)>::map(
  ::x10::regionarray::DistArray<TPMGL(S)>* dst, ::x10::regionarray::DistArray<TPMGL(U)>* src,
  ::x10::regionarray::Region* filter, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) {
    {
        
        //#line 894 "x10/regionarray/DistArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__132442 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 895 "x10/regionarray/DistArray.x10"
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* where__132021;
                    for (where__132021 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->places())->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(where__132021));
                         ) {
                        ::x10::lang::Place where = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(where__132021));
                        
                        //#line 896 "x10/regionarray/DistArray.x10"
                        ::x10::xrx::Runtime::runAsync(where,
                                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U)>)))x10_regionarray_DistArray__closure__12<TPMGL(T),TPMGL(S),TPMGL(U)>(this, filter, src, dst, op))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1543) {
            {
                ::x10::lang::CheckedThrowable* ct__132440 =
                  __exc1543;
                {
                    ::x10::xrx::Runtime::pushException(ct__132440);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__132442);
    }
    
    //#line 910 "x10/regionarray/DistArray.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_DISTARRAY_H_map_1542
#ifndef X10_REGIONARRAY_DISTARRAY_H_reduce_1545
#define X10_REGIONARRAY_DISTARRAY_H_reduce_1545
template<class TPMGL(T)> template<class TPMGL(U)> TPMGL(U)
  x10::regionarray::DistArray<TPMGL(T)>::reduce(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* lop,
                                                ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* gop,
                                                TPMGL(U) unit) {
    
    //#line 940 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>* reducer =
       (new (::x10aux::alloc_z< ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)> >()) ::x10::regionarray::DistArray__Anonymous__39192<TPMGL(U), TPMGL(T)>());
    ::x10::regionarray::DistArray<TPMGL(T)>* out__132380 =
      this;
    
    //#line 45 "x10/regionarray/DistArray.x10"
    reducer->FMGL(out__) = out__132380;
    
    //#line 939 "x10/regionarray/DistArray.x10"
    reducer->FMGL(unit) = unit;
    reducer->FMGL(gop) = gop;
    
    //#line 945 "x10/regionarray/DistArray.x10"
    TPMGL(U) result;
    {
        ::x10::xrx::FinishState* fs__132451 = ::x10aux::class_cast_unchecked< ::x10::xrx::FinishState*>(::x10::xrx::Runtime::template startCollectingFinish< TPMGL(U) >(
                                                                                                          reinterpret_cast< ::x10::lang::Reducible<TPMGL(U)>*>(reducer)));
        try {
            {
                
                //#line 946 "x10/regionarray/DistArray.x10"
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* where__132025;
                    for (where__132025 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->places())->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(where__132025));
                         ) {
                        ::x10::lang::Place where = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(where__132025));
                        
                        //#line 947 "x10/regionarray/DistArray.x10"
                        ::x10::xrx::Runtime::runAsync(where,
                                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U)>)))x10_regionarray_DistArray__closure__13<TPMGL(T),TPMGL(U)>(this, unit, lop))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1546) {
            {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  __exc1546;
                {
                    ::x10::xrx::Runtime::pushException(__lowerer__var__0__);
                }
            }
        }
        result = ::x10::xrx::Runtime::template stopCollectingFinish< TPMGL(U) >(
                   fs__132451);
    }
    
    //#line 960 "x10/regionarray/DistArray.x10"
    return result;
    
}
#endif // X10_REGIONARRAY_DISTARRAY_H_reduce_1545
#endif // X10_REGIONARRAY_DISTARRAY_H_GENERICS
#ifndef X10_REGIONARRAY_DISTARRAY_H_IMPLEMENTATION
#define X10_REGIONARRAY_DISTARRAY_H_IMPLEMENTATION
#include <x10/regionarray/DistArray.h>

#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__1_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_DistArray__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::template itable <x10_regionarray_DistArray__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* __apply(){
        
        //#line 176 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* localRegion;
        
        //#line 177 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::GhostManager* ghostManager = ::x10::regionarray::DistArray<void>::getGhostManager(
                                                           dist, ghostWidth,
                                                           periodic);
        
        //#line 178 "x10/regionarray/DistArray.x10"
        if ((!::x10aux::struct_equals(ghostManager, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 179 "x10/regionarray/DistArray.x10"
            localRegion = (__extension__ ({
                ::x10::regionarray::Region* t__131136 = ::x10aux::nullCheck(ghostManager)->getGhostRegion(
                                                          ::x10::lang::Place::_make(::x10aux::here));
                if (!((::x10aux::struct_equals(::x10aux::nullCheck(t__131136)->FMGL(rank),
                                               ::x10aux::nullCheck(::x10aux::nullCheck(dist)->FMGL(region))->FMGL(rank)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166412))));
                }
                t__131136;
            }))
            ;
        } else {
            
            //#line 181 "x10/regionarray/DistArray.x10"
            localRegion = ::x10aux::nullCheck(dist)->__apply(
                            ::x10::lang::Place::_make(::x10aux::here));
        }
        
        //#line 183 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* localRaw = ::x10::lang::Rail< TPMGL(T) >::_make(::x10aux::nullCheck(localRegion)->size());
        
        //#line 184 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* alloc__132354 =
           (new (::x10aux::alloc_z< ::x10::regionarray::DistArray__LocalState<TPMGL(T)> >()) ::x10::regionarray::DistArray__LocalState<TPMGL(T)>());
        (alloc__132354)->::x10::regionarray::DistArray__LocalState<TPMGL(T)>::_constructor(
          dist, localRaw, localRegion, ghostManager);
        return alloc__132354;
        
    }
    
    // captured environment
    ::x10::regionarray::Dist* dist;
    x10_long ghostWidth;
    x10_boolean periodic;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->dist);
        buf.write(this->ghostWidth);
        buf.write(this->periodic);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::Dist* that_dist = buf.read< ::x10::regionarray::Dist*>();
        x10_long that_ghostWidth = buf.read<x10_long>();
        x10_boolean that_periodic = buf.read<x10_boolean>();
        x10_regionarray_DistArray__closure__1<TPMGL(T) >* this_ = new (storage) x10_regionarray_DistArray__closure__1<TPMGL(T) >(that_dist, that_ghostWidth, that_periodic);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__1(::x10::regionarray::Dist* dist, x10_long ghostWidth, x10_boolean periodic) : dist(dist), ghostWidth(ghostWidth), periodic(periodic) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:175-185";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::template itable <x10_regionarray_DistArray__closure__1<TPMGL(T) > >x10_regionarray_DistArray__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__1<TPMGL(T) >::__apply, &x10_regionarray_DistArray__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >, &x10_regionarray_DistArray__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__1_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__2_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_DistArray__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::template itable <x10_regionarray_DistArray__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* __apply(){
        
        //#line 234 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* localRegion;
        
        //#line 235 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::GhostManager* ghostManager = ::x10::regionarray::DistArray<void>::getGhostManager(
                                                           dist, ghostWidth,
                                                           periodic);
        
        //#line 236 "x10/regionarray/DistArray.x10"
        if ((!::x10aux::struct_equals(ghostManager, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 237 "x10/regionarray/DistArray.x10"
            localRegion = (__extension__ ({
                ::x10::regionarray::Region* t__131138 = ::x10aux::nullCheck(ghostManager)->getGhostRegion(
                                                          ::x10::lang::Place::_make(::x10aux::here));
                if (!((::x10aux::struct_equals(::x10aux::nullCheck(t__131138)->FMGL(rank),
                                               ::x10aux::nullCheck(::x10aux::nullCheck(dist)->FMGL(region))->FMGL(rank)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166412))));
                }
                t__131138;
            }))
            ;
        } else {
            
            //#line 239 "x10/regionarray/DistArray.x10"
            localRegion = ::x10aux::nullCheck(dist)->__apply(
                            ::x10::lang::Place::_make(::x10aux::here));
        }
        
        //#line 241 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* localRaw = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(::x10aux::nullCheck(localRegion)->size(), false);
        
        //#line 242 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* reg = ::x10aux::nullCheck(dist)->__apply(
                                            ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 243 "x10/regionarray/DistArray.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* pt__131995;
            for (pt__131995 = ::x10aux::nullCheck(reg)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(pt__131995));
                 ) {
                ::x10::lang::Point* pt = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(pt__131995));
                
                //#line 244 "x10/regionarray/DistArray.x10"
                localRaw->x10::lang::template Rail< TPMGL(T) >::__set(
                  ::x10aux::nullCheck(localRegion)->indexOf(
                    pt), ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::__apply(::x10aux::nullCheck(init), 
                    pt));
            }
        }
        
        //#line 246 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* alloc__132358 =
           (new (::x10aux::alloc_z< ::x10::regionarray::DistArray__LocalState<TPMGL(T)> >()) ::x10::regionarray::DistArray__LocalState<TPMGL(T)>());
        (alloc__132358)->::x10::regionarray::DistArray__LocalState<TPMGL(T)>::_constructor(
          dist, localRaw, localRegion, ghostManager);
        return alloc__132358;
        
    }
    
    // captured environment
    ::x10::regionarray::Dist* dist;
    x10_long ghostWidth;
    x10_boolean periodic;
    ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->dist);
        buf.write(this->ghostWidth);
        buf.write(this->periodic);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::Dist* that_dist = buf.read< ::x10::regionarray::Dist*>();
        x10_long that_ghostWidth = buf.read<x10_long>();
        x10_boolean that_periodic = buf.read<x10_boolean>();
        ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>*>();
        x10_regionarray_DistArray__closure__2<TPMGL(T) >* this_ = new (storage) x10_regionarray_DistArray__closure__2<TPMGL(T) >(that_dist, that_ghostWidth, that_periodic, that_init);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__2(::x10::regionarray::Dist* dist, x10_long ghostWidth, x10_boolean periodic, ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init) : dist(dist), ghostWidth(ghostWidth), periodic(periodic), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:233-247";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::template itable <x10_regionarray_DistArray__closure__2<TPMGL(T) > >x10_regionarray_DistArray__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__2<TPMGL(T) >::__apply, &x10_regionarray_DistArray__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >, &x10_regionarray_DistArray__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__2_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__3_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_DistArray__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::template itable <x10_regionarray_DistArray__closure__3<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* __apply(){
        
        //#line 283 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* localRegion;
        
        //#line 284 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::GhostManager* ghostManager = ::x10::regionarray::DistArray<void>::getGhostManager(
                                                           dist, ghostWidth,
                                                           periodic);
        
        //#line 285 "x10/regionarray/DistArray.x10"
        if ((!::x10aux::struct_equals(ghostManager, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 286 "x10/regionarray/DistArray.x10"
            localRegion = (__extension__ ({
                ::x10::regionarray::Region* t__131140 = ::x10aux::nullCheck(ghostManager)->getGhostRegion(
                                                          ::x10::lang::Place::_make(::x10aux::here));
                if (!((::x10aux::struct_equals(::x10aux::nullCheck(t__131140)->FMGL(rank),
                                               ::x10aux::nullCheck(::x10aux::nullCheck(dist)->FMGL(region))->FMGL(rank)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166412))));
                }
                t__131140;
            }))
            ;
        } else {
            
            //#line 288 "x10/regionarray/DistArray.x10"
            localRegion = ::x10aux::nullCheck(dist)->__apply(
                            ::x10::lang::Place::_make(::x10aux::here));
        }
        
        //#line 290 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* localRaw = ::x10::lang::Rail< TPMGL(T) >::_make(::x10aux::nullCheck(localRegion)->size(),
                                                                                       init);
        
        //#line 291 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* alloc__132362 =
           (new (::x10aux::alloc_z< ::x10::regionarray::DistArray__LocalState<TPMGL(T)> >()) ::x10::regionarray::DistArray__LocalState<TPMGL(T)>());
        (alloc__132362)->::x10::regionarray::DistArray__LocalState<TPMGL(T)>::_constructor(
          dist, localRaw, localRegion, ghostManager);
        return alloc__132362;
        
    }
    
    // captured environment
    ::x10::regionarray::Dist* dist;
    x10_long ghostWidth;
    x10_boolean periodic;
    TPMGL(T) init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->dist);
        buf.write(this->ghostWidth);
        buf.write(this->periodic);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__3<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::Dist* that_dist = buf.read< ::x10::regionarray::Dist*>();
        x10_long that_ghostWidth = buf.read<x10_long>();
        x10_boolean that_periodic = buf.read<x10_boolean>();
        TPMGL(T) that_init = buf.read<TPMGL(T)>();
        x10_regionarray_DistArray__closure__3<TPMGL(T) >* this_ = new (storage) x10_regionarray_DistArray__closure__3<TPMGL(T) >(that_dist, that_ghostWidth, that_periodic, that_init);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__3(::x10::regionarray::Dist* dist, x10_long ghostWidth, x10_boolean periodic, TPMGL(T) init) : dist(dist), ghostWidth(ghostWidth), periodic(periodic), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:282-292";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::template itable <x10_regionarray_DistArray__closure__3<TPMGL(T) > >x10_regionarray_DistArray__closure__3<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__3<TPMGL(T) >::__apply, &x10_regionarray_DistArray__closure__3<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__3<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >, &x10_regionarray_DistArray__closure__3<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__3<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__3<TPMGL(T) >::_deserialize);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__3_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__4_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_DistArray__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::template itable <x10_regionarray_DistArray__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* __apply(){
        
        //#line 313 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* local = ::x10aux::nullCheck(a)->FMGL(localHandle)->x10::lang::template PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::__apply();
        
        //#line 314 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* alloc__132364 =
           (new (::x10aux::alloc_z< ::x10::regionarray::DistArray__LocalState<TPMGL(T)> >()) ::x10::regionarray::DistArray__LocalState<TPMGL(T)>());
        (alloc__132364)->::x10::regionarray::DistArray__LocalState<TPMGL(T)>::_constructor(
          d, ::x10aux::nullCheck(local)->FMGL(data), (__extension__ ({
              ::x10::regionarray::Region* t__132365 = ::x10aux::nullCheck(local)->FMGL(localRegion);
              if (!((::x10aux::struct_equals(::x10aux::nullCheck(t__132365)->FMGL(rank),
                                             ::x10aux::nullCheck(::x10aux::nullCheck(d)->FMGL(region))->FMGL(rank)))))
              {
                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166413))));
              }
              t__132365;
          }))
          , ::x10aux::class_cast_unchecked< ::x10::regionarray::GhostManager*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        return alloc__132364;
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* a;
    ::x10::regionarray::Dist* d;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->a);
        buf.write(this->d);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_a = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        ::x10::regionarray::Dist* that_d = buf.read< ::x10::regionarray::Dist*>();
        x10_regionarray_DistArray__closure__4<TPMGL(T) >* this_ = new (storage) x10_regionarray_DistArray__closure__4<TPMGL(T) >(that_a, that_d);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__4(::x10::regionarray::DistArray<TPMGL(T)>* a, ::x10::regionarray::Dist* d) : a(a), d(d) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:312-315";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::template itable <x10_regionarray_DistArray__closure__4<TPMGL(T) > >x10_regionarray_DistArray__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__4<TPMGL(T) >::__apply, &x10_regionarray_DistArray__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >, &x10_regionarray_DistArray__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__4<TPMGL(T) >::_deserialize);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__4_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__5_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class x10_regionarray_DistArray__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, x10_long>::itable<x10_regionarray_DistArray__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_long __apply(x10_long i);
    // captured environment
    ::x10::regionarray::Region* regionHere;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->regionHere);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__5* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__5>();
        buf.record_reference(storage);
        ::x10::regionarray::Region* that_regionHere = buf.read< ::x10::regionarray::Region*>();
        x10_regionarray_DistArray__closure__5* this_ = new (storage) x10_regionarray_DistArray__closure__5(that_regionHere);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__5(::x10::regionarray::Region* regionHere) : regionHere(regionHere) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_long> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:707";
    }

};

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__5_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__6_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_DistArray__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__6<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 728 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* reg = ::x10aux::nullCheck(saved_this->FMGL(dist))->__apply(
                                            ::x10::lang::Place::_make(::x10aux::here));
        
        //#line 729 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* localRegion = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132269 =
              saved_this;
            ::x10aux::nullCheck(this__132269)->FMGL(localRegion);
        }))
        ;
        
        //#line 730 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* rail = saved_this->FMGL(raw);
        
        //#line 731 "x10/regionarray/DistArray.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* pt__131999;
            for (pt__131999 = ::x10aux::nullCheck(reg)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(pt__131999));
                 ) {
                ::x10::lang::Point* pt = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(pt__131999));
                
                //#line 732 "x10/regionarray/DistArray.x10"
                rail->x10::lang::template Rail< TPMGL(T) >::__set(
                  ::x10aux::nullCheck(localRegion)->indexOf(
                    pt), v);
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* saved_this;
    TPMGL(T) v;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->v);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__6<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        TPMGL(T) that_v = buf.read<TPMGL(T)>();
        x10_regionarray_DistArray__closure__6<TPMGL(T) >* this_ = new (storage) x10_regionarray_DistArray__closure__6<TPMGL(T) >(that_saved_this, that_v);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__6(::x10::regionarray::DistArray<TPMGL(T)>* saved_this, TPMGL(T) v) : saved_this(saved_this), v(v) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:727-734";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__6<TPMGL(T) > >x10_regionarray_DistArray__closure__6<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__6<TPMGL(T) >::__apply, &x10_regionarray_DistArray__closure__6<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__6<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_regionarray_DistArray__closure__6<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__6<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__6<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__6<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_regionarray_DistArray__closure__6<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__6_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__15_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_DistArray__closure__15 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__15<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 970 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::GhostManager* ghostManager = ::x10aux::nullCheck(saved_this->FMGL(localHandle)->x10::lang::template PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::__apply())->FMGL(ghostManager);
        
        //#line 971 "x10/regionarray/DistArray.x10"
        ::x10aux::nullCheck(ghostManager)->sendGhosts(reinterpret_cast< ::x10::regionarray::Ghostable*>(saved_this));
        
        //#line 972 "x10/regionarray/DistArray.x10"
        ::x10aux::nullCheck(ghostManager)->waitOnGhosts();
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__15<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__15<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        x10_regionarray_DistArray__closure__15<TPMGL(T) >* this_ = new (storage) x10_regionarray_DistArray__closure__15<TPMGL(T) >(that_saved_this);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__15(::x10::regionarray::DistArray<TPMGL(T)>* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:969-973";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__15<TPMGL(T) > >x10_regionarray_DistArray__closure__15<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__15<TPMGL(T) >::__apply, &x10_regionarray_DistArray__closure__15<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__15<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_regionarray_DistArray__closure__15<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__15<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__15<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__15<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_regionarray_DistArray__closure__15<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__15_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__14_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_DistArray__closure__14 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__14<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* place__132462;
            for (place__132462 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->restriction(
                                                                           ::x10::lang::Place::_make(::x10aux::here)))->FMGL(region))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(place__132462));
                 ) {
                ::x10::lang::Point* place = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(place__132462));
                ::x10::xrx::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::here),
                                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_regionarray_DistArray__closure__15<TPMGL(T)>)))x10_regionarray_DistArray__closure__15<TPMGL(T)>(saved_this))),
                                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* saved_this;
    ::x10::regionarray::Dist* __lowerer__var__0__;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->__lowerer__var__0__);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__14<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__14<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        ::x10::regionarray::Dist* that___lowerer__var__0__ = buf.read< ::x10::regionarray::Dist*>();
        x10_regionarray_DistArray__closure__14<TPMGL(T) >* this_ = new (storage) x10_regionarray_DistArray__closure__14<TPMGL(T) >(that_saved_this, that___lowerer__var__0__);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__14(::x10::regionarray::DistArray<TPMGL(T)>* saved_this, ::x10::regionarray::Dist* __lowerer__var__0__) : saved_this(saved_this), __lowerer__var__0__(__lowerer__var__0__) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:969-973";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__14<TPMGL(T) > >x10_regionarray_DistArray__closure__14<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__14<TPMGL(T) >::__apply, &x10_regionarray_DistArray__closure__14<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__14<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_regionarray_DistArray__closure__14<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__14<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__14<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__14<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_regionarray_DistArray__closure__14<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__14_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__16_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_DistArray__closure__16 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__16<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 1015 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::GhostManager* ghostManager = ::x10aux::nullCheck(saved_this->FMGL(localHandle)->x10::lang::template PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::__apply())->FMGL(ghostManager);
        {
            
            //#line 1016 "x10/regionarray/DistArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            {
                ::x10::lang::CheckedThrowable* throwable__132475 = ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                try {
                    {
                        ::x10::xrx::Runtime::enterAtomic();
                        while (true) {
                            if ((::x10aux::struct_equals(::x10aux::nullCheck(ghostManager)->x10::regionarray::GhostManager::currentPhase(),
                                                         phase)))
                            {
                                {
                                 
                                }
                                break;
                            }
                            ::x10::xrx::Runtime::awaitAtomic();
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc1552) {
                    {
                        ::x10::lang::CheckedThrowable* formal__132476 =
                          __exc1552;
                        {
                            throwable__132475 = formal__132476;
                        }
                    }
                }
                if ((!::x10aux::struct_equals(throwable__132475, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__132475))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__132475));
                    }
                    
                }
                if (true) {
                    ::x10::xrx::Runtime::exitAtomic();
                }
                if ((!::x10aux::struct_equals(throwable__132475,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__132475)))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__132475));
                    }
                    
                }
                
            }
        }
        
        //#line 1017 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Array<TPMGL(T)>* local2 = saved_this->x10::regionarray::template DistArray<TPMGL(T)>::getLocalPortion();
        
        //#line 1018 "x10/regionarray/DistArray.x10"
        ::x10aux::nullCheck(local2)->x10::regionarray::template Array<TPMGL(T)>::copy(
          neighborPortion, (__extension__ ({
              ::x10::regionarray::Region* t__131331 = neighborPortion->FMGL(region);
              if (!(((::x10aux::struct_equals(::x10aux::nullCheck(t__131331)->FMGL(rect),
                                              true)) && (::x10aux::struct_equals(::x10aux::nullCheck(t__131331)->FMGL(rank),
                                                                                 ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(saved_this)->FMGL(dist))->FMGL(region))->FMGL(rank))))))
              {
                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166421))));
              }
              t__131331;
          }))
          );
        
        //#line 1019 "x10/regionarray/DistArray.x10"
        ::x10aux::nullCheck(ghostManager)->setNeighborReceived(
          sourcePlace, ::x10aux::nullCheck(shift)->x10::lang::Point::__minus());
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* saved_this;
    x10_byte phase;
    ::x10::regionarray::Array<TPMGL(T)>* neighborPortion;
    ::x10::lang::Place sourcePlace;
    ::x10::lang::Point* shift;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->phase);
        buf.write(this->neighborPortion);
        buf.write(this->sourcePlace);
        buf.write(this->shift);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__16<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__16<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        x10_byte that_phase = buf.read<x10_byte>();
        ::x10::regionarray::Array<TPMGL(T)>* that_neighborPortion = buf.read< ::x10::regionarray::Array<TPMGL(T)>*>();
        ::x10::lang::Place that_sourcePlace = buf.read< ::x10::lang::Place>();
        ::x10::lang::Point* that_shift = buf.read< ::x10::lang::Point*>();
        x10_regionarray_DistArray__closure__16<TPMGL(T) >* this_ = new (storage) x10_regionarray_DistArray__closure__16<TPMGL(T) >(that_saved_this, that_phase, that_neighborPortion, that_sourcePlace, that_shift);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__16(::x10::regionarray::DistArray<TPMGL(T)>* saved_this, x10_byte phase, ::x10::regionarray::Array<TPMGL(T)>* neighborPortion, ::x10::lang::Place sourcePlace, ::x10::lang::Point* shift) : saved_this(saved_this), phase(phase), neighborPortion(neighborPortion), sourcePlace(sourcePlace), shift(shift) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:1014-1020";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__16<TPMGL(T) > >x10_regionarray_DistArray__closure__16<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__16<TPMGL(T) >::__apply, &x10_regionarray_DistArray__closure__16<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__16<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_regionarray_DistArray__closure__16<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__16<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__16<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__16<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_regionarray_DistArray__closure__16<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__16_CLOSURE
#ifndef X10_REGIONARRAY_DISTARRAY__CLOSURE__17_CLOSURE
#define X10_REGIONARRAY_DISTARRAY__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_DistArray__closure__17 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__17<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 1038 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::GhostManager* ghostManager = ::x10aux::nullCheck(saved_this->FMGL(localHandle)->x10::lang::template PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::__apply())->FMGL(ghostManager);
        {
            
            //#line 1039 "x10/regionarray/DistArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            {
                ::x10::lang::CheckedThrowable* throwable__132478 = ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                try {
                    {
                        ::x10::xrx::Runtime::enterAtomic();
                        while (true) {
                            if ((::x10aux::struct_equals(::x10aux::nullCheck(ghostManager)->x10::regionarray::GhostManager::currentPhase(),
                                                         phase)))
                            {
                                {
                                 
                                }
                                break;
                            }
                            ::x10::xrx::Runtime::awaitAtomic();
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc1554) {
                    {
                        ::x10::lang::CheckedThrowable* formal__132479 =
                          __exc1554;
                        {
                            throwable__132478 = formal__132479;
                        }
                    }
                }
                if ((!::x10aux::struct_equals(throwable__132478, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__132478))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__132478));
                    }
                    
                }
                if (true) {
                    ::x10::xrx::Runtime::exitAtomic();
                }
                if ((!::x10aux::struct_equals(throwable__132478,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__132478)))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__132478));
                    }
                    
                }
                
            }
        }
        
        //#line 1040 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Array<TPMGL(T)>* local2 = (__extension__ ({
            ::x10::regionarray::Array<TPMGL(T)>* t__131346 =
              saved_this->x10::regionarray::template DistArray<TPMGL(T)>::getLocalPortion();
            if (!(((::x10aux::struct_equals(::x10aux::nullCheck(t__131346)->FMGL(rect),
                                            true)) && (::x10aux::struct_equals(::x10aux::nullCheck(t__131346)->FMGL(rank),
                                                                               ((x10_long)3ll))))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166422))));
            }
            t__131346;
        }))
        ;
        
        //#line 1041 "x10/regionarray/DistArray.x10"
        ::x10aux::nullCheck(local2)->x10::regionarray::template Array<TPMGL(T)>::copy(
          neighborPortion, neighborPortion->FMGL(region));
        
        //#line 1042 "x10/regionarray/DistArray.x10"
        ::x10aux::nullCheck(ghostManager)->setNeighborReceived(
          sourcePlace, ::x10aux::nullCheck(shift)->x10::lang::Point::__minus());
    }
    
    // captured environment
    ::x10::regionarray::DistArray<TPMGL(T)>* saved_this;
    x10_byte phase;
    ::x10::regionarray::Array<TPMGL(T)>* neighborPortion;
    ::x10::lang::Place sourcePlace;
    ::x10::lang::Point* shift;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->phase);
        buf.write(this->neighborPortion);
        buf.write(this->sourcePlace);
        buf.write(this->shift);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_DistArray__closure__17<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_DistArray__closure__17<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::DistArray<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::DistArray<TPMGL(T)>*>();
        x10_byte that_phase = buf.read<x10_byte>();
        ::x10::regionarray::Array<TPMGL(T)>* that_neighborPortion = buf.read< ::x10::regionarray::Array<TPMGL(T)>*>();
        ::x10::lang::Place that_sourcePlace = buf.read< ::x10::lang::Place>();
        ::x10::lang::Point* that_shift = buf.read< ::x10::lang::Point*>();
        x10_regionarray_DistArray__closure__17<TPMGL(T) >* this_ = new (storage) x10_regionarray_DistArray__closure__17<TPMGL(T) >(that_saved_this, that_phase, that_neighborPortion, that_sourcePlace, that_shift);
        return this_;
    }
    
    x10_regionarray_DistArray__closure__17(::x10::regionarray::DistArray<TPMGL(T)>* saved_this, x10_byte phase, ::x10::regionarray::Array<TPMGL(T)>* neighborPortion, ::x10::lang::Place sourcePlace, ::x10::lang::Point* shift) : saved_this(saved_this), phase(phase), neighborPortion(neighborPortion), sourcePlace(sourcePlace), shift(shift) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/regionarray/DistArray.x10:1037-1043";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_regionarray_DistArray__closure__17<TPMGL(T) > >x10_regionarray_DistArray__closure__17<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_DistArray__closure__17<TPMGL(T) >::__apply, &x10_regionarray_DistArray__closure__17<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_DistArray__closure__17<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_regionarray_DistArray__closure__17<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__17<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_DistArray__closure__17<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_DistArray__closure__17<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_regionarray_DistArray__closure__17<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_REGIONARRAY_DISTARRAY__CLOSURE__17_CLOSURE

//#line 49 "x10/regionarray/DistArray.x10"
/**
     * The distribution of this array.
     */
template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::template itable< ::x10::regionarray::DistArray<TPMGL(T)> >  x10::regionarray::DistArray<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::regionarray::DistArray<TPMGL(T)>::__apply, &x10::regionarray::DistArray<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::regionarray::DistArray<TPMGL(T)> >  x10::regionarray::DistArray<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::regionarray::DistArray<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Iterable< ::x10::lang::Point*>::template itable< ::x10::regionarray::DistArray<TPMGL(T)> >  x10::regionarray::DistArray<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::regionarray::DistArray<TPMGL(T)>::iterator, &x10::regionarray::DistArray<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::regionarray::Ghostable::itable< ::x10::regionarray::DistArray<TPMGL(T)> >  x10::regionarray::DistArray<TPMGL(T)>::_itable_3(&::x10::lang::X10Class::equals, &x10::regionarray::DistArray<TPMGL(T)>::getDist, &::x10::lang::X10Class::hashCode, &x10::regionarray::DistArray<TPMGL(T)>::putOverlap, &x10::regionarray::DistArray<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::regionarray::DistArray<TPMGL(T)>::_itables[5] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable< ::x10::lang::Point*> >, &_itable_2), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::regionarray::Ghostable>, &_itable_3), ::x10aux::itable_entry(NULL, (void*)"::x10::regionarray::DistArray<TPMGL(T)>")};

//#line 62 "x10/regionarray/DistArray.x10"
/**
     * The region this array is defined over.
     */
template<class TPMGL(T)> ::x10::regionarray::Region* x10::regionarray::DistArray<TPMGL(T)>::region(
  ) {
    return ::x10aux::nullCheck(this->FMGL(dist))->FMGL(region);
    
}

//#line 67 "x10/regionarray/DistArray.x10"
/**
     * The rank of this array.
     */
template<class TPMGL(T)> x10_long x10::regionarray::DistArray<TPMGL(T)>::rank(
  ) {
    ::x10::regionarray::Dist* this__132340 = this->FMGL(dist);
    return ::x10aux::nullCheck(::x10aux::nullCheck(this__132340)->FMGL(region))->FMGL(rank);
    
}

//#line 69 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> ::x10::regionarray::Dist* x10::regionarray::DistArray<TPMGL(T)>::getDist(
  ) {
    return this->FMGL(dist);
    
}

//#line 91 "x10/regionarray/DistArray.x10"

//#line 100 "x10/regionarray/DistArray.x10"
/** The place-local state for the DistArray */

//#line 106 "x10/regionarray/DistArray.x10"
/** 
     * The place-local backing storage for elements of the DistArray.
     */

//#line 107 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::regionarray::DistArray<TPMGL(T)>::getRawFromLocalHandle(
  ) {
    
    //#line 108 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* ls =
      this->FMGL(localHandle)->x10::lang::template PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::__apply();
    
    //#line 109 "x10/regionarray/DistArray.x10"
    return (!::x10aux::struct_equals(ls, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))
      ? (::x10aux::nullCheck(ls)->FMGL(data)) : (::x10::lang::Rail< TPMGL(T) >::_make());
    
}

//#line 117 "x10/regionarray/DistArray.x10"
/**
     * Method to acquire a pointer to the backing storage for the 
     * array's data in the current place.
     */
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::regionarray::DistArray<TPMGL(T)>::raw(
  ) {
    return this->FMGL(raw);
    
}

//#line 123 "x10/regionarray/DistArray.x10"
/**
     * The region for which backing storage is allocated at this place.
     */

//#line 124 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> ::x10::regionarray::Region* x10::regionarray::DistArray<TPMGL(T)>::getLocalRegionFromLocalHandle(
  ) {
    
    //#line 125 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* ls =
      this->FMGL(localHandle)->x10::lang::template PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::__apply();
    
    //#line 126 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::Region* r;
    
    //#line 127 "x10/regionarray/DistArray.x10"
    if ((!::x10aux::struct_equals(ls, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        r = ::x10aux::nullCheck(ls)->FMGL(localRegion);
    } else {
        
        //#line 128 "x10/regionarray/DistArray.x10"
        r = (__extension__ ({
            x10_long rank__132097 = (__extension__ ({
                ::x10::regionarray::DistArray<TPMGL(T)>* this__132093 =
                  this;
                (__extension__ ({
                    
                    //#line 67 "x10/regionarray/DistArray.x10"
                    ::x10::regionarray::Dist* this__132095 =
                      ::x10aux::nullCheck(this__132093)->FMGL(dist);
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__132095)->FMGL(region))->FMGL(rank);
                }))
                ;
            }))
            ;
            reinterpret_cast< ::x10::regionarray::Region*>((__extension__ ({
                
                //#line 60 "x10/regionarray/Region.x10"
                ::x10::regionarray::EmptyRegion* alloc__132098 =
                   (new (::x10aux::alloc_z< ::x10::regionarray::EmptyRegion>()) ::x10::regionarray::EmptyRegion());
                (alloc__132098)->::x10::regionarray::EmptyRegion::_constructor(
                  rank__132097);
                alloc__132098;
            }))
            );
        }))
        ;
    }
    
    //#line 129 "x10/regionarray/DistArray.x10"
    return r;
    
}

//#line 138 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> ::x10::regionarray::Region* x10::regionarray::DistArray<TPMGL(T)>::localRegion(
  ) {
    return this->FMGL(localRegion);
    
}

//#line 144 "x10/regionarray/DistArray.x10"
/**
     * @return the portion of the DistArray (including ghosts) that is stored 
     *   locally at the current place, as an Array
     */
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>*
  x10::regionarray::DistArray<TPMGL(T)>::getLocalPortion(
  ) {
    
    //#line 145 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::Region* regionForHere = (__extension__ ({
        ::x10::regionarray::DistArray<TPMGL(T)>* this__132100 =
          this;
        ::x10aux::nullCheck(this__132100)->FMGL(localRegion);
    }))
    ;
    
    //#line 146 "x10/regionarray/DistArray.x10"
    if (!(::x10aux::nullCheck(regionForHere)->FMGL(rect)))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::UnsupportedOperationException::_make(::x10::lang::String::__plus(::x10aux::type_name(this), (&::x10::regionarray::DistArray_Strings::sl__166408)))));
    }
    
    //#line 147 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::Array<TPMGL(T)>* alloc__132349 = 
    (new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>());
    ::x10::lang::Rail< TPMGL(T) >* backingStore__132348 =
      this->FMGL(raw);
    
    //#line 233 "x10/regionarray/Array.x10"
    alloc__132349->FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__132343 = regionForHere;
        if (!((!::x10aux::struct_equals(t__132343, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            if (true) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166409))));
            }
            
        }
        t__132343;
    }))
    ;
    alloc__132349->FMGL(rank) = ::x10aux::nullCheck(regionForHere)->FMGL(rank);
    alloc__132349->FMGL(rect) = ::x10aux::nullCheck(regionForHere)->FMGL(rect);
    alloc__132349->FMGL(zeroBased) = ::x10aux::nullCheck(regionForHere)->FMGL(zeroBased);
    alloc__132349->FMGL(rail) = ::x10aux::nullCheck(regionForHere)->FMGL(rail);
    alloc__132349->FMGL(size) = ::x10aux::nullCheck(regionForHere)->size();
    
    //#line 235 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__132344 =
       ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__132344)->::x10::regionarray::Array__LayoutHelper::_constructor(
      regionForHere);
    
    //#line 236 "x10/regionarray/Array.x10"
    alloc__132349->FMGL(layout_min0) = crh__132344->FMGL(min0);
    
    //#line 237 "x10/regionarray/Array.x10"
    alloc__132349->FMGL(layout_stride1) = crh__132344->FMGL(stride1);
    
    //#line 238 "x10/regionarray/Array.x10"
    alloc__132349->FMGL(layout_min1) = crh__132344->FMGL(min1);
    
    //#line 239 "x10/regionarray/Array.x10"
    alloc__132349->FMGL(layout) = crh__132344->FMGL(layout);
    
    //#line 240 "x10/regionarray/Array.x10"
    x10_long n__132345 = crh__132344->FMGL(size);
    
    //#line 241 "x10/regionarray/Array.x10"
    if (((n__132345) > ((x10_long)(::x10aux::nullCheck(backingStore__132348)->FMGL(size)))))
    {
        
        //#line 242 "x10/regionarray/Array.x10"
        if (true) {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::x10::regionarray::DistArray_Strings::sl__166410))));
        }
        
    }
    
    //#line 244 "x10/regionarray/Array.x10"
    alloc__132349->FMGL(raw) = (__extension__ ({
        ::x10::lang::Rail< TPMGL(T) >* t__132346 = backingStore__132348;
        if (!((!::x10aux::struct_equals(t__132346, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            if (true) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166411))));
            }
            
        }
        t__132346;
    }))
    ;
    
    //#line 147 "x10/regionarray/DistArray.x10"
    return alloc__132349;
    
}

//#line 156 "x10/regionarray/DistArray.x10"
/**
     * Create a zero-initialized distributed array over the argument distribution.
     *
     * @param dist the given distribution
     * @return the newly created DistArray
     */

//#line 166 "x10/regionarray/DistArray.x10"
/**
     * Create a zero-initialized distributed array over the argument distribution.
     *
     * @param dist the given distribution
     * @param ghostWidth the width of the ghost region in every dimension
     * @param periodic whether to apply periodic boundary conditions
     * @return the newly created DistArray
     */

//#line 168 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Dist* dist) {
    
    //#line 169 "x10/regionarray/DistArray.x10"
    (this)->::x10::regionarray::DistArray<TPMGL(T)>::_constructor(
      dist, ((x10_long)0ll), false);
    
}
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>* x10::regionarray::DistArray<TPMGL(T)>::_make(
                           ::x10::regionarray::Dist* dist)
{
    ::x10::regionarray::DistArray<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>();
    this_->_constructor(dist);
    return this_;
}



//#line 172 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Dist* dist,
                           x10_long ghostWidth, x10_boolean periodic) {
    
    //#line 173 "x10/regionarray/DistArray.x10"
    FMGL(dist) = dist;
    
    //#line 187 "x10/regionarray/DistArray.x10"
    this->FMGL(localHandle) = ::x10::lang::PlaceLocalHandle<void>::template makeFlat< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* >(
                                ::x10aux::nullCheck(dist)->places(),
                                reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >(sizeof(x10_regionarray_DistArray__closure__1<TPMGL(T)>)))x10_regionarray_DistArray__closure__1<TPMGL(T)>(dist, ghostWidth, periodic))));
    
    //#line 188 "x10/regionarray/DistArray.x10"
    this->FMGL(raw) = this->x10::regionarray::template DistArray<TPMGL(T)>::getRawFromLocalHandle();
    
    //#line 189 "x10/regionarray/DistArray.x10"
    this->FMGL(localRegion) = this->x10::regionarray::template DistArray<TPMGL(T)>::getLocalRegionFromLocalHandle();
}
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>* x10::regionarray::DistArray<TPMGL(T)>::_make(
                           ::x10::regionarray::Dist* dist,
                           x10_long ghostWidth, x10_boolean periodic)
{
    ::x10::regionarray::DistArray<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>();
    this_->_constructor(dist, ghostWidth, periodic);
    return this_;
}



//#line 208 "x10/regionarray/DistArray.x10"
/**
     * Create a distributed array over the argument distribution whose elements
     * are initialized by executing the given initializer function for each 
     * element of the array in the place where the argument Point is mapped. 
     * The function will be evaluated exactly once for each point
     * in dist in an arbitrary order to compute the initial value for each array element.</p>
     * 
     * Within each place, it is unspecified whether the function evaluations will
     * be done sequentially by a single activity for each point or concurrently for disjoint sets 
     * of points by one or more child activities. 
     * 
     * @param dist the given distribution
     * @param init the initializer function
     * @return the newly created DistArray
     * @see #make[T](Dist)
     */

//#line 228 "x10/regionarray/DistArray.x10"
/**
     * Create a distributed array over the argument distribution whose elements
     * are initialized by executing the given initializer function for each 
     * element of the array in the place where the argument Point is mapped. 
     * The function will be evaluated exactly once for each point in dist in an
     * arbitrary order to compute the initial value for each array element.</p>
     * 
     * Within each place, it is unspecified whether the function evaluations will
     * be done sequentially by a single activity for each point or concurrently for disjoint sets 
     * of points by one or more child activities. 
     * 
     * @param dist the given distribution
     * @param init the initializer function
     * @param ghostWidth the width of the ghost region in every dimension
     * @param periodic whether to apply periodic boundary conditions
     * @return the newly created DistArray
     * @see #make[T](Dist)
     */

//#line 230 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Dist* dist,
                           ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init,
                           x10_long ghostWidth, x10_boolean periodic) {
    
    //#line 231 "x10/regionarray/DistArray.x10"
    FMGL(dist) = dist;
    
    //#line 249 "x10/regionarray/DistArray.x10"
    this->FMGL(localHandle) = ::x10::lang::PlaceLocalHandle<void>::template make< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* >(
                                ::x10aux::nullCheck(dist)->places(),
                                reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >(sizeof(x10_regionarray_DistArray__closure__2<TPMGL(T)>)))x10_regionarray_DistArray__closure__2<TPMGL(T)>(dist, ghostWidth, periodic, init))));
    
    //#line 250 "x10/regionarray/DistArray.x10"
    this->FMGL(raw) = this->x10::regionarray::template DistArray<TPMGL(T)>::getRawFromLocalHandle();
    
    //#line 251 "x10/regionarray/DistArray.x10"
    this->FMGL(localRegion) = this->x10::regionarray::template DistArray<TPMGL(T)>::getLocalRegionFromLocalHandle();
}
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>* x10::regionarray::DistArray<TPMGL(T)>::_make(
                           ::x10::regionarray::Dist* dist,
                           ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init,
                           x10_long ghostWidth, x10_boolean periodic)
{
    ::x10::regionarray::DistArray<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>();
    this_->_constructor(dist, init, ghostWidth, periodic);
    return this_;
}



//#line 264 "x10/regionarray/DistArray.x10"
/**
     * Create a distributed array over the argument distribution whose elements
     * are initialized to the given initial value.
     *
     * @param dist the given distribution
     * @param init the initial value
     * @return the newly created DistArray
     * @see #make[T](Dist)
     */

//#line 277 "x10/regionarray/DistArray.x10"
/**
     * Create a distributed array over the argument distribution whose elements
     * are initialized to the given initial value.
     *
     * @param dist the given distribution
     * @param init the initial value
     * @param ghostWidth the width of the ghost region in every dimension
     * @param periodic whether to apply periodic boundary conditions
     * @return the newly created DistArray
     * @see #make[T](Dist)
     */

//#line 279 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Dist* dist,
                           TPMGL(T) init, x10_long ghostWidth,
                           x10_boolean periodic) {
    
    //#line 280 "x10/regionarray/DistArray.x10"
    FMGL(dist) = dist;
    
    //#line 294 "x10/regionarray/DistArray.x10"
    this->FMGL(localHandle) = ::x10::lang::PlaceLocalHandle<void>::template make< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* >(
                                ::x10aux::nullCheck(dist)->places(),
                                reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >(sizeof(x10_regionarray_DistArray__closure__3<TPMGL(T)>)))x10_regionarray_DistArray__closure__3<TPMGL(T)>(dist, ghostWidth, periodic, init))));
    
    //#line 295 "x10/regionarray/DistArray.x10"
    this->FMGL(raw) = this->x10::regionarray::template DistArray<TPMGL(T)>::getRawFromLocalHandle();
    
    //#line 296 "x10/regionarray/DistArray.x10"
    this->FMGL(localRegion) = this->x10::regionarray::template DistArray<TPMGL(T)>::getLocalRegionFromLocalHandle();
}
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>* x10::regionarray::DistArray<TPMGL(T)>::_make(
                           ::x10::regionarray::Dist* dist,
                           TPMGL(T) init, x10_long ghostWidth,
                           x10_boolean periodic) {
    ::x10::regionarray::DistArray<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>();
    this_->_constructor(dist, init, ghostWidth, periodic);
    return this_;
}



//#line 308 "x10/regionarray/DistArray.x10"
/**
     * Create a DistArray that views the same backing data
     * as the argument DistArray using a different distribution.</p>
     * 
     * An unchecked invariant for this to be correct is that for each place in
     * d.places, local storage must be allocated for each point p in d(place).
     * This invariant is too expensive to be checked dynamically, so it simply must
     * be respected by the DistArray code that calls this constructor.
     */
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::_constructor(
                           ::x10::regionarray::DistArray<TPMGL(T)>* a,
                           ::x10::regionarray::Dist* d) {
    
    //#line 309 "x10/regionarray/DistArray.x10"
    FMGL(dist) = d;
    
    //#line 316 "x10/regionarray/DistArray.x10"
    this->FMGL(localHandle) = ::x10::lang::PlaceLocalHandle<void>::template makeFlat< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* >(
                                ::x10aux::nullCheck(d)->places(),
                                reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >(sizeof(x10_regionarray_DistArray__closure__4<TPMGL(T)>)))x10_regionarray_DistArray__closure__4<TPMGL(T)>(a, d))));
    
    //#line 317 "x10/regionarray/DistArray.x10"
    this->FMGL(raw) = this->x10::regionarray::template DistArray<TPMGL(T)>::getRawFromLocalHandle();
    
    //#line 318 "x10/regionarray/DistArray.x10"
    this->FMGL(localRegion) = this->x10::regionarray::template DistArray<TPMGL(T)>::getLocalRegionFromLocalHandle();
}
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>* x10::regionarray::DistArray<TPMGL(T)>::_make(
                           ::x10::regionarray::DistArray<TPMGL(T)>* a,
                           ::x10::regionarray::Dist* d) {
    ::x10::regionarray::DistArray<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>();
    this_->_constructor(a, d);
    return this_;
}



//#line 326 "x10/regionarray/DistArray.x10"
/**
     * Create a DistArray from a distribution and a PlaceLocalHandle[LocalState[T]]
     * This constructor is intended for internal use only by operations such as 
     * map to enable them to complete with only 1 collective operation instead of 2.
     */
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Dist* d, ::x10::lang::PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> pls) {
    
    //#line 327 "x10/regionarray/DistArray.x10"
    FMGL(dist) = d;
    
    //#line 328 "x10/regionarray/DistArray.x10"
    this->FMGL(localHandle) = pls;
    
    //#line 329 "x10/regionarray/DistArray.x10"
    this->FMGL(raw) = this->x10::regionarray::template DistArray<TPMGL(T)>::getRawFromLocalHandle();
    
    //#line 330 "x10/regionarray/DistArray.x10"
    this->FMGL(localRegion) = this->x10::regionarray::template DistArray<TPMGL(T)>::getLocalRegionFromLocalHandle();
}
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>* x10::regionarray::DistArray<TPMGL(T)>::_make(
                           ::x10::regionarray::Dist* d, ::x10::lang::PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> pls)
{
    ::x10::regionarray::DistArray<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>();
    this_->_constructor(d, pls);
    return this_;
}



//#line 345 "x10/regionarray/DistArray.x10"
/**
     * Return the element of this array corresponding to the given point.
     * The rank of the given point has to be the same as the rank of this array.
     * If the distribution does not map the given Point to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param pt the given point
     * @return the element of this array corresponding to the given point.
     * @see #operator(Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::__apply(
  ::x10::lang::Point* pt) {
    
    //#line 346 "x10/regionarray/DistArray.x10"
    x10_long offset = ::x10aux::nullCheck((__extension__ ({
                          ::x10::regionarray::DistArray<TPMGL(T)>* this__132122 =
                            this;
                          ::x10aux::nullCheck(this__132122)->FMGL(localRegion);
                      }))
                      )->indexOf(pt);
    
    //#line 347 "x10/regionarray/DistArray.x10"
    if ((true && (::x10aux::struct_equals(offset, ((x10_long)-1ll)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          pt);
    }
    
    //#line 348 "x10/regionarray/DistArray.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             offset);
    
}

//#line 363 "x10/regionarray/DistArray.x10"
/**
     * Return the element of this array corresponding to the given index.
     * Only applies to one-dimensional arrays.
     * Functionally equivalent to indexing the array via a one-dimensional point.
     * If the distribution does not map the specified index to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param i0 the given index in the first dimension
     * @return the element of this array corresponding to the given index.
     * @see #operator(Point)
     * @see #set(T, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::__apply(
  x10_long i0) {
    
    //#line 364 "x10/regionarray/DistArray.x10"
    x10_long offset = ::x10aux::nullCheck((__extension__ ({
                          ::x10::regionarray::DistArray<TPMGL(T)>* this__132128 =
                            this;
                          ::x10aux::nullCheck(this__132128)->FMGL(localRegion);
                      }))
                      )->indexOf(i0);
    
    //#line 365 "x10/regionarray/DistArray.x10"
    if ((true && (::x10aux::struct_equals(offset, ((x10_long)-1ll)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          i0);
    }
    
    //#line 366 "x10/regionarray/DistArray.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             offset);
    
}

//#line 382 "x10/regionarray/DistArray.x10"
/**
     * Return the element of this array corresponding to the given pair of indices.
     * Only applies to two-dimensional arrays.
     * Functionally equivalent to indexing the array via a two-dimensional point.
     * If the distribution does not map the specified index to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @return the element of this array corresponding to the given pair of indices.
     * @see #operator(Point)
     * @see #set(T, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::__apply(
  x10_long i0, x10_long i1) {
    
    //#line 383 "x10/regionarray/DistArray.x10"
    x10_long offset = ::x10aux::nullCheck((__extension__ ({
                          ::x10::regionarray::DistArray<TPMGL(T)>* this__132134 =
                            this;
                          ::x10aux::nullCheck(this__132134)->FMGL(localRegion);
                      }))
                      )->indexOf(i0, i1);
    
    //#line 384 "x10/regionarray/DistArray.x10"
    if ((true && (::x10aux::struct_equals(offset, ((x10_long)-1ll)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          i0, i1);
    }
    
    //#line 385 "x10/regionarray/DistArray.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             offset);
    
}

//#line 402 "x10/regionarray/DistArray.x10"
/**
     * Return the element of this array corresponding to the given triple of indices.
     * Only applies to three-dimensional arrays.
     * Functionally equivalent to indexing the array via a three-dimensional point.
     * If the distribution does not map the specified index to the current place,
     * then a BadPlaceException will be raised.
     *
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @param i2 the given index in the third dimension
     * @return the element of this array corresponding to the given triple of indices.
     * @see #operator(Point)
     * @see #set(T, Long, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::__apply(
  x10_long i0, x10_long i1, x10_long i2) {
    
    //#line 403 "x10/regionarray/DistArray.x10"
    x10_long offset = ::x10aux::nullCheck((__extension__ ({
                          ::x10::regionarray::DistArray<TPMGL(T)>* this__132140 =
                            this;
                          ::x10aux::nullCheck(this__132140)->FMGL(localRegion);
                      }))
                      )->indexOf(i0, i1, i2);
    
    //#line 404 "x10/regionarray/DistArray.x10"
    if ((true && (::x10aux::struct_equals(offset, ((x10_long)-1ll)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          i0, i1, i2);
    }
    
    //#line 405 "x10/regionarray/DistArray.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             offset);
    
}

//#line 423 "x10/regionarray/DistArray.x10"
/**
     * Return the element of this array corresponding to the given quartet of indices.
     * Only applies to four-dimensional arrays.
     * Functionally equivalent to indexing the array via a four-dimensional point.
     * If the distribution does not map the specified index to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @param i2 the given index in the third dimension
     * @param i3 the given index in the fourth dimension
     * @return the element of this array corresponding to the given quartet of indices.
     * @see #operator(Point)
     * @see #set(T, Long, Long, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::__apply(
  x10_long i0, x10_long i1, x10_long i2, x10_long i3) {
    
    //#line 424 "x10/regionarray/DistArray.x10"
    x10_long offset = ::x10aux::nullCheck((__extension__ ({
                          ::x10::regionarray::DistArray<TPMGL(T)>* this__132146 =
                            this;
                          ::x10aux::nullCheck(this__132146)->FMGL(localRegion);
                      }))
                      )->indexOf(i0, i1, i2, i3);
    
    //#line 425 "x10/regionarray/DistArray.x10"
    if ((true && (::x10aux::struct_equals(offset, ((x10_long)-1ll)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          i0, i1, i2, i3);
    }
    
    //#line 426 "x10/regionarray/DistArray.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             offset);
    
}

//#line 441 "x10/regionarray/DistArray.x10"
/**
     * Return the element of this array corresponding to the given point,
     * wrapped for periodic boundary conditions.
     * The rank of the given point must be the same as the rank of this array.
     * If the distribution does not map the given Point to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param pt the given point
     * @return the element of this array corresponding to the given point,
     *   wrapped for periodic boundary conditions.
     * @see #setPeriodic(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::getPeriodic(
  ::x10::lang::Point* pt) {
    
    //#line 442 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::Region* l = (__extension__ ({
        ::x10::regionarray::DistArray<TPMGL(T)>* this__132148 =
          this;
        ::x10aux::nullCheck(this__132148)->FMGL(localRegion);
    }))
    ;
    
    //#line 443 "x10/regionarray/DistArray.x10"
    ::x10::lang::Point* actualPt;
    
    //#line 444 "x10/regionarray/DistArray.x10"
    if (::x10aux::nullCheck(l)->contains(pt)) {
        
        //#line 445 "x10/regionarray/DistArray.x10"
        actualPt = pt;
    } else {
        
        //#line 447 "x10/regionarray/DistArray.x10"
        actualPt = ::x10::regionarray::PeriodicBoundaryConditions::wrapPeriodic(
                     pt, l, (__extension__ ({
                         ::x10::regionarray::DistArray<TPMGL(T)>* this__132150 =
                           this;
                         ::x10aux::nullCheck(::x10aux::nullCheck(this__132150)->FMGL(dist))->FMGL(region);
                     }))
                     );
    }
    
    //#line 449 "x10/regionarray/DistArray.x10"
    x10_long offset = ::x10aux::nullCheck(l)->indexOf(actualPt);
    
    //#line 450 "x10/regionarray/DistArray.x10"
    if ((true && (::x10aux::struct_equals(offset, ((x10_long)-1ll)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          pt);
    }
    
    //#line 451 "x10/regionarray/DistArray.x10"
    return (__extension__ ({
               ::x10::regionarray::DistArray<TPMGL(T)>* this__132208 =
                 this;
               ::x10aux::nullCheck(this__132208)->FMGL(raw);
           }))
           ->x10::lang::template Rail< TPMGL(T) >::__apply(
             offset);
    
}

//#line 468 "x10/regionarray/DistArray.x10"
/**
     * Return the element of this three-dimensional array according to the given
     * indices, wrapped for periodic boundary conditions.
     * Only applies to three-dimensional arrays.
     * Functionally equivalent to getPeriodic(Point{rank==3}).
     * If the distribution does not map the given indices to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param i0 the index in the first dimension
     * @param i1 the index in the second dimension
     * @param i2 the index in the third dimension
     * @return the element of this array corresponding to the given triple of indices.
     * @see #setPeriodic(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::getPeriodic(
  x10_long i0, x10_long i1, x10_long i2) {
    
    //#line 469 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::Region* l = (__extension__ ({
        ::x10::regionarray::DistArray<TPMGL(T)>* this__132214 =
          this;
        ::x10aux::nullCheck(this__132214)->FMGL(localRegion);
    }))
    ;
    
    //#line 470 "x10/regionarray/DistArray.x10"
    x10_long offset;
    
    //#line 471 "x10/regionarray/DistArray.x10"
    if (::x10aux::nullCheck(l)->contains(i0, i1, i2)) {
        
        //#line 472 "x10/regionarray/DistArray.x10"
        offset = ::x10aux::nullCheck(l)->indexOf(i0, i1, i2);
    } else {
        
        //#line 474 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* r = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132216 =
              this;
            ::x10aux::nullCheck(::x10aux::nullCheck(this__132216)->FMGL(dist))->FMGL(region);
        }))
        ;
        
        //#line 475 "x10/regionarray/DistArray.x10"
        x10_long a0 = ::x10::regionarray::PeriodicBoundaryConditions::getPeriodicIndex(
                        i0, ::x10aux::nullCheck(l)->min(((x10_long)0ll)),
                        ::x10aux::nullCheck(l)->max(((x10_long)0ll)),
                        ((((::x10aux::nullCheck(r)->max(((x10_long)0ll))) - (::x10aux::nullCheck(r)->min(
                                                                               ((x10_long)0ll))))) + (((x10_long)1ll))));
        
        //#line 476 "x10/regionarray/DistArray.x10"
        x10_long a1 = ::x10::regionarray::PeriodicBoundaryConditions::getPeriodicIndex(
                        i1, ::x10aux::nullCheck(l)->min(((x10_long)1ll)),
                        ::x10aux::nullCheck(l)->max(((x10_long)1ll)),
                        ((((::x10aux::nullCheck(r)->max(((x10_long)1ll))) - (::x10aux::nullCheck(r)->min(
                                                                               ((x10_long)1ll))))) + (((x10_long)1ll))));
        
        //#line 477 "x10/regionarray/DistArray.x10"
        x10_long a2 = ::x10::regionarray::PeriodicBoundaryConditions::getPeriodicIndex(
                        i2, ::x10aux::nullCheck(l)->min(((x10_long)2ll)),
                        ::x10aux::nullCheck(l)->max(((x10_long)2ll)),
                        ((((::x10aux::nullCheck(r)->max(((x10_long)2ll))) - (::x10aux::nullCheck(r)->min(
                                                                               ((x10_long)2ll))))) + (((x10_long)1ll))));
        
        //#line 478 "x10/regionarray/DistArray.x10"
        offset = ::x10aux::nullCheck(l)->indexOf(a0, a1, a2);
    }
    
    //#line 480 "x10/regionarray/DistArray.x10"
    if ((true && (::x10aux::struct_equals(offset, ((x10_long)-1ll)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          i0, i1, i2);
    }
    
    //#line 481 "x10/regionarray/DistArray.x10"
    return (__extension__ ({
               ::x10::regionarray::DistArray<TPMGL(T)>* this__132218 =
                 this;
               ::x10aux::nullCheck(this__132218)->FMGL(raw);
           }))
           ->x10::lang::template Rail< TPMGL(T) >::__apply(
             offset);
    
}

//#line 497 "x10/regionarray/DistArray.x10"
/**
     * Set the element of this array corresponding to the given point to the given value.
     * Return the new value of the element.
     * The rank of the given point has to be the same as the rank of this array.
     * If the distribution does not map the specified index to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param v the given value
     * @param pt the given point
     * @return the new value of the element of this array corresponding to the given point.
     * @see #operator(Point)
     * @see #set(T, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::__set(
  ::x10::lang::Point* pt, TPMGL(T) v) {
    
    //#line 498 "x10/regionarray/DistArray.x10"
    if ((true && (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(dist))->__apply(
                                             pt), ::x10::lang::Place::_make(::x10aux::here)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          pt);
    }
    
    //#line 499 "x10/regionarray/DistArray.x10"
    x10_long offset = ::x10aux::nullCheck((__extension__ ({
                          ::x10::regionarray::DistArray<TPMGL(T)>* this__132220 =
                            this;
                          ::x10aux::nullCheck(this__132220)->FMGL(localRegion);
                      }))
                      )->indexOf(pt);
    
    //#line 500 "x10/regionarray/DistArray.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      offset, v);
    
    //#line 501 "x10/regionarray/DistArray.x10"
    return v;
    
}

//#line 518 "x10/regionarray/DistArray.x10"
/**
     * Set the element of this array corresponding to the given index to the given value.
     * Return the new value of the element.
     * Only applies to one-dimensional arrays.
     * Functionally equivalent to setting the array via a one-dimensional point.
     * If the distribution does not map the specified index to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param v the given value
     * @param i0 the given index in the first dimension
     * @return the new value of the element of this array corresponding to the given index.
     * @see #operator(Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::__set(
  x10_long i0, TPMGL(T) v) {
    
    //#line 519 "x10/regionarray/DistArray.x10"
    if ((true && (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(dist))->__apply(
                                             i0), ::x10::lang::Place::_make(::x10aux::here)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          i0);
    }
    
    //#line 520 "x10/regionarray/DistArray.x10"
    x10_long offset = ::x10aux::nullCheck((__extension__ ({
                          ::x10::regionarray::DistArray<TPMGL(T)>* this__132226 =
                            this;
                          ::x10aux::nullCheck(this__132226)->FMGL(localRegion);
                      }))
                      )->indexOf(i0);
    
    //#line 521 "x10/regionarray/DistArray.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      offset, v);
    
    //#line 522 "x10/regionarray/DistArray.x10"
    return v;
    
}

//#line 540 "x10/regionarray/DistArray.x10"
/**
     * Set the element of this array corresponding to the given pair of indices to the given value.
     * Return the new value of the element.
     * Only applies to two-dimensional arrays.
     * Functionally equivalent to setting the array via a two-dimensional point.
     * If the distribution does not map the specified index to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param v the given value
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @return the new value of the element of this array corresponding to the given pair of indices.
     * @see #operator(Long, Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::__set(
  x10_long i0, x10_long i1, TPMGL(T) v) {
    
    //#line 541 "x10/regionarray/DistArray.x10"
    if ((true && (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(dist))->__apply(
                                             i0, i1), ::x10::lang::Place::_make(::x10aux::here)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          i0, i1);
    }
    
    //#line 542 "x10/regionarray/DistArray.x10"
    x10_long offset = ::x10aux::nullCheck((__extension__ ({
                          ::x10::regionarray::DistArray<TPMGL(T)>* this__132232 =
                            this;
                          ::x10aux::nullCheck(this__132232)->FMGL(localRegion);
                      }))
                      )->indexOf(i0, i1);
    
    //#line 543 "x10/regionarray/DistArray.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      offset, v);
    
    //#line 544 "x10/regionarray/DistArray.x10"
    return v;
    
}

//#line 563 "x10/regionarray/DistArray.x10"
/**
     * Set the element of this array corresponding to the given triple of indices to the given value.
     * Return the new value of the element.
     * Only applies to three-dimensional arrays.
     * Functionally equivalent to setting the array via a three-dimensional point.
     * If the distribution does not map the specified index to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param v the given value
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @param i2 the given index in the third dimension
     * @return the new value of the element of this array corresponding to the given triple of indices.
     * @see #operator(Long, Long, Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::__set(
  x10_long i0, x10_long i1, x10_long i2, TPMGL(T) v) {
    
    //#line 564 "x10/regionarray/DistArray.x10"
    if ((true && (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(dist))->__apply(
                                             i0, i1, i2),
                                           ::x10::lang::Place::_make(::x10aux::here)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          i0, i1, i2);
    }
    
    //#line 565 "x10/regionarray/DistArray.x10"
    x10_long offset = ::x10aux::nullCheck((__extension__ ({
                          ::x10::regionarray::DistArray<TPMGL(T)>* this__132238 =
                            this;
                          ::x10aux::nullCheck(this__132238)->FMGL(localRegion);
                      }))
                      )->indexOf(i0, i1, i2);
    
    //#line 566 "x10/regionarray/DistArray.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      offset, v);
    
    //#line 567 "x10/regionarray/DistArray.x10"
    return v;
    
}

//#line 588 "x10/regionarray/DistArray.x10"
/**
     * Set the element of this array corresponding to the given quartet of indices to the given value.
     * Return the new value of the element.
     * Only applies to four-dimensional arrays.
     * Functionally equivalent to setting the array via a four-dimensional point.
     * If the distribution does not map the specified index to the current place,
     * then a BadPlaceException will be raised.
     * 
     * 
     * @param v the given value
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @param i2 the given index in the third dimension
     * @param i3 the given index in the fourth dimension
     * @return the new value of the element of this array corresponding to the given quartet of indices.
     * @see #operator(Long, Long, Long, Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::__set(
  x10_long i0, x10_long i1, x10_long i2, x10_long i3, TPMGL(T) v) {
    
    //#line 589 "x10/regionarray/DistArray.x10"
    if ((true && (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(dist))->__apply(
                                             i0, i1, i2, i3),
                                           ::x10::lang::Place::_make(::x10aux::here)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          i0, i1, i2, i3);
    }
    
    //#line 590 "x10/regionarray/DistArray.x10"
    x10_long offset = ::x10aux::nullCheck((__extension__ ({
                          ::x10::regionarray::DistArray<TPMGL(T)>* this__132244 =
                            this;
                          ::x10aux::nullCheck(this__132244)->FMGL(localRegion);
                      }))
                      )->indexOf(i0, i1, i2, i3);
    
    //#line 591 "x10/regionarray/DistArray.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      offset, v);
    
    //#line 592 "x10/regionarray/DistArray.x10"
    return v;
    
}

//#line 609 "x10/regionarray/DistArray.x10"
/**
     * Set the element of this array corresponding to the given point (wrapped
     * for periodic boundary conditions) to the given value.
     * Return the new value of the element.
     * The rank of the given point must be the same as the rank of this array.
     * If the dist does not map the specified index to the current place,
     * then a BadPlaceException will be raised.
     * 
     * @param v the given value
     * @param pt the given point
     * @return the new value of the element of this array corresponding to the
     *   given point
     * @see #getPeriodic(Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::setPeriodic(
  ::x10::lang::Point* pt, TPMGL(T) v) {
    
    //#line 610 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::Region* l = (__extension__ ({
        ::x10::regionarray::DistArray<TPMGL(T)>* this__132246 =
          this;
        ::x10aux::nullCheck(this__132246)->FMGL(localRegion);
    }))
    ;
    
    //#line 611 "x10/regionarray/DistArray.x10"
    ::x10::lang::Point* actualPt;
    
    //#line 612 "x10/regionarray/DistArray.x10"
    if (::x10aux::nullCheck(l)->contains(pt)) {
        
        //#line 613 "x10/regionarray/DistArray.x10"
        actualPt = pt;
    } else {
        
        //#line 615 "x10/regionarray/DistArray.x10"
        actualPt = ::x10::regionarray::PeriodicBoundaryConditions::wrapPeriodic(
                     pt, l, (__extension__ ({
                         ::x10::regionarray::DistArray<TPMGL(T)>* this__132248 =
                           this;
                         ::x10aux::nullCheck(::x10aux::nullCheck(this__132248)->FMGL(dist))->FMGL(region);
                     }))
                     );
    }
    
    //#line 617 "x10/regionarray/DistArray.x10"
    if ((true && (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(dist))->__apply(
                                             actualPt), ::x10::lang::Place::_make(::x10aux::here)))))
    {
        ::x10::regionarray::DistArray<void>::raisePlaceError(
          pt);
    }
    
    //#line 618 "x10/regionarray/DistArray.x10"
    x10_long offset = ::x10aux::nullCheck(l)->indexOf(actualPt);
    
    //#line 619 "x10/regionarray/DistArray.x10"
    (__extension__ ({
        ::x10::regionarray::DistArray<TPMGL(T)>* this__132250 =
          this;
        ::x10aux::nullCheck(this__132250)->FMGL(raw);
    }))
    ->x10::lang::template Rail< TPMGL(T) >::__set(offset,
                                                  v);
    
    //#line 620 "x10/regionarray/DistArray.x10"
    return v;
    
}

//#line 636 "x10/regionarray/DistArray.x10"
/**
     * Return a DistArray that accesses the same backing storage
     * as this array, but only over the Points in the argument
     * distribution.</p>
     * 
     * For this operation to be semantically sound, it should
     * be the case that for every point p in d, 
     * <code>this.dist(here).indexOf(p) == d(here).indexOf(p)</code>.
     * This invariant is not statically or dynamically checked;
     * but must be ensured by the callers of this API. 
     * 
     * @param d the Dist to use as the restriction
     */
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>*
  x10::regionarray::DistArray<TPMGL(T)>::restriction(::x10::regionarray::Dist* d) {
    
    //#line 637 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::DistArray<TPMGL(T)>* t__132367 = (__extension__ ({
        ::x10::regionarray::DistArray<TPMGL(T)>* alloc__132368 =
           (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>());
        (alloc__132368)->::x10::regionarray::DistArray<TPMGL(T)>::_constructor(
          this, d);
        alloc__132368;
    }))
    ;
    if (!((::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(t__132367)->FMGL(dist))->FMGL(region))->FMGL(rank),
                                   ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this)->FMGL(dist))->FMGL(region))->FMGL(rank)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166414))));
    }
    return t__132367;
    
}

//#line 648 "x10/regionarray/DistArray.x10"
/**
     * Return a DistArray that is defined over the same distribution
     * and backing storage as this DistArray instance, but is 
     * restricted to only allowing access to those points that are
     * contained in the argument region r.
     * 
     * @param r the Region to which to restrict the array
     */
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>*
  x10::regionarray::DistArray<TPMGL(T)>::restriction(::x10::regionarray::Region* r) {
    
    //#line 649 "x10/regionarray/DistArray.x10"
    return this->x10::regionarray::template DistArray<TPMGL(T)>::restriction(
             (__extension__ ({
                 ::x10::regionarray::Dist* t__131188 = ::x10aux::nullCheck(this->FMGL(dist))->restriction(
                                                         r);
                 if (!((::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(t__131188)->FMGL(region))->FMGL(rank),
                                                ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this)->FMGL(dist))->FMGL(region))->FMGL(rank)))))
                 {
                     ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166415))));
                 }
                 t__131188;
             }))
             );
    
}

//#line 660 "x10/regionarray/DistArray.x10"
/**
     * Return a DistArray that is defined over the same distribution
     * and backing storage as this DistArray instance, but is 
     * restricted to only allowing access to those points that are
     * mapped by the defining distripution to the argument Place. 
     * 
     * @param p the Place to which to restrict the array
     */
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>*
  x10::regionarray::DistArray<TPMGL(T)>::restriction(::x10::lang::Place p) {
    
    //#line 661 "x10/regionarray/DistArray.x10"
    return this->x10::regionarray::template DistArray<TPMGL(T)>::restriction(
             (__extension__ ({
                 ::x10::regionarray::Dist* t__131190 = ::x10aux::nullCheck(this->FMGL(dist))->restriction(
                                                         p);
                 if (!((::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(t__131190)->FMGL(region))->FMGL(rank),
                                                ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this)->FMGL(dist))->FMGL(region))->FMGL(rank)))))
                 {
                     ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166415))));
                 }
                 t__131190;
             }))
             );
    
}

//#line 672 "x10/regionarray/DistArray.x10"
/**
     * Return a DistArray that is defined over the same distribution
     * and backing storage as this DistArray instance, but is 
     * restricted to only allowing access to those points that are
     * contained in the argument region r.
     * 
     * @param r the Region to which to restrict the array
     */
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>*
  x10::regionarray::DistArray<TPMGL(T)>::__bar(::x10::regionarray::Region* r) {
    return this->x10::regionarray::template DistArray<TPMGL(T)>::restriction(
             r);
    
}

//#line 682 "x10/regionarray/DistArray.x10"
/**
     * Return a DistArray that is defined over the same distribution
     * and backing storage as this DistArray instance, but is 
     * restricted to only allowing access to those points that are
     * mapped by the defining distripution to the argument Place. 
     * 
     * @param p the Place to which to restrict the array
     */
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>*
  x10::regionarray::DistArray<TPMGL(T)>::__bar(::x10::lang::Place p) {
    return this->x10::regionarray::template DistArray<TPMGL(T)>::restriction(
             p);
    
}

//#line 696 "x10/regionarray/DistArray.x10"
/**
     * Returns the specified region of this array as a new Array object.
     * 
     * @param region the region of the array to copy to this array
     * @see Region#indexOf
     * @throws ArrayIndexOutOfBoundsException if the specified region is not
     *        contained in this array
     */
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>*
  x10::regionarray::DistArray<TPMGL(T)>::getPatch(::x10::regionarray::Region* r) {
    
    //#line 697 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::Region* regionHere = ::x10aux::nullCheck(this->FMGL(dist))->get(
                                               ::x10::lang::Place::_make(::x10aux::here));
    
    //#line 698 "x10/regionarray/DistArray.x10"
    if (!(::x10aux::nullCheck(regionHere)->FMGL(rect))) {
        
        //#line 699 "x10/regionarray/DistArray.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::UnsupportedOperationException::_make(::x10::lang::String::__plus((&::x10::regionarray::DistArray_Strings::sl__166416), regionHere))));
    }
    
    //#line 701 "x10/regionarray/DistArray.x10"
    if ((true && !(::x10aux::nullCheck(regionHere)->contains(
                     r)))) {
        
        //#line 702 "x10/regionarray/DistArray.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::ArrayIndexOutOfBoundsException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::DistArray_Strings::sl__166417), r), (&::x10::regionarray::DistArray_Strings::sl__166418)), regionHere))));
    }
    
    //#line 705 "x10/regionarray/DistArray.x10"
    ::x10::lang::Fun_0_1<x10_long, x10_long>* min = ::x10aux::nullCheck(regionHere)->min();
    
    //#line 706 "x10/regionarray/DistArray.x10"
    ::x10aux::nullCheck(regionHere)->max();
    
    //#line 707 "x10/regionarray/DistArray.x10"
    ::x10::lang::Rail< x10_long >* delta = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                    ::x10::regionarray::DistArray<TPMGL(T)>* this__132253 =
                                                                                      this;
                                                                                    (__extension__ ({
                                                                                        
                                                                                        //#line 67 "x10/regionarray/DistArray.x10"
                                                                                        ::x10::regionarray::Dist* this__132255 =
                                                                                          ::x10aux::nullCheck(this__132253)->FMGL(dist);
                                                                                        ::x10aux::nullCheck(::x10aux::nullCheck(this__132255)->FMGL(region))->FMGL(rank);
                                                                                    }))
                                                                                    ;
                                                                                }))
                                                                                ,
                                                                                reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_long> >(sizeof(x10_regionarray_DistArray__closure__5)))x10_regionarray_DistArray__closure__5(regionHere))));
    
    //#line 708 "x10/regionarray/DistArray.x10"
    ::x10::lang::Rail< TPMGL(T) >* patchRaw = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(::x10aux::nullCheck(r)->size(), false);
    
    //#line 709 "x10/regionarray/DistArray.x10"
    x10_long patchIndex = ((x10_long)0ll);
    
    //#line 710 "x10/regionarray/DistArray.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__131997;
        for (p__131997 = ::x10aux::nullCheck(r)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__131997));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__131997));
            
            //#line 711 "x10/regionarray/DistArray.x10"
            x10_long offset = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                  ((x10_long)0ll))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(min), 
              ((x10_long)0ll))));
            
            //#line 712 "x10/regionarray/DistArray.x10"
            {
                x10_long i;
                for (i = ((x10_long)1ll); ((i) < ((__extension__ ({
                                              ::x10::regionarray::DistArray<TPMGL(T)>* this__132257 =
                                                this;
                                              (__extension__ ({
                                                  
                                                  //#line 67 "x10/regionarray/DistArray.x10"
                                                  ::x10::regionarray::Dist* this__132259 =
                                                    ::x10aux::nullCheck(this__132257)->FMGL(dist);
                                                  ::x10aux::nullCheck(::x10aux::nullCheck(this__132259)->FMGL(region))->FMGL(rank);
                                              }))
                                              ;
                                          }))
                                          )); i = ((i) + (((x10_long)1ll))))
                {
                    
                    //#line 713 "x10/regionarray/DistArray.x10"
                    offset = ((((((offset) * (delta->x10::lang::template Rail< x10_long >::__apply(
                                                i)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                           i)))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(min), 
                      i)));
                }
            }
            
            //#line 715 "x10/regionarray/DistArray.x10"
            patchRaw->x10::lang::template Rail< TPMGL(T) >::__set(
              (__extension__ ({
                  x10_long pre__131307 = patchIndex;
                  patchIndex = ((patchIndex) + (((x10_long)1ll)));
                  pre__131307;
              }))
              , this->x10::regionarray::template DistArray<TPMGL(T)>::__apply(
                  p));
        }
    }
    
    //#line 717 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::Array<TPMGL(T)>* alloc__132375 = 
    (new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>());
    
    //#line 233 "x10/regionarray/Array.x10"
    alloc__132375->FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__132369 = r;
        if (!((!::x10aux::struct_equals(t__132369, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            if (true) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166409))));
            }
            
        }
        t__132369;
    }))
    ;
    alloc__132375->FMGL(rank) = ::x10aux::nullCheck(r)->FMGL(rank);
    alloc__132375->FMGL(rect) = ::x10aux::nullCheck(r)->FMGL(rect);
    alloc__132375->FMGL(zeroBased) = ::x10aux::nullCheck(r)->FMGL(zeroBased);
    alloc__132375->FMGL(rail) = ::x10aux::nullCheck(r)->FMGL(rail);
    alloc__132375->FMGL(size) = ::x10aux::nullCheck(r)->size();
    
    //#line 235 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__132370 =
       ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__132370)->::x10::regionarray::Array__LayoutHelper::_constructor(
      r);
    
    //#line 236 "x10/regionarray/Array.x10"
    alloc__132375->FMGL(layout_min0) = crh__132370->FMGL(min0);
    
    //#line 237 "x10/regionarray/Array.x10"
    alloc__132375->FMGL(layout_stride1) = crh__132370->FMGL(stride1);
    
    //#line 238 "x10/regionarray/Array.x10"
    alloc__132375->FMGL(layout_min1) = crh__132370->FMGL(min1);
    
    //#line 239 "x10/regionarray/Array.x10"
    alloc__132375->FMGL(layout) = crh__132370->FMGL(layout);
    
    //#line 240 "x10/regionarray/Array.x10"
    x10_long n__132371 = crh__132370->FMGL(size);
    
    //#line 241 "x10/regionarray/Array.x10"
    if (((n__132371) > ((x10_long)(::x10aux::nullCheck(patchRaw)->FMGL(size)))))
    {
        
        //#line 242 "x10/regionarray/Array.x10"
        if (true) {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::x10::regionarray::DistArray_Strings::sl__166410))));
        }
        
    }
    
    //#line 244 "x10/regionarray/Array.x10"
    alloc__132375->FMGL(raw) = (__extension__ ({
        ::x10::lang::Rail< TPMGL(T) >* t__132372 = patchRaw;
        if (!((!::x10aux::struct_equals(t__132372, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            if (true) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166411))));
            }
            
        }
        t__132372;
    }))
    ;
    
    //#line 717 "x10/regionarray/DistArray.x10"
    return alloc__132375;
    
}

//#line 725 "x10/regionarray/DistArray.x10"
/**
     * Fill all elements of the array to contain the argument value.
     * 
     * @param v the value with which to fill the array
     */
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::fill(
  TPMGL(T) v) {
    {
        
        //#line 726 "x10/regionarray/DistArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__132414 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* where__132001;
                    for (where__132001 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->places())->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(where__132001));
                         ) {
                        ::x10::lang::Place where = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(where__132001));
                        
                        //#line 727 "x10/regionarray/DistArray.x10"
                        ::x10::xrx::Runtime::runAsync(where,
                                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_regionarray_DistArray__closure__6<TPMGL(T)>)))x10_regionarray_DistArray__closure__6<TPMGL(T)>(this, v))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1533) {
            {
                ::x10::lang::CheckedThrowable* ct__132412 =
                  __exc1533;
                {
                    ::x10::xrx::Runtime::pushException(ct__132412);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__132414);
    }
}

//#line 747 "x10/regionarray/DistArray.x10"
/**
     * Map the function onto the elements of this array
     * constructing a new result array such that for all points <code>p</code>
     * in <code>this.dist</code>,
     * <code>result(p) == op(this(p))</code>.<p>
     * 
     * @param op the function to apply to each element of the array
     * @return a new array with the same distribution as this array where <code>result(p) == op(this(p))</code>
     */

//#line 774 "x10/regionarray/DistArray.x10"
/**
     * Map the given function onto the elements of this array
     * storing the results in the dst array such that for all points <code>p</code>
     * in <code>this.dist</code>,
     * <code>dst(p) == op(this(p))</code>.<p>
     * 
     * @param dst the destination array for the results of the map operation
     * @param op the function to apply to each element of the array
     * @return dst after applying the map operation.
     */

//#line 804 "x10/regionarray/DistArray.x10"
/**
     * Map the given function onto the elements of this array
     * storing the results in the dst array for the subset of points included
     * in the filter region such that for all points <code>p</code>
     * in <code>filter</code>,
     * <code>dst(p) == op(this(p))</code>.<p>
     * 
     * @param dst the destination array for the results of the map operation
     * @param op the function to apply to each element of the array
     * @param filter the region to use as a filter on the map operation
     * @return dst after applying the map operation.
     */

//#line 833 "x10/regionarray/DistArray.x10"
/**
     * Map the given function onto the elements of this array
     * and the other src array, storing the results in a new result array 
     * such that for all points <code>p</code> in <code>this.dist</code>,
     * <code>result(p) == op(this(p), src(p))</code>.<p>
     * 
     * @param src the other src array
     * @param op the function to apply to each element of the array
     * @return a new array with the same distribution as this array containing the result of the map
     */

//#line 862 "x10/regionarray/DistArray.x10"
/**
     * Map the given function onto the elements of this array
     * and the other src array, storing the results in the given dst array 
     * such that for all points <code>p</code> in <code>this.dist</code>,
     * <code>dst(p) == op(this(p), src(p))</code>.<p>
     * 
     * @param dst the destination array for the map operation
     * @param src the second source array for the map operation
     * @param op the function to apply to each element of the array
     * @return destination after applying the map operation.
     */

//#line 893 "x10/regionarray/DistArray.x10"
/**
     * Map the given function onto the elements of this array
     * and the other src array, storing the results in the given dst array 
     * such that for all points in the filter region <code>p</code> in <code>filter</code>,
     * <code>dst(p) == op(this(p), src(p))</code>.<p>
     * 
     * @param dst the destination array for the map operation
     * @param src the second source array for the map operation
     * @param op the function to apply to each element of the array
     * @param filter the region to use to select the subset of points to include in the map
     * @return destination after applying the map operation.
     */

//#line 925 "x10/regionarray/DistArray.x10"
/**
     * Reduce this array using the given function and the given initial value.
     * Each element of the array will be given as an argument to the reduction
     * function exactly once, but in an arbitrary order.  The reduction function
     * may be applied concurrently to implement a parallel reduction.
     * 
     * @param op the reduction function
     * @param unit the given initial value
     * @return the final result of the reduction.
     * @see #map((T)=>S)
     * @see #reduce((U,T)=>U,(U,U)=>U,U)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::DistArray<TPMGL(T)>::reduce(
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
  TPMGL(T) unit) {
    return this->template reduce< TPMGL(T) >(op, op, unit);
    
}

//#line 939 "x10/regionarray/DistArray.x10"
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
     * @see #map((T)=>S)
     */

//#line 967 "x10/regionarray/DistArray.x10"
/**
     * Update ghost data for every place in this DistArray.
     * This includes synchronization before and after the update.
     */
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::updateGhosts(
  ) {
    
    //#line 968 "x10/regionarray/DistArray.x10"
    if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(localHandle)->x10::lang::template PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::__apply())->FMGL(ghostManager),
                                  reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        {
            
            //#line 969 "x10/regionarray/DistArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__132467 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    {
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::regionarray::Dist* __lowerer__var__0__ =
                          ::x10::regionarray::Dist::makeUnique(
                            ::x10aux::nullCheck(this->FMGL(dist))->places());
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* __lowerer__var__1____132464;
                            for (__lowerer__var__1____132464 =
                                   ::x10aux::nullCheck(::x10aux::nullCheck(__lowerer__var__0__)->places())->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(__lowerer__var__1____132464));
                                 ) {
                                ::x10::lang::Place __lowerer__var__1__ =
                                  ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(__lowerer__var__1____132464));
                                ::x10::xrx::Runtime::runAsync(
                                  __lowerer__var__1__, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_regionarray_DistArray__closure__14<TPMGL(T)>)))x10_regionarray_DistArray__closure__14<TPMGL(T)>(this, __lowerer__var__0__))),
                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                    }
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc1548) {
                {
                    ::x10::lang::CheckedThrowable* ct__132465 =
                      __exc1548;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__132465);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__132467);
        }
    }
    
}

//#line 981 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::sendGhostsLocal(
  ) {
    
    //#line 982 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::GhostManager* ghostManager = ::x10aux::nullCheck(this->FMGL(localHandle)->x10::lang::template PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::__apply())->FMGL(ghostManager);
    
    //#line 983 "x10/regionarray/DistArray.x10"
    if ((!::x10aux::struct_equals(ghostManager, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 984 "x10/regionarray/DistArray.x10"
        ::x10aux::nullCheck(ghostManager)->sendGhosts(reinterpret_cast< ::x10::regionarray::Ghostable*>(this));
    }
    
}

//#line 992 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::waitForGhostsLocal(
  ) {
    
    //#line 993 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::GhostManager* ghostManager = ::x10aux::nullCheck(this->FMGL(localHandle)->x10::lang::template PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*>::__apply())->FMGL(ghostManager);
    
    //#line 994 "x10/regionarray/DistArray.x10"
    if ((!::x10aux::struct_equals(ghostManager, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 995 "x10/regionarray/DistArray.x10"
        ::x10aux::nullCheck(ghostManager)->waitOnGhosts();
    }
    
}

//#line 999 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::putOverlap(
  ::x10::regionarray::Region* overlap, ::x10::lang::Place neighborPlace,
  ::x10::lang::Point* shift, x10_byte phase) {
    
    //#line 1000 "x10/regionarray/DistArray.x10"
    if ((::x10aux::struct_equals((__extension__ ({
                                     ::x10::regionarray::DistArray<TPMGL(T)>* this__132310 =
                                       this;
                                     (__extension__ ({
                                         
                                         //#line 67 "x10/regionarray/DistArray.x10"
                                         ::x10::regionarray::Dist* this__132312 =
                                           ::x10aux::nullCheck(this__132310)->FMGL(dist);
                                         ::x10aux::nullCheck(::x10aux::nullCheck(this__132312)->FMGL(region))->FMGL(rank);
                                     }))
                                     ;
                                 }))
                                 , ((x10_long)3ll)))) {
        
        //#line 1001 "x10/regionarray/DistArray.x10"
        this->x10::regionarray::template DistArray<TPMGL(T)>::putOverlap3(
          (__extension__ ({
              ::x10::regionarray::Region* t__131317 = overlap;
              if (!((((::x10aux::struct_equals(::x10aux::nullCheck(t__131317)->FMGL(rect),
                                               true)) && (::x10aux::struct_equals(::x10aux::nullCheck(t__131317)->FMGL(rank),
                                                                                  ((x10_long)3ll)))) &&
                  (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this)->FMGL(dist))->FMGL(region))->FMGL(rank),
                                           ((x10_long)3ll))))))
              {
                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166419))));
              }
              t__131317;
          }))
          , neighborPlace, shift, phase);
    } else 
    //#line 1003 "x10/regionarray/DistArray.x10"
    if (!(::x10aux::nullCheck(overlap)->isEmpty())) {
        
        //#line 1004 "x10/regionarray/DistArray.x10"
        ::x10::lang::Place sourcePlace = ::x10::lang::Place::_make(::x10aux::here);
        
        //#line 1005 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* localRaw = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132314 =
              this;
            ::x10aux::nullCheck(this__132314)->FMGL(raw);
        }))
        ;
        
        //#line 1006 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* g = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132316 =
              this;
            ::x10aux::nullCheck(this__132316)->FMGL(localRegion);
        }))
        ;
        
        //#line 1007 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* neighborRegion = (__extension__ ({
            ::x10::regionarray::Region* t__131321 = ::x10aux::nullCheck(overlap)->__plus(
                                                      shift);
            if (!(((::x10aux::struct_equals(::x10aux::nullCheck(t__131321)->FMGL(rect),
                                            true)) && (::x10aux::struct_equals(::x10aux::nullCheck(t__131321)->FMGL(rank),
                                                                               ::x10aux::nullCheck(overlap)->FMGL(rank))))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166420))));
            }
            t__131321;
        }))
        ;
        
        //#line 1008 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* neighborPortionRaw =
          ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(::x10aux::nullCheck(neighborRegion)->size(), false);
        
        //#line 1009 "x10/regionarray/DistArray.x10"
        x10_long offset = ((x10_long)0ll);
        
        //#line 1010 "x10/regionarray/DistArray.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__132027;
            for (p__132027 = ::x10aux::nullCheck(overlap)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__132027));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__132027));
                
                //#line 1011 "x10/regionarray/DistArray.x10"
                neighborPortionRaw->x10::lang::template Rail< TPMGL(T) >::__set(
                  (__extension__ ({
                      x10_long pre__131323 = offset;
                      offset = ((offset) + (((x10_long)1ll)));
                      pre__131323;
                  }))
                  , localRaw->x10::lang::template Rail< TPMGL(T) >::__apply(
                      ::x10aux::nullCheck(g)->indexOf(p)));
            }
        }
        
        //#line 1013 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Array<TPMGL(T)>* neighborPortion =
           (new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>());
        
        //#line 233 "x10/regionarray/Array.x10"
        neighborPortion->FMGL(region) = (__extension__ ({
            ::x10::regionarray::Region* t__132383 = neighborRegion;
            if (!((!::x10aux::struct_equals(t__132383, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                if (true) {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166409))));
                }
                
            }
            t__132383;
        }))
        ;
        neighborPortion->FMGL(rank) = ::x10aux::nullCheck(neighborRegion)->FMGL(rank);
        neighborPortion->FMGL(rect) = ::x10aux::nullCheck(neighborRegion)->FMGL(rect);
        neighborPortion->FMGL(zeroBased) = ::x10aux::nullCheck(neighborRegion)->FMGL(zeroBased);
        neighborPortion->FMGL(rail) = ::x10aux::nullCheck(neighborRegion)->FMGL(rail);
        neighborPortion->FMGL(size) = ::x10aux::nullCheck(neighborRegion)->size();
        
        //#line 235 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array__LayoutHelper crh__132384 =
           ::x10::regionarray::Array__LayoutHelper::_alloc();
        (crh__132384)->::x10::regionarray::Array__LayoutHelper::_constructor(
          neighborRegion);
        
        //#line 236 "x10/regionarray/Array.x10"
        neighborPortion->FMGL(layout_min0) = crh__132384->FMGL(min0);
        
        //#line 237 "x10/regionarray/Array.x10"
        neighborPortion->FMGL(layout_stride1) = crh__132384->FMGL(stride1);
        
        //#line 238 "x10/regionarray/Array.x10"
        neighborPortion->FMGL(layout_min1) = crh__132384->FMGL(min1);
        
        //#line 239 "x10/regionarray/Array.x10"
        neighborPortion->FMGL(layout) = crh__132384->FMGL(layout);
        
        //#line 240 "x10/regionarray/Array.x10"
        x10_long n__132385 = crh__132384->FMGL(size);
        
        //#line 241 "x10/regionarray/Array.x10"
        if (((n__132385) > ((x10_long)(::x10aux::nullCheck(neighborPortionRaw)->FMGL(size)))))
        {
            
            //#line 242 "x10/regionarray/Array.x10"
            if (true) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::x10::regionarray::DistArray_Strings::sl__166410))));
            }
            
        }
        
        //#line 244 "x10/regionarray/Array.x10"
        neighborPortion->FMGL(raw) = (__extension__ ({
            ::x10::lang::Rail< TPMGL(T) >* t__132386 = neighborPortionRaw;
            if (!((!::x10aux::struct_equals(t__132386, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                if (true) {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166411))));
                }
                
            }
            t__132386;
        }))
        ;
        
        //#line 1014 "x10/regionarray/DistArray.x10"
        ::x10::xrx::Runtime::runAsync(neighborPlace, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_regionarray_DistArray__closure__16<TPMGL(T)>)))x10_regionarray_DistArray__closure__16<TPMGL(T)>(this, phase, neighborPortion, sourcePlace, shift))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}

//#line 1025 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::putOverlap3(
  ::x10::regionarray::Region* overlap, ::x10::lang::Place neighborPlace,
  ::x10::lang::Point* shift, x10_byte phase) {
    
    //#line 1026 "x10/regionarray/DistArray.x10"
    if (!(::x10aux::nullCheck(overlap)->isEmpty())) {
        
        //#line 1027 "x10/regionarray/DistArray.x10"
        ::x10::lang::Place sourcePlace = ::x10::lang::Place::_make(::x10aux::here);
        
        //#line 1028 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* localRaw = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132326 =
              this;
            ::x10aux::nullCheck(this__132326)->FMGL(raw);
        }))
        ;
        
        //#line 1029 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* g = (__extension__ ({
            ::x10::regionarray::DistArray<TPMGL(T)>* this__132328 =
              this;
            ::x10aux::nullCheck(this__132328)->FMGL(localRegion);
        }))
        ;
        
        //#line 1030 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Region* neighborRegion = (__extension__ ({
            ::x10::regionarray::Region* t__131336 = ::x10aux::nullCheck(overlap)->__plus(
                                                      shift);
            if (!((((::x10aux::struct_equals(::x10aux::nullCheck(t__131336)->FMGL(rect),
                                             true)) && (::x10aux::struct_equals(::x10aux::nullCheck(t__131336)->FMGL(rank),
                                                                                ((x10_long)3ll)))) &&
                (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this)->FMGL(dist))->FMGL(region))->FMGL(rank),
                                         ((x10_long)3ll))))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166419))));
            }
            t__131336;
        }))
        ;
        
        //#line 1031 "x10/regionarray/DistArray.x10"
        ::x10::lang::Rail< TPMGL(T) >* neighborPortionRaw =
          ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(::x10aux::nullCheck(neighborRegion)->size(), false);
        
        //#line 1032 "x10/regionarray/DistArray.x10"
        x10_long offset = ((x10_long)0ll);
        
        //#line 1033 "x10/regionarray/DistArray.x10"
        x10_long k__132030min__132395 = ::x10aux::nullCheck(overlap)->min(
                                          ((x10_long)2ll));
        x10_long k__132030max__132396 = ::x10aux::nullCheck(overlap)->max(
                                          ((x10_long)2ll));
        x10_long j__132049min__132397 = ::x10aux::nullCheck(overlap)->min(
                                          ((x10_long)1ll));
        x10_long j__132049max__132398 = ::x10aux::nullCheck(overlap)->max(
                                          ((x10_long)1ll));
        x10_long i__132068min__132399 = ::x10aux::nullCheck(overlap)->min(
                                          ((x10_long)0ll));
        x10_long i__132068max__132400 = ::x10aux::nullCheck(overlap)->max(
                                          ((x10_long)0ll));
        {
            x10_long i__132401;
            for (i__132401 = i__132068min__132399; ((i__132401) <= (i__132068max__132400));
                 i__132401 = ((i__132401) + (((x10_long)1ll))))
            {
                {
                    x10_long j__132403;
                    for (j__132403 = j__132049min__132397;
                         ((j__132403) <= (j__132049max__132398));
                         j__132403 = ((j__132403) + (((x10_long)1ll))))
                    {
                        {
                            x10_long k__132405;
                            for (k__132405 = k__132030min__132395;
                                 ((k__132405) <= (k__132030max__132396));
                                 k__132405 = ((k__132405) + (((x10_long)1ll))))
                            {
                                
                                //#line 1034 "x10/regionarray/DistArray.x10"
                                neighborPortionRaw->x10::lang::template Rail< TPMGL(T) >::__set(
                                  (__extension__ ({
                                      x10_long pre__132389 =
                                        offset;
                                      offset = ((offset) + (((x10_long)1ll)));
                                      pre__132389;
                                  }))
                                  , localRaw->x10::lang::template Rail< TPMGL(T) >::__apply(
                                      ::x10aux::nullCheck(g)->indexOf(
                                        i__132401, j__132403,
                                        k__132405)));
                            }
                        }
                        
                    }
                }
                
            }
        }
        
        //#line 1036 "x10/regionarray/DistArray.x10"
        ::x10::regionarray::Array<TPMGL(T)>* neighborPortion =
           (new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>());
        
        //#line 233 "x10/regionarray/Array.x10"
        neighborPortion->FMGL(region) = (__extension__ ({
            ::x10::regionarray::Region* t__132390 = neighborRegion;
            if (!((!::x10aux::struct_equals(t__132390, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                if (true) {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166409))));
                }
                
            }
            t__132390;
        }))
        ;
        neighborPortion->FMGL(rank) = ::x10aux::nullCheck(neighborRegion)->FMGL(rank);
        neighborPortion->FMGL(rect) = ::x10aux::nullCheck(neighborRegion)->FMGL(rect);
        neighborPortion->FMGL(zeroBased) = ::x10aux::nullCheck(neighborRegion)->FMGL(zeroBased);
        neighborPortion->FMGL(rail) = ::x10aux::nullCheck(neighborRegion)->FMGL(rail);
        neighborPortion->FMGL(size) = ::x10aux::nullCheck(neighborRegion)->size();
        
        //#line 235 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array__LayoutHelper crh__132391 =
           ::x10::regionarray::Array__LayoutHelper::_alloc();
        (crh__132391)->::x10::regionarray::Array__LayoutHelper::_constructor(
          neighborRegion);
        
        //#line 236 "x10/regionarray/Array.x10"
        neighborPortion->FMGL(layout_min0) = crh__132391->FMGL(min0);
        
        //#line 237 "x10/regionarray/Array.x10"
        neighborPortion->FMGL(layout_stride1) = crh__132391->FMGL(stride1);
        
        //#line 238 "x10/regionarray/Array.x10"
        neighborPortion->FMGL(layout_min1) = crh__132391->FMGL(min1);
        
        //#line 239 "x10/regionarray/Array.x10"
        neighborPortion->FMGL(layout) = crh__132391->FMGL(layout);
        
        //#line 240 "x10/regionarray/Array.x10"
        x10_long n__132392 = crh__132391->FMGL(size);
        
        //#line 241 "x10/regionarray/Array.x10"
        if (((n__132392) > ((x10_long)(::x10aux::nullCheck(neighborPortionRaw)->FMGL(size)))))
        {
            
            //#line 242 "x10/regionarray/Array.x10"
            if (true) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::x10::regionarray::DistArray_Strings::sl__166410))));
            }
            
        }
        
        //#line 244 "x10/regionarray/Array.x10"
        neighborPortion->FMGL(raw) = (__extension__ ({
            ::x10::lang::Rail< TPMGL(T) >* t__132393 = neighborPortionRaw;
            if (!((!::x10aux::struct_equals(t__132393, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                if (true) {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::DistArray_Strings::sl__166411))));
                }
                
            }
            t__132393;
        }))
        ;
        
        //#line 1037 "x10/regionarray/DistArray.x10"
        ::x10::xrx::Runtime::runAsync(neighborPlace, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_regionarray_DistArray__closure__17<TPMGL(T)>)))x10_regionarray_DistArray__closure__17<TPMGL(T)>(this, phase, neighborPortion, sourcePlace, shift))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}

//#line 1048 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> ::x10::lang::String* x10::regionarray::DistArray<TPMGL(T)>::toString(
  ) {
    
    //#line 1049 "x10/regionarray/DistArray.x10"
    return ::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::DistArray_Strings::sl__166423), this->FMGL(dist)), (&::x10::regionarray::DistArray_Strings::sl__166424));
    
}

//#line 1058 "x10/regionarray/DistArray.x10"
/**
     * Return an iterator over the points in the region of this array.
     *
     * @return an iterator over the points in the region of this array.
     * @see x10.lang.Iterable[T]#iterator()
     */
template<class TPMGL(T)> ::x10::lang::Iterator< ::x10::lang::Point*>*
  x10::regionarray::DistArray<TPMGL(T)>::iterator() {
    return ::x10aux::nullCheck((__extension__ ({
               ::x10::regionarray::DistArray<TPMGL(T)>* this__132338 =
                 this;
               ::x10aux::nullCheck(::x10aux::nullCheck(this__132338)->FMGL(dist))->FMGL(region);
           }))
           )->iterator();
    
}

//#line 1060 "x10/regionarray/DistArray.x10"

//#line 1063 "x10/regionarray/DistArray.x10"

//#line 1066 "x10/regionarray/DistArray.x10"

//#line 1069 "x10/regionarray/DistArray.x10"

//#line 1072 "x10/regionarray/DistArray.x10"

//#line 45 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>*
  x10::regionarray::DistArray<TPMGL(T)>::x10__regionarray__DistArray____this__x10__regionarray__DistArray(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::__fieldInitializers_x10_regionarray_DistArray(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::regionarray::DistArray<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::regionarray::DistArray<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(localHandle));
    buf.write(this->FMGL(dist));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::regionarray::DistArray<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::regionarray::DistArray<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::regionarray::DistArray<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(localHandle) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*> >();
    FMGL(dist) = buf.read< ::x10::regionarray::Dist*>();
    /* fields with @TransientInitExpr annotations */
    FMGL(raw) = x10::regionarray::template DistArray<TPMGL(T)>::getRawFromLocalHandle();
    FMGL(localRegion) = x10::regionarray::template DistArray<TPMGL(T)>::getLocalRegionFromLocalHandle();
    
}

template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>*
  x10::regionarray::DistArray<void>::make(::x10::regionarray::Dist* dist) {
    
    //#line 156 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::DistArray<TPMGL(T)>* alloc__132351 =
       (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>());
    
    //#line 169 "x10/regionarray/DistArray.x10"
    (alloc__132351)->::x10::regionarray::DistArray<TPMGL(T)>::_constructor(
      dist, ((x10_long)0ll), false);
    
    //#line 156 "x10/regionarray/DistArray.x10"
    return alloc__132351;
    
}
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>*
  x10::regionarray::DistArray<void>::make(::x10::regionarray::Dist* dist,
                                          x10_long ghostWidth,
                                          x10_boolean periodic) {
    
    //#line 166 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::DistArray<TPMGL(T)>* alloc__132352 =
       (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>());
    (alloc__132352)->::x10::regionarray::DistArray<TPMGL(T)>::_constructor(
      dist, ghostWidth, periodic);
    return alloc__132352;
    
}
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>*
  x10::regionarray::DistArray<void>::make(::x10::regionarray::Dist* dist,
                                          ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init) {
    
    //#line 208 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::DistArray<TPMGL(T)>* alloc__132355 =
       (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>());
    (alloc__132355)->::x10::regionarray::DistArray<TPMGL(T)>::_constructor(
      dist, init, ((x10_long)0ll), false);
    return alloc__132355;
    
}
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>*
  x10::regionarray::DistArray<void>::make(::x10::regionarray::Dist* dist,
                                          ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init,
                                          x10_long ghostWidth,
                                          x10_boolean periodic) {
    
    //#line 228 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::DistArray<TPMGL(T)>* alloc__132356 =
       (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>());
    (alloc__132356)->::x10::regionarray::DistArray<TPMGL(T)>::_constructor(
      dist, init, ghostWidth, periodic);
    return alloc__132356;
    
}
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>*
  x10::regionarray::DistArray<void>::make(::x10::regionarray::Dist* dist,
                                          TPMGL(T) init) {
    
    //#line 264 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::DistArray<TPMGL(T)>* alloc__132359 =
       (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>());
    (alloc__132359)->::x10::regionarray::DistArray<TPMGL(T)>::_constructor(
      dist, init, ((x10_long)0ll), false);
    return alloc__132359;
    
}
template<class TPMGL(T)> ::x10::regionarray::DistArray<TPMGL(T)>*
  x10::regionarray::DistArray<void>::make(::x10::regionarray::Dist* dist,
                                          TPMGL(T) init, x10_long ghostWidth,
                                          x10_boolean periodic) {
    
    //#line 277 "x10/regionarray/DistArray.x10"
    ::x10::regionarray::DistArray<TPMGL(T)>* alloc__132360 =
       (new (::x10aux::alloc_z< ::x10::regionarray::DistArray<TPMGL(T)> >()) ::x10::regionarray::DistArray<TPMGL(T)>());
    (alloc__132360)->::x10::regionarray::DistArray<TPMGL(T)>::_constructor(
      dist, init, ghostWidth, periodic);
    return alloc__132360;
    
}
#endif // X10_REGIONARRAY_DISTARRAY_H_IMPLEMENTATION
#endif // __X10_REGIONARRAY_DISTARRAY_H_NODEPS
