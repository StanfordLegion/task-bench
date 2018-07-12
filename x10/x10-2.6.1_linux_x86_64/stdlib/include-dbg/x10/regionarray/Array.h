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
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array__Anonymous__14235;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array__Anonymous__14520;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace util { 
class RailUtils;
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
    static ::x10::lang::String sl__155666;
    static ::x10::lang::String sl__155679;
    static ::x10::lang::String sl__155672;
    static ::x10::lang::String sl__155676;
    static ::x10::lang::String sl__155667;
    static ::x10::lang::String sl__155678;
    static ::x10::lang::String sl__155662;
    static ::x10::lang::String sl__155663;
    static ::x10::lang::String sl__155670;
    static ::x10::lang::String sl__155671;
    static ::x10::lang::String sl__155674;
    static ::x10::lang::String sl__155675;
    static ::x10::lang::String sl__155665;
    static ::x10::lang::String sl__155673;
    static ::x10::lang::String sl__155680;
    static ::x10::lang::String sl__155682;
    static ::x10::lang::String sl__155661;
    static ::x10::lang::String sl__155668;
    static ::x10::lang::String sl__155677;
    static ::x10::lang::String sl__155664;
    static ::x10::lang::String sl__155681;
    static ::x10::lang::String sl__155669;
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
#include <x10/lang/Math.h>
#include <x10/regionarray/Array__Anonymous__14235.h>
#include <x10/regionarray/Array__Anonymous__14520.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Native.h>
#include <x10/util/RailUtils.h>
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
#ifndef X10_REGIONARRAY_ARRAY__CLOSURE__1_CLOSURE
#define X10_REGIONARRAY_ARRAY__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T), class TPMGL(U)> class x10_regionarray_Array__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(U)>::template itable <x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(U) __apply(::x10::lang::Point* p){
        return ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
          saved_this->x10::regionarray::template Array<TPMGL(T)>::__apply(
            p));
        
    }
    
    // captured environment
    ::x10::regionarray::Array<TPMGL(T)>* saved_this;
    ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->op);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::regionarray::Array<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::Array<TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* that_op = buf.read< ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>*>();
        x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) >* this_ = new (storage) x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) >(that_saved_this, that_op);
        return this_;
    }
    
    x10_regionarray_Array__closure__1(::x10::regionarray::Array<TPMGL(T)>* saved_this, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) : saved_this(saved_this), op(op) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(U)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(U)> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/Array.x10:685";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(U)>::template itable <x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) > >x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) >::__apply, &x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(U)> >, &x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U) >::_deserialize);

#endif // X10_REGIONARRAY_ARRAY__CLOSURE__1_CLOSURE
#ifndef X10_REGIONARRAY_ARRAY__CLOSURE__2_CLOSURE
#define X10_REGIONARRAY_ARRAY__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> class x10_regionarray_Array__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(S)>::template itable <x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(S) __apply(::x10::lang::Point* p){
        return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
          saved_this->x10::regionarray::template Array<TPMGL(T)>::__apply(
            p), ::x10aux::nullCheck(src)->x10::regionarray::template Array<TPMGL(U)>::__apply(
                  p));
        
    }
    
    // captured environment
    ::x10::regionarray::Array<TPMGL(T)>* saved_this;
    ::x10::regionarray::Array<TPMGL(U)>* src;
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
        x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::regionarray::Array<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::Array<TPMGL(T)>*>();
        ::x10::regionarray::Array<TPMGL(U)>* that_src = buf.read< ::x10::regionarray::Array<TPMGL(U)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* that_op = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>*>();
        x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) >* this_ = new (storage) x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) >(that_saved_this, that_src, that_op);
        return this_;
    }
    
    x10_regionarray_Array__closure__2(::x10::regionarray::Array<TPMGL(T)>* saved_this, ::x10::regionarray::Array<TPMGL(U)>* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) : saved_this(saved_this), src(src), op(op) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(S)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(S)> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/Array.x10:755";
    }

};

template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(S)>::template itable <x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) > >x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) >::__apply, &x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> ::x10aux::itable_entry x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(S)> >, &x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(S), class TPMGL(U)> const ::x10aux::serialization_id_t x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U) >::_deserialize);

#endif // X10_REGIONARRAY_ARRAY__CLOSURE__2_CLOSURE
#ifndef X10_REGIONARRAY_ARRAY_H_GENERICS
#define X10_REGIONARRAY_ARRAY_H_GENERICS
#ifndef X10_REGIONARRAY_ARRAY_H_map_1366
#define X10_REGIONARRAY_ARRAY_H_map_1366
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::map(::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 685 "x10/regionarray/Array.x10"
    return ::x10::regionarray::Array<TPMGL(U)>::_make(this->FMGL(region),
                                                      reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(U)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(U)> >(sizeof(x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U)>)))x10_regionarray_Array__closure__1<TPMGL(T),TPMGL(U)>(this, op))));
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1366
#ifndef X10_REGIONARRAY_ARRAY_H_map_1367
#define X10_REGIONARRAY_ARRAY_H_map_1367
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::map(::x10::regionarray::Array<TPMGL(U)>* dst,
                                         ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 704 "x10/regionarray/Array.x10"
    if (this->FMGL(rect)) {
        
        //#line 708 "x10/regionarray/Array.x10"
        ::x10::util::RailUtils::template map< TPMGL(T), TPMGL(U) >(
          this->FMGL(raw), ::x10aux::nullCheck(dst)->FMGL(raw),
          op);
        
        //#line 709 "x10/regionarray/Array.x10"
        return dst;
        
    } else {
        
        //#line 711 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__110669;
            for (p__110669 = this->FMGL(region)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__110669));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__110669));
                
                //#line 712 "x10/regionarray/Array.x10"
                ::x10aux::nullCheck(dst)->x10::regionarray::template Array<TPMGL(U)>::__set(
                  p, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                    this->x10::regionarray::template Array<TPMGL(T)>::__apply(
                      p)));
            }
        }
        
    }
    
    //#line 715 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1367
#ifndef X10_REGIONARRAY_ARRAY_H_map_1368
#define X10_REGIONARRAY_ARRAY_H_map_1368
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::map(::x10::regionarray::Array<TPMGL(U)>* dst,
                                         ::x10::regionarray::Region* filter,
                                         ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 734 "x10/regionarray/Array.x10"
    ::x10::regionarray::Region* fregion = this->FMGL(region)->__and(
                                            filter);
    
    //#line 735 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__110671;
        for (p__110671 = ::x10aux::nullCheck(fregion)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__110671));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__110671));
            
            //#line 736 "x10/regionarray/Array.x10"
            ::x10aux::nullCheck(dst)->x10::regionarray::template Array<TPMGL(U)>::__set(
              p, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                this->x10::regionarray::template Array<TPMGL(T)>::__apply(
                  p)));
        }
    }
    
    //#line 738 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1368
#ifndef X10_REGIONARRAY_ARRAY_H_map_1369
#define X10_REGIONARRAY_ARRAY_H_map_1369
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::regionarray::Array<TPMGL(S)>* x10::regionarray::Array<TPMGL(T)>::map(
  ::x10::regionarray::Array<TPMGL(U)>* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) {
    
    //#line 755 "x10/regionarray/Array.x10"
    return ::x10::regionarray::Array<TPMGL(S)>::_make(this->FMGL(region),
                                                      reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(S)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(S)> >(sizeof(x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U)>)))x10_regionarray_Array__closure__2<TPMGL(T),TPMGL(S),TPMGL(U)>(this, src, op))));
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1369
#ifndef X10_REGIONARRAY_ARRAY_H_map_1370
#define X10_REGIONARRAY_ARRAY_H_map_1370
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::regionarray::Array<TPMGL(S)>* x10::regionarray::Array<TPMGL(T)>::map(
  ::x10::regionarray::Array<TPMGL(S)>* dst, ::x10::regionarray::Array<TPMGL(U)>* src,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) {
    
    //#line 774 "x10/regionarray/Array.x10"
    if ((this->FMGL(rect) && (::x10aux::struct_equals(this->FMGL(size),
                                                      ::x10aux::nullCheck(src)->FMGL(size)))))
    {
        
        //#line 778 "x10/regionarray/Array.x10"
        ::x10::util::RailUtils::template map< TPMGL(T), TPMGL(U),
        TPMGL(S) >(this->FMGL(raw), (__extension__ ({
                       ::x10::lang::Rail< TPMGL(U) >* t__109010 =
                         ::x10aux::nullCheck(src)->FMGL(raw);
                       if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__109010)->FMGL(size)),
                                                      (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(this)->FMGL(raw))->FMGL(size))))))
                       {
                           ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__155672))));
                       }
                       t__109010;
                   }))
                   , ::x10aux::nullCheck(dst)->FMGL(raw),
                   op);
        
        //#line 779 "x10/regionarray/Array.x10"
        return dst;
        
    } else {
        
        //#line 781 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__110673;
            for (p__110673 = this->FMGL(region)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__110673));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__110673));
                
                //#line 782 "x10/regionarray/Array.x10"
                ::x10aux::nullCheck(dst)->x10::regionarray::template Array<TPMGL(S)>::__set(
                  p, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
                    this->x10::regionarray::template Array<TPMGL(T)>::__apply(
                      p), ::x10aux::nullCheck(src)->x10::regionarray::template Array<TPMGL(U)>::__apply(
                            p)));
            }
        }
        
    }
    
    //#line 785 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1370
#ifndef X10_REGIONARRAY_ARRAY_H_map_1371
#define X10_REGIONARRAY_ARRAY_H_map_1371
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::regionarray::Array<TPMGL(S)>* x10::regionarray::Array<TPMGL(T)>::map(
  ::x10::regionarray::Array<TPMGL(S)>* dst, ::x10::regionarray::Array<TPMGL(U)>* src,
  ::x10::regionarray::Region* filter, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) {
    
    //#line 805 "x10/regionarray/Array.x10"
    ::x10::regionarray::Region* fregion = this->FMGL(region)->__and(
                                            filter);
    
    //#line 806 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__110675;
        for (p__110675 = ::x10aux::nullCheck(fregion)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__110675));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__110675));
            
            //#line 807 "x10/regionarray/Array.x10"
            ::x10aux::nullCheck(dst)->x10::regionarray::template Array<TPMGL(S)>::__set(
              p, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
                this->x10::regionarray::template Array<TPMGL(T)>::__apply(
                  p), ::x10aux::nullCheck(src)->x10::regionarray::template Array<TPMGL(U)>::__apply(
                        p)));
        }
    }
    
    //#line 809 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1371
#ifndef X10_REGIONARRAY_ARRAY_H_reduce_1372
#define X10_REGIONARRAY_ARRAY_H_reduce_1372
template<class TPMGL(T)> template<class TPMGL(U)> TPMGL(U)
  x10::regionarray::Array<TPMGL(T)>::reduce(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
                                            TPMGL(U) unit) {
    
    //#line 826 "x10/regionarray/Array.x10"
    if (this->FMGL(rect)) {
        
        //#line 830 "x10/regionarray/Array.x10"
        return ::x10::util::RailUtils::template reduce< TPMGL(T),
               TPMGL(U) >(this->FMGL(raw), op, unit);
        
    } else {
        
        //#line 832 "x10/regionarray/Array.x10"
        TPMGL(U) accum = unit;
        
        //#line 833 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__110677;
            for (p__110677 = this->FMGL(region)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__110677));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__110677));
                
                //#line 834 "x10/regionarray/Array.x10"
                accum = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                  accum, this->x10::regionarray::template Array<TPMGL(T)>::__apply(
                           p));
            }
        }
        
        //#line 836 "x10/regionarray/Array.x10"
        return accum;
        
    }
    
}
#endif // X10_REGIONARRAY_ARRAY_H_reduce_1372
#ifndef X10_REGIONARRAY_ARRAY_H_scan_1373
#define X10_REGIONARRAY_ARRAY_H_scan_1373
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::scan(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
                                          TPMGL(U) unit) {
    
    //#line 855 "x10/regionarray/Array.x10"
    return this->template scan< TPMGL(U) >(::x10::regionarray::Array<TPMGL(U)>::_make(false,
                                                                                      this->FMGL(region)),
                                           op, unit);
    
}
#endif // X10_REGIONARRAY_ARRAY_H_scan_1373
#ifndef X10_REGIONARRAY_ARRAY_H_scan_1374
#define X10_REGIONARRAY_ARRAY_H_scan_1374
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::scan(::x10::regionarray::Array<TPMGL(U)>* dst,
                                          ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
                                          TPMGL(U) unit) {
    
    //#line 873 "x10/regionarray/Array.x10"
    TPMGL(U) accum = unit;
    
    //#line 874 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__110679;
        for (p__110679 = this->FMGL(region)->iterator(); ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__110679));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__110679));
            
            //#line 875 "x10/regionarray/Array.x10"
            accum = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
              accum, this->x10::regionarray::template Array<TPMGL(T)>::__apply(
                       p));
            
            //#line 876 "x10/regionarray/Array.x10"
            ::x10aux::nullCheck(dst)->x10::regionarray::template Array<TPMGL(U)>::__set(
              p, accum);
        }
    }
    
    //#line 878 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_scan_1374
#endif // X10_REGIONARRAY_ARRAY_H_GENERICS
#ifndef X10_REGIONARRAY_ARRAY_H_IMPLEMENTATION
#define X10_REGIONARRAY_ARRAY_H_IMPLEMENTATION
#include <x10/regionarray/Array.h>

#ifndef X10_REGIONARRAY_ARRAY__CLOSURE__3_CLOSURE
#define X10_REGIONARRAY_ARRAY__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_regionarray_Array__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1<x10_long, x10_long>::template itable <x10_regionarray_Array__closure__3<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_long __apply(x10_long i){
        return ((((saved_this->FMGL(region)->max(i)) - (saved_this->FMGL(region)->min(
                                                          i)))) + (((x10_long)1ll)));
        
    }
    
    // captured environment
    ::x10::regionarray::Array<TPMGL(T)>* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_Array__closure__3<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_Array__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::Array<TPMGL(T)>* that_saved_this = buf.read< ::x10::regionarray::Array<TPMGL(T)>*>();
        x10_regionarray_Array__closure__3<TPMGL(T) >* this_ = new (storage) x10_regionarray_Array__closure__3<TPMGL(T) >(that_saved_this);
        return this_;
    }
    
    x10_regionarray_Array__closure__3(::x10::regionarray::Array<TPMGL(T)>* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_long> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/Array.x10:1198";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1<x10_long, x10_long>::template itable <x10_regionarray_Array__closure__3<TPMGL(T) > >x10_regionarray_Array__closure__3<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_Array__closure__3<TPMGL(T) >::__apply, &x10_regionarray_Array__closure__3<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_Array__closure__3<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_long> >, &x10_regionarray_Array__closure__3<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_Array__closure__3<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_Array__closure__3<TPMGL(T) >::_deserialize);

#endif // X10_REGIONARRAY_ARRAY__CLOSURE__3_CLOSURE
#ifndef X10_REGIONARRAY_ARRAY__CLOSURE__4_CLOSURE
#define X10_REGIONARRAY_ARRAY__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_regionarray_Array__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1<x10_long, x10_long>::template itable <x10_regionarray_Array__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_long __apply(x10_long i){
        return ((((::x10aux::nullCheck(src)->FMGL(region)->max(i)) - (::x10aux::nullCheck(src)->FMGL(region)->min(
                                                                        i)))) + (((x10_long)1ll)));
        
    }
    
    // captured environment
    ::x10::regionarray::Array<TPMGL(T)>* src;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->src);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_Array__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_Array__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::regionarray::Array<TPMGL(T)>* that_src = buf.read< ::x10::regionarray::Array<TPMGL(T)>*>();
        x10_regionarray_Array__closure__4<TPMGL(T) >* this_ = new (storage) x10_regionarray_Array__closure__4<TPMGL(T) >(that_src);
        return this_;
    }
    
    x10_regionarray_Array__closure__4(::x10::regionarray::Array<TPMGL(T)>* src) : src(src) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_long> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/Array.x10:1201";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1<x10_long, x10_long>::template itable <x10_regionarray_Array__closure__4<TPMGL(T) > >x10_regionarray_Array__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_Array__closure__4<TPMGL(T) >::__apply, &x10_regionarray_Array__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_Array__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_long> >, &x10_regionarray_Array__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_Array__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_Array__closure__4<TPMGL(T) >::_deserialize);

#endif // X10_REGIONARRAY_ARRAY__CLOSURE__4_CLOSURE
#ifndef X10_REGIONARRAY_ARRAY__CLOSURE__5_CLOSURE
#define X10_REGIONARRAY_ARRAY__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_Array__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0<x10_long>::template itable <x10_regionarray_Array__closure__5<TPMGL(T) > > _itable;
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
        x10_regionarray_Array__closure__5<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_Array__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > that_gra = buf.read< ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > >();
        ::x10::lang::Point* that_dstPoint = buf.read< ::x10::lang::Point*>();
        x10_regionarray_Array__closure__5<TPMGL(T) >* this_ = new (storage) x10_regionarray_Array__closure__5<TPMGL(T) >(that_gra, that_dstPoint);
        return this_;
    }
    
    x10_regionarray_Array__closure__5(::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra, ::x10::lang::Point* dstPoint) : gra(gra), dstPoint(dstPoint) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/Array.x10:938";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0<x10_long>::template itable <x10_regionarray_Array__closure__5<TPMGL(T) > >x10_regionarray_Array__closure__5<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_Array__closure__5<TPMGL(T) >::__apply, &x10_regionarray_Array__closure__5<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_Array__closure__5<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >, &x10_regionarray_Array__closure__5<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_Array__closure__5<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_Array__closure__5<TPMGL(T) >::_deserialize);

#endif // X10_REGIONARRAY_ARRAY__CLOSURE__5_CLOSURE
#ifndef X10_REGIONARRAY_ARRAY__CLOSURE__6_CLOSURE
#define X10_REGIONARRAY_ARRAY__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_Array__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0<x10_long>::template itable <x10_regionarray_Array__closure__6<TPMGL(T) > > _itable;
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
        x10_regionarray_Array__closure__6<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_Array__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > that_gra = buf.read< ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > >();
        ::x10::lang::Point* that_srcPoint = buf.read< ::x10::lang::Point*>();
        x10_regionarray_Array__closure__6<TPMGL(T) >* this_ = new (storage) x10_regionarray_Array__closure__6<TPMGL(T) >(that_gra, that_srcPoint);
        return this_;
    }
    
    x10_regionarray_Array__closure__6(::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra, ::x10::lang::Point* srcPoint) : gra(gra), srcPoint(srcPoint) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/Array.x10:1041";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0<x10_long>::template itable <x10_regionarray_Array__closure__6<TPMGL(T) > >x10_regionarray_Array__closure__6<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_Array__closure__6<TPMGL(T) >::__apply, &x10_regionarray_Array__closure__6<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_Array__closure__6<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >, &x10_regionarray_Array__closure__6<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_Array__closure__6<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_Array__closure__6<TPMGL(T) >::_deserialize);

#endif // X10_REGIONARRAY_ARRAY__CLOSURE__6_CLOSURE

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
        ::x10::regionarray::Region* t__110851 = reg;
        if (!((!::x10aux::struct_equals(t__110851, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__155661))));
        }
        t__110851;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 55 "x10/regionarray/Array.x10"
    this->x10::regionarray::template Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array();
    
    //#line 125 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh = ::x10::regionarray::Array__LayoutHelper::_make(reg);
    
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
        ::x10::regionarray::Region* t__110852 = reg;
        if (!((!::x10aux::struct_equals(t__110852, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__155661))));
        }
        t__110852;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 55 "x10/regionarray/Array.x10"
    this->x10::regionarray::template Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array();
    
    //#line 143 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh = ::x10::regionarray::Array__LayoutHelper::_make(reg);
    
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
        ::x10::regionarray::Region* t__110853 = reg;
        if (!((!::x10aux::struct_equals(t__110853, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__155661))));
        }
        t__110853;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 55 "x10/regionarray/Array.x10"
    this->x10::regionarray::template Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array();
    
    //#line 175 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh = ::x10::regionarray::Array__LayoutHelper::_make(reg);
    
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
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__110590;
        for (p__110590 = ::x10aux::nullCheck(reg)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__110590));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__110590));
            
            //#line 183 "x10/regionarray/Array.x10"
            r->x10::lang::template Rail< TPMGL(T) >::__set(
              this->x10::regionarray::template Array<TPMGL(T)>::offset(
                p), ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::__apply(::x10aux::nullCheck(init), 
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
        ::x10::regionarray::Region* t__110859 = reg;
        if (!((!::x10aux::struct_equals(t__110859, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__155661))));
        }
        t__110859;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 55 "x10/regionarray/Array.x10"
    this->x10::regionarray::template Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array();
    
    //#line 199 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh = ::x10::regionarray::Array__LayoutHelper::_make(reg);
    
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
        ::x10::lang::Rail< TPMGL(T) >* rail__110854 = r;
        x10_long i__110592min__110855 = ((x10_long)0ll);
        x10_long i__110592max__110856 = (x10_long)(::x10aux::nullCheck(rail__110854)->FMGL(size));
        {
            x10_long i__110857;
            for (i__110857 = i__110592min__110855; ((i__110857) < (i__110592max__110856));
                 i__110857 = ((i__110857) + (((x10_long)1ll))))
            {
                x10_long i__110858 = i__110857;
                
                //#line 210 "x10/regionarray/Array.x10"
                r->x10::lang::template Rail< TPMGL(T) >::__set(
                  i__110858, init);
            }
        }
        
    } else {
        
        //#line 213 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__110611;
            for (p__110611 = ::x10aux::nullCheck(reg)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__110611));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__110611));
                
                //#line 214 "x10/regionarray/Array.x10"
                r->x10::lang::template Rail< TPMGL(T) >::__set(
                  this->x10::regionarray::template Array<TPMGL(T)>::offset(
                    p), init);
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
        ::x10::regionarray::Region* t__110860 = reg;
        if (!((!::x10aux::struct_equals(t__110860, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__155661))));
        }
        t__110860;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 55 "x10/regionarray/Array.x10"
    this->x10::regionarray::template Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array();
    
    //#line 235 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh = ::x10::regionarray::Array__LayoutHelper::_make(reg);
    
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
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::x10::regionarray::Array_Strings::sl__155662))));
    }
    
    //#line 244 "x10/regionarray/Array.x10"
    this->FMGL(raw) = (__extension__ ({
        ::x10::lang::Rail< TPMGL(T) >* t__108733 = backingStore;
        if (!((!::x10aux::struct_equals(t__108733, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__155663))));
        }
        t__108733;
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
    ::x10::regionarray::RectRegion1D* myReg = ::x10::regionarray::RectRegion1D::_make(((s) - (((x10_long)1ll))));
    
    //#line 257 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = s;
    
    //#line 55 "x10/regionarray/Array.x10"
    this->x10::regionarray::template Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array();
    
    //#line 259 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 260 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 261 "x10/regionarray/Array.x10"
    this->FMGL(raw) = (__extension__ ({
        ::x10::lang::Rail< TPMGL(T) >* t__108742 = backingStore;
        if (!((!::x10aux::struct_equals(t__108742, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__155663))));
        }
        t__108742;
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
    ::x10::regionarray::RectRegion1D* myReg = ::x10::regionarray::RectRegion1D::_make(((size) - (((x10_long)1ll))));
    
    //#line 271 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = size;
    
    //#line 55 "x10/regionarray/Array.x10"
    this->x10::regionarray::template Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array();
    
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
    ::x10::regionarray::RectRegion1D* myReg = ::x10::regionarray::RectRegion1D::_make(((size) - (((x10_long)1ll))));
    
    //#line 285 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = size;
    
    //#line 55 "x10/regionarray/Array.x10"
    this->x10::regionarray::template Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array();
    
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
    ::x10::regionarray::RectRegion1D* myReg = ::x10::regionarray::RectRegion1D::_make(((size) - (((x10_long)1ll))));
    
    //#line 315 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = size;
    
    //#line 55 "x10/regionarray/Array.x10"
    this->x10::regionarray::template Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array();
    
    //#line 317 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 318 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 319 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(size, false);
    
    //#line 320 "x10/regionarray/Array.x10"
    x10_long i__110613min__110861 = ((x10_long)0ll);
    x10_long i__110613max__110862 = ((size) - (((x10_long)1ll)));
    {
        x10_long i__110863;
        for (i__110863 = i__110613min__110861; ((i__110863) <= (i__110613max__110862));
             i__110863 = ((i__110863) + (((x10_long)1ll))))
        {
            x10_long i__110864 = i__110863;
            
            //#line 321 "x10/regionarray/Array.x10"
            r->x10::lang::template Rail< TPMGL(T) >::__set(
              i__110864, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(init), 
                i__110864));
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
    ::x10::regionarray::RectRegion1D* myReg = ::x10::regionarray::RectRegion1D::_make(((size) - (((x10_long)1ll))));
    
    //#line 336 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = size;
    
    //#line 55 "x10/regionarray/Array.x10"
    this->x10::regionarray::template Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array();
    
    //#line 338 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 339 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 340 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(size, false);
    
    //#line 341 "x10/regionarray/Array.x10"
    x10_long i__110631min__110865 = ((x10_long)0ll);
    x10_long i__110631max__110866 = ((size) - (((x10_long)1ll)));
    {
        x10_long i__110867;
        for (i__110867 = i__110631min__110865; ((i__110867) <= (i__110631max__110866));
             i__110867 = ((i__110867) + (((x10_long)1ll))))
        {
            x10_long i__110868 = i__110867;
            
            //#line 342 "x10/regionarray/Array.x10"
            r->x10::lang::template Rail< TPMGL(T) >::__set(
              i__110868, init);
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
    
    //#line 55 "x10/regionarray/Array.x10"
    this->x10::regionarray::template Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array();
    
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
    (this)->::x10::regionarray::Array<TPMGL(T)>::_constructor(
      (::x10aux::nullCheck(init)->FMGL(array))->__apply());
    
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
        ::x10::util::StringBuilder* sb = ::x10::util::StringBuilder::_make();
        
        //#line 384 "x10/regionarray/Array.x10"
        sb->add((&::x10::regionarray::Array_Strings::sl__155664));
        
        //#line 385 "x10/regionarray/Array.x10"
        x10_long sz = ::x10::lang::Math::min(this->FMGL(size),
                                             ((x10_long)10ll));
        
        //#line 386 "x10/regionarray/Array.x10"
        x10_long i__110649min__110869 = ((x10_long)0ll);
        x10_long i__110649max__110870 = ((sz) - (((x10_long)1ll)));
        {
            x10_long i__110871;
            for (i__110871 = i__110649min__110869; ((i__110871) <= (i__110649max__110870));
                 i__110871 = ((i__110871) + (((x10_long)1ll))))
            {
                x10_long i__110872 = i__110871;
                
                //#line 387 "x10/regionarray/Array.x10"
                if (((i__110872) > (((x10_long)0ll)))) {
                    sb->add((&::x10::regionarray::Array_Strings::sl__155665));
                }
                
                //#line 388 "x10/regionarray/Array.x10"
                sb->add(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__155666), this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                                                                        i__110872)));
            }
        }
        
        //#line 390 "x10/regionarray/Array.x10"
        if (((sz) < (this->FMGL(size)))) {
            sb->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__155667), ((this->FMGL(size)) - (sz))), (&::x10::regionarray::Array_Strings::sl__155668)));
        }
        
        //#line 391 "x10/regionarray/Array.x10"
        sb->add((&::x10::regionarray::Array_Strings::sl__155669));
        
        //#line 392 "x10/regionarray/Array.x10"
        return sb->toString();
        
    } else {
        
        //#line 394 "x10/regionarray/Array.x10"
        return ::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__155670), this->FMGL(region)), (&::x10::regionarray::Array_Strings::sl__155671));
        
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
        return reinterpret_cast< ::x10::lang::Iterable<TPMGL(T)>*>(::x10::regionarray::Array__Anonymous__14235<TPMGL(T)>::_make(this));
        
    } else {
        
        //#line 422 "x10/regionarray/Array.x10"
        return reinterpret_cast< ::x10::lang::Iterable<TPMGL(T)>*>(::x10::regionarray::Array__Anonymous__14520<TPMGL(T)>::_make(this));
        
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
        if ((BOUNDS_CHECK_BOOL && !(this->FMGL(region)->contains(
                                      i0)))) {
            
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
    if ((BOUNDS_CHECK_BOOL && !(this->FMGL(region)->contains(
                                  i0, i1)))) {
        
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
    if ((BOUNDS_CHECK_BOOL && !(this->FMGL(region)->contains(
                                  i0, i1, i2)))) {
        
        //#line 489 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1, i2);
    }
    
    //#line 491 "x10/regionarray/Array.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             this->x10::regionarray::template Array<TPMGL(T)>::offset(
               i0, i1, i2));
    
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
    if ((BOUNDS_CHECK_BOOL && !(this->FMGL(region)->contains(
                                  i0, i1, i2, i3)))) {
        
        //#line 509 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1, i2, i3);
    }
    
    //#line 511 "x10/regionarray/Array.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             this->x10::regionarray::template Array<TPMGL(T)>::offset(
               i0, i1, i2, i3));
    
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
    if ((BOUNDS_CHECK_BOOL && !(this->FMGL(region)->contains(
                                  pt)))) {
        
        //#line 525 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          pt);
    }
    
    //#line 527 "x10/regionarray/Array.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             this->x10::regionarray::template Array<TPMGL(T)>::offset(
               pt));
    
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
        if ((BOUNDS_CHECK_BOOL && !(this->FMGL(region)->contains(
                                      i0)))) {
            
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
    if ((BOUNDS_CHECK_BOOL && !(this->FMGL(region)->contains(
                                  i0, i1)))) {
        
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
    if ((BOUNDS_CHECK_BOOL && !(this->FMGL(region)->contains(
                                  i0, i1, i2)))) {
        
        //#line 596 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1, i2);
    }
    
    //#line 598 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      this->x10::regionarray::template Array<TPMGL(T)>::offset(
        i0, i1, i2), v);
    
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
    if ((BOUNDS_CHECK_BOOL && !(this->FMGL(region)->contains(
                                  i0, i1, i2, i3)))) {
        
        //#line 619 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1, i2, i3);
    }
    
    //#line 621 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      this->x10::regionarray::template Array<TPMGL(T)>::offset(
        i0, i1, i2, i3), v);
    
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
    if ((BOUNDS_CHECK_BOOL && !(this->FMGL(region)->contains(
                                  p)))) {
        
        //#line 638 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          p);
    }
    
    //#line 640 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      this->x10::regionarray::template Array<TPMGL(T)>::offset(
        p), v);
    
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
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__110667;
            for (p__110667 = this->FMGL(region)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__110667));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__110667));
                
                //#line 657 "x10/regionarray/Array.x10"
                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                  this->x10::regionarray::template Array<TPMGL(T)>::offset(
                    p), v);
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
    
    //#line 1175 "x10/regionarray/Array.x10"
    if (BOUNDS_CHECK_BOOL) {
        
        //#line 1176 "x10/regionarray/Array.x10"
        if (!(::x10aux::nullCheck(src)->FMGL(region)->contains(
                r))) {
            
            //#line 1177 "x10/regionarray/Array.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::ArrayIndexOutOfBoundsException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__155673), r), (&::x10::regionarray::Array_Strings::sl__155674)), ::x10aux::nullCheck(src)->FMGL(region)))));
        } else 
        //#line 1178 "x10/regionarray/Array.x10"
        if (!(this->FMGL(region)->contains(r))) {
            
            //#line 1179 "x10/regionarray/Array.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::ArrayIndexOutOfBoundsException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__155673), r), (&::x10::regionarray::Array_Strings::sl__155675)), this->FMGL(region)))));
        }
        
    }
    
    //#line 1182 "x10/regionarray/Array.x10"
    if (((::x10aux::struct_equals(this->FMGL(rank), ((x10_long)3ll))) &&
        ::x10aux::nullCheck(r)->FMGL(rect))) {
        
        //#line 1183 "x10/regionarray/Array.x10"
        ::x10aux::nullCheck((__extension__ ({
            ::x10::regionarray::Array<TPMGL(T)>* t__109119 =
              this;
            if (!((::x10aux::struct_equals(::x10aux::nullCheck(t__109119)->FMGL(rank),
                                           ((x10_long)3ll)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__155676))));
            }
            t__109119;
        }))
        )->x10::regionarray::template Array<TPMGL(T)>::copy3(
          (__extension__ ({
              ::x10::regionarray::Array<TPMGL(T)>* t__109121 =
                src;
              if (!((::x10aux::struct_equals(::x10aux::nullCheck(t__109121)->FMGL(rank),
                                             ((x10_long)3ll)))))
              {
                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__155676))));
              }
              t__109121;
          }))
          , (__extension__ ({
              ::x10::regionarray::Region* t__109123 = r;
              if (!(((::x10aux::struct_equals(::x10aux::nullCheck(t__109123)->FMGL(rect),
                                              true)) && (::x10aux::struct_equals(::x10aux::nullCheck(t__109123)->FMGL(rank),
                                                                                 ((x10_long)3ll))))))
              {
                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__155677))));
              }
              t__109123;
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
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__110681;
            for (p__110681 = ::x10aux::nullCheck(r)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__110681));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__110681));
                
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
        ::x10::lang::Fun_0_1<x10_long, x10_long>* max = this->FMGL(region)->max();
        
        //#line 1198 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<x10_long>* delta = ::x10::regionarray::Array<x10_long>::_make(this->FMGL(rank),
                                                                                                reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_long> >(sizeof(x10_regionarray_Array__closure__3<TPMGL(T)>)))x10_regionarray_Array__closure__3<TPMGL(T)>(this))));
        
        //#line 1199 "x10/regionarray/Array.x10"
        ::x10::lang::Fun_0_1<x10_long, x10_long>* srcMin =
          ::x10aux::nullCheck(src)->FMGL(region)->min();
        
        //#line 1200 "x10/regionarray/Array.x10"
        ::x10::lang::Fun_0_1<x10_long, x10_long>* srcMax =
          ::x10aux::nullCheck(src)->FMGL(region)->max();
        
        //#line 1201 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<x10_long>* srcDelta = ::x10::regionarray::Array<x10_long>::_make(this->FMGL(rank),
                                                                                                   reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_long> >(sizeof(x10_regionarray_Array__closure__4<TPMGL(T)>)))x10_regionarray_Array__closure__4<TPMGL(T)>(src))));
        
        //#line 1202 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__110701;
            for (p__110701 = ::x10aux::nullCheck(r)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__110701));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__110701));
                
                //#line 1203 "x10/regionarray/Array.x10"
                x10_long offset = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                      ((x10_long)0ll))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(min), 
                  ((x10_long)0ll))));
                
                //#line 1204 "x10/regionarray/Array.x10"
                x10_long srcOffset = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                         ((x10_long)0ll))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(srcMin), 
                  ((x10_long)0ll))));
                
                //#line 1205 "x10/regionarray/Array.x10"
                x10_long i__110683min__110873 = ((x10_long)1ll);
                x10_long i__110683max__110874 = ((this->FMGL(rank)) - (((x10_long)1ll)));
                {
                    x10_long i__110875;
                    for (i__110875 = i__110683min__110873;
                         ((i__110875) <= (i__110683max__110874));
                         i__110875 = ((i__110875) + (((x10_long)1ll))))
                    {
                        x10_long i__110876 = i__110875;
                        
                        //#line 1206 "x10/regionarray/Array.x10"
                        offset = ((((((offset) * (delta->x10::regionarray::template Array<x10_long>::__apply(
                                                    i__110876)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                       i__110876)))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(min), 
                          i__110876)));
                        
                        //#line 1207 "x10/regionarray/Array.x10"
                        srcOffset = ((((((srcOffset) * (srcDelta->x10::regionarray::template Array<x10_long>::__apply(
                                                          i__110876)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                             i__110876)))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(srcMin), 
                          i__110876)));
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
        ::x10::regionarray::Region* p__110878 = r;
        x10_long k__110704min__110879 = ::x10aux::nullCheck(p__110878)->min(
                                          ((x10_long)2ll));
        x10_long k__110704max__110880 = ::x10aux::nullCheck(p__110878)->max(
                                          ((x10_long)2ll));
        x10_long j__110723min__110881 = ::x10aux::nullCheck(p__110878)->min(
                                          ((x10_long)1ll));
        x10_long j__110723max__110882 = ::x10aux::nullCheck(p__110878)->max(
                                          ((x10_long)1ll));
        x10_long i__110742min__110883 = ::x10aux::nullCheck(p__110878)->min(
                                          ((x10_long)0ll));
        x10_long i__110742max__110884 = ::x10aux::nullCheck(p__110878)->max(
                                          ((x10_long)0ll));
        {
            x10_long i__110885;
            for (i__110885 = i__110742min__110883; ((i__110885) <= (i__110742max__110884));
                 i__110885 = ((i__110885) + (((x10_long)1ll))))
            {
                x10_long i__110886 = i__110885;
                {
                    x10_long j__110887;
                    for (j__110887 = j__110723min__110881;
                         ((j__110887) <= (j__110723max__110882));
                         j__110887 = ((j__110887) + (((x10_long)1ll))))
                    {
                        x10_long j__110888 = j__110887;
                        {
                            x10_long k__110889;
                            for (k__110889 = k__110704min__110879;
                                 ((k__110889) <= (k__110704max__110880));
                                 k__110889 = ((k__110889) + (((x10_long)1ll))))
                            {
                                x10_long k__110890 = k__110889;
                                
                                //#line 1219 "x10/regionarray/Array.x10"
                                x10_long offset__110877 =
                                  this->FMGL(region)->indexOf(
                                    ::x10::lang::Point::__implicit_convert(
                                      (__extension__ ({
                                          ::x10::lang::Rail< x10_long >* t__155654 =
                                            ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)3ll), false);
                                          t__155654->x10::lang::template Rail< x10_long >::__set(
                                            ((x10_long)0ll),
                                            i__110886);
                                          t__155654->x10::lang::template Rail< x10_long >::__set(
                                            ((x10_long)1ll),
                                            j__110888);
                                          t__155654->x10::lang::template Rail< x10_long >::__set(
                                            ((x10_long)2ll),
                                            k__110890);
                                          t__155654;
                                      }))
                                      ));
                                
                                //#line 1220 "x10/regionarray/Array.x10"
                                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                                  offset__110877, srcRaw->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                    offset__110877));
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
        ::x10::regionarray::Array__LayoutHelper crh = ::x10::regionarray::Array__LayoutHelper::_make(::x10aux::nullCheck(src)->FMGL(region));
        
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
        x10_long i__110798min__110905 = src_min0;
        x10_long i__110798max__110906 = src_max0;
        {
            x10_long i__110907;
            for (i__110907 = i__110798min__110905; ((i__110907) <= (i__110798max__110906));
                 i__110907 = ((i__110907) + (((x10_long)1ll))))
            {
                x10_long i__110908 = i__110907;
                
                //#line 1239 "x10/regionarray/Array.x10"
                x10_long offset__110903 = ((((i__110908) - (this->FMGL(layout_min0)))) * (this->FMGL(layout_stride1)));
                
                //#line 1240 "x10/regionarray/Array.x10"
                x10_long srcOffset__110904 = ((((i__110908) - (src_min0))) * (src_stride1));
                
                //#line 1241 "x10/regionarray/Array.x10"
                x10_long i__110780min__110899 = src_min1;
                x10_long i__110780max__110900 = src_max1;
                {
                    x10_long i__110901;
                    for (i__110901 = i__110780min__110899;
                         ((i__110901) <= (i__110780max__110900));
                         i__110901 = ((i__110901) + (((x10_long)1ll))))
                    {
                        x10_long i__110902 = i__110901;
                        
                        //#line 1242 "x10/regionarray/Array.x10"
                        x10_long offset__110897 = ((((((offset__110903) + (i__110902))) - (this->FMGL(layout_min1)))) * (layout_stride2));
                        
                        //#line 1243 "x10/regionarray/Array.x10"
                        x10_long srcOffset__110898 = ((((((srcOffset__110904) + (i__110902))) - (src_min1))) * (src_stride2));
                        
                        //#line 1244 "x10/regionarray/Array.x10"
                        x10_long i__110762min__110893 = src_min2;
                        x10_long i__110762max__110894 = src_max2;
                        {
                            x10_long i__110895;
                            for (i__110895 = i__110762min__110893;
                                 ((i__110895) <= (i__110762max__110894));
                                 i__110895 = ((i__110895) + (((x10_long)1ll))))
                            {
                                x10_long i__110896 = i__110895;
                                
                                //#line 1245 "x10/regionarray/Array.x10"
                                x10_long offset__110891 =
                                  ((((offset__110897) + (i__110896))) - (layout_stride3));
                                
                                //#line 1246 "x10/regionarray/Array.x10"
                                x10_long srcOffset__110892 =
                                  ((((srcOffset__110898) + (i__110896))) - (src_stride3));
                                
                                //#line 1247 "x10/regionarray/Array.x10"
                                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                                  offset__110891, srcRaw->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                    srcOffset__110892));
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
        x10_long i__110816min__110909 = ((x10_long)2ll);
        x10_long i__110816max__110910 = ((::x10aux::nullCheck(pt)->FMGL(rank)) - (((x10_long)1ll)));
        {
            x10_long i__110911;
            for (i__110911 = i__110816min__110909; ((i__110911) <= (i__110816max__110910));
                 i__110911 = ((i__110911) + (((x10_long)1ll))))
            {
                x10_long i__110912 = i__110911;
                
                //#line 1319 "x10/regionarray/Array.x10"
                offset = ((((((offset) * (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                            ((((x10_long)2ll)) * (((i__110912) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                                                                                                               i__110912)))) - (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                  ((((((x10_long)2ll)) * (((i__110912) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
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
                          reinterpret_cast< ::x10::lang::Fun_0_0<x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_long> >(sizeof(x10_regionarray_Array__closure__5<TPMGL(T)>)))x10_regionarray_Array__closure__5<TPMGL(T)>(gra, dstPoint))),
                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 939 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array<void>::template asyncCopy< TPMGL(T) >(
      src, ::x10aux::nullCheck(src)->FMGL(region)->indexOf(
             srcPoint), dst, dstIndex, numElems);
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
                          reinterpret_cast< ::x10::lang::Fun_0_0<x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_long> >(sizeof(x10_regionarray_Array__closure__6<TPMGL(T)>)))x10_regionarray_Array__closure__6<TPMGL(T)>(gra, srcPoint))),
                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 1042 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array<void>::template asyncCopy< TPMGL(T) >(
      src, srcIndex, dst, ::x10aux::nullCheck(dst)->FMGL(region)->indexOf(
                            dstPoint), numElems);
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
    ::x10::regionarray::Array<void>::template copy< TPMGL(T) >(
      src, ::x10aux::nullCheck(src)->FMGL(region)->indexOf(
             srcPoint), dst, ::x10aux::nullCheck(dst)->FMGL(region)->indexOf(
                               dstPoint), numElems);
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
