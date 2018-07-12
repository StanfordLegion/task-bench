#ifndef __X10_COMPILER_FOREACH_H
#define __X10_COMPILER_FOREACH_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
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
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace array { 
class BlockingUtils;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(Z3), class TPMGL(Z4)>
class VoidFun_0_4;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(Z3), class TPMGL(Z4), class TPMGL(U)>
class Fun_0_4;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { 

class Foreach : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void sequential(x10_long min, x10_long max, ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void sequential(x10_long min0, x10_long max0, x10_long min1,
                           x10_long max1, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void sequential(x10_long min, x10_long max, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void sequential(::x10::array::DenseIterationSpace_2* space,
                           ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) sequentialReduce(x10_long min,
                                                              x10_long max,
                                                              ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
                                                              ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                              TPMGL(T) identity);
    template<class TPMGL(T)> static TPMGL(T) sequentialReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce);
    template<class TPMGL(T)> static TPMGL(T) sequentialReduce(
      ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    static void basic(x10_long min, x10_long max, ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void basic(x10_long min0, x10_long max0, x10_long min1,
                      x10_long max1, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void block(x10_long min, x10_long max, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void block(x10_long min, x10_long max, ::x10::lang::VoidFun_0_1<x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) blockReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce);
    template<class TPMGL(T)> static TPMGL(T) blockReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    static void block(x10_long min0, x10_long max0, x10_long min1,
                      x10_long max1, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void block(::x10::array::DenseIterationSpace_2* space,
                      ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) blockReduce(
      ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    static void cyclic(x10_long min, x10_long max, ::x10::lang::VoidFun_0_1<x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) cyclicReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    static void bisect(x10_long min, x10_long max, x10_long grainSize,
                       ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void bisect(x10_long min, x10_long max, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void bisect(x10_long min, x10_long max, x10_long grainSize,
                       ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void bisect(x10_long min, x10_long max, ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void doBisect1D(x10_long start, x10_long end, x10_long grainSize,
                           ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      x10_long min, x10_long max, x10_long grainSize, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      x10_long min, x10_long max, x10_long grainSize, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    template<class TPMGL(T)> static TPMGL(T) doBisectReduce1D(
      x10_long start, x10_long end, x10_long grainSize, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce);
    static void bisect(x10_long min0, x10_long max0, x10_long min1,
                       x10_long max1, x10_long grainSize0,
                       x10_long grainSize1, ::x10::lang::VoidFun_0_4<x10_long, x10_long, x10_long, x10_long>* body);
    static void bisect(x10_long min0, x10_long max0, x10_long min1,
                       x10_long max1, ::x10::lang::VoidFun_0_4<x10_long, x10_long, x10_long, x10_long>* body);
    static void bisect(x10_long min0, x10_long max0, x10_long min1,
                       x10_long max1, x10_long grainSize0,
                       x10_long grainSize1, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void bisect(x10_long min0, x10_long max0, x10_long min1,
                       x10_long max1, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void doBisect2D(x10_long s0, x10_long e0, x10_long s1,
                           x10_long e1, x10_long g1, x10_long g2,
                           ::x10::lang::VoidFun_0_4<x10_long, x10_long, x10_long, x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      x10_long min0, x10_long max0, x10_long min1, x10_long max1,
      x10_long grainSize0, x10_long grainSize1, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      ::x10::array::DenseIterationSpace_2* space, x10_long grainSize0,
      x10_long grainSize1, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    template<class TPMGL(T)> static TPMGL(T) doBisectReduce2D(
      x10_long s0, x10_long e0, x10_long s1, x10_long e1,
      x10_long g1, x10_long g2, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce);
    virtual ::x10::compiler::Foreach* x10__compiler__Foreach____this__x10__compiler__Foreach(
      );
    void _constructor();
    
    static ::x10::compiler::Foreach* _make();
    
    virtual void __fieldInitializers_x10_compiler_Foreach(
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


} } 
#endif // X10_COMPILER_FOREACH_H

namespace x10 { namespace compiler { 
class Foreach;
} } 

#ifndef X10_COMPILER_FOREACH_H_NODEPS
#define X10_COMPILER_FOREACH_H_NODEPS
#include <x10/lang/Long.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/BlockingUtils.h>
#include <x10/array/IterationSpace.h>
#include <x10/lang/VoidFun_0_4.h>
#include <x10/lang/Fun_0_4.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_COMPILER_FOREACH__CLOSURE__5_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__5<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 257 "x10/compiler/Foreach.x10"
        x10_long lo = ((((min) + (((blockSize) * (myT))))) + (((myT) < (leftOver))
          ? (myT) : (leftOver)));
        
        //#line 258 "x10/compiler/Foreach.x10"
        x10_long hi = ((((lo) + (blockSize))) + (((myT) < (leftOver))
          ? (((x10_long)0ll)) : (((x10_long)-1ll))));
        
        //#line 259 "x10/compiler/Foreach.x10"
        results->x10::lang::template Rail< TPMGL(T) >::__set(myT,
                                                             ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                               lo,
                                                               hi));
    }
    
    // captured environment
    x10_long min;
    x10_long blockSize;
    x10_long myT;
    x10_long leftOver;
    ::x10::lang::Rail< TPMGL(T) >* results;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body;
    
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
        x10_compiler_Foreach__closure__5<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_min = buf.read<x10_long>();
        x10_long that_blockSize = buf.read<x10_long>();
        x10_long that_myT = buf.read<x10_long>();
        x10_long that_leftOver = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__5<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__5<TPMGL(T) >(that_min, that_blockSize, that_myT, that_leftOver, that_results, that_body);
        return this_;
    }
    
    x10_compiler_Foreach__closure__5(x10_long min, x10_long blockSize, x10_long myT, x10_long leftOver, ::x10::lang::Rail< TPMGL(T) >* results, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) : min(min), blockSize(blockSize), myT(myT), leftOver(leftOver), results(results), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:256-260";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__5<TPMGL(T) > >x10_compiler_Foreach__closure__5<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__5<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__5<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__5<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__5<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__5<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__5<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__5<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__5<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__5_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__6_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__6<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 257 "x10/compiler/Foreach.x10"
        x10_long lo__104353 = ((((min__104335) + (((blockSize__104348) * (myT__104352))))) + (((myT__104352) < (leftOver__104349))
          ? (myT__104352) : (leftOver__104349)));
        
        //#line 258 "x10/compiler/Foreach.x10"
        x10_long hi__104354 = ((((lo__104353) + (blockSize__104348))) + (((myT__104352) < (leftOver__104349))
          ? (((x10_long)0ll)) : (((x10_long)-1ll))));
        
        //#line 259 "x10/compiler/Foreach.x10"
        results__104350->x10::lang::template Rail< TPMGL(T) >::__set(
          myT__104352, (__extension__ ({
              
              //#line 285 "x10/compiler/Foreach.x10"
              TPMGL(T) myRes__104357 = identity;
              
              //#line 286 "x10/compiler/Foreach.x10"
              {
                  x10_long i__104330;
                  for (i__104330 = lo__104353; ((i__104330) <= (hi__104354));
                       i__104330 = ((i__104330) + (((x10_long)1ll))))
                  {
                      
                      //#line 287 "x10/compiler/Foreach.x10"
                      myRes__104357 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                        myRes__104357, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                          i__104330));
                  }
              }
              myRes__104357;
          }))
          );
    }
    
    // captured environment
    x10_long min__104335;
    x10_long blockSize__104348;
    x10_long myT__104352;
    x10_long leftOver__104349;
    ::x10::lang::Rail< TPMGL(T) >* results__104350;
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
        buf.write(this->min__104335);
        buf.write(this->blockSize__104348);
        buf.write(this->myT__104352);
        buf.write(this->leftOver__104349);
        buf.write(this->results__104350);
        buf.write(this->identity);
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__6<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_min__104335 = buf.read<x10_long>();
        x10_long that_blockSize__104348 = buf.read<x10_long>();
        x10_long that_myT__104352 = buf.read<x10_long>();
        x10_long that_leftOver__104349 = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_results__104350 = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__6<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__6<TPMGL(T) >(that_min__104335, that_blockSize__104348, that_myT__104352, that_leftOver__104349, that_results__104350, that_identity, that_reduce, that_body);
        return this_;
    }
    
    x10_compiler_Foreach__closure__6(x10_long min__104335, x10_long blockSize__104348, x10_long myT__104352, x10_long leftOver__104349, ::x10::lang::Rail< TPMGL(T) >* results__104350, TPMGL(T) identity, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) : min__104335(min__104335), blockSize__104348(blockSize__104348), myT__104352(myT__104352), leftOver__104349(leftOver__104349), results__104350(results__104350), identity(identity), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:256-260";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__6<TPMGL(T) > >x10_compiler_Foreach__closure__6<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__6<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__6<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__6<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__6<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__6<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__6<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__6<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__6<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__6_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__9_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__9 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__9<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        results->x10::lang::template Rail< TPMGL(T) >::__set(myT, (__extension__ ({
                                                                 
                                                                 //#line 139 "x10/compiler/Foreach.x10"
                                                                 TPMGL(T) myRes__103874 =
                                                                   identity;
                                                                 
                                                                 //#line 140 "x10/compiler/Foreach.x10"
                                                                 x10_long i__103365min__104442 =
                                                                   block->FMGL(min0);
                                                                 x10_long i__103365max__104443 =
                                                                   block->FMGL(max0);
                                                                 {
                                                                     x10_long i__104444;
                                                                     for (i__104444 =
                                                                            i__103365min__104442;
                                                                          ((i__104444) <= (i__103365max__104443));
                                                                          i__104444 =
                                                                            ((i__104444) + (((x10_long)1ll))))
                                                                     {
                                                                         
                                                                         //#line 141 "x10/compiler/Foreach.x10"
                                                                         x10_long i__103347min__104438 =
                                                                           block->FMGL(min1);
                                                                         x10_long i__103347max__104439 =
                                                                           block->FMGL(max1);
                                                                         {
                                                                             x10_long i__104440;
                                                                             for (i__104440 =
                                                                                    i__103347min__104438;
                                                                                  ((i__104440) <= (i__103347max__104439));
                                                                                  i__104440 =
                                                                                    ((i__104440) + (((x10_long)1ll))))
                                                                             {
                                                                                 
                                                                                 //#line 142 "x10/compiler/Foreach.x10"
                                                                                 myRes__103874 =
                                                                                   ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                                                                   myRes__103874,
                                                                                   ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                                                     i__104444,
                                                                                     i__104440));
                                                                             }
                                                                         }
                                                                         
                                                                     }
                                                                 }
                                                                 myRes__103874;
                                                             }))
                                                             );
    }
    
    // captured environment
    ::x10::lang::Rail< TPMGL(T) >* results;
    x10_long myT;
    ::x10::array::DenseIterationSpace_2* block;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    TPMGL(T) identity;
    
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
        buf.write(this->body);
        buf.write(this->reduce);
        buf.write(this->identity);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__9<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_long that_myT = buf.read<x10_long>();
        ::x10::array::DenseIterationSpace_2* that_block = buf.read< ::x10::array::DenseIterationSpace_2*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        x10_compiler_Foreach__closure__9<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__9<TPMGL(T) >(that_results, that_myT, that_block, that_body, that_reduce, that_identity);
        return this_;
    }
    
    x10_compiler_Foreach__closure__9(::x10::lang::Rail< TPMGL(T) >* results, x10_long myT, ::x10::array::DenseIterationSpace_2* block, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, TPMGL(T) identity) : results(results), myT(myT), block(block), body(body), reduce(reduce), identity(identity) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:356";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__9<TPMGL(T) > >x10_compiler_Foreach__closure__9<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__9<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__9<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__9<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__9<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__9<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__9<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__9<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__9<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__9_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__11_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__11 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__11<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 407 "x10/compiler/Foreach.x10"
        TPMGL(T) myRes__104470 = identity;
        
        //#line 408 "x10/compiler/Foreach.x10"
        {
            x10_long i__104471;
            for (i__104471 = ((min) + (t__104474)); ((i__104471) <= (max));
                 i__104471 = ((i__104471) + (((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())))))
            {
                
                //#line 409 "x10/compiler/Foreach.x10"
                myRes__104470 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes__104470, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__104471));
            }
        }
        
        //#line 411 "x10/compiler/Foreach.x10"
        results->x10::lang::template Rail< TPMGL(T) >::__set(
          t__104474, myRes__104470);
    }
    
    // captured environment
    TPMGL(T) identity;
    x10_long min;
    x10_long t__104474;
    x10_long max;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body;
    ::x10::lang::Rail< TPMGL(T) >* results;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity);
        buf.write(this->min);
        buf.write(this->t__104474);
        buf.write(this->max);
        buf.write(this->reduce);
        buf.write(this->body);
        buf.write(this->results);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__11<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__11<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        x10_long that_min = buf.read<x10_long>();
        x10_long that_t__104474 = buf.read<x10_long>();
        x10_long that_max = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_compiler_Foreach__closure__11<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__11<TPMGL(T) >(that_identity, that_min, that_t__104474, that_max, that_reduce, that_body, that_results);
        return this_;
    }
    
    x10_compiler_Foreach__closure__11(TPMGL(T) identity, x10_long min, x10_long t__104474, x10_long max, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body, ::x10::lang::Rail< TPMGL(T) >* results) : identity(identity), min(min), t__104474(t__104474), max(max), reduce(reduce), body(body), results(results) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:406-412";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__11<TPMGL(T) > >x10_compiler_Foreach__closure__11<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__11<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__11<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__11<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__11<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__11<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__11<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__11<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__11<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__11_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__15_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__15 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__15<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long start__104536, x10_long end__104537){
        
        //#line 524 "x10/compiler/Foreach.x10"
        TPMGL(T) myRes__104538 = identity;
        
        //#line 525 "x10/compiler/Foreach.x10"
        {
            x10_long i__104522;
            for (i__104522 = start__104536; ((i__104522) <= (end__104537));
                 i__104522 = ((i__104522) + (((x10_long)1ll)))) {
                
                //#line 526 "x10/compiler/Foreach.x10"
                myRes__104538 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes__104538, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__104522));
            }
        }
        
        //#line 528 "x10/compiler/Foreach.x10"
        return myRes__104538;
        
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
        x10_compiler_Foreach__closure__15<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__15<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__15<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__15<TPMGL(T) >(that_identity, that_reduce, that_body);
        return this_;
    }
    
    x10_compiler_Foreach__closure__15(TPMGL(T) identity, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) : identity(identity), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:523-529";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__15<TPMGL(T) > >x10_compiler_Foreach__closure__15<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__15<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__15<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__15<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__15<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__15<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__15<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__15_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__16_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__16 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__16<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long start__104574, x10_long end__104575){
        
        //#line 524 "x10/compiler/Foreach.x10"
        TPMGL(T) myRes__104576 = identity__104582;
        
        //#line 525 "x10/compiler/Foreach.x10"
        {
            x10_long i__104560;
            for (i__104560 = start__104574; ((i__104560) <= (end__104575));
                 i__104560 = ((i__104560) + (((x10_long)1ll)))) {
                
                //#line 526 "x10/compiler/Foreach.x10"
                myRes__104576 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__104581), 
                  myRes__104576, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__104580), 
                    i__104560));
            }
        }
        
        //#line 528 "x10/compiler/Foreach.x10"
        return myRes__104576;
        
    }
    
    // captured environment
    TPMGL(T) identity__104582;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104581;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__104580;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__104582);
        buf.write(this->reduce__104581);
        buf.write(this->body__104580);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__16<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__16<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__104582 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__104581 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body__104580 = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__16<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__16<TPMGL(T) >(that_identity__104582, that_reduce__104581, that_body__104580);
        return this_;
    }
    
    x10_compiler_Foreach__closure__16(TPMGL(T) identity__104582, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104581, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__104580) : identity__104582(identity__104582), reduce__104581(reduce__104581), body__104580(body__104580) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:523-529";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__16<TPMGL(T) > >x10_compiler_Foreach__closure__16<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__16<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__16<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__16<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__16<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__16<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__16<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__16_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__17_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__17 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__17<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        asyncResult = ::x10::compiler::Foreach::doBisectReduce1D< TPMGL(T) >(
                        ((((start) + (end))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                        end, grainSize, body, reduce);
    }
    
    // captured environment
    x10aux::captured_struct_lval<TPMGL(T)> asyncResult;
    x10_long start;
    x10_long end;
    x10_long grainSize;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    
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
        buf.write(this->body);
        buf.write(this->reduce);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__17<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__17<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_start = buf.read<x10_long>();
        x10_long that_end = buf.read<x10_long>();
        x10_long that_grainSize = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_compiler_Foreach__closure__17<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__17<TPMGL(T) >(that_asyncResult, that_start, that_end, that_grainSize, that_body, that_reduce);
        return this_;
    }
    
    x10_compiler_Foreach__closure__17(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long start, x10_long end, x10_long grainSize, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : asyncResult(asyncResult), start(start), end(end), grainSize(grainSize), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:598";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__17<TPMGL(T) > >x10_compiler_Foreach__closure__17<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__17<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__17<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__17<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__17<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__17<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__17<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__17<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__17<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__17_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__22_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__22 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__22<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min0, x10_long max0, x10_long min1, x10_long max1){
        
        //#line 753 "x10/compiler/Foreach.x10"
        TPMGL(T) myResult = identity;
        
        //#line 754 "x10/compiler/Foreach.x10"
        {
            x10_long i__104678;
            for (i__104678 = min0; ((i__104678) <= (max0)); i__104678 = ((i__104678) + (((x10_long)1ll))))
            {
                
                //#line 755 "x10/compiler/Foreach.x10"
                {
                    x10_long i__104674;
                    for (i__104674 = min1; ((i__104674) <= (max1));
                         i__104674 = ((i__104674) + (((x10_long)1ll))))
                    {
                        
                        //#line 756 "x10/compiler/Foreach.x10"
                        myResult = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          myResult, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                            i__104678, i__104674));
                    }
                }
                
            }
        }
        
        //#line 759 "x10/compiler/Foreach.x10"
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
        x10_compiler_Foreach__closure__22<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__22<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__22<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__22<TPMGL(T) >(that_identity, that_reduce, that_body);
        return this_;
    }
    
    x10_compiler_Foreach__closure__22(TPMGL(T) identity, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) : identity(identity), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:752-760";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__22<TPMGL(T) > >x10_compiler_Foreach__closure__22<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__22<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__22<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__22<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__22<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__22<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__22<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__22_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__23_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__23_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__23 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__23<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min__104713, x10_long max__104714, x10_long min__104715, x10_long max__104716){
        
        //#line 753 "x10/compiler/Foreach.x10"
        TPMGL(T) myResult__104717 = identity__104704;
        
        //#line 754 "x10/compiler/Foreach.x10"
        {
            x10_long i__104694;
            for (i__104694 = min__104713; ((i__104694) <= (max__104714));
                 i__104694 = ((i__104694) + (((x10_long)1ll)))) {
                
                //#line 755 "x10/compiler/Foreach.x10"
                {
                    x10_long i__104690;
                    for (i__104690 = min__104715; ((i__104690) <= (max__104716));
                         i__104690 = ((i__104690) + (((x10_long)1ll))))
                    {
                        
                        //#line 756 "x10/compiler/Foreach.x10"
                        myResult__104717 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__104703), 
                          myResult__104717, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__104702), 
                            i__104694, i__104690));
                    }
                }
                
            }
        }
        
        //#line 759 "x10/compiler/Foreach.x10"
        return myResult__104717;
        
    }
    
    // captured environment
    TPMGL(T) identity__104704;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104703;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__104702;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__104704);
        buf.write(this->reduce__104703);
        buf.write(this->body__104702);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__23<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__23<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__104704 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__104703 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body__104702 = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__23<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__23<TPMGL(T) >(that_identity__104704, that_reduce__104703, that_body__104702);
        return this_;
    }
    
    x10_compiler_Foreach__closure__23(TPMGL(T) identity__104704, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104703, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__104702) : identity__104704(identity__104704), reduce__104703(reduce__104703), body__104702(body__104702) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:752-760";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__23<TPMGL(T) > >x10_compiler_Foreach__closure__23<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__23<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__23<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__23<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__23<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__23<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__23<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__23_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__24_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__24_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__24 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__24<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min__104751, x10_long max__104752, x10_long min__104753, x10_long max__104754){
        
        //#line 753 "x10/compiler/Foreach.x10"
        TPMGL(T) myResult__104755 = identity__104742;
        
        //#line 754 "x10/compiler/Foreach.x10"
        {
            x10_long i__104732;
            for (i__104732 = min__104751; ((i__104732) <= (max__104752));
                 i__104732 = ((i__104732) + (((x10_long)1ll)))) {
                
                //#line 755 "x10/compiler/Foreach.x10"
                {
                    x10_long i__104728;
                    for (i__104728 = min__104753; ((i__104728) <= (max__104754));
                         i__104728 = ((i__104728) + (((x10_long)1ll))))
                    {
                        
                        //#line 756 "x10/compiler/Foreach.x10"
                        myResult__104755 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__104741), 
                          myResult__104755, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__104740), 
                            i__104732, i__104728));
                    }
                }
                
            }
        }
        
        //#line 759 "x10/compiler/Foreach.x10"
        return myResult__104755;
        
    }
    
    // captured environment
    TPMGL(T) identity__104742;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104741;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__104740;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__104742);
        buf.write(this->reduce__104741);
        buf.write(this->body__104740);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__24<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__24<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__104742 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__104741 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body__104740 = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__24<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__24<TPMGL(T) >(that_identity__104742, that_reduce__104741, that_body__104740);
        return this_;
    }
    
    x10_compiler_Foreach__closure__24(TPMGL(T) identity__104742, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104741, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__104740) : identity__104742(identity__104742), reduce__104741(reduce__104741), body__104740(body__104740) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:752-760";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__24<TPMGL(T) > >x10_compiler_Foreach__closure__24<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__24<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__24<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__24<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__24<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__24<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__24<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__24_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__25_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__25 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__25<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        asyncResult = ::x10::compiler::Foreach::doBisectReduce2D< TPMGL(T) >(
                        ((((s0) + (e0))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                        e0, s1, e1, g1, g2, body, reduce);
    }
    
    // captured environment
    x10aux::captured_struct_lval<TPMGL(T)> asyncResult;
    x10_long s0;
    x10_long e0;
    x10_long s1;
    x10_long e1;
    x10_long g1;
    x10_long g2;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    
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
        buf.write(this->body);
        buf.write(this->reduce);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__25<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__25<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_s0 = buf.read<x10_long>();
        x10_long that_e0 = buf.read<x10_long>();
        x10_long that_s1 = buf.read<x10_long>();
        x10_long that_e1 = buf.read<x10_long>();
        x10_long that_g1 = buf.read<x10_long>();
        x10_long that_g2 = buf.read<x10_long>();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_compiler_Foreach__closure__25<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__25<TPMGL(T) >(that_asyncResult, that_s0, that_e0, that_s1, that_e1, that_g1, that_g2, that_body, that_reduce);
        return this_;
    }
    
    x10_compiler_Foreach__closure__25(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1, x10_long g2, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : asyncResult(asyncResult), s0(s0), e0(e0), s1(s1), e1(e1), g1(g1), g2(g2), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:820";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__25<TPMGL(T) > >x10_compiler_Foreach__closure__25<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__25<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__25<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__25<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__25<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__25<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__25<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__25<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__25<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__25_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__26_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__26 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__26<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        asyncResult = ::x10::compiler::Foreach::doBisectReduce2D< TPMGL(T) >(
                        s0, e0, ((((s1) + (e1))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                        e1, g1, g2, body, reduce);
    }
    
    // captured environment
    x10aux::captured_struct_lval<TPMGL(T)> asyncResult;
    x10_long s0;
    x10_long e0;
    x10_long s1;
    x10_long e1;
    x10_long g1;
    x10_long g2;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    
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
        buf.write(this->body);
        buf.write(this->reduce);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__26<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__26<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_s0 = buf.read<x10_long>();
        x10_long that_e0 = buf.read<x10_long>();
        x10_long that_s1 = buf.read<x10_long>();
        x10_long that_e1 = buf.read<x10_long>();
        x10_long that_g1 = buf.read<x10_long>();
        x10_long that_g2 = buf.read<x10_long>();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_compiler_Foreach__closure__26<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__26<TPMGL(T) >(that_asyncResult, that_s0, that_e0, that_s1, that_e1, that_g1, that_g2, that_body, that_reduce);
        return this_;
    }
    
    x10_compiler_Foreach__closure__26(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1, x10_long g2, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : asyncResult(asyncResult), s0(s0), e0(e0), s1(s1), e1(e1), g1(g1), g2(g2), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:828";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__26<TPMGL(T) > >x10_compiler_Foreach__closure__26<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__26<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__26<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__26<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__26<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__26<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__26<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__26<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__26<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__26_CLOSURE
#ifndef X10_COMPILER_FOREACH_H_GENERICS
#define X10_COMPILER_FOREACH_H_GENERICS
#ifndef X10_COMPILER_FOREACH_H_sequentialReduce_309
#define X10_COMPILER_FOREACH_H_sequentialReduce_309
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::sequentialReduce(
  x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, TPMGL(T) identity) {
    
    //#line 108 "x10/compiler/Foreach.x10"
    TPMGL(T) myRes = identity;
    
    //#line 109 "x10/compiler/Foreach.x10"
    {
        x10_long i__104241;
        for (i__104241 = min; ((i__104241) <= (max)); i__104241 = ((i__104241) + (((x10_long)1ll))))
        {
            
            //#line 110 "x10/compiler/Foreach.x10"
            myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
              myRes, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                i__104241));
        }
    }
    
    //#line 112 "x10/compiler/Foreach.x10"
    return myRes;
    
}
#endif // X10_COMPILER_FOREACH_H_sequentialReduce_309
#ifndef X10_COMPILER_FOREACH_H_sequentialReduce_310
#define X10_COMPILER_FOREACH_H_sequentialReduce_310
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::sequentialReduce(
  x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
    
    //#line 126 "x10/compiler/Foreach.x10"
    return ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
      min, max);
    
}
#endif // X10_COMPILER_FOREACH_H_sequentialReduce_310
#ifndef X10_COMPILER_FOREACH_H_sequentialReduce_311
#define X10_COMPILER_FOREACH_H_sequentialReduce_311
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::sequentialReduce(
  ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity) {
    
    //#line 139 "x10/compiler/Foreach.x10"
    TPMGL(T) myRes = identity;
    
    //#line 140 "x10/compiler/Foreach.x10"
    x10_long i__103365min__104247 = ::x10aux::nullCheck(space)->FMGL(min0);
    x10_long i__103365max__104248 = ::x10aux::nullCheck(space)->FMGL(max0);
    {
        x10_long i__104249;
        for (i__104249 = i__103365min__104247; ((i__104249) <= (i__103365max__104248));
             i__104249 = ((i__104249) + (((x10_long)1ll))))
        {
            
            //#line 141 "x10/compiler/Foreach.x10"
            x10_long i__103347min__104243 = ::x10aux::nullCheck(space)->FMGL(min1);
            x10_long i__103347max__104244 = ::x10aux::nullCheck(space)->FMGL(max1);
            {
                x10_long i__104245;
                for (i__104245 = i__103347min__104243; ((i__104245) <= (i__103347max__104244));
                     i__104245 = ((i__104245) + (((x10_long)1ll))))
                {
                    
                    //#line 142 "x10/compiler/Foreach.x10"
                    myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      myRes, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                        i__104249, i__104245));
                }
            }
            
        }
    }
    
    //#line 145 "x10/compiler/Foreach.x10"
    return myRes;
    
}
#endif // X10_COMPILER_FOREACH_H_sequentialReduce_311
#ifndef X10_COMPILER_FOREACH_H_blockReduce_320
#define X10_COMPILER_FOREACH_H_blockReduce_320
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::blockReduce(
  x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
    
    //#line 245 "x10/compiler/Foreach.x10"
    x10_int nthreads = ::x10::xrx::Runtime::FMGL(NTHREADS__get)();
    
    //#line 246 "x10/compiler/Foreach.x10"
    if ((::x10aux::struct_equals(nthreads, ((x10_int)1))))
    {
        
        //#line 247 "x10/compiler/Foreach.x10"
        return ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
          min, max);
        
    } else {
        
        //#line 249 "x10/compiler/Foreach.x10"
        x10_long numElems = ((((max) - (min))) + (((x10_long)1ll)));
        
        //#line 250 "x10/compiler/Foreach.x10"
        if (((numElems) < (((x10_long)1ll)))) {
            return ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
              min, max);
            
        }
        
        //#line 251 "x10/compiler/Foreach.x10"
        x10_long blockSize = ((numElems) / ::x10aux::zeroCheck(((x10_long)(nthreads))));
        
        //#line 252 "x10/compiler/Foreach.x10"
        x10_long leftOver = ((numElems) - (((((x10_long)(nthreads))) * (blockSize))));
        
        //#line 253 "x10/compiler/Foreach.x10"
        ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(nthreads)), false);
        {
            
            //#line 254 "x10/compiler/Foreach.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__104780 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    {
                        x10_long t;
                        for (t = ((((x10_long)(nthreads))) - (((x10_long)1ll)));
                             ((t) >= (((x10_long)0ll))); t =
                                                           ((t) - (((x10_long)1ll))))
                        {
                            
                            //#line 255 "x10/compiler/Foreach.x10"
                            x10_long myT = t;
                            
                            //#line 256 "x10/compiler/Foreach.x10"
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__5<TPMGL(T)>)))x10_compiler_Foreach__closure__5<TPMGL(T)>(min, blockSize, myT, leftOver, results, body))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc321) {
                {
                    ::x10::lang::CheckedThrowable* ct__104778 =
                      __exc321;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__104778);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__104780);
        }
        
        //#line 262 "x10/compiler/Foreach.x10"
        TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         ((x10_long)0ll));
        
        //#line 263 "x10/compiler/Foreach.x10"
        x10_long i__103437max__104317 = ((((x10_long)(nthreads))) - (((x10_long)1ll)));
        {
            x10_long i__104318;
            for (i__104318 = ((x10_long)1ll); ((i__104318) <= (i__103437max__104317));
                 i__104318 = ((i__104318) + (((x10_long)1ll))))
            {
                
                //#line 264 "x10/compiler/Foreach.x10"
                res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         i__104318));
            }
        }
        
        //#line 266 "x10/compiler/Foreach.x10"
        return res;
        
    }
    
}
#endif // X10_COMPILER_FOREACH_H_blockReduce_320
#ifndef X10_COMPILER_FOREACH_H_blockReduce_322
#define X10_COMPILER_FOREACH_H_blockReduce_322
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::blockReduce(
  x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity) {
    
    //#line 292 "x10/compiler/Foreach.x10"
    x10_long min__104335 = min;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104337 =
      reduce;
    
    //#line 242 "x10/compiler/Foreach.x10"
    TPMGL(T) ret__104338;
    goto __ret__104339; __ret__104339: {
    {
        
        //#line 245 "x10/compiler/Foreach.x10"
        x10_int nthreads__104340 = ::x10::xrx::Runtime::FMGL(NTHREADS__get)();
        
        //#line 246 "x10/compiler/Foreach.x10"
        if ((::x10aux::struct_equals(nthreads__104340, ((x10_int)1))))
        {
            
            //#line 247 "x10/compiler/Foreach.x10"
            ret__104338 = (__extension__ ({
                
                //#line 285 "x10/compiler/Foreach.x10"
                TPMGL(T) myRes__104343 = identity;
                
                //#line 286 "x10/compiler/Foreach.x10"
                {
                    x10_long i__104322;
                    for (i__104322 = min; ((i__104322) <= (max));
                         i__104322 = ((i__104322) + (((x10_long)1ll))))
                    {
                        
                        //#line 287 "x10/compiler/Foreach.x10"
                        myRes__104343 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          myRes__104343, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                            i__104322));
                    }
                }
                myRes__104343;
            }))
            ;
            goto __ret__104339_end_;
        } else {
            
            //#line 249 "x10/compiler/Foreach.x10"
            x10_long numElems__104344 = ((((max) - (min))) + (((x10_long)1ll)));
            
            //#line 250 "x10/compiler/Foreach.x10"
            if (((numElems__104344) < (((x10_long)1ll))))
            {
                ret__104338 = (__extension__ ({
                    
                    //#line 285 "x10/compiler/Foreach.x10"
                    TPMGL(T) myRes__104347 = identity;
                    
                    //#line 286 "x10/compiler/Foreach.x10"
                    {
                        x10_long i__104326;
                        for (i__104326 = min; ((i__104326) <= (max));
                             i__104326 = ((i__104326) + (((x10_long)1ll))))
                        {
                            
                            //#line 287 "x10/compiler/Foreach.x10"
                            myRes__104347 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                              myRes__104347, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                i__104326));
                        }
                    }
                    myRes__104347;
                }))
                ;
                goto __ret__104339_end_;
            }
            
            //#line 251 "x10/compiler/Foreach.x10"
            x10_long blockSize__104348 = ((numElems__104344) / ::x10aux::zeroCheck(((x10_long)(nthreads__104340))));
            
            //#line 252 "x10/compiler/Foreach.x10"
            x10_long leftOver__104349 = ((numElems__104344) - (((((x10_long)(nthreads__104340))) * (blockSize__104348))));
            
            //#line 253 "x10/compiler/Foreach.x10"
            ::x10::lang::Rail< TPMGL(T) >* results__104350 =
              ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(nthreads__104340)), false);
            {
                
                //#line 254 "x10/compiler/Foreach.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__104785 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long t__104351;
                            for (t__104351 = ((((x10_long)(nthreads__104340))) - (((x10_long)1ll)));
                                 ((t__104351) >= (((x10_long)0ll)));
                                 t__104351 = ((t__104351) - (((x10_long)1ll))))
                            {
                                
                                //#line 255 "x10/compiler/Foreach.x10"
                                x10_long myT__104352 = t__104351;
                                
                                //#line 256 "x10/compiler/Foreach.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__6<TPMGL(T)>)))x10_compiler_Foreach__closure__6<TPMGL(T)>(min__104335, blockSize__104348, myT__104352, leftOver__104349, results__104350, identity, reduce, body))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc323) {
                    {
                        ::x10::lang::CheckedThrowable* ct__104783 =
                          __exc323;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__104783);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__104785);
            }
            
            //#line 262 "x10/compiler/Foreach.x10"
            TPMGL(T) res__104358 = results__104350->x10::lang::template Rail< TPMGL(T) >::__apply(
                                     ((x10_long)0ll));
            
            //#line 263 "x10/compiler/Foreach.x10"
            x10_long i__103437max__104332 = ((((x10_long)(nthreads__104340))) - (((x10_long)1ll)));
            {
                x10_long i__104333;
                for (i__104333 = ((x10_long)1ll); ((i__104333) <= (i__103437max__104332));
                     i__104333 = ((i__104333) + (((x10_long)1ll))))
                {
                    
                    //#line 264 "x10/compiler/Foreach.x10"
                    res__104358 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__104337), 
                      res__104358, results__104350->x10::lang::template Rail< TPMGL(T) >::__apply(
                                     i__104333));
                }
            }
            
            //#line 266 "x10/compiler/Foreach.x10"
            ret__104338 = res__104358;
            goto __ret__104339_end_;
        }
        
    }goto __ret__104339_end_; __ret__104339_end_: ;
    }
    
    //#line 292 "x10/compiler/Foreach.x10"
    return ret__104338;
    }
    #endif // X10_COMPILER_FOREACH_H_blockReduce_322
    #ifndef X10_COMPILER_FOREACH_H_blockReduce_328
    #define X10_COMPILER_FOREACH_H_blockReduce_328
    template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::blockReduce(
      ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity) {
        
        //#line 349 "x10/compiler/Foreach.x10"
        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                     ((x10_int)1)))) {
            
            //#line 139 "x10/compiler/Foreach.x10"
            TPMGL(T) myRes__104437 = identity;
            
            //#line 140 "x10/compiler/Foreach.x10"
            x10_long i__103365min__104429 = ::x10aux::nullCheck(space)->FMGL(min0);
            x10_long i__103365max__104430 = ::x10aux::nullCheck(space)->FMGL(max0);
            {
                x10_long i__104431;
                for (i__104431 = i__103365min__104429; ((i__104431) <= (i__103365max__104430));
                     i__104431 = ((i__104431) + (((x10_long)1ll))))
                {
                    
                    //#line 141 "x10/compiler/Foreach.x10"
                    x10_long i__103347min__104425 = ::x10aux::nullCheck(space)->FMGL(min1);
                    x10_long i__103347max__104426 = ::x10aux::nullCheck(space)->FMGL(max1);
                    {
                        x10_long i__104427;
                        for (i__104427 = i__103347min__104425;
                             ((i__104427) <= (i__103347max__104426));
                             i__104427 = ((i__104427) + (((x10_long)1ll))))
                        {
                            
                            //#line 142 "x10/compiler/Foreach.x10"
                            myRes__104437 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                              myRes__104437, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                i__104431, i__104427));
                        }
                    }
                    
                }
            }
            
            //#line 350 "x10/compiler/Foreach.x10"
            return myRes__104437;
            
        } else {
            
            //#line 352 "x10/compiler/Foreach.x10"
            ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
            {
                
                //#line 353 "x10/compiler/Foreach.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__104800 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long t;
                            for (t = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                                 ((t) >= (((x10_long)0ll)));
                                 t = ((t) - (((x10_long)1ll))))
                            {
                                
                                //#line 354 "x10/compiler/Foreach.x10"
                                x10_long myT = t;
                                
                                //#line 355 "x10/compiler/Foreach.x10"
                                ::x10::array::DenseIterationSpace_2* block =
                                  ::x10::array::BlockingUtils::partitionBlockBlock(
                                    reinterpret_cast< ::x10::array::IterationSpace*>(space),
                                    ((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())),
                                    t);
                                
                                //#line 356 "x10/compiler/Foreach.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__9<TPMGL(T)>)))x10_compiler_Foreach__closure__9<TPMGL(T)>(results, myT, block, body, reduce, identity))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc329) {
                    {
                        ::x10::lang::CheckedThrowable* ct__104798 =
                          __exc329;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__104798);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__104800);
            }
            
            //#line 358 "x10/compiler/Foreach.x10"
            TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             ((x10_long)0ll));
            
            //#line 359 "x10/compiler/Foreach.x10"
            x10_long i__103473max__104446 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
            {
                x10_long i__104447;
                for (i__104447 = ((x10_long)1ll); ((i__104447) <= (i__103473max__104446));
                     i__104447 = ((i__104447) + (((x10_long)1ll))))
                {
                    
                    //#line 360 "x10/compiler/Foreach.x10"
                    res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             i__104447));
                }
            }
            
            //#line 362 "x10/compiler/Foreach.x10"
            return res;
            
        }
        
    }
    #endif // X10_COMPILER_FOREACH_H_blockReduce_328
    #ifndef X10_COMPILER_FOREACH_H_cyclicReduce_332
    #define X10_COMPILER_FOREACH_H_cyclicReduce_332
    template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::cyclicReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity) {
        
        //#line 402 "x10/compiler/Foreach.x10"
        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                     ((x10_int)1)))) {
            
            //#line 108 "x10/compiler/Foreach.x10"
            TPMGL(T) myRes__104469 = identity;
            
            //#line 109 "x10/compiler/Foreach.x10"
            {
                x10_long i__104462;
                for (i__104462 = min; ((i__104462) <= (max));
                     i__104462 = ((i__104462) + (((x10_long)1ll))))
                {
                    
                    //#line 110 "x10/compiler/Foreach.x10"
                    myRes__104469 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      myRes__104469, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                        i__104462));
                }
            }
            
            //#line 403 "x10/compiler/Foreach.x10"
            return myRes__104469;
            
        } else {
            
            //#line 405 "x10/compiler/Foreach.x10"
            ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
            {
                
                //#line 406 "x10/compiler/Foreach.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__104810 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__103509max__104472 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                        {
                            x10_long i__104473;
                            for (i__104473 = ((x10_long)0ll);
                                 ((i__104473) <= (i__103509max__104472));
                                 i__104473 = ((i__104473) + (((x10_long)1ll))))
                            {
                                x10_long t__104474 = i__104473;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__11<TPMGL(T)>)))x10_compiler_Foreach__closure__11<TPMGL(T)>(identity, min, t__104474, max, reduce, body, results))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc333) {
                    {
                        ::x10::lang::CheckedThrowable* ct__104808 =
                          __exc333;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__104808);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__104810);
            }
            
            //#line 413 "x10/compiler/Foreach.x10"
            TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             ((x10_long)0ll));
            
            //#line 414 "x10/compiler/Foreach.x10"
            x10_long i__103527max__104475 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
            {
                x10_long i__104476;
                for (i__104476 = ((x10_long)1ll); ((i__104476) <= (i__103527max__104475));
                     i__104476 = ((i__104476) + (((x10_long)1ll))))
                {
                    
                    //#line 415 "x10/compiler/Foreach.x10"
                    res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             i__104476));
                }
            }
            
            //#line 417 "x10/compiler/Foreach.x10"
            return res;
            
        }
        
    }
    #endif // X10_COMPILER_FOREACH_H_cyclicReduce_332
    #ifndef X10_COMPILER_FOREACH_H_bisectReduce_343
    #define X10_COMPILER_FOREACH_H_bisectReduce_343
    template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
      x10_long min, x10_long max, x10_long grainSize, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity) {
        
        //#line 530 "x10/compiler/Foreach.x10"
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104527 =
          reduce;
        
        //#line 545 "x10/compiler/Foreach.x10"
        TPMGL(T) ret__104528;
        goto __ret__104529; __ret__104529: {
        {
            
            //#line 549 "x10/compiler/Foreach.x10"
            if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                         ((x10_int)1)))) {
                
                //#line 550 "x10/compiler/Foreach.x10"
                ret__104528 = (__extension__ ({
                    
                    //#line 524 "x10/compiler/Foreach.x10"
                    TPMGL(T) myRes__104535 = identity;
                    
                    //#line 525 "x10/compiler/Foreach.x10"
                    {
                        x10_long i__104518;
                        for (i__104518 = min; ((i__104518) <= (max));
                             i__104518 = ((i__104518) + (((x10_long)1ll))))
                        {
                            
                            //#line 526 "x10/compiler/Foreach.x10"
                            myRes__104535 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                              myRes__104535, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                i__104518));
                        }
                    }
                    myRes__104535;
                }))
                ;
                goto __ret__104529_end_;
            } else {
                
                //#line 552 "x10/compiler/Foreach.x10"
                ret__104528 = ::x10::compiler::Foreach::template doBisectReduce1D< TPMGL(T) >(
                                min, ((max) + (((x10_long)1ll))),
                                grainSize, reinterpret_cast< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__15<TPMGL(T)>)))x10_compiler_Foreach__closure__15<TPMGL(T)>(identity, reduce, body))),
                                reduce__104527);
                goto __ret__104529_end_;
            }
            
        }goto __ret__104529_end_; __ret__104529_end_: ;
        }
        
        //#line 530 "x10/compiler/Foreach.x10"
        return ret__104528;
        }
        #endif // X10_COMPILER_FOREACH_H_bisectReduce_343
        #ifndef X10_COMPILER_FOREACH_H_bisectReduce_344
        #define X10_COMPILER_FOREACH_H_bisectReduce_344
        template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
          x10_long min, x10_long max, x10_long grainSize,
          ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
          ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
            
            //#line 549 "x10/compiler/Foreach.x10"
            if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                         ((x10_int)1)))) {
                
                //#line 550 "x10/compiler/Foreach.x10"
                return ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                  min, max);
                
            } else {
                
                //#line 552 "x10/compiler/Foreach.x10"
                return ::x10::compiler::Foreach::template doBisectReduce1D< TPMGL(T) >(
                         min, ((max) + (((x10_long)1ll))),
                         grainSize, body, reduce);
                
            }
            
        }
        #endif // X10_COMPILER_FOREACH_H_bisectReduce_344
        #ifndef X10_COMPILER_FOREACH_H_bisectReduce_345
        #define X10_COMPILER_FOREACH_H_bisectReduce_345
        template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
          x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
          ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
            
            //#line 570 "x10/compiler/Foreach.x10"
            x10_long grainSize = (__extension__ ({
                x10_long b__103976 = ((((max) - (min))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll)))));
                ((((x10_long)1ll)) < (b__103976)) ? (b__103976)
                  : (((x10_long)1ll));
            }))
            ;
            
            //#line 545 "x10/compiler/Foreach.x10"
            TPMGL(T) ret__104548;
            goto __ret__104549; __ret__104549: {
            {
                
                //#line 549 "x10/compiler/Foreach.x10"
                if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                             ((x10_int)1))))
                {
                    
                    //#line 550 "x10/compiler/Foreach.x10"
                    ret__104548 = ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                      min, max);
                    goto __ret__104549_end_;
                } else {
                    
                    //#line 552 "x10/compiler/Foreach.x10"
                    ret__104548 = ::x10::compiler::Foreach::template doBisectReduce1D< TPMGL(T) >(
                                    min, ((max) + (((x10_long)1ll))),
                                    grainSize, body, reduce);
                    goto __ret__104549_end_;
                }
                
            }goto __ret__104549_end_; __ret__104549_end_: ;
            }
            
            //#line 571 "x10/compiler/Foreach.x10"
            return ret__104548;
            }
            #endif // X10_COMPILER_FOREACH_H_bisectReduce_345
            #ifndef X10_COMPILER_FOREACH_H_bisectReduce_346
            #define X10_COMPILER_FOREACH_H_bisectReduce_346
            template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
              x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
              ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
              TPMGL(T) identity) {
                
                //#line 586 "x10/compiler/Foreach.x10"
                x10_long grainSize = (__extension__ ({
                    x10_long b__103991 = ((((max) - (min))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll)))));
                    ((((x10_long)1ll)) < (b__103991)) ? (b__103991)
                      : (((x10_long)1ll));
                }))
                ;
                
                //#line 587 "x10/compiler/Foreach.x10"
                ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__104580 =
                  body;
                ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104581 =
                  reduce;
                TPMGL(T) identity__104582 = identity;
                
                //#line 518 "x10/compiler/Foreach.x10"
                TPMGL(T) ret__104583;
                
                //#line 530 "x10/compiler/Foreach.x10"
                ret__104583 = (__extension__ ({
                    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104565 =
                      reduce;
                    
                    //#line 545 "x10/compiler/Foreach.x10"
                    TPMGL(T) ret__104566;
                    goto __ret__104567; __ret__104567: {
                    {
                        
                        //#line 549 "x10/compiler/Foreach.x10"
                        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                     ((x10_int)1))))
                        {
                            
                            //#line 550 "x10/compiler/Foreach.x10"
                            ret__104566 = (__extension__ ({
                                
                                //#line 524 "x10/compiler/Foreach.x10"
                                TPMGL(T) myRes__104573 = identity;
                                
                                //#line 525 "x10/compiler/Foreach.x10"
                                {
                                    x10_long i__104556;
                                    for (i__104556 = min;
                                         ((i__104556) <= (max));
                                         i__104556 = ((i__104556) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 526 "x10/compiler/Foreach.x10"
                                        myRes__104573 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                          myRes__104573, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                            i__104556));
                                    }
                                }
                                myRes__104573;
                            }))
                            ;
                            goto __ret__104567_end_;
                        } else {
                            
                            //#line 552 "x10/compiler/Foreach.x10"
                            ret__104566 = ::x10::compiler::Foreach::template doBisectReduce1D< TPMGL(T) >(
                                            min, ((max) + (((x10_long)1ll))),
                                            grainSize, reinterpret_cast< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__16<TPMGL(T)>)))x10_compiler_Foreach__closure__16<TPMGL(T)>(identity__104582, reduce__104581, body__104580))),
                                            reduce__104565);
                            goto __ret__104567_end_;
                        }
                        
                    }goto __ret__104567_end_; __ret__104567_end_: ;
                    }
                    ret__104566;
                    }))
                    ;
                
                //#line 587 "x10/compiler/Foreach.x10"
                return ret__104583;
                }
                #endif // X10_COMPILER_FOREACH_H_bisectReduce_346
                #ifndef X10_COMPILER_FOREACH_H_doBisectReduce1D_347
                #define X10_COMPILER_FOREACH_H_doBisectReduce1D_347
                template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::doBisectReduce1D(
                  x10_long start, x10_long end, x10_long grainSize,
                  ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
                  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
                    
                    //#line 594 "x10/compiler/Foreach.x10"
                    if (((((end) - (start))) > (grainSize)))
                    {
                        
                        //#line 595 "x10/compiler/Foreach.x10"
                        TPMGL(T) asyncResult;
                        
                        //#line 596 "x10/compiler/Foreach.x10"
                        TPMGL(T) syncResult;
                        {
                            
                            //#line 597 "x10/compiler/Foreach.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__104832 =
                              ::x10::xrx::Runtime::startFinish();
                            try {
                                {
                                    
                                    //#line 598 "x10/compiler/Foreach.x10"
                                    ::x10::xrx::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__17<TPMGL(T)>)))x10_compiler_Foreach__closure__17<TPMGL(T)>(&(asyncResult), start, end, grainSize, body, reduce))));
                                    
                                    //#line 599 "x10/compiler/Foreach.x10"
                                    syncResult = ::x10::compiler::Foreach::template doBisectReduce1D< TPMGL(T) >(
                                                   start,
                                                   ((((start) + (end))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                                   grainSize,
                                                   body, reduce);
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc348) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__104830 =
                                      __exc348;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__104830);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__104832);
                        }
                        
                        //#line 601 "x10/compiler/Foreach.x10"
                        return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          syncResult, asyncResult);
                        
                    } else {
                        
                        //#line 603 "x10/compiler/Foreach.x10"
                        return ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                          start, ((end) - (((x10_long)1ll))));
                        
                    }
                    
                }
                #endif // X10_COMPILER_FOREACH_H_doBisectReduce1D_347
                #ifndef X10_COMPILER_FOREACH_H_bisectReduce_358
                #define X10_COMPILER_FOREACH_H_bisectReduce_358
                template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
                  x10_long min0, x10_long max0, x10_long min1,
                  x10_long max1, x10_long grainSize0, x10_long grainSize1,
                  ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
                  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                  TPMGL(T) identity) {
                    
                    //#line 748 "x10/compiler/Foreach.x10"
                    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                 ((x10_int)1))))
                    {
                        
                        //#line 749 "x10/compiler/Foreach.x10"
                        ::x10::array::DenseIterationSpace_2* space__104666 =
                          (__extension__ ({
                            ::x10::array::DenseIterationSpace_2* alloc__104667 =
                               (new (::x10aux::alloc_z< ::x10::array::DenseIterationSpace_2>()) ::x10::array::DenseIterationSpace_2());
                            (alloc__104667)->::x10::array::DenseIterationSpace_2::_constructor(
                              min0, min1, max0, max1);
                            alloc__104667;
                        }))
                        ;
                        
                        //#line 139 "x10/compiler/Foreach.x10"
                        TPMGL(T) myRes__104671 = identity;
                        
                        //#line 140 "x10/compiler/Foreach.x10"
                        x10_long i__103365min__104662 = ::x10aux::nullCheck(space__104666)->FMGL(min0);
                        x10_long i__103365max__104663 = ::x10aux::nullCheck(space__104666)->FMGL(max0);
                        {
                            x10_long i__104664;
                            for (i__104664 = i__103365min__104662;
                                 ((i__104664) <= (i__103365max__104663));
                                 i__104664 = ((i__104664) + (((x10_long)1ll))))
                            {
                                
                                //#line 141 "x10/compiler/Foreach.x10"
                                x10_long i__103347min__104658 =
                                  ::x10aux::nullCheck(space__104666)->FMGL(min1);
                                x10_long i__103347max__104659 =
                                  ::x10aux::nullCheck(space__104666)->FMGL(max1);
                                {
                                    x10_long i__104660;
                                    for (i__104660 = i__103347min__104658;
                                         ((i__104660) <= (i__103347max__104659));
                                         i__104660 = ((i__104660) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 142 "x10/compiler/Foreach.x10"
                                        myRes__104671 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                          myRes__104671, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                            i__104664, i__104660));
                                    }
                                }
                                
                            }
                        }
                        
                        //#line 749 "x10/compiler/Foreach.x10"
                        return myRes__104671;
                        
                    } else {
                        
                        //#line 761 "x10/compiler/Foreach.x10"
                        return ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                                 min0, ((max0) + (((x10_long)1ll))),
                                 min1, ((max1) + (((x10_long)1ll))),
                                 grainSize0, grainSize1, reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__22<TPMGL(T)>)))x10_compiler_Foreach__closure__22<TPMGL(T)>(identity, reduce, body))),
                                 reduce);
                        
                    }
                    
                }
                #endif // X10_COMPILER_FOREACH_H_bisectReduce_358
                #ifndef X10_COMPILER_FOREACH_H_bisectReduce_359
                #define X10_COMPILER_FOREACH_H_bisectReduce_359
                template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
                  ::x10::array::DenseIterationSpace_2* space,
                  x10_long grainSize0, x10_long grainSize1,
                  ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
                  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                  TPMGL(T) identity) {
                    
                    //#line 783 "x10/compiler/Foreach.x10"
                    x10_long min__104696 = ::x10aux::nullCheck(space)->FMGL(min0);
                    x10_long max__104697 = ::x10aux::nullCheck(space)->FMGL(max0);
                    x10_long min__104698 = ::x10aux::nullCheck(space)->FMGL(min1);
                    x10_long max__104699 = ::x10aux::nullCheck(space)->FMGL(max1);
                    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__104702 =
                      body;
                    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104703 =
                      reduce;
                    TPMGL(T) identity__104704 = identity;
                    
                    //#line 743 "x10/compiler/Foreach.x10"
                    TPMGL(T) ret__104705;
                    goto __ret__104706; __ret__104706: {
                    {
                        
                        //#line 748 "x10/compiler/Foreach.x10"
                        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                     ((x10_int)1))))
                        {
                            
                            //#line 749 "x10/compiler/Foreach.x10"
                            ret__104705 = (__extension__ ({
                                ::x10::array::DenseIterationSpace_2* space__104707 =
                                  (__extension__ ({
                                    ::x10::array::DenseIterationSpace_2* alloc__104708 =
                                       (new (::x10aux::alloc_z< ::x10::array::DenseIterationSpace_2>()) ::x10::array::DenseIterationSpace_2());
                                    (alloc__104708)->::x10::array::DenseIterationSpace_2::_constructor(
                                      min__104696, min__104698,
                                      max__104697, max__104699);
                                    alloc__104708;
                                }))
                                ;
                                
                                //#line 139 "x10/compiler/Foreach.x10"
                                TPMGL(T) myRes__104712 = identity;
                                
                                //#line 140 "x10/compiler/Foreach.x10"
                                x10_long i__103365min__104684 =
                                  ::x10aux::nullCheck(space__104707)->FMGL(min0);
                                x10_long i__103365max__104685 =
                                  ::x10aux::nullCheck(space__104707)->FMGL(max0);
                                {
                                    x10_long i__104686;
                                    for (i__104686 = i__103365min__104684;
                                         ((i__104686) <= (i__103365max__104685));
                                         i__104686 = ((i__104686) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 141 "x10/compiler/Foreach.x10"
                                        x10_long i__103347min__104680 =
                                          ::x10aux::nullCheck(space__104707)->FMGL(min1);
                                        x10_long i__103347max__104681 =
                                          ::x10aux::nullCheck(space__104707)->FMGL(max1);
                                        {
                                            x10_long i__104682;
                                            for (i__104682 =
                                                   i__103347min__104680;
                                                 ((i__104682) <= (i__103347max__104681));
                                                 i__104682 =
                                                   ((i__104682) + (((x10_long)1ll))))
                                            {
                                                
                                                //#line 142 "x10/compiler/Foreach.x10"
                                                myRes__104712 =
                                                  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                                  myRes__104712,
                                                  ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                    i__104686,
                                                    i__104682));
                                            }
                                        }
                                        
                                    }
                                }
                                myRes__104712;
                            }))
                            ;
                            goto __ret__104706_end_;
                        } else {
                            
                            //#line 761 "x10/compiler/Foreach.x10"
                            ret__104705 = ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                                            min__104696, ((max__104697) + (((x10_long)1ll))),
                                            min__104698, ((max__104699) + (((x10_long)1ll))),
                                            grainSize0, grainSize1,
                                            reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__23<TPMGL(T)>)))x10_compiler_Foreach__closure__23<TPMGL(T)>(identity__104704, reduce__104703, body__104702))),
                                            reduce__104703);
                            goto __ret__104706_end_;
                        }
                        
                    }goto __ret__104706_end_; __ret__104706_end_: ;
                    }
                    
                    //#line 783 "x10/compiler/Foreach.x10"
                    return ret__104705;
                    }
                    #endif // X10_COMPILER_FOREACH_H_bisectReduce_359
                    #ifndef X10_COMPILER_FOREACH_H_bisectReduce_360
                    #define X10_COMPILER_FOREACH_H_bisectReduce_360
                    template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
                      ::x10::array::DenseIterationSpace_2* space,
                      ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
                      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                      TPMGL(T) identity) {
                        
                        //#line 801 "x10/compiler/Foreach.x10"
                        x10_long grainSize0 = (__extension__ ({
                            x10_long b__104167 = ((((::x10aux::nullCheck(space)->FMGL(max0)) - (::x10aux::nullCheck(space)->FMGL(min0)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))));
                            ((((x10_long)1ll)) < (b__104167))
                              ? (b__104167) : (((x10_long)1ll));
                        }))
                        ;
                        
                        //#line 802 "x10/compiler/Foreach.x10"
                        x10_long grainSize1 = (__extension__ ({
                            x10_long b__104170 = ((((::x10aux::nullCheck(space)->FMGL(max1)) - (::x10aux::nullCheck(space)->FMGL(min1)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))));
                            ((((x10_long)1ll)) < (b__104170))
                              ? (b__104170) : (((x10_long)1ll));
                        }))
                        ;
                        
                        //#line 803 "x10/compiler/Foreach.x10"
                        x10_long min__104734 = ::x10aux::nullCheck(space)->FMGL(min0);
                        x10_long max__104735 = ::x10aux::nullCheck(space)->FMGL(max0);
                        x10_long min__104736 = ::x10aux::nullCheck(space)->FMGL(min1);
                        x10_long max__104737 = ::x10aux::nullCheck(space)->FMGL(max1);
                        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__104740 =
                          body;
                        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104741 =
                          reduce;
                        TPMGL(T) identity__104742 = identity;
                        
                        //#line 743 "x10/compiler/Foreach.x10"
                        TPMGL(T) ret__104743;
                        goto __ret__104744; __ret__104744: {
                        {
                            
                            //#line 748 "x10/compiler/Foreach.x10"
                            if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                         ((x10_int)1))))
                            {
                                
                                //#line 749 "x10/compiler/Foreach.x10"
                                ret__104743 = (__extension__ ({
                                    ::x10::array::DenseIterationSpace_2* space__104745 =
                                      (__extension__ ({
                                        ::x10::array::DenseIterationSpace_2* alloc__104746 =
                                           (new (::x10aux::alloc_z< ::x10::array::DenseIterationSpace_2>()) ::x10::array::DenseIterationSpace_2());
                                        (alloc__104746)->::x10::array::DenseIterationSpace_2::_constructor(
                                          min__104734, min__104736,
                                          max__104735, max__104737);
                                        alloc__104746;
                                    }))
                                    ;
                                    
                                    //#line 139 "x10/compiler/Foreach.x10"
                                    TPMGL(T) myRes__104750 =
                                      identity;
                                    
                                    //#line 140 "x10/compiler/Foreach.x10"
                                    x10_long i__103365min__104722 =
                                      ::x10aux::nullCheck(space__104745)->FMGL(min0);
                                    x10_long i__103365max__104723 =
                                      ::x10aux::nullCheck(space__104745)->FMGL(max0);
                                    {
                                        x10_long i__104724;
                                        for (i__104724 = i__103365min__104722;
                                             ((i__104724) <= (i__103365max__104723));
                                             i__104724 = ((i__104724) + (((x10_long)1ll))))
                                        {
                                            
                                            //#line 141 "x10/compiler/Foreach.x10"
                                            x10_long i__103347min__104718 =
                                              ::x10aux::nullCheck(space__104745)->FMGL(min1);
                                            x10_long i__103347max__104719 =
                                              ::x10aux::nullCheck(space__104745)->FMGL(max1);
                                            {
                                                x10_long i__104720;
                                                for (i__104720 =
                                                       i__103347min__104718;
                                                     ((i__104720) <= (i__103347max__104719));
                                                     i__104720 =
                                                       ((i__104720) + (((x10_long)1ll))))
                                                {
                                                    
                                                    //#line 142 "x10/compiler/Foreach.x10"
                                                    myRes__104750 =
                                                      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                                      myRes__104750,
                                                      ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                        i__104724,
                                                        i__104720));
                                                }
                                            }
                                            
                                        }
                                    }
                                    myRes__104750;
                                }))
                                ;
                                goto __ret__104744_end_;
                            } else {
                                
                                //#line 761 "x10/compiler/Foreach.x10"
                                ret__104743 = ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                                                min__104734,
                                                ((max__104735) + (((x10_long)1ll))),
                                                min__104736,
                                                ((max__104737) + (((x10_long)1ll))),
                                                grainSize0,
                                                grainSize1,
                                                reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__24<TPMGL(T)>)))x10_compiler_Foreach__closure__24<TPMGL(T)>(identity__104742, reduce__104741, body__104740))),
                                                reduce__104741);
                                goto __ret__104744_end_;
                            }
                            
                        }goto __ret__104744_end_; __ret__104744_end_: ;
                        }
                        
                        //#line 803 "x10/compiler/Foreach.x10"
                        return ret__104743;
                        }
                        #endif // X10_COMPILER_FOREACH_H_bisectReduce_360
                        #ifndef X10_COMPILER_FOREACH_H_doBisectReduce2D_361
                        #define X10_COMPILER_FOREACH_H_doBisectReduce2D_361
                        template<class TPMGL(T)> TPMGL(T)
                          x10::compiler::Foreach::doBisectReduce2D(
                          x10_long s0, x10_long e0, x10_long s1,
                          x10_long e1, x10_long g1, x10_long g2,
                          ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body,
                          ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
                            
                            //#line 816 "x10/compiler/Foreach.x10"
                            if ((((((e0) - (s0))) > (g1)) &&
                                ((((((e0) - (s0))) >= (((e1) - (s1)))) ||
                                 ((((e1) - (s1))) <= (g2))))))
                            {
                                
                                //#line 817 "x10/compiler/Foreach.x10"
                                TPMGL(T) asyncResult;
                                
                                //#line 818 "x10/compiler/Foreach.x10"
                                TPMGL(T) syncResult;
                                {
                                    
                                    //#line 819 "x10/compiler/Foreach.x10"
                                    ::x10::xrx::Runtime::ensureNotInAtomic();
                                    ::x10::xrx::FinishState* fs__104855 =
                                      ::x10::xrx::Runtime::startFinish();
                                    try {
                                        {
                                            
                                            //#line 820 "x10/compiler/Foreach.x10"
                                            ::x10::xrx::Runtime::runAsync(
                                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__25<TPMGL(T)>)))x10_compiler_Foreach__closure__25<TPMGL(T)>(&(asyncResult), s0, e0, s1, e1, g1, g2, body, reduce))));
                                            
                                            //#line 821 "x10/compiler/Foreach.x10"
                                            syncResult = ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                                                           s0,
                                                           ((((s0) + (e0))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                                           s1,
                                                           e1,
                                                           g1,
                                                           g2,
                                                           body,
                                                           reduce);
                                        }
                                    }
                                    catch (::x10::lang::CheckedThrowable* __exc362) {
                                        {
                                            ::x10::lang::CheckedThrowable* ct__104853 =
                                              __exc362;
                                            {
                                                ::x10::xrx::Runtime::pushException(
                                                  ct__104853);
                                            }
                                        }
                                    }
                                    ::x10::xrx::Runtime::stopFinish(
                                      fs__104855);
                                }
                                
                                //#line 823 "x10/compiler/Foreach.x10"
                                return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                  asyncResult, syncResult);
                                
                            } else 
                            //#line 824 "x10/compiler/Foreach.x10"
                            if (((((e1) - (s1))) > (g2)))
                            {
                                
                                //#line 825 "x10/compiler/Foreach.x10"
                                TPMGL(T) asyncResult;
                                
                                //#line 826 "x10/compiler/Foreach.x10"
                                TPMGL(T) syncResult;
                                {
                                    
                                    //#line 827 "x10/compiler/Foreach.x10"
                                    ::x10::xrx::Runtime::ensureNotInAtomic();
                                    ::x10::xrx::FinishState* fs__104860 =
                                      ::x10::xrx::Runtime::startFinish();
                                    try {
                                        {
                                            
                                            //#line 828 "x10/compiler/Foreach.x10"
                                            ::x10::xrx::Runtime::runAsync(
                                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__26<TPMGL(T)>)))x10_compiler_Foreach__closure__26<TPMGL(T)>(&(asyncResult), s0, e0, s1, e1, g1, g2, body, reduce))));
                                            
                                            //#line 829 "x10/compiler/Foreach.x10"
                                            syncResult = ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                                                           s0,
                                                           e0,
                                                           s1,
                                                           ((((s1) + (e1))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                                           g1,
                                                           g2,
                                                           body,
                                                           reduce);
                                        }
                                    }
                                    catch (::x10::lang::CheckedThrowable* __exc363) {
                                        {
                                            ::x10::lang::CheckedThrowable* ct__104858 =
                                              __exc363;
                                            {
                                                ::x10::xrx::Runtime::pushException(
                                                  ct__104858);
                                            }
                                        }
                                    }
                                    ::x10::xrx::Runtime::stopFinish(
                                      fs__104860);
                                }
                                
                                //#line 831 "x10/compiler/Foreach.x10"
                                return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                  asyncResult, syncResult);
                                
                            } else {
                                
                                //#line 833 "x10/compiler/Foreach.x10"
                                return ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                  s0, ((e0) - (((x10_long)1ll))),
                                  s1, ((e1) - (((x10_long)1ll))));
                                
                            }
                            
                        }
                        #endif // X10_COMPILER_FOREACH_H_doBisectReduce2D_361
                        #endif // X10_COMPILER_FOREACH_H_GENERICS
                        #endif // __X10_COMPILER_FOREACH_H_NODEPS
