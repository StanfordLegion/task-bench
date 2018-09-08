#ifndef __X10_GLB_GLB_H
#define __X10_GLB_GLB_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_GLB_GLBPARAMETERS_H_NODEPS
#include <x10/glb/GLBParameters.h>
#undef X10_GLB_GLBPARAMETERS_H_NODEPS
#define X10_GLB_GLBPARAMETERS_H_NODEPS
#include <x10/glb/GLBParameters.h>
#undef X10_GLB_GLBPARAMETERS_H_NODEPS
namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class TaskQueue;
} } 
namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class Worker;
} } 
namespace x10 { namespace glb { 
template<class TPMGL(R)> class GLBResult;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace glb { 
class Logger;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 

namespace x10 { namespace glb { 

class GLB_Strings {
  public:
    static ::x10::lang::String sl__154348;
    static ::x10::lang::String sl__154350;
    static ::x10::lang::String sl__154349;
    static ::x10::lang::String sl__154347;
};

template<class TPMGL(Queue), class TPMGL(R)> class GLB;
template <> class GLB<void, void>;
template<class TPMGL(Queue), class TPMGL(R)> class GLB : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(P);
    
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>
      FMGL(plh);
    
    x10_long FMGL(setupTime);
    
    x10_long FMGL(crunchNumberTime);
    
    x10_long FMGL(collectResultTime);
    
    ::x10::glb::GLBResult<TPMGL(R)>* FMGL(rootGlbR);
    
    ::x10::glb::GLBParameters FMGL(glbParams);
    
    void _constructor(::x10::lang::Fun_0_0<TPMGL(Queue)>* init, ::x10::glb::GLBParameters glbParams,
                      x10_boolean tree);
    
    static ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* _make(
             ::x10::lang::Fun_0_0<TPMGL(Queue)>* init, ::x10::glb::GLBParameters glbParams,
             x10_boolean tree);
    
    virtual TPMGL(Queue) taskQueue();
    virtual ::x10::lang::Rail< TPMGL(R) >* run(::x10::lang::VoidFun_0_0* start);
    virtual ::x10::lang::Rail< TPMGL(R) >* runParallel();
    void end(::x10::lang::Rail< TPMGL(R) >* r);
    void collectLifelineStatus(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st);
    virtual ::x10::lang::Rail< TPMGL(R) >* collectResults(
      );
    void printLog(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st);
    virtual ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* x10__glb__GLB____this__x10__glb__GLB(
      );
    virtual void __fieldInitializers_x10_glb_GLB();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::RuntimeType x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::rtt;
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::glb::GLB<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(Queue)>(), ::x10aux::getRTT<TPMGL(R)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.glb.GLB";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 2, params, variances);
}

template <> class GLB<void, void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    static x10_long min(x10_long i, x10_long j);
    
    
};

} } 
#endif // X10_GLB_GLB_H

namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class GLB;
} } 

#ifndef X10_GLB_GLB_H_NODEPS
#define X10_GLB_GLB_H_NODEPS
#include <x10/lang/Long.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/glb/GLBParameters.h>
#include <x10/glb/TaskQueue.h>
#include <x10/glb/Worker.h>
#include <x10/glb/GLBResult.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/System.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Int.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Rail.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Double.h>
#include <x10/glb/Logger.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/GlobalRef.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/util/Team.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Zero.h>
#include <x10/lang/String.h>
#ifndef X10_GLB_GLB_H_GENERICS
#define X10_GLB_GLB_H_GENERICS
#endif // X10_GLB_GLB_H_GENERICS
#ifndef X10_GLB_GLB_H_IMPLEMENTATION
#define X10_GLB_GLB_H_IMPLEMENTATION
#include <x10/glb/GLB.h>

#ifndef X10_GLB_GLB__CLOSURE__1_CLOSURE
#define X10_GLB_GLB__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_GLB__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::template itable <x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* __apply(){
        
        //#line 69 "x10/glb/GLB.x10"
        return ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::_make(init, glbParams->FMGL(n),
                                                                 glbParams->FMGL(w),
                                                                 glbParams->FMGL(l),
                                                                 glbParams->FMGL(z),
                                                                 glbParams->FMGL(m),
                                                                 tree);
        
    }
    
    // captured environment
    ::x10::lang::Fun_0_0<TPMGL(Queue)>* init;
    ::x10::glb::GLBParameters glbParams;
    x10_boolean tree;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->init);
        buf.write(this->glbParams);
        buf.write(this->tree);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::Fun_0_0<TPMGL(Queue)>* that_init = buf.read< ::x10::lang::Fun_0_0<TPMGL(Queue)>*>();
        ::x10::glb::GLBParameters that_glbParams = buf.read< ::x10::glb::GLBParameters>();
        x10_boolean that_tree = buf.read<x10_boolean>();
        x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) >(that_init, that_glbParams, that_tree);
        return this_;
    }
    
    x10_glb_GLB__closure__1(::x10::lang::Fun_0_0<TPMGL(Queue)>* init, ::x10::glb::GLBParameters glbParams, x10_boolean tree) : init(init), glbParams(glbParams), tree(tree) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >(); }
    
    const char* toNativeString() {
        return "x10/glb/GLB.x10:69";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::Fun_0_0< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::template itable <x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) > >x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >, &x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_GLB__CLOSURE__1_CLOSURE
#ifndef X10_GLB_GLB__CLOSURE__5_CLOSURE
#define X10_GLB_GLB__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_GLB__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::glb::Logger*>::template itable <x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::glb::Logger* __apply(){
        return ::x10aux::nullCheck(::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(logger))->x10::glb::Logger::get(
                 (!::x10aux::struct_equals(((saved_this->FMGL(glbParams)->FMGL(v)) & (::x10::glb::GLBParameters::FMGL(SHOW_GLB_FLAG__get)())),
                                           ((x10_int)0))));
        
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* that_saved_this = buf.read< ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>*>();
        x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) >(that_st, that_saved_this);
        return this_;
    }
    
    x10_glb_GLB__closure__5(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* saved_this) : st(st), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::glb::Logger*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::glb::Logger*> >(); }
    
    const char* toNativeString() {
        return "x10/glb/GLB.x10:145";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::Fun_0_0< ::x10::glb::Logger*>::template itable <x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) > >x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::glb::Logger*> >, &x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_GLB__CLOSURE__5_CLOSURE
#ifndef X10_GLB_GLB__CLOSURE__4_CLOSURE
#define X10_GLB_GLB__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_GLB__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*>::template itable <x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::glb::Logger* __apply(x10_long i){
        return ::x10::xrx::Runtime::template evalAt< ::x10::glb::Logger* >(
                 ::x10::lang::Place::_make(((h) + (i))), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::glb::Logger*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::glb::Logger*> >(sizeof(x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R)>)))x10_glb_GLB__closure__5<TPMGL(Queue),TPMGL(R)>(st, saved_this))),
                 ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
    }
    
    // captured environment
    x10_long h;
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->h);
        buf.write(this->st);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        x10_long that_h = buf.read<x10_long>();
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* that_saved_this = buf.read< ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>*>();
        x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) >(that_h, that_st, that_saved_this);
        return this_;
    }
    
    x10_glb_GLB__closure__4(x10_long h, ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* saved_this) : h(h), st(st), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*> >(); }
    
    const char* toNativeString() {
        return "x10/glb/GLB.x10:145";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*>::template itable <x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) > >x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*> >, &x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_GLB__CLOSURE__4_CLOSURE
#ifndef X10_GLB_GLB__CLOSURE__3_CLOSURE
#define X10_GLB_GLB__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_GLB__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::glb::Logger*>::template itable <x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::glb::Logger* __apply(){
        
        //#line 143 "x10/glb/GLB.x10"
        x10_long h = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
        
        //#line 144 "x10/glb/GLB.x10"
        x10_long n = ::x10::glb::GLB<void, void>::min(((x10_long)32ll), ((saved_this->FMGL(P)) - (h)));
        
        //#line 145 "x10/glb/GLB.x10"
        ::x10::lang::Rail< ::x10::glb::Logger* >* logs = ::x10::lang::Rail< ::x10::glb::Logger* >::_make(n,
                                                                                                         reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*> >(sizeof(x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R)>)))x10_glb_GLB__closure__4<TPMGL(Queue),TPMGL(R)>(h, st, saved_this))));
        
        //#line 146 "x10/glb/GLB.x10"
        ::x10::glb::Logger* log = ::x10::glb::Logger::_make(false);
        
        //#line 147 "x10/glb/GLB.x10"
        log->x10::glb::Logger::collect(logs);
        
        //#line 148 "x10/glb/GLB.x10"
        return log;
        
    }
    
    // captured environment
    ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* saved_this;
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->st);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* that_saved_this = buf.read< ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>*>();
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) >(that_saved_this, that_st);
        return this_;
    }
    
    x10_glb_GLB__closure__3(::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* saved_this, ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : saved_this(saved_this), st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::glb::Logger*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::glb::Logger*> >(); }
    
    const char* toNativeString() {
        return "x10/glb/GLB.x10:142-149";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::Fun_0_0< ::x10::glb::Logger*>::template itable <x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) > >x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::glb::Logger*> >, &x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_GLB__CLOSURE__3_CLOSURE
#ifndef X10_GLB_GLB__CLOSURE__2_CLOSURE
#define X10_GLB_GLB__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_GLB__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*>::template itable <x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::glb::Logger* __apply(x10_long i){
        return ::x10::xrx::Runtime::template evalAt< ::x10::glb::Logger* >(
                 ::x10::lang::Place::_make(((i) * (((x10_long)32ll)))), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::glb::Logger*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::glb::Logger*> >(sizeof(x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R)>)))x10_glb_GLB__closure__3<TPMGL(Queue),TPMGL(R)>(saved_this, st))),
                 ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
    }
    
    // captured environment
    ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* saved_this;
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->st);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* that_saved_this = buf.read< ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>*>();
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) >(that_saved_this, that_st);
        return this_;
    }
    
    x10_glb_GLB__closure__2(::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* saved_this, ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : saved_this(saved_this), st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*> >(); }
    
    const char* toNativeString() {
        return "x10/glb/GLB.x10:142-149";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*>::template itable <x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) > >x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*> >, &x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_GLB__CLOSURE__2_CLOSURE
#ifndef X10_GLB_GLB__CLOSURE__7_CLOSURE
#define X10_GLB_GLB__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_GLB__closure__7 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::glb::Logger*>::template itable <x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::glb::Logger* __apply(){
        return ::x10aux::nullCheck(::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(logger))->x10::glb::Logger::get(
                 (!::x10aux::struct_equals(((saved_this->FMGL(glbParams)->FMGL(v)) & (::x10::glb::GLBParameters::FMGL(SHOW_GLB_FLAG__get)())),
                                           ((x10_int)0))));
        
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* that_saved_this = buf.read< ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>*>();
        x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) >(that_st, that_saved_this);
        return this_;
    }
    
    x10_glb_GLB__closure__7(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* saved_this) : st(st), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::glb::Logger*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::glb::Logger*> >(); }
    
    const char* toNativeString() {
        return "x10/glb/GLB.x10:151";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::Fun_0_0< ::x10::glb::Logger*>::template itable <x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) > >x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::glb::Logger*> >, &x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_GLB__CLOSURE__7_CLOSURE
#ifndef X10_GLB_GLB__CLOSURE__6_CLOSURE
#define X10_GLB_GLB__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_GLB__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*>::template itable <x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::glb::Logger* __apply(x10_long i){
        return ::x10::xrx::Runtime::template evalAt< ::x10::glb::Logger* >(
                 ::x10::lang::Place::_make(i), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::glb::Logger*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::glb::Logger*> >(sizeof(x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R)>)))x10_glb_GLB__closure__7<TPMGL(Queue),TPMGL(R)>(st, saved_this))),
                 ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* that_saved_this = buf.read< ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>*>();
        x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) >(that_st, that_saved_this);
        return this_;
    }
    
    x10_glb_GLB__closure__6(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* saved_this) : st(st), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*> >(); }
    
    const char* toNativeString() {
        return "x10/glb/GLB.x10:151";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*>::template itable <x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) > >x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*> >, &x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_GLB__CLOSURE__6_CLOSURE
#ifndef X10_GLB_GLB__CLOSURE__8_CLOSURE
#define X10_GLB_GLB__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_GLB__closure__8 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 173 "x10/glb/GLB.x10"
        if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                     ::x10::lang::Place::_make((resultGlobal)->location))))
        {
            
            //#line 174 "x10/glb/GLB.x10"
            ::x10::lang::GlobalRef< ::x10::glb::GLBResult<TPMGL(R)>* > tmpresultGlobal =
              (__extension__ ({
                ::x10::lang::GlobalRef< ::x10::glb::GLBResult<TPMGL(R)>* > t__101566 =
                  resultGlobal;
                if (!((::x10aux::struct_equals(::x10::lang::Place::_make((t__101566)->location),
                                               ::x10::lang::Place::_make(::x10aux::here)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::glb::GLB_Strings::sl__154350))));
                }
                t__101566;
            }))
            ;
            
            //#line 175 "x10/glb/GLB.x10"
            ::x10::util::Team::FMGL(WORLD__get)()->template allreduce< TPMGL(R) >(
              ::x10aux::nullCheck((tmpresultGlobal)->__apply())->submitResult(),
              ((x10_long)0ll), ::x10aux::nullCheck((tmpresultGlobal)->__apply())->submitResult(),
              ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck((tmpresultGlobal)->__apply())->submitResult())->FMGL(size)),
              ::x10aux::nullCheck((tmpresultGlobal)->__apply())->getReduceOperator());
        } else {
            
            //#line 182 "x10/glb/GLB.x10"
            ::x10::glb::GLBResult<TPMGL(R)>* glbR = ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::getResult(::x10aux::nullCheck(::x10aux::nullCheck(tmpPlh->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(queue)));
            
            //#line 183 "x10/glb/GLB.x10"
            ::x10::util::Team::FMGL(WORLD__get)()->template allreduce< TPMGL(R) >(
              ::x10aux::nullCheck(glbR)->submitResult(), ((x10_long)0ll),
              ::x10aux::nullCheck(glbR)->submitResult(), ((x10_long)0ll),
              (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(glbR)->submitResult())->FMGL(size)),
              ::x10aux::nullCheck(glbR)->getReduceOperator());
        }
        
    }
    
    // captured environment
    ::x10::lang::GlobalRef< ::x10::glb::GLBResult<TPMGL(R)>* > resultGlobal;
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> tmpPlh;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->resultGlobal);
        buf.write(this->tmpPlh);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::glb::GLBResult<TPMGL(R)>* > that_resultGlobal = buf.read< ::x10::lang::GlobalRef< ::x10::glb::GLBResult<TPMGL(R)>* > >();
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_tmpPlh = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) >(that_resultGlobal, that_tmpPlh);
        return this_;
    }
    
    x10_glb_GLB__closure__8(::x10::lang::GlobalRef< ::x10::glb::GLBResult<TPMGL(R)>* > resultGlobal, ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> tmpPlh) : resultGlobal(resultGlobal), tmpPlh(tmpPlh) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/GLB.x10:172-191";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) > >x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_GLB__CLOSURE__8_CLOSURE
#ifndef X10_GLB_GLB__CLOSURE__9_CLOSURE
#define X10_GLB_GLB__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_GLB__closure__9 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 207 "x10/glb/GLB.x10"
        ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::printLog(::x10aux::nullCheck(::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(queue)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_GLB__closure__9(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/GLB.x10:206-208";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) > >x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_GLB__CLOSURE__9_CLOSURE

//#line 25 "x10/glb/GLB.x10"
/**
     * Number of places.
     */

//#line 29 "x10/glb/GLB.x10"
/**
     * Home PlaceLocalHandle of {@link Worker}
     */

//#line 34 "x10/glb/GLB.x10"
/**
     * Workload initialization time.
     */

//#line 38 "x10/glb/GLB.x10"
/**
     * Computation time.
     */

//#line 42 "x10/glb/GLB.x10"
/**
     * Result collection time.
     */

//#line 47 "x10/glb/GLB.x10"
/**
     * {@link GLBResult at root. Used as a vehicle to collect results.}
     */

//#line 52 "x10/glb/GLB.x10"
/**
     * Min helper method.
     */

//#line 57 "x10/glb/GLB.x10"
/**
     * GLB Parameters. {@link GLBParameters}
     */

//#line 65 "x10/glb/GLB.x10"
/**
     * Constructor
     * @param init function closure that can initialize {@link TaskQueue}
     * @param glbParams GLB parameters
     * @tree true if workload is dynamically generated, false if workload can be known upfront. 
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::_constructor(
                                               ::x10::lang::Fun_0_0<TPMGL(Queue)>* init,
                                               ::x10::glb::GLBParameters glbParams,
                                               x10_boolean tree) {
    
    //#line 21 "x10/glb/GLB.x10"
    this->x10::glb::template GLB<TPMGL(Queue), TPMGL(R)>::__fieldInitializers_x10_glb_GLB();
    
    //#line 66 "x10/glb/GLB.x10"
    this->FMGL(glbParams) = glbParams;
    
    //#line 67 "x10/glb/GLB.x10"
    this->FMGL(setupTime) = ::x10::lang::System::nanoTime();
    
    //#line 68 "x10/glb/GLB.x10"
    this->FMGL(plh) = ::x10::lang::PlaceLocalHandle<void>::template makeFlat< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* >(
                        ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >(sizeof(x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R)>)))x10_glb_GLB__closure__1<TPMGL(Queue),TPMGL(R)>(init, glbParams, tree))));
    
    //#line 70 "x10/glb/GLB.x10"
    ::x10::glb::Worker<void, void>::template initContexts< TPMGL(Queue),
    TPMGL(R) >(this->FMGL(plh));
    
    //#line 71 "x10/glb/GLB.x10"
    this->FMGL(setupTime) = ((::x10::lang::System::nanoTime()) - (this->FMGL(setupTime)));
}
template<class TPMGL(Queue), class TPMGL(R)> ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::_make(
                                               ::x10::lang::Fun_0_0<TPMGL(Queue)>* init,
                                               ::x10::glb::GLBParameters glbParams,
                                               x10_boolean tree)
{
    ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* this_ = new (::x10aux::alloc_z< ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)> >()) ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>();
    this_->_constructor(init, glbParams, tree);
    return this_;
}



//#line 77 "x10/glb/GLB.x10"
/**
     * Returns Home {@link TaskQueue}
     */
template<class TPMGL(Queue), class TPMGL(R)> TPMGL(Queue)
  x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::taskQueue() {
    return ::x10aux::nullCheck(this->FMGL(plh)->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(queue);
    
}

//#line 84 "x10/glb/GLB.x10"
/**
     * Run method. This method is called when users does not know the workload upfront.
     * @param start The method that (Root) initializes the workload that can start computation.
     * Other places first get their workload by stealing.
     */
template<class TPMGL(Queue), class TPMGL(R)> ::x10::lang::Rail< TPMGL(R) >*
  x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::run(::x10::lang::VoidFun_0_0* start) {
    
    //#line 85 "x10/glb/GLB.x10"
    this->FMGL(crunchNumberTime) = ::x10::lang::System::nanoTime();
    
    //#line 86 "x10/glb/GLB.x10"
    ::x10aux::nullCheck(this->FMGL(plh)->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::main(
      this->FMGL(plh), start);
    
    //#line 87 "x10/glb/GLB.x10"
    this->FMGL(crunchNumberTime) = ((::x10::lang::System::nanoTime()) - (this->FMGL(crunchNumberTime)));
    
    //#line 88 "x10/glb/GLB.x10"
    ::x10::lang::Rail< TPMGL(R) >* r = this->x10::glb::template GLB<TPMGL(Queue), TPMGL(R)>::collectResults();
    
    //#line 90 "x10/glb/GLB.x10"
    this->x10::glb::template GLB<TPMGL(Queue), TPMGL(R)>::end(
      r);
    
    //#line 91 "x10/glb/GLB.x10"
    return r;
    
}

//#line 98 "x10/glb/GLB.x10"
/**
     * Run method. This method is called when users can know the workload upfront and initialize the
     * workload in {@link TaskQueue}
     */
template<class TPMGL(Queue), class TPMGL(R)> ::x10::lang::Rail< TPMGL(R) >*
  x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::runParallel() {
    
    //#line 99 "x10/glb/GLB.x10"
    this->FMGL(crunchNumberTime) = ::x10::lang::System::nanoTime();
    
    //#line 100 "x10/glb/GLB.x10"
    ::x10::glb::Worker<void, void>::template broadcast< TPMGL(Queue),
    TPMGL(R) >(this->FMGL(plh));
    
    //#line 101 "x10/glb/GLB.x10"
    this->FMGL(crunchNumberTime) = ((::x10::lang::System::nanoTime()) - (this->FMGL(crunchNumberTime)));
    
    //#line 102 "x10/glb/GLB.x10"
    ::x10::lang::Rail< TPMGL(R) >* r = this->x10::glb::template GLB<TPMGL(Queue), TPMGL(R)>::collectResults();
    
    //#line 103 "x10/glb/GLB.x10"
    this->x10::glb::template GLB<TPMGL(Queue), TPMGL(R)>::end(
      r);
    
    //#line 104 "x10/glb/GLB.x10"
    return r;
    
}

//#line 113 "x10/glb/GLB.x10"
/**
     * Print various GLB-related information, including result; time spent in initialization, computation 
     * and result collection; any user specified log information (per place); and GLB statistics.
     * @param r result to print
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::end(
  ::x10::lang::Rail< TPMGL(R) >* r) {
    
    //#line 114 "x10/glb/GLB.x10"
    if ((!::x10aux::struct_equals(((this->FMGL(glbParams)->FMGL(v)) & (::x10::glb::GLBParameters::FMGL(SHOW_RESULT_FLAG__get)())),
                                  ((x10_int)0)))) {
        
        //#line 115 "x10/glb/GLB.x10"
        ::x10aux::nullCheck(this->FMGL(rootGlbR))->display(
          r);
    }
    
    //#line 117 "x10/glb/GLB.x10"
    if ((!::x10aux::struct_equals(((this->FMGL(glbParams)->FMGL(v)) & (::x10::glb::GLBParameters::FMGL(SHOW_TIMING_FLAG__get)())),
                                  ((x10_int)0)))) {
        
        //#line 118 "x10/glb/GLB.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::x10::glb::GLB_Strings::sl__154347), ((((x10_double) (this->FMGL(setupTime)))) / (1.0E9)))));
        
        //#line 119 "x10/glb/GLB.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::x10::glb::GLB_Strings::sl__154348), ((((x10_double) (this->FMGL(crunchNumberTime)))) / (1.0E9)))));
        
        //#line 120 "x10/glb/GLB.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::x10::glb::GLB_Strings::sl__154349), ((((x10_double) (this->FMGL(collectResultTime)))) / (1.0E9)))));
    }
    
    //#line 126 "x10/glb/GLB.x10"
    if ((!::x10aux::struct_equals(((this->FMGL(glbParams)->FMGL(v)) & (::x10::glb::GLBParameters::FMGL(SHOW_TASKFRAME_LOG_FLAG__get)())),
                                  ((x10_int)0)))) {
        
        //#line 127 "x10/glb/GLB.x10"
        this->x10::glb::template GLB<TPMGL(Queue), TPMGL(R)>::printLog(
          this->FMGL(plh));
    }
    
    //#line 129 "x10/glb/GLB.x10"
    if ((!::x10aux::struct_equals(((this->FMGL(glbParams)->FMGL(v)) & (::x10::glb::GLBParameters::FMGL(SHOW_GLB_FLAG__get)())),
                                  ((x10_int)0)))) {
        
        //#line 130 "x10/glb/GLB.x10"
        this->x10::glb::template GLB<TPMGL(Queue), TPMGL(R)>::collectLifelineStatus(
          this->FMGL(plh));
    }
    
}

//#line 138 "x10/glb/GLB.x10"
/**
     * Collect GLB statistics
     * @param st PlaceLocalHandle for {@link Worker}
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::collectLifelineStatus(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 139 "x10/glb/GLB.x10"
    ::x10::lang::Rail< ::x10::glb::Logger* >* logs;
    
    //#line 141 "x10/glb/GLB.x10"
    if (((this->FMGL(P)) >= (((x10_long)1024ll)))) {
        
        //#line 142 "x10/glb/GLB.x10"
        logs = ::x10::lang::Rail< ::x10::glb::Logger* >::_make(((this->FMGL(P)) / ::x10aux::zeroCheck(((x10_long)32ll))),
                                                               reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*> >(sizeof(x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R)>)))x10_glb_GLB__closure__2<TPMGL(Queue),TPMGL(R)>(this, st))));
    } else {
        
        //#line 151 "x10/glb/GLB.x10"
        logs = ::x10::lang::Rail< ::x10::glb::Logger* >::_make(this->FMGL(P),
                                                               reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::glb::Logger*> >(sizeof(x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R)>)))x10_glb_GLB__closure__6<TPMGL(Queue),TPMGL(R)>(st, this))));
    }
    
    //#line 153 "x10/glb/GLB.x10"
    ::x10::glb::Logger* log = ::x10::glb::Logger::_make(false);
    
    //#line 154 "x10/glb/GLB.x10"
    log->x10::glb::Logger::collect(logs);
    
    //#line 155 "x10/glb/GLB.x10"
    log->x10::glb::Logger::stats();
}

//#line 162 "x10/glb/GLB.x10"
/**
     * Collect results from all places and reduce them to the final result.
     * @return Final result.
     */
template<class TPMGL(Queue), class TPMGL(R)> ::x10::lang::Rail< TPMGL(R) >*
  x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::collectResults() {
    
    //#line 163 "x10/glb/GLB.x10"
    this->FMGL(collectResultTime) = ::x10::lang::System::nanoTime();
    
    //#line 166 "x10/glb/GLB.x10"
    this->FMGL(rootGlbR) = ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::getResult(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(plh)->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(queue)));
    
    //#line 167 "x10/glb/GLB.x10"
    ::x10::lang::GlobalRef< ::x10::glb::GLBResult<TPMGL(R)>* > resultGlobal =
      ::x10::lang::GlobalRef< ::x10::glb::GLBResult<TPMGL(R)>* >(this->FMGL(rootGlbR));
    
    //#line 168 "x10/glb/GLB.x10"
    ::x10::lang::Rail< TPMGL(R) >* tmpRail = ::x10aux::nullCheck(this->FMGL(rootGlbR))->submitResult();
    
    //#line 169 "x10/glb/GLB.x10"
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> tmpPlh =
      this->FMGL(plh);
    
    //#line 172 "x10/glb/GLB.x10"
    ::x10::lang::Place::places()->broadcastFlat(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R)>)))x10_glb_GLB__closure__8<TPMGL(Queue),TPMGL(R)>(resultGlobal, tmpPlh))));
    
    //#line 192 "x10/glb/GLB.x10"
    this->FMGL(collectResultTime) = ((::x10::lang::System::nanoTime()) - (this->FMGL(collectResultTime)));
    
    //#line 194 "x10/glb/GLB.x10"
    return tmpRail;
    
}

//#line 203 "x10/glb/GLB.x10"
/**
     * Print logging information on each place if user is interested in collecting per place
     * information, i.e., statistics instrumented.
     * @param st PLH for {@link Worker}
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::printLog(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 204 "x10/glb/GLB.x10"
    x10_long P = ((x10_long)x10rt_nhosts());
    
    //#line 205 "x10/glb/GLB.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (P)); i = ((i) + (((x10_long)1ll))))
        {
            {
                
                //#line 206 "x10/glb/GLB.x10"
                ::x10::xrx::Runtime::runAt(::x10::lang::Place::_make(i),
                                           reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R)>)))x10_glb_GLB__closure__9<TPMGL(Queue),TPMGL(R)>(st))),
                                           ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
    }
    
}

//#line 21 "x10/glb/GLB.x10"
template<class TPMGL(Queue), class TPMGL(R)> ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>*
  x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::x10__glb__GLB____this__x10__glb__GLB(
  ) {
    return this;
    
}
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::__fieldInitializers_x10_glb_GLB(
  ) {
    this->FMGL(P) = ((x10_long)x10rt_nhosts());
    this->FMGL(setupTime) = ((x10_long)0ll);
    this->FMGL(crunchNumberTime) = ((x10_long)0ll);
    this->FMGL(collectResultTime) = ((x10_long)0ll);
    this->FMGL(rootGlbR) = (::x10aux::class_cast_unchecked< ::x10::glb::GLBResult<TPMGL(R)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(glbParams) = ::x10aux::zeroValue< ::x10::glb::GLBParameters >();
}
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::_deserializer);

template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(P));
    buf.write(this->FMGL(plh));
    buf.write(this->FMGL(setupTime));
    buf.write(this->FMGL(crunchNumberTime));
    buf.write(this->FMGL(collectResultTime));
    buf.write(this->FMGL(rootGlbR));
    buf.write(this->FMGL(glbParams));
    
}

template<class TPMGL(Queue), class TPMGL(R)> ::x10::lang::Reference* ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>* this_ = new (::x10aux::alloc_z< ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)> >()) ::x10::glb::GLB<TPMGL(Queue), TPMGL(R)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::GLB<TPMGL(Queue), TPMGL(R)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(P) = buf.read<x10_long>();
    FMGL(plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
    FMGL(setupTime) = buf.read<x10_long>();
    FMGL(crunchNumberTime) = buf.read<x10_long>();
    FMGL(collectResultTime) = buf.read<x10_long>();
    FMGL(rootGlbR) = buf.read< ::x10::glb::GLBResult<TPMGL(R)>*>();
    FMGL(glbParams) = buf.read< ::x10::glb::GLBParameters>();
}

#endif // X10_GLB_GLB_H_IMPLEMENTATION
#endif // __X10_GLB_GLB_H_NODEPS
