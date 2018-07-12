#ifndef __X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH_H
#define __X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH_H

#include <x10rt.h>


#define X10_XRX_FINISHSTATE__REMOTEFINISH_H_NODEPS
#include <x10/xrx/FinishState__RemoteFinish.h>
#undef X10_XRX_FINISHSTATE__REMOTEFINISH_H_NODEPS
#define X10_XRX_FINISHSTATE__COLLECTINGFINISHSTATE_H_NODEPS
#include <x10/xrx/FinishState__CollectingFinishState.h>
#undef X10_XRX_FINISHSTATE__COLLECTINGFINISHSTATE_H_NODEPS
namespace x10 { namespace xrx { 
template<class TPMGL(T)> class FinishState__StatefulReducer;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace util { namespace concurrent { 
class AtomicInteger;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace xrx { 
class FinishState__RemoteFinishSkeleton;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace io { 
class Serializer;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace xrx { 
class FinishState__RootFinish;
} } 
namespace x10 { namespace xrx { 
template<class TPMGL(T)> class FinishState__RootCollectingFinish;
} } 
namespace x10 { namespace compiler { 
class Immediate;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

template<class TPMGL(T)> class FinishState__RemoteCollectingFinish;
template <> class FinishState__RemoteCollectingFinish<void>;
template<class TPMGL(T)> class FinishState__RemoteCollectingFinish : public ::x10::xrx::FinishState__RemoteFinish
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)>::template itable< ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)> > _itable_1;
    
    ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>* FMGL(sr);
    
    void _constructor(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref,
                      ::x10::lang::Reducible<TPMGL(T)>* reducer);
    
    static ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>* _make(
             ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref,
             ::x10::lang::Reducible<TPMGL(T)>* reducer);
    
    virtual void accept(TPMGL(T) t, x10_int id);
    virtual void notifyActivityTermination();
    virtual ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>*
      x10__xrx__FinishState__RemoteCollectingFinish____this__x10__xrx__FinishState__RemoteCollectingFinish(
      );
    virtual void __fieldInitializers_x10_xrx_FinishState_RemoteCollectingFinish(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::xrx::FinishState__RemoteCollectingFinish<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::xrx::FinishState__RemoteFinish>(), ::x10aux::getRTT< ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.xrx.FinishState.RemoteCollectingFinish";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class FinishState__RemoteCollectingFinish<void> : public ::x10::xrx::FinishState__RemoteFinish
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH_H

namespace x10 { namespace xrx { 
template<class TPMGL(T)> class FinishState__RemoteCollectingFinish;
} } 

#ifndef X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH_H_NODEPS
#define X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH_H_NODEPS
#include <x10/xrx/FinishState__RemoteFinish.h>
#include <x10/xrx/FinishState__CollectingFinishState.h>
#include <x10/xrx/FinishState__StatefulReducer.h>
#include <x10/lang/GlobalRef.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/Int.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/util/concurrent/AtomicInteger.h>
#include <x10/lang/Rail.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/util/GrowableRail.h>
#include <x10/xrx/FinishState__RemoteFinishSkeleton.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Place.h>
#include <x10/xrx/Runtime.h>
#include <x10/io/Serializer.h>
#include <x10/lang/Any.h>
#include <x10/lang/Byte.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/xrx/FinishState__RootFinish.h>
#include <x10/xrx/FinishState__RootCollectingFinish.h>
#include <x10/compiler/Immediate.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/util/Pair.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH_H_GENERICS
#define X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH_H_GENERICS
#endif // X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH_H_GENERICS
#ifndef X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH_H_IMPLEMENTATION
#define X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH_H_IMPLEMENTATION
#include <x10/xrx/FinishState__RemoteCollectingFinish.h>

#ifndef X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH__CLOSURE__24_CLOSURE
#define X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH__CLOSURE__24_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_xrx_FinishState__RemoteCollectingFinish__closure__24 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(::x10::xrx::FinishState::template deref< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>* >(
                              ref))->notify(serializedTable, excs);
    }
    
    // captured environment
    ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref;
    ::x10::lang::Rail< x10_byte >* serializedTable;
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* excs;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->ref);
        buf.write(this->serializedTable);
        buf.write(this->excs);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > that_ref = buf.read< ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > >();
        ::x10::lang::Rail< x10_byte >* that_serializedTable = buf.read< ::x10::lang::Rail< x10_byte >*>();
        ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* that_excs = buf.read< ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >*>();
        x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) >* this_ = new (storage) x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) >(that_ref, that_serializedTable, that_excs);
        return this_;
    }
    
    x10_xrx_FinishState__RemoteCollectingFinish__closure__24(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref, ::x10::lang::Rail< x10_byte >* serializedTable, ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* excs) : ref(ref), serializedTable(serializedTable), excs(excs) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/xrx/FinishState.x10:1096";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) > >x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) >::__apply, &x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_REMOTE_INVOCATION);

#endif // X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH__CLOSURE__24_CLOSURE
#ifndef X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH__CLOSURE__25_CLOSURE
#define X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_xrx_FinishState__RemoteCollectingFinish__closure__25 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(::x10::xrx::FinishState::template deref< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>* >(
                              ref))->notifyValue(serializedTable,
                                                 result);
    }
    
    // captured environment
    ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref;
    ::x10::lang::Rail< x10_byte >* serializedTable;
    TPMGL(T) result;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->ref);
        buf.write(this->serializedTable);
        buf.write(this->result);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > that_ref = buf.read< ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > >();
        ::x10::lang::Rail< x10_byte >* that_serializedTable = buf.read< ::x10::lang::Rail< x10_byte >*>();
        TPMGL(T) that_result = buf.read<TPMGL(T)>();
        x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) >* this_ = new (storage) x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) >(that_ref, that_serializedTable, that_result);
        return this_;
    }
    
    x10_xrx_FinishState__RemoteCollectingFinish__closure__25(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref, ::x10::lang::Rail< x10_byte >* serializedTable, TPMGL(T) result) : ref(ref), serializedTable(serializedTable), result(result) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/xrx/FinishState.x10:1098";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) > >x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) >::__apply, &x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_REMOTE_INVOCATION);

#endif // X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH__CLOSURE__25_CLOSURE
#ifndef X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH__CLOSURE__26_CLOSURE
#define X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_xrx_FinishState__RemoteCollectingFinish__closure__26 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(::x10::xrx::FinishState::template deref< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>* >(
                              ref))->notify(message, excs);
    }
    
    // captured environment
    ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref;
    ::x10::util::Pair<x10_long, x10_int> message;
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* excs;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->ref);
        buf.write(this->message);
        buf.write(this->excs);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > that_ref = buf.read< ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > >();
        ::x10::util::Pair<x10_long, x10_int> that_message = buf.read< ::x10::util::Pair<x10_long, x10_int> >();
        ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* that_excs = buf.read< ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >*>();
        x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) >* this_ = new (storage) x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) >(that_ref, that_message, that_excs);
        return this_;
    }
    
    x10_xrx_FinishState__RemoteCollectingFinish__closure__26(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref, ::x10::util::Pair<x10_long, x10_int> message, ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* excs) : ref(ref), message(message), excs(excs) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/xrx/FinishState.x10:1105";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) > >x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) >::__apply, &x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_REMOTE_INVOCATION);

#endif // X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH__CLOSURE__26_CLOSURE
#ifndef X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH__CLOSURE__27_CLOSURE
#define X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH__CLOSURE__27_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_xrx_FinishState__RemoteCollectingFinish__closure__27 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(::x10::xrx::FinishState::template deref< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>* >(
                              ref))->notifyValue(message, result);
    }
    
    // captured environment
    ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref;
    ::x10::util::Pair<x10_long, x10_int> message;
    TPMGL(T) result;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->ref);
        buf.write(this->message);
        buf.write(this->result);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > that_ref = buf.read< ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > >();
        ::x10::util::Pair<x10_long, x10_int> that_message = buf.read< ::x10::util::Pair<x10_long, x10_int> >();
        TPMGL(T) that_result = buf.read<TPMGL(T)>();
        x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) >* this_ = new (storage) x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) >(that_ref, that_message, that_result);
        return this_;
    }
    
    x10_xrx_FinishState__RemoteCollectingFinish__closure__27(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref, ::x10::util::Pair<x10_long, x10_int> message, TPMGL(T) result) : ref(ref), message(message), result(result) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/xrx/FinishState.x10:1107";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) > >x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) >::__apply, &x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_REMOTE_INVOCATION);

#endif // X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH__CLOSURE__27_CLOSURE
template<class TPMGL(T)> typename ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)>::template itable< ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)> >  x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::_itable_0(&x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::accept, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)> >  x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>")};

//#line 1065 "x10/xrx/FinishState.x10"

//#line 1066 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::_constructor(
                           ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref,
                           ::x10::lang::Reducible<TPMGL(T)>* reducer) {
    
    //#line 1067 "x10/xrx/FinishState.x10"
    (this)->::x10::xrx::FinishState__RemoteFinish::_constructor(
      ref);
    
    //#line 1066 "x10/xrx/FinishState.x10"
    
    //#line 1064 "x10/xrx/FinishState.x10"
    this->x10::xrx::template FinishState__RemoteCollectingFinish<TPMGL(T)>::__fieldInitializers_x10_xrx_FinishState_RemoteCollectingFinish();
    
    //#line 1068 "x10/xrx/FinishState.x10"
    this->FMGL(sr) = ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::_make(reducer);
}
template<class TPMGL(T)> ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>* x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::_make(
                           ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref,
                           ::x10::lang::Reducible<TPMGL(T)>* reducer)
{
    ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)> >()) ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>();
    this_->_constructor(ref, reducer);
    return this_;
}



//#line 1070 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::accept(
  TPMGL(T) t, x10_int id) {
    
    //#line 1071 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(sr))->accept(t, id);
}

//#line 1073 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::notifyActivityTermination(
  ) {
    
    //#line 1074 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(lock))->lock();
    
    //#line 1075 "x10/xrx/FinishState.x10"
    this->FMGL(count) = ((this->FMGL(count)) - (((x10_int)1)));
    
    //#line 1076 "x10/xrx/FinishState.x10"
    if (((((x10_long)(this->FMGL(local)->x10::util::concurrent::AtomicInteger::decrementAndGet()))) > (((x10_long)0ll))))
    {
        
        //#line 1077 "x10/xrx/FinishState.x10"
        ::x10aux::nullCheck(this->FMGL(lock))->unlock();
        
        //#line 1078 "x10/xrx/FinishState.x10"
        return;
    }
    
    //#line 1080 "x10/xrx/FinishState.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* excs =
      ((::x10aux::struct_equals(this->FMGL(exceptions), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) ||
    ::x10aux::nullCheck(this->FMGL(exceptions))->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::isEmpty())
      ? ((::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
      : (::x10aux::nullCheck(this->FMGL(exceptions))->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::toRail());
    
    //#line 1081 "x10/xrx/FinishState.x10"
    this->FMGL(exceptions) = (::x10aux::class_cast_unchecked< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 1082 "x10/xrx/FinishState.x10"
    ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > ref =
      this->ref();
    
    //#line 1083 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(sr))->placeMerge();
    
    //#line 1084 "x10/xrx/FinishState.x10"
    TPMGL(T) result = ::x10aux::nullCheck(this->FMGL(sr))->result();
    
    //#line 1085 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(this->FMGL(sr))->reset();
    
    //#line 1086 "x10/xrx/FinishState.x10"
    if (((!::x10aux::struct_equals(this->FMGL(remoteActivities),
                                   reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
        (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(remoteActivities))->size(),
                                  ((x10_long)0ll))))) {
        
        //#line 1087 "x10/xrx/FinishState.x10"
        ::x10aux::nullCheck(this->FMGL(remoteActivities))->put(
          ::x10::lang::Place::_make(::x10aux::here)->FMGL(id),
          this->FMGL(count));
        
        //#line 1089 "x10/xrx/FinishState.x10"
        ::x10::io::Serializer* serializer = ::x10::io::Serializer::_make();
        
        //#line 1090 "x10/xrx/FinishState.x10"
        serializer->x10::io::Serializer::writeAny(reinterpret_cast< ::x10::lang::Any*>(this->FMGL(remoteActivities)));
        
        //#line 1091 "x10/xrx/FinishState.x10"
        ::x10::lang::Rail< x10_byte >* serializedTable = serializer->x10::io::Serializer::toRail();
        
        //#line 1092 "x10/xrx/FinishState.x10"
        ::x10aux::nullCheck(this->FMGL(remoteActivities))->clear();
        
        //#line 1093 "x10/xrx/FinishState.x10"
        this->FMGL(count) = ((x10_int)0);
        
        //#line 1094 "x10/xrx/FinishState.x10"
        ::x10aux::nullCheck(this->FMGL(lock))->unlock();
        
        //#line 1095 "x10/xrx/FinishState.x10"
        if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL),
                                      excs))) {
            
            //#line 1096 "x10/xrx/FinishState.x10"
            ::x10::xrx::Runtime::runImmediateAsync(::x10::lang::Place::_make((ref)->location),
                                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T)>)))x10_xrx_FinishState__RemoteCollectingFinish__closure__24<TPMGL(T)>(ref, serializedTable, excs))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        } else {
            
            //#line 1098 "x10/xrx/FinishState.x10"
            ::x10::xrx::Runtime::runImmediateAsync(::x10::lang::Place::_make((ref)->location),
                                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T)>)))x10_xrx_FinishState__RemoteCollectingFinish__closure__25<TPMGL(T)>(ref, serializedTable, result))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
        
    } else {
        
        //#line 1101 "x10/xrx/FinishState.x10"
        ::x10::util::Pair<x10_long, x10_int> message = ::x10::util::Pair<x10_long, x10_int>::_make(::x10::lang::Place::_make(::x10aux::here)->FMGL(id),
                                                                                                   this->FMGL(count));
        
        //#line 1102 "x10/xrx/FinishState.x10"
        this->FMGL(count) = ((x10_int)0);
        
        //#line 1103 "x10/xrx/FinishState.x10"
        ::x10aux::nullCheck(this->FMGL(lock))->unlock();
        
        //#line 1104 "x10/xrx/FinishState.x10"
        if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL),
                                      excs))) {
            
            //#line 1105 "x10/xrx/FinishState.x10"
            ::x10::xrx::Runtime::runImmediateAsync(::x10::lang::Place::_make((ref)->location),
                                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T)>)))x10_xrx_FinishState__RemoteCollectingFinish__closure__26<TPMGL(T)>(ref, message, excs))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        } else {
            
            //#line 1107 "x10/xrx/FinishState.x10"
            ::x10::xrx::Runtime::runImmediateAsync(::x10::lang::Place::_make((ref)->location),
                                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T)>)))x10_xrx_FinishState__RemoteCollectingFinish__closure__27<TPMGL(T)>(ref, message, result))),
                                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
        
    }
    
}

//#line 1064 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>*
  x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::x10__xrx__FinishState__RemoteCollectingFinish____this__x10__xrx__FinishState__RemoteCollectingFinish(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::__fieldInitializers_x10_xrx_FinishState_RemoteCollectingFinish(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::xrx::FinishState__RemoteFinish::_serialize_body(buf);
    buf.write(this->FMGL(sr));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)> >()) ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::xrx::FinishState__RemoteFinish::_deserialize_body(buf);
    FMGL(sr) = buf.read< ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>*>();
}

#endif // X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH_H_IMPLEMENTATION
#endif // __X10_XRX_FINISHSTATE__REMOTECOLLECTINGFINISH_H_NODEPS
