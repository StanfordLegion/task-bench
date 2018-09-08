#ifndef __X10_UTIL_FOREACH_BLOCK_H
#define __X10_UTIL_FOREACH_BLOCK_H

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
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace array { 
class BlockingUtils;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace foreach { 

class Block : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1< ::x10::lang::LongRange>* body);
    static void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void _kwd__for(::x10::array::DenseIterationSpace_2* space, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::array::DenseIterationSpace_2* space,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body);
    virtual ::x10::util::foreach::Block* x10__util__foreach__Block____this__x10__util__foreach__Block(
      );
    void _constructor();
    
    static ::x10::util::foreach::Block* _make();
    
    virtual void __fieldInitializers_x10_util_foreach_Block(
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
#endif // X10_UTIL_FOREACH_BLOCK_H

namespace x10 { namespace util { namespace foreach { 
class Block;
} } } 

#ifndef X10_UTIL_FOREACH_BLOCK_H_NODEPS
#define X10_UTIL_FOREACH_BLOCK_H_NODEPS
#include <x10/lang/LongRange.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Inline.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/array/BlockingUtils.h>
#include <x10/array/IterationSpace.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Unsafe.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_FOREACH_BLOCK__CLOSURE__4_CLOSURE
#define X10_UTIL_FOREACH_BLOCK__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Block__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 162 "x10/util/foreach/Block.x10"
        x10_long lo__139436 = ((((min__139426) + (((blockSize__139431) * (myT__139435))))) + (((myT__139435) < (leftOver__139432))
          ? (myT__139435) : (leftOver__139432)));
        
        //#line 163 "x10/util/foreach/Block.x10"
        x10_long hi__139437 = ((((lo__139436) + (blockSize__139431))) + (((myT__139435) < (leftOver__139432))
          ? (((x10_long)0ll)) : (((x10_long)-1ll))));
        
        //#line 164 "x10/util/foreach/Block.x10"
        results__139433->x10::lang::template Rail< TPMGL(T) >::__set(
          myT__139435, (__extension__ ({
              ::x10::lang::LongRange range__139438 = ::x10::lang::LongRange::_make(lo__139436, hi__139437);
              
              //#line 102 "x10/util/foreach/Block.x10"
              TPMGL(T) myRes__139439 = identity;
              
              //#line 103 "x10/util/foreach/Block.x10"
              x10_long i__139024min__139412 = range__139438->FMGL(min);
              x10_long i__139024max__139413 = range__139438->FMGL(max);
              {
                  x10_long i__139414;
                  for (i__139414 = i__139024min__139412; ((i__139414) <= (i__139024max__139413));
                       i__139414 = ((i__139414) + (((x10_long)1ll))))
                  {
                      
                      //#line 104 "x10/util/foreach/Block.x10"
                      myRes__139439 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                        myRes__139439, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                          i__139414));
                  }
              }
              myRes__139439;
          }))
          );
    }
    
    // captured environment
    x10_long min__139426;
    x10_long blockSize__139431;
    x10_long myT__139435;
    x10_long leftOver__139432;
    ::x10::lang::Rail< TPMGL(T) >* results__139433;
    TPMGL(T) identity;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->min__139426);
        buf.write(this->blockSize__139431);
        buf.write(this->myT__139435);
        buf.write(this->leftOver__139432);
        buf.write(this->results__139433);
        buf.write(this->identity);
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Block__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_min__139426 = buf.read<x10_long>();
        x10_long that_blockSize__139431 = buf.read<x10_long>();
        x10_long that_myT__139435 = buf.read<x10_long>();
        x10_long that_leftOver__139432 = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_results__139433 = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_util_foreach_Block__closure__4<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__closure__4<TPMGL(T) >(that_min__139426, that_blockSize__139431, that_myT__139435, that_leftOver__139432, that_results__139433, that_identity, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Block__closure__4(x10_long min__139426, x10_long blockSize__139431, x10_long myT__139435, x10_long leftOver__139432, ::x10::lang::Rail< TPMGL(T) >* results__139433, TPMGL(T) identity, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) : min__139426(min__139426), blockSize__139431(blockSize__139431), myT__139435(myT__139435), leftOver__139432(leftOver__139432), results__139433(results__139433), identity(identity), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:161-165";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__closure__4<TPMGL(T) > >x10_util_foreach_Block__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__closure__4<TPMGL(T) >::__apply, &x10_util_foreach_Block__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Block__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__closure__4<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__4<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Block__closure__4<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BLOCK__CLOSURE__4_CLOSURE
#ifndef X10_UTIL_FOREACH_BLOCK__CLOSURE__5_CLOSURE
#define X10_UTIL_FOREACH_BLOCK__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Block__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__closure__5<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        results->x10::lang::template Rail< TPMGL(T) >::__set(myT, (__extension__ ({
                                                                 
                                                                 //#line 88 "x10/util/foreach/Sequential.x10"
                                                                 TPMGL(T) myRes__139216 =
                                                                   identity;
                                                                 
                                                                 //#line 89 "x10/util/foreach/Sequential.x10"
                                                                 x10_long j__137154min__139456 =
                                                                   block->x10::array::DenseIterationSpace_2::min(
                                                                     ((x10_long)1ll));
                                                                 x10_long j__137154max__139457 =
                                                                   block->x10::array::DenseIterationSpace_2::max(
                                                                     ((x10_long)1ll));
                                                                 x10_long i__137185min__139458 =
                                                                   block->x10::array::DenseIterationSpace_2::min(
                                                                     ((x10_long)0ll));
                                                                 x10_long i__137185max__139459 =
                                                                   block->x10::array::DenseIterationSpace_2::max(
                                                                     ((x10_long)0ll));
                                                                 {
                                                                     x10_long i__139460;
                                                                     for (i__139460 =
                                                                            i__137185min__139458;
                                                                          ((i__139460) <= (i__137185max__139459));
                                                                          i__139460 =
                                                                            ((i__139460) + (((x10_long)1ll))))
                                                                     {
                                                                         {
                                                                             x10_long j__139462;
                                                                             for (j__139462 =
                                                                                    j__137154min__139456;
                                                                                  ((j__139462) <= (j__137154max__139457));
                                                                                  j__139462 =
                                                                                    ((j__139462) + (((x10_long)1ll))))
                                                                             {
                                                                                 
                                                                                 //#line 90 "x10/util/foreach/Sequential.x10"
                                                                                 myRes__139216 =
                                                                                   ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                                                                   myRes__139216,
                                                                                   ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                                                     i__139460,
                                                                                     j__139462));
                                                                             }
                                                                         }
                                                                         
                                                                     }
                                                                 }
                                                                 myRes__139216;
                                                             }))
                                                             );
    }
    
    // captured environment
    ::x10::lang::Rail< TPMGL(T) >* results;
    x10_long myT;
    ::x10::array::DenseIterationSpace_2* block;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    TPMGL(T) identity;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->results);
        buf.write(this->myT);
        buf.write(this->block);
        buf.write(this->reduce);
        buf.write(this->identity);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Block__closure__5<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_long that_myT = buf.read<x10_long>();
        ::x10::array::DenseIterationSpace_2* that_block = buf.read< ::x10::array::DenseIterationSpace_2*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Block__closure__5<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__closure__5<TPMGL(T) >(that_results, that_myT, that_block, that_reduce, that_identity, that_body);
        return this_;
    }
    
    x10_util_foreach_Block__closure__5(::x10::lang::Rail< TPMGL(T) >* results, x10_long myT, ::x10::array::DenseIterationSpace_2* block, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) : results(results), myT(myT), block(block), reduce(reduce), identity(identity), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:128";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__closure__5<TPMGL(T) > >x10_util_foreach_Block__closure__5<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__closure__5<TPMGL(T) >::__apply, &x10_util_foreach_Block__closure__5<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__closure__5<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Block__closure__5<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__5<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__closure__5<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__5<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Block__closure__5<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BLOCK__CLOSURE__5_CLOSURE
#ifndef X10_UTIL_FOREACH_BLOCK__CLOSURE__6_CLOSURE
#define X10_UTIL_FOREACH_BLOCK__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Block__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__closure__6<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 162 "x10/util/foreach/Block.x10"
        x10_long lo = ((((min) + (((blockSize) * (myT))))) + (((myT) < (leftOver))
          ? (myT) : (leftOver)));
        
        //#line 163 "x10/util/foreach/Block.x10"
        x10_long hi = ((((lo) + (blockSize))) + (((myT) < (leftOver))
          ? (((x10_long)0ll)) : (((x10_long)-1ll))));
        
        //#line 164 "x10/util/foreach/Block.x10"
        results->x10::lang::template Rail< TPMGL(T) >::__set(myT,
                                                             ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                               ::x10::lang::LongRange::_make(lo, hi)));
    }
    
    // captured environment
    x10_long min;
    x10_long blockSize;
    x10_long myT;
    x10_long leftOver;
    ::x10::lang::Rail< TPMGL(T) >* results;
    ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->min);
        buf.write(this->blockSize);
        buf.write(this->myT);
        buf.write(this->leftOver);
        buf.write(this->results);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Block__closure__6<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_min = buf.read<x10_long>();
        x10_long that_blockSize = buf.read<x10_long>();
        x10_long that_myT = buf.read<x10_long>();
        x10_long that_leftOver = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>*>();
        x10_util_foreach_Block__closure__6<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__closure__6<TPMGL(T) >(that_min, that_blockSize, that_myT, that_leftOver, that_results, that_body);
        return this_;
    }
    
    x10_util_foreach_Block__closure__6(x10_long min, x10_long blockSize, x10_long myT, x10_long leftOver, ::x10::lang::Rail< TPMGL(T) >* results, ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) : min(min), blockSize(blockSize), myT(myT), leftOver(leftOver), results(results), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:161-165";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__closure__6<TPMGL(T) > >x10_util_foreach_Block__closure__6<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__closure__6<TPMGL(T) >::__apply, &x10_util_foreach_Block__closure__6<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__closure__6<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Block__closure__6<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__6<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__closure__6<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__6<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Block__closure__6<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BLOCK__CLOSURE__6_CLOSURE
#ifndef X10_UTIL_FOREACH_BLOCK_H_GENERICS
#define X10_UTIL_FOREACH_BLOCK_H_GENERICS
#ifndef X10_UTIL_FOREACH_BLOCK_H__kwd__for_2260
#define X10_UTIL_FOREACH_BLOCK_H__kwd__for_2260
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block::_kwd__for(::x10::lang::LongRange range,
                                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                                       TPMGL(T) identity,
                                                                       ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 108 "x10/util/foreach/Block.x10"
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139420 =
      reduce;
    
    //#line 145 "x10/util/foreach/Block.x10"
    TPMGL(T) ret__139421;
    goto __ret__139422; __ret__139422: {
    {
        
        //#line 148 "x10/util/foreach/Block.x10"
        x10_int nthreads__139423 = ::x10::xrx::Runtime::FMGL(NTHREADS__get)();
        
        //#line 149 "x10/util/foreach/Block.x10"
        if ((::x10aux::struct_equals(nthreads__139423, ((x10_int)1))))
        {
            
            //#line 150 "x10/util/foreach/Block.x10"
            ret__139421 = (__extension__ ({
                
                //#line 102 "x10/util/foreach/Block.x10"
                TPMGL(T) myRes__139425 = identity;
                
                //#line 103 "x10/util/foreach/Block.x10"
                x10_long i__139024min__139402 = range->FMGL(min);
                x10_long i__139024max__139403 = range->FMGL(max);
                {
                    x10_long i__139404;
                    for (i__139404 = i__139024min__139402;
                         ((i__139404) <= (i__139024max__139403));
                         i__139404 = ((i__139404) + (((x10_long)1ll))))
                    {
                        
                        //#line 104 "x10/util/foreach/Block.x10"
                        myRes__139425 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          myRes__139425, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                            i__139404));
                    }
                }
                myRes__139425;
            }))
            ;
            goto __ret__139422_end_;
        } else {
            
            //#line 152 "x10/util/foreach/Block.x10"
            x10_long min__139426 = range->FMGL(min);
            
            //#line 153 "x10/util/foreach/Block.x10"
            x10_long max__139427 = range->FMGL(max);
            
            //#line 154 "x10/util/foreach/Block.x10"
            x10_long numElems__139428 = ((((max__139427) - (min__139426))) + (((x10_long)1ll)));
            
            //#line 155 "x10/util/foreach/Block.x10"
            if (((numElems__139428) < (((x10_long)1ll))))
            {
                ret__139421 = (__extension__ ({
                    
                    //#line 102 "x10/util/foreach/Block.x10"
                    TPMGL(T) myRes__139430 = identity;
                    
                    //#line 103 "x10/util/foreach/Block.x10"
                    x10_long i__139024min__139407 = range->FMGL(min);
                    x10_long i__139024max__139408 = range->FMGL(max);
                    {
                        x10_long i__139409;
                        for (i__139409 = i__139024min__139407;
                             ((i__139409) <= (i__139024max__139408));
                             i__139409 = ((i__139409) + (((x10_long)1ll))))
                        {
                            
                            //#line 104 "x10/util/foreach/Block.x10"
                            myRes__139430 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                              myRes__139430, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                i__139409));
                        }
                    }
                    myRes__139430;
                }))
                ;
                goto __ret__139422_end_;
            }
            
            //#line 156 "x10/util/foreach/Block.x10"
            x10_long blockSize__139431 = ((numElems__139428) / ::x10aux::zeroCheck(((x10_long)(nthreads__139423))));
            
            //#line 157 "x10/util/foreach/Block.x10"
            x10_long leftOver__139432 = ((numElems__139428) - (((((x10_long)(nthreads__139423))) * (blockSize__139431))));
            
            //#line 158 "x10/util/foreach/Block.x10"
            ::x10::lang::Rail< TPMGL(T) >* results__139433 =
              ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(nthreads__139423)), false);
            {
                
                //#line 159 "x10/util/foreach/Block.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__139555 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long t__139434;
                            for (t__139434 = ((((x10_long)(nthreads__139423))) - (((x10_long)1ll)));
                                 ((t__139434) >= (((x10_long)0ll)));
                                 t__139434 = ((t__139434) - (((x10_long)1ll))))
                            {
                                
                                //#line 160 "x10/util/foreach/Block.x10"
                                x10_long myT__139435 = t__139434;
                                
                                //#line 161 "x10/util/foreach/Block.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Block__closure__4<TPMGL(T)>)))x10_util_foreach_Block__closure__4<TPMGL(T)>(min__139426, blockSize__139431, myT__139435, leftOver__139432, results__139433, identity, reduce, body))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc2261) {
                    {
                        ::x10::lang::CheckedThrowable* ct__139553 =
                          __exc2261;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__139553);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__139555);
            }
            
            //#line 167 "x10/util/foreach/Block.x10"
            TPMGL(T) res__139440 = results__139433->x10::lang::template Rail< TPMGL(T) >::__apply(
                                     ((x10_long)0ll));
            
            //#line 168 "x10/util/foreach/Block.x10"
            x10_long i__139061max__139416 = ((((x10_long)(nthreads__139423))) - (((x10_long)1ll)));
            {
                x10_long i__139417;
                for (i__139417 = ((x10_long)1ll); ((i__139417) <= (i__139061max__139416));
                     i__139417 = ((i__139417) + (((x10_long)1ll))))
                {
                    
                    //#line 169 "x10/util/foreach/Block.x10"
                    res__139440 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139420), 
                      res__139440, results__139433->x10::lang::template Rail< TPMGL(T) >::__apply(
                                     i__139417));
                }
            }
            
            //#line 171 "x10/util/foreach/Block.x10"
            ret__139421 = res__139440;
            goto __ret__139422_end_;
        }
        
    }goto __ret__139422_end_; __ret__139422_end_: ;
    }
    
    //#line 108 "x10/util/foreach/Block.x10"
    return ret__139421;
    }
    #endif // X10_UTIL_FOREACH_BLOCK_H__kwd__for_2260
    #ifndef X10_UTIL_FOREACH_BLOCK_H__kwd__for_2262
    #define X10_UTIL_FOREACH_BLOCK_H__kwd__for_2262
    template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block::_kwd__for(
      ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
        
        //#line 121 "x10/util/foreach/Block.x10"
        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                     ((x10_int)1)))) {
            
            //#line 88 "x10/util/foreach/Sequential.x10"
            TPMGL(T) myRes__139454 = identity;
            
            //#line 89 "x10/util/foreach/Sequential.x10"
            x10_long j__137154min__139442 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                              ((x10_long)1ll));
            x10_long j__137154max__139443 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                              ((x10_long)1ll));
            x10_long i__137185min__139444 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                              ((x10_long)0ll));
            x10_long i__137185max__139445 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                              ((x10_long)0ll));
            {
                x10_long i__139446;
                for (i__139446 = i__137185min__139444; ((i__139446) <= (i__137185max__139445));
                     i__139446 = ((i__139446) + (((x10_long)1ll))))
                {
                    {
                        x10_long j__139448;
                        for (j__139448 = j__137154min__139442;
                             ((j__139448) <= (j__137154max__139443));
                             j__139448 = ((j__139448) + (((x10_long)1ll))))
                        {
                            
                            //#line 90 "x10/util/foreach/Sequential.x10"
                            myRes__139454 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                              myRes__139454, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                i__139446, j__139448));
                        }
                    }
                    
                }
            }
            
            //#line 122 "x10/util/foreach/Block.x10"
            return myRes__139454;
            
        } else {
            
            //#line 124 "x10/util/foreach/Block.x10"
            ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
            {
                
                //#line 125 "x10/util/foreach/Block.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__139560 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long t;
                            for (t = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                                 ((t) >= (((x10_long)0ll)));
                                 t = ((t) - (((x10_long)1ll))))
                            {
                                
                                //#line 126 "x10/util/foreach/Block.x10"
                                x10_long myT = t;
                                
                                //#line 127 "x10/util/foreach/Block.x10"
                                ::x10::array::DenseIterationSpace_2* block =
                                  ::x10::array::BlockingUtils::partitionBlockBlock(
                                    reinterpret_cast< ::x10::array::IterationSpace*>(space),
                                    ((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())),
                                    t);
                                
                                //#line 128 "x10/util/foreach/Block.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Block__closure__5<TPMGL(T)>)))x10_util_foreach_Block__closure__5<TPMGL(T)>(results, myT, block, reduce, identity, body))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc2263) {
                    {
                        ::x10::lang::CheckedThrowable* ct__139558 =
                          __exc2263;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__139558);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__139560);
            }
            
            //#line 130 "x10/util/foreach/Block.x10"
            TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             ((x10_long)0ll));
            
            //#line 131 "x10/util/foreach/Block.x10"
            x10_long i__139043max__139464 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
            {
                x10_long i__139465;
                for (i__139465 = ((x10_long)1ll); ((i__139465) <= (i__139043max__139464));
                     i__139465 = ((i__139465) + (((x10_long)1ll))))
                {
                    
                    //#line 132 "x10/util/foreach/Block.x10"
                    res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             i__139465));
                }
            }
            
            //#line 134 "x10/util/foreach/Block.x10"
            return res;
            
        }
        
    }
    #endif // X10_UTIL_FOREACH_BLOCK_H__kwd__for_2262
    #ifndef X10_UTIL_FOREACH_BLOCK_H__kwd__for_2264
    #define X10_UTIL_FOREACH_BLOCK_H__kwd__for_2264
    template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block::_kwd__for(
      ::x10::lang::LongRange range, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) {
        
        //#line 148 "x10/util/foreach/Block.x10"
        x10_int nthreads = ::x10::xrx::Runtime::FMGL(NTHREADS__get)();
        
        //#line 149 "x10/util/foreach/Block.x10"
        if ((::x10aux::struct_equals(nthreads, ((x10_int)1))))
        {
            
            //#line 150 "x10/util/foreach/Block.x10"
            return ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
              range);
            
        } else {
            
            //#line 152 "x10/util/foreach/Block.x10"
            x10_long min = range->FMGL(min);
            
            //#line 153 "x10/util/foreach/Block.x10"
            x10_long max = range->FMGL(max);
            
            //#line 154 "x10/util/foreach/Block.x10"
            x10_long numElems = ((((max) - (min))) + (((x10_long)1ll)));
            
            //#line 155 "x10/util/foreach/Block.x10"
            if (((numElems) < (((x10_long)1ll)))) {
                return ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                  range);
                
            }
            
            //#line 156 "x10/util/foreach/Block.x10"
            x10_long blockSize = ((numElems) / ::x10aux::zeroCheck(((x10_long)(nthreads))));
            
            //#line 157 "x10/util/foreach/Block.x10"
            x10_long leftOver = ((numElems) - (((((x10_long)(nthreads))) * (blockSize))));
            
            //#line 158 "x10/util/foreach/Block.x10"
            ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(nthreads)), false);
            {
                
                //#line 159 "x10/util/foreach/Block.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__139565 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long t;
                            for (t = ((((x10_long)(nthreads))) - (((x10_long)1ll)));
                                 ((t) >= (((x10_long)0ll)));
                                 t = ((t) - (((x10_long)1ll))))
                            {
                                
                                //#line 160 "x10/util/foreach/Block.x10"
                                x10_long myT = t;
                                
                                //#line 161 "x10/util/foreach/Block.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Block__closure__6<TPMGL(T)>)))x10_util_foreach_Block__closure__6<TPMGL(T)>(min, blockSize, myT, leftOver, results, body))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc2265) {
                    {
                        ::x10::lang::CheckedThrowable* ct__139563 =
                          __exc2265;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__139563);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__139565);
            }
            
            //#line 167 "x10/util/foreach/Block.x10"
            TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             ((x10_long)0ll));
            
            //#line 168 "x10/util/foreach/Block.x10"
            x10_long i__139061max__139467 = ((((x10_long)(nthreads))) - (((x10_long)1ll)));
            {
                x10_long i__139468;
                for (i__139468 = ((x10_long)1ll); ((i__139468) <= (i__139061max__139467));
                     i__139468 = ((i__139468) + (((x10_long)1ll))))
                {
                    
                    //#line 169 "x10/util/foreach/Block.x10"
                    res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             i__139468));
                }
            }
            
            //#line 171 "x10/util/foreach/Block.x10"
            return res;
            
        }
        
    }
    #endif // X10_UTIL_FOREACH_BLOCK_H__kwd__for_2264
    #endif // X10_UTIL_FOREACH_BLOCK_H_GENERICS
    #endif // __X10_UTIL_FOREACH_BLOCK_H_NODEPS
