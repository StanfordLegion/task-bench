#ifndef __X10_UTIL_STRINGUTIL_H
#define __X10_UTIL_STRINGUTIL_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class HashSet;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class MapSet;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class StringUtil_Strings {
  public:
    static ::x10::lang::String sl__171104;
    static ::x10::lang::String sl__171119;
    static ::x10::lang::String sl__171111;
    static ::x10::lang::String sl__171100;
    static ::x10::lang::String sl__171127;
    static ::x10::lang::String sl__171101;
    static ::x10::lang::String sl__171099;
    static ::x10::lang::String sl__171105;
    static ::x10::lang::String sl__171120;
    static ::x10::lang::String sl__171103;
    static ::x10::lang::String sl__171107;
    static ::x10::lang::String sl__171109;
    static ::x10::lang::String sl__171110;
    static ::x10::lang::String sl__171097;
    static ::x10::lang::String sl__171113;
    static ::x10::lang::String sl__171121;
    static ::x10::lang::String sl__171117;
    static ::x10::lang::String sl__171114;
    static ::x10::lang::String sl__171128;
    static ::x10::lang::String sl__171108;
    static ::x10::lang::String sl__171125;
    static ::x10::lang::String sl__171122;
    static ::x10::lang::String sl__171124;
    static ::x10::lang::String sl__171098;
    static ::x10::lang::String sl__171126;
    static ::x10::lang::String sl__171123;
    static ::x10::lang::String sl__171118;
    static ::x10::lang::String sl__171106;
    static ::x10::lang::String sl__171096;
    static ::x10::lang::String sl__171102;
    static ::x10::lang::String sl__171116;
    static ::x10::lang::String sl__171112;
    static ::x10::lang::String sl__171115;
};

class StringUtil : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_int radix(::x10::lang::String* v);
    static ::x10::lang::String* stripRadix(::x10::lang::String* v);
    static ::x10::util::Pair< ::x10::lang::String*, ::x10::lang::String*>
      stripNumericType(::x10::lang::String* s);
    static x10_boolean isHexDigit(x10_char c);
    static x10_byte parseByte(::x10::lang::String* s);
    static x10_short parseShort(::x10::lang::String* s);
    static x10_int parseInt(::x10::lang::String* s);
    static x10_long parseLong(::x10::lang::String* s);
    static x10_ubyte parseUByte(::x10::lang::String* s);
    static x10_ushort parseUShort(::x10::lang::String* s);
    static x10_uint parseUInt(::x10::lang::String* s);
    static x10_ulong parseULong(::x10::lang::String* s);
    template<class TPMGL(T)> static ::x10::lang::String* formatArray(::x10::lang::Rail< TPMGL(T) >* a);
    template<class TPMGL(T)> static ::x10::lang::String* formatArray(::x10::lang::Rail< TPMGL(T) >* a,
                                                                     ::x10::lang::String* separator,
                                                                     ::x10::lang::String* leftPad,
                                                                     x10_int maxLength);
    template<class TPMGL(T)> static ::x10::util::HashSet<TPMGL(T)>*
      makeSet(::x10::lang::Rail< TPMGL(T) >* a);
    template<class TPMGL(T)> static ::x10::util::HashSet<TPMGL(T)>*
      makeSet(::x10::lang::Rail< TPMGL(T) >* a, x10_int hashTableSize);
    /* Static field: FMGL(TRUE_STRINGS) */
    static ::x10::lang::Rail< ::x10::lang::String* >* FMGL(TRUE_STRINGS);
    static void FMGL(TRUE_STRINGS__do_init)();
    static void FMGL(TRUE_STRINGS__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(TRUE_STRINGS__status);
    static ::x10::lang::CheckedThrowable* FMGL(TRUE_STRINGS__exception);
    static ::x10::lang::Rail< ::x10::lang::String* >* FMGL(TRUE_STRINGS__get)();
    
    /* Static field: FMGL(trueStrings) */
    static ::x10::util::HashSet< ::x10::lang::String*>* FMGL(trueStrings);
    static void FMGL(trueStrings__do_init)();
    static void FMGL(trueStrings__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(trueStrings__status);
    static ::x10::lang::CheckedThrowable* FMGL(trueStrings__exception);
    static ::x10::util::HashSet< ::x10::lang::String*>* FMGL(trueStrings__get)();
    
    /* Static field: FMGL(FALSE_STRINGS) */
    static ::x10::lang::Rail< ::x10::lang::String* >* FMGL(FALSE_STRINGS);
    static void FMGL(FALSE_STRINGS__do_init)();
    static void FMGL(FALSE_STRINGS__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(FALSE_STRINGS__status);
    static ::x10::lang::CheckedThrowable* FMGL(FALSE_STRINGS__exception);
    static ::x10::lang::Rail< ::x10::lang::String* >* FMGL(FALSE_STRINGS__get)();
    
    /* Static field: FMGL(falseStrings) */
    static ::x10::util::HashSet< ::x10::lang::String*>* FMGL(falseStrings);
    static void FMGL(falseStrings__do_init)();
    static void FMGL(falseStrings__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(falseStrings__status);
    static ::x10::lang::CheckedThrowable* FMGL(falseStrings__exception);
    static ::x10::util::HashSet< ::x10::lang::String*>* FMGL(falseStrings__get)();
    
    static ::x10::util::HashMap< ::x10::lang::String*, x10_int>*
      makeBooleanMap();
    /* Static field: FMGL(booleans) */
    static ::x10::util::HashMap< ::x10::lang::String*, x10_int>* FMGL(booleans);
    static void FMGL(booleans__do_init)();
    static void FMGL(booleans__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(booleans__status);
    static ::x10::lang::CheckedThrowable* FMGL(booleans__exception);
    static ::x10::util::HashMap< ::x10::lang::String*, x10_int>*
      FMGL(booleans__get)();
    
    static x10_boolean checkBoolean(::x10::lang::String* v);
    virtual ::x10::util::StringUtil* x10__util__StringUtil____this__x10__util__StringUtil(
      );
    void _constructor();
    
    static ::x10::util::StringUtil* _make();
    
    virtual void __fieldInitializers_x10_util_StringUtil(
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
#endif // X10_UTIL_STRINGUTIL_H

namespace x10 { namespace util { 
class StringUtil;
} } 

#ifndef X10_UTIL_STRINGUTIL_H_NODEPS
#define X10_UTIL_STRINGUTIL_H_NODEPS
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/lang/Char.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/util/Pair.h>
#include <x10/lang/Long.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Short.h>
#include <x10/lang/UByte.h>
#include <x10/lang/UShort.h>
#include <x10/lang/UInt.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Rail.h>
#include <x10/util/StringBuilder.h>
#include <x10/lang/Any.h>
#include <x10/util/HashSet.h>
#include <x10/util/MapSet.h>
#include <x10/lang/Unsafe.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Iterator.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_STRINGUTIL_H_GENERICS
#define X10_UTIL_STRINGUTIL_H_GENERICS
#ifndef X10_UTIL_STRINGUTIL_H_formatArray_2884
#define X10_UTIL_STRINGUTIL_H_formatArray_2884
template<class TPMGL(T)> ::x10::lang::String* x10::util::StringUtil::formatArray(
  ::x10::lang::Rail< TPMGL(T) >* a) {
    return ::x10::util::StringUtil::template formatArray< TPMGL(T) >(
             a, (&::x10::util::StringUtil_Strings::sl__171102), (&::x10::util::StringUtil_Strings::sl__171103),
             ((x10_int)80));
    
}
#endif // X10_UTIL_STRINGUTIL_H_formatArray_2884
#ifndef X10_UTIL_STRINGUTIL_H_formatArray_2885
#define X10_UTIL_STRINGUTIL_H_formatArray_2885
template<class TPMGL(T)> ::x10::lang::String* x10::util::StringUtil::formatArray(
  ::x10::lang::Rail< TPMGL(T) >* a, ::x10::lang::String* separator,
  ::x10::lang::String* leftPad, x10_int maxLength) {
    
    //#line 111 "x10/util/StringUtil.x10"
    if ((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(a)->FMGL(size)),
                                 ((x10_long)0ll)))) {
        return (&::x10::util::StringUtil_Strings::sl__171104);
        
    }
    
    //#line 112 "x10/util/StringUtil.x10"
    ::x10::util::StringBuilder* lines =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
    (lines)->::x10::util::StringBuilder::_constructor();
    
    //#line 113 "x10/util/StringUtil.x10"
    ::x10::util::StringBuilder* aLine =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
    (aLine)->::x10::util::StringBuilder::_constructor();
    
    //#line 114 "x10/util/StringUtil.x10"
    ::x10aux::nullCheck(aLine)->add(leftPad);
    
    //#line 115 "x10/util/StringUtil.x10"
    x10_long i__144035max__150812 = (((x10_long)(::x10aux::nullCheck(a)->FMGL(size))) - (((x10_long)2ll)));
    {
        x10_long i__150813;
        for (i__150813 = ((x10_long)0ll); ((i__150813) <= (i__144035max__150812));
             i__150813 = ((i__150813) + (((x10_long)1ll))))
        {
            
            //#line 116 "x10/util/StringUtil.x10"
            ::x10aux::nullCheck(aLine)->add(::x10aux::to_string(::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                                  i__150813)));
            
            //#line 117 "x10/util/StringUtil.x10"
            ::x10aux::nullCheck(aLine)->add(separator);
            
            //#line 118 "x10/util/StringUtil.x10"
            if (((::x10aux::nullCheck(aLine)->length()) >= (((x10_long)(maxLength)))))
            {
                
                //#line 119 "x10/util/StringUtil.x10"
                lines->add(::x10aux::nullCheck(aLine)->result());
                
                //#line 120 "x10/util/StringUtil.x10"
                lines->add((&::x10::util::StringUtil_Strings::sl__171105));
                
                //#line 121 "x10/util/StringUtil.x10"
                aLine = (__extension__ ({
                    ::x10::util::StringBuilder* alloc__150811 =
                       (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
                    (alloc__150811)->::x10::util::StringBuilder::_constructor();
                    alloc__150811;
                }))
                ;
                
                //#line 122 "x10/util/StringUtil.x10"
                ::x10aux::nullCheck(aLine)->add(leftPad);
            }
            
        }
    }
    
    //#line 125 "x10/util/StringUtil.x10"
    if (((::x10aux::nullCheck(aLine)->length()) >= (((x10_long)(maxLength)))))
    {
        
        //#line 126 "x10/util/StringUtil.x10"
        lines->add(::x10aux::nullCheck(aLine)->result());
        
        //#line 127 "x10/util/StringUtil.x10"
        lines->add((&::x10::util::StringUtil_Strings::sl__171105));
        
        //#line 128 "x10/util/StringUtil.x10"
        aLine = (__extension__ ({
            ::x10::util::StringBuilder* alloc__144033 =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
            (alloc__144033)->::x10::util::StringBuilder::_constructor();
            alloc__144033;
        }))
        ;
        
        //#line 129 "x10/util/StringUtil.x10"
        ::x10aux::nullCheck(aLine)->add(leftPad);
    }
    
    //#line 131 "x10/util/StringUtil.x10"
    reinterpret_cast< ::x10::util::StringBuilder*>(::x10aux::nullCheck(aLine)->add(
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                                                                          (((x10_long)(::x10aux::nullCheck(a)->FMGL(size))) - (((x10_long)2ll)))))));
    
    //#line 132 "x10/util/StringUtil.x10"
    if (((::x10aux::nullCheck(aLine)->length()) >= (((x10_long)(maxLength)))))
    {
        ::x10aux::nullCheck(aLine)->add((&::x10::util::StringUtil_Strings::sl__171105));
    }
    
    //#line 133 "x10/util/StringUtil.x10"
    reinterpret_cast< ::x10::util::StringBuilder*>(lines->add(
                                                     reinterpret_cast< ::x10::lang::Any*>(aLine)));
    
    //#line 134 "x10/util/StringUtil.x10"
    return lines->result();
    
}
#endif // X10_UTIL_STRINGUTIL_H_formatArray_2885
#ifndef X10_UTIL_STRINGUTIL_H_makeSet_2886
#define X10_UTIL_STRINGUTIL_H_makeSet_2886
template<class TPMGL(T)> ::x10::util::HashSet<TPMGL(T)>* x10::util::StringUtil::makeSet(
  ::x10::lang::Rail< TPMGL(T) >* a) {
    
    //#line 138 "x10/util/StringUtil.x10"
    return ::x10::util::StringUtil::template makeSet< TPMGL(T) >(
             a, ((((((x10_int)3)) * (((x10_int) ((x10_long)(::x10aux::nullCheck(a)->FMGL(size))))))) / ::x10aux::zeroCheck(((x10_int)2))));
    
}
#endif // X10_UTIL_STRINGUTIL_H_makeSet_2886
#ifndef X10_UTIL_STRINGUTIL_H_makeSet_2887
#define X10_UTIL_STRINGUTIL_H_makeSet_2887
template<class TPMGL(T)> ::x10::util::HashSet<TPMGL(T)>* x10::util::StringUtil::makeSet(
  ::x10::lang::Rail< TPMGL(T) >* a, x10_int hashTableSize) {
    
    //#line 142 "x10/util/StringUtil.x10"
    ::x10::util::HashSet<TPMGL(T)>* set =  (new (::x10aux::alloc_z< ::x10::util::HashSet<TPMGL(T)> >()) ::x10::util::HashSet<TPMGL(T)>());
    (set)->::x10::util::HashSet<TPMGL(T)>::_constructor(hashTableSize);
    
    //#line 143 "x10/util/StringUtil.x10"
    x10_long size__150816 = (x10_long)(::x10aux::nullCheck(a)->FMGL(size));
    {
        x10_long idx__150817;
        for (idx__150817 = ((x10_long)0ll); ((idx__150817) < (size__150816));
             idx__150817 = ((idx__150817) + (((x10_long)1ll))))
        {
            TPMGL(T) v__150818 = ::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                   idx__150817);
            set->add(v__150818);
        }
    }
    
    //#line 144 "x10/util/StringUtil.x10"
    return set;
    
}
#endif // X10_UTIL_STRINGUTIL_H_makeSet_2887
inline ::x10::lang::Rail< ::x10::lang::String* >* x10::util::StringUtil::FMGL(TRUE_STRINGS__get)() {
    if (FMGL(TRUE_STRINGS__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(TRUE_STRINGS__init)();
    }
    return x10::util::StringUtil::FMGL(TRUE_STRINGS);
}

inline ::x10::util::HashSet< ::x10::lang::String*>* x10::util::StringUtil::FMGL(trueStrings__get)() {
    if (FMGL(trueStrings__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(trueStrings__init)();
    }
    return x10::util::StringUtil::FMGL(trueStrings);
}

inline ::x10::lang::Rail< ::x10::lang::String* >* x10::util::StringUtil::FMGL(FALSE_STRINGS__get)() {
    if (FMGL(FALSE_STRINGS__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(FALSE_STRINGS__init)();
    }
    return x10::util::StringUtil::FMGL(FALSE_STRINGS);
}

inline ::x10::util::HashSet< ::x10::lang::String*>* x10::util::StringUtil::FMGL(falseStrings__get)() {
    if (FMGL(falseStrings__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(falseStrings__init)();
    }
    return x10::util::StringUtil::FMGL(falseStrings);
}

inline ::x10::util::HashMap< ::x10::lang::String*, x10_int>*
  x10::util::StringUtil::FMGL(booleans__get)() {
    if (FMGL(booleans__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(booleans__init)();
    }
    return x10::util::StringUtil::FMGL(booleans);
}

#endif // X10_UTIL_STRINGUTIL_H_GENERICS
#endif // __X10_UTIL_STRINGUTIL_H_NODEPS
