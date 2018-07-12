#ifndef __X10_XRX_FINISHSTATE__ROOTCOLLECTINGFINISH_H
#define __X10_XRX_FINISHSTATE__ROOTCOLLECTINGFINISH_H

#include <x10rt.h>


#define X10_XRX_FINISHSTATE__ROOTFINISH_H_NODEPS
#include <x10/xrx/FinishState__RootFinish.h>
#undef X10_XRX_FINISHSTATE__ROOTFINISH_H_NODEPS
#define X10_XRX_FINISHSTATE__COLLECTINGFINISHSTATE_H_NODEPS
#include <x10/xrx/FinishState__CollectingFinishState.h>
#undef X10_XRX_FINISHSTATE__COLLECTINGFINISHSTATE_H_NODEPS
namespace x10 { namespace xrx { 
template<class TPMGL(T)> class FinishState__StatefulReducer;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace io { 
class Deserializer;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace util { namespace concurrent { 
class SimpleLatch;
} } } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

template<class TPMGL(T)> class FinishState__RootCollectingFinish;
template <> class FinishState__RootCollectingFinish<void>;
template<class TPMGL(T)> class FinishState__RootCollectingFinish : public ::x10::xrx::FinishState__RootFinish
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::xrx::Runtime__Mortal::itable< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)> > _itable_1;
    
    static typename ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)>::template itable< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)> > _itable_2;
    
    virtual x10_boolean _isMortal() { return true; }
    
    ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>* FMGL(sr);
    
    void _constructor(::x10::lang::Reducible<TPMGL(T)>* reducer);
    
    static ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>* _make(
             ::x10::lang::Reducible<TPMGL(T)>* reducer);
    
    virtual void accept(TPMGL(T) t, x10_int id);
    virtual void notifyValue(::x10::lang::Rail< x10_byte >* remoteMapBytes,
                             TPMGL(T) v);
    virtual void notifyValue(::x10::util::Pair<x10_long, x10_int> remoteEntry,
                             TPMGL(T) v);
    virtual TPMGL(T) waitForFinishExpr();
    virtual ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>*
      x10__xrx__FinishState__RootCollectingFinish____this__x10__xrx__FinishState__RootCollectingFinish(
      );
    virtual void __fieldInitializers_x10_xrx_FinishState_RootCollectingFinish(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::xrx::FinishState__RootCollectingFinish<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::xrx::FinishState__RootFinish>(), ::x10aux::getRTT< ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.xrx.FinishState.RootCollectingFinish";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class FinishState__RootCollectingFinish<void> : public ::x10::xrx::FinishState__RootFinish
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_XRX_FINISHSTATE__ROOTCOLLECTINGFINISH_H

namespace x10 { namespace xrx { 
template<class TPMGL(T)> class FinishState__RootCollectingFinish;
} } 

#ifndef X10_XRX_FINISHSTATE__ROOTCOLLECTINGFINISH_H_NODEPS
#define X10_XRX_FINISHSTATE__ROOTCOLLECTINGFINISH_H_NODEPS
#include <x10/xrx/FinishState__RootFinish.h>
#include <x10/xrx/FinishState__CollectingFinishState.h>
#include <x10/xrx/FinishState__StatefulReducer.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Byte.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Long.h>
#include <x10/io/Deserializer.h>
#include <x10/lang/Any.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/util/concurrent/SimpleLatch.h>
#include <x10/util/Pair.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_XRX_FINISHSTATE__ROOTCOLLECTINGFINISH_H_GENERICS
#define X10_XRX_FINISHSTATE__ROOTCOLLECTINGFINISH_H_GENERICS
#endif // X10_XRX_FINISHSTATE__ROOTCOLLECTINGFINISH_H_GENERICS
#ifndef X10_XRX_FINISHSTATE__ROOTCOLLECTINGFINISH_H_IMPLEMENTATION
#define X10_XRX_FINISHSTATE__ROOTCOLLECTINGFINISH_H_IMPLEMENTATION
#include <x10/xrx/FinishState__RootCollectingFinish.h>

template<class TPMGL(T)> ::x10::xrx::Runtime__Mortal::itable< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)> >  x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)> >  x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)>::template itable< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)> >  x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_itable_2(&x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::accept, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_itables[4] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::xrx::Runtime__Mortal>, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(NULL, (void*)"::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>")};

//#line 1034 "x10/xrx/FinishState.x10"

//#line 1035 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_constructor(
                           ::x10::lang::Reducible<TPMGL(T)>* reducer) {
    
    //#line 1036 "x10/xrx/FinishState.x10"
    (this)->::x10::xrx::FinishState__RootFinish::_constructor();
    
    //#line 1035 "x10/xrx/FinishState.x10"
    
    //#line 1033 "x10/xrx/FinishState.x10"
    this->x10::xrx::template FinishState__RootCollectingFinish<TPMGL(T)>::__fieldInitializers_x10_xrx_FinishState_RootCollectingFinish();
    
    //#line 1037 "x10/xrx/FinishState.x10"
    this->FMGL(sr) = ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::_make(reducer);
}
template<class TPMGL(T)> ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>* x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_make(
                           ::x10::lang::Reducible<TPMGL(T)>* reducer)
{
    ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)> >()) ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>();
    this_->_constructor(reducer);
    return this_;
}



//#line 1039 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::accept(
  TPMGL(T) t, x10_int id) {
    
    //#line 1040 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(sr))->accept(t, id);
}

//#line 1042 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::notifyValue(
  ::x10::lang::Rail< x10_byte >* remoteMapBytes, TPMGL(T) v) {
    
    //#line 1043 "x10/xrx/FinishState.x10"
    ::x10::util::HashMap<x10_long, x10_int>* remoteMap = ::x10aux::class_cast< ::x10::util::HashMap<x10_long, x10_int>*>((::x10::io::Deserializer::_make(remoteMapBytes))->x10::io::Deserializer::readAny());
    
    //#line 1044 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(latch))->lock();
    
    //#line 1045 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(sr))->accept(v);
    
    //#line 1046 "x10/xrx/FinishState.x10"
    this->process(remoteMap);
    
    //#line 1047 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(latch))->unlock();
}

//#line 1049 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::notifyValue(
  ::x10::util::Pair<x10_long, x10_int> remoteEntry, TPMGL(T) v) {
    
    //#line 1050 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(latch))->lock();
    
    //#line 1051 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(sr))->accept(v);
    
    //#line 1052 "x10/xrx/FinishState.x10"
    this->process(remoteEntry);
    
    //#line 1053 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(latch))->unlock();
}

//#line 1055 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> TPMGL(T) x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::waitForFinishExpr(
  ) {
    
    //#line 1056 "x10/xrx/FinishState.x10"
    this->waitForFinish();
    
    //#line 1057 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(sr))->placeMerge();
    
    //#line 1058 "x10/xrx/FinishState.x10"
    TPMGL(T) result = ::x10aux::nullCheck(this->FMGL(sr))->result();
    
    //#line 1059 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(sr))->reset();
    
    //#line 1060 "x10/xrx/FinishState.x10"
    return result;
    
}

//#line 1033 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>*
  x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::x10__xrx__FinishState__RootCollectingFinish____this__x10__xrx__FinishState__RootCollectingFinish(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::__fieldInitializers_x10_xrx_FinishState_RootCollectingFinish(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::xrx::FinishState__RootFinish::_serialize_body(buf);
    buf.write(this->FMGL(sr));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)> >()) ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::xrx::FinishState__RootFinish::_deserialize_body(buf);
    FMGL(sr) = buf.read< ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>*>();
}

#endif // X10_XRX_FINISHSTATE__ROOTCOLLECTINGFINISH_H_IMPLEMENTATION
#endif // __X10_XRX_FINISHSTATE__ROOTCOLLECTINGFINISH_H_NODEPS
