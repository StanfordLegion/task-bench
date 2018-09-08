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
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace lang { 
class Zero;
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
#include <x10/lang/VoidFun_0_1.h>
#include <x10/compiler/Inline.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Zero.h>
#ifndef X10_GLB_CONTEXT_H_GENERICS
#define X10_GLB_CONTEXT_H_GENERICS
#endif // X10_GLB_CONTEXT_H_GENERICS
#ifndef X10_GLB_CONTEXT_H_IMPLEMENTATION
#define X10_GLB_CONTEXT_H_IMPLEMENTATION
#include <x10/glb/Context.h>

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
    this->x10::glb::template Context<TPMGL(Queue), TPMGL(R)>::__fieldInitializers_x10_glb_Context();
    
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
    ::x10::lang::VoidFun_0_1< ::x10::lang::PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*> >::__apply(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(st)->x10::lang::template PlaceLocalHandle< ::x10::glb::Worker<TPMGL(Queue), TPMGL(R)>*>::__apply())->x10::glb::template Worker<TPMGL(Queue), TPMGL(R)>::getYieldPoint()), 
      this->FMGL(st));
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
