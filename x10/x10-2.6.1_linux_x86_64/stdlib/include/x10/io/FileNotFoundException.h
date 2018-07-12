#ifndef __X10_IO_FILENOTFOUNDEXCEPTION_H
#define __X10_IO_FILENOTFOUNDEXCEPTION_H

#include <x10rt.h>


#define X10_IO_IOEXCEPTION_H_NODEPS
#include <x10/io/IOException.h>
#undef X10_IO_IOEXCEPTION_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class FileNotFoundException : public ::x10::io::IOException   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor();
    
    static ::x10::io::FileNotFoundException* _make();
    
    void _constructor(::x10::lang::String* message);
    
    static ::x10::io::FileNotFoundException* _make(::x10::lang::String* message);
    
    virtual ::x10::io::FileNotFoundException* x10__io__FileNotFoundException____this__x10__io__FileNotFoundException(
      );
    virtual void __fieldInitializers_x10_io_FileNotFoundException(
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
#endif // X10_IO_FILENOTFOUNDEXCEPTION_H

namespace x10 { namespace io { 
class FileNotFoundException;
} } 

#ifndef X10_IO_FILENOTFOUNDEXCEPTION_H_NODEPS
#define X10_IO_FILENOTFOUNDEXCEPTION_H_NODEPS
#ifndef X10_IO_FILENOTFOUNDEXCEPTION_H_GENERICS
#define X10_IO_FILENOTFOUNDEXCEPTION_H_GENERICS
#endif // X10_IO_FILENOTFOUNDEXCEPTION_H_GENERICS
#endif // __X10_IO_FILENOTFOUNDEXCEPTION_H_NODEPS
