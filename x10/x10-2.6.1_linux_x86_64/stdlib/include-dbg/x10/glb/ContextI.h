#ifndef __X10_GLB_CONTEXTI_H
#define __X10_GLB_CONTEXTI_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS

namespace x10 { namespace glb { 

class ContextI   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) (), void (Iface::*yielding) ()) : equals(equals), hashCode(hashCode), toString(toString), typeName(typeName), yielding(yielding) {}
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
        void (Iface::*yielding) ();
    };
    
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::glb::ContextI>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::glb::ContextI>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::glb::ContextI>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    template <class R> static void yielding(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::glb::ContextI>(_refRecv->_getITables())->yielding))();
    }
    template <class R> static void yielding(R _recv) {
        _recv->yielding();
    }
    
};


} } 
#endif // X10_GLB_CONTEXTI_H

namespace x10 { namespace glb { 
class ContextI;
} } 

#ifndef X10_GLB_CONTEXTI_H_NODEPS
#define X10_GLB_CONTEXTI_H_NODEPS
#include <x10/lang/Any.h>
#ifndef X10_GLB_CONTEXTI_H_GENERICS
#define X10_GLB_CONTEXTI_H_GENERICS
template <class R> x10_boolean x10::glb::ContextI::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::glb::ContextI>(_refRecv->_getITables())->equals))(arg0);
}
template <class R> x10_boolean x10::glb::ContextI::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
#endif // X10_GLB_CONTEXTI_H_GENERICS
#endif // __X10_GLB_CONTEXTI_H_NODEPS
