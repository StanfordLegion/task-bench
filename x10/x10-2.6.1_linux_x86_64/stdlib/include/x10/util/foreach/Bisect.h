#ifndef __X10_UTIL_FOREACH_BISECT_H
#define __X10_UTIL_FOREACH_BISECT_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(Z3), class TPMGL(Z4), class TPMGL(U)>
class Fun_0_4;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace foreach { 

class Bisect : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void _kwd__for(::x10::lang::LongRange range, x10_long grainSize,
                          ::x10::lang::VoidFun_0_1< ::x10::lang::LongRange>* body);
    static void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1< ::x10::lang::LongRange>* body);
    static void _kwd__for(::x10::lang::LongRange range, x10_long grainSize,
                          ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void doBisect1D(x10_long start, x10_long end, x10_long grainSize,
                           ::x10::lang::VoidFun_0_1< ::x10::lang::LongRange>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       x10_long grainSize,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       x10_long grainSize,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) doBisectReduce1D(
      x10_long start, x10_long end, x10_long grainSize, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body);
    static void _kwd__for(::x10::array::DenseIterationSpace_2* space,
                          x10_long grainSize0, x10_long grainSize1,
                          ::x10::lang::VoidFun_0_1< ::x10::array::DenseIterationSpace_2*>* body);
    static void _kwd__for(::x10::array::DenseIterationSpace_2* space,
                          ::x10::lang::VoidFun_0_1< ::x10::array::DenseIterationSpace_2*>* body);
    static void _kwd__for(::x10::array::DenseIterationSpace_2* space,
                          x10_long grainSize0, x10_long grainSize1,
                          ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void _kwd__for(::x10::array::DenseIterationSpace_2* space,
                          ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void doBisect2D(x10_long s0, x10_long e0, x10_long s1,
                           x10_long e1, x10_long g1, x10_long g2,
                           ::x10::lang::VoidFun_0_1< ::x10::array::DenseIterationSpace_2*>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::array::DenseIterationSpace_2* space,
                                                       x10_long grainSize0,
                                                       x10_long grainSize1,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::array::DenseIterationSpace_2* space,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) doBisectReduce2D(
      x10_long s0, x10_long e0, x10_long s1, x10_long e1,
      x10_long g1, x10_long g2, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body);
    virtual ::x10::util::foreach::Bisect* x10__util__foreach__Bisect____this__x10__util__foreach__Bisect(
      );
    void _constructor();
    
    static ::x10::util::foreach::Bisect* _make();
    
    virtual void __fieldInitializers_x10_util_foreach_Bisect(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_UTIL_FOREACH_BISECT_H

namespace x10 { namespace util { namespace foreach { 
class Bisect;
} } } 

#ifndef X10_UTIL_FOREACH_BISECT_H_NODEPS
#define X10_UTIL_FOREACH_BISECT_H_NODEPS
#include <x10/lang/LongRange.h>
#include <x10/lang/Long.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/Fun_0_4.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__4_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(::x10::lang::LongRange range__138466){
        
        //#line 115 "x10/util/foreach/Bisect.x10"
        TPMGL(T) myRes__138467 = identity;
        
        //#line 116 "x10/util/foreach/Bisect.x10"
        x10_long i__137924min__138453 = range__138466->FMGL(min);
        x10_long i__137924max__138454 = range__138466->FMGL(max);
        {
            x10_long i__138455;
            for (i__138455 = i__137924min__138453; ((i__138455) <= (i__137924max__138454));
                 i__138455 = ((i__138455) + (((x10_long)1ll)))) {
                
                //#line 117 "x10/util/foreach/Bisect.x10"
                myRes__138467 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes__138467, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__138455));
            }
        }
        
        //#line 119 "x10/util/foreach/Bisect.x10"
        return myRes__138467;
        
    }
    
    // captured environment
    TPMGL(T) identity;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity);
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__4<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__4<TPMGL(T) >(that_identity, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__4(TPMGL(T) identity, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) : identity(identity), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:114-120";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__4<TPMGL(T) > >x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__4<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >, &x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__4_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__5_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__5<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(::x10::lang::LongRange range__138499){
        
        //#line 115 "x10/util/foreach/Bisect.x10"
        TPMGL(T) myRes__138500 = identity__138504;
        
        //#line 116 "x10/util/foreach/Bisect.x10"
        x10_long i__137924min__138486 = range__138499->FMGL(min);
        x10_long i__137924max__138487 = range__138499->FMGL(max);
        {
            x10_long i__138488;
            for (i__138488 = i__137924min__138486; ((i__138488) <= (i__137924max__138487));
                 i__138488 = ((i__138488) + (((x10_long)1ll)))) {
                
                //#line 117 "x10/util/foreach/Bisect.x10"
                myRes__138500 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__138503), 
                  myRes__138500, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__138505), 
                    i__138488));
            }
        }
        
        //#line 119 "x10/util/foreach/Bisect.x10"
        return myRes__138500;
        
    }
    
    // captured environment
    TPMGL(T) identity__138504;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138503;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__138505;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__138504);
        buf.write(this->reduce__138503);
        buf.write(this->body__138505);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__5<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__138504 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__138503 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body__138505 = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__5<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__5<TPMGL(T) >(that_identity__138504, that_reduce__138503, that_body__138505);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__5(TPMGL(T) identity__138504, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138503, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__138505) : identity__138504(identity__138504), reduce__138503(reduce__138503), body__138505(body__138505) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:114-120";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__5<TPMGL(T) > >x10_util_foreach_Bisect__closure__5<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__5<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__5<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__5<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >, &x10_util_foreach_Bisect__closure__5<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__5<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__5<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__5_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__6_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__6<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        asyncResult = ::x10::util::foreach::Bisect::doBisectReduce1D< TPMGL(T) >(
                        ((((start) + (end))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                        end, grainSize, reduce, body);
    }
    
    // captured environment
    x10aux::captured_struct_lval<TPMGL(T)> asyncResult;
    x10_long start;
    x10_long end;
    x10_long grainSize;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->asyncResult);
        buf.write(this->start);
        buf.write(this->end);
        buf.write(this->grainSize);
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__6<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_start = buf.read<x10_long>();
        x10_long that_end = buf.read<x10_long>();
        x10_long that_grainSize = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__6<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__6<TPMGL(T) >(that_asyncResult, that_start, that_end, that_grainSize, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__6(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long start, x10_long end, x10_long grainSize, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) : asyncResult(asyncResult), start(start), end(end), grainSize(grainSize), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:179";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__6<TPMGL(T) > >x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__6<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__6<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__6_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__11_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__11 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__11<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min0, x10_long max0, x10_long min1, x10_long max1){
        
        //#line 316 "x10/util/foreach/Bisect.x10"
        TPMGL(T) myResult = identity;
        
        //#line 317 "x10/util/foreach/Bisect.x10"
        {
            x10_long i__138581;
            for (i__138581 = min0; ((i__138581) <= (max0)); i__138581 = ((i__138581) + (((x10_long)1ll))))
            {
                
                //#line 318 "x10/util/foreach/Bisect.x10"
                {
                    x10_long i__138577;
                    for (i__138577 = min1; ((i__138577) <= (max1));
                         i__138577 = ((i__138577) + (((x10_long)1ll))))
                    {
                        
                        //#line 319 "x10/util/foreach/Bisect.x10"
                        myResult = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          myResult, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                            i__138581, i__138577));
                    }
                }
                
            }
        }
        
        //#line 322 "x10/util/foreach/Bisect.x10"
        return myResult;
        
    }
    
    // captured environment
    TPMGL(T) identity;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity);
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__11<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__11<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__11<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__11<TPMGL(T) >(that_identity, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__11(TPMGL(T) identity, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) : identity(identity), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:315-323";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__11<TPMGL(T) > >x10_util_foreach_Bisect__closure__11<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__11<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__11<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__11<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_util_foreach_Bisect__closure__11<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__11<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__11<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__11_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__12_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__12 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__12<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min__138613, x10_long max__138614, x10_long min__138615, x10_long max__138616){
        
        //#line 316 "x10/util/foreach/Bisect.x10"
        TPMGL(T) myResult__138617 = identity__138604;
        
        //#line 317 "x10/util/foreach/Bisect.x10"
        {
            x10_long i__138598;
            for (i__138598 = min__138613; ((i__138598) <= (max__138614));
                 i__138598 = ((i__138598) + (((x10_long)1ll)))) {
                
                //#line 318 "x10/util/foreach/Bisect.x10"
                {
                    x10_long i__138594;
                    for (i__138594 = min__138615; ((i__138594) <= (max__138616));
                         i__138594 = ((i__138594) + (((x10_long)1ll))))
                    {
                        
                        //#line 319 "x10/util/foreach/Bisect.x10"
                        myResult__138617 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__138603), 
                          myResult__138617, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__138605), 
                            i__138598, i__138594));
                    }
                }
                
            }
        }
        
        //#line 322 "x10/util/foreach/Bisect.x10"
        return myResult__138617;
        
    }
    
    // captured environment
    TPMGL(T) identity__138604;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138603;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__138605;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__138604);
        buf.write(this->reduce__138603);
        buf.write(this->body__138605);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__12<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__12<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__138604 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__138603 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body__138605 = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__12<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__12<TPMGL(T) >(that_identity__138604, that_reduce__138603, that_body__138605);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__12(TPMGL(T) identity__138604, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138603, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__138605) : identity__138604(identity__138604), reduce__138603(reduce__138603), body__138605(body__138605) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:315-323";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__12<TPMGL(T) > >x10_util_foreach_Bisect__closure__12<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__12<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__12<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__12<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_util_foreach_Bisect__closure__12<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__12<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__12<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__12_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__13_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__13 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__13<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        asyncResult = ::x10::util::foreach::Bisect::doBisectReduce2D< TPMGL(T) >(
                        ((((s0) + (e0))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                        e0, s1, e1, g1, g2, reduce, body);
    }
    
    // captured environment
    x10aux::captured_struct_lval<TPMGL(T)> asyncResult;
    x10_long s0;
    x10_long e0;
    x10_long s1;
    x10_long e1;
    x10_long g1;
    x10_long g2;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->asyncResult);
        buf.write(this->s0);
        buf.write(this->e0);
        buf.write(this->s1);
        buf.write(this->e1);
        buf.write(this->g1);
        buf.write(this->g2);
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__13<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__13<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_s0 = buf.read<x10_long>();
        x10_long that_e0 = buf.read<x10_long>();
        x10_long that_s1 = buf.read<x10_long>();
        x10_long that_e1 = buf.read<x10_long>();
        x10_long that_g1 = buf.read<x10_long>();
        x10_long that_g2 = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__13<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__13<TPMGL(T) >(that_asyncResult, that_s0, that_e0, that_s1, that_e1, that_g1, that_g2, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__13(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1, x10_long g2, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body) : asyncResult(asyncResult), s0(s0), e0(e0), s1(s1), e1(e1), g1(g1), g2(g2), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:435";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__13<TPMGL(T) > >x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__13<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__13<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__13_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__14_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__14 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__14<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        asyncResult = ::x10::util::foreach::Bisect::doBisectReduce2D< TPMGL(T) >(
                        s0, e0, ((((s1) + (e1))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                        e1, g1, g2, reduce, body);
    }
    
    // captured environment
    x10aux::captured_struct_lval<TPMGL(T)> asyncResult;
    x10_long s0;
    x10_long e0;
    x10_long s1;
    x10_long e1;
    x10_long g1;
    x10_long g2;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->asyncResult);
        buf.write(this->s0);
        buf.write(this->e0);
        buf.write(this->s1);
        buf.write(this->e1);
        buf.write(this->g1);
        buf.write(this->g2);
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__14<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__14<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_s0 = buf.read<x10_long>();
        x10_long that_e0 = buf.read<x10_long>();
        x10_long that_s1 = buf.read<x10_long>();
        x10_long that_e1 = buf.read<x10_long>();
        x10_long that_g1 = buf.read<x10_long>();
        x10_long that_g2 = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__14<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__14<TPMGL(T) >(that_asyncResult, that_s0, that_e0, that_s1, that_e1, that_g1, that_g2, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__14(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1, x10_long g2, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body) : asyncResult(asyncResult), s0(s0), e0(e0), s1(s1), e1(e1), g1(g1), g2(g2), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:443";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__14<TPMGL(T) > >x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__14<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__14<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__14_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT_H_GENERICS
#define X10_UTIL_FOREACH_BISECT_H_GENERICS
#ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2223
#define X10_UTIL_FOREACH_BISECT_H__kwd__for_2223
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(::x10::lang::LongRange range,
                                                                        x10_long grainSize,
                                                                        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                                        TPMGL(T) identity,
                                                                        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 132 "x10/util/foreach/Bisect.x10"
    TPMGL(T) ret__138460;
    goto __ret__138461; __ret__138461: {
    {
        
        //#line 136 "x10/util/foreach/Bisect.x10"
        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                     ((x10_int)1)))) {
            
            //#line 137 "x10/util/foreach/Bisect.x10"
            ret__138460 = (__extension__ ({
                
                //#line 115 "x10/util/foreach/Bisect.x10"
                TPMGL(T) myRes__138465 = identity;
                
                //#line 116 "x10/util/foreach/Bisect.x10"
                x10_long i__137924min__138448 = range->FMGL(min);
                x10_long i__137924max__138449 = range->FMGL(max);
                {
                    x10_long i__138450;
                    for (i__138450 = i__137924min__138448;
                         ((i__138450) <= (i__137924max__138449));
                         i__138450 = ((i__138450) + (((x10_long)1ll))))
                    {
                        
                        //#line 117 "x10/util/foreach/Bisect.x10"
                        myRes__138465 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          myRes__138465, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                            i__138450));
                    }
                }
                myRes__138465;
            }))
            ;
            goto __ret__138461_end_;
        } else {
            
            //#line 139 "x10/util/foreach/Bisect.x10"
            ret__138460 = ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                            range->FMGL(min), ((range->FMGL(max)) + (((x10_long)1ll))),
                            grainSize, reduce, reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__closure__4<TPMGL(T)>)))x10_util_foreach_Bisect__closure__4<TPMGL(T)>(identity, reduce, body))));
            goto __ret__138461_end_;
        }
        
    }goto __ret__138461_end_; __ret__138461_end_: ;
    }
    
    //#line 121 "x10/util/foreach/Bisect.x10"
    return ret__138460;
    }
    #endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2223
    #ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2224
    #define X10_UTIL_FOREACH_BISECT_H__kwd__for_2224
    template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
      ::x10::lang::LongRange range, x10_long grainSize, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) {
        
        //#line 136 "x10/util/foreach/Bisect.x10"
        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                     ((x10_int)1)))) {
            
            //#line 137 "x10/util/foreach/Bisect.x10"
            return ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
              range);
            
        } else {
            
            //#line 139 "x10/util/foreach/Bisect.x10"
            return ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                     range->FMGL(min), ((range->FMGL(max)) + (((x10_long)1ll))),
                     grainSize, reduce, body);
            
        }
        
    }
    #endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2224
    #ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2225
    #define X10_UTIL_FOREACH_BISECT_H__kwd__for_2225
    template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
      ::x10::lang::LongRange range, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) {
        
        //#line 155 "x10/util/foreach/Bisect.x10"
        x10_long grainSize = (__extension__ ({
            x10_long b__138108 = ((((range->FMGL(max)) - (range->FMGL(min)))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll)))));
            ((((x10_long)1ll)) < (b__138108)) ? (b__138108)
              : (((x10_long)1ll));
        }))
        ;
        
        //#line 132 "x10/util/foreach/Bisect.x10"
        TPMGL(T) ret__138475;
        goto __ret__138476; __ret__138476: {
        {
            
            //#line 136 "x10/util/foreach/Bisect.x10"
            if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                         ((x10_int)1)))) {
                
                //#line 137 "x10/util/foreach/Bisect.x10"
                ret__138475 = ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                  range);
                goto __ret__138476_end_;
            } else {
                
                //#line 139 "x10/util/foreach/Bisect.x10"
                ret__138475 = ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                                range->FMGL(min), ((range->FMGL(max)) + (((x10_long)1ll))),
                                grainSize, reduce, body);
                goto __ret__138476_end_;
            }
            
        }goto __ret__138476_end_; __ret__138476_end_: ;
        }
        
        //#line 156 "x10/util/foreach/Bisect.x10"
        return ret__138475;
        }
        #endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2225
        #ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2226
        #define X10_UTIL_FOREACH_BISECT_H__kwd__for_2226
        template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
          ::x10::lang::LongRange range, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
          TPMGL(T) identity, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
            
            //#line 167 "x10/util/foreach/Bisect.x10"
            x10_long grainSize = (__extension__ ({
                x10_long b__138121 = ((((range->FMGL(max)) - (range->FMGL(min)))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll)))));
                ((((x10_long)1ll)) < (b__138121)) ? (b__138121)
                  : (((x10_long)1ll));
            }))
            ;
            
            //#line 168 "x10/util/foreach/Bisect.x10"
            ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138503 =
              reduce;
            TPMGL(T) identity__138504 = identity;
            ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__138505 =
              body;
            
            //#line 109 "x10/util/foreach/Bisect.x10"
            TPMGL(T) ret__138506;
            
            //#line 121 "x10/util/foreach/Bisect.x10"
            ret__138506 = (__extension__ ({
                
                //#line 132 "x10/util/foreach/Bisect.x10"
                TPMGL(T) ret__138493;
                goto __ret__138494; __ret__138494: {
                {
                    
                    //#line 136 "x10/util/foreach/Bisect.x10"
                    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                 ((x10_int)1))))
                    {
                        
                        //#line 137 "x10/util/foreach/Bisect.x10"
                        ret__138493 = (__extension__ ({
                            
                            //#line 115 "x10/util/foreach/Bisect.x10"
                            TPMGL(T) myRes__138498 = identity;
                            
                            //#line 116 "x10/util/foreach/Bisect.x10"
                            x10_long i__137924min__138481 =
                              range->FMGL(min);
                            x10_long i__137924max__138482 =
                              range->FMGL(max);
                            {
                                x10_long i__138483;
                                for (i__138483 = i__137924min__138481;
                                     ((i__138483) <= (i__137924max__138482));
                                     i__138483 = ((i__138483) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 117 "x10/util/foreach/Bisect.x10"
                                    myRes__138498 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                      myRes__138498, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                        i__138483));
                                }
                            }
                            myRes__138498;
                        }))
                        ;
                        goto __ret__138494_end_;
                    } else {
                        
                        //#line 139 "x10/util/foreach/Bisect.x10"
                        ret__138493 = ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                                        range->FMGL(min),
                                        ((range->FMGL(max)) + (((x10_long)1ll))),
                                        grainSize, reduce,
                                        reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__closure__5<TPMGL(T)>)))x10_util_foreach_Bisect__closure__5<TPMGL(T)>(identity__138504, reduce__138503, body__138505))));
                        goto __ret__138494_end_;
                    }
                    
                }goto __ret__138494_end_; __ret__138494_end_: ;
                }
                ret__138493;
                }))
                ;
            
            //#line 168 "x10/util/foreach/Bisect.x10"
            return ret__138506;
            }
            #endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2226
            #ifndef X10_UTIL_FOREACH_BISECT_H_doBisectReduce1D_2227
            #define X10_UTIL_FOREACH_BISECT_H_doBisectReduce1D_2227
            template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::doBisectReduce1D(
              x10_long start, x10_long end, x10_long grainSize,
              ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
              ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) {
                
                //#line 175 "x10/util/foreach/Bisect.x10"
                if (((((end) - (start))) > (grainSize))) {
                    
                    //#line 176 "x10/util/foreach/Bisect.x10"
                    TPMGL(T) asyncResult;
                    
                    //#line 177 "x10/util/foreach/Bisect.x10"
                    TPMGL(T) syncResult;
                    {
                        
                        //#line 178 "x10/util/foreach/Bisect.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__138699 =
                          ::x10::xrx::Runtime::startFinish();
                        try {
                            {
                                
                                //#line 179 "x10/util/foreach/Bisect.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Bisect__closure__6<TPMGL(T)>)))x10_util_foreach_Bisect__closure__6<TPMGL(T)>(&(asyncResult), start, end, grainSize, reduce, body))));
                                
                                //#line 180 "x10/util/foreach/Bisect.x10"
                                syncResult = ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                                               start, ((((start) + (end))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                               grainSize,
                                               reduce, body);
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc2228) {
                            {
                                ::x10::lang::CheckedThrowable* ct__138697 =
                                  __exc2228;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__138697);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__138699);
                    }
                    
                    //#line 182 "x10/util/foreach/Bisect.x10"
                    return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      syncResult, asyncResult);
                    
                } else {
                    
                    //#line 184 "x10/util/foreach/Bisect.x10"
                    return ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                      ::x10::lang::LongRange::_make(start, ((end) - (((x10_long)1ll)))));
                    
                }
                
            }
            #endif // X10_UTIL_FOREACH_BISECT_H_doBisectReduce1D_2227
            #ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2238
            #define X10_UTIL_FOREACH_BISECT_H__kwd__for_2238
            template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
              ::x10::array::DenseIterationSpace_2* space,
              x10_long grainSize0, x10_long grainSize1, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
              TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
                
                //#line 311 "x10/util/foreach/Bisect.x10"
                if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                             ((x10_int)1))))
                {
                    
                    //#line 88 "x10/util/foreach/Sequential.x10"
                    TPMGL(T) myRes__138574 = identity;
                    
                    //#line 89 "x10/util/foreach/Sequential.x10"
                    x10_long j__137154min__138562 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                                      ((x10_long)1ll));
                    x10_long j__137154max__138563 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                                      ((x10_long)1ll));
                    x10_long i__137185min__138564 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                                      ((x10_long)0ll));
                    x10_long i__137185max__138565 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                                      ((x10_long)0ll));
                    {
                        x10_long i__138566;
                        for (i__138566 = i__137185min__138564;
                             ((i__138566) <= (i__137185max__138565));
                             i__138566 = ((i__138566) + (((x10_long)1ll))))
                        {
                            {
                                x10_long j__138568;
                                for (j__138568 = j__137154min__138562;
                                     ((j__138568) <= (j__137154max__138563));
                                     j__138568 = ((j__138568) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 90 "x10/util/foreach/Sequential.x10"
                                    myRes__138574 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                      myRes__138574, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                        i__138566, j__138568));
                                }
                            }
                            
                        }
                    }
                    
                    //#line 312 "x10/util/foreach/Bisect.x10"
                    return myRes__138574;
                    
                } else {
                    
                    //#line 324 "x10/util/foreach/Bisect.x10"
                    return ::x10::util::foreach::Bisect::template doBisectReduce2D< TPMGL(T) >(
                             ::x10aux::nullCheck(space)->FMGL(min0),
                             ((::x10aux::nullCheck(space)->FMGL(max0)) + (((x10_long)1ll))),
                             ::x10aux::nullCheck(space)->FMGL(min1),
                             ((::x10aux::nullCheck(space)->FMGL(max1)) + (((x10_long)1ll))),
                             grainSize0, grainSize1, reduce,
                             reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__closure__11<TPMGL(T)>)))x10_util_foreach_Bisect__closure__11<TPMGL(T)>(identity, reduce, body))));
                    
                }
                
            }
            #endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2238
            #ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2239
            #define X10_UTIL_FOREACH_BISECT_H__kwd__for_2239
            template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
              ::x10::array::DenseIterationSpace_2* space,
              ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
              TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
                
                //#line 343 "x10/util/foreach/Bisect.x10"
                x10_long grainSize0 = (__extension__ ({
                    x10_long b__138241 = ((((::x10aux::nullCheck(space)->FMGL(max0)) - (::x10aux::nullCheck(space)->FMGL(min0)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))));
                    ((((x10_long)1ll)) < (b__138241)) ? (b__138241)
                      : (((x10_long)1ll));
                }))
                ;
                
                //#line 344 "x10/util/foreach/Bisect.x10"
                x10_long grainSize1 = (__extension__ ({
                    x10_long b__138244 = ((((::x10aux::nullCheck(space)->FMGL(max1)) - (::x10aux::nullCheck(space)->FMGL(min1)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))));
                    ((((x10_long)1ll)) < (b__138244)) ? (b__138244)
                      : (((x10_long)1ll));
                }))
                ;
                
                //#line 345 "x10/util/foreach/Bisect.x10"
                ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138603 =
                  reduce;
                TPMGL(T) identity__138604 = identity;
                ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__138605 =
                  body;
                
                //#line 307 "x10/util/foreach/Bisect.x10"
                TPMGL(T) ret__138606;
                goto __ret__138607; __ret__138607: {
                {
                    
                    //#line 311 "x10/util/foreach/Bisect.x10"
                    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                 ((x10_int)1))))
                    {
                        
                        //#line 312 "x10/util/foreach/Bisect.x10"
                        ret__138606 = (__extension__ ({
                            
                            //#line 88 "x10/util/foreach/Sequential.x10"
                            TPMGL(T) myRes__138612 = identity;
                            
                            //#line 89 "x10/util/foreach/Sequential.x10"
                            x10_long j__137154min__138584 =
                              ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                ((x10_long)1ll));
                            x10_long j__137154max__138585 =
                              ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                ((x10_long)1ll));
                            x10_long i__137185min__138586 =
                              ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                ((x10_long)0ll));
                            x10_long i__137185max__138587 =
                              ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                ((x10_long)0ll));
                            {
                                x10_long i__138588;
                                for (i__138588 = i__137185min__138586;
                                     ((i__138588) <= (i__137185max__138587));
                                     i__138588 = ((i__138588) + (((x10_long)1ll))))
                                {
                                    {
                                        x10_long j__138590;
                                        for (j__138590 = j__137154min__138584;
                                             ((j__138590) <= (j__137154max__138585));
                                             j__138590 = ((j__138590) + (((x10_long)1ll))))
                                        {
                                            
                                            //#line 90 "x10/util/foreach/Sequential.x10"
                                            myRes__138612 =
                                              ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                              myRes__138612,
                                              ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                i__138588,
                                                j__138590));
                                        }
                                    }
                                    
                                }
                            }
                            myRes__138612;
                        }))
                        ;
                        goto __ret__138607_end_;
                    } else {
                        
                        //#line 324 "x10/util/foreach/Bisect.x10"
                        ret__138606 = ::x10::util::foreach::Bisect::template doBisectReduce2D< TPMGL(T) >(
                                        ::x10aux::nullCheck(space)->FMGL(min0),
                                        ((::x10aux::nullCheck(space)->FMGL(max0)) + (((x10_long)1ll))),
                                        ::x10aux::nullCheck(space)->FMGL(min1),
                                        ((::x10aux::nullCheck(space)->FMGL(max1)) + (((x10_long)1ll))),
                                        grainSize0, grainSize1,
                                        reduce, reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__closure__12<TPMGL(T)>)))x10_util_foreach_Bisect__closure__12<TPMGL(T)>(identity__138604, reduce__138603, body__138605))));
                        goto __ret__138607_end_;
                    }
                    
                }goto __ret__138607_end_; __ret__138607_end_: ;
                }
                
                //#line 345 "x10/util/foreach/Bisect.x10"
                return ret__138606;
                }
                #endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2239
                #ifndef X10_UTIL_FOREACH_BISECT_H_doBisectReduce2D_2240
                #define X10_UTIL_FOREACH_BISECT_H_doBisectReduce2D_2240
                template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::doBisectReduce2D(
                  x10_long s0, x10_long e0, x10_long s1, x10_long e1,
                  x10_long g1, x10_long g2, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                  ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body) {
                    
                    //#line 431 "x10/util/foreach/Bisect.x10"
                    if ((((((e0) - (s0))) > (g1)) && ((((((e0) - (s0))) >= (((e1) - (s1)))) ||
                                                      ((((e1) - (s1))) <= (g2))))))
                    {
                        
                        //#line 432 "x10/util/foreach/Bisect.x10"
                        TPMGL(T) asyncResult;
                        
                        //#line 433 "x10/util/foreach/Bisect.x10"
                        TPMGL(T) syncResult;
                        {
                            
                            //#line 434 "x10/util/foreach/Bisect.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__138722 =
                              ::x10::xrx::Runtime::startFinish();
                            try {
                                {
                                    
                                    //#line 435 "x10/util/foreach/Bisect.x10"
                                    ::x10::xrx::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Bisect__closure__13<TPMGL(T)>)))x10_util_foreach_Bisect__closure__13<TPMGL(T)>(&(asyncResult), s0, e0, s1, e1, g1, g2, reduce, body))));
                                    
                                    //#line 436 "x10/util/foreach/Bisect.x10"
                                    syncResult = ::x10::util::foreach::Bisect::template doBisectReduce2D< TPMGL(T) >(
                                                   s0, ((((s0) + (e0))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                                   s1, e1,
                                                   g1, g2,
                                                   reduce,
                                                   body);
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc2241) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__138720 =
                                      __exc2241;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__138720);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__138722);
                        }
                        
                        //#line 438 "x10/util/foreach/Bisect.x10"
                        return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          asyncResult, syncResult);
                        
                    } else 
                    //#line 439 "x10/util/foreach/Bisect.x10"
                    if (((((e1) - (s1))) > (g2))) {
                        
                        //#line 440 "x10/util/foreach/Bisect.x10"
                        TPMGL(T) asyncResult;
                        
                        //#line 441 "x10/util/foreach/Bisect.x10"
                        TPMGL(T) syncResult;
                        {
                            
                            //#line 442 "x10/util/foreach/Bisect.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__138727 =
                              ::x10::xrx::Runtime::startFinish();
                            try {
                                {
                                    
                                    //#line 443 "x10/util/foreach/Bisect.x10"
                                    ::x10::xrx::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Bisect__closure__14<TPMGL(T)>)))x10_util_foreach_Bisect__closure__14<TPMGL(T)>(&(asyncResult), s0, e0, s1, e1, g1, g2, reduce, body))));
                                    
                                    //#line 444 "x10/util/foreach/Bisect.x10"
                                    syncResult = ::x10::util::foreach::Bisect::template doBisectReduce2D< TPMGL(T) >(
                                                   s0, e0,
                                                   s1, ((((s1) + (e1))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                                   g1, g2,
                                                   reduce,
                                                   body);
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc2242) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__138725 =
                                      __exc2242;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__138725);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__138727);
                        }
                        
                        //#line 446 "x10/util/foreach/Bisect.x10"
                        return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          asyncResult, syncResult);
                        
                    } else {
                        
                        //#line 448 "x10/util/foreach/Bisect.x10"
                        return ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                          s0, ((e0) - (((x10_long)1ll))),
                          s1, ((e1) - (((x10_long)1ll))));
                        
                    }
                    
                }
                #endif // X10_UTIL_FOREACH_BISECT_H_doBisectReduce2D_2240
                #endif // X10_UTIL_FOREACH_BISECT_H_GENERICS
                #endif // __X10_UTIL_FOREACH_BISECT_H_NODEPS
