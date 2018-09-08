#ifndef __X10_GLB_WORKER_H
#define __X10_GLB_WORKER_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class TaskQueue;
} } 
namespace x10 { namespace glb { 
template<class TPMGL(T)> class FixedSizeStack;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace glb { 
class Logger;
} } 
namespace x10 { namespace compiler { 
class Volatile;
} } 
namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class Context;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class PlaceLocalHandle;
} } 
namespace x10 { namespace glb { 
class TaskBag;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class Uncounted;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace compiler { 
class Pragma;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace glb { 

class Worker_Strings {
  public:
    static ::x10::lang::String sl__164397;
};

template<class TPMGL(Queue), class TPMGL(R)> class Worker;
template <> class Worker<void, void>;
template<class TPMGL(Queue), class TPMGL(R)> class Worker : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    TPMGL(Queue) FMGL(queue);
    
    ::x10::glb::FixedSizeStack<x10_long>* FMGL(lifelineThieves);
    
    ::x10::glb::FixedSizeStack<x10_long>* FMGL(thieves);
    
    ::x10::lang::Rail< x10_long >* FMGL(lifelines);
    
    ::x10::lang::Rail< x10_boolean >* FMGL(lifelinesActivated);
    
    x10_int FMGL(n);
    
    x10_int FMGL(w);
    
    x10_int FMGL(m);
    
    ::x10::util::Random* FMGL(random);
    
    ::x10::lang::Rail< x10_long >* FMGL(victims);
    
    ::x10::glb::Logger* FMGL(logger);
    
    volatile x10_boolean FMGL(active);
    
    volatile x10_boolean FMGL(empty);
    
    volatile x10_boolean FMGL(waiting);
    
    x10_long FMGL(P);
    
    ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* FMGL(context);
    
    void _constructor(::x10::lang::Fun_0_0<TPMGL(Queue)>* init, x10_int n,
                      x10_int w, x10_int l, x10_int z, x10_int m,
                      x10_boolean tree);
    
    static ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* _make(::x10::lang::Fun_0_0<TPMGL(Queue)>* init,
                                                             x10_int n,
                                                             x10_int w,
                                                             x10_int l,
                                                             x10_int z,
                                                             x10_int m,
                                                             x10_boolean tree);
    
    virtual void processStack(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st);
    virtual void give(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st,
                      ::x10::glb::TaskBag* loot);
    virtual void distribute(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st);
    virtual void reject(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st);
    virtual x10_boolean steal(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st);
    virtual void request(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st,
                         x10_long thief, x10_boolean lifeline);
    virtual void processLoot(::x10::glb::TaskBag* loot, x10_boolean lifeline);
    virtual void deal(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st,
                      ::x10::glb::TaskBag* loot, x10_long source);
    virtual void main(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st,
                      ::x10::lang::VoidFun_0_0* start);
    virtual void main(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st);
    virtual ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >*
      getYieldPoint();
    virtual void setContext(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st);
    virtual ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* x10__glb__Worker____this__x10__glb__Worker(
      );
    virtual void __fieldInitializers_x10_glb_Worker();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::RuntimeType x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::rtt;
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::glb::Worker<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(Queue)>(), ::x10aux::getRTT<TPMGL(R)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.glb.Worker";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 2, params, variances);
}

template <> class Worker<void, void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    static void error(::x10::lang::CheckedThrowable* v);
    
    static x10_long min(x10_long i, x10_long j);
    
    template<class TPMGL(Queue), class TPMGL(R)> static void
      broadcast(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st);
    
    template<class TPMGL(Queue), class TPMGL(R)> static void
      initContexts(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st);
    
    
};

} } 
#endif // X10_GLB_WORKER_H

namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class Worker;
} } 

#ifndef X10_GLB_WORKER_H_NODEPS
#define X10_GLB_WORKER_H_NODEPS
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <x10/glb/TaskQueue.h>
#include <x10/glb/FixedSizeStack.h>
#include <x10/lang/Rail.h>
#include <x10/util/Random.h>
#include <x10/glb/Logger.h>
#include <x10/compiler/Volatile.h>
#include <x10/glb/Context.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/glb/TaskBag.h>
#include <x10/lang/Place.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/Uncounted.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/xrx/FinishState.h>
#include <x10/compiler/Pragma.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Zero.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_GLB_WORKER_H_GENERICS
#define X10_GLB_WORKER_H_GENERICS
#endif // X10_GLB_WORKER_H_GENERICS
#ifndef X10_GLB_WORKER_H_IMPLEMENTATION
#define X10_GLB_WORKER_H_IMPLEMENTATION
#include <x10/glb/Worker.h>

#ifndef X10_GLB_WORKER__CLOSURE__1_CLOSURE
#define X10_GLB_WORKER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118341->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st__118341, loot__118342, victim__118332);
        ::x10aux::nullCheck(st__118341->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118341;
    ::x10::glb::TaskBag* loot__118342;
    x10_long victim__118332;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118341);
        buf.write(this->loot__118342);
        buf.write(this->victim__118332);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118341 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot__118342 = buf.read< ::x10::glb::TaskBag*>();
        x10_long that_victim__118332 = buf.read<x10_long>();
        x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >(that_st__118341, that_loot__118342, that_victim__118332);
        return this_;
    }
    
    x10_glb_Worker__closure__1(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118341, ::x10::glb::TaskBag* loot__118342, x10_long victim__118332) : st__118341(st__118341), loot__118342(loot__118342), victim__118332(victim__118332) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:168";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__1_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__2_CLOSURE
#define X10_GLB_WORKER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118341->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st__118341, loot__118342, ((x10_long)-1ll));
        ::x10aux::nullCheck(st__118341->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118341;
    ::x10::glb::TaskBag* loot__118342;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118341);
        buf.write(this->loot__118342);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118341 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot__118342 = buf.read< ::x10::glb::TaskBag*>();
        x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >(that_st__118341, that_loot__118342);
        return this_;
    }
    
    x10_glb_Worker__closure__2(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118341, ::x10::glb::TaskBag* loot__118342) : st__118341(st__118341), loot__118342(loot__118342) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:171";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__2_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__3_CLOSURE
#define X10_GLB_WORKER__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118341->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st__118341, loot__118342, victim__118332);
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118341;
    ::x10::glb::TaskBag* loot__118342;
    x10_long victim__118332;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118341);
        buf.write(this->loot__118342);
        buf.write(this->victim__118332);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118341 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot__118342 = buf.read< ::x10::glb::TaskBag*>();
        x10_long that_victim__118332 = buf.read<x10_long>();
        x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >(that_st__118341, that_loot__118342, that_victim__118332);
        return this_;
    }
    
    x10_glb_Worker__closure__3(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118341, ::x10::glb::TaskBag* loot__118342, x10_long victim__118332) : st__118341(st__118341), loot__118342(loot__118342), victim__118332(victim__118332) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:176";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__3_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__4_CLOSURE
#define X10_GLB_WORKER__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118356->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118356;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118356);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118356 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >(that_st__118356);
        return this_;
    }
    
    x10_glb_Worker__closure__4(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118356) : st__118356(st__118356) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:202";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__4_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__5_CLOSURE
#define X10_GLB_WORKER__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118356->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118356;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118356);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118356 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >(that_st__118356);
        return this_;
    }
    
    x10_glb_Worker__closure__5(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118356) : st__118356(st__118356) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:204";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__5_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__6_CLOSURE
#define X10_GLB_WORKER__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118365->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118365;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118365);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118365 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >(that_st__118365);
        return this_;
    }
    
    x10_glb_Worker__closure__6(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118365) : st__118365(st__118365) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:202";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__6_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__7_CLOSURE
#define X10_GLB_WORKER__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__7 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118365->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118365;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118365);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118365 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >(that_st__118365);
        return this_;
    }
    
    x10_glb_Worker__closure__7(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118365) : st__118365(st__118365) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:204";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__7_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__8_CLOSURE
#define X10_GLB_WORKER__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__8 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st, loot, victim);
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    ::x10::glb::TaskBag* loot;
    x10_long victim;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
        buf.write(this->loot);
        buf.write(this->victim);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot = buf.read< ::x10::glb::TaskBag*>();
        x10_long that_victim = buf.read<x10_long>();
        x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >(that_st, that_loot, that_victim);
        return this_;
    }
    
    x10_glb_Worker__closure__8(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, ::x10::glb::TaskBag* loot, x10_long victim) : st(st), loot(loot), victim(victim) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:168";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__8_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__9_CLOSURE
#define X10_GLB_WORKER__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__9 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st, loot, ((x10_long)-1ll));
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    ::x10::glb::TaskBag* loot;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
        buf.write(this->loot);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot = buf.read< ::x10::glb::TaskBag*>();
        x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >(that_st, that_loot);
        return this_;
    }
    
    x10_glb_Worker__closure__9(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, ::x10::glb::TaskBag* loot) : st(st), loot(loot) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:171";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__9_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__10_CLOSURE
#define X10_GLB_WORKER__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__10 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st, loot, victim);
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    ::x10::glb::TaskBag* loot;
    x10_long victim;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
        buf.write(this->loot);
        buf.write(this->victim);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot = buf.read< ::x10::glb::TaskBag*>();
        x10_long that_victim = buf.read<x10_long>();
        x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >(that_st, that_loot, that_victim);
        return this_;
    }
    
    x10_glb_Worker__closure__10(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, ::x10::glb::TaskBag* loot, x10_long victim) : st(st), loot(loot), victim(victim) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:176";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__10_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__11_CLOSURE
#define X10_GLB_WORKER__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__11 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118384->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st__118384, loot__118385, victim__118374);
        ::x10aux::nullCheck(st__118384->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118384;
    ::x10::glb::TaskBag* loot__118385;
    x10_long victim__118374;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118384);
        buf.write(this->loot__118385);
        buf.write(this->victim__118374);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118384 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot__118385 = buf.read< ::x10::glb::TaskBag*>();
        x10_long that_victim__118374 = buf.read<x10_long>();
        x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >(that_st__118384, that_loot__118385, that_victim__118374);
        return this_;
    }
    
    x10_glb_Worker__closure__11(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118384, ::x10::glb::TaskBag* loot__118385, x10_long victim__118374) : st__118384(st__118384), loot__118385(loot__118385), victim__118374(victim__118374) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:168";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__11_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__12_CLOSURE
#define X10_GLB_WORKER__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__12 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118384->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st__118384, loot__118385, ((x10_long)-1ll));
        ::x10aux::nullCheck(st__118384->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118384;
    ::x10::glb::TaskBag* loot__118385;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118384);
        buf.write(this->loot__118385);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118384 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot__118385 = buf.read< ::x10::glb::TaskBag*>();
        x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >(that_st__118384, that_loot__118385);
        return this_;
    }
    
    x10_glb_Worker__closure__12(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118384, ::x10::glb::TaskBag* loot__118385) : st__118384(st__118384), loot__118385(loot__118385) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:171";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__12_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__13_CLOSURE
#define X10_GLB_WORKER__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__13 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118384->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st__118384, loot__118385, victim__118374);
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118384;
    ::x10::glb::TaskBag* loot__118385;
    x10_long victim__118374;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118384);
        buf.write(this->loot__118385);
        buf.write(this->victim__118374);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118384 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot__118385 = buf.read< ::x10::glb::TaskBag*>();
        x10_long that_victim__118374 = buf.read<x10_long>();
        x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >(that_st__118384, that_loot__118385, that_victim__118374);
        return this_;
    }
    
    x10_glb_Worker__closure__13(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118384, ::x10::glb::TaskBag* loot__118385, x10_long victim__118374) : st__118384(st__118384), loot__118385(loot__118385), victim__118374(victim__118374) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:176";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__13_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__14_CLOSURE
#define X10_GLB_WORKER__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__14 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
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
        x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__14(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:202";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__14_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__15_CLOSURE
#define X10_GLB_WORKER__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__15 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
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
        x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__15(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:204";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__15_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__16_CLOSURE
#define X10_GLB_WORKER__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__16 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::request(
          st, p, false);
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    x10_long p;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
        buf.write(this->p);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_long that_p = buf.read<x10_long>();
        x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) >(that_st, that_p);
        return this_;
    }
    
    x10_glb_Worker__closure__16(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, x10_long p) : st(st), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:230";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__16_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__17_CLOSURE
#define X10_GLB_WORKER__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__17 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::request(
          st, p, true);
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    x10_long p;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
        buf.write(this->p);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_long that_p = buf.read<x10_long>();
        x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) >(that_st, that_p);
        return this_;
    }
    
    x10_glb_Worker__closure__17(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, x10_long p) : st(st), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:241";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__17_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__18_CLOSURE
#define X10_GLB_WORKER__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__18 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
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
        x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__18(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:261";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__18_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__20_CLOSURE
#define X10_GLB_WORKER__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__20 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118439->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st__118439, loot__118440, victim__118430);
        ::x10aux::nullCheck(st__118439->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118439;
    ::x10::glb::TaskBag* loot__118440;
    x10_long victim__118430;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118439);
        buf.write(this->loot__118440);
        buf.write(this->victim__118430);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118439 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot__118440 = buf.read< ::x10::glb::TaskBag*>();
        x10_long that_victim__118430 = buf.read<x10_long>();
        x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) >(that_st__118439, that_loot__118440, that_victim__118430);
        return this_;
    }
    
    x10_glb_Worker__closure__20(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118439, ::x10::glb::TaskBag* loot__118440, x10_long victim__118430) : st__118439(st__118439), loot__118440(loot__118440), victim__118430(victim__118430) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:168";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__20_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__21_CLOSURE
#define X10_GLB_WORKER__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__21 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118439->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st__118439, loot__118440, ((x10_long)-1ll));
        ::x10aux::nullCheck(st__118439->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118439;
    ::x10::glb::TaskBag* loot__118440;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118439);
        buf.write(this->loot__118440);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118439 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot__118440 = buf.read< ::x10::glb::TaskBag*>();
        x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) >(that_st__118439, that_loot__118440);
        return this_;
    }
    
    x10_glb_Worker__closure__21(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118439, ::x10::glb::TaskBag* loot__118440) : st__118439(st__118439), loot__118440(loot__118440) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:171";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__21_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__22_CLOSURE
#define X10_GLB_WORKER__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__22 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118439->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st__118439, loot__118440, victim__118430);
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118439;
    ::x10::glb::TaskBag* loot__118440;
    x10_long victim__118430;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118439);
        buf.write(this->loot__118440);
        buf.write(this->victim__118430);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118439 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot__118440 = buf.read< ::x10::glb::TaskBag*>();
        x10_long that_victim__118430 = buf.read<x10_long>();
        x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) >(that_st__118439, that_loot__118440, that_victim__118430);
        return this_;
    }
    
    x10_glb_Worker__closure__22(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118439, ::x10::glb::TaskBag* loot__118440, x10_long victim__118430) : st__118439(st__118439), loot__118440(loot__118440), victim__118430(victim__118430) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:176";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__22_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__23_CLOSURE
#define X10_GLB_WORKER__CLOSURE__23_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__23 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118454->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118454;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118454);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118454 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) >(that_st__118454);
        return this_;
    }
    
    x10_glb_Worker__closure__23(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118454) : st__118454(st__118454) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:202";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__23_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__24_CLOSURE
#define X10_GLB_WORKER__CLOSURE__24_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__24 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__118454->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118454;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__118454);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__118454 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) >(that_st__118454);
        return this_;
    }
    
    x10_glb_Worker__closure__24(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118454) : st__118454(st__118454) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:204";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__24_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__19_CLOSURE
#define X10_GLB_WORKER__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__19 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >::template itable <x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st){
        ::x10::xrx::Runtime::probe();
        ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__118451 = saved_this;
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118452 =
          st;
        
        //#line 186 "x10/glb/Worker.x10"
        ::x10::glb::TaskBag* loot__118441;
        
        //#line 187 "x10/glb/Worker.x10"
        while (((((((__extension__ ({
                     ::x10::glb::FixedSizeStack<x10_long>* this__118442 =
                       ::x10aux::nullCheck(this__118451)->FMGL(thieves);
                     ::x10aux::nullCheck(this__118442)->FMGL(size);
                 }))
                 ) > (((x10_long)0ll))) || (((__extension__ ({
                     ::x10::glb::FixedSizeStack<x10_long>* this__118443 =
                       ::x10aux::nullCheck(this__118451)->FMGL(lifelineThieves);
                     ::x10aux::nullCheck(this__118443)->FMGL(size);
                 }))
                 ) > (((x10_long)0ll))))) && (!::x10aux::struct_equals((loot__118441 =
                                                                          ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::split(::x10aux::nullCheck(::x10aux::nullCheck(this__118451)->FMGL(queue)))),
                                                                       reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            
            //#line 188 "x10/glb/Worker.x10"
            ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118439 =
              st__118452;
            ::x10::glb::TaskBag* loot__118440 = loot__118441;
            
            //#line 162 "x10/glb/Worker.x10"
            x10_long victim__118430 = ((x10_long)::x10aux::here);
            
            //#line 163 "x10/glb/Worker.x10"
            ::x10::glb::Logger* obj__118429 = ::x10aux::nullCheck(this__118451)->FMGL(logger);
            ::x10aux::nullCheck(obj__118429)->FMGL(nodesGiven) =
              ((::x10aux::nullCheck(obj__118429)->FMGL(nodesGiven)) + (::x10::glb::TaskBag::size(::x10aux::nullCheck(loot__118441))));
            
            //#line 164 "x10/glb/Worker.x10"
            if ((((__extension__ ({
                    ::x10::glb::FixedSizeStack<x10_long>* this__118431 =
                      ::x10aux::nullCheck(this__118451)->FMGL(thieves);
                    ::x10aux::nullCheck(this__118431)->FMGL(size);
                }))
                ) > (((x10_long)0ll)))) {
                
                //#line 165 "x10/glb/Worker.x10"
                x10_long thief__118432 = (__extension__ ({
                    ::x10::glb::FixedSizeStack<x10_long>* this__118433 =
                      ::x10aux::nullCheck(this__118451)->FMGL(thieves);
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__118433)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
                      ::x10aux::nullCheck(this__118433)->FMGL(size) =
                        ((::x10aux::nullCheck(this__118433)->FMGL(size)) - (((x10_long)1ll))));
                }))
                ;
                
                //#line 166 "x10/glb/Worker.x10"
                if (((thief__118432) >= (((x10_long)0ll))))
                {
                    
                    //#line 167 "x10/glb/Worker.x10"
                    ::x10::glb::Logger* obj__118426 = ::x10aux::nullCheck(this__118451)->FMGL(logger);
                    ::x10aux::nullCheck(obj__118426)->FMGL(lifelineStealsSuffered) =
                      ((::x10aux::nullCheck(obj__118426)->FMGL(lifelineStealsSuffered)) + (((x10_long)1ll)));
                    
                    //#line 168 "x10/glb/Worker.x10"
                    ::x10::xrx::Runtime::runUncountedAsync(
                      (__extension__ ({
                          ::x10::lang::Place alloc__118434 =
                             ::x10::lang::Place::_alloc();
                          (alloc__118434)->::x10::lang::Place::_constructor(
                            thief__118432);
                          alloc__118434;
                      }))
                      , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__20<TPMGL(Queue),TPMGL(R)>(st__118439, loot__118440, victim__118430))),
                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                } else {
                    
                    //#line 170 "x10/glb/Worker.x10"
                    ::x10::glb::Logger* obj__118427 = ::x10aux::nullCheck(this__118451)->FMGL(logger);
                    ::x10aux::nullCheck(obj__118427)->FMGL(stealsSuffered) =
                      ((::x10aux::nullCheck(obj__118427)->FMGL(stealsSuffered)) + (((x10_long)1ll)));
                    
                    //#line 171 "x10/glb/Worker.x10"
                    ::x10::xrx::Runtime::runUncountedAsync(
                      (__extension__ ({
                          ::x10::lang::Place alloc__118435 =
                             ::x10::lang::Place::_alloc();
                          (alloc__118435)->::x10::lang::Place::_constructor(
                            (((-(thief__118432))) - (((x10_long)1ll))));
                          alloc__118435;
                      }))
                      , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__21<TPMGL(Queue),TPMGL(R)>(st__118439, loot__118440))),
                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                }
                
            } else {
                
                //#line 174 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118428 = ::x10aux::nullCheck(this__118451)->FMGL(logger);
                ::x10aux::nullCheck(obj__118428)->FMGL(lifelineStealsSuffered) =
                  ((::x10aux::nullCheck(obj__118428)->FMGL(lifelineStealsSuffered)) + (((x10_long)1ll)));
                
                //#line 175 "x10/glb/Worker.x10"
                x10_long thief__118436 = (__extension__ ({
                    ::x10::glb::FixedSizeStack<x10_long>* this__118437 =
                      ::x10aux::nullCheck(this__118451)->FMGL(lifelineThieves);
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__118437)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
                      ::x10aux::nullCheck(this__118437)->FMGL(size) =
                        ((::x10aux::nullCheck(this__118437)->FMGL(size)) - (((x10_long)1ll))));
                }))
                ;
                
                //#line 176 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runAsync((__extension__ ({
                                                  ::x10::lang::Place alloc__118438 =
                                                     ::x10::lang::Place::_alloc();
                                                  (alloc__118438)->::x10::lang::Place::_constructor(
                                                    thief__118436);
                                                  alloc__118438;
                                              }))
                                              , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__22<TPMGL(Queue),TPMGL(R)>(st__118439, loot__118440, victim__118430))),
                                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
            
        }
        
        //#line 452 "x10/glb/Worker.x10"
        ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__118453 =
          saved_this;
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118454 =
          st;
        
        //#line 198 "x10/glb/Worker.x10"
        while ((((__extension__ ({
                   ::x10::glb::FixedSizeStack<x10_long>* this__118446 =
                     ::x10aux::nullCheck(this__118453)->FMGL(thieves);
                   ::x10aux::nullCheck(this__118446)->FMGL(size);
               }))
               ) > (((x10_long)0ll)))) {
            
            //#line 199 "x10/glb/Worker.x10"
            x10_long thief__118447 = (__extension__ ({
                ::x10::glb::FixedSizeStack<x10_long>* this__118448 =
                  ::x10aux::nullCheck(this__118453)->FMGL(thieves);
                ::x10aux::nullCheck(::x10aux::nullCheck(this__118448)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
                  ::x10aux::nullCheck(this__118448)->FMGL(size) =
                    ((::x10aux::nullCheck(this__118448)->FMGL(size)) - (((x10_long)1ll))));
            }))
            ;
            
            //#line 200 "x10/glb/Worker.x10"
            if (((thief__118447) >= (((x10_long)0ll)))) {
                
                //#line 201 "x10/glb/Worker.x10"
                ::x10::glb::FixedSizeStack<x10_long>* this__118444 =
                  ::x10aux::nullCheck(this__118453)->FMGL(lifelineThieves);
                
                //#line 49 "x10/glb/FixedSizeStack.x10"
                ::x10aux::nullCheck(::x10aux::nullCheck(this__118444)->FMGL(data))->x10::lang::template Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this__118444)->FMGL(size) =
                    ((::x10aux::nullCheck(this__118444)->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
                  thief__118447);
                
                //#line 202 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                           ::x10::lang::Place alloc__118449 =
                                                             
                                                           ::x10::lang::Place::_alloc();
                                                           (alloc__118449)->::x10::lang::Place::_constructor(
                                                             thief__118447);
                                                           alloc__118449;
                                                       }))
                                                       , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__23<TPMGL(Queue),TPMGL(R)>(st__118454))),
                                                       ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            } else {
                
                //#line 204 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                           ::x10::lang::Place alloc__118450 =
                                                             
                                                           ::x10::lang::Place::_alloc();
                                                           (alloc__118450)->::x10::lang::Place::_constructor(
                                                             (((-(thief__118447))) - (((x10_long)1ll))));
                                                           alloc__118450;
                                                       }))
                                                       , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__24<TPMGL(Queue),TPMGL(R)>(st__118454))),
                                                       ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
            
        }
        
    }
    
    // captured environment
    ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* that_saved_this = buf.read< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>();
        x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) >(that_saved_this);
        return this_;
    }
    
    x10_glb_Worker__closure__19(::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> > >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> > >(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:452";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >::template itable <x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> > >, &x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_WORKER__CLOSURE__19_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__25_CLOSURE
#define X10_GLB_WORKER__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__25 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::main(
          st);
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__25(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:408";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__25_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__27_CLOSURE
#define X10_GLB_WORKER__CLOSURE__27_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__27 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::main(
          st);
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__27(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:416";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__27_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__26_CLOSURE
#define X10_GLB_WORKER__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__26 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 413 "x10/glb/Worker.x10"
        x10_long max = ((x10_long)::x10aux::here);
        
        //#line 414 "x10/glb/Worker.x10"
        x10_long min = (__extension__ ({
            x10_long a__118253 = ((max) - (((x10_long)31ll)));
            ((a__118253) < (((x10_long)0ll))) ? (((x10_long)0ll)) : (a__118253);
        }))
        ;
        
        //#line 415 "x10/glb/Worker.x10"
        {
            x10_long j;
            for (j = min; ((j) <= (max)); j = ((j) + (((x10_long)1ll)))) {
                
                //#line 416 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runAsync((__extension__ ({
                                                  ::x10::lang::Place alloc__109431 =
                                                     ::x10::lang::Place::_alloc();
                                                  (alloc__109431)->::x10::lang::Place::_constructor(
                                                    j);
                                                  alloc__109431;
                                              }))
                                              , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__27<TPMGL(Queue),TPMGL(R)>(st))),
                                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__26(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:412-418";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__26_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__28_CLOSURE
#define X10_GLB_WORKER__CLOSURE__28_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__28 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__118420 = st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply();
        
        //#line 461 "x10/glb/Worker.x10"
        ::x10aux::nullCheck(this__118420)->FMGL(context) = (__extension__ ({
            ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* alloc__118419 = 
            (new (::x10aux::alloc_z< ::x10::glb::Context<TPMGL(Queue), TPMGL(R)> >()) ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>());
            
            //#line 20 "x10/glb/Context.x10"
            alloc__118419->FMGL(st) = ::x10aux::zeroValue< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
            
            //#line 31 "x10/glb/Context.x10"
            alloc__118419->FMGL(st) = st;
            alloc__118419;
        }))
        ;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__28(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:432";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__28_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__30_CLOSURE
#define X10_GLB_WORKER__CLOSURE__30_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__30 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__118424 = st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply();
        
        //#line 461 "x10/glb/Worker.x10"
        ::x10aux::nullCheck(this__118424)->FMGL(context) = (__extension__ ({
            ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* alloc__118423 = 
            (new (::x10aux::alloc_z< ::x10::glb::Context<TPMGL(Queue), TPMGL(R)> >()) ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>());
            
            //#line 20 "x10/glb/Context.x10"
            alloc__118423->FMGL(st) = ::x10aux::zeroValue< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
            
            //#line 31 "x10/glb/Context.x10"
            alloc__118423->FMGL(st) = st;
            alloc__118423;
        }))
        ;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__30(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:440";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__30_CLOSURE
#ifndef X10_GLB_WORKER__CLOSURE__29_CLOSURE
#define X10_GLB_WORKER__CLOSURE__29_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__29 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 437 "x10/glb/Worker.x10"
        x10_long max = ((x10_long)::x10aux::here);
        
        //#line 438 "x10/glb/Worker.x10"
        x10_long min = (__extension__ ({
            x10_long a__118263 = ((max) - (((x10_long)31ll)));
            ((a__118263) < (((x10_long)0ll))) ? (((x10_long)0ll)) : (a__118263);
        }))
        ;
        
        //#line 439 "x10/glb/Worker.x10"
        {
            x10_long j;
            for (j = min; ((j) <= (max)); j = ((j) + (((x10_long)1ll)))) {
                
                //#line 440 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runAsync((__extension__ ({
                                                  ::x10::lang::Place alloc__109434 =
                                                     ::x10::lang::Place::_alloc();
                                                  (alloc__109434)->::x10::lang::Place::_constructor(
                                                    j);
                                                  alloc__109434;
                                              }))
                                              , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__30<TPMGL(Queue),TPMGL(R)>(st))),
                                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__29(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:436-442";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__29_CLOSURE

//#line 29 "x10/glb/Worker.x10"
/** TaskQueue, responsible for crunching numbers */

//#line 32 "x10/glb/Worker.x10"
/** Read as I am the "lifeline buddy" of my "lifelineThieves" */

//#line 36 "x10/glb/Worker.x10"
/** Thieves that send stealing requests*/

//#line 39 "x10/glb/Worker.x10"
/** Lifeline buddies */

//#line 45 "x10/glb/Worker.x10"
/** The data structure to keep a key invariant: 
     * At any time, at most one message has been sent on an
     * outgoing lifeline (and hence at most one message has
     * been received on an incoming lifeline).*/

//#line 50 "x10/glb/Worker.x10"
/** The granularity of tasks to run in a batch before starts to probe network to respond to work-stealing 
     * requests. The smaller n is, the more responsive to the work-stealing requests; on the other hand, less focused
     * on computation */

//#line 53 "x10/glb/Worker.x10"
/** Number of random victims to probe before sending requests to lifeline buddy*/

//#line 56 "x10/glb/Worker.x10"
/** Maximum number of random victims */

//#line 60 "x10/glb/Worker.x10"
/** Random number, used when picking a non-lifeline victim/buddy. Important to seed with place id, otherwise
      BG/Q, the random sequence will be exactly same at different places*/

//#line 64 "x10/glb/Worker.x10"
/** Random buddies, a runner first probes its random buddy, only when none of the random buddies responds
     *  it starts to probe its lifeline buddies */

//#line 67 "x10/glb/Worker.x10"
/** Logger to record the work-stealing status */

//#line 70 "x10/glb/Worker.x10"
/** Variables used for synchronization, made sure not to be optimized out by the compiler */

//#line 71 "x10/glb/Worker.x10"

//#line 72 "x10/glb/Worker.x10"

//#line 75 "x10/glb/Worker.x10"

//#line 78 "x10/glb/Worker.x10"

//#line 90 "x10/glb/Worker.x10"
/**
     * Class constructor
     * @param init function closure to init the local {@link TaskQueue}
     * @param n same to this.n
     * @param w same to this.w
     * @param m same to this.m
     * @param l power of lifeline graph
     * @param z base of lifeline graph
     * @param tree true if the workload is dynamically generated, false if the workload can be statically generated
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::_constructor(
                                               ::x10::lang::Fun_0_0<TPMGL(Queue)>* init,
                                               x10_int n,
                                               x10_int w,
                                               x10_int l,
                                               x10_int z,
                                               x10_int m,
                                               x10_boolean tree) {
    
    //#line 27 "x10/glb/Worker.x10"
    this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::__fieldInitializers_x10_glb_Worker();
    
    //#line 91 "x10/glb/Worker.x10"
    this->FMGL(n) = n;
    
    //#line 92 "x10/glb/Worker.x10"
    this->FMGL(w) = w;
    
    //#line 93 "x10/glb/Worker.x10"
    this->FMGL(m) = m;
    
    //#line 94 "x10/glb/Worker.x10"
    this->FMGL(lifelines) = ::x10::lang::Rail< x10_long >::_make(((x10_long)(z)),
                                                                 ((x10_long)-1ll));
    
    //#line 96 "x10/glb/Worker.x10"
    x10_long h = ((x10_long)::x10aux::here);
    
    //#line 98 "x10/glb/Worker.x10"
    this->FMGL(victims) = ::x10::lang::Rail< x10_long >::_make(((x10_long)(m)));
    
    //#line 99 "x10/glb/Worker.x10"
    if (((this->FMGL(P)) > (((x10_long)1ll)))) {
        {
            x10_long i;
            for (i = ((x10_long)0ll); ((i) < (((x10_long)(m))));
                 i = ((i) + (((x10_long)1ll)))) {
                
                //#line 100 "x10/glb/Worker.x10"
                while ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(victims))->x10::lang::template Rail< x10_long >::__set(
                                                  i, this->FMGL(random)->x10::util::Random::nextLong(
                                                       this->FMGL(P))),
                                                h))) {
                    ;
                }
                
            }
        }
        
    }
    
    //#line 104 "x10/glb/Worker.x10"
    x10_long x = ((x10_long)1ll);
    
    //#line 105 "x10/glb/Worker.x10"
    x10_long t = ((x10_long)0ll);
    
    //#line 106 "x10/glb/Worker.x10"
    {
        x10_long j;
        for (j = ((x10_long)0ll); ((j) < (((x10_long)(z))));
             j = ((j) + (((x10_long)1ll)))) {
            
            //#line 107 "x10/glb/Worker.x10"
            x10_long v = h;
            
            //#line 108 "x10/glb/Worker.x10"
            {
                x10_long k;
                for (k = ((x10_long)1ll); ((k) < (((x10_long)(l))));
                     k = ((k) + (((x10_long)1ll)))) {
                    
                    //#line 109 "x10/glb/Worker.x10"
                    v = ((((v) - (((v) % ::x10aux::zeroCheck(((x) * (((x10_long)(l))))))))) + (((((((v) + (((x) * (((x10_long)(l))))))) - (x))) % ::x10aux::zeroCheck(((x) * (((x10_long)(l))))))));
                    
                    //#line 110 "x10/glb/Worker.x10"
                    if (((v) < (this->FMGL(P)))) {
                        
                        //#line 111 "x10/glb/Worker.x10"
                        ::x10aux::nullCheck(this->FMGL(lifelines))->x10::lang::template Rail< x10_long >::__set(
                          (__extension__ ({
                              x10_long pre__108901 = t;
                              t = ((t) + (((x10_long)1ll)));
                              pre__108901;
                          }))
                          , v);
                        
                        //#line 112 "x10/glb/Worker.x10"
                        break;
                    }
                    
                }
            }
            
            //#line 115 "x10/glb/Worker.x10"
            x = ((x) * (((x10_long)(l))));
        }
    }
    
    //#line 118 "x10/glb/Worker.x10"
    this->FMGL(queue) = ::x10::lang::Fun_0_0<TPMGL(Queue)>::__apply(::x10aux::nullCheck(init));
    
    //#line 119 "x10/glb/Worker.x10"
    this->FMGL(lifelineThieves) = (__extension__ ({
        ::x10::glb::FixedSizeStack<x10_long>* alloc__109418 =
           (new (::x10aux::alloc_z< ::x10::glb::FixedSizeStack<x10_long> >()) ::x10::glb::FixedSizeStack<x10_long>());
        (alloc__109418)->::x10::glb::FixedSizeStack<x10_long>::_constructor(
          (((x10_long)(::x10aux::nullCheck(this->FMGL(lifelines))->FMGL(size))) + (((x10_long)3ll))));
        alloc__109418;
    }))
    ;
    
    //#line 120 "x10/glb/Worker.x10"
    this->FMGL(thieves) = (__extension__ ({
        ::x10::glb::FixedSizeStack<x10_long>* alloc__109419 =
           (new (::x10aux::alloc_z< ::x10::glb::FixedSizeStack<x10_long> >()) ::x10::glb::FixedSizeStack<x10_long>());
        (alloc__109419)->::x10::glb::FixedSizeStack<x10_long>::_constructor(
          this->FMGL(P));
        alloc__109419;
    }))
    ;
    
    //#line 121 "x10/glb/Worker.x10"
    this->FMGL(lifelinesActivated) = ::x10::lang::Rail< x10_boolean >::_make(this->FMGL(P));
    
    //#line 123 "x10/glb/Worker.x10"
    if (tree) {
        
        //#line 125 "x10/glb/Worker.x10"
        if (((((((((x10_long)3ll)) * (h))) + (((x10_long)1ll)))) < (this->FMGL(P))))
        {
            ::x10::glb::FixedSizeStack<x10_long>* this__118322 =
              this->FMGL(lifelineThieves);
            x10_long t__118323 = ((((((x10_long)3ll)) * (h))) + (((x10_long)1ll)));
            
            //#line 49 "x10/glb/FixedSizeStack.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this__118322)->FMGL(data))->x10::lang::template Rail< x10_long >::__set(
              ((::x10aux::nullCheck(this__118322)->FMGL(size) =
                ((::x10aux::nullCheck(this__118322)->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
              t__118323);
        }
        
        //#line 126 "x10/glb/Worker.x10"
        if (((((((((x10_long)3ll)) * (h))) + (((x10_long)2ll)))) < (this->FMGL(P))))
        {
            ::x10::glb::FixedSizeStack<x10_long>* this__118324 =
              this->FMGL(lifelineThieves);
            x10_long t__118325 = ((((((x10_long)3ll)) * (h))) + (((x10_long)2ll)));
            
            //#line 49 "x10/glb/FixedSizeStack.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this__118324)->FMGL(data))->x10::lang::template Rail< x10_long >::__set(
              ((::x10aux::nullCheck(this__118324)->FMGL(size) =
                ((::x10aux::nullCheck(this__118324)->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
              t__118325);
        }
        
        //#line 127 "x10/glb/Worker.x10"
        if (((((((((x10_long)3ll)) * (h))) + (((x10_long)3ll)))) < (this->FMGL(P))))
        {
            ::x10::glb::FixedSizeStack<x10_long>* this__118326 =
              this->FMGL(lifelineThieves);
            x10_long t__118327 = ((((((x10_long)3ll)) * (h))) + (((x10_long)3ll)));
            
            //#line 49 "x10/glb/FixedSizeStack.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this__118326)->FMGL(data))->x10::lang::template Rail< x10_long >::__set(
              ((::x10aux::nullCheck(this__118326)->FMGL(size) =
                ((::x10aux::nullCheck(this__118326)->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
              t__118327);
        }
        
        //#line 128 "x10/glb/Worker.x10"
        if (((h) > (((x10_long)0ll)))) {
            ::x10aux::nullCheck(this->FMGL(lifelinesActivated))->x10::lang::template Rail< x10_boolean >::__set(
              ((((h) - (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll))),
              true);
        }
        
    }
    
    //#line 131 "x10/glb/Worker.x10"
    this->FMGL(logger) = (__extension__ ({
        ::x10::glb::Logger* alloc__109420 =  (new (::x10aux::alloc_z< ::x10::glb::Logger>()) ::x10::glb::Logger());
        (alloc__109420)->::x10::glb::Logger::_constructor(
          true);
        alloc__109420;
    }))
    ;
}
template<class TPMGL(Queue), class TPMGL(R)> ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::_make(
                                               ::x10::lang::Fun_0_0<TPMGL(Queue)>* init,
                                               x10_int n,
                                               x10_int w,
                                               x10_int l,
                                               x10_int z,
                                               x10_int m,
                                               x10_boolean tree)
{
    ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this_ = new (::x10aux::alloc_z< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)> >()) ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>();
    this_->_constructor(init, n, w, l, z, m, tree);
    return this_;
}



//#line 142 "x10/glb/Worker.x10"
/**
     * Main process function of Worker. It does 4 things:
     * (1) execute at most n tasks 
     * (2) respond to stealing requests
     * (3) when not worth sharing tasks, reject the stealing requests 
     * (4) when running out of tasks, steal from others
     * @param st the place local handle of Worker
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::processStack(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 143 "x10/glb/Worker.x10"
    do {
        
        //#line 144 "x10/glb/Worker.x10"
        while (::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::process(::x10aux::nullCheck(this->FMGL(queue)), 
                 ((x10_long)(this->FMGL(n))), this->FMGL(context)))
        {
            
            //#line 145 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::probe();
            
            //#line 146 "x10/glb/Worker.x10"
            ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__118353 =
              this;
            ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118354 =
              st;
            
            //#line 186 "x10/glb/Worker.x10"
            ::x10::glb::TaskBag* loot__118343;
            
            //#line 187 "x10/glb/Worker.x10"
            while (((((((__extension__ ({
                         ::x10::glb::FixedSizeStack<x10_long>* this__118344 =
                           ::x10aux::nullCheck(this__118353)->FMGL(thieves);
                         ::x10aux::nullCheck(this__118344)->FMGL(size);
                     }))
                     ) > (((x10_long)0ll))) || (((__extension__ ({
                         ::x10::glb::FixedSizeStack<x10_long>* this__118345 =
                           ::x10aux::nullCheck(this__118353)->FMGL(lifelineThieves);
                         ::x10aux::nullCheck(this__118345)->FMGL(size);
                     }))
                     ) > (((x10_long)0ll))))) && (!::x10aux::struct_equals((loot__118343 =
                                                                              ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::split(::x10aux::nullCheck(::x10aux::nullCheck(this__118353)->FMGL(queue)))),
                                                                           reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                
                //#line 188 "x10/glb/Worker.x10"
                ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118341 =
                  st__118354;
                ::x10::glb::TaskBag* loot__118342 = loot__118343;
                
                //#line 162 "x10/glb/Worker.x10"
                x10_long victim__118332 = ((x10_long)::x10aux::here);
                
                //#line 163 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118331 = ::x10aux::nullCheck(this__118353)->FMGL(logger);
                ::x10aux::nullCheck(obj__118331)->FMGL(nodesGiven) =
                  ((::x10aux::nullCheck(obj__118331)->FMGL(nodesGiven)) + (::x10::glb::TaskBag::size(::x10aux::nullCheck(loot__118343))));
                
                //#line 164 "x10/glb/Worker.x10"
                if ((((__extension__ ({
                        ::x10::glb::FixedSizeStack<x10_long>* this__118333 =
                          ::x10aux::nullCheck(this__118353)->FMGL(thieves);
                        ::x10aux::nullCheck(this__118333)->FMGL(size);
                    }))
                    ) > (((x10_long)0ll)))) {
                    
                    //#line 165 "x10/glb/Worker.x10"
                    x10_long thief__118334 = (__extension__ ({
                        ::x10::glb::FixedSizeStack<x10_long>* this__118335 =
                          ::x10aux::nullCheck(this__118353)->FMGL(thieves);
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__118335)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
                          ::x10aux::nullCheck(this__118335)->FMGL(size) =
                            ((::x10aux::nullCheck(this__118335)->FMGL(size)) - (((x10_long)1ll))));
                    }))
                    ;
                    
                    //#line 166 "x10/glb/Worker.x10"
                    if (((thief__118334) >= (((x10_long)0ll))))
                    {
                        
                        //#line 167 "x10/glb/Worker.x10"
                        ::x10::glb::Logger* obj__118328 =
                          ::x10aux::nullCheck(this__118353)->FMGL(logger);
                        ::x10aux::nullCheck(obj__118328)->FMGL(lifelineStealsSuffered) =
                          ((::x10aux::nullCheck(obj__118328)->FMGL(lifelineStealsSuffered)) + (((x10_long)1ll)));
                        
                        //#line 168 "x10/glb/Worker.x10"
                        ::x10::xrx::Runtime::runUncountedAsync(
                          (__extension__ ({
                              ::x10::lang::Place alloc__118336 =
                                 ::x10::lang::Place::_alloc();
                              (alloc__118336)->::x10::lang::Place::_constructor(
                                thief__118334);
                              alloc__118336;
                          }))
                          , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R)>(st__118341, loot__118342, victim__118332))),
                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    } else {
                        
                        //#line 170 "x10/glb/Worker.x10"
                        ::x10::glb::Logger* obj__118329 =
                          ::x10aux::nullCheck(this__118353)->FMGL(logger);
                        ::x10aux::nullCheck(obj__118329)->FMGL(stealsSuffered) =
                          ((::x10aux::nullCheck(obj__118329)->FMGL(stealsSuffered)) + (((x10_long)1ll)));
                        
                        //#line 171 "x10/glb/Worker.x10"
                        ::x10::xrx::Runtime::runUncountedAsync(
                          (__extension__ ({
                              ::x10::lang::Place alloc__118337 =
                                 ::x10::lang::Place::_alloc();
                              (alloc__118337)->::x10::lang::Place::_constructor(
                                (((-(thief__118334))) - (((x10_long)1ll))));
                              alloc__118337;
                          }))
                          , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R)>(st__118341, loot__118342))),
                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                    
                } else {
                    
                    //#line 174 "x10/glb/Worker.x10"
                    ::x10::glb::Logger* obj__118330 = ::x10aux::nullCheck(this__118353)->FMGL(logger);
                    ::x10aux::nullCheck(obj__118330)->FMGL(lifelineStealsSuffered) =
                      ((::x10aux::nullCheck(obj__118330)->FMGL(lifelineStealsSuffered)) + (((x10_long)1ll)));
                    
                    //#line 175 "x10/glb/Worker.x10"
                    x10_long thief__118338 = (__extension__ ({
                        ::x10::glb::FixedSizeStack<x10_long>* this__118339 =
                          ::x10aux::nullCheck(this__118353)->FMGL(lifelineThieves);
                        ::x10aux::nullCheck(::x10aux::nullCheck(this__118339)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
                          ::x10aux::nullCheck(this__118339)->FMGL(size) =
                            ((::x10aux::nullCheck(this__118339)->FMGL(size)) - (((x10_long)1ll))));
                    }))
                    ;
                    
                    //#line 176 "x10/glb/Worker.x10"
                    ::x10::xrx::Runtime::runAsync((__extension__ ({
                                                      ::x10::lang::Place alloc__118340 =
                                                         ::x10::lang::Place::_alloc();
                                                      (alloc__118340)->::x10::lang::Place::_constructor(
                                                        thief__118338);
                                                      alloc__118340;
                                                  }))
                                                  , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R)>(st__118341, loot__118342, victim__118332))),
                                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                }
                
            }
            
            //#line 147 "x10/glb/Worker.x10"
            ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__118355 =
              this;
            ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118356 =
              st;
            
            //#line 198 "x10/glb/Worker.x10"
            while ((((__extension__ ({
                       ::x10::glb::FixedSizeStack<x10_long>* this__118348 =
                         ::x10aux::nullCheck(this__118355)->FMGL(thieves);
                       ::x10aux::nullCheck(this__118348)->FMGL(size);
                   }))
                   ) > (((x10_long)0ll)))) {
                
                //#line 199 "x10/glb/Worker.x10"
                x10_long thief__118349 = (__extension__ ({
                    ::x10::glb::FixedSizeStack<x10_long>* this__118350 =
                      ::x10aux::nullCheck(this__118355)->FMGL(thieves);
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__118350)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
                      ::x10aux::nullCheck(this__118350)->FMGL(size) =
                        ((::x10aux::nullCheck(this__118350)->FMGL(size)) - (((x10_long)1ll))));
                }))
                ;
                
                //#line 200 "x10/glb/Worker.x10"
                if (((thief__118349) >= (((x10_long)0ll))))
                {
                    
                    //#line 201 "x10/glb/Worker.x10"
                    ::x10::glb::FixedSizeStack<x10_long>* this__118346 =
                      ::x10aux::nullCheck(this__118355)->FMGL(lifelineThieves);
                    
                    //#line 49 "x10/glb/FixedSizeStack.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__118346)->FMGL(data))->x10::lang::template Rail< x10_long >::__set(
                      ((::x10aux::nullCheck(this__118346)->FMGL(size) =
                        ((::x10aux::nullCheck(this__118346)->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
                      thief__118349);
                    
                    //#line 202 "x10/glb/Worker.x10"
                    ::x10::xrx::Runtime::runUncountedAsync(
                      (__extension__ ({
                          ::x10::lang::Place alloc__118351 =
                             ::x10::lang::Place::_alloc();
                          (alloc__118351)->::x10::lang::Place::_constructor(
                            thief__118349);
                          alloc__118351;
                      }))
                      , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R)>(st__118356))),
                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                } else {
                    
                    //#line 204 "x10/glb/Worker.x10"
                    ::x10::xrx::Runtime::runUncountedAsync(
                      (__extension__ ({
                          ::x10::lang::Place alloc__118352 =
                             ::x10::lang::Place::_alloc();
                          (alloc__118352)->::x10::lang::Place::_constructor(
                            (((-(thief__118349))) - (((x10_long)1ll))));
                          alloc__118352;
                      }))
                      , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R)>(st__118356))),
                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                }
                
            }
            
        }
        
        //#line 149 "x10/glb/Worker.x10"
        ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__118364 =
          this;
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118365 =
          st;
        
        //#line 198 "x10/glb/Worker.x10"
        while ((((__extension__ ({
                   ::x10::glb::FixedSizeStack<x10_long>* this__118359 =
                     ::x10aux::nullCheck(this__118364)->FMGL(thieves);
                   ::x10aux::nullCheck(this__118359)->FMGL(size);
               }))
               ) > (((x10_long)0ll)))) {
            
            //#line 199 "x10/glb/Worker.x10"
            x10_long thief__118360 = (__extension__ ({
                ::x10::glb::FixedSizeStack<x10_long>* this__118361 =
                  ::x10aux::nullCheck(this__118364)->FMGL(thieves);
                ::x10aux::nullCheck(::x10aux::nullCheck(this__118361)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
                  ::x10aux::nullCheck(this__118361)->FMGL(size) =
                    ((::x10aux::nullCheck(this__118361)->FMGL(size)) - (((x10_long)1ll))));
            }))
            ;
            
            //#line 200 "x10/glb/Worker.x10"
            if (((thief__118360) >= (((x10_long)0ll)))) {
                
                //#line 201 "x10/glb/Worker.x10"
                ::x10::glb::FixedSizeStack<x10_long>* this__118357 =
                  ::x10aux::nullCheck(this__118364)->FMGL(lifelineThieves);
                
                //#line 49 "x10/glb/FixedSizeStack.x10"
                ::x10aux::nullCheck(::x10aux::nullCheck(this__118357)->FMGL(data))->x10::lang::template Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this__118357)->FMGL(size) =
                    ((::x10aux::nullCheck(this__118357)->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
                  thief__118360);
                
                //#line 202 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                           ::x10::lang::Place alloc__118362 =
                                                             
                                                           ::x10::lang::Place::_alloc();
                                                           (alloc__118362)->::x10::lang::Place::_constructor(
                                                             thief__118360);
                                                           alloc__118362;
                                                       }))
                                                       , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R)>(st__118365))),
                                                       ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            } else {
                
                //#line 204 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                           ::x10::lang::Place alloc__118363 =
                                                             
                                                           ::x10::lang::Place::_alloc();
                                                           (alloc__118363)->::x10::lang::Place::_constructor(
                                                             (((-(thief__118360))) - (((x10_long)1ll))));
                                                           alloc__118363;
                                                       }))
                                                       , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R)>(st__118365))),
                                                       ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
            
        }
        
    } while (this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::steal(
               st));
    
}

//#line 161 "x10/glb/Worker.x10"
/**
     * Send out the workload to thieves. At this point, either thieves or lifelinetheives 
     * is non-empty (or both are non-empty). Note sending workload to the lifeline thieve
     * is the only place that uses async (instead of uncounted async as in other places),
     * which means when only all lifeline requests are responded can the framework be terminated.
     * @param st place local handle of LJR
     * @param loot the taskbag(aka workload) to send out
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::give(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st,
  ::x10::glb::TaskBag* loot) {
    
    //#line 162 "x10/glb/Worker.x10"
    x10_long victim = ((x10_long)::x10aux::here);
    
    //#line 163 "x10/glb/Worker.x10"
    ::x10::glb::Logger* obj__118369 = this->FMGL(logger);
    ::x10aux::nullCheck(obj__118369)->FMGL(nodesGiven) = ((::x10aux::nullCheck(obj__118369)->FMGL(nodesGiven)) + (::x10::glb::TaskBag::size(::x10aux::nullCheck(loot))));
    
    //#line 164 "x10/glb/Worker.x10"
    if ((((__extension__ ({
            ::x10::glb::FixedSizeStack<x10_long>* this__118189 =
              this->FMGL(thieves);
            ::x10aux::nullCheck(this__118189)->FMGL(size);
        }))
        ) > (((x10_long)0ll)))) {
        
        //#line 165 "x10/glb/Worker.x10"
        x10_long thief = (__extension__ ({
            ::x10::glb::FixedSizeStack<x10_long>* this__118191 =
              this->FMGL(thieves);
            ::x10aux::nullCheck(::x10aux::nullCheck(this__118191)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
              ::x10aux::nullCheck(this__118191)->FMGL(size) =
                ((::x10aux::nullCheck(this__118191)->FMGL(size)) - (((x10_long)1ll))));
        }))
        ;
        
        //#line 166 "x10/glb/Worker.x10"
        if (((thief) >= (((x10_long)0ll)))) {
            
            //#line 167 "x10/glb/Worker.x10"
            ::x10::glb::Logger* obj__118366 = this->FMGL(logger);
            ::x10aux::nullCheck(obj__118366)->FMGL(lifelineStealsSuffered) =
              ((::x10aux::nullCheck(obj__118366)->FMGL(lifelineStealsSuffered)) + (((x10_long)1ll)));
            
            //#line 168 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                       ::x10::lang::Place alloc__109421 =
                                                         
                                                       ::x10::lang::Place::_alloc();
                                                       (alloc__109421)->::x10::lang::Place::_constructor(
                                                         thief);
                                                       alloc__109421;
                                                   }))
                                                   , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R)>(st, loot, victim))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        } else {
            
            //#line 170 "x10/glb/Worker.x10"
            ::x10::glb::Logger* obj__118367 = this->FMGL(logger);
            ::x10aux::nullCheck(obj__118367)->FMGL(stealsSuffered) =
              ((::x10aux::nullCheck(obj__118367)->FMGL(stealsSuffered)) + (((x10_long)1ll)));
            
            //#line 171 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                       ::x10::lang::Place alloc__109422 =
                                                         
                                                       ::x10::lang::Place::_alloc();
                                                       (alloc__109422)->::x10::lang::Place::_constructor(
                                                         (((-(thief))) - (((x10_long)1ll))));
                                                       alloc__109422;
                                                   }))
                                                   , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R)>(st, loot))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
        
    } else {
        
        //#line 174 "x10/glb/Worker.x10"
        ::x10::glb::Logger* obj__118368 = this->FMGL(logger);
        ::x10aux::nullCheck(obj__118368)->FMGL(lifelineStealsSuffered) =
          ((::x10aux::nullCheck(obj__118368)->FMGL(lifelineStealsSuffered)) + (((x10_long)1ll)));
        
        //#line 175 "x10/glb/Worker.x10"
        x10_long thief = (__extension__ ({
            ::x10::glb::FixedSizeStack<x10_long>* this__118193 =
              this->FMGL(lifelineThieves);
            ::x10aux::nullCheck(::x10aux::nullCheck(this__118193)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
              ::x10aux::nullCheck(this__118193)->FMGL(size) =
                ((::x10aux::nullCheck(this__118193)->FMGL(size)) - (((x10_long)1ll))));
        }))
        ;
        
        //#line 176 "x10/glb/Worker.x10"
        ::x10::xrx::Runtime::runAsync((__extension__ ({
                                          ::x10::lang::Place alloc__109423 =
                                             ::x10::lang::Place::_alloc();
                                          (alloc__109423)->::x10::lang::Place::_constructor(
                                            thief);
                                          alloc__109423;
                                      }))
                                      , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R)>(st, loot, victim))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}

//#line 185 "x10/glb/Worker.x10"
/**
     * Distribute works to (lifeline) thieves by calling the 
     * {@link #give(st:PlaceLocalHandle[Worker[Queue, R]], loot:TaskBag) method
     * @param st place local handle of Worker
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::distribute(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 186 "x10/glb/Worker.x10"
    ::x10::glb::TaskBag* loot;
    
    //#line 187 "x10/glb/Worker.x10"
    while (((((((__extension__ ({
                 ::x10::glb::FixedSizeStack<x10_long>* this__118195 =
                   this->FMGL(thieves);
                 ::x10aux::nullCheck(this__118195)->FMGL(size);
             }))
             ) > (((x10_long)0ll))) || (((__extension__ ({
                 ::x10::glb::FixedSizeStack<x10_long>* this__118197 =
                   this->FMGL(lifelineThieves);
                 ::x10aux::nullCheck(this__118197)->FMGL(size);
             }))
             ) > (((x10_long)0ll))))) && (!::x10aux::struct_equals((loot =
                                                                      ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::split(::x10aux::nullCheck(this->FMGL(queue)))),
                                                                   reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
    {
        
        //#line 188 "x10/glb/Worker.x10"
        ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__118383 =
          this;
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__118384 =
          st;
        ::x10::glb::TaskBag* loot__118385 = loot;
        
        //#line 162 "x10/glb/Worker.x10"
        x10_long victim__118374 = ((x10_long)::x10aux::here);
        
        //#line 163 "x10/glb/Worker.x10"
        ::x10::glb::Logger* obj__118373 = ::x10aux::nullCheck(this__118383)->FMGL(logger);
        ::x10aux::nullCheck(obj__118373)->FMGL(nodesGiven) =
          ((::x10aux::nullCheck(obj__118373)->FMGL(nodesGiven)) + (::x10::glb::TaskBag::size(::x10aux::nullCheck(loot))));
        
        //#line 164 "x10/glb/Worker.x10"
        if ((((__extension__ ({
                ::x10::glb::FixedSizeStack<x10_long>* this__118375 =
                  ::x10aux::nullCheck(this__118383)->FMGL(thieves);
                ::x10aux::nullCheck(this__118375)->FMGL(size);
            }))
            ) > (((x10_long)0ll)))) {
            
            //#line 165 "x10/glb/Worker.x10"
            x10_long thief__118376 = (__extension__ ({
                ::x10::glb::FixedSizeStack<x10_long>* this__118377 =
                  ::x10aux::nullCheck(this__118383)->FMGL(thieves);
                ::x10aux::nullCheck(::x10aux::nullCheck(this__118377)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
                  ::x10aux::nullCheck(this__118377)->FMGL(size) =
                    ((::x10aux::nullCheck(this__118377)->FMGL(size)) - (((x10_long)1ll))));
            }))
            ;
            
            //#line 166 "x10/glb/Worker.x10"
            if (((thief__118376) >= (((x10_long)0ll)))) {
                
                //#line 167 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118370 = ::x10aux::nullCheck(this__118383)->FMGL(logger);
                ::x10aux::nullCheck(obj__118370)->FMGL(lifelineStealsSuffered) =
                  ((::x10aux::nullCheck(obj__118370)->FMGL(lifelineStealsSuffered)) + (((x10_long)1ll)));
                
                //#line 168 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                           ::x10::lang::Place alloc__118378 =
                                                             
                                                           ::x10::lang::Place::_alloc();
                                                           (alloc__118378)->::x10::lang::Place::_constructor(
                                                             thief__118376);
                                                           alloc__118378;
                                                       }))
                                                       , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R)>(st__118384, loot__118385, victim__118374))),
                                                       ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            } else {
                
                //#line 170 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118371 = ::x10aux::nullCheck(this__118383)->FMGL(logger);
                ::x10aux::nullCheck(obj__118371)->FMGL(stealsSuffered) =
                  ((::x10aux::nullCheck(obj__118371)->FMGL(stealsSuffered)) + (((x10_long)1ll)));
                
                //#line 171 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                           ::x10::lang::Place alloc__118379 =
                                                             
                                                           ::x10::lang::Place::_alloc();
                                                           (alloc__118379)->::x10::lang::Place::_constructor(
                                                             (((-(thief__118376))) - (((x10_long)1ll))));
                                                           alloc__118379;
                                                       }))
                                                       , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R)>(st__118384, loot__118385))),
                                                       ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
            
        } else {
            
            //#line 174 "x10/glb/Worker.x10"
            ::x10::glb::Logger* obj__118372 = ::x10aux::nullCheck(this__118383)->FMGL(logger);
            ::x10aux::nullCheck(obj__118372)->FMGL(lifelineStealsSuffered) =
              ((::x10aux::nullCheck(obj__118372)->FMGL(lifelineStealsSuffered)) + (((x10_long)1ll)));
            
            //#line 175 "x10/glb/Worker.x10"
            x10_long thief__118380 = (__extension__ ({
                ::x10::glb::FixedSizeStack<x10_long>* this__118381 =
                  ::x10aux::nullCheck(this__118383)->FMGL(lifelineThieves);
                ::x10aux::nullCheck(::x10aux::nullCheck(this__118381)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
                  ::x10aux::nullCheck(this__118381)->FMGL(size) =
                    ((::x10aux::nullCheck(this__118381)->FMGL(size)) - (((x10_long)1ll))));
            }))
            ;
            
            //#line 176 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runAsync((__extension__ ({
                                              ::x10::lang::Place alloc__118382 =
                                                 ::x10::lang::Place::_alloc();
                                              (alloc__118382)->::x10::lang::Place::_constructor(
                                                thief__118380);
                                              alloc__118382;
                                          }))
                                          , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R)>(st__118384, loot__118385, victim__118374))),
                                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
        
    }
    
}

//#line 197 "x10/glb/Worker.x10"
/**
     * Rejecting thieves when no task to share (or worth sharing). Note, never reject lifeline thief,
     * instead put it into the lifelineThieves stack,
     * @param st place local handle of Worker
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::reject(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 198 "x10/glb/Worker.x10"
    while ((((__extension__ ({
               ::x10::glb::FixedSizeStack<x10_long>* this__118219 =
                 this->FMGL(thieves);
               ::x10aux::nullCheck(this__118219)->FMGL(size);
           }))
           ) > (((x10_long)0ll)))) {
        
        //#line 199 "x10/glb/Worker.x10"
        x10_long thief = (__extension__ ({
            ::x10::glb::FixedSizeStack<x10_long>* this__118221 =
              this->FMGL(thieves);
            ::x10aux::nullCheck(::x10aux::nullCheck(this__118221)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
              ::x10aux::nullCheck(this__118221)->FMGL(size) =
                ((::x10aux::nullCheck(this__118221)->FMGL(size)) - (((x10_long)1ll))));
        }))
        ;
        
        //#line 200 "x10/glb/Worker.x10"
        if (((thief) >= (((x10_long)0ll)))) {
            
            //#line 201 "x10/glb/Worker.x10"
            ::x10::glb::FixedSizeStack<x10_long>* this__118386 =
              this->FMGL(lifelineThieves);
            
            //#line 49 "x10/glb/FixedSizeStack.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this__118386)->FMGL(data))->x10::lang::template Rail< x10_long >::__set(
              ((::x10aux::nullCheck(this__118386)->FMGL(size) =
                ((::x10aux::nullCheck(this__118386)->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
              thief);
            
            //#line 202 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                       ::x10::lang::Place alloc__109424 =
                                                         
                                                       ::x10::lang::Place::_alloc();
                                                       (alloc__109424)->::x10::lang::Place::_constructor(
                                                         thief);
                                                       alloc__109424;
                                                   }))
                                                   , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R)>(st))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        } else {
            
            //#line 204 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                       ::x10::lang::Place alloc__109425 =
                                                         
                                                       ::x10::lang::Place::_alloc();
                                                       (alloc__109425)->::x10::lang::Place::_constructor(
                                                         (((-(thief))) - (((x10_long)1ll))));
                                                       alloc__109425;
                                                   }))
                                                   , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R)>(st))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
        
    }
    
}

//#line 221 "x10/glb/Worker.x10"
/**
     * Send out steal requests.
     * It does following things:
     * (1) Probes w random victims and send out stealing requests by calling into 
     * {@link #request(st:PlaceLocalHandle[Worker[Queue, R]], thief:Long, lifeline:Boolean)}
     * (2) If probing random victims fails, resort to lifeline buddies
     * In both case, it sends out the request and wait on the thieves' response, which either comes from
     * (i){@link #reject(PlaceLocalHandle[Worker[Queue, R]])} when victim has no workload to share
     * or (ii) {@link #give(PlaceLocalHandle[Worker[Queue, R]]],TaskBag)} when victim gives the workload
     * 
     * @param st PHL for Worker
     */
template<class TPMGL(Queue), class TPMGL(R)> x10_boolean x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::steal(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 222 "x10/glb/Worker.x10"
    if ((::x10aux::struct_equals(this->FMGL(P), ((x10_long)1ll))))
    {
        return false;
        
    }
    
    //#line 223 "x10/glb/Worker.x10"
    x10_long p = ((x10_long)::x10aux::here);
    
    //#line 224 "x10/glb/Worker.x10"
    this->FMGL(empty) = true;
    
    //#line 225 "x10/glb/Worker.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); (((i) < (((x10_long)(this->FMGL(w))))) &&
                                  this->FMGL(empty)); i =
                                                        ((i) + (((x10_long)1ll))))
        {
            
            //#line 226 "x10/glb/Worker.x10"
            ::x10::glb::Logger* obj__118388 = this->FMGL(logger);
            ::x10aux::nullCheck(obj__118388)->FMGL(stealsAttempted) =
              ((::x10aux::nullCheck(obj__118388)->FMGL(stealsAttempted)) + (((x10_long)1ll)));
            
            //#line 227 "x10/glb/Worker.x10"
            this->FMGL(waiting) = true;
            
            //#line 228 "x10/glb/Worker.x10"
            ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::stopLive();
            
            //#line 229 "x10/glb/Worker.x10"
            x10_long v = ::x10aux::nullCheck(this->FMGL(victims))->x10::lang::template Rail< x10_long >::__apply(
                           ((x10_long)(this->FMGL(random)->x10::util::Random::nextInt(
                                         this->FMGL(m)))));
            
            //#line 230 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                       ::x10::lang::Place alloc__109426 =
                                                         
                                                       ::x10::lang::Place::_alloc();
                                                       (alloc__109426)->::x10::lang::Place::_constructor(
                                                         v);
                                                       alloc__109426;
                                                   }))
                                                   , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__16<TPMGL(Queue),TPMGL(R)>(st, p))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            
            //#line 231 "x10/glb/Worker.x10"
            while (this->FMGL(waiting)) {
                ::x10::xrx::Runtime::probe();
            }
            
            //#line 232 "x10/glb/Worker.x10"
            ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::startLive();
        }
    }
    
    //#line 234 "x10/glb/Worker.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((((i) < ((x10_long)(::x10aux::nullCheck(this->FMGL(lifelines))->FMGL(size)))) &&
                                  this->FMGL(empty)) && ((((x10_long)0ll)) <= (::x10aux::nullCheck(this->FMGL(lifelines))->x10::lang::template Rail< x10_long >::__apply(
                                                                                 i))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 235 "x10/glb/Worker.x10"
            x10_long lifeline = ::x10aux::nullCheck(this->FMGL(lifelines))->x10::lang::template Rail< x10_long >::__apply(
                                  i);
            
            //#line 236 "x10/glb/Worker.x10"
            if (!(::x10aux::nullCheck(this->FMGL(lifelinesActivated))->x10::lang::template Rail< x10_boolean >::__apply(
                    lifeline))) {
                
                //#line 237 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118389 = this->FMGL(logger);
                ::x10aux::nullCheck(obj__118389)->FMGL(lifelineStealsAttempted) =
                  ((::x10aux::nullCheck(obj__118389)->FMGL(lifelineStealsAttempted)) + (((x10_long)1ll)));
                
                //#line 238 "x10/glb/Worker.x10"
                ::x10aux::nullCheck(this->FMGL(lifelinesActivated))->x10::lang::template Rail< x10_boolean >::__set(
                  lifeline, true);
                
                //#line 239 "x10/glb/Worker.x10"
                this->FMGL(waiting) = true;
                
                //#line 240 "x10/glb/Worker.x10"
                ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::stopLive();
                
                //#line 241 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                           ::x10::lang::Place alloc__109427 =
                                                             
                                                           ::x10::lang::Place::_alloc();
                                                           (alloc__109427)->::x10::lang::Place::_constructor(
                                                             lifeline);
                                                           alloc__109427;
                                                       }))
                                                       , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__17<TPMGL(Queue),TPMGL(R)>(st, p))),
                                                       ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                
                //#line 242 "x10/glb/Worker.x10"
                while (this->FMGL(waiting)) {
                    ::x10::xrx::Runtime::probe();
                }
                
                //#line 243 "x10/glb/Worker.x10"
                ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::startLive();
            }
            
        }
    }
    
    //#line 246 "x10/glb/Worker.x10"
    return !(this->FMGL(empty));
    
}

//#line 256 "x10/glb/Worker.x10"
/**
     * Remote thief sending requests to local LJR. When empty or waiting for more work,
     * reject non-lifeline thief right away. Note, never reject lifeline thief.
     * @param st PLH for Woker
     * @param thief place id of thief
     * @param lifeline if I am the lifeline buddy of the remote thief
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::request(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st,
  x10_long thief, x10_boolean lifeline) {
    
    //#line 257 "x10/glb/Worker.x10"
    try {
        
        //#line 258 "x10/glb/Worker.x10"
        if (lifeline) {
            ::x10::glb::Logger* obj__118390 = this->FMGL(logger);
            ::x10aux::nullCheck(obj__118390)->FMGL(lifelineStealsReceived) =
              ((::x10aux::nullCheck(obj__118390)->FMGL(lifelineStealsReceived)) + (((x10_long)1ll)));
        } else {
            ::x10::glb::Logger* obj__118391 = this->FMGL(logger);
            ::x10aux::nullCheck(obj__118391)->FMGL(stealsReceived) =
              ((::x10aux::nullCheck(obj__118391)->FMGL(stealsReceived)) + (((x10_long)1ll)));
        }
        
        //#line 259 "x10/glb/Worker.x10"
        if ((this->FMGL(empty) || this->FMGL(waiting))) {
            
            //#line 260 "x10/glb/Worker.x10"
            if (lifeline) {
                ::x10::glb::FixedSizeStack<x10_long>* this__118392 =
                  this->FMGL(lifelineThieves);
                
                //#line 49 "x10/glb/FixedSizeStack.x10"
                ::x10aux::nullCheck(::x10aux::nullCheck(this__118392)->FMGL(data))->x10::lang::template Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this__118392)->FMGL(size) =
                    ((::x10aux::nullCheck(this__118392)->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
                  thief);
            }
            
            //#line 261 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                       ::x10::lang::Place alloc__109428 =
                                                         
                                                       ::x10::lang::Place::_alloc();
                                                       (alloc__109428)->::x10::lang::Place::_constructor(
                                                         thief);
                                                       alloc__109428;
                                                   }))
                                                   , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__18<TPMGL(Queue),TPMGL(R)>(st))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        } else 
        //#line 263 "x10/glb/Worker.x10"
        if (lifeline) {
            ::x10::glb::FixedSizeStack<x10_long>* this__118394 =
              this->FMGL(thieves);
            
            //#line 49 "x10/glb/FixedSizeStack.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this__118394)->FMGL(data))->x10::lang::template Rail< x10_long >::__set(
              ((::x10aux::nullCheck(this__118394)->FMGL(size) =
                ((::x10aux::nullCheck(this__118394)->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
              thief);
        } else {
            ::x10::glb::FixedSizeStack<x10_long>* this__118396 =
              this->FMGL(thieves);
            x10_long t__118397 = (((-(thief))) - (((x10_long)1ll)));
            
            //#line 49 "x10/glb/FixedSizeStack.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this__118396)->FMGL(data))->x10::lang::template Rail< x10_long >::__set(
              ((::x10aux::nullCheck(this__118396)->FMGL(size) =
                ((::x10aux::nullCheck(this__118396)->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
              t__118397);
        }
        
    }
    catch (::x10::lang::CheckedThrowable* __exc524) {
        {
            ::x10::lang::CheckedThrowable* v = __exc524;
            {
                
                //#line 266 "x10/glb/Worker.x10"
                ::x10::glb::Worker<void, void>::error(v);
            }
        }
    }
}

//#line 275 "x10/glb/Worker.x10"
/**
     * Merge current Worker's taskbag with incoming task bag.
     * @param loot task bag to merge
     * @param lifeline if it is from a lifeline buddy
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::processLoot(
  ::x10::glb::TaskBag* loot, x10_boolean lifeline) {
    
    //#line 276 "x10/glb/Worker.x10"
    x10_long n = ::x10::glb::TaskBag::size(::x10aux::nullCheck(loot));
    
    //#line 277 "x10/glb/Worker.x10"
    if (lifeline) {
        
        //#line 278 "x10/glb/Worker.x10"
        ::x10::glb::Logger* obj__118398 = this->FMGL(logger);
        ::x10aux::nullCheck(obj__118398)->FMGL(lifelineStealsPerpetrated) =
          ((::x10aux::nullCheck(obj__118398)->FMGL(lifelineStealsPerpetrated)) + (((x10_long)1ll)));
        
        //#line 279 "x10/glb/Worker.x10"
        ::x10::glb::Logger* obj__118399 = this->FMGL(logger);
        ::x10aux::nullCheck(obj__118399)->FMGL(lifelineNodesReceived) =
          ((::x10aux::nullCheck(obj__118399)->FMGL(lifelineNodesReceived)) + (n));
    } else {
        
        //#line 281 "x10/glb/Worker.x10"
        ::x10::glb::Logger* obj__118400 = this->FMGL(logger);
        ::x10aux::nullCheck(obj__118400)->FMGL(stealsPerpetrated) =
          ((::x10aux::nullCheck(obj__118400)->FMGL(stealsPerpetrated)) + (((x10_long)1ll)));
        
        //#line 282 "x10/glb/Worker.x10"
        ::x10::glb::Logger* obj__118401 = this->FMGL(logger);
        ::x10aux::nullCheck(obj__118401)->FMGL(nodesReceived) =
          ((::x10aux::nullCheck(obj__118401)->FMGL(nodesReceived)) + (n));
    }
    
    //#line 284 "x10/glb/Worker.x10"
    ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::merge(::x10aux::nullCheck(this->FMGL(queue)), 
      loot);
}

//#line 294 "x10/glb/Worker.x10"
/**
     * Deal workload to the theif. If the thief is active already, simply merge the taskbag. If the thief is inactive,
     * the thief gets reactiveated again.
     * @param st: PLH for Worker
     * @param loot Task to share
     * @param source victim id
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::deal(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st,
  ::x10::glb::TaskBag* loot, x10_long source) {
    
    //#line 295 "x10/glb/Worker.x10"
    try {
        
        //#line 296 "x10/glb/Worker.x10"
        x10_boolean lifeline = ((source) >= (((x10_long)0ll)));
        
        //#line 297 "x10/glb/Worker.x10"
        if (lifeline) {
            ::x10aux::nullCheck(this->FMGL(lifelinesActivated))->x10::lang::template Rail< x10_boolean >::__set(
              source, false);
        }
        
        //#line 298 "x10/glb/Worker.x10"
        this->FMGL(empty) = false;
        
        //#line 299 "x10/glb/Worker.x10"
        if (this->FMGL(active)) {
            
            //#line 300 "x10/glb/Worker.x10"
            ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__118407 =
              this;
            
            //#line 276 "x10/glb/Worker.x10"
            x10_long n__118406 = ::x10::glb::TaskBag::size(::x10aux::nullCheck(loot));
            
            //#line 277 "x10/glb/Worker.x10"
            if (lifeline) {
                
                //#line 278 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118402 = ::x10aux::nullCheck(this__118407)->FMGL(logger);
                ::x10aux::nullCheck(obj__118402)->FMGL(lifelineStealsPerpetrated) =
                  ((::x10aux::nullCheck(obj__118402)->FMGL(lifelineStealsPerpetrated)) + (((x10_long)1ll)));
                
                //#line 279 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118403 = ::x10aux::nullCheck(this__118407)->FMGL(logger);
                ::x10aux::nullCheck(obj__118403)->FMGL(lifelineNodesReceived) =
                  ((::x10aux::nullCheck(obj__118403)->FMGL(lifelineNodesReceived)) + (n__118406));
            } else {
                
                //#line 281 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118404 = ::x10aux::nullCheck(this__118407)->FMGL(logger);
                ::x10aux::nullCheck(obj__118404)->FMGL(stealsPerpetrated) =
                  ((::x10aux::nullCheck(obj__118404)->FMGL(stealsPerpetrated)) + (((x10_long)1ll)));
                
                //#line 282 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118405 = ::x10aux::nullCheck(this__118407)->FMGL(logger);
                ::x10aux::nullCheck(obj__118405)->FMGL(nodesReceived) =
                  ((::x10aux::nullCheck(obj__118405)->FMGL(nodesReceived)) + (n__118406));
            }
            
            //#line 284 "x10/glb/Worker.x10"
            ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::merge(::x10aux::nullCheck(::x10aux::nullCheck(this__118407)->FMGL(queue)), 
              loot);
        } else {
            
            //#line 302 "x10/glb/Worker.x10"
            this->FMGL(active) = true;
            
            //#line 303 "x10/glb/Worker.x10"
            ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::startLive();
            
            //#line 304 "x10/glb/Worker.x10"
            ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__118415 =
              this;
            
            //#line 276 "x10/glb/Worker.x10"
            x10_long n__118414 = ::x10::glb::TaskBag::size(::x10aux::nullCheck(loot));
            
            //#line 277 "x10/glb/Worker.x10"
            if (lifeline) {
                
                //#line 278 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118410 = ::x10aux::nullCheck(this__118415)->FMGL(logger);
                ::x10aux::nullCheck(obj__118410)->FMGL(lifelineStealsPerpetrated) =
                  ((::x10aux::nullCheck(obj__118410)->FMGL(lifelineStealsPerpetrated)) + (((x10_long)1ll)));
                
                //#line 279 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118411 = ::x10aux::nullCheck(this__118415)->FMGL(logger);
                ::x10aux::nullCheck(obj__118411)->FMGL(lifelineNodesReceived) =
                  ((::x10aux::nullCheck(obj__118411)->FMGL(lifelineNodesReceived)) + (n__118414));
            } else {
                
                //#line 281 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118412 = ::x10aux::nullCheck(this__118415)->FMGL(logger);
                ::x10aux::nullCheck(obj__118412)->FMGL(stealsPerpetrated) =
                  ((::x10aux::nullCheck(obj__118412)->FMGL(stealsPerpetrated)) + (((x10_long)1ll)));
                
                //#line 282 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__118413 = ::x10aux::nullCheck(this__118415)->FMGL(logger);
                ::x10aux::nullCheck(obj__118413)->FMGL(nodesReceived) =
                  ((::x10aux::nullCheck(obj__118413)->FMGL(nodesReceived)) + (n__118414));
            }
            
            //#line 284 "x10/glb/Worker.x10"
            ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::merge(::x10aux::nullCheck(::x10aux::nullCheck(this__118415)->FMGL(queue)), 
              loot);
            
            //#line 306 "x10/glb/Worker.x10"
            this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::processStack(
              st);
            
            //#line 307 "x10/glb/Worker.x10"
            ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::stopLive();
            
            //#line 308 "x10/glb/Worker.x10"
            this->FMGL(active) = false;
            
            //#line 309 "x10/glb/Worker.x10"
            ::x10aux::nullCheck(this->FMGL(logger))->FMGL(nodesCount) =
              ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::count(::x10aux::nullCheck(this->FMGL(queue)));
        }
        
    }
    catch (::x10::lang::CheckedThrowable* __exc527) {
        {
            ::x10::lang::CheckedThrowable* v = __exc527;
            {
                
                //#line 312 "x10/glb/Worker.x10"
                ::x10::glb::Worker<void, void>::error(v);
            }
        }
    }
}

//#line 324 "x10/glb/Worker.x10"
/**
     * Entry point when workload is only known dynamically . The workflow is terminated when 
     * (1) No one has work to do
     * (2) Lifeline steals are responded
     * @param place local handle for Worker
     * @param start init method used in {@link TaskQueue}, note the workload is not allocated, because
     * the workload can only be self-generated.
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::main(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st,
  ::x10::lang::VoidFun_0_0* start) {
    {
        
        //#line 325 "x10/glb/Worker.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__118515 = ::x10::xrx::Runtime::startFinish(
                                                ::x10::compiler::Pragma::FMGL(FINISH_DENSE__get)());
        try {
            {
                
                //#line 326 "x10/glb/Worker.x10"
                try {
                    
                    //#line 327 "x10/glb/Worker.x10"
                    this->FMGL(empty) = false;
                    
                    //#line 328 "x10/glb/Worker.x10"
                    this->FMGL(active) = true;
                    
                    //#line 329 "x10/glb/Worker.x10"
                    ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::startLive();
                    
                    //#line 330 "x10/glb/Worker.x10"
                    ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(start));
                    
                    //#line 331 "x10/glb/Worker.x10"
                    this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::processStack(
                      st);
                    
                    //#line 332 "x10/glb/Worker.x10"
                    ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::stopLive();
                    
                    //#line 333 "x10/glb/Worker.x10"
                    this->FMGL(active) = false;
                    
                    //#line 334 "x10/glb/Worker.x10"
                    ::x10aux::nullCheck(this->FMGL(logger))->FMGL(nodesCount) =
                      ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::count(::x10aux::nullCheck(this->FMGL(queue)));
                }
                catch (::x10::lang::CheckedThrowable* __exc529) {
                    {
                        ::x10::lang::CheckedThrowable* v =
                          __exc529;
                        {
                            
                            //#line 336 "x10/glb/Worker.x10"
                            ::x10::glb::Worker<void, void>::error(
                              v);
                        }
                    }
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc530) {
            {
                ::x10::lang::CheckedThrowable* ct__118512 =
                  __exc530;
                {
                    ::x10::xrx::Runtime::pushException(ct__118512);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__118515);
    }
}

//#line 348 "x10/glb/Worker.x10"
/**
     * Entry point when workload can be known statically. The workflow is terminated when 
     * (1) No one has work to do
     * (2) Lifeline steals are responded
     * @param place local handle for Worker. Note the workload is assumed to be allocated already in the {@link TaskQueue}
     * constructor.
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::main(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 349 "x10/glb/Worker.x10"
    try {
        
        //#line 350 "x10/glb/Worker.x10"
        this->FMGL(empty) = false;
        
        //#line 351 "x10/glb/Worker.x10"
        this->FMGL(active) = true;
        
        //#line 352 "x10/glb/Worker.x10"
        ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::startLive();
        
        //#line 353 "x10/glb/Worker.x10"
        this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::processStack(
          st);
        
        //#line 354 "x10/glb/Worker.x10"
        ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::stopLive();
        
        //#line 355 "x10/glb/Worker.x10"
        this->FMGL(active) = false;
        
        //#line 356 "x10/glb/Worker.x10"
        ::x10aux::nullCheck(this->FMGL(logger))->FMGL(nodesCount) =
          ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::count(::x10aux::nullCheck(this->FMGL(queue)));
    }
    catch (::x10::lang::CheckedThrowable* __exc532) {
        {
            ::x10::lang::CheckedThrowable* v = __exc532;
            {
                
                //#line 358 "x10/glb/Worker.x10"
                ::x10::glb::Worker<void, void>::error(v);
            }
        }
    }
}

//#line 366 "x10/glb/Worker.x10"
/**
     * Print exceptions
     * @param v exeception
     */

//#line 374 "x10/glb/Worker.x10"
/**
     * Min helper function
     */

//#line 403 "x10/glb/Worker.x10"
/**
     * Internal method used by {@link GLB} to start Worker at each place when the 
     * workload is known statically.
     * @param st PLH of Worker
     */

//#line 427 "x10/glb/Worker.x10"
/**
     * Initialize Context object at every place
     * @param st: PLH of Worker
     */

//#line 451 "x10/glb/Worker.x10"
/**
     * Returns yield point
     */
template<class TPMGL(Queue), class TPMGL(R)> ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >*
  x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::getYieldPoint(
  ) {
    
    //#line 452 "x10/glb/Worker.x10"
    return reinterpret_cast< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> > >(sizeof(x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__19<TPMGL(Queue),TPMGL(R)>(this)));
    
}

//#line 459 "x10/glb/Worker.x10"
/**
     * Set the context object
     * @param st PLH of Worker
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::setContext(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 461 "x10/glb/Worker.x10"
    this->FMGL(context) = (__extension__ ({
        ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* alloc__109435 =
           (new (::x10aux::alloc_z< ::x10::glb::Context<TPMGL(Queue), TPMGL(R)> >()) ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>());
        
        //#line 20 "x10/glb/Context.x10"
        alloc__109435->FMGL(st) = ::x10aux::zeroValue< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        
        //#line 31 "x10/glb/Context.x10"
        alloc__109435->FMGL(st) = st;
        alloc__109435;
    }))
    ;
}

//#line 27 "x10/glb/Worker.x10"
template<class TPMGL(Queue), class TPMGL(R)> ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*
  x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::x10__glb__Worker____this__x10__glb__Worker(
  ) {
    return this;
    
}
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::__fieldInitializers_x10_glb_Worker(
  ) {
    this->FMGL(random) = (__extension__ ({
        
        //#line 60 "x10/glb/Worker.x10"
        ::x10::util::Random* alloc__109436 =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
        x10_long seed__118457 = ((x10_long)(::x10aux::here));
        
        //#line 24 "x10/util/Random.x10"
        alloc__109436->FMGL(seed) = ((x10_long)0ll);
        alloc__109436->FMGL(storedGaussian) = 0.0;
        alloc__109436->FMGL(haveStoredGaussian) = false;
        
        //#line 36 "x10/util/Random.x10"
        alloc__109436->FMGL(seed) = seed__118457;
        
        //#line 37 "x10/util/Random.x10"
        alloc__109436->FMGL(gamma) = ((x10_long)-7046029254386353131ll);
        alloc__109436;
    }))
    ;
    this->FMGL(active) = false;
    this->FMGL(empty) = true;
    this->FMGL(waiting) = false;
    this->FMGL(P) = ((x10_long)x10rt_nhosts());
    this->FMGL(context) = (::x10aux::class_cast_unchecked< ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::_deserializer);

template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(queue));
    buf.write(this->FMGL(lifelineThieves));
    buf.write(this->FMGL(thieves));
    buf.write(this->FMGL(lifelines));
    buf.write(this->FMGL(lifelinesActivated));
    buf.write(this->FMGL(n));
    buf.write(this->FMGL(w));
    buf.write(this->FMGL(m));
    buf.write(this->FMGL(random));
    buf.write(this->FMGL(victims));
    buf.write(this->FMGL(logger));
    buf.write(this->FMGL(P));
    buf.write(this->FMGL(context));
    
}

template<class TPMGL(Queue), class TPMGL(R)> ::x10::lang::Reference* ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this_ = new (::x10aux::alloc_z< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)> >()) ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(queue) = buf.read<TPMGL(Queue)>();
    FMGL(lifelineThieves) = buf.read< ::x10::glb::FixedSizeStack<x10_long>*>();
    FMGL(thieves) = buf.read< ::x10::glb::FixedSizeStack<x10_long>*>();
    FMGL(lifelines) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(lifelinesActivated) = buf.read< ::x10::lang::Rail< x10_boolean >*>();
    FMGL(n) = buf.read<x10_int>();
    FMGL(w) = buf.read<x10_int>();
    FMGL(m) = buf.read<x10_int>();
    FMGL(random) = buf.read< ::x10::util::Random*>();
    FMGL(victims) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(logger) = buf.read< ::x10::glb::Logger*>();
    FMGL(P) = buf.read<x10_long>();
    FMGL(context) = buf.read< ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>*>();
}

template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<void, void>::broadcast(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 404 "x10/glb/Worker.x10"
    x10_long P = ((x10_long)x10rt_nhosts());
    {
        
        //#line 405 "x10/glb/Worker.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__118529 = ::x10::xrx::Runtime::startFinish(
                                                ::x10::compiler::Pragma::FMGL(FINISH_DENSE__get)());
        try {
            {
                
                //#line 406 "x10/glb/Worker.x10"
                if (((P) < (((x10_long)256ll)))) {
                    
                    //#line 407 "x10/glb/Worker.x10"
                    {
                        x10_long i;
                        for (i = ((x10_long)0ll); ((i) < (P));
                             i = ((i) + (((x10_long)1ll))))
                        {
                            
                            //#line 408 "x10/glb/Worker.x10"
                            ::x10::xrx::Runtime::runAsync(
                              (__extension__ ({
                                  ::x10::lang::Place alloc__109429 =
                                     ::x10::lang::Place::_alloc();
                                  (alloc__109429)->::x10::lang::Place::_constructor(
                                    i);
                                  alloc__109429;
                              }))
                              , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__25<TPMGL(Queue),TPMGL(R)>(st))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                } else {
                    
                    //#line 411 "x10/glb/Worker.x10"
                    {
                        x10_long i;
                        for (i = ((P) - (((x10_long)1ll)));
                             ((i) >= (((x10_long)0ll))); i =
                                                           ((i) - (((x10_long)32ll))))
                        {
                            
                            //#line 412 "x10/glb/Worker.x10"
                            ::x10::xrx::Runtime::runAsync(
                              (__extension__ ({
                                  ::x10::lang::Place alloc__109430 =
                                     ::x10::lang::Place::_alloc();
                                  (alloc__109430)->::x10::lang::Place::_constructor(
                                    i);
                                  alloc__109430;
                              }))
                              , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__26<TPMGL(Queue),TPMGL(R)>(st))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc537) {
            {
                ::x10::lang::CheckedThrowable* ct__118526 =
                  __exc537;
                {
                    ::x10::xrx::Runtime::pushException(ct__118526);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__118529);
    }
}
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<void, void>::initContexts(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 428 "x10/glb/Worker.x10"
    x10_long P = ((x10_long)x10rt_nhosts());
    {
        
        //#line 429 "x10/glb/Worker.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__118543 = ::x10::xrx::Runtime::startFinish(
                                                ::x10::compiler::Pragma::FMGL(FINISH_DENSE__get)());
        try {
            {
                
                //#line 430 "x10/glb/Worker.x10"
                if (((P) < (((x10_long)256ll)))) {
                    
                    //#line 431 "x10/glb/Worker.x10"
                    {
                        x10_long i;
                        for (i = ((x10_long)0ll); ((i) < (P));
                             i = ((i) + (((x10_long)1ll))))
                        {
                            
                            //#line 432 "x10/glb/Worker.x10"
                            ::x10::xrx::Runtime::runAsync(
                              (__extension__ ({
                                  ::x10::lang::Place alloc__109432 =
                                     ::x10::lang::Place::_alloc();
                                  (alloc__109432)->::x10::lang::Place::_constructor(
                                    i);
                                  alloc__109432;
                              }))
                              , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__28<TPMGL(Queue),TPMGL(R)>(st))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                } else {
                    
                    //#line 435 "x10/glb/Worker.x10"
                    {
                        x10_long i;
                        for (i = ((P) - (((x10_long)1ll)));
                             ((i) >= (((x10_long)0ll))); i =
                                                           ((i) - (((x10_long)32ll))))
                        {
                            
                            //#line 436 "x10/glb/Worker.x10"
                            ::x10::xrx::Runtime::runAsync(
                              (__extension__ ({
                                  ::x10::lang::Place alloc__109433 =
                                     ::x10::lang::Place::_alloc();
                                  (alloc__109433)->::x10::lang::Place::_constructor(
                                    i);
                                  alloc__109433;
                              }))
                              , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__29<TPMGL(Queue),TPMGL(R)>(st))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc538) {
            {
                ::x10::lang::CheckedThrowable* ct__118540 =
                  __exc538;
                {
                    ::x10::xrx::Runtime::pushException(ct__118540);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__118543);
    }
}
#endif // X10_GLB_WORKER_H_IMPLEMENTATION
#endif // __X10_GLB_WORKER_H_NODEPS
