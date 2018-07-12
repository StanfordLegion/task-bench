#ifndef __X10_IO_FILEREADER_H
#define __X10_IO_FILEREADER_H

#include <x10rt.h>


#define X10_IO_INPUTSTREAMREADER_H_NODEPS
#include <x10/io/InputStreamReader.h>
#undef X10_IO_INPUTSTREAMREADER_H_NODEPS
#define X10_IO_UNSERIALIZABLE_H_NODEPS
#include <x10/io/Unserializable.h>
#undef X10_IO_UNSERIALIZABLE_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace io { 
class IOException;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class ReaderIterator;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class Marshal;
} } 
namespace x10 { namespace io { 
class FileReader__FRLM;
} } 
namespace x10 { namespace io { 
class Reader;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace io { 
class InputStreamReader__InputStream;
} } 
namespace x10 { namespace io { 
class FileReader__FileInputStream;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class FileReader : public ::x10::io::InputStreamReader   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::io::FileReader > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::io::FileReader > _itable_1;
    
    ::x10::io::File* FMGL(file);
    
    ::x10::util::GrowableRail<x10_byte>* FMGL(buf);
    
    virtual ::x10::lang::String* readLine();
    virtual x10_long offset();
    ::x10::io::ReaderIterator< ::x10::lang::String*>* FMGL(lines);
    
    virtual ::x10::io::ReaderIterator< ::x10::lang::String*>* lines();
    void _constructor(::x10::io::File* file);
    
    static ::x10::io::FileReader* _make(::x10::io::File* file);
    
    virtual ::x10::io::FileReader* x10__io__FileReader____this__x10__io__FileReader(
      );
    virtual void __fieldInitializers_x10_io_FileReader();
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.io.FileReader");
    }
    
    virtual ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.io.FileReader");
    }
    
    
};


} } 
#endif // X10_IO_FILEREADER_H

namespace x10 { namespace io { 
class FileReader;
} } 

#ifndef X10_IO_FILEREADER_H_NODEPS
#define X10_IO_FILEREADER_H_NODEPS
#ifndef X10_IO_FILEREADER_H_GENERICS
#define X10_IO_FILEREADER_H_GENERICS
#endif // X10_IO_FILEREADER_H_GENERICS
#endif // __X10_IO_FILEREADER_H_NODEPS
