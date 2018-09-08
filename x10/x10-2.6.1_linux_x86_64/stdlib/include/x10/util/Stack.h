#ifndef __X10_UTIL_STACK_H
#define __X10_UTIL_STACK_H

#include <x10rt.h>


#define X10_UTIL_ARRAYLIST_H_NODEPS
#include <x10/util/ArrayList.h>
#undef X10_UTIL_ARRAYLIST_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

template<class TPMGL(T)> class Stack;
template <> class Stack<void>;
template<class TPMGL(T)> class Stack : public ::x10::util::ArrayList<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[9];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::util::Container<TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::Stack<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> > _itable_2;
    
    static typename ::x10::util::Collection<TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> > _itable_3;
    
    static typename ::x10::util::List<TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> > _itable_4;
    
    static typename ::x10::util::Indexed<TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> > _itable_5;
    
    static typename ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> > _itable_6;
    
    static typename ::x10::lang::Settable<x10_long, TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> > _itable_7;
    
    void _constructor();
    
    static ::x10::util::Stack<TPMGL(T)>* _make();
    
    virtual x10_boolean push(TPMGL(T) v);
    virtual TPMGL(T) pop();
    virtual ::x10::lang::Rail< TPMGL(T) >* pop(x10_long k);
    virtual TPMGL(T) peek();
    virtual x10_long search(TPMGL(T) v);
    virtual ::x10::util::Stack<TPMGL(T)>* x10__util__Stack____this__x10__util__Stack(
      );
    virtual void __fieldInitializers_x10_util_Stack();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::Stack<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::Stack<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::Stack<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::util::ArrayList<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.Stack";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class Stack<void> : public ::x10::util::ArrayList<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_STACK_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class Stack;
} } 

#ifndef X10_UTIL_STACK_H_NODEPS
#define X10_UTIL_STACK_H_NODEPS
#include <x10/util/ArrayList.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_STACK_H_GENERICS
#define X10_UTIL_STACK_H_GENERICS
#endif // X10_UTIL_STACK_H_GENERICS
#ifndef X10_UTIL_STACK_H_IMPLEMENTATION
#define X10_UTIL_STACK_H_IMPLEMENTATION
#include <x10/util/Stack.h>

template<class TPMGL(T)> typename ::x10::util::Container<TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> >  x10::util::Stack<TPMGL(T)>::_itable_0(&::x10::util::ArrayList<TPMGL(T)>::clone, &::x10::util::ArrayList<TPMGL(T)>::contains, &::x10::util::AbstractContainer<TPMGL(T)>::containsAll, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::util::ArrayList<TPMGL(T)>::isEmpty, &::x10::util::ArrayList<TPMGL(T)>::iterator, &::x10::util::ArrayList<TPMGL(T)>::size, &::x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::util::Stack<TPMGL(T)> >  x10::util::Stack<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> >  x10::util::Stack<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::util::ArrayList<TPMGL(T)>::iterator, &::x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::util::Collection<TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> >  x10::util::Stack<TPMGL(T)>::_itable_3(&::x10::util::ArrayList<TPMGL(T)>::add, &::x10::util::AbstractCollection<TPMGL(T)>::addAll, &::x10::util::AbstractCollection<TPMGL(T)>::addAllWhere, &::x10::util::ArrayList<TPMGL(T)>::clear, &::x10::util::ArrayList<TPMGL(T)>::clone, &::x10::util::ArrayList<TPMGL(T)>::contains, &::x10::util::AbstractContainer<TPMGL(T)>::containsAll, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::util::ArrayList<TPMGL(T)>::isEmpty, &::x10::util::ArrayList<TPMGL(T)>::iterator, &::x10::util::ArrayList<TPMGL(T)>::remove, &::x10::util::AbstractCollection<TPMGL(T)>::removeAll, &::x10::util::AbstractCollection<TPMGL(T)>::removeAllWhere, &::x10::util::AbstractCollection<TPMGL(T)>::retainAll, &::x10::util::ArrayList<TPMGL(T)>::size, &::x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::util::List<TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> >  x10::util::Stack<TPMGL(T)>::_itable_4(&::x10::util::ArrayList<TPMGL(T)>::add, &::x10::util::AbstractCollection<TPMGL(T)>::addAll, &::x10::util::AbstractCollection<TPMGL(T)>::addAllWhere, &::x10::util::ArrayList<TPMGL(T)>::addBefore, &::x10::util::ArrayList<TPMGL(T)>::clear, &::x10::util::ArrayList<TPMGL(T)>::clone, &::x10::util::ArrayList<TPMGL(T)>::contains, &::x10::util::AbstractContainer<TPMGL(T)>::containsAll, &::x10::lang::X10Class::equals, &::x10::util::ArrayList<TPMGL(T)>::getFirst, &::x10::util::ArrayList<TPMGL(T)>::getLast, &::x10::lang::X10Class::hashCode, &::x10::util::ArrayList<TPMGL(T)>::indexOf, &::x10::util::ArrayList<TPMGL(T)>::indexOf, &::x10::util::ArrayList<TPMGL(T)>::indices, &::x10::util::ArrayList<TPMGL(T)>::isEmpty, &::x10::util::ArrayList<TPMGL(T)>::iterator, &::x10::util::ArrayList<TPMGL(T)>::iteratorFrom, &::x10::util::ArrayList<TPMGL(T)>::lastIndexOf, &::x10::util::ArrayList<TPMGL(T)>::lastIndexOf, &::x10::util::ArrayList<TPMGL(T)>::__apply, &::x10::util::ArrayList<TPMGL(T)>::__set, &::x10::util::ArrayList<TPMGL(T)>::remove, &::x10::util::AbstractCollection<TPMGL(T)>::removeAll, &::x10::util::AbstractCollection<TPMGL(T)>::removeAllWhere, &::x10::util::ArrayList<TPMGL(T)>::removeAt, &::x10::util::ArrayList<TPMGL(T)>::removeFirst, &::x10::util::ArrayList<TPMGL(T)>::removeLast, &::x10::util::AbstractCollection<TPMGL(T)>::retainAll, &::x10::util::ArrayList<TPMGL(T)>::reverse, &::x10::util::ArrayList<TPMGL(T)>::size, &x10::util::Stack<TPMGL(T)>::sort, &::x10::util::ArrayList<TPMGL(T)>::sort, &::x10::util::ArrayList<TPMGL(T)>::subList, &::x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::util::Indexed<TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> >  x10::util::Stack<TPMGL(T)>::_itable_5(&::x10::util::ArrayList<TPMGL(T)>::clone, &::x10::util::ArrayList<TPMGL(T)>::contains, &::x10::util::AbstractContainer<TPMGL(T)>::containsAll, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::util::ArrayList<TPMGL(T)>::isEmpty, &::x10::util::ArrayList<TPMGL(T)>::iterator, &::x10::util::ArrayList<TPMGL(T)>::__apply, &::x10::util::ArrayList<TPMGL(T)>::size, &::x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> >  x10::util::Stack<TPMGL(T)>::_itable_6(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::util::ArrayList<TPMGL(T)>::__apply, &::x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Settable<x10_long, TPMGL(T)>::template itable< ::x10::util::Stack<TPMGL(T)> >  x10::util::Stack<TPMGL(T)>::_itable_7(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::util::ArrayList<TPMGL(T)>::__set, &::x10::util::ArrayList<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::util::Stack<TPMGL(T)>::_itables[9] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::Container<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable<TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::Collection<TPMGL(T)> >, &_itable_3), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::List<TPMGL(T)> >, &_itable_4), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::Indexed<TPMGL(T)> >, &_itable_5), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >, &_itable_6), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Settable<x10_long, TPMGL(T)> >, &_itable_7), ::x10aux::itable_entry(NULL, (void*)"::x10::util::Stack<TPMGL(T)>")};

//#line 15 "x10/util/Stack.x10"
template<class TPMGL(T)> void x10::util::Stack<TPMGL(T)>::_constructor() {
    (this)->::x10::util::ArrayList<TPMGL(T)>::_constructor();
    
}
template<class TPMGL(T)> ::x10::util::Stack<TPMGL(T)>* x10::util::Stack<TPMGL(T)>::_make(
                           ) {
    ::x10::util::Stack<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::Stack<TPMGL(T)> >()) ::x10::util::Stack<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 18 "x10/util/Stack.x10"
/** Add the element to the top of the stack. */
template<class TPMGL(T)> x10_boolean x10::util::Stack<TPMGL(T)>::push(
  TPMGL(T) v) {
    return this->add(v);
    
}

//#line 21 "x10/util/Stack.x10"
/** Remove and return the top element of the stack. */
template<class TPMGL(T)> TPMGL(T) x10::util::Stack<TPMGL(T)>::pop(
  ) {
    return this->removeLast();
    
}

//#line 23 "x10/util/Stack.x10"
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::Stack<TPMGL(T)>::pop(
  x10_long k) {
    
    //#line 24 "x10/util/Stack.x10"
    x10_long n = this->size();
    
    //#line 25 "x10/util/Stack.x10"
    if (((n) < (k))) {
        
        //#line 26 "x10/util/Stack.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< TPMGL(T) >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
    //#line 27 "x10/util/Stack.x10"
    return this->moveSectionToRail(((n) - (k)), ((n) - (((x10_long)1ll))));
    
}

//#line 31 "x10/util/Stack.x10"
/** Return, but do not remove, the top element of the stack. */
template<class TPMGL(T)> TPMGL(T) x10::util::Stack<TPMGL(T)>::peek(
  ) {
    return this->getLast();
    
}

//#line 40 "x10/util/Stack.x10"
/**
     * Returns the 1-based position where an object is on this stack.
     * If the v is in the stack, returns the distance from the top of
     * the stack of the occurrence nearest the top of the stack.
     * The topmost item on the stack is considered to be at distance 1.
     * The equals  method is used to compare o to the items in this stack. 
     */
template<class TPMGL(T)> x10_long x10::util::Stack<TPMGL(T)>::search(
  TPMGL(T) v) {
    
    //#line 41 "x10/util/Stack.x10"
    x10_long i = this->lastIndexOf(v);
    
    //#line 42 "x10/util/Stack.x10"
    if (((i) >= (((x10_long)0ll)))) {
        
        //#line 43 "x10/util/Stack.x10"
        return ((this->size()) - (i));
        
    } else {
        
        //#line 45 "x10/util/Stack.x10"
        return ((x10_long)-1ll);
        
    }
    
}

//#line 14 "x10/util/Stack.x10"
template<class TPMGL(T)> ::x10::util::Stack<TPMGL(T)>* x10::util::Stack<TPMGL(T)>::x10__util__Stack____this__x10__util__Stack(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::Stack<TPMGL(T)>::__fieldInitializers_x10_util_Stack(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::Stack<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::Stack<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::util::Stack<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::util::ArrayList<TPMGL(T)>::_serialize_body(buf);
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::util::Stack<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::Stack<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::Stack<TPMGL(T)> >()) ::x10::util::Stack<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::util::Stack<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::util::ArrayList<TPMGL(T)>::_deserialize_body(buf);
    
}

#endif // X10_UTIL_STACK_H_IMPLEMENTATION
#endif // __X10_UTIL_STACK_H_NODEPS
