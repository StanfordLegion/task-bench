#ifndef __X10_IO_READER_H
#define __X10_IO_READER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace io { 
class Marshal__BooleanMarshal;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class Marshal;
} } 
namespace x10 { namespace io { 
class Marshal__ByteMarshal;
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
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class Marshal__LineMarshal;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class ReaderIterator;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class Reader : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void close() = 0;
    virtual x10_byte read() = 0;
    virtual void read(::x10::lang::Rail< x10_byte >* r, x10_long off, x10_long len) = 0;
    virtual x10_long available() = 0;
    virtual void skip(x10_long v) = 0;
    virtual void mark(x10_long m) = 0;
    virtual void reset() = 0;
    virtual x10_boolean markSupported() = 0;
    virtual x10_boolean readBoolean();
    virtual x10_byte readByte();
    virtual x10_ubyte readUByte();
    virtual x10_char readChar();
    virtual x10_short readShort();
    virtual x10_ushort readUShort();
    virtual x10_int readInt();
    virtual x10_uint readUInt();
    virtual x10_long readLong();
    virtual x10_ulong readULong();
    virtual x10_float readFloat();
    virtual x10_double readDouble();
    virtual ::x10::lang::String* readLine();
    template<class TPMGL(T)> TPMGL(T) read(::x10::io::Marshal<TPMGL(T)>* m);
    template<class TPMGL(T)> void read(::x10::io::Marshal<TPMGL(T)>* m, ::x10::lang::Rail< TPMGL(T) >* a);
    template<class TPMGL(T)> void read(::x10::io::Marshal<TPMGL(T)>* m, ::x10::lang::Rail< TPMGL(T) >* a,
                                       x10_long off, x10_long len);
    virtual ::x10::io::ReaderIterator< ::x10::lang::String*>* lines(
      );
    virtual ::x10::io::ReaderIterator<x10_char>* chars();
    virtual ::x10::io::ReaderIterator<x10_byte>* bytes();
    virtual ::x10::io::Reader* x10__io__Reader____this__x10__io__Reader(
      );
    void _constructor();
    
    virtual void __fieldInitializers_x10_io_Reader();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_IO_READER_H

namespace x10 { namespace io { 
class Reader;
} } 

#ifndef X10_IO_READER_H_NODEPS
#define X10_IO_READER_H_NODEPS
#include <x10/lang/Byte.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Marshal__BooleanMarshal.h>
#include <x10/io/Marshal.h>
#include <x10/io/Marshal__ByteMarshal.h>
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
#include <x10/lang/String.h>
#include <x10/io/Marshal__LineMarshal.h>
#include <x10/io/ReaderIterator.h>
#include <x10/lang/Zero.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_IO_READER_H_GENERICS
#define X10_IO_READER_H_GENERICS
#ifndef X10_IO_READER_H_read_783
#define X10_IO_READER_H_read_783
template<class TPMGL(T)> TPMGL(T) x10::io::Reader::read(::x10::io::Marshal<TPMGL(T)>* m) {
    return ::x10::io::Marshal<TPMGL(T)>::read(::x10aux::nullCheck(m), this);
    
}
#endif // X10_IO_READER_H_read_783
#ifndef X10_IO_READER_H_read_784
#define X10_IO_READER_H_read_784
template<class TPMGL(T)> void x10::io::Reader::read(::x10::io::Marshal<TPMGL(T)>* m,
                                                    ::x10::lang::Rail< TPMGL(T) >* a) {
    
    //#line 136 "x10/io/Reader.x10"
    this->template read< TPMGL(T) >(m, a, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(a)->FMGL(size)));
}
#endif // X10_IO_READER_H_read_784
#ifndef X10_IO_READER_H_read_785
#define X10_IO_READER_H_read_785
template<class TPMGL(T)> void x10::io::Reader::read(::x10::io::Marshal<TPMGL(T)>* m,
                                                    ::x10::lang::Rail< TPMGL(T) >* a,
                                                    x10_long off,
                                                    x10_long len) {
    
    //#line 144 "x10/io/Reader.x10"
    {
        x10_long i;
        for (i = off; ((i) < (((off) + (len)))); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 145 "x10/io/Reader.x10"
            ::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__set(
              i, (__extension__ ({
                  ::x10::io::Reader* this__119440 = this;
                  ::x10::io::Marshal<TPMGL(T)>::read(::x10aux::nullCheck(m), 
                    this__119440);
              }))
              );
        }
    }
    
}
#endif // X10_IO_READER_H_read_785
#endif // X10_IO_READER_H_GENERICS
#endif // __X10_IO_READER_H_NODEPS
