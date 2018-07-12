#ifndef __X10_UTIL_RESILIENT_RESILIENTMAP_H
#define __X10_UTIL_RESILIENT_RESILIENTMAP_H

#include <x10rt.h>


#define X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_NODEPS
#include <x10/util/resilient/ResilientBaseMap.h>
#undef X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_NODEPS
#define X10_UTIL_MAP_H_NODEPS
#include <x10/util/Map.h>
#undef X10_UTIL_MAP_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace util { 
class NoSuchElementException;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Collection;
} } 

namespace x10 { namespace util { namespace resilient { 

class ResilientMap_Strings {
  public:
    static ::x10::lang::String sl__160034;
};

template<class TPMGL(K), class TPMGL(V)> class ResilientMap;
template <> class ResilientMap<void, void>;
template<class TPMGL(K), class TPMGL(V)> class ResilientMap : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void clear() = 0;
    virtual x10_boolean containsKey(TPMGL(K) k) = 0;
    virtual x10_boolean containsValue(TPMGL(V) v) = 0;
    virtual void deleteVoid(TPMGL(K) k) = 0;
    virtual x10_boolean _kwd__delete(TPMGL(K) k);
    virtual void forceUnlock(TPMGL(K) k) = 0;
    virtual TPMGL(V) get(TPMGL(K) k) = 0;
    virtual TPMGL(V) __apply(TPMGL(K) k);
    virtual TPMGL(V) getOrElse(TPMGL(K) k, TPMGL(V) orElse);
    virtual TPMGL(V) getOrThrow(TPMGL(K) k);
    virtual x10_boolean isEmpty() = 0;
    virtual x10_boolean isLocked(TPMGL(K) k) = 0;
    virtual void lock(TPMGL(K) k) = 0;
    virtual ::x10::lang::Any* nativeMap() = 0;
    virtual TPMGL(V) put(TPMGL(K) k, TPMGL(V) v) = 0;
    virtual TPMGL(V) __set(TPMGL(K) k, TPMGL(V) v);
    virtual ::x10::lang::Fun_0_0<TPMGL(V)>* asyncPut(TPMGL(K) k, TPMGL(V) v) = 0;
    virtual TPMGL(V) putIfAbsent(TPMGL(K) k, TPMGL(V) v) = 0;
    virtual TPMGL(V) remove(TPMGL(K) k) = 0;
    virtual ::x10::lang::Fun_0_0<TPMGL(V)>* asyncRemove(TPMGL(K) k) = 0;
    virtual x10_boolean remove(TPMGL(K) k, TPMGL(V) v) = 0;
    virtual TPMGL(V) replace(TPMGL(K) k, TPMGL(V) v) = 0;
    virtual x10_boolean replace(TPMGL(K) k, TPMGL(V) oldValue, TPMGL(V) newValue) = 0;
    virtual void set(TPMGL(K) k, TPMGL(V) v) = 0;
    virtual x10_long size() = 0;
    virtual ::x10::lang::Any* submitToKey(TPMGL(K) k, ::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, ::x10::lang::Any*>* entryProcessor) = 0;
    virtual ::x10::lang::Fun_0_0< ::x10::lang::Any*>* asyncSubmitToKey(
      TPMGL(K) k, ::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, ::x10::lang::Any*>* entryProcessor) = 0;
    virtual void unlock(TPMGL(K) k) = 0;
    virtual ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>*
      entrySet() = 0;
    virtual ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>*
      entries();
    virtual ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>*
      entrySet(::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>* predicate) = 0;
    virtual ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>*
      entries(::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>* predicate);
    virtual ::x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>*
      x10__util__resilient__ResilientMap____this__x10__util__resilient__ResilientMap(
      );
    void _constructor();
    
    virtual ::x10::util::Collection<TPMGL(V)>* values() = 0;
    virtual ::x10::util::Set<TPMGL(K)>* keySet(::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>* predicate) = 0;
    virtual ::x10::util::Collection<TPMGL(V)>* values(::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>* predicate) = 0;
    virtual ::x10::util::Set<TPMGL(K)>* keySet() = 0;
    virtual void __fieldInitializers_x10_util_resilient_ResilientMap(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(K), class TPMGL(V)> ::x10aux::RuntimeType x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::rtt;
template<class TPMGL(K), class TPMGL(V)> void x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::resilient::ResilientMap<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(), ::x10aux::getRTT< ::x10::util::Map<TPMGL(K), TPMGL(V)> >()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(K)>(), ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.resilient.ResilientMap";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 2, params, variances);
}

template <> class ResilientMap<void, void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(K), class TPMGL(V)> static ::x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>*
      getMap(::x10::lang::String* mapName);
    
    static ::x10::lang::String* placeSpecificKey(::x10::lang::String* key);
    
    static ::x10::lang::String* placeSpecificKey(::x10::lang::String* key,
                                                 x10_long placeID);
    
    
};

} } } 
#endif // X10_UTIL_RESILIENT_RESILIENTMAP_H

namespace x10 { namespace util { namespace resilient { 
template<class TPMGL(K), class TPMGL(V)> class ResilientMap;
} } } 

#ifndef X10_UTIL_RESILIENT_RESILIENTMAP_H_NODEPS
#define X10_UTIL_RESILIENT_RESILIENTMAP_H_NODEPS
#include <x10/util/resilient/ResilientBaseMap.h>
#include <x10/util/Map.h>
#include <x10/lang/String.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Boolean.h>
#include <x10/util/NoSuchElementException.h>
#include <x10/lang/Any.h>
#include <x10/lang/Place.h>
#include <x10/lang/Long.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/util/Map__Entry.h>
#include <x10/util/Set.h>
#include <x10/compiler/Synthetic.h>
#include <x10/util/Collection.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_RESILIENT_RESILIENTMAP_H_GENERICS
#define X10_UTIL_RESILIENT_RESILIENTMAP_H_GENERICS
#endif // X10_UTIL_RESILIENT_RESILIENTMAP_H_GENERICS
#ifndef X10_UTIL_RESILIENT_RESILIENTMAP_H_IMPLEMENTATION
#define X10_UTIL_RESILIENT_RESILIENTMAP_H_IMPLEMENTATION
#include <x10/util/resilient/ResilientMap.h>


//#line 32 "x10/util/resilient/ResilientMap.x10"
/**
     * Factory method to create resilient map.
     */

//#line 43 "x10/util/resilient/ResilientMap.x10"
/**
     * Remove all key-value pairs from the resilient map.
     */

//#line 48 "x10/util/resilient/ResilientMap.x10"
/**
     * Check if the resilient map contains key k.
     */

//#line 53 "x10/util/resilient/ResilientMap.x10"
/**
     * Check if the resilient map contains value v.
     */

//#line 61 "x10/util/resilient/ResilientMap.x10"
/**
     * Remove any value associated with key k from the resilient map.
	 * Unlike {@link #remove(K)}, this methods does not return the old value,
     * and so may be more efficient.
	 * @see #remove(K)
     */

//#line 64 "x10/util/resilient/ResilientMap.x10"
template<class TPMGL(K), class TPMGL(V)> x10_boolean x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::_kwd__delete(
  TPMGL(K) k) {
    
    //#line 65 "x10/util/resilient/ResilientMap.x10"
    return (!::x10aux::struct_equals(this->remove(k), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 74 "x10/util/resilient/ResilientMap.x10"
/**
     * Release the lock for the specified key regardless of the lock owner.
     * It always successfully unlocks the key, never blocks and returns
     * immediately (according to Hazelcast javadoc).
     *
     */

//#line 79 "x10/util/resilient/ResilientMap.x10"
/**
     * Get the value of key k in the resilient map.
     */

//#line 84 "x10/util/resilient/ResilientMap.x10"
/**
     * Shorthand for {@link #get}
     */
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::__apply(
  TPMGL(K) k) {
    
    //#line 85 "x10/util/resilient/ResilientMap.x10"
    return this->get(k);
    
}

//#line 87 "x10/util/resilient/ResilientMap.x10"
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::getOrElse(
  TPMGL(K) k, TPMGL(V) orElse) {
    
    //#line 88 "x10/util/resilient/ResilientMap.x10"
    TPMGL(V) v = this->get(k);
    
    //#line 89 "x10/util/resilient/ResilientMap.x10"
    return (::x10aux::struct_equals(v, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))
      ? (orElse) : (v);
    
}

//#line 92 "x10/util/resilient/ResilientMap.x10"
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::getOrThrow(
  TPMGL(K) k) {
    
    //#line 93 "x10/util/resilient/ResilientMap.x10"
    TPMGL(V) v = this->get(k);
    
    //#line 94 "x10/util/resilient/ResilientMap.x10"
    if ((::x10aux::struct_equals(v, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 95 "x10/util/resilient/ResilientMap.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::util::NoSuchElementException::_make()));
    }
    
    //#line 97 "x10/util/resilient/ResilientMap.x10"
    return v;
    
}

//#line 103 "x10/util/resilient/ResilientMap.x10"
/**
     * Check if the resilient map contains any mappings.
     */

//#line 109 "x10/util/resilient/ResilientMap.x10"
/**
     * Check lock for key k.  Return true iff lock for key k is acquired.
     *
     */

//#line 114 "x10/util/resilient/ResilientMap.x10"
/**
     * Acquires the lock for the specified key.
     */

//#line 120 "x10/util/resilient/ResilientMap.x10"
/**
     * Return underlying representation of the map.  This is used by the
     * Hazelcast resilient store for making SQL queries to the map.
     */

//#line 126 "x10/util/resilient/ResilientMap.x10"
/**
     * Return a key that is specific to the current place.  Useful for
     * storing place local handles.
     */

//#line 134 "x10/util/resilient/ResilientMap.x10"
/**
     * Return a key that is specific to place "placeID".  Useful for
     * storing place local handles.
     */

//#line 141 "x10/util/resilient/ResilientMap.x10"
/**
     * Associate value v with key k in the resilient map.
     */

//#line 146 "x10/util/resilient/ResilientMap.x10"
/**
     * Shorthand for {@link #put}
     */
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::__set(
  TPMGL(K) k, TPMGL(V) v) {
    
    //#line 147 "x10/util/resilient/ResilientMap.x10"
    return this->put(k, v);
    
}

//#line 156 "x10/util/resilient/ResilientMap.x10"
/**
     * Asynchronously put value v with key k in the resilient map returning
     * a future that when forced will return the previous value (if any) 
     * that was stored for key k.  
     * The activity created to do the remove will be registered with the
     * dynamically enclosing finish.
     */

//#line 162 "x10/util/resilient/ResilientMap.x10"
/**
     * If key k does not have a value, associate value v with key k
	 * in the resilient map.
     */

//#line 167 "x10/util/resilient/ResilientMap.x10"
/**
     * Remove any value associated with key k from the resilient map.
     */

//#line 176 "x10/util/resilient/ResilientMap.x10"
/**
     * Asynchronously remove the given key from the resilient map returning
     * a future that when forced will return the previous value (if any) 
     * that was stored for key k.
     * The activity created to do the remove will be registered with the
     * dynamically enclosing finish.
     */

//#line 183 "x10/util/resilient/ResilientMap.x10"
/**
     * Remove any value associated with key k from the resilient map if the
	 * associate value is equal to value v.
     */

//#line 189 "x10/util/resilient/ResilientMap.x10"
/**
     * If key k is associate with a value, update the resilient map,
	 * associating key k with value v.
     */

//#line 195 "x10/util/resilient/ResilientMap.x10"
/**
     * If key k is associate with value oldValue, update the resilient map,
	 * associating key k with value newValue.
     */

//#line 203 "x10/util/resilient/ResilientMap.x10"
/**
     * Associate value v with key k in the resilient map.
     * Similar to {@link #put(K,V)}, but does not return 
	 * the old value (and so can be more efficient).
     * @see #put(K,V)
     */

//#line 208 "x10/util/resilient/ResilientMap.x10"
/**
     * Return number of key-value pairs in the resilient map.
     */

//#line 215 "x10/util/resilient/ResilientMap.x10"
/**
     * Applies the user defined EntryProcessor to the entry mapped by the key
     * with specified ExecutionCallback to listen event status and returns
     * immediately.
     */

//#line 224 "x10/util/resilient/ResilientMap.x10"
/**
     * Applies the user defined EntryProcessor to the entry mapped by the key
     * with specified ExecutionCallback to listen event status and returns
     * immediately with a future. When forced, it will wait until the operation is done
	 * and return the result of the entryProcessor.
     *
     */

//#line 229 "x10/util/resilient/ResilientMap.x10"
/**
     * Releases the lock for the specified key.
     */

//#line 234 "x10/util/resilient/ResilientMap.x10"
/**
	 * Returns a set of all the entries in the map.
	 */

//#line 239 "x10/util/resilient/ResilientMap.x10"
/**
	 * Returns a set of all the entries in the map.
	 */
template<class TPMGL(K), class TPMGL(V)> ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>*
  x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::entries(
  ) {
    
    //#line 240 "x10/util/resilient/ResilientMap.x10"
    return this->entrySet();
    
}

//#line 245 "x10/util/resilient/ResilientMap.x10"
/**
     * Return a set of all the entries that satisfy a given predicate.
     */

//#line 250 "x10/util/resilient/ResilientMap.x10"
/**
     * Return a set of all the entries that satisfy a given predicate.
     */
template<class TPMGL(K), class TPMGL(V)> ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>*
  x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::entries(
  ::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>* predicate) {
    
    //#line 251 "x10/util/resilient/ResilientMap.x10"
    return this->entrySet(predicate);
    
}

//#line 27 "x10/util/resilient/ResilientMap.x10"
template<class TPMGL(K), class TPMGL(V)> ::x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>*
  x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::x10__util__resilient__ResilientMap____this__x10__util__resilient__ResilientMap(
  ) {
    return this;
    
}
template<class TPMGL(K), class TPMGL(V)> void x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::_constructor(
                                           ) {
    this->x10::util::resilient::template ResilientMap<TPMGL(K), TPMGL(V)>::__fieldInitializers_x10_util_resilient_ResilientMap();
}

template<class TPMGL(K), class TPMGL(V)> void x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::__fieldInitializers_x10_util_resilient_ResilientMap(
  ) {
 
}
template<class TPMGL(K), class TPMGL(V)> void x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

template<class TPMGL(K), class TPMGL(V)> void x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

template<class TPMGL(K), class TPMGL(V)> ::x10::util::resilient::ResilientMap<TPMGL(K), TPMGL(V)>*
  x10::util::resilient::ResilientMap<void, void>::getMap(::x10::lang::String* mapName) {
    
    //#line 34 "x10/util/resilient/ResilientMap.x10"
    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make((&::x10::util::resilient::ResilientMap_Strings::sl__160034))));
}
#endif // X10_UTIL_RESILIENT_RESILIENTMAP_H_IMPLEMENTATION
#endif // __X10_UTIL_RESILIENT_RESILIENTMAP_H_NODEPS
