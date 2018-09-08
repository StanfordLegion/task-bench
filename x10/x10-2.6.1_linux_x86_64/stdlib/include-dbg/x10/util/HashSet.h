#ifndef __X10_UTIL_HASHSET_H
#define __X10_UTIL_HASHSET_H

#include <x10rt.h>


#define X10_UTIL_MAPSET_H_NODEPS
#include <x10/util/MapSet.h>
#undef X10_UTIL_MAPSET_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class Map;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

template<class TPMGL(T)> class HashSet;
template <> class HashSet<void>;
template<class TPMGL(T)> class HashSet : public ::x10::util::MapSet<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[6];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::util::Container<TPMGL(T)>::template itable< ::x10::util::HashSet<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::HashSet<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::util::HashSet<TPMGL(T)> > _itable_2;
    
    static typename ::x10::util::Collection<TPMGL(T)>::template itable< ::x10::util::HashSet<TPMGL(T)> > _itable_3;
    
    static typename ::x10::util::Set<TPMGL(T)>::template itable< ::x10::util::HashSet<TPMGL(T)> > _itable_4;
    
    void _constructor();
    
    static ::x10::util::HashSet<TPMGL(T)>* _make();
    
    void _constructor(x10_int sz);
    
    static ::x10::util::HashSet<TPMGL(T)>* _make(x10_int sz);
    
    void _constructor(::x10::util::HashMap<TPMGL(T), x10_boolean>* map);
    
    static ::x10::util::HashSet<TPMGL(T)>* _make(::x10::util::HashMap<TPMGL(T), x10_boolean>* map);
    
    virtual ::x10::util::Container<TPMGL(T)>* clone();
    virtual ::x10::util::HashSet<TPMGL(T)>* x10__util__HashSet____this__x10__util__HashSet(
      );
    virtual void __fieldInitializers_x10_util_HashSet();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::HashSet<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::HashSet<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::HashSet<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::util::MapSet<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.HashSet";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class HashSet<void> : public ::x10::util::MapSet<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_HASHSET_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class HashSet;
} } 

#ifndef X10_UTIL_HASHSET_H_NODEPS
#define X10_UTIL_HASHSET_H_NODEPS
#include <x10/util/MapSet.h>
#include <x10/util/Map.h>
#include <x10/lang/Boolean.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Iterator.h>
#include <x10/util/Map__Entry.h>
#include <x10/lang/Iterable.h>
#include <x10/util/Set.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_HASHSET_H_GENERICS
#define X10_UTIL_HASHSET_H_GENERICS
#endif // X10_UTIL_HASHSET_H_GENERICS
#ifndef X10_UTIL_HASHSET_H_IMPLEMENTATION
#define X10_UTIL_HASHSET_H_IMPLEMENTATION
#include <x10/util/HashSet.h>

template<class TPMGL(T)> typename ::x10::util::Container<TPMGL(T)>::template itable< ::x10::util::HashSet<TPMGL(T)> >  x10::util::HashSet<TPMGL(T)>::_itable_0(&x10::util::HashSet<TPMGL(T)>::clone, &::x10::util::MapSet<TPMGL(T)>::contains, &::x10::util::AbstractContainer<TPMGL(T)>::containsAll, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::util::AbstractContainer<TPMGL(T)>::isEmpty, &::x10::util::MapSet<TPMGL(T)>::iterator, &::x10::util::MapSet<TPMGL(T)>::size, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::util::HashSet<TPMGL(T)> >  x10::util::HashSet<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::util::HashSet<TPMGL(T)> >  x10::util::HashSet<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::util::MapSet<TPMGL(T)>::iterator, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::util::Collection<TPMGL(T)>::template itable< ::x10::util::HashSet<TPMGL(T)> >  x10::util::HashSet<TPMGL(T)>::_itable_3(&::x10::util::MapSet<TPMGL(T)>::add, &::x10::util::AbstractCollection<TPMGL(T)>::addAll, &::x10::util::AbstractCollection<TPMGL(T)>::addAllWhere, &::x10::util::MapSet<TPMGL(T)>::clear, &x10::util::HashSet<TPMGL(T)>::clone, &::x10::util::MapSet<TPMGL(T)>::contains, &::x10::util::AbstractContainer<TPMGL(T)>::containsAll, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::util::AbstractContainer<TPMGL(T)>::isEmpty, &::x10::util::MapSet<TPMGL(T)>::iterator, &::x10::util::MapSet<TPMGL(T)>::remove, &::x10::util::AbstractCollection<TPMGL(T)>::removeAll, &::x10::util::AbstractCollection<TPMGL(T)>::removeAllWhere, &::x10::util::AbstractCollection<TPMGL(T)>::retainAll, &::x10::util::MapSet<TPMGL(T)>::size, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::util::Set<TPMGL(T)>::template itable< ::x10::util::HashSet<TPMGL(T)> >  x10::util::HashSet<TPMGL(T)>::_itable_4(&::x10::util::MapSet<TPMGL(T)>::add, &::x10::util::AbstractCollection<TPMGL(T)>::addAll, &::x10::util::AbstractCollection<TPMGL(T)>::addAllWhere, &::x10::util::MapSet<TPMGL(T)>::clear, &x10::util::HashSet<TPMGL(T)>::clone, &::x10::util::MapSet<TPMGL(T)>::contains, &::x10::util::AbstractContainer<TPMGL(T)>::containsAll, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::util::AbstractContainer<TPMGL(T)>::isEmpty, &::x10::util::MapSet<TPMGL(T)>::iterator, &::x10::util::MapSet<TPMGL(T)>::remove, &::x10::util::AbstractCollection<TPMGL(T)>::removeAll, &::x10::util::AbstractCollection<TPMGL(T)>::removeAllWhere, &::x10::util::AbstractCollection<TPMGL(T)>::retainAll, &::x10::util::MapSet<TPMGL(T)>::size, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::util::HashSet<TPMGL(T)>::_itables[6] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::Container<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable<TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::Collection<TPMGL(T)> >, &_itable_3), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::Set<TPMGL(T)> >, &_itable_4), ::x10aux::itable_entry(NULL, (void*)"::x10::util::HashSet<TPMGL(T)>")};

//#line 15 "x10/util/HashSet.x10"
template<class TPMGL(T)> void x10::util::HashSet<TPMGL(T)>::_constructor(
                           ) {
    (this)->::x10::util::MapSet<TPMGL(T)>::_constructor(reinterpret_cast< ::x10::util::Map<TPMGL(T), x10_boolean>*>(::x10::util::HashMap<TPMGL(T), x10_boolean>::_make()));
    
    //#line 14 "x10/util/HashSet.x10"
    this->x10::util::template HashSet<TPMGL(T)>::__fieldInitializers_x10_util_HashSet();
}
template<class TPMGL(T)> ::x10::util::HashSet<TPMGL(T)>* x10::util::HashSet<TPMGL(T)>::_make(
                           ) {
    ::x10::util::HashSet<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::HashSet<TPMGL(T)> >()) ::x10::util::HashSet<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 16 "x10/util/HashSet.x10"
template<class TPMGL(T)> void x10::util::HashSet<TPMGL(T)>::_constructor(
                           x10_int sz) {
    (this)->::x10::util::MapSet<TPMGL(T)>::_constructor(reinterpret_cast< ::x10::util::Map<TPMGL(T), x10_boolean>*>(::x10::util::HashMap<TPMGL(T), x10_boolean>::_make(((x10_long)(sz)))));
    
    //#line 14 "x10/util/HashSet.x10"
    this->x10::util::template HashSet<TPMGL(T)>::__fieldInitializers_x10_util_HashSet();
}
template<class TPMGL(T)> ::x10::util::HashSet<TPMGL(T)>* x10::util::HashSet<TPMGL(T)>::_make(
                           x10_int sz) {
    ::x10::util::HashSet<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::HashSet<TPMGL(T)> >()) ::x10::util::HashSet<TPMGL(T)>();
    this_->_constructor(sz);
    return this_;
}



//#line 17 "x10/util/HashSet.x10"
template<class TPMGL(T)> void x10::util::HashSet<TPMGL(T)>::_constructor(
                           ::x10::util::HashMap<TPMGL(T), x10_boolean>* map) {
    (this)->::x10::util::MapSet<TPMGL(T)>::_constructor(reinterpret_cast< ::x10::util::Map<TPMGL(T), x10_boolean>*>(map));
    
    //#line 14 "x10/util/HashSet.x10"
    this->x10::util::template HashSet<TPMGL(T)>::__fieldInitializers_x10_util_HashSet();
}
template<class TPMGL(T)> ::x10::util::HashSet<TPMGL(T)>* x10::util::HashSet<TPMGL(T)>::_make(
                           ::x10::util::HashMap<TPMGL(T), x10_boolean>* map)
{
    ::x10::util::HashSet<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::HashSet<TPMGL(T)> >()) ::x10::util::HashSet<TPMGL(T)>();
    this_->_constructor(map);
    return this_;
}



//#line 18 "x10/util/HashSet.x10"
template<class TPMGL(T)> ::x10::util::Container<TPMGL(T)>*
  x10::util::HashSet<TPMGL(T)>::clone() {
    
    //#line 19 "x10/util/HashSet.x10"
    ::x10::util::HashMap<TPMGL(T), x10_boolean>* tmp = ::x10::util::HashMap<TPMGL(T), x10_boolean>::_make(::x10::util::Map<TPMGL(T), x10_boolean>::size(::x10aux::nullCheck(this->FMGL(map))));
    
    //#line 20 "x10/util/HashSet.x10"
    {
        ::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(T), x10_boolean>*>* e__123401;
        for (e__123401 = ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(T), x10_boolean>*>::iterator(::x10aux::nullCheck(::x10::util::Map<TPMGL(T), x10_boolean>::entries(::x10aux::nullCheck(this->FMGL(map)))));
             ::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(T), x10_boolean>*>::hasNext(::x10aux::nullCheck(e__123401));
             ) {
            ::x10::util::Map__Entry<TPMGL(T), x10_boolean>* e =
              ::x10::lang::Iterator< ::x10::util::Map__Entry<TPMGL(T), x10_boolean>*>::next(::x10aux::nullCheck(e__123401));
            
            //#line 21 "x10/util/HashSet.x10"
            tmp->put(::x10::util::Map__Entry<TPMGL(T), x10_boolean>::getKey(::x10aux::nullCheck(e)),
                     ::x10::util::Map__Entry<TPMGL(T), x10_boolean>::getValue(::x10aux::nullCheck(e)));
        }
    }
    
    //#line 23 "x10/util/HashSet.x10"
    return reinterpret_cast< ::x10::util::Container<TPMGL(T)>*>(::x10::util::HashSet<TPMGL(T)>::_make(tmp));
    
}

//#line 14 "x10/util/HashSet.x10"
template<class TPMGL(T)> ::x10::util::HashSet<TPMGL(T)>* x10::util::HashSet<TPMGL(T)>::x10__util__HashSet____this__x10__util__HashSet(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::HashSet<TPMGL(T)>::__fieldInitializers_x10_util_HashSet(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::HashSet<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::HashSet<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::util::HashSet<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::util::MapSet<TPMGL(T)>::_serialize_body(buf);
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::util::HashSet<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::HashSet<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::HashSet<TPMGL(T)> >()) ::x10::util::HashSet<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::util::HashSet<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::util::MapSet<TPMGL(T)>::_deserialize_body(buf);
    
}

#endif // X10_UTIL_HASHSET_H_IMPLEMENTATION
#endif // __X10_UTIL_HASHSET_H_NODEPS
