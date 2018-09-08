#ifndef __X10_UTIL_INDEXED_H
#define __X10_UTIL_INDEXED_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_UTIL_CONTAINER_H_NODEPS
#include <x10/util/Container.h>
#undef X10_UTIL_CONTAINER_H_NODEPS
#define X10_LANG_FUN_0_1_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#undef X10_LANG_FUN_0_1_H_NODEPS

namespace x10 { namespace util { 

template<class TPMGL(T)> class Indexed;
template <> class Indexed<void>;
template<class TPMGL(T)> class Indexed   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(::x10::util::Container<TPMGL(T)>* (Iface::*clone) (), x10_boolean (Iface::*contains) (TPMGL(T)), x10_boolean (Iface::*containsAll) (::x10::util::Container<TPMGL(T)>*), x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), x10_boolean (Iface::*isEmpty) (), ::x10::lang::Iterator<TPMGL(T)>* (Iface::*iterator) (), TPMGL(T) (Iface::*__apply) (x10_long), x10_long (Iface::*size) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : clone(clone), contains(contains), containsAll(containsAll), equals(equals), hashCode(hashCode), isEmpty(isEmpty), iterator(iterator), __apply(__apply), size(size), toString(toString), typeName(typeName) {}
        ::x10::util::Container<TPMGL(T)>* (Iface::*clone) ();
        x10_boolean (Iface::*contains) (TPMGL(T));
        x10_boolean (Iface::*containsAll) (::x10::util::Container<TPMGL(T)>*);
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        x10_boolean (Iface::*isEmpty) ();
        ::x10::lang::Iterator<TPMGL(T)>* (Iface::*iterator) ();
        TPMGL(T) (Iface::*__apply) (x10_long);
        x10_long (Iface::*size) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static ::x10::util::Container<TPMGL(T)>* clone(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Indexed<TPMGL(T)> >(_refRecv->_getITables())->clone))();
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
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Indexed<TPMGL(T)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static x10_boolean isEmpty(R* _recv);
    template <class R> static x10_boolean isEmpty(R _recv);
    template <class R> static ::x10::lang::Iterator<TPMGL(T)>* iterator(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Indexed<TPMGL(T)> >(_refRecv->_getITables())->iterator))();
    }
    template <class R> static ::x10::lang::Iterator<TPMGL(T)>* iterator(R _recv) {
        return _recv->iterator();
    }
    template <class R> static TPMGL(T) __apply(R* _recv, x10_long arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Indexed<TPMGL(T)> >(_refRecv->_getITables())->__apply))(arg0);
    }
    template <class R> static TPMGL(T) __apply(R _recv, x10_long arg0) {
        return _recv->__apply(arg0);
    }
    template <class R> static x10_long size(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Indexed<TPMGL(T)> >(_refRecv->_getITables())->size))();
    }
    template <class R> static x10_long size(R _recv) {
        return _recv->size();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Indexed<TPMGL(T)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Indexed<TPMGL(T)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::Indexed<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::Indexed<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::Indexed<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[3] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::util::Container<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.Indexed";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 3, parents, 1, params, variances);
}

template <> class Indexed<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_INDEXED_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class Indexed;
} } 

#ifndef X10_UTIL_INDEXED_H_NODEPS
#define X10_UTIL_INDEXED_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/util/Container.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Long.h>
#ifndef X10_UTIL_INDEXED_H_GENERICS
#define X10_UTIL_INDEXED_H_GENERICS
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Indexed<TPMGL(T)>::contains(R* _recv, TPMGL(T) arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Indexed<TPMGL(T)> >(_refRecv->_getITables())->contains))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Indexed<TPMGL(T)>::contains(R _recv, TPMGL(T) arg0) {
    return _recv->contains(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Indexed<TPMGL(T)>::containsAll(R* _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Indexed<TPMGL(T)> >(_refRecv->_getITables())->containsAll))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Indexed<TPMGL(T)>::containsAll(R _recv, ::x10::util::Container<TPMGL(T)>* arg0) {
    return _recv->containsAll(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Indexed<TPMGL(T)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Indexed<TPMGL(T)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Indexed<TPMGL(T)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Indexed<TPMGL(T)>::isEmpty(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Indexed<TPMGL(T)> >(_refRecv->_getITables())->isEmpty))();
}
template<class TPMGL(T)> template <class R> x10_boolean x10::util::Indexed<TPMGL(T)>::isEmpty(R _recv) {
    return _recv->isEmpty();
}
#endif // X10_UTIL_INDEXED_H_GENERICS
#ifndef X10_UTIL_INDEXED_H_IMPLEMENTATION
#define X10_UTIL_INDEXED_H_IMPLEMENTATION
#include <x10/util/Indexed.h>

#endif // X10_UTIL_INDEXED_H_IMPLEMENTATION
#endif // __X10_UTIL_INDEXED_H_NODEPS
