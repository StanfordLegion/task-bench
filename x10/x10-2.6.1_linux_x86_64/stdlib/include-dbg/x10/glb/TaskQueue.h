#ifndef __X10_GLB_TASKQUEUE_H
#define __X10_GLB_TASKQUEUE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class Context;
} } 
namespace x10 { namespace glb { 
class TaskBag;
} } 
namespace x10 { namespace glb { 
template<class TPMGL(R)> class GLBResult;
} } 

namespace x10 { namespace glb { 

template<class TPMGL(Queue), class TPMGL(R)> class TaskQueue;
template <> class TaskQueue<void, void>;
template<class TPMGL(Queue), class TPMGL(R)> class TaskQueue   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_long (Iface::*count) (), x10_boolean (Iface::*equals) (::x10::lang::Any*), ::x10::glb::GLBResult<TPMGL(R)>* (Iface::*getResult) (), x10_int (Iface::*hashCode) (), void (Iface::*merge) (::x10::glb::TaskBag*), void (Iface::*printLog) (), x10_boolean (Iface::*process) (x10_long, ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>*), ::x10::glb::TaskBag* (Iface::*split) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : count(count), equals(equals), getResult(getResult), hashCode(hashCode), merge(merge), printLog(printLog), process(process), split(split), toString(toString), typeName(typeName) {}
        x10_long (Iface::*count) ();
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        ::x10::glb::GLBResult<TPMGL(R)>* (Iface::*getResult) ();
        x10_int (Iface::*hashCode) ();
        void (Iface::*merge) (::x10::glb::TaskBag*);
        void (Iface::*printLog) ();
        x10_boolean (Iface::*process) (x10_long, ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>*);
        ::x10::glb::TaskBag* (Iface::*split) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static x10_long count(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)> >(_refRecv->_getITables())->count))();
    }
    template <class R> static x10_long count(R _recv) {
        return _recv->count();
    }
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static ::x10::glb::GLBResult<TPMGL(R)>* getResult(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)> >(_refRecv->_getITables())->getResult))();
    }
    template <class R> static ::x10::glb::GLBResult<TPMGL(R)>* getResult(R _recv) {
        return _recv->getResult();
    }
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)> >(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static void merge(R* _recv, ::x10::glb::TaskBag* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)> >(_refRecv->_getITables())->merge))(arg0);
    }
    template <class R> static void merge(R _recv, ::x10::glb::TaskBag* arg0) {
        _recv->merge(arg0);
    }
    template <class R> static void printLog(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)> >(_refRecv->_getITables())->printLog))();
    }
    template <class R> static void printLog(R _recv) {
        _recv->printLog();
    }
    template <class R> static x10_boolean process(R* _recv, x10_long arg0, ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* arg1);
    template <class R> static x10_boolean process(R _recv, x10_long arg0, ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* arg1);
    template <class R> static ::x10::glb::TaskBag* split(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)> >(_refRecv->_getITables())->split))();
    }
    template <class R> static ::x10::glb::TaskBag* split(R _recv) {
        return _recv->split();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)> >(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)> >(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};

template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::RuntimeType x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::rtt;
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::glb::TaskQueue<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(Queue)>(), ::x10aux::getRTT<TPMGL(R)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.glb.TaskQueue";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::interface_kind, 1, parents, 2, params, variances);
}

template <> class TaskQueue<void, void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_GLB_TASKQUEUE_H

namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class TaskQueue;
} } 

#ifndef X10_GLB_TASKQUEUE_H_NODEPS
#define X10_GLB_TASKQUEUE_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <x10/glb/Context.h>
#include <x10/lang/Boolean.h>
#include <x10/glb/TaskBag.h>
#include <x10/glb/GLBResult.h>
#ifndef X10_GLB_TASKQUEUE_H_GENERICS
#define X10_GLB_TASKQUEUE_H_GENERICS
template<class TPMGL(Queue), class TPMGL(R)> template <class R> x10_boolean x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)> >(_refRecv->_getITables())->equals))(arg0);
}
template<class TPMGL(Queue), class TPMGL(R)> template <class R> x10_boolean x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
template<class TPMGL(Queue), class TPMGL(R)> template <class R> x10_boolean x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::process(R* _recv, x10_long arg0, ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* arg1) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)> >(_refRecv->_getITables())->process))(arg0, arg1);
}
template<class TPMGL(Queue), class TPMGL(R)> template <class R> x10_boolean x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::process(R _recv, x10_long arg0, ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* arg1) {
    return _recv->process(arg0, arg1);
}
#endif // X10_GLB_TASKQUEUE_H_GENERICS
#ifndef X10_GLB_TASKQUEUE_H_IMPLEMENTATION
#define X10_GLB_TASKQUEUE_H_IMPLEMENTATION
#include <x10/glb/TaskQueue.h>

#endif // X10_GLB_TASKQUEUE_H_IMPLEMENTATION
#endif // __X10_GLB_TASKQUEUE_H_NODEPS
