#ifndef __X10_IO_PRINTER_H
#define __X10_IO_PRINTER_H

#include <x10rt.h>


#define X10_IO_FILTERWRITER_H_NODEPS
#include <x10/io/FilterWriter.h>
#undef X10_IO_FILTERWRITER_H_NODEPS
namespace x10 { namespace io { 
class Writer;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace io { 
class IOException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

class Printer_Strings {
  public:
    static ::x10::lang::String sl__154787;
    static ::x10::lang::String sl__154785;
    static ::x10::lang::String sl__154786;
};

class Printer : public ::x10::io::FilterWriter   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(::x10::io::Writer* w);
    
    static ::x10::io::Printer* _make(::x10::io::Writer* w);
    
    /* Static field: FMGL(NEWLINE) */
    static x10_char FMGL(NEWLINE);
    static void FMGL(NEWLINE__do_init)();
    static void FMGL(NEWLINE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(NEWLINE__status);
    static ::x10::lang::CheckedThrowable* FMGL(NEWLINE__exception);
    static x10_char FMGL(NEWLINE__get)();
    
    ::x10::util::concurrent::Lock* FMGL(lock);
    
    virtual void println();
    virtual void println(::x10::lang::Any* o);
    virtual void println(::x10::lang::CheckedThrowable* e);
    virtual void print(::x10::lang::Any* o);
    virtual void print(::x10::lang::String* s);
    virtual void print(::x10::lang::CheckedThrowable* e);
    virtual void printf(::x10::lang::String* fmt);
    virtual void printf(::x10::lang::String* fmt, ::x10::lang::Any* o1);
    virtual void printf(::x10::lang::String* fmt, ::x10::lang::Any* o1, ::x10::lang::Any* o2);
    virtual void printf(::x10::lang::String* fmt, ::x10::lang::Any* o1, ::x10::lang::Any* o2,
                        ::x10::lang::Any* o3);
    virtual void printf(::x10::lang::String* fmt, ::x10::lang::Any* o1,
                        ::x10::lang::Any* o2, ::x10::lang::Any* o3,
                        ::x10::lang::Any* o4);
    virtual void printf(::x10::lang::String* fmt, ::x10::lang::Any* o1,
                        ::x10::lang::Any* o2, ::x10::lang::Any* o3,
                        ::x10::lang::Any* o4, ::x10::lang::Any* o5);
    virtual void printf(::x10::lang::String* fmt, ::x10::lang::Any* o1,
                        ::x10::lang::Any* o2, ::x10::lang::Any* o3,
                        ::x10::lang::Any* o4, ::x10::lang::Any* o5,
                        ::x10::lang::Any* o6);
    virtual void printf(::x10::lang::String* fmt, ::x10::lang::Rail< ::x10::lang::Any* >* args);
    virtual void printfRail(::x10::lang::String* fmt, ::x10::lang::Rail< ::x10::lang::Any* >* args);
    virtual void flush();
    virtual void close();
    virtual ::x10::io::Printer* x10__io__Printer____this__x10__io__Printer(
      );
    virtual void __fieldInitializers_x10_io_Printer();
    
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
#endif // X10_IO_PRINTER_H

namespace x10 { namespace io { 
class Printer;
} } 

#ifndef X10_IO_PRINTER_H_NODEPS
#define X10_IO_PRINTER_H_NODEPS
#include <x10/io/FilterWriter.h>
#include <x10/io/Writer.h>
#include <x10/lang/Char.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Finalization.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Unsafe.h>
#include <x10/io/IOException.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_IO_PRINTER_H_GENERICS
#define X10_IO_PRINTER_H_GENERICS
inline x10_char x10::io::Printer::FMGL(NEWLINE__get)() {
    if (FMGL(NEWLINE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(NEWLINE__init)();
    }
    return x10::io::Printer::FMGL(NEWLINE);
}

#endif // X10_IO_PRINTER_H_GENERICS
#endif // __X10_IO_PRINTER_H_NODEPS
