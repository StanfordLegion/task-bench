#ifndef __X10_COMPILER_SETOPS_H
#define __X10_COMPILER_SETOPS_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS

namespace x10 { namespace compiler { 

template<class TPMGL(T)> class SetOps;
template <> class SetOps<void>;
template<class TPMGL(T)> class SetOps   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(TPMGL(T) (Iface::*__and) (TPMGL(T)), TPMGL(T) (Iface::*__minus) (TPMGL(T)), TPMGL(T) (Iface::*__not) (), TPMGL(T) (Iface::*__or) (TPMGL(T)), x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : __and(__and), __minus(__minus), __not(__not), __or(__or), equals(equals), hashCode(hashCode), toString(toString), typeName(typeName) {}
        TPMGL(T) (Iface::*__and) (TPMGL(T));
        TPMGL(T) (Iface::*__minus) (TPMGL(T));
        TPMGL(T) (Iface::*__not) ();
        TPMGL(T) (Iface::*__or) (TPMGL(T));
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static TPMGL(T) __and(R* _recv, TPMGL(T) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::SetOps<TPMGL(T)> >(_refRecv->_getITables())->__and))(arg0);
    }
    template <class R> static TPMGL(T) __and(R _recv, TPMGL(T) arg0) {
        return _recv->__and(arg0);
    }
    template <class R> static TPMGL(T) __minus(R* _recv, TPMGL(T) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::SetOps<TPMGL(T)> >(_refRecv->_getITables())->__minus))(arg0);
    }
    template <class R> static TPMGL(T) __minus(R _recv, TPMGL(T) arg0) {
        return _recv->__minus(arg0);
    }
    template <class R> static TPMGL(T) __not(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::SetOps<TPMGL(T)> >(_refRecv->_getITables())->__not))();
    }
    template <class R> static TPMGL(T) __not(R _recv) {
        return _recv->__not();
    }
    template <class R> static TPMGL(T) __or(R* _recv, TPMGL(T) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::SetOps<TPMGL(T)> >(_refRecv->_getITables())->__or))(arg0);
    }
    template <class R> static TPMGL(T) __or(R _recv, TPMGL(T) arg0) {
        return _recv->__or(arg0);
    }
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::SetOps<TPMGL(T)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::SetOps<TPMGL(T)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::SetOps<TPMGL(T)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::compiler::SetOps<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::compiler::SetOps<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::compiler::SetOps<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.compiler.SetOps";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 1, parents, 1, params, variances);
}

template <> class SetOps<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_COMPILER_SETOPS_H

namespace x10 { namespace compiler { 
template<class TPMGL(T)> class SetOps;
} } 

#ifndef X10_COMPILER_SETOPS_H_NODEPS
#define X10_COMPILER_SETOPS_H_NODEPS
#include <x10/lang/Any.h>
#ifndef X10_COMPILER_SETOPS_H_GENERICS
#define X10_COMPILER_SETOPS_H_GENERICS
template<class TPMGL(T)> template <class R> x10_boolean x10::compiler::SetOps<TPMGL(T)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::compiler::SetOps<TPMGL(T)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::compiler::SetOps<TPMGL(T)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
#endif // X10_COMPILER_SETOPS_H_GENERICS
#ifndef X10_COMPILER_SETOPS_H_IMPLEMENTATION
#define X10_COMPILER_SETOPS_H_IMPLEMENTATION
#include <x10/compiler/SetOps.h>

#endif // X10_COMPILER_SETOPS_H_IMPLEMENTATION
#endif // __X10_COMPILER_SETOPS_H_NODEPS
