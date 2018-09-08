#ifndef __X10_UTIL_RESILIENT_STORE_STORE_H
#define __X10_UTIL_RESILIENT_STORE_STORE_H

#include <x10rt.h>


namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
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
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace util { namespace resilient { 
class PlaceManager__ChangeDescription;
} } } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace util { namespace resilient { namespace store { 
template<class TPMGL(V)> class HazelcastStore;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace store { 
template<class TPMGL(V)> class NativeStore;
} } } } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace store { 

class Store_Strings {
  public:
    static ::x10::lang::String sl__170616;
    static ::x10::lang::String sl__170617;
};

template<class TPMGL(V)> class Store;
template <> class Store<void>;
template<class TPMGL(V)> class Store : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual TPMGL(V) get(::x10::lang::String* key) = 0;
    virtual void set(::x10::lang::String* key, TPMGL(V) value) = 0;
    virtual void setAll(::x10::util::HashMap< ::x10::lang::String*, TPMGL(V)>* pairs) = 0;
    virtual TPMGL(V) getRemote(::x10::lang::Place place, ::x10::lang::String* key);
    virtual void setRemote(::x10::lang::Place place, ::x10::lang::String* key,
                           TPMGL(V) value);
    virtual void set2(::x10::lang::String* key, TPMGL(V) value, ::x10::lang::Place place,
                      ::x10::lang::String* key2, TPMGL(V) value2) = 0;
    virtual void updateForChangedPlaces(::x10::util::resilient::PlaceManager__ChangeDescription changes) = 0;
    virtual ::x10::lang::PlaceGroup* getActivePlaces() = 0;
    virtual ::x10::util::resilient::store::Store<TPMGL(V)>* x10__util__resilient__store__Store____this__x10__util__resilient__store__Store(
      );
    void _constructor();
    
    virtual void __fieldInitializers_x10_util_resilient_store_Store(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(V)> ::x10aux::RuntimeType x10::util::resilient::store::Store<TPMGL(V)>::rtt;
template<class TPMGL(V)> void x10::util::resilient::store::Store<TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::resilient::store::Store<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.resilient.store.Store";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class Store<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(V)> static ::x10::util::resilient::store::Store<TPMGL(V)>*
      make(::x10::lang::String* name, ::x10::lang::PlaceGroup* activePlaces);
    
    static ::x10::lang::String* dataStore();
    
    
};

} } } } 
#endif // X10_UTIL_RESILIENT_STORE_STORE_H

namespace x10 { namespace util { namespace resilient { namespace store { 
template<class TPMGL(V)> class Store;
} } } } 

#ifndef X10_UTIL_RESILIENT_STORE_STORE_H_NODEPS
#define X10_UTIL_RESILIENT_STORE_STORE_H_NODEPS
#include <x10/util/resilient/localstore/Cloneable.h>
#include <x10/lang/String.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Place.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/util/resilient/PlaceManager__ChangeDescription.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Boolean.h>
#include <x10/util/resilient/store/HazelcastStore.h>
#include <x10/util/resilient/store/NativeStore.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_RESILIENT_STORE_STORE_H_GENERICS
#define X10_UTIL_RESILIENT_STORE_STORE_H_GENERICS
#endif // X10_UTIL_RESILIENT_STORE_STORE_H_GENERICS
#ifndef X10_UTIL_RESILIENT_STORE_STORE_H_IMPLEMENTATION
#define X10_UTIL_RESILIENT_STORE_STORE_H_IMPLEMENTATION
#include <x10/util/resilient/store/Store.h>

#ifndef X10_UTIL_RESILIENT_STORE_STORE__CLOSURE__1_CLOSURE
#define X10_UTIL_RESILIENT_STORE_STORE__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(V)> class x10_util_resilient_store_Store__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0<TPMGL(V)>::template itable <x10_util_resilient_store_Store__closure__1<TPMGL(V) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(V) __apply(){
        return saved_this->get(key);
        
    }
    
    // captured environment
    ::x10::util::resilient::store::Store<TPMGL(V)>* saved_this;
    ::x10::lang::String* key;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->key);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_resilient_store_Store__closure__1<TPMGL(V) >* storage = ::x10aux::alloc_z<x10_util_resilient_store_Store__closure__1<TPMGL(V) > >();
        buf.record_reference(storage);
        ::x10::util::resilient::store::Store<TPMGL(V)>* that_saved_this = buf.read< ::x10::util::resilient::store::Store<TPMGL(V)>*>();
        ::x10::lang::String* that_key = buf.read< ::x10::lang::String*>();
        x10_util_resilient_store_Store__closure__1<TPMGL(V) >* this_ = new (storage) x10_util_resilient_store_Store__closure__1<TPMGL(V) >(that_saved_this, that_key);
        return this_;
    }
    
    x10_util_resilient_store_Store__closure__1(::x10::util::resilient::store::Store<TPMGL(V)>* saved_this, ::x10::lang::String* key) : saved_this(saved_this), key(key) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(V)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(V)> >(); }
    
    const char* toNativeString() {
        return "x10/util/resilient/store/Store.x10:31";
    }

};

template<class TPMGL(V)> typename ::x10::lang::Fun_0_0<TPMGL(V)>::template itable <x10_util_resilient_store_Store__closure__1<TPMGL(V) > >x10_util_resilient_store_Store__closure__1<TPMGL(V) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_resilient_store_Store__closure__1<TPMGL(V) >::__apply, &x10_util_resilient_store_Store__closure__1<TPMGL(V) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(V)> ::x10aux::itable_entry x10_util_resilient_store_Store__closure__1<TPMGL(V) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(V)> >, &x10_util_resilient_store_Store__closure__1<TPMGL(V) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V)> const ::x10aux::serialization_id_t x10_util_resilient_store_Store__closure__1<TPMGL(V) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_resilient_store_Store__closure__1<TPMGL(V) >::_deserialize);

#endif // X10_UTIL_RESILIENT_STORE_STORE__CLOSURE__1_CLOSURE
#ifndef X10_UTIL_RESILIENT_STORE_STORE__CLOSURE__2_CLOSURE
#define X10_UTIL_RESILIENT_STORE_STORE__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V)> class x10_util_resilient_store_Store__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_resilient_store_Store__closure__2<TPMGL(V) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        saved_this->set(key, value);
    }
    
    // captured environment
    ::x10::util::resilient::store::Store<TPMGL(V)>* saved_this;
    ::x10::lang::String* key;
    TPMGL(V) value;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->key);
        buf.write(this->value);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_resilient_store_Store__closure__2<TPMGL(V) >* storage = ::x10aux::alloc_z<x10_util_resilient_store_Store__closure__2<TPMGL(V) > >();
        buf.record_reference(storage);
        ::x10::util::resilient::store::Store<TPMGL(V)>* that_saved_this = buf.read< ::x10::util::resilient::store::Store<TPMGL(V)>*>();
        ::x10::lang::String* that_key = buf.read< ::x10::lang::String*>();
        TPMGL(V) that_value = buf.read<TPMGL(V)>();
        x10_util_resilient_store_Store__closure__2<TPMGL(V) >* this_ = new (storage) x10_util_resilient_store_Store__closure__2<TPMGL(V) >(that_saved_this, that_key, that_value);
        return this_;
    }
    
    x10_util_resilient_store_Store__closure__2(::x10::util::resilient::store::Store<TPMGL(V)>* saved_this, ::x10::lang::String* key, TPMGL(V) value) : saved_this(saved_this), key(key), value(value) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/resilient/store/Store.x10:34";
    }

};

template<class TPMGL(V)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_resilient_store_Store__closure__2<TPMGL(V) > >x10_util_resilient_store_Store__closure__2<TPMGL(V) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_resilient_store_Store__closure__2<TPMGL(V) >::__apply, &x10_util_resilient_store_Store__closure__2<TPMGL(V) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(V)> ::x10aux::itable_entry x10_util_resilient_store_Store__closure__2<TPMGL(V) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_resilient_store_Store__closure__2<TPMGL(V) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V)> const ::x10aux::serialization_id_t x10_util_resilient_store_Store__closure__2<TPMGL(V) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_resilient_store_Store__closure__2<TPMGL(V) >::_deserialize);

#endif // X10_UTIL_RESILIENT_STORE_STORE__CLOSURE__2_CLOSURE

//#line 22 "x10/util/resilient/store/Store.x10"

//#line 25 "x10/util/resilient/store/Store.x10"

//#line 28 "x10/util/resilient/store/Store.x10"

//#line 31 "x10/util/resilient/store/Store.x10"
template<class TPMGL(V)> TPMGL(V) x10::util::resilient::store::Store<TPMGL(V)>::getRemote(
  ::x10::lang::Place place, ::x10::lang::String* key) {
    return ::x10::xrx::Runtime::template evalAt< TPMGL(V) >(place,
                                                            reinterpret_cast< ::x10::lang::Fun_0_0<TPMGL(V)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<TPMGL(V)> >(sizeof(x10_util_resilient_store_Store__closure__1<TPMGL(V)>)))x10_util_resilient_store_Store__closure__1<TPMGL(V)>(this, key))),
                                                            ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 34 "x10/util/resilient/store/Store.x10"
template<class TPMGL(V)> void x10::util::resilient::store::Store<TPMGL(V)>::setRemote(
  ::x10::lang::Place place, ::x10::lang::String* key, TPMGL(V) value) {
    {
        ::x10::xrx::Runtime::runAt(place, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_resilient_store_Store__closure__2<TPMGL(V)>)))x10_util_resilient_store_Store__closure__2<TPMGL(V)>(this, key, value))),
                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
}

//#line 37 "x10/util/resilient/store/Store.x10"

//#line 40 "x10/util/resilient/store/Store.x10"

//#line 43 "x10/util/resilient/store/Store.x10"

//#line 46 "x10/util/resilient/store/Store.x10"

//#line 54 "x10/util/resilient/store/Store.x10"

//#line 20 "x10/util/resilient/store/Store.x10"
template<class TPMGL(V)> ::x10::util::resilient::store::Store<TPMGL(V)>*
  x10::util::resilient::store::Store<TPMGL(V)>::x10__util__resilient__store__Store____this__x10__util__resilient__store__Store(
  ) {
    return this;
    
}
template<class TPMGL(V)> void x10::util::resilient::store::Store<TPMGL(V)>::_constructor(
                           ) {
    
}

template<class TPMGL(V)> void x10::util::resilient::store::Store<TPMGL(V)>::__fieldInitializers_x10_util_resilient_store_Store(
  ) {
 
}
template<class TPMGL(V)> void x10::util::resilient::store::Store<TPMGL(V)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

template<class TPMGL(V)> void x10::util::resilient::store::Store<TPMGL(V)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

template<class TPMGL(V)> ::x10::util::resilient::store::Store<TPMGL(V)>*
  x10::util::resilient::store::Store<void>::make(::x10::lang::String* name,
                                                 ::x10::lang::PlaceGroup* activePlaces) {
    
    //#line 47 "x10/util/resilient/store/Store.x10"
    if (::x10aux::equals((&::x10::util::resilient::store::Store_Strings::sl__170616),(&::x10::util::resilient::store::Store_Strings::sl__170617)))
    {
        
        //#line 48 "x10/util/resilient/store/Store.x10"
        ::x10::util::resilient::store::HazelcastStore<TPMGL(V)>* alloc__150485 =
           (new (::x10aux::alloc_z< ::x10::util::resilient::store::HazelcastStore<TPMGL(V)> >()) ::x10::util::resilient::store::HazelcastStore<TPMGL(V)>());
        (alloc__150485)->::x10::util::resilient::store::HazelcastStore<TPMGL(V)>::_constructor(
          name, activePlaces);
        return alloc__150485;
        
    } else {
        
        //#line 50 "x10/util/resilient/store/Store.x10"
        ::x10::util::resilient::store::NativeStore<TPMGL(V)>* alloc__150486 =
           (new (::x10aux::alloc_z< ::x10::util::resilient::store::NativeStore<TPMGL(V)> >()) ::x10::util::resilient::store::NativeStore<TPMGL(V)>());
        (alloc__150486)->::x10::util::resilient::store::NativeStore<TPMGL(V)>::_constructor(
          name, activePlaces);
        return alloc__150486;
        
    }
    
}
#endif // X10_UTIL_RESILIENT_STORE_STORE_H_IMPLEMENTATION
#endif // __X10_UTIL_RESILIENT_STORE_STORE_H_NODEPS
