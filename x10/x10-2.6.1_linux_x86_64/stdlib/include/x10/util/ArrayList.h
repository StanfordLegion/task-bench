#ifndef __X10_UTIL_ARRAYLIST_H
#define __X10_UTIL_ARRAYLIST_H

#include <x10rt.h>


#define X10_UTIL_ABSTRACTCOLLECTION_H_NODEPS
#include <x10/util/AbstractCollection.h>
#undef X10_UTIL_ABSTRACTCOLLECTION_H_NODEPS
#define X10_UTIL_LIST_H_NODEPS
#include <x10/util/List.h>
#undef X10_UTIL_LIST_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Container;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace util { 
template<class TPMGL(S)> class ArrayList__It;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Comparable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace util { 
class RailUtils;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class ArrayList_Strings {
  public:
    static ::x10::lang::String sl__167977;
    static ::x10::lang::String sl__167978;
    static ::x10::lang::String sl__167979;
    static ::x10::lang::String sl__167975;
    static ::x10::lang::String sl__167976;
    static ::x10::lang::String sl__167980;
};

template<class TPMGL(T)> class ArrayList;
template <> class ArrayList<void>;
template<class TPMGL(T)> class ArrayList : public ::x10::util::AbstractCollection<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    using ::x10::util::AbstractCollection<TPMGL(T)>::addAll;
    
    static ::x10aux::itable_entry _itables[9];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::util::Container<TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::ArrayList<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> > _itable_2;
    
    static typename ::x10::util::Collection<TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> > _itable_3;
    
    static typename ::x10::util::List<TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> > _itable_4;
    
    static typename ::x10::util::Indexed<TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> > _itable_5;
    
    static typename ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> > _itable_6;
    
    static typename ::x10::lang::Settable<x10_long, TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> > _itable_7;
    
    ::x10::util::GrowableRail<TPMGL(T)>* FMGL(a);
    
    virtual x10_boolean contains(TPMGL(T) v);
    virtual void clear();
    virtual ::x10::util::Container<TPMGL(T)>* clone();
    virtual x10_boolean add(TPMGL(T) v);
    virtual x10_boolean addAll(::x10::lang::Rail< TPMGL(T) >* elems);
    virtual x10_boolean remove(TPMGL(T) v);
    virtual void addBefore(x10_long i, TPMGL(T) v);
    virtual TPMGL(T) __set(x10_long i, TPMGL(T) v);
    virtual TPMGL(T) set(TPMGL(T) v, x10_long i);
    virtual TPMGL(T) removeAt(x10_long i);
    virtual TPMGL(T) __apply(x10_long i);
    virtual TPMGL(T) get(x10_long i);
    virtual x10_long size();
    virtual x10_boolean isEmpty();
    virtual ::x10::lang::Rail< TPMGL(T) >* toRail();
    void _constructor();
    
    static ::x10::util::ArrayList<TPMGL(T)>* _make();
    
    void _constructor(x10_long size);
    
    static ::x10::util::ArrayList<TPMGL(T)>* _make(x10_long size);
    
    virtual TPMGL(T) removeFirst();
    virtual TPMGL(T) removeLast();
    virtual TPMGL(T) getFirst();
    virtual TPMGL(T) getLast();
    virtual ::x10::util::List<x10_long>* indices();
    virtual ::x10::util::List<TPMGL(T)>* subList(x10_long begin, x10_long end);
    virtual x10_long indexOf(TPMGL(T) v);
    virtual x10_long indexOf(x10_long index, TPMGL(T) v);
    virtual x10_long lastIndexOf(TPMGL(T) v);
    virtual x10_long lastIndexOf(x10_long index, TPMGL(T) v);
    virtual void resize(x10_long newSize, TPMGL(T) value);
    virtual void resize(x10_long newSize);
    virtual ::x10::lang::Rail< TPMGL(T) >* moveSectionToRail(x10_long i,
                                                             x10_long j);
    virtual ::x10::lang::Iterator<TPMGL(T)>* iterator();
    virtual ::x10::util::ListIterator<TPMGL(T)>* iteratorFrom(x10_long i);
    virtual void reverse();
    virtual void sort();
    virtual void sort(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    void exch(::x10::util::GrowableRail<TPMGL(T)>* a, x10_long i,
              x10_long j);
    virtual x10_long binarySearch(TPMGL(T) key, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    virtual x10_long binarySearch(TPMGL(T) key);
    virtual ::x10::lang::String* toString();
    virtual ::x10::util::ArrayList<TPMGL(T)>* x10__util__ArrayList____this__x10__util__ArrayList(
      );
    virtual void __fieldInitializers_x10_util_ArrayList();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::ArrayList<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::ArrayList<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::util::AbstractCollection<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::util::List<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.ArrayList";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class ArrayList<void> : public ::x10::util::AbstractCollection<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static ::x10::util::ArrayList<TPMGL(T)>*
      make(::x10::util::Container<TPMGL(T)>* c);
    
    
};

} } 
#endif // X10_UTIL_ARRAYLIST_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 

#ifndef X10_UTIL_ARRAYLIST_H_NODEPS
#define X10_UTIL_ARRAYLIST_H_NODEPS
#include <x10/util/AbstractCollection.h>
#include <x10/util/List.h>
#include <x10/util/GrowableRail.h>
#include <x10/util/Container.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/Any.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Zero.h>
#include <x10/util/ListIterator.h>
#include <x10/util/ArrayList__It.h>
#include <x10/lang/Comparable.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Int.h>
#include <x10/util/RailUtils.h>
#include <x10/lang/String.h>
#include <x10/util/StringBuilder.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_ARRAYLIST_H_GENERICS
#define X10_UTIL_ARRAYLIST_H_GENERICS
#endif // X10_UTIL_ARRAYLIST_H_GENERICS
#ifndef X10_UTIL_ARRAYLIST_H_IMPLEMENTATION
#define X10_UTIL_ARRAYLIST_H_IMPLEMENTATION
#include <x10/util/ArrayList.h>

#ifndef X10_UTIL_ARRAYLIST__CLOSURE__1_CLOSURE
#define X10_UTIL_ARRAYLIST__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_ArrayList__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <x10_util_ArrayList__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_int __apply(TPMGL(T) x, TPMGL(T) y){
        return ::x10::lang::Comparable< TPMGL(T) >::compareTo(::x10aux::class_cast_unchecked< ::x10::lang::Comparable< TPMGL(T) >*>(x), y);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_ArrayList__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_ArrayList__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_ArrayList__closure__1<TPMGL(T) >* this_ = new (storage) x10_util_ArrayList__closure__1<TPMGL(T) >();
        return this_;
    }
    
    x10_util_ArrayList__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    
    const char* toNativeString() {
        return "x10/util/ArrayList.x10:255";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <x10_util_ArrayList__closure__1<TPMGL(T) > >x10_util_ArrayList__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_ArrayList__closure__1<TPMGL(T) >::__apply, &x10_util_ArrayList__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_ArrayList__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >, &x10_util_ArrayList__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_ArrayList__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_ArrayList__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_ARRAYLIST__CLOSURE__1_CLOSURE
#ifndef X10_UTIL_ARRAYLIST__CLOSURE__2_CLOSURE
#define X10_UTIL_ARRAYLIST__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_ArrayList__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <x10_util_ArrayList__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_int __apply(TPMGL(T) x, TPMGL(T) y){
        return ::x10::lang::Comparable< TPMGL(T) >::compareTo(::x10aux::class_cast_unchecked< ::x10::lang::Comparable< TPMGL(T) >*>(x), y);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_ArrayList__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_ArrayList__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_ArrayList__closure__2<TPMGL(T) >* this_ = new (storage) x10_util_ArrayList__closure__2<TPMGL(T) >();
        return this_;
    }
    
    x10_util_ArrayList__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    
    const char* toNativeString() {
        return "x10/util/ArrayList.x10:277";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <x10_util_ArrayList__closure__2<TPMGL(T) > >x10_util_ArrayList__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_ArrayList__closure__2<TPMGL(T) >::__apply, &x10_util_ArrayList__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_ArrayList__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >, &x10_util_ArrayList__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_ArrayList__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_ArrayList__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_ARRAYLIST__CLOSURE__2_CLOSURE
template<class TPMGL(T)> typename ::x10::util::Container<TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> >  x10::util::ArrayList<TPMGL(T)>::_itable_0(&x10::util::ArrayList<TPMGL(T)>::clone, &x10::util::ArrayList<TPMGL(T)>::contains, &::x10::util::AbstractContainer<TPMGL(T)>::containsAll, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::ArrayList<TPMGL(T)>::isEmpty, &x10::util::ArrayList<TPMGL(T)>::iterator, &x10::util::ArrayList<TPMGL(T)>::size, &x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::util::ArrayList<TPMGL(T)> >  x10::util::ArrayList<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> >  x10::util::ArrayList<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::ArrayList<TPMGL(T)>::iterator, &x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::util::Collection<TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> >  x10::util::ArrayList<TPMGL(T)>::_itable_3(&x10::util::ArrayList<TPMGL(T)>::add, &::x10::util::AbstractCollection<TPMGL(T)>::addAll, &::x10::util::AbstractCollection<TPMGL(T)>::addAllWhere, &x10::util::ArrayList<TPMGL(T)>::clear, &x10::util::ArrayList<TPMGL(T)>::clone, &x10::util::ArrayList<TPMGL(T)>::contains, &::x10::util::AbstractContainer<TPMGL(T)>::containsAll, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::ArrayList<TPMGL(T)>::isEmpty, &x10::util::ArrayList<TPMGL(T)>::iterator, &x10::util::ArrayList<TPMGL(T)>::remove, &::x10::util::AbstractCollection<TPMGL(T)>::removeAll, &::x10::util::AbstractCollection<TPMGL(T)>::removeAllWhere, &::x10::util::AbstractCollection<TPMGL(T)>::retainAll, &x10::util::ArrayList<TPMGL(T)>::size, &x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::util::List<TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> >  x10::util::ArrayList<TPMGL(T)>::_itable_4(&x10::util::ArrayList<TPMGL(T)>::add, &::x10::util::AbstractCollection<TPMGL(T)>::addAll, &::x10::util::AbstractCollection<TPMGL(T)>::addAllWhere, &x10::util::ArrayList<TPMGL(T)>::addBefore, &x10::util::ArrayList<TPMGL(T)>::clear, &x10::util::ArrayList<TPMGL(T)>::clone, &x10::util::ArrayList<TPMGL(T)>::contains, &::x10::util::AbstractContainer<TPMGL(T)>::containsAll, &::x10::lang::X10Class::equals, &x10::util::ArrayList<TPMGL(T)>::getFirst, &x10::util::ArrayList<TPMGL(T)>::getLast, &::x10::lang::X10Class::hashCode, &x10::util::ArrayList<TPMGL(T)>::indexOf, &x10::util::ArrayList<TPMGL(T)>::indexOf, &x10::util::ArrayList<TPMGL(T)>::indices, &x10::util::ArrayList<TPMGL(T)>::isEmpty, &x10::util::ArrayList<TPMGL(T)>::iterator, &x10::util::ArrayList<TPMGL(T)>::iteratorFrom, &x10::util::ArrayList<TPMGL(T)>::lastIndexOf, &x10::util::ArrayList<TPMGL(T)>::lastIndexOf, &x10::util::ArrayList<TPMGL(T)>::__apply, &x10::util::ArrayList<TPMGL(T)>::__set, &x10::util::ArrayList<TPMGL(T)>::remove, &::x10::util::AbstractCollection<TPMGL(T)>::removeAll, &::x10::util::AbstractCollection<TPMGL(T)>::removeAllWhere, &x10::util::ArrayList<TPMGL(T)>::removeAt, &x10::util::ArrayList<TPMGL(T)>::removeFirst, &x10::util::ArrayList<TPMGL(T)>::removeLast, &::x10::util::AbstractCollection<TPMGL(T)>::retainAll, &x10::util::ArrayList<TPMGL(T)>::reverse, &x10::util::ArrayList<TPMGL(T)>::size, &x10::util::ArrayList<TPMGL(T)>::sort, &x10::util::ArrayList<TPMGL(T)>::sort, &x10::util::ArrayList<TPMGL(T)>::subList, &x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::util::Indexed<TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> >  x10::util::ArrayList<TPMGL(T)>::_itable_5(&x10::util::ArrayList<TPMGL(T)>::clone, &x10::util::ArrayList<TPMGL(T)>::contains, &::x10::util::AbstractContainer<TPMGL(T)>::containsAll, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::ArrayList<TPMGL(T)>::isEmpty, &x10::util::ArrayList<TPMGL(T)>::iterator, &x10::util::ArrayList<TPMGL(T)>::__apply, &x10::util::ArrayList<TPMGL(T)>::size, &x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> >  x10::util::ArrayList<TPMGL(T)>::_itable_6(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::ArrayList<TPMGL(T)>::__apply, &x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Settable<x10_long, TPMGL(T)>::template itable< ::x10::util::ArrayList<TPMGL(T)> >  x10::util::ArrayList<TPMGL(T)>::_itable_7(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::ArrayList<TPMGL(T)>::__set, &x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::util::ArrayList<TPMGL(T)>::_itables[9] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::Container<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable<TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::Collection<TPMGL(T)> >, &_itable_3), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::List<TPMGL(T)> >, &_itable_4), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::Indexed<TPMGL(T)> >, &_itable_5), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >, &_itable_6), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Settable<x10_long, TPMGL(T)> >, &_itable_7), ::x10aux::itable_entry(NULL, (void*)"::x10::util::ArrayList<TPMGL(T)>")};

//#line 16 "x10/util/ArrayList.x10"

//#line 18 "x10/util/ArrayList.x10"

//#line 24 "x10/util/ArrayList.x10"
template<class TPMGL(T)> x10_boolean x10::util::ArrayList<TPMGL(T)>::contains(
  TPMGL(T) v) {
    
    //#line 25 "x10/util/ArrayList.x10"
    x10_long i__108703max__136315 = (((__extension__ ({
        ::x10::util::GrowableRail<TPMGL(T)>* this__136316 = this->FMGL(a);
        ::x10aux::nullCheck(this__136316)->FMGL(size);
    }))
    ) - (((x10_long)1ll)));
    {
        x10_long i__136317;
        for (i__136317 = ((x10_long)0ll); ((i__136317) <= (i__108703max__136315));
             i__136317 = ((i__136317) + (((x10_long)1ll)))) {
            
            //#line 26 "x10/util/ArrayList.x10"
            if ((::x10aux::struct_equals(v, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))
                  ? ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                                                i__136317),
                                              reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                  : (::x10aux::equals(v,::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                                          i__136317)))) {
                
                //#line 27 "x10/util/ArrayList.x10"
                return true;
                
            }
            
        }
    }
    
    //#line 30 "x10/util/ArrayList.x10"
    return false;
    
}

//#line 33 "x10/util/ArrayList.x10"
template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::clear(
  ) {
    
    //#line 34 "x10/util/ArrayList.x10"
    ::x10::util::GrowableRail<TPMGL(T)>* this__136319 = this->FMGL(a);
    
    //#line 186 "x10/util/GrowableRail.x10"
    (::x10aux::nullCheck(this__136319)->FMGL(data))->clear();
    
    //#line 187 "x10/util/GrowableRail.x10"
    ::x10aux::nullCheck(this__136319)->FMGL(size) = ((x10_long)0ll);
}

//#line 37 "x10/util/ArrayList.x10"
template<class TPMGL(T)> ::x10::util::Container<TPMGL(T)>*
  x10::util::ArrayList<TPMGL(T)>::clone() {
    
    //#line 38 "x10/util/ArrayList.x10"
    ::x10::util::ArrayList<TPMGL(T)>* a =  (new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>());
    (a)->::x10::util::ArrayList<TPMGL(T)>::_constructor();
    
    //#line 39 "x10/util/ArrayList.x10"
    a->addAll(reinterpret_cast< ::x10::util::Container<TPMGL(T)>*>(this));
    
    //#line 40 "x10/util/ArrayList.x10"
    return reinterpret_cast< ::x10::util::Container<TPMGL(T)>*>(a);
    
}

//#line 43 "x10/util/ArrayList.x10"
template<class TPMGL(T)> x10_boolean x10::util::ArrayList<TPMGL(T)>::add(
  TPMGL(T) v) {
    
    //#line 44 "x10/util/ArrayList.x10"
    ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::add(
      v);
    
    //#line 45 "x10/util/ArrayList.x10"
    return true;
    
}

//#line 48 "x10/util/ArrayList.x10"
template<class TPMGL(T)> x10_boolean x10::util::ArrayList<TPMGL(T)>::addAll(
  ::x10::lang::Rail< TPMGL(T) >* elems) {
    
    //#line 49 "x10/util/ArrayList.x10"
    ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::addAll(
      elems);
    
    //#line 50 "x10/util/ArrayList.x10"
    return true;
    
}

//#line 53 "x10/util/ArrayList.x10"
template<class TPMGL(T)> x10_boolean x10::util::ArrayList<TPMGL(T)>::remove(
  TPMGL(T) v) {
    
    //#line 54 "x10/util/ArrayList.x10"
    x10_long i__108721max__136320 = (((__extension__ ({
        ::x10::util::GrowableRail<TPMGL(T)>* this__136321 =
          this->FMGL(a);
        ::x10aux::nullCheck(this__136321)->FMGL(size);
    }))
    ) - (((x10_long)1ll)));
    {
        x10_long i__136322;
        for (i__136322 = ((x10_long)0ll); ((i__136322) <= (i__108721max__136320));
             i__136322 = ((i__136322) + (((x10_long)1ll))))
        {
            
            //#line 55 "x10/util/ArrayList.x10"
            if ((::x10aux::struct_equals(v, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))
                  ? ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                                                i__136322),
                                              reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                  : (::x10aux::equals(v,::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                                          i__136322)))) {
                
                //#line 56 "x10/util/ArrayList.x10"
                this->removeAt(i__136322);
                
                //#line 57 "x10/util/ArrayList.x10"
                return true;
                
            }
            
        }
    }
    
    //#line 60 "x10/util/ArrayList.x10"
    return false;
    
}

//#line 63 "x10/util/ArrayList.x10"
template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::addBefore(
  x10_long i, TPMGL(T) v) {
    
    //#line 64 "x10/util/ArrayList.x10"
    ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::add(
      v);
    
    //#line 65 "x10/util/ArrayList.x10"
    {
        x10_long j;
        for (j = (((__extension__ ({
                 ::x10::util::GrowableRail<TPMGL(T)>* this__136254 =
                   this->FMGL(a);
                 ::x10aux::nullCheck(this__136254)->FMGL(size);
             }))
             ) - (((x10_long)1ll))); ((j) > (i)); j = ((j) - (((x10_long)1ll))))
        {
            
            //#line 66 "x10/util/ArrayList.x10"
            ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__set(
              j, ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                   ((j) - (((x10_long)1ll)))));
        }
    }
    
    //#line 68 "x10/util/ArrayList.x10"
    ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__set(
      i, v);
}

//#line 71 "x10/util/ArrayList.x10"
template<class TPMGL(T)> TPMGL(T) x10::util::ArrayList<TPMGL(T)>::__set(
  x10_long i, TPMGL(T) v) {
    return this->set(v, i);
    
}

//#line 73 "x10/util/ArrayList.x10"
template<class TPMGL(T)> TPMGL(T) x10::util::ArrayList<TPMGL(T)>::set(
  TPMGL(T) v, x10_long i) {
    
    //#line 74 "x10/util/ArrayList.x10"
    ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__set(
      i, v);
    
    //#line 75 "x10/util/ArrayList.x10"
    return v;
    
}

//#line 78 "x10/util/ArrayList.x10"
template<class TPMGL(T)> TPMGL(T) x10::util::ArrayList<TPMGL(T)>::removeAt(
  x10_long i) {
    
    //#line 79 "x10/util/ArrayList.x10"
    TPMGL(T) v = ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                   i);
    
    //#line 80 "x10/util/ArrayList.x10"
    {
        x10_long j;
        for (j = ((i) + (((x10_long)1ll))); ((j) < ((__extension__ ({
                                                ::x10::util::GrowableRail<TPMGL(T)>* this__136256 =
                                                  this->FMGL(a);
                                                ::x10aux::nullCheck(this__136256)->FMGL(size);
                                            }))
                                            )); j = ((j) + (((x10_long)1ll))))
        {
            
            //#line 81 "x10/util/ArrayList.x10"
            ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__set(
              ((j) - (((x10_long)1ll))), ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                                           j));
        }
    }
    
    //#line 83 "x10/util/ArrayList.x10"
    ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::removeLast();
    
    //#line 84 "x10/util/ArrayList.x10"
    return v;
    
}

//#line 87 "x10/util/ArrayList.x10"
template<class TPMGL(T)> TPMGL(T) x10::util::ArrayList<TPMGL(T)>::__apply(
  x10_long i) {
    return ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
             i);
    
}

//#line 89 "x10/util/ArrayList.x10"
template<class TPMGL(T)> TPMGL(T) x10::util::ArrayList<TPMGL(T)>::get(
  x10_long i) {
    return ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
             i);
    
}

//#line 91 "x10/util/ArrayList.x10"
template<class TPMGL(T)> x10_long x10::util::ArrayList<TPMGL(T)>::size(
  ) {
    ::x10::util::GrowableRail<TPMGL(T)>* this__136324 = this->FMGL(a);
    return ::x10aux::nullCheck(this__136324)->FMGL(size);
    
}

//#line 93 "x10/util/ArrayList.x10"
template<class TPMGL(T)> x10_boolean x10::util::ArrayList<TPMGL(T)>::isEmpty(
  ) {
    return (::x10aux::struct_equals(this->size(), ((x10_long)0ll)));
    
}

//#line 95 "x10/util/ArrayList.x10"
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::ArrayList<TPMGL(T)>::toRail(
  ) {
    return ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::toRail();
    
}

//#line 97 "x10/util/ArrayList.x10"
template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::_constructor(
                           ) {
    (this)->::x10::util::AbstractCollection<TPMGL(T)>::_constructor();
    
    //#line 98 "x10/util/ArrayList.x10"
    this->FMGL(a) = (__extension__ ({
        ::x10::util::GrowableRail<TPMGL(T)>* alloc__108698 =
           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(T)> >()) ::x10::util::GrowableRail<TPMGL(T)>());
        
        //#line 50 "x10/util/GrowableRail.x10"
        (alloc__108698)->::x10::util::GrowableRail<TPMGL(T)>::_constructor(
          ((x10_long)0ll));
        alloc__108698;
    }))
    ;
}
template<class TPMGL(T)> ::x10::util::ArrayList<TPMGL(T)>* x10::util::ArrayList<TPMGL(T)>::_make(
                           ) {
    ::x10::util::ArrayList<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 101 "x10/util/ArrayList.x10"
template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::_constructor(
                           x10_long size) {
    (this)->::x10::util::AbstractCollection<TPMGL(T)>::_constructor();
    
    //#line 102 "x10/util/ArrayList.x10"
    this->FMGL(a) = (__extension__ ({
        ::x10::util::GrowableRail<TPMGL(T)>* alloc__108699 =
           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(T)> >()) ::x10::util::GrowableRail<TPMGL(T)>());
        (alloc__108699)->::x10::util::GrowableRail<TPMGL(T)>::_constructor(
          size);
        alloc__108699;
    }))
    ;
}
template<class TPMGL(T)> ::x10::util::ArrayList<TPMGL(T)>* x10::util::ArrayList<TPMGL(T)>::_make(
                           x10_long size) {
    ::x10::util::ArrayList<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>();
    this_->_constructor(size);
    return this_;
}



//#line 105 "x10/util/ArrayList.x10"
template<class TPMGL(T)> TPMGL(T) x10::util::ArrayList<TPMGL(T)>::removeFirst(
  ) {
    return this->removeAt(((x10_long)0ll));
    
}

//#line 106 "x10/util/ArrayList.x10"
template<class TPMGL(T)> TPMGL(T) x10::util::ArrayList<TPMGL(T)>::removeLast(
  ) {
    return this->removeAt((((__extension__ ({
                              ::x10::util::GrowableRail<TPMGL(T)>* this__136265 =
                                this->FMGL(a);
                              ::x10aux::nullCheck(this__136265)->FMGL(size);
                          }))
                          ) - (((x10_long)1ll))));
    
}

//#line 107 "x10/util/ArrayList.x10"
template<class TPMGL(T)> TPMGL(T) x10::util::ArrayList<TPMGL(T)>::getFirst(
  ) {
    return this->get(((x10_long)0ll));
    
}

//#line 108 "x10/util/ArrayList.x10"
template<class TPMGL(T)> TPMGL(T) x10::util::ArrayList<TPMGL(T)>::getLast(
  ) {
    return this->get((((__extension__ ({
                         ::x10::util::GrowableRail<TPMGL(T)>* this__136267 =
                           this->FMGL(a);
                         ::x10aux::nullCheck(this__136267)->FMGL(size);
                     }))
                     ) - (((x10_long)1ll))));
    
}

//#line 110 "x10/util/ArrayList.x10"
template<class TPMGL(T)> ::x10::util::List<x10_long>* x10::util::ArrayList<TPMGL(T)>::indices(
  ) {
    
    //#line 111 "x10/util/ArrayList.x10"
    ::x10::util::ArrayList<x10_long>* l =  (new (::x10aux::alloc_z< ::x10::util::ArrayList<x10_long> >()) ::x10::util::ArrayList<x10_long>());
    (l)->::x10::util::ArrayList<x10_long>::_constructor();
    
    //#line 112 "x10/util/ArrayList.x10"
    x10_long i__108739max__136327 = (((__extension__ ({
        ::x10::util::GrowableRail<TPMGL(T)>* this__136328 =
          this->FMGL(a);
        ::x10aux::nullCheck(this__136328)->FMGL(size);
    }))
    ) - (((x10_long)1ll)));
    {
        x10_long i__136329;
        for (i__136329 = ((x10_long)0ll); ((i__136329) <= (i__108739max__136327));
             i__136329 = ((i__136329) + (((x10_long)1ll))))
        {
            
            //#line 113 "x10/util/ArrayList.x10"
            l->add(i__136329);
        }
    }
    
    //#line 115 "x10/util/ArrayList.x10"
    return reinterpret_cast< ::x10::util::List<x10_long>*>(l);
    
}

//#line 118 "x10/util/ArrayList.x10"
template<class TPMGL(T)> ::x10::util::List<TPMGL(T)>* x10::util::ArrayList<TPMGL(T)>::subList(
  x10_long begin, x10_long end) {
    
    //#line 119 "x10/util/ArrayList.x10"
    ::x10::util::ArrayList<TPMGL(T)>* l =  (new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>());
    (l)->::x10::util::ArrayList<TPMGL(T)>::_constructor();
    
    //#line 120 "x10/util/ArrayList.x10"
    {
        x10_long i;
        for (i = begin; (((i) < ((__extension__ ({
                            ::x10::util::GrowableRail<TPMGL(T)>* this__136271 =
                              this->FMGL(a);
                            ::x10aux::nullCheck(this__136271)->FMGL(size);
                        }))
                        )) && ((i) < (end))); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 121 "x10/util/ArrayList.x10"
            l->add(::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                     i));
        }
    }
    
    //#line 123 "x10/util/ArrayList.x10"
    return reinterpret_cast< ::x10::util::List<TPMGL(T)>*>(l);
    
}

//#line 126 "x10/util/ArrayList.x10"
template<class TPMGL(T)> x10_long x10::util::ArrayList<TPMGL(T)>::indexOf(
  TPMGL(T) v) {
    
    //#line 127 "x10/util/ArrayList.x10"
    return this->indexOf(((x10_long)0ll), v);
    
}

//#line 130 "x10/util/ArrayList.x10"
template<class TPMGL(T)> x10_long x10::util::ArrayList<TPMGL(T)>::indexOf(
  x10_long index, TPMGL(T) v) {
    
    //#line 131 "x10/util/ArrayList.x10"
    {
        x10_long i;
        for (i = index; ((i) < ((__extension__ ({
                            ::x10::util::GrowableRail<TPMGL(T)>* this__136273 =
                              this->FMGL(a);
                            ::x10aux::nullCheck(this__136273)->FMGL(size);
                        }))
                        )); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 132 "x10/util/ArrayList.x10"
            if ((::x10aux::struct_equals(v, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))
                  ? ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                                                i), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                  : (::x10aux::equals(v,::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                                          i)))) {
                
                //#line 133 "x10/util/ArrayList.x10"
                return i;
                
            }
            
        }
    }
    
    //#line 135 "x10/util/ArrayList.x10"
    return ((x10_long)-1ll);
    
}

//#line 138 "x10/util/ArrayList.x10"
template<class TPMGL(T)> x10_long x10::util::ArrayList<TPMGL(T)>::lastIndexOf(
  TPMGL(T) v) {
    
    //#line 139 "x10/util/ArrayList.x10"
    return this->lastIndexOf((((__extension__ ({
                                 ::x10::util::GrowableRail<TPMGL(T)>* this__136275 =
                                   this->FMGL(a);
                                 ::x10aux::nullCheck(this__136275)->FMGL(size);
                             }))
                             ) - (((x10_long)1ll))), v);
    
}

//#line 142 "x10/util/ArrayList.x10"
template<class TPMGL(T)> x10_long x10::util::ArrayList<TPMGL(T)>::lastIndexOf(
  x10_long index, TPMGL(T) v) {
    
    //#line 143 "x10/util/ArrayList.x10"
    {
        x10_long i;
        for (i = index; ((i) >= (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
        {
            
            //#line 144 "x10/util/ArrayList.x10"
            if ((::x10aux::struct_equals(v, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))
                  ? ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                                                i), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                  : (::x10aux::equals(v,::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                                          i)))) {
                
                //#line 145 "x10/util/ArrayList.x10"
                return i;
                
            }
            
        }
    }
    
    //#line 147 "x10/util/ArrayList.x10"
    return ((x10_long)-1ll);
    
}

//#line 159 "x10/util/ArrayList.x10"
/**
     * Resize this ArrayList so that it contains <code>newSize</code> elements.
     * If <code>newSize</code> is larger than the current size, grow the  
     * backing store to accommodate the new elements.
     * If <code>newSize</code> is smaller than the current size, shrink the 
     * backing store and remove all elements after <code>newSize</code>.
     * @param newSize the new number of elements for this list
     * @param value the default value for new elements
     */
template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::resize(
  x10_long newSize, TPMGL(T) value) {
    
    //#line 160 "x10/util/ArrayList.x10"
    x10_long oldSize = (__extension__ ({
        ::x10::util::GrowableRail<TPMGL(T)>* this__136277 =
          this->FMGL(a);
        ::x10aux::nullCheck(this__136277)->FMGL(size);
    }))
    ;
    
    //#line 161 "x10/util/ArrayList.x10"
    if (((newSize) > (oldSize))) {
        
        //#line 162 "x10/util/ArrayList.x10"
        if (((newSize) > ((__extension__ ({
                ::x10::util::GrowableRail<TPMGL(T)>* this__136279 =
                  this->FMGL(a);
                (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(this__136279)->FMGL(data))->FMGL(size));
            }))
            ))) {
            ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::grow(
              newSize);
        }
        
        //#line 163 "x10/util/ArrayList.x10"
        x10_long i__108757max__136332 = ((newSize) - (((x10_long)1ll)));
        {
            x10_long i__136333;
            for (i__136333 = oldSize; ((i__136333) <= (i__108757max__136332));
                 i__136333 = ((i__136333) + (((x10_long)1ll))))
            {
                
                //#line 164 "x10/util/ArrayList.x10"
                ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::add(
                  value);
            }
        }
        
    } else {
        
        //#line 167 "x10/util/ArrayList.x10"
        ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::shrink(
          newSize);
    }
    
}

//#line 177 "x10/util/ArrayList.x10"
/**
     * Resize this ArrayList so that it contains <code>newSize</code> elements.
     * New elements are zero-initialized.
     * @param newSize the new number of elements for this list
     * @see ArrayList.resize(newSize:Long, value:T)
     */
template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::resize(
  x10_long newSize) {
    
    //#line 178 "x10/util/ArrayList.x10"
    this->resize(newSize, ::x10aux::zeroValue< TPMGL(T) >());
}

//#line 181 "x10/util/ArrayList.x10"
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::ArrayList<TPMGL(T)>::moveSectionToRail(
  x10_long i, x10_long j) {
    return ::x10aux::nullCheck(this->FMGL(a))->x10::util::template GrowableRail<TPMGL(T)>::moveSectionToRail(
             i, j);
    
}

//#line 239 "x10/util/ArrayList.x10"
template<class TPMGL(T)> ::x10::lang::Iterator<TPMGL(T)>*
  x10::util::ArrayList<TPMGL(T)>::iterator() {
    
    //#line 240 "x10/util/ArrayList.x10"
    ::x10::util::ArrayList__It<TPMGL(T)>* alloc__136340 =
       (new (::x10aux::alloc_z< ::x10::util::ArrayList__It<TPMGL(T)> >()) ::x10::util::ArrayList__It<TPMGL(T)>());
    ::x10::util::ArrayList<TPMGL(T)>* al__136339 = this;
    
    //#line 188 "x10/util/ArrayList.x10"
    alloc__136340->FMGL(i) = ((x10_long)0ll);
    
    //#line 198 "x10/util/ArrayList.x10"
    alloc__136340->FMGL(al) = al__136339;
    
    //#line 199 "x10/util/ArrayList.x10"
    alloc__136340->FMGL(i) = ((x10_long)-1ll);
    
    //#line 240 "x10/util/ArrayList.x10"
    return reinterpret_cast< ::x10::lang::Iterator<TPMGL(T)>*>(reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(alloc__136340));
    
}

//#line 243 "x10/util/ArrayList.x10"
template<class TPMGL(T)> ::x10::util::ListIterator<TPMGL(T)>*
  x10::util::ArrayList<TPMGL(T)>::iteratorFrom(x10_long i) {
    
    //#line 244 "x10/util/ArrayList.x10"
    ::x10::util::ArrayList__It<TPMGL(T)>* alloc__136343 =
       (new (::x10aux::alloc_z< ::x10::util::ArrayList__It<TPMGL(T)> >()) ::x10::util::ArrayList__It<TPMGL(T)>());
    ::x10::util::ArrayList<TPMGL(T)>* al__136341 = this;
    
    //#line 188 "x10/util/ArrayList.x10"
    alloc__136343->FMGL(i) = ((x10_long)0ll);
    
    //#line 198 "x10/util/ArrayList.x10"
    alloc__136343->FMGL(al) = al__136341;
    
    //#line 199 "x10/util/ArrayList.x10"
    alloc__136343->FMGL(i) = i;
    
    //#line 244 "x10/util/ArrayList.x10"
    return reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(alloc__136343);
    
}

//#line 247 "x10/util/ArrayList.x10"
template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::reverse(
  ) {
    
    //#line 248 "x10/util/ArrayList.x10"
    x10_long length = (__extension__ ({
        ::x10::util::GrowableRail<TPMGL(T)>* this__136298 =
          this->FMGL(a);
        ::x10aux::nullCheck(this__136298)->FMGL(size);
    }))
    ;
    
    //#line 249 "x10/util/ArrayList.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (((length) / ::x10aux::zeroCheck(((x10_long)2ll)))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 250 "x10/util/ArrayList.x10"
            this->exch(this->FMGL(a), i, ((((length) - (((x10_long)1ll)))) - (i)));
        }
    }
    
}

//#line 255 "x10/util/ArrayList.x10"
template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::sort(
  ) {
    this->sort(reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(sizeof(x10_util_ArrayList__closure__1<TPMGL(T)>)))x10_util_ArrayList__closure__1<TPMGL(T)>())));
}

//#line 256 "x10/util/ArrayList.x10"
template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::sort(
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    ::x10::util::RailUtils::template qsort< TPMGL(T) >((__extension__ ({
                                                           ::x10::util::GrowableRail<TPMGL(T)>* this__136300 =
                                                             this->FMGL(a);
                                                           ::x10aux::nullCheck(this__136300)->FMGL(data);
                                                       }))
                                                       , ((x10_long)0ll),
                                                       (((__extension__ ({
                                                           ::x10::util::GrowableRail<TPMGL(T)>* this__136302 =
                                                             this->FMGL(a);
                                                           ::x10aux::nullCheck(this__136302)->FMGL(size);
                                                       }))
                                                       ) - (((x10_long)1ll))),
                                                       cmp);
}

//#line 260 "x10/util/ArrayList.x10"
template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::exch(
  ::x10::util::GrowableRail<TPMGL(T)>* a, x10_long i, x10_long j) {
    
    //#line 261 "x10/util/ArrayList.x10"
    TPMGL(T) temp = ::x10aux::nullCheck(a)->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                      i);
    
    //#line 262 "x10/util/ArrayList.x10"
    ::x10aux::nullCheck(a)->x10::util::template GrowableRail<TPMGL(T)>::__set(
      i, ::x10aux::nullCheck(a)->x10::util::template GrowableRail<TPMGL(T)>::__apply(
           j));
    
    //#line 263 "x10/util/ArrayList.x10"
    ::x10aux::nullCheck(a)->x10::util::template GrowableRail<TPMGL(T)>::__set(
      j, temp);
}

//#line 275 "x10/util/ArrayList.x10"
/**
     * Searches this ArrayList for the key using the binary search
     * algorithm.  This ArrayList must be sorted (e.g. by the sort method).
     * If the key is found, return its index in the list.
     * Otherwise, return (-(insertion point) -1), where insertion point is the
     * index at which the key would be inserted into the sorted list.
     * @param key the value to find
     * @param cmp the comparison function to use
     */
template<class TPMGL(T)> x10_long x10::util::ArrayList<TPMGL(T)>::binarySearch(
  TPMGL(T) key, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    return ::x10::util::RailUtils::template binarySearch< TPMGL(T) >(
             (__extension__ ({
                 ::x10::util::GrowableRail<TPMGL(T)>* this__136304 =
                   this->FMGL(a);
                 ::x10aux::nullCheck(this__136304)->FMGL(data);
             }))
             , key, ((x10_long)0ll), (__extension__ ({
                 ::x10::util::GrowableRail<TPMGL(T)>* this__136306 =
                   this->FMGL(a);
                 ::x10aux::nullCheck(this__136306)->FMGL(size);
             }))
             , cmp);
    
}

//#line 276 "x10/util/ArrayList.x10"
template<class TPMGL(T)> x10_long x10::util::ArrayList<TPMGL(T)>::binarySearch(
  TPMGL(T) key) {
    
    //#line 277 "x10/util/ArrayList.x10"
    return ::x10::util::RailUtils::template binarySearch< TPMGL(T) >(
             (__extension__ ({
                 ::x10::util::GrowableRail<TPMGL(T)>* this__136308 =
                   this->FMGL(a);
                 ::x10aux::nullCheck(this__136308)->FMGL(data);
             }))
             , key, ((x10_long)0ll), (__extension__ ({
                 ::x10::util::GrowableRail<TPMGL(T)>* this__136310 =
                   this->FMGL(a);
                 ::x10aux::nullCheck(this__136310)->FMGL(size);
             }))
             , reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(sizeof(x10_util_ArrayList__closure__2<TPMGL(T)>)))x10_util_ArrayList__closure__2<TPMGL(T)>())));
    
}

//#line 285 "x10/util/ArrayList.x10"
/**
     * Return the string representation of this ArrayList.
     * 
     * @return the string representation of this ArrayList.
     */
template<class TPMGL(T)> ::x10::lang::String* x10::util::ArrayList<TPMGL(T)>::toString(
  ) {
    
    //#line 286 "x10/util/ArrayList.x10"
    ::x10::util::StringBuilder* sb =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
    (sb)->::x10::util::StringBuilder::_constructor();
    
    //#line 287 "x10/util/ArrayList.x10"
    sb->add((&::x10::util::ArrayList_Strings::sl__167975));
    
    //#line 288 "x10/util/ArrayList.x10"
    x10_long sz = (__extension__ ({
        x10_long a__136312 = this->size();
        ((a__136312) < (((x10_long)10ll))) ? (a__136312) : (((x10_long)10ll));
    }))
    ;
    
    //#line 289 "x10/util/ArrayList.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (sz)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 290 "x10/util/ArrayList.x10"
            if (((i) > (((x10_long)0ll)))) {
                sb->add((&::x10::util::ArrayList_Strings::sl__167976));
            }
            
            //#line 291 "x10/util/ArrayList.x10"
            sb->add(::x10::lang::String::__plus((&::x10::util::ArrayList_Strings::sl__167977), this->__apply(
                                                                                                 i)));
        }
    }
    
    //#line 293 "x10/util/ArrayList.x10"
    if (((sz) < (this->size()))) {
        sb->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::ArrayList_Strings::sl__167978), ((this->size()) - (sz))), (&::x10::util::ArrayList_Strings::sl__167979)));
    }
    
    //#line 294 "x10/util/ArrayList.x10"
    sb->add((&::x10::util::ArrayList_Strings::sl__167980));
    
    //#line 295 "x10/util/ArrayList.x10"
    return sb->toString();
    
}

//#line 14 "x10/util/ArrayList.x10"
template<class TPMGL(T)> ::x10::util::ArrayList<TPMGL(T)>*
  x10::util::ArrayList<TPMGL(T)>::x10__util__ArrayList____this__x10__util__ArrayList(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::__fieldInitializers_x10_util_ArrayList(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::ArrayList<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::ArrayList<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::util::AbstractCollection<TPMGL(T)>::_serialize_body(buf);
    buf.write(this->FMGL(a));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::util::ArrayList<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::ArrayList<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::util::ArrayList<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::util::AbstractCollection<TPMGL(T)>::_deserialize_body(buf);
    FMGL(a) = buf.read< ::x10::util::GrowableRail<TPMGL(T)>*>();
}

template<class TPMGL(T)> ::x10::util::ArrayList<TPMGL(T)>*
  x10::util::ArrayList<void>::make(::x10::util::Container<TPMGL(T)>* c) {
    
    //#line 19 "x10/util/ArrayList.x10"
    ::x10::util::ArrayList<TPMGL(T)>* a =  (new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>());
    (a)->::x10::util::ArrayList<TPMGL(T)>::_constructor();
    
    //#line 20 "x10/util/ArrayList.x10"
    a->addAll(c);
    
    //#line 21 "x10/util/ArrayList.x10"
    return a;
    
}
#endif // X10_UTIL_ARRAYLIST_H_IMPLEMENTATION
#endif // __X10_UTIL_ARRAYLIST_H_NODEPS
