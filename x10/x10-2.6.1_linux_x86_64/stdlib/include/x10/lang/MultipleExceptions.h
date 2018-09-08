#ifndef __X10_LANG_MULTIPLEEXCEPTIONS_H
#define __X10_LANG_MULTIPLEEXCEPTIONS_H

#include <x10rt.h>


#define X10_LANG_EXCEPTION_H_NODEPS
#include <x10/lang/Exception.h>
#undef X10_LANG_EXCEPTION_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class MultipleExceptions : public ::x10::lang::Exception   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* FMGL(exceptions);
    
    using ::x10::lang::CheckedThrowable::printStackTrace;
    
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* exceptions();
    void _constructor(::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* es);
    
    static ::x10::lang::MultipleExceptions* _make(::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* es);
    
    void _constructor();
    
    static ::x10::lang::MultipleExceptions* _make();
    
    void _constructor(::x10::lang::CheckedThrowable* t);
    
    static ::x10::lang::MultipleExceptions* _make(::x10::lang::CheckedThrowable* t);
    
    virtual void printStackTrace();
    static ::x10::lang::MultipleExceptions* make(::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* es);
    static ::x10::lang::MultipleExceptions* make(::x10::lang::CheckedThrowable* t);
    template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* getExceptionsOfType(
      x10_boolean deep);
    template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* getExceptionsOfType(
      );
    template<class TPMGL(T)> ::x10::lang::MultipleExceptions* filterExceptionsOfType(
      x10_boolean deep);
    template<class TPMGL(T)> ::x10::lang::MultipleExceptions* filterExceptionsOfType(
      );
    virtual ::x10::lang::MultipleExceptions* flatten();
    static void flattenAux(::x10::lang::MultipleExceptions* me,
                           ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* acc);
    template<class TPMGL(T)> void splitExceptionsOfType(x10_boolean deep,
                                                        ::x10::util::GrowableRail<TPMGL(T)>* accT,
                                                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* accNotT);
    template<class TPMGL(E)> static void _kwd__try(x10_boolean deep,
                                                   ::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler);
    template<class TPMGL(E)> static void _kwd__try(x10_boolean deep,
                                                   ::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler,
                                                   ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E)> static void _kwd__try(::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler);
    template<class TPMGL(E)> static void _kwd__try(::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler,
                                                   ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(x10_boolean deep, ::x10::lang::VoidFun_0_0* body,
                ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
                ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(x10_boolean deep, ::x10::lang::VoidFun_0_0* body,
                ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
                ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2,
                ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
                ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
                ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2,
                ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E)> static void _kwd__try(x10_boolean deep,
                                                   ::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler);
    template<class TPMGL(E)> static void _kwd__try(x10_boolean deep,
                                                   ::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler,
                                                   ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E)> static void _kwd__try(::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler);
    template<class TPMGL(E)> static void _kwd__try(::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler,
                                                   ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(x10_boolean deep, ::x10::lang::VoidFun_0_0* body,
                ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
                ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(x10_boolean deep, ::x10::lang::VoidFun_0_0* body,
                ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
                ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2,
                ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
                ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
                ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2,
                ::x10::lang::VoidFun_0_0* finallyBlock);
    virtual ::x10::lang::MultipleExceptions* x10__lang__MultipleExceptions____this__x10__lang__MultipleExceptions(
      );
    virtual void __fieldInitializers_x10_lang_MultipleExceptions(
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
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H

namespace x10 { namespace lang { 
class MultipleExceptions;
} } 

#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_NODEPS
#define X10_LANG_MULTIPLEEXCEPTIONS_H_NODEPS
#include <x10/lang/Exception.h>
#include <x10/lang/Rail.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/util/GrowableRail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/compiler/Inline.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_GENERICS
#define X10_LANG_MULTIPLEEXCEPTIONS_H_GENERICS
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1065
#define X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1065
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::lang::MultipleExceptions::getExceptionsOfType(
  x10_boolean deep) {
    
    //#line 62 "x10/lang/MultipleExceptions.x10"
    ::x10::util::GrowableRail<TPMGL(T)>* es =  (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(T)> >()) ::x10::util::GrowableRail<TPMGL(T)>());
    
    //#line 50 "x10/util/GrowableRail.x10"
    (es)->::x10::util::GrowableRail<TPMGL(T)>::_constructor(((x10_long)0ll));
    
    //#line 63 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* rail__121837 =
      this->FMGL(exceptions);
    x10_long size__121838 = (x10_long)(::x10aux::nullCheck(rail__121837)->FMGL(size));
    {
        x10_long idx__121839;
        for (idx__121839 = ((x10_long)0ll); ((idx__121839) < (size__121838));
             idx__121839 = ((idx__121839) + (((x10_long)1ll)))) {
            ::x10::lang::CheckedThrowable* e__121840 = ::x10aux::nullCheck(rail__121837)->x10::lang::template Rail< ::x10::lang::CheckedThrowable* >::__apply(
                                                         idx__121839);
            
            //#line 64 "x10/lang/MultipleExceptions.x10"
            if (::x10aux::instanceof<TPMGL(T)>(e__121840))
            {
                
                //#line 65 "x10/lang/MultipleExceptions.x10"
                es->x10::util::template GrowableRail<TPMGL(T)>::add(
                  ::x10aux::class_cast<TPMGL(T)>(e__121840));
            } else 
            //#line 66 "x10/lang/MultipleExceptions.x10"
            if ((deep && ::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(e__121840)))
            {
                
                //#line 67 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(T) >* es__121835 =
                  (__extension__ ({
                    ::x10::lang::MultipleExceptions* this__121836 =
                      ::x10aux::class_cast< ::x10::lang::MultipleExceptions*>(e__121840);
                    ::x10aux::nullCheck(this__121836)->template getExceptionsOfType< TPMGL(T) >(
                      true);
                }))
                ;
                
                //#line 68 "x10/lang/MultipleExceptions.x10"
                x10_long size__121832 = (x10_long)(::x10aux::nullCheck(es__121835)->FMGL(size));
                {
                    x10_long idx__121833;
                    for (idx__121833 = ((x10_long)0ll); ((idx__121833) < (size__121832));
                         idx__121833 = ((idx__121833) + (((x10_long)1ll))))
                    {
                        TPMGL(T) e__121834 = ::x10aux::nullCheck(es__121835)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                               idx__121833);
                        es->x10::util::template GrowableRail<TPMGL(T)>::add(
                          e__121834);
                    }
                }
                
            }
            
        }
    }
    
    //#line 72 "x10/lang/MultipleExceptions.x10"
    return es->x10::util::template GrowableRail<TPMGL(T)>::toRail();
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1065
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1066
#define X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1066
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::lang::MultipleExceptions::getExceptionsOfType(
  ) {
    return this->template getExceptionsOfType< TPMGL(T) >(
             true);
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1066
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1067
#define X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1067
template<class TPMGL(T)> ::x10::lang::MultipleExceptions*
  x10::lang::MultipleExceptions::filterExceptionsOfType(x10_boolean deep) {
    
    //#line 87 "x10/lang/MultipleExceptions.x10"
    ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* es =
       (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
    
    //#line 50 "x10/util/GrowableRail.x10"
    (es)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
      ((x10_long)0ll));
    
    //#line 88 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* rail__121843 =
      this->FMGL(exceptions);
    x10_long size__121844 = (x10_long)(::x10aux::nullCheck(rail__121843)->FMGL(size));
    {
        x10_long idx__121845;
        for (idx__121845 = ((x10_long)0ll); ((idx__121845) < (size__121844));
             idx__121845 = ((idx__121845) + (((x10_long)1ll))))
        {
            ::x10::lang::CheckedThrowable* e__121846 = ::x10aux::nullCheck(rail__121843)->x10::lang::template Rail< ::x10::lang::CheckedThrowable* >::__apply(
                                                         idx__121845);
            
            //#line 89 "x10/lang/MultipleExceptions.x10"
            if ((deep && ::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(e__121846)))
            {
                
                //#line 90 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::MultipleExceptions* me__121841 =
                  (__extension__ ({
                    ::x10::lang::MultipleExceptions* this__121842 =
                      ::x10aux::class_cast< ::x10::lang::MultipleExceptions*>(e__121846);
                    ::x10aux::nullCheck(this__121842)->template filterExceptionsOfType< TPMGL(T) >(
                      true);
                }))
                ;
                
                //#line 91 "x10/lang/MultipleExceptions.x10"
                if ((!::x10aux::struct_equals(me__121841,
                                              reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                {
                    es->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
                      reinterpret_cast< ::x10::lang::CheckedThrowable*>(me__121841));
                }
                
            } else 
            //#line 92 "x10/lang/MultipleExceptions.x10"
            if (!(::x10aux::instanceof<TPMGL(T)>(e__121846)))
            {
                
                //#line 93 "x10/lang/MultipleExceptions.x10"
                es->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
                  e__121846);
            }
            
        }
    }
    
    //#line 97 "x10/lang/MultipleExceptions.x10"
    return ::x10::lang::MultipleExceptions::make(es);
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1067
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1068
#define X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1068
template<class TPMGL(T)> ::x10::lang::MultipleExceptions*
  x10::lang::MultipleExceptions::filterExceptionsOfType() {
    return this->template filterExceptionsOfType< TPMGL(T) >(
             true);
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1068
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_splitExceptionsOfType_1071
#define X10_LANG_MULTIPLEEXCEPTIONS_H_splitExceptionsOfType_1071
template<class TPMGL(T)> void x10::lang::MultipleExceptions::splitExceptionsOfType(
  x10_boolean deep, ::x10::util::GrowableRail<TPMGL(T)>* accT,
  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* accNotT) {
    
    //#line 132 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* rail__121851 =
      this->FMGL(exceptions);
    x10_long size__121852 = (x10_long)(::x10aux::nullCheck(rail__121851)->FMGL(size));
    {
        x10_long idx__121853;
        for (idx__121853 = ((x10_long)0ll); ((idx__121853) < (size__121852));
             idx__121853 = ((idx__121853) + (((x10_long)1ll))))
        {
            ::x10::lang::CheckedThrowable* e__121854 = ::x10aux::nullCheck(rail__121851)->x10::lang::template Rail< ::x10::lang::CheckedThrowable* >::__apply(
                                                         idx__121853);
            
            //#line 133 "x10/lang/MultipleExceptions.x10"
            if ((deep && ::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(e__121854)))
            {
                
                //#line 134 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck((::x10aux::class_cast< ::x10::lang::MultipleExceptions*>(e__121854)))->template splitExceptionsOfType< TPMGL(T) >(
                  deep, accT, accNotT);
            } else 
            //#line 135 "x10/lang/MultipleExceptions.x10"
            if (::x10aux::instanceof<TPMGL(T)>(e__121854))
            {
                
                //#line 136 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(accT)->x10::util::template GrowableRail<TPMGL(T)>::add(
                  ::x10aux::class_cast<TPMGL(T)>(e__121854));
            } else {
                
                //#line 138 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(accNotT)->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
                  e__121854);
            }
            
        }
    }
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_splitExceptionsOfType_1071
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1072
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1072
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler) {
    
    //#line 223 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1073) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1073)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1073);
            {
                
                //#line 225 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E)>* exns =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 226 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 227 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                  deep, exns, others);
                
                //#line 228 "x10/lang/MultipleExceptions.x10"
                if (((exns->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>::__apply(::x10aux::nullCheck(handler), 
                      exns->x10::util::template GrowableRail<TPMGL(E)>::toRail());
                }
                
                //#line 229 "x10/lang/MultipleExceptions.x10"
                if (((others->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1072
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1074
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1074
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 250 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__121959 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1075) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1075)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1075);
                    {
                        
                        //#line 252 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E)>* exns =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 253 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 254 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                          deep, exns, others);
                        
                        //#line 255 "x10/lang/MultipleExceptions.x10"
                        if (((exns->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>::__apply(::x10aux::nullCheck(handler), 
                              exns->x10::util::template GrowableRail<TPMGL(E)>::toRail());
                        }
                        
                        //#line 256 "x10/lang/MultipleExceptions.x10"
                        if (((others->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1076) {
            {
                ::x10::lang::CheckedThrowable* formal__121960 =
                  __exc1076;
                {
                    throwable__121959 = formal__121960;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__121959, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__121959))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121959));
            }
            
        }
        
        //#line 258 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 250 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__121959, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__121959)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121959));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1074
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1077
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1077
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler) {
    
    //#line 223 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1078) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1078)) {
            ::x10::lang::MultipleExceptions* me__121855 =
              static_cast< ::x10::lang::MultipleExceptions*>(__exc1078);
            {
                
                //#line 225 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E)>* exns__121856 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns__121856)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 226 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121857 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others__121857)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 227 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me__121855)->template splitExceptionsOfType< TPMGL(E) >(
                  true, exns__121856, others__121857);
                
                //#line 228 "x10/lang/MultipleExceptions.x10"
                if (((exns__121856->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>::__apply(::x10aux::nullCheck(handler), 
                      exns__121856->x10::util::template GrowableRail<TPMGL(E)>::toRail());
                }
                
                //#line 229 "x10/lang/MultipleExceptions.x10"
                if (((others__121857->FMGL(size)) > (((x10_long)0ll))))
                {
                    if (true) {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__121857)));
                    }
                    
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1077
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1079
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1079
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 250 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__121962 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1080) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1080)) {
                    ::x10::lang::MultipleExceptions* me__121860 =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1080);
                    {
                        
                        //#line 252 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E)>* exns__121861 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns__121861)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 253 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121862 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others__121862)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 254 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me__121860)->template splitExceptionsOfType< TPMGL(E) >(
                          true, exns__121861, others__121862);
                        
                        //#line 255 "x10/lang/MultipleExceptions.x10"
                        if (((exns__121861->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>::__apply(::x10aux::nullCheck(handler), 
                              exns__121861->x10::util::template GrowableRail<TPMGL(E)>::toRail());
                        }
                        
                        //#line 256 "x10/lang/MultipleExceptions.x10"
                        if (((others__121862->FMGL(size)) > (((x10_long)0ll))))
                        {
                            if (true) {
                                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__121862)));
                            }
                            
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1081) {
            {
                ::x10::lang::CheckedThrowable* formal__121963 =
                  __exc1081;
                {
                    throwable__121962 = formal__121963;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__121962, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__121962))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121962));
            }
            
        }
        
        //#line 258 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 250 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__121962, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__121962)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121962));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1079
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1082
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1082
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2) {
    
    //#line 314 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1083) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1083)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1083);
            {
                
                //#line 316 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns1)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 317 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others1)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 318 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                  deep, exns1, others1);
                
                //#line 319 "x10/lang/MultipleExceptions.x10"
                if (((exns1->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>::__apply(::x10aux::nullCheck(handler1), 
                      exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail());
                }
                
                //#line 320 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns2)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 321 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others2)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 322 "x10/lang/MultipleExceptions.x10"
                (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                  deep, exns2, others2);
                
                //#line 323 "x10/lang/MultipleExceptions.x10"
                if (((exns2->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>::__apply(::x10aux::nullCheck(handler2), 
                      exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail());
                }
                
                //#line 324 "x10/lang/MultipleExceptions.x10"
                if (((others2->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1082
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1084
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1084
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 348 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__121965 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1085) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1085)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1085);
                    {
                        
                        //#line 350 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns1)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 351 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others1)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 352 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                          deep, exns1, others1);
                        
                        //#line 353 "x10/lang/MultipleExceptions.x10"
                        if (((exns1->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>::__apply(::x10aux::nullCheck(handler1), 
                              exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail());
                        }
                        
                        //#line 354 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns2)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 355 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others2)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 356 "x10/lang/MultipleExceptions.x10"
                        (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                          deep, exns2, others2);
                        
                        //#line 357 "x10/lang/MultipleExceptions.x10"
                        if (((exns2->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>::__apply(::x10aux::nullCheck(handler2), 
                              exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail());
                        }
                        
                        //#line 358 "x10/lang/MultipleExceptions.x10"
                        if (((others2->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1086) {
            {
                ::x10::lang::CheckedThrowable* formal__121966 =
                  __exc1086;
                {
                    throwable__121965 = formal__121966;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__121965, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__121965))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121965));
            }
            
        }
        
        //#line 359 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 348 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__121965, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__121965)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121965));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1084
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1087
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1087
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2) {
    
    //#line 314 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1088) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1088)) {
            ::x10::lang::MultipleExceptions* me__121866 =
              static_cast< ::x10::lang::MultipleExceptions*>(__exc1088);
            {
                
                //#line 316 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E1)>* exns__121867 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns__121867)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 317 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121868 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others__121868)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 318 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me__121866)->template splitExceptionsOfType< TPMGL(E1) >(
                  true, exns__121867, others__121868);
                
                //#line 319 "x10/lang/MultipleExceptions.x10"
                if (((exns__121867->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>::__apply(::x10aux::nullCheck(handler1), 
                      exns__121867->x10::util::template GrowableRail<TPMGL(E1)>::toRail());
                }
                
                //#line 320 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E2)>* exns__121869 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns__121869)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 321 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121870 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others__121870)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 322 "x10/lang/MultipleExceptions.x10"
                (::x10::lang::MultipleExceptions::_make(others__121868))->template splitExceptionsOfType< TPMGL(E2) >(
                  true, exns__121869, others__121870);
                
                //#line 323 "x10/lang/MultipleExceptions.x10"
                if (((exns__121869->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>::__apply(::x10aux::nullCheck(handler2), 
                      exns__121869->x10::util::template GrowableRail<TPMGL(E2)>::toRail());
                }
                
                //#line 324 "x10/lang/MultipleExceptions.x10"
                if (((others__121870->FMGL(size)) > (((x10_long)0ll))))
                {
                    if (true) {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__121870)));
                    }
                    
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1087
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1089
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1089
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 348 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__121968 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1090) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1090)) {
                    ::x10::lang::MultipleExceptions* me__121874 =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1090);
                    {
                        
                        //#line 350 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E1)>* exns__121875 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns__121875)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 351 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121876 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others__121876)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 352 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me__121874)->template splitExceptionsOfType< TPMGL(E1) >(
                          true, exns__121875, others__121876);
                        
                        //#line 353 "x10/lang/MultipleExceptions.x10"
                        if (((exns__121875->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>::__apply(::x10aux::nullCheck(handler1), 
                              exns__121875->x10::util::template GrowableRail<TPMGL(E1)>::toRail());
                        }
                        
                        //#line 354 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E2)>* exns__121877 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns__121877)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 355 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121878 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others__121878)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 356 "x10/lang/MultipleExceptions.x10"
                        (::x10::lang::MultipleExceptions::_make(others__121876))->template splitExceptionsOfType< TPMGL(E2) >(
                          true, exns__121877, others__121878);
                        
                        //#line 357 "x10/lang/MultipleExceptions.x10"
                        if (((exns__121877->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>::__apply(::x10aux::nullCheck(handler2), 
                              exns__121877->x10::util::template GrowableRail<TPMGL(E2)>::toRail());
                        }
                        
                        //#line 358 "x10/lang/MultipleExceptions.x10"
                        if (((others__121878->FMGL(size)) > (((x10_long)0ll))))
                        {
                            if (true) {
                                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__121878)));
                            }
                            
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1091) {
            {
                ::x10::lang::CheckedThrowable* formal__121969 =
                  __exc1091;
                {
                    throwable__121968 = formal__121969;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__121968, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__121968))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121968));
            }
            
        }
        
        //#line 359 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 348 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__121968, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__121968)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121968));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1089
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1092
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1092
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler) {
    
    //#line 431 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1093) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1093)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1093);
            {
                
                //#line 433 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E)>* exns =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 434 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 435 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                  deep, exns, others);
                
                //#line 436 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E) >* rail__121883 =
                  exns->x10::util::template GrowableRail<TPMGL(E)>::toRail();
                x10_long size__121884 = (x10_long)(::x10aux::nullCheck(rail__121883)->FMGL(size));
                {
                    x10_long idx__121885;
                    for (idx__121885 = ((x10_long)0ll); ((idx__121885) < (size__121884));
                         idx__121885 = ((idx__121885) + (((x10_long)1ll))))
                    {
                        TPMGL(E) e__121886 = ::x10aux::nullCheck(rail__121883)->x10::lang::template Rail< TPMGL(E) >::__apply(
                                               idx__121885);
                        
                        //#line 437 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E)>::__apply(::x10aux::nullCheck(handler), 
                          e__121886);
                    }
                }
                
                //#line 439 "x10/lang/MultipleExceptions.x10"
                if (((others->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1092
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1094
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1094
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 459 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__121971 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1095) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1095)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1095);
                    {
                        
                        //#line 461 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E)>* exns =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 462 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 463 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                          deep, exns, others);
                        
                        //#line 464 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E) >* rail__121887 =
                          exns->x10::util::template GrowableRail<TPMGL(E)>::toRail();
                        x10_long size__121888 = (x10_long)(::x10aux::nullCheck(rail__121887)->FMGL(size));
                        {
                            x10_long idx__121889;
                            for (idx__121889 = ((x10_long)0ll);
                                 ((idx__121889) < (size__121888));
                                 idx__121889 = ((idx__121889) + (((x10_long)1ll))))
                            {
                                TPMGL(E) e__121890 = ::x10aux::nullCheck(rail__121887)->x10::lang::template Rail< TPMGL(E) >::__apply(
                                                       idx__121889);
                                
                                //#line 465 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E)>::__apply(::x10aux::nullCheck(handler), 
                                  e__121890);
                            }
                        }
                        
                        //#line 467 "x10/lang/MultipleExceptions.x10"
                        if (((others->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1096) {
            {
                ::x10::lang::CheckedThrowable* formal__121972 =
                  __exc1096;
                {
                    throwable__121971 = formal__121972;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__121971, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__121971))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121971));
            }
            
        }
        
        //#line 469 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 459 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__121971, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__121971)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121971));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1094
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1097
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1097
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler) {
    
    //#line 431 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1098) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1098)) {
            ::x10::lang::MultipleExceptions* me__121895 =
              static_cast< ::x10::lang::MultipleExceptions*>(__exc1098);
            {
                
                //#line 433 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E)>* exns__121896 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns__121896)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 434 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121897 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others__121897)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 435 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me__121895)->template splitExceptionsOfType< TPMGL(E) >(
                  true, exns__121896, others__121897);
                
                //#line 436 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E) >* rail__121891 =
                  exns__121896->x10::util::template GrowableRail<TPMGL(E)>::toRail();
                x10_long size__121892 = (x10_long)(::x10aux::nullCheck(rail__121891)->FMGL(size));
                {
                    x10_long idx__121893;
                    for (idx__121893 = ((x10_long)0ll); ((idx__121893) < (size__121892));
                         idx__121893 = ((idx__121893) + (((x10_long)1ll))))
                    {
                        TPMGL(E) e__121894 = ::x10aux::nullCheck(rail__121891)->x10::lang::template Rail< TPMGL(E) >::__apply(
                                               idx__121893);
                        
                        //#line 437 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E)>::__apply(::x10aux::nullCheck(handler), 
                          e__121894);
                    }
                }
                
                //#line 439 "x10/lang/MultipleExceptions.x10"
                if (((others__121897->FMGL(size)) > (((x10_long)0ll))))
                {
                    if (true) {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__121897)));
                    }
                    
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1097
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1099
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1099
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 459 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__121974 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1100) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1100)) {
                    ::x10::lang::MultipleExceptions* me__121904 =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1100);
                    {
                        
                        //#line 461 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E)>* exns__121905 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns__121905)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 462 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121906 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others__121906)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 463 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me__121904)->template splitExceptionsOfType< TPMGL(E) >(
                          true, exns__121905, others__121906);
                        
                        //#line 464 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E) >* rail__121900 =
                          exns__121905->x10::util::template GrowableRail<TPMGL(E)>::toRail();
                        x10_long size__121901 = (x10_long)(::x10aux::nullCheck(rail__121900)->FMGL(size));
                        {
                            x10_long idx__121902;
                            for (idx__121902 = ((x10_long)0ll);
                                 ((idx__121902) < (size__121901));
                                 idx__121902 = ((idx__121902) + (((x10_long)1ll))))
                            {
                                TPMGL(E) e__121903 = ::x10aux::nullCheck(rail__121900)->x10::lang::template Rail< TPMGL(E) >::__apply(
                                                       idx__121902);
                                
                                //#line 465 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E)>::__apply(::x10aux::nullCheck(handler), 
                                  e__121903);
                            }
                        }
                        
                        //#line 467 "x10/lang/MultipleExceptions.x10"
                        if (((others__121906->FMGL(size)) > (((x10_long)0ll))))
                        {
                            if (true) {
                                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__121906)));
                            }
                            
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1101) {
            {
                ::x10::lang::CheckedThrowable* formal__121975 =
                  __exc1101;
                {
                    throwable__121974 = formal__121975;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__121974, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__121974))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121974));
            }
            
        }
        
        //#line 469 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 459 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__121974, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__121974)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121974));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1099
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1102
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1102
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2) {
    
    //#line 524 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1103) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1103)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1103);
            {
                
                //#line 526 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns1)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 527 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others1)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 528 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                  deep, exns1, others1);
                
                //#line 529 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E1) >* rail__121910 =
                  exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail();
                x10_long size__121911 = (x10_long)(::x10aux::nullCheck(rail__121910)->FMGL(size));
                {
                    x10_long idx__121912;
                    for (idx__121912 = ((x10_long)0ll); ((idx__121912) < (size__121911));
                         idx__121912 = ((idx__121912) + (((x10_long)1ll))))
                    {
                        TPMGL(E1) e__121913 = ::x10aux::nullCheck(rail__121910)->x10::lang::template Rail< TPMGL(E1) >::__apply(
                                                idx__121912);
                        
                        //#line 530 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E1)>::__apply(::x10aux::nullCheck(handler1), 
                          e__121913);
                    }
                }
                
                //#line 532 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns2)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 533 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others2)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 534 "x10/lang/MultipleExceptions.x10"
                (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                  deep, exns2, others2);
                
                //#line 535 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E2) >* rail__121914 =
                  exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail();
                x10_long size__121915 = (x10_long)(::x10aux::nullCheck(rail__121914)->FMGL(size));
                {
                    x10_long idx__121916;
                    for (idx__121916 = ((x10_long)0ll); ((idx__121916) < (size__121915));
                         idx__121916 = ((idx__121916) + (((x10_long)1ll))))
                    {
                        TPMGL(E2) e__121917 = ::x10aux::nullCheck(rail__121914)->x10::lang::template Rail< TPMGL(E2) >::__apply(
                                                idx__121916);
                        
                        //#line 536 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E2)>::__apply(::x10aux::nullCheck(handler2), 
                          e__121917);
                    }
                }
                
                //#line 538 "x10/lang/MultipleExceptions.x10"
                if (((others2->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1102
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1104
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1104
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2, ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 561 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__121977 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1105) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1105)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1105);
                    {
                        
                        //#line 563 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns1)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 564 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others1)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 565 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                          deep, exns1, others1);
                        
                        //#line 566 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E1) >* rail__121918 =
                          exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail();
                        x10_long size__121919 = (x10_long)(::x10aux::nullCheck(rail__121918)->FMGL(size));
                        {
                            x10_long idx__121920;
                            for (idx__121920 = ((x10_long)0ll);
                                 ((idx__121920) < (size__121919));
                                 idx__121920 = ((idx__121920) + (((x10_long)1ll))))
                            {
                                TPMGL(E1) e__121921 = ::x10aux::nullCheck(rail__121918)->x10::lang::template Rail< TPMGL(E1) >::__apply(
                                                        idx__121920);
                                
                                //#line 567 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E1)>::__apply(::x10aux::nullCheck(handler1), 
                                  e__121921);
                            }
                        }
                        
                        //#line 569 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns2)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 570 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others2)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 571 "x10/lang/MultipleExceptions.x10"
                        (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                          deep, exns2, others2);
                        
                        //#line 572 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E2) >* rail__121922 =
                          exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail();
                        x10_long size__121923 = (x10_long)(::x10aux::nullCheck(rail__121922)->FMGL(size));
                        {
                            x10_long idx__121924;
                            for (idx__121924 = ((x10_long)0ll);
                                 ((idx__121924) < (size__121923));
                                 idx__121924 = ((idx__121924) + (((x10_long)1ll))))
                            {
                                TPMGL(E2) e__121925 = ::x10aux::nullCheck(rail__121922)->x10::lang::template Rail< TPMGL(E2) >::__apply(
                                                        idx__121924);
                                
                                //#line 573 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E2)>::__apply(::x10aux::nullCheck(handler2), 
                                  e__121925);
                            }
                        }
                        
                        //#line 575 "x10/lang/MultipleExceptions.x10"
                        if (((others2->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1106) {
            {
                ::x10::lang::CheckedThrowable* formal__121978 =
                  __exc1106;
                {
                    throwable__121977 = formal__121978;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__121977, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__121977))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121977));
            }
            
        }
        
        //#line 576 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 561 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__121977, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__121977)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121977));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1104
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1107
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1107
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2) {
    
    //#line 524 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1108) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1108)) {
            ::x10::lang::MultipleExceptions* me__121934 =
              static_cast< ::x10::lang::MultipleExceptions*>(__exc1108);
            {
                
                //#line 526 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E1)>* exns__121935 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns__121935)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 527 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121936 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others__121936)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 528 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me__121934)->template splitExceptionsOfType< TPMGL(E1) >(
                  true, exns__121935, others__121936);
                
                //#line 529 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E1) >* rail__121926 =
                  exns__121935->x10::util::template GrowableRail<TPMGL(E1)>::toRail();
                x10_long size__121927 = (x10_long)(::x10aux::nullCheck(rail__121926)->FMGL(size));
                {
                    x10_long idx__121928;
                    for (idx__121928 = ((x10_long)0ll); ((idx__121928) < (size__121927));
                         idx__121928 = ((idx__121928) + (((x10_long)1ll))))
                    {
                        TPMGL(E1) e__121929 = ::x10aux::nullCheck(rail__121926)->x10::lang::template Rail< TPMGL(E1) >::__apply(
                                                idx__121928);
                        
                        //#line 530 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E1)>::__apply(::x10aux::nullCheck(handler1), 
                          e__121929);
                    }
                }
                
                //#line 532 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E2)>* exns__121937 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns__121937)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 533 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121938 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others__121938)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 534 "x10/lang/MultipleExceptions.x10"
                (::x10::lang::MultipleExceptions::_make(others__121936))->template splitExceptionsOfType< TPMGL(E2) >(
                  true, exns__121937, others__121938);
                
                //#line 535 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E2) >* rail__121930 =
                  exns__121937->x10::util::template GrowableRail<TPMGL(E2)>::toRail();
                x10_long size__121931 = (x10_long)(::x10aux::nullCheck(rail__121930)->FMGL(size));
                {
                    x10_long idx__121932;
                    for (idx__121932 = ((x10_long)0ll); ((idx__121932) < (size__121931));
                         idx__121932 = ((idx__121932) + (((x10_long)1ll))))
                    {
                        TPMGL(E2) e__121933 = ::x10aux::nullCheck(rail__121930)->x10::lang::template Rail< TPMGL(E2) >::__apply(
                                                idx__121932);
                        
                        //#line 536 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E2)>::__apply(::x10aux::nullCheck(handler2), 
                          e__121933);
                    }
                }
                
                //#line 538 "x10/lang/MultipleExceptions.x10"
                if (((others__121938->FMGL(size)) > (((x10_long)0ll))))
                {
                    if (true) {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__121938)));
                    }
                    
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1107
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1109
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1109
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2, ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 561 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__121980 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1110) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1110)) {
                    ::x10::lang::MultipleExceptions* me__121950 =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1110);
                    {
                        
                        //#line 563 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E1)>* exns__121951 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns__121951)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 564 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121952 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others__121952)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 565 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me__121950)->template splitExceptionsOfType< TPMGL(E1) >(
                          true, exns__121951, others__121952);
                        
                        //#line 566 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E1) >* rail__121942 =
                          exns__121951->x10::util::template GrowableRail<TPMGL(E1)>::toRail();
                        x10_long size__121943 = (x10_long)(::x10aux::nullCheck(rail__121942)->FMGL(size));
                        {
                            x10_long idx__121944;
                            for (idx__121944 = ((x10_long)0ll);
                                 ((idx__121944) < (size__121943));
                                 idx__121944 = ((idx__121944) + (((x10_long)1ll))))
                            {
                                TPMGL(E1) e__121945 = ::x10aux::nullCheck(rail__121942)->x10::lang::template Rail< TPMGL(E1) >::__apply(
                                                        idx__121944);
                                
                                //#line 567 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E1)>::__apply(::x10aux::nullCheck(handler1), 
                                  e__121945);
                            }
                        }
                        
                        //#line 569 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E2)>* exns__121953 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns__121953)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 570 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121954 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others__121954)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 571 "x10/lang/MultipleExceptions.x10"
                        (::x10::lang::MultipleExceptions::_make(others__121952))->template splitExceptionsOfType< TPMGL(E2) >(
                          true, exns__121953, others__121954);
                        
                        //#line 572 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E2) >* rail__121946 =
                          exns__121953->x10::util::template GrowableRail<TPMGL(E2)>::toRail();
                        x10_long size__121947 = (x10_long)(::x10aux::nullCheck(rail__121946)->FMGL(size));
                        {
                            x10_long idx__121948;
                            for (idx__121948 = ((x10_long)0ll);
                                 ((idx__121948) < (size__121947));
                                 idx__121948 = ((idx__121948) + (((x10_long)1ll))))
                            {
                                TPMGL(E2) e__121949 = ::x10aux::nullCheck(rail__121946)->x10::lang::template Rail< TPMGL(E2) >::__apply(
                                                        idx__121948);
                                
                                //#line 573 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E2)>::__apply(::x10aux::nullCheck(handler2), 
                                  e__121949);
                            }
                        }
                        
                        //#line 575 "x10/lang/MultipleExceptions.x10"
                        if (((others__121954->FMGL(size)) > (((x10_long)0ll))))
                        {
                            if (true) {
                                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__121954)));
                            }
                            
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1111) {
            {
                ::x10::lang::CheckedThrowable* formal__121981 =
                  __exc1111;
                {
                    throwable__121980 = formal__121981;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__121980, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__121980))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121980));
            }
            
        }
        
        //#line 576 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 561 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__121980, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__121980)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__121980));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1109
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_GENERICS
#endif // __X10_LANG_MULTIPLEEXCEPTIONS_H_NODEPS
