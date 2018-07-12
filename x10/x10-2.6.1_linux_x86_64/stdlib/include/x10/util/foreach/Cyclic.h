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
#include <x10/lang/Boolean.h>
#include <x10/xrx/FinishState.h>
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
        TPMGL(T) myRes__139797 = identity;
        
        //#line 66 "x10/util/foreach/Cyclic.x10"
        {
            x10_long i__139798;
            for (i__139798 = ((min) + (t__139801)); ((i__139798) <= (max));
                 i__139798 = ((i__139798) + (((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())))))
            {
                
                //#line 67 "x10/util/foreach/Cyclic.x10"
                myRes__139797 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes__139797, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__139798));
            }
        }
        
        //#line 69 "x10/util/foreach/Cyclic.x10"
        results->x10::lang::template Rail< TPMGL(T) >::__set(
          t__139801, myRes__139797);
    }
    
    // captured environment
    TPMGL(T) identity;
    x10_long min;
    x10_long t__139801;
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
        buf.write(this->t__139801);
        buf.write(this->max);
        buf.write(this->reduce);
        buf.write(this->body);
        buf.write(this->results);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Cyclic__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Cyclic__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        x10_long that_min = buf.read<x10_long>();
        x10_long that_t__139801 = buf.read<x10_long>();
        x10_long that_max = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_util_foreach_Cyclic__closure__2<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Cyclic__closure__2<TPMGL(T) >(that_identity, that_min, that_t__139801, that_max, that_reduce, that_body, that_results);
        return this_;
    }
    
    x10_util_foreach_Cyclic__closure__2(TPMGL(T) identity, x10_long min, x10_long t__139801, x10_long max, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body, ::x10::lang::Rail< TPMGL(T) >* results) : identity(identity), min(min), t__139801(t__139801), max(max), reduce(reduce), body(body), results(results) { }
    
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
#ifndef X10_UTIL_FOREACH_CYCLIC_H__kwd__for_2277
#define X10_UTIL_FOREACH_CYCLIC_H__kwd__for_2277
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Cyclic::_kwd__for(::x10::lang::LongRange range,
                                                                        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                                        TPMGL(T) identity,
                                                                        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 58 "x10/util/foreach/Cyclic.x10"
    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                 ((x10_int)1)))) {
        
        //#line 71 "x10/util/foreach/Sequential.x10"
        TPMGL(T) myRes__139796 = identity;
        
        //#line 72 "x10/util/foreach/Sequential.x10"
        x10_long i__137134min__139788 = range->FMGL(min);
        x10_long i__137134max__139789 = range->FMGL(max);
        {
            x10_long i__139790;
            for (i__139790 = i__137134min__139788; ((i__139790) <= (i__137134max__139789));
                 i__139790 = ((i__139790) + (((x10_long)1ll))))
            {
                
                //#line 73 "x10/util/foreach/Sequential.x10"
                myRes__139796 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes__139796, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__139790));
            }
        }
        
        //#line 59 "x10/util/foreach/Cyclic.x10"
        return myRes__139796;
        
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
            ::x10::xrx::FinishState* fs__139831 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10_long i__139680max__139799 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                    {
                        x10_long i__139800;
                        for (i__139800 = ((x10_long)0ll);
                             ((i__139800) <= (i__139680max__139799));
                             i__139800 = ((i__139800) + (((x10_long)1ll))))
                        {
                            x10_long t__139801 = i__139800;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Cyclic__closure__2<TPMGL(T)>)))x10_util_foreach_Cyclic__closure__2<TPMGL(T)>(identity, min, t__139801, max, reduce, body, results))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2278) {
                {
                    ::x10::lang::CheckedThrowable* ct__139829 =
                      __exc2278;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__139829);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__139831);
        }
        
        //#line 71 "x10/util/foreach/Cyclic.x10"
        TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         ((x10_long)0ll));
        
        //#line 72 "x10/util/foreach/Cyclic.x10"
        x10_long i__139698max__139802 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
        {
            x10_long i__139803;
            for (i__139803 = ((x10_long)1ll); ((i__139803) <= (i__139698max__139802));
                 i__139803 = ((i__139803) + (((x10_long)1ll))))
            {
                
                //#line 73 "x10/util/foreach/Cyclic.x10"
                res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         i__139803));
            }
        }
        
        //#line 75 "x10/util/foreach/Cyclic.x10"
        return res;
        
    }
    
}
#endif // X10_UTIL_FOREACH_CYCLIC_H__kwd__for_2277
#endif // X10_UTIL_FOREACH_CYCLIC_H_GENERICS
#endif // __X10_UTIL_FOREACH_CYCLIC_H_NODEPS
