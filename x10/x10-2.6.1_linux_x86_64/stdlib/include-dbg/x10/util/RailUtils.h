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
#ifndef X10_UTIL_RAILUTILS_H_sort_2500
#define X10_UTIL_RAILUTILS_H_sort_2500
template<class TPMGL(T)> void x10::util::RailUtils::sort(::x10::lang::Rail< TPMGL(T) >* a,
                                                         ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 29 "x10/util/RailUtils.x10"
    ::x10::util::RailUtils::template qsort< TPMGL(T) >(a, ((x10_long)0ll),
                                                       (((x10_long)(::x10aux::nullCheck(a)->FMGL(size))) - (((x10_long)1ll))),
                                                       cmp);
}
#endif // X10_UTIL_RAILUTILS_H_sort_2500
#ifndef X10_UTIL_RAILUTILS_H_sort_2501
#define X10_UTIL_RAILUTILS_H_sort_2501
template<class TPMGL(T)> void x10::util::RailUtils::sort(
  ::x10::lang::Rail< TPMGL(T) >* a) {
    
    //#line 33 "x10/util/RailUtils.x10"
    ::x10::util::RailUtils::template sort< TPMGL(T) >(a, reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(sizeof(x10_util_RailUtils__closure__1<TPMGL(T)>)))x10_util_RailUtils__closure__1<TPMGL(T)>())));
}
#endif // X10_UTIL_RAILUTILS_H_sort_2501
#ifndef X10_UTIL_RAILUTILS_H_qsort_2502
#define X10_UTIL_RAILUTILS_H_qsort_2502
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
#endif // X10_UTIL_RAILUTILS_H_qsort_2502
#ifndef X10_UTIL_RAILUTILS_H_exch_2503
#define X10_UTIL_RAILUTILS_H_exch_2503
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
#endif // X10_UTIL_RAILUTILS_H_exch_2503
#ifndef X10_UTIL_RAILUTILS_H_binarySearch_2504
#define X10_UTIL_RAILUTILS_H_binarySearch_2504
template<class TPMGL(T)> x10_long x10::util::RailUtils::binarySearch(
  ::x10::lang::Rail< TPMGL(T) >* a, TPMGL(T) key, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 75 "x10/util/RailUtils.x10"
    return ::x10::util::RailUtils::template binarySearch< TPMGL(T) >(
             a, key, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(a)->FMGL(size)),
             cmp);
    
}
#endif // X10_UTIL_RAILUTILS_H_binarySearch_2504
#ifndef X10_UTIL_RAILUTILS_H_binarySearch_2505
#define X10_UTIL_RAILUTILS_H_binarySearch_2505
template<class TPMGL(T)> x10_long x10::util::RailUtils::binarySearch(
  ::x10::lang::Rail< TPMGL(T) >* a, TPMGL(T) key) {
    
    //#line 79 "x10/util/RailUtils.x10"
    return ::x10::util::RailUtils::template binarySearch< TPMGL(T) >(
             a, key, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(a)->FMGL(size)),
             reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(sizeof(x10_util_RailUtils__closure__2<TPMGL(T)>)))x10_util_RailUtils__closure__2<TPMGL(T)>())));
    
}
#endif // X10_UTIL_RAILUTILS_H_binarySearch_2505
#ifndef X10_UTIL_RAILUTILS_H_binarySearch_2506
#define X10_UTIL_RAILUTILS_H_binarySearch_2506
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
#endif // X10_UTIL_RAILUTILS_H_binarySearch_2506
#ifndef X10_UTIL_RAILUTILS_H_binarySearch_2507
#define X10_UTIL_RAILUTILS_H_binarySearch_2507
template<class TPMGL(T)> x10_long x10::util::RailUtils::binarySearch(
  ::x10::lang::Rail< TPMGL(T) >* a, TPMGL(T) key, x10_long min,
  x10_long max) {
    
    //#line 113 "x10/util/RailUtils.x10"
    return ::x10::util::RailUtils::template binarySearch< TPMGL(T) >(
             a, key, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(a)->FMGL(size)),
             reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(sizeof(x10_util_RailUtils__closure__3<TPMGL(T)>)))x10_util_RailUtils__closure__3<TPMGL(T)>())));
    
}
#endif // X10_UTIL_RAILUTILS_H_binarySearch_2507
#ifndef X10_UTIL_RAILUTILS_H_reduce_2508
#define X10_UTIL_RAILUTILS_H_reduce_2508
template<class TPMGL(T), class TPMGL(U)> TPMGL(U) x10::util::RailUtils::reduce(
  ::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
  TPMGL(U) unit) {
    
    //#line 132 "x10/util/RailUtils.x10"
    TPMGL(U) accum = unit;
    
    //#line 133 "x10/util/RailUtils.x10"
    ::x10::lang::Rail< TPMGL(T) >* rail__127574 = src;
    x10_long i__127463min__127575 = ((x10_long)0ll);
    x10_long i__127463max__127576 = (x10_long)(::x10aux::nullCheck(rail__127574)->FMGL(size));
    {
        x10_long i__127577;
        for (i__127577 = i__127463min__127575; ((i__127577) < (i__127463max__127576));
             i__127577 = ((i__127577) + (((x10_long)1ll))))
        {
            x10_long i__127578 = i__127577;
            
            //#line 134 "x10/util/RailUtils.x10"
            accum = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
              accum, ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                       i__127578));
        }
    }
    
    //#line 136 "x10/util/RailUtils.x10"
    return accum;
    
}
#endif // X10_UTIL_RAILUTILS_H_reduce_2508
#ifndef X10_UTIL_RAILUTILS_H_reduce_2509
#define X10_UTIL_RAILUTILS_H_reduce_2509
template<class TPMGL(T), class TPMGL(U)> TPMGL(U) x10::util::RailUtils::reduce(
  ::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* accumOp,
  TPMGL(U) accumUnit, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(T)>* elemOp) {
    
    //#line 157 "x10/util/RailUtils.x10"
    TPMGL(U) accum = accumUnit;
    
    //#line 158 "x10/util/RailUtils.x10"
    ::x10::lang::Rail< TPMGL(T) >* rail__127579 = src;
    x10_long i__127482min__127580 = ((x10_long)0ll);
    x10_long i__127482max__127581 = (x10_long)(::x10aux::nullCheck(rail__127579)->FMGL(size));
    {
        x10_long i__127582;
        for (i__127582 = i__127482min__127580; ((i__127582) < (i__127482max__127581));
             i__127582 = ((i__127582) + (((x10_long)1ll))))
        {
            x10_long i__127583 = i__127582;
            
            //#line 159 "x10/util/RailUtils.x10"
            accum = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(accumOp), 
              accum, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(elemOp), 
                ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                  i__127583)));
        }
    }
    
    //#line 161 "x10/util/RailUtils.x10"
    return accum;
    
}
#endif // X10_UTIL_RAILUTILS_H_reduce_2509
#ifndef X10_UTIL_RAILUTILS_H_map_2510
#define X10_UTIL_RAILUTILS_H_map_2510
template<class TPMGL(T), class TPMGL(U)> ::x10::lang::Rail< TPMGL(U) >*
  x10::util::RailUtils::map(::x10::lang::Rail< TPMGL(T) >* src,
                            ::x10::lang::Rail< TPMGL(U) >* dst,
                            ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 180 "x10/util/RailUtils.x10"
    ::x10::lang::Rail< TPMGL(T) >* rail__127584 = src;
    x10_long i__127501min__127585 = ((x10_long)0ll);
    x10_long i__127501max__127586 = (x10_long)(::x10aux::nullCheck(rail__127584)->FMGL(size));
    {
        x10_long i__127587;
        for (i__127587 = i__127501min__127585; ((i__127587) < (i__127501max__127586));
             i__127587 = ((i__127587) + (((x10_long)1ll))))
        {
            x10_long i__127588 = i__127587;
            
            //#line 181 "x10/util/RailUtils.x10"
            ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(U) >::__set(
              i__127588, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                  i__127588)));
        }
    }
    
    //#line 183 "x10/util/RailUtils.x10"
    return dst;
    
}
#endif // X10_UTIL_RAILUTILS_H_map_2510
#ifndef X10_UTIL_RAILUTILS_H_map_2511
#define X10_UTIL_RAILUTILS_H_map_2511
template<class TPMGL(S), class TPMGL(T), class TPMGL(U)> ::x10::lang::Rail< TPMGL(U) >*
  x10::util::RailUtils::map(::x10::lang::Rail< TPMGL(S) >* src1,
                            ::x10::lang::Rail< TPMGL(T) >* src2,
                            ::x10::lang::Rail< TPMGL(U) >* dst,
                            ::x10::lang::Fun_0_2<TPMGL(S), TPMGL(T), TPMGL(U)>* op) {
    
    //#line 203 "x10/util/RailUtils.x10"
    ::x10::lang::Rail< TPMGL(S) >* rail__127589 = src1;
    x10_long i__127520min__127590 = ((x10_long)0ll);
    x10_long i__127520max__127591 = (x10_long)(::x10aux::nullCheck(rail__127589)->FMGL(size));
    {
        x10_long i__127592;
        for (i__127592 = i__127520min__127590; ((i__127592) < (i__127520max__127591));
             i__127592 = ((i__127592) + (((x10_long)1ll))))
        {
            x10_long i__127593 = i__127592;
            
            //#line 204 "x10/util/RailUtils.x10"
            ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(U) >::__set(
              i__127593, ::x10::lang::Fun_0_2<TPMGL(S), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                ::x10aux::nullCheck(src1)->x10::lang::template Rail< TPMGL(S) >::__apply(
                  i__127593), ::x10aux::nullCheck(src2)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                i__127593)));
        }
    }
    
    //#line 206 "x10/util/RailUtils.x10"
    return dst;
    
}
#endif // X10_UTIL_RAILUTILS_H_map_2511
#ifndef X10_UTIL_RAILUTILS_H_scan_2512
#define X10_UTIL_RAILUTILS_H_scan_2512
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
    x10_long i__127539min__127594 = ((x10_long)0ll);
    x10_long i__127539max__127595 = (((x10_long)(::x10aux::nullCheck(src)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__127596;
        for (i__127596 = i__127539min__127594; ((i__127596) <= (i__127539max__127595));
             i__127596 = ((i__127596) + (((x10_long)1ll))))
        {
            x10_long i__127597 = i__127596;
            
            //#line 227 "x10/util/RailUtils.x10"
            accum = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
              accum, ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                       i__127597));
            
            //#line 228 "x10/util/RailUtils.x10"
            ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
              i__127597, accum);
        }
    }
    
    //#line 230 "x10/util/RailUtils.x10"
    return dst;
    
}
#endif // X10_UTIL_RAILUTILS_H_scan_2512
#ifndef X10_UTIL_RAILUTILS_H_scan_2513
#define X10_UTIL_RAILUTILS_H_scan_2513
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::RailUtils::scan(
  ::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
  TPMGL(T) unit) {
    
    //#line 244 "x10/util/RailUtils.x10"
    ::x10::lang::Rail< TPMGL(T) >* dst = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe((x10_long)(::x10aux::nullCheck(src)->FMGL(size)), false);
    
    //#line 245 "x10/util/RailUtils.x10"
    return ::x10::util::RailUtils::template scan< TPMGL(T) >(
             src, dst, op, unit);
    
}
#endif // X10_UTIL_RAILUTILS_H_scan_2513
#ifndef X10_UTIL_RAILUTILS_H_scanExclusive_2514
#define X10_UTIL_RAILUTILS_H_scanExclusive_2514
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
      ((x10_long)0ll), accum);
    
    //#line 266 "x10/util/RailUtils.x10"
    x10_long i__127557min__127598 = ((x10_long)1ll);
    x10_long i__127557max__127599 = (((x10_long)(::x10aux::nullCheck(src)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__127600;
        for (i__127600 = i__127557min__127598; ((i__127600) <= (i__127557max__127599));
             i__127600 = ((i__127600) + (((x10_long)1ll))))
        {
            x10_long i__127601 = i__127600;
            
            //#line 267 "x10/util/RailUtils.x10"
            accum = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
              accum, ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                       ((i__127601) - (((x10_long)1ll)))));
            
            //#line 268 "x10/util/RailUtils.x10"
            ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
              i__127601, accum);
        }
    }
    
    //#line 270 "x10/util/RailUtils.x10"
    return dst;
    
}
#endif // X10_UTIL_RAILUTILS_H_scanExclusive_2514
#ifndef X10_UTIL_RAILUTILS_H_scanExclusive_2515
#define X10_UTIL_RAILUTILS_H_scanExclusive_2515
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::RailUtils::scanExclusive(
  ::x10::lang::Rail< TPMGL(T) >* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op,
  TPMGL(T) unit) {
    
    //#line 284 "x10/util/RailUtils.x10"
    ::x10::lang::Rail< TPMGL(T) >* dst = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe((x10_long)(::x10aux::nullCheck(src)->FMGL(size)), false);
    
    //#line 285 "x10/util/RailUtils.x10"
    return ::x10::util::RailUtils::template scanExclusive< TPMGL(T) >(
             src, dst, op, unit);
    
}
#endif // X10_UTIL_RAILUTILS_H_scanExclusive_2515
#endif // X10_UTIL_RAILUTILS_H_GENERICS
#endif // __X10_UTIL_RAILUTILS_H_NODEPS
