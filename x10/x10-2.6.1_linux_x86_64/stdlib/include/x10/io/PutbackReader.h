#ifndef __X10_IO_PUTBACKREADER_H
#define __X10_IO_PUTBACKREADER_H

#include <x10rt.h>


#define X10_IO_FILTERREADER_H_NODEPS
#include <x10/io/FilterReader.h>
#undef X10_IO_FILTERREADER_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace io { 
class Reader;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class PutbackReader : public ::x10::io::FilterReader   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::x10::io::FilterReader::read;
    
    ::x10::util::GrowableRail<x10_byte>* FMGL(putback);
    
    void _constructor(::x10::io::Reader* r);
    
    static ::x10::io::PutbackReader* _make(::x10::io::Reader* r);
    
    virtual x10_byte read();
    virtual void read(::x10::lang::Rail< x10_byte >* r, x10_int off, x10_int len);
    virtual void putback(x10_byte p);
    virtual ::x10::io::PutbackReader* x10__io__PutbackReader____this__x10__io__PutbackReader(
      );
    virtual void __fieldInitializers_x10_io_PutbackReader();
    
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
#endif // X10_IO_PUTBACKREADER_H

namespace x10 { namespace io { 
class PutbackReader;
} } 

#ifndef X10_IO_PUTBACKREADER_H_NODEPS
#define X10_IO_PUTBACKREADER_H_NODEPS
#ifndef X10_IO_PUTBACKREADER_H_GENERICS
#define X10_IO_PUTBACKREADER_H_GENERICS
#endif // X10_IO_PUTBACKREADER_H_GENERICS
#endif // __X10_IO_PUTBACKREADER_H_NODEPS
