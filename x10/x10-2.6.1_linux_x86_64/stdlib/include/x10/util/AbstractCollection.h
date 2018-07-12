#ifndef __X10_UTIL_ABSTRACTCOLLECTION_H
#define __X10_UTIL_ABSTRACTCOLLECTION_H

#include <x10rt.h>


#define X10_UTIL_ABSTRACTCONTAINER_H_NODEPS
#include <x10/util/AbstractContainer.h>
#undef X10_UTIL_ABSTRACTCONTAINER_H_NODEPS
#define X10_UTIL_COLLECTION_H_NODEPS
#include <x10/util/Collection.h>
#undef X10_UTIL_COLLECTION_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class Container;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

template<class TPMGL(T)> class AbstractCollection;
template <> class AbstractCollection<void>;
template<class TPMGL(T)> class AbstractCollection : public ::x10::util::AbstractContainer<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual x10_boolean add(TPMGL(T) v) = 0;
    virtual x10_boolean remove(TPMGL(T) v) = 0;
    virtual x10_boolean addAll(::x10::util::Container<TPMGL(T)>* c);
    virtual x10_boolean retainAll(::x10::util::Container<TPMGL(T)>* c);
    virtual x10_boolean removeAll(::x10::util::Container<TPMGL(T)>* c);
    virtual x10_boolean addAllWhere(::x10::util::Container<TPMGL(T)>* c,
                                    ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* p);
    virtual x10_boolean removeAllWhere(::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* p);
    virtual void clear();
    virtual ::x10::util::Container<TPMGL(T)>* clone() = 0;
    virtual ::x10::util::AbstractCollection<TPMGL(T)>* x10__util__AbstractCollection____this__x10__util__AbstractCollection(
      );
    void _constructor();
    
    virtual void __fieldInitializers_x10_util_AbstractCollection(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::AbstractCollection<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::AbstractCollection<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::AbstractCollection<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::util::AbstractContainer<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::util::Collection<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.AbstractCollection";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class AbstractCollection<void> : public ::x10::util::AbstractContainer<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_ABSTRACTCOLLECTION_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class AbstractCollection;
} } 

#ifndef X10_UTIL_ABSTRACTCOLLECTION_H_NODEPS
#define X10_UTIL_ABSTRACTCOLLECTION_H_NODEPS
#include <x10/util/AbstractContainer.h>
#include <x10/util/Collection.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Container.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_ABSTRACTCOLLECTION_H_GENERICS
#define X10_UTIL_ABSTRACTCOLLECTION_H_GENERICS
#endif // X10_UTIL_ABSTRACTCOLLECTION_H_GENERICS
#ifndef X10_UTIL_ABSTRACTCOLLECTION_H_IMPLEMENTATION
#define X10_UTIL_ABSTRACTCOLLECTION_H_IMPLEMENTATION
#include <x10/util/AbstractCollection.h>

#ifndef X10_UTIL_ABSTRACTCOLLECTION__CLOSURE__1_CLOSURE
#define X10_UTIL_ABSTRACTCOLLECTION__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_AbstractCollection__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>::template itable <x10_util_AbstractCollection__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply(TPMGL(T) id__244){
        return true;
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_AbstractCollection__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_AbstractCollection__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_AbstractCollection__closure__1<TPMGL(T) >* this_ = new (storage) x10_util_AbstractCollection__closure__1<TPMGL(T) >();
        return this_;
    }
    
    x10_util_AbstractCollection__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/AbstractCollection.x10:19";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>::template itable <x10_util_AbstractCollection__closure__1<TPMGL(T) > >x10_util_AbstractCollection__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_AbstractCollection__closure__1<TPMGL(T) >::__apply, &x10_util_AbstractCollection__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_AbstractCollection__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >, &x10_util_AbstractCollection__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_AbstractCollection__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_AbstractCollection__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_ABSTRACTCOLLECTION__CLOSURE__1_CLOSURE
#ifndef X10_UTIL_ABSTRACTCOLLECTION__CLOSURE__2_CLOSURE
#define X10_UTIL_ABSTRACTCOLLECTION__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_AbstractCollection__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>::template itable <x10_util_AbstractCollection__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply(TPMGL(T) x){
        return !(::x10::util::Container<TPMGL(T)>::contains(::x10aux::nullCheck(c), 
                   x));
        
    }
    
    // captured environment
    ::x10::util::Container<TPMGL(T)>* c;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->c);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_AbstractCollection__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_AbstractCollection__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::util::Container<TPMGL(T)>* that_c = buf.read< ::x10::util::Container<TPMGL(T)>*>();
        x10_util_AbstractCollection__closure__2<TPMGL(T) >* this_ = new (storage) x10_util_AbstractCollection__closure__2<TPMGL(T) >(that_c);
        return this_;
    }
    
    x10_util_AbstractCollection__closure__2(::x10::util::Container<TPMGL(T)>* c) : c(c) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/AbstractCollection.x10:20";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>::template itable <x10_util_AbstractCollection__closure__2<TPMGL(T) > >x10_util_AbstractCollection__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_AbstractCollection__closure__2<TPMGL(T) >::__apply, &x10_util_AbstractCollection__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_AbstractCollection__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >, &x10_util_AbstractCollection__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_AbstractCollection__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_AbstractCollection__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_ABSTRACTCOLLECTION__CLOSURE__2_CLOSURE
#ifndef X10_UTIL_ABSTRACTCOLLECTION__CLOSURE__3_CLOSURE
#define X10_UTIL_ABSTRACTCOLLECTION__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_AbstractCollection__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>::template itable <x10_util_AbstractCollection__closure__3<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply(TPMGL(T) x){
        return ::x10::util::Container<TPMGL(T)>::contains(::x10aux::nullCheck(c), 
                 x);
        
    }
    
    // captured environment
    ::x10::util::Container<TPMGL(T)>* c;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->c);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_AbstractCollection__closure__3<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_AbstractCollection__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::util::Container<TPMGL(T)>* that_c = buf.read< ::x10::util::Container<TPMGL(T)>*>();
        x10_util_AbstractCollection__closure__3<TPMGL(T) >* this_ = new (storage) x10_util_AbstractCollection__closure__3<TPMGL(T) >(that_c);
        return this_;
    }
    
    x10_util_AbstractCollection__closure__3(::x10::util::Container<TPMGL(T)>* c) : c(c) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/AbstractCollection.x10:21";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>::template itable <x10_util_AbstractCollection__closure__3<TPMGL(T) > >x10_util_AbstractCollection__closure__3<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_AbstractCollection__closure__3<TPMGL(T) >::__apply, &x10_util_AbstractCollection__closure__3<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_AbstractCollection__closure__3<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >, &x10_util_AbstractCollection__closure__3<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_AbstractCollection__closure__3<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_AbstractCollection__closure__3<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_ABSTRACTCOLLECTION__CLOSURE__3_CLOSURE
#ifndef X10_UTIL_ABSTRACTCOLLECTION__CLOSURE__4_CLOSURE
#define X10_UTIL_ABSTRACTCOLLECTION__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_AbstractCollection__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>::template itable <x10_util_AbstractCollection__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply(TPMGL(T) id__247){
        return true;
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_AbstractCollection__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_AbstractCollection__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_AbstractCollection__closure__4<TPMGL(T) >* this_ = new (storage) x10_util_AbstractCollection__closure__4<TPMGL(T) >();
        return this_;
    }
    
    x10_util_AbstractCollection__closure__4() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/AbstractCollection.x10:41";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>::template itable <x10_util_AbstractCollection__closure__4<TPMGL(T) > >x10_util_AbstractCollection__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_AbstractCollection__closure__4<TPMGL(T) >::__apply, &x10_util_AbstractCollection__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_AbstractCollection__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >, &x10_util_AbstractCollection__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_AbstractCollection__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_AbstractCollection__closure__4<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_ABSTRACTCOLLECTION__CLOSURE__4_CLOSURE

//#line 16 "x10/util/AbstractCollection.x10"

//#line 17 "x10/util/AbstractCollection.x10"

//#line 19 "x10/util/AbstractCollection.x10"
template<class TPMGL(T)> x10_boolean x10::util::AbstractCollection<TPMGL(T)>::addAll(
  ::x10::util::Container<TPMGL(T)>* c) {
    return this->addAllWhere(c, reinterpret_cast< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >(sizeof(x10_util_AbstractCollection__closure__1<TPMGL(T)>)))x10_util_AbstractCollection__closure__1<TPMGL(T)>())));
    
}

//#line 20 "x10/util/AbstractCollection.x10"
template<class TPMGL(T)> x10_boolean x10::util::AbstractCollection<TPMGL(T)>::retainAll(
  ::x10::util::Container<TPMGL(T)>* c) {
    return this->removeAllWhere(reinterpret_cast< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >(sizeof(x10_util_AbstractCollection__closure__2<TPMGL(T)>)))x10_util_AbstractCollection__closure__2<TPMGL(T)>(c))));
    
}

//#line 21 "x10/util/AbstractCollection.x10"
template<class TPMGL(T)> x10_boolean x10::util::AbstractCollection<TPMGL(T)>::removeAll(
  ::x10::util::Container<TPMGL(T)>* c) {
    return this->removeAllWhere(reinterpret_cast< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >(sizeof(x10_util_AbstractCollection__closure__3<TPMGL(T)>)))x10_util_AbstractCollection__closure__3<TPMGL(T)>(c))));
    
}

//#line 23 "x10/util/AbstractCollection.x10"
template<class TPMGL(T)> x10_boolean x10::util::AbstractCollection<TPMGL(T)>::addAllWhere(
  ::x10::util::Container<TPMGL(T)>* c, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* p) {
    
    //#line 24 "x10/util/AbstractCollection.x10"
    x10_boolean result = false;
    
    //#line 25 "x10/util/AbstractCollection.x10"
    {
        ::x10::lang::Iterator<TPMGL(T)>* x__108777;
        for (x__108777 = ::x10::util::Container<TPMGL(T)>::iterator(::x10aux::nullCheck(c));
             ::x10::lang::Iterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(x__108777));
             ) {
            TPMGL(T) x = ::x10::lang::Iterator<TPMGL(T)>::next(::x10aux::nullCheck(x__108777));
            
            //#line 26 "x10/util/AbstractCollection.x10"
            if (::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>::__apply(::x10aux::nullCheck(p), 
                  x)) {
                
                //#line 27 "x10/util/AbstractCollection.x10"
                result = ((x10_boolean) (((result) ? 1 : 0) | ((this->add(
                                                                  x)) ? 1 : 0)));
            }
            
        }
    }
    
    //#line 29 "x10/util/AbstractCollection.x10"
    return result;
    
}

//#line 32 "x10/util/AbstractCollection.x10"
template<class TPMGL(T)> x10_boolean x10::util::AbstractCollection<TPMGL(T)>::removeAllWhere(
  ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* p) {
    
    //#line 33 "x10/util/AbstractCollection.x10"
    x10_boolean result = false;
    
    //#line 34 "x10/util/AbstractCollection.x10"
    {
        ::x10::lang::Iterator<TPMGL(T)>* x__108779;
        for (x__108779 = ::x10::util::Collection<TPMGL(T)>::iterator(::x10aux::nullCheck(reinterpret_cast< ::x10::util::Collection<TPMGL(T)>*>(this->clone())));
             ::x10::lang::Iterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(x__108779));
             ) {
            TPMGL(T) x = ::x10::lang::Iterator<TPMGL(T)>::next(::x10aux::nullCheck(x__108779));
            
            //#line 35 "x10/util/AbstractCollection.x10"
            if (::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>::__apply(::x10aux::nullCheck(p), 
                  x)) {
                
                //#line 36 "x10/util/AbstractCollection.x10"
                result = ((x10_boolean) (((result) ? 1 : 0) | ((this->remove(
                                                                  x)) ? 1 : 0)));
            }
            
        }
    }
    
    //#line 38 "x10/util/AbstractCollection.x10"
    return result;
    
}

//#line 41 "x10/util/AbstractCollection.x10"
template<class TPMGL(T)> void x10::util::AbstractCollection<TPMGL(T)>::clear(
  ) {
    this->removeAllWhere(reinterpret_cast< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean> >(sizeof(x10_util_AbstractCollection__closure__4<TPMGL(T)>)))x10_util_AbstractCollection__closure__4<TPMGL(T)>())));
}

//#line 43 "x10/util/AbstractCollection.x10"

//#line 15 "x10/util/AbstractCollection.x10"
template<class TPMGL(T)> ::x10::util::AbstractCollection<TPMGL(T)>*
  x10::util::AbstractCollection<TPMGL(T)>::x10__util__AbstractCollection____this__x10__util__AbstractCollection(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::AbstractCollection<TPMGL(T)>::_constructor(
                           ) {
    
}

template<class TPMGL(T)> void x10::util::AbstractCollection<TPMGL(T)>::__fieldInitializers_x10_util_AbstractCollection(
  ) {
 
}
template<class TPMGL(T)> void x10::util::AbstractCollection<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::util::AbstractContainer<TPMGL(T)>::_serialize_body(buf);
    
}

template<class TPMGL(T)> void x10::util::AbstractCollection<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::util::AbstractContainer<TPMGL(T)>::_deserialize_body(buf);
    
}

#endif // X10_UTIL_ABSTRACTCOLLECTION_H_IMPLEMENTATION
#endif // __X10_UTIL_ABSTRACTCOLLECTION_H_NODEPS
