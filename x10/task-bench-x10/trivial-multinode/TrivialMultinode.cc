/*************************************************/
/* START of TrivialMultinode */
#include <TrivialMultinode.h>

#include <x10/lang/PlaceLocalHandle.h>
#include <TrivialMultinode__PlaceInstance.h>
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
#include <x10/lang/Rail.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Long.h>
#include <x10/lang/GlobalRef.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef TRIVIALMULTINODE__CLOSURE__1_CLOSURE
#define TRIVIALMULTINODE__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class TrivialMultinode__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::TrivialMultinode__PlaceInstance*>::itable<TrivialMultinode__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::TrivialMultinode__PlaceInstance* __apply(){
        
        //#line 38 "TrivialMultinode.x10"
        ::TrivialMultinode__PlaceInstance* alloc__1525 =  (new (::x10aux::alloc_z< ::TrivialMultinode__PlaceInstance>()) ::TrivialMultinode__PlaceInstance());
        (alloc__1525)->::TrivialMultinode__PlaceInstance::_constructor();
        return alloc__1525;
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TrivialMultinode__closure__1* storage = ::x10aux::alloc_z<TrivialMultinode__closure__1>();
        buf.record_reference(storage);
        TrivialMultinode__closure__1* this_ = new (storage) TrivialMultinode__closure__1();
        return this_;
    }
    
    TrivialMultinode__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::TrivialMultinode__PlaceInstance*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::TrivialMultinode__PlaceInstance*> >(); }
    
    const char* toNativeString() {
        return "TrivialMultinode.x10:37-39";
    }

};

#endif // TRIVIALMULTINODE__CLOSURE__1_CLOSURE
#ifndef TRIVIALMULTINODE__CLOSURE__4_CLOSURE
#define TRIVIALMULTINODE__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TrivialMultinode__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TrivialMultinode__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 51 "TrivialMultinode.x10"
        rs->x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::__apply()->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__set(
          ((x10_long)0ll), rsr);
    }
    
    // captured environment
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs;
    ::x10::lang::GlobalRail<x10_double> rsr;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->rs);
        buf.write(this->rsr);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TrivialMultinode__closure__4* storage = ::x10aux::alloc_z<TrivialMultinode__closure__4>();
        buf.record_reference(storage);
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        ::x10::lang::GlobalRail<x10_double> that_rsr = buf.read< ::x10::lang::GlobalRail<x10_double> >();
        TrivialMultinode__closure__4* this_ = new (storage) TrivialMultinode__closure__4(that_rs, that_rsr);
        return this_;
    }
    
    TrivialMultinode__closure__4(::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs, ::x10::lang::GlobalRail<x10_double> rsr) : rs(rs), rsr(rsr) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TrivialMultinode.x10:50-52";
    }

};

#endif // TRIVIALMULTINODE__CLOSURE__4_CLOSURE
#ifndef TRIVIALMULTINODE__CLOSURE__3_CLOSURE
#define TRIVIALMULTINODE__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TrivialMultinode__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TrivialMultinode__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 48 "TrivialMultinode.x10"
        ::TrivialMultinode__PlaceInstance* pi2 = plh1->x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*>::__apply();
        
        //#line 49 "TrivialMultinode.x10"
        ::x10::lang::GlobalRail<x10_double> rsr = (__extension__ ({
            ::x10::lang::Rail< x10_double >* a__213 = ::x10aux::nullCheck(::x10aux::nullCheck(pi2)->FMGL(sendRail))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                        ((x10_long)0ll));
            if (!((!::x10aux::struct_equals(a__213, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TrivialMultinode_Strings::sl__1569))));
            }
            (__extension__ ({
                ::x10::lang::GlobalRail<x10_double> alloc__267 =
                   ::x10::lang::GlobalRail<x10_double>::_alloc();
                (alloc__267)->::x10::lang::GlobalRail<x10_double>::_constructor(
                  a__213);
                alloc__267;
            }))
            ;
        }))
        ;
        
        //#line 50 "TrivialMultinode.x10"
        ::x10::xrx::Runtime::runAsync(::x10::lang::Place::_make((rs->FMGL(rail))->location),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TrivialMultinode__closure__4)))TrivialMultinode__closure__4(rs, rsr))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*> plh1;
    ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->plh1);
        buf.write(this->rs);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TrivialMultinode__closure__3* storage = ::x10aux::alloc_z<TrivialMultinode__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*> that_plh1 = buf.read< ::x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*> >();
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > that_rs = buf.read< ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > >();
        TrivialMultinode__closure__3* this_ = new (storage) TrivialMultinode__closure__3(that_plh1, that_rs);
        return this_;
    }
    
    TrivialMultinode__closure__3(::x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*> plh1, ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs) : plh1(plh1), rs(rs) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TrivialMultinode.x10:47-53";
    }

};

#endif // TRIVIALMULTINODE__CLOSURE__3_CLOSURE
#ifndef TRIVIALMULTINODE__CLOSURE__2_CLOSURE
#define TRIVIALMULTINODE__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TrivialMultinode__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TrivialMultinode__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 44 "TrivialMultinode.x10"
        ::TrivialMultinode__PlaceInstance* pi = plh1->x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*>::__apply();
        
        //#line 45 "TrivialMultinode.x10"
        ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > rs =
          (__extension__ ({
            ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* a__210 =
              ::x10aux::nullCheck(pi)->FMGL(remoteSend);
            if (!((!::x10aux::struct_equals(a__210, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TrivialMultinode_Strings::sl__1568))));
            }
            (__extension__ ({
                ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> > alloc__265 =
                   ::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::_alloc();
                (alloc__265)->::x10::lang::GlobalRail< ::x10::lang::GlobalRail<x10_double> >::_constructor(
                  a__210);
                alloc__265;
            }))
            ;
        }))
        ;
        
        //#line 47 "TrivialMultinode.x10"
        ::x10::xrx::Runtime::runAsync((__extension__ ({
                                          ::x10::lang::Place alloc__266 =
                                             ::x10::lang::Place::_alloc();
                                          (alloc__266)->::x10::lang::Place::_constructor(
                                            ::x10aux::nullCheck(pi)->FMGL(neighbor));
                                          alloc__266;
                                      }))
                                      , reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TrivialMultinode__closure__3)))TrivialMultinode__closure__3(plh1, rs))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*> plh1;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->plh1);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TrivialMultinode__closure__2* storage = ::x10aux::alloc_z<TrivialMultinode__closure__2>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*> that_plh1 = buf.read< ::x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*> >();
        TrivialMultinode__closure__2* this_ = new (storage) TrivialMultinode__closure__2(that_plh1);
        return this_;
    }
    
    TrivialMultinode__closure__2(::x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*> plh1) : plh1(plh1) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TrivialMultinode.x10:43-54";
    }

};

#endif // TRIVIALMULTINODE__CLOSURE__2_CLOSURE
#ifndef TRIVIALMULTINODE__CLOSURE__5_CLOSURE
#define TRIVIALMULTINODE__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TrivialMultinode__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TrivialMultinode__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 61 "TrivialMultinode.x10"
        ::TrivialMultinode__PlaceInstance* pi = saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*>::__apply();
        {
            
            //#line 62 "TrivialMultinode.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__1541 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(sendRail))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                          ((x10_long)0ll)))->x10::lang::Rail< x10_double >::__set(
                      ((x10_long)0ll), ((x10_double) (::x10::lang::Place::_make(::x10aux::here)->FMGL(id))));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2) {
                {
                    ::x10::lang::CheckedThrowable* ct__1539 =
                      __exc2;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__1539);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__1541);
        }
    }
    
    // captured environment
    ::TrivialMultinode* saved_this;
    
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
        TrivialMultinode__closure__5* storage = ::x10aux::alloc_z<TrivialMultinode__closure__5>();
        buf.record_reference(storage);
        ::TrivialMultinode* that_saved_this = buf.read< ::TrivialMultinode*>();
        TrivialMultinode__closure__5* this_ = new (storage) TrivialMultinode__closure__5(that_saved_this);
        return this_;
    }
    
    TrivialMultinode__closure__5(::TrivialMultinode* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TrivialMultinode.x10:60-63";
    }

};

#endif // TRIVIALMULTINODE__CLOSURE__5_CLOSURE
#ifndef TRIVIALMULTINODE__CLOSURE__6_CLOSURE
#define TRIVIALMULTINODE__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TrivialMultinode__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TrivialMultinode__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 68 "TrivialMultinode.x10"
        ::TrivialMultinode__PlaceInstance* pi = saved_this->FMGL(plh)->x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*>::__apply();
        {
            
            //#line 69 "TrivialMultinode.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__1552 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::lang::Rail< void >::asyncCopy< x10_double >(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(remoteSend))->x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::__apply(
                                                                         ((x10_long)0ll)),
                                                                       ((x10_long)0ll),
                                                                       ::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recvRail))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                                         ((x10_long)0ll)),
                                                                       ((x10_long)0ll),
                                                                       (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recvRail))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                                                                        ((x10_long)0ll)))->FMGL(size)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc4) {
                {
                    ::x10::lang::CheckedThrowable* ct__1550 =
                      __exc4;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__1550);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__1552);
        }
        
        //#line 70 "TrivialMultinode.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(p, (&::TrivialMultinode_Strings::sl__1570)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(pi)->FMGL(recvRail))->x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::__apply(
                                                                                                                                                                          ((x10_long)0ll)))->x10::lang::Rail< x10_double >::toString())));
    }
    
    // captured environment
    ::TrivialMultinode* saved_this;
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
        TrivialMultinode__closure__6* storage = ::x10aux::alloc_z<TrivialMultinode__closure__6>();
        buf.record_reference(storage);
        ::TrivialMultinode* that_saved_this = buf.read< ::TrivialMultinode*>();
        ::x10::lang::Place that_p = buf.read< ::x10::lang::Place>();
        TrivialMultinode__closure__6* this_ = new (storage) TrivialMultinode__closure__6(that_saved_this, that_p);
        return this_;
    }
    
    TrivialMultinode__closure__6(::TrivialMultinode* saved_this, ::x10::lang::Place p) : saved_this(saved_this), p(p) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "TrivialMultinode.x10:67-71";
    }

};

#endif // TRIVIALMULTINODE__CLOSURE__6_CLOSURE

//#line 33 "TrivialMultinode.x10"

//#line 35 "TrivialMultinode.x10"
void TrivialMultinode::_constructor() {
    
    //#line 37 "TrivialMultinode.x10"
    ::x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*> plh1 =
      ::x10::lang::PlaceLocalHandle<void>::make< ::TrivialMultinode__PlaceInstance* >(
        ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_0< ::TrivialMultinode__PlaceInstance*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::TrivialMultinode__PlaceInstance*> >(sizeof(TrivialMultinode__closure__1)))TrivialMultinode__closure__1())));
    
    //#line 40 "TrivialMultinode.x10"
    this->FMGL(plh) = plh1;
    {
        
        //#line 42 "TrivialMultinode.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__1537 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__311;
                    for (p__311 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__311));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__311));
                        
                        //#line 43 "TrivialMultinode.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TrivialMultinode__closure__2)))TrivialMultinode__closure__2(plh1))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc0) {
            {
                ::x10::lang::CheckedThrowable* ct__1535 =
                  __exc0;
                {
                    ::x10::xrx::Runtime::pushException(ct__1535);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__1537);
    }
}
::TrivialMultinode* TrivialMultinode::_make() {
    ::TrivialMultinode* this_ = new (::x10aux::alloc_z< ::TrivialMultinode>()) ::TrivialMultinode();
    this_->_constructor();
    return this_;
}



//#line 58 "TrivialMultinode.x10"
void TrivialMultinode::broadcast() {
    {
        
        //#line 59 "TrivialMultinode.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__1548 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__313;
                    for (p__313 = ::x10::lang::Place::places()->iterator();
                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__313));
                         ) {
                        ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__313));
                        
                        //#line 60 "TrivialMultinode.x10"
                        ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TrivialMultinode__closure__5)))TrivialMultinode__closure__5(this))),
                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc3) {
            {
                ::x10::lang::CheckedThrowable* ct__1546 =
                  __exc3;
                {
                    ::x10::xrx::Runtime::pushException(ct__1546);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__1548);
    }
    
    //#line 66 "TrivialMultinode.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Place>* p__315;
        for (p__315 = ::x10::lang::Place::places()->iterator();
             ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__315));
             ) {
            ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__315));
            
            //#line 67 "TrivialMultinode.x10"
            ::x10::xrx::Runtime::runAsync(p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TrivialMultinode__closure__6)))TrivialMultinode__closure__6(this, p))),
                                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
    }
    
}

//#line 75 "TrivialMultinode.x10"
void TrivialMultinode::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 76 "TrivialMultinode.x10"
    ::TrivialMultinode* trivialMultinode =  (new (::x10aux::alloc_z< ::TrivialMultinode>()) ::TrivialMultinode());
    (trivialMultinode)->::TrivialMultinode::_constructor();
    
    //#line 77 "TrivialMultinode.x10"
    trivialMultinode->broadcast();
}

//#line 3 "TrivialMultinode.x10"
::TrivialMultinode* TrivialMultinode::TrivialMultinode____this__TrivialMultinode(
  ) {
    return this;
    
}
void TrivialMultinode::__fieldInitializers_TrivialMultinode(
  ) {
 
}
const ::x10aux::serialization_id_t TrivialMultinode::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::TrivialMultinode::_deserializer);

void TrivialMultinode::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(plh));
    
}

::x10::lang::Reference* ::TrivialMultinode::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::TrivialMultinode* this_ = new (::x10aux::alloc_z< ::TrivialMultinode>()) ::TrivialMultinode();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void TrivialMultinode::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(plh) = buf.read< ::x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*> >();
}

::x10aux::RuntimeType TrivialMultinode::rtt;
void TrivialMultinode::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("TrivialMultinode",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String TrivialMultinode_Strings::sl__1570(" ");
::x10::lang::String TrivialMultinode_Strings::sl__1569("!(a$213 != null)");
::x10::lang::String TrivialMultinode_Strings::sl__1568("!(a$210 != null)");

::x10::lang::Fun_0_0< ::TrivialMultinode__PlaceInstance*>::itable<TrivialMultinode__closure__1>TrivialMultinode__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TrivialMultinode__closure__1::__apply, &TrivialMultinode__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TrivialMultinode__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::TrivialMultinode__PlaceInstance*> >, &TrivialMultinode__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TrivialMultinode__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TrivialMultinode__closure__1::_deserialize);

::x10::lang::VoidFun_0_0::itable<TrivialMultinode__closure__4>TrivialMultinode__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TrivialMultinode__closure__4::__apply, &TrivialMultinode__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TrivialMultinode__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TrivialMultinode__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TrivialMultinode__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TrivialMultinode__closure__4::_deserialize);
const ::x10aux::serialization_id_t TrivialMultinode__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TrivialMultinode__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<TrivialMultinode__closure__3>TrivialMultinode__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TrivialMultinode__closure__3::__apply, &TrivialMultinode__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TrivialMultinode__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TrivialMultinode__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TrivialMultinode__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TrivialMultinode__closure__3::_deserialize);
const ::x10aux::serialization_id_t TrivialMultinode__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TrivialMultinode__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<TrivialMultinode__closure__2>TrivialMultinode__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TrivialMultinode__closure__2::__apply, &TrivialMultinode__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TrivialMultinode__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TrivialMultinode__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TrivialMultinode__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TrivialMultinode__closure__2::_deserialize);
const ::x10aux::serialization_id_t TrivialMultinode__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TrivialMultinode__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<TrivialMultinode__closure__5>TrivialMultinode__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TrivialMultinode__closure__5::__apply, &TrivialMultinode__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TrivialMultinode__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TrivialMultinode__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TrivialMultinode__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TrivialMultinode__closure__5::_deserialize);
const ::x10aux::serialization_id_t TrivialMultinode__closure__5::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TrivialMultinode__closure__5::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<TrivialMultinode__closure__6>TrivialMultinode__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TrivialMultinode__closure__6::__apply, &TrivialMultinode__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TrivialMultinode__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TrivialMultinode__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TrivialMultinode__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TrivialMultinode__closure__6::_deserialize);
const ::x10aux::serialization_id_t TrivialMultinode__closure__6::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TrivialMultinode__closure__6::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of TrivialMultinode */
/*************************************************/
/*************************************************/
/* START of TrivialMultinode$PlaceInstance */
#include <TrivialMultinode__PlaceInstance.h>

#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/GlobalRail.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Place.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/Synthetic.h>
#ifndef TRIVIALMULTINODE__PLACEINSTANCE__CLOSURE__7_CLOSURE
#define TRIVIALMULTINODE__PLACEINSTANCE__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class TrivialMultinode__PlaceInstance__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TrivialMultinode__PlaceInstance__closure__7> _itable;
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
        TrivialMultinode__PlaceInstance__closure__7* storage = ::x10aux::alloc_z<TrivialMultinode__PlaceInstance__closure__7>();
        buf.record_reference(storage);
        TrivialMultinode__PlaceInstance__closure__7* this_ = new (storage) TrivialMultinode__PlaceInstance__closure__7();
        return this_;
    }
    
    TrivialMultinode__PlaceInstance__closure__7() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(); }
    
    const char* toNativeString() {
        return "TrivialMultinode.x10:22";
    }

};

#endif // TRIVIALMULTINODE__PLACEINSTANCE__CLOSURE__7_CLOSURE
#ifndef TRIVIALMULTINODE__PLACEINSTANCE__CLOSURE__8_CLOSURE
#define TRIVIALMULTINODE__PLACEINSTANCE__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class TrivialMultinode__PlaceInstance__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TrivialMultinode__PlaceInstance__closure__8> _itable;
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
        TrivialMultinode__PlaceInstance__closure__8* storage = ::x10aux::alloc_z<TrivialMultinode__PlaceInstance__closure__8>();
        buf.record_reference(storage);
        TrivialMultinode__PlaceInstance__closure__8* this_ = new (storage) TrivialMultinode__PlaceInstance__closure__8();
        return this_;
    }
    
    TrivialMultinode__PlaceInstance__closure__8() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(); }
    
    const char* toNativeString() {
        return "TrivialMultinode.x10:23";
    }

};

#endif // TRIVIALMULTINODE__PLACEINSTANCE__CLOSURE__8_CLOSURE

//#line 7 "TrivialMultinode.x10"

//#line 9 "TrivialMultinode.x10"

//#line 11 "TrivialMultinode.x10"

//#line 13 "TrivialMultinode.x10"

//#line 15 "TrivialMultinode.x10"
void TrivialMultinode__PlaceInstance::_constructor() {
    
    //#line 17 "TrivialMultinode.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here)->FMGL(id),
                                 ((x10_long)0ll)))) {
        
        //#line 18 "TrivialMultinode.x10"
        this->FMGL(neighbor) = ((x10_long)1ll);
    } else {
        
        //#line 20 "TrivialMultinode.x10"
        this->FMGL(neighbor) = ((x10_long)0ll);
    }
    
    //#line 22 "TrivialMultinode.x10"
    this->FMGL(sendRail) = ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make(((x10_long)1ll),
                                                                                        reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TrivialMultinode__PlaceInstance__closure__7)))TrivialMultinode__PlaceInstance__closure__7())));
    
    //#line 23 "TrivialMultinode.x10"
    this->FMGL(recvRail) = ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >::_make(((x10_long)1ll),
                                                                                        reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >(sizeof(TrivialMultinode__PlaceInstance__closure__8)))TrivialMultinode__PlaceInstance__closure__8())));
    
    //#line 25 "TrivialMultinode.x10"
    ::x10::lang::GlobalRail<x10_double> plchldr =  ::x10::lang::GlobalRail<x10_double>::_alloc();
    (plchldr)->::x10::lang::GlobalRail<x10_double>::_constructor(
      ::x10::lang::Rail< x10_double >::_make(((x10_long)0ll)));
    
    //#line 26 "TrivialMultinode.x10"
    ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* rs =
      ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >::_make(((x10_long)1ll),
                                                                      plchldr);
    
    //#line 27 "TrivialMultinode.x10"
    this->FMGL(remoteSend) = rs;
}
::TrivialMultinode__PlaceInstance* TrivialMultinode__PlaceInstance::_make(
  ) {
    ::TrivialMultinode__PlaceInstance* this_ = new (::x10aux::alloc_z< ::TrivialMultinode__PlaceInstance>()) ::TrivialMultinode__PlaceInstance();
    this_->_constructor();
    return this_;
}



//#line 5 "TrivialMultinode.x10"
::TrivialMultinode__PlaceInstance* TrivialMultinode__PlaceInstance::TrivialMultinode__PlaceInstance____this__TrivialMultinode__PlaceInstance(
  ) {
    return this;
    
}
void TrivialMultinode__PlaceInstance::__fieldInitializers_TrivialMultinode_PlaceInstance(
  ) {
 
}
const ::x10aux::serialization_id_t TrivialMultinode__PlaceInstance::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::TrivialMultinode__PlaceInstance::_deserializer);

void TrivialMultinode__PlaceInstance::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(neighbor));
    buf.write(this->FMGL(sendRail));
    buf.write(this->FMGL(recvRail));
    buf.write(this->FMGL(remoteSend));
    
}

::x10::lang::Reference* ::TrivialMultinode__PlaceInstance::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::TrivialMultinode__PlaceInstance* this_ = new (::x10aux::alloc_z< ::TrivialMultinode__PlaceInstance>()) ::TrivialMultinode__PlaceInstance();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void TrivialMultinode__PlaceInstance::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(neighbor) = buf.read<x10_long>();
    FMGL(sendRail) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>();
    FMGL(recvRail) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >*>();
    FMGL(remoteSend) = buf.read< ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >*>();
}

::x10aux::RuntimeType TrivialMultinode__PlaceInstance::rtt;
void TrivialMultinode__PlaceInstance::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("TrivialMultinode.PlaceInstance",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TrivialMultinode__PlaceInstance__closure__7>TrivialMultinode__PlaceInstance__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TrivialMultinode__PlaceInstance__closure__7::__apply, &TrivialMultinode__PlaceInstance__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TrivialMultinode__PlaceInstance__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >, &TrivialMultinode__PlaceInstance__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TrivialMultinode__PlaceInstance__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TrivialMultinode__PlaceInstance__closure__7::_deserialize);

::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*>::itable<TrivialMultinode__PlaceInstance__closure__8>TrivialMultinode__PlaceInstance__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TrivialMultinode__PlaceInstance__closure__8::__apply, &TrivialMultinode__PlaceInstance__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TrivialMultinode__PlaceInstance__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_double >*> >, &TrivialMultinode__PlaceInstance__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TrivialMultinode__PlaceInstance__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TrivialMultinode__PlaceInstance__closure__8::_deserialize);

/* END of TrivialMultinode$PlaceInstance */
/*************************************************/
