#ifndef __X10_UTIL_HASHMAP__ENTRIESITERATOR_H
#define __X10_UTIL_HASHMAP__ENTRIESITERATOR_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Value)> class HashMap__HashEntry;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class HashMap__EntriesIterator_Strings {
  public:
    static ::x10::lang::String sl__158519;
    static ::x10::lang::String sl__158520;
};

template<class TPMGL(Key), class TPMGL(Value)> class HashMap__EntriesIterator;
template <> class HashMap__EntriesIterator<void, void>;
template<class TPMGL(Key), class TPMGL(Value)> class HashMap__EntriesIterator : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Value)>*>::template itable< ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)> > _itable_1;
    
    ::x10::util::HashMap<TPMGL(Key), TPMGL(Value)>* FMGL(map);
    
    x10_long FMGL(i);
    
    x10_long FMGL(originalModCount);
    
    void _constructor(::x10::util::HashMap<TPMGL(Key), TPMGL(Value)>* map);
    
    static ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>* _make(
             ::x10::util::HashMap<TPMGL(Key), TPMGL(Value)>* map);
    
    virtual void advance();
    virtual x10_boolean hasNext();
    virtual ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Value)>*
      next();
    virtual ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>*
      x10__util__HashMap__EntriesIterator____this__x10__util__HashMap__EntriesIterator(
      );
    virtual void __fieldInitializers_x10_util_HashMap_EntriesIterator(
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

template<class TPMGL(Key), class TPMGL(Value)> ::x10aux::RuntimeType x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::rtt;
template<class TPMGL(Key), class TPMGL(Value)> void x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::HashMap__EntriesIterator<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Value)>*> >()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(Key)>(), ::x10aux::getRTT<TPMGL(Value)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.HashMap.EntriesIterator";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 2, params, variances);
}

template <> class HashMap__EntriesIterator<void, void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_HASHMAP__ENTRIESITERATOR_H

namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Value)> class HashMap__EntriesIterator;
} } 

#ifndef X10_UTIL_HASHMAP__ENTRIESITERATOR_H_NODEPS
#define X10_UTIL_HASHMAP__ENTRIESITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#include <x10/util/Map__Entry.h>
#include <x10/lang/Long.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Rail.h>
#include <x10/util/HashMap__HashEntry.h>
#include <x10/lang/Exception.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_HASHMAP__ENTRIESITERATOR_H_GENERICS
#define X10_UTIL_HASHMAP__ENTRIESITERATOR_H_GENERICS
#endif // X10_UTIL_HASHMAP__ENTRIESITERATOR_H_GENERICS
#ifndef X10_UTIL_HASHMAP__ENTRIESITERATOR_H_IMPLEMENTATION
#define X10_UTIL_HASHMAP__ENTRIESITERATOR_H_IMPLEMENTATION
#include <x10/util/HashMap__EntriesIterator.h>

template<class TPMGL(Key), class TPMGL(Value)> typename ::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Value)>*>::template itable< ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)> >  x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::_itable_0(&::x10::lang::X10Class::equals, &x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::hasNext, &::x10::lang::X10Class::hashCode, &x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::next, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(Key), class TPMGL(Value)> ::x10::lang::Any::itable< ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)> >  x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(Key), class TPMGL(Value)> ::x10aux::itable_entry x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Value)>*> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>")};

//#line 230 "x10/util/HashMap.x10"

//#line 231 "x10/util/HashMap.x10"

//#line 232 "x10/util/HashMap.x10"

//#line 234 "x10/util/HashMap.x10"
template<class TPMGL(Key), class TPMGL(Value)> void x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::_constructor(
                                                 ::x10::util::HashMap<TPMGL(Key), TPMGL(Value)>* map) {
    
    //#line 229 "x10/util/HashMap.x10"
    this->x10::util::template HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::__fieldInitializers_x10_util_HashMap_EntriesIterator();
    
    //#line 234 "x10/util/HashMap.x10"
    this->FMGL(map) = map;
    this->FMGL(i) = ((x10_long)0ll);
    this->FMGL(originalModCount) = ::x10aux::nullCheck(map)->FMGL(modCount);
}
template<class TPMGL(Key), class TPMGL(Value)> ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>* x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::_make(
                                                 ::x10::util::HashMap<TPMGL(Key), TPMGL(Value)>* map)
{
    ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>* this_ = new (::x10aux::alloc_z< ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)> >()) ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>();
    this_->_constructor(map);
    return this_;
}



//#line 236 "x10/util/HashMap.x10"
template<class TPMGL(Key), class TPMGL(Value)> void x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::advance(
  ) {
    
    //#line 237 "x10/util/HashMap.x10"
    while (((this->FMGL(i)) < ((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(map))->FMGL(table))->FMGL(size)))))
    {
        
        //#line 238 "x10/util/HashMap.x10"
        if (((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(map))->FMGL(table))->x10::lang::template Rail< ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>* >::__apply(
                                         this->FMGL(i)), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
            !(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(map))->FMGL(table))->x10::lang::template Rail< ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>* >::__apply(
                                    this->FMGL(i)))->FMGL(removed))))
        {
            
            //#line 239 "x10/util/HashMap.x10"
            return;
        }
        
        //#line 240 "x10/util/HashMap.x10"
        this->FMGL(i) = ((this->FMGL(i)) + (((x10_long)1ll)));
    }
    
}

//#line 244 "x10/util/HashMap.x10"
template<class TPMGL(Key), class TPMGL(Value)> x10_boolean
  x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::hasNext(
  ) {
    
    //#line 245 "x10/util/HashMap.x10"
    if (((this->FMGL(i)) < ((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(map))->FMGL(table))->FMGL(size)))))
    {
        
        //#line 247 "x10/util/HashMap.x10"
        return true;
        
    }
    
    //#line 249 "x10/util/HashMap.x10"
    return false;
    
}

//#line 252 "x10/util/HashMap.x10"
template<class TPMGL(Key), class TPMGL(Value)> ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Value)>*
  x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::next(
  ) {
    
    //#line 253 "x10/util/HashMap.x10"
    if ((!::x10aux::struct_equals(this->FMGL(originalModCount),
                                  ::x10aux::nullCheck(this->FMGL(map))->FMGL(modCount))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::HashMap__EntriesIterator_Strings::sl__158519), ((::x10aux::nullCheck(this->FMGL(map))->FMGL(modCount)) - (this->FMGL(originalModCount)))), (&::x10::util::HashMap__EntriesIterator_Strings::sl__158520)))));
    }
    
    //#line 254 "x10/util/HashMap.x10"
    x10_long j = this->FMGL(i);
    
    //#line 256 "x10/util/HashMap.x10"
    this->FMGL(i) = ((this->FMGL(i)) + (((x10_long)1ll)));
    
    //#line 257 "x10/util/HashMap.x10"
    this->advance();
    
    //#line 258 "x10/util/HashMap.x10"
    return reinterpret_cast< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Value)>*>(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(map))->FMGL(table))->x10::lang::template Rail< ::x10::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>* >::__apply(
                                                                                   j));
    
}

//#line 229 "x10/util/HashMap.x10"
template<class TPMGL(Key), class TPMGL(Value)> ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>*
  x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::x10__util__HashMap__EntriesIterator____this__x10__util__HashMap__EntriesIterator(
  ) {
    return this;
    
}
template<class TPMGL(Key), class TPMGL(Value)> void x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::__fieldInitializers_x10_util_HashMap_EntriesIterator(
  ) {
    this->FMGL(i) = ((x10_long)0ll);
    this->FMGL(originalModCount) = ((x10_long)0ll);
}
template<class TPMGL(Key), class TPMGL(Value)> const ::x10aux::serialization_id_t x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::_deserializer);

template<class TPMGL(Key), class TPMGL(Value)> void x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(map));
    buf.write(this->FMGL(i));
    buf.write(this->FMGL(originalModCount));
    
}

template<class TPMGL(Key), class TPMGL(Value)> ::x10::lang::Reference* ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>* this_ = new (::x10aux::alloc_z< ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)> >()) ::x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(Key), class TPMGL(Value)> void x10::util::HashMap__EntriesIterator<TPMGL(Key), TPMGL(Value)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(map) = buf.read< ::x10::util::HashMap<TPMGL(Key), TPMGL(Value)>*>();
    FMGL(i) = buf.read<x10_long>();
    FMGL(originalModCount) = buf.read<x10_long>();
}

#endif // X10_UTIL_HASHMAP__ENTRIESITERATOR_H_IMPLEMENTATION
#endif // __X10_UTIL_HASHMAP__ENTRIESITERATOR_H_NODEPS
