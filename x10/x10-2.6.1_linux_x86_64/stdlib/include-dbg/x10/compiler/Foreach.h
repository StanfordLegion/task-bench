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
class Math;
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
#include <x10/lang/Math.h>
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
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__6<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long start, x10_long end){
        
        //#line 285 "x10/compiler/Foreach.x10"
        TPMGL(T) myRes = identity;
        
        //#line 286 "x10/compiler/Foreach.x10"
        x10_long i__100329min__100566 = start;
        x10_long i__100329max__100567 = end;
        {
            x10_long i__100568;
            for (i__100568 = i__100329min__100566; ((i__100568) <= (i__100329max__100567));
                 i__100568 = ((i__100568) + (((x10_long)1ll)))) {
                x10_long i__100569 = i__100568;
                
                //#line 287 "x10/compiler/Foreach.x10"
                myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__100569));
            }
        }
        
        //#line 289 "x10/compiler/Foreach.x10"
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
        x10_compiler_Foreach__closure__6<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_compiler_Foreach__closure__6<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__6<TPMGL(T) >(that_identity, that_body, that_reduce);
        return this_;
    }
    
    x10_compiler_Foreach__closure__6(TPMGL(T) identity, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : identity(identity), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:284-290";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__6<TPMGL(T) > >x10_compiler_Foreach__closure__6<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__6<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__6<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__6<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__6<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__6<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__6<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__6_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__8_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__8 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__8<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        results->x10::lang::template Rail< TPMGL(T) >::__set(myT, ::x10::compiler::Foreach::sequentialReduce< TPMGL(T) >(
                                                                    block,
                                                                    body,
                                                                    reduce,
                                                                    identity));
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
        x10_compiler_Foreach__closure__8<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__8<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_long that_myT = buf.read<x10_long>();
        ::x10::array::DenseIterationSpace_2* that_block = buf.read< ::x10::array::DenseIterationSpace_2*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        x10_compiler_Foreach__closure__8<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__8<TPMGL(T) >(that_results, that_myT, that_block, that_body, that_reduce, that_identity);
        return this_;
    }
    
    x10_compiler_Foreach__closure__8(::x10::lang::Rail< TPMGL(T) >* results, x10_long myT, ::x10::array::DenseIterationSpace_2* block, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, TPMGL(T) identity) : results(results), myT(myT), block(block), body(body), reduce(reduce), identity(identity) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:356";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__8<TPMGL(T) > >x10_compiler_Foreach__closure__8<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__8<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__8<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__8<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__8<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__8<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__8<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__8<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__8<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__8_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__10_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__10 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__10<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 407 "x10/compiler/Foreach.x10"
        TPMGL(T) myRes__100579 = identity;
        
        //#line 408 "x10/compiler/Foreach.x10"
        {
            x10_long i__100580;
            for (i__100580 = ((min) + (t__100584)); ((i__100580) <= (max));
                 i__100580 = ((i__100580) + (((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())))))
            {
                
                //#line 409 "x10/compiler/Foreach.x10"
                myRes__100579 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes__100579, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__100580));
            }
        }
        
        //#line 411 "x10/compiler/Foreach.x10"
        results->x10::lang::template Rail< TPMGL(T) >::__set(
          t__100584, myRes__100579);
    }
    
    // captured environment
    TPMGL(T) identity;
    x10_long min;
    x10_long t__100584;
    x10_long max;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
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
        buf.write(this->t__100584);
        buf.write(this->max);
        buf.write(this->body);
        buf.write(this->reduce);
        buf.write(this->results);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__10<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__10<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        x10_long that_min = buf.read<x10_long>();
        x10_long that_t__100584 = buf.read<x10_long>();
        x10_long that_max = buf.read<x10_long>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_compiler_Foreach__closure__10<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__10<TPMGL(T) >(that_identity, that_min, that_t__100584, that_max, that_body, that_reduce, that_results);
        return this_;
    }
    
    x10_compiler_Foreach__closure__10(TPMGL(T) identity, x10_long min, x10_long t__100584, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Rail< TPMGL(T) >* results) : identity(identity), min(min), t__100584(t__100584), max(max), body(body), reduce(reduce), results(results) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:406-412";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__10<TPMGL(T) > >x10_compiler_Foreach__closure__10<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__10<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__10<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__10<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__10<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__10<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__10<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__10<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__10<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__10_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__13_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__13 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__13<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long start, x10_long end){
        
        //#line 524 "x10/compiler/Foreach.x10"
        TPMGL(T) myRes = identity;
        
        //#line 525 "x10/compiler/Foreach.x10"
        x10_long i__100437min__100593 = start;
        x10_long i__100437max__100594 = end;
        {
            x10_long i__100595;
            for (i__100595 = i__100437min__100593; ((i__100595) <= (i__100437max__100594));
                 i__100595 = ((i__100595) + (((x10_long)1ll)))) {
                x10_long i__100596 = i__100595;
                
                //#line 526 "x10/compiler/Foreach.x10"
                myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__100596));
            }
        }
        
        //#line 528 "x10/compiler/Foreach.x10"
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
        x10_compiler_Foreach__closure__13<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__13<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_compiler_Foreach__closure__13<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__13<TPMGL(T) >(that_identity, that_body, that_reduce);
        return this_;
    }
    
    x10_compiler_Foreach__closure__13(TPMGL(T) identity, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : identity(identity), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:523-529";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__13<TPMGL(T) > >x10_compiler_Foreach__closure__13<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__13<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__13<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__13<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__13<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__13<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__13<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__13_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__14_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__14 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__14<TPMGL(T) > > _itable;
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
        x10_compiler_Foreach__closure__14<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__14<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_start = buf.read<x10_long>();
        x10_long that_end = buf.read<x10_long>();
        x10_long that_grainSize = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_compiler_Foreach__closure__14<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__14<TPMGL(T) >(that_asyncResult, that_start, that_end, that_grainSize, that_body, that_reduce);
        return this_;
    }
    
    x10_compiler_Foreach__closure__14(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long start, x10_long end, x10_long grainSize, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : asyncResult(asyncResult), start(start), end(end), grainSize(grainSize), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:598";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__14<TPMGL(T) > >x10_compiler_Foreach__closure__14<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__14<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__14<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__14<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__14<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__14<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__14<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__14<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__14<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__14_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__18_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__18 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__18<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min0, x10_long max0, x10_long min1, x10_long max1){
        
        //#line 753 "x10/compiler/Foreach.x10"
        TPMGL(T) myResult = identity;
        
        //#line 754 "x10/compiler/Foreach.x10"
        x10_long i__100509min__100609 = min0;
        x10_long i__100509max__100610 = max0;
        {
            x10_long i__100611;
            for (i__100611 = i__100509min__100609; ((i__100611) <= (i__100509max__100610));
                 i__100611 = ((i__100611) + (((x10_long)1ll)))) {
                x10_long i__100612 = i__100611;
                
                //#line 755 "x10/compiler/Foreach.x10"
                x10_long i__100491min__100605 = min1;
                x10_long i__100491max__100606 = max1;
                {
                    x10_long i__100607;
                    for (i__100607 = i__100491min__100605; ((i__100607) <= (i__100491max__100606));
                         i__100607 = ((i__100607) + (((x10_long)1ll))))
                    {
                        x10_long j__100608 = i__100607;
                        
                        //#line 756 "x10/compiler/Foreach.x10"
                        myResult = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          myResult, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                            i__100612, j__100608));
                    }
                }
                
            }
        }
        
        //#line 759 "x10/compiler/Foreach.x10"
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
        x10_compiler_Foreach__closure__18<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__18<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_compiler_Foreach__closure__18<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__18<TPMGL(T) >(that_identity, that_body, that_reduce);
        return this_;
    }
    
    x10_compiler_Foreach__closure__18(TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : identity(identity), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:752-760";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__18<TPMGL(T) > >x10_compiler_Foreach__closure__18<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__18<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__18<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__18<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__18<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__18<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__18<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__18_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__19_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__19 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__19<TPMGL(T) > > _itable;
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
        x10_compiler_Foreach__closure__19<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__19<TPMGL(T) > >();
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
        x10_compiler_Foreach__closure__19<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__19<TPMGL(T) >(that_asyncResult, that_s0, that_e0, that_s1, that_e1, that_g1, that_g2, that_body, that_reduce);
        return this_;
    }
    
    x10_compiler_Foreach__closure__19(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1, x10_long g2, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : asyncResult(asyncResult), s0(s0), e0(e0), s1(s1), e1(e1), g1(g1), g2(g2), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:820";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__19<TPMGL(T) > >x10_compiler_Foreach__closure__19<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__19<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__19<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__19<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__19<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__19<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__19<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__19<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__19<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__19_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__20_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__20 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__20<TPMGL(T) > > _itable;
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
        x10_compiler_Foreach__closure__20<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__20<TPMGL(T) > >();
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
        x10_compiler_Foreach__closure__20<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__20<TPMGL(T) >(that_asyncResult, that_s0, that_e0, that_s1, that_e1, that_g1, that_g2, that_body, that_reduce);
        return this_;
    }
    
    x10_compiler_Foreach__closure__20(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1, x10_long g2, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : asyncResult(asyncResult), s0(s0), e0(e0), s1(s1), e1(e1), g1(g1), g2(g2), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:828";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__20<TPMGL(T) > >x10_compiler_Foreach__closure__20<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__20<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__20<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__20<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__20<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__20<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__20<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__20<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__20<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__20_CLOSURE
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
    x10_long i__100203min__100538 = min;
    x10_long i__100203max__100539 = max;
    {
        x10_long i__100540;
        for (i__100540 = i__100203min__100538; ((i__100540) <= (i__100203max__100539));
             i__100540 = ((i__100540) + (((x10_long)1ll)))) {
            x10_long i__100541 = i__100540;
            
            //#line 110 "x10/compiler/Foreach.x10"
            myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
              myRes, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                i__100541));
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
    x10_long i__100239min__100546 = ::x10aux::nullCheck(space)->FMGL(min0);
    x10_long i__100239max__100547 = ::x10aux::nullCheck(space)->FMGL(max0);
    {
        x10_long i__100548;
        for (i__100548 = i__100239min__100546; ((i__100548) <= (i__100239max__100547));
             i__100548 = ((i__100548) + (((x10_long)1ll))))
        {
            x10_long i__100549 = i__100548;
            
            //#line 141 "x10/compiler/Foreach.x10"
            x10_long i__100221min__100542 = ::x10aux::nullCheck(space)->FMGL(min1);
            x10_long i__100221max__100543 = ::x10aux::nullCheck(space)->FMGL(max1);
            {
                x10_long i__100544;
                for (i__100544 = i__100221min__100542; ((i__100544) <= (i__100221max__100543));
                     i__100544 = ((i__100544) + (((x10_long)1ll))))
                {
                    x10_long j__100545 = i__100544;
                    
                    //#line 142 "x10/compiler/Foreach.x10"
                    myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      myRes, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                        i__100549, j__100545));
                }
            }
            
        }
    }
    
    //#line 145 "x10/compiler/Foreach.x10"
    return myRes;
    
}
#endif // X10_COMPILER_FOREACH_H_sequentialReduce_311
#ifndef X10_COMPILER_FOREACH_H_blockReduce_319
#define X10_COMPILER_FOREACH_H_blockReduce_319
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
            ::x10::xrx::FinishState* fs__100631 = ::x10::xrx::Runtime::startFinish();
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
            catch (::x10::lang::CheckedThrowable* __exc320) {
                {
                    ::x10::lang::CheckedThrowable* ct__100629 =
                      __exc320;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__100629);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__100631);
        }
        
        //#line 262 "x10/compiler/Foreach.x10"
        TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         ((x10_long)0ll));
        
        //#line 263 "x10/compiler/Foreach.x10"
        x10_long i__100311min__100562 = ((x10_long)1ll);
        x10_long i__100311max__100563 = ((((x10_long)(nthreads))) - (((x10_long)1ll)));
        {
            x10_long i__100564;
            for (i__100564 = i__100311min__100562; ((i__100564) <= (i__100311max__100563));
                 i__100564 = ((i__100564) + (((x10_long)1ll))))
            {
                x10_long myT__100565 = i__100564;
                
                //#line 264 "x10/compiler/Foreach.x10"
                res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         myT__100565));
            }
        }
        
        //#line 266 "x10/compiler/Foreach.x10"
        return res;
        
    }
    
}
#endif // X10_COMPILER_FOREACH_H_blockReduce_319
#ifndef X10_COMPILER_FOREACH_H_blockReduce_321
#define X10_COMPILER_FOREACH_H_blockReduce_321
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::blockReduce(
  x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity) {
    
    //#line 284 "x10/compiler/Foreach.x10"
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* executeRange =
      reinterpret_cast< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__6<TPMGL(T)>)))x10_compiler_Foreach__closure__6<TPMGL(T)>(identity, body, reduce)));
    
    //#line 292 "x10/compiler/Foreach.x10"
    return ::x10::compiler::Foreach::template blockReduce< TPMGL(T) >(
             min, max, executeRange, reduce);
    
}
#endif // X10_COMPILER_FOREACH_H_blockReduce_321
#ifndef X10_COMPILER_FOREACH_H_blockReduce_325
#define X10_COMPILER_FOREACH_H_blockReduce_325
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::blockReduce(
  ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity) {
    
    //#line 349 "x10/compiler/Foreach.x10"
    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                 ((x10_int)1)))) {
        
        //#line 350 "x10/compiler/Foreach.x10"
        return ::x10::compiler::Foreach::template sequentialReduce< TPMGL(T) >(
                 space, body, reduce, identity);
        
    } else {
        
        //#line 352 "x10/compiler/Foreach.x10"
        ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
        {
            
            //#line 353 "x10/compiler/Foreach.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__100641 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    {
                        x10_long t;
                        for (t = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                             ((t) >= (((x10_long)0ll))); t =
                                                           ((t) - (((x10_long)1ll))))
                        {
                            
                            //#line 354 "x10/compiler/Foreach.x10"
                            x10_long myT = t;
                            
                            //#line 355 "x10/compiler/Foreach.x10"
                            ::x10::array::DenseIterationSpace_2* block =
                              ::x10::array::BlockingUtils::partitionBlockBlock(
                                reinterpret_cast< ::x10::array::IterationSpace*>(space),
                                ((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())),
                                myT);
                            
                            //#line 356 "x10/compiler/Foreach.x10"
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__8<TPMGL(T)>)))x10_compiler_Foreach__closure__8<TPMGL(T)>(results, myT, block, body, reduce, identity))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc326) {
                {
                    ::x10::lang::CheckedThrowable* ct__100639 =
                      __exc326;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__100639);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__100641);
        }
        
        //#line 358 "x10/compiler/Foreach.x10"
        TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         ((x10_long)0ll));
        
        //#line 359 "x10/compiler/Foreach.x10"
        x10_long i__100347min__100570 = ((x10_long)1ll);
        x10_long i__100347max__100571 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
        {
            x10_long i__100572;
            for (i__100572 = i__100347min__100570; ((i__100572) <= (i__100347max__100571));
                 i__100572 = ((i__100572) + (((x10_long)1ll))))
            {
                x10_long myT__100573 = i__100572;
                
                //#line 360 "x10/compiler/Foreach.x10"
                res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         myT__100573));
            }
        }
        
        //#line 362 "x10/compiler/Foreach.x10"
        return res;
        
    }
    
}
#endif // X10_COMPILER_FOREACH_H_blockReduce_325
#ifndef X10_COMPILER_FOREACH_H_cyclicReduce_329
#define X10_COMPILER_FOREACH_H_cyclicReduce_329
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::cyclicReduce(
  x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity) {
    
    //#line 402 "x10/compiler/Foreach.x10"
    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                 ((x10_int)1)))) {
        
        //#line 403 "x10/compiler/Foreach.x10"
        return ::x10::compiler::Foreach::template sequentialReduce< TPMGL(T) >(
                 min, max, body, reduce, identity);
        
    } else {
        
        //#line 405 "x10/compiler/Foreach.x10"
        ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
        {
            
            //#line 406 "x10/compiler/Foreach.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__100651 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10_long i__100383min__100581 = ((x10_long)0ll);
                    x10_long i__100383max__100582 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                    {
                        x10_long i__100583;
                        for (i__100583 = i__100383min__100581;
                             ((i__100583) <= (i__100383max__100582));
                             i__100583 = ((i__100583) + (((x10_long)1ll))))
                        {
                            x10_long t__100584 = i__100583;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__10<TPMGL(T)>)))x10_compiler_Foreach__closure__10<TPMGL(T)>(identity, min, t__100584, max, body, reduce, results))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc330) {
                {
                    ::x10::lang::CheckedThrowable* ct__100649 =
                      __exc330;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__100649);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__100651);
        }
        
        //#line 413 "x10/compiler/Foreach.x10"
        TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         ((x10_long)0ll));
        
        //#line 414 "x10/compiler/Foreach.x10"
        x10_long i__100401min__100585 = ((x10_long)1ll);
        x10_long i__100401max__100586 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
        {
            x10_long i__100587;
            for (i__100587 = i__100401min__100585; ((i__100587) <= (i__100401max__100586));
                 i__100587 = ((i__100587) + (((x10_long)1ll))))
            {
                x10_long myT__100588 = i__100587;
                
                //#line 415 "x10/compiler/Foreach.x10"
                res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         myT__100588));
            }
        }
        
        //#line 417 "x10/compiler/Foreach.x10"
        return res;
        
    }
    
}
#endif // X10_COMPILER_FOREACH_H_cyclicReduce_329
#ifndef X10_COMPILER_FOREACH_H_bisectReduce_338
#define X10_COMPILER_FOREACH_H_bisectReduce_338
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
  x10_long min, x10_long max, x10_long grainSize, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity) {
    
    //#line 523 "x10/compiler/Foreach.x10"
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* executeRange =
      reinterpret_cast< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__13<TPMGL(T)>)))x10_compiler_Foreach__closure__13<TPMGL(T)>(identity, body, reduce)));
    
    //#line 530 "x10/compiler/Foreach.x10"
    return ::x10::compiler::Foreach::template bisectReduce< TPMGL(T) >(
             min, max, grainSize, executeRange, reduce);
    
}
#endif // X10_COMPILER_FOREACH_H_bisectReduce_338
#ifndef X10_COMPILER_FOREACH_H_bisectReduce_339
#define X10_COMPILER_FOREACH_H_bisectReduce_339
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
  x10_long min, x10_long max, x10_long grainSize, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
    
    //#line 549 "x10/compiler/Foreach.x10"
    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                 ((x10_int)1)))) {
        
        //#line 550 "x10/compiler/Foreach.x10"
        return ::x10::compiler::Foreach::template sequentialReduce< TPMGL(T) >(
                 min, max, body, reduce);
        
    } else {
        
        //#line 552 "x10/compiler/Foreach.x10"
        return ::x10::compiler::Foreach::template doBisectReduce1D< TPMGL(T) >(
                 min, ((max) + (((x10_long)1ll))), grainSize,
                 body, reduce);
        
    }
    
}
#endif // X10_COMPILER_FOREACH_H_bisectReduce_339
#ifndef X10_COMPILER_FOREACH_H_bisectReduce_340
#define X10_COMPILER_FOREACH_H_bisectReduce_340
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
  x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
    
    //#line 570 "x10/compiler/Foreach.x10"
    x10_long grainSize = ::x10::lang::Math::max(((x10_long)1ll),
                                                ((((max) - (min))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll))))));
    
    //#line 571 "x10/compiler/Foreach.x10"
    return ::x10::compiler::Foreach::template bisectReduce< TPMGL(T) >(
             min, max, grainSize, body, reduce);
    
}
#endif // X10_COMPILER_FOREACH_H_bisectReduce_340
#ifndef X10_COMPILER_FOREACH_H_bisectReduce_341
#define X10_COMPILER_FOREACH_H_bisectReduce_341
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
  x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity) {
    
    //#line 586 "x10/compiler/Foreach.x10"
    x10_long grainSize = ::x10::lang::Math::max(((x10_long)1ll),
                                                ((((max) - (min))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll))))));
    
    //#line 587 "x10/compiler/Foreach.x10"
    return ::x10::compiler::Foreach::template bisectReduce< TPMGL(T) >(
             min, max, grainSize, body, reduce, identity);
    
}
#endif // X10_COMPILER_FOREACH_H_bisectReduce_341
#ifndef X10_COMPILER_FOREACH_H_doBisectReduce1D_342
#define X10_COMPILER_FOREACH_H_doBisectReduce1D_342
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::doBisectReduce1D(
  x10_long start, x10_long end, x10_long grainSize, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
    
    //#line 594 "x10/compiler/Foreach.x10"
    if (((((end) - (start))) > (grainSize))) {
        
        //#line 595 "x10/compiler/Foreach.x10"
        TPMGL(T) asyncResult;
        
        //#line 596 "x10/compiler/Foreach.x10"
        TPMGL(T) syncResult;
        {
            
            //#line 597 "x10/compiler/Foreach.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__100665 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 598 "x10/compiler/Foreach.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__14<TPMGL(T)>)))x10_compiler_Foreach__closure__14<TPMGL(T)>(&(asyncResult), start, end, grainSize, body, reduce))));
                    
                    //#line 599 "x10/compiler/Foreach.x10"
                    syncResult = ::x10::compiler::Foreach::template doBisectReduce1D< TPMGL(T) >(
                                   start, ((((start) + (end))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                   grainSize, body, reduce);
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc343) {
                {
                    ::x10::lang::CheckedThrowable* ct__100663 =
                      __exc343;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__100663);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__100665);
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
#endif // X10_COMPILER_FOREACH_H_doBisectReduce1D_342
#ifndef X10_COMPILER_FOREACH_H_bisectReduce_350
#define X10_COMPILER_FOREACH_H_bisectReduce_350
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
  x10_long min0, x10_long max0, x10_long min1, x10_long max1,
  x10_long grainSize0, x10_long grainSize1, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity) {
    
    //#line 748 "x10/compiler/Foreach.x10"
    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                 ((x10_int)1)))) {
        
        //#line 749 "x10/compiler/Foreach.x10"
        return ::x10::compiler::Foreach::template sequentialReduce< TPMGL(T) >(
                 ::x10::array::DenseIterationSpace_2::_make(min0,
                                                            min1,
                                                            max0,
                                                            max1),
                 body, reduce, identity);
        
    } else {
        
        //#line 752 "x10/compiler/Foreach.x10"
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* reduceRange =
          reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__18<TPMGL(T)>)))x10_compiler_Foreach__closure__18<TPMGL(T)>(identity, body, reduce)));
        
        //#line 761 "x10/compiler/Foreach.x10"
        return ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                 min0, ((max0) + (((x10_long)1ll))), min1,
                 ((max1) + (((x10_long)1ll))), grainSize0,
                 grainSize1, reduceRange, reduce);
        
    }
    
}
#endif // X10_COMPILER_FOREACH_H_bisectReduce_350
#ifndef X10_COMPILER_FOREACH_H_bisectReduce_351
#define X10_COMPILER_FOREACH_H_bisectReduce_351
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
  ::x10::array::DenseIterationSpace_2* space, x10_long grainSize0,
  x10_long grainSize1, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity) {
    
    //#line 783 "x10/compiler/Foreach.x10"
    return ::x10::compiler::Foreach::template bisectReduce< TPMGL(T) >(
             ::x10aux::nullCheck(space)->FMGL(min0), ::x10aux::nullCheck(space)->FMGL(max0),
             ::x10aux::nullCheck(space)->FMGL(min1), ::x10aux::nullCheck(space)->FMGL(max1),
             grainSize0, grainSize1, body, reduce, identity);
    
}
#endif // X10_COMPILER_FOREACH_H_bisectReduce_351
#ifndef X10_COMPILER_FOREACH_H_bisectReduce_352
#define X10_COMPILER_FOREACH_H_bisectReduce_352
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
  ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity) {
    
    //#line 801 "x10/compiler/Foreach.x10"
    x10_long grainSize0 = ::x10::lang::Math::max(((x10_long)1ll),
                                                 ((((::x10aux::nullCheck(space)->FMGL(max0)) - (::x10aux::nullCheck(space)->FMGL(min0)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())))));
    
    //#line 802 "x10/compiler/Foreach.x10"
    x10_long grainSize1 = ::x10::lang::Math::max(((x10_long)1ll),
                                                 ((((::x10aux::nullCheck(space)->FMGL(max1)) - (::x10aux::nullCheck(space)->FMGL(min1)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())))));
    
    //#line 803 "x10/compiler/Foreach.x10"
    return ::x10::compiler::Foreach::template bisectReduce< TPMGL(T) >(
             ::x10aux::nullCheck(space)->FMGL(min0), ::x10aux::nullCheck(space)->FMGL(max0),
             ::x10aux::nullCheck(space)->FMGL(min1), ::x10aux::nullCheck(space)->FMGL(max1),
             grainSize0, grainSize1, body, reduce, identity);
    
}
#endif // X10_COMPILER_FOREACH_H_bisectReduce_352
#ifndef X10_COMPILER_FOREACH_H_doBisectReduce2D_353
#define X10_COMPILER_FOREACH_H_doBisectReduce2D_353
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::doBisectReduce2D(
  x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1,
  x10_long g2, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
    
    //#line 816 "x10/compiler/Foreach.x10"
    if ((((((e0) - (s0))) > (g1)) && ((((((e0) - (s0))) >= (((e1) - (s1)))) ||
                                      ((((e1) - (s1))) <= (g2))))))
    {
        
        //#line 817 "x10/compiler/Foreach.x10"
        TPMGL(T) asyncResult;
        
        //#line 818 "x10/compiler/Foreach.x10"
        TPMGL(T) syncResult;
        {
            
            //#line 819 "x10/compiler/Foreach.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__100676 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 820 "x10/compiler/Foreach.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__19<TPMGL(T)>)))x10_compiler_Foreach__closure__19<TPMGL(T)>(&(asyncResult), s0, e0, s1, e1, g1, g2, body, reduce))));
                    
                    //#line 821 "x10/compiler/Foreach.x10"
                    syncResult = ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                                   s0, ((((s0) + (e0))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                   s1, e1, g1, g2, body, reduce);
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc354) {
                {
                    ::x10::lang::CheckedThrowable* ct__100674 =
                      __exc354;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__100674);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__100676);
        }
        
        //#line 823 "x10/compiler/Foreach.x10"
        return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
          asyncResult, syncResult);
        
    } else 
    //#line 824 "x10/compiler/Foreach.x10"
    if (((((e1) - (s1))) > (g2))) {
        
        //#line 825 "x10/compiler/Foreach.x10"
        TPMGL(T) asyncResult;
        
        //#line 826 "x10/compiler/Foreach.x10"
        TPMGL(T) syncResult;
        {
            
            //#line 827 "x10/compiler/Foreach.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__100681 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 828 "x10/compiler/Foreach.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__20<TPMGL(T)>)))x10_compiler_Foreach__closure__20<TPMGL(T)>(&(asyncResult), s0, e0, s1, e1, g1, g2, body, reduce))));
                    
                    //#line 829 "x10/compiler/Foreach.x10"
                    syncResult = ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                                   s0, e0, s1, ((((s1) + (e1))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                   g1, g2, body, reduce);
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc355) {
                {
                    ::x10::lang::CheckedThrowable* ct__100679 =
                      __exc355;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__100679);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__100681);
        }
        
        //#line 831 "x10/compiler/Foreach.x10"
        return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
          asyncResult, syncResult);
        
    } else {
        
        //#line 833 "x10/compiler/Foreach.x10"
        return ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
          s0, ((e0) - (((x10_long)1ll))), s1, ((e1) - (((x10_long)1ll))));
        
    }
    
}
#endif // X10_COMPILER_FOREACH_H_doBisectReduce2D_353
#endif // X10_COMPILER_FOREACH_H_GENERICS
#endif // __X10_COMPILER_FOREACH_H_NODEPS
