#ifndef __X10_IO_INPUTSTREAMREADER_H
#define __X10_IO_INPUTSTREAMREADER_H

#include <x10rt.h>


#define X10_IO_READER_H_NODEPS
#include <x10/io/Reader.h>
#undef X10_IO_READER_H_NODEPS
namespace x10 { namespace io { 
class InputStreamReader__InputStream;
} } 
namespace x10 { namespace io { 
class EOFException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class InputStreamReader : public ::x10::io::Reader   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::x10::io::Reader::read;
    
    ::x10::io::InputStreamReader__InputStream* FMGL(stream);
    
    void _constructor(::x10::io::InputStreamReader__InputStream* stream);
    
    static ::x10::io::InputStreamReader* _make(::x10::io::InputStreamReader__InputStream* stream);
    
    virtual ::x10::io::InputStreamReader__InputStream* stream();
    virtual void close();
    virtual x10_byte read();
    virtual void read(::x10::lang::Rail< x10_byte >* r, x10_long off, x10_long len);
    virtual x10_long available();
    virtual void skip(x10_long off);
    virtual void mark(x10_long off);
    virtual void reset();
    virtual x10_boolean markSupported();
    virtual ::x10::io::InputStreamReader* x10__io__InputStreamReader____this__x10__io__InputStreamReader(
      );
    virtual void __fieldInitializers_x10_io_InputStreamReader();
    
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
#endif // X10_IO_INPUTSTREAMREADER_H

namespace x10 { namespace io { 
class InputStreamReader;
} } 

#ifndef X10_IO_INPUTSTREAMREADER_H_NODEPS
#define X10_IO_INPUTSTREAMREADER_H_NODEPS
#ifndef X10_IO_INPUTSTREAMREADER_H_GENERICS
#define X10_IO_INPUTSTREAMREADER_H_GENERICS
#endif // X10_IO_INPUTSTREAMREADER_H_GENERICS
#endif // __X10_IO_INPUTSTREAMREADER_H_NODEPS
