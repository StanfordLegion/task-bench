#ifndef __X10_UTIL_RESILIENT_RESILIENTBASEMAP_H
#define __X10_UTIL_RESILIENT_RESILIENTBASEMAP_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Collection;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 

namespace x10 { namespace util { namespace resilient { 

template<class TPMGL(K), class TPMGL(V)> class ResilientBaseMap;
template <> class ResilientBaseMap<void, void>;
template<class TPMGL(K), class TPMGL(V)> class ResilientBaseMap   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*containsKey) (TPMGL(K)), void (Iface::*deleteVoid) (TPMGL(K)), x10_boolean (Iface::*equals) (::x10::lang::Any*), TPMGL(V) (Iface::*get) (TPMGL(K)), x10_int (Iface::*hashCode) (), x10_boolean (Iface::*isEmpty) (), ::x10::util::Set<TPMGL(K)>* (Iface::*_m6__keySet) (), ::x10::util::Set<TPMGL(K)>* (Iface::*_m7__keySet) (::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>*), TPMGL(V) (Iface::*__apply) (TPMGL(K)), TPMGL(V) (Iface::*__set) (TPMGL(K), TPMGL(V)), TPMGL(V) (Iface::*put) (TPMGL(K), TPMGL(V)), TPMGL(V) (Iface::*putIfAbsent) (TPMGL(K), TPMGL(V)), TPMGL(V) (Iface::*_m12__remove) (TPMGL(K)), x10_boolean (Iface::*_m13__remove) (TPMGL(K), TPMGL(V)), TPMGL(V) (Iface::*_m14__replace) (TPMGL(K), TPMGL(V)), x10_boolean (Iface::*_m15__replace) (TPMGL(K), TPMGL(V), TPMGL(V)), void (Iface::*set) (TPMGL(K), TPMGL(V)), x10_long (Iface::*size) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) (), ::x10::util::Collection<TPMGL(V)>* (Iface::*_m20__values) (), ::x10::util::Collection<TPMGL(V)>* (Iface::*_m21__values) (::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>*)) : containsKey(containsKey), deleteVoid(deleteVoid), equals(equals), get(get), hashCode(hashCode), isEmpty(isEmpty), _m6__keySet(_m6__keySet), _m7__keySet(_m7__keySet), __apply(__apply), __set(__set), put(put), putIfAbsent(putIfAbsent), _m12__remove(_m12__remove), _m13__remove(_m13__remove), _m14__replace(_m14__replace), _m15__replace(_m15__replace), set(set), size(size), toString(toString), typeName(typeName), _m20__values(_m20__values), _m21__values(_m21__values) {}
        x10_boolean (Iface::*containsKey) (TPMGL(K));
        void (Iface::*deleteVoid) (TPMGL(K));
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        TPMGL(V) (Iface::*get) (TPMGL(K));
        x10_int (Iface::*hashCode) ();
        x10_boolean (Iface::*isEmpty) ();
        ::x10::util::Set<TPMGL(K)>* (Iface::*_m6__keySet) ();
        ::x10::util::Set<TPMGL(K)>* (Iface::*_m7__keySet) (::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>*);
        TPMGL(V) (Iface::*__apply) (TPMGL(K));
        TPMGL(V) (Iface::*__set) (TPMGL(K), TPMGL(V));
        TPMGL(V) (Iface::*put) (TPMGL(K), TPMGL(V));
        TPMGL(V) (Iface::*putIfAbsent) (TPMGL(K), TPMGL(V));
        TPMGL(V) (Iface::*_m12__remove) (TPMGL(K));
        x10_boolean (Iface::*_m13__remove) (TPMGL(K), TPMGL(V));
        TPMGL(V) (Iface::*_m14__replace) (TPMGL(K), TPMGL(V));
        x10_boolean (Iface::*_m15__replace) (TPMGL(K), TPMGL(V), TPMGL(V));
        void (Iface::*set) (TPMGL(K), TPMGL(V));
        x10_long (Iface::*size) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
        ::x10::util::Collection<TPMGL(V)>* (Iface::*_m20__values) ();
        ::x10::util::Collection<TPMGL(V)>* (Iface::*_m21__values) (::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>*);
    };
    
    template <class R> static x10_boolean containsKey(R* _recv, TPMGL(K) arg0);
    template <class R> static x10_boolean containsKey(R _recv, TPMGL(K) arg0);
    template <class R> static void deleteVoid(R* _recv, TPMGL(K) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->deleteVoid))(arg0);
    }
    template <class R> static void deleteVoid(R _recv, TPMGL(K) arg0) {
        _recv->deleteVoid(arg0);
    }
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static TPMGL(V) get(R* _recv, TPMGL(K) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->get))(arg0);
    }
    template <class R> static TPMGL(V) get(R _recv, TPMGL(K) arg0) {
        return _recv->get(arg0);
    }
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static x10_boolean isEmpty(R* _recv);
    template <class R> static x10_boolean isEmpty(R _recv);
    template <class R> static ::x10::util::Set<TPMGL(K)>* _m6__keySet(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->_m6__keySet))();
    }
    template <class R> static ::x10::util::Set<TPMGL(K)>* _m6__keySet(R _recv) {
        return _recv->keySet();
    }
    template <class R> static ::x10::util::Set<TPMGL(K)>* _m7__keySet(R* _recv, ::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->_m7__keySet))(arg0);
    }
    template <class R> static ::x10::util::Set<TPMGL(K)>* _m7__keySet(R _recv, ::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>* arg0) {
        return _recv->keySet(arg0);
    }
    template <class R> static TPMGL(V) __apply(R* _recv, TPMGL(K) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->__apply))(arg0);
    }
    template <class R> static TPMGL(V) __apply(R _recv, TPMGL(K) arg0) {
        return _recv->__apply(arg0);
    }
    template <class R> static TPMGL(V) __set(R* _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->__set))(arg0, arg1);
    }
    template <class R> static TPMGL(V) __set(R _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        return _recv->__set(arg0, arg1);
    }
    template <class R> static TPMGL(V) put(R* _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->put))(arg0, arg1);
    }
    template <class R> static TPMGL(V) put(R _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        return _recv->put(arg0, arg1);
    }
    template <class R> static TPMGL(V) putIfAbsent(R* _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->putIfAbsent))(arg0, arg1);
    }
    template <class R> static TPMGL(V) putIfAbsent(R _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        return _recv->putIfAbsent(arg0, arg1);
    }
    template <class R> static TPMGL(V) _m12__remove(R* _recv, TPMGL(K) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->_m12__remove))(arg0);
    }
    template <class R> static TPMGL(V) _m12__remove(R _recv, TPMGL(K) arg0) {
        return _recv->remove(arg0);
    }
    template <class R> static x10_boolean _m13__remove(R* _recv, TPMGL(K) arg0, TPMGL(V) arg1);
    template <class R> static x10_boolean _m13__remove(R _recv, TPMGL(K) arg0, TPMGL(V) arg1);
    template <class R> static TPMGL(V) _m14__replace(R* _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->_m14__replace))(arg0, arg1);
    }
    template <class R> static TPMGL(V) _m14__replace(R _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        return _recv->replace(arg0, arg1);
    }
    template <class R> static x10_boolean _m15__replace(R* _recv, TPMGL(K) arg0, TPMGL(V) arg1, TPMGL(V) arg2);
    template <class R> static x10_boolean _m15__replace(R _recv, TPMGL(K) arg0, TPMGL(V) arg1, TPMGL(V) arg2);
    template <class R> static void set(R* _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->set))(arg0, arg1);
    }
    template <class R> static void set(R _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
        _recv->set(arg0, arg1);
    }
    template <class R> static x10_long size(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->size))();
    }
    template <class R> static x10_long size(R _recv) {
        return _recv->size();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    template <class R> static ::x10::util::Collection<TPMGL(V)>* _m20__values(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->_m20__values))();
    }
    template <class R> static ::x10::util::Collection<TPMGL(V)>* _m20__values(R _recv) {
        return _recv->values();
    }
    template <class R> static ::x10::util::Collection<TPMGL(V)>* _m21__values(R* _recv, ::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->_m21__values))(arg0);
    }
    template <class R> static ::x10::util::Collection<TPMGL(V)>* _m21__values(R _recv, ::x10::lang::Fun_0_1< ::x10::util::Map__Entry<TPMGL(K), TPMGL(V)>*, x10_boolean>* arg0) {
        return _recv->values(arg0);
    }
    
};

template<class TPMGL(K), class TPMGL(V)> ::x10aux::RuntimeType x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)>::rtt;
template<class TPMGL(K), class TPMGL(V)> void x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::resilient::ResilientBaseMap<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(K)>(), ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.resilient.ResilientBaseMap";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 1, parents, 2, params, variances);
}

template <> class ResilientBaseMap<void, void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // X10_UTIL_RESILIENT_RESILIENTBASEMAP_H

namespace x10 { namespace util { namespace resilient { 
template<class TPMGL(K), class TPMGL(V)> class ResilientBaseMap;
} } } 

#ifndef X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_NODEPS
#define X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/util/Set.h>
#include <x10/util/Collection.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/util/Map__Entry.h>
#ifndef X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_GENERICS
#define X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_GENERICS
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)>::containsKey(R* _recv, TPMGL(K) arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->containsKey))(arg0);
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)>::containsKey(R _recv, TPMGL(K) arg0) {
    return _recv->containsKey(arg0);
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)>::isEmpty(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->isEmpty))();
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)>::isEmpty(R _recv) {
    return _recv->isEmpty();
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)>::_m13__remove(R* _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->_m13__remove))(arg0, arg1);
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)>::_m13__remove(R _recv, TPMGL(K) arg0, TPMGL(V) arg1) {
    return _recv->remove(arg0, arg1);
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)>::_m15__replace(R* _recv, TPMGL(K) arg0, TPMGL(V) arg1, TPMGL(V) arg2) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)> >(_refRecv->_getITables())->_m15__replace))(arg0, arg1, arg2);
}
template<class TPMGL(K), class TPMGL(V)> template <class R> x10_boolean x10::util::resilient::ResilientBaseMap<TPMGL(K), TPMGL(V)>::_m15__replace(R _recv, TPMGL(K) arg0, TPMGL(V) arg1, TPMGL(V) arg2) {
    return _recv->replace(arg0, arg1, arg2);
}
#endif // X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_GENERICS
#ifndef X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_IMPLEMENTATION
#define X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_IMPLEMENTATION
#include <x10/util/resilient/ResilientBaseMap.h>

#endif // X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_IMPLEMENTATION
#endif // __X10_UTIL_RESILIENT_RESILIENTBASEMAP_H_NODEPS
