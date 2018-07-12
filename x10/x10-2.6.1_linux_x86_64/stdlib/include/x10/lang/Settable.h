#ifndef __X10_LANG_SETTABLE_H
#define __X10_LANG_SETTABLE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS

namespace x10 { namespace lang { 

template<class TPMGL(I), class TPMGL(V)> class Settable;
template <> class Settable<void, void>;
template<class TPMGL(I), class TPMGL(V)> class Settable   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), TPMGL(V) (Iface::*__set) (TPMGL(I), TPMGL(V)), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : equals(equals), hashCode(hashCode), __set(__set), toString(toString), typeName(typeName) {}
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        TPMGL(V) (Iface::*__set) (TPMGL(I), TPMGL(V));
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Settable<TPMGL(I), TPMGL(V)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static TPMGL(V) __set(R* _recv, TPMGL(I) arg0, TPMGL(V) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Settable<TPMGL(I), TPMGL(V)> >(_refRecv->_getITables())->__set))(arg0, arg1);
    }
    template <class R> static TPMGL(V) __set(R _recv, TPMGL(I) arg0, TPMGL(V) arg1) {
        return _recv->__set(arg0, arg1);
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Settable<TPMGL(I), TPMGL(V)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Settable<TPMGL(I), TPMGL(V)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};

template<class TPMGL(I), class TPMGL(V)> ::x10aux::RuntimeType x10::lang::Settable<TPMGL(I), TPMGL(V)>::rtt;
template<class TPMGL(I), class TPMGL(V)> void x10::lang::Settable<TPMGL(I), TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::lang::Settable<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(I)>(), ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.lang.Settable";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 1, parents, 2, params, variances);
}

template <> class Settable<void, void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_LANG_SETTABLE_H

namespace x10 { namespace lang { 
template<class TPMGL(I), class TPMGL(V)> class Settable;
} } 

#ifndef X10_LANG_SETTABLE_H_NODEPS
#define X10_LANG_SETTABLE_H_NODEPS
#include <x10/lang/Any.h>
#ifndef X10_LANG_SETTABLE_H_GENERICS
#define X10_LANG_SETTABLE_H_GENERICS
template<class TPMGL(I), class TPMGL(V)> template <class R> x10_boolean x10::lang::Settable<TPMGL(I), TPMGL(V)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::lang::Settable<TPMGL(I), TPMGL(V)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(I), class TPMGL(V)> template <class R> x10_boolean x10::lang::Settable<TPMGL(I), TPMGL(V)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
#endif // X10_LANG_SETTABLE_H_GENERICS
#ifndef X10_LANG_SETTABLE_H_IMPLEMENTATION
#define X10_LANG_SETTABLE_H_IMPLEMENTATION
#include <x10/lang/Settable.h>

#endif // X10_LANG_SETTABLE_H_IMPLEMENTATION
#endif // __X10_LANG_SETTABLE_H_NODEPS
