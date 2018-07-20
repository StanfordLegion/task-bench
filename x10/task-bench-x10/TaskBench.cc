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
#include <x10/lang/GlobalRef.h>
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
        
        //#line 103 "TaskBench.x10"
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
        return "TaskBench.x10:102-104";
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
        
        //#line 124 "TaskBench.x10"
        rs__1804->x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::__apply()->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__set(
          i__1803, rsr__1798);
    }
    
    // captured environment
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__1804;
    x10_long i__1803;
    ::x10::lang::GlobalRail<x10_double> rsr__1798;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->rs__1804);
        buf.write(this->i__1803);
        buf.write(this->rsr__1798);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__4* storage = ::x10aux::alloc_z<TaskBench__closure__4>();
        buf.record_reference(storage);
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs__1804 = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        x10_long that_i__1803 = buf.read<x10_long>();
        ::x10::lang::GlobalRail<x10_double> that_rsr__1798 = buf.read< ::x10::lang::GlobalRail<x10_double> >();
        TaskBench__closure__4* this_ = new (storage) TaskBench__closure__4(that_rs__1804, that_i__1803, that_rsr__1798);
        return this_;
    }
    
    TaskBench__closure__4(::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__1804, x10_long i__1803, ::x10::lang::GlobalRail<x10_double> rsr__1798) : rs__1804(rs__1804), i__1803(i__1803), rsr__1798(rsr__1798) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:123-125";
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
        
        //#line 120 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pplh__1796 = pplh->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 121 "TaskBench.x10"
        x10_long sendIndex__1797 = ::x10aux::nullCheck(pplh__1796)->getSenderIndex(
                                     recvId__1806, ts__1811);
        
        //#line 122 "TaskBench.x10"
        ::x10::lang::GlobalRail<x10_double> rsr__1798 = (__extension__ ({
            ::x10::lang::Rail< x10_double >* a__1799 = ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pplh__1796)->FMGL(sendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                             ts__1811))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                         sendIndex__1797);
            if (!((!::x10aux::struct_equals(a__1799, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__1865))));
            }
            ::x10::lang::GlobalRail<x10_double>::_make(a__1799);
        }))
        ;
        
        //#line 123 "TaskBench.x10"
        ::x10::xrx::Runtime::runAsync(rs__1804->x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::home(),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__4)))TaskBench__closure__4(rs__1804, i__1803, rsr__1798))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh;
    x10_long recvId__1806;
    x10_long ts__1811;
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__1804;
    x10_long i__1803;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pplh);
        buf.write(this->recvId__1806);
        buf.write(this->ts__1811);
        buf.write(this->rs__1804);
        buf.write(this->i__1803);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__3* storage = ::x10aux::alloc_z<TaskBench__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> that_pplh = buf.read< ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> >();
        x10_long that_recvId__1806 = buf.read<x10_long>();
        x10_long that_ts__1811 = buf.read<x10_long>();
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs__1804 = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        x10_long that_i__1803 = buf.read<x10_long>();
        TaskBench__closure__3* this_ = new (storage) TaskBench__closure__3(that_pplh, that_recvId__1806, that_ts__1811, that_rs__1804, that_i__1803);
        return this_;
    }
    
    TaskBench__closure__3(::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh, x10_long recvId__1806, x10_long ts__1811, ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__1804, x10_long i__1803) : pplh(pplh), recvId__1806(recvId__1806), ts__1811(ts__1811), rs__1804(rs__1804), i__1803(i__1803) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:118-126";
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
        
        //#line 109 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pplh1 = pplh->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 111 "TaskBench.x10"
        x10_long i__1703min__1808 = ((x10_long)0ll);
        x10_long i__1703max__1809 = (((x10_long)(::x10aux::nullCheck(dsetForTimestep)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__1810;
            for (i__1810 = i__1703min__1808; ((i__1810) <= (i__1703max__1809));
                 i__1810 = ((i__1810) + (((x10_long)1ll)))) {
                x10_long ts__1811 = i__1810;
                
                //#line 112 "TaskBench.x10"
                ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs__1804 =
                  (__extension__ ({
                    ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* a__1805 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(pplh1)->FMGL(remoteSendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::__apply(
                        ts__1811);
                    if (!((!::x10aux::struct_equals(a__1805,
                                                    reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__1864))));
                    }
                    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::_make(a__1805);
                }))
                ;
                
                //#line 114 "TaskBench.x10"
                x10_long recvId__1806 = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
                
                //#line 115 "TaskBench.x10"
                ::x10::lang::Rail< x10_long >* neighborsRecv__1807 =
                  ::x10aux::nullCheck(::x10aux::nullCheck(pplh1)->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                    ts__1811);
                
                //#line 117 "TaskBench.x10"
                x10_long i__1685min__1800 = ((x10_long)0ll);
                x10_long i__1685max__1801 = (((x10_long)(::x10aux::nullCheck(neighborsRecv__1807)->FMGL(size))) - (((x10_long)1ll)));
                {
                    x10_long i__1802;
                    for (i__1802 = i__1685min__1800; ((i__1802) <= (i__1685max__1801));
                         i__1802 = ((i__1802) + (((x10_long)1ll))))
                    {
                        x10_long i__1803 = i__1802;
                        
                        //#line 118 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(::x10::lang::Place::_make(::x10aux::nullCheck(neighborsRecv__1807)->x10::lang::Rail< x10_long >::__apply(
                                                                                  i__1803)),
                                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__3)))TaskBench__closure__3(pplh, recvId__1806, ts__1811, rs__1804, i__1803))),
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
        return "TaskBench.x10:108-130";
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
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(p, (&::TaskBench_Strings::sl__1870)), ts__1818), (&::TaskBench_Strings::sl__1867)), ::x10aux::to_string((__extension__ ({
                                                                            ::x10::lang::GlobalRail<x10_double> t__1813 =
                                                                              ::x10aux::nullCheck(remoteSend__1812)->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__apply(
                                                                                ((x10_long)0ll));
                                                                            x10_long index__1814 =
                                                                              ((x10_long)0ll);
                                                                            if (!((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                                                                                           ::x10::lang::Place::_make((t__1813->FMGL(rail))->location)))))
                                                                            {
                                                                                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TaskBench_Strings::sl__1871))));
                                                                            }
                                                                            t__1813->x10::lang::GlobalRail<x10_double>::__apply(
                                                                              index__1814);
                                                                        }))
                                                                        ))));
    }
    
    // captured environment
    ::x10::lang::Place p;
    x10_long ts__1818;
    ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* remoteSend__1812;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->p);
        buf.write(this->ts__1818);
        buf.write(this->remoteSend__1812);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TaskBench__closure__6* storage = ::x10aux::alloc_z<TaskBench__closure__6>();
        buf.record_reference(storage);
        ::x10::lang::Place that_p = buf.read< ::x10::lang::Place>();
        x10_long that_ts__1818 = buf.read<x10_long>();
        ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* that_remoteSend__1812 = buf.read< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >*>();
        TaskBench__closure__6* this_ = new (storage) TaskBench__closure__6(that_p, that_ts__1818, that_remoteSend__1812);
        return this_;
    }
    
    TaskBench__closure__6(::x10::lang::Place p, x10_long ts__1818, ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* remoteSend__1812) : p(p), ts__1818(ts__1818), remoteSend__1812(remoteSend__1812) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TaskBench.x10:150";
    }

};

#endif // TASKBENCH__CLOSURE__6_CLOSURE
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
        
        //#line 144 "TaskBench.x10"
        ::TaskBench__PlaceInstance* pi = saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*>::__apply();
        
        //#line 145 "TaskBench.x10"
        x10_long i__1725min__1815 = ((x10_long)0ll);
        x10_long i__1725max__1816 = (((x10_long)(::x10aux::nullCheck(saved_this->FMGL(dsetForTimestep))->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__1817;
            for (i__1817 = i__1725min__1815; ((i__1817) <= (i__1725max__1816));
                 i__1817 = ((i__1817) + (((x10_long)1ll)))) {
                x10_long ts__1818 = i__1817;
                
                //#line 146 "TaskBench.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(p, (&::TaskBench_Strings::sl__1866)), ts__1818), (&::TaskBench_Strings::sl__1867)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                                                                                                                                                                                                                                                 ts__1818))->x10::lang::Rail< x10_long >::toString())));
                
                //#line 147 "TaskBench.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(p, (&::TaskBench_Strings::sl__1868)), ts__1818), (&::TaskBench_Strings::sl__1867)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                                                                                                                                                                                                                                                 ts__1818))->x10::lang::Rail< x10_long >::toString())));
                
                //#line 148 "TaskBench.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(p, (&::TaskBench_Strings::sl__1869)), ts__1818), (&::TaskBench_Strings::sl__1867)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(sendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__apply(
                                                                                                                                                                                                                                                                                 ts__1818))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::toString())));
                
                //#line 149 "TaskBench.x10"
                ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* remoteSend__1812 =
                  ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(remoteSendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::__apply(
                    ts__1818);
                {
                    
                    //#line 150 "TaskBench.x10"
                    ::x10::xrx::Runtime::runAt(::x10aux::nullCheck(remoteSend__1812)->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__apply(
                                                 ((x10_long)0ll))->x10::lang::GlobalRail<x10_double>::home(),
                                               reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__6)))TaskBench__closure__6(p, ts__1818, remoteSend__1812))),
                                               ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                }
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
        return "TaskBench.x10:143-152";
    }

};

#endif // TASKBENCH__CLOSURE__5_CLOSURE

//#line 86 "TaskBench.x10"

//#line 88 "TaskBench.x10"

//#line 90 "TaskBench.x10"

//#line 92 "TaskBench.x10"

//#line 94 "TaskBench.x10"
void TaskBench::_constructor(::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets,
                             ::x10::lang::Rail< x10_long >* dsetForTimestep) {
    
    //#line 9 "TaskBench.x10"
    this->TaskBench::__fieldInitializers_TaskBench();
    
    //#line 96 "TaskBench.x10"
    this->FMGL(dependenceSets) = dsets;
    
    //#line 97 "TaskBench.x10"
    this->FMGL(dsetForTimestep) = dsetForTimestep;
    
    //#line 99 "TaskBench.x10"
    this->FMGL(maxWidth) = (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dependenceSets))->x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::__apply(
                                                            ((x10_long)0ll)))->FMGL(size));
    
    //#line 102 "TaskBench.x10"
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> pplh =
      ::x10::lang::PlaceLocalHandle<void>::make< ::TaskBench__PlaceInstance* >(
        ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::TaskBench__PlaceInstance*> >(sizeof(TaskBench__closure__1)))TaskBench__closure__1(dsets, dsetForTimestep))));
    
    //#line 105 "TaskBench.x10"
    this->FMGL(plh) = pplh;
    {
        
        //#line 107 "TaskBench.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__1841 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__1723;
                    for (p__1723 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__1723));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__1723));
                        
                        //#line 108 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__2)))TaskBench__closure__2(pplh, dsetForTimestep))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc0) {
            {
                ::x10::lang::CheckedThrowable* ct__1839 =
                  __exc0;
                {
                    ::x10::xrx::Runtime::pushException(ct__1839);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__1841);
    }
}
::TaskBench* TaskBench::_make(::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets,
                              ::x10::lang::Rail< x10_long >* dsetForTimestep)
{
    ::TaskBench* this_ = new (::x10aux::alloc_z< ::TaskBench>()) ::TaskBench();
    this_->_constructor(dsets, dsetForTimestep);
    return this_;
}



//#line 140 "TaskBench.x10"
/** Send values between places
		Steps:
		1. Each place puts data into send rail
		2. Places get data from other places via remoteSend
		3. Perform local operation on data
	*/
void TaskBench::checkTaskGraph() {
    {
        
        //#line 142 "TaskBench.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__1851 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__1743;
                    for (p__1743 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__1743));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__1743));
                        
                        //#line 143 "TaskBench.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TaskBench__closure__5)))TaskBench__closure__5(this, p))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc2) {
            {
                ::x10::lang::CheckedThrowable* ct__1849 =
                  __exc2;
                {
                    ::x10::xrx::Runtime::pushException(ct__1849);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__1851);
    }
}

//#line 183 "TaskBench.x10"
void TaskBench::executeTaskBench(::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >* taskGraphDependenceSets,
                                 ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* dependenceSetsForTimesteps) {
    
    //#line 186 "TaskBench.x10"
    x10_long i__1745min__1822 = ((x10_long)0ll);
    x10_long i__1745max__1823 = (((x10_long)(::x10aux::nullCheck(taskGraphDependenceSets)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__1824;
        for (i__1824 = i__1745min__1822; ((i__1824) <= (i__1745max__1823));
             i__1824 = ((i__1824) + (((x10_long)1ll)))) {
            x10_long tg__1825 = i__1824;
            
            //#line 187 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets__1819 =
              ::x10aux::nullCheck(taskGraphDependenceSets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >::__apply(
                tg__1825);
            
            //#line 188 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* dsetForTimestep__1820 =
              ::x10aux::nullCheck(dependenceSetsForTimesteps)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                tg__1825);
            
            //#line 189 "TaskBench.x10"
            ::TaskBench* taskBench__1821 = ::TaskBench::_make(dsets__1819,
                                                              dsetForTimestep__1820);
            
            //#line 190 "TaskBench.x10"
            taskBench__1821->checkTaskGraph();
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
      ((x10_long)0ll), (&::TaskBench_Strings::sl__1872));
    
    //#line 341 "TaskBench.x10"
    x10_long i__1763min__1826 = ((x10_long)1ll);
    x10_long i__1763max__1827 = (x10_long)(::x10aux::nullCheck(args)->FMGL(size));
    {
        x10_long i__1828;
        for (i__1828 = i__1763min__1826; ((i__1828) <= (i__1763max__1827));
             i__1828 = ((i__1828) + (((x10_long)1ll)))) {
            x10_long i__1829 = i__1828;
            
            //#line 342 "TaskBench.x10"
            argv->x10::lang::Rail< ::x10::lang::String* >::__set(
              i__1829, ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                         ((i__1829) - (((x10_long)1ll)))));
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

::x10::lang::String TaskBench_Strings::sl__1872("");
::x10::lang::String TaskBench_Strings::sl__1865("!(a$1184 != null)");
::x10::lang::String TaskBench_Strings::sl__1871("!(here == t$1531.rail.home)");
::x10::lang::String TaskBench_Strings::sl__1867(": ");
::x10::lang::String TaskBench_Strings::sl__1869(" SEND RAIL AT TIMESTEP ");
::x10::lang::String TaskBench_Strings::sl__1866(" NEIGHBORS SEND AT TIMESTEP ");
::x10::lang::String TaskBench_Strings::sl__1864("!(a$1172 != null)");
::x10::lang::String TaskBench_Strings::sl__1870(" REMOTE SEND AT TIMESTEP ");
::x10::lang::String TaskBench_Strings::sl__1868(" NEIGHBORS RECV AT TIMESTEP ");

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
#ifndef TASKBENCH__PLACEINSTANCE__CLOSURE__7_CLOSURE
#define TASKBENCH__PLACEINSTANCE__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class TaskBench__PlaceInstance__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TaskBench__PlaceInstance__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_double >* __apply(x10_long i__1789){
        return ::x10::lang::Rail< x10_double >::_make(((x10_long)1ll), (-(1.0)));
        
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
        return "TaskBench.x10:73";
    }

};

#endif // TASKBENCH__PLACEINSTANCE__CLOSURE__7_CLOSURE

//#line 17 "TaskBench.x10"

//#line 20 "TaskBench.x10"

//#line 23 "TaskBench.x10"

//#line 26 "TaskBench.x10"

//#line 29 "TaskBench.x10"

//#line 32 "TaskBench.x10"

//#line 35 "TaskBench.x10"

//#line 40 "TaskBench.x10"
/** used for pushing to neighbors */
x10_boolean TaskBench__PlaceInstance::allNeighborsReceived() {
    
    //#line 41 "TaskBench.x10"
    return (::x10aux::struct_equals(this->FMGL(neighborsReceived), (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                                                                    this->FMGL(timestep)))->FMGL(size))));
    
}

//#line 44 "TaskBench.x10"
x10_long TaskBench__PlaceInstance::getSenderIndex(x10_long recvId,
                                                  x10_long timestep) {
    
    //#line 45 "TaskBench.x10"
    ::x10::lang::Rail< x10_long >* neighborsSend = ::x10aux::nullCheck(this->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                     timestep);
    
    //#line 46 "TaskBench.x10"
    x10_long i__1649min__1780 = ((x10_long)0ll);
    x10_long i__1649max__1781 = (((x10_long)(::x10aux::nullCheck(neighborsSend)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__1782;
        for (i__1782 = i__1649min__1780; ((i__1782) <= (i__1649max__1781));
             i__1782 = ((i__1782) + (((x10_long)1ll)))) {
            x10_long i__1783 = i__1782;
            
            //#line 47 "TaskBench.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(neighborsSend)->x10::lang::Rail< x10_long >::__apply(
                                           i__1783), recvId)))
            {
                
                //#line 48 "TaskBench.x10"
                return i__1783;
                
            }
            
        }
    }
    
    //#line 51 "TaskBench.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::TaskBench__PlaceInstance_Strings::sl__1889), recvId), (&::TaskBench__PlaceInstance_Strings::sl__1890)), ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)), (&::TaskBench__PlaceInstance_Strings::sl__1891)), timestep)));
    
    //#line 52 "TaskBench.x10"
    return ((x10_long)-1ll);
    
}

//#line 55 "TaskBench.x10"
void TaskBench__PlaceInstance::_constructor(::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dependenceSets,
                                            ::x10::lang::Rail< x10_long >* dsetForTimestep,
                                            x10_long maxWidth) {
    
    //#line 14 "TaskBench.x10"
    this->TaskBench__PlaceInstance::__fieldInitializers_TaskBench_PlaceInstance();
    
    //#line 57 "TaskBench.x10"
    x10_long timesteps = (x10_long)(::x10aux::nullCheck(dsetForTimestep)->FMGL(size));
    
    //#line 58 "TaskBench.x10"
    this->FMGL(timestep) = ((x10_long)0ll);
    
    //#line 59 "TaskBench.x10"
    this->FMGL(neighborsReceived) = ((x10_long)0ll);
    
    //#line 60 "TaskBench.x10"
    this->FMGL(neighborsRecvRails) = ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(timesteps);
    
    //#line 61 "TaskBench.x10"
    this->FMGL(neighborsSendRails) = ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(timesteps);
    
    //#line 62 "TaskBench.x10"
    this->FMGL(sendRails) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::_make(timesteps);
    
    //#line 63 "TaskBench.x10"
    this->FMGL(remoteSendRails) = ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::_make(timesteps);
    
    //#line 65 "TaskBench.x10"
    this->FMGL(recv) = ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make(maxWidth);
    
    //#line 68 "TaskBench.x10"
    x10_long i__1667min__1792 = ((x10_long)0ll);
    x10_long i__1667max__1793 = ((timesteps) - (((x10_long)1ll)));
    {
        x10_long i__1794;
        for (i__1794 = i__1667min__1792; ((i__1794) <= (i__1667max__1793));
             i__1794 = ((i__1794) + (((x10_long)1ll)))) {
            x10_long ts__1795 = i__1794;
            
            //#line 69 "TaskBench.x10"
            x10_long dset__1784 = ::x10aux::nullCheck(dsetForTimestep)->x10::lang::Rail< x10_long >::__apply(
                                    ts__1795);
            
            //#line 70 "TaskBench.x10"
            ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> dependencePair__1785 =
              ::x10aux::nullCheck(::x10aux::nullCheck(dependenceSets)->x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >::__apply(
                                    dset__1784))->x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >::__apply(
                ::x10::lang::Place::_make(::x10aux::here)->FMGL(id));
            
            //#line 71 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* neighborsSend__1786 =
              dependencePair__1785->FMGL(first);
            
            //#line 72 "TaskBench.x10"
            ::x10::lang::Rail< x10_long >* neighborsRecv__1787 =
              dependencePair__1785->FMGL(second);
            
            //#line 73 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* send__1788 =
              ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make((x10_long)(::x10aux::nullCheck(neighborsSend__1786)->FMGL(size)),
                                                                           reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TaskBench__PlaceInstance__closure__7)))TaskBench__PlaceInstance__closure__7())));
            
            //#line 74 "TaskBench.x10"
            ::x10::lang::GlobalRail<x10_double> plchldr__1790 =
              ::x10::lang::GlobalRail<x10_double>::_make(::x10::lang::Rail< x10_double >::_make(((x10_long)0ll)));
            
            //#line 75 "TaskBench.x10"
            ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* remoteSend__1791 =
              ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::_make((x10_long)(::x10aux::nullCheck(neighborsRecv__1787)->FMGL(size)),
                                                                              plchldr__1790);
            
            //#line 76 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(neighborsSendRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
              ts__1795, neighborsSend__1786);
            
            //#line 77 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(neighborsRecvRails))->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
              ts__1795, neighborsRecv__1787);
            
            //#line 78 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(sendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >::__set(
              ts__1795, send__1788);
            
            //#line 79 "TaskBench.x10"
            ::x10aux::nullCheck(this->FMGL(remoteSendRails))->x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >::__set(
              ts__1795, remoteSend__1791);
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
    buf.write(this->FMGL(recv));
    buf.write(this->FMGL(remoteSendRails));
    buf.write(this->FMGL(neighborsSendRails));
    buf.write(this->FMGL(neighborsRecvRails));
    buf.write(this->FMGL(timestep));
    buf.write(this->FMGL(neighborsReceived));
    
}

::x10::lang::Reference* ::TaskBench__PlaceInstance::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::TaskBench__PlaceInstance* this_ = new (::x10aux::alloc_z< ::TaskBench__PlaceInstance>()) ::TaskBench__PlaceInstance();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void TaskBench__PlaceInstance::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(sendRails) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* >*>();
    FMGL(recv) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>();
    FMGL(remoteSendRails) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* >*>();
    FMGL(neighborsSendRails) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >*>();
    FMGL(neighborsRecvRails) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >*>();
    FMGL(timestep) = buf.read<x10_long>();
    FMGL(neighborsReceived) = buf.read<x10_long>();
}

::x10aux::RuntimeType TaskBench__PlaceInstance::rtt;
void TaskBench__PlaceInstance::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("TaskBench.PlaceInstance",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String TaskBench__PlaceInstance_Strings::sl__1890(" FOR ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__1889("UNABLE TO FIND SENDER: ");
::x10::lang::String TaskBench__PlaceInstance_Strings::sl__1891(" AT TIMESTEP ");

::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TaskBench__PlaceInstance__closure__7>TaskBench__PlaceInstance__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TaskBench__PlaceInstance__closure__7::__apply, &TaskBench__PlaceInstance__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TaskBench__PlaceInstance__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >, &TaskBench__PlaceInstance__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TaskBench__PlaceInstance__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TaskBench__PlaceInstance__closure__7::_deserialize);

/* END of TaskBench$PlaceInstance */
/*************************************************/
