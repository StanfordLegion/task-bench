#ifndef __X10_REGIONARRAY_ARRAY_H
#define __X10_REGIONARRAY_ARRAY_H

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
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace regionarray { 
class Array__LayoutHelper;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace regionarray { 
class RectRegion1D;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class RemoteArray;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array__Anonymous__14235;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array__Anonymous__14520;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRail;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class Array_Strings {
  public:
    static ::x10::lang::String sl__165717;
    static ::x10::lang::String sl__165730;
    static ::x10::lang::String sl__165723;
    static ::x10::lang::String sl__165727;
    static ::x10::lang::String sl__165718;
    static ::x10::lang::String sl__165729;
    static ::x10::lang::String sl__165713;
    static ::x10::lang::String sl__165714;
    static ::x10::lang::String sl__165721;
    static ::x10::lang::String sl__165722;
    static ::x10::lang::String sl__165725;
    static ::x10::lang::String sl__165726;
    static ::x10::lang::String sl__165716;
    static ::x10::lang::String sl__165724;
    static ::x10::lang::String sl__165731;
    static ::x10::lang::String sl__165733;
    static ::x10::lang::String sl__165712;
    static ::x10::lang::String sl__165719;
    static ::x10::lang::String sl__165728;
    static ::x10::lang::String sl__165715;
    static ::x10::lang::String sl__165732;
    static ::x10::lang::String sl__165720;
};

template<class TPMGL(T)> class Array;
template <> class Array<void>;
template<class TPMGL(T)> class Array : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::regionarray::Region* FMGL(region);
    
    x10_long FMGL(rank);
    
    x10_boolean FMGL(rect);
    
    x10_boolean FMGL(zeroBased);
    
    x10_boolean FMGL(rail);
    
    x10_long FMGL(size);
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::template itable< ::x10::regionarray::Array<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::Array<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Iterable< ::x10::lang::Point*>::template itable< ::x10::regionarray::Array<TPMGL(T)> > _itable_2;
    
    ::x10::lang::Rail< TPMGL(T) >* FMGL(raw);
    
    virtual ::x10::lang::Rail< TPMGL(T) >* raw();
    void _constructor(::x10::regionarray::Region* reg);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::regionarray::Region* reg);
    
    void _constructor(x10_boolean zeroed, ::x10::regionarray::Region* reg);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(x10_boolean zeroed,
                                                      ::x10::regionarray::Region* reg);
    
    void _constructor(::x10::regionarray::Region* reg, ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::regionarray::Region* reg,
                                                      ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init);
    
    void _constructor(::x10::regionarray::Region* reg, TPMGL(T) init);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::regionarray::Region* reg,
                                                      TPMGL(T) init);
    
    void _constructor(::x10::regionarray::Region* reg, ::x10::lang::Rail< TPMGL(T) >* backingStore);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::regionarray::Region* reg,
                                                      ::x10::lang::Rail< TPMGL(T) >* backingStore);
    
    void _constructor(::x10::lang::Rail< TPMGL(T) >* backingStore);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::lang::Rail< TPMGL(T) >* backingStore);
    
    void _constructor(x10_long size);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(x10_long size);
    
    void _constructor(x10_boolean zeroed, x10_long size);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(x10_boolean zeroed,
                                                      x10_long size);
    
    void _constructor(x10_long size, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(x10_long size,
                                                      ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init);
    
    void _constructor(x10_long size, TPMGL(T) init);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(x10_long size,
                                                      TPMGL(T) init);
    
    void _constructor(::x10::regionarray::Array<TPMGL(T)>* init);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::regionarray::Array<TPMGL(T)>* init);
    
    void _constructor(::x10::regionarray::RemoteArray<TPMGL(T)>* init);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::regionarray::RemoteArray<TPMGL(T)>* init);
    
    virtual ::x10::lang::String* toString();
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator(
      );
    virtual ::x10::lang::Iterable<TPMGL(T)>* values();
    virtual TPMGL(T) __apply(x10_long i0);
    virtual TPMGL(T) __apply(x10_long i0, x10_long i1);
    virtual TPMGL(T) __apply(x10_long i0, x10_long i1, x10_long i2);
    virtual TPMGL(T) __apply(x10_long i0, x10_long i1, x10_long i2,
                             x10_long i3);
    virtual TPMGL(T) __apply(::x10::lang::Point* pt);
    virtual TPMGL(T) __set(x10_long i0, TPMGL(T) v);
    virtual TPMGL(T) __set(x10_long i0, x10_long i1, TPMGL(T) v);
    virtual TPMGL(T) __set(x10_long i0, x10_long i1, x10_long i2,
                           TPMGL(T) v);
    virtual TPMGL(T) __set(x10_long i0, x10_long i1, x10_long i2,
                           x10_long i3, TPMGL(T) v);
    virtual TPMGL(T) __set(::x10::lang::Point* p, TPMGL(T) v);
    virtual void fill(TPMGL(T) v);
    virtual void clear();
    template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
      map(::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
      map(::x10::regionarray::Array<TPMGL(U)>* dst, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
      map(::x10::regionarray::Array<TPMGL(U)>* dst, ::x10::regionarray::Region* filter,
          ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(S), class TPMGL(U)> ::x10::regionarray::Array<TPMGL(S)>*
      map(::x10::regionarray::Array<TPMGL(U)>* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op);
    template<class TPMGL(S), class TPMGL(U)> ::x10::regionarray::Array<TPMGL(S)>*
      map(::x10::regionarray::Array<TPMGL(S)>* dst, ::x10::regionarray::Array<TPMGL(U)>* src,
          ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op);
    template<class TPMGL(S), class TPMGL(U)> ::x10::regionarray::Array<TPMGL(S)>*
      map(::x10::regionarray::Array<TPMGL(S)>* dst, ::x10::regionarray::Array<TPMGL(U)>* src,
          ::x10::regionarray::Region* filter, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op);
    template<class TPMGL(U)> TPMGL(U) reduce(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
                                             TPMGL(U) unit);
    template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
      scan(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
           TPMGL(U) unit);
    template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
      scan(::x10::regionarray::Array<TPMGL(U)>* dst, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
           TPMGL(U) unit);
    virtual void copy(::x10::regionarray::Array<TPMGL(T)>* src,
                      ::x10::regionarray::Region* r);
    void copy3(::x10::regionarray::Array<TPMGL(T)>* src, ::x10::regionarray::Region* r);
    x10_long FMGL(layout_min0);
    
    x10_long FMGL(layout_stride1);
    
    x10_long FMGL(layout_min1);
    
    ::x10::lang::Rail< x10_long >* FMGL(layout);
    
    x10_long offset(x10_long i0);
    x10_long offset(x10_long i0, x10_long i1);
    x10_long offset(x10_long i0, x10_long i1, x10_long i2);
    x10_long offset(x10_long i0, x10_long i1, x10_long i2,
                    x10_long i3);
    x10_long offset(::x10::lang::Point* pt);
    virtual ::x10::regionarray::Array<TPMGL(T)>* x10__regionarray__Array____this__x10__regionarray__Array(
      );
    virtual void __fieldInitializers_x10_regionarray_Array(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::regionarray::Array<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::regionarray::Array<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Iterable< ::x10::lang::Point*> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.regionarray.Array";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class Array<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static void asyncCopy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                   ::x10::regionarray::RemoteArray<TPMGL(T)>* dst);
    
    template<class TPMGL(T)> static void asyncCopy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                   ::x10::lang::Point* srcPoint,
                                                   ::x10::regionarray::RemoteArray<TPMGL(T)>* dst,
                                                   ::x10::lang::Point* dstPoint,
                                                   x10_long numElems);
    
    template<class TPMGL(T)> static void asyncCopy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                   x10_long srcIndex,
                                                   ::x10::regionarray::RemoteArray<TPMGL(T)>* dst,
                                                   x10_long dstIndex,
                                                   x10_long numElems);
    
    template<class TPMGL(T)> static void asyncCopy(::x10::regionarray::RemoteArray<TPMGL(T)>* src,
                                                   ::x10::regionarray::Array<TPMGL(T)>* dst);
    
    template<class TPMGL(T)> static void asyncCopy(::x10::regionarray::RemoteArray<TPMGL(T)>* src,
                                                   ::x10::lang::Point* srcPoint,
                                                   ::x10::regionarray::Array<TPMGL(T)>* dst,
                                                   ::x10::lang::Point* dstPoint,
                                                   x10_long numElems);
    
    template<class TPMGL(T)> static void asyncCopy(::x10::regionarray::RemoteArray<TPMGL(T)>* src,
                                                   x10_long srcIndex,
                                                   ::x10::regionarray::Array<TPMGL(T)>* dst,
                                                   x10_long dstIndex,
                                                   x10_long numElems);
    
    template<class TPMGL(T)> static void copy(::x10::regionarray::Array<TPMGL(T)>* src,
                                              ::x10::regionarray::Array<TPMGL(T)>* dst);
    
    template<class TPMGL(T)> static void copy(::x10::regionarray::Array<TPMGL(T)>* src,
                                              ::x10::lang::Point* srcPoint,
                                              ::x10::regionarray::Array<TPMGL(T)>* dst,
                                              ::x10::lang::Point* dstPoint,
                                              x10_long numElems);
    
    template<class TPMGL(T)> static void copy(::x10::regionarray::Array<TPMGL(T)>* src,
                                              x10_long srcIndex,
                                              ::x10::regionarray::Array<TPMGL(T)>* dst,
                                              x10_long dstIndex,
                                              x10_long numElems);
    
    static void raiseBoundsError(x10_long i0) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(x10_long i0, x10_long i1) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(x10_long i0, x10_long i1,
                                 x10_long i2) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(x10_long i0, x10_long i1,
                                 x10_long i2, x10_long i3) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(::x10::lang::Point* pt) X10_PRAGMA_NORETURN ;
    
    
};

} } 
#endif // X10_REGIONARRAY_ARRAY_H

namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 

#ifndef X10_REGIONARRAY_ARRAY_H_NODEPS
#define X10_REGIONARRAY_ARRAY_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Point.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/regionarray/Region.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/regionarray/Array__LayoutHelper.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/regionarray/RectRegion1D.h>
#include <x10/regionarray/RemoteArray.h>
#include <x10/lang/GlobalRef.h>
#include <x10/lang/String.h>
#include <x10/util/StringBuilder.h>
#include <x10/regionarray/Array__Anonymous__14235.h>
#include <x10/regionarray/Array__Anonymous__14520.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/GlobalRail.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/compiler/NoInline.h>
#include <x10/compiler/NoReturn.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_REGIONARRAY_ARRAY_H_GENERICS
#define X10_REGIONARRAY_ARRAY_H_GENERICS
#ifndef X10_REGIONARRAY_ARRAY_H_map_1387
#define X10_REGIONARRAY_ARRAY_H_map_1387
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::map(::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 685 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array<TPMGL(U)>* alloc__125743 =  (new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(U)> >()) ::x10::regionarray::Array<TPMGL(U)>());
    ::x10::regionarray::Region* reg__125742 = this->FMGL(region);
    
    //#line 174 "x10/regionarray/Array.x10"
    alloc__125743->FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125729 = reg__125742;
        if (!((!::x10aux::struct_equals(t__125729, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            if (true) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165712))));
            }
            
        }
        t__125729;
    }))
    ;
    alloc__125743->FMGL(rank) = ::x10aux::nullCheck(reg__125742)->FMGL(rank);
    alloc__125743->FMGL(rect) = ::x10aux::nullCheck(reg__125742)->FMGL(rect);
    alloc__125743->FMGL(zeroBased) = ::x10aux::nullCheck(reg__125742)->FMGL(zeroBased);
    alloc__125743->FMGL(rail) = ::x10aux::nullCheck(reg__125742)->FMGL(rail);
    alloc__125743->FMGL(size) = ::x10aux::nullCheck(reg__125742)->size();
    
    //#line 175 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__125730 =
       ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__125730)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__125742);
    
    //#line 176 "x10/regionarray/Array.x10"
    alloc__125743->FMGL(layout_min0) = crh__125730->FMGL(min0);
    
    //#line 177 "x10/regionarray/Array.x10"
    alloc__125743->FMGL(layout_stride1) = crh__125730->FMGL(stride1);
    
    //#line 178 "x10/regionarray/Array.x10"
    alloc__125743->FMGL(layout_min1) = crh__125730->FMGL(min1);
    
    //#line 179 "x10/regionarray/Array.x10"
    alloc__125743->FMGL(layout) = crh__125730->FMGL(layout);
    
    //#line 180 "x10/regionarray/Array.x10"
    x10_long n__125731 = crh__125730->FMGL(size);
    
    //#line 181 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(U) >* r__125732 = ::x10::lang::Rail< TPMGL(U) >::_makeUnsafe(n__125731, false);
    
    //#line 182 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__125733;
        for (p__125733 = ::x10aux::nullCheck(reg__125742)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__125733));
             ) {
            ::x10::lang::Point* p__125734 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__125733));
            
            //#line 183 "x10/regionarray/Array.x10"
            r__125732->x10::lang::template Rail< TPMGL(U) >::__set(
              (__extension__ ({
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__125736 = ((::x10aux::nullCheck(p__125734)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (alloc__125743->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p__125734)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__125736 = ((((((offset__125736) * (alloc__125743->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125734)->x10::lang::Point::__apply(
                                                                                                            ((x10_long)1ll))))) - (alloc__125743->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124660max__125723 = ((::x10aux::nullCheck(p__125734)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125724;
                          for (i__125724 = ((x10_long)2ll);
                               ((i__125724) <= (i__124660max__125723));
                               i__125724 = ((i__125724) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__125736 = ((((((offset__125736) * (::x10aux::nullCheck(alloc__125743->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125724) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125734)->x10::lang::Point::__apply(
                                                                                                                                             i__125724)))) - (::x10aux::nullCheck(alloc__125743->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125724) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__125736;
              }))
              , ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                (__extension__ ({
                    
                    //#line 685 "x10/regionarray/Array.x10"
                    ::x10::regionarray::Array<TPMGL(T)>* this__125738 =
                      this;
                    
                    //#line 524 "x10/regionarray/Array.x10"
                    if ((true && !(::x10aux::nullCheck(this__125738)->FMGL(region)->contains(
                                     p__125734)))) {
                        
                        //#line 525 "x10/regionarray/Array.x10"
                        ::x10::regionarray::Array<void>::raiseBoundsError(
                          p__125734);
                    }
                    ::x10aux::nullCheck(this__125738)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                      (__extension__ ({
                          
                          //#line 1315 "x10/regionarray/Array.x10"
                          x10_long offset__125741 = ((::x10aux::nullCheck(p__125734)->x10::lang::Point::__apply(
                                                        ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125738)->FMGL(layout_min0)));
                          
                          //#line 1316 "x10/regionarray/Array.x10"
                          if (((::x10aux::nullCheck(p__125734)->FMGL(rank)) > (((x10_long)1ll))))
                          {
                              
                              //#line 1317 "x10/regionarray/Array.x10"
                              offset__125741 = ((((((offset__125741) * (::x10aux::nullCheck(this__125738)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125734)->x10::lang::Point::__apply(
                                                                                                                                        ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125738)->FMGL(layout_min1)));
                              
                              //#line 1318 "x10/regionarray/Array.x10"
                              x10_long i__124660max__125726 =
                                ((::x10aux::nullCheck(p__125734)->FMGL(rank)) - (((x10_long)1ll)));
                              {
                                  x10_long i__125727;
                                  for (i__125727 = ((x10_long)2ll);
                                       ((i__125727) <= (i__124660max__125726));
                                       i__125727 = ((i__125727) + (((x10_long)1ll))))
                                  {
                                      
                                      //#line 1319 "x10/regionarray/Array.x10"
                                      offset__125741 = ((((((offset__125741) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125738)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                  ((((x10_long)2ll)) * (((i__125727) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125734)->x10::lang::Point::__apply(
                                                                                                                                                     i__125727)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125738)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                        ((((((x10_long)2ll)) * (((i__125727) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                  }
                              }
                              
                          }
                          offset__125741;
                      }))
                      );
                }))
                ));
        }
    }
    
    //#line 185 "x10/regionarray/Array.x10"
    alloc__125743->FMGL(raw) = r__125732;
    
    //#line 685 "x10/regionarray/Array.x10"
    return alloc__125743;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1387
#ifndef X10_REGIONARRAY_ARRAY_H_map_1388
#define X10_REGIONARRAY_ARRAY_H_map_1388
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::map(::x10::regionarray::Array<TPMGL(U)>* dst,
                                         ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 704 "x10/regionarray/Array.x10"
    if (this->FMGL(rect)) {
        
        //#line 708 "x10/regionarray/Array.x10"
        ::x10::lang::Rail< TPMGL(T) >* src__125748 = this->FMGL(raw);
        ::x10::lang::Rail< TPMGL(U) >* dst__125749 = ::x10aux::nullCheck(dst)->FMGL(raw);
        
        //#line 180 "x10/util/RailUtils.x10"
        x10_long i__96546max__125745 = (x10_long)(::x10aux::nullCheck(src__125748)->FMGL(size));
        {
            x10_long i__125746;
            for (i__125746 = ((x10_long)0ll); ((i__125746) < (i__96546max__125745));
                 i__125746 = ((i__125746) + (((x10_long)1ll))))
            {
                
                //#line 181 "x10/util/RailUtils.x10"
                ::x10aux::nullCheck(dst__125749)->x10::lang::template Rail< TPMGL(U) >::__set(
                  i__125746, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                    ::x10aux::nullCheck(src__125748)->x10::lang::template Rail< TPMGL(T) >::__apply(
                      i__125746)));
            }
        }
        
        //#line 709 "x10/regionarray/Array.x10"
        return dst;
        
    } else {
        
        //#line 711 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124513;
            for (p__124513 = this->FMGL(region)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124513));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124513));
                
                //#line 712 "x10/regionarray/Array.x10"
                TPMGL(U) v__125758 = ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                  (__extension__ ({
                      ::x10::regionarray::Array<TPMGL(T)>* this__125759 =
                        this;
                      
                      //#line 524 "x10/regionarray/Array.x10"
                      if ((true && !(::x10aux::nullCheck(this__125759)->FMGL(region)->contains(
                                       p)))) {
                          
                          //#line 525 "x10/regionarray/Array.x10"
                          ::x10::regionarray::Array<void>::raiseBoundsError(
                            p);
                      }
                      ::x10aux::nullCheck(this__125759)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                        (__extension__ ({
                            
                            //#line 1315 "x10/regionarray/Array.x10"
                            x10_long offset__125762 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                          ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125759)->FMGL(layout_min0)));
                            
                            //#line 1316 "x10/regionarray/Array.x10"
                            if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                            {
                                
                                //#line 1317 "x10/regionarray/Array.x10"
                                offset__125762 = ((((((offset__125762) * (::x10aux::nullCheck(this__125759)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                          ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125759)->FMGL(layout_min1)));
                                
                                //#line 1318 "x10/regionarray/Array.x10"
                                x10_long i__124660max__125751 =
                                  ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                                {
                                    x10_long i__125752;
                                    for (i__125752 = ((x10_long)2ll);
                                         ((i__125752) <= (i__124660max__125751));
                                         i__125752 = ((i__125752) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 1319 "x10/regionarray/Array.x10"
                                        offset__125762 = ((((((offset__125762) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125759)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                    ((((x10_long)2ll)) * (((i__125752) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                       i__125752)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125759)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                          ((((((x10_long)2ll)) * (((i__125752) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                    }
                                }
                                
                            }
                            offset__125762;
                        }))
                        );
                  }))
                  );
                
                //#line 637 "x10/regionarray/Array.x10"
                if ((true && !(::x10aux::nullCheck(dst)->FMGL(region)->contains(
                                 p)))) {
                    
                    //#line 638 "x10/regionarray/Array.x10"
                    ::x10::regionarray::Array<void>::raiseBoundsError(
                      p);
                }
                
                //#line 640 "x10/regionarray/Array.x10"
                ::x10aux::nullCheck(dst)->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__set(
                  (__extension__ ({
                      
                      //#line 1315 "x10/regionarray/Array.x10"
                      x10_long offset__125764 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                    ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min0)));
                      
                      //#line 1316 "x10/regionarray/Array.x10"
                      if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                      {
                          
                          //#line 1317 "x10/regionarray/Array.x10"
                          offset__125764 = ((((((offset__125764) * (::x10aux::nullCheck(dst)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                           ((x10_long)1ll))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min1)));
                          
                          //#line 1318 "x10/regionarray/Array.x10"
                          x10_long i__124660max__125754 =
                            ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                          {
                              x10_long i__125755;
                              for (i__125755 = ((x10_long)2ll);
                                   ((i__125755) <= (i__124660max__125754));
                                   i__125755 = ((i__125755) + (((x10_long)1ll))))
                              {
                                  
                                  //#line 1319 "x10/regionarray/Array.x10"
                                  offset__125764 = ((((((offset__125764) * (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                              ((((x10_long)2ll)) * (((i__125755) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                 i__125755)))) - (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                    ((((((x10_long)2ll)) * (((i__125755) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                              }
                          }
                          
                      }
                      offset__125764;
                  }))
                  , v__125758);
            }
        }
        
    }
    
    //#line 715 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1388
#ifndef X10_REGIONARRAY_ARRAY_H_map_1389
#define X10_REGIONARRAY_ARRAY_H_map_1389
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::map(::x10::regionarray::Array<TPMGL(U)>* dst,
                                         ::x10::regionarray::Region* filter,
                                         ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 734 "x10/regionarray/Array.x10"
    ::x10::regionarray::Region* fregion = this->FMGL(region)->__and(
                                            filter);
    
    //#line 735 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__124515;
        for (p__124515 = ::x10aux::nullCheck(fregion)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124515));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124515));
            
            //#line 736 "x10/regionarray/Array.x10"
            TPMGL(U) v__125772 = ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
              (__extension__ ({
                  ::x10::regionarray::Array<TPMGL(T)>* this__125773 =
                    this;
                  
                  //#line 524 "x10/regionarray/Array.x10"
                  if ((true && !(::x10aux::nullCheck(this__125773)->FMGL(region)->contains(
                                   p)))) {
                      
                      //#line 525 "x10/regionarray/Array.x10"
                      ::x10::regionarray::Array<void>::raiseBoundsError(
                        p);
                  }
                  ::x10aux::nullCheck(this__125773)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                    (__extension__ ({
                        
                        //#line 1315 "x10/regionarray/Array.x10"
                        x10_long offset__125776 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                      ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125773)->FMGL(layout_min0)));
                        
                        //#line 1316 "x10/regionarray/Array.x10"
                        if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                        {
                            
                            //#line 1317 "x10/regionarray/Array.x10"
                            offset__125776 = ((((((offset__125776) * (::x10aux::nullCheck(this__125773)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                      ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125773)->FMGL(layout_min1)));
                            
                            //#line 1318 "x10/regionarray/Array.x10"
                            x10_long i__124660max__125765 =
                              ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                            {
                                x10_long i__125766;
                                for (i__125766 = ((x10_long)2ll);
                                     ((i__125766) <= (i__124660max__125765));
                                     i__125766 = ((i__125766) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 1319 "x10/regionarray/Array.x10"
                                    offset__125776 = ((((((offset__125776) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125773)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__125766) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                   i__125766)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125773)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                      ((((((x10_long)2ll)) * (((i__125766) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                }
                            }
                            
                        }
                        offset__125776;
                    }))
                    );
              }))
              );
            
            //#line 637 "x10/regionarray/Array.x10"
            if ((true && !(::x10aux::nullCheck(dst)->FMGL(region)->contains(
                             p)))) {
                
                //#line 638 "x10/regionarray/Array.x10"
                ::x10::regionarray::Array<void>::raiseBoundsError(
                  p);
            }
            
            //#line 640 "x10/regionarray/Array.x10"
            ::x10aux::nullCheck(dst)->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__set(
              (__extension__ ({
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__125778 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__125778 = ((((((offset__125778) * (::x10aux::nullCheck(dst)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                       ((x10_long)1ll))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124660max__125768 = ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125769;
                          for (i__125769 = ((x10_long)2ll);
                               ((i__125769) <= (i__124660max__125768));
                               i__125769 = ((i__125769) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__125778 = ((((((offset__125778) * (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125769) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                             i__125769)))) - (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125769) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__125778;
              }))
              , v__125772);
        }
    }
    
    //#line 738 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1389
#ifndef X10_REGIONARRAY_ARRAY_H_map_1390
#define X10_REGIONARRAY_ARRAY_H_map_1390
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::regionarray::Array<TPMGL(S)>* x10::regionarray::Array<TPMGL(T)>::map(
  ::x10::regionarray::Array<TPMGL(U)>* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) {
    
    //#line 755 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array<TPMGL(S)>* alloc__125805 = 
    (new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(S)> >()) ::x10::regionarray::Array<TPMGL(S)>());
    ::x10::regionarray::Region* reg__125804 = this->FMGL(region);
    
    //#line 174 "x10/regionarray/Array.x10"
    alloc__125805->FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125788 = reg__125804;
        if (!((!::x10aux::struct_equals(t__125788, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            if (true) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165712))));
            }
            
        }
        t__125788;
    }))
    ;
    alloc__125805->FMGL(rank) = ::x10aux::nullCheck(reg__125804)->FMGL(rank);
    alloc__125805->FMGL(rect) = ::x10aux::nullCheck(reg__125804)->FMGL(rect);
    alloc__125805->FMGL(zeroBased) = ::x10aux::nullCheck(reg__125804)->FMGL(zeroBased);
    alloc__125805->FMGL(rail) = ::x10aux::nullCheck(reg__125804)->FMGL(rail);
    alloc__125805->FMGL(size) = ::x10aux::nullCheck(reg__125804)->size();
    
    //#line 175 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__125789 =
       ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__125789)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__125804);
    
    //#line 176 "x10/regionarray/Array.x10"
    alloc__125805->FMGL(layout_min0) = crh__125789->FMGL(min0);
    
    //#line 177 "x10/regionarray/Array.x10"
    alloc__125805->FMGL(layout_stride1) = crh__125789->FMGL(stride1);
    
    //#line 178 "x10/regionarray/Array.x10"
    alloc__125805->FMGL(layout_min1) = crh__125789->FMGL(min1);
    
    //#line 179 "x10/regionarray/Array.x10"
    alloc__125805->FMGL(layout) = crh__125789->FMGL(layout);
    
    //#line 180 "x10/regionarray/Array.x10"
    x10_long n__125790 = crh__125789->FMGL(size);
    
    //#line 181 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(S) >* r__125791 = ::x10::lang::Rail< TPMGL(S) >::_makeUnsafe(n__125790, false);
    
    //#line 182 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__125792;
        for (p__125792 = ::x10aux::nullCheck(reg__125804)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__125792));
             ) {
            ::x10::lang::Point* p__125793 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__125792));
            
            //#line 183 "x10/regionarray/Array.x10"
            r__125791->x10::lang::template Rail< TPMGL(S) >::__set(
              (__extension__ ({
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__125795 = ((::x10aux::nullCheck(p__125793)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (alloc__125805->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p__125793)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__125795 = ((((((offset__125795) * (alloc__125805->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125793)->x10::lang::Point::__apply(
                                                                                                            ((x10_long)1ll))))) - (alloc__125805->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124660max__125779 = ((::x10aux::nullCheck(p__125793)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125780;
                          for (i__125780 = ((x10_long)2ll);
                               ((i__125780) <= (i__124660max__125779));
                               i__125780 = ((i__125780) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__125795 = ((((((offset__125795) * (::x10aux::nullCheck(alloc__125805->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125780) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125793)->x10::lang::Point::__apply(
                                                                                                                                             i__125780)))) - (::x10aux::nullCheck(alloc__125805->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125780) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__125795;
              }))
              , ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
                (__extension__ ({
                    
                    //#line 755 "x10/regionarray/Array.x10"
                    ::x10::regionarray::Array<TPMGL(T)>* this__125797 =
                      this;
                    
                    //#line 524 "x10/regionarray/Array.x10"
                    if ((true && !(::x10aux::nullCheck(this__125797)->FMGL(region)->contains(
                                     p__125793)))) {
                        
                        //#line 525 "x10/regionarray/Array.x10"
                        ::x10::regionarray::Array<void>::raiseBoundsError(
                          p__125793);
                    }
                    ::x10aux::nullCheck(this__125797)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                      (__extension__ ({
                          
                          //#line 1315 "x10/regionarray/Array.x10"
                          x10_long offset__125800 = ((::x10aux::nullCheck(p__125793)->x10::lang::Point::__apply(
                                                        ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125797)->FMGL(layout_min0)));
                          
                          //#line 1316 "x10/regionarray/Array.x10"
                          if (((::x10aux::nullCheck(p__125793)->FMGL(rank)) > (((x10_long)1ll))))
                          {
                              
                              //#line 1317 "x10/regionarray/Array.x10"
                              offset__125800 = ((((((offset__125800) * (::x10aux::nullCheck(this__125797)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125793)->x10::lang::Point::__apply(
                                                                                                                                        ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125797)->FMGL(layout_min1)));
                              
                              //#line 1318 "x10/regionarray/Array.x10"
                              x10_long i__124660max__125782 =
                                ((::x10aux::nullCheck(p__125793)->FMGL(rank)) - (((x10_long)1ll)));
                              {
                                  x10_long i__125783;
                                  for (i__125783 = ((x10_long)2ll);
                                       ((i__125783) <= (i__124660max__125782));
                                       i__125783 = ((i__125783) + (((x10_long)1ll))))
                                  {
                                      
                                      //#line 1319 "x10/regionarray/Array.x10"
                                      offset__125800 = ((((((offset__125800) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125797)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                  ((((x10_long)2ll)) * (((i__125783) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125793)->x10::lang::Point::__apply(
                                                                                                                                                     i__125783)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125797)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                        ((((((x10_long)2ll)) * (((i__125783) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                  }
                              }
                              
                          }
                          offset__125800;
                      }))
                      );
                }))
                , (__extension__ ({
                    
                    //#line 524 "x10/regionarray/Array.x10"
                    if ((true && !(::x10aux::nullCheck(src)->FMGL(region)->contains(
                                     p__125793)))) {
                        
                        //#line 525 "x10/regionarray/Array.x10"
                        ::x10::regionarray::Array<void>::raiseBoundsError(
                          p__125793);
                    }
                    ::x10aux::nullCheck(src)->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__apply(
                      (__extension__ ({
                          
                          //#line 1315 "x10/regionarray/Array.x10"
                          x10_long offset__125803 = ((::x10aux::nullCheck(p__125793)->x10::lang::Point::__apply(
                                                        ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(src)->FMGL(layout_min0)));
                          
                          //#line 1316 "x10/regionarray/Array.x10"
                          if (((::x10aux::nullCheck(p__125793)->FMGL(rank)) > (((x10_long)1ll))))
                          {
                              
                              //#line 1317 "x10/regionarray/Array.x10"
                              offset__125803 = ((((((offset__125803) * (::x10aux::nullCheck(src)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125793)->x10::lang::Point::__apply(
                                                                                                                               ((x10_long)1ll))))) - (::x10aux::nullCheck(src)->FMGL(layout_min1)));
                              
                              //#line 1318 "x10/regionarray/Array.x10"
                              x10_long i__124660max__125785 =
                                ((::x10aux::nullCheck(p__125793)->FMGL(rank)) - (((x10_long)1ll)));
                              {
                                  x10_long i__125786;
                                  for (i__125786 = ((x10_long)2ll);
                                       ((i__125786) <= (i__124660max__125785));
                                       i__125786 = ((i__125786) + (((x10_long)1ll))))
                                  {
                                      
                                      //#line 1319 "x10/regionarray/Array.x10"
                                      offset__125803 = ((((((offset__125803) * (::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                  ((((x10_long)2ll)) * (((i__125786) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125793)->x10::lang::Point::__apply(
                                                                                                                                                     i__125786)))) - (::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                        ((((((x10_long)2ll)) * (((i__125786) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                  }
                              }
                              
                          }
                          offset__125803;
                      }))
                      );
                }))
                ));
        }
    }
    
    //#line 185 "x10/regionarray/Array.x10"
    alloc__125805->FMGL(raw) = r__125791;
    
    //#line 755 "x10/regionarray/Array.x10"
    return alloc__125805;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1390
#ifndef X10_REGIONARRAY_ARRAY_H_map_1391
#define X10_REGIONARRAY_ARRAY_H_map_1391
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::regionarray::Array<TPMGL(S)>* x10::regionarray::Array<TPMGL(T)>::map(
  ::x10::regionarray::Array<TPMGL(S)>* dst, ::x10::regionarray::Array<TPMGL(U)>* src,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) {
    
    //#line 774 "x10/regionarray/Array.x10"
    if ((this->FMGL(rect) && (::x10aux::struct_equals(this->FMGL(size),
                                                      ::x10aux::nullCheck(src)->FMGL(size)))))
    {
        
        //#line 778 "x10/regionarray/Array.x10"
        ::x10::lang::Rail< TPMGL(T) >* src__125810 = this->FMGL(raw);
        ::x10::lang::Rail< TPMGL(U) >* src__125811 = (__extension__ ({
            ::x10::lang::Rail< TPMGL(U) >* t__125812 = ::x10aux::nullCheck(src)->FMGL(raw);
            if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__125812)->FMGL(size)),
                                           (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(this)->FMGL(raw))->FMGL(size))))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165723))));
            }
            t__125812;
        }))
        ;
        ::x10::lang::Rail< TPMGL(S) >* dst__125813 = ::x10aux::nullCheck(dst)->FMGL(raw);
        
        //#line 203 "x10/util/RailUtils.x10"
        x10_long i__96565max__125807 = (x10_long)(::x10aux::nullCheck(src__125810)->FMGL(size));
        {
            x10_long i__125808;
            for (i__125808 = ((x10_long)0ll); ((i__125808) < (i__96565max__125807));
                 i__125808 = ((i__125808) + (((x10_long)1ll))))
            {
                
                //#line 204 "x10/util/RailUtils.x10"
                ::x10aux::nullCheck(dst__125813)->x10::lang::template Rail< TPMGL(S) >::__set(
                  i__125808, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
                    ::x10aux::nullCheck(src__125810)->x10::lang::template Rail< TPMGL(T) >::__apply(
                      i__125808), ::x10aux::nullCheck(src__125811)->x10::lang::template Rail< TPMGL(U) >::__apply(
                                    i__125808)));
            }
        }
        
        //#line 779 "x10/regionarray/Array.x10"
        return dst;
        
    } else {
        
        //#line 781 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124517;
            for (p__124517 = this->FMGL(region)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124517));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124517));
                
                //#line 782 "x10/regionarray/Array.x10"
                TPMGL(S) v__125825 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
                  (__extension__ ({
                      ::x10::regionarray::Array<TPMGL(T)>* this__125826 =
                        this;
                      
                      //#line 524 "x10/regionarray/Array.x10"
                      if ((true && !(::x10aux::nullCheck(this__125826)->FMGL(region)->contains(
                                       p)))) {
                          
                          //#line 525 "x10/regionarray/Array.x10"
                          ::x10::regionarray::Array<void>::raiseBoundsError(
                            p);
                      }
                      ::x10aux::nullCheck(this__125826)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                        (__extension__ ({
                            
                            //#line 1315 "x10/regionarray/Array.x10"
                            x10_long offset__125829 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                          ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125826)->FMGL(layout_min0)));
                            
                            //#line 1316 "x10/regionarray/Array.x10"
                            if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                            {
                                
                                //#line 1317 "x10/regionarray/Array.x10"
                                offset__125829 = ((((((offset__125829) * (::x10aux::nullCheck(this__125826)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                          ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125826)->FMGL(layout_min1)));
                                
                                //#line 1318 "x10/regionarray/Array.x10"
                                x10_long i__124660max__125815 =
                                  ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                                {
                                    x10_long i__125816;
                                    for (i__125816 = ((x10_long)2ll);
                                         ((i__125816) <= (i__124660max__125815));
                                         i__125816 = ((i__125816) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 1319 "x10/regionarray/Array.x10"
                                        offset__125829 = ((((((offset__125829) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125826)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                    ((((x10_long)2ll)) * (((i__125816) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                       i__125816)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125826)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                          ((((((x10_long)2ll)) * (((i__125816) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                    }
                                }
                                
                            }
                            offset__125829;
                        }))
                        );
                  }))
                  , (__extension__ ({
                      
                      //#line 524 "x10/regionarray/Array.x10"
                      if ((true && !(::x10aux::nullCheck(src)->FMGL(region)->contains(
                                       p)))) {
                          
                          //#line 525 "x10/regionarray/Array.x10"
                          ::x10::regionarray::Array<void>::raiseBoundsError(
                            p);
                      }
                      ::x10aux::nullCheck(src)->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__apply(
                        (__extension__ ({
                            
                            //#line 1315 "x10/regionarray/Array.x10"
                            x10_long offset__125832 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                          ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(src)->FMGL(layout_min0)));
                            
                            //#line 1316 "x10/regionarray/Array.x10"
                            if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                            {
                                
                                //#line 1317 "x10/regionarray/Array.x10"
                                offset__125832 = ((((((offset__125832) * (::x10aux::nullCheck(src)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                 ((x10_long)1ll))))) - (::x10aux::nullCheck(src)->FMGL(layout_min1)));
                                
                                //#line 1318 "x10/regionarray/Array.x10"
                                x10_long i__124660max__125818 =
                                  ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                                {
                                    x10_long i__125819;
                                    for (i__125819 = ((x10_long)2ll);
                                         ((i__125819) <= (i__124660max__125818));
                                         i__125819 = ((i__125819) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 1319 "x10/regionarray/Array.x10"
                                        offset__125832 = ((((((offset__125832) * (::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                    ((((x10_long)2ll)) * (((i__125819) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                       i__125819)))) - (::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                          ((((((x10_long)2ll)) * (((i__125819) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                    }
                                }
                                
                            }
                            offset__125832;
                        }))
                        );
                  }))
                  );
                
                //#line 637 "x10/regionarray/Array.x10"
                if ((true && !(::x10aux::nullCheck(dst)->FMGL(region)->contains(
                                 p)))) {
                    
                    //#line 638 "x10/regionarray/Array.x10"
                    ::x10::regionarray::Array<void>::raiseBoundsError(
                      p);
                }
                
                //#line 640 "x10/regionarray/Array.x10"
                ::x10aux::nullCheck(dst)->FMGL(raw)->x10::lang::template Rail< TPMGL(S) >::__set(
                  (__extension__ ({
                      
                      //#line 1315 "x10/regionarray/Array.x10"
                      x10_long offset__125834 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                    ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min0)));
                      
                      //#line 1316 "x10/regionarray/Array.x10"
                      if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                      {
                          
                          //#line 1317 "x10/regionarray/Array.x10"
                          offset__125834 = ((((((offset__125834) * (::x10aux::nullCheck(dst)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                           ((x10_long)1ll))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min1)));
                          
                          //#line 1318 "x10/regionarray/Array.x10"
                          x10_long i__124660max__125821 =
                            ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                          {
                              x10_long i__125822;
                              for (i__125822 = ((x10_long)2ll);
                                   ((i__125822) <= (i__124660max__125821));
                                   i__125822 = ((i__125822) + (((x10_long)1ll))))
                              {
                                  
                                  //#line 1319 "x10/regionarray/Array.x10"
                                  offset__125834 = ((((((offset__125834) * (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                              ((((x10_long)2ll)) * (((i__125822) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                 i__125822)))) - (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                    ((((((x10_long)2ll)) * (((i__125822) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                              }
                          }
                          
                      }
                      offset__125834;
                  }))
                  , v__125825);
            }
        }
        
    }
    
    //#line 785 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1391
#ifndef X10_REGIONARRAY_ARRAY_H_map_1392
#define X10_REGIONARRAY_ARRAY_H_map_1392
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::regionarray::Array<TPMGL(S)>* x10::regionarray::Array<TPMGL(T)>::map(
  ::x10::regionarray::Array<TPMGL(S)>* dst, ::x10::regionarray::Array<TPMGL(U)>* src,
  ::x10::regionarray::Region* filter, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) {
    
    //#line 805 "x10/regionarray/Array.x10"
    ::x10::regionarray::Region* fregion = this->FMGL(region)->__and(
                                            filter);
    
    //#line 806 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__124519;
        for (p__124519 = ::x10aux::nullCheck(fregion)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124519));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124519));
            
            //#line 807 "x10/regionarray/Array.x10"
            TPMGL(S) v__125845 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
              (__extension__ ({
                  ::x10::regionarray::Array<TPMGL(T)>* this__125846 =
                    this;
                  
                  //#line 524 "x10/regionarray/Array.x10"
                  if ((true && !(::x10aux::nullCheck(this__125846)->FMGL(region)->contains(
                                   p)))) {
                      
                      //#line 525 "x10/regionarray/Array.x10"
                      ::x10::regionarray::Array<void>::raiseBoundsError(
                        p);
                  }
                  ::x10aux::nullCheck(this__125846)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                    (__extension__ ({
                        
                        //#line 1315 "x10/regionarray/Array.x10"
                        x10_long offset__125849 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                      ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125846)->FMGL(layout_min0)));
                        
                        //#line 1316 "x10/regionarray/Array.x10"
                        if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                        {
                            
                            //#line 1317 "x10/regionarray/Array.x10"
                            offset__125849 = ((((((offset__125849) * (::x10aux::nullCheck(this__125846)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                      ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125846)->FMGL(layout_min1)));
                            
                            //#line 1318 "x10/regionarray/Array.x10"
                            x10_long i__124660max__125835 =
                              ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                            {
                                x10_long i__125836;
                                for (i__125836 = ((x10_long)2ll);
                                     ((i__125836) <= (i__124660max__125835));
                                     i__125836 = ((i__125836) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 1319 "x10/regionarray/Array.x10"
                                    offset__125849 = ((((((offset__125849) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125846)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__125836) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                   i__125836)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125846)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                      ((((((x10_long)2ll)) * (((i__125836) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                }
                            }
                            
                        }
                        offset__125849;
                    }))
                    );
              }))
              , (__extension__ ({
                  
                  //#line 524 "x10/regionarray/Array.x10"
                  if ((true && !(::x10aux::nullCheck(src)->FMGL(region)->contains(
                                   p)))) {
                      
                      //#line 525 "x10/regionarray/Array.x10"
                      ::x10::regionarray::Array<void>::raiseBoundsError(
                        p);
                  }
                  ::x10aux::nullCheck(src)->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__apply(
                    (__extension__ ({
                        
                        //#line 1315 "x10/regionarray/Array.x10"
                        x10_long offset__125852 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                      ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(src)->FMGL(layout_min0)));
                        
                        //#line 1316 "x10/regionarray/Array.x10"
                        if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                        {
                            
                            //#line 1317 "x10/regionarray/Array.x10"
                            offset__125852 = ((((((offset__125852) * (::x10aux::nullCheck(src)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                             ((x10_long)1ll))))) - (::x10aux::nullCheck(src)->FMGL(layout_min1)));
                            
                            //#line 1318 "x10/regionarray/Array.x10"
                            x10_long i__124660max__125838 =
                              ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                            {
                                x10_long i__125839;
                                for (i__125839 = ((x10_long)2ll);
                                     ((i__125839) <= (i__124660max__125838));
                                     i__125839 = ((i__125839) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 1319 "x10/regionarray/Array.x10"
                                    offset__125852 = ((((((offset__125852) * (::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__125839) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                   i__125839)))) - (::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                      ((((((x10_long)2ll)) * (((i__125839) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                }
                            }
                            
                        }
                        offset__125852;
                    }))
                    );
              }))
              );
            
            //#line 637 "x10/regionarray/Array.x10"
            if ((true && !(::x10aux::nullCheck(dst)->FMGL(region)->contains(
                             p)))) {
                
                //#line 638 "x10/regionarray/Array.x10"
                ::x10::regionarray::Array<void>::raiseBoundsError(
                  p);
            }
            
            //#line 640 "x10/regionarray/Array.x10"
            ::x10aux::nullCheck(dst)->FMGL(raw)->x10::lang::template Rail< TPMGL(S) >::__set(
              (__extension__ ({
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__125854 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__125854 = ((((((offset__125854) * (::x10aux::nullCheck(dst)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                       ((x10_long)1ll))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124660max__125841 = ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125842;
                          for (i__125842 = ((x10_long)2ll);
                               ((i__125842) <= (i__124660max__125841));
                               i__125842 = ((i__125842) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__125854 = ((((((offset__125854) * (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125842) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                             i__125842)))) - (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125842) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__125854;
              }))
              , v__125845);
        }
    }
    
    //#line 809 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1392
#ifndef X10_REGIONARRAY_ARRAY_H_reduce_1393
#define X10_REGIONARRAY_ARRAY_H_reduce_1393
template<class TPMGL(T)> template<class TPMGL(U)> TPMGL(U)
  x10::regionarray::Array<TPMGL(T)>::reduce(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
                                            TPMGL(U) unit) {
    
    //#line 826 "x10/regionarray/Array.x10"
    if (this->FMGL(rect)) {
        
        //#line 830 "x10/regionarray/Array.x10"
        ::x10::lang::Rail< TPMGL(T) >* src__125859 = this->FMGL(raw);
        
        //#line 132 "x10/util/RailUtils.x10"
        TPMGL(U) accum__125862 = unit;
        
        //#line 133 "x10/util/RailUtils.x10"
        x10_long i__96508max__125856 = (x10_long)(::x10aux::nullCheck(src__125859)->FMGL(size));
        {
            x10_long i__125857;
            for (i__125857 = ((x10_long)0ll); ((i__125857) < (i__96508max__125856));
                 i__125857 = ((i__125857) + (((x10_long)1ll))))
            {
                
                //#line 134 "x10/util/RailUtils.x10"
                accum__125862 = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                  accum__125862, ::x10aux::nullCheck(src__125859)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                   i__125857));
            }
        }
        
        //#line 830 "x10/regionarray/Array.x10"
        return accum__125862;
        
    } else {
        
        //#line 832 "x10/regionarray/Array.x10"
        TPMGL(U) accum = unit;
        
        //#line 833 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124521;
            for (p__124521 = this->FMGL(region)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124521));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124521));
                
                //#line 834 "x10/regionarray/Array.x10"
                accum = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                  accum, (__extension__ ({
                      ::x10::regionarray::Array<TPMGL(T)>* this__125543 =
                        this;
                      
                      //#line 524 "x10/regionarray/Array.x10"
                      if ((true && !(::x10aux::nullCheck(this__125543)->FMGL(region)->contains(
                                       p)))) {
                          
                          //#line 525 "x10/regionarray/Array.x10"
                          ::x10::regionarray::Array<void>::raiseBoundsError(
                            p);
                      }
                      ::x10aux::nullCheck(this__125543)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                        (__extension__ ({
                            
                            //#line 1315 "x10/regionarray/Array.x10"
                            x10_long offset__125546 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                          ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125543)->FMGL(layout_min0)));
                            
                            //#line 1316 "x10/regionarray/Array.x10"
                            if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                            {
                                
                                //#line 1317 "x10/regionarray/Array.x10"
                                offset__125546 = ((((((offset__125546) * (::x10aux::nullCheck(this__125543)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                          ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125543)->FMGL(layout_min1)));
                                
                                //#line 1318 "x10/regionarray/Array.x10"
                                x10_long i__124660max__125863 =
                                  ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                                {
                                    x10_long i__125864;
                                    for (i__125864 = ((x10_long)2ll);
                                         ((i__125864) <= (i__124660max__125863));
                                         i__125864 = ((i__125864) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 1319 "x10/regionarray/Array.x10"
                                        offset__125546 = ((((((offset__125546) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125543)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                    ((((x10_long)2ll)) * (((i__125864) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                       i__125864)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125543)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                          ((((((x10_long)2ll)) * (((i__125864) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                    }
                                }
                                
                            }
                            offset__125546;
                        }))
                        );
                  }))
                  );
            }
        }
        
        //#line 836 "x10/regionarray/Array.x10"
        return accum;
        
    }
    
}
#endif // X10_REGIONARRAY_ARRAY_H_reduce_1393
#ifndef X10_REGIONARRAY_ARRAY_H_scan_1394
#define X10_REGIONARRAY_ARRAY_H_scan_1394
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::scan(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
                                          TPMGL(U) unit) {
    
    //#line 855 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array<TPMGL(T)>* this__125880 = this;
    ::x10::regionarray::Array<TPMGL(U)>* dst__125881 = (__extension__ ({
        ::x10::regionarray::Array<TPMGL(U)>* alloc__125882 =
           (new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(U)> >()) ::x10::regionarray::Array<TPMGL(U)>());
        ::x10::regionarray::Region* reg__125869 = this->FMGL(region);
        
        //#line 142 "x10/regionarray/Array.x10"
        alloc__125882->FMGL(region) = (__extension__ ({
            ::x10::regionarray::Region* t__125866 = reg__125869;
            if (!((!::x10aux::struct_equals(t__125866, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                if (true) {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165712))));
                }
                
            }
            t__125866;
        }))
        ;
        alloc__125882->FMGL(rank) = ::x10aux::nullCheck(reg__125869)->FMGL(rank);
        alloc__125882->FMGL(rect) = ::x10aux::nullCheck(reg__125869)->FMGL(rect);
        alloc__125882->FMGL(zeroBased) = ::x10aux::nullCheck(reg__125869)->FMGL(zeroBased);
        alloc__125882->FMGL(rail) = ::x10aux::nullCheck(reg__125869)->FMGL(rail);
        alloc__125882->FMGL(size) = ::x10aux::nullCheck(reg__125869)->size();
        
        //#line 143 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array__LayoutHelper crh__125867 =
           ::x10::regionarray::Array__LayoutHelper::_alloc();
        (crh__125867)->::x10::regionarray::Array__LayoutHelper::_constructor(
          reg__125869);
        
        //#line 144 "x10/regionarray/Array.x10"
        alloc__125882->FMGL(layout_min0) = crh__125867->FMGL(min0);
        
        //#line 145 "x10/regionarray/Array.x10"
        alloc__125882->FMGL(layout_stride1) = crh__125867->FMGL(stride1);
        
        //#line 146 "x10/regionarray/Array.x10"
        alloc__125882->FMGL(layout_min1) = crh__125867->FMGL(min1);
        
        //#line 147 "x10/regionarray/Array.x10"
        alloc__125882->FMGL(layout) = crh__125867->FMGL(layout);
        
        //#line 148 "x10/regionarray/Array.x10"
        x10_long n__125868 = crh__125867->FMGL(size);
        
        //#line 152 "x10/regionarray/Array.x10"
        alloc__125882->FMGL(raw) = ::x10::lang::Rail< TPMGL(U) >::_makeUnsafe(n__125868, false);
        alloc__125882;
    }))
    ;
    
    //#line 873 "x10/regionarray/Array.x10"
    TPMGL(U) accum__125885 = unit;
    
    //#line 874 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__125886;
        for (p__125886 = ::x10aux::nullCheck(this__125880)->FMGL(region)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__125886));
             ) {
            ::x10::lang::Point* p__125887 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__125886));
            
            //#line 875 "x10/regionarray/Array.x10"
            accum__125885 = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
              accum__125885, (__extension__ ({
                  
                  //#line 524 "x10/regionarray/Array.x10"
                  if ((true && !(::x10aux::nullCheck(this__125880)->FMGL(region)->contains(
                                   p__125887)))) {
                      
                      //#line 525 "x10/regionarray/Array.x10"
                      ::x10::regionarray::Array<void>::raiseBoundsError(
                        p__125887);
                  }
                  ::x10aux::nullCheck(this__125880)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                    (__extension__ ({
                        
                        //#line 1315 "x10/regionarray/Array.x10"
                        x10_long offset__125890 = ((::x10aux::nullCheck(p__125887)->x10::lang::Point::__apply(
                                                      ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125880)->FMGL(layout_min0)));
                        
                        //#line 1316 "x10/regionarray/Array.x10"
                        if (((::x10aux::nullCheck(p__125887)->FMGL(rank)) > (((x10_long)1ll))))
                        {
                            
                            //#line 1317 "x10/regionarray/Array.x10"
                            offset__125890 = ((((((offset__125890) * (::x10aux::nullCheck(this__125880)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125887)->x10::lang::Point::__apply(
                                                                                                                                      ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125880)->FMGL(layout_min1)));
                            
                            //#line 1318 "x10/regionarray/Array.x10"
                            x10_long i__124660max__125870 =
                              ((::x10aux::nullCheck(p__125887)->FMGL(rank)) - (((x10_long)1ll)));
                            {
                                x10_long i__125871;
                                for (i__125871 = ((x10_long)2ll);
                                     ((i__125871) <= (i__124660max__125870));
                                     i__125871 = ((i__125871) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 1319 "x10/regionarray/Array.x10"
                                    offset__125890 = ((((((offset__125890) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125880)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__125871) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125887)->x10::lang::Point::__apply(
                                                                                                                                                   i__125871)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125880)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                      ((((((x10_long)2ll)) * (((i__125871) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                }
                            }
                            
                        }
                        offset__125890;
                    }))
                    );
              }))
              );
            
            //#line 637 "x10/regionarray/Array.x10"
            if ((true && !(dst__125881->FMGL(region)->contains(
                             p__125887)))) {
                
                //#line 638 "x10/regionarray/Array.x10"
                ::x10::regionarray::Array<void>::raiseBoundsError(
                  p__125887);
            }
            
            //#line 640 "x10/regionarray/Array.x10"
            dst__125881->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__set(
              (__extension__ ({
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__125879 = ((::x10aux::nullCheck(p__125887)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (dst__125881->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p__125887)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__125879 = ((((((offset__125879) * (dst__125881->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125887)->x10::lang::Point::__apply(
                                                                                                          ((x10_long)1ll))))) - (dst__125881->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124660max__125873 = ((::x10aux::nullCheck(p__125887)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125874;
                          for (i__125874 = ((x10_long)2ll);
                               ((i__125874) <= (i__124660max__125873));
                               i__125874 = ((i__125874) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__125879 = ((((((offset__125879) * (::x10aux::nullCheck(dst__125881->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125874) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125887)->x10::lang::Point::__apply(
                                                                                                                                             i__125874)))) - (::x10aux::nullCheck(dst__125881->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125874) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__125879;
              }))
              , accum__125885);
        }
    }
    
    //#line 855 "x10/regionarray/Array.x10"
    return dst__125881;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_scan_1394
#ifndef X10_REGIONARRAY_ARRAY_H_scan_1395
#define X10_REGIONARRAY_ARRAY_H_scan_1395
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::scan(::x10::regionarray::Array<TPMGL(U)>* dst,
                                          ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
                                          TPMGL(U) unit) {
    
    //#line 873 "x10/regionarray/Array.x10"
    TPMGL(U) accum = unit;
    
    //#line 874 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__124523;
        for (p__124523 = this->FMGL(region)->iterator(); ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124523));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124523));
            
            //#line 875 "x10/regionarray/Array.x10"
            accum = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
              accum, (__extension__ ({
                  ::x10::regionarray::Array<TPMGL(T)>* this__125587 =
                    this;
                  
                  //#line 524 "x10/regionarray/Array.x10"
                  if ((true && !(::x10aux::nullCheck(this__125587)->FMGL(region)->contains(
                                   p)))) {
                      
                      //#line 525 "x10/regionarray/Array.x10"
                      ::x10::regionarray::Array<void>::raiseBoundsError(
                        p);
                  }
                  ::x10aux::nullCheck(this__125587)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                    (__extension__ ({
                        
                        //#line 1315 "x10/regionarray/Array.x10"
                        x10_long offset__125590 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                      ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125587)->FMGL(layout_min0)));
                        
                        //#line 1316 "x10/regionarray/Array.x10"
                        if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                        {
                            
                            //#line 1317 "x10/regionarray/Array.x10"
                            offset__125590 = ((((((offset__125590) * (::x10aux::nullCheck(this__125587)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                      ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125587)->FMGL(layout_min1)));
                            
                            //#line 1318 "x10/regionarray/Array.x10"
                            x10_long i__124660max__125891 =
                              ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                            {
                                x10_long i__125892;
                                for (i__125892 = ((x10_long)2ll);
                                     ((i__125892) <= (i__124660max__125891));
                                     i__125892 = ((i__125892) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 1319 "x10/regionarray/Array.x10"
                                    offset__125590 = ((((((offset__125590) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125587)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__125892) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                   i__125892)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125587)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                      ((((((x10_long)2ll)) * (((i__125892) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                }
                            }
                            
                        }
                        offset__125590;
                    }))
                    );
              }))
              );
            
            //#line 637 "x10/regionarray/Array.x10"
            if ((true && !(::x10aux::nullCheck(dst)->FMGL(region)->contains(
                             p)))) {
                
                //#line 638 "x10/regionarray/Array.x10"
                ::x10::regionarray::Array<void>::raiseBoundsError(
                  p);
            }
            
            //#line 640 "x10/regionarray/Array.x10"
            ::x10aux::nullCheck(dst)->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__set(
              (__extension__ ({
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__125900 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__125900 = ((((((offset__125900) * (::x10aux::nullCheck(dst)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                       ((x10_long)1ll))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124660max__125894 = ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125895;
                          for (i__125895 = ((x10_long)2ll);
                               ((i__125895) <= (i__124660max__125894));
                               i__125895 = ((i__125895) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__125900 = ((((((offset__125900) * (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125895) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                             i__125895)))) - (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125895) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__125900;
              }))
              , accum);
        }
    }
    
    //#line 878 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_scan_1395
#endif // X10_REGIONARRAY_ARRAY_H_GENERICS
#ifndef X10_REGIONARRAY_ARRAY_H_IMPLEMENTATION
#define X10_REGIONARRAY_ARRAY_H_IMPLEMENTATION
#include <x10/regionarray/Array.h>

#ifndef X10_REGIONARRAY_ARRAY__CLOSURE__1_CLOSURE
#define X10_REGIONARRAY_ARRAY__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_Array__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0<x10_long>::template itable <x10_regionarray_Array__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_long __apply(){
        return ::x10aux::nullCheck((gra)->__apply())->FMGL(region)->indexOf(
                 dstPoint);
        
    }
    
    // captured environment
    ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra;
    ::x10::lang::Point* dstPoint;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->gra);
        buf.write(this->dstPoint);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_Array__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_Array__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > that_gra = buf.read< ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > >();
        ::x10::lang::Point* that_dstPoint = buf.read< ::x10::lang::Point*>();
        x10_regionarray_Array__closure__1<TPMGL(T) >* this_ = new (storage) x10_regionarray_Array__closure__1<TPMGL(T) >(that_gra, that_dstPoint);
        return this_;
    }
    
    x10_regionarray_Array__closure__1(::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra, ::x10::lang::Point* dstPoint) : gra(gra), dstPoint(dstPoint) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/Array.x10:938";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0<x10_long>::template itable <x10_regionarray_Array__closure__1<TPMGL(T) > >x10_regionarray_Array__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_Array__closure__1<TPMGL(T) >::__apply, &x10_regionarray_Array__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_Array__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >, &x10_regionarray_Array__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_Array__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_Array__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_REGIONARRAY_ARRAY__CLOSURE__1_CLOSURE
#ifndef X10_REGIONARRAY_ARRAY__CLOSURE__2_CLOSURE
#define X10_REGIONARRAY_ARRAY__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_Array__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0<x10_long>::template itable <x10_regionarray_Array__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_long __apply(){
        return ::x10aux::nullCheck((gra)->__apply())->FMGL(region)->indexOf(
                 srcPoint);
        
    }
    
    // captured environment
    ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra;
    ::x10::lang::Point* srcPoint;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->gra);
        buf.write(this->srcPoint);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_Array__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_Array__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > that_gra = buf.read< ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > >();
        ::x10::lang::Point* that_srcPoint = buf.read< ::x10::lang::Point*>();
        x10_regionarray_Array__closure__2<TPMGL(T) >* this_ = new (storage) x10_regionarray_Array__closure__2<TPMGL(T) >(that_gra, that_srcPoint);
        return this_;
    }
    
    x10_regionarray_Array__closure__2(::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra, ::x10::lang::Point* srcPoint) : gra(gra), srcPoint(srcPoint) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/Array.x10:1041";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0<x10_long>::template itable <x10_regionarray_Array__closure__2<TPMGL(T) > >x10_regionarray_Array__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_Array__closure__2<TPMGL(T) >::__apply, &x10_regionarray_Array__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_Array__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >, &x10_regionarray_Array__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_Array__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_Array__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_REGIONARRAY_ARRAY__CLOSURE__2_CLOSURE

//#line 59 "x10/regionarray/Array.x10"
/**
         * The region of this array.
         */

//#line 64 "x10/regionarray/Array.x10"
/**
         * The rank of this array.
         */

//#line 69 "x10/regionarray/Array.x10"
/**
         * Is this array defined over a rectangular region?  
         */

//#line 74 "x10/regionarray/Array.x10"
/**
         * Is this array's region zero-based?
         */

//#line 79 "x10/regionarray/Array.x10"
/**
         * Is this array's region a "rail" (one-dimensional, rect, and zero-based)?
         */

//#line 85 "x10/regionarray/Array.x10"
/**
         * The number of points/data values in the array.
         * Will always be equal to region.size(), but cached here to make it available as a property.
         */
template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::template itable< ::x10::regionarray::Array<TPMGL(T)> >  x10::regionarray::Array<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::regionarray::Array<TPMGL(T)>::__apply, &x10::regionarray::Array<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::regionarray::Array<TPMGL(T)> >  x10::regionarray::Array<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::regionarray::Array<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Iterable< ::x10::lang::Point*>::template itable< ::x10::regionarray::Array<TPMGL(T)> >  x10::regionarray::Array<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::regionarray::Array<TPMGL(T)>::iterator, &x10::regionarray::Array<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::regionarray::Array<TPMGL(T)>::_itables[4] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable< ::x10::lang::Point*> >, &_itable_2), ::x10aux::itable_entry(NULL, (void*)"::x10::regionarray::Array<TPMGL(T)>")};

//#line 97 "x10/regionarray/Array.x10"
/**
     * The backing storage for the array's elements
     */

//#line 115 "x10/regionarray/Array.x10"
/**
     * Return the Rail[T] that is providing the backing storage for the array.
     * This method is primarily intended to be used to interface with native libraries 
     * (eg BLAS, ESSL). <p>
     * 
     * This method should be used sparingly, since it may make client code dependent on the layout
     * algorithm used to map Points in the Array's Region to indicies in the backing Rail.
     * The specifics of this mapping are unspecified, although it would be reasonable to assume that
     * if the rect property is true, then every element of the backing Rail[T] actually
     * contatins a valid element of T.  Furthermore, for a multi-dimensional array it is currently true
     * (and likely to remain true) that the layout used is a row-major layout (like C, unlike Fortran)
     * and is compatible with the layout expected by platform BLAS libraries that operate on row-major
     * C arrays.
     * 
     * @return the Rail[T] that is the backing storage for the Array object.
     */
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::regionarray::Array<TPMGL(T)>::raw(
  ) {
    return this->FMGL(raw);
    
}

//#line 122 "x10/regionarray/Array.x10"
/**
     * Construct an Array over the region reg whose elements are zero-initialized.
     * 
     * @param reg The region over which to construct the array.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Region* reg) {
    
    //#line 124 "x10/regionarray/Array.x10"
    FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125673 = reg;
        if (!((!::x10aux::struct_equals(t__125673, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165712))));
        }
        t__125673;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 125 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg);
    
    //#line 126 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = crh->FMGL(min0);
    
    //#line 127 "x10/regionarray/Array.x10"
    this->FMGL(layout_stride1) = crh->FMGL(stride1);
    
    //#line 128 "x10/regionarray/Array.x10"
    this->FMGL(layout_min1) = crh->FMGL(min1);
    
    //#line 129 "x10/regionarray/Array.x10"
    this->FMGL(layout) = crh->FMGL(layout);
    
    //#line 130 "x10/regionarray/Array.x10"
    x10_long n = crh->FMGL(size);
    
    //#line 131 "x10/regionarray/Array.x10"
    this->FMGL(raw) = ::x10::lang::Rail< TPMGL(T) >::_make(n);
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::regionarray::Region* reg)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(reg);
    return this_;
}



//#line 140 "x10/regionarray/Array.x10"
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           x10_boolean zeroed, ::x10::regionarray::Region* reg) {
    
    //#line 142 "x10/regionarray/Array.x10"
    FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125675 = reg;
        if (!((!::x10aux::struct_equals(t__125675, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165712))));
        }
        t__125675;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 143 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg);
    
    //#line 144 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = crh->FMGL(min0);
    
    //#line 145 "x10/regionarray/Array.x10"
    this->FMGL(layout_stride1) = crh->FMGL(stride1);
    
    //#line 146 "x10/regionarray/Array.x10"
    this->FMGL(layout_min1) = crh->FMGL(min1);
    
    //#line 147 "x10/regionarray/Array.x10"
    this->FMGL(layout) = crh->FMGL(layout);
    
    //#line 148 "x10/regionarray/Array.x10"
    x10_long n = crh->FMGL(size);
    
    //#line 149 "x10/regionarray/Array.x10"
    if (zeroed) {
        
        //#line 150 "x10/regionarray/Array.x10"
        this->FMGL(raw) = ::x10::lang::Rail< TPMGL(T) >::_make(n);
    } else {
        
        //#line 152 "x10/regionarray/Array.x10"
        this->FMGL(raw) = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(n, false);
    }
    
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           x10_boolean zeroed, ::x10::regionarray::Region* reg)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(zeroed, reg);
    return this_;
}



//#line 172 "x10/regionarray/Array.x10"
/**
     * Construct an Array over the region reg whose
     * values are initialized as specified by the init function.
     * The function will be evaluated exactly once for each point
     * in reg in an arbitrary order to 
     * compute the initial value for each array element.</p>
     * 
     * It is unspecified whether the function evaluations will
     * be done sequentially for each point by the current activity 
     * or concurrently for disjoint sets of points by one or more 
     * child activities. 
     * 
     * @param reg The region over which to construct the array.
     * @param init The function to use to initialize the array.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Region* reg,
                           ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init) {
    
    //#line 174 "x10/regionarray/Array.x10"
    FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125680 = reg;
        if (!((!::x10aux::struct_equals(t__125680, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165712))));
        }
        t__125680;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 175 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg);
    
    //#line 176 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = crh->FMGL(min0);
    
    //#line 177 "x10/regionarray/Array.x10"
    this->FMGL(layout_stride1) = crh->FMGL(stride1);
    
    //#line 178 "x10/regionarray/Array.x10"
    this->FMGL(layout_min1) = crh->FMGL(min1);
    
    //#line 179 "x10/regionarray/Array.x10"
    this->FMGL(layout) = crh->FMGL(layout);
    
    //#line 180 "x10/regionarray/Array.x10"
    x10_long n = crh->FMGL(size);
    
    //#line 181 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(n, false);
    
    //#line 182 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__124434;
        for (p__124434 = ::x10aux::nullCheck(reg)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124434));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124434));
            
            //#line 183 "x10/regionarray/Array.x10"
            r->x10::lang::template Rail< TPMGL(T) >::__set(
              (__extension__ ({
                  ::x10::regionarray::Array<TPMGL(T)>* this__124889 =
                    this;
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__124884 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__124889)->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__124884 = ((((((offset__124884) * (::x10aux::nullCheck(this__124889)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                ((x10_long)1ll))))) - (::x10aux::nullCheck(this__124889)->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124660max__125677 = ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125678;
                          for (i__125678 = ((x10_long)2ll);
                               ((i__125678) <= (i__124660max__125677));
                               i__125678 = ((i__125678) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__124884 = ((((((offset__124884) * (::x10aux::nullCheck(::x10aux::nullCheck(this__124889)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125678) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                             i__125678)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__124889)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125678) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__124884;
              }))
              , ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::__apply(::x10aux::nullCheck(init), 
                p));
        }
    }
    
    //#line 185 "x10/regionarray/Array.x10"
    this->FMGL(raw) = r;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::regionarray::Region* reg,
                           ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(reg, init);
    return this_;
}



//#line 195 "x10/regionarray/Array.x10"
/**
     * Construct an Array over the region reg whose
     * values are initialized to be init.
     * 
     * @param reg The region over which to construct the array.
     * @param init The function to use to initialize the array.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Region* reg,
                           TPMGL(T) init) {
    
    //#line 197 "x10/regionarray/Array.x10"
    FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125689 = reg;
        if (!((!::x10aux::struct_equals(t__125689, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165712))));
        }
        t__125689;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 199 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg);
    
    //#line 200 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = crh->FMGL(min0);
    
    //#line 201 "x10/regionarray/Array.x10"
    this->FMGL(layout_stride1) = crh->FMGL(stride1);
    
    //#line 202 "x10/regionarray/Array.x10"
    this->FMGL(layout_min1) = crh->FMGL(min1);
    
    //#line 203 "x10/regionarray/Array.x10"
    this->FMGL(layout) = crh->FMGL(layout);
    
    //#line 204 "x10/regionarray/Array.x10"
    x10_long n = crh->FMGL(size);
    
    //#line 205 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(n, false);
    
    //#line 206 "x10/regionarray/Array.x10"
    if (::x10aux::nullCheck(reg)->FMGL(rect)) {
        
        //#line 209 "x10/regionarray/Array.x10"
        x10_long i__124436max__125683 = (x10_long)(::x10aux::nullCheck(r)->FMGL(size));
        {
            x10_long i__125684;
            for (i__125684 = ((x10_long)0ll); ((i__125684) < (i__124436max__125683));
                 i__125684 = ((i__125684) + (((x10_long)1ll))))
            {
                
                //#line 210 "x10/regionarray/Array.x10"
                r->x10::lang::template Rail< TPMGL(T) >::__set(
                  i__125684, init);
            }
        }
        
    } else {
        
        //#line 213 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124455;
            for (p__124455 = ::x10aux::nullCheck(reg)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124455));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124455));
                
                //#line 214 "x10/regionarray/Array.x10"
                r->x10::lang::template Rail< TPMGL(T) >::__set(
                  (__extension__ ({
                      ::x10::regionarray::Array<TPMGL(T)>* this__124899 =
                        this;
                      
                      //#line 1315 "x10/regionarray/Array.x10"
                      x10_long offset__124894 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                    ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__124899)->FMGL(layout_min0)));
                      
                      //#line 1316 "x10/regionarray/Array.x10"
                      if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                      {
                          
                          //#line 1317 "x10/regionarray/Array.x10"
                          offset__124894 = ((((((offset__124894) * (::x10aux::nullCheck(this__124899)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                    ((x10_long)1ll))))) - (::x10aux::nullCheck(this__124899)->FMGL(layout_min1)));
                          
                          //#line 1318 "x10/regionarray/Array.x10"
                          x10_long i__124660max__125686 =
                            ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                          {
                              x10_long i__125687;
                              for (i__125687 = ((x10_long)2ll);
                                   ((i__125687) <= (i__124660max__125686));
                                   i__125687 = ((i__125687) + (((x10_long)1ll))))
                              {
                                  
                                  //#line 1319 "x10/regionarray/Array.x10"
                                  offset__124894 = ((((((offset__124894) * (::x10aux::nullCheck(::x10aux::nullCheck(this__124899)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                              ((((x10_long)2ll)) * (((i__125687) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                 i__125687)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__124899)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                    ((((((x10_long)2ll)) * (((i__125687) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                              }
                          }
                          
                      }
                      offset__124894;
                  }))
                  , init);
            }
        }
        
    }
    
    //#line 217 "x10/regionarray/Array.x10"
    this->FMGL(raw) = r;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::regionarray::Region* reg,
                           TPMGL(T) init) {
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(reg, init);
    return this_;
}



//#line 231 "x10/regionarray/Array.x10"
/**
     * Construct an Array view of a backing Rail
     * using the argument region to define how to map Points into
     * offsets in the backingStorage.  The size of the Rail
     * must be at least as large as the number of points in the boundingBox
     * of the given Region.
     * 
     * @param reg The region over which to define the array.
     * @param backingStore The backing storage for the array data.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Region* reg,
                           ::x10::lang::Rail< TPMGL(T) >* backingStore) {
    
    //#line 233 "x10/regionarray/Array.x10"
    FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125691 = reg;
        if (!((!::x10aux::struct_equals(t__125691, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165712))));
        }
        t__125691;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 235 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg);
    
    //#line 236 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = crh->FMGL(min0);
    
    //#line 237 "x10/regionarray/Array.x10"
    this->FMGL(layout_stride1) = crh->FMGL(stride1);
    
    //#line 238 "x10/regionarray/Array.x10"
    this->FMGL(layout_min1) = crh->FMGL(min1);
    
    //#line 239 "x10/regionarray/Array.x10"
    this->FMGL(layout) = crh->FMGL(layout);
    
    //#line 240 "x10/regionarray/Array.x10"
    x10_long n = crh->FMGL(size);
    
    //#line 241 "x10/regionarray/Array.x10"
    if (((n) > ((x10_long)(::x10aux::nullCheck(backingStore)->FMGL(size)))))
    {
        
        //#line 242 "x10/regionarray/Array.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::x10::regionarray::Array_Strings::sl__165713))));
    }
    
    //#line 244 "x10/regionarray/Array.x10"
    this->FMGL(raw) = (__extension__ ({
        ::x10::lang::Rail< TPMGL(T) >* t__122570 = backingStore;
        if (!((!::x10aux::struct_equals(t__122570, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165714))));
        }
        t__122570;
    }))
    ;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::regionarray::Region* reg,
                           ::x10::lang::Rail< TPMGL(T) >* backingStore)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(reg, backingStore);
    return this_;
}



//#line 253 "x10/regionarray/Array.x10"
/**
     * Construct an Array view of a backing Rail
     * using the region 0..(backingStore.size-1)
     * 
     * @param backingStore The backing storage for the array data.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::lang::Rail< TPMGL(T) >* backingStore) {
    
    //#line 255 "x10/regionarray/Array.x10"
    x10_long s = (x10_long)(::x10aux::nullCheck(backingStore)->FMGL(size));
    
    //#line 256 "x10/regionarray/Array.x10"
    ::x10::regionarray::RectRegion1D* myReg =  (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
    (myReg)->::x10::regionarray::RectRegion1D::_constructor(
      ((s) - (((x10_long)1ll))));
    
    //#line 257 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = s;
    
    //#line 259 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 260 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 261 "x10/regionarray/Array.x10"
    this->FMGL(raw) = (__extension__ ({
        ::x10::lang::Rail< TPMGL(T) >* t__122579 = backingStore;
        if (!((!::x10aux::struct_equals(t__122579, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165714))));
        }
        t__122579;
    }))
    ;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::lang::Rail< TPMGL(T) >* backingStore)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(backingStore);
    return this_;
}



//#line 268 "x10/regionarray/Array.x10"
/**
     * Construct Array over the region 0..(size-1) whose elements are zero-initialized.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           x10_long size) {
    
    //#line 270 "x10/regionarray/Array.x10"
    ::x10::regionarray::RectRegion1D* myReg =  (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
    (myReg)->::x10::regionarray::RectRegion1D::_constructor(
      ((size) - (((x10_long)1ll))));
    
    //#line 271 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = size;
    
    //#line 273 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 274 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 275 "x10/regionarray/Array.x10"
    this->FMGL(raw) = ::x10::lang::Rail< TPMGL(T) >::_make(size);
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           x10_long size) {
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(size);
    return this_;
}



//#line 282 "x10/regionarray/Array.x10"
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           x10_boolean zeroed, x10_long size) {
    
    //#line 284 "x10/regionarray/Array.x10"
    ::x10::regionarray::RectRegion1D* myReg =  (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
    (myReg)->::x10::regionarray::RectRegion1D::_constructor(
      ((size) - (((x10_long)1ll))));
    
    //#line 285 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = size;
    
    //#line 287 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 288 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 289 "x10/regionarray/Array.x10"
    if (zeroed) {
        
        //#line 290 "x10/regionarray/Array.x10"
        this->FMGL(raw) = ::x10::lang::Rail< TPMGL(T) >::_make(size);
    } else {
        
        //#line 292 "x10/regionarray/Array.x10"
        this->FMGL(raw) = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(size, false);
    }
    
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           x10_boolean zeroed, x10_long size)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(zeroed, size);
    return this_;
}



//#line 312 "x10/regionarray/Array.x10"
/**
     * Construct Array over the region 0..(size-1) whose
     * values are initialized as specified by the init function.
     * The function will be evaluated exactly once for each point
     * in reg in an arbitrary order to 
     * compute the initial value for each array element.</p>
     * 
     * It is unspecified whether the function evaluations will
     * be done sequentially for each point by the current activity 
     * or concurrently for disjoint sets of points by one or more 
     * child activities. 
     * 
     * 
     * @param reg The region over which to construct the array.
     * @param init The function to use to initialize the array.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           x10_long size, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init) {
    
    //#line 314 "x10/regionarray/Array.x10"
    ::x10::regionarray::RectRegion1D* myReg =  (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
    (myReg)->::x10::regionarray::RectRegion1D::_constructor(
      ((size) - (((x10_long)1ll))));
    
    //#line 315 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = size;
    
    //#line 317 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 318 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 319 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(size, false);
    
    //#line 320 "x10/regionarray/Array.x10"
    x10_long i__124457max__125696 = ((size) - (((x10_long)1ll)));
    {
        x10_long i__125697;
        for (i__125697 = ((x10_long)0ll); ((i__125697) <= (i__124457max__125696));
             i__125697 = ((i__125697) + (((x10_long)1ll))))
        {
            
            //#line 321 "x10/regionarray/Array.x10"
            r->x10::lang::template Rail< TPMGL(T) >::__set(
              i__125697, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(init), 
                i__125697));
        }
    }
    
    //#line 323 "x10/regionarray/Array.x10"
    this->FMGL(raw) = r;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           x10_long size, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(size, init);
    return this_;
}



//#line 333 "x10/regionarray/Array.x10"
/**
     * Construct Array over the region 0..(size-1) whose
     * values are initialized to be init
     * 
     * @param reg The region over which to construct the array.
     * @param init The function to use to initialize the array.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           x10_long size, TPMGL(T) init) {
    
    //#line 335 "x10/regionarray/Array.x10"
    ::x10::regionarray::RectRegion1D* myReg =  (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
    (myReg)->::x10::regionarray::RectRegion1D::_constructor(
      ((size) - (((x10_long)1ll))));
    
    //#line 336 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = size;
    
    //#line 338 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 339 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 340 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(size, false);
    
    //#line 341 "x10/regionarray/Array.x10"
    x10_long i__124475max__125700 = ((size) - (((x10_long)1ll)));
    {
        x10_long i__125701;
        for (i__125701 = ((x10_long)0ll); ((i__125701) <= (i__124475max__125700));
             i__125701 = ((i__125701) + (((x10_long)1ll))))
        {
            
            //#line 342 "x10/regionarray/Array.x10"
            r->x10::lang::template Rail< TPMGL(T) >::__set(
              i__125701, init);
        }
    }
    
    //#line 344 "x10/regionarray/Array.x10"
    this->FMGL(raw) = r;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           x10_long size, TPMGL(T) init) {
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(size, init);
    return this_;
}



//#line 353 "x10/regionarray/Array.x10"
/**
     * Construct a copy of the given Array.
     * 
     * @param init The array to copy.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Array<TPMGL(T)>* init) {
    
    //#line 355 "x10/regionarray/Array.x10"
    FMGL(region) = ::x10aux::nullCheck(init)->FMGL(region);
    FMGL(rank) = ::x10aux::nullCheck(init)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(init)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(init)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(init)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(init)->FMGL(size);
    
    //#line 356 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = ::x10aux::nullCheck(init)->FMGL(layout_min0);
    
    //#line 357 "x10/regionarray/Array.x10"
    this->FMGL(layout_stride1) = ::x10aux::nullCheck(init)->FMGL(layout_stride1);
    
    //#line 358 "x10/regionarray/Array.x10"
    this->FMGL(layout_min1) = ::x10aux::nullCheck(init)->FMGL(layout_min1);
    
    //#line 359 "x10/regionarray/Array.x10"
    this->FMGL(layout) = ::x10aux::nullCheck(init)->FMGL(layout);
    
    //#line 360 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(init)->FMGL(raw))->FMGL(size)), false);
    
    //#line 361 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      ::x10aux::nullCheck(init)->FMGL(raw), ((x10_long)0ll),
      r, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(r)->FMGL(size)));
    
    //#line 362 "x10/regionarray/Array.x10"
    this->FMGL(raw) = r;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::regionarray::Array<TPMGL(T)>* init)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(init);
    return this_;
}



//#line 371 "x10/regionarray/Array.x10"
/**
     * Construct a copy of the given RemoteArray.
     * 
     * @param init The remote array to copy.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::regionarray::RemoteArray<TPMGL(T)>* init) {
    
    //#line 373 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array<TPMGL(T)>* this__125705 = this;
    ::x10::regionarray::Array<TPMGL(T)>* init__125706 = (::x10aux::nullCheck(init)->FMGL(array))->__apply();
    
    //#line 355 "x10/regionarray/Array.x10"
    ::x10aux::nullCheck(this__125705)->FMGL(region) = ::x10aux::nullCheck(init__125706)->FMGL(region);
    ::x10aux::nullCheck(this__125705)->FMGL(rank) = ::x10aux::nullCheck(init__125706)->FMGL(rank);
    ::x10aux::nullCheck(this__125705)->FMGL(rect) = ::x10aux::nullCheck(init__125706)->FMGL(rect);
    ::x10aux::nullCheck(this__125705)->FMGL(zeroBased) = ::x10aux::nullCheck(init__125706)->FMGL(zeroBased);
    ::x10aux::nullCheck(this__125705)->FMGL(rail) = ::x10aux::nullCheck(init__125706)->FMGL(rail);
    ::x10aux::nullCheck(this__125705)->FMGL(size) = ::x10aux::nullCheck(init__125706)->FMGL(size);
    
    //#line 356 "x10/regionarray/Array.x10"
    ::x10aux::nullCheck(this__125705)->FMGL(layout_min0) =
      ::x10aux::nullCheck(init__125706)->FMGL(layout_min0);
    
    //#line 357 "x10/regionarray/Array.x10"
    ::x10aux::nullCheck(this__125705)->FMGL(layout_stride1) =
      ::x10aux::nullCheck(init__125706)->FMGL(layout_stride1);
    
    //#line 358 "x10/regionarray/Array.x10"
    ::x10aux::nullCheck(this__125705)->FMGL(layout_min1) =
      ::x10aux::nullCheck(init__125706)->FMGL(layout_min1);
    
    //#line 359 "x10/regionarray/Array.x10"
    ::x10aux::nullCheck(this__125705)->FMGL(layout) = ::x10aux::nullCheck(init__125706)->FMGL(layout);
    
    //#line 360 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r__125704 = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(init__125706)->FMGL(raw))->FMGL(size)), false);
    
    //#line 361 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      ::x10aux::nullCheck(init__125706)->FMGL(raw), ((x10_long)0ll),
      r__125704, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(r__125704)->FMGL(size)));
    
    //#line 362 "x10/regionarray/Array.x10"
    ::x10aux::nullCheck(this__125705)->FMGL(raw) = r__125704;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::regionarray::RemoteArray<TPMGL(T)>* init)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(init);
    return this_;
}



//#line 381 "x10/regionarray/Array.x10"
/**
     * Return the string representation of this array.
     * 
     * @return the string representation of this array.
     */
template<class TPMGL(T)> ::x10::lang::String* x10::regionarray::Array<TPMGL(T)>::toString(
  ) {
    
    //#line 382 "x10/regionarray/Array.x10"
    if (this->FMGL(rail)) {
        
        //#line 383 "x10/regionarray/Array.x10"
        ::x10::util::StringBuilder* sb =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
        (sb)->::x10::util::StringBuilder::_constructor();
        
        //#line 384 "x10/regionarray/Array.x10"
        sb->add((&::x10::regionarray::Array_Strings::sl__165715));
        
        //#line 385 "x10/regionarray/Array.x10"
        x10_long sz = (__extension__ ({
            x10_long a__125271 = this->FMGL(size);
            ((a__125271) < (((x10_long)10ll))) ? (a__125271)
              : (((x10_long)10ll));
        }))
        ;
        
        //#line 386 "x10/regionarray/Array.x10"
        x10_long i__124493max__125707 = ((sz) - (((x10_long)1ll)));
        {
            x10_long i__125708;
            for (i__125708 = ((x10_long)0ll); ((i__125708) <= (i__124493max__125707));
                 i__125708 = ((i__125708) + (((x10_long)1ll))))
            {
                
                //#line 387 "x10/regionarray/Array.x10"
                if (((i__125708) > (((x10_long)0ll)))) {
                    sb->add((&::x10::regionarray::Array_Strings::sl__165716));
                }
                
                //#line 388 "x10/regionarray/Array.x10"
                sb->add(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__165717), this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                                                                        i__125708)));
            }
        }
        
        //#line 390 "x10/regionarray/Array.x10"
        if (((sz) < (this->FMGL(size)))) {
            sb->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__165718), ((this->FMGL(size)) - (sz))), (&::x10::regionarray::Array_Strings::sl__165719)));
        }
        
        //#line 391 "x10/regionarray/Array.x10"
        sb->add((&::x10::regionarray::Array_Strings::sl__165720));
        
        //#line 392 "x10/regionarray/Array.x10"
        return sb->toString();
        
    } else {
        
        //#line 394 "x10/regionarray/Array.x10"
        return ::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__165721), this->FMGL(region)), (&::x10::regionarray::Array_Strings::sl__165722));
        
    }
    
}

//#line 404 "x10/regionarray/Array.x10"
/**
     * Return an iterator over the points in the region of this array.
     * 
     * @return an iterator over the points in the region of this array.
     * @see x10.lang.Iterable[T]#iterator()
     */
template<class TPMGL(T)> ::x10::lang::Iterator< ::x10::lang::Point*>*
  x10::regionarray::Array<TPMGL(T)>::iterator() {
    return this->FMGL(region)->iterator();
    
}

//#line 412 "x10/regionarray/Array.x10"
/**
     * Return an Iterable[T] that can construct iterators 
     * over this array.<p>
     * @return an Iterable[T] over this array.
     */
template<class TPMGL(T)> ::x10::lang::Iterable<TPMGL(T)>*
  x10::regionarray::Array<TPMGL(T)>::values() {
    
    //#line 413 "x10/regionarray/Array.x10"
    if (this->FMGL(rect)) {
        
        //#line 414 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array__Anonymous__14235<TPMGL(T)>* alloc__125711 =
           (new (::x10aux::alloc_z< ::x10::regionarray::Array__Anonymous__14235<TPMGL(T)> >()) ::x10::regionarray::Array__Anonymous__14235<TPMGL(T)>());
        ::x10::regionarray::Array<TPMGL(T)>* out__125710 =
          this;
        
        //#line 55 "x10/regionarray/Array.x10"
        alloc__125711->FMGL(out__) = out__125710;
        
        //#line 414 "x10/regionarray/Array.x10"
        return reinterpret_cast< ::x10::lang::Iterable<TPMGL(T)>*>(alloc__125711);
        
    } else {
        
        //#line 422 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array__Anonymous__14520<TPMGL(T)>* alloc__125713 =
           (new (::x10aux::alloc_z< ::x10::regionarray::Array__Anonymous__14520<TPMGL(T)> >()) ::x10::regionarray::Array__Anonymous__14520<TPMGL(T)>());
        ::x10::regionarray::Array<TPMGL(T)>* out__125712 =
          this;
        
        //#line 55 "x10/regionarray/Array.x10"
        alloc__125713->FMGL(out__) = out__125712;
        
        //#line 422 "x10/regionarray/Array.x10"
        return reinterpret_cast< ::x10::lang::Iterable<TPMGL(T)>*>(alloc__125713);
        
    }
    
}

//#line 442 "x10/regionarray/Array.x10"
/**
     * Return the element of this array corresponding to the given index.
     * Only applies to one-dimensional arrays.
     * Functionally equivalent to indexing the array via a one-dimensional point.
     * 
     * @param i0 the given index in the first dimension
     * @return the element of this array corresponding to the given index.
     * @see #operator(Point)
     * @see #set(T, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__apply(
  x10_long i0) {
    
    //#line 444 "x10/regionarray/Array.x10"
    if (this->FMGL(rail)) {
        
        //#line 446 "x10/regionarray/Array.x10"
        return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                 i0);
        
    } else {
        
        //#line 448 "x10/regionarray/Array.x10"
        if ((true && !(this->FMGL(region)->contains(i0))))
        {
            
            //#line 449 "x10/regionarray/Array.x10"
            ::x10::regionarray::Array<void>::raiseBoundsError(
              i0);
        }
        
        //#line 451 "x10/regionarray/Array.x10"
        return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                 ((i0) - (this->FMGL(layout_min0))));
        
    }
    
}

//#line 466 "x10/regionarray/Array.x10"
/**
     * Return the element of this array corresponding to the given pair of indices.
     * Only applies to two-dimensional arrays.
     * Functionally equivalent to indexing the array via a two-dimensional point.
     * 
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @return the element of this array corresponding to the given pair of indices.
     * @see #operator(Point)
     * @see #set(T, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__apply(
  x10_long i0, x10_long i1) {
    
    //#line 467 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(i0, i1))))
    {
        
        //#line 468 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1);
    }
    
    //#line 470 "x10/regionarray/Array.x10"
    x10_long offset = ((i0) - (this->FMGL(layout_min0)));
    
    //#line 471 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (this->FMGL(layout_stride1)))) + (i1))) - (this->FMGL(layout_min1)));
    
    //#line 472 "x10/regionarray/Array.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             offset);
    
}

//#line 487 "x10/regionarray/Array.x10"
/**
     * Return the element of this array corresponding to the given triple of indices.
     * Only applies to three-dimensional arrays.
     * Functionally equivalent to indexing the array via a three-dimensional point.
     * 
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @param i2 the given index in the third dimension
     * @return the element of this array corresponding to the given triple of indices.
     * @see #operator(Point)
     * @see #set(T, Long, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__apply(
  x10_long i0, x10_long i1, x10_long i2) {
    
    //#line 488 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(i0, i1, i2))))
    {
        
        //#line 489 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1, i2);
    }
    
    //#line 491 "x10/regionarray/Array.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             (__extension__ ({
                 ::x10::regionarray::Array<TPMGL(T)>* this__125282 =
                   this;
                 
                 //#line 1300 "x10/regionarray/Array.x10"
                 x10_long offset__125281 = ((i0) - (::x10aux::nullCheck(this__125282)->FMGL(layout_min0)));
                 
                 //#line 1301 "x10/regionarray/Array.x10"
                 offset__125281 = ((((((offset__125281) * (::x10aux::nullCheck(this__125282)->FMGL(layout_stride1)))) + (i1))) - (::x10aux::nullCheck(this__125282)->FMGL(layout_min1)));
                 ((((((offset__125281) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125282)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                            ((x10_long)0ll))))) + (i2))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125282)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                              ((x10_long)1ll))));
             }))
             );
    
}

//#line 507 "x10/regionarray/Array.x10"
/**
     * Return the element of this array corresponding to the given quartet of indices.
     * Only applies to four-dimensional arrays.
     * Functionally equivalent to indexing the array via a four-dimensional point.
     * 
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @param i2 the given index in the third dimension
     * @param i3 the given index in the fourth dimension
     * @return the element of this array corresponding to the given quartet of indices.
     * @see #operator(Point)
     * @see #set(T, Long, Long, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__apply(
  x10_long i0, x10_long i1, x10_long i2, x10_long i3) {
    
    //#line 508 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(i0, i1, i2,
                                                i3)))) {
        
        //#line 509 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1, i2, i3);
    }
    
    //#line 511 "x10/regionarray/Array.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             (__extension__ ({
                 ::x10::regionarray::Array<TPMGL(T)>* this__125289 =
                   this;
                 
                 //#line 1307 "x10/regionarray/Array.x10"
                 x10_long offset__125288 = ((i0) - (::x10aux::nullCheck(this__125289)->FMGL(layout_min0)));
                 
                 //#line 1308 "x10/regionarray/Array.x10"
                 offset__125288 = ((((((offset__125288) * (::x10aux::nullCheck(this__125289)->FMGL(layout_stride1)))) + (i1))) - (::x10aux::nullCheck(this__125289)->FMGL(layout_min1)));
                 
                 //#line 1309 "x10/regionarray/Array.x10"
                 offset__125288 = ((((((offset__125288) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125289)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                             ((x10_long)0ll))))) + (i2))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125289)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll))));
                 ((((((offset__125288) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125289)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                            ((x10_long)2ll))))) + (i3))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125289)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                              ((x10_long)3ll))));
             }))
             );
    
}

//#line 523 "x10/regionarray/Array.x10"
/**
     * Return the element of this array corresponding to the given point.
     * The rank of the given point has to be the same as the rank of this array.
     * 
     * @param pt the given point
     * @return the element of this array corresponding to the given point.
     * @see #operator(Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__apply(
  ::x10::lang::Point* pt) {
    
    //#line 524 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(pt)))) {
        
        //#line 525 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          pt);
    }
    
    //#line 527 "x10/regionarray/Array.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             (__extension__ ({
                 ::x10::regionarray::Array<TPMGL(T)>* this__125297 =
                   this;
                 
                 //#line 1315 "x10/regionarray/Array.x10"
                 x10_long offset__125292 = ((::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                                               ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125297)->FMGL(layout_min0)));
                 
                 //#line 1316 "x10/regionarray/Array.x10"
                 if (((::x10aux::nullCheck(pt)->FMGL(rank)) > (((x10_long)1ll))))
                 {
                     
                     //#line 1317 "x10/regionarray/Array.x10"
                     offset__125292 = ((((((offset__125292) * (::x10aux::nullCheck(this__125297)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                                                                                                                               ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125297)->FMGL(layout_min1)));
                     
                     //#line 1318 "x10/regionarray/Array.x10"
                     x10_long i__124660max__125714 = ((::x10aux::nullCheck(pt)->FMGL(rank)) - (((x10_long)1ll)));
                     {
                         x10_long i__125715;
                         for (i__125715 = ((x10_long)2ll);
                              ((i__125715) <= (i__124660max__125714));
                              i__125715 = ((i__125715) + (((x10_long)1ll))))
                         {
                             
                             //#line 1319 "x10/regionarray/Array.x10"
                             offset__125292 = ((((((offset__125292) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125297)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                         ((((x10_long)2ll)) * (((i__125715) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                                                                                                                                            i__125715)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125297)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                               ((((((x10_long)2ll)) * (((i__125715) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                         }
                     }
                     
                 }
                 offset__125292;
             }))
             );
    
}

//#line 543 "x10/regionarray/Array.x10"
/**
     * Set the element of this array corresponding to the given index to the given value.
     * Return the new value of the element.
     * Only applies to one-dimensional arrays.
     * Functionally equivalent to setting the array via a one-dimensional point.
     * 
     * @param v the given value
     * @param i0 the given index in the first dimension
     * @return the new value of the element of this array corresponding to the given index.
     * @see #operator(Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__set(
  x10_long i0, TPMGL(T) v) {
    
    //#line 545 "x10/regionarray/Array.x10"
    if (this->FMGL(rail)) {
        
        //#line 547 "x10/regionarray/Array.x10"
        this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
          i0, v);
    } else {
        
        //#line 549 "x10/regionarray/Array.x10"
        if ((true && !(this->FMGL(region)->contains(i0))))
        {
            
            //#line 550 "x10/regionarray/Array.x10"
            ::x10::regionarray::Array<void>::raiseBoundsError(
              i0);
        }
        
        //#line 552 "x10/regionarray/Array.x10"
        this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
          ((i0) - (this->FMGL(layout_min0))), v);
    }
    
    //#line 554 "x10/regionarray/Array.x10"
    return v;
    
}

//#line 570 "x10/regionarray/Array.x10"
/**
     * Set the element of this array corresponding to the given pair of indices to the given value.
     * Return the new value of the element.
     * Only applies to two-dimensional arrays.
     * Functionally equivalent to setting the array via a two-dimensional point.
     * 
     * @param v the given value
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @return the new value of the element of this array corresponding to the given pair of indices.
     * @see #operator(Long, Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__set(
  x10_long i0, x10_long i1, TPMGL(T) v) {
    
    //#line 571 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(i0, i1))))
    {
        
        //#line 572 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1);
    }
    
    //#line 574 "x10/regionarray/Array.x10"
    x10_long offset = ((i0) - (this->FMGL(layout_min0)));
    
    //#line 575 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (this->FMGL(layout_stride1)))) + (i1))) - (this->FMGL(layout_min1)));
    
    //#line 576 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      offset, v);
    
    //#line 577 "x10/regionarray/Array.x10"
    return v;
    
}

//#line 594 "x10/regionarray/Array.x10"
/**
     * Set the element of this array corresponding to the given triple of indices to the given value.
     * Return the new value of the element.
     * Only applies to three-dimensional arrays.
     * Functionally equivalent to setting the array via a three-dimensional point.
     * 
     * @param v the given value
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @param i2 the given index in the third dimension
     * @return the new value of the element of this array corresponding to the given triple of indices.
     * @see #operator(Long, Long, Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__set(
  x10_long i0, x10_long i1, x10_long i2, TPMGL(T) v) {
    
    //#line 595 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(i0, i1, i2))))
    {
        
        //#line 596 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1, i2);
    }
    
    //#line 598 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      (__extension__ ({
          ::x10::regionarray::Array<TPMGL(T)>* this__125303 =
            this;
          
          //#line 1300 "x10/regionarray/Array.x10"
          x10_long offset__125302 = ((i0) - (::x10aux::nullCheck(this__125303)->FMGL(layout_min0)));
          
          //#line 1301 "x10/regionarray/Array.x10"
          offset__125302 = ((((((offset__125302) * (::x10aux::nullCheck(this__125303)->FMGL(layout_stride1)))) + (i1))) - (::x10aux::nullCheck(this__125303)->FMGL(layout_min1)));
          ((((((offset__125302) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125303)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                     ((x10_long)0ll))))) + (i2))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125303)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                       ((x10_long)1ll))));
      }))
      , v);
    
    //#line 599 "x10/regionarray/Array.x10"
    return v;
    
}

//#line 617 "x10/regionarray/Array.x10"
/**
     * Set the element of this array corresponding to the given quartet of indices to the given value.
     * Return the new value of the element.
     * Only applies to four-dimensional arrays.
     * Functionally equivalent to setting the array via a four-dimensional point.
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
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__set(
  x10_long i0, x10_long i1, x10_long i2, x10_long i3, TPMGL(T) v) {
    
    //#line 618 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(i0, i1, i2,
                                                i3)))) {
        
        //#line 619 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1, i2, i3);
    }
    
    //#line 621 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      (__extension__ ({
          ::x10::regionarray::Array<TPMGL(T)>* this__125310 =
            this;
          
          //#line 1307 "x10/regionarray/Array.x10"
          x10_long offset__125309 = ((i0) - (::x10aux::nullCheck(this__125310)->FMGL(layout_min0)));
          
          //#line 1308 "x10/regionarray/Array.x10"
          offset__125309 = ((((((offset__125309) * (::x10aux::nullCheck(this__125310)->FMGL(layout_stride1)))) + (i1))) - (::x10aux::nullCheck(this__125310)->FMGL(layout_min1)));
          
          //#line 1309 "x10/regionarray/Array.x10"
          offset__125309 = ((((((offset__125309) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125310)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                      ((x10_long)0ll))))) + (i2))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125310)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                        ((x10_long)1ll))));
          ((((((offset__125309) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125310)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                     ((x10_long)2ll))))) + (i3))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125310)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                       ((x10_long)3ll))));
      }))
      , v);
    
    //#line 622 "x10/regionarray/Array.x10"
    return v;
    
}

//#line 636 "x10/regionarray/Array.x10"
/**
     * Set the element of this array corresponding to the given point to the given value.
     * Return the new value of the element.
     * The rank of the given point has to be the same as the rank of this array.
     * 
     * @param v the given value
     * @param pt the given point
     * @return the new value of the element of this array corresponding to the given point.
     * @see #operator(Point)
     * @see #set(T, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__set(
  ::x10::lang::Point* p, TPMGL(T) v) {
    
    //#line 637 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(p)))) {
        
        //#line 638 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          p);
    }
    
    //#line 640 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      (__extension__ ({
          ::x10::regionarray::Array<TPMGL(T)>* this__125318 =
            this;
          
          //#line 1315 "x10/regionarray/Array.x10"
          x10_long offset__125313 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                        ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125318)->FMGL(layout_min0)));
          
          //#line 1316 "x10/regionarray/Array.x10"
          if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
          {
              
              //#line 1317 "x10/regionarray/Array.x10"
              offset__125313 = ((((((offset__125313) * (::x10aux::nullCheck(this__125318)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                        ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125318)->FMGL(layout_min1)));
              
              //#line 1318 "x10/regionarray/Array.x10"
              x10_long i__124660max__125717 = ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
              {
                  x10_long i__125718;
                  for (i__125718 = ((x10_long)2ll); ((i__125718) <= (i__124660max__125717));
                       i__125718 = ((i__125718) + (((x10_long)1ll))))
                  {
                      
                      //#line 1319 "x10/regionarray/Array.x10"
                      offset__125313 = ((((((offset__125313) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125318)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                  ((((x10_long)2ll)) * (((i__125718) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                     i__125718)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125318)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                        ((((((x10_long)2ll)) * (((i__125718) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                  }
              }
              
          }
          offset__125313;
      }))
      , v);
    
    //#line 641 "x10/regionarray/Array.x10"
    return v;
    
}

//#line 650 "x10/regionarray/Array.x10"
/**
     * Fill all elements of the array to contain the argument value.
     * 
     * @param v the value with which to fill the array
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::fill(
  TPMGL(T) v) {
    
    //#line 651 "x10/regionarray/Array.x10"
    if (this->FMGL(rect)) {
        
        //#line 654 "x10/regionarray/Array.x10"
        this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::fill(
          v);
    } else {
        
        //#line 656 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124511;
            for (p__124511 = this->FMGL(region)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124511));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124511));
                
                //#line 657 "x10/regionarray/Array.x10"
                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                  (__extension__ ({
                      ::x10::regionarray::Array<TPMGL(T)>* this__125326 =
                        this;
                      
                      //#line 1315 "x10/regionarray/Array.x10"
                      x10_long offset__125321 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                    ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125326)->FMGL(layout_min0)));
                      
                      //#line 1316 "x10/regionarray/Array.x10"
                      if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                      {
                          
                          //#line 1317 "x10/regionarray/Array.x10"
                          offset__125321 = ((((((offset__125321) * (::x10aux::nullCheck(this__125326)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                    ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125326)->FMGL(layout_min1)));
                          
                          //#line 1318 "x10/regionarray/Array.x10"
                          x10_long i__124660max__125720 =
                            ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                          {
                              x10_long i__125721;
                              for (i__125721 = ((x10_long)2ll);
                                   ((i__125721) <= (i__124660max__125720));
                                   i__125721 = ((i__125721) + (((x10_long)1ll))))
                              {
                                  
                                  //#line 1319 "x10/regionarray/Array.x10"
                                  offset__125321 = ((((((offset__125321) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125326)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                              ((((x10_long)2ll)) * (((i__125721) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                 i__125721)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125326)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                    ((((((x10_long)2ll)) * (((i__125721) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                              }
                          }
                          
                      }
                      offset__125321;
                  }))
                  , v);
            }
        }
        
    }
    
}

//#line 667 "x10/regionarray/Array.x10"
/**
     * Fill all elements of the array with the zero value of type T 
     * @see x10.lang.Zero.get[T]()
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::clear(
  ) {
    
    //#line 668 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::clear(
      ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(this->FMGL(raw))->FMGL(size)));
}

//#line 684 "x10/regionarray/Array.x10"
/**
     * Map the function onto the elements of this array
     * constructing a new result array such that for all points <code>p</code>
     * in <code>this.region</code>,
     * <code>result(p) == op(this(p))</code>.<p>
     * 
     * @param op the function to apply to each element of the array
     * @return a new array with the same region as this array where <code>result(p) == op(this(p))</code>
     * 
     * @see #reduce((U,T)=>U,U)
     * @see #scan((U,T)=>U,U)
     */

//#line 702 "x10/regionarray/Array.x10"
/**
     * Map the given function onto the elements of this array
     * storing the results in the dst array such that for all points <code>p</code>
     * in <code>this.region</code>,
     * <code>dst(p) == op(this(p))</code>.<p>
     * 
     * @param dst the destination array for the results of the map operation
     * @param op the function to apply to each element of the array
     * @return dst after applying the map operation.
     * 
     * @see #reduce((U,T)=>U,U)
     * @see #scan((U,T)=>U,U)
     */

//#line 733 "x10/regionarray/Array.x10"
/**
     * Map the given function onto the elements of this array for the subset
     * of points contained in the filter region such that for all points <code>p</code>
     * in <code>filter</code>,
     * <code>dst(p) == op(this(p))</code>.<p>
     * 
     * @param dst the destination array for the results of the map operation
     * @param filter the region to select the subset of points to include in the map
     * @param op the function to apply to each element of the array
     * @return dst after applying the map operation.
     * 
     * @see #reduce((U,T)=>U,U)
     * @see #scan((U,T)=>U,U)
     */

//#line 754 "x10/regionarray/Array.x10"
/**
     * Map the given function onto the elements of this array
     * and the other src array, storing the results in a new result array 
     * such that for all points <code>p</code> in <code>this.region</code>,
     * <code>result(p) == op(this(p), src(p))</code>.<p>
     * 
     * @param src the other src array
     * @param op the function to apply to each element of the array
     * @return a new array with the same region as this array containing the result of the map
     * @see #reduce((U,T)=>U,U)
     * @see #scan((U,T)=>U,U)
     */

//#line 772 "x10/regionarray/Array.x10"
/**
     * Map the given function onto the elements of this array
     * and the other src array, storing the results in the given dst array 
     * such that for all points <code>p</code> in <code>this.region</code>,
     * <code>dst(p) == op(this(p), src(p))</code>.<p>
     * 
     * @param dst the destination array for the map operation
     * @param src the second source array for the map operation
     * @param op the function to apply to each element of the array
     * @return destination after applying the map operation.
     * @see #reduce((U,T)=>U,U)
     * @see #scan((U,T)=>U,U)
     */

//#line 804 "x10/regionarray/Array.x10"
/**
     * Map the given function onto the elements of this array
     * and the other src array for the subset of points contained in the filter region, 
     * storing the results in the given dst array such that for all points <code>p</code> 
     * in <code>filter</code>,
     * <code>dst(p) == op(this(p), src(p))</code>.<p>
     * 
     * @param dst the destination array for the map operation
     * @param src the second source array for the map operation
     * @param filter the region to select the subset of points to include in the map
     * @param op the function to apply to each element of the array
     * @return destination after applying the map operation.
     * @see #reduce((U,T)=>U,U)
     * @see #scan((U,T)=>U,U)
     */

//#line 825 "x10/regionarray/Array.x10"
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
     * @see #scan((U,T)=>U,U)
     */

//#line 854 "x10/regionarray/Array.x10"
/**
     * Scan this array using the function and the given initial value.
     * Starting with the initial value, apply the operation pointwise to the current running value
     * and each element of this array.
     * Return a new array with the same region as this array.
     * Each element of the new array is the result of applying the given function to the
     * current running value and the corresponding element of this array.
     * 
     * @param op the scan function
     * @param unit the given initial value
     * @return a new array containing the result of the scan 
     * @see #map((T)=>U)
     * @see #reduce((U,T)=>U,U)
     */

//#line 872 "x10/regionarray/Array.x10"
/**
     * Scan this array using the given function and the given initial value.
     * Starting with the initial value, apply the operation pointwise to the current running value
     * and each element of this array storing the result in the destination array.
     * Return the destination array where each element has been set to the result of 
     * applying the given operation to the current running value and the corresponding 
     * element of this array.
     * 
     * @param op the scan function
     * @param unit the given initial value
     * @return a new array containing the result of the scan 
     * @see #map((T)=>U)
     * @see #reduce((U,T)=>U,U)
     */

//#line 903 "x10/regionarray/Array.x10"
/**
     * Asynchronously copy all of the values from the source Array to the 
     * Array referenced by the destination RemoteArray.
     * The two arrays must be defined over Regions with equal size 
     * bounding boxes; if the backing storage for the two arrays is 
     * not of equal size, then an IllegalArgumentExeption will be raised.<p>
     * 
     * The activity created to do the copying will be registered with the
     * dynamically enclosing finish.<p>
     * 
     * Warning: This method is only intended to be used on Arrays containing
     *   non-Object data elements.  The elements are actually copied via an
     *   optimized DMA operation if available.  Therefore object-references will
     *   not be properly transferred. Ideally, future versions of the X10 type
     *   system would enable this restriction to be checked statically.</p>
     * 
     * @param src the source array.
     * @param dst the destination array.
     * @throws IllegalArgumentException if mismatch in size of backing storage
     *         of the two arrays.
     */

//#line 934 "x10/regionarray/Array.x10"
/**
     * Asynchronously copy the specified values from the source Array to the 
     * specified portion of the Array referenced by the destination RemoteArray.
     * If accessing any point in either the specified source or the 
     * specified destination range would in an ArrayIndexOutOfBoundsError
     * being raised, then this method will throw an IllegalArgumentException.<p>
     * 
     * The activity created to do the copying will be registered with the
     * dynamically enclosing finish.<p>
     * 
     * Warning: This method is only intended to be used on Arrays containing
     *   non-Object data elements.  The elements are actually copied via an
     *   optimized DMA operation if available.  Therefore object-references will
     *   not be properly transferred. Ideally, future versions of the X10 type
     *   system would enable this restriction to be checked statically.</p>
     * 
     * @param src the source array.
     * @param srcPoint the first element in this array to be copied.  
     * @param dst the destination array.  May actually be local or remote
     * @param dstPoint the first element in the destination
     *                 array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     * 
     * @throws IllegalArgumentException if the specified copy regions would 
     *         result in an ArrayIndexOutOfBoundsException.
     */

//#line 978 "x10/regionarray/Array.x10"
/**
     * Asynchronously copy the specified values from the source Array to the 
     * specified portion of the Array referenced by the destination RemoteArray.
     * The index arguments that are used to specify the start of the source
     * and destination regions are interpreted as of they were the result
     * of calling {@link Region#indexOf} on the Point that specifies the
     * start of the copy region.  Note that for Arrays that have the 
     * <code>rail</code> property, this exactly corresponds to the index
     * that would be used to access the element via apply or set.
     * If accessing any point in either the specified source or the 
     * specified destination range would in an ArrayIndexOutOfBoundsError
     * being raised, then this method will throw an IllegalArgumentException.<p>
     * 
     * The activity created to do the copying will be registered with the
     * dynamically enclosing finish.<p>
     * 
     * Warning: This method is only intended to be used on Arrays containing
     *   non-Object data elements.  The elements are actually copied via an
     *   optimized DMA operation if available.  Therefore object-references will
     *   not be properly transferred. Ideally, future versions of the X10 type
     *   system would enable this restriction to be checked statically.</p>
     * 
     * @param src the source array.
     * @param srcIndex the index of the first element in this array
     *        to be copied.  
     * @param dst the destination array.  May actually be local or remote
     * @param dstIndex the index of the first element in the destination
     *        array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     * 
     * @see Region#indexOf
     * 
     * @throws IllegalArgumentException if the specified copy regions would 
     *         result in an ArrayIndexOutOfBoundsException.
     */

//#line 1006 "x10/regionarray/Array.x10"
/**
     * Asynchronously copy all of the values from the source Array 
     * referenced by the RemoteArray to the destination Array.
     * The two arrays must be defined over Regions with equal size 
     * bounding boxes; if the backing storage for the two arrays is 
     * not of equal size, then an IllegalArgumentExeption will be raised.<p>
     * 
     * The activity created to do the copying will be registered with the
     * dynamically enclosing finish.<p>
     * 
     * Warning: This method is only intended to be used on Arrays containing
     *   non-Object data elements.  The elements are actually copied via an
     *   optimized DMA operation if available.  Therefore object-references will
     *   not be properly transferred. Ideally, future versions of the X10 type
     *   system would enable this restriction to be checked statically.</p>
     * 
     * @param src the source array.
     * @param dst the destination array.
     * @throws IllegalArgumentException if mismatch in size of backing storage
     *         of the two arrays.
     */

//#line 1037 "x10/regionarray/Array.x10"
/**
     * Asynchronously copy the specified values from the Array referenced by
     * the source RemoteArray to the specified portion of the destination Array.
     * If accessing any point in either the specified source or the 
     * specified destination range would in an ArrayIndexOutOfBoundsError
     * being raised, then this method will throw an IllegalArgumentException.<p>
     * 
     * The activity created to do the copying will be registered with the
     * dynamically enclosing finish.<p>
     * 
     * Warning: This method is only intended to be used on Arrays containing
     *   non-Object data elements.  The elements are actually copied via an
     *   optimized DMA operation if available.  Therefore object-references will
     *   not be properly transferred. Ideally, future versions of the X10 type
     *   system would enable this restriction to be checked statically.</p>
     * 
     * @param src the source array.
     * @param srcPoint the first element in this array to be copied.  
     * @param dst the destination array.  May actually be local or remote
     * @param dstPoint the first element in the destination
     *                 array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     * 
     * @throws IllegalArgumentException if the specified copy regions would 
     *         result in an ArrayIndexOutOfBoundsException.
     */

//#line 1081 "x10/regionarray/Array.x10"
/**
     * Asynchronously copy the specified values from the Array referenced by
     * the source RemoteArray to the specified portion of the destination Array.
     * The index arguments that are used to specify the start of the source
     * and destination regions are interpreted as of they were the result
     * of calling {@link Region#indexOf} on the Point that specifies the
     * start of the copy region.  Note that for Arrays that have the 
     * <code>rail</code> property, this exactly corresponds to the index
     * that would be used to access the element via apply or set.
     * If accessing any point in either the specified source or the 
     * specified destination range would in an ArrayIndexOutOfBoundsError
     * being raised, then this method will throw an IllegalArgumentException.<p>
     * 
     * The activity created to do the copying will be registered with the
     * dynamically enclosing finish.<p>
     * 
     * Warning: This method is only intended to be used on Arrays containing
     *   non-Object data elements.  The elements are actually copied via an
     *   optimized DMA operation if available.  Therefore object-references will
     *   not be properly transferred. Ideally, future versions of the X10 type
     *   system would enable this restriction to be checked statically.</p>
     * 
     * @param src the source array.
     * @param srcIndex the index of the first element in this array
     *        to be copied.  
     * @param dst the destination array.  May actually be local or remote
     * @param dstIndex the index of the first element in the destination
     *        array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     * 
     * @see Region#indexOf
     * 
     * @throws IllegalArgumentException if the specified copy regions would 
     *         result in an ArrayIndexOutOfBoundsException.
     */

//#line 1099 "x10/regionarray/Array.x10"
/**
     * Copy all of the values from the source Array to the destination Array.
     * The two arrays must be defined over Regions with equal size 
     * bounding boxes; if the backing storage for the two arrays is 
     * not of equal size, then an IllegalArgumentExeption will be raised.<p>
     * 
     * @param src the source array.
     * @param dst the destination array.
     * @throws IllegalArgumentException if mismatch in size of backing storage
     *         of the two arrays.
     */

//#line 1121 "x10/regionarray/Array.x10"
/**
     * Copy the specified values from the source Array to the 
     * specified portion of the destination Array.
     * If accessing any point in either the specified source or the 
     * specified destination range would in an ArrayIndexOutOfBoundsError
     * being raised, then this method will throw an IllegalArgumentException.<p>
     * 
     * @param src the source array.
     * @param srcPoint the first element in this array to be copied.  
     * @param dst the destination array.  May actually be local or remote
     * @param dstPoint the first element in the destination
     *                 array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     * 
     * @throws IllegalArgumentException if the specified copy regions would 
     *         result in an ArrayIndexOutOfBoundsException.
     */

//#line 1154 "x10/regionarray/Array.x10"
/**
     * Copy the specified values from the source Array to the 
     * specified portion of the destination Array.
     * The index arguments that are used to specify the start of the source
     * and destination regions are interpreted as of they were the result
     * of calling {@link Region#indexOf} on the Point that specifies the
     * start of the copy region.  Note that for Arrays that have the 
     * <code>rail</code> property, this exactly corresponds to the index
     * that would be used to access the element via apply or set.
     * If accessing any point in either the specified source or the 
     * specified destination range would in an ArrayIndexOutOfBoundsError
     * being raised, then this method will throw an IllegalArgumentException.<p>
     * 
     * @param src the source array.
     * @param srcIndex the index of the first element in this array
     *        to be copied.  
     * @param dst the destination array.  May actually be local or remote
     * @param dstIndex the index of the first element in the destination
     *        array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     * 
     * @see Region#indexOf
     * 
     * @throws IllegalArgumentException if the specified copy regions would 
     *         result in an ArrayIndexOutOfBoundsException.
     */

//#line 1174 "x10/regionarray/Array.x10"
/**
     * Copy the specified region from the source Array to this array.
     * If the specified region is not contained in the region for the source
     * array or this array, then an ArrayIndexOutOfBoundsError is raised.
     * 
     * @param src the source array.
     * @param region the region of the array to copy to this array
     * 
     * @see Region#indexOf
     * 
     * @throws ArrayIndexOutOfBoundsException if the specified region is not
     *        contained in the source array or this array
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::copy(
  ::x10::regionarray::Array<TPMGL(T)>* src, ::x10::regionarray::Region* r) {
    
    //#line 1176 "x10/regionarray/Array.x10"
    if (!(::x10aux::nullCheck(src)->FMGL(region)->contains(
            r))) {
        
        //#line 1177 "x10/regionarray/Array.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::ArrayIndexOutOfBoundsException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__165724), r), (&::x10::regionarray::Array_Strings::sl__165725)), ::x10aux::nullCheck(src)->FMGL(region)))));
    } else 
    //#line 1178 "x10/regionarray/Array.x10"
    if (!(this->FMGL(region)->contains(r))) {
        
        //#line 1179 "x10/regionarray/Array.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::ArrayIndexOutOfBoundsException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__165724), r), (&::x10::regionarray::Array_Strings::sl__165726)), this->FMGL(region)))));
    }
    
    //#line 1182 "x10/regionarray/Array.x10"
    if (((::x10aux::struct_equals(this->FMGL(rank), ((x10_long)3ll))) &&
        ::x10aux::nullCheck(r)->FMGL(rect))) {
        
        //#line 1183 "x10/regionarray/Array.x10"
        ::x10aux::nullCheck((__extension__ ({
            ::x10::regionarray::Array<TPMGL(T)>* t__122956 =
              this;
            if (!((::x10aux::struct_equals(::x10aux::nullCheck(t__122956)->FMGL(rank),
                                           ((x10_long)3ll)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165727))));
            }
            t__122956;
        }))
        )->x10::regionarray::template Array<TPMGL(T)>::copy3(
          (__extension__ ({
              ::x10::regionarray::Array<TPMGL(T)>* t__122958 =
                src;
              if (!((::x10aux::struct_equals(::x10aux::nullCheck(t__122958)->FMGL(rank),
                                             ((x10_long)3ll)))))
              {
                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165727))));
              }
              t__122958;
          }))
          , (__extension__ ({
              ::x10::regionarray::Region* t__122960 = r;
              if (!(((::x10aux::struct_equals(::x10aux::nullCheck(t__122960)->FMGL(rect),
                                              true)) && (::x10aux::struct_equals(::x10aux::nullCheck(t__122960)->FMGL(rank),
                                                                                 ((x10_long)3ll))))))
              {
                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165728))));
              }
              t__122960;
          }))
          );
        
        //#line 1184 "x10/regionarray/Array.x10"
        return;
    }
    
    //#line 1187 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* srcRaw = ::x10aux::nullCheck(src)->FMGL(raw);
    
    //#line 1188 "x10/regionarray/Array.x10"
    if ((::x10aux::struct_equals(this->FMGL(region), ::x10aux::nullCheck(src)->FMGL(region))))
    {
        
        //#line 1190 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124525;
            for (p__124525 = ::x10aux::nullCheck(r)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124525));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124525));
                
                //#line 1191 "x10/regionarray/Array.x10"
                x10_long offset = this->FMGL(region)->indexOf(
                                    p);
                
                //#line 1192 "x10/regionarray/Array.x10"
                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                  offset, srcRaw->x10::lang::template Rail< TPMGL(T) >::__apply(
                            offset));
            }
        }
        
    } else {
        
        //#line 1196 "x10/regionarray/Array.x10"
        ::x10::lang::Fun_0_1<x10_long, x10_long>* min = this->FMGL(region)->min();
        
        //#line 1197 "x10/regionarray/Array.x10"
        this->FMGL(region)->max();
        
        //#line 1198 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<x10_long>* delta =  (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_long> >()) ::x10::regionarray::Array<x10_long>());
        x10_long size__125935 = this->FMGL(rank);
        
        //#line 314 "x10/regionarray/Array.x10"
        ::x10::regionarray::RectRegion1D* myReg__125920 =
           (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
        (myReg__125920)->::x10::regionarray::RectRegion1D::_constructor(
          ((size__125935) - (((x10_long)1ll))));
        
        //#line 315 "x10/regionarray/Array.x10"
        delta->FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg__125920);
        delta->FMGL(rank) = ((x10_long)1ll);
        delta->FMGL(rect) = true;
        delta->FMGL(zeroBased) = true;
        delta->FMGL(rail) = true;
        delta->FMGL(size) = size__125935;
        
        //#line 317 "x10/regionarray/Array.x10"
        delta->FMGL(layout_min0) = delta->FMGL(layout_stride1) =
          delta->FMGL(layout_min1) = ((x10_long)0ll);
        
        //#line 318 "x10/regionarray/Array.x10"
        delta->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 319 "x10/regionarray/Array.x10"
        ::x10::lang::Rail< x10_long >* r__125921 = ::x10::lang::Rail< x10_long >::_makeUnsafe(size__125935, false);
        
        //#line 320 "x10/regionarray/Array.x10"
        x10_long i__124457max__125917 = ((size__125935) - (((x10_long)1ll)));
        {
            x10_long i__125918;
            for (i__125918 = ((x10_long)0ll); ((i__125918) <= (i__124457max__125917));
                 i__125918 = ((i__125918) + (((x10_long)1ll))))
            {
                
                //#line 321 "x10/regionarray/Array.x10"
                r__125921->x10::lang::template Rail< x10_long >::__set(
                  i__125918, ((((this->FMGL(region)->max(
                                   i__125918)) - (this->FMGL(region)->min(
                                                    i__125918)))) + (((x10_long)1ll))));
            }
        }
        
        //#line 323 "x10/regionarray/Array.x10"
        delta->FMGL(raw) = r__125921;
        
        //#line 1199 "x10/regionarray/Array.x10"
        ::x10::lang::Fun_0_1<x10_long, x10_long>* srcMin =
          ::x10aux::nullCheck(src)->FMGL(region)->min();
        
        //#line 1200 "x10/regionarray/Array.x10"
        ::x10aux::nullCheck(src)->FMGL(region)->max();
        
        //#line 1201 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<x10_long>* srcDelta =  (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_long> >()) ::x10::regionarray::Array<x10_long>());
        x10_long size__125936 = this->FMGL(rank);
        
        //#line 314 "x10/regionarray/Array.x10"
        ::x10::regionarray::RectRegion1D* myReg__125926 =
           (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
        (myReg__125926)->::x10::regionarray::RectRegion1D::_constructor(
          ((size__125936) - (((x10_long)1ll))));
        
        //#line 315 "x10/regionarray/Array.x10"
        srcDelta->FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg__125926);
        srcDelta->FMGL(rank) = ((x10_long)1ll);
        srcDelta->FMGL(rect) = true;
        srcDelta->FMGL(zeroBased) = true;
        srcDelta->FMGL(rail) = true;
        srcDelta->FMGL(size) = size__125936;
        
        //#line 317 "x10/regionarray/Array.x10"
        srcDelta->FMGL(layout_min0) = srcDelta->FMGL(layout_stride1) =
          srcDelta->FMGL(layout_min1) = ((x10_long)0ll);
        
        //#line 318 "x10/regionarray/Array.x10"
        srcDelta->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 319 "x10/regionarray/Array.x10"
        ::x10::lang::Rail< x10_long >* r__125927 = ::x10::lang::Rail< x10_long >::_makeUnsafe(size__125936, false);
        
        //#line 320 "x10/regionarray/Array.x10"
        x10_long i__124457max__125923 = ((size__125936) - (((x10_long)1ll)));
        {
            x10_long i__125924;
            for (i__125924 = ((x10_long)0ll); ((i__125924) <= (i__124457max__125923));
                 i__125924 = ((i__125924) + (((x10_long)1ll))))
            {
                
                //#line 321 "x10/regionarray/Array.x10"
                r__125927->x10::lang::template Rail< x10_long >::__set(
                  i__125924, ((((::x10aux::nullCheck(src)->FMGL(region)->max(
                                   i__125924)) - (::x10aux::nullCheck(src)->FMGL(region)->min(
                                                    i__125924)))) + (((x10_long)1ll))));
            }
        }
        
        //#line 323 "x10/regionarray/Array.x10"
        srcDelta->FMGL(raw) = r__125927;
        
        //#line 1202 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124545;
            for (p__124545 = ::x10aux::nullCheck(r)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124545));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124545));
                
                //#line 1203 "x10/regionarray/Array.x10"
                x10_long offset = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                      ((x10_long)0ll))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(min), 
                  ((x10_long)0ll))));
                
                //#line 1204 "x10/regionarray/Array.x10"
                x10_long srcOffset = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                         ((x10_long)0ll))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(srcMin), 
                  ((x10_long)0ll))));
                
                //#line 1205 "x10/regionarray/Array.x10"
                x10_long i__124527max__125932 = ((this->FMGL(rank)) - (((x10_long)1ll)));
                {
                    x10_long i__125933;
                    for (i__125933 = ((x10_long)1ll); ((i__125933) <= (i__124527max__125932));
                         i__125933 = ((i__125933) + (((x10_long)1ll))))
                    {
                        
                        //#line 1206 "x10/regionarray/Array.x10"
                        offset = ((((((offset) * ((__extension__ ({
                            
                            //#line 442 "x10/regionarray/Array.x10"
                            x10_long ret__125929;
                            delta->FMGL(raw)->x10::lang::template Rail< x10_long >::__apply(
                              i__125933);
                        }))
                        ))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                 i__125933)))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(min), 
                          i__125933)));
                        
                        //#line 1207 "x10/regionarray/Array.x10"
                        srcOffset = ((((((srcOffset) * ((__extension__ ({
                            
                            //#line 442 "x10/regionarray/Array.x10"
                            x10_long ret__125931;
                            srcDelta->FMGL(raw)->x10::lang::template Rail< x10_long >::__apply(
                              i__125933);
                        }))
                        ))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                 i__125933)))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(srcMin), 
                          i__125933)));
                    }
                }
                
                //#line 1209 "x10/regionarray/Array.x10"
                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                  offset, srcRaw->x10::lang::template Rail< TPMGL(T) >::__apply(
                            srcOffset));
            }
        }
        
    }
    
}

//#line 1214 "x10/regionarray/Array.x10"
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::copy3(
  ::x10::regionarray::Array<TPMGL(T)>* src, ::x10::regionarray::Region* r) {
    
    //#line 1215 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* srcRaw = ::x10aux::nullCheck(src)->FMGL(raw);
    
    //#line 1216 "x10/regionarray/Array.x10"
    if ((::x10aux::struct_equals(this->FMGL(region), ::x10aux::nullCheck(src)->FMGL(region))))
    {
        
        //#line 1218 "x10/regionarray/Array.x10"
        x10_long k__124548min__125940 = ::x10aux::nullCheck(r)->min(
                                          ((x10_long)2ll));
        x10_long k__124548max__125941 = ::x10aux::nullCheck(r)->max(
                                          ((x10_long)2ll));
        x10_long j__124567min__125942 = ::x10aux::nullCheck(r)->min(
                                          ((x10_long)1ll));
        x10_long j__124567max__125943 = ::x10aux::nullCheck(r)->max(
                                          ((x10_long)1ll));
        x10_long i__124586min__125944 = ::x10aux::nullCheck(r)->min(
                                          ((x10_long)0ll));
        x10_long i__124586max__125945 = ::x10aux::nullCheck(r)->max(
                                          ((x10_long)0ll));
        {
            x10_long i__125946;
            for (i__125946 = i__124586min__125944; ((i__125946) <= (i__124586max__125945));
                 i__125946 = ((i__125946) + (((x10_long)1ll))))
            {
                {
                    x10_long j__125948;
                    for (j__125948 = j__124567min__125942;
                         ((j__125948) <= (j__124567max__125943));
                         j__125948 = ((j__125948) + (((x10_long)1ll))))
                    {
                        {
                            x10_long k__125950;
                            for (k__125950 = k__124548min__125940;
                                 ((k__125950) <= (k__124548max__125941));
                                 k__125950 = ((k__125950) + (((x10_long)1ll))))
                            {
                                
                                //#line 1219 "x10/regionarray/Array.x10"
                                x10_long offset__125937 =
                                  this->FMGL(region)->indexOf(
                                    (__extension__ ({
                                        ::x10::lang::Rail< x10_long >* r__125938 =
                                          (__extension__ ({
                                            ::x10::lang::Rail< x10_long >* t__165705 =
                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)3ll), false);
                                            t__165705->x10::lang::template Rail< x10_long >::__set(
                                              ((x10_long)0ll),
                                              i__125946);
                                            t__165705->x10::lang::template Rail< x10_long >::__set(
                                              ((x10_long)1ll),
                                              j__125948);
                                            t__165705->x10::lang::template Rail< x10_long >::__set(
                                              ((x10_long)2ll),
                                              k__125950);
                                            t__165705;
                                        }))
                                        ;
                                        ::x10::lang::Point::make(
                                          r__125938);
                                    }))
                                    );
                                
                                //#line 1220 "x10/regionarray/Array.x10"
                                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                                  offset__125937, srcRaw->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                    offset__125937));
                            }
                        }
                        
                    }
                }
                
            }
        }
        
    } else {
        
        //#line 1223 "x10/regionarray/Array.x10"
        x10_long layout_stride2 = ::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                    ((x10_long)0ll));
        
        //#line 1224 "x10/regionarray/Array.x10"
        x10_long layout_stride3 = ::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                    ((x10_long)1ll));
        
        //#line 1226 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array__LayoutHelper crh =  ::x10::regionarray::Array__LayoutHelper::_alloc();
        (crh)->::x10::regionarray::Array__LayoutHelper::_constructor(
          ::x10aux::nullCheck(src)->FMGL(region));
        
        //#line 1227 "x10/regionarray/Array.x10"
        x10_long src_min0 = crh->FMGL(min0);
        
        //#line 1228 "x10/regionarray/Array.x10"
        x10_long src_max0 = ::x10aux::nullCheck(src)->FMGL(region)->max(
                              ((x10_long)0ll));
        
        //#line 1229 "x10/regionarray/Array.x10"
        x10_long src_stride1 = crh->FMGL(stride1);
        
        //#line 1230 "x10/regionarray/Array.x10"
        x10_long src_min1 = crh->FMGL(min1);
        
        //#line 1231 "x10/regionarray/Array.x10"
        x10_long src_max1 = ::x10aux::nullCheck(src)->FMGL(region)->max(
                              ((x10_long)1ll));
        
        //#line 1232 "x10/regionarray/Array.x10"
        ::x10::lang::Rail< x10_long >* src_layout = crh->FMGL(layout);
        
        //#line 1233 "x10/regionarray/Array.x10"
        x10_long src_stride2 = ::x10aux::nullCheck(src_layout)->x10::lang::template Rail< x10_long >::__apply(
                                 ((x10_long)0ll));
        
        //#line 1234 "x10/regionarray/Array.x10"
        x10_long src_stride3 = ::x10aux::nullCheck(src_layout)->x10::lang::template Rail< x10_long >::__apply(
                                 ((x10_long)1ll));
        
        //#line 1235 "x10/regionarray/Array.x10"
        x10_long src_min2 = ::x10aux::nullCheck(src)->FMGL(region)->min(
                              ((x10_long)2ll));
        
        //#line 1236 "x10/regionarray/Array.x10"
        x10_long src_max2 = ::x10aux::nullCheck(src)->FMGL(region)->max(
                              ((x10_long)2ll));
        
        //#line 1238 "x10/regionarray/Array.x10"
        {
            x10_long i__125968;
            for (i__125968 = src_min0; ((i__125968) <= (src_max0));
                 i__125968 = ((i__125968) + (((x10_long)1ll))))
            {
                
                //#line 1239 "x10/regionarray/Array.x10"
                x10_long offset__125964 = ((((i__125968) - (this->FMGL(layout_min0)))) * (this->FMGL(layout_stride1)));
                
                //#line 1240 "x10/regionarray/Array.x10"
                x10_long srcOffset__125965 = ((((i__125968) - (src_min0))) * (src_stride1));
                
                //#line 1241 "x10/regionarray/Array.x10"
                {
                    x10_long i__125962;
                    for (i__125962 = src_min1; ((i__125962) <= (src_max1));
                         i__125962 = ((i__125962) + (((x10_long)1ll))))
                    {
                        
                        //#line 1242 "x10/regionarray/Array.x10"
                        x10_long offset__125958 = ((((((offset__125964) + (i__125962))) - (this->FMGL(layout_min1)))) * (layout_stride2));
                        
                        //#line 1243 "x10/regionarray/Array.x10"
                        x10_long srcOffset__125959 = ((((((srcOffset__125965) + (i__125962))) - (src_min1))) * (src_stride2));
                        
                        //#line 1244 "x10/regionarray/Array.x10"
                        {
                            x10_long i__125956;
                            for (i__125956 = src_min2; ((i__125956) <= (src_max2));
                                 i__125956 = ((i__125956) + (((x10_long)1ll))))
                            {
                                
                                //#line 1245 "x10/regionarray/Array.x10"
                                x10_long offset__125952 =
                                  ((((offset__125958) + (i__125956))) - (layout_stride3));
                                
                                //#line 1246 "x10/regionarray/Array.x10"
                                x10_long srcOffset__125953 =
                                  ((((srcOffset__125959) + (i__125956))) - (src_stride3));
                                
                                //#line 1247 "x10/regionarray/Array.x10"
                                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                                  offset__125952, srcRaw->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                    srcOffset__125953));
                            }
                        }
                        
                    }
                }
                
            }
        }
        
    }
    
}

//#line 1254 "x10/regionarray/Array.x10"

//#line 1257 "x10/regionarray/Array.x10"

//#line 1260 "x10/regionarray/Array.x10"

//#line 1263 "x10/regionarray/Array.x10"

//#line 1266 "x10/regionarray/Array.x10"

//#line 1277 "x10/regionarray/Array.x10"

//#line 1278 "x10/regionarray/Array.x10"

//#line 1279 "x10/regionarray/Array.x10"

//#line 1287 "x10/regionarray/Array.x10"

//#line 1290 "x10/regionarray/Array.x10"
template<class TPMGL(T)> x10_long x10::regionarray::Array<TPMGL(T)>::offset(
  x10_long i0) {
    return ((i0) - (this->FMGL(layout_min0)));
    
}

//#line 1293 "x10/regionarray/Array.x10"
template<class TPMGL(T)> x10_long x10::regionarray::Array<TPMGL(T)>::offset(
  x10_long i0, x10_long i1) {
    
    //#line 1294 "x10/regionarray/Array.x10"
    x10_long offset = ((i0) - (this->FMGL(layout_min0)));
    
    //#line 1295 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (this->FMGL(layout_stride1)))) + (i1))) - (this->FMGL(layout_min1)));
    
    //#line 1296 "x10/regionarray/Array.x10"
    return offset;
    
}

//#line 1299 "x10/regionarray/Array.x10"
template<class TPMGL(T)> x10_long x10::regionarray::Array<TPMGL(T)>::offset(
  x10_long i0, x10_long i1, x10_long i2) {
    
    //#line 1300 "x10/regionarray/Array.x10"
    x10_long offset = ((i0) - (this->FMGL(layout_min0)));
    
    //#line 1301 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (this->FMGL(layout_stride1)))) + (i1))) - (this->FMGL(layout_min1)));
    
    //#line 1302 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                ((x10_long)0ll))))) + (i2))) - (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                  ((x10_long)1ll))));
    
    //#line 1303 "x10/regionarray/Array.x10"
    return offset;
    
}

//#line 1306 "x10/regionarray/Array.x10"
template<class TPMGL(T)> x10_long x10::regionarray::Array<TPMGL(T)>::offset(
  x10_long i0, x10_long i1, x10_long i2, x10_long i3) {
    
    //#line 1307 "x10/regionarray/Array.x10"
    x10_long offset = ((i0) - (this->FMGL(layout_min0)));
    
    //#line 1308 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (this->FMGL(layout_stride1)))) + (i1))) - (this->FMGL(layout_min1)));
    
    //#line 1309 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                ((x10_long)0ll))))) + (i2))) - (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                  ((x10_long)1ll))));
    
    //#line 1310 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                ((x10_long)2ll))))) + (i3))) - (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                  ((x10_long)3ll))));
    
    //#line 1311 "x10/regionarray/Array.x10"
    return offset;
    
}

//#line 1314 "x10/regionarray/Array.x10"
template<class TPMGL(T)> x10_long x10::regionarray::Array<TPMGL(T)>::offset(
  ::x10::lang::Point* pt) {
    
    //#line 1315 "x10/regionarray/Array.x10"
    x10_long offset = ((::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                          ((x10_long)(((x10_int)0))))) - (this->FMGL(layout_min0)));
    
    //#line 1316 "x10/regionarray/Array.x10"
    if (((::x10aux::nullCheck(pt)->FMGL(rank)) > (((x10_long)1ll))))
    {
        
        //#line 1317 "x10/regionarray/Array.x10"
        offset = ((((((offset) * (this->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                                                                     ((x10_long)1ll))))) - (this->FMGL(layout_min1)));
        
        //#line 1318 "x10/regionarray/Array.x10"
        x10_long i__124660max__125970 = ((::x10aux::nullCheck(pt)->FMGL(rank)) - (((x10_long)1ll)));
        {
            x10_long i__125971;
            for (i__125971 = ((x10_long)2ll); ((i__125971) <= (i__124660max__125970));
                 i__125971 = ((i__125971) + (((x10_long)1ll))))
            {
                
                //#line 1319 "x10/regionarray/Array.x10"
                offset = ((((((offset) * (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                            ((((x10_long)2ll)) * (((i__125971) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                                                                                                               i__125971)))) - (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                  ((((((x10_long)2ll)) * (((i__125971) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
            }
        }
        
    }
    
    //#line 1322 "x10/regionarray/Array.x10"
    return offset;
    
}

//#line 55 "x10/regionarray/Array.x10"
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>*
  x10::regionarray::Array<TPMGL(T)>::x10__regionarray__Array____this__x10__regionarray__Array(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::regionarray::Array<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::regionarray::Array<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(raw));
    buf.write(this->FMGL(layout_min0));
    buf.write(this->FMGL(layout_stride1));
    buf.write(this->FMGL(layout_min1));
    buf.write(this->FMGL(layout));
    buf.write(this->FMGL(region));
    buf.write(this->FMGL(rank));
    buf.write(this->FMGL(rect));
    buf.write(this->FMGL(zeroBased));
    buf.write(this->FMGL(rail));
    buf.write(this->FMGL(size));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::regionarray::Array<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(raw) = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
    FMGL(layout_min0) = buf.read<x10_long>();
    FMGL(layout_stride1) = buf.read<x10_long>();
    FMGL(layout_min1) = buf.read<x10_long>();
    FMGL(layout) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(region) = buf.read< ::x10::regionarray::Region*>();
    FMGL(rank) = buf.read<x10_long>();
    FMGL(rect) = buf.read<x10_boolean>();
    FMGL(zeroBased) = buf.read<x10_boolean>();
    FMGL(rail) = buf.read<x10_boolean>();
    FMGL(size) = buf.read<x10_long>();
}

template<class TPMGL(T)> void x10::regionarray::Array<void>::asyncCopy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                                       ::x10::regionarray::RemoteArray<TPMGL(T)>* dst) {
    
    //#line 904 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), ((x10_long)0ll),
      ::x10aux::nullCheck(dst)->FMGL(rawData), ((x10_long)0ll),
      (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(raw))->FMGL(size)));
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::asyncCopy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                                       ::x10::lang::Point* srcPoint,
                                                                       ::x10::regionarray::RemoteArray<TPMGL(T)>* dst,
                                                                       ::x10::lang::Point* dstPoint,
                                                                       x10_long numElems) {
    
    //#line 937 "x10/regionarray/Array.x10"
    ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra =
      ::x10aux::nullCheck(dst)->FMGL(array);
    
    //#line 938 "x10/regionarray/Array.x10"
    x10_long dstIndex = ::x10::xrx::Runtime::template evalAt< x10_long >(
                          ::x10::lang::Place::_make(((x10_long)((gra)->location))),
                          reinterpret_cast< ::x10::lang::Fun_0_0<x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_long> >(sizeof(x10_regionarray_Array__closure__1<TPMGL(T)>)))x10_regionarray_Array__closure__1<TPMGL(T)>(gra, dstPoint))),
                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 939 "x10/regionarray/Array.x10"
    x10_long srcIndex__125902 = ::x10aux::nullCheck(src)->FMGL(region)->indexOf(
                                  srcPoint);
    
    //#line 981 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), srcIndex__125902,
      ::x10aux::nullCheck(dst)->FMGL(rawData), dstIndex, numElems);
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::asyncCopy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                                       x10_long srcIndex,
                                                                       ::x10::regionarray::RemoteArray<TPMGL(T)>* dst,
                                                                       x10_long dstIndex,
                                                                       x10_long numElems) {
    
    //#line 981 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), srcIndex, ::x10aux::nullCheck(dst)->FMGL(rawData),
      dstIndex, numElems);
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::asyncCopy(::x10::regionarray::RemoteArray<TPMGL(T)>* src,
                                                                       ::x10::regionarray::Array<TPMGL(T)>* dst) {
    
    //#line 1007 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(rawData), ((x10_long)0ll),
      ::x10aux::nullCheck(dst)->FMGL(raw), ((x10_long)0ll),
      (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(raw))->FMGL(size)));
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::asyncCopy(::x10::regionarray::RemoteArray<TPMGL(T)>* src,
                                                                       ::x10::lang::Point* srcPoint,
                                                                       ::x10::regionarray::Array<TPMGL(T)>* dst,
                                                                       ::x10::lang::Point* dstPoint,
                                                                       x10_long numElems) {
    
    //#line 1040 "x10/regionarray/Array.x10"
    ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra =
      ::x10aux::nullCheck(src)->FMGL(array);
    
    //#line 1041 "x10/regionarray/Array.x10"
    x10_long srcIndex = ::x10::xrx::Runtime::template evalAt< x10_long >(
                          ::x10::lang::Place::_make(((x10_long)((gra)->location))),
                          reinterpret_cast< ::x10::lang::Fun_0_0<x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_long> >(sizeof(x10_regionarray_Array__closure__2<TPMGL(T)>)))x10_regionarray_Array__closure__2<TPMGL(T)>(gra, srcPoint))),
                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 1042 "x10/regionarray/Array.x10"
    x10_long dstIndex__125909 = ::x10aux::nullCheck(dst)->FMGL(region)->indexOf(
                                  dstPoint);
    
    //#line 1084 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(rawData), srcIndex, ::x10aux::nullCheck(dst)->FMGL(raw),
      dstIndex__125909, numElems);
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::asyncCopy(::x10::regionarray::RemoteArray<TPMGL(T)>* src,
                                                                       x10_long srcIndex,
                                                                       ::x10::regionarray::Array<TPMGL(T)>* dst,
                                                                       x10_long dstIndex,
                                                                       x10_long numElems) {
    
    //#line 1084 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(rawData), srcIndex, ::x10aux::nullCheck(dst)->FMGL(raw),
      dstIndex, numElems);
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::copy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                                  ::x10::regionarray::Array<TPMGL(T)>* dst) {
    
    //#line 1100 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), ((x10_long)0ll),
      ::x10aux::nullCheck(dst)->FMGL(raw), ((x10_long)0ll),
      (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(raw))->FMGL(size)));
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::copy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                                  ::x10::lang::Point* srcPoint,
                                                                  ::x10::regionarray::Array<TPMGL(T)>* dst,
                                                                  ::x10::lang::Point* dstPoint,
                                                                  x10_long numElems) {
    
    //#line 1124 "x10/regionarray/Array.x10"
    x10_long srcIndex__125912 = ::x10aux::nullCheck(src)->FMGL(region)->indexOf(
                                  srcPoint);
    x10_long dstIndex__125914 = ::x10aux::nullCheck(dst)->FMGL(region)->indexOf(
                                  dstPoint);
    
    //#line 1157 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), srcIndex__125912,
      ::x10aux::nullCheck(dst)->FMGL(raw), dstIndex__125914,
      numElems);
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::copy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                                  x10_long srcIndex,
                                                                  ::x10::regionarray::Array<TPMGL(T)>* dst,
                                                                  x10_long dstIndex,
                                                                  x10_long numElems) {
    
    //#line 1157 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), srcIndex, ::x10aux::nullCheck(dst)->FMGL(raw),
      dstIndex, numElems);
}
#endif // X10_REGIONARRAY_ARRAY_H_IMPLEMENTATION
#endif // __X10_REGIONARRAY_ARRAY_H_NODEPS
