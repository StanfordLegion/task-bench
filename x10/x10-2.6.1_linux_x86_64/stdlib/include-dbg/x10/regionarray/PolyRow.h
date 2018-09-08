#ifndef __X10_REGIONARRAY_POLYROW_H
#define __X10_REGIONARRAY_POLYROW_H

#include <x10rt.h>


#define X10_REGIONARRAY_VALROW_H_NODEPS
#include <x10/regionarray/ValRow.h>
#undef X10_REGIONARRAY_VALROW_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace regionarray { 
class Row;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class PolyRow_Strings {
  public:
    static ::x10::lang::String sl__156588;
    static ::x10::lang::String sl__156590;
    static ::x10::lang::String sl__156591;
    static ::x10::lang::String sl__156592;
    static ::x10::lang::String sl__156584;
    static ::x10::lang::String sl__156586;
    static ::x10::lang::String sl__156587;
    static ::x10::lang::String sl__156585;
    static ::x10::lang::String sl__156589;
    static ::x10::lang::String sl__156593;
};

class PolyRow : public ::x10::regionarray::ValRow   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(rank);
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Fun_0_1<x10_int, x10_int>::itable< ::x10::regionarray::PolyRow > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::PolyRow > _itable_1;
    
    void _constructor(::x10::lang::Rail< x10_int >* as_);
    
    static ::x10::regionarray::PolyRow* _make(::x10::lang::Rail< x10_int >* as_);
    
    void _constructor(::x10::lang::Rail< x10_int >* as_, x10_long n);
    
    static ::x10::regionarray::PolyRow* _make(::x10::lang::Rail< x10_int >* as_,
                                              x10_long n);
    
    void _constructor(::x10::lang::Point* p, x10_int k);
    
    static ::x10::regionarray::PolyRow* _make(::x10::lang::Point* p, x10_int k);
    
    void _constructor(x10_int cols, ::x10::lang::Fun_0_1<x10_int, x10_int>* init);
    
    static ::x10::regionarray::PolyRow* _make(x10_int cols, ::x10::lang::Fun_0_1<x10_int, x10_int>* init);
    
    static x10_int compare(::x10::regionarray::Row* a, ::x10::regionarray::Row* b);
    virtual x10_boolean isParallel(::x10::regionarray::PolyRow* that);
    virtual x10_boolean isRect();
    virtual x10_boolean contains(::x10::lang::Point* p);
    virtual ::x10::regionarray::PolyRow* complement();
    virtual void printEqn(::x10::io::Printer* ps, ::x10::lang::String* spc,
                          x10_int row);
    virtual ::x10::regionarray::PolyRow* x10__regionarray__PolyRow____this__x10__regionarray__PolyRow(
      );
    virtual void __fieldInitializers_x10_regionarray_PolyRow();
    
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
#endif // X10_REGIONARRAY_POLYROW_H

namespace x10 { namespace regionarray { 
class PolyRow;
} } 

#ifndef X10_REGIONARRAY_POLYROW_H_NODEPS
#define X10_REGIONARRAY_POLYROW_H_NODEPS
#ifndef X10_REGIONARRAY_POLYROW_H_GENERICS
#define X10_REGIONARRAY_POLYROW_H_GENERICS
#endif // X10_REGIONARRAY_POLYROW_H_GENERICS
#endif // __X10_REGIONARRAY_POLYROW_H_NODEPS
