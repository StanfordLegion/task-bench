#ifndef __X10_UTIL_LOGGING_LOG_H
#define __X10_UTIL_LOGGING_LOG_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class NativeRep;
} } 

namespace x10 { namespace util { namespace logging { 

class Log   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(void (Iface::*_m0__debug) (::x10::lang::Any*), void (Iface::*_m1__debug) (::x10::lang::Any*, ::x10::lang::CheckedThrowable*), x10_boolean (Iface::*equals) (::x10::lang::Any*), void (Iface::*_m3__error) (::x10::lang::Any*), void (Iface::*_m4__error) (::x10::lang::Any*, ::x10::lang::CheckedThrowable*), void (Iface::*_m5__fatal) (::x10::lang::Any*), void (Iface::*_m6__fatal) (::x10::lang::Any*, ::x10::lang::CheckedThrowable*), x10_int (Iface::*hashCode) (), void (Iface::*_m8__info) (::x10::lang::Any*), void (Iface::*_m9__info) (::x10::lang::Any*, ::x10::lang::CheckedThrowable*), x10_boolean (Iface::*isDebugEnabled) (), x10_boolean (Iface::*isErrorEnabled) (), x10_boolean (Iface::*isFatalEnabled) (), x10_boolean (Iface::*isInfoEnabled) (), x10_boolean (Iface::*isTraceEnabled) (), x10_boolean (Iface::*isWarnEnabled) (), ::x10::lang::String* (Iface::*toString) (), void (Iface::*_m17__trace) (::x10::lang::Any*), void (Iface::*_m18__trace) (::x10::lang::Any*, ::x10::lang::CheckedThrowable*), ::x10::lang::String* (Iface::*typeName) (), void (Iface::*_m20__warn) (::x10::lang::Any*), void (Iface::*_m21__warn) (::x10::lang::Any*, ::x10::lang::CheckedThrowable*)) : _m0__debug(_m0__debug), _m1__debug(_m1__debug), equals(equals), _m3__error(_m3__error), _m4__error(_m4__error), _m5__fatal(_m5__fatal), _m6__fatal(_m6__fatal), hashCode(hashCode), _m8__info(_m8__info), _m9__info(_m9__info), isDebugEnabled(isDebugEnabled), isErrorEnabled(isErrorEnabled), isFatalEnabled(isFatalEnabled), isInfoEnabled(isInfoEnabled), isTraceEnabled(isTraceEnabled), isWarnEnabled(isWarnEnabled), toString(toString), _m17__trace(_m17__trace), _m18__trace(_m18__trace), typeName(typeName), _m20__warn(_m20__warn), _m21__warn(_m21__warn) {}
        void (Iface::*_m0__debug) (::x10::lang::Any*);
        void (Iface::*_m1__debug) (::x10::lang::Any*, ::x10::lang::CheckedThrowable*);
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        void (Iface::*_m3__error) (::x10::lang::Any*);
        void (Iface::*_m4__error) (::x10::lang::Any*, ::x10::lang::CheckedThrowable*);
        void (Iface::*_m5__fatal) (::x10::lang::Any*);
        void (Iface::*_m6__fatal) (::x10::lang::Any*, ::x10::lang::CheckedThrowable*);
        x10_int (Iface::*hashCode) ();
        void (Iface::*_m8__info) (::x10::lang::Any*);
        void (Iface::*_m9__info) (::x10::lang::Any*, ::x10::lang::CheckedThrowable*);
        x10_boolean (Iface::*isDebugEnabled) ();
        x10_boolean (Iface::*isErrorEnabled) ();
        x10_boolean (Iface::*isFatalEnabled) ();
        x10_boolean (Iface::*isInfoEnabled) ();
        x10_boolean (Iface::*isTraceEnabled) ();
        x10_boolean (Iface::*isWarnEnabled) ();
        ::x10::lang::String* (Iface::*toString) ();
        void (Iface::*_m17__trace) (::x10::lang::Any*);
        void (Iface::*_m18__trace) (::x10::lang::Any*, ::x10::lang::CheckedThrowable*);
        ::x10::lang::String* (Iface::*typeName) ();
        void (Iface::*_m20__warn) (::x10::lang::Any*);
        void (Iface::*_m21__warn) (::x10::lang::Any*, ::x10::lang::CheckedThrowable*);
    };
    
    template <class R> static void _m0__debug(R* _recv, ::x10::lang::Any* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->_m0__debug))(arg0);
    }
    template <class R> static void _m0__debug(R _recv, ::x10::lang::Any* arg0) {
        _recv->debug(arg0);
    }
    template <class R> static void _m1__debug(R* _recv, ::x10::lang::Any* arg0, ::x10::lang::CheckedThrowable* arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->_m1__debug))(arg0, arg1);
    }
    template <class R> static void _m1__debug(R _recv, ::x10::lang::Any* arg0, ::x10::lang::CheckedThrowable* arg1) {
        _recv->debug(arg0, arg1);
    }
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static void _m3__error(R* _recv, ::x10::lang::Any* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->_m3__error))(arg0);
    }
    template <class R> static void _m3__error(R _recv, ::x10::lang::Any* arg0) {
        _recv->error(arg0);
    }
    template <class R> static void _m4__error(R* _recv, ::x10::lang::Any* arg0, ::x10::lang::CheckedThrowable* arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->_m4__error))(arg0, arg1);
    }
    template <class R> static void _m4__error(R _recv, ::x10::lang::Any* arg0, ::x10::lang::CheckedThrowable* arg1) {
        _recv->error(arg0, arg1);
    }
    template <class R> static void _m5__fatal(R* _recv, ::x10::lang::Any* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->_m5__fatal))(arg0);
    }
    template <class R> static void _m5__fatal(R _recv, ::x10::lang::Any* arg0) {
        _recv->fatal(arg0);
    }
    template <class R> static void _m6__fatal(R* _recv, ::x10::lang::Any* arg0, ::x10::lang::CheckedThrowable* arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->_m6__fatal))(arg0, arg1);
    }
    template <class R> static void _m6__fatal(R _recv, ::x10::lang::Any* arg0, ::x10::lang::CheckedThrowable* arg1) {
        _recv->fatal(arg0, arg1);
    }
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static void _m8__info(R* _recv, ::x10::lang::Any* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->_m8__info))(arg0);
    }
    template <class R> static void _m8__info(R _recv, ::x10::lang::Any* arg0) {
        _recv->info(arg0);
    }
    template <class R> static void _m9__info(R* _recv, ::x10::lang::Any* arg0, ::x10::lang::CheckedThrowable* arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->_m9__info))(arg0, arg1);
    }
    template <class R> static void _m9__info(R _recv, ::x10::lang::Any* arg0, ::x10::lang::CheckedThrowable* arg1) {
        _recv->info(arg0, arg1);
    }
    template <class R> static x10_boolean isDebugEnabled(R* _recv);
    template <class R> static x10_boolean isDebugEnabled(R _recv);
    template <class R> static x10_boolean isErrorEnabled(R* _recv);
    template <class R> static x10_boolean isErrorEnabled(R _recv);
    template <class R> static x10_boolean isFatalEnabled(R* _recv);
    template <class R> static x10_boolean isFatalEnabled(R _recv);
    template <class R> static x10_boolean isInfoEnabled(R* _recv);
    template <class R> static x10_boolean isInfoEnabled(R _recv);
    template <class R> static x10_boolean isTraceEnabled(R* _recv);
    template <class R> static x10_boolean isTraceEnabled(R _recv);
    template <class R> static x10_boolean isWarnEnabled(R* _recv);
    template <class R> static x10_boolean isWarnEnabled(R _recv);
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static void _m17__trace(R* _recv, ::x10::lang::Any* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->_m17__trace))(arg0);
    }
    template <class R> static void _m17__trace(R _recv, ::x10::lang::Any* arg0) {
        _recv->trace(arg0);
    }
    template <class R> static void _m18__trace(R* _recv, ::x10::lang::Any* arg0, ::x10::lang::CheckedThrowable* arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->_m18__trace))(arg0, arg1);
    }
    template <class R> static void _m18__trace(R _recv, ::x10::lang::Any* arg0, ::x10::lang::CheckedThrowable* arg1) {
        _recv->trace(arg0, arg1);
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    template <class R> static void _m20__warn(R* _recv, ::x10::lang::Any* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->_m20__warn))(arg0);
    }
    template <class R> static void _m20__warn(R _recv, ::x10::lang::Any* arg0) {
        _recv->warn(arg0);
    }
    template <class R> static void _m21__warn(R* _recv, ::x10::lang::Any* arg0, ::x10::lang::CheckedThrowable* arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->_m21__warn))(arg0, arg1);
    }
    template <class R> static void _m21__warn(R _recv, ::x10::lang::Any* arg0, ::x10::lang::CheckedThrowable* arg1) {
        _recv->warn(arg0, arg1);
    }
    
};


} } } 
#endif // X10_UTIL_LOGGING_LOG_H

namespace x10 { namespace util { namespace logging { 
class Log;
} } } 

#ifndef X10_UTIL_LOGGING_LOG_H_NODEPS
#define X10_UTIL_LOGGING_LOG_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/compiler/Native.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/NativeRep.h>
#ifndef X10_UTIL_LOGGING_LOG_H_GENERICS
#define X10_UTIL_LOGGING_LOG_H_GENERICS
template <class R> x10_boolean x10::util::logging::Log::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->equals))(arg0);
}
template <class R> x10_boolean x10::util::logging::Log::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
template <class R> x10_boolean x10::util::logging::Log::isDebugEnabled(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->isDebugEnabled))();
}
template <class R> x10_boolean x10::util::logging::Log::isDebugEnabled(R _recv) {
    return _recv->isDebugEnabled();
}
template <class R> x10_boolean x10::util::logging::Log::isErrorEnabled(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->isErrorEnabled))();
}
template <class R> x10_boolean x10::util::logging::Log::isErrorEnabled(R _recv) {
    return _recv->isErrorEnabled();
}
template <class R> x10_boolean x10::util::logging::Log::isFatalEnabled(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->isFatalEnabled))();
}
template <class R> x10_boolean x10::util::logging::Log::isFatalEnabled(R _recv) {
    return _recv->isFatalEnabled();
}
template <class R> x10_boolean x10::util::logging::Log::isInfoEnabled(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->isInfoEnabled))();
}
template <class R> x10_boolean x10::util::logging::Log::isInfoEnabled(R _recv) {
    return _recv->isInfoEnabled();
}
template <class R> x10_boolean x10::util::logging::Log::isTraceEnabled(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->isTraceEnabled))();
}
template <class R> x10_boolean x10::util::logging::Log::isTraceEnabled(R _recv) {
    return _recv->isTraceEnabled();
}
template <class R> x10_boolean x10::util::logging::Log::isWarnEnabled(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::logging::Log>(_refRecv->_getITables())->isWarnEnabled))();
}
template <class R> x10_boolean x10::util::logging::Log::isWarnEnabled(R _recv) {
    return _recv->isWarnEnabled();
}
#endif // X10_UTIL_LOGGING_LOG_H_GENERICS
#endif // __X10_UTIL_LOGGING_LOG_H_NODEPS
