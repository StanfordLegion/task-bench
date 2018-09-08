#ifndef __X10_IO_CONSOLE_H
#define __X10_IO_CONSOLE_H

#include <x10rt.h>


namespace x10 { namespace io { 
class OutputStreamWriter__OutputStream;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace io { 
class InputStreamReader__InputStream;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Writer;
} } 
namespace x10 { namespace io { 
class OutputStreamWriter;
} } 
namespace x10 { namespace io { 
class Reader;
} } 
namespace x10 { namespace io { 
class InputStreamReader;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class Console : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(OUT) */
    static ::x10::io::Printer* FMGL(OUT);
    static void FMGL(OUT__do_init)();
    static void FMGL(OUT__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(OUT__status);
    static ::x10::lang::CheckedThrowable* FMGL(OUT__exception);
    static ::x10::io::Printer* FMGL(OUT__get)();
    
    /* Static field: FMGL(ERR) */
    static ::x10::io::Printer* FMGL(ERR);
    static void FMGL(ERR__do_init)();
    static void FMGL(ERR__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(ERR__status);
    static ::x10::lang::CheckedThrowable* FMGL(ERR__exception);
    static ::x10::io::Printer* FMGL(ERR__get)();
    
    /* Static field: FMGL(IN) */
    static ::x10::io::Reader* FMGL(IN);
    static void FMGL(IN__do_init)();
    static void FMGL(IN__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(IN__status);
    static ::x10::lang::CheckedThrowable* FMGL(IN__exception);
    static ::x10::io::Reader* FMGL(IN__get)();
    
    virtual ::x10::io::Console* x10__io__Console____this__x10__io__Console(
      );
    void _constructor();
    
    static ::x10::io::Console* _make();
    
    virtual void __fieldInitializers_x10_io_Console();
    
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
#endif // X10_IO_CONSOLE_H

namespace x10 { namespace io { 
class Console;
} } 

#ifndef X10_IO_CONSOLE_H_NODEPS
#define X10_IO_CONSOLE_H_NODEPS
#include <x10/io/OutputStreamWriter__OutputStream.h>
#include <x10/compiler/Native.h>
#include <x10/io/InputStreamReader__InputStream.h>
#include <x10/io/Printer.h>
#include <x10/io/Writer.h>
#include <x10/io/OutputStreamWriter.h>
#include <x10/io/Reader.h>
#include <x10/io/InputStreamReader.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_IO_CONSOLE_H_GENERICS
#define X10_IO_CONSOLE_H_GENERICS
inline ::x10::io::Printer* x10::io::Console::FMGL(OUT__get)() {
    if (FMGL(OUT__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(OUT__init)();
    }
    return x10::io::Console::FMGL(OUT);
}

inline ::x10::io::Printer* x10::io::Console::FMGL(ERR__get)() {
    if (FMGL(ERR__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(ERR__init)();
    }
    return x10::io::Console::FMGL(ERR);
}

inline ::x10::io::Reader* x10::io::Console::FMGL(IN__get)() {
    if (FMGL(IN__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(IN__init)();
    }
    return x10::io::Console::FMGL(IN);
}

#endif // X10_IO_CONSOLE_H_GENERICS
#endif // __X10_IO_CONSOLE_H_NODEPS
