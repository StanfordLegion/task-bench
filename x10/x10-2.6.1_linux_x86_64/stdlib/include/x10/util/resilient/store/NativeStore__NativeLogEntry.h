#ifndef __X10_UTIL_RESILIENT_STORE_NATIVESTORE__NATIVELOGENTRY_H
#define __X10_UTIL_RESILIENT_STORE_NATIVESTORE__NATIVELOGENTRY_H

#include <x10rt.h>


#define X10_UTIL_RESILIENT_LOCALSTORE_CLONEABLE_H_NODEPS
#include <x10/util/resilient/localstore/Cloneable.h>
#undef X10_UTIL_RESILIENT_LOCALSTORE_CLONEABLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace store { 

template<class TPMGL(V)> class NativeStore__NativeLogEntry;
template <> class NativeStore__NativeLogEntry<void>;
template<class TPMGL(V)> class NativeStore__NativeLogEntry : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::util::resilient::localstore::Cloneable::itable< ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)> > _itable_1;
    
    TPMGL(V) FMGL(value);
    
    x10_long FMGL(placeId);
    
    ::x10::lang::String* FMGL(key2);
    
    TPMGL(V) FMGL(value2);
    
    void _constructor(TPMGL(V) value, x10_long placeId, ::x10::lang::String* key2,
                      TPMGL(V) value2);
    
    static ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>* _make(
             TPMGL(V) value, x10_long placeId, ::x10::lang::String* key2,
             TPMGL(V) value2);
    
    virtual ::x10::util::resilient::localstore::Cloneable*
      clone();
    virtual ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>*
      x10__util__resilient__store__NativeStore__NativeLogEntry____this__x10__util__resilient__store__NativeStore__NativeLogEntry(
      );
    virtual void __fieldInitializers_x10_util_resilient_store_NativeStore_NativeLogEntry(
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

template<class TPMGL(V)> ::x10aux::RuntimeType x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::rtt;
template<class TPMGL(V)> void x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::resilient::store::NativeStore__NativeLogEntry<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::util::resilient::localstore::Cloneable>()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.resilient.store.NativeStore.NativeLogEntry";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class NativeStore__NativeLogEntry<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } } 
#endif // X10_UTIL_RESILIENT_STORE_NATIVESTORE__NATIVELOGENTRY_H

namespace x10 { namespace util { namespace resilient { namespace store { 
template<class TPMGL(V)> class NativeStore__NativeLogEntry;
} } } } 

#ifndef X10_UTIL_RESILIENT_STORE_NATIVESTORE__NATIVELOGENTRY_H_NODEPS
#define X10_UTIL_RESILIENT_STORE_NATIVESTORE__NATIVELOGENTRY_H_NODEPS
#include <x10/util/resilient/localstore/Cloneable.h>
#include <x10/lang/Long.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_RESILIENT_STORE_NATIVESTORE__NATIVELOGENTRY_H_GENERICS
#define X10_UTIL_RESILIENT_STORE_NATIVESTORE__NATIVELOGENTRY_H_GENERICS
#endif // X10_UTIL_RESILIENT_STORE_NATIVESTORE__NATIVELOGENTRY_H_GENERICS
#ifndef X10_UTIL_RESILIENT_STORE_NATIVESTORE__NATIVELOGENTRY_H_IMPLEMENTATION
#define X10_UTIL_RESILIENT_STORE_NATIVESTORE__NATIVELOGENTRY_H_IMPLEMENTATION
#include <x10/util/resilient/store/NativeStore__NativeLogEntry.h>

template<class TPMGL(V)> ::x10::util::resilient::localstore::Cloneable::itable< ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)> >  x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_itable_0(&x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::clone, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(V)> ::x10::lang::Any::itable< ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)> >  x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(V)> ::x10aux::itable_entry x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::resilient::localstore::Cloneable>, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>")};

//#line 22 "x10/util/resilient/store/NativeStore.x10"

//#line 23 "x10/util/resilient/store/NativeStore.x10"

//#line 24 "x10/util/resilient/store/NativeStore.x10"

//#line 25 "x10/util/resilient/store/NativeStore.x10"

//#line 27 "x10/util/resilient/store/NativeStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_constructor(
                           TPMGL(V) value, x10_long placeId, ::x10::lang::String* key2,
                           TPMGL(V) value2) {
    
    //#line 28 "x10/util/resilient/store/NativeStore.x10"
    this->FMGL(value) = value;
    
    //#line 29 "x10/util/resilient/store/NativeStore.x10"
    this->FMGL(placeId) = placeId;
    
    //#line 30 "x10/util/resilient/store/NativeStore.x10"
    this->FMGL(key2) = key2;
    
    //#line 31 "x10/util/resilient/store/NativeStore.x10"
    this->FMGL(value2) = value2;
}
template<class TPMGL(V)> ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>* x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_make(
                           TPMGL(V) value, x10_long placeId,
                           ::x10::lang::String* key2, TPMGL(V) value2)
{
    ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>* this_ = new (::x10aux::alloc_z< ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)> >()) ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>();
    this_->_constructor(value, placeId, key2, value2);
    return this_;
}



//#line 34 "x10/util/resilient/store/NativeStore.x10"
template<class TPMGL(V)> ::x10::util::resilient::localstore::Cloneable*
  x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::clone(
  ) {
    ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>* alloc__150465 =
       (new (::x10aux::alloc_z< ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)> >()) ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>());
    (alloc__150465)->::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_constructor(
      this->FMGL(value), this->FMGL(placeId), this->FMGL(key2),
      this->FMGL(value2));
    return reinterpret_cast< ::x10::util::resilient::localstore::Cloneable*>(alloc__150465);
    
}

//#line 21 "x10/util/resilient/store/NativeStore.x10"
template<class TPMGL(V)> ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>*
  x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::x10__util__resilient__store__NativeStore__NativeLogEntry____this__x10__util__resilient__store__NativeStore__NativeLogEntry(
  ) {
    return this;
    
}
template<class TPMGL(V)> void x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::__fieldInitializers_x10_util_resilient_store_NativeStore_NativeLogEntry(
  ) {
 
}
template<class TPMGL(V)> const ::x10aux::serialization_id_t x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_deserializer);

template<class TPMGL(V)> void x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(value));
    buf.write(this->FMGL(placeId));
    buf.write(this->FMGL(key2));
    buf.write(this->FMGL(value2));
    
}

template<class TPMGL(V)> ::x10::lang::Reference* ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>* this_ = new (::x10aux::alloc_z< ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)> >()) ::x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(V)> void x10::util::resilient::store::NativeStore__NativeLogEntry<TPMGL(V)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(value) = buf.read<TPMGL(V)>();
    FMGL(placeId) = buf.read<x10_long>();
    FMGL(key2) = buf.read< ::x10::lang::String*>();
    FMGL(value2) = buf.read<TPMGL(V)>();
}

#endif // X10_UTIL_RESILIENT_STORE_NATIVESTORE__NATIVELOGENTRY_H_IMPLEMENTATION
#endif // __X10_UTIL_RESILIENT_STORE_NATIVESTORE__NATIVELOGENTRY_H_NODEPS
