#ifndef __X10_UTIL_COLLECTION_H
#define __X10_UTIL_COLLECTION_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_UTIL_CONTAINER_H_NODEPS
#include <x10/util/Container.h>
#undef X10_UTIL_CONTAINER_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 

namespace x10 { namespace util { 

template<class TPMGL(T)> class Collection;
template <> class Collection<void>;
template<class TPMGL(T)> class Collection   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*add) (TPMGL(T)), x10_boolean (Iface::*addAll) (::x10::util::Container<TPMGL(T)>*), x10_boolean (Iface::*addAllWhere) (::x10::util::Container<TPMGL(T)>*, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>*), void (Iface::*clear) (), ::x10::util::Container<TPMGL(T)>* (Iface::*clone) (), x10_boolean (Iface::*contains) (TPMGL(T)), x10_boolean (Iface::*containsAll) (::x10::util::Container<TPMGL(T)>*), x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), x10_boolean (Iface::*isEmpty) (), ::x10::lang::Iterator<TPMGL(T)>* (Iface::*iterator) (), x10_boolean (Iface::*remove) (TPMGL(T)), x10_boolean (Iface::*removeAll) (::x10::util::Container<TPMGL(T)>*), x10_boolean (Iface::*removeAllWhere) (::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>*), x10_boolean (Iface::*retainAll) (::x10::util::Container<TPMGL(T)>*), x10_long (Iface::*size) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : add(add), addAll(addAll), addAllWhere(addAllWhere), clear(clear), clone(clone), contains(contains), containsAll(containsAll), equals(equals), hashCode(hashCode), isEmpty(isEmpty), iterator(iterator), remove(remove), removeAll(removeAll), removeAllWhere(removeAllWhere), retainAll(retainAll), size(size), toString(toString), typeName(typeName) {}
        x10_boolean (Iface::*add) (TPMGL(T));
        x10_boolean (Iface::*addAll) (::x10::util::Container<TPMGL(T)>*);
        x10_boolean (Iface::*addAllWhere) (::x10::util::Container<TPMGL(T)>*, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>*);
        void (Iface::*clear) ();
        ::x10::util::Container<TPMGL(T)>* (Iface::*clone) ();
        x10_boolean (Iface::*contains) (TPMGL(T));
        x10_boolean (Iface::*containsAll) (::x10::util::Container<TPMGL(T)>*);
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        x10_boolean (Iface::*isEmpty) ();
        ::x10::lang::Iterator<TPMGL(T)>* (Iface::*iterator) ();
        x10_boolean (Iface::*remove) (TPMGL(T));
        x10_boolean (Iface::*removeAll) (::x10::util::Container<TPMGL(T)>*);
        x10_boolean (Iface::*removeAllWhere) (::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>*);
        x10_boolean (Iface::*retainAll) (::x10::util::Container<TPMGL(T)>*);
        x10_long (Iface::*size) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static x10_boolean add(R* _recv, TPMGL(T) arg0);
    template <class R> static x10_boolean add(R _recv, TPMGL(T) arg0);
    template <class R> static x10_boolean addAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_boolean addAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_boolean addAllWhere(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg1);
    template <class R> static x10_boolean addAllWhere(R _recv, ::x10::util::Container<TPMGL(T)>* arg0, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg1);
    template <class R> static void clear(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->clear))();
    }
    template <class R> static void clear(R _recv) {
        _recv->clear();
    }
    template <class R> static ::x10::util::Collection<TPMGL(T)>* clone(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return reinterpret_cast< ::x10::util::Collection<TPMGL(T)>*>((_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->clone))());
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
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static x10_boolean isEmpty(R* _recv);
    template <class R> static x10_boolean isEmpty(R _recv);
    template <class R> static ::x10::lang::Iterator<TPMGL(T)>* iterator(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->iterator))();
    }
    template <class R> static ::x10::lang::Iterator<TPMGL(T)>* iterator(R _recv) {
        return _recv->iterator();
    }
    template <class R> static x10_boolean remove(R* _recv, TPMGL(T) arg0);
    template <class R> static x10_boolean remove(R _recv, TPMGL(T) arg0);
    template <class R> static x10_boolean removeAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_boolean removeAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_boolean removeAllWhere(R* _recv, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg0);
    template <class R> static x10_boolean removeAllWhere(R _recv, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg0);
    template <class R> static x10_boolean retainAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_boolean retainAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0);
    template <class R> static x10_long size(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->size))();
    }
    template <class R> static x10_long size(R _recv) {
        return _recv->size();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::Collection<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::Collection<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::Collection<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::util::Container<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.Collection";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 2, parents, 1, params, variances);
}

template <> class Collection<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_COLLECTION_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class Collection;
} } 

#ifndef X10_UTIL_COLLECTION_H_NODEPS
#define X10_UTIL_COLLECTION_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/util/Container.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Fun_0_1.h>
#ifndef X10_UTIL_COLLECTION_H_GENERICS
#define X10_UTIL_COLLECTION_H_GENERICS
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::add(R* _recv, TPMGL(T) arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->add))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::add(R _recv, TPMGL(T) arg0) {
    return _recv->add(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::addAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->addAll))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::addAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    return _recv->addAll(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::addAllWhere(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg1) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->addAllWhere))(arg0, arg1);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::addAllWhere(R _recv, ::x10::util::Container<TPMGL(T)>* arg0, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg1) {
    return _recv->addAllWhere(arg0, arg1);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::contains(R* _recv, TPMGL(T) arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->contains))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::contains(R _recv, TPMGL(T) arg0) {
    return _recv->contains(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::containsAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->containsAll))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::containsAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    return _recv->containsAll(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::isEmpty(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->isEmpty))();
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::isEmpty(R _recv) {
    return _recv->isEmpty();
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::remove(R* _recv, TPMGL(T) arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->remove))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::remove(R _recv, TPMGL(T) arg0) {
    return _recv->remove(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::removeAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->removeAll))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::removeAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    return _recv->removeAll(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::removeAllWhere(R* _recv, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->removeAllWhere))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::removeAllWhere(R _recv, ::x10::lang::Fun_0_1<TPMGL(T), x10_boolean>* arg0) {
    return _recv->removeAllWhere(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::retainAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Collection<TPMGL(T)> >(_refRecv->_getITables())->retainAll))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Collection<TPMGL(T)>::retainAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    return _recv->retainAll(arg0);
}
#endif // X10_UTIL_COLLECTION_H_GENERICS
#ifndef X10_UTIL_COLLECTION_H_IMPLEMENTATION
#define X10_UTIL_COLLECTION_H_IMPLEMENTATION
#include <x10/util/Collection.h>

#endif // X10_UTIL_COLLECTION_H_IMPLEMENTATION
#endif // __X10_UTIL_COLLECTION_H_NODEPS
