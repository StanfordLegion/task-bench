#ifndef __X10_IO_SERIALIZER_H
#define __X10_IO_SERIALIZER_H

#include <x10rt.h>


#define X10_IO_UNSERIALIZABLE_H_NODEPS
#include <x10/io/Unserializable.h>
#undef X10_IO_UNSERIALIZABLE_H_NODEPS
#define X10AUX_SERIALIZATION_BUFFER_H_NODEPS
#include <x10aux/serialization_buffer.h>
#undef X10AUX_SERIALIZATION_BUFFER_H_NODEPS
namespace x10 { namespace compiler { 
class Embed;
} } 
namespace x10 { namespace io { 
class OutputStreamWriter;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeClass;
} } 

namespace x10 { namespace io { 

class Serializer : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::io::Serializer > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::io::Serializer > _itable_1;
    
    ::x10aux::serialization_buffer _Embed___NATIVE_FIELD__;
    ::x10aux::serialization_buffer* FMGL(__NATIVE_FIELD__);
    
    void _constructor(::x10aux::serialization_buffer* id0);
    
    static ::x10::io::Serializer* _make(::x10aux::serialization_buffer* id0);
    
    void _constructor();
    
    static ::x10::io::Serializer* _make();
    
    void _constructor(::x10::io::OutputStreamWriter* o);
    
    static ::x10::io::Serializer* _make(::x10::io::OutputStreamWriter* o);
    
    virtual void writeAny(::x10::lang::Any* v);
    virtual ::x10::lang::Rail< x10_byte >* toRail();
    virtual x10_int dataBytesWritten();
    virtual void newObjectGraph();
    virtual void addDeserializeCount(x10_long extraCount);
    virtual ::x10::io::Serializer* x10__io__Serializer____this__x10__io__Serializer(
      );
    virtual void __fieldInitializers_x10_io_Serializer();
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.io.Serializer");
    }
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.io.Serializer");
    }
    
    
};


} } 
#endif // X10_IO_SERIALIZER_H

namespace x10 { namespace io { 
class Serializer;
} } 

#ifndef X10_IO_SERIALIZER_H_NODEPS
#define X10_IO_SERIALIZER_H_NODEPS
#ifndef X10_IO_SERIALIZER_H_GENERICS
#define X10_IO_SERIALIZER_H_GENERICS
#endif // X10_IO_SERIALIZER_H_GENERICS
#endif // __X10_IO_SERIALIZER_H_NODEPS
