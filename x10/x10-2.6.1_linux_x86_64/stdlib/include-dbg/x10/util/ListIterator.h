#ifndef __X10_UTIL_LISTITERATOR_H
#define __X10_UTIL_LISTITERATOR_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_UTIL_COLLECTIONITERATOR_H_NODEPS
#include <x10/util/CollectionIterator.h>
#undef X10_UTIL_COLLECTIONITERATOR_H_NODEPS

namespace x10 { namespace util { 

template<class TPMGL(T)> class ListIterator;
template <> class ListIterator<void>;
template<class TPMGL(T)> class ListIterator   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(void (Iface::*add) (TPMGL(T)), x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_boolean (Iface::*hasNext) (), x10_boolean (Iface::*hasPrevious) (), x10_int (Iface::*hashCode) (), TPMGL(T) (Iface::*next) (), x10_long (Iface::*nextIndex) (), TPMGL(T) (Iface::*previous) (), x10_long (Iface::*previousIndex) (), void (Iface::*remove) (), void (Iface::*set) (TPMGL(T)), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : add(add), equals(equals), hasNext(hasNext), hasPrevious(hasPrevious), hashCode(hashCode), next(next), nextIndex(nextIndex), previous(previous), previousIndex(previousIndex), remove(remove), set(set), toString(toString), typeName(typeName) {}
        void (Iface::*add) (TPMGL(T));
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_boolean (Iface::*hasNext) ();
        x10_boolean (Iface::*hasPrevious) ();
        x10_int (Iface::*hashCode) ();
        TPMGL(T) (Iface::*next) ();
        x10_long (Iface::*nextIndex) ();
        TPMGL(T) (Iface::*previous) ();
        x10_long (Iface::*previousIndex) ();
        void (Iface::*remove) ();
        void (Iface::*set) (TPMGL(T));
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static void add(R* _recv, TPMGL(T) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->add))(arg0);
    }
    template <class R> static void add(R _recv, TPMGL(T) arg0) {
        _recv->add(arg0);
    }
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean hasNext(R* _recv);
    template <class R> static x10_boolean hasNext(R _recv);
    template <class R> static x10_boolean hasPrevious(R* _recv);
    template <class R> static x10_boolean hasPrevious(R _recv);
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static TPMGL(T) next(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->next))();
    }
    template <class R> static TPMGL(T) next(R _recv) {
        return _recv->next();
    }
    template <class R> static x10_long nextIndex(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->nextIndex))();
    }
    template <class R> static x10_long nextIndex(R _recv) {
        return _recv->nextIndex();
    }
    template <class R> static TPMGL(T) previous(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->previous))();
    }
    template <class R> static TPMGL(T) previous(R _recv) {
        return _recv->previous();
    }
    template <class R> static x10_long previousIndex(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->previousIndex))();
    }
    template <class R> static x10_long previousIndex(R _recv) {
        return _recv->previousIndex();
    }
    template <class R> static void remove(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->remove))();
    }
    template <class R> static void remove(R _recv) {
        _recv->remove();
    }
    template <class R> static void set(R* _recv, TPMGL(T) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->set))(arg0);
    }
    template <class R> static void set(R _recv, TPMGL(T) arg0) {
        _recv->set(arg0);
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::ListIterator<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::ListIterator<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::ListIterator<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::util::CollectionIterator<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.ListIterator";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 2, parents, 1, params, variances);
}

template <> class ListIterator<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_LISTITERATOR_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 

#ifndef X10_UTIL_LISTITERATOR_H_NODEPS
#define X10_UTIL_LISTITERATOR_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/util/CollectionIterator.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#ifndef X10_UTIL_LISTITERATOR_H_GENERICS
#define X10_UTIL_LISTITERATOR_H_GENERICS
template<class TPMGL(T)> template <class R> x10_boolean x10::util::ListIterator<TPMGL(T)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::ListIterator<TPMGL(T)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::ListIterator<TPMGL(T)>::hasNext(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->hasNext))();
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::ListIterator<TPMGL(T)>::hasNext(R _recv) {
    return _recv->hasNext();
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::ListIterator<TPMGL(T)>::hasPrevious(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::ListIterator<TPMGL(T)> >(_refRecv->_getITables())->hasPrevious))();
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::ListIterator<TPMGL(T)>::hasPrevious(R _recv) {
    return _recv->hasPrevious();
}
#endif // X10_UTIL_LISTITERATOR_H_GENERICS
#ifndef X10_UTIL_LISTITERATOR_H_IMPLEMENTATION
#define X10_UTIL_LISTITERATOR_H_IMPLEMENTATION
#include <x10/util/ListIterator.h>

#endif // X10_UTIL_LISTITERATOR_H_IMPLEMENTATION
#endif // __X10_UTIL_LISTITERATOR_H_NODEPS
