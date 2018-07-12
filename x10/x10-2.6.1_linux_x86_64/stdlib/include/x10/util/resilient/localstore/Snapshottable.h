#ifndef __X10_UTIL_RESILIENT_LOCALSTORE_SNAPSHOTTABLE_H
#define __X10_UTIL_RESILIENT_LOCALSTORE_SNAPSHOTTABLE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 

namespace x10 { namespace util { namespace resilient { namespace localstore { 

class Snapshottable   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), ::x10::util::resilient::localstore::Cloneable* (Iface::*makeSnapshot_local) (), void (Iface::*restoreSnapshot_local) (::x10::util::resilient::localstore::Cloneable*), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : equals(equals), hashCode(hashCode), makeSnapshot_local(makeSnapshot_local), restoreSnapshot_local(restoreSnapshot_local), toString(toString), typeName(typeName) {}
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        ::x10::util::resilient::localstore::Cloneable* (Iface::*makeSnapshot_local) ();
        void (Iface::*restoreSnapshot_local) (::x10::util::resilient::localstore::Cloneable*);
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::localstore::Snapshottable>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static ::x10::util::resilient::localstore::Cloneable* makeSnapshot_local(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::localstore::Snapshottable>(_refRecv->_getITables())->makeSnapshot_local))();
    }
    template <class R> static ::x10::util::resilient::localstore::Cloneable* makeSnapshot_local(R _recv) {
        return _recv->makeSnapshot_local();
    }
    template <class R> static void restoreSnapshot_local(R* _recv, ::x10::util::resilient::localstore::Cloneable* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::localstore::Snapshottable>(_refRecv->_getITables())->restoreSnapshot_local))(arg0);
    }
    template <class R> static void restoreSnapshot_local(R _recv, ::x10::util::resilient::localstore::Cloneable* arg0) {
        _recv->restoreSnapshot_local(arg0);
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::localstore::Snapshottable>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::localstore::Snapshottable>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};


} } } } 
#endif // X10_UTIL_RESILIENT_LOCALSTORE_SNAPSHOTTABLE_H

namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Snapshottable;
} } } } 

#ifndef X10_UTIL_RESILIENT_LOCALSTORE_SNAPSHOTTABLE_H_NODEPS
#define X10_UTIL_RESILIENT_LOCALSTORE_SNAPSHOTTABLE_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/util/resilient/localstore/Cloneable.h>
#ifndef X10_UTIL_RESILIENT_LOCALSTORE_SNAPSHOTTABLE_H_GENERICS
#define X10_UTIL_RESILIENT_LOCALSTORE_SNAPSHOTTABLE_H_GENERICS
template <class R> x10_boolean x10::util::resilient::localstore::Snapshottable::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::localstore::Snapshottable>(_refRecv->_getITables())->equals))(arg0);
}
template <class R> x10_boolean x10::util::resilient::localstore::Snapshottable::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
#endif // X10_UTIL_RESILIENT_LOCALSTORE_SNAPSHOTTABLE_H_GENERICS
#endif // __X10_UTIL_RESILIENT_LOCALSTORE_SNAPSHOTTABLE_H_NODEPS
