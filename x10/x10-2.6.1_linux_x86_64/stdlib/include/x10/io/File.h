#ifndef __X10_IO_FILE_H
#define __X10_IO_FILE_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class ReaderIterator;
} } 
namespace x10 { namespace io { 
class FileReader;
} } 
namespace x10 { namespace io { 
class Reader;
} } 
namespace x10 { namespace io { 
class FileWriter;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Writer;
} } 
namespace x10 { namespace io { 
class File__NativeFile;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class File : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(SEPARATOR) */
    static x10_char FMGL(SEPARATOR);
    static void FMGL(SEPARATOR__do_init)();
    static void FMGL(SEPARATOR__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(SEPARATOR__status);
    static ::x10::lang::CheckedThrowable* FMGL(SEPARATOR__exception);
    static x10_char FMGL(SEPARATOR__get)();
    
    /* Static field: FMGL(PATH_SEPARATOR) */
    static x10_char FMGL(PATH_SEPARATOR);
    static void FMGL(PATH_SEPARATOR__do_init)();
    static void FMGL(PATH_SEPARATOR__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(PATH_SEPARATOR__status);
    static ::x10::lang::CheckedThrowable* FMGL(PATH_SEPARATOR__exception);
    static x10_char FMGL(PATH_SEPARATOR__get)();
    
    ::x10::io::File* FMGL(parent);
    
    ::x10::lang::String* FMGL(name);
    
    x10_boolean FMGL(absolute);
    
    void _constructor(::x10::lang::String* fullName);
    
    static ::x10::io::File* _make(::x10::lang::String* fullName);
    
    void _constructor(::x10::io::File* p, ::x10::lang::String* n);
    
    static ::x10::io::File* _make(::x10::io::File* p, ::x10::lang::String* n);
    
    virtual ::x10::lang::String* toString();
    virtual ::x10::io::ReaderIterator< ::x10::lang::String*>* lines();
    virtual ::x10::io::ReaderIterator<x10_char>* chars();
    virtual ::x10::io::ReaderIterator<x10_byte>* bytes();
    virtual ::x10::io::FileReader* openRead();
    virtual ::x10::io::FileWriter* openWrite();
    virtual ::x10::io::FileWriter* openWrite(x10_boolean append);
    virtual ::x10::io::Printer* printer();
    virtual ::x10::io::Printer* printer(x10_boolean append);
    virtual ::x10::lang::String* getName();
    virtual ::x10::io::File* getParentFile();
    virtual ::x10::lang::String* getPath();
    virtual x10_boolean isAbsolute();
    virtual ::x10::io::File__NativeFile* nativeFile();
    virtual ::x10::io::File* getAbsoluteFile();
    virtual ::x10::io::File* getCanonicalFile();
    virtual x10_boolean exists();
    virtual x10_boolean isSymbolicLink();
    virtual x10_boolean isAlias();
    virtual x10_boolean hardLinkCount();
    virtual x10_long inodeNumber();
    virtual x10_int permissions();
    virtual x10_boolean isDirectory();
    virtual x10_boolean isFile();
    virtual x10_boolean isHidden();
    virtual x10_long lastModified();
    virtual x10_boolean setLastModified(x10_long t);
    virtual x10_long size();
    virtual x10_int compareTo(::x10::io::File* f);
    virtual x10_boolean canRead();
    virtual x10_boolean canWrite();
    virtual x10_boolean _kwd__delete();
    virtual ::x10::lang::Rail< ::x10::lang::String* >* list();
    virtual x10_boolean mkdir();
    virtual x10_boolean mkdirs();
    virtual x10_boolean renameTo(::x10::io::File* dest);
    virtual ::x10::io::File* x10__io__File____this__x10__io__File();
    virtual void __fieldInitializers_x10_io_File();
    
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
#endif // X10_IO_FILE_H

namespace x10 { namespace io { 
class File;
} } 

#ifndef X10_IO_FILE_H_NODEPS
#define X10_IO_FILE_H_NODEPS
#include <x10/lang/Boolean.h>
#include <x10/lang/Char.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/io/ReaderIterator.h>
#include <x10/io/FileReader.h>
#include <x10/io/Reader.h>
#include <x10/lang/Byte.h>
#include <x10/io/FileWriter.h>
#include <x10/io/Printer.h>
#include <x10/io/Writer.h>
#include <x10/io/File__NativeFile.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/compiler/Incomplete.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_IO_FILE_H_GENERICS
#define X10_IO_FILE_H_GENERICS
inline x10_char x10::io::File::FMGL(SEPARATOR__get)() {
    if (FMGL(SEPARATOR__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(SEPARATOR__init)();
    }
    return x10::io::File::FMGL(SEPARATOR);
}

inline x10_char x10::io::File::FMGL(PATH_SEPARATOR__get)() {
    if (FMGL(PATH_SEPARATOR__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(PATH_SEPARATOR__init)();
    }
    return x10::io::File::FMGL(PATH_SEPARATOR);
}

#endif // X10_IO_FILE_H_GENERICS
#endif // __X10_IO_FILE_H_NODEPS
