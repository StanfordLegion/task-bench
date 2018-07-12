#ifndef __X10_COMPILER_REMOTEINVOCATION_H
#define __X10_COMPILER_REMOTEINVOCATION_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_COMPILER_NOINLINE_H_NODEPS
#include <x10/compiler/NoInline.h>
#undef X10_COMPILER_NOINLINE_H_NODEPS
#define X10_LANG_ANNOTATIONS_EXPRESSIONANNOTATION_H_NODEPS
#include <x10/lang/annotations/ExpressionAnnotation.h>
#undef X10_LANG_ANNOTATIONS_EXPRESSIONANNOTATION_H_NODEPS
#define X10_LANG_ANNOTATIONS_STATEMENTANNOTATION_H_NODEPS
#include <x10/lang/annotations/StatementAnnotation.h>
#undef X10_LANG_ANNOTATIONS_STATEMENTANNOTATION_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 

namespace x10 { namespace compiler { 

class RemoteInvocation   {
    public:
    RTT_H_DECLS_INTERFACE
    
    ::x10::lang::String* FMGL(suffix);
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : equals(equals), hashCode(hashCode), toString(toString), typeName(typeName) {}
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::RemoteInvocation>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::RemoteInvocation>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::RemoteInvocation>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};


} } 
#endif // X10_COMPILER_REMOTEINVOCATION_H

namespace x10 { namespace compiler { 
class RemoteInvocation;
} } 

#ifndef X10_COMPILER_REMOTEINVOCATION_H_NODEPS
#define X10_COMPILER_REMOTEINVOCATION_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/compiler/NoInline.h>
#include <x10/lang/annotations/ExpressionAnnotation.h>
#include <x10/lang/annotations/StatementAnnotation.h>
#include <x10/lang/String.h>
#ifndef X10_COMPILER_REMOTEINVOCATION_H_GENERICS
#define X10_COMPILER_REMOTEINVOCATION_H_GENERICS
template <class R> x10_boolean x10::compiler::RemoteInvocation::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::compiler::RemoteInvocation>(_refRecv->_getITables())->equals))(arg0);
}
template <class R> x10_boolean x10::compiler::RemoteInvocation::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
#endif // X10_COMPILER_REMOTEINVOCATION_H_GENERICS
#endif // __X10_COMPILER_REMOTEINVOCATION_H_NODEPS
