#ifndef __X10_IO_DESERIALIZER_H
#define __X10_IO_DESERIALIZER_H

#include <x10rt.h>


#define X10_IO_UNSERIALIZABLE_H_NODEPS
#include <x10/io/Unserializable.h>
#undef X10_IO_UNSERIALIZABLE_H_NODEPS
#define X10AUX_DESERIALIZATION_BUFFER_H_NODEPS
#include <x10aux/deserialization_buffer.h>
#undef X10AUX_DESERIALIZATION_BUFFER_H_NODEPS
namespace x10 { namespace compiler { 
class Embed;
} } 
namespace x10 { namespace io { 
class Serializer;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace io { 
class InputStreamReader;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeClass;
} } 

namespace x10 { namespace io { 

class Deserializer : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::io::Deserializer > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::io::Deserializer > _itable_1;
    
    ::x10aux::deserialization_buffer _Embed___NATIVE_FIELD__;
    ::x10aux::deserialization_buffer* FMGL(__NATIVE_FIELD__);
    
    void _constructor(::x10aux::deserialization_buffer* id0);
    
    static ::x10::io::Deserializer* _make(::x10aux::deserialization_buffer* id0);
    
    void _constructor(::x10::io::Serializer* s);
    
    static ::x10::io::Deserializer* _make(::x10::io::Serializer* s);
    
    void _constructor(::x10::lang::Rail< x10_byte >* r);
    
    static ::x10::io::Deserializer* _make(::x10::lang::Rail< x10_byte >* r);
    
    void _constructor(::x10::io::InputStreamReader* i);
    
    static ::x10::io::Deserializer* _make(::x10::io::InputStreamReader* i);
    
    virtual ::x10::lang::Any* readAny();
    virtual ::x10::io::Deserializer* x10__io__Deserializer____this__x10__io__Deserializer(
      );
    virtual void __fieldInitializers_x10_io_Deserializer();
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.io.Deserializer");
    }
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.io.Deserializer");
    }
    
    
};


} } 
#endif // X10_IO_DESERIALIZER_H

namespace x10 { namespace io { 
class Deserializer;
} } 

#ifndef X10_IO_DESERIALIZER_H_NODEPS
#define X10_IO_DESERIALIZER_H_NODEPS
#ifndef X10_IO_DESERIALIZER_H_GENERICS
#define X10_IO_DESERIALIZER_H_GENERICS
#endif // X10_IO_DESERIALIZER_H_GENERICS
#endif // __X10_IO_DESERIALIZER_H_NODEPS
