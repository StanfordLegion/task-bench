#ifndef __X10_UTIL_WORKERLOCALHANDLE__STATE_H
#define __X10_UTIL_WORKERLOCALHANDLE__STATE_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

template<class TPMGL(U)> class WorkerLocalHandle__State;
template <> class WorkerLocalHandle__State<void>;
template<class TPMGL(U)> class WorkerLocalHandle__State : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(::x10::lang::Fun_0_0<TPMGL(U)>* init);
    
    static ::x10::util::WorkerLocalHandle__State<TPMGL(U)>* _make(
             ::x10::lang::Fun_0_0<TPMGL(U)>* init);
    
    ::x10::lang::Rail< TPMGL(U) >* FMGL(store);
    
    ::x10::lang::Fun_0_0<TPMGL(U)>* FMGL(init);
    
    virtual ::x10::util::WorkerLocalHandle__State<TPMGL(U)>* x10__util__WorkerLocalHandle__State____this__x10__util__WorkerLocalHandle__State(
      );
    virtual void __fieldInitializers_x10_util_WorkerLocalHandle_State(
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

template<class TPMGL(U)> ::x10aux::RuntimeType x10::util::WorkerLocalHandle__State<TPMGL(U)>::rtt;
template<class TPMGL(U)> void x10::util::WorkerLocalHandle__State<TPMGL(U)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::WorkerLocalHandle__State<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(U)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.WorkerLocalHandle.State";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class WorkerLocalHandle__State<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_WORKERLOCALHANDLE__STATE_H

namespace x10 { namespace util { 
template<class TPMGL(U)> class WorkerLocalHandle__State;
} } 

#ifndef X10_UTIL_WORKERLOCALHANDLE__STATE_H_NODEPS
#define X10_UTIL_WORKERLOCALHANDLE__STATE_H_NODEPS
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_WORKERLOCALHANDLE__STATE_H_GENERICS
#define X10_UTIL_WORKERLOCALHANDLE__STATE_H_GENERICS
#endif // X10_UTIL_WORKERLOCALHANDLE__STATE_H_GENERICS
#ifndef X10_UTIL_WORKERLOCALHANDLE__STATE_H_IMPLEMENTATION
#define X10_UTIL_WORKERLOCALHANDLE__STATE_H_IMPLEMENTATION
#include <x10/util/WorkerLocalHandle__State.h>


//#line 24 "x10/util/WorkerLocalHandle.x10"
template<class TPMGL(U)> void x10::util::WorkerLocalHandle__State<TPMGL(U)>::_constructor(
                           ::x10::lang::Fun_0_0<TPMGL(U)>* init) {
    
    //#line 23 "x10/util/WorkerLocalHandle.x10"
    ::x10::util::WorkerLocalHandle__State<TPMGL(U)>* this__154152 =
      this;
    ::x10aux::nullCheck(this__154152)->FMGL(init) = (::x10aux::class_cast_unchecked< ::x10::lang::Fun_0_0<TPMGL(U)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 25 "x10/util/WorkerLocalHandle.x10"
    this->FMGL(store) = ::x10::lang::Rail< TPMGL(U) >::_make(((x10_long)(::x10::xrx::Runtime::FMGL(MAX_THREADS__get)())));
    
    //#line 26 "x10/util/WorkerLocalHandle.x10"
    this->FMGL(init) = (init);
}
template<class TPMGL(U)> ::x10::util::WorkerLocalHandle__State<TPMGL(U)>* x10::util::WorkerLocalHandle__State<TPMGL(U)>::_make(
                           ::x10::lang::Fun_0_0<TPMGL(U)>* init)
{
    ::x10::util::WorkerLocalHandle__State<TPMGL(U)>* this_ = new (::x10aux::alloc_z< ::x10::util::WorkerLocalHandle__State<TPMGL(U)> >()) ::x10::util::WorkerLocalHandle__State<TPMGL(U)>();
    this_->_constructor(init);
    return this_;
}



//#line 28 "x10/util/WorkerLocalHandle.x10"

//#line 29 "x10/util/WorkerLocalHandle.x10"

//#line 23 "x10/util/WorkerLocalHandle.x10"
template<class TPMGL(U)> ::x10::util::WorkerLocalHandle__State<TPMGL(U)>*
  x10::util::WorkerLocalHandle__State<TPMGL(U)>::x10__util__WorkerLocalHandle__State____this__x10__util__WorkerLocalHandle__State(
  ) {
    return this;
    
}
template<class TPMGL(U)> void x10::util::WorkerLocalHandle__State<TPMGL(U)>::__fieldInitializers_x10_util_WorkerLocalHandle_State(
  ) {
    this->FMGL(init) = (::x10aux::class_cast_unchecked< ::x10::lang::Fun_0_0<TPMGL(U)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
template<class TPMGL(U)> const ::x10aux::serialization_id_t x10::util::WorkerLocalHandle__State<TPMGL(U)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::WorkerLocalHandle__State<TPMGL(U)>::_deserializer);

template<class TPMGL(U)> void x10::util::WorkerLocalHandle__State<TPMGL(U)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(store));
    buf.write(this->FMGL(init));
    
}

template<class TPMGL(U)> ::x10::lang::Reference* ::x10::util::WorkerLocalHandle__State<TPMGL(U)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::WorkerLocalHandle__State<TPMGL(U)>* this_ = new (::x10aux::alloc_z< ::x10::util::WorkerLocalHandle__State<TPMGL(U)> >()) ::x10::util::WorkerLocalHandle__State<TPMGL(U)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(U)> void x10::util::WorkerLocalHandle__State<TPMGL(U)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(store) = buf.read< ::x10::lang::Rail< TPMGL(U) >*>();
    FMGL(init) = buf.read< ::x10::lang::Fun_0_0<TPMGL(U)>*>();
}

#endif // X10_UTIL_WORKERLOCALHANDLE__STATE_H_IMPLEMENTATION
#endif // __X10_UTIL_WORKERLOCALHANDLE__STATE_H_NODEPS
