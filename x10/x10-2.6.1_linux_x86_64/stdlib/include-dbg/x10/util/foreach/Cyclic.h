#ifndef __X10_UTIL_FOREACH_CYCLIC_H
#define __X10_UTIL_FOREACH_CYCLIC_H

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

class Cyclic : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1<x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body);
    virtual ::x10::util::foreach::Cyclic* x10__util__foreach__Cyclic____this__x10__util__foreach__Cyclic(
      );
    void _constructor();
    
    static ::x10::util::foreach::Cyclic* _make();
    
    virtual void __fieldInitializers_x10_util_foreach_Cyclic(
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
#endif // X10_UTIL_FOREACH_CYCLIC_H

namespace x10 { namespace util { namespace foreach { 
class Cyclic;
} } } 

#ifndef X10_UTIL_FOREACH_CYCLIC_H_NODEPS
#define X10_UTIL_FOREACH_CYCLIC_H_NODEPS
#include <x10/lang/LongRange.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/util/foreach/Sequential.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Unsafe.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_FOREACH_CYCLIC__CLOSURE__2_CLOSURE
#define X10_UTIL_FOREACH_CYCLIC__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Cyclic__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Cyclic__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 65 "x10/util/foreach/Cyclic.x10"
        TPMGL(T) myRes__122190 = identity;
        
        //#line 66 "x10/util/foreach/Cyclic.x10"
        {
            x10_long i__122191;
            for (i__122191 = ((min) + (t__122195)); ((i__122191) <= (max));
                 i__122191 = ((i__122191) + (((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())))))
            {
                
                //#line 67 "x10/util/foreach/Cyclic.x10"
                myRes__122190 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes__122190, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__122191));
            }
        }
        
        //#line 69 "x10/util/foreach/Cyclic.x10"
        results->x10::lang::template Rail< TPMGL(T) >::__set(
          t__122195, myRes__122190);
    }
    
    // captured environment
    TPMGL(T) identity;
    x10_long min;
    x10_long t__122195;
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
        buf.write(this->t__122195);
        buf.write(this->max);
        buf.write(this->body);
        buf.write(this->reduce);
        buf.write(this->results);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Cyclic__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Cyclic__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        x10_long that_min = buf.read<x10_long>();
        x10_long that_t__122195 = buf.read<x10_long>();
        x10_long that_max = buf.read<x10_long>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_util_foreach_Cyclic__closure__2<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Cyclic__closure__2<TPMGL(T) >(that_identity, that_min, that_t__122195, that_max, that_body, that_reduce, that_results);
        return this_;
    }
    
    x10_util_foreach_Cyclic__closure__2(TPMGL(T) identity, x10_long min, x10_long t__122195, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Rail< TPMGL(T) >* results) : identity(identity), min(min), t__122195(t__122195), max(max), body(body), reduce(reduce), results(results) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Cyclic.x10:64-70";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Cyclic__closure__2<TPMGL(T) > >x10_util_foreach_Cyclic__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Cyclic__closure__2<TPMGL(T) >::__apply, &x10_util_foreach_Cyclic__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Cyclic__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Cyclic__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Cyclic__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Cyclic__closure__2<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Cyclic__closure__2<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Cyclic__closure__2<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_CYCLIC__CLOSURE__2_CLOSURE
#ifndef X10_UTIL_FOREACH_CYCLIC_H_GENERICS
#define X10_UTIL_FOREACH_CYCLIC_H_GENERICS
#ifndef X10_UTIL_FOREACH_CYCLIC_H__kwd__for_2246
#define X10_UTIL_FOREACH_CYCLIC_H__kwd__for_2246
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Cyclic::_kwd__for(::x10::lang::LongRange range,
                                                                        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                                        TPMGL(T) identity,
                                                                        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 58 "x10/util/foreach/Cyclic.x10"
    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                 ((x10_int)1)))) {
        
        //#line 59 "x10/util/foreach/Cyclic.x10"
        return ::x10::util::foreach::Sequential::template _kwd__for< TPMGL(T) >(
                 range, reduce, identity, body);
        
    } else {
        
        //#line 61 "x10/util/foreach/Cyclic.x10"
        x10_long min = range->FMGL(min);
        
        //#line 62 "x10/util/foreach/Cyclic.x10"
        x10_long max = range->FMGL(max);
        
        //#line 63 "x10/util/foreach/Cyclic.x10"
        ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
        {
            
            //#line 64 "x10/util/foreach/Cyclic.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__122208 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10_long i__122150min__122192 = ((x10_long)0ll);
                    x10_long i__122150max__122193 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                    {
                        x10_long i__122194;
                        for (i__122194 = i__122150min__122192;
                             ((i__122194) <= (i__122150max__122193));
                             i__122194 = ((i__122194) + (((x10_long)1ll))))
                        {
                            x10_long t__122195 = i__122194;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Cyclic__closure__2<TPMGL(T)>)))x10_util_foreach_Cyclic__closure__2<TPMGL(T)>(identity, min, t__122195, max, body, reduce, results))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2247) {
                {
                    ::x10::lang::CheckedThrowable* ct__122206 =
                      __exc2247;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__122206);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__122208);
        }
        
        //#line 71 "x10/util/foreach/Cyclic.x10"
        TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         ((x10_long)0ll));
        
        //#line 72 "x10/util/foreach/Cyclic.x10"
        x10_long i__122168min__122196 = ((x10_long)1ll);
        x10_long i__122168max__122197 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
        {
            x10_long i__122198;
            for (i__122198 = i__122168min__122196; ((i__122198) <= (i__122168max__122197));
                 i__122198 = ((i__122198) + (((x10_long)1ll))))
            {
                x10_long myT__122199 = i__122198;
                
                //#line 73 "x10/util/foreach/Cyclic.x10"
                res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         myT__122199));
            }
        }
        
        //#line 75 "x10/util/foreach/Cyclic.x10"
        return res;
        
    }
    
}
#endif // X10_UTIL_FOREACH_CYCLIC_H__kwd__for_2246
#endif // X10_UTIL_FOREACH_CYCLIC_H_GENERICS
#endif // __X10_UTIL_FOREACH_CYCLIC_H_NODEPS
