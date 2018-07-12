#ifndef __X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP_H
#define __X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP_H

#include <x10rt.h>


#define X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_NODEPS
#include <x10/util/resilient/ResilientBaseMap.h>
#undef X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace util { namespace resilient { 
class ResilientTransactionManager;
} } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Collection;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 

namespace x10 { namespace util { namespace resilient { 

template<class TPMGL(K), class TPMGL(V)> class ResilientTransactionalMap;
template <> class ResilientTransactionalMap<void, void>;
template<class TPMGL(K), class TPMGL(V)> class ResilientTransactionalMap : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual TPMGL(V) __apply(TPMGL(K) k);
    virtual TPMGL(V) __set(TPMGL(K) k, TPMGL(V) v);
    virtual TPMGL(V) getForUpdate(TPMGL(K) k);
    virtual ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*
      x10__util__resilient__ResilientTransactionalMap____this__x10__util__resilient__ResilientTransactionalMap(
      );
    void _constructor();
    
    virtual x10_boolean containsKey(TPMGL(K) k) = 0;
    virtual void deleteVoid(TPMGL(K) k) = 0;
    virtual TPMGL(V) get(TPMGL(K) k) = 0;
    virtual x10_boolean isEmpty() = 0;
    virtual TPMGL(V) put(TPMGL(K) k, TPMGL(V) v) = 0;
    virtual TPMGL(V) putIfAbsent(TPMGL(K) k, TPMGL(V) v) = 0;
    virtual TPMGL(V) remove(TPMGL(K) k) = 0;
    virtual x10_boolean remove(TPMGL(K) k, TPMGL(V) v) = 0;
    virtual TPMGL(V) replace(TPMGL(K) k, TPMGL(V) v) = 0;
    virtual x10_boolean replace(TPMGL(K) k, TPMGL(V) oldValue,
                                TPMGL(V) newValue) = 0;
    virtual void set(TPMGL(K) k, TPMGL(V) v) = 0;
    virtual x10_long size() = 0;
    virtual ::x10::util::Set<TPMGL(K)>* keySet() = 0;
    virtual ::x10::util::Collection<TPMGL(V)>* values() = 0;
    virtual ::x10::util::Set<TPMGL(K)>* keySet(::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>* predicate) = 0;
    virtual ::x10::util::Collection<TPMGL(V)>* values(::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>* predicate) = 0;
    virtual void __fieldInitializers_x10_util_resilient_ResilientTransactionalMap(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(K), class TPMGL(V)> ::x10aux::RuntimeType x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>::rtt;
template<class TPMGL(K), class TPMGL(V)> void x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::resilient::ResilientTransactionalMap<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(K)>(), ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.resilient.ResilientTransactionalMap";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 2, params, variances);
}

template <> class ResilientTransactionalMap<void, void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(K), class TPMGL(V), class TPMGL(T)>
    static TPMGL(T) runTransaction(::x10::lang::String* mapName,
                                   ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>* run);
    
    template<class TPMGL(K), class TPMGL(V), class TPMGL(T)>
    static TPMGL(T) runLocalTransaction(::x10::lang::String* mapName,
                                        ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>* run);
    
    
};

} } } 
#endif // X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP_H

namespace x10 { namespace util { namespace resilient { 
template<class TPMGL(K), class TPMGL(V)> class ResilientTransactionalMap;
} } } 

#ifndef X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP_H_NODEPS
#define X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP_H_NODEPS
#include <x10/util/resilient/ResilientBaseMap.h>
#include <x10/lang/String.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/util/resilient/ResilientTransactionManager.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/util/Set.h>
#include <x10/util/Collection.h>
#include <x10/util/Map__Entry.h>
#ifndef X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP_H_GENERICS
#define X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP_H_GENERICS
#endif // X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP_H_GENERICS
#ifndef X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP_H_IMPLEMENTATION
#define X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP_H_IMPLEMENTATION
#include <x10/util/resilient/ResilientTransactionalMap.h>

#ifndef X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP__CLOSURE__1_CLOSURE
#define X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(K), class TPMGL(V), class TPMGL(T)> class x10_util_resilient_ResilientTransactionalMap__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)>::template itable <x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(::x10::util::resilient::ResilientTransactionManager* manager){
        
        //#line 34 "x10/util/resilient/ResilientTransactionalMap.x10"
        return ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>::__apply(::x10aux::nullCheck(run), 
          ::x10::util::resilient::ResilientTransactionManager::getMap< TPMGL(K),
          TPMGL(V) >(manager, mapName));
        
    }
    
    // captured environment
    ::x10::lang::String* mapName;
    ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>* run;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->mapName);
        buf.write(this->run);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::String* that_mapName = buf.read< ::x10::lang::String*>();
        ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>* that_run = buf.read< ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>*>();
        x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) >* this_ = new (storage) x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) >(that_mapName, that_run);
        return this_;
    }
    
    x10_util_resilient_ResilientTransactionalMap__closure__1(::x10::lang::String* mapName, ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>* run) : mapName(mapName), run(run) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/resilient/ResilientTransactionalMap.x10:34";
    }

};

template<class TPMGL(K), class TPMGL(V), class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)>::template itable <x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) > >x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) >::__apply, &x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V), class TPMGL(T)> ::x10aux::itable_entry x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)> >, &x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V), class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T) >::_deserialize);

#endif // X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP__CLOSURE__1_CLOSURE
#ifndef X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP__CLOSURE__2_CLOSURE
#define X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(K), class TPMGL(V), class TPMGL(T)> class x10_util_resilient_ResilientTransactionalMap__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)>::template itable <x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(::x10::util::resilient::ResilientTransactionManager* manager){
        
        //#line 42 "x10/util/resilient/ResilientTransactionalMap.x10"
        return ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>::__apply(::x10aux::nullCheck(run), 
          ::x10::util::resilient::ResilientTransactionManager::getMap< TPMGL(K),
          TPMGL(V) >(manager, mapName));
        
    }
    
    // captured environment
    ::x10::lang::String* mapName;
    ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>* run;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->mapName);
        buf.write(this->run);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::String* that_mapName = buf.read< ::x10::lang::String*>();
        ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>* that_run = buf.read< ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>*>();
        x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) >* this_ = new (storage) x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) >(that_mapName, that_run);
        return this_;
    }
    
    x10_util_resilient_ResilientTransactionalMap__closure__2(::x10::lang::String* mapName, ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>* run) : mapName(mapName), run(run) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/resilient/ResilientTransactionalMap.x10:42";
    }

};

template<class TPMGL(K), class TPMGL(V), class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)>::template itable <x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) > >x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) >::__apply, &x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(K), class TPMGL(V), class TPMGL(T)> ::x10aux::itable_entry x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)> >, &x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(K), class TPMGL(V), class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T) >::_deserialize);

#endif // X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP__CLOSURE__2_CLOSURE

//#line 32 "x10/util/resilient/ResilientTransactionalMap.x10"
/**
     * Factory method to create resilient map.
     */

//#line 40 "x10/util/resilient/ResilientTransactionalMap.x10"
/**
	 * Factory method to create resilient map and run local transaction
	 */

//#line 48 "x10/util/resilient/ResilientTransactionalMap.x10"
/**
     * Shorthand for {@link #get}
     */
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>::__apply(
  TPMGL(K) k) {
    
    //#line 49 "x10/util/resilient/ResilientTransactionalMap.x10"
    return this->get(k);
    
}

//#line 54 "x10/util/resilient/ResilientTransactionalMap.x10"
/**
     * Shorthand for {@link #put}
     */
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>::__set(
  TPMGL(K) k, TPMGL(V) v) {
    
    //#line 55 "x10/util/resilient/ResilientTransactionalMap.x10"
    return this->put(k, v);
    
}

//#line 62 "x10/util/resilient/ResilientTransactionalMap.x10"
/**
     * Get the value of key k in the resilient map. 
	 * Also ``hints'' to the implementation that we are likely to
	 * update the key later in the transaction.
     */
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>::getForUpdate(
  TPMGL(K) k) {
    return this->get(k);
    
}

//#line 27 "x10/util/resilient/ResilientTransactionalMap.x10"
template<class TPMGL(K), class TPMGL(V)> ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*
  x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>::x10__util__resilient__ResilientTransactionalMap____this__x10__util__resilient__ResilientTransactionalMap(
  ) {
    return this;
    
}
template<class TPMGL(K), class TPMGL(V)> void x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>::_constructor(
                                           ) {
    this->x10::util::resilient::template ResilientTransactionalMap<TPMGL(K), TPMGL(V)>::__fieldInitializers_x10_util_resilient_ResilientTransactionalMap();
}

template<class TPMGL(K), class TPMGL(V)> void x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>::__fieldInitializers_x10_util_resilient_ResilientTransactionalMap(
  ) {
 
}
template<class TPMGL(K), class TPMGL(V)> void x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

template<class TPMGL(K), class TPMGL(V)> void x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

template<class TPMGL(K), class TPMGL(V), class TPMGL(T)> TPMGL(T)
  x10::util::resilient::ResilientTransactionalMap<void, void>::runTransaction(::x10::lang::String* mapName,
                                                                              ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>* run) {
    
    //#line 33 "x10/util/resilient/ResilientTransactionalMap.x10"
    return ::x10::util::resilient::ResilientTransactionManager::template runTransaction< TPMGL(T) >(
             reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)> >(sizeof(x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T)>)))x10_util_resilient_ResilientTransactionalMap__closure__1<TPMGL(K),TPMGL(V),TPMGL(T)>(mapName, run))));
    
}
template<class TPMGL(K), class TPMGL(V), class TPMGL(T)> TPMGL(T)
  x10::util::resilient::ResilientTransactionalMap<void, void>::runLocalTransaction(::x10::lang::String* mapName,
                                                                                   ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*, TPMGL(T)>* run) {
    
    //#line 41 "x10/util/resilient/ResilientTransactionalMap.x10"
    return ::x10::util::resilient::ResilientTransactionManager::template runLocalTransaction< TPMGL(T) >(
             reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)> >(sizeof(x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T)>)))x10_util_resilient_ResilientTransactionalMap__closure__2<TPMGL(K),TPMGL(V),TPMGL(T)>(mapName, run))));
    
}
#endif // X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP_H_IMPLEMENTATION
#endif // __X10_UTIL_RESILIENT_RESILIENTTRANSACTIONALMAP_H_NODEPS
