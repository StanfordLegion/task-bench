#ifndef __X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE__LOGENTRY_H
#define __X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE__LOGENTRY_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace store { 

template<class TPMGL(V)> class HazelcastStore__LogEntry;
template <> class HazelcastStore__LogEntry<void>;
template<class TPMGL(V)> class HazelcastStore__LogEntry : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::String* FMGL(key);
    
    TPMGL(V) FMGL(value);
    
    ::x10::lang::String* FMGL(key2);
    
    TPMGL(V) FMGL(value2);
    
    void _constructor(::x10::lang::String* key, TPMGL(V) value, ::x10::lang::String* key2,
                      TPMGL(V) value2);
    
    static ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>* _make(
             ::x10::lang::String* key, TPMGL(V) value, ::x10::lang::String* key2,
             TPMGL(V) value2);
    
    virtual ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>*
      x10__util__resilient__store__HazelcastStore__LogEntry____this__x10__util__resilient__store__HazelcastStore__LogEntry(
      );
    virtual void __fieldInitializers_x10_util_resilient_store_HazelcastStore_LogEntry(
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

template<class TPMGL(V)> ::x10aux::RuntimeType x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>::rtt;
template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::resilient::store::HazelcastStore__LogEntry<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.resilient.store.HazelcastStore.LogEntry";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class HazelcastStore__LogEntry<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } } 
#endif // X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE__LOGENTRY_H

namespace x10 { namespace util { namespace resilient { namespace store { 
template<class TPMGL(V)> class HazelcastStore__LogEntry;
} } } } 

#ifndef X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE__LOGENTRY_H_NODEPS
#define X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE__LOGENTRY_H_NODEPS
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE__LOGENTRY_H_GENERICS
#define X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE__LOGENTRY_H_GENERICS
#endif // X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE__LOGENTRY_H_GENERICS
#ifndef X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE__LOGENTRY_H_IMPLEMENTATION
#define X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE__LOGENTRY_H_IMPLEMENTATION
#include <x10/util/resilient/store/HazelcastStore__LogEntry.h>


//#line 21 "x10/util/resilient/store/HazelcastStore.x10"

//#line 22 "x10/util/resilient/store/HazelcastStore.x10"

//#line 23 "x10/util/resilient/store/HazelcastStore.x10"

//#line 24 "x10/util/resilient/store/HazelcastStore.x10"

//#line 26 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>::_constructor(
                           ::x10::lang::String* key, TPMGL(V) value,
                           ::x10::lang::String* key2, TPMGL(V) value2) {
    
    //#line 27 "x10/util/resilient/store/HazelcastStore.x10"
    this->FMGL(key) = key;
    
    //#line 28 "x10/util/resilient/store/HazelcastStore.x10"
    this->FMGL(value) = value;
    
    //#line 29 "x10/util/resilient/store/HazelcastStore.x10"
    this->FMGL(key2) = key2;
    
    //#line 30 "x10/util/resilient/store/HazelcastStore.x10"
    this->FMGL(value2) = value2;
}
template<class TPMGL(V)> ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>* x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>::_make(
                           ::x10::lang::String* key, TPMGL(V) value,
                           ::x10::lang::String* key2, TPMGL(V) value2)
{
    ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>* this_ = new (::x10aux::alloc_z< ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)> >()) ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>();
    this_->_constructor(key, value, key2, value2);
    return this_;
}



//#line 20 "x10/util/resilient/store/HazelcastStore.x10"
template<class TPMGL(V)> ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>*
  x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>::x10__util__resilient__store__HazelcastStore__LogEntry____this__x10__util__resilient__store__HazelcastStore__LogEntry(
  ) {
    return this;
    
}
template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>::__fieldInitializers_x10_util_resilient_store_HazelcastStore_LogEntry(
  ) {
 
}
template<class TPMGL(V)> const ::x10aux::serialization_id_t x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>::_deserializer);

template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(key));
    buf.write(this->FMGL(value));
    buf.write(this->FMGL(key2));
    buf.write(this->FMGL(value2));
    
}

template<class TPMGL(V)> ::x10::lang::Reference* ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>* this_ = new (::x10aux::alloc_z< ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)> >()) ::x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(V)> void x10::util::resilient::store::HazelcastStore__LogEntry<TPMGL(V)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(key) = buf.read< ::x10::lang::String*>();
    FMGL(value) = buf.read<TPMGL(V)>();
    FMGL(key2) = buf.read< ::x10::lang::String*>();
    FMGL(value2) = buf.read<TPMGL(V)>();
}

#endif // X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE__LOGENTRY_H_IMPLEMENTATION
#endif // __X10_UTIL_RESILIENT_STORE_HAZELCASTSTORE__LOGENTRY_H_NODEPS
