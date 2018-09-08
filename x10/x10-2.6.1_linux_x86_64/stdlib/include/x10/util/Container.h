#ifndef __X10_UTIL_CONTAINER_H
#define __X10_UTIL_CONTAINER_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS

namespace x10 { namespace util { 

template<class TPMGL(T)> class Container;
template <> class Container<void>;
template<class TPMGL(T)> class Container   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(::x10::util::Container<TPMGL(T)>* (Iface::*clone) (), x10_boolean (Iface::*contains) (TPMGL(T)), x10_boolean (Iface::*containsAll) (::x10::util::Container<TPMGL(T)>*), x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), x10_boolean (Iface::*isEmpty) (), ::x10::lang::Iterator<TPMGL(T)>* (Iface::*iterator) (), x10_long (Iface::*size) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : clone(clone), contains(contains), containsAll(containsAll), equals(equals), hashCode(hashCode), isEmpty(isEmpty), iterator(iterator), size(size), toString(toString), typeName(typeName) {}
        ::x10::util::Container<TPMGL(T)>* (Iface::*clone) ();
        x10_boolean (Iface::*contains) (TPMGL(T));
        x10_boolean (Iface::*containsAll) (::x10::util::Container<TPMGL(T)>*);
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        x10_boolean (Iface::*isEmpty) ();
        ::x10::lang::Iterator<TPMGL(T)>* (Iface::*iterator) ();
        x10_long (Iface::*size) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static ::x10::util::Container<TPMGL(T)>* clone(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Container<TPMGL(T)> >(_refRecv->_getITables())->clone))();
    }
    template <class R> static ::x10::util::Container<TPMGL(T)>* clone(R _recv) {
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
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Container<TPMGL(T)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static x10_boolean isEmpty(R* _recv);
    template <class R> static x10_boolean isEmpty(R _recv);
    template <class R> static ::x10::lang::Iterator<TPMGL(T)>* iterator(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Container<TPMGL(T)> >(_refRecv->_getITables())->iterator))();
    }
    template <class R> static ::x10::lang::Iterator<TPMGL(T)>* iterator(R _recv) {
        return _recv->iterator();
    }
    template <class R> static x10_long size(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Container<TPMGL(T)> >(_refRecv->_getITables())->size))();
    }
    template <class R> static x10_long size(R _recv) {
        return _recv->size();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Container<TPMGL(T)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Container<TPMGL(T)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::Container<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::Container<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::Container<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::lang::Iterable<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.Container";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 2, parents, 1, params, variances);
}

template <> class Container<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_CONTAINER_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class Container;
} } 

#ifndef X10_UTIL_CONTAINER_H_NODEPS
#define X10_UTIL_CONTAINER_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#ifndef X10_UTIL_CONTAINER_H_GENERICS
#define X10_UTIL_CONTAINER_H_GENERICS
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Container<TPMGL(T)>::contains(R* _recv, TPMGL(T) arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Container<TPMGL(T)> >(_refRecv->_getITables())->contains))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Container<TPMGL(T)>::contains(R _recv, TPMGL(T) arg0) {
    return _recv->contains(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Container<TPMGL(T)>::containsAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Container<TPMGL(T)> >(_refRecv->_getITables())->containsAll))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Container<TPMGL(T)>::containsAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    return _recv->containsAll(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Container<TPMGL(T)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Container<TPMGL(T)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Container<TPMGL(T)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Container<TPMGL(T)>::isEmpty(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Container<TPMGL(T)> >(_refRecv->_getITables())->isEmpty))();
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Container<TPMGL(T)>::isEmpty(R _recv) {
    return _recv->isEmpty();
}
#endif // X10_UTIL_CONTAINER_H_GENERICS
#ifndef X10_UTIL_CONTAINER_H_IMPLEMENTATION
#define X10_UTIL_CONTAINER_H_IMPLEMENTATION
#include <x10/util/Container.h>

#endif // X10_UTIL_CONTAINER_H_IMPLEMENTATION
#endif // __X10_UTIL_CONTAINER_H_NODEPS
