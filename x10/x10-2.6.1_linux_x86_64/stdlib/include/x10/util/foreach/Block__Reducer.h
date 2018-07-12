#ifndef __X10_UTIL_FOREACH_BLOCK__REDUCER_H
#define __X10_UTIL_FOREACH_BLOCK__REDUCER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace util { namespace foreach { 
class ReduceNotReady;
} } } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Unsafe;
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
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace array { 
class BlockingUtils;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace foreach { 

template<class TPMGL(T)> class Block__Reducer;
template <> class Block__Reducer<void>;
template<class TPMGL(T)> class Block__Reducer : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Cell<TPMGL(T)>* FMGL(result);
    
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* FMGL(reduce);
    
    TPMGL(T) FMGL(identity);
    
    virtual TPMGL(T) value();
    void _constructor(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                      TPMGL(T) identity);
    
    static ::x10::util::foreach::Block__Reducer<TPMGL(T)>* _make(
             ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
             TPMGL(T) identity);
    
    void _constructor(::x10::lang::Reducible<TPMGL(T)>* red);
    
    static ::x10::util::foreach::Block__Reducer<TPMGL(T)>* _make(
             ::x10::lang::Reducible<TPMGL(T)>* red);
    
    virtual TPMGL(T) _kwd__for(::x10::lang::LongRange range, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body);
    virtual TPMGL(T) _kwd__for(::x10::array::DenseIterationSpace_2* space,
                               ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body);
    virtual ::x10::util::foreach::Block__Reducer<TPMGL(T)>* x10__util__foreach__Block__Reducer____this__x10__util__foreach__Block__Reducer(
      );
    virtual void __fieldInitializers_x10_util_foreach_Block_Reducer(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::foreach::Block__Reducer<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::foreach::Block__Reducer<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::foreach::Block__Reducer<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.foreach.Block.Reducer";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class Block__Reducer<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // X10_UTIL_FOREACH_BLOCK__REDUCER_H

namespace x10 { namespace util { namespace foreach { 
template<class TPMGL(T)> class Block__Reducer;
} } } 

#ifndef X10_UTIL_FOREACH_BLOCK__REDUCER_H_NODEPS
#define X10_UTIL_FOREACH_BLOCK__REDUCER_H_NODEPS
#include <x10/lang/Cell.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/util/foreach/ReduceNotReady.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Unsafe.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/array/BlockingUtils.h>
#include <x10/array/IterationSpace.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_FOREACH_BLOCK__REDUCER_H_GENERICS
#define X10_UTIL_FOREACH_BLOCK__REDUCER_H_GENERICS
#endif // X10_UTIL_FOREACH_BLOCK__REDUCER_H_GENERICS
#ifndef X10_UTIL_FOREACH_BLOCK__REDUCER_H_IMPLEMENTATION
#define X10_UTIL_FOREACH_BLOCK__REDUCER_H_IMPLEMENTATION
#include <x10/util/foreach/Block__Reducer.h>

#ifndef X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__7_CLOSURE
#define X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_foreach_Block__Reducer__closure__7 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(TPMGL(T) a, TPMGL(T) b){
        return ::x10::lang::Reducible<TPMGL(T)>::__apply(::x10aux::nullCheck(red), 
                 a, b);
        
    }
    
    // captured environment
    ::x10::lang::Reducible<TPMGL(T)>* red;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->red);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Reducible<TPMGL(T)>* that_red = buf.read< ::x10::lang::Reducible<TPMGL(T)>*>();
        x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >(that_red);
        return this_;
    }
    
    x10_util_foreach_Block__Reducer__closure__7(::x10::lang::Reducible<TPMGL(T)>* red) : red(red) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:217";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) > >x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::__apply, &x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >, &x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__7_CLOSURE
#ifndef X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__8_CLOSURE
#define X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Block__Reducer__closure__8 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 162 "x10/util/foreach/Block.x10"
        x10_long lo__139508 = ((((min__139498) + (((blockSize__139503) * (myT__139507))))) + (((myT__139507) < (leftOver__139504))
          ? (myT__139507) : (leftOver__139504)));
        
        //#line 163 "x10/util/foreach/Block.x10"
        x10_long hi__139509 = ((((lo__139508) + (blockSize__139503))) + (((myT__139507) < (leftOver__139504))
          ? (((x10_long)0ll)) : (((x10_long)-1ll))));
        
        //#line 164 "x10/util/foreach/Block.x10"
        results__139505->x10::lang::template Rail< TPMGL(T) >::__set(
          myT__139507, (__extension__ ({
              ::x10::lang::LongRange range__139510 = ::x10::lang::LongRange::_make(lo__139508, hi__139509);
              
              //#line 102 "x10/util/foreach/Block.x10"
              TPMGL(T) myRes__139511 = identity__139236;
              
              //#line 103 "x10/util/foreach/Block.x10"
              x10_long i__139024min__139484 = range__139510->FMGL(min);
              x10_long i__139024max__139485 = range__139510->FMGL(max);
              {
                  x10_long i__139486;
                  for (i__139486 = i__139024min__139484; ((i__139486) <= (i__139024max__139485));
                       i__139486 = ((i__139486) + (((x10_long)1ll))))
                  {
                      
                      //#line 104 "x10/util/foreach/Block.x10"
                      myRes__139511 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139235), 
                        myRes__139511, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__139237), 
                          i__139486));
                  }
              }
              myRes__139511;
          }))
          );
    }
    
    // captured environment
    x10_long min__139498;
    x10_long blockSize__139503;
    x10_long myT__139507;
    x10_long leftOver__139504;
    ::x10::lang::Rail< TPMGL(T) >* results__139505;
    TPMGL(T) identity__139236;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139235;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__139237;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->min__139498);
        buf.write(this->blockSize__139503);
        buf.write(this->myT__139507);
        buf.write(this->leftOver__139504);
        buf.write(this->results__139505);
        buf.write(this->identity__139236);
        buf.write(this->reduce__139235);
        buf.write(this->body__139237);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_min__139498 = buf.read<x10_long>();
        x10_long that_blockSize__139503 = buf.read<x10_long>();
        x10_long that_myT__139507 = buf.read<x10_long>();
        x10_long that_leftOver__139504 = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_results__139505 = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        TPMGL(T) that_identity__139236 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__139235 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body__139237 = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >(that_min__139498, that_blockSize__139503, that_myT__139507, that_leftOver__139504, that_results__139505, that_identity__139236, that_reduce__139235, that_body__139237);
        return this_;
    }
    
    x10_util_foreach_Block__Reducer__closure__8(x10_long min__139498, x10_long blockSize__139503, x10_long myT__139507, x10_long leftOver__139504, ::x10::lang::Rail< TPMGL(T) >* results__139505, TPMGL(T) identity__139236, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139235, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__139237) : min__139498(min__139498), blockSize__139503(blockSize__139503), myT__139507(myT__139507), leftOver__139504(leftOver__139504), results__139505(results__139505), identity__139236(identity__139236), reduce__139235(reduce__139235), body__139237(body__139237) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:161-165";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) > >x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::__apply, &x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__8_CLOSURE
#ifndef X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__9_CLOSURE
#define X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Block__Reducer__closure__9 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        results__139300->x10::lang::template Rail< TPMGL(T) >::__set(myT__139302,
                                                                     (__extension__ ({
                                                                         
                                                                         //#line 88 "x10/util/foreach/Sequential.x10"
                                                                         TPMGL(T) myRes__139331 =
                                                                           identity__139298;
                                                                         
                                                                         //#line 89 "x10/util/foreach/Sequential.x10"
                                                                         x10_long j__137154min__139524 =
                                                                           block__139303->x10::array::DenseIterationSpace_2::min(
                                                                             ((x10_long)1ll));
                                                                         x10_long j__137154max__139525 =
                                                                           block__139303->x10::array::DenseIterationSpace_2::max(
                                                                             ((x10_long)1ll));
                                                                         x10_long i__137185min__139526 =
                                                                           block__139303->x10::array::DenseIterationSpace_2::min(
                                                                             ((x10_long)0ll));
                                                                         x10_long i__137185max__139527 =
                                                                           block__139303->x10::array::DenseIterationSpace_2::max(
                                                                             ((x10_long)0ll));
                                                                         {
                                                                             x10_long i__139528;
                                                                             for (i__139528 =
                                                                                    i__137185min__139526;
                                                                                  ((i__139528) <= (i__137185max__139527));
                                                                                  i__139528 =
                                                                                    ((i__139528) + (((x10_long)1ll))))
                                                                             {
                                                                                 {
                                                                                     x10_long j__139530;
                                                                                     for (j__139530 =
                                                                                            j__137154min__139524;
                                                                                          ((j__139530) <= (j__137154max__139525));
                                                                                          j__139530 =
                                                                                            ((j__139530) + (((x10_long)1ll))))
                                                                                     {
                                                                                         
                                                                                         //#line 90 "x10/util/foreach/Sequential.x10"
                                                                                         myRes__139331 =
                                                                                           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139297), 
                                                                                           myRes__139331,
                                                                                           ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__139299), 
                                                                                             i__139528,
                                                                                             j__139530));
                                                                                     }
                                                                                 }
                                                                                 
                                                                             }
                                                                         }
                                                                         myRes__139331;
                                                                     }))
                                                                     );
    }
    
    // captured environment
    ::x10::lang::Rail< TPMGL(T) >* results__139300;
    x10_long myT__139302;
    ::x10::array::DenseIterationSpace_2* block__139303;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139297;
    TPMGL(T) identity__139298;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__139299;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->results__139300);
        buf.write(this->myT__139302);
        buf.write(this->block__139303);
        buf.write(this->reduce__139297);
        buf.write(this->identity__139298);
        buf.write(this->body__139299);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Rail< TPMGL(T) >* that_results__139300 = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_long that_myT__139302 = buf.read<x10_long>();
        ::x10::array::DenseIterationSpace_2* that_block__139303 = buf.read< ::x10::array::DenseIterationSpace_2*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__139297 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        TPMGL(T) that_identity__139298 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body__139299 = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >(that_results__139300, that_myT__139302, that_block__139303, that_reduce__139297, that_identity__139298, that_body__139299);
        return this_;
    }
    
    x10_util_foreach_Block__Reducer__closure__9(::x10::lang::Rail< TPMGL(T) >* results__139300, x10_long myT__139302, ::x10::array::DenseIterationSpace_2* block__139303, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139297, TPMGL(T) identity__139298, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__139299) : results__139300(results__139300), myT__139302(myT__139302), block__139303(block__139303), reduce__139297(reduce__139297), identity__139298(identity__139298), body__139299(body__139299) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:128";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) > >x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::__apply, &x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__9_CLOSURE

//#line 179 "x10/util/foreach/Block.x10"

//#line 184 "x10/util/foreach/Block.x10"
/**
         * The reduction operation.
         */

//#line 189 "x10/util/foreach/Block.x10"
/**
         * The identity value for the reduction operation such that reduce(identity,f)=f.
         */

//#line 197 "x10/util/foreach/Block.x10"
/**
         * Access to the result of the last reduction. It may
         * raise <code>ReduceNotReady</code> if no result has been
         * computed yet.
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block__Reducer<TPMGL(T)>::value(
  ) {
    
    //#line 198 "x10/util/foreach/Block.x10"
    if ((::x10aux::struct_equals(this->FMGL(result), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::util::foreach::ReduceNotReady::_make()));
    }
    
    //#line 199 "x10/util/foreach/Block.x10"
    ::x10::lang::Cell<TPMGL(T)>* this__139470 = this->FMGL(result);
    return ::x10aux::nullCheck(this__139470)->FMGL(value);
    
}

//#line 207 "x10/util/foreach/Block.x10"
/**
         * Constructor for collecting loop with reducer.
         * @param reduce the reduction operation
         * @param identity the identity value for the reduction operation such that reduce(identity,f)=f
         */
template<class TPMGL(T)> void x10::util::foreach::Block__Reducer<TPMGL(T)>::_constructor(
                           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                           TPMGL(T) identity) {
    
    //#line 178 "x10/util/foreach/Block.x10"
    ::x10::util::foreach::Block__Reducer<TPMGL(T)>* this__139471 =
      this;
    ::x10aux::nullCheck(this__139471)->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 208 "x10/util/foreach/Block.x10"
    this->FMGL(reduce) = (reduce);
    
    //#line 209 "x10/util/foreach/Block.x10"
    this->FMGL(identity) = identity;
}
template<class TPMGL(T)> ::x10::util::foreach::Block__Reducer<TPMGL(T)>* x10::util::foreach::Block__Reducer<TPMGL(T)>::_make(
                           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                           TPMGL(T) identity) {
    ::x10::util::foreach::Block__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Block__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Block__Reducer<TPMGL(T)>();
    this_->_constructor(reduce, identity);
    return this_;
}



//#line 216 "x10/util/foreach/Block.x10"
/**
         * Constructor for collecting loop with reducer.
         * @param red the reduction operation
         */
template<class TPMGL(T)> void x10::util::foreach::Block__Reducer<TPMGL(T)>::_constructor(
                           ::x10::lang::Reducible<TPMGL(T)>* red) {
    
    //#line 178 "x10/util/foreach/Block.x10"
    ::x10::util::foreach::Block__Reducer<TPMGL(T)>* this__139472 =
      this;
    ::x10aux::nullCheck(this__139472)->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 217 "x10/util/foreach/Block.x10"
    this->FMGL(reduce) = reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(sizeof(x10_util_foreach_Block__Reducer__closure__7<TPMGL(T)>)))x10_util_foreach_Block__Reducer__closure__7<TPMGL(T)>(red)));
    
    //#line 218 "x10/util/foreach/Block.x10"
    this->FMGL(identity) = ::x10::lang::Reducible<TPMGL(T)>::zero(::x10aux::nullCheck(red));
}
template<class TPMGL(T)> ::x10::util::foreach::Block__Reducer<TPMGL(T)>* x10::util::foreach::Block__Reducer<TPMGL(T)>::_make(
                           ::x10::lang::Reducible<TPMGL(T)>* red)
{
    ::x10::util::foreach::Block__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Block__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Block__Reducer<TPMGL(T)>();
    this_->_constructor(red);
    return this_;
}



//#line 226 "x10/util/foreach/Block.x10"
/**
         * Reduce over a range of indices in parallel using a block decomposition.
         * @param range the iteration space
         * @param body a closure that executes over a single value of the index
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block__Reducer<TPMGL(T)>::_kwd__for(
  ::x10::lang::LongRange range, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 228 "x10/util/foreach/Block.x10"
    TPMGL(T) res = (__extension__ ({
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139235 =
          this->FMGL(reduce);
        TPMGL(T) identity__139236 = this->FMGL(identity);
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__139237 =
          body;
        
        //#line 98 "x10/util/foreach/Block.x10"
        TPMGL(T) ret__139246;
        (__extension__ ({
            
            //#line 108 "x10/util/foreach/Block.x10"
            ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139492 =
              reduce__139235;
            
            //#line 145 "x10/util/foreach/Block.x10"
            TPMGL(T) ret__139493;
            goto __ret__139494; __ret__139494: {
            {
                
                //#line 148 "x10/util/foreach/Block.x10"
                x10_int nthreads__139495 = ::x10::xrx::Runtime::FMGL(NTHREADS__get)();
                
                //#line 149 "x10/util/foreach/Block.x10"
                if ((::x10aux::struct_equals(nthreads__139495,
                                             ((x10_int)1))))
                {
                    
                    //#line 150 "x10/util/foreach/Block.x10"
                    ret__139493 = (__extension__ ({
                        
                        //#line 102 "x10/util/foreach/Block.x10"
                        TPMGL(T) myRes__139497 = identity__139236;
                        
                        //#line 103 "x10/util/foreach/Block.x10"
                        x10_long i__139024min__139474 = range->FMGL(min);
                        x10_long i__139024max__139475 = range->FMGL(max);
                        {
                            x10_long i__139476;
                            for (i__139476 = i__139024min__139474;
                                 ((i__139476) <= (i__139024max__139475));
                                 i__139476 = ((i__139476) + (((x10_long)1ll))))
                            {
                                
                                //#line 104 "x10/util/foreach/Block.x10"
                                myRes__139497 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139235), 
                                  myRes__139497, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                    i__139476));
                            }
                        }
                        myRes__139497;
                    }))
                    ;
                    goto __ret__139494_end_;
                } else {
                    
                    //#line 152 "x10/util/foreach/Block.x10"
                    x10_long min__139498 = range->FMGL(min);
                    
                    //#line 153 "x10/util/foreach/Block.x10"
                    x10_long max__139499 = range->FMGL(max);
                    
                    //#line 154 "x10/util/foreach/Block.x10"
                    x10_long numElems__139500 = ((((max__139499) - (min__139498))) + (((x10_long)1ll)));
                    
                    //#line 155 "x10/util/foreach/Block.x10"
                    if (((numElems__139500) < (((x10_long)1ll))))
                    {
                        ret__139493 = (__extension__ ({
                            
                            //#line 102 "x10/util/foreach/Block.x10"
                            TPMGL(T) myRes__139502 = identity__139236;
                            
                            //#line 103 "x10/util/foreach/Block.x10"
                            x10_long i__139024min__139479 =
                              range->FMGL(min);
                            x10_long i__139024max__139480 =
                              range->FMGL(max);
                            {
                                x10_long i__139481;
                                for (i__139481 = i__139024min__139479;
                                     ((i__139481) <= (i__139024max__139480));
                                     i__139481 = ((i__139481) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 104 "x10/util/foreach/Block.x10"
                                    myRes__139502 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139235), 
                                      myRes__139502, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                        i__139481));
                                }
                            }
                            myRes__139502;
                        }))
                        ;
                        goto __ret__139494_end_;
                    }
                    
                    //#line 156 "x10/util/foreach/Block.x10"
                    x10_long blockSize__139503 = ((numElems__139500) / ::x10aux::zeroCheck(((x10_long)(nthreads__139495))));
                    
                    //#line 157 "x10/util/foreach/Block.x10"
                    x10_long leftOver__139504 = ((numElems__139500) - (((((x10_long)(nthreads__139495))) * (blockSize__139503))));
                    
                    //#line 158 "x10/util/foreach/Block.x10"
                    ::x10::lang::Rail< TPMGL(T) >* results__139505 =
                      ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(nthreads__139495)), false);
                    {
                        
                        //#line 159 "x10/util/foreach/Block.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__139570 =
                          ::x10::xrx::Runtime::startFinish();
                        try {
                            {
                                {
                                    x10_long t__139506;
                                    for (t__139506 = ((((x10_long)(nthreads__139495))) - (((x10_long)1ll)));
                                         ((t__139506) >= (((x10_long)0ll)));
                                         t__139506 = ((t__139506) - (((x10_long)1ll))))
                                    {
                                        
                                        //#line 160 "x10/util/foreach/Block.x10"
                                        x10_long myT__139507 =
                                          t__139506;
                                        
                                        //#line 161 "x10/util/foreach/Block.x10"
                                        ::x10::xrx::Runtime::runAsync(
                                          reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Block__Reducer__closure__8<TPMGL(T)>)))x10_util_foreach_Block__Reducer__closure__8<TPMGL(T)>(min__139498, blockSize__139503, myT__139507, leftOver__139504, results__139505, identity__139236, reduce__139235, body__139237))));
                                    }
                                }
                                
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc2270) {
                            {
                                ::x10::lang::CheckedThrowable* ct__139568 =
                                  __exc2270;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__139568);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__139570);
                    }
                    
                    //#line 167 "x10/util/foreach/Block.x10"
                    TPMGL(T) res__139512 = results__139505->x10::lang::template Rail< TPMGL(T) >::__apply(
                                             ((x10_long)0ll));
                    
                    //#line 168 "x10/util/foreach/Block.x10"
                    x10_long i__139061max__139488 = ((((x10_long)(nthreads__139495))) - (((x10_long)1ll)));
                    {
                        x10_long i__139489;
                        for (i__139489 = ((x10_long)1ll);
                             ((i__139489) <= (i__139061max__139488));
                             i__139489 = ((i__139489) + (((x10_long)1ll))))
                        {
                            
                            //#line 169 "x10/util/foreach/Block.x10"
                            res__139512 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139492), 
                              res__139512, results__139505->x10::lang::template Rail< TPMGL(T) >::__apply(
                                             i__139489));
                        }
                    }
                    
                    //#line 171 "x10/util/foreach/Block.x10"
                    ret__139493 = res__139512;
                    goto __ret__139494_end_;
                }
                
            }goto __ret__139494_end_; __ret__139494_end_: ;
            }
            ret__139493;
            }))
            ;
        }))
        ;
        
    
    //#line 229 "x10/util/foreach/Block.x10"
    this->FMGL(result) = (__extension__ ({
        ::x10::lang::Cell<TPMGL(T)>* alloc__139021 =  (new (::x10aux::alloc_z< ::x10::lang::Cell<TPMGL(T)> >()) ::x10::lang::Cell<TPMGL(T)>());
        
        //#line 33 "x10/lang/Cell.x10"
        alloc__139021->FMGL(value) = res;
        alloc__139021;
    }))
    ;
    
    //#line 230 "x10/util/foreach/Block.x10"
    return res;
    }
    

//#line 238 "x10/util/foreach/Block.x10"
/**
         * Reduce over a range of indices in parallel using a block decomposition.
         * @param space the 2D dense space over which to reduce
         * @param body a closure that executes over a single index [i,j]
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block__Reducer<TPMGL(T)>::_kwd__for(
  ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
    
    //#line 240 "x10/util/foreach/Block.x10"
    TPMGL(T) res = (__extension__ ({
        ::x10::array::DenseIterationSpace_2* space__139296 =
          space;
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139297 =
          this->FMGL(reduce);
        TPMGL(T) identity__139298 = this->FMGL(identity);
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__139299 =
          body;
        
        //#line 118 "x10/util/foreach/Block.x10"
        TPMGL(T) ret__139309;
        goto __ret__139310; __ret__139310: {
        {
            
            //#line 121 "x10/util/foreach/Block.x10"
            if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                         ((x10_int)1)))) {
                
                //#line 122 "x10/util/foreach/Block.x10"
                ret__139309 = (__extension__ ({
                    
                    //#line 88 "x10/util/foreach/Sequential.x10"
                    TPMGL(T) myRes__139315 = identity__139298;
                    
                    //#line 89 "x10/util/foreach/Sequential.x10"
                    x10_long j__137154min__139515 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                                      ((x10_long)1ll));
                    x10_long j__137154max__139516 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                                      ((x10_long)1ll));
                    x10_long i__137185min__139517 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                                      ((x10_long)0ll));
                    x10_long i__137185max__139518 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                                      ((x10_long)0ll));
                    {
                        x10_long i__139519;
                        for (i__139519 = i__137185min__139517;
                             ((i__139519) <= (i__137185max__139518));
                             i__139519 = ((i__139519) + (((x10_long)1ll))))
                        {
                            {
                                x10_long j__139521;
                                for (j__139521 = j__137154min__139515;
                                     ((j__139521) <= (j__137154max__139516));
                                     j__139521 = ((j__139521) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 90 "x10/util/foreach/Sequential.x10"
                                    myRes__139315 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139297), 
                                      myRes__139315, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                        i__139519, j__139521));
                                }
                            }
                            
                        }
                    }
                    myRes__139315;
                }))
                ;
                goto __ret__139310_end_;
            } else {
                
                //#line 124 "x10/util/foreach/Block.x10"
                ::x10::lang::Rail< TPMGL(T) >* results__139300 =
                  ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
                {
                    
                    //#line 125 "x10/util/foreach/Block.x10"
                    ::x10::xrx::Runtime::ensureNotInAtomic();
                    ::x10::xrx::FinishState* fs__139575 =
                      ::x10::xrx::Runtime::startFinish();
                    try {
                        {
                            {
                                x10_long t__139301;
                                for (t__139301 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                                     ((t__139301) >= (((x10_long)0ll)));
                                     t__139301 = ((t__139301) - (((x10_long)1ll))))
                                {
                                    
                                    //#line 126 "x10/util/foreach/Block.x10"
                                    x10_long myT__139302 =
                                      t__139301;
                                    
                                    //#line 127 "x10/util/foreach/Block.x10"
                                    ::x10::array::DenseIterationSpace_2* block__139303 =
                                      ::x10::array::BlockingUtils::partitionBlockBlock(
                                        reinterpret_cast< ::x10::array::IterationSpace*>(space__139296),
                                        ((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())),
                                        t__139301);
                                    
                                    //#line 128 "x10/util/foreach/Block.x10"
                                    ::x10::xrx::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Block__Reducer__closure__9<TPMGL(T)>)))x10_util_foreach_Block__Reducer__closure__9<TPMGL(T)>(results__139300, myT__139302, block__139303, reduce__139297, identity__139298, body__139299))));
                                }
                            }
                            
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc2272) {
                        {
                            ::x10::lang::CheckedThrowable* ct__139573 =
                              __exc2272;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__139573);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__139575);
                }
                
                //#line 130 "x10/util/foreach/Block.x10"
                TPMGL(T) res__139304 = results__139300->x10::lang::template Rail< TPMGL(T) >::__apply(
                                         ((x10_long)0ll));
                
                //#line 131 "x10/util/foreach/Block.x10"
                x10_long i__139043max__139532 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                {
                    x10_long i__139533;
                    for (i__139533 = ((x10_long)1ll); ((i__139533) <= (i__139043max__139532));
                         i__139533 = ((i__139533) + (((x10_long)1ll))))
                    {
                        
                        //#line 132 "x10/util/foreach/Block.x10"
                        res__139304 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139297), 
                          res__139304, results__139300->x10::lang::template Rail< TPMGL(T) >::__apply(
                                         i__139533));
                    }
                }
                
                //#line 134 "x10/util/foreach/Block.x10"
                ret__139309 = res__139304;
                goto __ret__139310_end_;
            }
            
        }goto __ret__139310_end_; __ret__139310_end_: ;
        }
        ret__139309;
        }))
        ;
        
    
    //#line 241 "x10/util/foreach/Block.x10"
    this->FMGL(result) = (__extension__ ({
        ::x10::lang::Cell<TPMGL(T)>* alloc__139022 =  (new (::x10aux::alloc_z< ::x10::lang::Cell<TPMGL(T)> >()) ::x10::lang::Cell<TPMGL(T)>());
        
        //#line 33 "x10/lang/Cell.x10"
        alloc__139022->FMGL(value) = res;
        alloc__139022;
    }))
    ;
    
    //#line 242 "x10/util/foreach/Block.x10"
    return res;
    }
    

//#line 178 "x10/util/foreach/Block.x10"
template<class TPMGL(T)> ::x10::util::foreach::Block__Reducer<TPMGL(T)>*
  x10::util::foreach::Block__Reducer<TPMGL(T)>::x10__util__foreach__Block__Reducer____this__x10__util__foreach__Block__Reducer(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::foreach::Block__Reducer<TPMGL(T)>::__fieldInitializers_x10_util_foreach_Block_Reducer(
  ) {
    this->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::foreach::Block__Reducer<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::foreach::Block__Reducer<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::util::foreach::Block__Reducer<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(result));
    buf.write(this->FMGL(reduce));
    buf.write(this->FMGL(identity));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::util::foreach::Block__Reducer<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::foreach::Block__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Block__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Block__Reducer<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::util::foreach::Block__Reducer<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(result) = buf.read< ::x10::lang::Cell<TPMGL(T)>*>();
    FMGL(reduce) = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
    FMGL(identity) = buf.read<TPMGL(T)>();
}

#endif // X10_UTIL_FOREACH_BLOCK__REDUCER_H_IMPLEMENTATION
#endif // __X10_UTIL_FOREACH_BLOCK__REDUCER_H_NODEPS
