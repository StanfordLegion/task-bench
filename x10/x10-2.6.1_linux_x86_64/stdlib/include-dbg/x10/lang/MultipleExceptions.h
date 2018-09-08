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
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1057
#define X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1057
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::lang::MultipleExceptions::getExceptionsOfType(
  x10_boolean deep) {
    
    //#line 62 "x10/lang/MultipleExceptions.x10"
    ::x10::util::GrowableRail<TPMGL(T)>* es = ::x10::util::GrowableRail<TPMGL(T)>::_make();
    
    //#line 63 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* rail__107101 =
      this->FMGL(exceptions);
    x10_long size__107102 = (x10_long)(::x10aux::nullCheck(rail__107101)->FMGL(size));
    {
        x10_long idx__107103;
        for (idx__107103 = ((x10_long)0ll); ((idx__107103) < (size__107102));
             idx__107103 = ((idx__107103) + (((x10_long)1ll)))) {
            ::x10::lang::CheckedThrowable* e__107104 = ::x10aux::nullCheck(rail__107101)->x10::lang::template Rail< ::x10::lang::CheckedThrowable* >::__apply(
                                                         idx__107103);
            
            //#line 64 "x10/lang/MultipleExceptions.x10"
            if (::x10aux::instanceof<TPMGL(T)>(e__107104))
            {
                
                //#line 65 "x10/lang/MultipleExceptions.x10"
                es->x10::util::template GrowableRail<TPMGL(T)>::add(
                  ::x10aux::class_cast<TPMGL(T)>(e__107104));
            } else 
            //#line 66 "x10/lang/MultipleExceptions.x10"
            if ((deep && ::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(e__107104)))
            {
                
                //#line 67 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(T) >* es__107100 =
                  ::x10aux::nullCheck((::x10aux::class_cast< ::x10::lang::MultipleExceptions*>(e__107104)))->template getExceptionsOfType< TPMGL(T) >();
                
                //#line 68 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(T) >* rail__107096 =
                  es__107100;
                x10_long size__107097 = (x10_long)(::x10aux::nullCheck(rail__107096)->FMGL(size));
                {
                    x10_long idx__107098;
                    for (idx__107098 = ((x10_long)0ll); ((idx__107098) < (size__107097));
                         idx__107098 = ((idx__107098) + (((x10_long)1ll))))
                    {
                        TPMGL(T) e__107099 = ::x10aux::nullCheck(rail__107096)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                               idx__107098);
                        es->x10::util::template GrowableRail<TPMGL(T)>::add(
                          e__107099);
                    }
                }
                
            }
            
        }
    }
    
    //#line 72 "x10/lang/MultipleExceptions.x10"
    return es->x10::util::template GrowableRail<TPMGL(T)>::toRail();
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1057
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1058
#define X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1058
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::lang::MultipleExceptions::getExceptionsOfType(
  ) {
    return this->template getExceptionsOfType< TPMGL(T) >(
             true);
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1058
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1059
#define X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1059
template<class TPMGL(T)> ::x10::lang::MultipleExceptions*
  x10::lang::MultipleExceptions::filterExceptionsOfType(x10_boolean deep) {
    
    //#line 87 "x10/lang/MultipleExceptions.x10"
    ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* es =
      ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
    
    //#line 88 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* rail__107106 =
      this->FMGL(exceptions);
    x10_long size__107107 = (x10_long)(::x10aux::nullCheck(rail__107106)->FMGL(size));
    {
        x10_long idx__107108;
        for (idx__107108 = ((x10_long)0ll); ((idx__107108) < (size__107107));
             idx__107108 = ((idx__107108) + (((x10_long)1ll))))
        {
            ::x10::lang::CheckedThrowable* e__107109 = ::x10aux::nullCheck(rail__107106)->x10::lang::template Rail< ::x10::lang::CheckedThrowable* >::__apply(
                                                         idx__107108);
            
            //#line 89 "x10/lang/MultipleExceptions.x10"
            if ((deep && ::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(e__107109)))
            {
                
                //#line 90 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::MultipleExceptions* me__107105 =
                  ::x10aux::nullCheck((::x10aux::class_cast< ::x10::lang::MultipleExceptions*>(e__107109)))->template filterExceptionsOfType< TPMGL(T) >();
                
                //#line 91 "x10/lang/MultipleExceptions.x10"
                if ((!::x10aux::struct_equals(me__107105,
                                              reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                {
                    es->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
                      reinterpret_cast< ::x10::lang::CheckedThrowable*>(me__107105));
                }
                
            } else 
            //#line 92 "x10/lang/MultipleExceptions.x10"
            if (!(::x10aux::instanceof<TPMGL(T)>(e__107109)))
            {
                
                //#line 93 "x10/lang/MultipleExceptions.x10"
                es->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
                  e__107109);
            }
            
        }
    }
    
    //#line 97 "x10/lang/MultipleExceptions.x10"
    return ::x10::lang::MultipleExceptions::make(es);
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1059
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1060
#define X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1060
template<class TPMGL(T)> ::x10::lang::MultipleExceptions*
  x10::lang::MultipleExceptions::filterExceptionsOfType() {
    return this->template filterExceptionsOfType< TPMGL(T) >(
             true);
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1060
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_splitExceptionsOfType_1063
#define X10_LANG_MULTIPLEEXCEPTIONS_H_splitExceptionsOfType_1063
template<class TPMGL(T)> void x10::lang::MultipleExceptions::splitExceptionsOfType(
  x10_boolean deep, ::x10::util::GrowableRail<TPMGL(T)>* accT,
  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* accNotT) {
    
    //#line 132 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* rail__107114 =
      this->FMGL(exceptions);
    x10_long size__107115 = (x10_long)(::x10aux::nullCheck(rail__107114)->FMGL(size));
    {
        x10_long idx__107116;
        for (idx__107116 = ((x10_long)0ll); ((idx__107116) < (size__107115));
             idx__107116 = ((idx__107116) + (((x10_long)1ll))))
        {
            ::x10::lang::CheckedThrowable* e__107117 = ::x10aux::nullCheck(rail__107114)->x10::lang::template Rail< ::x10::lang::CheckedThrowable* >::__apply(
                                                         idx__107116);
            
            //#line 133 "x10/lang/MultipleExceptions.x10"
            if ((deep && ::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(e__107117)))
            {
                
                //#line 134 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck((::x10aux::class_cast< ::x10::lang::MultipleExceptions*>(e__107117)))->template splitExceptionsOfType< TPMGL(T) >(
                  deep, accT, accNotT);
            } else 
            //#line 135 "x10/lang/MultipleExceptions.x10"
            if (::x10aux::instanceof<TPMGL(T)>(e__107117))
            {
                
                //#line 136 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(accT)->x10::util::template GrowableRail<TPMGL(T)>::add(
                  ::x10aux::class_cast<TPMGL(T)>(e__107117));
            } else {
                
                //#line 138 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(accNotT)->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
                  e__107117);
            }
            
        }
    }
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_splitExceptionsOfType_1063
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1064
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1064
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler) {
    
    //#line 223 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1065) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1065)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1065);
            {
                
                //#line 225 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E)>* exns =
                  ::x10::util::GrowableRail<TPMGL(E)>::_make();
                
                //#line 226 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                
                //#line 227 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                  deep, exns, others);
                
                //#line 228 "x10/lang/MultipleExceptions.x10"
                if (((exns->x10::util::template GrowableRail<TPMGL(E)>::size()) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>::__apply(::x10aux::nullCheck(handler), 
                      exns->x10::util::template GrowableRail<TPMGL(E)>::toRail());
                }
                
                //#line 229 "x10/lang/MultipleExceptions.x10"
                if (((others->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1064
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1066
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1066
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 250 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__107142 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1067) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1067)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1067);
                    {
                        
                        //#line 252 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E)>* exns =
                          ::x10::util::GrowableRail<TPMGL(E)>::_make();
                        
                        //#line 253 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                          ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                        
                        //#line 254 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                          deep, exns, others);
                        
                        //#line 255 "x10/lang/MultipleExceptions.x10"
                        if (((exns->x10::util::template GrowableRail<TPMGL(E)>::size()) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>::__apply(::x10aux::nullCheck(handler), 
                              exns->x10::util::template GrowableRail<TPMGL(E)>::toRail());
                        }
                        
                        //#line 256 "x10/lang/MultipleExceptions.x10"
                        if (((others->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1068) {
            {
                ::x10::lang::CheckedThrowable* formal__107143 =
                  __exc1068;
                {
                    throwable__107142 = formal__107143;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__107142, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__107142))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107142));
            }
            
        }
        
        //#line 258 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 250 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__107142, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__107142)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107142));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1066
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1069
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1069
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler) {
    
    //#line 274 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E) >(
      true, body, handler);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1069
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1070
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1070
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    
    //#line 292 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E) >(
      true, body, handler, finallyBlock);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1070
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1071
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1071
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2) {
    
    //#line 314 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1072) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1072)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1072);
            {
                
                //#line 316 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                  ::x10::util::GrowableRail<TPMGL(E1)>::_make();
                
                //#line 317 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                
                //#line 318 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                  deep, exns1, others1);
                
                //#line 319 "x10/lang/MultipleExceptions.x10"
                if (((exns1->x10::util::template GrowableRail<TPMGL(E1)>::size()) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>::__apply(::x10aux::nullCheck(handler1), 
                      exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail());
                }
                
                //#line 320 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                  ::x10::util::GrowableRail<TPMGL(E2)>::_make();
                
                //#line 321 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                
                //#line 322 "x10/lang/MultipleExceptions.x10"
                (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                  deep, exns2, others2);
                
                //#line 323 "x10/lang/MultipleExceptions.x10"
                if (((exns2->x10::util::template GrowableRail<TPMGL(E2)>::size()) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>::__apply(::x10aux::nullCheck(handler2), 
                      exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail());
                }
                
                //#line 324 "x10/lang/MultipleExceptions.x10"
                if (((others2->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1071
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1073
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1073
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 348 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__107145 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1074) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1074)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1074);
                    {
                        
                        //#line 350 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                          ::x10::util::GrowableRail<TPMGL(E1)>::_make();
                        
                        //#line 351 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                          ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                        
                        //#line 352 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                          deep, exns1, others1);
                        
                        //#line 353 "x10/lang/MultipleExceptions.x10"
                        if (((exns1->x10::util::template GrowableRail<TPMGL(E1)>::size()) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>::__apply(::x10aux::nullCheck(handler1), 
                              exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail());
                        }
                        
                        //#line 354 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                          ::x10::util::GrowableRail<TPMGL(E2)>::_make();
                        
                        //#line 355 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                          ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                        
                        //#line 356 "x10/lang/MultipleExceptions.x10"
                        (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                          deep, exns2, others2);
                        
                        //#line 357 "x10/lang/MultipleExceptions.x10"
                        if (((exns2->x10::util::template GrowableRail<TPMGL(E2)>::size()) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>::__apply(::x10aux::nullCheck(handler2), 
                              exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail());
                        }
                        
                        //#line 358 "x10/lang/MultipleExceptions.x10"
                        if (((others2->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1075) {
            {
                ::x10::lang::CheckedThrowable* formal__107146 =
                  __exc1075;
                {
                    throwable__107145 = formal__107146;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__107145, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__107145))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107145));
            }
            
        }
        
        //#line 359 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 348 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__107145, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__107145)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107145));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1073
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1076
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1076
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2) {
    
    //#line 378 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E1),
    TPMGL(E2) >(true, body, handler1, handler2);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1076
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1077
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1077
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    
    //#line 398 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E1),
    TPMGL(E2) >(true, body, handler1, handler2, finallyBlock);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1077
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1078
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1078
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler) {
    
    //#line 431 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1079) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1079)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1079);
            {
                
                //#line 433 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E)>* exns =
                  ::x10::util::GrowableRail<TPMGL(E)>::_make();
                
                //#line 434 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                
                //#line 435 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                  deep, exns, others);
                
                //#line 436 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E) >* rail__107118 =
                  exns->x10::util::template GrowableRail<TPMGL(E)>::toRail();
                x10_long size__107119 = (x10_long)(::x10aux::nullCheck(rail__107118)->FMGL(size));
                {
                    x10_long idx__107120;
                    for (idx__107120 = ((x10_long)0ll); ((idx__107120) < (size__107119));
                         idx__107120 = ((idx__107120) + (((x10_long)1ll))))
                    {
                        TPMGL(E) e__107121 = ::x10aux::nullCheck(rail__107118)->x10::lang::template Rail< TPMGL(E) >::__apply(
                                               idx__107120);
                        
                        //#line 437 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E)>::__apply(::x10aux::nullCheck(handler), 
                          e__107121);
                    }
                }
                
                //#line 439 "x10/lang/MultipleExceptions.x10"
                if (((others->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1078
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1080
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1080
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 459 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__107148 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1081) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1081)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1081);
                    {
                        
                        //#line 461 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E)>* exns =
                          ::x10::util::GrowableRail<TPMGL(E)>::_make();
                        
                        //#line 462 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                          ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                        
                        //#line 463 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                          deep, exns, others);
                        
                        //#line 464 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E) >* rail__107122 =
                          exns->x10::util::template GrowableRail<TPMGL(E)>::toRail();
                        x10_long size__107123 = (x10_long)(::x10aux::nullCheck(rail__107122)->FMGL(size));
                        {
                            x10_long idx__107124;
                            for (idx__107124 = ((x10_long)0ll);
                                 ((idx__107124) < (size__107123));
                                 idx__107124 = ((idx__107124) + (((x10_long)1ll))))
                            {
                                TPMGL(E) e__107125 = ::x10aux::nullCheck(rail__107122)->x10::lang::template Rail< TPMGL(E) >::__apply(
                                                       idx__107124);
                                
                                //#line 465 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E)>::__apply(::x10aux::nullCheck(handler), 
                                  e__107125);
                            }
                        }
                        
                        //#line 467 "x10/lang/MultipleExceptions.x10"
                        if (((others->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1082) {
            {
                ::x10::lang::CheckedThrowable* formal__107149 =
                  __exc1082;
                {
                    throwable__107148 = formal__107149;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__107148, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__107148))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107148));
            }
            
        }
        
        //#line 469 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 459 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__107148, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__107148)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107148));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1080
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1083
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1083
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler) {
    
    //#line 485 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E) >(
      true, body, handler);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1083
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1084
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1084
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    
    //#line 503 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E) >(
      true, body, handler, finallyBlock);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1084
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1085
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1085
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2) {
    
    //#line 524 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1086) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1086)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1086);
            {
                
                //#line 526 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                  ::x10::util::GrowableRail<TPMGL(E1)>::_make();
                
                //#line 527 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                
                //#line 528 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                  deep, exns1, others1);
                
                //#line 529 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E1) >* rail__107126 =
                  exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail();
                x10_long size__107127 = (x10_long)(::x10aux::nullCheck(rail__107126)->FMGL(size));
                {
                    x10_long idx__107128;
                    for (idx__107128 = ((x10_long)0ll); ((idx__107128) < (size__107127));
                         idx__107128 = ((idx__107128) + (((x10_long)1ll))))
                    {
                        TPMGL(E1) e__107129 = ::x10aux::nullCheck(rail__107126)->x10::lang::template Rail< TPMGL(E1) >::__apply(
                                                idx__107128);
                        
                        //#line 530 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E1)>::__apply(::x10aux::nullCheck(handler1), 
                          e__107129);
                    }
                }
                
                //#line 532 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                  ::x10::util::GrowableRail<TPMGL(E2)>::_make();
                
                //#line 533 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                
                //#line 534 "x10/lang/MultipleExceptions.x10"
                (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                  deep, exns2, others2);
                
                //#line 535 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E2) >* rail__107130 =
                  exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail();
                x10_long size__107131 = (x10_long)(::x10aux::nullCheck(rail__107130)->FMGL(size));
                {
                    x10_long idx__107132;
                    for (idx__107132 = ((x10_long)0ll); ((idx__107132) < (size__107131));
                         idx__107132 = ((idx__107132) + (((x10_long)1ll))))
                    {
                        TPMGL(E2) e__107133 = ::x10aux::nullCheck(rail__107130)->x10::lang::template Rail< TPMGL(E2) >::__apply(
                                                idx__107132);
                        
                        //#line 536 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E2)>::__apply(::x10aux::nullCheck(handler2), 
                          e__107133);
                    }
                }
                
                //#line 538 "x10/lang/MultipleExceptions.x10"
                if (((others2->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1085
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1087
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1087
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2, ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 561 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__107151 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1088) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1088)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1088);
                    {
                        
                        //#line 563 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                          ::x10::util::GrowableRail<TPMGL(E1)>::_make();
                        
                        //#line 564 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                          ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                        
                        //#line 565 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                          deep, exns1, others1);
                        
                        //#line 566 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E1) >* rail__107134 =
                          exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail();
                        x10_long size__107135 = (x10_long)(::x10aux::nullCheck(rail__107134)->FMGL(size));
                        {
                            x10_long idx__107136;
                            for (idx__107136 = ((x10_long)0ll);
                                 ((idx__107136) < (size__107135));
                                 idx__107136 = ((idx__107136) + (((x10_long)1ll))))
                            {
                                TPMGL(E1) e__107137 = ::x10aux::nullCheck(rail__107134)->x10::lang::template Rail< TPMGL(E1) >::__apply(
                                                        idx__107136);
                                
                                //#line 567 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E1)>::__apply(::x10aux::nullCheck(handler1), 
                                  e__107137);
                            }
                        }
                        
                        //#line 569 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                          ::x10::util::GrowableRail<TPMGL(E2)>::_make();
                        
                        //#line 570 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                          ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                        
                        //#line 571 "x10/lang/MultipleExceptions.x10"
                        (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                          deep, exns2, others2);
                        
                        //#line 572 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E2) >* rail__107138 =
                          exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail();
                        x10_long size__107139 = (x10_long)(::x10aux::nullCheck(rail__107138)->FMGL(size));
                        {
                            x10_long idx__107140;
                            for (idx__107140 = ((x10_long)0ll);
                                 ((idx__107140) < (size__107139));
                                 idx__107140 = ((idx__107140) + (((x10_long)1ll))))
                            {
                                TPMGL(E2) e__107141 = ::x10aux::nullCheck(rail__107138)->x10::lang::template Rail< TPMGL(E2) >::__apply(
                                                        idx__107140);
                                
                                //#line 573 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E2)>::__apply(::x10aux::nullCheck(handler2), 
                                  e__107141);
                            }
                        }
                        
                        //#line 575 "x10/lang/MultipleExceptions.x10"
                        if (((others2->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1089) {
            {
                ::x10::lang::CheckedThrowable* formal__107152 =
                  __exc1089;
                {
                    throwable__107151 = formal__107152;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__107151, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__107151))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107151));
            }
            
        }
        
        //#line 576 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 561 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__107151, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__107151)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107151));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1087
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1090
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1090
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2) {
    
    //#line 594 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E1),
    TPMGL(E2) >(true, body, handler1, handler2);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1090
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1091
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1091
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2, ::x10::lang::VoidFun_0_0* finallyBlock) {
    
    //#line 614 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E1),
    TPMGL(E2) >(true, body, handler1, handler2, finallyBlock);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1091
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_GENERICS
#endif // __X10_LANG_MULTIPLEEXCEPTIONS_H_NODEPS
