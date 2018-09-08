#ifndef __X10_UTIL_RESILIENT_STORE_NATIVESTORE_H
#define __X10_UTIL_RESILIENT_STORE_NATIVESTORE_H

#include <x10rt.h>


#define X10_UTIL_RESILIENT_STORE_STORE_H_NODEPS
#include <x10/util/resilient/store/Store.h>
#undef X10_UTIL_RESILIENT_STORE_STORE_H_NODEPS
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class ResilientStore;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class ResilientNativeMap;
} } } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
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
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace util { namespace resilient { namespace store { 
template<class TPMGL(V)> class NativeStore__NativeLogEntry;
} } } } 
namespace x10 { namespace xrx { 
class Runtime;
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
namespace x10 { namespace util { namespace resilient { 
class PlaceManager__ChangeDescription;
} } } 
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

class NativeStore_Strings {
  public:
    static ::x10::lang::String sl__170608;
    static ::x10::lang::String sl__170607;
    static ::x10::lang::String sl__170606;
};

template<class TPMGL(V)> class NativeStore;
template <> class NativeStore<void>;
template<class TPMGL(V)> class NativeStore : public ::x10::util::resilient::store::Store<TPMGL(V)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::resilient::localstore::ResilientStore* FMGL(store);
    
    ::x10::util::resilient::localstore::ResilientNativeMap* FMGL(map);
    
    ::x10::util::resilient::localstore::ResilientNativeMap* FMGL(log);
    
    void _constructor(::x10::lang::String* name, ::x10::lang::PlaceGroup* activePlaces);
    
    static ::x10::util::resilient::store::NativeStore<TPMGL(V)>* _make(
             ::x10::lang::String* name, ::x10::lang::PlaceGroup* activePlaces);
    
    virtual TPMGL(V) get(::x10::lang::String* key);
    virtual void set(::x10::lang::String* key, TPMGL(V) value);
    virtual void setAll(::x10::util::HashMap< ::x10::lang::String*, TPMGL(V)>* pairs);
    virtual void set2(::x10::lang::String* key, TPMGL(V) value, ::x10::lang::Place place,
                      ::x10::lang::String* key2, TPMGL(V) value2);
    virtual ::x10::lang::PlaceGroup* getActivePlaces();
    virtual void updateForChangedPlaces(::x10::util::resilient::PlaceManager__ChangeDescription changes);
    virtual ::x10::util::resilient::store::NativeStore<TPMGL(V)>*
      x10__util__resilient__store__NativeStore____this__x10__util__resilient__store__NativeStore(
      );
    virtual void __fieldInitializers_x10_util_resilient_store_NativeStore(
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

template<class TPMGL(V)> ::x10aux::RuntimeType x10::util::resilient::store::NativeStore<TPMGL(V)>::rtt;
template<class TPMGL(V)> void x10::util::resilient::store::NativeStore<TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::resilient::store::NativeStore<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::util::resilient::store::Store<TPMGL(V)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.resilient.store.NativeStore";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class NativeStore<void> : public ::x10::util::resilient::store::Store<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } } 
#endif // X10_UTIL_RESILIENT_STORE_NATIVESTORE_H

namespace x10 { namespace util { namespace resilient { namespace store { 
template<class TPMGL(V)> class NativeStore;
} } } } 

#ifndef X10_UTIL_RESILIENT_STORE_NATIVESTORE_H_NODEPS
#define X10_UTIL_RESILIENT_STORE_NATIVESTORE_H_NODEPS
#include <x10/util/resilient/store/Store.h>
#include <x10/util/resilient/localstore/Cloneable.h>
#include <x10/util/resilient/localstore/ResilientStore.h>
#include <x10/util/resilient/localstore/ResilientNativeMap.h>
#include <x10/lang/String.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/util/Set.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Place.h>
#include <x10/lang/Long.h>
#include <x10/util/resilient/store/NativeStore__NativeLogEntry.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/util/resilient/PlaceManager__ChangeDescription.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_RESILIENT_STORE_NATIVESTORE_H_GENERICS
#define X10_UTIL_RESILIENT_STORE_NATIVESTORE_H_GENERICS
#endif // X10_UTIL_RESILIENT_STORE_NATIVESTORE_H_GENERICS
#ifndef X10_UTIL_RESILIENT_STORE_NATIVESTORE_H_IMPLEMENTATION
#define X10_UTIL_RESILIENT_STORE_NATIVESTORE_H_IMPLEMENTATION
#include <x10/util/resilient/store/NativeStore.h>

#ifndef X10_UTIL_RESILIENT_STORE_NATIVESTORE__CLOSURE__1_CLOSURE
#define X10_UTIL_RESILIENT_STORE_NATIVESTORE__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V)> class x10_util_resilient_store_NativeStore__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(saved_this->FMGL(map))->set(key2, ::x10aux::class_cast_unchecked< ::x10::util::resilient::localstore::Cloneable*>(value2));
    }
    
    // captured environment
    ::x10::util::resilient::store::NativeStore<TPMGL(V)>* saved_this;
    ::x10::lang::String* key2;
    TPMGL(V) value2;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->key2);
        buf.write(this->value2);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) >* storage = ::x10aux::alloc_z<x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) > >();
        buf.record_reference(storage);
        ::x10::util::resilient::store::NativeStore<TPMGL(V)>* that_saved_this = buf.read< ::x10::util::resilient::store::NativeStore<TPMGL(V)>*>();
        ::x10::lang::String* that_key2 = buf.read< ::x10::lang::String*>();
        TPMGL(V) that_value2 = buf.read<TPMGL(V)>();
        x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) >* this_ = new (storage) x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) >(that_saved_this, that_key2, that_value2);
        return this_;
    }
    
    x10_util_resilient_store_NativeStore__closure__1(::x10::util::resilient::store::NativeStore<TPMGL(V)>* saved_this, ::x10::lang::String* key2, TPMGL(V) value2) : saved_this(saved_this), key2(key2), value2(value2) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/resilient/store/NativeStore.x10:69";
    }

};

template<class TPMGL(V)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) > >x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) >::__apply, &x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(V)> ::x10aux::itable_entry x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V)> const ::x10aux::serialization_id_t x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) >::_deserialize);
template<class TPMGL(V)> const ::x10aux::serialization_id_t x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_resilient_store_NativeStore__closure__1<TPMGL(V) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_RESILIENT_STORE_NATIVESTORE__CLOSURE__1_CLOSURE
#ifndef X10_UTIL_RESILIENT_STORE_NATIVESTORE__CLOSURE__3_CLOSURE
#define X10_UTIL_RESILIENT_STORE_NATIVESTORE__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V)> class x10_util_resilient_store_NativeStore__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(saved_this->FMGL(map))->set(::x10aux::nullCheck(entry)->FMGL(key2),
                                                        ::x10aux::class_cast_unchecked< ::x10::util::resilient::localstore::Cloneable*>(::x10aux::nullCheck(entry)->FMGL(value2)));
    }
    
    // captured environment
    ::x10::util::resilient::store::NativeStore<TPMGL(V)>* saved_this;
    ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>* entry;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->entry);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) >* storage = ::x10aux::alloc_z<x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) > >();
        buf.record_reference(storage);
        ::x10::util::resilient::store::NativeStore<TPMGL(V)>* that_saved_this = buf.read< ::x10::util::resilient::store::NativeStore<TPMGL(V)>*>();
        ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>* that_entry = buf.read< ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>*>();
        x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) >* this_ = new (storage) x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) >(that_saved_this, that_entry);
        return this_;
    }
    
    x10_util_resilient_store_NativeStore__closure__3(::x10::util::resilient::store::NativeStore<TPMGL(V)>* saved_this, ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>* entry) : saved_this(saved_this), entry(entry) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/resilient/store/NativeStore.x10:86";
    }

};

template<class TPMGL(V)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) > >x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) >::__apply, &x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(V)> ::x10aux::itable_entry x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V)> const ::x10aux::serialization_id_t x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) >::_deserialize);
template<class TPMGL(V)> const ::x10aux::serialization_id_t x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_resilient_store_NativeStore__closure__3<TPMGL(V) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_RESILIENT_STORE_NATIVESTORE__CLOSURE__3_CLOSURE
#ifndef X10_UTIL_RESILIENT_STORE_NATIVESTORE__CLOSURE__2_CLOSURE
#define X10_UTIL_RESILIENT_STORE_NATIVESTORE__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V)> class x10_util_resilient_store_NativeStore__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 82 "x10/util/resilient/store/NativeStore.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* key__150456;
            for (key__150456 = ::x10::util::Set< ::x10::lang::String*>::iterator(::x10aux::nullCheck(::x10aux::nullCheck(saved_this->FMGL(log))->keySet()));
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(key__150456));
                 ) {
                ::x10::lang::String* key = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(key__150456));
                
                //#line 83 "x10/util/resilient/store/NativeStore.x10"
                ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::x10::util::resilient::store::NativeStore_Strings::sl__170608), key)));
                
                //#line 84 "x10/util/resilient/store/NativeStore.x10"
                ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>* entry =
                  ::x10aux::class_cast< ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>*>(::x10aux::nullCheck(saved_this->FMGL(log))->get(
                                                                                                                 key));
                {
                    
                    //#line 85 "x10/util/resilient/store/NativeStore.x10"
                    ::x10::xrx::Runtime::ensureNotInAtomic();
                    ::x10::xrx::FinishState* fs__150480 =
                      ::x10::xrx::Runtime::startFinish();
                    try {
                        {
                            
                            //#line 86 "x10/util/resilient/store/NativeStore.x10"
                            ::x10::xrx::Runtime::runAsync(
                              ::x10aux::nullCheck(group)->__apply(
                                ::x10aux::nullCheck(entry)->FMGL(placeId)),
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_resilient_store_NativeStore__closure__3<TPMGL(V)>)))x10_util_resilient_store_NativeStore__closure__3<TPMGL(V)>(saved_this, entry))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            
                            //#line 87 "x10/util/resilient/store/NativeStore.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(map))->set(
                              key, ::x10aux::class_cast_unchecked< ::x10::util::resilient::localstore::Cloneable*>(::x10aux::nullCheck(entry)->FMGL(value)));
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc2810) {
                        {
                            ::x10::lang::CheckedThrowable* ct__150478 =
                              __exc2810;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__150478);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__150480);
                }
                
                //#line 89 "x10/util/resilient/store/NativeStore.x10"
                ::x10aux::nullCheck(saved_this->FMGL(log))->_kwd__delete(
                  key);
            }
        }
        
    }
    
    // captured environment
    ::x10::util::resilient::store::NativeStore<TPMGL(V)>* saved_this;
    ::x10::lang::PlaceGroup* group;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->group);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) >* storage = ::x10aux::alloc_z<x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) > >();
        buf.record_reference(storage);
        ::x10::util::resilient::store::NativeStore<TPMGL(V)>* that_saved_this = buf.read< ::x10::util::resilient::store::NativeStore<TPMGL(V)>*>();
        ::x10::lang::PlaceGroup* that_group = buf.read< ::x10::lang::PlaceGroup*>();
        x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) >* this_ = new (storage) x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) >(that_saved_this, that_group);
        return this_;
    }
    
    x10_util_resilient_store_NativeStore__closure__2(::x10::util::resilient::store::NativeStore<TPMGL(V)>* saved_this, ::x10::lang::PlaceGroup* group) : saved_this(saved_this), group(group) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/resilient/store/NativeStore.x10:81-91";
    }

};

template<class TPMGL(V)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) > >x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) >::__apply, &x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(V)> ::x10aux::itable_entry x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V)> const ::x10aux::serialization_id_t x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_resilient_store_NativeStore__closure__2<TPMGL(V) >::_deserialize);

#endif // X10_UTIL_RESILIENT_STORE_NATIVESTORE__CLOSURE__2_CLOSURE

//#line 37 "x10/util/resilient/store/NativeStore.x10"

//#line 39 "x10/util/resilient/store/NativeStore.x10"

//#line 40 "x10/util/resilient/store/NativeStore.x10"

//#line 42 "x10/util/resilient/store/NativeStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::NativeStore<TPMGL(V)>::_constructor(
                           ::x10::lang::String* name, ::x10::lang::PlaceGroup* activePlaces) {
    
    //#line 43 "x10/util/resilient/store/NativeStore.x10"
    this->FMGL(store) = ::x10::util::resilient::localstore::ResilientStore::make(
                          activePlaces);
    
    //#line 44 "x10/util/resilient/store/NativeStore.x10"
    this->FMGL(map) = ::x10aux::nullCheck(this->FMGL(store))->makeMap(
                        ::x10::lang::String::__plus((&::x10::util::resilient::store::NativeStore_Strings::sl__170606), name));
    
    //#line 45 "x10/util/resilient/store/NativeStore.x10"
    this->FMGL(log) = ::x10aux::nullCheck(this->FMGL(store))->makeMap(
                        ::x10::lang::String::__plus((&::x10::util::resilient::store::NativeStore_Strings::sl__170607), name));
}
template<class TPMGL(V)> ::x10::util::resilient::store::NativeStore<TPMGL(V)>* x10::util::resilient::store::NativeStore<TPMGL(V)>::_make(
                           ::x10::lang::String* name, ::x10::lang::PlaceGroup* activePlaces)
{
    ::x10::util::resilient::store::NativeStore<TPMGL(V)>* this_ = new (::x10aux::alloc_z< ::x10::util::resilient::store::NativeStore<TPMGL(V)> >()) ::x10::util::resilient::store::NativeStore<TPMGL(V)>();
    this_->_constructor(name, activePlaces);
    return this_;
}



//#line 48 "x10/util/resilient/store/NativeStore.x10"
template<class TPMGL(V)> TPMGL(V) x10::util::resilient::store::NativeStore<TPMGL(V)>::get(
  ::x10::lang::String* key) {
    return ::x10aux::class_cast<TPMGL(V)>(::x10aux::nullCheck(this->FMGL(map))->get(
                                            key));
    
}

//#line 50 "x10/util/resilient/store/NativeStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::NativeStore<TPMGL(V)>::set(
  ::x10::lang::String* key, TPMGL(V) value) {
    
    //#line 51 "x10/util/resilient/store/NativeStore.x10"
    ::x10aux::nullCheck(this->FMGL(map))->set(key, ::x10aux::class_cast_unchecked< ::x10::util::resilient::localstore::Cloneable*>(value));
}

//#line 54 "x10/util/resilient/store/NativeStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::NativeStore<TPMGL(V)>::setAll(
  ::x10::util::HashMap< ::x10::lang::String*, TPMGL(V)>* pairs) {
    
    //#line 55 "x10/util/resilient/store/NativeStore.x10"
    ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>* tmp =
       (new (::x10aux::alloc_z< ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*> >()) ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>());
    (tmp)->::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>::_constructor();
    
    //#line 56 "x10/util/resilient/store/NativeStore.x10"
    ::x10::lang::Iterator< ::x10::lang::String*>* iter = ::x10::util::Set< ::x10::lang::String*>::iterator(::x10aux::nullCheck(::x10aux::nullCheck(pairs)->keySet()));
    
    //#line 57 "x10/util/resilient/store/NativeStore.x10"
    while (::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(iter)))
    {
        
        //#line 58 "x10/util/resilient/store/NativeStore.x10"
        ::x10::lang::String* k = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(iter));
        
        //#line 59 "x10/util/resilient/store/NativeStore.x10"
        ::x10::util::resilient::localstore::Cloneable* v =
          ::x10aux::class_cast_unchecked< ::x10::util::resilient::localstore::Cloneable*>(::x10aux::nullCheck(pairs)->getOrThrow(
                                                                                            k));
        
        //#line 60 "x10/util/resilient/store/NativeStore.x10"
        tmp->put(k, v);
    }
    
    //#line 62 "x10/util/resilient/store/NativeStore.x10"
    ::x10aux::nullCheck(this->FMGL(map))->setAll(tmp);
}

//#line 65 "x10/util/resilient/store/NativeStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::NativeStore<TPMGL(V)>::set2(
  ::x10::lang::String* key, TPMGL(V) value, ::x10::lang::Place place,
  ::x10::lang::String* key2, TPMGL(V) value2) {
    
    //#line 66 "x10/util/resilient/store/NativeStore.x10"
    x10_long placeId = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(store))->getActivePlaces())->indexOf(
                         place);
    
    //#line 67 "x10/util/resilient/store/NativeStore.x10"
    ::x10aux::nullCheck(this->FMGL(log))->set(key, reinterpret_cast< ::x10::util::resilient::localstore::Cloneable*>((__extension__ ({
                                                  ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>* alloc__150454 =
                                                     (new (::x10aux::alloc_z< ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)> >()) ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>());
                                                  (alloc__150454)->::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_constructor(
                                                    value,
                                                    placeId,
                                                    key2,
                                                    value2);
                                                  alloc__150454;
                                              }))
                                              ));
    {
        
        //#line 68 "x10/util/resilient/store/NativeStore.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__150473 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 69 "x10/util/resilient/store/NativeStore.x10"
                ::x10::xrx::Runtime::runAsync(place, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_resilient_store_NativeStore__closure__1<TPMGL(V)>)))x10_util_resilient_store_NativeStore__closure__1<TPMGL(V)>(this, key2, value2))),
                                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                
                //#line 70 "x10/util/resilient/store/NativeStore.x10"
                ::x10aux::nullCheck(this->FMGL(map))->set(
                  key, ::x10aux::class_cast_unchecked< ::x10::util::resilient::localstore::Cloneable*>(value));
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc2807) {
            {
                ::x10::lang::CheckedThrowable* ct__150471 =
                  __exc2807;
                {
                    ::x10::xrx::Runtime::pushException(ct__150471);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__150473);
    }
    
    //#line 72 "x10/util/resilient/store/NativeStore.x10"
    ::x10aux::nullCheck(this->FMGL(log))->_kwd__delete(key);
}

//#line 75 "x10/util/resilient/store/NativeStore.x10"
template<class TPMGL(V)> ::x10::lang::PlaceGroup* x10::util::resilient::store::NativeStore<TPMGL(V)>::getActivePlaces(
  ) {
    return ::x10aux::nullCheck(this->FMGL(store))->getActivePlaces();
    
}

//#line 78 "x10/util/resilient/store/NativeStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::NativeStore<TPMGL(V)>::updateForChangedPlaces(
  ::x10::util::resilient::PlaceManager__ChangeDescription changes) {
    
    //#line 79 "x10/util/resilient/store/NativeStore.x10"
    ::x10aux::nullCheck(this->FMGL(store))->updateForChangedPlaces(
      changes);
    
    //#line 80 "x10/util/resilient/store/NativeStore.x10"
    ::x10::lang::PlaceGroup* group = ::x10aux::nullCheck(this->FMGL(store))->getActivePlaces();
    
    //#line 81 "x10/util/resilient/store/NativeStore.x10"
    ::x10aux::nullCheck(group)->broadcastFlat(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_resilient_store_NativeStore__closure__2<TPMGL(V)>)))x10_util_resilient_store_NativeStore__closure__2<TPMGL(V)>(this, group))));
}

//#line 20 "x10/util/resilient/store/NativeStore.x10"
template<class TPMGL(V)> ::x10::util::resilient::store::NativeStore<TPMGL(V)>*
  x10::util::resilient::store::NativeStore<TPMGL(V)>::x10__util__resilient__store__NativeStore____this__x10__util__resilient__store__NativeStore(
  ) {
    return this;
    
}
template<class TPMGL(V)> void x10::util::resilient::store::NativeStore<TPMGL(V)>::__fieldInitializers_x10_util_resilient_store_NativeStore(
  ) {
 
}
template<class TPMGL(V)> const ::x10aux::serialization_id_t x10::util::resilient::store::NativeStore<TPMGL(V)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::resilient::store::NativeStore<TPMGL(V)>::_deserializer);

template<class TPMGL(V)> void x10::util::resilient::store::NativeStore<TPMGL(V)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::util::resilient::store::Store<TPMGL(V)>::_serialize_body(buf);
    buf.write(this->FMGL(store));
    buf.write(this->FMGL(map));
    buf.write(this->FMGL(log));
    
}

template<class TPMGL(V)> ::x10::lang::Reference* ::x10::util::resilient::store::NativeStore<TPMGL(V)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::resilient::store::NativeStore<TPMGL(V)>* this_ = new (::x10aux::alloc_z< ::x10::util::resilient::store::NativeStore<TPMGL(V)> >()) ::x10::util::resilient::store::NativeStore<TPMGL(V)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(V)> void x10::util::resilient::store::NativeStore<TPMGL(V)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::util::resilient::store::Store<TPMGL(V)>::_deserialize_body(buf);
    FMGL(store) = buf.read< ::x10::util::resilient::localstore::ResilientStore*>();
    FMGL(map) = buf.read< ::x10::util::resilient::localstore::ResilientNativeMap*>();
    FMGL(log) = buf.read< ::x10::util::resilient::localstore::ResilientNativeMap*>();
}

#endif // X10_UTIL_RESILIENT_STORE_NATIVESTORE_H_IMPLEMENTATION
#endif // __X10_UTIL_RESILIENT_STORE_NATIVESTORE_H_NODEPS
