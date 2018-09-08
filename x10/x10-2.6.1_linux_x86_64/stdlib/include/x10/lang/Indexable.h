#ifndef __X10_LANG_INDEXABLE_H
#define __X10_LANG_INDEXABLE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_FUN_0_1_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#undef X10_LANG_FUN_0_1_H_NODEPS

namespace x10 { namespace lang { 

template<class TPMGL(I), class TPMGL(V)> class Indexable;
template <> class Indexable<void, void>;
template<class TPMGL(I), class TPMGL(V)> class Indexable   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), TPMGL(V) (Iface::*__apply) (TPMGL(I)), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : equals(equals), hashCode(hashCode), __apply(__apply), toString(toString), typeName(typeName) {}
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        TPMGL(V) (Iface::*__apply) (TPMGL(I));
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Indexable<TPMGL(I), TPMGL(V)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static TPMGL(V) __apply(R* _recv, TPMGL(I) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Indexable<TPMGL(I), TPMGL(V)> >(_refRecv->_getITables())->__apply))(arg0);
    }
    template <class R> static TPMGL(V) __apply(R _recv, TPMGL(I) arg0) {
        return _recv->__apply(arg0);
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Indexable<TPMGL(I), TPMGL(V)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::Indexable<TPMGL(I), TPMGL(V)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};

template<class TPMGL(I), class TPMGL(V)> ::x10aux::RuntimeType x10::lang::Indexable<TPMGL(I), TPMGL(V)>::rtt;
template<class TPMGL(I), class TPMGL(V)> void x10::lang::Indexable<TPMGL(I), TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::lang::Indexable<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::lang::Fun_0_1<TPMGL(I), TPMGL(V)> >()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(I)>(), ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.lang.Indexable";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 2, parents, 2, params, variances);
}

template <> class Indexable<void, void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_LANG_INDEXABLE_H

namespace x10 { namespace lang { 
template<class TPMGL(I), class TPMGL(V)> class Indexable;
} } 

#ifndef X10_LANG_INDEXABLE_H_NODEPS
#define X10_LANG_INDEXABLE_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Fun_0_1.h>
#ifndef X10_LANG_INDEXABLE_H_GENERICS
#define X10_LANG_INDEXABLE_H_GENERICS
template<class TPMGL(I), class TPMGL(V)> template <class R> x10_boolean x10::lang::Indexable<TPMGL(I), TPMGL(V)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::lang::Indexable<TPMGL(I), TPMGL(V)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(I), class TPMGL(V)> template <class R> x10_boolean x10::lang::Indexable<TPMGL(I), TPMGL(V)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
#endif // X10_LANG_INDEXABLE_H_GENERICS
#ifndef X10_LANG_INDEXABLE_H_IMPLEMENTATION
#define X10_LANG_INDEXABLE_H_IMPLEMENTATION
#include <x10/lang/Indexable.h>

#endif // X10_LANG_INDEXABLE_H_IMPLEMENTATION
#endif // __X10_LANG_INDEXABLE_H_NODEPS
