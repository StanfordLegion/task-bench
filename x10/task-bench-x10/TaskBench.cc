/*************************************************/
/* START of TaskBench */
#include <TaskBench.h>

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
        
        //#line 69 "TaskBench.x10"
        return ::TaskBench__PlaceInstance::_make(::x10aux::nullCheck(dependenceSet)->x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::__apply(
                                                   ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))->FMGL(first),
                                                 ::x10aux::nullCheck(dependenceSet)->x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::__apply(
                                                   ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))->FMGL(second));
        
    }
    
    // captured environment
    ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* dependenceSet;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->dependenceSet);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__1* storage = ::x10aux::alloc_z<TaskBench__closure__1>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* that_dependenceSet = buf.read< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >*>();
        TaskBench__closure__1* this_ = new (storage) TaskBench__closure__1(that_dependenceSet);
        return this_;
    }
    
    TaskBench__closure__1(::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* dependenceSet) : dependenceSet(dependenceSet) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*> >(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:68-70";
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
        
        //#line 87 "TaskBench.x10"
        rs->x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::__apply()->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__set(
          i__765, rsr__760);
    }
    
    // captured environment
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs;
    x10_long i__765;
    ::x10::lang::GlobalRail<x10_double> rsr__760;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->rs);
        buf.write(this->i__765);
        buf.write(this->rsr__760);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__4* storage = ::x10aux::alloc_z<TaskBench__closure__4>();
        buf.record_reference(storage);
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        x10_long that_i__765 = buf.read<x10_long>();
        ::x10::lang::GlobalRail<x10_double> that_rsr__760 = buf.read< ::x10::lang::GlobalRail<x10_double> >();
        TaskBench__closure__4* this_ = new (storage) TaskBench__closure__4(that_rs, that_i__765, that_rsr__760);
        return this_;
    }
    
    TaskBench__closure__4(::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs, x10_long i__765, ::x10::lang::GlobalRail<x10_double> rsr__760) : rs(rs), i__765(i__765), rsr__760(rsr__760) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:86-88";
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
        
        //#line 83 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pplh__758 = pplh->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 84 "TaskBench.x10"
        x10_long sendIndex__759 = ::x10aux::nullCheck(pplh__758)->getSenderIndex(
                                    recvId);
        
        //#line 85 "TaskBench.x10"
        ::x10::lang::GlobalRail<x10_double> rsr__760 = (__extension__ ({
            ::x10::lang::Rail< x10_double >* a__761 = ::x10aux::nullCheck(::x10aux::nullCheck(pplh__758)->FMGL(send))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                        sendIndex__759);
            if (!((!::x10aux::struct_equals(a__761, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__818))));
            }
            ::x10::lang::GlobalRail<x10_double>::_make(a__761);
        }))
        ;
        
        //#line 86 "TaskBench.x10"
        ::x10::xrx::Runtime::runAsync(rs->x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::home(),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__4)))TaskBench__closure__4(rs, i__765, rsr__760))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh;
    x10_long recvId;
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs;
    x10_long i__765;
    
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
        buf.write(this->i__765);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__3* storage = ::x10aux::alloc_z<TaskBench__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> that_pplh = buf.read< ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> >();
        x10_long that_recvId = buf.read<x10_long>();
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        x10_long that_i__765 = buf.read<x10_long>();
        TaskBench__closure__3* this_ = new (storage) TaskBench__closure__3(that_pplh, that_recvId, that_rs, that_i__765);
        return this_;
    }
    
    TaskBench__closure__3(::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh, x10_long recvId, ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs, x10_long i__765) : pplh(pplh), recvId(recvId), rs(rs), i__765(i__765) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:81-89";
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
        
        //#line 75 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pplh1 = pplh->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 76 "TaskBench.x10"
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs =
          (__extension__ ({
            ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* a__508 =
              ::x10aux::nullCheck(pplh1)->FMGL(remoteSend);
            if (!((!::x10aux::struct_equals(a__508, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__817))));
            }
            ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::_make(a__508);
        }))
        ;
        
        //#line 78 "TaskBench.x10"
        x10_long recvId = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
        
        //#line 80 "TaskBench.x10"
        x10_long i__674min__762 = ((x10_long)0ll);
        x10_long i__674max__763 = (((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(pplh1)->FMGL(neighborsRecv))->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__764;
            for (i__764 = i__674min__762; ((i__764) <= (i__674max__763));
                 i__764 = ((i__764) + (((x10_long)1ll)))) {
                x10_long i__765 = i__764;
                
                //#line 81 "TaskBench.x10"
                ::x10::xrx::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::nullCheck(::x10aux::nullCheck(pplh1)->FMGL(neighborsRecv))->x10::lang::Rail< x10_long >::__apply(
                                                                          i__765)),
                                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__3)))TaskBench__closure__3(pplh, recvId, rs, i__765))),
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
        return "TaskBench.x10:74-91";
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
        
        //#line 106 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pi = saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 108 "TaskBench.x10"
        x10_long i__696min__766 = ((x10_long)0ll);
        x10_long i__696max__767 = (((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsSend))->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__768;
            for (i__768 = i__696min__766; ((i__768) <= (i__696max__767));
                 i__768 = ((i__768) + (((x10_long)1ll)))) {
                x10_long i__769 = i__768;
                
                //#line 110 "TaskBench.x10"
                ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(send))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__set(
                  i__769, ::TaskBench::FMGL(data__get)());
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
        return "TaskBench.x10:105-112";
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
        
        //#line 118 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pi = saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        {
            
            //#line 120 "TaskBench.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__801 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::lang::Rail< x10_long >* rail__770 = ::x10aux::nullCheck(pi)->FMGL(neighborsRecv);
                    x10_long i__716min__771 = ((x10_long)0ll);
                    x10_long i__716max__772 = (x10_long)(::x10aux::nullCheck(rail__770)->FMGL(size));
                    {
                        x10_long i__773;
                        for (i__773 = i__716min__771; ((i__773) < (i__716max__772));
                             i__773 = ((i__773) + (((x10_long)1ll))))
                        {
                            x10_long i__774 = i__773;
                            
                            //#line 121 "TaskBench.x10"
                            ::x10::lang::Rail< void >::asyncCopy< x10_double >(
                              ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(remoteSend))->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__apply(
                                i__774), ((x10_long)0ll),
                              ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recv))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                i__774), ((x10_long)0ll),
                              (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recv))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                               i__774))->FMGL(size)));
                            
                            //#line 122 "TaskBench.x10"
                            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::TaskBench_Strings::sl__819)), ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsRecv))->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                                                          i__774))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc4) {
                {
                    ::x10::lang::CheckedThrowable* ct__799 =
                      __exc4;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__799);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__801);
        }
        
        //#line 125 "TaskBench.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(p, (&::TaskBench_Strings::sl__820)), ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recv))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::toString())));
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
        return "TaskBench.x10:117-127";
    }

};

#endif // TASKBENCH__CLOSURE__6_CLOSURE

//#line 61 "TaskBench.x10"
::x10::lang::Rail< x10_double >* TaskBench::FMGL(data);
void TaskBench::FMGL(data__do_init)() {
    FMGL(data__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: TaskBench.data");
    ::x10::lang::Rail< x10_double >* __var0__ = ::x10::lang::Rail< x10_double >::_make(((x10_long)1ll),
                                                                                       1.0);
    FMGL(data) = __var0__;
    FMGL(data__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void TaskBench::FMGL(data__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(data__status), &FMGL(data__do_init), &FMGL(data__exception), "TaskBench.data");
    
}
volatile ::x10aux::StaticInitController::status TaskBench::FMGL(data__status);
::x10::lang::CheckedThrowable* TaskBench::FMGL(data__exception);


//#line 63 "TaskBench.x10"

//#line 65 "TaskBench.x10"
void TaskBench::_constructor(::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* dependenceSet) {
    
    //#line 9 "TaskBench.x10"
    this->TaskBench::__fieldInitializers_TaskBench();
    
    //#line 68 "TaskBench.x10"
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh =
      ::x10::lang::PlaceLocalHandle<void>::make< ::TaskBench__PlaceInstance* >(
        ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*> >(sizeof(TaskBench__closure__1)))TaskBench__closure__1(dependenceSet))));
    
    //#line 71 "TaskBench.x10"
    this->FMGL(plh) = pplh;
    {
        
        //#line 73 "TaskBench.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__790 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__694;
                    for (p__694 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__694));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__694));
                        
                        //#line 74 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__2)))TaskBench__closure__2(pplh))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1) {
            {
                ::x10::lang::CheckedThrowable* ct__788 = __exc1;
                {
                    ::x10::xrx::Runtime::pushException(ct__788);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__790);
    }
}
::TaskBench* TaskBench::_make(::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* dependenceSet)
{
    ::TaskBench* this_ = new (::x10aux::alloc_z< ::TaskBench>()) ::TaskBench();
    this_->_constructor(dependenceSet);
    return this_;
}



//#line 101 "TaskBench.x10"
/** Send values between places
		Steps:
		1. Each place puts data into send rail
		2. Places get data from other places via remoteSend
		3. Perform local operation on data
	*/
void TaskBench::sendAndRecv() {
    {
        
        //#line 104 "TaskBench.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__797 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__714;
                    for (p__714 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__714));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__714));
                        
                        //#line 105 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__5)))TaskBench__closure__5(this))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc3) {
            {
                ::x10::lang::CheckedThrowable* ct__795 = __exc3;
                {
                    ::x10::xrx::Runtime::pushException(ct__795);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__797);
    }
    
    //#line 116 "TaskBench.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Place>* p__735;
        for (p__735 = ::x10::lang::Place::places()->iterator();
             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__735));
             ) {
            ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__735));
            
            //#line 117 "TaskBench.x10"
            ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__6)))TaskBench__closure__6(this, p))),
                                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
    }
    
}

//#line 132 "TaskBench.x10"
::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >*
  TaskBench::dependenceSetsFromCore(x10_int argc, ::x10::lang::Rail< ::x10::lang::String* >* argRail) {
    
			char **argv = new char *[argc];
			for (int i = 0; i < argc; i++) {
				x10::lang::String str = *((*argRail)[i]);
				x10_int strSize = str.length();
				char *result = new char[strSize];
				for (int j = 0; j < strSize; j++) { 
					x10_char c = (str).charAt(j);
					char *ch = (char *)&c;
					result[j] = *ch;
				}
				argv[i] = result;
			}
			App app(argc, argv);
			app.display();
			// cleanup allocated arrays
			for (int i = 0; i < argc; i++) {
				delete [] argv[i];
			}
			delete [] argv;
			
			std::vector<TaskGraph> graphs = app.graphs;
			TaskGraph tg = graphs.at(0);
			// val dependenceSets = new Rail[Rail[Pair[Rail[Long], Rail[Long]]]](tg.timestep_period());
			::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dependenceSets =
				::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, 
				::x10::lang::Rail< x10_long >*> >* >::_make((x10_long)tg.timestep_period());
			for (long ts = 0; ts < tg.timestep_period(); ts++) {
				long dset = tg.dependence_set_at_timestep(ts);
				// val dependenceSet = new Rail[Pair[Rail[Long], Rail[Long]]](tg.max_width);
				::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* dependenceSet =
					::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::_make(((x10_long)tg.max_width));
				for (long point = tg.offset_at_timestep(ts); point < tg.offset_at_timestep(ts) + tg.width_at_timestep(ts); point++) {
					auto dependencies = tg.dependencies(dset, point);
					auto reverseDependencies = tg.reverse_dependencies(dset, point);
					int depsSize = 0;
					for (auto p : dependencies) {
						for (long dp = p.first; dp <= p.second; ++dp) {
							++depsSize;
						}
					}
					int revDepsSize = 0;
					for (auto rp : reverseDependencies) {
						for (long rdp = rp.first; rdp <= rp.second; ++rdp) {
							++revDepsSize;
						}
					}
					// var deps:Rail[Long] = new Rail[Long](depsSize);
					x10::lang::Rail< x10_long >* deps = ::x10::lang::Rail< x10_long >::_make((x10_long)depsSize);
					// var revDeps:Rail[Long] = new Rail[Long](depsSize);
					x10::lang::Rail< x10_long >* revDeps = ::x10::lang::Rail< x10_long >::_make((x10_long)revDepsSize);
					int i = 0;
					for (auto p : dependencies) {
						for (long dp = p.first; dp <= p.second; ++dp) {
							// deps(i) = dp;
							::x10aux::nullCheck(deps)->x10::lang::Rail< x10_long >::__set(((x10_long)i), ((x10_long)dp));
							++i;
						}
					}
					i = 0;
					for (auto rp : reverseDependencies) {
						for (long rdp = rp.first; rdp <= rp.second; rdp++) {
							// revDeps(i) = rdp
							::x10aux::nullCheck(revDeps)->x10::lang::Rail< x10_long >::__set(((x10_long)i), ((x10_long)rdp));
							++i;
						}
					}
					// val dependencePair = new Pair(deps, revDeps);
					::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> dependencePair =
						::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*>::_make(deps, revDeps);
					// dependenceSet(point) = dependencePair;
					::x10aux::nullCheck(dependenceSet)->x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::
						__set(point, dependencePair);

				}
				// dependenceSets(ts) = dependenceSet;
				::x10aux::nullCheck(dependenceSets)->
				x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::
						__set(ts, dependenceSet);
			}
			return dependenceSets;
		
}

//#line 217 "TaskBench.x10"
::x10::lang::Rail< ::x10::lang::String* >* TaskBench::constructCPPArgs(
  ::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 218 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* argv = ::x10::lang::Rail< ::x10::lang::String* >::_make((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) + (((x10_long)1ll))));
    
    //#line 219 "TaskBench.x10"
    argv->x10::lang::Rail< ::x10::lang::String* >::__set(
      ((x10_long)0ll), (&::TaskBench_Strings::sl__821));
    
    //#line 220 "TaskBench.x10"
    x10_long i__737min__775 = ((x10_long)1ll);
    x10_long i__737max__776 = (x10_long)(::x10aux::nullCheck(args)->FMGL(size));
    {
        x10_long i__777;
        for (i__777 = i__737min__775; ((i__777) <= (i__737max__776));
             i__777 = ((i__777) + (((x10_long)1ll)))) {
            x10_long i__778 = i__777;
            
            //#line 221 "TaskBench.x10"
            argv->x10::lang::Rail< ::x10::lang::String* >::__set(
              i__778, ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                        ((i__778) - (((x10_long)1ll)))));
        }
    }
    
    //#line 223 "TaskBench.x10"
    return argv;
    
}

//#line 226 "TaskBench.x10"
void TaskBench::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 227 "TaskBench.x10"
    x10_int argc = ((x10_int) ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) + (((x10_long)1ll)))));
    
    //#line 228 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* argv = ::TaskBench::constructCPPArgs(
                                                        args);
    
    //#line 229 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dependenceSets =
      ::TaskBench::dependenceSetsFromCore(argc, argv);
    
    //#line 230 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* dependenceSet =
      ::x10aux::nullCheck(dependenceSets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::__apply(
        ((x10_long)0ll));
    
    //#line 231 "TaskBench.x10"
    ::TaskBench* task_bench = ::TaskBench::_make(dependenceSet);
    
    //#line 232 "TaskBench.x10"
    task_bench->sendAndRecv();
}

//#line 9 "TaskBench.x10"
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

::x10::lang::String TaskBench_Strings::sl__820(" ");
::x10::lang::String TaskBench_Strings::sl__821("");
::x10::lang::String TaskBench_Strings::sl__818("!(a$520 != null)");
::x10::lang::String TaskBench_Strings::sl__819(" RECEIVED FROM ");
::x10::lang::String TaskBench_Strings::sl__817("!(a$508 != null)");

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
        return "TaskBench.x10:51";
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
        return "TaskBench.x10:52";
    }

};

#endif // TASKBENCH__PLACEINSTANCE__CLOSURE__8_CLOSURE

//#line 17 "TaskBench.x10"

//#line 20 "TaskBench.x10"

//#line 23 "TaskBench.x10"

//#line 26 "TaskBench.x10"

//#line 29 "TaskBench.x10"

//#line 35 "TaskBench.x10"
/** return index for sender neighbor in this send rail */
x10_long TaskBench__PlaceInstance::getSenderIndex(x10_long recvId) {
    
    //#line 36 "TaskBench.x10"
    x10_long i__656min__754 = ((x10_long)0ll);
    x10_long i__656max__755 = (((x10_long)(::x10aux::nullCheck(this->FMGL(neighborsSend))->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__756;
        for (i__756 = i__656min__754; ((i__756) <= (i__656max__755)); i__756 =
                                                                        ((i__756) + (((x10_long)1ll))))
        {
            x10_long i__757 = i__756;
            
            //#line 37 "TaskBench.x10"
            if ((::x10aux::struct_equals(recvId, ::x10aux::nullCheck(this->FMGL(neighborsSend))->x10::lang::Rail< x10_long >::__apply(
                                                   i__757))))
            {
                
                //#line 38 "TaskBench.x10"
                return i__757;
                
            }
            
        }
    }
    
    //#line 41 "TaskBench.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::TaskBench__PlaceInstance_Strings::sl__832), recvId), (&::TaskBench__PlaceInstance_Strings::sl__833)), ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))));
    
    //#line 42 "TaskBench.x10"
    return ((x10_long)-1ll);
    
}

//#line 45 "TaskBench.x10"
void TaskBench__PlaceInstance::_constructor(::x10::lang::Rail< x10_long >* neighborsRecv,
                                            ::x10::lang::Rail< x10_long >* neighborsSend) {
    
    //#line 14 "TaskBench.x10"
    this->TaskBench__PlaceInstance::__fieldInitializers_TaskBench_PlaceInstance();
    
    //#line 47 "TaskBench.x10"
    this->FMGL(neighborsRecv) = neighborsRecv;
    
    //#line 48 "TaskBench.x10"
    this->FMGL(neighborsSend) = neighborsSend;
    
    //#line 51 "TaskBench.x10"
    this->FMGL(recv) = ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv)->FMGL(size)),
                                                                                    reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TaskBench__PlaceInstance__closure__7)))TaskBench__PlaceInstance__closure__7())));
    
    //#line 52 "TaskBench.x10"
    this->FMGL(send) = ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(neighborsSend)->FMGL(size)),
                                                                                    reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TaskBench__PlaceInstance__closure__8)))TaskBench__PlaceInstance__closure__8())));
    
    //#line 54 "TaskBench.x10"
    ::x10::lang::GlobalRail<x10_double> plchldr = ::x10::lang::GlobalRail<x10_double>::_make(::x10::lang::Rail< x10_double >::_make(((x10_long)0ll)));
    
    //#line 55 "TaskBench.x10"
    this->FMGL(remoteSend) = ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv)->FMGL(size)),
                                                                                             plchldr);
}
::TaskBench__PlaceInstance* TaskBench__PlaceInstance::_make(
  ::x10::lang::Rail< x10_long >* neighborsRecv, ::x10::lang::Rail< x10_long >* neighborsSend)
{
    ::TaskBench__PlaceInstance* this_ = new (::x10aux::alloc_z< ::TaskBench__PlaceInstance>()) ::TaskBench__PlaceInstance();
    this_->_constructor(neighborsRecv, neighborsSend);
    return this_;
}



//#line 14 "TaskBench.x10"
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

::x10::lang::String TaskBench__PlaceInstance_Strings::sl__832("Could not find sender ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__833(" in neighborsSend of ");

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
