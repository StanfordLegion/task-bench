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
namespace x10 { namespace util { namespace foreach { 
class Sequential;
} } } 
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
class Math;
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
#include <x10/util/foreach/Sequential.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Math.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/Fun_0_4.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__3_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__3<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(::x10::lang::LongRange range){
        
        //#line 115 "x10/util/foreach/Bisect.x10"
        TPMGL(T) myRes = identity;
        
        //#line 116 "x10/util/foreach/Bisect.x10"
        ::x10::lang::LongRange i__121497domain__121620 = range;
        x10_long i__121497min__121621 = i__121497domain__121620->FMGL(min);
        x10_long i__121497max__121622 = i__121497domain__121620->FMGL(max);
        {
            x10_long i__121623;
            for (i__121623 = i__121497min__121621; ((i__121623) <= (i__121497max__121622));
                 i__121623 = ((i__121623) + (((x10_long)1ll)))) {
                x10_long i__121624 = i__121623;
                
                //#line 117 "x10/util/foreach/Bisect.x10"
                myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__121624));
            }
        }
        
        //#line 119 "x10/util/foreach/Bisect.x10"
        return myRes;
        
    }
    
    // captured environment
    TPMGL(T) identity;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity);
        buf.write(this->body);
        buf.write(this->reduce);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__3<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__3<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__3<TPMGL(T) >(that_identity, that_body, that_reduce);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__3(TPMGL(T) identity, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : identity(identity), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:114-120";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__3<TPMGL(T) > >x10_util_foreach_Bisect__closure__3<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__3<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__3<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__3<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >, &x10_util_foreach_Bisect__closure__3<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__3<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__3<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__3_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__4_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__4<TPMGL(T) > > _itable;
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
        x10_util_foreach_Bisect__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_start = buf.read<x10_long>();
        x10_long that_end = buf.read<x10_long>();
        x10_long that_grainSize = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__4<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__4<TPMGL(T) >(that_asyncResult, that_start, that_end, that_grainSize, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__4(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long start, x10_long end, x10_long grainSize, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) : asyncResult(asyncResult), start(start), end(end), grainSize(grainSize), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:179";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__4<TPMGL(T) > >x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__4<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__4_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__8_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__8 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__8<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min0, x10_long max0, x10_long min1, x10_long max1){
        
        //#line 316 "x10/util/foreach/Bisect.x10"
        TPMGL(T) myResult = identity;
        
        //#line 317 "x10/util/foreach/Bisect.x10"
        x10_long i__121598min__121638 = min0;
        x10_long i__121598max__121639 = max0;
        {
            x10_long i__121640;
            for (i__121640 = i__121598min__121638; ((i__121640) <= (i__121598max__121639));
                 i__121640 = ((i__121640) + (((x10_long)1ll)))) {
                x10_long i__121641 = i__121640;
                
                //#line 318 "x10/util/foreach/Bisect.x10"
                x10_long i__121580min__121634 = min1;
                x10_long i__121580max__121635 = max1;
                {
                    x10_long i__121636;
                    for (i__121636 = i__121580min__121634; ((i__121636) <= (i__121580max__121635));
                         i__121636 = ((i__121636) + (((x10_long)1ll))))
                    {
                        x10_long j__121637 = i__121636;
                        
                        //#line 319 "x10/util/foreach/Bisect.x10"
                        myResult = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          myResult, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                            i__121641, j__121637));
                    }
                }
                
            }
        }
        
        //#line 322 "x10/util/foreach/Bisect.x10"
        return myResult;
        
    }
    
    // captured environment
    TPMGL(T) identity;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity);
        buf.write(this->body);
        buf.write(this->reduce);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__8<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__8<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__8<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__8<TPMGL(T) >(that_identity, that_body, that_reduce);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__8(TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : identity(identity), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:315-323";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__8<TPMGL(T) > >x10_util_foreach_Bisect__closure__8<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__8<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__8<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__8<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_util_foreach_Bisect__closure__8<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__8<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__8<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__8_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__9_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__9 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__9<TPMGL(T) > > _itable;
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
        x10_util_foreach_Bisect__closure__9<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__9<TPMGL(T) > >();
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
        x10_util_foreach_Bisect__closure__9<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__9<TPMGL(T) >(that_asyncResult, that_s0, that_e0, that_s1, that_e1, that_g1, that_g2, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__9(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1, x10_long g2, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body) : asyncResult(asyncResult), s0(s0), e0(e0), s1(s1), e1(e1), g1(g1), g2(g2), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:435";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__9<TPMGL(T) > >x10_util_foreach_Bisect__closure__9<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__9<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__9<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__9<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Bisect__closure__9<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__9<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__9<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__9<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Bisect__closure__9<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__9_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__10_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__10 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__10<TPMGL(T) > > _itable;
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
        x10_util_foreach_Bisect__closure__10<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__10<TPMGL(T) > >();
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
        x10_util_foreach_Bisect__closure__10<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__10<TPMGL(T) >(that_asyncResult, that_s0, that_e0, that_s1, that_e1, that_g1, that_g2, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__10(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1, x10_long g2, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body) : asyncResult(asyncResult), s0(s0), e0(e0), s1(s1), e1(e1), g1(g1), g2(g2), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:443";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__10<TPMGL(T) > >x10_util_foreach_Bisect__closure__10<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__10<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__10<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__10<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Bisect__closure__10<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__10<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__10<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__10<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Bisect__closure__10<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__10_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT_H_GENERICS
#define X10_UTIL_FOREACH_BISECT_H_GENERICS
#ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2200
#define X10_UTIL_FOREACH_BISECT_H__kwd__for_2200
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(::x10::lang::LongRange range,
                                                                        x10_long grainSize,
                                                                        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                                        TPMGL(T) identity,
                                                                        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 114 "x10/util/foreach/Bisect.x10"
    ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* executeRange =
      reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__closure__3<TPMGL(T)>)))x10_util_foreach_Bisect__closure__3<TPMGL(T)>(identity, body, reduce)));
    
    //#line 121 "x10/util/foreach/Bisect.x10"
    return ::x10::util::foreach::Bisect::template _kwd__for< TPMGL(T) >(
             range, grainSize, reduce, executeRange);
    
}
#endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2200
#ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2201
#define X10_UTIL_FOREACH_BISECT_H__kwd__for_2201
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
  ::x10::lang::LongRange range, x10_long grainSize, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) {
    
    //#line 136 "x10/util/foreach/Bisect.x10"
    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                 ((x10_int)1)))) {
        
        //#line 137 "x10/util/foreach/Bisect.x10"
        return ::x10::util::foreach::Sequential::template _kwd__for< TPMGL(T) >(
                 range, reduce, body);
        
    } else {
        
        //#line 139 "x10/util/foreach/Bisect.x10"
        return ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                 range->FMGL(min), ((range->FMGL(max)) + (((x10_long)1ll))),
                 grainSize, reduce, body);
        
    }
    
}
#endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2201
#ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2202
#define X10_UTIL_FOREACH_BISECT_H__kwd__for_2202
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
  ::x10::lang::LongRange range, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) {
    
    //#line 155 "x10/util/foreach/Bisect.x10"
    x10_long grainSize = ::x10::lang::Math::max(((x10_long)1ll),
                                                ((((range->FMGL(max)) - (range->FMGL(min)))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll))))));
    
    //#line 156 "x10/util/foreach/Bisect.x10"
    return ::x10::util::foreach::Bisect::template _kwd__for< TPMGL(T) >(
             range, grainSize, reduce, body);
    
}
#endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2202
#ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2203
#define X10_UTIL_FOREACH_BISECT_H__kwd__for_2203
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
  ::x10::lang::LongRange range, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 167 "x10/util/foreach/Bisect.x10"
    x10_long grainSize = ::x10::lang::Math::max(((x10_long)1ll),
                                                ((((range->FMGL(max)) - (range->FMGL(min)))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll))))));
    
    //#line 168 "x10/util/foreach/Bisect.x10"
    return ::x10::util::foreach::Bisect::template _kwd__for< TPMGL(T) >(
             range, grainSize, reduce, identity, body);
    
}
#endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2203
#ifndef X10_UTIL_FOREACH_BISECT_H_doBisectReduce1D_2204
#define X10_UTIL_FOREACH_BISECT_H_doBisectReduce1D_2204
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::doBisectReduce1D(
  x10_long start, x10_long end, x10_long grainSize, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
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
            ::x10::xrx::FinishState* fs__121654 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 179 "x10/util/foreach/Bisect.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Bisect__closure__4<TPMGL(T)>)))x10_util_foreach_Bisect__closure__4<TPMGL(T)>(&(asyncResult), start, end, grainSize, reduce, body))));
                    
                    //#line 180 "x10/util/foreach/Bisect.x10"
                    syncResult = ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                                   start, ((((start) + (end))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                   grainSize, reduce, body);
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2205) {
                {
                    ::x10::lang::CheckedThrowable* ct__121652 =
                      __exc2205;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__121652);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__121654);
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
#endif // X10_UTIL_FOREACH_BISECT_H_doBisectReduce1D_2204
#ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2212
#define X10_UTIL_FOREACH_BISECT_H__kwd__for_2212
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
  ::x10::array::DenseIterationSpace_2* space, x10_long grainSize0,
  x10_long grainSize1, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
    
    //#line 311 "x10/util/foreach/Bisect.x10"
    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                 ((x10_int)1)))) {
        
        //#line 312 "x10/util/foreach/Bisect.x10"
        return ::x10::util::foreach::Sequential::template _kwd__for< TPMGL(T) >(
                 space, reduce, identity, body);
        
    } else {
        
        //#line 315 "x10/util/foreach/Bisect.x10"
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* reduceRange =
          reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__closure__8<TPMGL(T)>)))x10_util_foreach_Bisect__closure__8<TPMGL(T)>(identity, body, reduce)));
        
        //#line 324 "x10/util/foreach/Bisect.x10"
        return ::x10::util::foreach::Bisect::template doBisectReduce2D< TPMGL(T) >(
                 ::x10aux::nullCheck(space)->FMGL(min0), ((::x10aux::nullCheck(space)->FMGL(max0)) + (((x10_long)1ll))),
                 ::x10aux::nullCheck(space)->FMGL(min1), ((::x10aux::nullCheck(space)->FMGL(max1)) + (((x10_long)1ll))),
                 grainSize0, grainSize1, reduce, reduceRange);
        
    }
    
}
#endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2212
#ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2213
#define X10_UTIL_FOREACH_BISECT_H__kwd__for_2213
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
  ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
    
    //#line 343 "x10/util/foreach/Bisect.x10"
    x10_long grainSize0 = ::x10::lang::Math::max(((x10_long)1ll),
                                                 ((((::x10aux::nullCheck(space)->FMGL(max0)) - (::x10aux::nullCheck(space)->FMGL(min0)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())))));
    
    //#line 344 "x10/util/foreach/Bisect.x10"
    x10_long grainSize1 = ::x10::lang::Math::max(((x10_long)1ll),
                                                 ((((::x10aux::nullCheck(space)->FMGL(max1)) - (::x10aux::nullCheck(space)->FMGL(min1)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())))));
    
    //#line 345 "x10/util/foreach/Bisect.x10"
    return ::x10::util::foreach::Bisect::template _kwd__for< TPMGL(T) >(
             space, grainSize0, grainSize1, reduce, identity,
             body);
    
}
#endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2213
#ifndef X10_UTIL_FOREACH_BISECT_H_doBisectReduce2D_2214
#define X10_UTIL_FOREACH_BISECT_H_doBisectReduce2D_2214
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::doBisectReduce2D(
  x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1,
  x10_long g2, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
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
            ::x10::xrx::FinishState* fs__121665 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 435 "x10/util/foreach/Bisect.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Bisect__closure__9<TPMGL(T)>)))x10_util_foreach_Bisect__closure__9<TPMGL(T)>(&(asyncResult), s0, e0, s1, e1, g1, g2, reduce, body))));
                    
                    //#line 436 "x10/util/foreach/Bisect.x10"
                    syncResult = ::x10::util::foreach::Bisect::template doBisectReduce2D< TPMGL(T) >(
                                   s0, ((((s0) + (e0))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                   s1, e1, g1, g2, reduce,
                                   body);
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2215) {
                {
                    ::x10::lang::CheckedThrowable* ct__121663 =
                      __exc2215;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__121663);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__121665);
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
            ::x10::xrx::FinishState* fs__121670 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 443 "x10/util/foreach/Bisect.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Bisect__closure__10<TPMGL(T)>)))x10_util_foreach_Bisect__closure__10<TPMGL(T)>(&(asyncResult), s0, e0, s1, e1, g1, g2, reduce, body))));
                    
                    //#line 444 "x10/util/foreach/Bisect.x10"
                    syncResult = ::x10::util::foreach::Bisect::template doBisectReduce2D< TPMGL(T) >(
                                   s0, e0, s1, ((((s1) + (e1))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                   g1, g2, reduce, body);
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2216) {
                {
                    ::x10::lang::CheckedThrowable* ct__121668 =
                      __exc2216;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__121668);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__121670);
        }
        
        //#line 446 "x10/util/foreach/Bisect.x10"
        return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
          asyncResult, syncResult);
        
    } else {
        
        //#line 448 "x10/util/foreach/Bisect.x10"
        return ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
          s0, ((e0) - (((x10_long)1ll))), s1, ((e1) - (((x10_long)1ll))));
        
    }
    
}
#endif // X10_UTIL_FOREACH_BISECT_H_doBisectReduce2D_2214
#endif // X10_UTIL_FOREACH_BISECT_H_GENERICS
#endif // __X10_UTIL_FOREACH_BISECT_H_NODEPS
