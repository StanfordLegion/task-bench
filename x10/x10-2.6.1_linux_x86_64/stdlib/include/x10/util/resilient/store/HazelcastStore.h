#ifndef __X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE_H
#define __X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE_H

#include <x10rt.h>


#define X10_UTIL_RESILIENT_STORE_STORE_H_NODEPS
#include <x10/util/resilient/store/Store.h>
#undef X10_UTIL_RESILIENT_STORE_STORE_H_NODEPS
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace util { namespace resilient { 
template<class TPMGL(K), class TPMGL(V)> class ResilientMap;
} } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { namespace resilient { namespace store { 
template<class TPMGL(V)> class HazelcastStore__LogEntry;
} } } } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace util { namespace resilient { 
class PlaceManager__ChangeDescription;
} } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Collection;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace store { 

class HazelcastStore_Strings {
  public:
    static ::x10::lang::String sl__170593;
    static ::x10::lang::String sl__170591;
    static ::x10::lang::String sl__170590;
    static ::x10::lang::String sl__170592;
};

template<class TPMGL(V)> class HazelcastStore;
template <> class HazelcastStore<void>;
template<class TPMGL(V)> class HazelcastStore : public ::x10::util::resilient::store::Store<TPMGL(V)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::resilient::ResilientMap< ::x10::lang::String*, TPMGL(V)>*
      FMGL(map);
    
    ::x10::util::resilient::ResilientMap< ::x10::lang::String*, ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>*>*
      FMGL(log);
    
    ::x10::lang::PlaceGroup* FMGL(group);
    
    void _constructor(::x10::lang::String* name, ::x10::lang::PlaceGroup* activePlaces);
    
    static ::x10::util::resilient::store::HazelcastStore<TPMGL(V)>* _make(
             ::x10::lang::String* name, ::x10::lang::PlaceGroup* activePlaces);
    
    ::x10::lang::String* k(::x10::lang::Place place, ::x10::lang::String* key);
    virtual TPMGL(V) get(::x10::lang::String* key);
    virtual void set(::x10::lang::String* key, TPMGL(V) value);
    virtual void setAll(::x10::util::HashMap< ::x10::lang::String*, TPMGL(V)>* pairs);
    virtual TPMGL(V) getRemote(::x10::lang::Place place, ::x10::lang::String* key);
    virtual void setRemote(::x10::lang::Place place, ::x10::lang::String* key,
                           TPMGL(V) value);
    virtual void set2(::x10::lang::String* key, TPMGL(V) value,
                      ::x10::lang::Place place, ::x10::lang::String* key2,
                      TPMGL(V) value2);
    virtual ::x10::lang::PlaceGroup* getActivePlaces();
    virtual void updateForChangedPlaces(::x10::util::resilient::PlaceManager__ChangeDescription changes);
    virtual ::x10::util::resilient::store::HazelcastStore<TPMGL(V)>*
      x10__util__resilient__store__HazelcastStore____this__x10__util__resilient__store__HazelcastStore(
      );
    virtual void __fieldInitializers_x10_util_resilient_store_HazelcastStore(
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

template<class TPMGL(V)> ::x10aux::RuntimeType x10::util::resilient::store::HazelcastStore<TPMGL(V)>::rtt;
template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore<TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::resilient::store::HazelcastStore<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::util::resilient::store::Store<TPMGL(V)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.resilient.store.HazelcastStore";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class HazelcastStore<void> : public ::x10::util::resilient::store::Store<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } } 
#endif // X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE_H

namespace x10 { namespace util { namespace resilient { namespace store { 
template<class TPMGL(V)> class HazelcastStore;
} } } } 

#ifndef X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE_H_NODEPS
#define X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE_H_NODEPS
#include <x10/util/resilient/store/Store.h>
#include <x10/util/resilient/localstore/Cloneable.h>
#include <x10/util/resilient/ResilientMap.h>
#include <x10/lang/String.h>
#include <x10/util/resilient/store/HazelcastStore__LogEntry.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Place.h>
#include <x10/lang/Long.h>
#include <x10/xrx/Runtime.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/util/Set.h>
#include <x10/lang/Boolean.h>
#include <x10/util/resilient/PlaceManager__ChangeDescription.h>
#include <x10/util/Collection.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE_H_GENERICS
#define X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE_H_GENERICS
#endif // X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE_H_GENERICS
#ifndef X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE_H_IMPLEMENTATION
#define X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE_H_IMPLEMENTATION
#include <x10/util/resilient/store/HazelcastStore.h>


//#line 34 "x10/util/resilient/store/HazelcastStore.x10"

//#line 35 "x10/util/resilient/store/HazelcastStore.x10"

//#line 36 "x10/util/resilient/store/HazelcastStore.x10"

//#line 38 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore<TPMGL(V)>::_constructor(
                           ::x10::lang::String* name, ::x10::lang::PlaceGroup* activePlaces) {
    
    //#line 19 "x10/util/resilient/store/HazelcastStore.x10"
    ::x10::util::resilient::store::HazelcastStore<TPMGL(V)>* this__150328 =
      this;
    ::x10aux::nullCheck(this__150328)->FMGL(group) = (::x10aux::class_cast_unchecked< ::x10::lang::PlaceGroup*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 39 "x10/util/resilient/store/HazelcastStore.x10"
    this->FMGL(map) = ::x10::util::resilient::ResilientMap<void, void>::template getMap< ::x10::lang::String*,
                      TPMGL(V) >(::x10::lang::String::__plus((&::x10::util::resilient::store::HazelcastStore_Strings::sl__170590), name));
    
    //#line 40 "x10/util/resilient/store/HazelcastStore.x10"
    this->FMGL(log) = ::x10::util::resilient::ResilientMap<void, void>::template getMap< ::x10::lang::String*,
                      ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>* >(
                        ::x10::lang::String::__plus((&::x10::util::resilient::store::HazelcastStore_Strings::sl__170591), name));
    
    //#line 41 "x10/util/resilient/store/HazelcastStore.x10"
    this->FMGL(group) = activePlaces;
}
template<class TPMGL(V)> ::x10::util::resilient::store::HazelcastStore<TPMGL(V)>* x10::util::resilient::store::HazelcastStore<TPMGL(V)>::_make(
                           ::x10::lang::String* name, ::x10::lang::PlaceGroup* activePlaces)
{
    ::x10::util::resilient::store::HazelcastStore<TPMGL(V)>* this_ = new (::x10aux::alloc_z< ::x10::util::resilient::store::HazelcastStore<TPMGL(V)> >()) ::x10::util::resilient::store::HazelcastStore<TPMGL(V)>();
    this_->_constructor(name, activePlaces);
    return this_;
}



//#line 44 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> ::x10::lang::String* x10::util::resilient::store::HazelcastStore<TPMGL(V)>::k(
  ::x10::lang::Place place, ::x10::lang::String* key) {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(((::x10aux::nullCheck(this->FMGL(group))->indexOf(
                                                                       place)) << (0x3f & (x10_int)(((x10_long)32ll)))), (&::x10::util::resilient::store::HazelcastStore_Strings::sl__170592)), key);
    
}

//#line 46 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> TPMGL(V) x10::util::resilient::store::HazelcastStore<TPMGL(V)>::get(
  ::x10::lang::String* key) {
    return this->getRemote(::x10::lang::Place::_make(::x10aux::here),
                           key);
    
}

//#line 48 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore<TPMGL(V)>::set(
  ::x10::lang::String* key, TPMGL(V) value) {
    
    //#line 49 "x10/util/resilient/store/HazelcastStore.x10"
    this->setRemote(::x10::lang::Place::_make(::x10aux::here),
                    key, value);
}

//#line 52 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore<TPMGL(V)>::setAll(
  ::x10::util::HashMap< ::x10::lang::String*, TPMGL(V)>* pairs) {
    
    //#line 53 "x10/util/resilient/store/HazelcastStore.x10"
    ::x10::lang::Iterator< ::x10::lang::String*>* iter = ::x10::util::Set< ::x10::lang::String*>::iterator(::x10aux::nullCheck(::x10aux::nullCheck(pairs)->keySet()));
    
    //#line 54 "x10/util/resilient/store/HazelcastStore.x10"
    while (::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(iter)))
    {
        
        //#line 55 "x10/util/resilient/store/HazelcastStore.x10"
        ::x10::lang::String* k = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(iter));
        
        //#line 56 "x10/util/resilient/store/HazelcastStore.x10"
        TPMGL(V) v = ::x10aux::nullCheck(pairs)->getOrThrow(
                       k);
        
        //#line 57 "x10/util/resilient/store/HazelcastStore.x10"
        this->set(k, v);
    }
    
}

//#line 61 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> TPMGL(V) x10::util::resilient::store::HazelcastStore<TPMGL(V)>::getRemote(
  ::x10::lang::Place place, ::x10::lang::String* key) {
    return ::x10aux::nullCheck(this->FMGL(map))->get(this->k(
                                                       place,
                                                       key));
    
}

//#line 63 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore<TPMGL(V)>::setRemote(
  ::x10::lang::Place place, ::x10::lang::String* key, TPMGL(V) value) {
    
    //#line 64 "x10/util/resilient/store/HazelcastStore.x10"
    ::x10aux::nullCheck(this->FMGL(map))->set(this->k(place,
                                                      key),
                                              value);
}

//#line 67 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore<TPMGL(V)>::set2(
  ::x10::lang::String* key, TPMGL(V) value, ::x10::lang::Place place,
  ::x10::lang::String* key2, TPMGL(V) value2) {
    
    //#line 68 "x10/util/resilient/store/HazelcastStore.x10"
    ::x10::lang::String* k1 = this->k(::x10::lang::Place::_make(::x10aux::here),
                                      key);
    
    //#line 69 "x10/util/resilient/store/HazelcastStore.x10"
    ::x10::lang::String* k2 = this->k(place, key2);
    
    //#line 70 "x10/util/resilient/store/HazelcastStore.x10"
    ::x10aux::nullCheck(this->FMGL(log))->set(k1, (__extension__ ({
                                                  ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>* alloc__150317 =
                                                     (new (::x10aux::alloc_z< ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)> >()) ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>());
                                                  (alloc__150317)->::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>::_constructor(
                                                    k1, value,
                                                    k2, value2);
                                                  alloc__150317;
                                              }))
                                              );
    
    //#line 71 "x10/util/resilient/store/HazelcastStore.x10"
    ::x10aux::nullCheck(this->FMGL(map))->set(k2, value2);
    
    //#line 72 "x10/util/resilient/store/HazelcastStore.x10"
    ::x10aux::nullCheck(this->FMGL(map))->set(k1, value);
    
    //#line 73 "x10/util/resilient/store/HazelcastStore.x10"
    ::x10aux::nullCheck(this->FMGL(log))->_kwd__delete(k1);
}

//#line 76 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> ::x10::lang::PlaceGroup* x10::util::resilient::store::HazelcastStore<TPMGL(V)>::getActivePlaces(
  ) {
    return this->FMGL(group);
    
}

//#line 78 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore<TPMGL(V)>::updateForChangedPlaces(
  ::x10::util::resilient::PlaceManager__ChangeDescription changes) {
    
    //#line 79 "x10/util/resilient/store/HazelcastStore.x10"
    this->FMGL(group) = changes->FMGL(newActivePlaces);
    
    //#line 80 "x10/util/resilient/store/HazelcastStore.x10"
    {
        ::x10::lang::Iterator< ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>*>* entry__150319;
        for (entry__150319 = ::x10::util::Collection< ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>*>::iterator(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(log))->values()));
             ::x10::lang::Iterator< ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>*>::hasNext(::x10aux::nullCheck(entry__150319));
             ) {
            ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>* entry =
              ::x10::lang::Iterator< ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>*>::next(::x10aux::nullCheck(entry__150319));
            
            //#line 81 "x10/util/resilient/store/HazelcastStore.x10"
            ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::x10::util::resilient::store::HazelcastStore_Strings::sl__170593), ::x10aux::nullCheck(entry)->FMGL(key))));
            
            //#line 82 "x10/util/resilient/store/HazelcastStore.x10"
            ::x10aux::nullCheck(this->FMGL(map))->set(::x10aux::nullCheck(entry)->FMGL(key2),
                                                      ::x10aux::nullCheck(entry)->FMGL(value2));
            
            //#line 83 "x10/util/resilient/store/HazelcastStore.x10"
            ::x10aux::nullCheck(this->FMGL(map))->set(::x10aux::nullCheck(entry)->FMGL(key),
                                                      ::x10aux::nullCheck(entry)->FMGL(value));
        }
    }
    
    //#line 85 "x10/util/resilient/store/HazelcastStore.x10"
    ::x10aux::nullCheck(this->FMGL(log))->clear();
}

//#line 19 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> ::x10::util::resilient::store::HazelcastStore<TPMGL(V)>*
  x10::util::resilient::store::HazelcastStore<TPMGL(V)>::x10__util__resilient__store__HazelcastStore____this__x10__util__resilient__store__HazelcastStore(
  ) {
    return this;
    
}
template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore<TPMGL(V)>::__fieldInitializers_x10_util_resilient_store_HazelcastStore(
  ) {
    this->FMGL(group) = (::x10aux::class_cast_unchecked< ::x10::lang::PlaceGroup*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
template<class TPMGL(V)> const ::x10aux::serialization_id_t x10::util::resilient::store::HazelcastStore<TPMGL(V)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::resilient::store::HazelcastStore<TPMGL(V)>::_deserializer);

template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore<TPMGL(V)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::util::resilient::store::Store<TPMGL(V)>::_serialize_body(buf);
    buf.write(this->FMGL(map));
    buf.write(this->FMGL(log));
    buf.write(this->FMGL(group));
    
}

template<class TPMGL(V)> ::x10::lang::Reference* ::x10::util::resilient::store::HazelcastStore<TPMGL(V)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::resilient::store::HazelcastStore<TPMGL(V)>* this_ = new (::x10aux::alloc_z< ::x10::util::resilient::store::HazelcastStore<TPMGL(V)> >()) ::x10::util::resilient::store::HazelcastStore<TPMGL(V)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore<TPMGL(V)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::util::resilient::store::Store<TPMGL(V)>::_deserialize_body(buf);
    FMGL(map) = buf.read< ::x10::util::resilient::ResilientMap< ::x10::lang::String*, TPMGL(V)>*>();
    FMGL(log) = buf.read< ::x10::util::resilient::ResilientMap< ::x10::lang::String*, ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>*>*>();
    FMGL(group) = buf.read< ::x10::lang::PlaceGroup*>();
}

#endif // X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE_H_IMPLEMENTATION
#endif // __X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE_H_NODEPS
