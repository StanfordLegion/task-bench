#ifndef __X10_UTIL_BUILDER_H
#define __X10_UTIL_BUILDER_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS

namespace x10 { namespace util { 

template<class TPMGL(T), class TPMGL(U)> class Builder;
template <> class Builder<void, void>;
template<class TPMGL(T), class TPMGL(U)> class Builder   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(::x10::util::Builder<TPMGL(T), TPMGL(U)>* (Iface::*add) (TPMGL(T)), x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), TPMGL(U) (Iface::*result) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : add(add), equals(equals), hashCode(hashCode), result(result), toString(toString), typeName(typeName) {}
        ::x10::util::Builder<TPMGL(T), TPMGL(U)>* (Iface::*add) (TPMGL(T));
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        TPMGL(U) (Iface::*result) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static ::x10::util::Builder<TPMGL(T), TPMGL(U)>* add(R* _recv, TPMGL(T) arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Builder<TPMGL(T), TPMGL(U)> >(_refRecv->_getITables())->add))(arg0);
    }
    template <class R> static ::x10::util::Builder<TPMGL(T), TPMGL(U)>* add(R _recv, TPMGL(T) arg0) {
        return _recv->add(arg0);
    }
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Builder<TPMGL(T), TPMGL(U)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static TPMGL(U) result(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Builder<TPMGL(T), TPMGL(U)> >(_refRecv->_getITables())->result))();
    }
    template <class R> static TPMGL(U) result(R _recv) {
        return _recv->result();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Builder<TPMGL(T), TPMGL(U)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::Builder<TPMGL(T), TPMGL(U)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};

template<class TPMGL(T), class TPMGL(U)> ::x10aux::RuntimeType x10::util::Builder<TPMGL(T), TPMGL(U)>::rtt;
template<class TPMGL(T), class TPMGL(U)> void x10::util::Builder<TPMGL(T), TPMGL(U)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::Builder<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(T)>(), ::x10aux::getRTT<TPMGL(U)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.Builder";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 1, parents, 2, params, variances);
}

template <> class Builder<void, void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_BUILDER_H

namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Builder;
} } 

#ifndef X10_UTIL_BUILDER_H_NODEPS
#define X10_UTIL_BUILDER_H_NODEPS
#include <x10/lang/Any.h>
#ifndef X10_UTIL_BUILDER_H_GENERICS
#define X10_UTIL_BUILDER_H_GENERICS
template<class TPMGL(T), class TPMGL(U)> template <class R> x10_boolean x10::util::Builder<TPMGL(T), TPMGL(U)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::Builder<TPMGL(T), TPMGL(U)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(T), class TPMGL(U)> template <class R> x10_boolean x10::util::Builder<TPMGL(T), TPMGL(U)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
#endif // X10_UTIL_BUILDER_H_GENERICS
#ifndef X10_UTIL_BUILDER_H_IMPLEMENTATION
#define X10_UTIL_BUILDER_H_IMPLEMENTATION
#include <x10/util/Builder.h>

#endif // X10_UTIL_BUILDER_H_IMPLEMENTATION
#endif // __X10_UTIL_BUILDER_H_NODEPS
