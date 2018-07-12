#ifndef __X10_XRX_FINISHSTATE__STATEFULREDUCER_H
#define __X10_XRX_FINISHSTATE__STATEFULREDUCER_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

template<class TPMGL(T)> class FinishState__StatefulReducer;
template <> class FinishState__StatefulReducer<void>;
template<class TPMGL(T)> class FinishState__StatefulReducer : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Reducible<TPMGL(T)>* FMGL(reducer);
    
    TPMGL(T) FMGL(result);
    
    ::x10::lang::Rail< TPMGL(T) >* FMGL(resultRail);
    
    ::x10::lang::Rail< x10_boolean >* FMGL(workerFlag);
    
    void _constructor(::x10::lang::Reducible<TPMGL(T)>* r);
    
    static ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>* _make(
             ::x10::lang::Reducible<TPMGL(T)>* r);
    
    virtual void accept(TPMGL(T) t);
    virtual void accept(TPMGL(T) t, x10_int id);
    virtual void placeMerge();
    virtual TPMGL(T) result();
    virtual void reset();
    virtual ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>* x10__xrx__FinishState__StatefulReducer____this__x10__xrx__FinishState__StatefulReducer(
      );
    virtual void __fieldInitializers_x10_xrx_FinishState_StatefulReducer(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::xrx::FinishState__StatefulReducer<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.xrx.FinishState.StatefulReducer";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class FinishState__StatefulReducer<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_XRX_FINISHSTATE__STATEFULREDUCER_H

namespace x10 { namespace xrx { 
template<class TPMGL(T)> class FinishState__StatefulReducer;
} } 

#ifndef X10_XRX_FINISHSTATE__STATEFULREDUCER_H_NODEPS
#define X10_XRX_FINISHSTATE__STATEFULREDUCER_H_NODEPS
#include <x10/lang/Boolean.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_XRX_FINISHSTATE__STATEFULREDUCER_H_GENERICS
#define X10_XRX_FINISHSTATE__STATEFULREDUCER_H_GENERICS
#endif // X10_XRX_FINISHSTATE__STATEFULREDUCER_H_GENERICS
#ifndef X10_XRX_FINISHSTATE__STATEFULREDUCER_H_IMPLEMENTATION
#define X10_XRX_FINISHSTATE__STATEFULREDUCER_H_IMPLEMENTATION
#include <x10/xrx/FinishState__StatefulReducer.h>


//#line 968 "x10/xrx/FinishState.x10"

//#line 969 "x10/xrx/FinishState.x10"

//#line 970 "x10/xrx/FinishState.x10"

//#line 971 "x10/xrx/FinishState.x10"

//#line 972 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::_constructor(
                           ::x10::lang::Reducible<TPMGL(T)>* r) {
    
    //#line 967 "x10/xrx/FinishState.x10"
    this->x10::xrx::template FinishState__StatefulReducer<TPMGL(T)>::__fieldInitializers_x10_xrx_FinishState_StatefulReducer();
    
    //#line 973 "x10/xrx/FinishState.x10"
    this->FMGL(reducer) = r;
    
    //#line 974 "x10/xrx/FinishState.x10"
    TPMGL(T) zero = ::x10::lang::Reducible<TPMGL(T)>::zero(::x10aux::nullCheck(this->FMGL(reducer)));
    
    //#line 975 "x10/xrx/FinishState.x10"
    this->FMGL(result) = zero;
    
    //#line 976 "x10/xrx/FinishState.x10"
    this->FMGL(resultRail) = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(MAX_THREADS__get)())), false);
    
    //#line 977 "x10/xrx/FinishState.x10"
    x10_long i__151091min__151116 = ((x10_long)0ll);
    x10_long i__151091max__151117 = (((x10_long)(::x10aux::nullCheck(this->FMGL(resultRail))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__151118;
        for (i__151118 = i__151091min__151116; ((i__151118) <= (i__151091max__151117));
             i__151118 = ((i__151118) + (((x10_long)1ll))))
        {
            x10_long i__151119 = i__151118;
            
            //#line 978 "x10/xrx/FinishState.x10"
            ::x10aux::nullCheck(this->FMGL(resultRail))->x10::lang::template Rail< TPMGL(T) >::__set(
              i__151119, zero);
        }
    }
    
}
template<class TPMGL(T)> ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>* x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::_make(
                           ::x10::lang::Reducible<TPMGL(T)>* r)
{
    ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)> >()) ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>();
    this_->_constructor(r);
    return this_;
}



//#line 981 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::accept(
  TPMGL(T) t) {
    
    //#line 982 "x10/xrx/FinishState.x10"
    this->FMGL(result) = ::x10::lang::Reducible<TPMGL(T)>::__apply(::x10aux::nullCheck(this->FMGL(reducer)), 
                           this->FMGL(result), t);
}

//#line 984 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::accept(
  TPMGL(T) t, x10_int id) {
    
    //#line 985 "x10/xrx/FinishState.x10"
    if ((((((x10_long)(id))) >= (((x10_long)0ll))) && ((id) < (::x10::xrx::Runtime::FMGL(MAX_THREADS__get)()))))
    {
        
        //#line 986 "x10/xrx/FinishState.x10"
        ::x10aux::nullCheck(this->FMGL(resultRail))->x10::lang::template Rail< TPMGL(T) >::__set(
          ((x10_long)(id)), ::x10::lang::Reducible<TPMGL(T)>::__apply(::x10aux::nullCheck(this->FMGL(reducer)), 
                              ::x10aux::nullCheck(this->FMGL(resultRail))->x10::lang::template Rail< TPMGL(T) >::__apply(
                                ((x10_long)(id))), t));
        
        //#line 987 "x10/xrx/FinishState.x10"
        ::x10aux::nullCheck(this->FMGL(workerFlag))->x10::lang::template Rail< x10_boolean >::__set(
          ((x10_long)(id)), true);
    }
    
}

//#line 990 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::placeMerge(
  ) {
    
    //#line 991 "x10/xrx/FinishState.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) < (::x10::xrx::Runtime::FMGL(MAX_THREADS__get)()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 992 "x10/xrx/FinishState.x10"
            if (::x10aux::nullCheck(this->FMGL(workerFlag))->x10::lang::template Rail< x10_boolean >::__apply(
                  ((x10_long)(i)))) {
                
                //#line 993 "x10/xrx/FinishState.x10"
                this->FMGL(result) = ::x10::lang::Reducible<TPMGL(T)>::__apply(::x10aux::nullCheck(this->FMGL(reducer)), 
                                       this->FMGL(result),
                                       ::x10aux::nullCheck(this->FMGL(resultRail))->x10::lang::template Rail< TPMGL(T) >::__apply(
                                         ((x10_long)(i))));
                
                //#line 994 "x10/xrx/FinishState.x10"
                ::x10aux::nullCheck(this->FMGL(resultRail))->x10::lang::template Rail< TPMGL(T) >::__set(
                  ((x10_long)(i)), ::x10::lang::Reducible<TPMGL(T)>::zero(::x10aux::nullCheck(this->FMGL(reducer))));
            }
            
        }
    }
    
}

//#line 998 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> TPMGL(T) x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::result(
  ) {
    return this->FMGL(result);
    
}

//#line 999 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> void x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::reset(
  ) {
    
    //#line 1000 "x10/xrx/FinishState.x10"
    this->FMGL(result) = ::x10::lang::Reducible<TPMGL(T)>::zero(::x10aux::nullCheck(this->FMGL(reducer)));
}

//#line 967 "x10/xrx/FinishState.x10"
template<class TPMGL(T)> ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>*
  x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::x10__xrx__FinishState__StatefulReducer____this__x10__xrx__FinishState__StatefulReducer(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::__fieldInitializers_x10_xrx_FinishState_StatefulReducer(
  ) {
    this->FMGL(resultRail) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< TPMGL(T) >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(workerFlag) = ::x10::lang::Rail< x10_boolean >::_make(((x10_long)(::x10::xrx::Runtime::FMGL(MAX_THREADS__get)())));
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(reducer));
    buf.write(this->FMGL(result));
    buf.write(this->FMGL(resultRail));
    buf.write(this->FMGL(workerFlag));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)> >()) ::x10::xrx::FinishState__StatefulReducer<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::xrx::FinishState__StatefulReducer<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(reducer) = buf.read< ::x10::lang::Reducible<TPMGL(T)>*>();
    FMGL(result) = buf.read<TPMGL(T)>();
    FMGL(resultRail) = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
    FMGL(workerFlag) = buf.read< ::x10::lang::Rail< x10_boolean >*>();
}

#endif // X10_XRX_FINISHSTATE__STATEFULREDUCER_H_IMPLEMENTATION
#endif // __X10_XRX_FINISHSTATE__STATEFULREDUCER_H_NODEPS
