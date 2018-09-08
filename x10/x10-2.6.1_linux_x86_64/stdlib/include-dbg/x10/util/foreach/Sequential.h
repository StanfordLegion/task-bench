#ifndef __X10_UTIL_FOREACH_SEQUENTIAL_H
#define __X10_UTIL_FOREACH_SEQUENTIAL_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
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
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace foreach { 

class Sequential : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void _kwd__for(::x10::array::DenseIterationSpace_2* space, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1< ::x10::lang::LongRange>* body);
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
    virtual ::x10::util::foreach::Sequential* x10__util__foreach__Sequential____this__x10__util__foreach__Sequential(
      );
    void _constructor();
    
    static ::x10::util::foreach::Sequential* _make();
    
    virtual void __fieldInitializers_x10_util_foreach_Sequential(
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
#endif // X10_UTIL_FOREACH_SEQUENTIAL_H

namespace x10 { namespace util { namespace foreach { 
class Sequential;
} } } 

#ifndef X10_UTIL_FOREACH_SEQUENTIAL_H_NODEPS
#define X10_UTIL_FOREACH_SEQUENTIAL_H_NODEPS
#include <x10/lang/LongRange.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Inline.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_FOREACH_SEQUENTIAL_H_GENERICS
#define X10_UTIL_FOREACH_SEQUENTIAL_H_GENERICS
#ifndef X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2259
#define X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2259
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Sequential::_kwd__for(
  ::x10::lang::LongRange range, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 71 "x10/util/foreach/Sequential.x10"
    TPMGL(T) myRes = identity;
    
    //#line 72 "x10/util/foreach/Sequential.x10"
    ::x10::lang::LongRange i__122346domain__122442 = range;
    x10_long i__122346min__122443 = i__122346domain__122442->FMGL(min);
    x10_long i__122346max__122444 = i__122346domain__122442->FMGL(max);
    {
        x10_long i__122445;
        for (i__122445 = i__122346min__122443; ((i__122445) <= (i__122346max__122444));
             i__122445 = ((i__122445) + (((x10_long)1ll))))
        {
            x10_long i__122446 = i__122445;
            
            //#line 73 "x10/util/foreach/Sequential.x10"
            myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
              myRes, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                i__122446));
        }
    }
    
    //#line 75 "x10/util/foreach/Sequential.x10"
    return myRes;
    
}
#endif // X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2259
#ifndef X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2260
#define X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2260
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Sequential::_kwd__for(
  ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
    
    //#line 88 "x10/util/foreach/Sequential.x10"
    TPMGL(T) myRes = identity;
    
    //#line 89 "x10/util/foreach/Sequential.x10"
    ::x10::array::DenseIterationSpace_2* p__122447 = space;
    x10_long j__122366min__122448 = ::x10aux::nullCheck(p__122447)->x10::array::DenseIterationSpace_2::min(
                                      ((x10_long)1ll));
    x10_long j__122366max__122449 = ::x10aux::nullCheck(p__122447)->x10::array::DenseIterationSpace_2::max(
                                      ((x10_long)1ll));
    x10_long i__122397min__122450 = ::x10aux::nullCheck(p__122447)->x10::array::DenseIterationSpace_2::min(
                                      ((x10_long)0ll));
    x10_long i__122397max__122451 = ::x10aux::nullCheck(p__122447)->x10::array::DenseIterationSpace_2::max(
                                      ((x10_long)0ll));
    {
        x10_long i__122452;
        for (i__122452 = i__122397min__122450; ((i__122452) <= (i__122397max__122451));
             i__122452 = ((i__122452) + (((x10_long)1ll))))
        {
            x10_long i__122453 = i__122452;
            {
                x10_long j__122454;
                for (j__122454 = j__122366min__122448; ((j__122454) <= (j__122366max__122449));
                     j__122454 = ((j__122454) + (((x10_long)1ll))))
                {
                    x10_long j__122455 = j__122454;
                    
                    //#line 90 "x10/util/foreach/Sequential.x10"
                    myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      myRes, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                        i__122453, j__122455));
                }
            }
            
        }
    }
    
    //#line 92 "x10/util/foreach/Sequential.x10"
    return myRes;
    
}
#endif // X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2260
#ifndef X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2261
#define X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2261
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Sequential::_kwd__for(
  ::x10::lang::LongRange range, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) {
    
    //#line 106 "x10/util/foreach/Sequential.x10"
    return ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
      range);
    
}
#endif // X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2261
#endif // X10_UTIL_FOREACH_SEQUENTIAL_H_GENERICS
#endif // __X10_UTIL_FOREACH_SEQUENTIAL_H_NODEPS
