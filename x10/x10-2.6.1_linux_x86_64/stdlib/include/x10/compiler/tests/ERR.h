#ifndef __X10_COMPILER_TESTS_ERR_H
#define __X10_COMPILER_TESTS_ERR_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANNOTATIONS_METHODANNOTATION_H_NODEPS
#include <x10/lang/annotations/MethodAnnotation.h>
#undef X10_LANG_ANNOTATIONS_METHODANNOTATION_H_NODEPS
#define X10_LANG_ANNOTATIONS_CLASSANNOTATION_H_NODEPS
#include <x10/lang/annotations/ClassAnnotation.h>
#undef X10_LANG_ANNOTATIONS_CLASSANNOTATION_H_NODEPS
#define X10_LANG_ANNOTATIONS_FIELDANNOTATION_H_NODEPS
#include <x10/lang/annotations/FieldAnnotation.h>
#undef X10_LANG_ANNOTATIONS_FIELDANNOTATION_H_NODEPS
#define X10_LANG_ANNOTATIONS_IMPORTANNOTATION_H_NODEPS
#include <x10/lang/annotations/ImportAnnotation.h>
#undef X10_LANG_ANNOTATIONS_IMPORTANNOTATION_H_NODEPS
#define X10_LANG_ANNOTATIONS_PACKAGEANNOTATION_H_NODEPS
#include <x10/lang/annotations/PackageAnnotation.h>
#undef X10_LANG_ANNOTATIONS_PACKAGEANNOTATION_H_NODEPS
#define X10_LANG_ANNOTATIONS_TYPEANNOTATION_H_NODEPS
#include <x10/lang/annotations/TypeAnnotation.h>
#undef X10_LANG_ANNOTATIONS_TYPEANNOTATION_H_NODEPS
#define X10_LANG_ANNOTATIONS_EXPRESSIONANNOTATION_H_NODEPS
#include <x10/lang/annotations/ExpressionAnnotation.h>
#undef X10_LANG_ANNOTATIONS_EXPRESSIONANNOTATION_H_NODEPS
#define X10_LANG_ANNOTATIONS_STATEMENTANNOTATION_H_NODEPS
#include <x10/lang/annotations/StatementAnnotation.h>
#undef X10_LANG_ANNOTATIONS_STATEMENTANNOTATION_H_NODEPS

namespace x10 { namespace compiler { namespace tests { 

class ERR   {
    public:
    RTT_H_DECLS_INTERFACE
    
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
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::tests::ERR>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::tests::ERR>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::tests::ERR>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};


} } } 
#endif // X10_COMPILER_TESTS_ERR_H

namespace x10 { namespace compiler { namespace tests { 
class ERR;
} } } 

#ifndef X10_COMPILER_TESTS_ERR_H_NODEPS
#define X10_COMPILER_TESTS_ERR_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/annotations/MethodAnnotation.h>
#include <x10/lang/annotations/ClassAnnotation.h>
#include <x10/lang/annotations/FieldAnnotation.h>
#include <x10/lang/annotations/ImportAnnotation.h>
#include <x10/lang/annotations/PackageAnnotation.h>
#include <x10/lang/annotations/TypeAnnotation.h>
#include <x10/lang/annotations/ExpressionAnnotation.h>
#include <x10/lang/annotations/StatementAnnotation.h>
#ifndef X10_COMPILER_TESTS_ERR_H_GENERICS
#define X10_COMPILER_TESTS_ERR_H_GENERICS
template <class R> x10_boolean x10::compiler::tests::ERR::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::compiler::tests::ERR>(_refRecv->_getITables())->equals))(arg0);
}
template <class R> x10_boolean x10::compiler::tests::ERR::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
#endif // X10_COMPILER_TESTS_ERR_H_GENERICS
#endif // __X10_COMPILER_TESTS_ERR_H_NODEPS
