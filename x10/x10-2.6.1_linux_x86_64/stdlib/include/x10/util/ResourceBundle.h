#ifndef __X10_UTIL_RESOURCEBUNDLE_H
#define __X10_UTIL_RESOURCEBUNDLE_H

#include <x10rt.h>


namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class Reader;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace io { 
class FileReader;
} } 
namespace x10 { namespace io { 
class IOException;
} } 
namespace x10 { namespace util { 
class MissingResourceException;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace io { 
class EOFException;
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
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeRep;
} } 

namespace x10 { namespace util { 

class ResourceBundle_Strings {
  public:
    static ::x10::lang::String sl__170621;
    static ::x10::lang::String sl__170620;
    static ::x10::lang::String sl__170618;
    static ::x10::lang::String sl__170619;
    static ::x10::lang::String sl__170622;
};

class ResourceBundle : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(cache) */
    static ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::ResourceBundle*>* FMGL(cache);
    static void FMGL(cache__do_init)();
    static void FMGL(cache__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(cache__status);
    static ::x10::lang::CheckedThrowable* FMGL(cache__exception);
    static ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::ResourceBundle*>*
      FMGL(cache__get)();
    
    ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::String*>*
      FMGL(props);
    
    ::x10::lang::String* FMGL(baseName);
    
    void _constructor(::x10::lang::String* baseName);
    
    static ::x10::util::ResourceBundle* _make(::x10::lang::String* baseName);
    
    static ::x10::util::ResourceBundle* getBundle(::x10::lang::String* baseName);
    static ::x10::util::ResourceBundle* getBundle(::x10::lang::String* baseName,
                                                  ::x10::lang::Any* loaderOrLoaded);
    virtual x10_boolean containsKey(::x10::lang::String* key);
    virtual ::x10::lang::String* getString(::x10::lang::String* key);
    virtual ::x10::util::Set< ::x10::lang::String*>* keySet();
    virtual ::x10::util::ResourceBundle* x10__util__ResourceBundle____this__x10__util__ResourceBundle(
      );
    virtual void __fieldInitializers_x10_util_ResourceBundle(
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
#endif // X10_UTIL_RESOURCEBUNDLE_H

namespace x10 { namespace util { 
class ResourceBundle;
} } 

#ifndef X10_UTIL_RESOURCEBUNDLE_H_NODEPS
#define X10_UTIL_RESOURCEBUNDLE_H_NODEPS
#include <x10/util/HashMap.h>
#include <x10/lang/String.h>
#include <x10/io/Reader.h>
#include <x10/io/File.h>
#include <x10/io/FileReader.h>
#include <x10/io/IOException.h>
#include <x10/util/MissingResourceException.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Int.h>
#include <x10/io/EOFException.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Finalization.h>
#include <x10/xrx/Runtime.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Any.h>
#include <x10/util/Set.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeRep.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_RESOURCEBUNDLE_H_GENERICS
#define X10_UTIL_RESOURCEBUNDLE_H_GENERICS
inline ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::ResourceBundle*>*
  x10::util::ResourceBundle::FMGL(cache__get)() {
    if (FMGL(cache__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(cache__init)();
    }
    return x10::util::ResourceBundle::FMGL(cache);
}

#endif // X10_UTIL_RESOURCEBUNDLE_H_GENERICS
#endif // __X10_UTIL_RESOURCEBUNDLE_H_NODEPS
