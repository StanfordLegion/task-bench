#ifndef __X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEAPP_H
#define __X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEAPP_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class ApplicationSnapshotStore;
} } } } 
namespace x10 { namespace util { namespace resilient { 
class PlaceManager__ChangeDescription;
} } } 

namespace x10 { namespace util { namespace resilient { namespace iterative { 

class GlobalResilientIterativeApp   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(void (Iface::*checkpoint) (::x10::util::resilient::iterative::ApplicationSnapshotStore*), x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), x10_boolean (Iface::*isFinished) (), void (Iface::*remake) (::x10::util::resilient::PlaceManager__ChangeDescription, x10_long), void (Iface::*step) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : checkpoint(checkpoint), equals(equals), hashCode(hashCode), isFinished(isFinished), remake(remake), step(step), toString(toString), typeName(typeName) {}
        void (Iface::*checkpoint) (::x10::util::resilient::iterative::ApplicationSnapshotStore*);
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        x10_boolean (Iface::*isFinished) ();
        void (Iface::*remake) (::x10::util::resilient::PlaceManager__ChangeDescription, x10_long);
        void (Iface::*step) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static void checkpoint(R* _recv, ::x10::util::resilient::iterative::ApplicationSnapshotStore* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::GlobalResilientIterativeApp>(_refRecv->_getITables())->checkpoint))(arg0);
    }
    template <class R> static void checkpoint(R _recv, ::x10::util::resilient::iterative::ApplicationSnapshotStore* arg0) {
        _recv->checkpoint(arg0);
    }
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::GlobalResilientIterativeApp>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static x10_boolean isFinished(R* _recv);
    template <class R> static x10_boolean isFinished(R _recv);
    template <class R> static void remake(R* _recv, ::x10::util::resilient::PlaceManager__ChangeDescription arg0, x10_long arg1);
    template <class R> static void remake(R _recv, ::x10::util::resilient::PlaceManager__ChangeDescription arg0, x10_long arg1);
    template <class R> static void step(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::GlobalResilientIterativeApp>(_refRecv->_getITables())->step))();
    }
    template <class R> static void step(R _recv) {
        _recv->step();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::GlobalResilientIterativeApp>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::GlobalResilientIterativeApp>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};


} } } } 
#endif // X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEAPP_H

namespace x10 { namespace util { namespace resilient { namespace iterative { 
class GlobalResilientIterativeApp;
} } } } 

#ifndef X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEAPP_H_NODEPS
#define X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEAPP_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Boolean.h>
#include <x10/util/resilient/iterative/ApplicationSnapshotStore.h>
#include <x10/util/resilient/PlaceManager__ChangeDescription.h>
#include <x10/lang/Long.h>
#ifndef X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEAPP_H_GENERICS
#define X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEAPP_H_GENERICS
template <class R> x10_boolean x10::util::resilient::iterative::GlobalResilientIterativeApp::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::GlobalResilientIterativeApp>(_refRecv->_getITables())->equals))(arg0);
}
template <class R> x10_boolean x10::util::resilient::iterative::GlobalResilientIterativeApp::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
template <class R> x10_boolean x10::util::resilient::iterative::GlobalResilientIterativeApp::isFinished(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::GlobalResilientIterativeApp>(_refRecv->_getITables())->isFinished))();
}
template <class R> x10_boolean x10::util::resilient::iterative::GlobalResilientIterativeApp::isFinished(R _recv) {
    return _recv->isFinished();
}
template <class R> void x10::util::resilient::iterative::GlobalResilientIterativeApp::remake(R* _recv, ::x10::util::resilient::PlaceManager__ChangeDescription arg0, x10_long arg1) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::GlobalResilientIterativeApp>(_refRecv->_getITables())->remake))(arg0, arg1);
}
template <class R> void x10::util::resilient::iterative::GlobalResilientIterativeApp::remake(R _recv, ::x10::util::resilient::PlaceManager__ChangeDescription arg0, x10_long arg1) {
    _recv->remake(arg0, arg1);
}
#endif // X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEAPP_H_GENERICS
#endif // __X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEAPP_H_NODEPS
