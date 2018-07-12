#ifndef __X10_UTIL_WORKERLOCALHANDLE_H
#define __X10_UTIL_WORKERLOCALHANDLE_H

#include <x10rt.h>


#define X10_LANG_FUN_0_0_H_NODEPS
#include <x10/lang/Fun_0_0.h>
#undef X10_LANG_FUN_0_0_H_NODEPS
#define X10_LANG_VOIDFUN_0_1_H_NODEPS
#include <x10/lang/VoidFun_0_1.h>
#undef X10_LANG_VOIDFUN_0_1_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(U)> class WorkerLocalHandle__State;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

template<class TPMGL(T)> class WorkerLocalHandle;
template <> class WorkerLocalHandle<void>;
template<class TPMGL(T)> class WorkerLocalHandle : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Fun_0_0<TPMGL(T)>::template itable< ::x10::util::WorkerLocalHandle<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::WorkerLocalHandle<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::VoidFun_0_1<TPMGL(T)>::template itable< ::x10::util::WorkerLocalHandle<TPMGL(T)> > _itable_2;
    
    ::x10::lang::PlaceLocalHandle< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*>
      FMGL(state);
    
    void _constructor();
    
    static ::x10::util::WorkerLocalHandle<TPMGL(T)>* _make();
    
    void _constructor(::x10::lang::Fun_0_0<TPMGL(T)>* init);
    
    static ::x10::util::WorkerLocalHandle<TPMGL(T)>* _make(::x10::lang::Fun_0_0<TPMGL(T)>* init);
    
    virtual TPMGL(T) __apply();
    virtual void __apply(TPMGL(T) t);
    virtual void initLocal(::x10::lang::Fun_0_0<TPMGL(T)>* init);
    virtual void applyLocal(::x10::lang::VoidFun_0_1<TPMGL(T)>* op);
    virtual TPMGL(T) reduceLocal(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op);
    virtual TPMGL(T) reduceLocal(TPMGL(T) result, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op);
    virtual ::x10::util::WorkerLocalHandle<TPMGL(T)>* x10__util__WorkerLocalHandle____this__x10__util__WorkerLocalHandle(
      );
    virtual void __fieldInitializers_x10_util_WorkerLocalHandle(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::WorkerLocalHandle<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::WorkerLocalHandle<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::WorkerLocalHandle<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::VoidFun_0_1<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.WorkerLocalHandle";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class WorkerLocalHandle<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_WORKERLOCALHANDLE_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class WorkerLocalHandle;
} } 

#ifndef X10_UTIL_WORKERLOCALHANDLE_H_NODEPS
#define X10_UTIL_WORKERLOCALHANDLE_H_NODEPS
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/util/WorkerLocalHandle__State.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Int.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_WORKERLOCALHANDLE_H_GENERICS
#define X10_UTIL_WORKERLOCALHANDLE_H_GENERICS
#endif // X10_UTIL_WORKERLOCALHANDLE_H_GENERICS
#ifndef X10_UTIL_WORKERLOCALHANDLE_H_IMPLEMENTATION
#define X10_UTIL_WORKERLOCALHANDLE_H_IMPLEMENTATION
#include <x10/util/WorkerLocalHandle.h>

#ifndef X10_UTIL_WORKERLOCALHANDLE__CLOSURE__1_CLOSURE
#define X10_UTIL_WORKERLOCALHANDLE__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_util_WorkerLocalHandle__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*>::template itable <x10_util_WorkerLocalHandle__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::util::WorkerLocalHandle__State<TPMGL(T)>* __apply(){
        return ::x10::util::WorkerLocalHandle__State<TPMGL(T)>::_make(init);
        
    }
    
    // captured environment
    ::x10::lang::Fun_0_0<TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_WorkerLocalHandle__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_WorkerLocalHandle__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Fun_0_0<TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_0<TPMGL(T)>*>();
        x10_util_WorkerLocalHandle__closure__1<TPMGL(T) >* this_ = new (storage) x10_util_WorkerLocalHandle__closure__1<TPMGL(T) >(that_init);
        return this_;
    }
    
    x10_util_WorkerLocalHandle__closure__1(::x10::lang::Fun_0_0<TPMGL(T)>* init) : init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/util/WorkerLocalHandle.x10:37";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*>::template itable <x10_util_WorkerLocalHandle__closure__1<TPMGL(T) > >x10_util_WorkerLocalHandle__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_WorkerLocalHandle__closure__1<TPMGL(T) >::__apply, &x10_util_WorkerLocalHandle__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_WorkerLocalHandle__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*> >, &x10_util_WorkerLocalHandle__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_WorkerLocalHandle__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_WorkerLocalHandle__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_WORKERLOCALHANDLE__CLOSURE__1_CLOSURE
#ifndef X10_UTIL_WORKERLOCALHANDLE__CLOSURE__2_CLOSURE
#define X10_UTIL_WORKERLOCALHANDLE__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_WorkerLocalHandle__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_WorkerLocalHandle__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10::lang::VoidFun_0_1<TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
          t__143394);
    }
    
    // captured environment
    TPMGL(T) t__143394;
    ::x10::lang::VoidFun_0_1<TPMGL(T)>* op;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->t__143394);
        buf.write(this->op);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_WorkerLocalHandle__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_WorkerLocalHandle__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_t__143394 = buf.read<TPMGL(T)>();
        ::x10::lang::VoidFun_0_1<TPMGL(T)>* that_op = buf.read< ::x10::lang::VoidFun_0_1<TPMGL(T)>*>();
        x10_util_WorkerLocalHandle__closure__2<TPMGL(T) >* this_ = new (storage) x10_util_WorkerLocalHandle__closure__2<TPMGL(T) >(that_t__143394, that_op);
        return this_;
    }
    
    x10_util_WorkerLocalHandle__closure__2(TPMGL(T) t__143394, ::x10::lang::VoidFun_0_1<TPMGL(T)>* op) : t__143394(t__143394), op(op) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/WorkerLocalHandle.x10:74";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_WorkerLocalHandle__closure__2<TPMGL(T) > >x10_util_WorkerLocalHandle__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_WorkerLocalHandle__closure__2<TPMGL(T) >::__apply, &x10_util_WorkerLocalHandle__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_WorkerLocalHandle__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_WorkerLocalHandle__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_WorkerLocalHandle__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_WorkerLocalHandle__closure__2<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_WorkerLocalHandle__closure__2<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_WorkerLocalHandle__closure__2<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_WORKERLOCALHANDLE__CLOSURE__2_CLOSURE
template<class TPMGL(T)> typename ::x10::lang::Fun_0_0<TPMGL(T)>::template itable< ::x10::util::WorkerLocalHandle<TPMGL(T)> >  x10::util::WorkerLocalHandle<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::WorkerLocalHandle<TPMGL(T)>::__apply, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::util::WorkerLocalHandle<TPMGL(T)> >  x10::util::WorkerLocalHandle<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_1<TPMGL(T)>::template itable< ::x10::util::WorkerLocalHandle<TPMGL(T)> >  x10::util::WorkerLocalHandle<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::WorkerLocalHandle<TPMGL(T)>::__apply, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::util::WorkerLocalHandle<TPMGL(T)>::_itables[4] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1<TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(NULL, (void*)"::x10::util::WorkerLocalHandle<TPMGL(T)>")};

//#line 32 "x10/util/WorkerLocalHandle.x10"

//#line 34 "x10/util/WorkerLocalHandle.x10"
template<class TPMGL(T)> void x10::util::WorkerLocalHandle<TPMGL(T)>::_constructor(
                           ) {
    (this)->::x10::util::WorkerLocalHandle<TPMGL(T)>::_constructor(
      ::x10aux::class_cast_unchecked< ::x10::lang::Fun_0_0<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}
template<class TPMGL(T)> ::x10::util::WorkerLocalHandle<TPMGL(T)>* x10::util::WorkerLocalHandle<TPMGL(T)>::_make(
                           ) {
    ::x10::util::WorkerLocalHandle<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::WorkerLocalHandle<TPMGL(T)> >()) ::x10::util::WorkerLocalHandle<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 36 "x10/util/WorkerLocalHandle.x10"
template<class TPMGL(T)> void x10::util::WorkerLocalHandle<TPMGL(T)>::_constructor(
                           ::x10::lang::Fun_0_0<TPMGL(T)>* init) {
    
    //#line 22 "x10/util/WorkerLocalHandle.x10"
    this->x10::util::template WorkerLocalHandle<TPMGL(T)>::__fieldInitializers_x10_util_WorkerLocalHandle();
    
    //#line 37 "x10/util/WorkerLocalHandle.x10"
    ::x10::lang::PlaceLocalHandle< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*> state =
      ::x10::lang::PlaceLocalHandle<void>::template make< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>* >(
        ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*> >(sizeof(x10_util_WorkerLocalHandle__closure__1<TPMGL(T)>)))x10_util_WorkerLocalHandle__closure__1<TPMGL(T)>(init))));
    
    //#line 38 "x10/util/WorkerLocalHandle.x10"
    this->FMGL(state) = state;
}
template<class TPMGL(T)> ::x10::util::WorkerLocalHandle<TPMGL(T)>* x10::util::WorkerLocalHandle<TPMGL(T)>::_make(
                           ::x10::lang::Fun_0_0<TPMGL(T)>* init)
{
    ::x10::util::WorkerLocalHandle<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::WorkerLocalHandle<TPMGL(T)> >()) ::x10::util::WorkerLocalHandle<TPMGL(T)>();
    this_->_constructor(init);
    return this_;
}



//#line 41 "x10/util/WorkerLocalHandle.x10"
template<class TPMGL(T)> TPMGL(T) x10::util::WorkerLocalHandle<TPMGL(T)>::__apply(
  ) {
    
    //#line 42 "x10/util/WorkerLocalHandle.x10"
    ::x10::util::WorkerLocalHandle__State<TPMGL(T)>* localState =
      this->FMGL(state)->x10::lang::template PlaceLocalHandle< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*>::__apply();
    
    //#line 43 "x10/util/WorkerLocalHandle.x10"
    TPMGL(T) t = ::x10aux::nullCheck(::x10aux::nullCheck(localState)->FMGL(store))->x10::lang::template Rail< TPMGL(T) >::__apply(
                   ((x10_long)(::x10::xrx::Runtime::workerId())));
    
    //#line 44 "x10/util/WorkerLocalHandle.x10"
    if ((::x10aux::struct_equals(t, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 45 "x10/util/WorkerLocalHandle.x10"
        t = ::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(::x10aux::nullCheck(localState)->FMGL(init)));
        
        //#line 46 "x10/util/WorkerLocalHandle.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(localState)->FMGL(store))->x10::lang::template Rail< TPMGL(T) >::__set(
          ((x10_long)(::x10::xrx::Runtime::workerId())), t);
    }
    
    //#line 48 "x10/util/WorkerLocalHandle.x10"
    return t;
    
}

//#line 51 "x10/util/WorkerLocalHandle.x10"
template<class TPMGL(T)> void x10::util::WorkerLocalHandle<TPMGL(T)>::__apply(
  TPMGL(T) t) {
    
    //#line 52 "x10/util/WorkerLocalHandle.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(state)->x10::lang::template PlaceLocalHandle< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*>::__apply())->FMGL(store))->x10::lang::template Rail< TPMGL(T) >::__set(
      ((x10_long)(::x10::xrx::Runtime::workerId())), t);
}

//#line 59 "x10/util/WorkerLocalHandle.x10"
/**
     * Set the init operation for this worker local handle, and clear all
     * current values.
     */
template<class TPMGL(T)> void x10::util::WorkerLocalHandle<TPMGL(T)>::initLocal(
  ::x10::lang::Fun_0_0<TPMGL(T)>* init) {
    
    //#line 60 "x10/util/WorkerLocalHandle.x10"
    ::x10::util::WorkerLocalHandle__State<TPMGL(T)>* localState =
      this->FMGL(state)->x10::lang::template PlaceLocalHandle< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*>::__apply();
    
    //#line 61 "x10/util/WorkerLocalHandle.x10"
    ::x10::lang::Rail< TPMGL(T) >* localStore = ::x10aux::nullCheck(localState)->FMGL(store);
    
    //#line 62 "x10/util/WorkerLocalHandle.x10"
    ::x10aux::nullCheck(localStore)->x10::lang::template Rail< TPMGL(T) >::clear();
    
    //#line 63 "x10/util/WorkerLocalHandle.x10"
    ::x10aux::nullCheck(localState)->FMGL(init) = (init);
}

//#line 69 "x10/util/WorkerLocalHandle.x10"
/** 
     * Apply the given operation in parallel to each thread local value.
     */
template<class TPMGL(T)> void x10::util::WorkerLocalHandle<TPMGL(T)>::applyLocal(
  ::x10::lang::VoidFun_0_1<TPMGL(T)>* op) {
    
    //#line 70 "x10/util/WorkerLocalHandle.x10"
    ::x10::lang::Rail< TPMGL(T) >* localStore = ::x10aux::nullCheck(this->FMGL(state)->x10::lang::template PlaceLocalHandle< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*>::__apply())->FMGL(store);
    {
        
        //#line 71 "x10/util/WorkerLocalHandle.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__143412 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                x10_long i__143341min__143395 = ((x10_long)0ll);
                x10_long i__143341max__143396 = (((x10_long)(::x10aux::nullCheck(localStore)->FMGL(size))) - (((x10_long)1ll)));
                {
                    x10_long i__143397;
                    for (i__143397 = i__143341min__143395;
                         ((i__143397) <= (i__143341max__143396));
                         i__143397 = ((i__143397) + (((x10_long)1ll))))
                    {
                        x10_long i__143398 = i__143397;
                        
                        //#line 72 "x10/util/WorkerLocalHandle.x10"
                        TPMGL(T) t__143394 = ::x10aux::nullCheck(localStore)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                               i__143398);
                        
                        //#line 73 "x10/util/WorkerLocalHandle.x10"
                        if ((!::x10aux::struct_equals(t__143394,
                                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                        {
                            
                            //#line 74 "x10/util/WorkerLocalHandle.x10"
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_WorkerLocalHandle__closure__2<TPMGL(T)>)))x10_util_WorkerLocalHandle__closure__2<TPMGL(T)>(t__143394, op))));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc3060) {
            {
                ::x10::lang::CheckedThrowable* ct__143410 =
                  __exc3060;
                {
                    ::x10::xrx::Runtime::pushException(ct__143410);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__143412);
    }
    
    //#line 77 "x10/util/WorkerLocalHandle.x10"
    return;
}

//#line 84 "x10/util/WorkerLocalHandle.x10"
/** 
     * Reduce partial results from each thread using the init operation to
     * create the initial value, and return combined result.
     */
template<class TPMGL(T)> TPMGL(T) x10::util::WorkerLocalHandle<TPMGL(T)>::reduceLocal(
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op) {
    
    //#line 85 "x10/util/WorkerLocalHandle.x10"
    ::x10::util::WorkerLocalHandle__State<TPMGL(T)>* localState =
      this->FMGL(state)->x10::lang::template PlaceLocalHandle< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*>::__apply();
    
    //#line 86 "x10/util/WorkerLocalHandle.x10"
    ::x10::lang::Rail< TPMGL(T) >* localStore = ::x10aux::nullCheck(localState)->FMGL(store);
    
    //#line 87 "x10/util/WorkerLocalHandle.x10"
    TPMGL(T) result = ::x10aux::class_cast_unchecked<TPMGL(T)>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
    //#line 88 "x10/util/WorkerLocalHandle.x10"
    x10_long i__143359min__143400 = ((x10_long)0ll);
    x10_long i__143359max__143401 = (((x10_long)(::x10aux::nullCheck(localStore)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__143402;
        for (i__143402 = i__143359min__143400; ((i__143402) <= (i__143359max__143401));
             i__143402 = ((i__143402) + (((x10_long)1ll))))
        {
            x10_long i__143403 = i__143402;
            
            //#line 89 "x10/util/WorkerLocalHandle.x10"
            TPMGL(T) t__143399 = ::x10aux::nullCheck(localStore)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                   i__143403);
            
            //#line 90 "x10/util/WorkerLocalHandle.x10"
            if ((!::x10aux::struct_equals(t__143399, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 91 "x10/util/WorkerLocalHandle.x10"
                if ((::x10aux::struct_equals(result, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                {
                    result = t__143399;
                } else {
                    
                    //#line 92 "x10/util/WorkerLocalHandle.x10"
                    result = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
                      result, t__143399);
                }
                
            }
            
        }
    }
    
    //#line 95 "x10/util/WorkerLocalHandle.x10"
    return result;
    
}

//#line 107 "x10/util/WorkerLocalHandle.x10"
/** 
     * Reduce partial results from each thread using the given 'result' as
     * the initial value.  
     * This can be used e.g. to sum a Rail[Double] 'in place' as follows:
     * result_worker.reduceLocal( result, 
     *   (a:Rail[Double],b:Rail[Double]) => 
            { a.map(result, b, (x:Double,y:Double)=>(x+y) ) as Rail[Double] }
     *   );
     */
template<class TPMGL(T)> TPMGL(T) x10::util::WorkerLocalHandle<TPMGL(T)>::reduceLocal(
  TPMGL(T) result, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op) {
    
    //#line 108 "x10/util/WorkerLocalHandle.x10"
    ::x10::util::WorkerLocalHandle__State<TPMGL(T)>* localState =
      this->FMGL(state)->x10::lang::template PlaceLocalHandle< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*>::__apply();
    
    //#line 109 "x10/util/WorkerLocalHandle.x10"
    ::x10::lang::Rail< TPMGL(T) >* localStore = ::x10aux::nullCheck(localState)->FMGL(store);
    
    //#line 110 "x10/util/WorkerLocalHandle.x10"
    x10_long i__143377min__143405 = ((x10_long)0ll);
    x10_long i__143377max__143406 = (((x10_long)(::x10aux::nullCheck(localStore)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__143407;
        for (i__143407 = i__143377min__143405; ((i__143407) <= (i__143377max__143406));
             i__143407 = ((i__143407) + (((x10_long)1ll))))
        {
            x10_long i__143408 = i__143407;
            
            //#line 111 "x10/util/WorkerLocalHandle.x10"
            TPMGL(T) t__143404 = ::x10aux::nullCheck(localStore)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                   i__143408);
            
            //#line 112 "x10/util/WorkerLocalHandle.x10"
            if ((!::x10aux::struct_equals(t__143404, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 113 "x10/util/WorkerLocalHandle.x10"
                result = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
                  result, t__143404);
            }
            
        }
    }
    
    //#line 116 "x10/util/WorkerLocalHandle.x10"
    return result;
    
}

//#line 22 "x10/util/WorkerLocalHandle.x10"
template<class TPMGL(T)> ::x10::util::WorkerLocalHandle<TPMGL(T)>*
  x10::util::WorkerLocalHandle<TPMGL(T)>::x10__util__WorkerLocalHandle____this__x10__util__WorkerLocalHandle(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::WorkerLocalHandle<TPMGL(T)>::__fieldInitializers_x10_util_WorkerLocalHandle(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::WorkerLocalHandle<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::WorkerLocalHandle<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::util::WorkerLocalHandle<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(state));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::util::WorkerLocalHandle<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::WorkerLocalHandle<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::WorkerLocalHandle<TPMGL(T)> >()) ::x10::util::WorkerLocalHandle<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::util::WorkerLocalHandle<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(state) = buf.read< ::x10::lang::PlaceLocalHandle< ::x10::util::WorkerLocalHandle__State<TPMGL(T)>*> >();
}

#endif // X10_UTIL_WORKERLOCALHANDLE_H_IMPLEMENTATION
#endif // __X10_UTIL_WORKERLOCALHANDLE_H_NODEPS
