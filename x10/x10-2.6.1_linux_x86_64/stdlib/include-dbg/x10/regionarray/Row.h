#ifndef __X10_REGIONARRAY_ROW_H
#define __X10_REGIONARRAY_ROW_H

#include <x10rt.h>


#define X10_LANG_FUN_0_1_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#undef X10_LANG_FUN_0_1_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class StringWriter;
} } 
namespace x10 { namespace io { 
class Writer;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class Row_Strings {
  public:
    static ::x10::lang::String sl__157250;
    static ::x10::lang::String sl__157257;
    static ::x10::lang::String sl__157252;
    static ::x10::lang::String sl__157253;
    static ::x10::lang::String sl__157251;
    static ::x10::lang::String sl__157247;
    static ::x10::lang::String sl__157255;
    static ::x10::lang::String sl__157256;
    static ::x10::lang::String sl__157248;
    static ::x10::lang::String sl__157254;
    static ::x10::lang::String sl__157249;
    static ::x10::lang::String sl__157258;
};

class Row : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_int FMGL(cols);
    
    virtual x10_int __apply(x10_int i) = 0;
    virtual x10_int __set(x10_int i, x10_int v) = 0;
    void _constructor(x10_int cols);
    
    virtual void printInfo(::x10::io::Printer* ps, x10_int row);
    virtual void printEqn(::x10::io::Printer* ps, ::x10::lang::String* spc,
                          x10_int row);
    virtual ::x10::lang::String* toString();
    virtual ::x10::regionarray::Row* x10__regionarray__Row____this__x10__regionarray__Row(
      );
    virtual void __fieldInitializers_x10_regionarray_Row();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_REGIONARRAY_ROW_H

namespace x10 { namespace regionarray { 
class Row;
} } 

#ifndef X10_REGIONARRAY_ROW_H_NODEPS
#define X10_REGIONARRAY_ROW_H_NODEPS
#ifndef X10_REGIONARRAY_ROW_H_GENERICS
#define X10_REGIONARRAY_ROW_H_GENERICS
#endif // X10_REGIONARRAY_ROW_H_GENERICS
#endif // __X10_REGIONARRAY_ROW_H_NODEPS
