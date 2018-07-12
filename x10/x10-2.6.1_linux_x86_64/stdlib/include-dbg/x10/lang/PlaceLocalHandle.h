#ifndef __X10_LANG_PLACELOCALHANDLE_H
#define __X10_LANG_PLACELOCALHANDLE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_IMPL_H_NODEPS
#include <x10/lang/PlaceLocalHandle_Impl.h>
#undef X10_LANG_PLACELOCALHANDLE_IMPL_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_IMPL_H_NODEPS
#include <x10/lang/PlaceLocalHandle_Impl.h>
#undef X10_LANG_PLACELOCALHANDLE_IMPL_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_IMPL_H_NODEPS
#include <x10/lang/PlaceLocalHandle_Impl.h>
#undef X10_LANG_PLACELOCALHANDLE_IMPL_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Pragma;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeClass;
} } 

namespace x10 { namespace lang { 

template<class TPMGL(T)> class PlaceLocalHandle   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::lang::PlaceLocalHandle<TPMGL(T)>* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::lang::PlaceLocalHandle<TPMGL(T)> > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::lang::PlaceLocalHandle<TPMGL(T)> _alloc(){::x10::lang::PlaceLocalHandle<TPMGL(T)> t; return t; }
    
    ::x10::lang::PlaceLocalHandle_Impl<TPMGL(T)> FMGL(__NATIVE_FIELD__);
    
    void _constructor(::x10::lang::PlaceLocalHandle_Impl<TPMGL(T)> id0);
    
    static ::x10::lang::PlaceLocalHandle<TPMGL(T)> _make(::x10::lang::PlaceLocalHandle_Impl<TPMGL(T)> id0);
    
    void _constructor();
    
    static ::x10::lang::PlaceLocalHandle<TPMGL(T)> _make();
    
    TPMGL(T) __apply();
    void set(TPMGL(T) newVal);
    x10_int hashCode();
    ::x10::lang::String* toString();
    ::x10::lang::String* typeName();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::lang::PlaceLocalHandle<TPMGL(T)> other);
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::lang::PlaceLocalHandle<TPMGL(T)> other);
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> x10__lang__PlaceLocalHandle____this__x10__lang__PlaceLocalHandle(
      );
    void __fieldInitializers_x10_lang_PlaceLocalHandle();
    
    static void _serialize(::x10::lang::PlaceLocalHandle<TPMGL(T)> this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::lang::PlaceLocalHandle<TPMGL(T)> _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::lang::PlaceLocalHandle<TPMGL(T)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::lang::PlaceLocalHandle<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::lang::PlaceLocalHandle<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::lang::PlaceLocalHandle<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.lang.PlaceLocalHandle";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::struct_kind, 1, parents, 1, params, variances);
}

template <> class PlaceLocalHandle<void> {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static ::x10::lang::PlaceLocalHandle<TPMGL(T)>
      make(::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_0<TPMGL(T)>* init);
    
    template<class TPMGL(T)> static ::x10::lang::PlaceLocalHandle<TPMGL(T)>
      make(::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_0<TPMGL(T)>* init,
           ::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>* ignoreIfDead);
    
    template<class TPMGL(T), class TPMGL(U)> static ::x10::lang::PlaceLocalHandle<TPMGL(T)>
      make(::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_1< ::x10::lang::Place, TPMGL(U)>* init_here,
           ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there);
    
    template<class TPMGL(T), class TPMGL(U)> static ::x10::lang::PlaceLocalHandle<TPMGL(T)>
      make(::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_1< ::x10::lang::Place, TPMGL(U)>* init_here,
           ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there,
           ::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>* ignoreIfDead);
    
    template<class TPMGL(T)> static ::x10::lang::PlaceLocalHandle<TPMGL(T)>
      makeFlat(::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_0<TPMGL(T)>* init);
    
    template<class TPMGL(T)> static ::x10::lang::PlaceLocalHandle<TPMGL(T)>
      makeFlat(::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_0<TPMGL(T)>* init,
               ::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>* ignoreIfDead);
    
    template<class TPMGL(T), class TPMGL(U)> static ::x10::lang::PlaceLocalHandle<TPMGL(T)>
      makeFlat(::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_1< ::x10::lang::Place, TPMGL(U)>* init_here,
               ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there);
    
    template<class TPMGL(T), class TPMGL(U)> static ::x10::lang::PlaceLocalHandle<TPMGL(T)>
      makeFlat(::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_1< ::x10::lang::Place, TPMGL(U)>* init_here,
               ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there,
               ::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>* ignoreIfDead);
    
    template<class TPMGL(T)> static void addPlace(::x10::lang::PlaceLocalHandle<TPMGL(T)> plh,
                                                  ::x10::lang::Place place,
                                                  ::x10::lang::Fun_0_0<TPMGL(T)>* init);
    
    template<class TPMGL(T)> static void destroy(::x10::lang::PlaceGroup* pg,
                                                 ::x10::lang::PlaceLocalHandle<TPMGL(T)> plh);
    
    template<class TPMGL(T)> static void destroy(::x10::lang::PlaceGroup* pg,
                                                 ::x10::lang::PlaceLocalHandle<TPMGL(T)> plh,
                                                 ::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>* ignoreIfDead);
    
    
};

} } 
#endif // X10_LANG_PLACELOCALHANDLE_H

namespace x10 { namespace lang { 
template<class TPMGL(T)> class PlaceLocalHandle;
} } 

#ifndef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/PlaceLocalHandle_Impl.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Place.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/Pragma.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeClass.h>
#ifndef X10_LANG_PLACELOCALHANDLE_H_GENERICS
#define X10_LANG_PLACELOCALHANDLE_H_GENERICS
#endif // X10_LANG_PLACELOCALHANDLE_H_GENERICS
#ifndef X10_LANG_PLACELOCALHANDLE_H_IMPLEMENTATION
#define X10_LANG_PLACELOCALHANDLE_H_IMPLEMENTATION
#include <x10/lang/PlaceLocalHandle.h>

#ifndef X10_LANG_PLACELOCALHANDLE__CLOSURE__1_CLOSURE
#define X10_LANG_PLACELOCALHANDLE__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_lang_PlaceLocalHandle__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        handle->x10::lang::template PlaceLocalHandle<TPMGL(T)>::set(::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(init)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle;
    ::x10::lang::Fun_0_0<TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->handle);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle<TPMGL(T)> that_handle = buf.read< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >();
        ::x10::lang::Fun_0_0<TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_0<TPMGL(T)>*>();
        x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) >* this_ = new (storage) x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) >(that_handle, that_init);
        return this_;
    }
    
    x10_lang_PlaceLocalHandle__closure__1(::x10::lang::PlaceLocalHandle<TPMGL(T)> handle, ::x10::lang::Fun_0_0<TPMGL(T)>* init) : handle(handle), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/PlaceLocalHandle.x10:66";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) > >x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) >::__apply, &x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_lang_PlaceLocalHandle__closure__1<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_LANG_PLACELOCALHANDLE__CLOSURE__1_CLOSURE
#ifndef X10_LANG_PLACELOCALHANDLE__CLOSURE__2_CLOSURE
#define X10_LANG_PLACELOCALHANDLE__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_lang_PlaceLocalHandle__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        handle->x10::lang::template PlaceLocalHandle<TPMGL(T)>::set(::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(init)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle;
    ::x10::lang::Fun_0_0<TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->handle);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle<TPMGL(T)> that_handle = buf.read< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >();
        ::x10::lang::Fun_0_0<TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_0<TPMGL(T)>*>();
        x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) >* this_ = new (storage) x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) >(that_handle, that_init);
        return this_;
    }
    
    x10_lang_PlaceLocalHandle__closure__2(::x10::lang::PlaceLocalHandle<TPMGL(T)> handle, ::x10::lang::Fun_0_0<TPMGL(T)>* init) : handle(handle), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/PlaceLocalHandle.x10:89";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) > >x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) >::__apply, &x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_lang_PlaceLocalHandle__closure__2<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_LANG_PLACELOCALHANDLE__CLOSURE__2_CLOSURE
#ifndef X10_LANG_PLACELOCALHANDLE__CLOSURE__3_CLOSURE
#define X10_LANG_PLACELOCALHANDLE__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(U)> class x10_lang_PlaceLocalHandle__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        handle->x10::lang::template PlaceLocalHandle<TPMGL(T)>::set(::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>::__apply(::x10aux::nullCheck(init_there), 
                                                                      v));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle;
    TPMGL(U) v;
    ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->handle);
        buf.write(this->v);
        buf.write(this->init_there);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle<TPMGL(T)> that_handle = buf.read< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >();
        TPMGL(U) that_v = buf.read<TPMGL(U)>();
        ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* that_init_there = buf.read< ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>*>();
        x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) >* this_ = new (storage) x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) >(that_handle, that_v, that_init_there);
        return this_;
    }
    
    x10_lang_PlaceLocalHandle__closure__3(::x10::lang::PlaceLocalHandle<TPMGL(T)> handle, TPMGL(U) v, ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there) : handle(handle), v(v), init_there(init_there) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/PlaceLocalHandle.x10:113";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) > >x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) >::__apply, &x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) >::_deserialize);
template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_LANG_PLACELOCALHANDLE__CLOSURE__3_CLOSURE
#ifndef X10_LANG_PLACELOCALHANDLE__CLOSURE__4_CLOSURE
#define X10_LANG_PLACELOCALHANDLE__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(U)> class x10_lang_PlaceLocalHandle__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        handle->x10::lang::template PlaceLocalHandle<TPMGL(T)>::set(::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>::__apply(::x10aux::nullCheck(init_there), 
                                                                      v));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle;
    TPMGL(U) v;
    ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->handle);
        buf.write(this->v);
        buf.write(this->init_there);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle<TPMGL(T)> that_handle = buf.read< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >();
        TPMGL(U) that_v = buf.read<TPMGL(U)>();
        ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* that_init_there = buf.read< ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>*>();
        x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) >* this_ = new (storage) x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) >(that_handle, that_v, that_init_there);
        return this_;
    }
    
    x10_lang_PlaceLocalHandle__closure__4(::x10::lang::PlaceLocalHandle<TPMGL(T)> handle, TPMGL(U) v, ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there) : handle(handle), v(v), init_there(init_there) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/PlaceLocalHandle.x10:140";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) > >x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) >::__apply, &x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) >::_deserialize);
template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_LANG_PLACELOCALHANDLE__CLOSURE__4_CLOSURE
#ifndef X10_LANG_PLACELOCALHANDLE__CLOSURE__5_CLOSURE
#define X10_LANG_PLACELOCALHANDLE__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_lang_PlaceLocalHandle__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        handle->x10::lang::template PlaceLocalHandle<TPMGL(T)>::set(::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(init)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle;
    ::x10::lang::Fun_0_0<TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->handle);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle<TPMGL(T)> that_handle = buf.read< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >();
        ::x10::lang::Fun_0_0<TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_0<TPMGL(T)>*>();
        x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) >* this_ = new (storage) x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) >(that_handle, that_init);
        return this_;
    }
    
    x10_lang_PlaceLocalHandle__closure__5(::x10::lang::PlaceLocalHandle<TPMGL(T)> handle, ::x10::lang::Fun_0_0<TPMGL(T)>* init) : handle(handle), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/PlaceLocalHandle.x10:166";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) > >x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) >::__apply, &x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_PlaceLocalHandle__closure__5<TPMGL(T) >::_deserialize);

#endif // X10_LANG_PLACELOCALHANDLE__CLOSURE__5_CLOSURE
#ifndef X10_LANG_PLACELOCALHANDLE__CLOSURE__6_CLOSURE
#define X10_LANG_PLACELOCALHANDLE__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_lang_PlaceLocalHandle__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        handle->x10::lang::template PlaceLocalHandle<TPMGL(T)>::set(::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(init)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle;
    ::x10::lang::Fun_0_0<TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->handle);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle<TPMGL(T)> that_handle = buf.read< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >();
        ::x10::lang::Fun_0_0<TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_0<TPMGL(T)>*>();
        x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) >* this_ = new (storage) x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) >(that_handle, that_init);
        return this_;
    }
    
    x10_lang_PlaceLocalHandle__closure__6(::x10::lang::PlaceLocalHandle<TPMGL(T)> handle, ::x10::lang::Fun_0_0<TPMGL(T)>* init) : handle(handle), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/PlaceLocalHandle.x10:189";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) > >x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) >::__apply, &x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_PlaceLocalHandle__closure__6<TPMGL(T) >::_deserialize);

#endif // X10_LANG_PLACELOCALHANDLE__CLOSURE__6_CLOSURE
#ifndef X10_LANG_PLACELOCALHANDLE__CLOSURE__7_CLOSURE
#define X10_LANG_PLACELOCALHANDLE__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(U)> class x10_lang_PlaceLocalHandle__closure__7 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        handle->x10::lang::template PlaceLocalHandle<TPMGL(T)>::set(::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>::__apply(::x10aux::nullCheck(init_there), 
                                                                      v));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle;
    TPMGL(U) v;
    ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->handle);
        buf.write(this->v);
        buf.write(this->init_there);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle<TPMGL(T)> that_handle = buf.read< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >();
        TPMGL(U) that_v = buf.read<TPMGL(U)>();
        ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* that_init_there = buf.read< ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>*>();
        x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) >* this_ = new (storage) x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) >(that_handle, that_v, that_init_there);
        return this_;
    }
    
    x10_lang_PlaceLocalHandle__closure__7(::x10::lang::PlaceLocalHandle<TPMGL(T)> handle, TPMGL(U) v, ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there) : handle(handle), v(v), init_there(init_there) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/PlaceLocalHandle.x10:214";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) > >x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) >::__apply, &x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) >::_deserialize);
template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_LANG_PLACELOCALHANDLE__CLOSURE__7_CLOSURE
#ifndef X10_LANG_PLACELOCALHANDLE__CLOSURE__8_CLOSURE
#define X10_LANG_PLACELOCALHANDLE__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(U)> class x10_lang_PlaceLocalHandle__closure__8 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        handle->x10::lang::template PlaceLocalHandle<TPMGL(T)>::set(::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>::__apply(::x10aux::nullCheck(init_there), 
                                                                      v));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle;
    TPMGL(U) v;
    ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->handle);
        buf.write(this->v);
        buf.write(this->init_there);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle<TPMGL(T)> that_handle = buf.read< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >();
        TPMGL(U) that_v = buf.read<TPMGL(U)>();
        ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* that_init_there = buf.read< ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>*>();
        x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) >* this_ = new (storage) x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) >(that_handle, that_v, that_init_there);
        return this_;
    }
    
    x10_lang_PlaceLocalHandle__closure__8(::x10::lang::PlaceLocalHandle<TPMGL(T)> handle, TPMGL(U) v, ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there) : handle(handle), v(v), init_there(init_there) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/PlaceLocalHandle.x10:244";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) > >x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) >::__apply, &x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) >::_deserialize);
template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_LANG_PLACELOCALHANDLE__CLOSURE__8_CLOSURE
#ifndef X10_LANG_PLACELOCALHANDLE__CLOSURE__9_CLOSURE
#define X10_LANG_PLACELOCALHANDLE__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_lang_PlaceLocalHandle__closure__9 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        plh->x10::lang::template PlaceLocalHandle<TPMGL(T)>::set(::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(init)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> plh;
    ::x10::lang::Fun_0_0<TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->plh);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle<TPMGL(T)> that_plh = buf.read< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >();
        ::x10::lang::Fun_0_0<TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_0<TPMGL(T)>*>();
        x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) >* this_ = new (storage) x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) >(that_plh, that_init);
        return this_;
    }
    
    x10_lang_PlaceLocalHandle__closure__9(::x10::lang::PlaceLocalHandle<TPMGL(T)> plh, ::x10::lang::Fun_0_0<TPMGL(T)>* init) : plh(plh), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/PlaceLocalHandle.x10:261";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) > >x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) >::__apply, &x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_PlaceLocalHandle__closure__9<TPMGL(T) >::_deserialize);

#endif // X10_LANG_PLACELOCALHANDLE__CLOSURE__9_CLOSURE
#ifndef X10_LANG_PLACELOCALHANDLE__CLOSURE__10_CLOSURE
#define X10_LANG_PLACELOCALHANDLE__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_lang_PlaceLocalHandle__closure__10 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        plh->x10::lang::template PlaceLocalHandle<TPMGL(T)>::set(::x10aux::class_cast_unchecked<TPMGL(T)>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> plh;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->plh);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle<TPMGL(T)> that_plh = buf.read< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >();
        x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) >* this_ = new (storage) x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) >(that_plh);
        return this_;
    }
    
    x10_lang_PlaceLocalHandle__closure__10(::x10::lang::PlaceLocalHandle<TPMGL(T)> plh) : plh(plh) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/PlaceLocalHandle.x10:270";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) > >x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) >::__apply, &x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_PlaceLocalHandle__closure__10<TPMGL(T) >::_deserialize);

#endif // X10_LANG_PLACELOCALHANDLE__CLOSURE__10_CLOSURE
#ifndef X10_LANG_PLACELOCALHANDLE__CLOSURE__11_CLOSURE
#define X10_LANG_PLACELOCALHANDLE__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_lang_PlaceLocalHandle__closure__11 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        plh->x10::lang::template PlaceLocalHandle<TPMGL(T)>::set(::x10aux::class_cast_unchecked<TPMGL(T)>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> plh;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->plh);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle<TPMGL(T)> that_plh = buf.read< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >();
        x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) >* this_ = new (storage) x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) >(that_plh);
        return this_;
    }
    
    x10_lang_PlaceLocalHandle__closure__11(::x10::lang::PlaceLocalHandle<TPMGL(T)> plh) : plh(plh) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/PlaceLocalHandle.x10:280";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) > >x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) >::__apply, &x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_PlaceLocalHandle__closure__11<TPMGL(T) >::_deserialize);

#endif // X10_LANG_PLACELOCALHANDLE__CLOSURE__11_CLOSURE
namespace x10 { namespace lang { 
template<class TPMGL(T)> class PlaceLocalHandle_ibox0 : public ::x10::lang::IBox< ::x10::lang::PlaceLocalHandle<TPMGL(T)> > {
public:
    static ::x10::lang::Any::itable< PlaceLocalHandle_ibox0<TPMGL(T)> > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
template<class TPMGL(T)> ::x10::lang::Any::itable< PlaceLocalHandle_ibox0<TPMGL(T)> >  PlaceLocalHandle_ibox0<TPMGL(T)>::itable(&PlaceLocalHandle_ibox0<TPMGL(T)>::equals, &PlaceLocalHandle_ibox0<TPMGL(T)>::hashCode, &PlaceLocalHandle_ibox0<TPMGL(T)>::toString, &PlaceLocalHandle_ibox0<TPMGL(T)>::typeName);
} } 
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >  x10::lang::PlaceLocalHandle<TPMGL(T)>::_itable_0(&x10::lang::PlaceLocalHandle<TPMGL(T)>::equals, &x10::lang::PlaceLocalHandle<TPMGL(T)>::hashCode, &x10::lang::PlaceLocalHandle<TPMGL(T)>::toString, &x10::lang::PlaceLocalHandle<TPMGL(T)>::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::lang::PlaceLocalHandle<TPMGL(T)>::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10::lang::PlaceLocalHandle<TPMGL(T)>::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::x10::lang::PlaceLocalHandle<TPMGL(T)>")};
template<class TPMGL(T)> ::x10aux::itable_entry x10::lang::PlaceLocalHandle<TPMGL(T)>::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10::lang::PlaceLocalHandle_ibox0<TPMGL(T)>::itable), ::x10aux::itable_entry(NULL, (void*)"::x10::lang::PlaceLocalHandle<TPMGL(T)>")};

//#line 35 "x10/lang/PlaceLocalHandle.x10"
template<class TPMGL(T)> void x10::lang::PlaceLocalHandle<TPMGL(T)>::_constructor(
                           ::x10::lang::PlaceLocalHandle_Impl<TPMGL(T)> id0) {
    (*this)->FMGL(__NATIVE_FIELD__) = id0;
}
template<class TPMGL(T)> ::x10::lang::PlaceLocalHandle<TPMGL(T)> x10::lang::PlaceLocalHandle<TPMGL(T)>::_make(
                           ::x10::lang::PlaceLocalHandle_Impl<TPMGL(T)> id0)
{
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> this_; 
    this_->_constructor(id0);
    return this_;
}



//#line 38 "x10/lang/PlaceLocalHandle.x10"
template<class TPMGL(T)> void x10::lang::PlaceLocalHandle<TPMGL(T)>::_constructor(
                           ) {
    
    //#line 35 "x10/lang/PlaceLocalHandle.x10"
    (*this)->FMGL(__NATIVE_FIELD__) = ::x10::lang::PlaceLocalHandle_Impl<TPMGL(T)>::_make();
}
template<class TPMGL(T)> ::x10::lang::PlaceLocalHandle<TPMGL(T)> x10::lang::PlaceLocalHandle<TPMGL(T)>::_make(
                           ) {
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> this_; 
    this_->_constructor();
    return this_;
}



//#line 43 "x10/lang/PlaceLocalHandle.x10"
/**
     * @return the object mapped to the handle at the current place
     */
template<class TPMGL(T)> TPMGL(T) x10::lang::PlaceLocalHandle<TPMGL(T)>::__apply(
  ) {
    
    //#line 35 "x10/lang/PlaceLocalHandle.x10"
    return (*this)->FMGL(__NATIVE_FIELD__)->x10::lang::template PlaceLocalHandle_Impl<TPMGL(T)>::__apply();
    
}

//#line 46 "x10/lang/PlaceLocalHandle.x10"
template<class TPMGL(T)> void x10::lang::PlaceLocalHandle<TPMGL(T)>::set(
  TPMGL(T) newVal) {
    
    //#line 35 "x10/lang/PlaceLocalHandle.x10"
    (*this)->FMGL(__NATIVE_FIELD__)->x10::lang::template PlaceLocalHandle_Impl<TPMGL(T)>::set(
      newVal);
}

//#line 48 "x10/lang/PlaceLocalHandle.x10"
template<class TPMGL(T)> x10_int x10::lang::PlaceLocalHandle<TPMGL(T)>::hashCode(
  ) {
    
    //#line 35 "x10/lang/PlaceLocalHandle.x10"
    return (*this)->FMGL(__NATIVE_FIELD__)->x10::lang::template PlaceLocalHandle_Impl<TPMGL(T)>::hashCode();
    
}

//#line 50 "x10/lang/PlaceLocalHandle.x10"
template<class TPMGL(T)> ::x10::lang::String* x10::lang::PlaceLocalHandle<TPMGL(T)>::toString(
  ) {
    
    //#line 35 "x10/lang/PlaceLocalHandle.x10"
    return (*this)->FMGL(__NATIVE_FIELD__)->x10::lang::template PlaceLocalHandle_Impl<TPMGL(T)>::toString();
    
}

//#line 63 "x10/lang/PlaceLocalHandle.x10"
/**
     * Create a distributed object with local state of type T
     * at each place in the argument PlaceGroup.  The local object will be initialized
     * by evaluating init at each place.  When this method returns, the local objects
     * will be initialized and available via the returned PlaceLocalHandle instance
     * at every place in the PlaceGroup.
     *
     * @param pg a PlaceGroup specifiying the places where local objects should be created.
     * @param init the initialization closure used to create the local object.
     * @return a PlaceLocalHandle that can be used to access the local objects.
     */

//#line 84 "x10/lang/PlaceLocalHandle.x10"
/**
     * Create a distributed object with local state of type T
     * at each place in the argument PlaceGroup.  The local object will be initialized
     * by evaluating init at each place.  When this method returns, the local objects
     * will be initialized and available via the returned PlaceLocalHandle instance
     * at every place in the PlaceGroup.
     *
     * @param pg a PlaceGroup specifiying the places where local objects should be created.
     * @param init the initialization closure used to create the local object.
     * @param ignoreIfDead a filter to indicate if a place can be silently ignored if it is 
     *        already known to be dead at the time make first attempt to access it.
     * @return a PlaceLocalHandle that can be used to access the local objects.
     */

//#line 109 "x10/lang/PlaceLocalHandle.x10"
/**
     * Create a distributed object with local state of type T
     * at each place in the argument PlaceGroup.  For each place in the
     * argument PlaceGroup, the local_init closure will be evaluated in the 
     * current place to yield a value of type U.  This value will then be serialized 
     * to the target place and passed as an argument to the init closure. 
     * When this method returns, the local objects will be initialized and available 
     * via the returned PlaceLocalHandle instance at every place in the distribution.
     *
     * @param dist a distribution specifiying the places where local objects should be created.
     * @param init_here a closure to compute the local portion of the initialization (evaluated in the current place)
     * @param init_there a closure to be evaluated in each place to create the local objects.
     * @return a PlaceLocalHandle that can be used to access the local objects.
     */

//#line 134 "x10/lang/PlaceLocalHandle.x10"
/**
     * Create a distributed object with local state of type T
     * at each place in the argument PlaceGroup.  For each place in the
     * argument PlaceGroup, the local_init closure will be evaluated in the 
     * current place to yield a value of type U.  This value will then be serialized 
     * to the target place and passed as an argument to the init closure. 
     * When this method returns, the local objects will be initialized and available 
     * via the returned PlaceLocalHandle instance at every place in the distribution.
     *
     * @param dist a distribution specifiying the places where local objects should be created.
     * @param init_here a closure to compute the local portion of the initialization (evaluated in the current place)
     * @param init_there a closure to be evaluated in each place to create the local objects.
     * @param ignoreIfDead a filter to indicate if a place can be silently ignored if it is 
     *        already known to be dead at the time make first attempt to access it.
     * @return a PlaceLocalHandle that can be used to access the local objects.
     */

//#line 164 "x10/lang/PlaceLocalHandle.x10"
/**
     * Create a distributed object with local state of type T
     * at each place in the argument PlaceGroup.  The local object will be initialized
     * by evaluating init at each place.  When this method returns, the local objects
     * will be initialized and available via the returned PlaceLocalHandle instance
     * at every place in the PlaceGroup.
     *
     * Requires an initialization closure which has no exposed at/async constructs
     * (any async/at must be nested inside of a finish).
     *
     * @param pg a PlaceGroup specifiying the places where local objects should be created.
     * @param init the initialization closure used to create the local object.
     * @return a PlaceLocalHandle that can be used to access the local objects.
     */

//#line 186 "x10/lang/PlaceLocalHandle.x10"
/**
     * Create a distributed object with local state of type T
     * at each place in the argument PlaceGroup.  The local object will be initialized
     * by evaluating init at each place.  When this method returns, the local objects
     * will be initialized and available via the returned PlaceLocalHandle instance
     * at every place in the PlaceGroup.
     *
     * Requires an initialization closure which has no exposed at/async constructs
     * (any async/at must be nested inside of a finish).
     *
     * @param pg a PlaceGroup specifiying the places where local objects should be created.
     * @param init the initialization closure used to create the local object.
     * @param ignoreIfDead a filter to indicate if a place can be silently ignored if it is 
     *        already known to be dead at the time make first attempt to access it.
     * @return a PlaceLocalHandle that can be used to access the local objects.
     */

//#line 210 "x10/lang/PlaceLocalHandle.x10"
/**
     * Create a distributed object with local state of type T
     * at each place in the argument PlaceGroup.  For each place in the
     * argument PlaceGroup, the local_init closure will be evaluated in the 
     * current place to yield a value of type U.  This value will then be serialized 
     * to the target place and passed as an argument to the init closure. 
     * When this method returns, the local objects will be initialized and available 
     * via the returned PlaceLocalHandle instance at every place in the distribution.
     *
     * Requires an init_there initialization closure which has no exposed at/async constructs
     * (any async/at must be nested inside of a finish).
     *
     * @param dist a distribution specifiying the places where local objects should be created.
     * @param init_here a closure to compute the local portion of the initialization (evaluated in the current place)
     * @param init_there a closure to be evaluated in each place to create the local objects.
     * @return a PlaceLocalHandle that can be used to access the local objects.
     */

//#line 238 "x10/lang/PlaceLocalHandle.x10"
/**
     * Create a distributed object with local state of type T
     * at each place in the argument PlaceGroup.  For each place in the
     * argument PlaceGroup, the local_init closure will be evaluated in the 
     * current place to yield a value of type U.  This value will then be serialized 
     * to the target place and passed as an argument to the init closure. 
     * When this method returns, the local objects will be initialized and available 
     * via the returned PlaceLocalHandle instance at every place in the distribution.
     *
     * Requires an init_there initialization closure which has no exposed at/async constructs
     * (any async/at must be nested inside of a finish).
     *
     * @param dist a distribution specifiying the places where local objects should be created.
     * @param init_here a closure to compute the local portion of the initialization (evaluated in the current place)
     * @param init_there a closure to be evaluated in each place to create the local objects.
     * @param ignoreIfDead a filter to indicate if a place can be silently ignored if it is 
     *        already known to be dead at the time make first attempt to access it.
     * @return a PlaceLocalHandle that can be used to access the local objects.
     */

//#line 259 "x10/lang/PlaceLocalHandle.x10"
/**
     * Augment the PlaceGroup at which the argument PlaceLocalHandle has
     * a value with the given place by evaluating the argument initialization 
     * closure at that Place to and storing its result in the PlaceLocalHandle.
     *
     * @param plh a place local handle to extend with a new Place
     * @param place the Place at which to extend it
     * @param init a closure to be evaluated at place to create the value to be stored
     */

//#line 269 "x10/lang/PlaceLocalHandle.x10"
/**
     * Release the local state of the argument PlaceLocalHandle at
     * every place in the argument PlaceGroup (by storing null
     * as the value for the PlaceLocalHandle at that Place).
     */

//#line 278 "x10/lang/PlaceLocalHandle.x10"
/**
     * Release the local state of the argument PlaceLocalHandle at
     * every place in the argument PlaceGroup (by storing null
     * as the value for the PlaceLocalHandle at that Place).
     */

//#line 35 "x10/lang/PlaceLocalHandle.x10"
template<class TPMGL(T)> ::x10::lang::String* x10::lang::PlaceLocalHandle<TPMGL(T)>::typeName(
  ){
    return ::x10aux::type_name((*this));
}
template<class TPMGL(T)> x10_boolean x10::lang::PlaceLocalHandle<TPMGL(T)>::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >(other)))
    {
        return false;
        
    }
    return (*this)->x10::lang::template PlaceLocalHandle<TPMGL(T)>::equals(
             ::x10aux::class_cast< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >(other));
    
}
template<class TPMGL(T)> x10_boolean x10::lang::PlaceLocalHandle<TPMGL(T)>::equals(
  ::x10::lang::PlaceLocalHandle<TPMGL(T)> other) {
    return true;
    
}
template<class TPMGL(T)> x10_boolean x10::lang::PlaceLocalHandle<TPMGL(T)>::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >(other)))
    {
        return false;
        
    }
    return (*this)->x10::lang::template PlaceLocalHandle<TPMGL(T)>::_struct_equals(
             ::x10aux::class_cast< ::x10::lang::PlaceLocalHandle<TPMGL(T)> >(other));
    
}
template<class TPMGL(T)> x10_boolean x10::lang::PlaceLocalHandle<TPMGL(T)>::_struct_equals(
  ::x10::lang::PlaceLocalHandle<TPMGL(T)> other) {
    return true;
    
}

//#line 33 "x10/lang/PlaceLocalHandle.x10"
template<class TPMGL(T)> ::x10::lang::PlaceLocalHandle<TPMGL(T)>
  x10::lang::PlaceLocalHandle<TPMGL(T)>::x10__lang__PlaceLocalHandle____this__x10__lang__PlaceLocalHandle(
  ) {
    return (*this);
    
}
template<class TPMGL(T)> void x10::lang::PlaceLocalHandle<TPMGL(T)>::__fieldInitializers_x10_lang_PlaceLocalHandle(
  ) {
 
}
template<class TPMGL(T)> void ::x10::lang::PlaceLocalHandle<TPMGL(T)>::_serialize(::x10::lang::PlaceLocalHandle<TPMGL(T)> this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(__NATIVE_FIELD__));
    
}

template<class TPMGL(T)> void ::x10::lang::PlaceLocalHandle<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(__NATIVE_FIELD__) = buf.read< ::x10::lang::PlaceLocalHandle_Impl<TPMGL(T)> >();
}


template<class TPMGL(T)> ::x10::lang::PlaceLocalHandle<TPMGL(T)>
  x10::lang::PlaceLocalHandle<void>::make(::x10::lang::PlaceGroup* pg,
                                          ::x10::lang::Fun_0_0<TPMGL(T)>* init) {
    
    //#line 64 "x10/lang/PlaceLocalHandle.x10"
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle = ::x10::lang::PlaceLocalHandle<TPMGL(T)>::_make();
    {
        
        //#line 65 "x10/lang/PlaceLocalHandle.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__107396 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__107380;
                    for (p__107380 = ::x10aux::nullCheck(pg)->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__107380));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__107380));
                        
                        //#line 66 "x10/lang/PlaceLocalHandle.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_PlaceLocalHandle__closure__1<TPMGL(T)>)))x10_lang_PlaceLocalHandle__closure__1<TPMGL(T)>(handle, init))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1146) {
            {
                ::x10::lang::CheckedThrowable* ct__107394 =
                  __exc1146;
                {
                    ::x10::xrx::Runtime::pushException(ct__107394);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__107396);
    }
    
    //#line 68 "x10/lang/PlaceLocalHandle.x10"
    return handle;
    
}
template<class TPMGL(T)> ::x10::lang::PlaceLocalHandle<TPMGL(T)>
  x10::lang::PlaceLocalHandle<void>::make(::x10::lang::PlaceGroup* pg,
                                          ::x10::lang::Fun_0_0<TPMGL(T)>* init,
                                          ::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>* ignoreIfDead) {
    
    //#line 86 "x10/lang/PlaceLocalHandle.x10"
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle = ::x10::lang::PlaceLocalHandle<TPMGL(T)>::_make();
    {
        
        //#line 87 "x10/lang/PlaceLocalHandle.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__107403 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__107382;
                    for (p__107382 = ::x10aux::nullCheck(pg)->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__107382));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__107382));
                        
                        //#line 88 "x10/lang/PlaceLocalHandle.x10"
                        if ((!(p->x10::lang::Place::isDead()) ||
                            !(::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>::__apply(::x10aux::nullCheck(ignoreIfDead), 
                              p)))) {
                            
                            //#line 89 "x10/lang/PlaceLocalHandle.x10"
                            ::x10::xrx::Runtime::runAsync(
                              p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_PlaceLocalHandle__closure__2<TPMGL(T)>)))x10_lang_PlaceLocalHandle__closure__2<TPMGL(T)>(handle, init))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1147) {
            {
                ::x10::lang::CheckedThrowable* ct__107401 =
                  __exc1147;
                {
                    ::x10::xrx::Runtime::pushException(ct__107401);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__107403);
    }
    
    //#line 92 "x10/lang/PlaceLocalHandle.x10"
    return handle;
    
}
template<class TPMGL(T), class TPMGL(U)> ::x10::lang::PlaceLocalHandle<TPMGL(T)>
  x10::lang::PlaceLocalHandle<void>::make(::x10::lang::PlaceGroup* pg,
                                          ::x10::lang::Fun_0_1< ::x10::lang::Place, TPMGL(U)>* init_here,
                                          ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there) {
    
    //#line 110 "x10/lang/PlaceLocalHandle.x10"
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle = ::x10::lang::PlaceLocalHandle<TPMGL(T)>::_make();
    {
        
        //#line 111 "x10/lang/PlaceLocalHandle.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__107410 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__107384;
                    for (p__107384 = ::x10aux::nullCheck(pg)->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__107384));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__107384));
                        
                        //#line 112 "x10/lang/PlaceLocalHandle.x10"
                        TPMGL(U) v = ::x10::lang::Fun_0_1< ::x10::lang::Place, TPMGL(U)>::__apply(::x10aux::nullCheck(init_here), 
                          p);
                        
                        //#line 113 "x10/lang/PlaceLocalHandle.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U)>)))x10_lang_PlaceLocalHandle__closure__3<TPMGL(T),TPMGL(U)>(handle, v, init_there))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1148) {
            {
                ::x10::lang::CheckedThrowable* ct__107408 =
                  __exc1148;
                {
                    ::x10::xrx::Runtime::pushException(ct__107408);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__107410);
    }
    
    //#line 115 "x10/lang/PlaceLocalHandle.x10"
    return handle;
    
}
template<class TPMGL(T), class TPMGL(U)> ::x10::lang::PlaceLocalHandle<TPMGL(T)>
  x10::lang::PlaceLocalHandle<void>::make(::x10::lang::PlaceGroup* pg,
                                          ::x10::lang::Fun_0_1< ::x10::lang::Place, TPMGL(U)>* init_here,
                                          ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there,
                                          ::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>* ignoreIfDead) {
    
    //#line 136 "x10/lang/PlaceLocalHandle.x10"
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle = ::x10::lang::PlaceLocalHandle<TPMGL(T)>::_make();
    {
        
        //#line 137 "x10/lang/PlaceLocalHandle.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__107417 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__107386;
                    for (p__107386 = ::x10aux::nullCheck(pg)->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__107386));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__107386));
                        
                        //#line 138 "x10/lang/PlaceLocalHandle.x10"
                        TPMGL(U) v = ::x10::lang::Fun_0_1< ::x10::lang::Place, TPMGL(U)>::__apply(::x10aux::nullCheck(init_here), 
                          p);
                        
                        //#line 139 "x10/lang/PlaceLocalHandle.x10"
                        if ((!(p->x10::lang::Place::isDead()) ||
                            !(::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>::__apply(::x10aux::nullCheck(ignoreIfDead), 
                              p)))) {
                            
                            //#line 140 "x10/lang/PlaceLocalHandle.x10"
                            ::x10::xrx::Runtime::runAsync(
                              p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U)>)))x10_lang_PlaceLocalHandle__closure__4<TPMGL(T),TPMGL(U)>(handle, v, init_there))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1149) {
            {
                ::x10::lang::CheckedThrowable* ct__107415 =
                  __exc1149;
                {
                    ::x10::xrx::Runtime::pushException(ct__107415);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__107417);
    }
    
    //#line 143 "x10/lang/PlaceLocalHandle.x10"
    return handle;
    
}
template<class TPMGL(T)> ::x10::lang::PlaceLocalHandle<TPMGL(T)>
  x10::lang::PlaceLocalHandle<void>::makeFlat(::x10::lang::PlaceGroup* pg,
                                              ::x10::lang::Fun_0_0<TPMGL(T)>* init) {
    
    //#line 165 "x10/lang/PlaceLocalHandle.x10"
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle = ::x10::lang::PlaceLocalHandle<TPMGL(T)>::_make();
    
    //#line 166 "x10/lang/PlaceLocalHandle.x10"
    ::x10aux::nullCheck(pg)->broadcastFlat(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_PlaceLocalHandle__closure__5<TPMGL(T)>)))x10_lang_PlaceLocalHandle__closure__5<TPMGL(T)>(handle, init))));
    
    //#line 167 "x10/lang/PlaceLocalHandle.x10"
    return handle;
    
}
template<class TPMGL(T)> ::x10::lang::PlaceLocalHandle<TPMGL(T)>
  x10::lang::PlaceLocalHandle<void>::makeFlat(::x10::lang::PlaceGroup* pg,
                                              ::x10::lang::Fun_0_0<TPMGL(T)>* init,
                                              ::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>* ignoreIfDead) {
    
    //#line 188 "x10/lang/PlaceLocalHandle.x10"
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle = ::x10::lang::PlaceLocalHandle<TPMGL(T)>::_make();
    
    //#line 189 "x10/lang/PlaceLocalHandle.x10"
    ::x10aux::nullCheck(pg)->broadcastFlat(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_PlaceLocalHandle__closure__6<TPMGL(T)>)))x10_lang_PlaceLocalHandle__closure__6<TPMGL(T)>(handle, init))),
                                           ignoreIfDead);
    
    //#line 190 "x10/lang/PlaceLocalHandle.x10"
    return handle;
    
}
template<class TPMGL(T), class TPMGL(U)> ::x10::lang::PlaceLocalHandle<TPMGL(T)>
  x10::lang::PlaceLocalHandle<void>::makeFlat(::x10::lang::PlaceGroup* pg,
                                              ::x10::lang::Fun_0_1< ::x10::lang::Place, TPMGL(U)>* init_here,
                                              ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there) {
    
    //#line 211 "x10/lang/PlaceLocalHandle.x10"
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle = ::x10::lang::PlaceLocalHandle<TPMGL(T)>::_make();
    {
        
        //#line 212 "x10/lang/PlaceLocalHandle.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__107425 = ::x10::xrx::Runtime::startFinish(
                                                ::x10::compiler::Pragma::FMGL(FINISH_SPMD__get)());
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__107388;
                    for (p__107388 = ::x10aux::nullCheck(pg)->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__107388));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__107388));
                        
                        //#line 213 "x10/lang/PlaceLocalHandle.x10"
                        TPMGL(U) v = ::x10::lang::Fun_0_1< ::x10::lang::Place, TPMGL(U)>::__apply(::x10aux::nullCheck(init_here), 
                          p);
                        
                        //#line 214 "x10/lang/PlaceLocalHandle.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U)>)))x10_lang_PlaceLocalHandle__closure__7<TPMGL(T),TPMGL(U)>(handle, v, init_there))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1150) {
            {
                ::x10::lang::CheckedThrowable* ct__107422 =
                  __exc1150;
                {
                    ::x10::xrx::Runtime::pushException(ct__107422);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__107425);
    }
    
    //#line 216 "x10/lang/PlaceLocalHandle.x10"
    return handle;
    
}
template<class TPMGL(T), class TPMGL(U)> ::x10::lang::PlaceLocalHandle<TPMGL(T)>
  x10::lang::PlaceLocalHandle<void>::makeFlat(::x10::lang::PlaceGroup* pg,
                                              ::x10::lang::Fun_0_1< ::x10::lang::Place, TPMGL(U)>* init_here,
                                              ::x10::lang::Fun_0_1<TPMGL(U), TPMGL(T)>* init_there,
                                              ::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>* ignoreIfDead) {
    
    //#line 240 "x10/lang/PlaceLocalHandle.x10"
    ::x10::lang::PlaceLocalHandle<TPMGL(T)> handle = ::x10::lang::PlaceLocalHandle<TPMGL(T)>::_make();
    {
        
        //#line 241 "x10/lang/PlaceLocalHandle.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__107433 = ::x10::xrx::Runtime::startFinish(
                                                ::x10::compiler::Pragma::FMGL(FINISH_SPMD__get)());
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__107390;
                    for (p__107390 = ::x10aux::nullCheck(pg)->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__107390));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__107390));
                        
                        //#line 242 "x10/lang/PlaceLocalHandle.x10"
                        TPMGL(U) v = ::x10::lang::Fun_0_1< ::x10::lang::Place, TPMGL(U)>::__apply(::x10aux::nullCheck(init_here), 
                          p);
                        
                        //#line 243 "x10/lang/PlaceLocalHandle.x10"
                        if ((!(p->x10::lang::Place::isDead()) ||
                            !(::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>::__apply(::x10aux::nullCheck(ignoreIfDead), 
                              p)))) {
                            
                            //#line 244 "x10/lang/PlaceLocalHandle.x10"
                            ::x10::xrx::Runtime::runAsync(
                              p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U)>)))x10_lang_PlaceLocalHandle__closure__8<TPMGL(T),TPMGL(U)>(handle, v, init_there))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1151) {
            {
                ::x10::lang::CheckedThrowable* ct__107430 =
                  __exc1151;
                {
                    ::x10::xrx::Runtime::pushException(ct__107430);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__107433);
    }
    
    //#line 247 "x10/lang/PlaceLocalHandle.x10"
    return handle;
    
}
template<class TPMGL(T)> void x10::lang::PlaceLocalHandle<void>::addPlace(::x10::lang::PlaceLocalHandle<TPMGL(T)> plh,
                                                                          ::x10::lang::Place place,
                                                                          ::x10::lang::Fun_0_0<TPMGL(T)>* init) {
    {
        
        //#line 261 "x10/lang/PlaceLocalHandle.x10"
        ::x10::xrx::Runtime::runAt(place, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_PlaceLocalHandle__closure__9<TPMGL(T)>)))x10_lang_PlaceLocalHandle__closure__9<TPMGL(T)>(plh, init))),
                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
}
template<class TPMGL(T)> void x10::lang::PlaceLocalHandle<void>::destroy(::x10::lang::PlaceGroup* pg,
                                                                         ::x10::lang::PlaceLocalHandle<TPMGL(T)> plh) {
    
    //#line 270 "x10/lang/PlaceLocalHandle.x10"
    ::x10aux::nullCheck(pg)->broadcastFlat(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_PlaceLocalHandle__closure__10<TPMGL(T)>)))x10_lang_PlaceLocalHandle__closure__10<TPMGL(T)>(plh))));
}
template<class TPMGL(T)> void x10::lang::PlaceLocalHandle<void>::destroy(::x10::lang::PlaceGroup* pg,
                                                                         ::x10::lang::PlaceLocalHandle<TPMGL(T)> plh,
                                                                         ::x10::lang::Fun_0_1< ::x10::lang::Place, x10_boolean>* ignoreIfDead) {
    
    //#line 280 "x10/lang/PlaceLocalHandle.x10"
    ::x10aux::nullCheck(pg)->broadcastFlat(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_PlaceLocalHandle__closure__11<TPMGL(T)>)))x10_lang_PlaceLocalHandle__closure__11<TPMGL(T)>(plh))),
                                           ignoreIfDead);
}
#endif // X10_LANG_PLACELOCALHANDLE_H_IMPLEMENTATION
#endif // __X10_LANG_PLACELOCALHANDLE_H_NODEPS
