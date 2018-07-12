/*************************************************/
/* START of TaskBench */
#include <TaskBench.h>

#include <x10/lang/PlaceLocalHandle.h>
#include <TaskBench__PlaceInstance.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/GlobalRail.h>
#include <x10/lang/Double.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/compiler/NativeCPPCompilationUnit.h>
#include <x10/lang/String.h>
#ifndef TASKBENCH__CLOSURE__1_CLOSURE
#define TASKBENCH__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class TaskBench__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*>::itable<TaskBench__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::TaskBench__PlaceInstance* __apply(){
        
        //#line 65 "TaskBench.x10"
        return ::TaskBench__PlaceInstance::_make(::x10aux::nullCheck(neighborSendMap)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                   ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)),
                                                 ::x10aux::nullCheck(neighborRecvMap)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                   ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)));
        
    }
    
    // captured environment
    ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* neighborSendMap;
    ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* neighborRecvMap;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->neighborSendMap);
        buf.write(this->neighborRecvMap);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__1* storage = ::x10aux::alloc_z<TaskBench__closure__1>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* that_neighborSendMap = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >*>();
        ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* that_neighborRecvMap = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >*>();
        TaskBench__closure__1* this_ = new (storage) TaskBench__closure__1(that_neighborSendMap, that_neighborRecvMap);
        return this_;
    }
    
    TaskBench__closure__1(::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* neighborSendMap, ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* neighborRecvMap) : neighborSendMap(neighborSendMap), neighborRecvMap(neighborRecvMap) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*> >(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:64-66";
    }

};

#endif // TASKBENCH__CLOSURE__1_CLOSURE
#ifndef TASKBENCH__CLOSURE__4_CLOSURE
#define TASKBENCH__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TaskBench__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TaskBench__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 83 "TaskBench.x10"
        rs->x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::__apply()->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__set(
          i__597, rsr__592);
    }
    
    // captured environment
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs;
    x10_long i__597;
    ::x10::lang::GlobalRail<x10_double> rsr__592;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->rs);
        buf.write(this->i__597);
        buf.write(this->rsr__592);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__4* storage = ::x10aux::alloc_z<TaskBench__closure__4>();
        buf.record_reference(storage);
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        x10_long that_i__597 = buf.read<x10_long>();
        ::x10::lang::GlobalRail<x10_double> that_rsr__592 = buf.read< ::x10::lang::GlobalRail<x10_double> >();
        TaskBench__closure__4* this_ = new (storage) TaskBench__closure__4(that_rs, that_i__597, that_rsr__592);
        return this_;
    }
    
    TaskBench__closure__4(::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs, x10_long i__597, ::x10::lang::GlobalRail<x10_double> rsr__592) : rs(rs), i__597(i__597), rsr__592(rsr__592) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:82-84";
    }

};

#endif // TASKBENCH__CLOSURE__4_CLOSURE
#ifndef TASKBENCH__CLOSURE__3_CLOSURE
#define TASKBENCH__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TaskBench__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TaskBench__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 79 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pplh__590 = pplh->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 80 "TaskBench.x10"
        x10_long sendIndex__591 = ::x10aux::nullCheck(pplh__590)->getSenderIndex(
                                    recvId);
        
        //#line 81 "TaskBench.x10"
        ::x10::lang::GlobalRail<x10_double> rsr__592 = (__extension__ ({
            ::x10::lang::Rail< x10_double >* a__593 = ::x10aux::nullCheck(::x10aux::nullCheck(pplh__590)->FMGL(send))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                        sendIndex__591);
            if (!((!::x10aux::struct_equals(a__593, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__646))));
            }
            ::x10::lang::GlobalRail<x10_double>::_make(a__593);
        }))
        ;
        
        //#line 82 "TaskBench.x10"
        ::x10::xrx::Runtime::runAsync(rs->x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::home(),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__4)))TaskBench__closure__4(rs, i__597, rsr__592))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh;
    x10_long recvId;
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs;
    x10_long i__597;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pplh);
        buf.write(this->recvId);
        buf.write(this->rs);
        buf.write(this->i__597);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__3* storage = ::x10aux::alloc_z<TaskBench__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> that_pplh = buf.read< ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> >();
        x10_long that_recvId = buf.read<x10_long>();
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        x10_long that_i__597 = buf.read<x10_long>();
        TaskBench__closure__3* this_ = new (storage) TaskBench__closure__3(that_pplh, that_recvId, that_rs, that_i__597);
        return this_;
    }
    
    TaskBench__closure__3(::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh, x10_long recvId, ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs, x10_long i__597) : pplh(pplh), recvId(recvId), rs(rs), i__597(i__597) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:77-85";
    }

};

#endif // TASKBENCH__CLOSURE__3_CLOSURE
#ifndef TASKBENCH__CLOSURE__2_CLOSURE
#define TASKBENCH__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TaskBench__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TaskBench__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 71 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pplh1 = pplh->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 72 "TaskBench.x10"
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs =
          (__extension__ ({
            ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* a__393 =
              ::x10aux::nullCheck(pplh1)->FMGL(remoteSend);
            if (!((!::x10aux::struct_equals(a__393, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__645))));
            }
            ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::_make(a__393);
        }))
        ;
        
        //#line 74 "TaskBench.x10"
        x10_long recvId = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
        
        //#line 76 "TaskBench.x10"
        x10_long i__524min__594 = ((x10_long)0ll);
        x10_long i__524max__595 = (((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(pplh1)->FMGL(neighborsRecv))->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__596;
            for (i__596 = i__524min__594; ((i__596) <= (i__524max__595));
                 i__596 = ((i__596) + (((x10_long)1ll)))) {
                x10_long i__597 = i__596;
                
                //#line 77 "TaskBench.x10"
                ::x10::xrx::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::nullCheck(::x10aux::nullCheck(pplh1)->FMGL(neighborsRecv))->x10::lang::Rail< x10_long >::__apply(
                                                                          i__597)),
                                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__3)))TaskBench__closure__3(pplh, recvId, rs, i__597))),
                                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
        
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pplh);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__2* storage = ::x10aux::alloc_z<TaskBench__closure__2>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> that_pplh = buf.read< ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> >();
        TaskBench__closure__2* this_ = new (storage) TaskBench__closure__2(that_pplh);
        return this_;
    }
    
    TaskBench__closure__2(::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh) : pplh(pplh) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:70-87";
    }

};

#endif // TASKBENCH__CLOSURE__2_CLOSURE
#ifndef TASKBENCH__CLOSURE__5_CLOSURE
#define TASKBENCH__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TaskBench__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TaskBench__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 102 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pi = saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 104 "TaskBench.x10"
        x10_long i__546min__598 = ((x10_long)0ll);
        x10_long i__546max__599 = (((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsSend))->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__600;
            for (i__600 = i__546min__598; ((i__600) <= (i__546max__599));
                 i__600 = ((i__600) + (((x10_long)1ll)))) {
                x10_long i__601 = i__600;
                
            }
        }
        
    }
    
    // captured environment
    ::TaskBench* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__5* storage = ::x10aux::alloc_z<TaskBench__closure__5>();
        buf.record_reference(storage);
        ::TaskBench* that_saved_this = buf.read< ::TaskBench*>();
        TaskBench__closure__5* this_ = new (storage) TaskBench__closure__5(that_saved_this);
        return this_;
    }
    
    TaskBench__closure__5(::TaskBench* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:101-107";
    }

};

#endif // TASKBENCH__CLOSURE__5_CLOSURE
#ifndef TASKBENCH__CLOSURE__6_CLOSURE
#define TASKBENCH__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TaskBench__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TaskBench__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 113 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pi = saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        {
            
            //#line 115 "TaskBench.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__629 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::lang::Rail< x10_long >* rail__602 = ::x10aux::nullCheck(pi)->FMGL(neighborsRecv);
                    x10_long i__566min__603 = ((x10_long)0ll);
                    x10_long i__566max__604 = (x10_long)(::x10aux::nullCheck(rail__602)->FMGL(size));
                    {
                        x10_long i__605;
                        for (i__605 = i__566min__603; ((i__605) < (i__566max__604));
                             i__605 = ((i__605) + (((x10_long)1ll))))
                        {
                            x10_long i__606 = i__605;
                            
                            //#line 116 "TaskBench.x10"
                            ::x10::lang::Rail< void >::asyncCopy< x10_double >(
                              ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(remoteSend))->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__apply(
                                i__606), ((x10_long)0ll),
                              ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recv))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                i__606), ((x10_long)0ll),
                              (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recv))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                               i__606))->FMGL(size)));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc3) {
                {
                    ::x10::lang::CheckedThrowable* ct__627 =
                      __exc3;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__627);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__629);
        }
        
        //#line 119 "TaskBench.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(p, (&::TaskBench_Strings::sl__647)), ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recv))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::toString())));
    }
    
    // captured environment
    ::TaskBench* saved_this;
    ::x10::lang::Place p;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->p);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__6* storage = ::x10aux::alloc_z<TaskBench__closure__6>();
        buf.record_reference(storage);
        ::TaskBench* that_saved_this = buf.read< ::TaskBench*>();
        ::x10::lang::Place that_p = buf.read< ::x10::lang::Place>();
        TaskBench__closure__6* this_ = new (storage) TaskBench__closure__6(that_saved_this, that_p);
        return this_;
    }
    
    TaskBench__closure__6(::TaskBench* saved_this, ::x10::lang::Place p) : saved_this(saved_this), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:112-121";
    }

};

#endif // TASKBENCH__CLOSURE__6_CLOSURE

//#line 59 "TaskBench.x10"

//#line 61 "TaskBench.x10"
void TaskBench::_constructor(::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* neighborSendMap,
                             ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* neighborRecvMap) {
    
    //#line 7 "TaskBench.x10"
    this->TaskBench::__fieldInitializers_TaskBench();
    
    //#line 64 "TaskBench.x10"
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh =
      ::x10::lang::PlaceLocalHandle<void>::make< ::TaskBench__PlaceInstance* >(
        ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*> >(sizeof(TaskBench__closure__1)))TaskBench__closure__1(neighborSendMap, neighborRecvMap))));
    
    //#line 67 "TaskBench.x10"
    this->FMGL(plh) = pplh;
    {
        
        //#line 69 "TaskBench.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__618 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__544;
                    for (p__544 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__544));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__544));
                        
                        //#line 70 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__2)))TaskBench__closure__2(pplh))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc0) {
            {
                ::x10::lang::CheckedThrowable* ct__616 = __exc0;
                {
                    ::x10::xrx::Runtime::pushException(ct__616);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__618);
    }
}
::TaskBench* TaskBench::_make(::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* neighborSendMap,
                              ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* neighborRecvMap)
{
    ::TaskBench* this_ = new (::x10aux::alloc_z< ::TaskBench>()) ::TaskBench();
    this_->_constructor(neighborSendMap, neighborRecvMap);
    return this_;
}



//#line 97 "TaskBench.x10"
/** Send values between places
		Steps:
		1. Each place puts data into send rail
		2. Places get data from other places via remoteSend
		3. Perform local operation on data
	*/
void TaskBench::sendAndRecv() {
    {
        
        //#line 100 "TaskBench.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__625 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__564;
                    for (p__564 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__564));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__564));
                        
                        //#line 101 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__5)))TaskBench__closure__5(this))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc2) {
            {
                ::x10::lang::CheckedThrowable* ct__623 = __exc2;
                {
                    ::x10::xrx::Runtime::pushException(ct__623);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__625);
    }
    
    //#line 111 "TaskBench.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Place>* p__585;
        for (p__585 = ::x10::lang::Place::places()->iterator();
             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__585));
             ) {
            ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__585));
            
            //#line 112 "TaskBench.x10"
            ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__6)))TaskBench__closure__6(this, p))),
                                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
    }
    
}

//#line 126 "TaskBench.x10"
::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* TaskBench::makeMap(
  ) {
    
    //#line 127 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* map =
      ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make();
    
    //#line 128 "TaskBench.x10"
    return map;
    
}

//#line 131 "TaskBench.x10"
void TaskBench::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 132 "TaskBench.x10"
    x10_long argc = (x10_long)(::x10aux::nullCheck(args)->FMGL(size));
    
}

//#line 7 "TaskBench.x10"
::TaskBench* TaskBench::TaskBench____this__TaskBench() {
    return this;
    
}
void TaskBench::__fieldInitializers_TaskBench() {
 
}
const ::x10aux::serialization_id_t TaskBench::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::TaskBench::_deserializer);

void TaskBench::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(plh));
    
}

::x10::lang::Reference* ::TaskBench::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::TaskBench* this_ = new (::x10aux::alloc_z< ::TaskBench>()) ::TaskBench();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void TaskBench::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> >();
}

::x10aux::RuntimeType TaskBench::rtt;
void TaskBench::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("TaskBench",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String TaskBench_Strings::sl__647(" ");
::x10::lang::String TaskBench_Strings::sl__645("!(a$393 != null)");
::x10::lang::String TaskBench_Strings::sl__646("!(a$405 != null)");

::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*>::itable<TaskBench__closure__1>TaskBench__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__closure__1::__apply, &TaskBench__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*> >, &TaskBench__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__closure__1::_deserialize);

::x10::lang::VoidFun_0_0::itable<TaskBench__closure__4>TaskBench__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__closure__4::__apply, &TaskBench__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TaskBench__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__closure__4::_deserialize);
const ::x10aux::serialization_id_t TaskBench__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TaskBench__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<TaskBench__closure__3>TaskBench__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__closure__3::__apply, &TaskBench__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TaskBench__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__closure__3::_deserialize);
const ::x10aux::serialization_id_t TaskBench__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TaskBench__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<TaskBench__closure__2>TaskBench__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__closure__2::__apply, &TaskBench__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TaskBench__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__closure__2::_deserialize);
const ::x10aux::serialization_id_t TaskBench__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TaskBench__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<TaskBench__closure__5>TaskBench__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__closure__5::__apply, &TaskBench__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TaskBench__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__closure__5::_deserialize);
const ::x10aux::serialization_id_t TaskBench__closure__5::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TaskBench__closure__5::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<TaskBench__closure__6>TaskBench__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__closure__6::__apply, &TaskBench__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TaskBench__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__closure__6::_deserialize);
const ::x10aux::serialization_id_t TaskBench__closure__6::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TaskBench__closure__6::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of TaskBench */
/*************************************************/
/*************************************************/
/* START of TaskBench$PlaceInstance */
#include <TaskBench__PlaceInstance.h>

#include <x10/lang/Double.h>
#include <x10/lang/GlobalRail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Place.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef TASKBENCH__PLACEINSTANCE__CLOSURE__7_CLOSURE
#define TASKBENCH__PLACEINSTANCE__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class TaskBench__PlaceInstance__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TaskBench__PlaceInstance__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_double >* __apply(x10_long i){
        return ::x10::lang::Rail< x10_double >::_make(((x10_long)1ll));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__PlaceInstance__closure__7* storage = ::x10aux::alloc_z<TaskBench__PlaceInstance__closure__7>();
        buf.record_reference(storage);
        TaskBench__PlaceInstance__closure__7* this_ = new (storage) TaskBench__PlaceInstance__closure__7();
        return this_;
    }
    
    TaskBench__PlaceInstance__closure__7() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:49";
    }

};

#endif // TASKBENCH__PLACEINSTANCE__CLOSURE__7_CLOSURE
#ifndef TASKBENCH__PLACEINSTANCE__CLOSURE__8_CLOSURE
#define TASKBENCH__PLACEINSTANCE__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class TaskBench__PlaceInstance__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TaskBench__PlaceInstance__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_double >* __apply(x10_long i){
        return ::x10::lang::Rail< x10_double >::_make(((x10_long)1ll));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__PlaceInstance__closure__8* storage = ::x10aux::alloc_z<TaskBench__PlaceInstance__closure__8>();
        buf.record_reference(storage);
        TaskBench__PlaceInstance__closure__8* this_ = new (storage) TaskBench__PlaceInstance__closure__8();
        return this_;
    }
    
    TaskBench__PlaceInstance__closure__8() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:50";
    }

};

#endif // TASKBENCH__PLACEINSTANCE__CLOSURE__8_CLOSURE

//#line 15 "TaskBench.x10"

//#line 18 "TaskBench.x10"

//#line 21 "TaskBench.x10"

//#line 24 "TaskBench.x10"

//#line 27 "TaskBench.x10"

//#line 33 "TaskBench.x10"
/** return index for sender neighbor in this send rail */
x10_long TaskBench__PlaceInstance::getSenderIndex(x10_long recvId) {
    
    //#line 34 "TaskBench.x10"
    x10_long i__506min__586 = ((x10_long)0ll);
    x10_long i__506max__587 = (((x10_long)(::x10aux::nullCheck(this->FMGL(neighborsSend))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__588;
        for (i__588 = i__506min__586; ((i__588) <= (i__506max__587)); i__588 =
                                                                        ((i__588) + (((x10_long)1ll))))
        {
            x10_long i__589 = i__588;
            
            //#line 35 "TaskBench.x10"
            if ((::x10aux::struct_equals(recvId, ::x10aux::nullCheck(this->FMGL(neighborsSend))->x10::lang::Rail< x10_long >::__apply(
                                                   i__589))))
            {
                
                //#line 36 "TaskBench.x10"
                return i__589;
                
            }
            
        }
    }
    
    //#line 39 "TaskBench.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::TaskBench__PlaceInstance_Strings::sl__655), recvId), (&::TaskBench__PlaceInstance_Strings::sl__656)), ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))));
    
    //#line 40 "TaskBench.x10"
    return ((x10_long)-1ll);
    
}

//#line 43 "TaskBench.x10"
void TaskBench__PlaceInstance::_constructor(::x10::lang::Rail< x10_long >* neighborsSend,
                                            ::x10::lang::Rail< x10_long >* neighborsRecv) {
    
    //#line 12 "TaskBench.x10"
    this->TaskBench__PlaceInstance::__fieldInitializers_TaskBench_PlaceInstance();
    
    //#line 45 "TaskBench.x10"
    this->FMGL(neighborsSend) = neighborsSend;
    
    //#line 46 "TaskBench.x10"
    this->FMGL(neighborsRecv) = neighborsRecv;
    
    //#line 49 "TaskBench.x10"
    this->FMGL(send) = ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(neighborsSend)->FMGL(size)),
                                                                                    reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TaskBench__PlaceInstance__closure__7)))TaskBench__PlaceInstance__closure__7())));
    
    //#line 50 "TaskBench.x10"
    this->FMGL(recv) = ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv)->FMGL(size)),
                                                                                    reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TaskBench__PlaceInstance__closure__8)))TaskBench__PlaceInstance__closure__8())));
    
    //#line 52 "TaskBench.x10"
    ::x10::lang::GlobalRail<x10_double> plchldr = ::x10::lang::GlobalRail<x10_double>::_make(::x10::lang::Rail< x10_double >::_make(((x10_long)0ll)));
    
    //#line 53 "TaskBench.x10"
    this->FMGL(remoteSend) = ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv)->FMGL(size)),
                                                                                             plchldr);
}
::TaskBench__PlaceInstance* TaskBench__PlaceInstance::_make(
  ::x10::lang::Rail< x10_long >* neighborsSend, ::x10::lang::Rail< x10_long >* neighborsRecv)
{
    ::TaskBench__PlaceInstance* this_ = new (::x10aux::alloc_z< ::TaskBench__PlaceInstance>()) ::TaskBench__PlaceInstance();
    this_->_constructor(neighborsSend, neighborsRecv);
    return this_;
}



//#line 12 "TaskBench.x10"
::TaskBench__PlaceInstance* TaskBench__PlaceInstance::TaskBench__PlaceInstance____this__TaskBench__PlaceInstance(
  ) {
    return this;
    
}
void TaskBench__PlaceInstance::__fieldInitializers_TaskBench_PlaceInstance(
  ) {
 
}
const ::x10aux::serialization_id_t TaskBench__PlaceInstance::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::TaskBench__PlaceInstance::_deserializer);

void TaskBench__PlaceInstance::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(send));
    buf.write(this->FMGL(recv));
    buf.write(this->FMGL(remoteSend));
    buf.write(this->FMGL(neighborsSend));
    buf.write(this->FMGL(neighborsRecv));
    
}

::x10::lang::Reference* ::TaskBench__PlaceInstance::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::TaskBench__PlaceInstance* this_ = new (::x10aux::alloc_z< ::TaskBench__PlaceInstance>()) ::TaskBench__PlaceInstance();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void TaskBench__PlaceInstance::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(send) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>();
    FMGL(recv) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>();
    FMGL(remoteSend) = buf.read< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >*>();
    FMGL(neighborsSend) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(neighborsRecv) = buf.read< ::x10::lang::Rail< x10_long >*>();
}

::x10aux::RuntimeType TaskBench__PlaceInstance::rtt;
void TaskBench__PlaceInstance::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("TaskBench.PlaceInstance",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String TaskBench__PlaceInstance_Strings::sl__655("Could not find sender ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__656(" in neighborsSend of ");

::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TaskBench__PlaceInstance__closure__7>TaskBench__PlaceInstance__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__PlaceInstance__closure__7::__apply, &TaskBench__PlaceInstance__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__PlaceInstance__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >, &TaskBench__PlaceInstance__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__PlaceInstance__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__PlaceInstance__closure__7::_deserialize);

::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TaskBench__PlaceInstance__closure__8>TaskBench__PlaceInstance__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__PlaceInstance__closure__8::__apply, &TaskBench__PlaceInstance__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__PlaceInstance__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >, &TaskBench__PlaceInstance__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__PlaceInstance__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__PlaceInstance__closure__8::_deserialize);

/* END of TaskBench$PlaceInstance */
/*************************************************/
