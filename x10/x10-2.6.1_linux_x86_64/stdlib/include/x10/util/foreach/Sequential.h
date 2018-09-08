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
#ifndef X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2291
#define X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2291
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Sequential::_kwd__for(
  ::x10::lang::LongRange range, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 71 "x10/util/foreach/Sequential.x10"
    TPMGL(T) myRes = identity;
    
    //#line 72 "x10/util/foreach/Sequential.x10"
    x10_long i__137134min__139897 = range->FMGL(min);
    x10_long i__137134max__139898 = range->FMGL(max);
    {
        x10_long i__139899;
        for (i__139899 = i__137134min__139897; ((i__139899) <= (i__137134max__139898));
             i__139899 = ((i__139899) + (((x10_long)1ll))))
        {
            
            //#line 73 "x10/util/foreach/Sequential.x10"
            myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
              myRes, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                i__139899));
        }
    }
    
    //#line 75 "x10/util/foreach/Sequential.x10"
    return myRes;
    
}
#endif // X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2291
#ifndef X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2292
#define X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2292
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Sequential::_kwd__for(
  ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
    
    //#line 88 "x10/util/foreach/Sequential.x10"
    TPMGL(T) myRes = identity;
    
    //#line 89 "x10/util/foreach/Sequential.x10"
    x10_long j__137154min__139902 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                      ((x10_long)1ll));
    x10_long j__137154max__139903 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                      ((x10_long)1ll));
    x10_long i__137185min__139904 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                      ((x10_long)0ll));
    x10_long i__137185max__139905 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                      ((x10_long)0ll));
    {
        x10_long i__139906;
        for (i__139906 = i__137185min__139904; ((i__139906) <= (i__137185max__139905));
             i__139906 = ((i__139906) + (((x10_long)1ll))))
        {
            {
                x10_long j__139908;
                for (j__139908 = j__137154min__139902; ((j__139908) <= (j__137154max__139903));
                     j__139908 = ((j__139908) + (((x10_long)1ll))))
                {
                    
                    //#line 90 "x10/util/foreach/Sequential.x10"
                    myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      myRes, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                        i__139906, j__139908));
                }
            }
            
        }
    }
    
    //#line 92 "x10/util/foreach/Sequential.x10"
    return myRes;
    
}
#endif // X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2292
#ifndef X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2293
#define X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2293
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Sequential::_kwd__for(
  ::x10::lang::LongRange range, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) {
    
    //#line 106 "x10/util/foreach/Sequential.x10"
    return ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
      range);
    
}
#endif // X10_UTIL_FOREACH_SEQUENTIAL_H__kwd__for_2293
#endif // X10_UTIL_FOREACH_SEQUENTIAL_H_GENERICS
#endif // __X10_UTIL_FOREACH_SEQUENTIAL_H_NODEPS
