#ifndef __X10_IO_MARSHAL_H
#define __X10_IO_MARSHAL_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace io { 
class Reader;
} } 
namespace x10 { namespace io { 
class Writer;
} } 
namespace x10 { namespace io { 
class Marshal__BooleanMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__ByteMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__UByteMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__CharMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__ShortMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__UShortMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__IntMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__UIntMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__LongMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__ULongMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__FloatMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__DoubleMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__LineMarshal;
} } 

namespace x10 { namespace io { 

template<class TPMGL(T)> class Marshal;
template <> class Marshal<void>;
template<class TPMGL(T)> class Marshal   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), TPMGL(T) (Iface::*read) (::x10::io::Reader*), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) (), void (Iface::*write) (::x10::io::Writer*, TPMGL(T))) : equals(equals), hashCode(hashCode), read(read), toString(toString), typeName(typeName), write(write) {}
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        TPMGL(T) (Iface::*read) (::x10::io::Reader*);
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
        void (Iface::*write) (::x10::io::Writer*, TPMGL(T));
    };
    
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::io::Marshal<TPMGL(T)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static TPMGL(T) read(R* _recv, ::x10::io::Reader* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::io::Marshal<TPMGL(T)> >(_refRecv->_getITables())->read))(arg0);
    }
    template <class R> static TPMGL(T) read(R _recv, ::x10::io::Reader* arg0) {
        return _recv->read(arg0);
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::io::Marshal<TPMGL(T)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::io::Marshal<TPMGL(T)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    template <class R> static void write(R* _recv, ::x10::io::Writer* arg0, TPMGL(T) arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::io::Marshal<TPMGL(T)> >(_refRecv->_getITables())->write))(arg0, arg1);
    }
    template <class R> static void write(R _recv, ::x10::io::Writer* arg0, TPMGL(T) arg1) {
        _recv->write(arg0, arg1);
    }
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::io::Marshal<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::io::Marshal<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::io::Marshal<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.io.Marshal";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 1, parents, 1, params, variances);
}

template <> class Marshal<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
    
    
    
    
    
    
    
    
    
    
    
    
    /* Static field: FMGL(BOOLEAN) */
    static ::x10::io::Marshal__BooleanMarshal* FMGL(BOOLEAN);
    static void FMGL(BOOLEAN__do_init)();
    static void FMGL(BOOLEAN__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(BOOLEAN__status);
    static ::x10::lang::CheckedThrowable* FMGL(BOOLEAN__exception);
    static ::x10::io::Marshal__BooleanMarshal* FMGL(BOOLEAN__get)();
    
    /* Static field: FMGL(BYTE) */
    static ::x10::io::Marshal__ByteMarshal* FMGL(BYTE);
    static void FMGL(BYTE__do_init)();
    static void FMGL(BYTE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(BYTE__status);
    static ::x10::lang::CheckedThrowable* FMGL(BYTE__exception);
    static ::x10::io::Marshal__ByteMarshal* FMGL(BYTE__get)();
    
    /* Static field: FMGL(UBYTE) */
    static ::x10::io::Marshal__UByteMarshal* FMGL(UBYTE);
    static void FMGL(UBYTE__do_init)();
    static void FMGL(UBYTE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(UBYTE__status);
    static ::x10::lang::CheckedThrowable* FMGL(UBYTE__exception);
    static ::x10::io::Marshal__UByteMarshal* FMGL(UBYTE__get)();
    
    /* Static field: FMGL(CHAR) */
    static ::x10::io::Marshal__CharMarshal* FMGL(CHAR);
    static void FMGL(CHAR__do_init)();
    static void FMGL(CHAR__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(CHAR__status);
    static ::x10::lang::CheckedThrowable* FMGL(CHAR__exception);
    static ::x10::io::Marshal__CharMarshal* FMGL(CHAR__get)();
    
    /* Static field: FMGL(SHORT) */
    static ::x10::io::Marshal__ShortMarshal* FMGL(SHORT);
    static void FMGL(SHORT__do_init)();
    static void FMGL(SHORT__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(SHORT__status);
    static ::x10::lang::CheckedThrowable* FMGL(SHORT__exception);
    static ::x10::io::Marshal__ShortMarshal* FMGL(SHORT__get)();
    
    /* Static field: FMGL(USHORT) */
    static ::x10::io::Marshal__UShortMarshal* FMGL(USHORT);
    static void FMGL(USHORT__do_init)();
    static void FMGL(USHORT__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(USHORT__status);
    static ::x10::lang::CheckedThrowable* FMGL(USHORT__exception);
    static ::x10::io::Marshal__UShortMarshal* FMGL(USHORT__get)();
    
    /* Static field: FMGL(INT) */
    static ::x10::io::Marshal__IntMarshal* FMGL(INT);
    static void FMGL(INT__do_init)();
    static void FMGL(INT__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(INT__status);
    static ::x10::lang::CheckedThrowable* FMGL(INT__exception);
    static ::x10::io::Marshal__IntMarshal* FMGL(INT__get)();
    
    /* Static field: FMGL(UINT) */
    static ::x10::io::Marshal__UIntMarshal* FMGL(UINT);
    static void FMGL(UINT__do_init)();
    static void FMGL(UINT__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(UINT__status);
    static ::x10::lang::CheckedThrowable* FMGL(UINT__exception);
    static ::x10::io::Marshal__UIntMarshal* FMGL(UINT__get)();
    
    /* Static field: FMGL(LONG) */
    static ::x10::io::Marshal__LongMarshal* FMGL(LONG);
    static void FMGL(LONG__do_init)();
    static void FMGL(LONG__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(LONG__status);
    static ::x10::lang::CheckedThrowable* FMGL(LONG__exception);
    static ::x10::io::Marshal__LongMarshal* FMGL(LONG__get)();
    
    /* Static field: FMGL(ULONG) */
    static ::x10::io::Marshal__ULongMarshal* FMGL(ULONG);
    static void FMGL(ULONG__do_init)();
    static void FMGL(ULONG__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(ULONG__status);
    static ::x10::lang::CheckedThrowable* FMGL(ULONG__exception);
    static ::x10::io::Marshal__ULongMarshal* FMGL(ULONG__get)();
    
    /* Static field: FMGL(FLOAT) */
    static ::x10::io::Marshal__FloatMarshal* FMGL(FLOAT);
    static void FMGL(FLOAT__do_init)();
    static void FMGL(FLOAT__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(FLOAT__status);
    static ::x10::lang::CheckedThrowable* FMGL(FLOAT__exception);
    static ::x10::io::Marshal__FloatMarshal* FMGL(FLOAT__get)();
    
    /* Static field: FMGL(DOUBLE) */
    static ::x10::io::Marshal__DoubleMarshal* FMGL(DOUBLE);
    static void FMGL(DOUBLE__do_init)();
    static void FMGL(DOUBLE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(DOUBLE__status);
    static ::x10::lang::CheckedThrowable* FMGL(DOUBLE__exception);
    static ::x10::io::Marshal__DoubleMarshal* FMGL(DOUBLE__get)();
    
    /* Static field: FMGL(LINE) */
    static ::x10::io::Marshal__LineMarshal* FMGL(LINE);
    static void FMGL(LINE__do_init)();
    static void FMGL(LINE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(LINE__status);
    static ::x10::lang::CheckedThrowable* FMGL(LINE__exception);
    static ::x10::io::Marshal__LineMarshal* FMGL(LINE__get)();
    
    
};

} } 
#endif // X10_IO_MARSHAL_H

namespace x10 { namespace io { 
template<class TPMGL(T)> class Marshal;
} } 

#ifndef X10_IO_MARSHAL_H_NODEPS
#define X10_IO_MARSHAL_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/io/Reader.h>
#include <x10/io/Writer.h>
#include <x10/io/Marshal__BooleanMarshal.h>
#include <x10/io/Marshal__ByteMarshal.h>
#include <x10/io/Marshal__UByteMarshal.h>
#include <x10/io/Marshal__CharMarshal.h>
#include <x10/io/Marshal__ShortMarshal.h>
#include <x10/io/Marshal__UShortMarshal.h>
#include <x10/io/Marshal__IntMarshal.h>
#include <x10/io/Marshal__UIntMarshal.h>
#include <x10/io/Marshal__LongMarshal.h>
#include <x10/io/Marshal__ULongMarshal.h>
#include <x10/io/Marshal__FloatMarshal.h>
#include <x10/io/Marshal__DoubleMarshal.h>
#include <x10/io/Marshal__LineMarshal.h>
#ifndef X10_IO_MARSHAL_H_GENERICS
#define X10_IO_MARSHAL_H_GENERICS
template<class TPMGL(T)> template <class R> x10_boolean x10::io::Marshal<TPMGL(T)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::io::Marshal<TPMGL(T)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(T)> template <class R> x10_boolean x10::io::Marshal<TPMGL(T)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
inline ::x10::io::Marshal__BooleanMarshal* x10::io::Marshal<void>::FMGL(BOOLEAN__get)() {
    if (FMGL(BOOLEAN__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(BOOLEAN__init)();
    }
    return x10::io::Marshal<void>::FMGL(BOOLEAN);
}

inline ::x10::io::Marshal__ByteMarshal* x10::io::Marshal<void>::FMGL(BYTE__get)() {
    if (FMGL(BYTE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(BYTE__init)();
    }
    return x10::io::Marshal<void>::FMGL(BYTE);
}

inline ::x10::io::Marshal__UByteMarshal* x10::io::Marshal<void>::FMGL(UBYTE__get)() {
    if (FMGL(UBYTE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(UBYTE__init)();
    }
    return x10::io::Marshal<void>::FMGL(UBYTE);
}

inline ::x10::io::Marshal__CharMarshal* x10::io::Marshal<void>::FMGL(CHAR__get)() {
    if (FMGL(CHAR__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(CHAR__init)();
    }
    return x10::io::Marshal<void>::FMGL(CHAR);
}

inline ::x10::io::Marshal__ShortMarshal* x10::io::Marshal<void>::FMGL(SHORT__get)() {
    if (FMGL(SHORT__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(SHORT__init)();
    }
    return x10::io::Marshal<void>::FMGL(SHORT);
}

inline ::x10::io::Marshal__UShortMarshal* x10::io::Marshal<void>::FMGL(USHORT__get)() {
    if (FMGL(USHORT__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(USHORT__init)();
    }
    return x10::io::Marshal<void>::FMGL(USHORT);
}

inline ::x10::io::Marshal__IntMarshal* x10::io::Marshal<void>::FMGL(INT__get)() {
    if (FMGL(INT__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(INT__init)();
    }
    return x10::io::Marshal<void>::FMGL(INT);
}

inline ::x10::io::Marshal__UIntMarshal* x10::io::Marshal<void>::FMGL(UINT__get)() {
    if (FMGL(UINT__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(UINT__init)();
    }
    return x10::io::Marshal<void>::FMGL(UINT);
}

inline ::x10::io::Marshal__LongMarshal* x10::io::Marshal<void>::FMGL(LONG__get)() {
    if (FMGL(LONG__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(LONG__init)();
    }
    return x10::io::Marshal<void>::FMGL(LONG);
}

inline ::x10::io::Marshal__ULongMarshal* x10::io::Marshal<void>::FMGL(ULONG__get)() {
    if (FMGL(ULONG__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(ULONG__init)();
    }
    return x10::io::Marshal<void>::FMGL(ULONG);
}

inline ::x10::io::Marshal__FloatMarshal* x10::io::Marshal<void>::FMGL(FLOAT__get)() {
    if (FMGL(FLOAT__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(FLOAT__init)();
    }
    return x10::io::Marshal<void>::FMGL(FLOAT);
}

inline ::x10::io::Marshal__DoubleMarshal* x10::io::Marshal<void>::FMGL(DOUBLE__get)() {
    if (FMGL(DOUBLE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(DOUBLE__init)();
    }
    return x10::io::Marshal<void>::FMGL(DOUBLE);
}

inline ::x10::io::Marshal__LineMarshal* x10::io::Marshal<void>::FMGL(LINE__get)() {
    if (FMGL(LINE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(LINE__init)();
    }
    return x10::io::Marshal<void>::FMGL(LINE);
}

#endif // X10_IO_MARSHAL_H_GENERICS
#ifndef X10_IO_MARSHAL_H_IMPLEMENTATION
#define X10_IO_MARSHAL_H_IMPLEMENTATION
#include <x10/io/Marshal.h>


//#line 20 "x10/io/Marshal.x10"

//#line 21 "x10/io/Marshal.x10"

//#line 22 "x10/io/Marshal.x10"

//#line 23 "x10/io/Marshal.x10"

//#line 24 "x10/io/Marshal.x10"

//#line 25 "x10/io/Marshal.x10"

//#line 26 "x10/io/Marshal.x10"

//#line 27 "x10/io/Marshal.x10"

//#line 28 "x10/io/Marshal.x10"

//#line 29 "x10/io/Marshal.x10"

//#line 30 "x10/io/Marshal.x10"

//#line 31 "x10/io/Marshal.x10"

//#line 32 "x10/io/Marshal.x10"
#endif // X10_IO_MARSHAL_H_IMPLEMENTATION
#endif // __X10_IO_MARSHAL_H_NODEPS
