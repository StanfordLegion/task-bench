#ifndef __X10_COMPILER_PRAGMA_H
#define __X10_COMPILER_PRAGMA_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANNOTATIONS_STATEMENTANNOTATION_H_NODEPS
#include <x10/lang/annotations/StatementAnnotation.h>
#undef X10_LANG_ANNOTATIONS_STATEMENTANNOTATION_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS

namespace x10 { namespace compiler { 

class Pragma   {
    public:
    RTT_H_DECLS_INTERFACE
    
    x10_int FMGL(pragma);
    
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
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::Pragma>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::Pragma>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::compiler::Pragma>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    /* Static field: FMGL(FINISH_ASYNC) */
    static const x10_int FMGL(FINISH_ASYNC) = 1;
    static x10_int FMGL(FINISH_ASYNC__get)();
    
    /* Static field: FMGL(FINISH_HERE) */
    static const x10_int FMGL(FINISH_HERE) = 2;
    static x10_int FMGL(FINISH_HERE__get)();
    
    /* Static field: FMGL(FINISH_SPMD) */
    static const x10_int FMGL(FINISH_SPMD) = 3;
    static x10_int FMGL(FINISH_SPMD__get)();
    
    /* Static field: FMGL(FINISH_LOCAL) */
    static const x10_int FMGL(FINISH_LOCAL) = 4;
    static x10_int FMGL(FINISH_LOCAL__get)();
    
    /* Static field: FMGL(FINISH_DENSE) */
    static const x10_int FMGL(FINISH_DENSE) = 5;
    static x10_int FMGL(FINISH_DENSE__get)();
    
    /* Static field: FMGL(FINISH_ASYNC_AND_BACK) */
    static const x10_int FMGL(FINISH_ASYNC_AND_BACK) = 2;
    static x10_int FMGL(FINISH_ASYNC_AND_BACK__get)();
    
    /* Static field: FMGL(FINISH_ATEACH_UNIQUE) */
    static const x10_int FMGL(FINISH_ATEACH_UNIQUE) = 3;
    static x10_int FMGL(FINISH_ATEACH_UNIQUE__get)();
    
    
};


} } 
#endif // X10_COMPILER_PRAGMA_H

namespace x10 { namespace compiler { 
class Pragma;
} } 

#ifndef X10_COMPILER_PRAGMA_H_NODEPS
#define X10_COMPILER_PRAGMA_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/annotations/StatementAnnotation.h>
#include <x10/lang/Int.h>
#ifndef X10_COMPILER_PRAGMA_H_GENERICS
#define X10_COMPILER_PRAGMA_H_GENERICS
template <class R> x10_boolean x10::compiler::Pragma::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::compiler::Pragma>(_refRecv->_getITables())->equals))(arg0);
}
template <class R> x10_boolean x10::compiler::Pragma::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
inline x10_int x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)() {
    return x10::compiler::Pragma::FMGL(FINISH_ASYNC);
}

inline x10_int x10::compiler::Pragma::FMGL(FINISH_HERE__get)() {
    return x10::compiler::Pragma::FMGL(FINISH_HERE);
}

inline x10_int x10::compiler::Pragma::FMGL(FINISH_SPMD__get)() {
    return x10::compiler::Pragma::FMGL(FINISH_SPMD);
}

inline x10_int x10::compiler::Pragma::FMGL(FINISH_LOCAL__get)() {
    return x10::compiler::Pragma::FMGL(FINISH_LOCAL);
}

inline x10_int x10::compiler::Pragma::FMGL(FINISH_DENSE__get)() {
    return x10::compiler::Pragma::FMGL(FINISH_DENSE);
}

inline x10_int x10::compiler::Pragma::FMGL(FINISH_ASYNC_AND_BACK__get)() {
    return x10::compiler::Pragma::FMGL(FINISH_ASYNC_AND_BACK);
}

inline x10_int x10::compiler::Pragma::FMGL(FINISH_ATEACH_UNIQUE__get)() {
    return x10::compiler::Pragma::FMGL(FINISH_ATEACH_UNIQUE);
}

#endif // X10_COMPILER_PRAGMA_H_GENERICS
#endif // __X10_COMPILER_PRAGMA_H_NODEPS
