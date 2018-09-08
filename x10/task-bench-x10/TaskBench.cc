/*************************************************/
/* START of TaskBench */
#include <TaskBench.h>

#include <x10/util/Pair.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Rail.h>
#include <TaskBench__PlaceInstance.h>
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
#include <x10/lang/GlobalRef.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Native.h>
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
        
        //#line 131 "TaskBench.x10"
        ::TaskBench__PlaceInstance* alloc__2952 =  (new (::x10aux::alloc_z< ::TaskBench__PlaceInstance>()) ::TaskBench__PlaceInstance());
        (alloc__2952)->::TaskBench__PlaceInstance::_constructor(dsets, dsetForTimestep,
                                                                (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(dsets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::__apply(
                                                                                                 ((x10_long)0ll)))->FMGL(size)));
        return alloc__2952;
        
    }
    
    // captured environment
    ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets;
    ::x10::lang::Rail< x10_long >* dsetForTimestep;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->dsets);
        buf.write(this->dsetForTimestep);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__1* storage = ::x10aux::alloc_z<TaskBench__closure__1>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* that_dsets = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >*>();
        ::x10::lang::Rail< x10_long >* that_dsetForTimestep = buf.read< ::x10::lang::Rail< x10_long >*>();
        TaskBench__closure__1* this_ = new (storage) TaskBench__closure__1(that_dsets, that_dsetForTimestep);
        return this_;
    }
    
    TaskBench__closure__1(::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets, ::x10::lang::Rail< x10_long >* dsetForTimestep) : dsets(dsets), dsetForTimestep(dsetForTimestep) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*> >(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:130-132";
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
        
        //#line 151 "TaskBench.x10"
        rs__2962->x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::__apply()->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__set(
          i__2961, rsr__2956);
    }
    
    // captured environment
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__2962;
    x10_long i__2961;
    ::x10::lang::GlobalRail<x10_double> rsr__2956;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->rs__2962);
        buf.write(this->i__2961);
        buf.write(this->rsr__2956);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__4* storage = ::x10aux::alloc_z<TaskBench__closure__4>();
        buf.record_reference(storage);
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs__2962 = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        x10_long that_i__2961 = buf.read<x10_long>();
        ::x10::lang::GlobalRail<x10_double> that_rsr__2956 = buf.read< ::x10::lang::GlobalRail<x10_double> >();
        TaskBench__closure__4* this_ = new (storage) TaskBench__closure__4(that_rs__2962, that_i__2961, that_rsr__2956);
        return this_;
    }
    
    TaskBench__closure__4(::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__2962, x10_long i__2961, ::x10::lang::GlobalRail<x10_double> rsr__2956) : rs__2962(rs__2962), i__2961(i__2961), rsr__2956(rsr__2956) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:150-152";
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
        
        //#line 147 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pplh__2954 = pplh->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 148 "TaskBench.x10"
        x10_long sendIndex__2955 = ::x10aux::nullCheck(pplh__2954)->getSenderIndex(
                                     recvId__2965, ((ts__2969) - (((x10_long)1ll))));
        
        //#line 149 "TaskBench.x10"
        ::x10::lang::GlobalRail<x10_double> rsr__2956 = (__extension__ ({
            ::x10::lang::Rail< x10_double >* a__2957 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pplh__2954)->FMGL(sendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                             ((ts__2969) - (((x10_long)1ll)))))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                         sendIndex__2955);
            if (!((!::x10aux::struct_equals(a__2957, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__3036))));
            }
            (__extension__ ({
                ::x10::lang::GlobalRail<x10_double> alloc__2958 =
                   ::x10::lang::GlobalRail<x10_double>::_alloc();
                (alloc__2958)->::x10::lang::GlobalRail<x10_double>::_constructor(
                  a__2957);
                alloc__2958;
            }))
            ;
        }))
        ;
        
        //#line 150 "TaskBench.x10"
        ::x10::xrx::Runtime::runAsync(::x10::lang::Place::_make((rs__2962->FMGL(rail))->location),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__4)))TaskBench__closure__4(rs__2962, i__2961, rsr__2956))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh;
    x10_long recvId__2965;
    x10_long ts__2969;
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__2962;
    x10_long i__2961;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pplh);
        buf.write(this->recvId__2965);
        buf.write(this->ts__2969);
        buf.write(this->rs__2962);
        buf.write(this->i__2961);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__3* storage = ::x10aux::alloc_z<TaskBench__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> that_pplh = buf.read< ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> >();
        x10_long that_recvId__2965 = buf.read<x10_long>();
        x10_long that_ts__2969 = buf.read<x10_long>();
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs__2962 = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        x10_long that_i__2961 = buf.read<x10_long>();
        TaskBench__closure__3* this_ = new (storage) TaskBench__closure__3(that_pplh, that_recvId__2965, that_ts__2969, that_rs__2962, that_i__2961);
        return this_;
    }
    
    TaskBench__closure__3(::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh, x10_long recvId__2965, x10_long ts__2969, ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__2962, x10_long i__2961) : pplh(pplh), recvId__2965(recvId__2965), ts__2969(ts__2969), rs__2962(rs__2962), i__2961(i__2961) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:146-153";
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
        
        //#line 137 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pplh1 = pplh->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 139 "TaskBench.x10"
        x10_long i__1595max__2967 = (((x10_long)(::x10aux::nullCheck(dsetForTimestep)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__2968;
            for (i__2968 = ((x10_long)1ll); ((i__2968) <= (i__1595max__2967));
                 i__2968 = ((i__2968) + (((x10_long)1ll)))) {
                x10_long ts__2969 = i__2968;
                
                //#line 140 "TaskBench.x10"
                ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__2962 =
                  (__extension__ ({
                    ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* a__2963 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(pplh1)->FMGL(remoteSendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::__apply(
                        i__2968);
                    if (!((!::x10aux::struct_equals(a__2963,
                                                    reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__3035))));
                    }
                    (__extension__ ({
                        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > alloc__2964 =
                           ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::_alloc();
                        (alloc__2964)->::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::_constructor(
                          a__2963);
                        alloc__2964;
                    }))
                    ;
                }))
                ;
                
                //#line 142 "TaskBench.x10"
                x10_long recvId__2965 = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
                
                //#line 143 "TaskBench.x10"
                ::x10::lang::Rail< x10_long >* neighborsRecv__2966 =
                  ::x10aux::nullCheck(::x10aux::nullCheck(pplh1)->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                    i__2968);
                
                //#line 145 "TaskBench.x10"
                x10_long i__1577max__2959 = (((x10_long)(::x10aux::nullCheck(neighborsRecv__2966)->FMGL(size))) - (((x10_long)1ll)));
                {
                    x10_long i__2960;
                    for (i__2960 = ((x10_long)0ll); ((i__2960) <= (i__1577max__2959));
                         i__2960 = ((i__2960) + (((x10_long)1ll))))
                    {
                        x10_long i__2961 = i__2960;
                        
                        //#line 146 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync((__extension__ ({
                                                          ::x10::lang::Place alloc__2953 =
                                                            
                                                          ::x10::lang::Place::_alloc();
                                                          (alloc__2953)->::x10::lang::Place::_constructor(
                                                            ::x10aux::nullCheck(neighborsRecv__2966)->x10::lang::Rail< x10_long >::__apply(
                                                              i__2961));
                                                          alloc__2953;
                                                      }))
                                                      , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__3)))TaskBench__closure__3(pplh, recvId__2965, ts__2969, rs__2962, i__2961))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh;
    ::x10::lang::Rail< x10_long >* dsetForTimestep;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pplh);
        buf.write(this->dsetForTimestep);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__2* storage = ::x10aux::alloc_z<TaskBench__closure__2>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> that_pplh = buf.read< ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> >();
        ::x10::lang::Rail< x10_long >* that_dsetForTimestep = buf.read< ::x10::lang::Rail< x10_long >*>();
        TaskBench__closure__2* this_ = new (storage) TaskBench__closure__2(that_pplh, that_dsetForTimestep);
        return this_;
    }
    
    TaskBench__closure__2(::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh, ::x10::lang::Rail< x10_long >* dsetForTimestep) : pplh(pplh), dsetForTimestep(dsetForTimestep) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:136-156";
    }

};

#endif // TASKBENCH__CLOSURE__2_CLOSURE
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
        
        //#line 183 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pi__2972 = saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 184 "TaskBench.x10"
        ::x10aux::nullCheck(pi__2972)->getRecvIndex(sendId__2970, ((ts__2984) + (((x10_long)1ll))));
    }
    
    // captured environment
    ::TaskBench* saved_this;
    x10_long sendId__2970;
    x10_long ts__2984;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->sendId__2970);
        buf.write(this->ts__2984);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__6* storage = ::x10aux::alloc_z<TaskBench__closure__6>();
        buf.record_reference(storage);
        ::TaskBench* that_saved_this = buf.read< ::TaskBench*>();
        x10_long that_sendId__2970 = buf.read<x10_long>();
        x10_long that_ts__2984 = buf.read<x10_long>();
        TaskBench__closure__6* this_ = new (storage) TaskBench__closure__6(that_saved_this, that_sendId__2970, that_ts__2984);
        return this_;
    }
    
    TaskBench__closure__6(::TaskBench* saved_this, x10_long sendId__2970, x10_long ts__2984) : saved_this(saved_this), sendId__2970(sendId__2970), ts__2984(ts__2984) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:182-186";
    }

};

#endif // TASKBENCH__CLOSURE__6_CLOSURE
#ifndef TASKBENCH__CLOSURE__7_CLOSURE
#define TASKBENCH__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TaskBench__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TaskBench__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 193 "TaskBench.x10"
        if ((((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                     ts__2984))->x10::lang::Rail< x10_long >::__apply(
                 i__2981)) >= (::x10aux::nullCheck(saved_this->FMGL(offsetForTimesteps))->x10::lang::Rail< x10_long >::__apply(
                                 ((ts__2984) - (((x10_long)1ll)))))) &&
            ((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                    ts__2984))->x10::lang::Rail< x10_long >::__apply(
                i__2981)) < (((::x10aux::nullCheck(saved_this->FMGL(offsetForTimesteps))->x10::lang::Rail< x10_long >::__apply(
                                 ((ts__2984) - (((x10_long)1ll))))) + (::x10aux::nullCheck(saved_this->FMGL(widthForTimesteps))->x10::lang::Rail< x10_long >::__apply(
                                                                         ((ts__2984) - (((x10_long)1ll))))))))))
        {
            
            //#line 197 "TaskBench.x10"
            ::x10::lang::Rail< void >::asyncCopy< x10_double >(
              ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(remoteSendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::__apply(
                                    ts__2984))->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__apply(
                i__2981), ((x10_long)0ll), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recvRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                 ts__2984))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                             i__2981), ((x10_long)0ll),
              (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recvRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                   ts__2984))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                               i__2981))->FMGL(size)));
        }
        
    }
    
    // captured environment
    ::TaskBench__PlaceInstance* pi;
    x10_long ts__2984;
    x10_long i__2981;
    ::TaskBench* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pi);
        buf.write(this->ts__2984);
        buf.write(this->i__2981);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__7* storage = ::x10aux::alloc_z<TaskBench__closure__7>();
        buf.record_reference(storage);
        ::TaskBench__PlaceInstance* that_pi = buf.read< ::TaskBench__PlaceInstance*>();
        x10_long that_ts__2984 = buf.read<x10_long>();
        x10_long that_i__2981 = buf.read<x10_long>();
        ::TaskBench* that_saved_this = buf.read< ::TaskBench*>();
        TaskBench__closure__7* this_ = new (storage) TaskBench__closure__7(that_pi, that_ts__2984, that_i__2981, that_saved_this);
        return this_;
    }
    
    TaskBench__closure__7(::TaskBench__PlaceInstance* pi, x10_long ts__2984, x10_long i__2981, ::TaskBench* saved_this) : pi(pi), ts__2984(ts__2984), i__2981(i__2981), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:192-200";
    }

};

#endif // TASKBENCH__CLOSURE__7_CLOSURE
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
        
        //#line 174 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pi = saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 175 "TaskBench.x10"
        x10_long i__1655max__2982 = (((x10_long)(::x10aux::nullCheck(saved_this->FMGL(dsetForTimestep))->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__2983;
            for (i__2983 = ((x10_long)0ll); ((i__2983) <= (i__1655max__2982));
                 i__2983 = ((i__2983) + (((x10_long)1ll)))) {
                x10_long ts__2984 = i__2983;
                
                //#line 178 "TaskBench.x10"
                if (((i__2983) < ((((x10_long)(::x10aux::nullCheck(saved_this->FMGL(dsetForTimestep))->FMGL(size))) - (((x10_long)1ll))))))
                {
                    
                    //#line 179 "TaskBench.x10"
                    ::x10::lang::Rail< x10_long >* rail__2974 = ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                                  i__2983);
                    x10_long i__1617max__2975 = (x10_long)(::x10aux::nullCheck(rail__2974)->FMGL(size));
                    {
                        x10_long i__2976;
                        for (i__2976 = ((x10_long)0ll); ((i__2976) < (i__1617max__2975));
                             i__2976 = ((i__2976) + (((x10_long)1ll))))
                        {
                            x10_long sendNeighbor__2977 =
                              i__2976;
                            
                            //#line 180 "TaskBench.x10"
                            ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(sendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                      ts__2984))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                  i__2976))->x10::lang::Rail< x10_double >::__set(
                              ((x10_long)0ll), ((x10_double) (ts__2984)));
                            
                            //#line 181 "TaskBench.x10"
                            x10_long sendId__2970 = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
                            {
                                
                                //#line 182 "TaskBench.x10"
                                ::x10::xrx::Runtime::runAt(
                                  (__extension__ ({
                                      ::x10::lang::Place alloc__2971 =
                                         ::x10::lang::Place::_alloc();
                                      (alloc__2971)->::x10::lang::Place::_constructor(
                                        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                              ts__2984))->x10::lang::Rail< x10_long >::__apply(
                                          sendNeighbor__2977));
                                      alloc__2971;
                                  }))
                                  , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__6)))TaskBench__closure__6(saved_this, sendId__2970, ts__2984))),
                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                    }
                    
                }
                
                //#line 191 "TaskBench.x10"
                if (((ts__2984) > (((x10_long)0ll)))) {
                    {
                        
                        //#line 192 "TaskBench.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__3015 =
                          ::x10::xrx::Runtime::startFinish();
                        try {
                            {
                                ::x10::lang::Rail< x10_long >* rail__2978 =
                                  ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                    ts__2984);
                                x10_long i__1636max__2979 =
                                  (x10_long)(::x10aux::nullCheck(rail__2978)->FMGL(size));
                                {
                                    x10_long i__2980;
                                    for (i__2980 = ((x10_long)0ll);
                                         ((i__2980) < (i__1636max__2979));
                                         i__2980 = ((i__2980) + (((x10_long)1ll))))
                                    {
                                        x10_long i__2981 =
                                          i__2980;
                                        ::x10::xrx::Runtime::runAsync(
                                          reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__7)))TaskBench__closure__7(pi, ts__2984, i__2981, saved_this))));
                                    }
                                }
                                
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc3) {
                            {
                                ::x10::lang::CheckedThrowable* ct__3013 =
                                  __exc3;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__3013);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__3015);
                    }
                }
                
                //#line 202 "TaskBench.x10"
                saved_this->kernelExecute(saved_this->FMGL(kernel)->FMGL(first),
                                          saved_this->FMGL(kernel)->FMGL(second));
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
        return "TaskBench.x10:173-204";
    }

};

#endif // TASKBENCH__CLOSURE__5_CLOSURE

//#line 106 "TaskBench.x10"

//#line 108 "TaskBench.x10"

//#line 110 "TaskBench.x10"

//#line 112 "TaskBench.x10"

//#line 114 "TaskBench.x10"

//#line 116 "TaskBench.x10"

//#line 118 "TaskBench.x10"

//#line 120 "TaskBench.x10"
void TaskBench::_constructor(::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets,
                             ::x10::lang::Rail< x10_long >* dsetForTimestep,
                             ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> widthOffsets,
                             ::x10::util::Pair<x10_int, x10_long> kernel) {
    
    //#line 122 "TaskBench.x10"
    this->FMGL(dependenceSets) = dsets;
    
    //#line 123 "TaskBench.x10"
    this->FMGL(dsetForTimestep) = dsetForTimestep;
    
    //#line 124 "TaskBench.x10"
    this->FMGL(widthForTimesteps) = widthOffsets->FMGL(first);
    
    //#line 125 "TaskBench.x10"
    this->FMGL(offsetForTimesteps) = widthOffsets->FMGL(second);
    
    //#line 126 "TaskBench.x10"
    this->FMGL(kernel) = kernel;
    
    //#line 127 "TaskBench.x10"
    this->FMGL(maxWidth) = (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dependenceSets))->x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::__apply(
                                                            ((x10_long)0ll)))->FMGL(size));
    
    //#line 130 "TaskBench.x10"
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh =
      ::x10::lang::PlaceLocalHandle<void>::make< ::TaskBench__PlaceInstance* >(
        ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*> >(sizeof(TaskBench__closure__1)))TaskBench__closure__1(dsets, dsetForTimestep))));
    
    //#line 133 "TaskBench.x10"
    this->FMGL(plh) = pplh;
    {
        
        //#line 135 "TaskBench.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__3007 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__1615;
                    for (p__1615 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__1615));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__1615));
                        
                        //#line 136 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__2)))TaskBench__closure__2(pplh, dsetForTimestep))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc0) {
            {
                ::x10::lang::CheckedThrowable* ct__3005 =
                  __exc0;
                {
                    ::x10::xrx::Runtime::pushException(ct__3005);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__3007);
    }
}
::TaskBench* TaskBench::_make(::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets,
                              ::x10::lang::Rail< x10_long >* dsetForTimestep,
                              ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> widthOffsets,
                              ::x10::util::Pair<x10_int, x10_long> kernel)
{
    ::TaskBench* this_ = new (::x10aux::alloc_z< ::TaskBench>()) ::TaskBench();
    this_->_constructor(dsets, dsetForTimestep, widthOffsets,
    kernel);
    return this_;
}



//#line 160 "TaskBench.x10"
void TaskBench::kernelExecute(x10_int kernelType, x10_long iterations) {
    
			kernel_t k;
			k.type = kernel_type_t(kernelType);
			k.iterations = *((long*)&iterations);
			Kernel kernel(k);
			kernel.execute();
		
}

//#line 170 "TaskBench.x10"
void TaskBench::executeTaskGraph() {
    {
        
        //#line 172 "TaskBench.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__3022 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__1673;
                    for (p__1673 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__1673));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__1673));
                        
                        //#line 173 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__5)))TaskBench__closure__5(this))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc4) {
            {
                ::x10::lang::CheckedThrowable* ct__3020 =
                  __exc4;
                {
                    ::x10::xrx::Runtime::pushException(ct__3020);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__3022);
    }
}

//#line 208 "TaskBench.x10"
x10_double TaskBench::getTime() {
    
			return ((x10_double) Timer::get_cur_time());
		
}

//#line 214 "TaskBench.x10"
x10_double TaskBench::executeTaskBench(x10_int argc, ::x10::lang::Rail< ::x10::lang::String* >* argRail) {
    
    //#line 215 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >* taskGraphDependenceSets;
    
    //#line 216 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* timeStepMaps;
    
    //#line 217 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* widthsOffsetsRail;
    
    //#line 218 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::util::Pair<x10_int, x10_long> >* kernels;
    
			char **argv = new char *[argc];
			for (int i = 0; i < argc; i++) {
				x10::lang::String str = *((*argRail)[i]);
				x10_int strSize = str.length();
				char *result = new char[strSize+1];
				for (int j = 0; j < strSize; j++) { 
					x10_char c = (str).charAt(j);
					char *ch = (char *)&c;
					result[j] = *ch;
				}
				result[strSize] = '\0';
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
			// taskGraphDependenceSets = new Rail[Rail[Rail[Pair[Rail[Long], Rail[Long]]]]];
			taskGraphDependenceSets = ::x10::lang::Rail< 
				::x10::lang::Rail< 
					::x10::lang::Rail< 
						::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> 
					>*
				>* 
			>::_make((x10_long)graphs.size());
			// timeStepMaps = new Rail[Rail[Long]](graphs.size());
			timeStepMaps = ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(graphs.size());
      		// widthsOffsetsRail = new Rail[Pair(Rail[Long], Rail[Long])](graphs.size());
			widthsOffsetsRail = ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::_make((x10_long)graphs.size());
      		// kernels = new Rail[Pair[Int, Long]]();
			kernels = ::x10::lang::Rail< ::x10::util::Pair< x10_int, x10_long > >::_make((x10_long)graphs.size());

			for (int tgi = 0; tgi < graphs.size(); ++tgi) {
				TaskGraph tg = graphs.at(tgi);

      			// KERNEL
      			auto kernel = tg.kernel;
      			auto kernelType = kernel.type;
      			long iterations = kernel.iterations;
      			// val kernelPair = new Pair(kernelType, iterations);
      			::x10::util::Pair< x10_int, x10_long > kernelPair = 
      				::x10::util::Pair< x10_int, x10_long >::_make((x10_int)kernelType, (x10_long)iterations);
      			// kernels(tgi) = kernel;
      			::x10aux::nullCheck(kernels)->
					x10::lang::Rail< ::x10::util::Pair< x10_int, x10_long > >::__set((x10_long)tgi, kernelPair);

				// DEPENDENCE SETS
				// val dependenceSets = new Rail[Rail[Pair[Rail[Long], Rail[Long]]]](tg.timestep_period());
				::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dependenceSets =
					::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, 
					::x10::lang::Rail< x10_long >*> >* >::_make((x10_long)tg.timestep_period());

				// DEPENDENCE SETS FOR TIMESTEPS
				// val dependenceSetsForTimesteps = new Rail[Long](tg.timesteps);
				::x10::lang::Rail< x10_long >* dependenceSetsForTimesteps = 
					::x10::lang::Rail< x10_long >::_make(tg.timesteps);

				// WIDTHS AND OFFSETS
				// val widths = new Rail[Long](tg.timesteps);
      			::x10::lang::Rail< x10_long >* widths = ::x10::lang::Rail< x10_long >::_make((x10_long)tg.timesteps);
      			// val offsets = new Rail[Long](tg.timesteps);
      			::x10::lang::Rail< x10_long >* offsets = ::x10::lang::Rail< x10_long >::_make((x10_long)tg.timesteps);

				
				for (long ts = 0; ts < tg.timestep_period(); ts++) {
					// DEPENDENCE SETS
					long dset = tg.dependence_set_at_timestep(ts);
					// val dependenceSet = new Rail[Pair[Rail[Long], Rail[Long]]](tg.max_width);
					::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* dependenceSet =
						::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::_make(((x10_long)tg.max_width));
					for (long point = 0; point < tg.max_width; ++point) {
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

				for (long ts = 0; ts < tg.timesteps; ++ts) {
					// DEPENDENCE SETS FOR TIMESTEPS
					// dependenceSetsForTimesteps(ts) = tg.dependence_set_at_timestep(ts);
					::x10aux::nullCheck(dependenceSetsForTimesteps)->
						x10::lang::Rail< x10_long >::__set(((x10_long)ts), ((x10_long)tg.dependence_set_at_timestep(ts)));

					// WIDTHS AND OFFSETS
					// widths(ts) = tg.width_at_timestep(ts);
      				::x10aux::nullCheck(widths)->
						x10::lang::Rail< x10_long >::__set((x10_long)ts, (x10_long)tg.width_at_timestep(ts));
      				// offsets(ts) = tg.offset_at_timestep(ts);
					::x10aux::nullCheck(offsets)->
						x10::lang::Rail< x10_long >::__set(((x10_long)ts), ((x10_long)tg.offset_at_timestep(ts)));
				}

				// DEPENDENCE SETS
				// taskGraphDependenceSets(tgi) = dependenceSets;
				::x10aux::nullCheck(taskGraphDependenceSets)->
				x10::lang::Rail< x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >::
						__set(tgi, dependenceSets);

				// DEPENDENCE SETS FOR TIMESTEPS
				// timeStepMaps(tgi) = dependenceSetsForTimesteps;
				::x10aux::nullCheck(timeStepMaps)->
						x10::lang::Rail< x10::lang::Rail< x10_long >* >::__set(((x10_long)tgi), dependenceSetsForTimesteps);

				// WIDTHS AND OFFSETS
				// val widthOffsetPair = new Pair(widths, offsets);
      			::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> widthOffsetPair =
					::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*>::_make(widths, offsets);
				// widthsOffsetsRail(tgi) = widthOffsetPair;
				::x10aux::nullCheck(widthsOffsetsRail)->
					x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::__set((x10_long)tgi, widthOffsetPair);
			}
		
    
    //#line 385 "TaskBench.x10"
    x10_double start = ::TaskBench::getTime();
    
    //#line 386 "TaskBench.x10"
    x10_long i__1675max__2990 = (((x10_long)(::x10aux::nullCheck(taskGraphDependenceSets)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__2991;
        for (i__2991 = ((x10_long)0ll); ((i__2991) <= (i__1675max__2990));
             i__2991 = ((i__2991) + (((x10_long)1ll)))) {
            
            //#line 387 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets__2985 =
              ::x10aux::nullCheck(taskGraphDependenceSets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >::__apply(
                i__2991);
            
            //#line 388 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* dsetForTimestep__2986 =
              ::x10aux::nullCheck(timeStepMaps)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                i__2991);
            
            //#line 389 "TaskBench.x10"
            ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> widthsOffsets__2987 =
              ::x10aux::nullCheck(widthsOffsetsRail)->x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::__apply(
                i__2991);
            
            //#line 390 "TaskBench.x10"
            ::x10::util::Pair<x10_int, x10_long> kernel__2988 =
              ::x10aux::nullCheck(kernels)->x10::lang::Rail< ::x10::util::Pair<x10_int, x10_long> >::__apply(
                i__2991);
            
            //#line 391 "TaskBench.x10"
            ::TaskBench* taskBench__2989 =  (new (::x10aux::alloc_z< ::TaskBench>()) ::TaskBench());
            (taskBench__2989)->::TaskBench::_constructor(
              dsets__2985, dsetForTimestep__2986, widthsOffsets__2987,
              kernel__2988);
            
            //#line 392 "TaskBench.x10"
            taskBench__2989->executeTaskGraph();
        }
    }
    
    //#line 394 "TaskBench.x10"
    x10_double end = ::TaskBench::getTime();
    
    //#line 395 "TaskBench.x10"
    return ((end) - (start));
    
}

//#line 398 "TaskBench.x10"
void TaskBench::appReport(x10_int argc, ::x10::lang::Rail< ::x10::lang::String* >* argRail,
                          x10_double time) {
    
			char **argv = new char *[argc];
			for (int i = 0; i < argc; i++) {
				x10::lang::String str = *((*argRail)[i]);
				x10_int strSize = str.length();
				char *result = new char[strSize+1];
				for (int j = 0; j < strSize; j++) { 
					x10_char c = (str).charAt(j);
					char *ch = (char *)&c;
					result[j] = *ch;
				}
				result[strSize] = '\0';
				argv[i] = result;
			}
			App app(argc, argv);
			// app.display();
			// cleanup allocated arrays
			for (int i = 0; i < argc; i++) {
				delete [] argv[i];
			}
			delete [] argv;

			app.report_timing(time);
		
}

//#line 425 "TaskBench.x10"
::x10::lang::Rail< ::x10::lang::String* >* TaskBench::constructCPPArgs(
  ::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 426 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* argv = ::x10::lang::Rail< ::x10::lang::String* >::_make((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) + (((x10_long)1ll))));
    
    //#line 427 "TaskBench.x10"
    argv->x10::lang::Rail< ::x10::lang::String* >::__set(
      ((x10_long)0ll), (&::TaskBench_Strings::sl__3037));
    
    //#line 428 "TaskBench.x10"
    x10_long i__1693max__2993 = (x10_long)(::x10aux::nullCheck(args)->FMGL(size));
    {
        x10_long i__2994;
        for (i__2994 = ((x10_long)1ll); ((i__2994) <= (i__1693max__2993));
             i__2994 = ((i__2994) + (((x10_long)1ll)))) {
            
            //#line 429 "TaskBench.x10"
            argv->x10::lang::Rail< ::x10::lang::String* >::__set(
              i__2994, ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                         ((i__2994) - (((x10_long)1ll)))));
        }
    }
    
    //#line 431 "TaskBench.x10"
    return argv;
    
}

//#line 434 "TaskBench.x10"
void TaskBench::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 435 "TaskBench.x10"
    x10_int argc = ((x10_int) ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) + (((x10_long)1ll)))));
    
    //#line 436 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* argv = ::TaskBench::constructCPPArgs(
                                                        args);
    
    //#line 437 "TaskBench.x10"
    x10_double time = ::TaskBench::executeTaskBench(argc,
                                                    argv);
    
    //#line 438 "TaskBench.x10"
    ::TaskBench::appReport(argc, argv, time);
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
    buf.write(this->FMGL(dependenceSets));
    buf.write(this->FMGL(dsetForTimestep));
    buf.write(this->FMGL(widthForTimesteps));
    buf.write(this->FMGL(offsetForTimesteps));
    buf.write(this->FMGL(maxWidth));
    buf.write(this->FMGL(kernel));
    buf.write(this->FMGL(plh));
    
}

::x10::lang::Reference* ::TaskBench::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::TaskBench* this_ = new (::x10aux::alloc_z< ::TaskBench>()) ::TaskBench();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void TaskBench::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(dependenceSets) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >*>();
    FMGL(dsetForTimestep) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(widthForTimesteps) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(offsetForTimesteps) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(maxWidth) = buf.read<x10_long>();
    FMGL(kernel) = buf.read< ::x10::util::Pair<x10_int, x10_long> >();
    FMGL(plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> >();
}

::x10aux::RuntimeType TaskBench::rtt;
void TaskBench::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("TaskBench",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String TaskBench_Strings::sl__3037("");
::x10::lang::String TaskBench_Strings::sl__3036("!(a$1349 != null)");
::x10::lang::String TaskBench_Strings::sl__3035("!(a$1323 != null)");

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

::x10::lang::VoidFun_0_0::itable<TaskBench__closure__6>TaskBench__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__closure__6::__apply, &TaskBench__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TaskBench__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__closure__6::_deserialize);

::x10::lang::VoidFun_0_0::itable<TaskBench__closure__7>TaskBench__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__closure__7::__apply, &TaskBench__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TaskBench__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__closure__7::_deserialize);
const ::x10aux::serialization_id_t TaskBench__closure__7::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TaskBench__closure__7::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<TaskBench__closure__5>TaskBench__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__closure__5::__apply, &TaskBench__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TaskBench__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__closure__5::_deserialize);
const ::x10aux::serialization_id_t TaskBench__closure__5::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TaskBench__closure__5::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

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
#include <x10/util/Pair.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef TASKBENCH__PLACEINSTANCE__CLOSURE__8_CLOSURE
#define TASKBENCH__PLACEINSTANCE__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class TaskBench__PlaceInstance__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TaskBench__PlaceInstance__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_double >* __apply(x10_long i__2943){
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
        return "TaskBench.x10:89";
    }

};

#endif // TASKBENCH__PLACEINSTANCE__CLOSURE__8_CLOSURE
#ifndef TASKBENCH__PLACEINSTANCE__CLOSURE__9_CLOSURE
#define TASKBENCH__PLACEINSTANCE__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class TaskBench__PlaceInstance__closure__9 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TaskBench__PlaceInstance__closure__9> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_double >* __apply(x10_long i__2945){
        return ::x10::lang::Rail< x10_double >::_make(((x10_long)1ll), -1.0);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__PlaceInstance__closure__9* storage = ::x10aux::alloc_z<TaskBench__PlaceInstance__closure__9>();
        buf.record_reference(storage);
        TaskBench__PlaceInstance__closure__9* this_ = new (storage) TaskBench__PlaceInstance__closure__9();
        return this_;
    }
    
    TaskBench__PlaceInstance__closure__9() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:90";
    }

};

#endif // TASKBENCH__PLACEINSTANCE__CLOSURE__9_CLOSURE

//#line 20 "TaskBench.x10"

//#line 23 "TaskBench.x10"

//#line 26 "TaskBench.x10"

//#line 29 "TaskBench.x10"

//#line 32 "TaskBench.x10"

//#line 38 "TaskBench.x10"

//#line 43 "TaskBench.x10"
/** used for pushing to neighbors */
x10_long TaskBench__PlaceInstance::getSenderIndex(x10_long recvId, x10_long timestep) {
    
    //#line 44 "TaskBench.x10"
    ::x10::lang::Rail< x10_long >* neighborsSend = ::x10aux::nullCheck(this->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                     timestep);
    
    //#line 45 "TaskBench.x10"
    x10_long i__1523max__2931 = (((x10_long)(::x10aux::nullCheck(neighborsSend)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__2932;
        for (i__2932 = ((x10_long)0ll); ((i__2932) <= (i__1523max__2931));
             i__2932 = ((i__2932) + (((x10_long)1ll)))) {
            
            //#line 46 "TaskBench.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(neighborsSend)->x10::lang::Rail< x10_long >::__apply(
                                           i__2932), recvId)))
            {
                
                //#line 47 "TaskBench.x10"
                return i__2932;
                
            }
            
        }
    }
    
    //#line 50 "TaskBench.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::TaskBench__PlaceInstance_Strings::sl__3069), recvId), (&::TaskBench__PlaceInstance_Strings::sl__3070)), ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)), (&::TaskBench__PlaceInstance_Strings::sl__3071)), timestep)));
    
    //#line 51 "TaskBench.x10"
    return ((x10_long)-1ll);
    
}

//#line 54 "TaskBench.x10"
x10_long TaskBench__PlaceInstance::getRecvIndex(x10_long sendId,
                                                x10_long timestep) {
    
    //#line 55 "TaskBench.x10"
    ::x10::lang::Rail< x10_long >* neighborsRecv = ::x10aux::nullCheck(this->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                     timestep);
    
    //#line 56 "TaskBench.x10"
    x10_long i__1541max__2934 = (((x10_long)(::x10aux::nullCheck(neighborsRecv)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__2935;
        for (i__2935 = ((x10_long)0ll); ((i__2935) <= (i__1541max__2934));
             i__2935 = ((i__2935) + (((x10_long)1ll)))) {
            
            //#line 57 "TaskBench.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(neighborsRecv)->x10::lang::Rail< x10_long >::__apply(
                                           i__2935), sendId)))
            {
                
                //#line 58 "TaskBench.x10"
                return i__2935;
                
            }
            
        }
    }
    
    //#line 61 "TaskBench.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::TaskBench__PlaceInstance_Strings::sl__3072), sendId), (&::TaskBench__PlaceInstance_Strings::sl__3070)), ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)), (&::TaskBench__PlaceInstance_Strings::sl__3071)), timestep)));
    
    //#line 62 "TaskBench.x10"
    return ((x10_long)-1ll);
    
}

//#line 72 "TaskBench.x10"
void TaskBench__PlaceInstance::_constructor(::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dependenceSets,
                                            ::x10::lang::Rail< x10_long >* dsetForTimestep,
                                            x10_long maxWidth) {
    
    //#line 74 "TaskBench.x10"
    x10_long timesteps = (x10_long)(::x10aux::nullCheck(dsetForTimestep)->FMGL(size));
    
    //#line 75 "TaskBench.x10"
    this->FMGL(timestep) = ((x10_long)0ll);
    
    //#line 76 "TaskBench.x10"
    this->FMGL(neighborsRecvRails) = ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(timesteps);
    
    //#line 77 "TaskBench.x10"
    this->FMGL(neighborsSendRails) = ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(timesteps);
    
    //#line 78 "TaskBench.x10"
    this->FMGL(recvRails) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::_make(timesteps);
    
    //#line 79 "TaskBench.x10"
    this->FMGL(sendRails) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::_make(timesteps);
    
    //#line 80 "TaskBench.x10"
    this->FMGL(remoteSendRails) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::_make(timesteps);
    
    //#line 84 "TaskBench.x10"
    x10_long i__1559max__2948 = ((timesteps) - (((x10_long)1ll)));
    {
        x10_long i__2949;
        for (i__2949 = ((x10_long)0ll); ((i__2949) <= (i__1559max__2948));
             i__2949 = ((i__2949) + (((x10_long)1ll)))) {
            x10_long ts__2950 = i__2949;
            
            //#line 85 "TaskBench.x10"
            x10_long dset__2938 = ::x10aux::nullCheck(dsetForTimestep)->x10::lang::Rail< x10_long >::__apply(
                                    i__2949);
            
            //#line 86 "TaskBench.x10"
            ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> dependencePair__2939 =
              ::x10aux::nullCheck(::x10aux::nullCheck(dependenceSets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::__apply(
                                    dset__2938))->x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::__apply(
                ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
            
            //#line 87 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* neighborsSend__2940 =
              dependencePair__2939->FMGL(first);
            
            //#line 88 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* neighborsRecv__2941 =
              dependencePair__2939->FMGL(second);
            
            //#line 89 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* recv__2942 =
              ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv__2941)->FMGL(size)),
                                                                           reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TaskBench__PlaceInstance__closure__8)))TaskBench__PlaceInstance__closure__8())));
            
            //#line 90 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* send__2944 =
              ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(neighborsSend__2940)->FMGL(size)),
                                                                           reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TaskBench__PlaceInstance__closure__9)))TaskBench__PlaceInstance__closure__9())));
            
            //#line 91 "TaskBench.x10"
            ::x10::lang::GlobalRail<x10_double> plchldr__2946 =
               ::x10::lang::GlobalRail<x10_double>::_alloc();
            (plchldr__2946)->::x10::lang::GlobalRail<x10_double>::_constructor(
              ::x10::lang::Rail< x10_double >::_make(((x10_long)0ll)));
            
            //#line 92 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* remoteSend__2947 =
              ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv__2941)->FMGL(size)),
                                                                              plchldr__2946);
            
            //#line 94 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
              ts__2950, neighborsSend__2940);
            
            //#line 95 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
              ts__2950, neighborsRecv__2941);
            
            //#line 96 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(recvRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__set(
              ts__2950, recv__2942);
            
            //#line 97 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(sendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__set(
              ts__2950, send__2944);
            
            //#line 98 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(remoteSendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::__set(
              ts__2950, remoteSend__2947);
        }
    }
    
}
::TaskBench__PlaceInstance* TaskBench__PlaceInstance::_make(
  ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dependenceSets,
  ::x10::lang::Rail< x10_long >* dsetForTimestep, x10_long maxWidth)
{
    ::TaskBench__PlaceInstance* this_ = new (::x10aux::alloc_z< ::TaskBench__PlaceInstance>()) ::TaskBench__PlaceInstance();
    this_->_constructor(dependenceSets, dsetForTimestep, maxWidth);
    return this_;
}



//#line 17 "TaskBench.x10"
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
    buf.write(this->FMGL(sendRails));
    buf.write(this->FMGL(recvRails));
    buf.write(this->FMGL(remoteSendRails));
    buf.write(this->FMGL(neighborsSendRails));
    buf.write(this->FMGL(neighborsRecvRails));
    buf.write(this->FMGL(timestep));
    
}

::x10::lang::Reference* ::TaskBench__PlaceInstance::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::TaskBench__PlaceInstance* this_ = new (::x10aux::alloc_z< ::TaskBench__PlaceInstance>()) ::TaskBench__PlaceInstance();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void TaskBench__PlaceInstance::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(sendRails) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >*>();
    FMGL(recvRails) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >*>();
    FMGL(remoteSendRails) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >*>();
    FMGL(neighborsSendRails) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >*>();
    FMGL(neighborsRecvRails) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >*>();
    FMGL(timestep) = buf.read<x10_long>();
}

::x10aux::RuntimeType TaskBench__PlaceInstance::rtt;
void TaskBench__PlaceInstance::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("TaskBench.PlaceInstance",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String TaskBench__PlaceInstance_Strings::sl__3070(" FOR ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__3069("UNABLE TO FIND RECEIVER: ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__3072("UNABLE TO FIND SENDER: ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__3071(" AT TIMESTEP ");

::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TaskBench__PlaceInstance__closure__8>TaskBench__PlaceInstance__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__PlaceInstance__closure__8::__apply, &TaskBench__PlaceInstance__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__PlaceInstance__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >, &TaskBench__PlaceInstance__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__PlaceInstance__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__PlaceInstance__closure__8::_deserialize);

::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TaskBench__PlaceInstance__closure__9>TaskBench__PlaceInstance__closure__9::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__PlaceInstance__closure__9::__apply, &TaskBench__PlaceInstance__closure__9::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__PlaceInstance__closure__9::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >, &TaskBench__PlaceInstance__closure__9::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__PlaceInstance__closure__9::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__PlaceInstance__closure__9::_deserialize);

/* END of TaskBench$PlaceInstance */
/*************************************************/
