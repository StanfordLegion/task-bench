#ifndef __X10_UTIL_HASHMAP_H
#define __X10_UTIL_HASHMAP_H

#include <x10rt.h>


#define X10_UTIL_MAP_H_NODEPS
#include <x10/util/Map.h>
#undef X10_UTIL_MAP_H_NODEPS
#define X10_IO_CUSTOMSERIALIZATION_H_NODEPS
#include <x10/io/CustomSerialization.h>
#undef X10_IO_CUSTOMSERIALIZATION_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Value)> class HashMap__HashEntry;
} } 
namespace x10 { namespace lang { 
class OutOfMemoryError;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace util { 
class NoSuchElementException;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Value)> class HashMap__KeySet;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Value)> class HashMap__EntrySet;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Value)> class HashMap__EntriesIterator;
} } 
namespace x10 { namespace io { 
class Deserializer;
} } 
namespace x10 { namespace io { 
class Serializer;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class HashMap_Strings {
  public:
    static ::x10::lang::String sl__158378;
    static ::x10::lang::String sl__158379;
};

template<class TPMGL(K), class TPMGL(V)> class HashMap;
template <> class HashMap<void, void>;
template<class TPMGL(K), class TPMGL(V)> class HashMap : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::util::Map<TPMGL(K), TPMGL(V)>::template itable< ::x10::util::HashMap<TPMGL(K), TPMGL(V)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::HashMap<TPMGL(K), TPMGL(V)> > _itable_1;
    
    static ::x10::io::CustomSerialization::itable< ::x10::util::HashMap<TPMGL(K), TPMGL(V)> > _itable_2;
    
    ::x10::lang::Rail< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* >*
      FMGL(table);
    
    x10_long FMGL(size);
    
    x10_long FMGL(occupation);
    
    x10_long FMGL(mask);
    
    x10_long FMGL(modCount);
    
    void _constructor();
    
    static ::x10::util::HashMap<TPMGL(K), TPMGL(V)>* _make();
    
    void _constructor(x10_long sz);
    
    static ::x10::util::HashMap<TPMGL(K), TPMGL(V)>* _make(x10_long sz);
    
    virtual void init(x10_long sz);
    virtual void clear();
    virtual x10_int hash(TPMGL(K) k);
    virtual x10_int hashInternal(TPMGL(K) k);
    virtual TPMGL(V) __apply(TPMGL(K) k);
    virtual TPMGL(V) get(TPMGL(K) k);
    virtual TPMGL(V) getOrElse(TPMGL(K) k, TPMGL(V) orelse);
    virtual TPMGL(V) getOrThrow(TPMGL(K) k);
    virtual ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* getEntry(
      TPMGL(K) k);
    virtual TPMGL(V) __set(TPMGL(K) k, TPMGL(V) v);
    virtual TPMGL(V) put(TPMGL(K) k, TPMGL(V) v);
    virtual TPMGL(V) putInternal(TPMGL(K) k, TPMGL(V) v, x10_boolean mayRehash);
    virtual void rehash();
    virtual void rehashInternal();
    virtual x10_boolean containsKey(TPMGL(K) k);
    virtual TPMGL(V) remove(TPMGL(K) k);
    virtual x10_boolean _kwd__delete(TPMGL(K) k);
    virtual ::x10::util::Set<TPMGL(K)>* keySet();
    virtual ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>*
      entries();
    virtual ::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>*
      entriesIterator();
    virtual x10_long size();
    void _constructor(::x10::io::Deserializer* ds);
    
    static ::x10::util::HashMap<TPMGL(K), TPMGL(V)>* _make(
             ::x10::io::Deserializer* ds);
    
    virtual void serialize(::x10::io::Serializer* s);
    virtual ::x10::util::HashMap<TPMGL(K), TPMGL(V)>* x10__util__HashMap____this__x10__util__HashMap(
      );
    virtual void __fieldInitializers_x10_util_HashMap();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(K), class TPMGL(V)> ::x10aux::RuntimeType x10::util::HashMap<TPMGL(K), TPMGL(V)>::rtt;
template<class TPMGL(K), class TPMGL(V)> void x10::util::HashMap<TPMGL(K), TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::HashMap<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(), ::x10aux::getRTT< ::x10::io::CustomSerialization>()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(K)>(), ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.HashMap";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 2, params, variances);
}

template <> class HashMap<void, void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
    
    /* Static field: FMGL(MAX_PROBES) */
    static const x10_long FMGL(MAX_PROBES) = 3;
    static x10_long FMGL(MAX_PROBES__get)();
    
    /* Static field: FMGL(MIN_SIZE) */
    static const x10_long FMGL(MIN_SIZE) = 4;
    static x10_long FMGL(MIN_SIZE__get)();
    
    
};

} } 
#endif // X10_UTIL_HASHMAP_H

namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 

#ifndef X10_UTIL_HASHMAP_H_NODEPS
#define X10_UTIL_HASHMAP_H_NODEPS
#include <x10/util/Map.h>
#include <x10/io/CustomSerialization.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/util/HashMap__HashEntry.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/OutOfMemoryError.h>
#include <x10/lang/String.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Int.h>
#include <x10/lang/Any.h>
#include <x10/lang/Zero.h>
#include <x10/util/NoSuchElementException.h>
#include <x10/util/Set.h>
#include <x10/util/HashMap__KeySet.h>
#include <x10/util/Map__Entry.h>
#include <x10/util/HashMap__EntrySet.h>
#include <x10/lang/Iterator.h>
#include <x10/util/HashMap__EntriesIterator.h>
#include <x10/io/Deserializer.h>
#include <x10/io/Serializer.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_HASHMAP_H_GENERICS
#define X10_UTIL_HASHMAP_H_GENERICS
inline x10_long x10::util::HashMap<void, void>::FMGL(MAX_PROBES__get)() {
    return x10::util::HashMap<void, void>::FMGL(MAX_PROBES);
}

inline x10_long x10::util::HashMap<void, void>::FMGL(MIN_SIZE__get)() {
    return x10::util::HashMap<void, void>::FMGL(MIN_SIZE);
}

#endif // X10_UTIL_HASHMAP_H_GENERICS
#ifndef X10_UTIL_HASHMAP_H_IMPLEMENTATION
#define X10_UTIL_HASHMAP_H_IMPLEMENTATION
#include <x10/util/HashMap.h>

template<class TPMGL(K), class TPMGL(V)> typename ::x10::util::Map<TPMGL(K), TPMGL(V)>::template itable< ::x10::util::HashMap<TPMGL(K), TPMGL(V)> >  x10::util::HashMap<TPMGL(K), TPMGL(V)>::_itable_0(&x10::util::HashMap<TPMGL(K), TPMGL(V)>::clear, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::containsKey, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::_kwd__delete, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::entries, &::x10::lang::X10Class::equals, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::get, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::getOrElse, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::getOrThrow, &::x10::lang::X10Class::hashCode, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::keySet, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::__apply, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::__set, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::put, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::remove, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::size, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(K), class TPMGL(V)> ::x10::lang::Any::itable< ::x10::util::HashMap<TPMGL(K), TPMGL(V)> >  x10::util::HashMap<TPMGL(K), TPMGL(V)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(K), class TPMGL(V)> ::x10::io::CustomSerialization::itable< ::x10::util::HashMap<TPMGL(K), TPMGL(V)> >  x10::util::HashMap<TPMGL(K), TPMGL(V)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::HashMap<TPMGL(K), TPMGL(V)>::serialize, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(K), class TPMGL(V)> ::x10aux::itable_entry x10::util::HashMap<TPMGL(K), TPMGL(V)>::_itables[4] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::Map<TPMGL(K), TPMGL(V)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::io::CustomSerialization>, &_itable_2), ::x10aux::itable_entry(NULL, (void*)"::x10::util::HashMap<TPMGL(K), TPMGL(V)>")};

//#line 39 "x10/util/HashMap.x10"
/** The actual table, must be of size 2**n */

//#line 42 "x10/util/HashMap.x10"
/** Number of non-null, non-removed entries in the table. */

//#line 45 "x10/util/HashMap.x10"
/** Number of non-null entries in the table. */

//#line 48 "x10/util/HashMap.x10"
/** table.length - 1 */

//#line 50 "x10/util/HashMap.x10"

//#line 52 "x10/util/HashMap.x10"

//#line 53 "x10/util/HashMap.x10"

//#line 55 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> void x10::util::HashMap<TPMGL(K), TPMGL(V)>::_constructor(
                                           ) {
    
    //#line 19 "x10/util/HashMap.x10"
    this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::__fieldInitializers_x10_util_HashMap();
    
    //#line 56 "x10/util/HashMap.x10"
    this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::init(::x10::util::HashMap<void, void>::FMGL(MIN_SIZE__get)());
}
template<class TPMGL(K), class TPMGL(V)> ::x10::util::HashMap<TPMGL(K), TPMGL(V)>* x10::util::HashMap<TPMGL(K), TPMGL(V)>::_make(
                                           ) {
    ::x10::util::HashMap<TPMGL(K), TPMGL(V)>* this_ = new (::x10aux::alloc_z< ::x10::util::HashMap<TPMGL(K), TPMGL(V)> >()) ::x10::util::HashMap<TPMGL(K), TPMGL(V)>();
    this_->_constructor();
    return this_;
}



//#line 59 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> void x10::util::HashMap<TPMGL(K), TPMGL(V)>::_constructor(
                                           x10_long sz) {
    
    //#line 19 "x10/util/HashMap.x10"
    this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::__fieldInitializers_x10_util_HashMap();
    
    //#line 60 "x10/util/HashMap.x10"
    if (((sz) > (((((x10_long)1ll)) << (0x3f & (x10_int)(((x10_long)60ll)))))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::OutOfMemoryError::_make(::x10::lang::String::__plus((&::x10::util::HashMap_Strings::sl__158378), sz))));
    }
    
    //#line 61 "x10/util/HashMap.x10"
    x10_long pow2 = ::x10::util::HashMap<void, void>::FMGL(MIN_SIZE__get)();
    
    //#line 62 "x10/util/HashMap.x10"
    while (((pow2) < (sz))) {
        
        //#line 63 "x10/util/HashMap.x10"
        pow2 = ((pow2) << (0x3f & (x10_int)(((x10_long)(((x10_int)1))))));
    }
    
    //#line 64 "x10/util/HashMap.x10"
    this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::init(
      pow2);
}
template<class TPMGL(K), class TPMGL(V)> ::x10::util::HashMap<TPMGL(K), TPMGL(V)>* x10::util::HashMap<TPMGL(K), TPMGL(V)>::_make(
                                           x10_long sz) {
    ::x10::util::HashMap<TPMGL(K), TPMGL(V)>* this_ = new (::x10aux::alloc_z< ::x10::util::HashMap<TPMGL(K), TPMGL(V)> >()) ::x10::util::HashMap<TPMGL(K), TPMGL(V)>();
    this_->_constructor(sz);
    return this_;
}



//#line 67 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> void x10::util::HashMap<TPMGL(K), TPMGL(V)>::init(
  x10_long sz) {
    
    //#line 69 "x10/util/HashMap.x10"
    #ifndef NO_ASSERTIONS
    if (::x10aux::x10__assertions_enabled)
        ::x10aux::x10__assert((::x10aux::struct_equals(((sz) & ((-(sz)))),
                                                       sz)));
    #endif//NO_ASSERTIONS
    
    //#line 70 "x10/util/HashMap.x10"
    #ifndef NO_ASSERTIONS
    if (::x10aux::x10__assertions_enabled)
        ::x10aux::x10__assert(((sz) >= (::x10::util::HashMap<void, void>::FMGL(MIN_SIZE__get)())));
    #endif//NO_ASSERTIONS
    
    //#line 72 "x10/util/HashMap.x10"
    this->FMGL(table) = ::x10::lang::Rail< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* >::_make(sz);
    
    //#line 73 "x10/util/HashMap.x10"
    this->FMGL(mask) = ((sz) - (((x10_long)1ll)));
    
    //#line 74 "x10/util/HashMap.x10"
    this->FMGL(size) = ((x10_long)0ll);
    
    //#line 75 "x10/util/HashMap.x10"
    this->FMGL(occupation) = ((x10_long)0ll);
}

//#line 78 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> void x10::util::HashMap<TPMGL(K), TPMGL(V)>::clear(
  ) {
    
    //#line 79 "x10/util/HashMap.x10"
    this->FMGL(modCount) = ((this->FMGL(modCount)) + (((x10_long)1ll)));
    
    //#line 80 "x10/util/HashMap.x10"
    this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::init(
      ::x10::util::HashMap<void, void>::FMGL(MIN_SIZE__get)());
}

//#line 83 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> x10_int x10::util::HashMap<TPMGL(K), TPMGL(V)>::hash(
  TPMGL(K) k) {
    return this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::hashInternal(
             k);
    
}

//#line 84 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> x10_int x10::util::HashMap<TPMGL(K), TPMGL(V)>::hashInternal(
  TPMGL(K) k) {
    
    //#line 85 "x10/util/HashMap.x10"
    return ((::x10aux::hash_code(k)) * (((x10_int)17)));
    
}

//#line 88 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::HashMap<TPMGL(K), TPMGL(V)>::__apply(
  TPMGL(K) k) {
    return this->get(k);
    
}

//#line 90 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::HashMap<TPMGL(K), TPMGL(V)>::get(
  TPMGL(K) k) {
    
    //#line 91 "x10/util/HashMap.x10"
    ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* e =
      this->getEntry(k);
    
    //#line 92 "x10/util/HashMap.x10"
    if (((::x10aux::struct_equals(e, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) ||
        ::x10aux::nullCheck(e)->FMGL(removed))) {
        return ::x10aux::zeroValue< TPMGL(V) >();
        
    }
    
    //#line 93 "x10/util/HashMap.x10"
    return ::x10aux::nullCheck(e)->FMGL(value);
    
}

//#line 96 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::HashMap<TPMGL(K), TPMGL(V)>::getOrElse(
  TPMGL(K) k, TPMGL(V) orelse) {
    
    //#line 97 "x10/util/HashMap.x10"
    ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* e =
      this->getEntry(k);
    
    //#line 98 "x10/util/HashMap.x10"
    if (((::x10aux::struct_equals(e, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) ||
        ::x10aux::nullCheck(e)->FMGL(removed))) {
        return orelse;
        
    }
    
    //#line 99 "x10/util/HashMap.x10"
    return ::x10aux::nullCheck(e)->FMGL(value);
    
}

//#line 102 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::HashMap<TPMGL(K), TPMGL(V)>::getOrThrow(
  TPMGL(K) k) {
    
    //#line 104 "x10/util/HashMap.x10"
    ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* e =
      this->getEntry(k);
    
    //#line 105 "x10/util/HashMap.x10"
    if (((::x10aux::struct_equals(e, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) ||
        ::x10aux::nullCheck(e)->FMGL(removed))) {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::util::NoSuchElementException::_make(::x10::lang::String::__plus((&::x10::util::HashMap_Strings::sl__158379), k))));
    }
    
    //#line 106 "x10/util/HashMap.x10"
    return ::x10aux::nullCheck(e)->FMGL(value);
    
}

//#line 109 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>*
  x10::util::HashMap<TPMGL(K), TPMGL(V)>::getEntry(TPMGL(K) k) {
    
    //#line 110 "x10/util/HashMap.x10"
    if ((::x10aux::struct_equals(this->FMGL(size), ((x10_long)0ll))))
    {
        
        //#line 111 "x10/util/HashMap.x10"
        return ::x10aux::class_cast_unchecked< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
    //#line 113 "x10/util/HashMap.x10"
    x10_int h = this->hash(k);
    
    //#line 114 "x10/util/HashMap.x10"
    x10_long i = ((x10_long)(h));
    
    //#line 116 "x10/util/HashMap.x10"
    while (true) {
        
        //#line 117 "x10/util/HashMap.x10"
        x10_long j = ((i) & (this->FMGL(mask)));
        
        //#line 118 "x10/util/HashMap.x10"
        i = ((i) + (((x10_long)1ll)));
        
        //#line 120 "x10/util/HashMap.x10"
        ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* e =
          ::x10aux::nullCheck(this->FMGL(table))->x10::lang::template Rail< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* >::__apply(
            j);
        
        //#line 121 "x10/util/HashMap.x10"
        if ((::x10aux::struct_equals(e, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 122 "x10/util/HashMap.x10"
            return ::x10aux::class_cast_unchecked< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
        }
        
        //#line 124 "x10/util/HashMap.x10"
        if ((!::x10aux::struct_equals(e, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 125 "x10/util/HashMap.x10"
            if (((::x10aux::struct_equals(::x10aux::nullCheck(e)->FMGL(hash),
                                          h)) && ::x10aux::equals(k,::x10aux::nullCheck(e)->FMGL(key))))
            {
                
                //#line 126 "x10/util/HashMap.x10"
                return e;
                
            }
            
            //#line 128 "x10/util/HashMap.x10"
            if (((((i) - (((x10_long)(h))))) > ((x10_long)(::x10aux::nullCheck(this->FMGL(table))->FMGL(size)))))
            {
                
                //#line 129 "x10/util/HashMap.x10"
                return ::x10aux::class_cast_unchecked< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                
            }
            
        }
        
    }
    
}

//#line 135 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::HashMap<TPMGL(K), TPMGL(V)>::__set(
  TPMGL(K) k, TPMGL(V) v) {
    return this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::putInternal(
             k, v, true);
    
}

//#line 137 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::HashMap<TPMGL(K), TPMGL(V)>::put(
  TPMGL(K) k, TPMGL(V) v) {
    return this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::putInternal(
             k, v, true);
    
}

//#line 138 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::HashMap<TPMGL(K), TPMGL(V)>::putInternal(
  TPMGL(K) k, TPMGL(V) v, x10_boolean mayRehash) {
    
    //#line 140 "x10/util/HashMap.x10"
    x10_int h = this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::hashInternal(
                  k);
    
    //#line 141 "x10/util/HashMap.x10"
    x10_long i = ((x10_long)(h));
    
    //#line 143 "x10/util/HashMap.x10"
    while (true) {
        
        //#line 144 "x10/util/HashMap.x10"
        x10_long j = ((i) & (this->FMGL(mask)));
        
        //#line 145 "x10/util/HashMap.x10"
        i = ((i) + (((x10_long)1ll)));
        
        //#line 147 "x10/util/HashMap.x10"
        ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* e =
          ::x10aux::nullCheck(this->FMGL(table))->x10::lang::template Rail< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* >::__apply(
            j);
        
        //#line 148 "x10/util/HashMap.x10"
        if ((::x10aux::struct_equals(e, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 149 "x10/util/HashMap.x10"
            this->FMGL(modCount) = ((this->FMGL(modCount)) + (((x10_long)1ll)));
            
            //#line 150 "x10/util/HashMap.x10"
            ::x10aux::nullCheck(this->FMGL(table))->x10::lang::template Rail< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* >::__set(
              j, ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>::_make(k,
                                                                            v,
                                                                            h));
            
            //#line 151 "x10/util/HashMap.x10"
            this->FMGL(size) = ((this->FMGL(size)) + (((x10_long)1ll)));
            
            //#line 152 "x10/util/HashMap.x10"
            this->FMGL(occupation) = ((this->FMGL(occupation)) + (((x10_long)1ll)));
            
            //#line 153 "x10/util/HashMap.x10"
            if ((mayRehash && (((((((i) - (((x10_long)(h))))) > (::x10::util::HashMap<void, void>::FMGL(MAX_PROBES__get)())) &&
                               ((this->FMGL(occupation)) >= ((((x10_long)(::x10aux::nullCheck(this->FMGL(table))->FMGL(size))) / ::x10aux::zeroCheck(((x10_long)2ll)))))) ||
                               (::x10aux::struct_equals(this->FMGL(occupation),
                                                        (x10_long)(::x10aux::nullCheck(this->FMGL(table))->FMGL(size))))))))
            {
                
                //#line 154 "x10/util/HashMap.x10"
                this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::rehashInternal();
            }
            
            //#line 156 "x10/util/HashMap.x10"
            return ::x10aux::zeroValue< TPMGL(V) >();
            
        } else 
        //#line 157 "x10/util/HashMap.x10"
        if (((::x10aux::struct_equals(::x10aux::nullCheck(e)->FMGL(hash),
                                      h)) && ::x10aux::equals(k,::x10aux::nullCheck(e)->FMGL(key))))
        {
            
            //#line 158 "x10/util/HashMap.x10"
            TPMGL(V) old = ::x10aux::nullCheck(e)->FMGL(value);
            
            //#line 159 "x10/util/HashMap.x10"
            ::x10aux::nullCheck(e)->FMGL(value) = v;
            
            //#line 160 "x10/util/HashMap.x10"
            if (::x10aux::nullCheck(e)->FMGL(removed)) {
                
                //#line 161 "x10/util/HashMap.x10"
                ::x10aux::nullCheck(e)->FMGL(removed) = false;
                
                //#line 162 "x10/util/HashMap.x10"
                this->FMGL(size) = ((this->FMGL(size)) + (((x10_long)1ll)));
                
                //#line 163 "x10/util/HashMap.x10"
                return ::x10aux::zeroValue< TPMGL(V) >();
                
            }
            
            //#line 165 "x10/util/HashMap.x10"
            return old;
            
        }
        
    }
    
}

//#line 170 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> void x10::util::HashMap<TPMGL(K), TPMGL(V)>::rehash(
  ) {
    this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::rehashInternal();
}

//#line 171 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> void x10::util::HashMap<TPMGL(K), TPMGL(V)>::rehashInternal(
  ) {
    
    //#line 172 "x10/util/HashMap.x10"
    this->FMGL(modCount) = ((this->FMGL(modCount)) + (((x10_long)1ll)));
    
    //#line 173 "x10/util/HashMap.x10"
    ::x10::lang::Rail< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* >* t =
      this->FMGL(table);
    
    //#line 174 "x10/util/HashMap.x10"
    x10_long oldSize = this->FMGL(size);
    
    //#line 175 "x10/util/HashMap.x10"
    this->FMGL(table) = ::x10::lang::Rail< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* >::_make((((x10_long)(::x10aux::nullCheck(t)->FMGL(size))) * (((x10_long)2ll))));
    
    //#line 176 "x10/util/HashMap.x10"
    this->FMGL(mask) = (((x10_long)(::x10aux::nullCheck(this->FMGL(table))->FMGL(size))) - (((x10_long)1ll)));
    
    //#line 177 "x10/util/HashMap.x10"
    this->FMGL(size) = ((x10_long)0ll);
    
    //#line 178 "x10/util/HashMap.x10"
    this->FMGL(occupation) = ((x10_long)0ll);
    
    //#line 180 "x10/util/HashMap.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < ((x10_long)(::x10aux::nullCheck(t)->FMGL(size))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 181 "x10/util/HashMap.x10"
            if (((!::x10aux::struct_equals(::x10aux::nullCheck(t)->x10::lang::template Rail< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* >::__apply(
                                             i), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
                !(::x10aux::nullCheck(::x10aux::nullCheck(t)->x10::lang::template Rail< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* >::__apply(
                                        i))->FMGL(removed))))
            {
                
                //#line 182 "x10/util/HashMap.x10"
                this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::putInternal(
                  ::x10aux::nullCheck(::x10aux::nullCheck(t)->x10::lang::template Rail< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* >::__apply(
                                        i))->FMGL(key), ::x10aux::nullCheck(::x10aux::nullCheck(t)->x10::lang::template Rail< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* >::__apply(
                                                                              i))->FMGL(value),
                  false);
            }
            
        }
    }
    
    //#line 185 "x10/util/HashMap.x10"
    #ifndef NO_ASSERTIONS
    if (::x10aux::x10__assertions_enabled)
        ::x10aux::x10__assert((::x10aux::struct_equals(this->FMGL(size),
                                                       oldSize)));
    #endif//NO_ASSERTIONS
    
}

//#line 188 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> x10_boolean x10::util::HashMap<TPMGL(K), TPMGL(V)>::containsKey(
  TPMGL(K) k) {
    
    //#line 189 "x10/util/HashMap.x10"
    ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* e =
      this->getEntry(k);
    
    //#line 190 "x10/util/HashMap.x10"
    return ((!::x10aux::struct_equals(e, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
    !(::x10aux::nullCheck(e)->FMGL(removed)));
    
}

//#line 193 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::HashMap<TPMGL(K), TPMGL(V)>::remove(
  TPMGL(K) k) {
    
    //#line 194 "x10/util/HashMap.x10"
    this->FMGL(modCount) = ((this->FMGL(modCount)) + (((x10_long)1ll)));
    
    //#line 195 "x10/util/HashMap.x10"
    ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* e =
      this->getEntry(k);
    
    //#line 196 "x10/util/HashMap.x10"
    if (((!::x10aux::struct_equals(e, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
        !(::x10aux::nullCheck(e)->FMGL(removed)))) {
        
        //#line 197 "x10/util/HashMap.x10"
        this->FMGL(size) = ((this->FMGL(size)) - (((x10_long)1ll)));
        
        //#line 198 "x10/util/HashMap.x10"
        ::x10aux::nullCheck(e)->FMGL(removed) = true;
        
        //#line 199 "x10/util/HashMap.x10"
        TPMGL(V) ans = ::x10aux::nullCheck(e)->FMGL(value);
        
        //#line 200 "x10/util/HashMap.x10"
        ::x10aux::nullCheck(e)->FMGL(value) = ::x10aux::zeroValue< TPMGL(V) >();
        
        //#line 201 "x10/util/HashMap.x10"
        return ans;
        
    }
    
    //#line 203 "x10/util/HashMap.x10"
    return ::x10aux::zeroValue< TPMGL(V) >();
    
}

//#line 206 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> x10_boolean x10::util::HashMap<TPMGL(K), TPMGL(V)>::_kwd__delete(
  TPMGL(K) k) {
    
    //#line 207 "x10/util/HashMap.x10"
    this->FMGL(modCount) = ((this->FMGL(modCount)) + (((x10_long)1ll)));
    
    //#line 208 "x10/util/HashMap.x10"
    ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* e =
      this->getEntry(k);
    
    //#line 209 "x10/util/HashMap.x10"
    if (((!::x10aux::struct_equals(e, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
        !(::x10aux::nullCheck(e)->FMGL(removed)))) {
        
        //#line 210 "x10/util/HashMap.x10"
        this->FMGL(size) = ((this->FMGL(size)) - (((x10_long)1ll)));
        
        //#line 211 "x10/util/HashMap.x10"
        ::x10aux::nullCheck(e)->FMGL(removed) = true;
        
        //#line 212 "x10/util/HashMap.x10"
        TPMGL(V) ans = ::x10aux::nullCheck(e)->FMGL(value);
        
        //#line 213 "x10/util/HashMap.x10"
        ::x10aux::nullCheck(e)->FMGL(value) = ::x10aux::zeroValue< TPMGL(V) >();
        
        //#line 214 "x10/util/HashMap.x10"
        return true;
        
    }
    
    //#line 216 "x10/util/HashMap.x10"
    return false;
    
}

//#line 220 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> ::x10::util::Set<TPMGL(K)>*
  x10::util::HashMap<TPMGL(K), TPMGL(V)>::keySet() {
    return reinterpret_cast< ::x10::util::Set<TPMGL(K)>*>(::x10::util::HashMap__KeySet<TPMGL(K), TPMGL(V)>::_make(this));
    
}

//#line 221 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>*
  x10::util::HashMap<TPMGL(K), TPMGL(V)>::entries() {
    return reinterpret_cast< ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>*>(::x10::util::HashMap__EntrySet<TPMGL(K), TPMGL(V)>::_make(this));
    
}

//#line 223 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> ::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>*
  x10::util::HashMap<TPMGL(K), TPMGL(V)>::entriesIterator(
  ) {
    
    //#line 224 "x10/util/HashMap.x10"
    ::x10::util::HashMap__EntriesIterator<TPMGL(K), TPMGL(V)>* iterator =
      ::x10::util::HashMap__EntriesIterator<TPMGL(K), TPMGL(V)>::_make(this);
    
    //#line 225 "x10/util/HashMap.x10"
    iterator->advance();
    
    //#line 226 "x10/util/HashMap.x10"
    return reinterpret_cast< ::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>*>(iterator);
    
}

//#line 262 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> x10_long x10::util::HashMap<TPMGL(K), TPMGL(V)>::size(
  ) {
    return this->FMGL(size);
    
}

//#line 304 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> void x10::util::HashMap<TPMGL(K), TPMGL(V)>::_constructor(
                                           ::x10::io::Deserializer* ds) {
    
    //#line 305 "x10/util/HashMap.x10"
    (this)->::x10::util::HashMap<TPMGL(K), TPMGL(V)>::_constructor();
    
    //#line 306 "x10/util/HashMap.x10"
    x10_long numEntries = ::x10aux::class_cast<x10_long>(::x10aux::nullCheck(ds)->x10::io::Deserializer::readAny());
    
    //#line 307 "x10/util/HashMap.x10"
    x10_long i__123378min__123397 = ((x10_long)1ll);
    x10_long i__123378max__123398 = numEntries;
    {
        x10_long i__123399;
        for (i__123399 = i__123378min__123397; ((i__123399) <= (i__123378max__123398));
             i__123399 = ((i__123399) + (((x10_long)1ll))))
        {
            
            //#line 308 "x10/util/HashMap.x10"
            TPMGL(K) key__123395 = ::x10aux::class_cast<TPMGL(K)>(::x10aux::nullCheck(ds)->x10::io::Deserializer::readAny());
            
            //#line 309 "x10/util/HashMap.x10"
            TPMGL(V) value__123396 = ::x10aux::class_cast<TPMGL(V)>(::x10aux::nullCheck(ds)->x10::io::Deserializer::readAny());
            
            //#line 310 "x10/util/HashMap.x10"
            this->x10::util::template HashMap<TPMGL(K), TPMGL(V)>::putInternal(
              key__123395, value__123396, true);
        }
    }
    
}
template<class TPMGL(K), class TPMGL(V)> ::x10::util::HashMap<TPMGL(K), TPMGL(V)>* x10::util::HashMap<TPMGL(K), TPMGL(V)>::_make(
                                           ::x10::io::Deserializer* ds)
{
    ::x10::util::HashMap<TPMGL(K), TPMGL(V)>* this_ = new (::x10aux::alloc_z< ::x10::util::HashMap<TPMGL(K), TPMGL(V)> >()) ::x10::util::HashMap<TPMGL(K), TPMGL(V)>();
    this_->_constructor(ds);
    return this_;
}



//#line 317 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> void x10::util::HashMap<TPMGL(K), TPMGL(V)>::serialize(
  ::x10::io::Serializer* s) {
    
    //#line 318 "x10/util/HashMap.x10"
    ::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>* it =
      this->entriesIterator();
    
    //#line 319 "x10/util/HashMap.x10"
    ::x10aux::nullCheck(s)->x10::io::Serializer::writeAny(
      ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->size()));
    
    //#line 320 "x10/util/HashMap.x10"
    while (::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>::hasNext(::x10aux::nullCheck(it)))
    {
        
        //#line 321 "x10/util/HashMap.x10"
        ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>* entry =
          ::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>::next(::x10aux::nullCheck(it));
        
        //#line 322 "x10/util/HashMap.x10"
        ::x10aux::nullCheck(s)->x10::io::Serializer::writeAny(
          ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>::getKey(::x10aux::nullCheck(entry))));
        
        //#line 323 "x10/util/HashMap.x10"
        ::x10aux::nullCheck(s)->x10::io::Serializer::writeAny(
          ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>::getValue(::x10aux::nullCheck(entry))));
    }
    
}

//#line 19 "x10/util/HashMap.x10"
template<class TPMGL(K), class TPMGL(V)> ::x10::util::HashMap<TPMGL(K), TPMGL(V)>*
  x10::util::HashMap<TPMGL(K), TPMGL(V)>::x10__util__HashMap____this__x10__util__HashMap(
  ) {
    return this;
    
}
template<class TPMGL(K), class TPMGL(V)> void x10::util::HashMap<TPMGL(K), TPMGL(V)>::__fieldInitializers_x10_util_HashMap(
  ) {
    this->FMGL(table) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::util::HashMap__HashEntry<TPMGL(K), TPMGL(V)>* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(size) = ((x10_long)0ll);
    this->FMGL(occupation) = ((x10_long)0ll);
    this->FMGL(mask) = ((x10_long)0ll);
    this->FMGL(modCount) = ((x10_long)0ll);
}
template<class TPMGL(K), class TPMGL(V)> const ::x10aux::serialization_id_t x10::util::HashMap<TPMGL(K), TPMGL(V)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::HashMap<TPMGL(K), TPMGL(V)>::_deserializer);

template<class TPMGL(K), class TPMGL(V)> void x10::util::HashMap<TPMGL(K), TPMGL(V)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    /* NOTE: Implements x10.io.CustomSerialization */
    ::x10::io::Serializer* x10_buf = ::x10::io::Serializer::_make(&buf);
    this->serialize(x10_buf);
    buf.write(::x10aux::deserialization_buffer::CUSTOM_SERIALIZATION_END);
    
}

template<class TPMGL(K), class TPMGL(V)> ::x10::lang::Reference* ::x10::util::HashMap<TPMGL(K), TPMGL(V)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::HashMap<TPMGL(K), TPMGL(V)>* this_ = new (::x10aux::alloc_z< ::x10::util::HashMap<TPMGL(K), TPMGL(V)> >()) ::x10::util::HashMap<TPMGL(K), TPMGL(V)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(K), class TPMGL(V)> void x10::util::HashMap<TPMGL(K), TPMGL(V)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    /* NOTE: Implements x10.io.CustomSerialization */
    ::x10::io::Deserializer* x10_buf = ::x10::io::Deserializer::_make(&buf);
    _constructor(x10_buf);
    ::x10aux::serialization_id_t tmp = buf.read< ::x10aux::serialization_id_t>();
    if (tmp != ::x10aux::deserialization_buffer::CUSTOM_SERIALIZATION_END) { ::x10aux::raiseSerializationProtocolError(); }
    
}

#endif // X10_UTIL_HASHMAP_H_IMPLEMENTATION
#endif // __X10_UTIL_HASHMAP_H_NODEPS
