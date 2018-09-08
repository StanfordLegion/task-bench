#ifndef __X10_LANG_REDUCIBLE_H
#define __X10_LANG_REDUCIBLE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS

namespace x10 { namespace lang { 

template<class TPMGL(T)> class Reducible;
template <> class Reducible<void>;
template<class TPMGL(T)> class Reducible   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), TPMGL(T) (Iface::*__apply) (TPMGL(T), TPMGL(T)), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) (), TPMGL(T) (Iface::*zero) ()) : equals(equals), hashCode(hashCode), __apply(__apply), toString(toString), typeName(typeName), zero(zero) {}
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        TPMGL(T) (Iface::*__apply) (TPMGL(T), TPMGL(T));
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
        TPMGL(T) (Iface::*zero) ();
    };
    
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Reducible<TPMGL(T)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static TPMGL(T) __apply(R* _recv, TPMGL(T) arg0, TPMGL(T) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Reducible<TPMGL(T)> >(_refRecv->_getITables())->__apply))(arg0, arg1);
    }
    template <class R> static TPMGL(T) __apply(R _recv, TPMGL(T) arg0, TPMGL(T) arg1) {
        return _recv->__apply(arg0, arg1);
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Reducible<TPMGL(T)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Reducible<TPMGL(T)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    template <class R> static TPMGL(T) zero(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Reducible<TPMGL(T)> >(_refRecv->_getITables())->zero))();
    }
    template <class R> static TPMGL(T) zero(R _recv) {
        return _recv->zero();
    }
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::lang::Reducible<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::lang::Reducible<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::lang::Reducible<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.lang.Reducible";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 1, parents, 1, params, variances);
}

template <> class Reducible<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_LANG_REDUCIBLE_H

namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 

#ifndef X10_LANG_REDUCIBLE_H_NODEPS
#define X10_LANG_REDUCIBLE_H_NODEPS
#include <x10/lang/Any.h>
#ifndef X10_LANG_REDUCIBLE_H_GENERICS
#define X10_LANG_REDUCIBLE_H_GENERICS
template<class TPMGL(T)> template <class R> x10_boolean x10::lang::Reducible<TPMGL(T)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::lang::Reducible<TPMGL(T)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::lang::Reducible<TPMGL(T)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
#endif // X10_LANG_REDUCIBLE_H_GENERICS
#ifndef X10_LANG_REDUCIBLE_H_IMPLEMENTATION
#define X10_LANG_REDUCIBLE_H_IMPLEMENTATION
#include <x10/lang/Reducible.h>

#endif // X10_LANG_REDUCIBLE_H_IMPLEMENTATION
#endif // __X10_LANG_REDUCIBLE_H_NODEPS
