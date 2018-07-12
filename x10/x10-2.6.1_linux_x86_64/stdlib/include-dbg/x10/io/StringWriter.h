#ifndef __X10_IO_STRINGWRITER_H
#define __X10_IO_STRINGWRITER_H

#include <x10rt.h>


#define X10_IO_WRITER_H_NODEPS
#include <x10/io/Writer.h>
#undef X10_IO_WRITER_H_NODEPS
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class StringWriter : public ::x10::io::Writer   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::x10::io::Writer::write;
    
    ::x10::util::StringBuilder* FMGL(b);
    
    void _constructor();
    
    static ::x10::io::StringWriter* _make();
    
    virtual void write(x10_byte x);
    virtual void write(::x10::lang::String* s);
    virtual void write(::x10::lang::Rail< x10_byte >* x, x10_long off, x10_long len);
    virtual x10_long size();
    virtual ::x10::lang::String* result();
    virtual void flush();
    virtual void close();
    virtual ::x10::io::StringWriter* x10__io__StringWriter____this__x10__io__StringWriter(
      );
    virtual void __fieldInitializers_x10_io_StringWriter();
    
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
#endif // X10_IO_STRINGWRITER_H

namespace x10 { namespace io { 
class StringWriter;
} } 

#ifndef X10_IO_STRINGWRITER_H_NODEPS
#define X10_IO_STRINGWRITER_H_NODEPS
#ifndef X10_IO_STRINGWRITER_H_GENERICS
#define X10_IO_STRINGWRITER_H_GENERICS
#endif // X10_IO_STRINGWRITER_H_GENERICS
#endif // __X10_IO_STRINGWRITER_H_NODEPS
