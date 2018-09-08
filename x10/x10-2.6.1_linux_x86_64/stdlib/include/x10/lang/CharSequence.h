#ifndef __X10_LANG_CHARSEQUENCE_H
#define __X10_LANG_CHARSEQUENCE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class NativeRep;
} } 

namespace x10 { namespace lang { 

class CharSequence   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_char (Iface::*charAt) (x10_int), x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), x10_int (Iface::*length) (), ::x10::lang::CharSequence* (Iface::*subSequence) (x10_int, x10_int), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : charAt(charAt), equals(equals), hashCode(hashCode), length(length), subSequence(subSequence), toString(toString), typeName(typeName) {}
        x10_char (Iface::*charAt) (x10_int);
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        x10_int (Iface::*length) ();
        ::x10::lang::CharSequence* (Iface::*subSequence) (x10_int, x10_int);
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static x10_char charAt(R* _recv, x10_int arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::CharSequence>(_refRecv->_getITables())->charAt))(arg0);
    }
    template <class R> static x10_char charAt(R _recv, x10_int arg0) {
        return _recv->charAt(arg0);
    }
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::CharSequence>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static x10_int length(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::CharSequence>(_refRecv->_getITables())->length))();
    }
    template <class R> static x10_int length(R _recv) {
        return _recv->length();
    }
    template <class R> static ::x10::lang::CharSequence* subSequence(R* _recv, x10_int arg0, x10_int arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::CharSequence>(_refRecv->_getITables())->subSequence))(arg0, arg1);
    }
    template <class R> static ::x10::lang::CharSequence* subSequence(R _recv, x10_int arg0, x10_int arg1) {
        return _recv->subSequence(arg0, arg1);
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::CharSequence>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::lang::CharSequence>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};


} } 
#endif // X10_LANG_CHARSEQUENCE_H

namespace x10 { namespace lang { 
class CharSequence;
} } 

#ifndef X10_LANG_CHARSEQUENCE_H_NODEPS
#define X10_LANG_CHARSEQUENCE_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Char.h>
#include <x10/lang/String.h>
#include <x10/compiler/NativeRep.h>
#ifndef X10_LANG_CHARSEQUENCE_H_GENERICS
#define X10_LANG_CHARSEQUENCE_H_GENERICS
template <class R> x10_boolean x10::lang::CharSequence::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::lang::CharSequence>(_refRecv->_getITables())->equals))(arg0);
}
template <class R> x10_boolean x10::lang::CharSequence::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
#endif // X10_LANG_CHARSEQUENCE_H_GENERICS
#endif // __X10_LANG_CHARSEQUENCE_H_NODEPS
