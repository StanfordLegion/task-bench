#ifndef __X10_UTIL_LIST_H
#define __X10_UTIL_LIST_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_UTIL_COLLECTION_H_NODEPS
#include <x10/util/Collection.h>
#undef X10_UTIL_COLLECTION_H_NODEPS
#define X10_UTIL_INDEXED_H_NODEPS
#include <x10/util/Indexed.h>
#undef X10_UTIL_INDEXED_H_NODEPS
#define X10_LANG_SETTABLE_H_NODEPS
#include <x10/lang/Settable.h>
#undef X10_LANG_SETTABLE_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Comparable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 

namespace x10 { namespace util { 

template<class TPMGL(T)> class List;
template <> class List<void>;
template<class TPMGL(T)> class List   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*add) (TPMGL(T)), x10_boolean (Iface::*addAll) (::x10::util::Container<TPMGL(T)>*), x10_boolean (Iface::*addAllWhere) (::x10::util::Container<TPMGL(T)>*, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>*), void (Iface::*addBefore) (x10_long, TPMGL(T)), void (Iface::*clear) (), ::x10::util::Container<TPMGL(T)>* (Iface::*clone) (), x10_boolean (Iface::*contains) (TPMGL(T)), x10_boolean (Iface::*containsAll) (::x10::util::Container<TPMGL(T)>*), x10_boolean (Iface::*equals) (::x10::lang::Any*), TPMGL(T) (Iface::*getFirst) (), TPMGL(T) (Iface::*getLast) (), x10_int (Iface::*hashCode) (), x10_long (Iface::*_m12__indexOf) (TPMGL(T)), x10_long (Iface::*_m13__indexOf) (x10_long, TPMGL(T)), ::x10::util::List<x10_long>* (Iface::*indices) (), x10_boolean (Iface::*isEmpty) (), ::x10::lang::Iterator<TPMGL(T)>* (Iface::*iterator) (), ::x10::util::ListIterator<TPMGL(T)>* (Iface::*iteratorFrom) (x10_long), x10_long (Iface::*_m18__lastIndexOf) (TPMGL(T)), x10_long (Iface::*_m19__lastIndexOf) (x10_long, TPMGL(T)), TPMGL(T) (Iface::*__apply) (x10_long), TPMGL(T) (Iface::*__set) (x10_long, TPMGL(T)), x10_boolean (Iface::*remove) (TPMGL(T)), x10_boolean (Iface::*removeAll) (::x10::util::Container<TPMGL(T)>*), x10_boolean (Iface::*removeAllWhere) (::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>*), TPMGL(T) (Iface::*removeAt) (x10_long), TPMGL(T) (Iface::*removeFirst) (), TPMGL(T) (Iface::*removeLast) (), x10_boolean (Iface::*retainAll) (::x10::util::Container<TPMGL(T)>*), void (Iface::*reverse) (), x10_long (Iface::*size) (), void (Iface::*_m31__sort) (), void (Iface::*_m32__sort) (::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*), ::x10::util::List<TPMGL(T)>* (Iface::*subList) (x10_long, x10_long), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : add(add), addAll(addAll), addAllWhere(addAllWhere), addBefore(addBefore), clear(clear), clone(clone), contains(contains), containsAll(containsAll), equals(equals), getFirst(getFirst), getLast(getLast), hashCode(hashCode), _m12__indexOf(_m12__indexOf), _m13__indexOf(_m13__indexOf), indices(indices), isEmpty(isEmpty), iterator(iterator), iteratorFrom(iteratorFrom), _m18__lastIndexOf(_m18__lastIndexOf), _m19__lastIndexOf(_m19__lastIndexOf), __apply(__apply), __set(__set), remove(remove), removeAll(removeAll), removeAllWhere(removeAllWhere), removeAt(removeAt), removeFirst(removeFirst), removeLast(removeLast), retainAll(retainAll), reverse(reverse), size(size), _m31__sort(_m31__sort), _m32__sort(_m32__sort), subList(subList), toString(toString), typeName(typeName) {}
        x10_boolean (Iface::*add) (TPMGL(T));
        x10_boolean (Iface::*addAll) (::x10::util::Container<TPMGL(T)>*);
        x10_boolean (Iface::*addAllWhere) (::x10::util::Container<TPMGL(T)>*, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>*);
        void (Iface::*addBefore) (x10_long, TPMGL(T));
        void (Iface::*clear) ();
        ::x10::util::Container<TPMGL(T)>* (Iface::*clone) ();
        x10_boolean (Iface::*contains) (TPMGL(T));
        x10_boolean (Iface::*containsAll) (::x10::util::Container<TPMGL(T)>*);
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        TPMGL(T) (Iface::*getFirst) ();
        TPMGL(T) (Iface::*getLast) ();
        x10_int (Iface::*hashCode) ();
        x10_long (Iface::*_m12__indexOf) (TPMGL(T));
        x10_long (Iface::*_m13__indexOf) (x10_long, TPMGL(T));
        ::x10::util::List<x10_long>* (Iface::*indices) ();
        x10_boolean (Iface::*isEmpty) ();
        ::x10::lang::Iterator<TPMGL(T)>* (Iface::*iterator) ();
        ::x10::util::ListIterator<TPMGL(T)>* (Iface::*iteratorFrom) (x10_long);
        x10_long (Iface::*_m18__lastIndexOf) (TPMGL(T));
        x10_long (Iface::*_m19__lastIndexOf) (x10_long, TPMGL(T));
        TPMGL(T) (Iface::*__apply) (x10_long);
        TPMGL(T) (Iface::*__set) (x10_long, TPMGL(T));
        x10_boolean (Iface::*remove) (TPMGL(T));
        x10_boolean (Iface::*removeAll) (::x10::util::Container<TPMGL(T)>*);
        x10_boolean (Iface::*removeAllWhere) (::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>*);
        TPMGL(T) (Iface::*removeAt) (x10_long);
        TPMGL(T) (Iface::*removeFirst) ();
        TPMGL(T) (Iface::*removeLast) ();
        x10_boolean (Iface::*retainAll) (::x10::util::Container<TPMGL(T)>*);
        void (Iface::*reverse) ();
        x10_long (Iface::*size) ();
        void (Iface::*_m31__sort) ();
        void (Iface::*_m32__sort) (::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*);
        ::x10::util::List<TPMGL(T)>* (Iface::*subList) (x10_long, x10_long);
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static x10_boolean add(R* _recv, TPMGL(T) arg0);
    template <class R> static x10_boolean add(R _recv, TPMGL(T) arg0);
    template <class R> static x10_boolean addAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_boolean addAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_boolean addAllWhere(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg1);
    template <class R> static x10_boolean addAllWhere(R _recv, ::x10::util::Container<TPMGL(T)>* arg0, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg1);
    template <class R> static void addBefore(R* _recv, x10_long arg0, TPMGL(T) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->addBefore))(arg0, arg1);
    }
    template <class R> static void addBefore(R _recv, x10_long arg0, TPMGL(T) arg1) {
        _recv->addBefore(arg0, arg1);
    }
    template <class R> static void clear(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->clear))();
    }
    template <class R> static void clear(R _recv) {
        _recv->clear();
    }
    template <class R> static ::x10::util::Collection<TPMGL(T)>* clone(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return reinterpret_cast< ::x10::util::Collection<TPMGL(T)>*>((_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->clone))());
    }
    template <class R> static ::x10::util::Collection<TPMGL(T)>* clone(R _recv) {
        return _recv->clone();
    }
    template <class R> static x10_boolean contains(R* _recv, TPMGL(T) arg0);
    template <class R> static x10_boolean contains(R _recv, TPMGL(T) arg0);
    template <class R> static x10_boolean containsAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_boolean containsAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static TPMGL(T) getFirst(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->getFirst))();
    }
    template <class R> static TPMGL(T) getFirst(R _recv) {
        return _recv->getFirst();
    }
    template <class R> static TPMGL(T) getLast(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->getLast))();
    }
    template <class R> static TPMGL(T) getLast(R _recv) {
        return _recv->getLast();
    }
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static x10_long _m12__indexOf(R* _recv, TPMGL(T) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->_m12__indexOf))(arg0);
    }
    template <class R> static x10_long _m12__indexOf(R _recv, TPMGL(T) arg0) {
        return _recv->indexOf(arg0);
    }
    template <class R> static x10_long _m13__indexOf(R* _recv, x10_long arg0, TPMGL(T) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->_m13__indexOf))(arg0, arg1);
    }
    template <class R> static x10_long _m13__indexOf(R _recv, x10_long arg0, TPMGL(T) arg1) {
        return _recv->indexOf(arg0, arg1);
    }
    template <class R> static ::x10::util::List<x10_long>* indices(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->indices))();
    }
    template <class R> static ::x10::util::List<x10_long>* indices(R _recv) {
        return _recv->indices();
    }
    template <class R> static x10_boolean isEmpty(R* _recv);
    template <class R> static x10_boolean isEmpty(R _recv);
    template <class R> static ::x10::util::ListIterator<TPMGL(T)>* iterator(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>((_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->iterator))());
    }
    template <class R> static ::x10::util::ListIterator<TPMGL(T)>* iterator(R _recv) {
        return _recv->iterator();
    }
    template <class R> static ::x10::util::ListIterator<TPMGL(T)>* iteratorFrom(R* _recv, x10_long arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->iteratorFrom))(arg0);
    }
    template <class R> static ::x10::util::ListIterator<TPMGL(T)>* iteratorFrom(R _recv, x10_long arg0) {
        return _recv->iteratorFrom(arg0);
    }
    template <class R> static x10_long _m18__lastIndexOf(R* _recv, TPMGL(T) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->_m18__lastIndexOf))(arg0);
    }
    template <class R> static x10_long _m18__lastIndexOf(R _recv, TPMGL(T) arg0) {
        return _recv->lastIndexOf(arg0);
    }
    template <class R> static x10_long _m19__lastIndexOf(R* _recv, x10_long arg0, TPMGL(T) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->_m19__lastIndexOf))(arg0, arg1);
    }
    template <class R> static x10_long _m19__lastIndexOf(R _recv, x10_long arg0, TPMGL(T) arg1) {
        return _recv->lastIndexOf(arg0, arg1);
    }
    template <class R> static TPMGL(T) __apply(R* _recv, x10_long arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->__apply))(arg0);
    }
    template <class R> static TPMGL(T) __apply(R _recv, x10_long arg0) {
        return _recv->__apply(arg0);
    }
    template <class R> static TPMGL(T) __set(R* _recv, x10_long arg0, TPMGL(T) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->__set))(arg0, arg1);
    }
    template <class R> static TPMGL(T) __set(R _recv, x10_long arg0, TPMGL(T) arg1) {
        return _recv->__set(arg0, arg1);
    }
    template <class R> static x10_boolean remove(R* _recv, TPMGL(T) arg0);
    template <class R> static x10_boolean remove(R _recv, TPMGL(T) arg0);
    template <class R> static x10_boolean removeAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_boolean removeAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_boolean removeAllWhere(R* _recv, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg0);
    template <class R> static x10_boolean removeAllWhere(R _recv, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg0);
    template <class R> static TPMGL(T) removeAt(R* _recv, x10_long arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->removeAt))(arg0);
    }
    template <class R> static TPMGL(T) removeAt(R _recv, x10_long arg0) {
        return _recv->removeAt(arg0);
    }
    template <class R> static TPMGL(T) removeFirst(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->removeFirst))();
    }
    template <class R> static TPMGL(T) removeFirst(R _recv) {
        return _recv->removeFirst();
    }
    template <class R> static TPMGL(T) removeLast(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->removeLast))();
    }
    template <class R> static TPMGL(T) removeLast(R _recv) {
        return _recv->removeLast();
    }
    template <class R> static x10_boolean retainAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_boolean retainAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static void reverse(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->reverse))();
    }
    template <class R> static void reverse(R _recv) {
        _recv->reverse();
    }
    template <class R> static x10_long size(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->size))();
    }
    template <class R> static x10_long size(R _recv) {
        return _recv->size();
    }
    template <class R> static void _m31__sort(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->_m31__sort))();
    }
    template <class R> static void _m31__sort(R _recv) {
        _recv->sort();
    }
    template <class R> static void _m32__sort(R* _recv, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->_m32__sort))(arg0);
    }
    template <class R> static void _m32__sort(R _recv, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* arg0) {
        _recv->sort(arg0);
    }
    template <class R> static ::x10::util::List<TPMGL(T)>* subList(R* _recv, x10_long arg0, x10_long arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->subList))(arg0, arg1);
    }
    template <class R> static ::x10::util::List<TPMGL(T)>* subList(R _recv, x10_long arg0, x10_long arg1) {
        return _recv->subList(arg0, arg1);
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::List<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::List<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::List<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[4] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::util::Collection<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::util::Indexed<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Settable<x10_long, TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.List";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 4, parents, 1, params, variances);
}

template <> class List<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_LIST_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class List;
} } 

#ifndef X10_UTIL_LIST_H_NODEPS
#define X10_UTIL_LIST_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/util/Collection.h>
#include <x10/util/Indexed.h>
#include <x10/lang/Settable.h>
#include <x10/lang/Long.h>
#include <x10/util/ListIterator.h>
#include <x10/lang/Comparable.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Int.h>
#ifndef X10_UTIL_LIST_H_GENERICS
#define X10_UTIL_LIST_H_GENERICS
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::add(R* _recv, TPMGL(T) arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->add))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::add(R _recv, TPMGL(T) arg0) {
    return _recv->add(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::addAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->addAll))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::addAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    return _recv->addAll(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::addAllWhere(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg1) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->addAllWhere))(arg0, arg1);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::addAllWhere(R _recv, ::x10::util::Container<TPMGL(T)>* arg0, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg1) {
    return _recv->addAllWhere(arg0, arg1);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::contains(R* _recv, TPMGL(T) arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->contains))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::contains(R _recv, TPMGL(T) arg0) {
    return _recv->contains(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::containsAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->containsAll))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::containsAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    return _recv->containsAll(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::isEmpty(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->isEmpty))();
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::isEmpty(R _recv) {
    return _recv->isEmpty();
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::remove(R* _recv, TPMGL(T) arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->remove))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::remove(R _recv, TPMGL(T) arg0) {
    return _recv->remove(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::removeAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->removeAll))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::removeAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    return _recv->removeAll(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::removeAllWhere(R* _recv, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->removeAllWhere))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::removeAllWhere(R _recv, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg0) {
    return _recv->removeAllWhere(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::retainAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::List<TPMGL(T)> >(_refRecv->_getITables())->retainAll))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::List<TPMGL(T)>::retainAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    return _recv->retainAll(arg0);
}
#endif // X10_UTIL_LIST_H_GENERICS
#ifndef X10_UTIL_LIST_H_IMPLEMENTATION
#define X10_UTIL_LIST_H_IMPLEMENTATION
#include <x10/util/List.h>

#endif // X10_UTIL_LIST_H_IMPLEMENTATION
#endif // __X10_UTIL_LIST_H_NODEPS
