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
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Finalization.h>
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
        ::TaskBench__PlaceInstance* alloc__3196 =  (new (::x10aux::alloc_z< ::TaskBench__PlaceInstance>()) ::TaskBench__PlaceInstance());
        (alloc__3196)->::TaskBench__PlaceInstance::_constructor(dsets, dsetForTimestep,
                                                                (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(dsets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::__apply(
                                                                                                 ((x10_long)0ll)))->FMGL(size)));
        return alloc__3196;
        
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
        rs__3206->x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::__apply()->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__set(
          i__3205, rsr__3200);
    }
    
    // captured environment
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__3206;
    x10_long i__3205;
    ::x10::lang::GlobalRail<x10_double> rsr__3200;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->rs__3206);
        buf.write(this->i__3205);
        buf.write(this->rsr__3200);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__4* storage = ::x10aux::alloc_z<TaskBench__closure__4>();
        buf.record_reference(storage);
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs__3206 = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        x10_long that_i__3205 = buf.read<x10_long>();
        ::x10::lang::GlobalRail<x10_double> that_rsr__3200 = buf.read< ::x10::lang::GlobalRail<x10_double> >();
        TaskBench__closure__4* this_ = new (storage) TaskBench__closure__4(that_rs__3206, that_i__3205, that_rsr__3200);
        return this_;
    }
    
    TaskBench__closure__4(::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__3206, x10_long i__3205, ::x10::lang::GlobalRail<x10_double> rsr__3200) : rs__3206(rs__3206), i__3205(i__3205), rsr__3200(rsr__3200) { }
    
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
        ::TaskBench__PlaceInstance* pplh__3198 = pplh->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 148 "TaskBench.x10"
        x10_long sendIndex__3199 = ::x10aux::nullCheck(pplh__3198)->getSenderIndex(
                                     recvId__3209, ((ts__3213) - (((x10_long)1ll))));
        
        //#line 149 "TaskBench.x10"
        ::x10::lang::GlobalRail<x10_double> rsr__3200 = (__extension__ ({
            ::x10::lang::Rail< x10_double >* a__3201 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pplh__3198)->FMGL(sendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                             ((ts__3213) - (((x10_long)1ll)))))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                         sendIndex__3199);
            if (!((!::x10aux::struct_equals(a__3201, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__3309))));
            }
            (__extension__ ({
                ::x10::lang::GlobalRail<x10_double> alloc__3202 =
                   ::x10::lang::GlobalRail<x10_double>::_alloc();
                (alloc__3202)->::x10::lang::GlobalRail<x10_double>::_constructor(
                  a__3201);
                alloc__3202;
            }))
            ;
        }))
        ;
        
        //#line 150 "TaskBench.x10"
        ::x10::xrx::Runtime::runAsync(::x10::lang::Place::_make((rs__3206->FMGL(rail))->location),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__4)))TaskBench__closure__4(rs__3206, i__3205, rsr__3200))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh;
    x10_long recvId__3209;
    x10_long ts__3213;
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__3206;
    x10_long i__3205;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pplh);
        buf.write(this->recvId__3209);
        buf.write(this->ts__3213);
        buf.write(this->rs__3206);
        buf.write(this->i__3205);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__3* storage = ::x10aux::alloc_z<TaskBench__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> that_pplh = buf.read< ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> >();
        x10_long that_recvId__3209 = buf.read<x10_long>();
        x10_long that_ts__3213 = buf.read<x10_long>();
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs__3206 = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        x10_long that_i__3205 = buf.read<x10_long>();
        TaskBench__closure__3* this_ = new (storage) TaskBench__closure__3(that_pplh, that_recvId__3209, that_ts__3213, that_rs__3206, that_i__3205);
        return this_;
    }
    
    TaskBench__closure__3(::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh, x10_long recvId__3209, x10_long ts__3213, ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__3206, x10_long i__3205) : pplh(pplh), recvId__3209(recvId__3209), ts__3213(ts__3213), rs__3206(rs__3206), i__3205(i__3205) { }
    
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
        x10_long i__1816max__3211 = (((x10_long)(::x10aux::nullCheck(dsetForTimestep)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__3212;
            for (i__3212 = ((x10_long)1ll); ((i__3212) <= (i__1816max__3211));
                 i__3212 = ((i__3212) + (((x10_long)1ll)))) {
                x10_long ts__3213 = i__3212;
                
                //#line 140 "TaskBench.x10"
                ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__3206 =
                  (__extension__ ({
                    ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* a__3207 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(pplh1)->FMGL(remoteSendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::__apply(
                        i__3212);
                    if (!((!::x10aux::struct_equals(a__3207,
                                                    reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__3308))));
                    }
                    (__extension__ ({
                        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > alloc__3208 =
                           ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::_alloc();
                        (alloc__3208)->::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::_constructor(
                          a__3207);
                        alloc__3208;
                    }))
                    ;
                }))
                ;
                
                //#line 142 "TaskBench.x10"
                x10_long recvId__3209 = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
                
                //#line 143 "TaskBench.x10"
                ::x10::lang::Rail< x10_long >* neighborsRecv__3210 =
                  ::x10aux::nullCheck(::x10aux::nullCheck(pplh1)->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                    i__3212);
                
                //#line 145 "TaskBench.x10"
                x10_long i__1798max__3203 = (((x10_long)(::x10aux::nullCheck(neighborsRecv__3210)->FMGL(size))) - (((x10_long)1ll)));
                {
                    x10_long i__3204;
                    for (i__3204 = ((x10_long)0ll); ((i__3204) <= (i__1798max__3203));
                         i__3204 = ((i__3204) + (((x10_long)1ll))))
                    {
                        x10_long i__3205 = i__3204;
                        
                        //#line 146 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync((__extension__ ({
                                                          ::x10::lang::Place alloc__3197 =
                                                            
                                                          ::x10::lang::Place::_alloc();
                                                          (alloc__3197)->::x10::lang::Place::_constructor(
                                                            ::x10aux::nullCheck(neighborsRecv__3210)->x10::lang::Rail< x10_long >::__apply(
                                                              i__3205));
                                                          alloc__3197;
                                                      }))
                                                      , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__3)))TaskBench__closure__3(pplh, recvId__3209, ts__3213, rs__3206, i__3205))),
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
        ::TaskBench__PlaceInstance* pi__3216 = saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 184 "TaskBench.x10"
        x10_long recvIndex__3217 = ::x10aux::nullCheck(pi__3216)->getRecvIndex(
                                     sendId__3214, ((ts__3228) + (((x10_long)1ll))));
        {
            
            //#line 185 "TaskBench.x10"
            ::x10::lang::CheckedThrowable* throwable__3276 = ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::xrx::Runtime::enterAtomic();
                    {
                        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi__3216)->FMGL(recvReadyRails))->x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >::__apply(
                                              ((ts__3228) + (((x10_long)1ll)))))->x10::lang::Rail< x10_boolean >::__set(
                          recvIndex__3217, true);
                    }
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc3) {
                {
                    ::x10::lang::CheckedThrowable* formal__3277 =
                      __exc3;
                    {
                        throwable__3276 = formal__3277;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__3276,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__3276))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__3276));
                }
                
            }
            if (true) {
                ::x10::xrx::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__3276,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__3276)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__3276));
                }
                
            }
            
        }
    }
    
    // captured environment
    ::TaskBench* saved_this;
    x10_long sendId__3214;
    x10_long ts__3228;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->sendId__3214);
        buf.write(this->ts__3228);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__6* storage = ::x10aux::alloc_z<TaskBench__closure__6>();
        buf.record_reference(storage);
        ::TaskBench* that_saved_this = buf.read< ::TaskBench*>();
        x10_long that_sendId__3214 = buf.read<x10_long>();
        x10_long that_ts__3228 = buf.read<x10_long>();
        TaskBench__closure__6* this_ = new (storage) TaskBench__closure__6(that_saved_this, that_sendId__3214, that_ts__3228);
        return this_;
    }
    
    TaskBench__closure__6(::TaskBench* saved_this, x10_long sendId__3214, x10_long ts__3228) : saved_this(saved_this), sendId__3214(sendId__3214), ts__3228(ts__3228) { }
    
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
                                     ts__3228))->x10::lang::Rail< x10_long >::__apply(
                 i__3225)) >= (::x10aux::nullCheck(saved_this->FMGL(offsetForTimesteps))->x10::lang::Rail< x10_long >::__apply(
                                 ((ts__3228) - (((x10_long)1ll)))))) &&
            ((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                    ts__3228))->x10::lang::Rail< x10_long >::__apply(
                i__3225)) < (((::x10aux::nullCheck(saved_this->FMGL(offsetForTimesteps))->x10::lang::Rail< x10_long >::__apply(
                                 ((ts__3228) - (((x10_long)1ll))))) + (::x10aux::nullCheck(saved_this->FMGL(widthForTimesteps))->x10::lang::Rail< x10_long >::__apply(
                                                                         ((ts__3228) - (((x10_long)1ll))))))))))
        {
            {
                
                //#line 195 "TaskBench.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                {
                    ::x10::lang::CheckedThrowable* throwable__3279 =
                      ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                    try {
                        {
                            ::x10::xrx::Runtime::enterAtomic();
                            while (true) {
                                if (::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recvReadyRails))->x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >::__apply(
                                                          ts__3228))->x10::lang::Rail< x10_boolean >::__apply(
                                      i__3225)) {
                                    {
                                        
                                        //#line 196 "TaskBench.x10"
                                        ::x10::lang::Rail< void >::asyncCopy< x10_double >(
                                          ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(remoteSendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::__apply(
                                                                ts__3228))->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__apply(
                                            i__3225), ((x10_long)0ll),
                                          ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recvRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                ts__3228))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                            i__3225), ((x10_long)0ll),
                                          (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recvRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                                               ts__3228))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                                           i__3225))->FMGL(size)));
                                    }
                                    break;
                                }
                                ::x10::xrx::Runtime::awaitAtomic();
                            }
                            
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc4) {
                        {
                            ::x10::lang::CheckedThrowable* formal__3280 =
                              __exc4;
                            {
                                throwable__3279 = formal__3280;
                            }
                        }
                    }
                    if ((!::x10aux::struct_equals(throwable__3279,
                                                  reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                    {
                        if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__3279))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(throwable__3279));
                        }
                        
                    }
                    if (true) {
                        ::x10::xrx::Runtime::exitAtomic();
                    }
                    if ((!::x10aux::struct_equals(throwable__3279,
                                                  reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                    {
                        if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__3279)))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(throwable__3279));
                        }
                        
                    }
                    
                }
            }
        }
        
    }
    
    // captured environment
    ::TaskBench__PlaceInstance* pi;
    x10_long ts__3228;
    x10_long i__3225;
    ::TaskBench* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pi);
        buf.write(this->ts__3228);
        buf.write(this->i__3225);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__7* storage = ::x10aux::alloc_z<TaskBench__closure__7>();
        buf.record_reference(storage);
        ::TaskBench__PlaceInstance* that_pi = buf.read< ::TaskBench__PlaceInstance*>();
        x10_long that_ts__3228 = buf.read<x10_long>();
        x10_long that_i__3225 = buf.read<x10_long>();
        ::TaskBench* that_saved_this = buf.read< ::TaskBench*>();
        TaskBench__closure__7* this_ = new (storage) TaskBench__closure__7(that_pi, that_ts__3228, that_i__3225, that_saved_this);
        return this_;
    }
    
    TaskBench__closure__7(::TaskBench__PlaceInstance* pi, x10_long ts__3228, x10_long i__3225, ::TaskBench* saved_this) : pi(pi), ts__3228(ts__3228), i__3225(i__3225), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:192-199";
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
        x10_long i__1876max__3226 = (((x10_long)(::x10aux::nullCheck(saved_this->FMGL(dsetForTimestep))->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__3227;
            for (i__3227 = ((x10_long)0ll); ((i__3227) <= (i__1876max__3226));
                 i__3227 = ((i__3227) + (((x10_long)1ll)))) {
                x10_long ts__3228 = i__3227;
                
                //#line 178 "TaskBench.x10"
                if (((i__3227) < ((((x10_long)(::x10aux::nullCheck(saved_this->FMGL(dsetForTimestep))->FMGL(size))) - (((x10_long)1ll))))))
                {
                    
                    //#line 179 "TaskBench.x10"
                    ::x10::lang::Rail< x10_long >* rail__3218 = ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                                  i__3227);
                    x10_long i__1838max__3219 = (x10_long)(::x10aux::nullCheck(rail__3218)->FMGL(size));
                    {
                        x10_long i__3220;
                        for (i__3220 = ((x10_long)0ll); ((i__3220) < (i__1838max__3219));
                             i__3220 = ((i__3220) + (((x10_long)1ll))))
                        {
                            x10_long sendNeighbor__3221 =
                              i__3220;
                            
                            //#line 180 "TaskBench.x10"
                            ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(sendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                      ts__3228))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                  i__3220))->x10::lang::Rail< x10_double >::__set(
                              ((x10_long)0ll), ((x10_double) (ts__3228)));
                            
                            //#line 181 "TaskBench.x10"
                            x10_long sendId__3214 = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
                            {
                                
                                //#line 182 "TaskBench.x10"
                                ::x10::xrx::Runtime::runAt(
                                  (__extension__ ({
                                      ::x10::lang::Place alloc__3215 =
                                         ::x10::lang::Place::_alloc();
                                      (alloc__3215)->::x10::lang::Place::_constructor(
                                        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                              ts__3228))->x10::lang::Rail< x10_long >::__apply(
                                          sendNeighbor__3221));
                                      alloc__3215;
                                  }))
                                  , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__6)))TaskBench__closure__6(saved_this, sendId__3214, ts__3228))),
                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                    }
                    
                }
                
                //#line 191 "TaskBench.x10"
                if (((ts__3228) > (((x10_long)0ll)))) {
                    {
                        
                        //#line 192 "TaskBench.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__3267 =
                          ::x10::xrx::Runtime::startFinish();
                        try {
                            {
                                ::x10::lang::Rail< x10_long >* rail__3222 =
                                  ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                    ts__3228);
                                x10_long i__1857max__3223 =
                                  (x10_long)(::x10aux::nullCheck(rail__3222)->FMGL(size));
                                {
                                    x10_long i__3224;
                                    for (i__3224 = ((x10_long)0ll);
                                         ((i__3224) < (i__1857max__3223));
                                         i__3224 = ((i__3224) + (((x10_long)1ll))))
                                    {
                                        x10_long i__3225 =
                                          i__3224;
                                        ::x10::xrx::Runtime::runAsync(
                                          reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__7)))TaskBench__closure__7(pi, ts__3228, i__3225, saved_this))));
                                    }
                                }
                                
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc5) {
                            {
                                ::x10::lang::CheckedThrowable* ct__3265 =
                                  __exc5;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__3265);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__3267);
                    }
                    
                    //#line 201 "TaskBench.x10"
                    saved_this->kernelExecute(saved_this->FMGL(kernel)->FMGL(first),
                                              saved_this->FMGL(kernel)->FMGL(second));
                }
                
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
        ::x10::xrx::FinishState* fs__3259 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__1836;
                    for (p__1836 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__1836));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__1836));
                        
                        //#line 136 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__2)))TaskBench__closure__2(pplh, dsetForTimestep))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc0) {
            {
                ::x10::lang::CheckedThrowable* ct__3257 =
                  __exc0;
                {
                    ::x10::xrx::Runtime::pushException(ct__3257);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__3259);
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
        ::x10::xrx::FinishState* fs__3274 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__1894;
                    for (p__1894 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__1894));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__1894));
                        
                        //#line 173 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__5)))TaskBench__closure__5(this))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc6) {
            {
                ::x10::lang::CheckedThrowable* ct__3272 =
                  __exc6;
                {
                    ::x10::xrx::Runtime::pushException(ct__3272);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__3274);
    }
}

//#line 208 "TaskBench.x10"
x10_double TaskBench::getTime() {
    
			return ((x10_double) Timer::get_cur_time());
		
}

//#line 214 "TaskBench.x10"
x10_double TaskBench::executeTaskBench(::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >* taskGraphDependenceSets,
                                       ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* dependenceSetsForTimesteps,
                                       ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* widthAndOffsetForTimesteps,
                                       ::x10::lang::Rail< ::x10::util::Pair<x10_int, x10_long> >* kernelTypeIterationsRail) {
    
    //#line 217 "TaskBench.x10"
    x10_long i__1896max__3239 = (((x10_long)(::x10aux::nullCheck(taskGraphDependenceSets)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3240;
        for (i__3240 = ((x10_long)0ll); ((i__3240) <= (i__1896max__3239));
             i__3240 = ((i__3240) + (((x10_long)1ll)))) {
            
            //#line 218 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets__3229 =
              ::x10aux::nullCheck(taskGraphDependenceSets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >::__apply(
                i__3240);
            
            //#line 219 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* dsetForTimestep__3230 =
              ::x10aux::nullCheck(dependenceSetsForTimesteps)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                i__3240);
            
            //#line 220 "TaskBench.x10"
            ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> widthAndOffsetForTimestep__3231 =
              ::x10aux::nullCheck(widthAndOffsetForTimesteps)->x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::__apply(
                i__3240);
            
            //#line 221 "TaskBench.x10"
            ::x10::util::Pair<x10_int, x10_long> kernel__3232 =
              ::x10aux::nullCheck(kernelTypeIterationsRail)->x10::lang::Rail< ::x10::util::Pair<x10_int, x10_long> >::__apply(
                i__3240);
            
            //#line 222 "TaskBench.x10"
            ::TaskBench* taskBench__3233 =  (new (::x10aux::alloc_z< ::TaskBench>()) ::TaskBench());
            (taskBench__3233)->::TaskBench::_constructor(
              dsets__3229, dsetForTimestep__3230, widthAndOffsetForTimestep__3231,
              kernel__3232);
            
            //#line 223 "TaskBench.x10"
            taskBench__3233->executeTaskGraph();
        }
    }
    
    //#line 225 "TaskBench.x10"
    x10_double start = ::TaskBench::getTime();
    
    //#line 226 "TaskBench.x10"
    x10_long i__1914max__3242 = (((x10_long)(::x10aux::nullCheck(taskGraphDependenceSets)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3243;
        for (i__3243 = ((x10_long)0ll); ((i__3243) <= (i__1914max__3242));
             i__3243 = ((i__3243) + (((x10_long)1ll)))) {
            
            //#line 228 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets__3234 =
              ::x10aux::nullCheck(taskGraphDependenceSets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >::__apply(
                i__3243);
            
            //#line 229 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* dsetForTimestep__3235 =
              ::x10aux::nullCheck(dependenceSetsForTimesteps)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                i__3243);
            
            //#line 230 "TaskBench.x10"
            ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> widthAndOffsetForTimestep__3236 =
              ::x10aux::nullCheck(widthAndOffsetForTimesteps)->x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::__apply(
                i__3243);
            
            //#line 231 "TaskBench.x10"
            ::x10::util::Pair<x10_int, x10_long> kernel__3237 =
              ::x10aux::nullCheck(kernelTypeIterationsRail)->x10::lang::Rail< ::x10::util::Pair<x10_int, x10_long> >::__apply(
                i__3243);
            
            //#line 232 "TaskBench.x10"
            ::TaskBench* taskBench__3238 =  (new (::x10aux::alloc_z< ::TaskBench>()) ::TaskBench());
            (taskBench__3238)->::TaskBench::_constructor(
              dsets__3234, dsetForTimestep__3235, widthAndOffsetForTimestep__3236,
              kernel__3237);
            
            //#line 233 "TaskBench.x10"
            taskBench__3238->executeTaskGraph();
        }
    }
    
    //#line 235 "TaskBench.x10"
    x10_double end = ::TaskBench::getTime();
    
    //#line 236 "TaskBench.x10"
    return ((end) - (start));
    
}

//#line 239 "TaskBench.x10"
::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >*
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
			// for (int i = 0; i < argc; i++) {
			// 	delete [] argv[i];
			// }
			// delete [] argv;
			
			std::vector<TaskGraph> graphs = app.graphs;
			// var taskGraphDependenceSets = new Rail[Rail[Rail[Pair[Rail[Long], Rail[Long]]]]];
			::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >* 
			taskGraphDependenceSets = ::x10::lang::Rail< 
				::x10::lang::Rail< 
					::x10::lang::Rail< 
						::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> 
					>*
				>* 
			>::_make((x10_long)graphs.size());
			for (int tgi = 0; tgi < graphs.size(); ++tgi) {
				TaskGraph tg = graphs.at(tgi);
				// val dependenceSets = new Rail[Rail[Pair[Rail[Long], Rail[Long]]]](tg.timestep_period());
				::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dependenceSets =
					::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, 
					::x10::lang::Rail< x10_long >*> >* >::_make((x10_long)tg.timestep_period());
				for (long ts = 0; ts < tg.timestep_period(); ts++) {
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
				// taskGraphDependenceSets(tgi) = dependenceSets;
				::x10aux::nullCheck(taskGraphDependenceSets)->
				x10::lang::Rail< x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >::
						__set(tgi, dependenceSets);
			}
			return taskGraphDependenceSets;
		
}

//#line 339 "TaskBench.x10"
::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* TaskBench::timestepsFromCore(
  x10_int argc, ::x10::lang::Rail< ::x10::lang::String* >* argRail) {
    
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
			// app.display();
			// for (int i = 0; i < argc; i++) { // cleanup allocated arrays
			// 	delete [] argv[i];
			// }
			// delete [] argv;
			
			std::vector<TaskGraph> graphs = app.graphs;
			// val timeStepMaps = new Rail[Rail[Long]](graphs.size());
			::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* timeStepMaps =
      			::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(graphs.size());
			for (int tgi = 0; tgi < graphs.size(); ++tgi) { // dependence set for each timestep in this graph
				TaskGraph graph = graphs.at(tgi);
				// val dependenceSetsForTimesteps = new Rail[Long](graph.timesteps);
				::x10::lang::Rail< x10_long >* dependenceSetsForTimesteps = 
					::x10::lang::Rail< x10_long >::_make(graph.timesteps);
				for (int ts = 0; ts < graph.timesteps; ++ts) {
					// dependenceSetsForTimesteps(ts) = graph.dependence_set_at_timestep(ts);
					::x10aux::nullCheck(dependenceSetsForTimesteps)->
						x10::lang::Rail< x10_long >::__set(((x10_long)ts), ((x10_long)graph.dependence_set_at_timestep(ts)));
				}
				// timeStepMaps(tgi) = dependenceSetsForTimesteps;
				::x10aux::nullCheck(timeStepMaps)->
						x10::lang::Rail< x10::lang::Rail< x10_long >* >::__set(((x10_long)tgi), dependenceSetsForTimesteps);
			}
			return timeStepMaps;
			
}

//#line 382 "TaskBench.x10"
::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >*
  TaskBench::widthAndOffsetFromCore(x10_int argc, ::x10::lang::Rail< ::x10::lang::String* >* argRail) {
    
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
			// app.display();
			// for (int i = 0; i < argc; i++) { // cleanup allocated arrays
			// 	delete [] argv[i];
			// }
			// delete [] argv;

			std::vector<TaskGraph> graphs = app.graphs;
			// val widthAndOffsetForTimesteps = new Rail[Pair(Rail[Long], Rail[Long])](graphs.size());
			::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* widthAndOffsetForTimesteps =
      			::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::_make((x10_long)graphs.size());
      		for (int tgi = 0; tgi < graphs.size(); ++tgi) {
      			TaskGraph tg = graphs.at(tgi);
      			// val widths = new Rail[Long](tg.timesteps);
      			::x10::lang::Rail< x10_long >* widths = ::x10::lang::Rail< x10_long >::_make((x10_long)tg.timesteps);
      			// val offsets = new Rail[Long](tg.timesteps);
      			::x10::lang::Rail< x10_long >* offsets = ::x10::lang::Rail< x10_long >::_make((x10_long)tg.timesteps);
      			for (int ts = 0; ts < tg.timesteps; ++ts) {
      				// widths(ts) = tg.width_at_timestep(ts);
      				::x10aux::nullCheck(widths)->
						x10::lang::Rail< x10_long >::__set((x10_long)ts, (x10_long)tg.width_at_timestep(ts));
      				// offsets(ts) = tg.offset_at_timestep(ts);
					::x10aux::nullCheck(offsets)->
						x10::lang::Rail< x10_long >::__set(((x10_long)ts), ((x10_long)tg.offset_at_timestep(ts)));
      			}
      			// val widthOffsetPair = new Pair(widths, offsets);
      			::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> widthOffsetPair =
					::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*>::_make(widths, offsets);
				// widthAndOffsetForTimesteps(tgi) = widthOffsetPair;
				::x10aux::nullCheck(widthAndOffsetForTimesteps)->
					x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::__set((x10_long)tgi, widthOffsetPair);
				return widthAndOffsetForTimesteps;
      		}
		
}

//#line 432 "TaskBench.x10"
::x10::lang::Rail< ::x10::util::Pair<x10_int, x10_long> >*
  TaskBench::kernelTypeIterationsFromCore(x10_int argc, ::x10::lang::Rail< ::x10::lang::String* >* argRail) {
    
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
			// app.display();
			// for (int i = 0; i < argc; i++) { // cleanup allocated arrays
			// 	delete [] argv[i];
			// }
			// delete [] argv;

			std::vector<TaskGraph> graphs = app.graphs;
			// val kernelTypeIterationsRail = new Rail[Pair[Int, Long]]();
			::x10::lang::Rail< ::x10::util::Pair< x10_int, x10_long > >* kernelTypeIterationsRail =
      			::x10::lang::Rail< ::x10::util::Pair< x10_int, x10_long > >::_make((x10_long)graphs.size());
      		for (int tgi = 0; tgi < graphs.size(); ++tgi) {
      			TaskGraph tg = graphs.at(tgi);
      			auto kernel = tg.kernel;
      			auto kernelType = kernel.type;
      			long iterations = kernel.iterations;
      			// std::cout << "ITERATIONS: " << iterations << std::endl;
      			// val kernelTypeIterations = new Pair(kernelType, iterations);
      			::x10::util::Pair< x10_int, x10_long > kernelTypeIterations = 
      				::x10::util::Pair< x10_int, x10_long >::_make((x10_int)kernelType, (x10_long)iterations);
      			// kernelTypeIterationsRail(tgi) = kernelTypeIterations;
      			::x10aux::nullCheck(kernelTypeIterationsRail)->
					x10::lang::Rail< ::x10::util::Pair< x10_int, x10_long > >::__set((x10_long)tgi, kernelTypeIterations);
      		}
      		return kernelTypeIterationsRail;
		
}

//#line 474 "TaskBench.x10"
void TaskBench::appReport(x10_int argc, ::x10::lang::Rail< ::x10::lang::String* >* argRail,
                          x10_double time) {
    
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
			//app.display();
			for (int i = 0; i < argc; i++) { // cleanup allocated arrays
				delete [] argv[i];
			}
			delete [] argv;

			app.report_timing(time);
		
}

//#line 499 "TaskBench.x10"
::x10::lang::Rail< ::x10::lang::String* >* TaskBench::constructCPPArgs(
  ::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 500 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* argv = ::x10::lang::Rail< ::x10::lang::String* >::_make((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) + (((x10_long)1ll))));
    
    //#line 501 "TaskBench.x10"
    argv->x10::lang::Rail< ::x10::lang::String* >::__set(
      ((x10_long)0ll), (&::TaskBench_Strings::sl__3310));
    
    //#line 502 "TaskBench.x10"
    x10_long i__1932max__3245 = (x10_long)(::x10aux::nullCheck(args)->FMGL(size));
    {
        x10_long i__3246;
        for (i__3246 = ((x10_long)1ll); ((i__3246) <= (i__1932max__3245));
             i__3246 = ((i__3246) + (((x10_long)1ll)))) {
            
            //#line 503 "TaskBench.x10"
            argv->x10::lang::Rail< ::x10::lang::String* >::__set(
              i__3246, ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                         ((i__3246) - (((x10_long)1ll)))));
        }
    }
    
    //#line 505 "TaskBench.x10"
    return argv;
    
}

//#line 508 "TaskBench.x10"
void TaskBench::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 509 "TaskBench.x10"
    x10_int argc = ((x10_int) ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) + (((x10_long)1ll)))));
    
    //#line 510 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* argv = ::TaskBench::constructCPPArgs(
                                                        args);
    
    //#line 511 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >* taskGraphDependenceSets =
      ::TaskBench::dependenceSetsFromCore(argc, argv);
    
    //#line 512 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* dependenceSetsForTimesteps =
      ::TaskBench::timestepsFromCore(argc, argv);
    
    //#line 513 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* widthAndOffsetForTimesteps =
      ::TaskBench::widthAndOffsetFromCore(argc, argv);
    
    //#line 514 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::util::Pair<x10_int, x10_long> >* kernelTypeIterationsRail =
      ::TaskBench::kernelTypeIterationsFromCore(argc, argv);
    
    //#line 515 "TaskBench.x10"
    x10_double time = ::TaskBench::executeTaskBench(taskGraphDependenceSets,
                                                    dependenceSetsForTimesteps,
                                                    widthAndOffsetForTimesteps,
                                                    kernelTypeIterationsRail);
    
    //#line 516 "TaskBench.x10"
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

::x10::lang::String TaskBench_Strings::sl__3310("");
::x10::lang::String TaskBench_Strings::sl__3309("!(a$1535 != null)");
::x10::lang::String TaskBench_Strings::sl__3308("!(a$1509 != null)");

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
#include <x10/lang/Boolean.h>
#include <x10/lang/Rail.h>
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
    
    ::x10::lang::Rail< x10_double >* __apply(x10_long i__3186){
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
    
    ::x10::lang::Rail< x10_double >* __apply(x10_long i__3188){
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

//#line 35 "TaskBench.x10"

//#line 38 "TaskBench.x10"

//#line 43 "TaskBench.x10"
/** used for pushing to neighbors */
x10_long TaskBench__PlaceInstance::getSenderIndex(x10_long recvId, x10_long timestep) {
    
    //#line 44 "TaskBench.x10"
    ::x10::lang::Rail< x10_long >* neighborsSend = ::x10aux::nullCheck(this->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                     timestep);
    
    //#line 45 "TaskBench.x10"
    x10_long i__1725max__3170 = (((x10_long)(::x10aux::nullCheck(neighborsSend)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3171;
        for (i__3171 = ((x10_long)0ll); ((i__3171) <= (i__1725max__3170));
             i__3171 = ((i__3171) + (((x10_long)1ll)))) {
            
            //#line 46 "TaskBench.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(neighborsSend)->x10::lang::Rail< x10_long >::__apply(
                                           i__3171), recvId)))
            {
                
                //#line 47 "TaskBench.x10"
                return i__3171;
                
            }
            
        }
    }
    
    //#line 50 "TaskBench.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::TaskBench__PlaceInstance_Strings::sl__3349), recvId), (&::TaskBench__PlaceInstance_Strings::sl__3350)), ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)), (&::TaskBench__PlaceInstance_Strings::sl__3351)), timestep)));
    
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
    x10_long i__1743max__3173 = (((x10_long)(::x10aux::nullCheck(neighborsRecv)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3174;
        for (i__3174 = ((x10_long)0ll); ((i__3174) <= (i__1743max__3173));
             i__3174 = ((i__3174) + (((x10_long)1ll)))) {
            
            //#line 57 "TaskBench.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(neighborsRecv)->x10::lang::Rail< x10_long >::__apply(
                                           i__3174), sendId)))
            {
                
                //#line 58 "TaskBench.x10"
                return i__3174;
                
            }
            
        }
    }
    
    //#line 61 "TaskBench.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::TaskBench__PlaceInstance_Strings::sl__3352), sendId), (&::TaskBench__PlaceInstance_Strings::sl__3350)), ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)), (&::TaskBench__PlaceInstance_Strings::sl__3351)), timestep)));
    
    //#line 62 "TaskBench.x10"
    return ((x10_long)-1ll);
    
}

//#line 65 "TaskBench.x10"
x10_boolean TaskBench__PlaceInstance::allNeighborsReceived(
  x10_long timestep) {
    
    //#line 66 "TaskBench.x10"
    ::x10::lang::Rail< x10_boolean >* rail__3176 = ::x10aux::nullCheck(this->FMGL(recvReadyRails))->x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >::__apply(
                                                     timestep);
    x10_long i__1761max__3177 = (x10_long)(::x10aux::nullCheck(rail__3176)->FMGL(size));
    {
        x10_long i__3178;
        for (i__3178 = ((x10_long)0ll); ((i__3178) < (i__1761max__3177));
             i__3178 = ((i__3178) + (((x10_long)1ll)))) {
            
            //#line 67 "TaskBench.x10"
            if (!(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(recvReadyRails))->x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >::__apply(
                                        timestep))->x10::lang::Rail< x10_boolean >::__apply(
                    i__3178))) {
                return false;
                
            }
            
        }
    }
    
    //#line 69 "TaskBench.x10"
    return true;
    
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
    
    //#line 81 "TaskBench.x10"
    this->FMGL(recvReadyRails) = ::x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >::_make(timesteps);
    
    //#line 84 "TaskBench.x10"
    x10_long i__1780max__3192 = ((timesteps) - (((x10_long)1ll)));
    {
        x10_long i__3193;
        for (i__3193 = ((x10_long)0ll); ((i__3193) <= (i__1780max__3192));
             i__3193 = ((i__3193) + (((x10_long)1ll)))) {
            x10_long ts__3194 = i__3193;
            
            //#line 85 "TaskBench.x10"
            x10_long dset__3181 = ::x10aux::nullCheck(dsetForTimestep)->x10::lang::Rail< x10_long >::__apply(
                                    i__3193);
            
            //#line 86 "TaskBench.x10"
            ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> dependencePair__3182 =
              ::x10aux::nullCheck(::x10aux::nullCheck(dependenceSets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::__apply(
                                    dset__3181))->x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::__apply(
                ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
            
            //#line 87 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* neighborsSend__3183 =
              dependencePair__3182->FMGL(first);
            
            //#line 88 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* neighborsRecv__3184 =
              dependencePair__3182->FMGL(second);
            
            //#line 89 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* recv__3185 =
              ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv__3184)->FMGL(size)),
                                                                           reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TaskBench__PlaceInstance__closure__8)))TaskBench__PlaceInstance__closure__8())));
            
            //#line 90 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* send__3187 =
              ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(neighborsSend__3183)->FMGL(size)),
                                                                           reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TaskBench__PlaceInstance__closure__9)))TaskBench__PlaceInstance__closure__9())));
            
            //#line 91 "TaskBench.x10"
            ::x10::lang::GlobalRail<x10_double> plchldr__3189 =
               ::x10::lang::GlobalRail<x10_double>::_alloc();
            (plchldr__3189)->::x10::lang::GlobalRail<x10_double>::_constructor(
              ::x10::lang::Rail< x10_double >::_make(((x10_long)0ll)));
            
            //#line 92 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* remoteSend__3190 =
              ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv__3184)->FMGL(size)),
                                                                              plchldr__3189);
            
            //#line 93 "TaskBench.x10"
            ::x10::lang::Rail< x10_boolean >* recvReady__3191 =
              ::x10::lang::Rail< x10_boolean >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv__3184)->FMGL(size)),
                                                      false);
            
            //#line 94 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
              ts__3194, neighborsSend__3183);
            
            //#line 95 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
              ts__3194, neighborsRecv__3184);
            
            //#line 96 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(recvRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__set(
              ts__3194, recv__3185);
            
            //#line 97 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(sendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__set(
              ts__3194, send__3187);
            
            //#line 98 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(remoteSendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::__set(
              ts__3194, remoteSend__3190);
            
            //#line 99 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(recvReadyRails))->x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >::__set(
              ts__3194, recvReady__3191);
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
    buf.write(this->FMGL(recvReadyRails));
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
    FMGL(recvReadyRails) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >*>();
    FMGL(timestep) = buf.read<x10_long>();
}

::x10aux::RuntimeType TaskBench__PlaceInstance::rtt;
void TaskBench__PlaceInstance::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("TaskBench.PlaceInstance",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String TaskBench__PlaceInstance_Strings::sl__3350(" FOR ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__3349("UNABLE TO FIND RECEIVER: ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__3352("UNABLE TO FIND SENDER: ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__3351(" AT TIMESTEP ");

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
