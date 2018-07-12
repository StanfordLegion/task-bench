#ifndef __X10_XRX_FINISHSTATE__COLLECTINGFINISH_H
#define __X10_XRX_FINISHSTATE__COLLECTINGFINISH_H

#include <x10rt.h>


#define X10_XRX_FINISHSTATE__FINISH_H_NODEPS
#include <x10/xrx/FinishState__Finish.h>
#undef X10_XRX_FINISHSTATE__FINISH_H_NODEPS
#define X10_XRX_FINISHSTATE__COLLECTINGFINISHSTATE_H_NODEPS
#include <x10/xrx/FinishState__CollectingFinishState.h>
#undef X10_XRX_FINISHSTATE__COLLECTINGFINISHSTATE_H_NODEPS
#define X10_IO_CUSTOMSERIALIZATION_H_NODEPS
#include <x10/io/CustomSerialization.h>
#undef X10_IO_CUSTOMSERIALIZATION_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace x10 { namespace xrx { 
class FinishState__RootFinish;
} } 
namespace x10 { namespace xrx { 
template<class TPMGL(T)> class FinishState__RootCollectingFinish;
} } 
namespace x10 { namespace io { 
class Deserializer;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class FinishState__FinishSkeleton;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace xrx { 
class FinishState__FinishStates;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace xrx { 
template<class TPMGL(T)> class FinishState__RemoteCollectingFinish;
} } 
namespace x10 { namespace io { 
class Serializer;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishState__CollectingFinish_Strings {
  public:
    static ::x10::lang::String sl__172082;
};

template<class TPMGL(T)> class FinishState__CollectingFinish;
template <> class FinishState__CollectingFinish<void>;
template<class TPMGL(T)> class FinishState__CollectingFinish : public ::x10::xrx::FinishState__Finish
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::CustomSerialization::itable< ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)> > _itable_1;
    
    static typename ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)>::template itable< ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)> > _itable_2;
    
    ::x10::lang::Reducible<TPMGL(T)>* FMGL(reducer);
    
    void _constructor(::x10::lang::Reducible<TPMGL(T)>* reducer);
    
    static ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>* _make(
             ::x10::lang::Reducible<TPMGL(T)>* reducer);
    
    void _constructor(::x10::io::Deserializer* ds);
    
    static ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>* _make(
             ::x10::io::Deserializer* ds);
    
    virtual void serialize(::x10::io::Serializer* s);
    virtual void accept(TPMGL(T) t, x10_int id);
    virtual TPMGL(T) waitForFinishExpr();
    virtual ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>* x10__xrx__FinishState__CollectingFinish____this__x10__xrx__FinishState__CollectingFinish(
      );
    virtual void __fieldInitializers_x10_xrx_FinishState_CollectingFinish(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::xrx::FinishState__CollectingFinish<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[3] = { ::x10aux::getRTT< ::x10::xrx::FinishState__Finish>(), ::x10aux::getRTT< ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::io::CustomSerialization>()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.xrx.FinishState.CollectingFinish";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 3, parents, 1, params, variances);
}

template <> class FinishState__CollectingFinish<void> : public ::x10::xrx::FinishState__Finish
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_XRX_FINISHSTATE__COLLECTINGFINISH_H

namespace x10 { namespace xrx { 
template<class TPMGL(T)> class FinishState__CollectingFinish;
} } 

#ifndef X10_XRX_FINISHSTATE__COLLECTINGFINISH_H_NODEPS
#define X10_XRX_FINISHSTATE__COLLECTINGFINISH_H_NODEPS
#include <x10/xrx/FinishState__Finish.h>
#include <x10/xrx/FinishState__CollectingFinishState.h>
#include <x10/io/CustomSerialization.h>
#include <x10/lang/Reducible.h>
#include <x10/xrx/FinishState__RootFinish.h>
#include <x10/xrx/FinishState__RootCollectingFinish.h>
#include <x10/io/Deserializer.h>
#include <x10/lang/GlobalRef.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/Any.h>
#include <x10/lang/Place.h>
#include <x10/lang/Long.h>
#include <x10/xrx/FinishState__FinishSkeleton.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/xrx/FinishState__FinishStates.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/FinishState__RemoteCollectingFinish.h>
#include <x10/io/Serializer.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_XRX_FINISHSTATE__COLLECTINGFINISH_H_GENERICS
#define X10_XRX_FINISHSTATE__COLLECTINGFINISH_H_GENERICS
#endif // X10_XRX_FINISHSTATE__COLLECTINGFINISH_H_GENERICS
#ifndef X10_XRX_FINISHSTATE__COLLECTINGFINISH_H_IMPLEMENTATION
#define X10_XRX_FINISHSTATE__COLLECTINGFINISH_H_IMPLEMENTATION
#include <x10/xrx/FinishState__CollectingFinish.h>

#ifndef X10_XRX_FINISHSTATE__COLLECTINGFINISH__CLOSURE__23_CLOSURE
#define X10_XRX_FINISHSTATE__COLLECTINGFINISH__CLOSURE__23_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_xrx_FinishState__CollectingFinish__closure__23 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>*>::template itable <x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>* __apply(){
        ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>* alloc__162265 =
           (new (::x10aux::alloc_z< ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)> >()) ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>());
        (alloc__162265)->::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>::_constructor(
          _ref, tmpReducer);
        return alloc__162265;
        
    }
    
    // captured environment
    ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > _ref;
    ::x10::lang::Reducible<TPMGL(T)>* tmpReducer;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->_ref);
        buf.write(this->tmpReducer);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > that__ref = buf.read< ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > >();
        ::x10::lang::Reducible<TPMGL(T)>* that_tmpReducer = buf.read< ::x10::lang::Reducible<TPMGL(T)>*>();
        x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) >* this_ = new (storage) x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) >(that__ref, that_tmpReducer);
        return this_;
    }
    
    x10_xrx_FinishState__CollectingFinish__closure__23(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > _ref, ::x10::lang::Reducible<TPMGL(T)>* tmpReducer) : _ref(_ref), tmpReducer(tmpReducer) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/xrx/FinishState.x10:1022";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>*>::template itable <x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) > >x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) >::__apply, &x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::xrx::FinishState__RemoteCollectingFinish<TPMGL(T)>*> >, &x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T) >::_deserialize);

#endif // X10_XRX_FINISHSTATE__COLLECTINGFINISH__CLOSURE__23_CLOSURE
#ifndef X10_XRX_FINISHSTATE__COLLECTINGFINISH__CLOSURE__22_CLOSURE
#define X10_XRX_FINISHSTATE__COLLECTINGFINISH__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_xrx_FinishState__CollectingFinish__closure__22 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::xrx::FinishState*>::template itable <x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::xrx::FinishState* __apply(){
        return reinterpret_cast< ::x10::xrx::FinishState*>(x10_xrx_FinishState__CollectingFinish__closure__23<TPMGL(T)>(_ref, tmpReducer).__apply());
        
    }
    
    // captured environment
    ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > _ref;
    ::x10::lang::Reducible<TPMGL(T)>* tmpReducer;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->_ref);
        buf.write(this->tmpReducer);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > that__ref = buf.read< ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > >();
        ::x10::lang::Reducible<TPMGL(T)>* that_tmpReducer = buf.read< ::x10::lang::Reducible<TPMGL(T)>*>();
        x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) >* this_ = new (storage) x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) >(that__ref, that_tmpReducer);
        return this_;
    }
    
    x10_xrx_FinishState__CollectingFinish__closure__22(::x10::lang::GlobalRef< ::x10::xrx::FinishState* > _ref, ::x10::lang::Reducible<TPMGL(T)>* tmpReducer) : _ref(_ref), tmpReducer(tmpReducer) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::xrx::FinishState*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::xrx::FinishState*> >(); }
    
    const char* toNativeString() {
        return "x10/xrx/FinishState.x10:1022";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::xrx::FinishState*>::template itable <x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) > >x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) >::__apply, &x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::xrx::FinishState*> >, &x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T) >::_deserialize);

#endif // X10_XRX_FINISHSTATE__COLLECTINGFINISH__CLOSURE__22_CLOSURE
template<class TPMGL(T)> ::x10::io::CustomSerialization::itable< ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)> >  x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::serialize, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)> >  x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)>::template itable< ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)> >  x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_itable_2(&x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::accept, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_itables[4] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::io::CustomSerialization>, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(NULL, (void*)"::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>")};

//#line 1009 "x10/xrx/FinishState.x10"

//#line 1010 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_constructor(
                           ::x10::lang::Reducible<TPMGL(T)>* reducer) {
    
    //#line 1011 "x10/xrx/FinishState.x10"
    (this)->::x10::xrx::FinishState__Finish::_constructor(reinterpret_cast< ::x10::xrx::FinishState__RootFinish*>((__extension__ ({
                                                              ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>* alloc__154432 =
                                                                
                                                              (new (::x10aux::alloc_z< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)> >()) ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>());
                                                              (alloc__154432)->::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>::_constructor(
                                                                reducer);
                                                              alloc__154432;
                                                          }))
                                                          ));
    
    //#line 1010 "x10/xrx/FinishState.x10"
    
    //#line 1012 "x10/xrx/FinishState.x10"
    this->FMGL(reducer) = reducer;
}
template<class TPMGL(T)> ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>* x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_make(
                           ::x10::lang::Reducible<TPMGL(T)>* reducer)
{
    ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)> >()) ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>();
    this_->_constructor(reducer);
    return this_;
}



//#line 1014 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_constructor(
                           ::x10::io::Deserializer* ds) {
    
    //#line 1015 "x10/xrx/FinishState.x10"
    (this)->::x10::xrx::FinishState__Finish::_constructor(
      ::x10aux::class_cast< ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > >(::x10aux::nullCheck(ds)->x10::io::Deserializer::readAny()));
    
    //#line 1014 "x10/xrx/FinishState.x10"
    
    //#line 1016 "x10/xrx/FinishState.x10"
    ::x10::lang::Reducible<TPMGL(T)>* tmpReducer = ::x10aux::class_cast< ::x10::lang::Reducible<TPMGL(T)>*>(::x10aux::nullCheck(ds)->x10::io::Deserializer::readAny());
    
    //#line 1017 "x10/xrx/FinishState.x10"
    this->FMGL(reducer) = tmpReducer;
    
    //#line 1018 "x10/xrx/FinishState.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make((this->FMGL(ref))->location)->FMGL(id),
                                 ((x10_long)::x10aux::here))))
    {
        
        //#line 1019 "x10/xrx/FinishState.x10"
        this->FMGL(me) = ((__extension__ ({
            ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > t__154393 =
              this->FMGL(ref);
            if (!((::x10aux::struct_equals(::x10::lang::Place::_make((t__154393)->location),
                                           ::x10::lang::Place::_make(::x10aux::here)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::xrx::FinishState__CollectingFinish_Strings::sl__172082))));
            }
            t__154393;
        }))
        )->__apply();
    } else {
        
        //#line 1021 "x10/xrx/FinishState.x10"
        ::x10::lang::GlobalRef< ::x10::xrx::FinishState* > _ref =
          this->FMGL(ref);
        
        //#line 1022 "x10/xrx/FinishState.x10"
        this->FMGL(me) = ::x10::xrx::Runtime::FMGL(finishStates__get)()->__apply(
                           this->FMGL(ref), reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::xrx::FinishState*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::xrx::FinishState*> >(sizeof(x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T)>)))x10_xrx_FinishState__CollectingFinish__closure__22<TPMGL(T)>(_ref, tmpReducer))));
    }
    
}
template<class TPMGL(T)> ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>* x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_make(
                           ::x10::io::Deserializer* ds) {
    ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)> >()) ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>();
    this_->_constructor(ds);
    return this_;
}



//#line 1025 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::serialize(
  ::x10::io::Serializer* s) {
    
    //#line 1026 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(s)->x10::io::Serializer::writeAny(
      ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(ref)));
    
    //#line 1027 "x10/xrx/FinishState.x10"
    ::x10aux::nullCheck(s)->x10::io::Serializer::writeAny(
      reinterpret_cast< ::x10::lang::Any*>(this->FMGL(reducer)));
}

//#line 1029 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::accept(
  TPMGL(T) t, x10_int id) {
    ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)>::accept(::x10aux::nullCheck(::x10aux::class_cast< ::x10::xrx::FinishState__CollectingFinishState<TPMGL(T)>*>(this->FMGL(me))), 
      t, id);
}

//#line 1030 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> TPMGL(T) x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::waitForFinishExpr(
  ) {
    return ::x10aux::nullCheck((::x10aux::class_cast< ::x10::xrx::FinishState__RootCollectingFinish<TPMGL(T)>*>(this->FMGL(me))))->x10::xrx::template FinishState__RootCollectingFinish<TPMGL(T)>::waitForFinishExpr();
    
}

//#line 1008 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>*
  x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::x10__xrx__FinishState__CollectingFinish____this__x10__xrx__FinishState__CollectingFinish(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::__fieldInitializers_x10_xrx_FinishState_CollectingFinish(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    /* NOTE: Implements x10.io.CustomSerialization */
    ::x10::io::Serializer* x10_buf = ::x10::io::Serializer::_make(&buf);
    this->serialize(x10_buf);
    buf.write(::x10aux::deserialization_buffer::CUSTOM_SERIALIZATION_END);
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)> >()) ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    /* NOTE: Implements x10.io.CustomSerialization */
    ::x10::io::Deserializer* x10_buf = ::x10::io::Deserializer::_make(&buf);
    _constructor(x10_buf);
    ::x10aux::serialization_id_t tmp = buf.read< ::x10aux::serialization_id_t>();
    if (tmp != ::x10aux::deserialization_buffer::CUSTOM_SERIALIZATION_END) { ::x10aux::raiseSerializationProtocolError(); }
    
}

#endif // X10_XRX_FINISHSTATE__COLLECTINGFINISH_H_IMPLEMENTATION
#endif // __X10_XRX_FINISHSTATE__COLLECTINGFINISH_H_NODEPS
