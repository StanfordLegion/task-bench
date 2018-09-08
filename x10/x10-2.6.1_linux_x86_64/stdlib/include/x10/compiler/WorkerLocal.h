#ifndef __X10_COMPILER_WORKERLOCAL_H
#define __X10_COMPILER_WORKERLOCAL_H

#include <x10rt.h>


#define X10_LANG_FUN_0_0_H_NODEPS
#include <x10/lang/Fun_0_0.h>
#undef X10_LANG_FUN_0_0_H_NODEPS
#define X10_LANG_VOIDFUN_0_1_H_NODEPS
#include <x10/lang/VoidFun_0_1.h>
#undef X10_LANG_VOIDFUN_0_1_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class Worker;
} } 
namespace x10 { namespace xrx { 
class Thread;
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

namespace x10 { namespace compiler { 

template<class TPMGL(T)> class WorkerLocal;
template <> class WorkerLocal<void>;
template<class TPMGL(T)> class WorkerLocal : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Fun_0_0<TPMGL(T)>::template itable< ::x10::compiler::WorkerLocal<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::compiler::WorkerLocal<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::VoidFun_0_1<TPMGL(T)>::template itable< ::x10::compiler::WorkerLocal<TPMGL(T)> > _itable_2;
    
    ::x10::lang::Rail< TPMGL(T) >* FMGL(store);
    
    ::x10::lang::Fun_0_0<TPMGL(T)>* FMGL(init);
    
    void _constructor(::x10::lang::Fun_0_0<TPMGL(T)>* init);
    
    static ::x10::compiler::WorkerLocal<TPMGL(T)>* _make(::x10::lang::Fun_0_0<TPMGL(T)>* init);
    
    virtual TPMGL(T) __apply();
    virtual void __apply(TPMGL(T) t);
    virtual void resetAll(::x10::lang::Fun_0_0<TPMGL(T)>* init);
    virtual void applyToAll(::x10::lang::VoidFun_0_1<TPMGL(T)>* op);
    virtual TPMGL(T) reduce(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op);
    virtual TPMGL(T) reduce(TPMGL(T) result, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op);
    virtual ::x10::compiler::WorkerLocal<TPMGL(T)>* x10__compiler__WorkerLocal____this__x10__compiler__WorkerLocal(
      );
    virtual void __fieldInitializers_x10_compiler_WorkerLocal();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::compiler::WorkerLocal<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::compiler::WorkerLocal<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::compiler::WorkerLocal<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::VoidFun_0_1<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.compiler.WorkerLocal";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class WorkerLocal<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_COMPILER_WORKERLOCAL_H

namespace x10 { namespace compiler { 
template<class TPMGL(T)> class WorkerLocal;
} } 

#ifndef X10_COMPILER_WORKERLOCAL_H_NODEPS
#define X10_COMPILER_WORKERLOCAL_H_NODEPS
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/Worker.h>
#include <x10/xrx/Thread.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_COMPILER_WORKERLOCAL_H_GENERICS
#define X10_COMPILER_WORKERLOCAL_H_GENERICS
#endif // X10_COMPILER_WORKERLOCAL_H_GENERICS
#ifndef X10_COMPILER_WORKERLOCAL_H_IMPLEMENTATION
#define X10_COMPILER_WORKERLOCAL_H_IMPLEMENTATION
#include <x10/compiler/WorkerLocal.h>

#ifndef X10_COMPILER_WORKERLOCAL__CLOSURE__1_CLOSURE
#define X10_COMPILER_WORKERLOCAL__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_WorkerLocal__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_WorkerLocal__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10::lang::VoidFun_0_1<TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
          t__106209);
    }
    
    // captured environment
    ::x10::lang::VoidFun_0_1<TPMGL(T)>* op;
    TPMGL(T) t__106209;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->op);
        buf.write(this->t__106209);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_WorkerLocal__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_WorkerLocal__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::VoidFun_0_1<TPMGL(T)>* that_op = buf.read< ::x10::lang::VoidFun_0_1<TPMGL(T)>*>();
        TPMGL(T) that_t__106209 = buf.read<TPMGL(T)>();
        x10_compiler_WorkerLocal__closure__1<TPMGL(T) >* this_ = new (storage) x10_compiler_WorkerLocal__closure__1<TPMGL(T) >(that_op, that_t__106209);
        return this_;
    }
    
    x10_compiler_WorkerLocal__closure__1(::x10::lang::VoidFun_0_1<TPMGL(T)>* op, TPMGL(T) t__106209) : op(op), t__106209(t__106209) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/WorkerLocal.x10:60";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_WorkerLocal__closure__1<TPMGL(T) > >x10_compiler_WorkerLocal__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_WorkerLocal__closure__1<TPMGL(T) >::__apply, &x10_compiler_WorkerLocal__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_WorkerLocal__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_WorkerLocal__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_WorkerLocal__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_WorkerLocal__closure__1<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_WorkerLocal__closure__1<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_WorkerLocal__closure__1<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_WORKERLOCAL__CLOSURE__1_CLOSURE
template<class TPMGL(T)> typename ::x10::lang::Fun_0_0<TPMGL(T)>::template itable< ::x10::compiler::WorkerLocal<TPMGL(T)> >  x10::compiler::WorkerLocal<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::compiler::WorkerLocal<TPMGL(T)>::__apply, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::compiler::WorkerLocal<TPMGL(T)> >  x10::compiler::WorkerLocal<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_1<TPMGL(T)>::template itable< ::x10::compiler::WorkerLocal<TPMGL(T)> >  x10::compiler::WorkerLocal<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::compiler::WorkerLocal<TPMGL(T)>::__apply, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::compiler::WorkerLocal<TPMGL(T)>::_itables[4] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1<TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(NULL, (void*)"::x10::compiler::WorkerLocal<TPMGL(T)>")};

//#line 23 "x10/compiler/WorkerLocal.x10"

//#line 24 "x10/compiler/WorkerLocal.x10"

//#line 26 "x10/compiler/WorkerLocal.x10"
template<class TPMGL(T)> void x10::compiler::WorkerLocal<TPMGL(T)>::_constructor(
                           ::x10::lang::Fun_0_0<TPMGL(T)>* init) {
    
    //#line 22 "x10/compiler/WorkerLocal.x10"
    ::x10::compiler::WorkerLocal<TPMGL(T)>* this__106208 = this;
    ::x10aux::nullCheck(this__106208)->FMGL(init) = (::x10aux::class_cast_unchecked< ::x10::lang::Fun_0_0<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 27 "x10/compiler/WorkerLocal.x10"
    this->FMGL(store) = ::x10::lang::Rail< TPMGL(T) >::_make(((x10_long)(::x10::xrx::Runtime::FMGL(MAX_THREADS__get)())));
    
    //#line 28 "x10/compiler/WorkerLocal.x10"
    this->FMGL(init) = (init);
}
template<class TPMGL(T)> ::x10::compiler::WorkerLocal<TPMGL(T)>* x10::compiler::WorkerLocal<TPMGL(T)>::_make(
                           ::x10::lang::Fun_0_0<TPMGL(T)>* init)
{
    ::x10::compiler::WorkerLocal<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::compiler::WorkerLocal<TPMGL(T)> >()) ::x10::compiler::WorkerLocal<TPMGL(T)>();
    this_->_constructor(init);
    return this_;
}



//#line 31 "x10/compiler/WorkerLocal.x10"
template<class TPMGL(T)> TPMGL(T) x10::compiler::WorkerLocal<TPMGL(T)>::__apply(
  ) {
    
    //#line 32 "x10/compiler/WorkerLocal.x10"
    TPMGL(T) t = ::x10aux::nullCheck(this->FMGL(store))->x10::lang::template Rail< TPMGL(T) >::__apply(
                   ((x10_long)(::x10aux::nullCheck((::x10aux::class_cast< ::x10::xrx::Worker*>(::x10::xrx::Thread::currentThread())))->FMGL(workerId))));
    
    //#line 33 "x10/compiler/WorkerLocal.x10"
    if ((::x10aux::struct_equals(t, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 34 "x10/compiler/WorkerLocal.x10"
        t = ::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(this->FMGL(init)));
        
        //#line 35 "x10/compiler/WorkerLocal.x10"
        ::x10aux::nullCheck(this->FMGL(store))->x10::lang::template Rail< TPMGL(T) >::__set(
          ((x10_long)(::x10aux::nullCheck((::x10aux::class_cast< ::x10::xrx::Worker*>(::x10::xrx::Thread::currentThread())))->FMGL(workerId))),
          t);
    }
    
    //#line 37 "x10/compiler/WorkerLocal.x10"
    return t;
    
}

//#line 40 "x10/compiler/WorkerLocal.x10"
template<class TPMGL(T)> void x10::compiler::WorkerLocal<TPMGL(T)>::__apply(
  TPMGL(T) t) {
    
    //#line 41 "x10/compiler/WorkerLocal.x10"
    ::x10aux::nullCheck(this->FMGL(store))->x10::lang::template Rail< TPMGL(T) >::__set(
      ((x10_long)(::x10aux::nullCheck((::x10aux::class_cast< ::x10::xrx::Worker*>(::x10::xrx::Thread::currentThread())))->FMGL(workerId))),
      t);
}

//#line 48 "x10/compiler/WorkerLocal.x10"
/**
     * Set the init operation for this worker local handle, and clear all
     * current values.
     */
template<class TPMGL(T)> void x10::compiler::WorkerLocal<TPMGL(T)>::resetAll(
  ::x10::lang::Fun_0_0<TPMGL(T)>* init) {
    
    //#line 49 "x10/compiler/WorkerLocal.x10"
    ::x10aux::nullCheck(this->FMGL(store))->x10::lang::template Rail< TPMGL(T) >::clear();
    
    //#line 50 "x10/compiler/WorkerLocal.x10"
    this->FMGL(init) = (init);
}

//#line 56 "x10/compiler/WorkerLocal.x10"
/** 
     * Apply the given operation in parallel to each thread local value.
     */
template<class TPMGL(T)> void x10::compiler::WorkerLocal<TPMGL(T)>::applyToAll(
  ::x10::lang::VoidFun_0_1<TPMGL(T)>* op) {
    {
        
        //#line 57 "x10/compiler/WorkerLocal.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__106224 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                x10_long i__104890max__106210 = (((x10_long)(::x10aux::nullCheck(this->FMGL(store))->FMGL(size))) - (((x10_long)1ll)));
                {
                    x10_long i__106211;
                    for (i__106211 = ((x10_long)0ll); ((i__106211) <= (i__104890max__106210));
                         i__106211 = ((i__106211) + (((x10_long)1ll))))
                    {
                        
                        //#line 58 "x10/compiler/WorkerLocal.x10"
                        TPMGL(T) t__106209 = ::x10aux::nullCheck(this->FMGL(store))->x10::lang::template Rail< TPMGL(T) >::__apply(
                                               i__106211);
                        
                        //#line 59 "x10/compiler/WorkerLocal.x10"
                        if ((!::x10aux::struct_equals(t__106209,
                                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                        {
                            
                            //#line 60 "x10/compiler/WorkerLocal.x10"
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_WorkerLocal__closure__1<TPMGL(T)>)))x10_compiler_WorkerLocal__closure__1<TPMGL(T)>(op, t__106209))));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc377) {
            {
                ::x10::lang::CheckedThrowable* ct__106222 =
                  __exc377;
                {
                    ::x10::xrx::Runtime::pushException(ct__106222);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__106224);
    }
    
    //#line 63 "x10/compiler/WorkerLocal.x10"
    return;
}

//#line 69 "x10/compiler/WorkerLocal.x10"
/** 
     * Reduce partial results from each thread and return combined result.
     */
template<class TPMGL(T)> TPMGL(T) x10::compiler::WorkerLocal<TPMGL(T)>::reduce(
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op) {
    
    //#line 70 "x10/compiler/WorkerLocal.x10"
    TPMGL(T) result = ::x10aux::class_cast_unchecked<TPMGL(T)>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
    //#line 71 "x10/compiler/WorkerLocal.x10"
    x10_long i__104908max__106214 = (((x10_long)(::x10aux::nullCheck(this->FMGL(store))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__106215;
        for (i__106215 = ((x10_long)0ll); ((i__106215) <= (i__104908max__106214));
             i__106215 = ((i__106215) + (((x10_long)1ll))))
        {
            
            //#line 72 "x10/compiler/WorkerLocal.x10"
            TPMGL(T) t__106213 = ::x10aux::nullCheck(this->FMGL(store))->x10::lang::template Rail< TPMGL(T) >::__apply(
                                   i__106215);
            
            //#line 73 "x10/compiler/WorkerLocal.x10"
            if ((!::x10aux::struct_equals(t__106213, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 74 "x10/compiler/WorkerLocal.x10"
                if ((::x10aux::struct_equals(result, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                {
                    result = t__106213;
                } else {
                    
                    //#line 75 "x10/compiler/WorkerLocal.x10"
                    result = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
                      result, t__106213);
                }
                
            }
            
        }
    }
    
    //#line 78 "x10/compiler/WorkerLocal.x10"
    return result;
    
}

//#line 90 "x10/compiler/WorkerLocal.x10"
/** 
     * Reduce partial results from each thread using the given 'result' as
     * the initial value.  
     * This can be used e.g. to sum a Rail[Double] 'in place' as follows:
     * result_worker.reduceLocal( result, 
     *   (a:Rail[Double],b:Rail[Double]) => 
     *      { a.map(result, b, (x:Double,y:Double)=>(x+y) ) as Rail[Double] }
     *   );
     */
template<class TPMGL(T)> TPMGL(T) x10::compiler::WorkerLocal<TPMGL(T)>::reduce(
  TPMGL(T) result, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op) {
    
    //#line 91 "x10/compiler/WorkerLocal.x10"
    x10_long i__104926max__106218 = (((x10_long)(::x10aux::nullCheck(this->FMGL(store))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__106219;
        for (i__106219 = ((x10_long)0ll); ((i__106219) <= (i__104926max__106218));
             i__106219 = ((i__106219) + (((x10_long)1ll))))
        {
            
            //#line 92 "x10/compiler/WorkerLocal.x10"
            TPMGL(T) t__106217 = ::x10aux::nullCheck(this->FMGL(store))->x10::lang::template Rail< TPMGL(T) >::__apply(
                                   i__106219);
            
            //#line 93 "x10/compiler/WorkerLocal.x10"
            if ((!::x10aux::struct_equals(t__106217, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 94 "x10/compiler/WorkerLocal.x10"
                result = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
                  result, t__106217);
            }
            
        }
    }
    
    //#line 97 "x10/compiler/WorkerLocal.x10"
    return result;
    
}

//#line 22 "x10/compiler/WorkerLocal.x10"
template<class TPMGL(T)> ::x10::compiler::WorkerLocal<TPMGL(T)>*
  x10::compiler::WorkerLocal<TPMGL(T)>::x10__compiler__WorkerLocal____this__x10__compiler__WorkerLocal(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::compiler::WorkerLocal<TPMGL(T)>::__fieldInitializers_x10_compiler_WorkerLocal(
  ) {
    this->FMGL(init) = (::x10aux::class_cast_unchecked< ::x10::lang::Fun_0_0<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::compiler::WorkerLocal<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::compiler::WorkerLocal<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::compiler::WorkerLocal<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(init));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::compiler::WorkerLocal<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::compiler::WorkerLocal<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::compiler::WorkerLocal<TPMGL(T)> >()) ::x10::compiler::WorkerLocal<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::compiler::WorkerLocal<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(init) = buf.read< ::x10::lang::Fun_0_0<TPMGL(T)>*>();
}

#endif // X10_COMPILER_WORKERLOCAL_H_IMPLEMENTATION
#endif // __X10_COMPILER_WORKERLOCAL_H_NODEPS
