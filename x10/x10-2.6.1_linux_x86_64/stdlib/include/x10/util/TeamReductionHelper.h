#ifndef __X10_UTIL_TEAMREDUCTIONHELPER_H
#define __X10_UTIL_TEAMREDUCTIONHELPER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Complex;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Arithmetic;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Bitwise;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Ordered;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class TeamReductionHelper_Strings {
  public:
    static ::x10::lang::String sl__171157;
    static ::x10::lang::String sl__171162;
    static ::x10::lang::String sl__171155;
    static ::x10::lang::String sl__171158;
    static ::x10::lang::String sl__171165;
    static ::x10::lang::String sl__171163;
    static ::x10::lang::String sl__171161;
    static ::x10::lang::String sl__171164;
    static ::x10::lang::String sl__171154;
    static ::x10::lang::String sl__171159;
    static ::x10::lang::String sl__171156;
    static ::x10::lang::String sl__171160;
};

class TeamReductionHelper : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    template<class TPMGL(T)> static void performReduction(::x10::lang::Rail< TPMGL(T) >* src,
                                                          x10_long src_off,
                                                          ::x10::lang::Rail< TPMGL(T) >* dst,
                                                          x10_long dst_off,
                                                          x10_long count,
                                                          x10_int operation);
    static void reduce(::x10::lang::Rail< x10_double >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_double >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_float >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_float >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_complex >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_complex >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_long >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_long >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_int >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_int >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_short >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_short >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_byte >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_byte >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_boolean >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_boolean >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    template<class TPMGL(T)> static void reduce(::x10::lang::Rail< TPMGL(T) >* src,
                                                x10_long src_off,
                                                ::x10::lang::Rail< TPMGL(T) >* dst,
                                                x10_long dst_off,
                                                x10_long count,
                                                x10_int operation);
    virtual ::x10::util::TeamReductionHelper* x10__util__TeamReductionHelper____this__x10__util__TeamReductionHelper(
      );
    void _constructor();
    
    static ::x10::util::TeamReductionHelper* _make();
    
    virtual void __fieldInitializers_x10_util_TeamReductionHelper(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_UTIL_TEAMREDUCTIONHELPER_H

namespace x10 { namespace util { 
class TeamReductionHelper;
} } 

#ifndef X10_UTIL_TEAMREDUCTIONHELPER_H_NODEPS
#define X10_UTIL_TEAMREDUCTIONHELPER_H_NODEPS
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Any.h>
#include <x10/lang/Double.h>
#include <x10/lang/Float.h>
#include <x10/lang/Complex.h>
#include <x10/lang/Short.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Boolean.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Math.h>
#include <x10/lang/String.h>
#include <x10/lang/Arithmetic.h>
#include <x10/lang/Bitwise.h>
#include <x10/util/Ordered.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_TEAMREDUCTIONHELPER_H_GENERICS
#define X10_UTIL_TEAMREDUCTIONHELPER_H_GENERICS
#ifndef X10_UTIL_TEAMREDUCTIONHELPER_H_performReduction_2897
#define X10_UTIL_TEAMREDUCTIONHELPER_H_performReduction_2897
template<class TPMGL(T)> void x10::util::TeamReductionHelper::performReduction(
  ::x10::lang::Rail< TPMGL(T) >* src, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_long dst_off, x10_long count, x10_int operation) {
    
    //#line 35 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 36 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 37 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_float >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 38 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_float >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_float >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 39 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_complex >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 40 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_complex >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_complex >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 41 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 42 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 43 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 44 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 45 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_short >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 46 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_short >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_short >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 47 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_byte >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 48 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_byte >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_byte >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 49 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_boolean >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 50 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_boolean >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_boolean >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else {
        
        //#line 52 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::template reduce< TPMGL(T) >(
          src, src_off, dst, dst_off, count, operation);
    }
    
}
#endif // X10_UTIL_TEAMREDUCTIONHELPER_H_performReduction_2897
#ifndef X10_UTIL_TEAMREDUCTIONHELPER_H_reduce_2906
#define X10_UTIL_TEAMREDUCTIONHELPER_H_reduce_2906
template<class TPMGL(T)> void x10::util::TeamReductionHelper::reduce(
  ::x10::lang::Rail< TPMGL(T) >* src, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_long dst_off, x10_long count, x10_int operation) {
    
    //#line 365 "x10/util/TeamReductionHelper.x10"
    switch (operation) {
        
        //#line 366 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)0): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153088max__153193 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153194;
                    for (i__153194 = ((x10_long)0ll); ((i__153194) <= (i__153088max__153193));
                         i__153194 = ((i__153194) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153194) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153191 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153194) + (dst_off)));
                              TPMGL(T) b__153192 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153194) + (src_off)));
                              ::x10::lang::Arithmetic< TPMGL(T) >::_m4____plus(::x10aux::class_cast< ::x10::lang::Arithmetic< TPMGL(T) >*>(a__153191), b__153192);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 368 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 369 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)1): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153088max__153198 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153199;
                    for (i__153199 = ((x10_long)0ll); ((i__153199) <= (i__153088max__153198));
                         i__153199 = ((i__153199) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153199) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153196 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153199) + (dst_off)));
                              TPMGL(T) b__153197 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153199) + (src_off)));
                              ::x10::lang::Arithmetic< TPMGL(T) >::__times(::x10aux::class_cast< ::x10::lang::Arithmetic< TPMGL(T) >*>(a__153196), b__153197);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 371 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 372 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)3): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153088max__153203 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153204;
                    for (i__153204 = ((x10_long)0ll); ((i__153204) <= (i__153088max__153203));
                         i__153204 = ((i__153204) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153204) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153201 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153204) + (dst_off)));
                              TPMGL(T) b__153202 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153204) + (src_off)));
                              ::x10::lang::Bitwise< TPMGL(T) >::__ampersand(::x10aux::class_cast< ::x10::lang::Bitwise< TPMGL(T) >*>(a__153201), b__153202);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 374 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 375 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)4): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153088max__153208 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153209;
                    for (i__153209 = ((x10_long)0ll); ((i__153209) <= (i__153088max__153208));
                         i__153209 = ((i__153209) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153209) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153206 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153209) + (dst_off)));
                              TPMGL(T) b__153207 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153209) + (src_off)));
                              ::x10::lang::Bitwise< TPMGL(T) >::__bar(::x10aux::class_cast< ::x10::lang::Bitwise< TPMGL(T) >*>(a__153206), b__153207);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 377 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 378 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)5): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153088max__153213 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153214;
                    for (i__153214 = ((x10_long)0ll); ((i__153214) <= (i__153088max__153213));
                         i__153214 = ((i__153214) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153214) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153211 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153214) + (dst_off)));
                              TPMGL(T) b__153212 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153214) + (src_off)));
                              ::x10::lang::Bitwise< TPMGL(T) >::__caret(::x10aux::class_cast< ::x10::lang::Bitwise< TPMGL(T) >*>(a__153211), b__153212);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 380 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 381 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)6): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153088max__153218 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153219;
                    for (i__153219 = ((x10_long)0ll); ((i__153219) <= (i__153088max__153218));
                         i__153219 = ((i__153219) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153219) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153216 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153219) + (dst_off)));
                              TPMGL(T) b__153217 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153219) + (src_off)));
                              ::x10::util::Ordered< TPMGL(T) >::__lt(::x10aux::class_cast< ::x10::util::Ordered< TPMGL(T) >*>(a__153216), b__153217)
                                ? (b__153217) : (a__153216);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 383 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 384 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)7): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153088max__153223 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153224;
                    for (i__153224 = ((x10_long)0ll); ((i__153224) <= (i__153088max__153223));
                         i__153224 = ((i__153224) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153224) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153221 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153224) + (dst_off)));
                              TPMGL(T) b__153222 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153224) + (src_off)));
                              ::x10::util::Ordered< TPMGL(T) >::__lt(::x10aux::class_cast< ::x10::util::Ordered< TPMGL(T) >*>(a__153221), b__153222)
                                ? (a__153221) : (b__153222);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 386 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 387 "x10/util/TeamReductionHelper.x10"
        default: ;
        {
            
            //#line 388 "x10/util/TeamReductionHelper.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::x10::util::TeamReductionHelper_Strings::sl__171157), operation)))->c_str());
        }
    }
}
#endif // X10_UTIL_TEAMREDUCTIONHELPER_H_reduce_2906
#endif // X10_UTIL_TEAMREDUCTIONHELPER_H_GENERICS
#endif // __X10_UTIL_TEAMREDUCTIONHELPER_H_NODEPS
