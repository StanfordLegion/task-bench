#ifndef __X10_IO_FILESYSTEM_H
#define __X10_IO_FILESYSTEM_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace compiler { 
class Incomplete;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class FileSystem_Strings {
  public:
    static ::x10::lang::String sl__164444;
    static ::x10::lang::String sl__164443;
};

class FileSystem : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(SEPARATOR_CHAR) */
    static x10_char FMGL(SEPARATOR_CHAR);
    static void FMGL(SEPARATOR_CHAR__do_init)();
    static void FMGL(SEPARATOR_CHAR__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(SEPARATOR_CHAR__status);
    static ::x10::lang::CheckedThrowable* FMGL(SEPARATOR_CHAR__exception);
    static x10_char FMGL(SEPARATOR_CHAR__get)();
    
    /* Static field: FMGL(SEPARATOR) */
    static ::x10::lang::String* FMGL(SEPARATOR);
    static void FMGL(SEPARATOR__do_init)();
    static void FMGL(SEPARATOR__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(SEPARATOR__status);
    static ::x10::lang::CheckedThrowable* FMGL(SEPARATOR__exception);
    static ::x10::lang::String* FMGL(SEPARATOR__get)();
    
    /* Static field: FMGL(PATH_SEPARATOR_CHAR) */
    static x10_char FMGL(PATH_SEPARATOR_CHAR);
    static void FMGL(PATH_SEPARATOR_CHAR__do_init)();
    static void FMGL(PATH_SEPARATOR_CHAR__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(PATH_SEPARATOR_CHAR__status);
    static ::x10::lang::CheckedThrowable* FMGL(PATH_SEPARATOR_CHAR__exception);
    static x10_char FMGL(PATH_SEPARATOR_CHAR__get)();
    
    /* Static field: FMGL(PATH_SEPARATOR) */
    static ::x10::lang::String* FMGL(PATH_SEPARATOR);
    static void FMGL(PATH_SEPARATOR__do_init)();
    static void FMGL(PATH_SEPARATOR__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(PATH_SEPARATOR__status);
    static ::x10::lang::CheckedThrowable* FMGL(PATH_SEPARATOR__exception);
    static ::x10::lang::String* FMGL(PATH_SEPARATOR__get)();
    
    virtual void _kwd__delete(::x10::io::File* id__117);
    virtual void deleteOnExit(::x10::io::File* id__118);
    virtual void rename(::x10::io::File* f, ::x10::io::File* t);
    virtual void mkdir(::x10::io::File* id__119);
    virtual void mkdirs(::x10::io::File* id__120);
    virtual x10_boolean exists(::x10::io::File* id__121);
    virtual x10_long size(::x10::io::File* id__122);
    virtual ::x10::lang::Rail< ::x10::io::File* >* listFiles(::x10::io::File* id__123);
    virtual ::x10::lang::Rail< ::x10::io::File* >* listFiles(::x10::io::File* id__124,
                                                             ::x10::lang::Fun_0_1< ::x10::io::File*, x10_boolean>* id__126);
    virtual ::x10::io::FileSystem* x10__io__FileSystem____this__x10__io__FileSystem(
      );
    void _constructor();
    
    virtual void __fieldInitializers_x10_io_FileSystem();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_IO_FILESYSTEM_H

namespace x10 { namespace io { 
class FileSystem;
} } 

#ifndef X10_IO_FILESYSTEM_H_NODEPS
#define X10_IO_FILESYSTEM_H_NODEPS
#include <x10/lang/Char.h>
#include <x10/lang/String.h>
#include <x10/io/File.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/compiler/Incomplete.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_IO_FILESYSTEM_H_GENERICS
#define X10_IO_FILESYSTEM_H_GENERICS
inline x10_char x10::io::FileSystem::FMGL(SEPARATOR_CHAR__get)() {
    if (FMGL(SEPARATOR_CHAR__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(SEPARATOR_CHAR__init)();
    }
    return x10::io::FileSystem::FMGL(SEPARATOR_CHAR);
}

inline ::x10::lang::String* x10::io::FileSystem::FMGL(SEPARATOR__get)() {
    if (FMGL(SEPARATOR__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(SEPARATOR__init)();
    }
    return x10::io::FileSystem::FMGL(SEPARATOR);
}

inline x10_char x10::io::FileSystem::FMGL(PATH_SEPARATOR_CHAR__get)() {
    if (FMGL(PATH_SEPARATOR_CHAR__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(PATH_SEPARATOR_CHAR__init)();
    }
    return x10::io::FileSystem::FMGL(PATH_SEPARATOR_CHAR);
}

inline ::x10::lang::String* x10::io::FileSystem::FMGL(PATH_SEPARATOR__get)() {
    if (FMGL(PATH_SEPARATOR__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(PATH_SEPARATOR__init)();
    }
    return x10::io::FileSystem::FMGL(PATH_SEPARATOR);
}

#endif // X10_IO_FILESYSTEM_H_GENERICS
#endif // __X10_IO_FILESYSTEM_H_NODEPS
