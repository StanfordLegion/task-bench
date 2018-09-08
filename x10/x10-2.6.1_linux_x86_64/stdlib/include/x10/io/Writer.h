#ifndef __X10_IO_WRITER_H
#define __X10_IO_WRITER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace io { 
class Marshal__ByteMarshal;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class Marshal;
} } 
namespace x10 { namespace io { 
class Marshal__UByteMarshal;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace io { 
class Marshal__CharMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__ShortMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__UShortMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__IntMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__UIntMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__LongMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__ULongMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__FloatMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__DoubleMarshal;
} } 
namespace x10 { namespace io { 
class Marshal__BooleanMarshal;
} } 
namespace x10 { namespace io { 
class OutputStreamWriter__OutputStream;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class Writer : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void close() = 0;
    virtual void flush() = 0;
    virtual void write(x10_byte x) = 0;
    virtual void write(::x10::lang::String* x) = 0;
    virtual void write(::x10::lang::Rail< x10_byte >* x, x10_long off, x10_long len) = 0;
    virtual void write(::x10::lang::Rail< x10_byte >* buf);
    virtual void writeByte(x10_byte x);
    virtual void writeUByte(x10_ubyte x);
    virtual void writeChar(x10_char x);
    virtual void writeShort(x10_short x);
    virtual void writeUShort(x10_ushort x);
    virtual void writeInt(x10_int x);
    virtual void writeUInt(x10_uint x);
    virtual void writeLong(x10_long x);
    virtual void writeULong(x10_ulong x);
    virtual void writeFloat(x10_float x);
    virtual void writeDouble(x10_double x);
    virtual void writeBoolean(x10_boolean x);
    template<class TPMGL(T)> void write(::x10::io::Marshal<TPMGL(T)>* m, TPMGL(T) x);
    virtual ::x10::io::OutputStreamWriter__OutputStream* getNativeOutputStream(
      );
    virtual ::x10::io::Writer* x10__io__Writer____this__x10__io__Writer();
    void _constructor();
    
    virtual void __fieldInitializers_x10_io_Writer();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_IO_WRITER_H

namespace x10 { namespace io { 
class Writer;
} } 

#ifndef X10_IO_WRITER_H_NODEPS
#define X10_IO_WRITER_H_NODEPS
#include <x10/lang/Byte.h>
#include <x10/lang/String.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/io/Marshal__ByteMarshal.h>
#include <x10/io/Marshal.h>
#include <x10/lang/UByte.h>
#include <x10/io/Marshal__UByteMarshal.h>
#include <x10/lang/Char.h>
#include <x10/io/Marshal__CharMarshal.h>
#include <x10/lang/Short.h>
#include <x10/io/Marshal__ShortMarshal.h>
#include <x10/lang/UShort.h>
#include <x10/io/Marshal__UShortMarshal.h>
#include <x10/lang/Int.h>
#include <x10/io/Marshal__IntMarshal.h>
#include <x10/lang/UInt.h>
#include <x10/io/Marshal__UIntMarshal.h>
#include <x10/io/Marshal__LongMarshal.h>
#include <x10/lang/ULong.h>
#include <x10/io/Marshal__ULongMarshal.h>
#include <x10/lang/Float.h>
#include <x10/io/Marshal__FloatMarshal.h>
#include <x10/lang/Double.h>
#include <x10/io/Marshal__DoubleMarshal.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Marshal__BooleanMarshal.h>
#include <x10/io/OutputStreamWriter__OutputStream.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_IO_WRITER_H_GENERICS
#define X10_IO_WRITER_H_GENERICS
#ifndef X10_IO_WRITER_H_write_827
#define X10_IO_WRITER_H_write_827
template<class TPMGL(T)> void x10::io::Writer::write(::x10::io::Marshal<TPMGL(T)>* m,
                                                     TPMGL(T) x) {
    
    //#line 80 "x10/io/Writer.x10"
    ::x10::io::Marshal<TPMGL(T)>::write(::x10aux::nullCheck(m), this,
                                                                x);
}
#endif // X10_IO_WRITER_H_write_827
#endif // X10_IO_WRITER_H_GENERICS
#endif // __X10_IO_WRITER_H_NODEPS
