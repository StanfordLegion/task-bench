#ifndef __X10_UTIL_MAP_H
#define __X10_UTIL_MAP_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 

namespace x10 { namespace util { 

template<class TPMGL(K), class TPMGL(V)> class Map;
template <> class Map<void, void>;
template<class TPMGL(K), class TPMGL(V)> class Map   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(void (Iface::*clear) (), x10_boolean (Iface::*containsKey) (TPMGL(K)), x10_boolean (Iface::*_kwd__delete) (TPMGL(K)), ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>* (Iface::*entries) (), x10_boolean (Iface::*equals) (::x10::lang::Any*), TPMGL(V) (Iface::*get) (TPMGL(K)), TPMGL(V) (Iface::*getOrElse) (TPMGL(K), TPMGL(V)), TPMGL(V) (Iface::*getOrThrow) (TPMGL(K)), x10_int (Iface::*hashCode) (), ::x10::util::Set<TPMGL(K)>* (Iface::*keySet) (), TPMGL(V) (Iface::*__apply) (TPMGL(K)), TPMGL(V) (Iface::*__set) (TPMGL(K), TPMGL(V)), TPMGL(V) (Iface::*put) (TPMGL(K), TPMGL(V)), TPMGL(V) (Iface::*remove) (TPMGL(K)), x10_long (Iface::*size) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : clear(clear), containsKey(containsKey), _kwd__delete(_kwd__delete), entries(entries), equals(equals), get(get), getOrElse(getOrElse), getOrThrow(getOrThrow), hashCode(hashCode), keySet(keySet), __apply(__apply), __set(__set), put(put), remove(remove), size(size), toString(toString), typeName(typeName) {}
        void (Iface::*clear) ();
        x10_boolean (Iface::*containsKey) (TPMGL(K));
        x10_boolean (Iface::*_kwd__delete) (TPMGL(K));
        ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>* (Iface::*entries) ();
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        TPMGL(V) (Iface::*get) (TPMGL(K));
        TPMGL(V) (Iface::*getOrElse) (TPMGL(K), TPMGL(V));
        TPMGL(V) (Iface::*getOrThrow) (TPMGL(K));
        x10_int (Iface::*hashCode) ();
        ::x10::util::Set<TPMGL(K)>* (Iface::*keySet) ();
        TPMGL(V) (Iface::*__apply) (TPMGL(K));
        TPMGL(V) (Iface::*__set) (TPMGL(K), TPMGL(V));
        TPMGL(V) (Iface::*put) (TPMGL(K), TPMGL(V));
        TPMGL(V) (Iface::*remove) (TPMGL(K));
        x10_long (Iface::*size) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static void clear(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->clear))();
    }
    template <class R> static void clear(R _recv) {
        _recv->clear();
    }
    template <class R> static x10_boolean containsKey(R* _recv, TPMGL(K) arg0);
    template <class R> static x10_boolean containsKey(R _recv, TPMGL(K) arg0);
    template <class R> static x10_boolean _kwd__delete(R* _recv, TPMGL(K) arg0);
    template <class R> static x10_boolean _kwd__delete(R _recv, TPMGL(K) arg0);
    template <class R> static ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>* entries(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->entries))();
    }
    template <class R> static ::x10::util::Set< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*>* entries(R _recv) {
        return _recv->entries();
    }
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static TPMGL(V) get(R* _recv, TPMGL(K) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->get))(arg0);
    }
    template <class R> static TPMGL(V) get(R _recv, TPMGL(K) arg0) {
        return _recv->get(arg0);
    }
    template <class R> static TPMGL(V) getOrElse(R* _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->getOrElse))(arg0, arg1);
    }
    template <class R> static TPMGL(V) getOrElse(R _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        return _recv->getOrElse(arg0, arg1);
    }
    template <class R> static TPMGL(V) getOrThrow(R* _recv, TPMGL(K) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->getOrThrow))(arg0);
    }
    template <class R> static TPMGL(V) getOrThrow(R _recv, TPMGL(K) arg0) {
        return _recv->getOrThrow(arg0);
    }
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static ::x10::util::Set<TPMGL(K)>* keySet(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->keySet))();
    }
    template <class R> static ::x10::util::Set<TPMGL(K)>* keySet(R _recv) {
        return _recv->keySet();
    }
    template <class R> static TPMGL(V) __apply(R* _recv, TPMGL(K) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->__apply))(arg0);
    }
    template <class R> static TPMGL(V) __apply(R _recv, TPMGL(K) arg0) {
        return _recv->__apply(arg0);
    }
    template <class R> static TPMGL(V) __set(R* _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->__set))(arg0, arg1);
    }
    template <class R> static TPMGL(V) __set(R _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        return _recv->__set(arg0, arg1);
    }
    template <class R> static TPMGL(V) put(R* _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->put))(arg0, arg1);
    }
    template <class R> static TPMGL(V) put(R _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        return _recv->put(arg0, arg1);
    }
    template <class R> static TPMGL(V) remove(R* _recv, TPMGL(K) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->remove))(arg0);
    }
    template <class R> static TPMGL(V) remove(R _recv, TPMGL(K) arg0) {
        return _recv->remove(arg0);
    }
    template <class R> static x10_long size(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->size))();
    }
    template <class R> static x10_long size(R _recv) {
        return _recv->size();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};

template<class TPMGL(K), class TPMGL(V)> ::x10aux::RuntimeType x10::util::Map<TPMGL(K), TPMGL(V)>::rtt;
template<class TPMGL(K), class TPMGL(V)> void x10::util::Map<TPMGL(K), TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::Map<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(K)>(), ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.Map";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 1, parents, 2, params, variances);
}

template <> class Map<void, void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_MAP_H

namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class Map;
} } 

#ifndef X10_UTIL_MAP_H_NODEPS
#define X10_UTIL_MAP_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Set.h>
#include <x10/util/Map__Entry.h>
#include <x10/lang/Long.h>
#ifndef X10_UTIL_MAP_H_GENERICS
#define X10_UTIL_MAP_H_GENERICS
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::Map<TPMGL(K), TPMGL(V)>::containsKey(R* _recv, TPMGL(K) arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->containsKey))(arg0);
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::Map<TPMGL(K), TPMGL(V)>::containsKey(R _recv, TPMGL(K) arg0) {
    return _recv->containsKey(arg0);
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::Map<TPMGL(K), TPMGL(V)>::_kwd__delete(R* _recv, TPMGL(K) arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->_kwd__delete))(arg0);
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::Map<TPMGL(K), TPMGL(V)>::_kwd__delete(R _recv, TPMGL(K) arg0) {
    return _recv->_kwd__delete(arg0);
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::Map<TPMGL(K), TPMGL(V)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Map<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::Map<TPMGL(K), TPMGL(V)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
#endif // X10_UTIL_MAP_H_GENERICS
#ifndef X10_UTIL_MAP_H_IMPLEMENTATION
#define X10_UTIL_MAP_H_IMPLEMENTATION
#include <x10/util/Map.h>

#endif // X10_UTIL_MAP_H_IMPLEMENTATION
#endif // __X10_UTIL_MAP_H_NODEPS
