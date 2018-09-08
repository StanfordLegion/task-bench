#ifndef __X10_UTIL_HASHMAP__HASHENTRY_H
#define __X10_UTIL_HASHMAP__HASHENTRY_H

#include <x10rt.h>


#define X10_UTIL_MAP__ENTRY_H_NODEPS
#include <x10/util/Map__Entry.h>
#undef X10_UTIL_MAP__ENTRY_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

template<class TPMGL(Key), class TPMGL(Value)> class HashMap__HashEntry;
template <> class HashMap__HashEntry<void, void>;
template<class TPMGL(Key), class TPMGL(Value)> class HashMap__HashEntry : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Value)>::template itable< ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> > _itable_1;
    
    virtual TPMGL(Key) getKey();
    virtual TPMGL(Value) getValue();
    virtual void setValue(TPMGL(Value) v);
    TPMGL(Key) FMGL(key);
    
    TPMGL(Value) FMGL(value);
    
    x10_boolean FMGL(removed);
    
    x10_int FMGL(hash);
    
    void _constructor(TPMGL(Key) key, TPMGL(Value) value, x10_int h);
    
    static ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>* _make(
             TPMGL(Key) key, TPMGL(Value) value, x10_int h);
    
    virtual ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>*
      x10__util__HashMap__HashEntry____this__x10__util__HashMap__HashEntry(
      );
    virtual void __fieldInitializers_x10_util_HashMap_HashEntry();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(Key), class TPMGL(Value)> ::x10aux::RuntimeType x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::rtt;
template<class TPMGL(Key), class TPMGL(Value)> void x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::HashMap__HashEntry<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Value)> >()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(Key)>(), ::x10aux::getRTT<TPMGL(Value)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.HashMap.HashEntry";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 2, params, variances);
}

template <> class HashMap__HashEntry<void, void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_HASHMAP__HASHENTRY_H

namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Value)> class HashMap__HashEntry;
} } 

#ifndef X10_UTIL_HASHMAP__HASHENTRY_H_NODEPS
#define X10_UTIL_HASHMAP__HASHENTRY_H_NODEPS
#include <x10/util/Map__Entry.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <x10/lang/Zero.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_HASHMAP__HASHENTRY_H_GENERICS
#define X10_UTIL_HASHMAP__HASHENTRY_H_GENERICS
#endif // X10_UTIL_HASHMAP__HASHENTRY_H_GENERICS
#ifndef X10_UTIL_HASHMAP__HASHENTRY_H_IMPLEMENTATION
#define X10_UTIL_HASHMAP__HASHENTRY_H_IMPLEMENTATION
#include <x10/util/HashMap__HashEntry.h>

template<class TPMGL(Key), class TPMGL(Value)> typename ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Value)>::template itable< ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> >  x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_itable_0(&::x10::lang::X10Class::equals, &x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::getKey, &x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::getValue, &::x10::lang::X10Class::hashCode, &x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::setValue, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(Key), class TPMGL(Value)> ::x10::lang::Any::itable< ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> >  x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(Key), class TPMGL(Value)> ::x10aux::itable_entry x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Value)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>")};

//#line 21 "x10/util/HashMap.x10"
template<class TPMGL(Key), class TPMGL(Value)> TPMGL(Key) x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::getKey(
  ) {
    return this->FMGL(key);
    
}

//#line 22 "x10/util/HashMap.x10"
template<class TPMGL(Key), class TPMGL(Value)> TPMGL(Value) x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::getValue(
  ) {
    return this->FMGL(value);
    
}

//#line 23 "x10/util/HashMap.x10"
template<class TPMGL(Key), class TPMGL(Value)> void x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::setValue(
  TPMGL(Value) v) {
    this->FMGL(value) = v;
}

//#line 25 "x10/util/HashMap.x10"

//#line 26 "x10/util/HashMap.x10"

//#line 27 "x10/util/HashMap.x10"

//#line 28 "x10/util/HashMap.x10"

//#line 30 "x10/util/HashMap.x10"
template<class TPMGL(Key), class TPMGL(Value)> void x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_constructor(
                                                 TPMGL(Key) key,
                                                 TPMGL(Value) value,
                                                 x10_int h) {
    
    //#line 20 "x10/util/HashMap.x10"
    ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>* this__139989 =
      this;
    ::x10aux::nullCheck(this__139989)->FMGL(value) = ::x10aux::zeroValue< TPMGL(Value) >();
    ::x10aux::nullCheck(this__139989)->FMGL(removed) = false;
    
    //#line 31 "x10/util/HashMap.x10"
    this->FMGL(key) = key;
    
    //#line 32 "x10/util/HashMap.x10"
    this->FMGL(value) = value;
    
    //#line 33 "x10/util/HashMap.x10"
    this->FMGL(hash) = h;
    
    //#line 34 "x10/util/HashMap.x10"
    this->FMGL(removed) = false;
}
template<class TPMGL(Key), class TPMGL(Value)> ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>* x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_make(
                                                 TPMGL(Key) key,
                                                 TPMGL(Value) value,
                                                 x10_int h)
{
    ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>* this_ = new (::x10aux::alloc_z< ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> >()) ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>();
    this_->_constructor(key, value, h);
    return this_;
}



//#line 20 "x10/util/HashMap.x10"
template<class TPMGL(Key), class TPMGL(Value)> ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>*
  x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::x10__util__HashMap__HashEntry____this__x10__util__HashMap__HashEntry(
  ) {
    return this;
    
}
template<class TPMGL(Key), class TPMGL(Value)> void x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::__fieldInitializers_x10_util_HashMap_HashEntry(
  ) {
    this->FMGL(value) = ::x10aux::zeroValue< TPMGL(Value) >();
    this->FMGL(removed) = false;
}
template<class TPMGL(Key), class TPMGL(Value)> const ::x10aux::serialization_id_t x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_deserializer);

template<class TPMGL(Key), class TPMGL(Value)> void x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(key));
    buf.write(this->FMGL(value));
    buf.write(this->FMGL(removed));
    buf.write(this->FMGL(hash));
    
}

template<class TPMGL(Key), class TPMGL(Value)> ::x10::lang::Reference* ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>* this_ = new (::x10aux::alloc_z< ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> >()) ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(Key), class TPMGL(Value)> void x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(key) = buf.read<TPMGL(Key)>();
    FMGL(value) = buf.read<TPMGL(Value)>();
    FMGL(removed) = buf.read<x10_boolean>();
    FMGL(hash) = buf.read<x10_int>();
}

#endif // X10_UTIL_HASHMAP__HASHENTRY_H_IMPLEMENTATION
#endif // __X10_UTIL_HASHMAP__HASHENTRY_H_NODEPS
