#ifndef __X10_UTIL_OPTIONSPARSER_H
#define __X10_UTIL_OPTIONSPARSER_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_UTIL_OPTION_H_NODEPS
#include <x10/util/Option.h>
#undef X10_UTIL_OPTION_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(Z3), class TPMGL(U)>
class Fun_0_3;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(Z3), class TPMGL(Z4), class TPMGL(Z5)>
class VoidFun_0_5;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class HashSet;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class RailBuilder;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class MapSet;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace util { 
class OptionsParser__Err;
} } 
namespace x10 { namespace util { 
class StringUtil;
} } 
namespace x10 { namespace lang { 
class NumberFormatException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class OptionsParser_Strings {
  public:
    static ::x10::lang::String sl__169829;
    static ::x10::lang::String sl__169853;
    static ::x10::lang::String sl__169837;
    static ::x10::lang::String sl__169839;
    static ::x10::lang::String sl__169860;
    static ::x10::lang::String sl__169855;
    static ::x10::lang::String sl__169843;
    static ::x10::lang::String sl__169844;
    static ::x10::lang::String sl__169861;
    static ::x10::lang::String sl__169831;
    static ::x10::lang::String sl__169857;
    static ::x10::lang::String sl__169841;
    static ::x10::lang::String sl__169846;
    static ::x10::lang::String sl__169865;
    static ::x10::lang::String sl__169866;
    static ::x10::lang::String sl__169827;
    static ::x10::lang::String sl__169850;
    static ::x10::lang::String sl__169863;
    static ::x10::lang::String sl__169840;
    static ::x10::lang::String sl__169859;
    static ::x10::lang::String sl__169856;
    static ::x10::lang::String sl__169858;
    static ::x10::lang::String sl__169842;
    static ::x10::lang::String sl__169864;
    static ::x10::lang::String sl__169848;
    static ::x10::lang::String sl__169834;
    static ::x10::lang::String sl__169838;
    static ::x10::lang::String sl__169852;
    static ::x10::lang::String sl__169847;
    static ::x10::lang::String sl__169851;
    static ::x10::lang::String sl__169830;
    static ::x10::lang::String sl__169854;
    static ::x10::lang::String sl__169832;
    static ::x10::lang::String sl__169862;
    static ::x10::lang::String sl__169833;
    static ::x10::lang::String sl__169835;
    static ::x10::lang::String sl__169845;
    static ::x10::lang::String sl__169828;
    static ::x10::lang::String sl__169836;
    static ::x10::lang::String sl__169849;
};

class OptionsParser : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(IGNORE) */
    static const x10_int FMGL(IGNORE) = 0;
    static x10_int FMGL(IGNORE__get)();
    
    /* Static field: FMGL(START_TAIL) */
    static const x10_int FMGL(START_TAIL) = 1;
    static x10_int FMGL(START_TAIL__get)();
    
    ::x10::lang::Fun_0_3< ::x10::lang::String*, x10_int, x10_int, ::x10::lang::Rail< ::x10::lang::String* >*>*
      FMGL(onTooFew);
    
    ::x10::lang::Fun_0_3< ::x10::lang::String*, x10_int, x10_int, x10_int>*
      FMGL(onTooMany);
    
    ::x10::lang::VoidFun_0_5< ::x10::lang::String*, ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::Rail< ::x10::lang::String* >*>*, ::x10::lang::Rail< ::x10::lang::String* >*, x10_int, x10_int>*
      FMGL(onDuplicate);
    
    ::x10::lang::Fun_0_3< ::x10::lang::String*, ::x10::lang::String*, ::x10::lang::Rail< ::x10::lang::String* >*, ::x10::lang::String*>*
      FMGL(onMoreThanOne);
    
    /* Static field: FMGL(firstOnMoreThanOne) */
    static ::x10::lang::Fun_0_3< ::x10::lang::String*, ::x10::lang::String*, ::x10::lang::Rail< ::x10::lang::String* >*, ::x10::lang::String*>* FMGL(firstOnMoreThanOne);
    static void FMGL(firstOnMoreThanOne__do_init)();
    static void FMGL(firstOnMoreThanOne__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(firstOnMoreThanOne__status);
    static ::x10::lang::CheckedThrowable* FMGL(firstOnMoreThanOne__exception);
    static ::x10::lang::Fun_0_3< ::x10::lang::String*, ::x10::lang::String*, ::x10::lang::Rail< ::x10::lang::String* >*, ::x10::lang::String*>*
      FMGL(firstOnMoreThanOne__get)();
    
    /* Static field: FMGL(lastOnMoreThanOne) */
    static ::x10::lang::Fun_0_3< ::x10::lang::String*, ::x10::lang::String*, ::x10::lang::Rail< ::x10::lang::String* >*, ::x10::lang::String*>* FMGL(lastOnMoreThanOne);
    static void FMGL(lastOnMoreThanOne__do_init)();
    static void FMGL(lastOnMoreThanOne__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(lastOnMoreThanOne__status);
    static ::x10::lang::CheckedThrowable* FMGL(lastOnMoreThanOne__exception);
    static ::x10::lang::Fun_0_3< ::x10::lang::String*, ::x10::lang::String*, ::x10::lang::Rail< ::x10::lang::String* >*, ::x10::lang::String*>*
      FMGL(lastOnMoreThanOne__get)();
    
    ::x10::lang::Fun_0_2< ::x10::lang::String*, ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::Option>*, x10_int>*
      FMGL(onUnknownKey);
    
    /* Static field: FMGL(startTailOnUnknownKey) */
    static ::x10::lang::Fun_0_2< ::x10::lang::String*, ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::Option>*, x10_int>* FMGL(startTailOnUnknownKey);
    static void FMGL(startTailOnUnknownKey__do_init)();
    static void FMGL(startTailOnUnknownKey__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(startTailOnUnknownKey__status);
    static ::x10::lang::CheckedThrowable* FMGL(startTailOnUnknownKey__exception);
    static ::x10::lang::Fun_0_2< ::x10::lang::String*, ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::Option>*, x10_int>*
      FMGL(startTailOnUnknownKey__get)();
    
    virtual void setHandlers(::x10::lang::Rail< ::x10::lang::Any* >* hndlrs);
    ::x10::lang::Rail< ::x10::util::Option >* FMGL(options);
    
    ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::Option>*
      FMGL(keyMap);
    
    ::x10::lang::Rail< ::x10::lang::String* >* FMGL(args);
    
    ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::Rail< ::x10::lang::String* >*>*
      FMGL(properties);
    
    x10_int FMGL(tailStart);
    
    ::x10::util::HashSet< ::x10::util::Option>* FMGL(required);
    
    ::x10::util::HashSet< ::x10::lang::String*>* FMGL(oneCharFlags);
    
    void _constructor(::x10::lang::Rail< ::x10::lang::String* >* args);
    
    static ::x10::util::OptionsParser* _make(::x10::lang::Rail< ::x10::lang::String* >* args);
    
    static ::x10::lang::Rail< ::x10::util::Option >* makeOptionArray(
      ::x10::lang::Rail< ::x10::lang::String* >* args);
    void _constructor(::x10::lang::Rail< ::x10::lang::String* >* args,
                      ::x10::lang::Rail< ::x10::util::Option >* options);
    
    static ::x10::util::OptionsParser* _make(::x10::lang::Rail< ::x10::lang::String* >* args,
                                             ::x10::lang::Rail< ::x10::util::Option >* options);
    
    void _constructor(::x10::lang::Rail< ::x10::lang::String* >* args,
                      ::x10::lang::Rail< ::x10::util::Option >* flags,
                      ::x10::lang::Rail< ::x10::util::Option >* others);
    
    static ::x10::util::OptionsParser* _make(::x10::lang::Rail< ::x10::lang::String* >* args,
                                             ::x10::lang::Rail< ::x10::util::Option >* flags,
                                             ::x10::lang::Rail< ::x10::util::Option >* others);
    
    static ::x10::lang::Rail< ::x10::util::Option >* merge(
      ::x10::lang::Rail< ::x10::util::Option >* flags, ::x10::lang::Rail< ::x10::util::Option >* parms);
    void _constructor(::x10::lang::Rail< ::x10::lang::String* >* args,
                      ::x10::lang::Rail< ::x10::util::Option >* options,
                      ::x10::lang::Rail< ::x10::lang::Any* >* handlers);
    
    static ::x10::util::OptionsParser* _make(::x10::lang::Rail< ::x10::lang::String* >* args,
                                             ::x10::lang::Rail< ::x10::util::Option >* options,
                                             ::x10::lang::Rail< ::x10::lang::Any* >* handlers);
    
    void parse(::x10::lang::Rail< ::x10::lang::String* >* args,
               ::x10::lang::Rail< ::x10::util::Option >* options);
    void initializeKeyMap(::x10::lang::Rail< ::x10::util::Option >* options);
    ::x10::lang::Rail< x10_int >* makeKeyIndex(::x10::lang::Rail< ::x10::lang::String* >* args,
                                               ::x10::lang::Rail< ::x10::util::Option >* options);
    ::x10::lang::Rail< ::x10::lang::String* >* expandArgs(
      ::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::x10::lang::Rail< ::x10::lang::String* >* getTail(
      );
    virtual x10_boolean hasTail();
    virtual ::x10::lang::Rail< ::x10::lang::String* >* get(
      ::x10::lang::String* key);
    virtual ::x10::lang::Rail< ::x10::lang::String* >* getOrElse(
      ::x10::lang::String* key, ::x10::lang::Rail< ::x10::lang::String* >* orElse);
    virtual ::x10::lang::Any* howManyValues(::x10::lang::String* key);
    virtual x10_boolean __apply(::x10::lang::String* key);
    virtual ::x10::lang::String* __apply(::x10::lang::String* key,
                                         ::x10::lang::String* d);
    virtual x10_byte __apply(::x10::lang::String* key, x10_byte d);
    virtual x10_short __apply(::x10::lang::String* key, x10_short d);
    virtual x10_int __apply(::x10::lang::String* key, x10_int d);
    virtual x10_long __apply(::x10::lang::String* key, x10_long d);
    virtual x10_ubyte __apply(::x10::lang::String* key, x10_ubyte d);
    virtual x10_ushort __apply(::x10::lang::String* key, x10_ushort d);
    virtual x10_uint __apply(::x10::lang::String* key, x10_uint d);
    virtual x10_ulong __apply(::x10::lang::String* key, x10_ulong d);
    virtual x10_double __apply(::x10::lang::String* key, x10_double d);
    virtual x10_float __apply(::x10::lang::String* key, x10_float d);
    virtual x10_boolean __apply(::x10::lang::String* key,
                                x10_boolean d);
    virtual ::x10::lang::String* usage(::x10::lang::String* leader);
    /* Static field: FMGL(HELP) */
    static ::x10::util::Option FMGL(HELP);
    static void FMGL(HELP__do_init)();
    static void FMGL(HELP__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(HELP__status);
    static ::x10::lang::CheckedThrowable* FMGL(HELP__exception);
    static ::x10::util::Option FMGL(HELP__get)();
    
    virtual void showHELP();
    virtual x10_boolean wantsUsageOnly(::x10::lang::String* leader);
    virtual ::x10::lang::Rail< ::x10::lang::String* >* filteredArgs(
      );
    virtual x10_boolean hasUnexpectedArgs(x10_boolean show);
    virtual ::x10::util::OptionsParser* x10__util__OptionsParser____this__x10__util__OptionsParser(
      );
    virtual void __fieldInitializers_x10_util_OptionsParser(
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
#endif // X10_UTIL_OPTIONSPARSER_H

namespace x10 { namespace util { 
class OptionsParser;
} } 

#ifndef X10_UTIL_OPTIONSPARSER_H_NODEPS
#define X10_UTIL_OPTIONSPARSER_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/util/Option.h>
#include <x10/util/HashMap.h>
#include <x10/lang/String.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Fun_0_3.h>
#include <x10/lang/VoidFun_0_5.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Long.h>
#include <x10/lang/Any.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/util/HashSet.h>
#include <x10/util/RailBuilder.h>
#include <x10/lang/Char.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/util/MapSet.h>
#include <x10/util/StringBuilder.h>
#include <x10/lang/Iterator.h>
#include <x10/util/OptionsParser__Err.h>
#include <x10/lang/Byte.h>
#include <x10/util/StringUtil.h>
#include <x10/lang/NumberFormatException.h>
#include <x10/lang/Short.h>
#include <x10/lang/UByte.h>
#include <x10/lang/UShort.h>
#include <x10/lang/UInt.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Double.h>
#include <x10/lang/Float.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_OPTIONSPARSER_H_GENERICS
#define X10_UTIL_OPTIONSPARSER_H_GENERICS
inline x10_int x10::util::OptionsParser::FMGL(IGNORE__get)() {
    return x10::util::OptionsParser::FMGL(IGNORE);
}

inline x10_int x10::util::OptionsParser::FMGL(START_TAIL__get)() {
    return x10::util::OptionsParser::FMGL(START_TAIL);
}

inline ::x10::lang::Fun_0_3< ::x10::lang::String*, ::x10::lang::String*, ::x10::lang::Rail< ::x10::lang::String* >*, ::x10::lang::String*>*
  x10::util::OptionsParser::FMGL(firstOnMoreThanOne__get)() {
    if (FMGL(firstOnMoreThanOne__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(firstOnMoreThanOne__init)();
    }
    return x10::util::OptionsParser::FMGL(firstOnMoreThanOne);
}

inline ::x10::lang::Fun_0_3< ::x10::lang::String*, ::x10::lang::String*, ::x10::lang::Rail< ::x10::lang::String* >*, ::x10::lang::String*>*
  x10::util::OptionsParser::FMGL(lastOnMoreThanOne__get)() {
    if (FMGL(lastOnMoreThanOne__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(lastOnMoreThanOne__init)();
    }
    return x10::util::OptionsParser::FMGL(lastOnMoreThanOne);
}

inline ::x10::lang::Fun_0_2< ::x10::lang::String*, ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::Option>*, x10_int>*
  x10::util::OptionsParser::FMGL(startTailOnUnknownKey__get)() {
    if (FMGL(startTailOnUnknownKey__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(startTailOnUnknownKey__init)();
    }
    return x10::util::OptionsParser::FMGL(startTailOnUnknownKey);
}

inline ::x10::util::Option x10::util::OptionsParser::FMGL(HELP__get)() {
    if (FMGL(HELP__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(HELP__init)();
    }
    return x10::util::OptionsParser::FMGL(HELP);
}

#endif // X10_UTIL_OPTIONSPARSER_H_GENERICS
#endif // __X10_UTIL_OPTIONSPARSER_H_NODEPS
