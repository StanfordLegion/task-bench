#ifndef __X10_IO_FILTERWRITER_H
#define __X10_IO_FILTERWRITER_H

#include <x10rt.h>


#define X10_IO_WRITER_H_NODEPS
#include <x10/io/Writer.h>
#undef X10_IO_WRITER_H_NODEPS
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

class FilterWriter : public ::x10::io::Writer   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::x10::io::Writer::write;
    
    ::x10::io::Writer* FMGL(w);
    
    virtual ::x10::io::Writer* inner();
    void _constructor(::x10::io::Writer* w);
    
    static ::x10::io::FilterWriter* _make(::x10::io::Writer* w);
    
    virtual void close();
    virtual void flush();
    virtual void write(x10_byte b);
    virtual void write(::x10::lang::String* s);
    virtual void write(::x10::lang::Rail< x10_byte >* x, x10_long off, x10_long len);
    virtual ::x10::io::FilterWriter* x10__io__FilterWriter____this__x10__io__FilterWriter(
      );
    virtual void __fieldInitializers_x10_io_FilterWriter();
    
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
#endif // X10_IO_FILTERWRITER_H

namespace x10 { namespace io { 
class FilterWriter;
} } 

#ifndef X10_IO_FILTERWRITER_H_NODEPS
#define X10_IO_FILTERWRITER_H_NODEPS
#ifndef X10_IO_FILTERWRITER_H_GENERICS
#define X10_IO_FILTERWRITER_H_GENERICS
#endif // X10_IO_FILTERWRITER_H_GENERICS
#endif // __X10_IO_FILTERWRITER_H_NODEPS
