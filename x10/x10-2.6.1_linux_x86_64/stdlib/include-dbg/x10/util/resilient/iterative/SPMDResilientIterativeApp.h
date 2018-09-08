#ifndef __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEAPP_H
#define __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEAPP_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace util { namespace resilient { 
class PlaceManager__ChangeDescription;
} } } 
namespace x10 { namespace util { 
class Team;
} } 

namespace x10 { namespace util { namespace resilient { namespace iterative { 

class SPMDResilientIterativeApp   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*equals) (::x10::lang::Any*), ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>* (Iface::*getCheckpointData_local) (), x10_int (Iface::*hashCode) (), x10_boolean (Iface::*isFinished_local) (), void (Iface::*remake) (::x10::util::resilient::PlaceManager__ChangeDescription, ::x10::util::Team), void (Iface::*restore_local) (::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>*, x10_long), void (Iface::*step_local) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : equals(equals), getCheckpointData_local(getCheckpointData_local), hashCode(hashCode), isFinished_local(isFinished_local), remake(remake), restore_local(restore_local), step_local(step_local), toString(toString), typeName(typeName) {}
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>* (Iface::*getCheckpointData_local) ();
        x10_int (Iface::*hashCode) ();
        x10_boolean (Iface::*isFinished_local) ();
        void (Iface::*remake) (::x10::util::resilient::PlaceManager__ChangeDescription, ::x10::util::Team);
        void (Iface::*restore_local) (::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>*, x10_long);
        void (Iface::*step_local) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>* getCheckpointData_local(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::SPMDResilientIterativeApp>(_refRecv->_getITables())->getCheckpointData_local))();
    }
    template <class R> static ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>* getCheckpointData_local(R _recv) {
        return _recv->getCheckpointData_local();
    }
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::SPMDResilientIterativeApp>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static x10_boolean isFinished_local(R* _recv);
    template <class R> static x10_boolean isFinished_local(R _recv);
    template <class R> static void remake(R* _recv, ::x10::util::resilient::PlaceManager__ChangeDescription arg0, ::x10::util::Team arg1);
    template <class R> static void remake(R _recv, ::x10::util::resilient::PlaceManager__ChangeDescription arg0, ::x10::util::Team arg1);
    template <class R> static void restore_local(R* _recv, ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>* arg0, x10_long arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::SPMDResilientIterativeApp>(_refRecv->_getITables())->restore_local))(arg0, arg1);
    }
    template <class R> static void restore_local(R _recv, ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>* arg0, x10_long arg1) {
        _recv->restore_local(arg0, arg1);
    }
    template <class R> static void step_local(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::SPMDResilientIterativeApp>(_refRecv->_getITables())->step_local))();
    }
    template <class R> static void step_local(R _recv) {
        _recv->step_local();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::SPMDResilientIterativeApp>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::SPMDResilientIterativeApp>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};


} } } } 
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEAPP_H

namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SPMDResilientIterativeApp;
} } } } 

#ifndef X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEAPP_H_NODEPS
#define X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEAPP_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Boolean.h>
#include <x10/util/HashMap.h>
#include <x10/lang/String.h>
#include <x10/util/resilient/localstore/Cloneable.h>
#include <x10/util/resilient/PlaceManager__ChangeDescription.h>
#include <x10/util/Team.h>
#include <x10/lang/Long.h>
#ifndef X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEAPP_H_GENERICS
#define X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEAPP_H_GENERICS
template <class R> x10_boolean x10::util::resilient::iterative::SPMDResilientIterativeApp::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::SPMDResilientIterativeApp>(_refRecv->_getITables())->equals))(arg0);
}
template <class R> x10_boolean x10::util::resilient::iterative::SPMDResilientIterativeApp::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
template <class R> x10_boolean x10::util::resilient::iterative::SPMDResilientIterativeApp::isFinished_local(R* _recv) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::SPMDResilientIterativeApp>(_refRecv->_getITables())->isFinished_local))();
}
template <class R> x10_boolean x10::util::resilient::iterative::SPMDResilientIterativeApp::isFinished_local(R _recv) {
    return _recv->isFinished_local();
}
template <class R> void x10::util::resilient::iterative::SPMDResilientIterativeApp::remake(R* _recv, ::x10::util::resilient::PlaceManager__ChangeDescription arg0, ::x10::util::Team arg1) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::x10::util::resilient::iterative::SPMDResilientIterativeApp>(_refRecv->_getITables())->remake))(arg0, arg1);
}
template <class R> void x10::util::resilient::iterative::SPMDResilientIterativeApp::remake(R _recv, ::x10::util::resilient::PlaceManager__ChangeDescription arg0, ::x10::util::Team arg1) {
    _recv->remake(arg0, arg1);
}
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEAPP_H_GENERICS
#endif // __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEAPP_H_NODEPS
