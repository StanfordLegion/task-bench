#ifndef __X10_IO_MARSHAL__INTMARSHAL_H
#define __X10_IO_MARSHAL__INTMARSHAL_H

#include <x10rt.h>


#define X10_IO_MARSHAL_H_NODEPS
#include <x10/io/Marshal.h>
#undef X10_IO_MARSHAL_H_NODEPS
namespace x10 { namespace io { 
class Reader;
} } 
namespace x10 { namespace io { 
class Writer;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class Marshal__IntMarshal : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Marshal<x10_int>::itable< ::x10::io::Marshal__IntMarshal > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::io::Marshal__IntMarshal > _itable_1;
    
    virtual x10_int read(::x10::io::Reader* r);
    virtual void write(::x10::io::Writer* w, x10_int i);
    virtual ::x10::io::Marshal__IntMarshal* x10__io__Marshal__IntMarshal____this__x10__io__Marshal__IntMarshal(
      );
    void _constructor();
    
    static ::x10::io::Marshal__IntMarshal* _make();
    
    virtual void __fieldInitializers_x10_io_Marshal_IntMarshal();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_IO_MARSHAL__INTMARSHAL_H

namespace x10 { namespace io { 
class Marshal__IntMarshal;
} } 

#ifndef X10_IO_MARSHAL__INTMARSHAL_H_NODEPS
#define X10_IO_MARSHAL__INTMARSHAL_H_NODEPS
#ifndef X10_IO_MARSHAL__INTMARSHAL_H_GENERICS
#define X10_IO_MARSHAL__INTMARSHAL_H_GENERICS
#endif // X10_IO_MARSHAL__INTMARSHAL_H_GENERICS
#endif // __X10_IO_MARSHAL__INTMARSHAL_H_NODEPS
