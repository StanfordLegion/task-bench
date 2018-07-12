#ifndef __X10_UTIL_MAP__ENTRY_H
#define __X10_UTIL_MAP__ENTRY_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS

namespace x10 { namespace util { 

template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
template <> class Map__Entry<void, void>;
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*equals) (::x10::lang::Any*), TPMGL(Key) (Iface::*getKey) (), TPMGL(Val) (Iface::*getValue) (), x10_int (Iface::*hashCode) (), void (Iface::*setValue) (TPMGL(Val)), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : equals(equals), getKey(getKey), getValue(getValue), hashCode(hashCode), setValue(setValue), toString(toString), typeName(typeName) {}
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        TPMGL(Key) (Iface::*getKey) ();
        TPMGL(Val) (Iface::*getValue) ();
        x10_int (Iface::*hashCode) ();
        void (Iface::*setValue) (TPMGL(Val));
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static TPMGL(Key) getKey(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Val)> >(_refRecv->_getITables())->getKey))();
    }
    template <class R> static TPMGL(Key) getKey(R _recv) {
        return _recv->getKey();
    }
    template <class R> static TPMGL(Val) getValue(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Val)> >(_refRecv->_getITables())->getValue))();
    }
    template <class R> static TPMGL(Val) getValue(R _recv) {
        return _recv->getValue();
    }
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Val)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static void setValue(R* _recv, TPMGL(Val) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Val)> >(_refRecv->_getITables())->setValue))(arg0);
    }
    template <class R> static void setValue(R _recv, TPMGL(Val) arg0) {
        _recv->setValue(arg0);
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Val)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Val)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};

template<class TPMGL(Key), class TPMGL(Val)> ::x10aux::RuntimeType x10::util::Map__Entry<TPMGL(Key), TPMGL(Val)>::rtt;
template<class TPMGL(Key), class TPMGL(Val)> void x10::util::Map__Entry<TPMGL(Key), TPMGL(Val)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::Map__Entry<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(Key)>(), ::x10aux::getRTT<TPMGL(Val)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.Map.Entry";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 1, parents, 2, params, variances);
}

template <> class Map__Entry<void, void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_MAP__ENTRY_H

namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 

#ifndef X10_UTIL_MAP__ENTRY_H_NODEPS
#define X10_UTIL_MAP__ENTRY_H_NODEPS
#include <x10/lang/Any.h>
#ifndef X10_UTIL_MAP__ENTRY_H_GENERICS
#define X10_UTIL_MAP__ENTRY_H_GENERICS
template<class TPMGL(Key), class TPMGL(Val)> template <class R> x10_boolean x10::util::Map__Entry<TPMGL(Key), TPMGL(Val)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Map__Entry<TPMGL(Key), TPMGL(Val)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(Key), class TPMGL(Val)> template <class R> x10_boolean x10::util::Map__Entry<TPMGL(Key), TPMGL(Val)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
#endif // X10_UTIL_MAP__ENTRY_H_GENERICS
#ifndef X10_UTIL_MAP__ENTRY_H_IMPLEMENTATION
#define X10_UTIL_MAP__ENTRY_H_IMPLEMENTATION
#include <x10/util/Map__Entry.h>

#endif // X10_UTIL_MAP__ENTRY_H_IMPLEMENTATION
#endif // __X10_UTIL_MAP__ENTRY_H_NODEPS
