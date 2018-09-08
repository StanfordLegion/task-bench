#ifndef __X10_GLB_CONTEXT_H
#define __X10_GLB_CONTEXT_H

#include <x10rt.h>


#define X10_GLB_CONTEXTI_H_NODEPS
#include <x10/glb/ContextI.h>
#undef X10_GLB_CONTEXTI_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class TaskQueue;
} } 
namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class Worker;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace glb { 
class TaskBag;
} } 
namespace x10 { namespace glb { 
template<class TPMGL(T)> class FixedSizeStack;
} } 
namespace x10 { namespace glb { 
class Logger;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace glb { 

template<class TPMGL(Queue), class TPMGL(R)> class Context;
template <> class Context<void, void>;
template<class TPMGL(Queue), class TPMGL(R)> class Context : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::glb::ContextI::itable< ::x10::glb::Context<TPMGL(Queue), TPMGL(R)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::glb::Context<TPMGL(Queue), TPMGL(R)> > _itable_1;
    
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>
      FMGL(st);
    
    void _constructor(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st);
    
    static ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* _make(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st);
    
    virtual void yield();
    virtual void yielding();
    virtual ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* x10__glb__Context____this__x10__glb__Context(
      );
    virtual void __fieldInitializers_x10_glb_Context();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::RuntimeType x10::glb::Context<TPMGL(Queue), TPMGL(R)>::rtt;
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Context<TPMGL(Queue), TPMGL(R)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::glb::Context<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::glb::ContextI>()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(Queue)>(), ::x10aux::getRTT<TPMGL(R)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.glb.Context";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 2, params, variances);
}

template <> class Context<void, void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_GLB_CONTEXT_H

namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class Context;
} } 

#ifndef X10_GLB_CONTEXT_H_NODEPS
#define X10_GLB_CONTEXT_H_NODEPS
#include <x10/glb/ContextI.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/glb/TaskQueue.h>
#include <x10/glb/Worker.h>
#include <x10/lang/Zero.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/xrx/Runtime.h>
#include <x10/glb/TaskBag.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/glb/FixedSizeStack.h>
#include <x10/glb/Logger.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Place.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/Uncounted.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Inline.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_GLB_CONTEXT_H_GENERICS
#define X10_GLB_CONTEXT_H_GENERICS
#endif // X10_GLB_CONTEXT_H_GENERICS
#ifndef X10_GLB_CONTEXT_H_IMPLEMENTATION
#define X10_GLB_CONTEXT_H_IMPLEMENTATION
#include <x10/glb/Context.h>

#ifndef X10_GLB_CONTEXT__CLOSURE__2_CLOSURE
#define X10_GLB_CONTEXT__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Context__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__109513->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st__109513, loot__109514, victim__109504);
        ::x10aux::nullCheck(st__109513->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109513;
    ::x10::glb::TaskBag* loot__109514;
    x10_long victim__109504;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__109513);
        buf.write(this->loot__109514);
        buf.write(this->victim__109504);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__109513 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot__109514 = buf.read< ::x10::glb::TaskBag*>();
        x10_long that_victim__109504 = buf.read<x10_long>();
        x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) >(that_st__109513, that_loot__109514, that_victim__109504);
        return this_;
    }
    
    x10_glb_Context__closure__2(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109513, ::x10::glb::TaskBag* loot__109514, x10_long victim__109504) : st__109513(st__109513), loot__109514(loot__109514), victim__109504(victim__109504) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:168";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) > >x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_CONTEXT__CLOSURE__2_CLOSURE
#ifndef X10_GLB_CONTEXT__CLOSURE__3_CLOSURE
#define X10_GLB_CONTEXT__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Context__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__109513->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st__109513, loot__109514, ((x10_long)-1ll));
        ::x10aux::nullCheck(st__109513->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109513;
    ::x10::glb::TaskBag* loot__109514;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__109513);
        buf.write(this->loot__109514);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__109513 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot__109514 = buf.read< ::x10::glb::TaskBag*>();
        x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) >(that_st__109513, that_loot__109514);
        return this_;
    }
    
    x10_glb_Context__closure__3(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109513, ::x10::glb::TaskBag* loot__109514) : st__109513(st__109513), loot__109514(loot__109514) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:171";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) > >x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_CONTEXT__CLOSURE__3_CLOSURE
#ifndef X10_GLB_CONTEXT__CLOSURE__4_CLOSURE
#define X10_GLB_CONTEXT__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Context__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__109513->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::deal(
          st__109513, loot__109514, victim__109504);
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109513;
    ::x10::glb::TaskBag* loot__109514;
    x10_long victim__109504;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__109513);
        buf.write(this->loot__109514);
        buf.write(this->victim__109504);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__109513 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        ::x10::glb::TaskBag* that_loot__109514 = buf.read< ::x10::glb::TaskBag*>();
        x10_long that_victim__109504 = buf.read<x10_long>();
        x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) >(that_st__109513, that_loot__109514, that_victim__109504);
        return this_;
    }
    
    x10_glb_Context__closure__4(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109513, ::x10::glb::TaskBag* loot__109514, x10_long victim__109504) : st__109513(st__109513), loot__109514(loot__109514), victim__109504(victim__109504) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:176";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) > >x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) >::_deserialize);
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_GLB_CONTEXT__CLOSURE__4_CLOSURE
#ifndef X10_GLB_CONTEXT__CLOSURE__5_CLOSURE
#define X10_GLB_CONTEXT__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Context__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__109526->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109526;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__109526);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__109526 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) >(that_st__109526);
        return this_;
    }
    
    x10_glb_Context__closure__5(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109526) : st__109526(st__109526) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:202";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) > >x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_CONTEXT__CLOSURE__5_CLOSURE
#ifndef X10_GLB_CONTEXT__CLOSURE__6_CLOSURE
#define X10_GLB_CONTEXT__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Context__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(st__109526->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->FMGL(waiting) =
          false;
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109526;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->st__109526);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> that_st__109526 = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
        x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) >(that_st__109526);
        return this_;
    }
    
    x10_glb_Context__closure__6(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109526) : st__109526(st__109526) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:204";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_0::template itable <x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) > >x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_CONTEXT__CLOSURE__6_CLOSURE
#ifndef X10_GLB_CONTEXT__CLOSURE__1_CLOSURE
#define X10_GLB_CONTEXT__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
template<class TPMGL(Queue), class TPMGL(R)> class x10_glb_Context__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >::template itable <x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109437){
        
        //#line 452 "x10/glb/Worker.x10"
        ::x10::xrx::Runtime::probe();
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109525 =
          st__109437;
        
        //#line 186 "x10/glb/Worker.x10"
        ::x10::glb::TaskBag* loot__109515;
        
        //#line 187 "x10/glb/Worker.x10"
        while (((((((__extension__ ({
                     ::x10::glb::FixedSizeStack<x10_long>* this__109516 =
                       ::x10aux::nullCheck(this__109438)->FMGL(thieves);
                     ::x10aux::nullCheck(this__109516)->FMGL(size);
                 }))
                 ) > (((x10_long)0ll))) || (((__extension__ ({
                     ::x10::glb::FixedSizeStack<x10_long>* this__109517 =
                       ::x10aux::nullCheck(this__109438)->FMGL(lifelineThieves);
                     ::x10aux::nullCheck(this__109517)->FMGL(size);
                 }))
                 ) > (((x10_long)0ll))))) && (!::x10aux::struct_equals((loot__109515 =
                                                                          ::x10::glb::TaskQueue<TPMGL(Queue), TPMGL(R)>::split(::x10aux::nullCheck(::x10aux::nullCheck(this__109438)->FMGL(queue)))),
                                                                       reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            
            //#line 188 "x10/glb/Worker.x10"
            ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109513 =
              st__109525;
            ::x10::glb::TaskBag* loot__109514 = loot__109515;
            
            //#line 162 "x10/glb/Worker.x10"
            x10_long victim__109504 = ((x10_long)::x10aux::here);
            
            //#line 163 "x10/glb/Worker.x10"
            ::x10::glb::Logger* obj__109503 = ::x10aux::nullCheck(this__109438)->FMGL(logger);
            ::x10aux::nullCheck(obj__109503)->FMGL(nodesGiven) =
              ((::x10aux::nullCheck(obj__109503)->FMGL(nodesGiven)) + (::x10::glb::TaskBag::size(::x10aux::nullCheck(loot__109515))));
            
            //#line 164 "x10/glb/Worker.x10"
            if ((((__extension__ ({
                    ::x10::glb::FixedSizeStack<x10_long>* this__109505 =
                      ::x10aux::nullCheck(this__109438)->FMGL(thieves);
                    ::x10aux::nullCheck(this__109505)->FMGL(size);
                }))
                ) > (((x10_long)0ll)))) {
                
                //#line 165 "x10/glb/Worker.x10"
                x10_long thief__109506 = (__extension__ ({
                    ::x10::glb::FixedSizeStack<x10_long>* this__109507 =
                      ::x10aux::nullCheck(this__109438)->FMGL(thieves);
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__109507)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
                      ::x10aux::nullCheck(this__109507)->FMGL(size) =
                        ((::x10aux::nullCheck(this__109507)->FMGL(size)) - (((x10_long)1ll))));
                }))
                ;
                
                //#line 166 "x10/glb/Worker.x10"
                if (((thief__109506) >= (((x10_long)0ll))))
                {
                    
                    //#line 167 "x10/glb/Worker.x10"
                    ::x10::glb::Logger* obj__109500 = ::x10aux::nullCheck(this__109438)->FMGL(logger);
                    ::x10aux::nullCheck(obj__109500)->FMGL(lifelineStealsSuffered) =
                      ((::x10aux::nullCheck(obj__109500)->FMGL(lifelineStealsSuffered)) + (((x10_long)1ll)));
                    
                    //#line 168 "x10/glb/Worker.x10"
                    ::x10::xrx::Runtime::runUncountedAsync(
                      (__extension__ ({
                          ::x10::lang::Place alloc__109508 =
                             ::x10::lang::Place::_alloc();
                          (alloc__109508)->::x10::lang::Place::_constructor(
                            thief__109506);
                          alloc__109508;
                      }))
                      , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R)>)))x10_glb_Context__closure__2<TPMGL(Queue),TPMGL(R)>(st__109513, loot__109514, victim__109504))),
                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                } else {
                    
                    //#line 170 "x10/glb/Worker.x10"
                    ::x10::glb::Logger* obj__109501 = ::x10aux::nullCheck(this__109438)->FMGL(logger);
                    ::x10aux::nullCheck(obj__109501)->FMGL(stealsSuffered) =
                      ((::x10aux::nullCheck(obj__109501)->FMGL(stealsSuffered)) + (((x10_long)1ll)));
                    
                    //#line 171 "x10/glb/Worker.x10"
                    ::x10::xrx::Runtime::runUncountedAsync(
                      (__extension__ ({
                          ::x10::lang::Place alloc__109509 =
                             ::x10::lang::Place::_alloc();
                          (alloc__109509)->::x10::lang::Place::_constructor(
                            (((-(thief__109506))) - (((x10_long)1ll))));
                          alloc__109509;
                      }))
                      , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R)>)))x10_glb_Context__closure__3<TPMGL(Queue),TPMGL(R)>(st__109513, loot__109514))),
                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                }
                
            } else {
                
                //#line 174 "x10/glb/Worker.x10"
                ::x10::glb::Logger* obj__109502 = ::x10aux::nullCheck(this__109438)->FMGL(logger);
                ::x10aux::nullCheck(obj__109502)->FMGL(lifelineStealsSuffered) =
                  ((::x10aux::nullCheck(obj__109502)->FMGL(lifelineStealsSuffered)) + (((x10_long)1ll)));
                
                //#line 175 "x10/glb/Worker.x10"
                x10_long thief__109510 = (__extension__ ({
                    ::x10::glb::FixedSizeStack<x10_long>* this__109511 =
                      ::x10aux::nullCheck(this__109438)->FMGL(lifelineThieves);
                    ::x10aux::nullCheck(::x10aux::nullCheck(this__109511)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
                      ::x10aux::nullCheck(this__109511)->FMGL(size) =
                        ((::x10aux::nullCheck(this__109511)->FMGL(size)) - (((x10_long)1ll))));
                }))
                ;
                
                //#line 176 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runAsync((__extension__ ({
                                                  ::x10::lang::Place alloc__109512 =
                                                     ::x10::lang::Place::_alloc();
                                                  (alloc__109512)->::x10::lang::Place::_constructor(
                                                    thief__109510);
                                                  alloc__109512;
                                              }))
                                              , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R)>)))x10_glb_Context__closure__4<TPMGL(Queue),TPMGL(R)>(st__109513, loot__109514, victim__109504))),
                                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
            
        }
        
        //#line 452 "x10/glb/Worker.x10"
        ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st__109526 =
          st__109437;
        
        //#line 198 "x10/glb/Worker.x10"
        while ((((__extension__ ({
                   ::x10::glb::FixedSizeStack<x10_long>* this__109520 =
                     ::x10aux::nullCheck(this__109438)->FMGL(thieves);
                   ::x10aux::nullCheck(this__109520)->FMGL(size);
               }))
               ) > (((x10_long)0ll)))) {
            
            //#line 199 "x10/glb/Worker.x10"
            x10_long thief__109521 = (__extension__ ({
                ::x10::glb::FixedSizeStack<x10_long>* this__109522 =
                  ::x10aux::nullCheck(this__109438)->FMGL(thieves);
                ::x10aux::nullCheck(::x10aux::nullCheck(this__109522)->FMGL(data))->x10::lang::template Rail< x10_long >::__apply(
                  ::x10aux::nullCheck(this__109522)->FMGL(size) =
                    ((::x10aux::nullCheck(this__109522)->FMGL(size)) - (((x10_long)1ll))));
            }))
            ;
            
            //#line 200 "x10/glb/Worker.x10"
            if (((thief__109521) >= (((x10_long)0ll)))) {
                
                //#line 201 "x10/glb/Worker.x10"
                ::x10::glb::FixedSizeStack<x10_long>* this__109518 =
                  ::x10aux::nullCheck(this__109438)->FMGL(lifelineThieves);
                
                //#line 49 "x10/glb/FixedSizeStack.x10"
                ::x10aux::nullCheck(::x10aux::nullCheck(this__109518)->FMGL(data))->x10::lang::template Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this__109518)->FMGL(size) =
                    ((::x10aux::nullCheck(this__109518)->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
                  thief__109521);
                
                //#line 202 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                           ::x10::lang::Place alloc__109523 =
                                                             
                                                           ::x10::lang::Place::_alloc();
                                                           (alloc__109523)->::x10::lang::Place::_constructor(
                                                             thief__109521);
                                                           alloc__109523;
                                                       }))
                                                       , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R)>)))x10_glb_Context__closure__5<TPMGL(Queue),TPMGL(R)>(st__109526))),
                                                       ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            } else {
                
                //#line 204 "x10/glb/Worker.x10"
                ::x10::xrx::Runtime::runUncountedAsync((__extension__ ({
                                                           ::x10::lang::Place alloc__109524 =
                                                             
                                                           ::x10::lang::Place::_alloc();
                                                           (alloc__109524)->::x10::lang::Place::_constructor(
                                                             (((-(thief__109521))) - (((x10_long)1ll))));
                                                           alloc__109524;
                                                       }))
                                                       , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R)>)))x10_glb_Context__closure__6<TPMGL(Queue),TPMGL(R)>(st__109526))),
                                                       ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
            
        }
        
    }
    
    // captured environment
    ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__109438;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->this__109438);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) >* storage = ::x10aux::alloc_z<x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) > >();
        buf.record_reference(storage);
        ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* that_this__109438 = buf.read< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>();
        x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) >* this_ = new (storage) x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) >(that_this__109438);
        return this_;
    }
    
    x10_glb_Context__closure__1(::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__109438) : this__109438(this__109438) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> > >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> > >(); }
    
    const char* toNativeString() {
        return "x10/glb/Worker.x10:452";
    }

};

template<class TPMGL(Queue), class TPMGL(R)> typename ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >::template itable <x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) > >x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) >::__apply, &x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> > >, &x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R) >::_deserialize);

#endif // X10_GLB_CONTEXT__CLOSURE__1_CLOSURE
template<class TPMGL(Queue), class TPMGL(R)> ::x10::glb::ContextI::itable< ::x10::glb::Context<TPMGL(Queue), TPMGL(R)> >  x10::glb::Context<TPMGL(Queue), TPMGL(R)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName, &x10::glb::Context<TPMGL(Queue), TPMGL(R)>::yielding);
template<class TPMGL(Queue), class TPMGL(R)> ::x10::lang::Any::itable< ::x10::glb::Context<TPMGL(Queue), TPMGL(R)> >  x10::glb::Context<TPMGL(Queue), TPMGL(R)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(Queue), class TPMGL(R)> ::x10aux::itable_entry x10::glb::Context<TPMGL(Queue), TPMGL(R)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::glb::ContextI>, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::glb::Context<TPMGL(Queue), TPMGL(R)>")};

//#line 25 "x10/glb/Context.x10"
/**
     * PlaceLocalHandle of {@link Worker}
     */

//#line 30 "x10/glb/Context.x10"
/**
     * @param st PlaceLocalHandle 
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Context<TPMGL(Queue), TPMGL(R)>::_constructor(
                                               ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st) {
    
    //#line 20 "x10/glb/Context.x10"
    ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* this__109499 = this;
    ::x10aux::nullCheck(this__109499)->FMGL(st) = ::x10aux::zeroValue< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
    
    //#line 31 "x10/glb/Context.x10"
    this->FMGL(st) = st;
}
template<class TPMGL(Queue), class TPMGL(R)> ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* x10::glb::Context<TPMGL(Queue), TPMGL(R)>::_make(
                                               ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> st)
{
    ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* this_ = new (::x10aux::alloc_z< ::x10::glb::Context<TPMGL(Queue), TPMGL(R)> >()) ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>();
    this_->_constructor(st);
    return this_;
}



//#line 37 "x10/glb/Context.x10"
/**
     * Used by the user code, yield back to GLB scheduler.
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Context<TPMGL(Queue), TPMGL(R)>::yield(
  ) {
    
    //#line 38 "x10/glb/Context.x10"
    ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >::__apply(::x10aux::nullCheck((__extension__ ({
        ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>* this__109438 =
          this->FMGL(st)->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply();
        reinterpret_cast< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> > >(sizeof(x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R)>)))x10_glb_Context__closure__1<TPMGL(Queue),TPMGL(R)>(this__109438)));
    }))
    ), this->FMGL(st));
}

//#line 47 "x10/glb/Context.x10"
/**
     * Implements the ConTextI interface, for potentially simplified usage of yield by the user code,
     * i.e., user doesn't have to provide type of {@link TaskQueue} and type of computation result. 
     * However, this programming style is not adopted in this version of GLB because we might need to 
     * expose TaskQueue, R type for the future usage.
     */
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Context<TPMGL(Queue), TPMGL(R)>::yielding(
  ) {
    
    //#line 48 "x10/glb/Context.x10"
    this->yield();
}

//#line 20 "x10/glb/Context.x10"
template<class TPMGL(Queue), class TPMGL(R)> ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>*
  x10::glb::Context<TPMGL(Queue), TPMGL(R)>::x10__glb__Context____this__x10__glb__Context(
  ) {
    return this;
    
}
template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Context<TPMGL(Queue), TPMGL(R)>::__fieldInitializers_x10_glb_Context(
  ) {
    this->FMGL(st) = ::x10aux::zeroValue< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
}
template<class TPMGL(Queue), class TPMGL(R)> const ::x10aux::serialization_id_t x10::glb::Context<TPMGL(Queue), TPMGL(R)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::glb::Context<TPMGL(Queue), TPMGL(R)>::_deserializer);

template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Context<TPMGL(Queue), TPMGL(R)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(st));
    
}

template<class TPMGL(Queue), class TPMGL(R)> ::x10::lang::Reference* ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>* this_ = new (::x10aux::alloc_z< ::x10::glb::Context<TPMGL(Queue), TPMGL(R)> >()) ::x10::glb::Context<TPMGL(Queue), TPMGL(R)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(Queue), class TPMGL(R)> void x10::glb::Context<TPMGL(Queue), TPMGL(R)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(st) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >();
}

#endif // X10_GLB_CONTEXT_H_IMPLEMENTATION
#endif // __X10_GLB_CONTEXT_H_NODEPS
