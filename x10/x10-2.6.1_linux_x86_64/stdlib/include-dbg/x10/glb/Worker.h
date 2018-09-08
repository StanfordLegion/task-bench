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
class Math;
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
    static ::x10::lang::String sl__154362;
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
#include <x10/lang/Math.h>
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
        x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot = buf.read< ::x10::glb::TaskBag*>();
        x10_long that_victim = buf.read<x10_long>();
        x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R) >(that_st, that_loot, that_victim);
        return this_;
    }
    
    x10_glb_Worker__closure__1(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, ::x10::glb::TaskBag* loot, x10_long victim) : st(st), loot(loot), victim(victim) { }
    
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
        x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot = buf.read< ::x10::glb::TaskBag*>();
        x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R) >(that_st, that_loot);
        return this_;
    }
    
    x10_glb_Worker__closure__2(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, ::x10::glb::TaskBag* loot) : st(st), loot(loot) { }
    
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
        x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot = buf.read< ::x10::glb::TaskBag*>();
        x10_long that_victim = buf.read<x10_long>();
        x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R) >(that_st, that_loot, that_victim);
        return this_;
    }
    
    x10_glb_Worker__closure__3(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, ::x10::glb::TaskBag* loot, x10_long victim) : st(st), loot(loot), victim(victim) { }
    
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
        x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__4(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
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
        x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__5(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
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
        x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_long that_p = buf.read<x10_long>();
        x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R) >(that_st, that_p);
        return this_;
    }
    
    x10_glb_Worker__closure__6(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, x10_long p) : st(st), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:230";
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
        x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_long that_p = buf.read<x10_long>();
        x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R) >(that_st, that_p);
        return this_;
    }
    
    x10_glb_Worker__closure__7(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st, x10_long p) : st(st), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:241";
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
        x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__8(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:261";
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
#include <x10/lang/VoidFun_0_1.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Worker__closure__9 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >::template itable <x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st){
        ::x10::xrx::Runtime::probe();
        saved_this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::distribute(
          st);
        saved_this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::reject(
          st);
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
        x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* that_saved_this = buf.read< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>();
        x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >(that_saved_this);
        return this_;
    }
    
    x10_glb_Worker__closure__9(::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> > >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> > >(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:452";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >::template itable <x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> > >, &x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

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
        x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__10(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:408";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__10_CLOSURE
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
        x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__12(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:416";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__12_CLOSURE
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
        
        //#line 413 "x10/glb/Worker.x10"
        x10_long max = ((x10_long)::x10aux::here);
        
        //#line 414 "x10/glb/Worker.x10"
        x10_long min = ::x10::lang::Math::max(((max) - (((x10_long)31ll))),
                                              ((x10_long)0ll));
        
        //#line 415 "x10/glb/Worker.x10"
        {
            x10_long j;
            for (j = min; ((j) <= (max)); j = ((j) + (((x10_long)1ll)))) {
                
                //#line 416 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runAsync(::x10::lang::Place::_make(j),
                                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__12<TPMGL(Queue),TPMGL(R)>(st))),
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
        x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__11(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:412-418";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__11_CLOSURE
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
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::setContext(
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
        x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__13(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:432";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__13_CLOSURE
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
        ::x10aux::nullCheck(st->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::setContext(
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
        x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__15(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:440";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__15_CLOSURE
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
        
        //#line 437 "x10/glb/Worker.x10"
        x10_long max = ((x10_long)::x10aux::here);
        
        //#line 438 "x10/glb/Worker.x10"
        x10_long min = ::x10::lang::Math::max(((max) - (((x10_long)31ll))),
                                              ((x10_long)0ll));
        
        //#line 439 "x10/glb/Worker.x10"
        {
            x10_long j;
            for (j = min; ((j) <= (max)); j = ((j) + (((x10_long)1ll)))) {
                
                //#line 440 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runAsync(::x10::lang::Place::_make(j),
                                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__15<TPMGL(Queue),TPMGL(R)>(st))),
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
        x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >(that_st);
        return this_;
    }
    
    x10_glb_Worker__closure__14(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) : st(st) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:436-442";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) > >x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_WORKER__CLOSURE__14_CLOSURE

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
                              x10_long pre__103138 = t;
                              t = ((t) + (((x10_long)1ll)));
                              pre__103138;
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
    this->FMGL(lifelineThieves) = ::x10::glb::FixedSizeStack<x10_long>::_make((((x10_long)(::x10aux::nullCheck(this->FMGL(lifelines))->FMGL(size))) + (((x10_long)3ll))));
    
    //#line 120 "x10/glb/Worker.x10"
    this->FMGL(thieves) = ::x10::glb::FixedSizeStack<x10_long>::_make(this->FMGL(P));
    
    //#line 121 "x10/glb/Worker.x10"
    this->FMGL(lifelinesActivated) = ::x10::lang::Rail< x10_boolean >::_make(this->FMGL(P));
    
    //#line 123 "x10/glb/Worker.x10"
    if (tree) {
        
        //#line 125 "x10/glb/Worker.x10"
        if (((((((((x10_long)3ll)) * (h))) + (((x10_long)1ll)))) < (this->FMGL(P))))
        {
            ::x10aux::nullCheck(this->FMGL(lifelineThieves))->x10::glb::template FixedSizeStack<x10_long>::push(
              ((((((x10_long)3ll)) * (h))) + (((x10_long)1ll))));
        }
        
        //#line 126 "x10/glb/Worker.x10"
        if (((((((((x10_long)3ll)) * (h))) + (((x10_long)2ll)))) < (this->FMGL(P))))
        {
            ::x10aux::nullCheck(this->FMGL(lifelineThieves))->x10::glb::template FixedSizeStack<x10_long>::push(
              ((((((x10_long)3ll)) * (h))) + (((x10_long)2ll))));
        }
        
        //#line 127 "x10/glb/Worker.x10"
        if (((((((((x10_long)3ll)) * (h))) + (((x10_long)3ll)))) < (this->FMGL(P))))
        {
            ::x10aux::nullCheck(this->FMGL(lifelineThieves))->x10::glb::template FixedSizeStack<x10_long>::push(
              ((((((x10_long)3ll)) * (h))) + (((x10_long)3ll))));
        }
        
        //#line 128 "x10/glb/Worker.x10"
        if (((h) > (((x10_long)0ll)))) {
            ::x10aux::nullCheck(this->FMGL(lifelinesActivated))->x10::lang::template Rail< x10_boolean >::__set(
              ((((h) - (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll))),
              true);
        }
        
    }
    
    //#line 131 "x10/glb/Worker.x10"
    this->FMGL(logger) = ::x10::glb::Logger::_make(true);
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
            this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::distribute(
              st);
            
            //#line 147 "x10/glb/Worker.x10"
            this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::reject(
              st);
        }
        
        //#line 149 "x10/glb/Worker.x10"
        this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::reject(
          st);
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
    ::x10::glb::Logger* obj__103658 = this->FMGL(logger);
    ::x10aux::nullCheck(obj__103658)->FMGL(nodesGiven) = ((::x10aux::nullCheck(obj__103658)->FMGL(nodesGiven)) + (::x10::glb::TaskBag::size(::x10aux::nullCheck(loot))));
    
    //#line 164 "x10/glb/Worker.x10"
    if (((::x10aux::nullCheck(this->FMGL(thieves))->x10::glb::template FixedSizeStack<x10_long>::size()) > (((x10_long)0ll))))
    {
        
        //#line 165 "x10/glb/Worker.x10"
        x10_long thief = ::x10aux::nullCheck(this->FMGL(thieves))->x10::glb::template FixedSizeStack<x10_long>::pop();
        
        //#line 166 "x10/glb/Worker.x10"
        if (((thief) >= (((x10_long)0ll)))) {
            
            //#line 167 "x10/glb/Worker.x10"
            ::x10::glb::Logger* obj__103655 = this->FMGL(logger);
            ::x10aux::nullCheck(obj__103655)->FMGL(lifelineStealsSuffered) =
              ((::x10aux::nullCheck(obj__103655)->FMGL(lifelineStealsSuffered)) + (((x10_long)1ll)));
            
            //#line 168 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runUncountedAsync(::x10::lang::Place::_make(thief),
                                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__1<TPMGL(Queue),TPMGL(R)>(st, loot, victim))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        } else {
            
            //#line 170 "x10/glb/Worker.x10"
            ::x10::glb::Logger* obj__103656 = this->FMGL(logger);
            ::x10aux::nullCheck(obj__103656)->FMGL(stealsSuffered) =
              ((::x10aux::nullCheck(obj__103656)->FMGL(stealsSuffered)) + (((x10_long)1ll)));
            
            //#line 171 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runUncountedAsync(::x10::lang::Place::_make((((-(thief))) - (((x10_long)1ll)))),
                                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__2<TPMGL(Queue),TPMGL(R)>(st, loot))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
        
    } else {
        
        //#line 174 "x10/glb/Worker.x10"
        ::x10::glb::Logger* obj__103657 = this->FMGL(logger);
        ::x10aux::nullCheck(obj__103657)->FMGL(lifelineStealsSuffered) =
          ((::x10aux::nullCheck(obj__103657)->FMGL(lifelineStealsSuffered)) + (((x10_long)1ll)));
        
        //#line 175 "x10/glb/Worker.x10"
        x10_long thief = ::x10aux::nullCheck(this->FMGL(lifelineThieves))->x10::glb::template FixedSizeStack<x10_long>::pop();
        
        //#line 176 "x10/glb/Worker.x10"
        ::x10::xrx::Runtime::runAsync(::x10::lang::Place::_make(thief),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__3<TPMGL(Queue),TPMGL(R)>(st, loot, victim))),
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
    while ((((((::x10aux::nullCheck(this->FMGL(thieves))->x10::glb::template FixedSizeStack<x10_long>::size()) > (((x10_long)0ll))) ||
             ((::x10aux::nullCheck(this->FMGL(lifelineThieves))->x10::glb::template FixedSizeStack<x10_long>::size()) > (((x10_long)0ll))))) &&
           (!::x10aux::struct_equals((loot = ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::split(::x10aux::nullCheck(this->FMGL(queue)))),
                                     reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
    {
        
        //#line 188 "x10/glb/Worker.x10"
        this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::give(
          st, loot);
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
    while (((::x10aux::nullCheck(this->FMGL(thieves))->x10::glb::template FixedSizeStack<x10_long>::size()) > (((x10_long)0ll))))
    {
        
        //#line 199 "x10/glb/Worker.x10"
        x10_long thief = ::x10aux::nullCheck(this->FMGL(thieves))->x10::glb::template FixedSizeStack<x10_long>::pop();
        
        //#line 200 "x10/glb/Worker.x10"
        if (((thief) >= (((x10_long)0ll)))) {
            
            //#line 201 "x10/glb/Worker.x10"
            ::x10aux::nullCheck(this->FMGL(lifelineThieves))->x10::glb::template FixedSizeStack<x10_long>::push(
              thief);
            
            //#line 202 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runUncountedAsync(::x10::lang::Place::_make(thief),
                                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__4<TPMGL(Queue),TPMGL(R)>(st))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        } else {
            
            //#line 204 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runUncountedAsync(::x10::lang::Place::_make((((-(thief))) - (((x10_long)1ll)))),
                                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__5<TPMGL(Queue),TPMGL(R)>(st))),
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
            ::x10::glb::Logger* obj__103659 = this->FMGL(logger);
            ::x10aux::nullCheck(obj__103659)->FMGL(stealsAttempted) =
              ((::x10aux::nullCheck(obj__103659)->FMGL(stealsAttempted)) + (((x10_long)1ll)));
            
            //#line 227 "x10/glb/Worker.x10"
            this->FMGL(waiting) = true;
            
            //#line 228 "x10/glb/Worker.x10"
            ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::stopLive();
            
            //#line 229 "x10/glb/Worker.x10"
            x10_long v = ::x10aux::nullCheck(this->FMGL(victims))->x10::lang::template Rail< x10_long >::__apply(
                           ((x10_long)(this->FMGL(random)->x10::util::Random::nextInt(
                                         this->FMGL(m)))));
            
            //#line 230 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runUncountedAsync(::x10::lang::Place::_make(v),
                                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__6<TPMGL(Queue),TPMGL(R)>(st, p))),
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
                ::x10::glb::Logger* obj__103660 = this->FMGL(logger);
                ::x10aux::nullCheck(obj__103660)->FMGL(lifelineStealsAttempted) =
                  ((::x10aux::nullCheck(obj__103660)->FMGL(lifelineStealsAttempted)) + (((x10_long)1ll)));
                
                //#line 238 "x10/glb/Worker.x10"
                ::x10aux::nullCheck(this->FMGL(lifelinesActivated))->x10::lang::template Rail< x10_boolean >::__set(
                  lifeline, true);
                
                //#line 239 "x10/glb/Worker.x10"
                this->FMGL(waiting) = true;
                
                //#line 240 "x10/glb/Worker.x10"
                ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::stopLive();
                
                //#line 241 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runUncountedAsync(::x10::lang::Place::_make(lifeline),
                                                       reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__7<TPMGL(Queue),TPMGL(R)>(st, p))),
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
            ::x10::glb::Logger* obj__103661 = this->FMGL(logger);
            ::x10aux::nullCheck(obj__103661)->FMGL(lifelineStealsReceived) =
              ((::x10aux::nullCheck(obj__103661)->FMGL(lifelineStealsReceived)) + (((x10_long)1ll)));
        } else {
            ::x10::glb::Logger* obj__103662 = this->FMGL(logger);
            ::x10aux::nullCheck(obj__103662)->FMGL(stealsReceived) =
              ((::x10aux::nullCheck(obj__103662)->FMGL(stealsReceived)) + (((x10_long)1ll)));
        }
        
        //#line 259 "x10/glb/Worker.x10"
        if ((this->FMGL(empty) || this->FMGL(waiting))) {
            
            //#line 260 "x10/glb/Worker.x10"
            if (lifeline) {
                ::x10aux::nullCheck(this->FMGL(lifelineThieves))->x10::glb::template FixedSizeStack<x10_long>::push(
                  thief);
            }
            
            //#line 261 "x10/glb/Worker.x10"
            ::x10::xrx::Runtime::runUncountedAsync(::x10::lang::Place::_make(thief),
                                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__8<TPMGL(Queue),TPMGL(R)>(st))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        } else 
        //#line 263 "x10/glb/Worker.x10"
        if (lifeline) {
            ::x10aux::nullCheck(this->FMGL(thieves))->x10::glb::template FixedSizeStack<x10_long>::push(
              thief);
        } else {
            ::x10aux::nullCheck(this->FMGL(thieves))->x10::glb::template FixedSizeStack<x10_long>::push(
              (((-(thief))) - (((x10_long)1ll))));
        }
        
    }
    catch (::x10::lang::CheckedThrowable* __exc516) {
        {
            ::x10::lang::CheckedThrowable* v = __exc516;
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
        ::x10::glb::Logger* obj__103663 = this->FMGL(logger);
        ::x10aux::nullCheck(obj__103663)->FMGL(lifelineStealsPerpetrated) =
          ((::x10aux::nullCheck(obj__103663)->FMGL(lifelineStealsPerpetrated)) + (((x10_long)1ll)));
        
        //#line 279 "x10/glb/Worker.x10"
        ::x10::glb::Logger* obj__103664 = this->FMGL(logger);
        ::x10aux::nullCheck(obj__103664)->FMGL(lifelineNodesReceived) =
          ((::x10aux::nullCheck(obj__103664)->FMGL(lifelineNodesReceived)) + (n));
    } else {
        
        //#line 281 "x10/glb/Worker.x10"
        ::x10::glb::Logger* obj__103665 = this->FMGL(logger);
        ::x10aux::nullCheck(obj__103665)->FMGL(stealsPerpetrated) =
          ((::x10aux::nullCheck(obj__103665)->FMGL(stealsPerpetrated)) + (((x10_long)1ll)));
        
        //#line 282 "x10/glb/Worker.x10"
        ::x10::glb::Logger* obj__103666 = this->FMGL(logger);
        ::x10aux::nullCheck(obj__103666)->FMGL(nodesReceived) =
          ((::x10aux::nullCheck(obj__103666)->FMGL(nodesReceived)) + (n));
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
            this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::processLoot(
              loot, lifeline);
        } else {
            
            //#line 302 "x10/glb/Worker.x10"
            this->FMGL(active) = true;
            
            //#line 303 "x10/glb/Worker.x10"
            ::x10aux::nullCheck(this->FMGL(logger))->x10::glb::Logger::startLive();
            
            //#line 304 "x10/glb/Worker.x10"
            this->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::processLoot(
              loot, lifeline);
            
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
    catch (::x10::lang::CheckedThrowable* __exc519) {
        {
            ::x10::lang::CheckedThrowable* v = __exc519;
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
        ::x10::xrx::FinishState* fs__103694 = ::x10::xrx::Runtime::startFinish(
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
                catch (::x10::lang::CheckedThrowable* __exc521) {
                    {
                        ::x10::lang::CheckedThrowable* v =
                          __exc521;
                        {
                            
                            //#line 336 "x10/glb/Worker.x10"
                            ::x10::glb::Worker<void, void>::error(
                              v);
                        }
                    }
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc522) {
            {
                ::x10::lang::CheckedThrowable* ct__103691 =
                  __exc522;
                {
                    ::x10::xrx::Runtime::pushException(ct__103691);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__103694);
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
    catch (::x10::lang::CheckedThrowable* __exc524) {
        {
            ::x10::lang::CheckedThrowable* v = __exc524;
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
    return reinterpret_cast< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> > >(sizeof(x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__9<TPMGL(Queue),TPMGL(R)>(this)));
    
}

//#line 459 "x10/glb/Worker.x10"
/**
     * Set the context object
     * @param st PLH of Worker
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::setContext(
  ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 461 "x10/glb/Worker.x10"
    this->FMGL(context) = ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>::_make(st);
}

//#line 27 "x10/glb/Worker.x10"
template<class TPMGL(Queue), class TPMGL(R)> ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*
  x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::x10__glb__Worker____this__x10__glb__Worker(
  ) {
    return this;
    
}
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<TPMGL(Queue), TPMGL(R)>::__fieldInitializers_x10_glb_Worker(
  ) {
    this->FMGL(random) = ::x10::util::Random::_make(((x10_long)(::x10aux::here)));
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
        ::x10::xrx::FinishState* fs__103708 = ::x10::xrx::Runtime::startFinish(
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
                              ::x10::lang::Place::_make(i),
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__10<TPMGL(Queue),TPMGL(R)>(st))),
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
                              ::x10::lang::Place::_make(i),
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__11<TPMGL(Queue),TPMGL(R)>(st))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc529) {
            {
                ::x10::lang::CheckedThrowable* ct__103705 =
                  __exc529;
                {
                    ::x10::xrx::Runtime::pushException(ct__103705);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__103708);
    }
}
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Worker<void, void>::initContexts(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 428 "x10/glb/Worker.x10"
    x10_long P = ((x10_long)x10rt_nhosts());
    {
        
        //#line 429 "x10/glb/Worker.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__103722 = ::x10::xrx::Runtime::startFinish(
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
                              ::x10::lang::Place::_make(i),
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__13<TPMGL(Queue),TPMGL(R)>(st))),
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
                              ::x10::lang::Place::_make(i),
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R)>)))x10_glb_Worker__closure__14<TPMGL(Queue),TPMGL(R)>(st))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc530) {
            {
                ::x10::lang::CheckedThrowable* ct__103719 =
                  __exc530;
                {
                    ::x10::xrx::Runtime::pushException(ct__103719);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__103722);
    }
}
#endif // X10_GLB_WORKER_H_IMPLEMENTATION
#endif // __X10_GLB_WORKER_H_NODEPS
