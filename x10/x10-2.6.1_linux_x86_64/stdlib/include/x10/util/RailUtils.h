#ifndef __X10_UTIL_RAILUTILS_H
#define __X10_UTIL_RAILUTILS_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Comparable;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class RailUtils : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    template<class TPMGL(T)> static void sort(::x10::lang::Rail< TPMGL(T) >* a,
                                              ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void sort(::x10::lang::Rail< TPMGL(T) >* a);
    template<class TPMGL(T)> static void qsort(::x10::lang::Rail< TPMGL(T) >* a,
                                               x10_long lo, x10_long hi, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void exch(::x10::lang::Rail< TPMGL(T) >* a,
                                              x10_long i, x10_long j);
    template<class TPMGL(T)> static x10_long binarySearch(::x10::lang::Rail< TPMGL(T) >* a,
                                                          TPMGL(T) key,
                                                          ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static x10_long binarySearch(::x10::lang::Rail< TPMGL(T) >* a,
                                                          TPMGL(T) key);
    template<class TPMGL(T)> static x10_long binarySearch(
      ::x10::lang::Rail< TPMGL(T) >* a, TPMGL(T) key, x10_long min,
      x10_long max, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static x10_long binarySearch(
      ::x10::lang::Rail< TPMGL(T) >* a, TPMGL(T) key, x10_long min,
      x10_long max);
    template<class TPMGL(T), class TPMGL(U)> static TPMGL(U)
      reduce(::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
             TPMGL(U) unit);
    template<class TPMGL(T), class TPMGL(U)> static TPMGL(U)
      reduce(::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* accumOp,
             TPMGL(U) accumUnit, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(T)>* elemOp);
    template<class TPMGL(T), class TPMGL(U)> static ::x10::lang::Rail< TPMGL(U) >*
      map(::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Rail< TPMGL(U) >* dst,
          ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(S), class TPMGL(T), class TPMGL(U)>
    static ::x10::lang::Rail< TPMGL(U) >* map(::x10::lang::Rail< TPMGL(S) >* src1,
                                              ::x10::lang::Rail< TPMGL(T) >* src2,
                                              ::x10::lang::Rail< TPMGL(U) >* dst,
                                              ::x10::lang::Fun_0_2<TPMGL(S), TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(T)> static ::x10::lang::Rail< TPMGL(T) >*
      scan(::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Rail< TPMGL(T) >* dst,
           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
           TPMGL(T) unit);
    template<class TPMGL(T)> static ::x10::lang::Rail< TPMGL(T) >*
      scan(::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
           TPMGL(T) unit);
    template<class TPMGL(T)> static ::x10::lang::Rail< TPMGL(T) >*
      scanExclusive(::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Rail< TPMGL(T) >* dst,
                    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
                    TPMGL(T) unit);
    template<class TPMGL(T)> static ::x10::lang::Rail< TPMGL(T) >*
      scanExclusive(::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
                    TPMGL(T) unit);
    virtual ::x10::util::RailUtils* x10__util__RailUtils____this__x10__util__RailUtils(
      );
    void _constructor();
    
    static ::x10::util::RailUtils* _make();
    
    virtual void __fieldInitializers_x10_util_RailUtils();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_UTIL_RAILUTILS_H

namespace x10 { namespace util { 
class RailUtils;
} } 

#ifndef X10_UTIL_RAILUTILS_H_NODEPS
#define X10_UTIL_RAILUTILS_H_NODEPS
#include <x10/lang/Rail.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Comparable.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Unsafe.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_RAILUTILS__CLOSURE__1_CLOSURE
#define X10_UTIL_RAILUTILS__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_RailUtils__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <x10_util_RailUtils__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_int __apply(TPMGL(T) x__144312, TPMGL(T) y__144313){
        
        //#line 33 "x10/util/RailUtils.x10"
        return ::x10::lang::Comparable< TPMGL(T) >::compareTo(x__144312, y__144313);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_RailUtils__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_RailUtils__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_RailUtils__closure__1<TPMGL(T) >* this_ = new (storage) x10_util_RailUtils__closure__1<TPMGL(T) >();
        return this_;
    }
    
    x10_util_RailUtils__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    
    const char* toNativeString() {
        return "x10/util/RailUtils.x10:33";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <x10_util_RailUtils__closure__1<TPMGL(T) > >x10_util_RailUtils__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_RailUtils__closure__1<TPMGL(T) >::__apply, &x10_util_RailUtils__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_RailUtils__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >, &x10_util_RailUtils__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_RailUtils__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_RailUtils__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_RAILUTILS__CLOSURE__1_CLOSURE
#ifndef X10_UTIL_RAILUTILS__CLOSURE__2_CLOSURE
#define X10_UTIL_RAILUTILS__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_RailUtils__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <x10_util_RailUtils__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_int __apply(TPMGL(T) x, TPMGL(T) y){
        return ::x10::lang::Comparable< TPMGL(T) >::compareTo(x, y);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_RailUtils__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_RailUtils__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_RailUtils__closure__2<TPMGL(T) >* this_ = new (storage) x10_util_RailUtils__closure__2<TPMGL(T) >();
        return this_;
    }
    
    x10_util_RailUtils__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    
    const char* toNativeString() {
        return "x10/util/RailUtils.x10:79";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <x10_util_RailUtils__closure__2<TPMGL(T) > >x10_util_RailUtils__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_RailUtils__closure__2<TPMGL(T) >::__apply, &x10_util_RailUtils__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_RailUtils__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >, &x10_util_RailUtils__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_RailUtils__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_RailUtils__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_RAILUTILS__CLOSURE__2_CLOSURE
#ifndef X10_UTIL_RAILUTILS__CLOSURE__3_CLOSURE
#define X10_UTIL_RAILUTILS__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_RailUtils__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <x10_util_RailUtils__closure__3<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_int __apply(TPMGL(T) x, TPMGL(T) y){
        return ::x10::lang::Comparable< TPMGL(T) >::compareTo(x, y);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_RailUtils__closure__3<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_RailUtils__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_RailUtils__closure__3<TPMGL(T) >* this_ = new (storage) x10_util_RailUtils__closure__3<TPMGL(T) >();
        return this_;
    }
    
    x10_util_RailUtils__closure__3() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    
    const char* toNativeString() {
        return "x10/util/RailUtils.x10:113";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <x10_util_RailUtils__closure__3<TPMGL(T) > >x10_util_RailUtils__closure__3<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_RailUtils__closure__3<TPMGL(T) >::__apply, &x10_util_RailUtils__closure__3<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_RailUtils__closure__3<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >, &x10_util_RailUtils__closure__3<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_RailUtils__closure__3<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_RailUtils__closure__3<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_RAILUTILS__CLOSURE__3_CLOSURE
#ifndef X10_UTIL_RAILUTILS_H_GENERICS
#define X10_UTIL_RAILUTILS_H_GENERICS
#ifndef X10_UTIL_RAILUTILS_H_sort_2532
#define X10_UTIL_RAILUTILS_H_sort_2532
template<class TPMGL(T)> void x10::util::RailUtils::sort(::x10::lang::Rail< TPMGL(T) >* a,
                                                         ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 29 "x10/util/RailUtils.x10"
    ::x10::util::RailUtils::template qsort< TPMGL(T) >(a, ((x10_long)0ll),
                                                       (((x10_long)(::x10aux::nullCheck(a)->FMGL(size))) - (((x10_long)1ll))),
                                                       cmp);
}
#endif // X10_UTIL_RAILUTILS_H_sort_2532
#ifndef X10_UTIL_RAILUTILS_H_sort_2533
#define X10_UTIL_RAILUTILS_H_sort_2533
template<class TPMGL(T)> void x10::util::RailUtils::sort(
  ::x10::lang::Rail< TPMGL(T) >* a) {
    
    //#line 29 "x10/util/RailUtils.x10"
    ::x10::util::RailUtils::template qsort< TPMGL(T) >(a,
                                                       ((x10_long)0ll),
                                                       (((x10_long)(::x10aux::nullCheck(a)->FMGL(size))) - (((x10_long)1ll))),
                                                       reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(sizeof(x10_util_RailUtils__closure__1<TPMGL(T)>)))x10_util_RailUtils__closure__1<TPMGL(T)>())));
}
#endif // X10_UTIL_RAILUTILS_H_sort_2533
#ifndef X10_UTIL_RAILUTILS_H_qsort_2534
#define X10_UTIL_RAILUTILS_H_qsort_2534
template<class TPMGL(T)> void x10::util::RailUtils::qsort(
  ::x10::lang::Rail< TPMGL(T) >* a, x10_long lo, x10_long hi,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 44 "x10/util/RailUtils.x10"
    if (((hi) <= (lo))) {
        return;
    }
    
    //#line 45 "x10/util/RailUtils.x10"
    x10_long l = ((lo) - (((x10_long)1ll)));
    
    //#line 46 "x10/util/RailUtils.x10"
    x10_long h = hi;
    
    //#line 47 "x10/util/RailUtils.x10"
    while (true) {
        
        //#line 48 "x10/util/RailUtils.x10"
        while (((((x10_long)(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(::x10aux::nullCheck(cmp), 
                 ::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__apply(
                   l = ((l) + (((x10_long)1ll)))), ::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     hi))))) < (((x10_long)0ll))))
        {
            ;
        }
        
        //#line 49 "x10/util/RailUtils.x10"
        while ((((((x10_long)(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(::x10aux::nullCheck(cmp), 
                 ::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__apply(
                   hi), ::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__apply(
                          h = ((h) - (((x10_long)1ll)))))))) < (((x10_long)0ll))) &&
               ((h) > (lo)))) {
            ;
        }
        
        //#line 50 "x10/util/RailUtils.x10"
        if (((l) >= (h))) {
            break;
        }
        
        //#line 51 "x10/util/RailUtils.x10"
        ::x10::util::RailUtils::template exch< TPMGL(T) >(
          a, l, h);
    }
    
    //#line 53 "x10/util/RailUtils.x10"
    ::x10::util::RailUtils::template exch< TPMGL(T) >(a, l,
                                                      hi);
    
    //#line 54 "x10/util/RailUtils.x10"
    ::x10::util::RailUtils::template qsort< TPMGL(T) >(a,
                                                       lo,
                                                       ((l) - (((x10_long)1ll))),
                                                       cmp);
    
    //#line 55 "x10/util/RailUtils.x10"
    ::x10::util::RailUtils::template qsort< TPMGL(T) >(a,
                                                       ((l) + (((x10_long)1ll))),
                                                       hi,
                                                       cmp);
}
#endif // X10_UTIL_RAILUTILS_H_qsort_2534
#ifndef X10_UTIL_RAILUTILS_H_exch_2535
#define X10_UTIL_RAILUTILS_H_exch_2535
template<class TPMGL(T)> void x10::util::RailUtils::exch(
  ::x10::lang::Rail< TPMGL(T) >* a, x10_long i, x10_long j) {
    
    //#line 59 "x10/util/RailUtils.x10"
    TPMGL(T) temp = ::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__apply(
                      i);
    
    //#line 60 "x10/util/RailUtils.x10"
    ::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__set(
      i, ::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__apply(
           j));
    
    //#line 61 "x10/util/RailUtils.x10"
    ::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__set(
      j, temp);
}
#endif // X10_UTIL_RAILUTILS_H_exch_2535
#ifndef X10_UTIL_RAILUTILS_H_binarySearch_2536
#define X10_UTIL_RAILUTILS_H_binarySearch_2536
template<class TPMGL(T)> x10_long x10::util::RailUtils::binarySearch(
  ::x10::lang::Rail< TPMGL(T) >* a, TPMGL(T) key, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 75 "x10/util/RailUtils.x10"
    return ::x10::util::RailUtils::template binarySearch< TPMGL(T) >(
             a, key, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(a)->FMGL(size)),
             cmp);
    
}
#endif // X10_UTIL_RAILUTILS_H_binarySearch_2536
#ifndef X10_UTIL_RAILUTILS_H_binarySearch_2537
#define X10_UTIL_RAILUTILS_H_binarySearch_2537
template<class TPMGL(T)> x10_long x10::util::RailUtils::binarySearch(
  ::x10::lang::Rail< TPMGL(T) >* a, TPMGL(T) key) {
    
    //#line 79 "x10/util/RailUtils.x10"
    return ::x10::util::RailUtils::template binarySearch< TPMGL(T) >(
             a, key, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(a)->FMGL(size)),
             reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(sizeof(x10_util_RailUtils__closure__2<TPMGL(T)>)))x10_util_RailUtils__closure__2<TPMGL(T)>())));
    
}
#endif // X10_UTIL_RAILUTILS_H_binarySearch_2537
#ifndef X10_UTIL_RAILUTILS_H_binarySearch_2538
#define X10_UTIL_RAILUTILS_H_binarySearch_2538
template<class TPMGL(T)> x10_long x10::util::RailUtils::binarySearch(
  ::x10::lang::Rail< TPMGL(T) >* a, TPMGL(T) key, x10_long min,
  x10_long max, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 95 "x10/util/RailUtils.x10"
    x10_long low = min;
    
    //#line 96 "x10/util/RailUtils.x10"
    x10_long high = ((max) - (((x10_long)1ll)));
    
    //#line 97 "x10/util/RailUtils.x10"
    while (((low) <= (high))) {
        
        //#line 98 "x10/util/RailUtils.x10"
        x10_long mid = ((((low) + (high))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 99 "x10/util/RailUtils.x10"
        x10_int compare = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(::x10aux::nullCheck(cmp), 
          ::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__apply(
            mid), key);
        
        //#line 100 "x10/util/RailUtils.x10"
        if (((((x10_long)(compare))) < (((x10_long)0ll))))
        {
            
            //#line 101 "x10/util/RailUtils.x10"
            low = ((mid) + (((x10_long)1ll)));
        } else 
        //#line 102 "x10/util/RailUtils.x10"
        if (((((x10_long)(compare))) > (((x10_long)0ll))))
        {
            
            //#line 103 "x10/util/RailUtils.x10"
            high = ((mid) - (((x10_long)1ll)));
        } else {
            
            //#line 105 "x10/util/RailUtils.x10"
            return mid;
            
        }
        
    }
    
    //#line 109 "x10/util/RailUtils.x10"
    return (-(((low) + (((x10_long)1ll)))));
    
}
#endif // X10_UTIL_RAILUTILS_H_binarySearch_2538
#ifndef X10_UTIL_RAILUTILS_H_binarySearch_2539
#define X10_UTIL_RAILUTILS_H_binarySearch_2539
template<class TPMGL(T)> x10_long x10::util::RailUtils::binarySearch(
  ::x10::lang::Rail< TPMGL(T) >* a, TPMGL(T) key, x10_long min,
  x10_long max) {
    
    //#line 113 "x10/util/RailUtils.x10"
    return ::x10::util::RailUtils::template binarySearch< TPMGL(T) >(
             a, key, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(a)->FMGL(size)),
             reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(sizeof(x10_util_RailUtils__closure__3<TPMGL(T)>)))x10_util_RailUtils__closure__3<TPMGL(T)>())));
    
}
#endif // X10_UTIL_RAILUTILS_H_binarySearch_2539
#ifndef X10_UTIL_RAILUTILS_H_reduce_2540
#define X10_UTIL_RAILUTILS_H_reduce_2540
template<class TPMGL(T), class TPMGL(U)> TPMGL(U) x10::util::RailUtils::reduce(
  ::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
  TPMGL(U) unit) {
    
    //#line 132 "x10/util/RailUtils.x10"
    TPMGL(U) accum = unit;
    
    //#line 133 "x10/util/RailUtils.x10"
    x10_long i__96508max__144316 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    {
        x10_long i__144317;
        for (i__144317 = ((x10_long)0ll); ((i__144317) < (i__96508max__144316));
             i__144317 = ((i__144317) + (((x10_long)1ll))))
        {
            
            //#line 134 "x10/util/RailUtils.x10"
            accum = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
              accum, ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                       i__144317));
        }
    }
    
    //#line 136 "x10/util/RailUtils.x10"
    return accum;
    
}
#endif // X10_UTIL_RAILUTILS_H_reduce_2540
#ifndef X10_UTIL_RAILUTILS_H_reduce_2541
#define X10_UTIL_RAILUTILS_H_reduce_2541
template<class TPMGL(T), class TPMGL(U)> TPMGL(U) x10::util::RailUtils::reduce(
  ::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* accumOp,
  TPMGL(U) accumUnit, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(T)>* elemOp) {
    
    //#line 157 "x10/util/RailUtils.x10"
    TPMGL(U) accum = accumUnit;
    
    //#line 158 "x10/util/RailUtils.x10"
    x10_long i__96527max__144320 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    {
        x10_long i__144321;
        for (i__144321 = ((x10_long)0ll); ((i__144321) < (i__96527max__144320));
             i__144321 = ((i__144321) + (((x10_long)1ll))))
        {
            
            //#line 159 "x10/util/RailUtils.x10"
            accum = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(accumOp), 
              accum, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(elemOp), 
                ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                  i__144321)));
        }
    }
    
    //#line 161 "x10/util/RailUtils.x10"
    return accum;
    
}
#endif // X10_UTIL_RAILUTILS_H_reduce_2541
#ifndef X10_UTIL_RAILUTILS_H_map_2542
#define X10_UTIL_RAILUTILS_H_map_2542
template<class TPMGL(T), class TPMGL(U)> ::x10::lang::Rail< TPMGL(U) >*
  x10::util::RailUtils::map(::x10::lang::Rail< TPMGL(T) >* src,
                            ::x10::lang::Rail< TPMGL(U) >* dst,
                            ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 180 "x10/util/RailUtils.x10"
    x10_long i__96546max__144324 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    {
        x10_long i__144325;
        for (i__144325 = ((x10_long)0ll); ((i__144325) < (i__96546max__144324));
             i__144325 = ((i__144325) + (((x10_long)1ll))))
        {
            
            //#line 181 "x10/util/RailUtils.x10"
            ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(U) >::__set(
              i__144325, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                  i__144325)));
        }
    }
    
    //#line 183 "x10/util/RailUtils.x10"
    return dst;
    
}
#endif // X10_UTIL_RAILUTILS_H_map_2542
#ifndef X10_UTIL_RAILUTILS_H_map_2543
#define X10_UTIL_RAILUTILS_H_map_2543
template<class TPMGL(S), class TPMGL(T), class TPMGL(U)> ::x10::lang::Rail< TPMGL(U) >*
  x10::util::RailUtils::map(::x10::lang::Rail< TPMGL(S) >* src1,
                            ::x10::lang::Rail< TPMGL(T) >* src2,
                            ::x10::lang::Rail< TPMGL(U) >* dst,
                            ::x10::lang::Fun_0_2<TPMGL(S), TPMGL(T), TPMGL(U)>* op) {
    
    //#line 203 "x10/util/RailUtils.x10"
    x10_long i__96565max__144328 = (x10_long)(::x10aux::nullCheck(src1)->FMGL(size));
    {
        x10_long i__144329;
        for (i__144329 = ((x10_long)0ll); ((i__144329) < (i__96565max__144328));
             i__144329 = ((i__144329) + (((x10_long)1ll))))
        {
            
            //#line 204 "x10/util/RailUtils.x10"
            ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(U) >::__set(
              i__144329, ::x10::lang::Fun_0_2<TPMGL(S), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                ::x10aux::nullCheck(src1)->x10::lang::template Rail< TPMGL(S) >::__apply(
                  i__144329), ::x10aux::nullCheck(src2)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                i__144329)));
        }
    }
    
    //#line 206 "x10/util/RailUtils.x10"
    return dst;
    
}
#endif // X10_UTIL_RAILUTILS_H_map_2543
#ifndef X10_UTIL_RAILUTILS_H_scan_2544
#define X10_UTIL_RAILUTILS_H_scan_2544
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::RailUtils::scan(
  ::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Rail< TPMGL(T) >* dst,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
  TPMGL(T) unit) {
    
    //#line 224 "x10/util/RailUtils.x10"
    #ifndef NO_ASSERTIONS
    if (::x10aux::x10__assertions_enabled)
        ::x10aux::x10__assert((((x10_long)(::x10aux::nullCheck(src)->FMGL(size))) <= ((x10_long)(::x10aux::nullCheck(dst)->FMGL(size)))));
    #endif//NO_ASSERTIONS
    
    //#line 225 "x10/util/RailUtils.x10"
    TPMGL(T) accum = unit;
    
    //#line 226 "x10/util/RailUtils.x10"
    x10_long i__96584max__144331 = (((x10_long)(::x10aux::nullCheck(src)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__144332;
        for (i__144332 = ((x10_long)0ll); ((i__144332) <= (i__96584max__144331));
             i__144332 = ((i__144332) + (((x10_long)1ll))))
        {
            
            //#line 227 "x10/util/RailUtils.x10"
            accum = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
              accum, ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                       i__144332));
            
            //#line 228 "x10/util/RailUtils.x10"
            ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
              i__144332, accum);
        }
    }
    
    //#line 230 "x10/util/RailUtils.x10"
    return dst;
    
}
#endif // X10_UTIL_RAILUTILS_H_scan_2544
#ifndef X10_UTIL_RAILUTILS_H_scan_2545
#define X10_UTIL_RAILUTILS_H_scan_2545
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::RailUtils::scan(
  ::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
  TPMGL(T) unit) {
    
    //#line 244 "x10/util/RailUtils.x10"
    ::x10::lang::Rail< TPMGL(T) >* dst = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe((x10_long)(::x10aux::nullCheck(src)->FMGL(size)), false);
    
    //#line 224 "x10/util/RailUtils.x10"
    #ifndef NO_ASSERTIONS
    if (::x10aux::x10__assertions_enabled)
        ::x10aux::x10__assert((((x10_long)(::x10aux::nullCheck(src)->FMGL(size))) <= ((x10_long)(::x10aux::nullCheck(dst)->FMGL(size)))));
    #endif//NO_ASSERTIONS
    
    //#line 225 "x10/util/RailUtils.x10"
    TPMGL(T) accum__144341 = unit;
    
    //#line 226 "x10/util/RailUtils.x10"
    x10_long i__96584max__144334 = (((x10_long)(::x10aux::nullCheck(src)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__144335;
        for (i__144335 = ((x10_long)0ll); ((i__144335) <= (i__96584max__144334));
             i__144335 = ((i__144335) + (((x10_long)1ll))))
        {
            
            //#line 227 "x10/util/RailUtils.x10"
            accum__144341 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
              accum__144341, ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                               i__144335));
            
            //#line 228 "x10/util/RailUtils.x10"
            dst->x10::lang::template Rail< TPMGL(T) >::__set(
              i__144335, accum__144341);
        }
    }
    
    //#line 245 "x10/util/RailUtils.x10"
    return dst;
    
}
#endif // X10_UTIL_RAILUTILS_H_scan_2545
#ifndef X10_UTIL_RAILUTILS_H_scanExclusive_2546
#define X10_UTIL_RAILUTILS_H_scanExclusive_2546
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::RailUtils::scanExclusive(
  ::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Rail< TPMGL(T) >* dst,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
  TPMGL(T) unit) {
    
    //#line 263 "x10/util/RailUtils.x10"
    #ifndef NO_ASSERTIONS
    if (::x10aux::x10__assertions_enabled)
        ::x10aux::x10__assert((((x10_long)(::x10aux::nullCheck(src)->FMGL(size))) <= ((x10_long)(::x10aux::nullCheck(dst)->FMGL(size)))));
    #endif//NO_ASSERTIONS
    
    //#line 264 "x10/util/RailUtils.x10"
    TPMGL(T) accum = unit;
    
    //#line 265 "x10/util/RailUtils.x10"
    ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
      ((x10_long)0ll), unit);
    
    //#line 266 "x10/util/RailUtils.x10"
    x10_long i__96602max__144342 = (((x10_long)(::x10aux::nullCheck(src)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__144343;
        for (i__144343 = ((x10_long)1ll); ((i__144343) <= (i__96602max__144342));
             i__144343 = ((i__144343) + (((x10_long)1ll))))
        {
            
            //#line 267 "x10/util/RailUtils.x10"
            accum = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
              accum, ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                       ((i__144343) - (((x10_long)1ll)))));
            
            //#line 268 "x10/util/RailUtils.x10"
            ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
              i__144343, accum);
        }
    }
    
    //#line 270 "x10/util/RailUtils.x10"
    return dst;
    
}
#endif // X10_UTIL_RAILUTILS_H_scanExclusive_2546
#ifndef X10_UTIL_RAILUTILS_H_scanExclusive_2547
#define X10_UTIL_RAILUTILS_H_scanExclusive_2547
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::RailUtils::scanExclusive(
  ::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
  TPMGL(T) unit) {
    
    //#line 284 "x10/util/RailUtils.x10"
    ::x10::lang::Rail< TPMGL(T) >* dst = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe((x10_long)(::x10aux::nullCheck(src)->FMGL(size)), false);
    
    //#line 263 "x10/util/RailUtils.x10"
    #ifndef NO_ASSERTIONS
    if (::x10aux::x10__assertions_enabled)
        ::x10aux::x10__assert((((x10_long)(::x10aux::nullCheck(src)->FMGL(size))) <= ((x10_long)(::x10aux::nullCheck(dst)->FMGL(size)))));
    #endif//NO_ASSERTIONS
    
    //#line 264 "x10/util/RailUtils.x10"
    TPMGL(T) accum__144352 = unit;
    
    //#line 265 "x10/util/RailUtils.x10"
    dst->x10::lang::template Rail< TPMGL(T) >::__set(((x10_long)0ll),
                                                     unit);
    
    //#line 266 "x10/util/RailUtils.x10"
    x10_long i__96602max__144345 = (((x10_long)(::x10aux::nullCheck(src)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__144346;
        for (i__144346 = ((x10_long)1ll); ((i__144346) <= (i__96602max__144345));
             i__144346 = ((i__144346) + (((x10_long)1ll))))
        {
            
            //#line 267 "x10/util/RailUtils.x10"
            accum__144352 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
              accum__144352, ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                               ((i__144346) - (((x10_long)1ll)))));
            
            //#line 268 "x10/util/RailUtils.x10"
            dst->x10::lang::template Rail< TPMGL(T) >::__set(
              i__144346, accum__144352);
        }
    }
    
    //#line 285 "x10/util/RailUtils.x10"
    return dst;
    
}
#endif // X10_UTIL_RAILUTILS_H_scanExclusive_2547
#endif // X10_UTIL_RAILUTILS_H_GENERICS
#endif // __X10_UTIL_RAILUTILS_H_NODEPS
