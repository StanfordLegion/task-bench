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
namespace x10 { namespace util { namespace foreach { 
class Sequential;
} } } 
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
#include <x10/util/foreach/Sequential.h>
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
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_foreach_Block__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Block__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(::x10::lang::LongRange range){
        
        //#line 102 "x10/util/foreach/Block.x10"
        TPMGL(T) myRes = identity;
        
        //#line 103 "x10/util/foreach/Block.x10"
        ::x10::lang::LongRange i__121961domain__122015 = range;
        x10_long i__121961min__122016 = i__121961domain__122015->FMGL(min);
        x10_long i__121961max__122017 = i__121961domain__122015->FMGL(max);
        {
            x10_long i__122018;
            for (i__122018 = i__121961min__122016; ((i__122018) <= (i__121961max__122017));
                 i__122018 = ((i__122018) + (((x10_long)1ll)))) {
                x10_long i__122019 = i__122018;
                
                //#line 104 "x10/util/foreach/Block.x10"
                myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__122019));
            }
        }
        
        //#line 106 "x10/util/foreach/Block.x10"
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
        x10_util_foreach_Block__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_util_foreach_Block__closure__4<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__closure__4<TPMGL(T) >(that_identity, that_body, that_reduce);
        return this_;
    }
    
    x10_util_foreach_Block__closure__4(TPMGL(T) identity, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : identity(identity), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:101-107";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Block__closure__4<TPMGL(T) > >x10_util_foreach_Block__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__closure__4<TPMGL(T) >::__apply, &x10_util_foreach_Block__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >, &x10_util_foreach_Block__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__closure__4<TPMGL(T) >::_deserialize);

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
        results->x10::lang::template Rail< TPMGL(T) >::__set(myT, ::x10::util::foreach::Sequential::_kwd__for< TPMGL(T) >(
                                                                    block,
                                                                    reduce,
                                                                    identity,
                                                                    body));
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
#ifndef X10_UTIL_FOREACH_BLOCK_H__kwd__for_2232
#define X10_UTIL_FOREACH_BLOCK_H__kwd__for_2232
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block::_kwd__for(::x10::lang::LongRange range,
                                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                                       TPMGL(T) identity,
                                                                       ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 101 "x10/util/foreach/Block.x10"
    ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* executeRange =
      reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(sizeof(x10_util_foreach_Block__closure__4<TPMGL(T)>)))x10_util_foreach_Block__closure__4<TPMGL(T)>(identity, body, reduce)));
    
    //#line 108 "x10/util/foreach/Block.x10"
    return ::x10::util::foreach::Block::template _kwd__for< TPMGL(T) >(
             range, reduce, executeRange);
    
}
#endif // X10_UTIL_FOREACH_BLOCK_H__kwd__for_2232
#ifndef X10_UTIL_FOREACH_BLOCK_H__kwd__for_2233
#define X10_UTIL_FOREACH_BLOCK_H__kwd__for_2233
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block::_kwd__for(
  ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
    
    //#line 121 "x10/util/foreach/Block.x10"
    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                 ((x10_int)1)))) {
        
        //#line 122 "x10/util/foreach/Block.x10"
        return ::x10::util::foreach::Sequential::template _kwd__for< TPMGL(T) >(
                 space, reduce, identity, body);
        
    } else {
        
        //#line 124 "x10/util/foreach/Block.x10"
        ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
        {
            
            //#line 125 "x10/util/foreach/Block.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__122041 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    {
                        x10_long t;
                        for (t = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                             ((t) >= (((x10_long)0ll))); t =
                                                           ((t) - (((x10_long)1ll))))
                        {
                            
                            //#line 126 "x10/util/foreach/Block.x10"
                            x10_long myT = t;
                            
                            //#line 127 "x10/util/foreach/Block.x10"
                            ::x10::array::DenseIterationSpace_2* block =
                              ::x10::array::BlockingUtils::partitionBlockBlock(
                                reinterpret_cast< ::x10::array::IterationSpace*>(space),
                                ((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())),
                                myT);
                            
                            //#line 128 "x10/util/foreach/Block.x10"
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Block__closure__5<TPMGL(T)>)))x10_util_foreach_Block__closure__5<TPMGL(T)>(results, myT, block, reduce, identity, body))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2234) {
                {
                    ::x10::lang::CheckedThrowable* ct__122039 =
                      __exc2234;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__122039);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__122041);
        }
        
        //#line 130 "x10/util/foreach/Block.x10"
        TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         ((x10_long)0ll));
        
        //#line 131 "x10/util/foreach/Block.x10"
        x10_long i__121980min__122020 = ((x10_long)1ll);
        x10_long i__121980max__122021 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
        {
            x10_long i__122022;
            for (i__122022 = i__121980min__122020; ((i__122022) <= (i__121980max__122021));
                 i__122022 = ((i__122022) + (((x10_long)1ll))))
            {
                x10_long myT__122023 = i__122022;
                
                //#line 132 "x10/util/foreach/Block.x10"
                res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         myT__122023));
            }
        }
        
        //#line 134 "x10/util/foreach/Block.x10"
        return res;
        
    }
    
}
#endif // X10_UTIL_FOREACH_BLOCK_H__kwd__for_2233
#ifndef X10_UTIL_FOREACH_BLOCK_H__kwd__for_2235
#define X10_UTIL_FOREACH_BLOCK_H__kwd__for_2235
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
            ::x10::xrx::FinishState* fs__122046 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    {
                        x10_long t;
                        for (t = ((((x10_long)(nthreads))) - (((x10_long)1ll)));
                             ((t) >= (((x10_long)0ll))); t =
                                                           ((t) - (((x10_long)1ll))))
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
            catch (::x10::lang::CheckedThrowable* __exc2236) {
                {
                    ::x10::lang::CheckedThrowable* ct__122044 =
                      __exc2236;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__122044);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__122046);
        }
        
        //#line 167 "x10/util/foreach/Block.x10"
        TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         ((x10_long)0ll));
        
        //#line 168 "x10/util/foreach/Block.x10"
        x10_long i__121998min__122024 = ((x10_long)1ll);
        x10_long i__121998max__122025 = ((((x10_long)(nthreads))) - (((x10_long)1ll)));
        {
            x10_long i__122026;
            for (i__122026 = i__121998min__122024; ((i__122026) <= (i__121998max__122025));
                 i__122026 = ((i__122026) + (((x10_long)1ll))))
            {
                x10_long myT__122027 = i__122026;
                
                //#line 169 "x10/util/foreach/Block.x10"
                res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         myT__122027));
            }
        }
        
        //#line 171 "x10/util/foreach/Block.x10"
        return res;
        
    }
    
}
#endif // X10_UTIL_FOREACH_BLOCK_H__kwd__for_2235
#endif // X10_UTIL_FOREACH_BLOCK_H_GENERICS
#endif // __X10_UTIL_FOREACH_BLOCK_H_NODEPS
