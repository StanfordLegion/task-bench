/*************************************************/
/* START of TaskBench */
#include <TaskBench.h>

#include <x10/util/Pair.h>
#include <x10/lang/Long.h>
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
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Finalization.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
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
        
        //#line 120 "TaskBench.x10"
        return ::TaskBench__PlaceInstance::_make(dsets, dsetForTimestep, (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(dsets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::__apply(
                                                                                                          ((x10_long)0ll)))->FMGL(size)));
        
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
        return "TaskBench.x10:119-121";
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
        
        //#line 141 "TaskBench.x10"
        rs__1767->x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::__apply()->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__set(
          i__1766, rsr__1761);
    }
    
    // captured environment
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__1767;
    x10_long i__1766;
    ::x10::lang::GlobalRail<x10_double> rsr__1761;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->rs__1767);
        buf.write(this->i__1766);
        buf.write(this->rsr__1761);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__4* storage = ::x10aux::alloc_z<TaskBench__closure__4>();
        buf.record_reference(storage);
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs__1767 = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        x10_long that_i__1766 = buf.read<x10_long>();
        ::x10::lang::GlobalRail<x10_double> that_rsr__1761 = buf.read< ::x10::lang::GlobalRail<x10_double> >();
        TaskBench__closure__4* this_ = new (storage) TaskBench__closure__4(that_rs__1767, that_i__1766, that_rsr__1761);
        return this_;
    }
    
    TaskBench__closure__4(::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__1767, x10_long i__1766, ::x10::lang::GlobalRail<x10_double> rsr__1761) : rs__1767(rs__1767), i__1766(i__1766), rsr__1761(rsr__1761) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:140-142";
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
        
        //#line 137 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pplh__1759 = pplh->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 138 "TaskBench.x10"
        x10_long sendIndex__1760 = ::x10aux::nullCheck(pplh__1759)->getSenderIndex(
                                     recvId__1769, ts__1774);
        
        //#line 139 "TaskBench.x10"
        ::x10::lang::GlobalRail<x10_double> rsr__1761 = (__extension__ ({
            ::x10::lang::Rail< x10_double >* a__1762 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pplh__1759)->FMGL(sendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                             ts__1774))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                         sendIndex__1760);
            if (!((!::x10aux::struct_equals(a__1762, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__1864))));
            }
            ::x10::lang::GlobalRail<x10_double>::_make(a__1762);
        }))
        ;
        
        //#line 140 "TaskBench.x10"
        ::x10::xrx::Runtime::runAsync(rs__1767->x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::home(),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__4)))TaskBench__closure__4(rs__1767, i__1766, rsr__1761))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh;
    x10_long recvId__1769;
    x10_long ts__1774;
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__1767;
    x10_long i__1766;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pplh);
        buf.write(this->recvId__1769);
        buf.write(this->ts__1774);
        buf.write(this->rs__1767);
        buf.write(this->i__1766);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__3* storage = ::x10aux::alloc_z<TaskBench__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> that_pplh = buf.read< ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> >();
        x10_long that_recvId__1769 = buf.read<x10_long>();
        x10_long that_ts__1774 = buf.read<x10_long>();
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs__1767 = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        x10_long that_i__1766 = buf.read<x10_long>();
        TaskBench__closure__3* this_ = new (storage) TaskBench__closure__3(that_pplh, that_recvId__1769, that_ts__1774, that_rs__1767, that_i__1766);
        return this_;
    }
    
    TaskBench__closure__3(::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh, x10_long recvId__1769, x10_long ts__1774, ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__1767, x10_long i__1766) : pplh(pplh), recvId__1769(recvId__1769), ts__1774(ts__1774), rs__1767(rs__1767), i__1766(i__1766) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:135-143";
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
        
        //#line 126 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pplh1 = pplh->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 128 "TaskBench.x10"
        x10_long i__1616min__1771 = ((x10_long)0ll);
        x10_long i__1616max__1772 = (((x10_long)(::x10aux::nullCheck(dsetForTimestep)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__1773;
            for (i__1773 = i__1616min__1771; ((i__1773) <= (i__1616max__1772));
                 i__1773 = ((i__1773) + (((x10_long)1ll)))) {
                x10_long ts__1774 = i__1773;
                
                //#line 129 "TaskBench.x10"
                ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__1767 =
                  (__extension__ ({
                    ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* a__1768 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(pplh1)->FMGL(remoteSendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::__apply(
                        ts__1774);
                    if (!((!::x10aux::struct_equals(a__1768,
                                                    reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__1863))));
                    }
                    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::_make(a__1768);
                }))
                ;
                
                //#line 131 "TaskBench.x10"
                x10_long recvId__1769 = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
                
                //#line 132 "TaskBench.x10"
                ::x10::lang::Rail< x10_long >* neighborsRecv__1770 =
                  ::x10aux::nullCheck(::x10aux::nullCheck(pplh1)->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                    ts__1774);
                
                //#line 134 "TaskBench.x10"
                x10_long i__1598min__1763 = ((x10_long)0ll);
                x10_long i__1598max__1764 = (((x10_long)(::x10aux::nullCheck(neighborsRecv__1770)->FMGL(size))) - (((x10_long)1ll)));
                {
                    x10_long i__1765;
                    for (i__1765 = i__1598min__1763; ((i__1765) <= (i__1598max__1764));
                         i__1765 = ((i__1765) + (((x10_long)1ll))))
                    {
                        x10_long i__1766 = i__1765;
                        
                        //#line 135 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::nullCheck(neighborsRecv__1770)->x10::lang::Rail< x10_long >::__apply(
                                                                                  i__1766)),
                                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__3)))TaskBench__closure__3(pplh, recvId__1769, ts__1774, rs__1767, i__1766))),
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
        return "TaskBench.x10:125-147";
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
        
        //#line 165 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pi__1776 = saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 166 "TaskBench.x10"
        x10_long recvIndex__1777 = ::x10aux::nullCheck(pi__1776)->getRecvIndex(
                                     sendId__1775, ts__1791);
        {
            
            //#line 167 "TaskBench.x10"
            ::x10::lang::CheckedThrowable* throwable__1831 = ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                {
                    ::x10::xrx::Runtime::enterAtomic();
                    {
                        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi__1776)->FMGL(recvReadyRails))->x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >::__apply(
                                              ts__1791))->x10::lang::Rail< x10_boolean >::__set(
                          recvIndex__1777, true);
                    }
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2) {
                {
                    ::x10::lang::CheckedThrowable* formal__1832 =
                      __exc2;
                    {
                        throwable__1831 = formal__1832;
                    }
                }
            }
            if ((!::x10aux::struct_equals(throwable__1831,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__1831))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__1831));
                }
                
            }
            if (true) {
                ::x10::xrx::Runtime::exitAtomic();
            }
            if ((!::x10aux::struct_equals(throwable__1831,
                                          reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__1831)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__1831));
                }
                
            }
            
        }
    }
    
    // captured environment
    ::TaskBench* saved_this;
    x10_long sendId__1775;
    x10_long ts__1791;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->sendId__1775);
        buf.write(this->ts__1791);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__6* storage = ::x10aux::alloc_z<TaskBench__closure__6>();
        buf.record_reference(storage);
        ::TaskBench* that_saved_this = buf.read< ::TaskBench*>();
        x10_long that_sendId__1775 = buf.read<x10_long>();
        x10_long that_ts__1791 = buf.read<x10_long>();
        TaskBench__closure__6* this_ = new (storage) TaskBench__closure__6(that_saved_this, that_sendId__1775, that_ts__1791);
        return this_;
    }
    
    TaskBench__closure__6(::TaskBench* saved_this, x10_long sendId__1775, x10_long ts__1791) : saved_this(saved_this), sendId__1775(sendId__1775), ts__1791(ts__1791) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:164-168";
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
        {
            
            //#line 173 "TaskBench.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            {
                ::x10::lang::CheckedThrowable* throwable__1834 = ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                try {
                    {
                        ::x10::xrx::Runtime::enterAtomic();
                        while (true) {
                            if (::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recvReadyRails))->x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >::__apply(
                                                      ts__1791))->x10::lang::Rail< x10_boolean >::__apply(
                                  i__1782)) {
                                {
                                    
                                    //#line 174 "TaskBench.x10"
                                    ::x10::lang::Rail< void >::asyncCopy< x10_double >(
                                      ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(remoteSendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::__apply(
                                                            ts__1791))->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__apply(
                                        i__1782), ((x10_long)0ll),
                                      ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recvRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                            ts__1791))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                        i__1782), ((x10_long)0ll),
                                      (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recvRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                                           ts__1791))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                                       i__1782))->FMGL(size)));
                                }
                                break;
                            }
                            ::x10::xrx::Runtime::awaitAtomic();
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3) {
                    {
                        ::x10::lang::CheckedThrowable* formal__1835 =
                          __exc3;
                        {
                            throwable__1834 = formal__1835;
                        }
                    }
                }
                if ((!::x10aux::struct_equals(throwable__1834,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__1834))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__1834));
                    }
                    
                }
                if (true) {
                    ::x10::xrx::Runtime::exitAtomic();
                }
                if ((!::x10aux::struct_equals(throwable__1834,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__1834)))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__1834));
                    }
                    
                }
                
            }
        }
    }
    
    // captured environment
    ::TaskBench__PlaceInstance* pi;
    x10_long ts__1791;
    x10_long i__1782;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pi);
        buf.write(this->ts__1791);
        buf.write(this->i__1782);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__7* storage = ::x10aux::alloc_z<TaskBench__closure__7>();
        buf.record_reference(storage);
        ::TaskBench__PlaceInstance* that_pi = buf.read< ::TaskBench__PlaceInstance*>();
        x10_long that_ts__1791 = buf.read<x10_long>();
        x10_long that_i__1782 = buf.read<x10_long>();
        TaskBench__closure__7* this_ = new (storage) TaskBench__closure__7(that_pi, that_ts__1791, that_i__1782);
        return this_;
    }
    
    TaskBench__closure__7(::TaskBench__PlaceInstance* pi, x10_long ts__1791, x10_long i__1782) : pi(pi), ts__1791(ts__1791), i__1782(i__1782) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:172-176";
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
        
        //#line 155 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pi = saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 156 "TaskBench.x10"
        x10_long i__1676min__1788 = ((x10_long)0ll);
        x10_long i__1676max__1789 = (((x10_long)(::x10aux::nullCheck(saved_this->FMGL(dsetForTimestep))->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__1790;
            for (i__1790 = i__1676min__1788; ((i__1790) <= (i__1676max__1789));
                 i__1790 = ((i__1790) + (((x10_long)1ll)))) {
                x10_long ts__1791 = i__1790;
                
                //#line 158 "TaskBench.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(p, (&::TaskBench_Strings::sl__1865)), ts__1791)));
                
                //#line 161 "TaskBench.x10"
                ::x10::lang::Rail< x10_long >* rail__1783 = ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                              ts__1791);
                x10_long i__1638min__1784 = ((x10_long)0ll);
                x10_long i__1638max__1785 = (x10_long)(::x10aux::nullCheck(rail__1783)->FMGL(size));
                {
                    x10_long i__1786;
                    for (i__1786 = i__1638min__1784; ((i__1786) < (i__1638max__1785));
                         i__1786 = ((i__1786) + (((x10_long)1ll))))
                    {
                        x10_long sendNeighbor__1787 = i__1786;
                        
                        //#line 162 "TaskBench.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(sendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                  ts__1791))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                              sendNeighbor__1787))->x10::lang::Rail< x10_double >::__set(
                          ((x10_long)0ll), 1.0);
                        
                        //#line 163 "TaskBench.x10"
                        x10_long sendId__1775 = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
                        {
                            
                            //#line 164 "TaskBench.x10"
                            ::x10::xrx::Runtime::runAt(::x10::lang::Place::_make(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                                                                       ts__1791))->x10::lang::Rail< x10_long >::__apply(
                                                                                   sendNeighbor__1787)),
                                                       reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__6)))TaskBench__closure__6(saved_this, sendId__1775, ts__1791))),
                                                       ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                }
                {
                    
                    //#line 172 "TaskBench.x10"
                    ::x10::xrx::Runtime::ensureNotInAtomic();
                    ::x10::xrx::FinishState* fs__1822 = ::x10::xrx::Runtime::startFinish();
                    try {
                        {
                            ::x10::lang::Rail< x10_long >* rail__1778 =
                              ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                ts__1791);
                            x10_long i__1657min__1779 = ((x10_long)0ll);
                            x10_long i__1657max__1780 = (x10_long)(::x10aux::nullCheck(rail__1778)->FMGL(size));
                            {
                                x10_long i__1781;
                                for (i__1781 = i__1657min__1779;
                                     ((i__1781) < (i__1657max__1780));
                                     i__1781 = ((i__1781) + (((x10_long)1ll))))
                                {
                                    x10_long i__1782 = i__1781;
                                    ::x10::xrx::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__7)))TaskBench__closure__7(pi, ts__1791, i__1782))));
                                }
                            }
                            
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc4) {
                        {
                            ::x10::lang::CheckedThrowable* ct__1820 =
                              __exc4;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__1820);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__1822);
                }
                
                //#line 177 "TaskBench.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(p, (&::TaskBench_Strings::sl__1866)), ts__1791), (&::TaskBench_Strings::sl__1867)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recvRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                                                                                                                                                                                                                                 ts__1791))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::toString())));
            }
        }
        
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
        TaskBench__closure__5* storage = ::x10aux::alloc_z<TaskBench__closure__5>();
        buf.record_reference(storage);
        ::TaskBench* that_saved_this = buf.read< ::TaskBench*>();
        ::x10::lang::Place that_p = buf.read< ::x10::lang::Place>();
        TaskBench__closure__5* this_ = new (storage) TaskBench__closure__5(that_saved_this, that_p);
        return this_;
    }
    
    TaskBench__closure__5(::TaskBench* saved_this, ::x10::lang::Place p) : saved_this(saved_this), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:154-179";
    }

};

#endif // TASKBENCH__CLOSURE__5_CLOSURE

//#line 103 "TaskBench.x10"

//#line 105 "TaskBench.x10"

//#line 107 "TaskBench.x10"

//#line 109 "TaskBench.x10"

//#line 111 "TaskBench.x10"
void TaskBench::_constructor(::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets,
                             ::x10::lang::Rail< x10_long >* dsetForTimestep) {
    
    //#line 9 "TaskBench.x10"
    this->TaskBench::__fieldInitializers_TaskBench();
    
    //#line 113 "TaskBench.x10"
    this->FMGL(dependenceSets) = dsets;
    
    //#line 114 "TaskBench.x10"
    this->FMGL(dsetForTimestep) = dsetForTimestep;
    
    //#line 116 "TaskBench.x10"
    this->FMGL(maxWidth) = (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dependenceSets))->x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::__apply(
                                                            ((x10_long)0ll)))->FMGL(size));
    
    //#line 119 "TaskBench.x10"
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh =
      ::x10::lang::PlaceLocalHandle<void>::make< ::TaskBench__PlaceInstance* >(
        ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*> >(sizeof(TaskBench__closure__1)))TaskBench__closure__1(dsets, dsetForTimestep))));
    
    //#line 122 "TaskBench.x10"
    this->FMGL(plh) = pplh;
    {
        
        //#line 124 "TaskBench.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__1814 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__1636;
                    for (p__1636 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__1636));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__1636));
                        
                        //#line 125 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__2)))TaskBench__closure__2(pplh, dsetForTimestep))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc0) {
            {
                ::x10::lang::CheckedThrowable* ct__1812 =
                  __exc0;
                {
                    ::x10::xrx::Runtime::pushException(ct__1812);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__1814);
    }
}
::TaskBench* TaskBench::_make(::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets,
                              ::x10::lang::Rail< x10_long >* dsetForTimestep)
{
    ::TaskBench* this_ = new (::x10aux::alloc_z< ::TaskBench>()) ::TaskBench();
    this_->_constructor(dsets, dsetForTimestep);
    return this_;
}



//#line 151 "TaskBench.x10"
void TaskBench::executeTaskGraph() {
    {
        
        //#line 153 "TaskBench.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__1829 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__1694;
                    for (p__1694 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__1694));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__1694));
                        
                        //#line 154 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__5)))TaskBench__closure__5(this, p))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc5) {
            {
                ::x10::lang::CheckedThrowable* ct__1827 =
                  __exc5;
                {
                    ::x10::xrx::Runtime::pushException(ct__1827);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__1829);
    }
}

//#line 183 "TaskBench.x10"
void TaskBench::executeTaskBench(::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >* taskGraphDependenceSets,
                                 ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* dependenceSetsForTimesteps) {
    
    //#line 186 "TaskBench.x10"
    x10_long i__1696min__1795 = ((x10_long)0ll);
    x10_long i__1696max__1796 = (((x10_long)(::x10aux::nullCheck(taskGraphDependenceSets)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__1797;
        for (i__1797 = i__1696min__1795; ((i__1797) <= (i__1696max__1796));
             i__1797 = ((i__1797) + (((x10_long)1ll)))) {
            x10_long tg__1798 = i__1797;
            
            //#line 187 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets__1792 =
              ::x10aux::nullCheck(taskGraphDependenceSets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >::__apply(
                tg__1798);
            
            //#line 188 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* dsetForTimestep__1793 =
              ::x10aux::nullCheck(dependenceSetsForTimesteps)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                tg__1798);
            
            //#line 189 "TaskBench.x10"
            ::TaskBench* taskBench__1794 = ::TaskBench::_make(dsets__1792,
                                                              dsetForTimestep__1793);
            
            //#line 190 "TaskBench.x10"
            taskBench__1794->executeTaskGraph();
        }
    }
    
}

//#line 195 "TaskBench.x10"
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
			// app.display();
			// cleanup allocated arrays
			for (int i = 0; i < argc; i++) {
				delete [] argv[i];
			}
			delete [] argv;
			
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
				// taskGraphDependenceSets(tgi) = dependenceSets;
				::x10aux::nullCheck(taskGraphDependenceSets)->
				x10::lang::Rail< x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >::
						__set(tgi, dependenceSets);
			}
			return taskGraphDependenceSets;
		
}

//#line 295 "TaskBench.x10"
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
			for (int i = 0; i < argc; i++) { // cleanup allocated arrays
				delete [] argv[i];
			}
			delete [] argv;
			
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

//#line 338 "TaskBench.x10"
::x10::lang::Rail< ::x10::lang::String* >* TaskBench::constructCPPArgs(
  ::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 339 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* argv = ::x10::lang::Rail< ::x10::lang::String* >::_make((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) + (((x10_long)1ll))));
    
    //#line 340 "TaskBench.x10"
    argv->x10::lang::Rail< ::x10::lang::String* >::__set(
      ((x10_long)0ll), (&::TaskBench_Strings::sl__1868));
    
    //#line 341 "TaskBench.x10"
    x10_long i__1714min__1799 = ((x10_long)1ll);
    x10_long i__1714max__1800 = (x10_long)(::x10aux::nullCheck(args)->FMGL(size));
    {
        x10_long i__1801;
        for (i__1801 = i__1714min__1799; ((i__1801) <= (i__1714max__1800));
             i__1801 = ((i__1801) + (((x10_long)1ll)))) {
            x10_long i__1802 = i__1801;
            
            //#line 342 "TaskBench.x10"
            argv->x10::lang::Rail< ::x10::lang::String* >::__set(
              i__1802, ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                         ((i__1802) - (((x10_long)1ll)))));
        }
    }
    
    //#line 344 "TaskBench.x10"
    return argv;
    
}

//#line 347 "TaskBench.x10"
void TaskBench::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 348 "TaskBench.x10"
    x10_int argc = ((x10_int) ((((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) + (((x10_long)1ll)))));
    
    //#line 349 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* argv = ::TaskBench::constructCPPArgs(
                                                        args);
    
    //#line 350 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >* taskGraphDependenceSets =
      ::TaskBench::dependenceSetsFromCore(argc, argv);
    
    //#line 351 "TaskBench.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* dependenceSetsForTimesteps =
      ::TaskBench::timestepsFromCore(argc, argv);
    
    //#line 352 "TaskBench.x10"
    ::TaskBench::executeTaskBench(taskGraphDependenceSets,
                                  dependenceSetsForTimesteps);
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
    buf.write(this->FMGL(maxWidth));
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
    FMGL(maxWidth) = buf.read<x10_long>();
    FMGL(plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> >();
}

::x10aux::RuntimeType TaskBench::rtt;
void TaskBench::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("TaskBench",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String TaskBench_Strings::sl__1868("");
::x10::lang::String TaskBench_Strings::sl__1864("!(a$1334 != null)");
::x10::lang::String TaskBench_Strings::sl__1866(" RECV RAIL AT TIMESTEP ");
::x10::lang::String TaskBench_Strings::sl__1867(": ");
::x10::lang::String TaskBench_Strings::sl__1863("!(a$1322 != null)");
::x10::lang::String TaskBench_Strings::sl__1865(" AT TIMESTEP ");

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
    
    ::x10::lang::Rail< x10_double >* __apply(x10_long i__1749){
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
        return "TaskBench.x10:86";
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
    
    ::x10::lang::Rail< x10_double >* __apply(x10_long i__1751){
        return ::x10::lang::Rail< x10_double >::_make(((x10_long)1ll), (-(1.0)));
        
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
        return "TaskBench.x10:87";
    }

};

#endif // TASKBENCH__PLACEINSTANCE__CLOSURE__9_CLOSURE

//#line 17 "TaskBench.x10"

//#line 20 "TaskBench.x10"

//#line 23 "TaskBench.x10"

//#line 26 "TaskBench.x10"

//#line 29 "TaskBench.x10"

//#line 32 "TaskBench.x10"

//#line 35 "TaskBench.x10"

//#line 40 "TaskBench.x10"
/** used for pushing to neighbors */
x10_long TaskBench__PlaceInstance::getSenderIndex(x10_long recvId, x10_long timestep) {
    
    //#line 41 "TaskBench.x10"
    ::x10::lang::Rail< x10_long >* neighborsSend = ::x10aux::nullCheck(this->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                     timestep);
    
    //#line 42 "TaskBench.x10"
    x10_long i__1525min__1731 = ((x10_long)0ll);
    x10_long i__1525max__1732 = (((x10_long)(::x10aux::nullCheck(neighborsSend)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__1733;
        for (i__1733 = i__1525min__1731; ((i__1733) <= (i__1525max__1732));
             i__1733 = ((i__1733) + (((x10_long)1ll)))) {
            x10_long i__1734 = i__1733;
            
            //#line 43 "TaskBench.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(neighborsSend)->x10::lang::Rail< x10_long >::__apply(
                                           i__1734), recvId)))
            {
                
                //#line 44 "TaskBench.x10"
                return i__1734;
                
            }
            
        }
    }
    
    //#line 47 "TaskBench.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::TaskBench__PlaceInstance_Strings::sl__1895), recvId), (&::TaskBench__PlaceInstance_Strings::sl__1896)), ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)), (&::TaskBench__PlaceInstance_Strings::sl__1897)), timestep)));
    
    //#line 48 "TaskBench.x10"
    return ((x10_long)-1ll);
    
}

//#line 51 "TaskBench.x10"
x10_long TaskBench__PlaceInstance::getRecvIndex(x10_long sendId,
                                                x10_long timestep) {
    
    //#line 52 "TaskBench.x10"
    ::x10::lang::Rail< x10_long >* neighborsRecv = ::x10aux::nullCheck(this->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                     timestep);
    
    //#line 53 "TaskBench.x10"
    x10_long i__1543min__1735 = ((x10_long)0ll);
    x10_long i__1543max__1736 = (((x10_long)(::x10aux::nullCheck(neighborsRecv)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__1737;
        for (i__1737 = i__1543min__1735; ((i__1737) <= (i__1543max__1736));
             i__1737 = ((i__1737) + (((x10_long)1ll)))) {
            x10_long i__1738 = i__1737;
            
            //#line 54 "TaskBench.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(neighborsRecv)->x10::lang::Rail< x10_long >::__apply(
                                           i__1738), sendId)))
            {
                
                //#line 55 "TaskBench.x10"
                return i__1738;
                
            }
            
        }
    }
    
    //#line 58 "TaskBench.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::TaskBench__PlaceInstance_Strings::sl__1898), sendId), (&::TaskBench__PlaceInstance_Strings::sl__1896)), ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)), (&::TaskBench__PlaceInstance_Strings::sl__1897)), timestep)));
    
    //#line 59 "TaskBench.x10"
    return ((x10_long)-1ll);
    
}

//#line 62 "TaskBench.x10"
x10_boolean TaskBench__PlaceInstance::allNeighborsReceived(
  x10_long timestep) {
    
    //#line 63 "TaskBench.x10"
    ::x10::lang::Rail< x10_boolean >* rail__1739 = ::x10aux::nullCheck(this->FMGL(recvReadyRails))->x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >::__apply(
                                                     timestep);
    x10_long i__1561min__1740 = ((x10_long)0ll);
    x10_long i__1561max__1741 = (x10_long)(::x10aux::nullCheck(rail__1739)->FMGL(size));
    {
        x10_long i__1742;
        for (i__1742 = i__1561min__1740; ((i__1742) < (i__1561max__1741));
             i__1742 = ((i__1742) + (((x10_long)1ll)))) {
            x10_long i__1743 = i__1742;
            
            //#line 64 "TaskBench.x10"
            if (!(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(recvReadyRails))->x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >::__apply(
                                        timestep))->x10::lang::Rail< x10_boolean >::__apply(
                    i__1743))) {
                return false;
                
            }
            
        }
    }
    
    //#line 66 "TaskBench.x10"
    return true;
    
}

//#line 69 "TaskBench.x10"
void TaskBench__PlaceInstance::_constructor(::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dependenceSets,
                                            ::x10::lang::Rail< x10_long >* dsetForTimestep,
                                            x10_long maxWidth) {
    
    //#line 14 "TaskBench.x10"
    this->TaskBench__PlaceInstance::__fieldInitializers_TaskBench_PlaceInstance();
    
    //#line 71 "TaskBench.x10"
    x10_long timesteps = (x10_long)(::x10aux::nullCheck(dsetForTimestep)->FMGL(size));
    
    //#line 72 "TaskBench.x10"
    this->FMGL(timestep) = ((x10_long)0ll);
    
    //#line 73 "TaskBench.x10"
    this->FMGL(neighborsRecvRails) = ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(timesteps);
    
    //#line 74 "TaskBench.x10"
    this->FMGL(neighborsSendRails) = ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(timesteps);
    
    //#line 75 "TaskBench.x10"
    this->FMGL(recvRails) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::_make(timesteps);
    
    //#line 76 "TaskBench.x10"
    this->FMGL(sendRails) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::_make(timesteps);
    
    //#line 77 "TaskBench.x10"
    this->FMGL(remoteSendRails) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::_make(timesteps);
    
    //#line 78 "TaskBench.x10"
    this->FMGL(recvReadyRails) = ::x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >::_make(timesteps);
    
    //#line 81 "TaskBench.x10"
    x10_long i__1580min__1755 = ((x10_long)0ll);
    x10_long i__1580max__1756 = ((timesteps) - (((x10_long)1ll)));
    {
        x10_long i__1757;
        for (i__1757 = i__1580min__1755; ((i__1757) <= (i__1580max__1756));
             i__1757 = ((i__1757) + (((x10_long)1ll)))) {
            x10_long ts__1758 = i__1757;
            
            //#line 82 "TaskBench.x10"
            x10_long dset__1744 = ::x10aux::nullCheck(dsetForTimestep)->x10::lang::Rail< x10_long >::__apply(
                                    ts__1758);
            
            //#line 83 "TaskBench.x10"
            ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> dependencePair__1745 =
              ::x10aux::nullCheck(::x10aux::nullCheck(dependenceSets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::__apply(
                                    dset__1744))->x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::__apply(
                ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
            
            //#line 84 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* neighborsSend__1746 =
              dependencePair__1745->FMGL(first);
            
            //#line 85 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* neighborsRecv__1747 =
              dependencePair__1745->FMGL(second);
            
            //#line 86 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* recv__1748 =
              ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv__1747)->FMGL(size)),
                                                                           reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TaskBench__PlaceInstance__closure__8)))TaskBench__PlaceInstance__closure__8())));
            
            //#line 87 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* send__1750 =
              ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(neighborsSend__1746)->FMGL(size)),
                                                                           reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TaskBench__PlaceInstance__closure__9)))TaskBench__PlaceInstance__closure__9())));
            
            //#line 88 "TaskBench.x10"
            ::x10::lang::GlobalRail<x10_double> plchldr__1752 =
              ::x10::lang::GlobalRail<x10_double>::_make(::x10::lang::Rail< x10_double >::_make(((x10_long)0ll)));
            
            //#line 89 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* remoteSend__1753 =
              ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv__1747)->FMGL(size)),
                                                                              plchldr__1752);
            
            //#line 90 "TaskBench.x10"
            ::x10::lang::Rail< x10_boolean >* recvReady__1754 =
              ::x10::lang::Rail< x10_boolean >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv__1747)->FMGL(size)),
                                                      false);
            
            //#line 91 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
              ts__1758, neighborsSend__1746);
            
            //#line 92 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
              ts__1758, neighborsRecv__1747);
            
            //#line 93 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(recvRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__set(
              ts__1758, recv__1748);
            
            //#line 94 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(sendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__set(
              ts__1758, send__1750);
            
            //#line 95 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(remoteSendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::__set(
              ts__1758, remoteSend__1753);
            
            //#line 96 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(recvReadyRails))->x10::lang::Rail< ::x10::lang::Rail< x10_boolean >* >::__set(
              ts__1758, recvReady__1754);
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

::x10::lang::String TaskBench__PlaceInstance_Strings::sl__1896(" FOR ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__1895("UNABLE TO FIND RECEIVER: ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__1898("UNABLE TO FIND SENDER: ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__1897(" AT TIMESTEP ");

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
