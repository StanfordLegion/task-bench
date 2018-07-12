#ifndef __X10_IO_FILEWRITER_H
#define __X10_IO_FILEWRITER_H

#include <x10rt.h>


#define X10_IO_OUTPUTSTREAMWRITER_H_NODEPS
#include <x10/io/OutputStreamWriter.h>
#undef X10_IO_OUTPUTSTREAMWRITER_H_NODEPS
#define X10_IO_UNSERIALIZABLE_H_NODEPS
#include <x10/io/Unserializable.h>
#undef X10_IO_UNSERIALIZABLE_H_NODEPS
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class OutputStreamWriter__OutputStream;
} } 
namespace x10 { namespace io { 
class FileWriter__FileOutputStream;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class FileWriter : public ::x10::io::OutputStreamWriter   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::io::FileWriter > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::io::FileWriter > _itable_1;
    
    ::x10::io::File* FMGL(file);
    
    static ::x10::io::OutputStreamWriter__OutputStream* make(::x10::lang::String* path,
                                                             x10_boolean append);
    void _constructor(::x10::io::File* file);
    
    static ::x10::io::FileWriter* _make(::x10::io::File* file);
    
    void _constructor(::x10::io::File* file, x10_boolean append);
    
    static ::x10::io::FileWriter* _make(::x10::io::File* file, x10_boolean append);
    
    virtual ::x10::io::FileWriter* x10__io__FileWriter____this__x10__io__FileWriter(
      );
    virtual void __fieldInitializers_x10_io_FileWriter();
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.io.FileWriter");
    }
    
    virtual ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.io.FileWriter");
    }
    
    
};


} } 
#endif // X10_IO_FILEWRITER_H

namespace x10 { namespace io { 
class FileWriter;
} } 

#ifndef X10_IO_FILEWRITER_H_NODEPS
#define X10_IO_FILEWRITER_H_NODEPS
#ifndef X10_IO_FILEWRITER_H_GENERICS
#define X10_IO_FILEWRITER_H_GENERICS
#endif // X10_IO_FILEWRITER_H_GENERICS
#endif // __X10_IO_FILEWRITER_H_NODEPS
