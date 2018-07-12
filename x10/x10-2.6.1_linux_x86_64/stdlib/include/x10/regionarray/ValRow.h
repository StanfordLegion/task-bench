#ifndef __X10_REGIONARRAY_VALROW_H
#define __X10_REGIONARRAY_VALROW_H

#include <x10rt.h>


#define X10_REGIONARRAY_ROW_H_NODEPS
#include <x10/regionarray/Row.h>
#undef X10_REGIONARRAY_ROW_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class ValRow_Strings {
  public:
    static ::x10::lang::String sl__167636;
};

class ValRow : public ::x10::regionarray::Row   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Fun_0_1<x10_int, x10_int>::itable< ::x10::regionarray::ValRow > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::ValRow > _itable_1;
    
    ::x10::lang::Rail< x10_int >* FMGL(row);
    
    void _constructor(::x10::lang::Rail< x10_int >* row);
    
    static ::x10::regionarray::ValRow* _make(::x10::lang::Rail< x10_int >* row);
    
    void _constructor(x10_int cols, ::x10::lang::Fun_0_1<x10_int, x10_int>* init);
    
    static ::x10::regionarray::ValRow* _make(x10_int cols, ::x10::lang::Fun_0_1<x10_int, x10_int>* init);
    
    virtual x10_int __apply(x10_int i);
    virtual x10_int __set(x10_int i, x10_int v);
    virtual ::x10::regionarray::ValRow* x10__regionarray__ValRow____this__x10__regionarray__ValRow(
      );
    virtual void __fieldInitializers_x10_regionarray_ValRow();
    
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
#endif // X10_REGIONARRAY_VALROW_H

namespace x10 { namespace regionarray { 
class ValRow;
} } 

#ifndef X10_REGIONARRAY_VALROW_H_NODEPS
#define X10_REGIONARRAY_VALROW_H_NODEPS
#ifndef X10_REGIONARRAY_VALROW_H_GENERICS
#define X10_REGIONARRAY_VALROW_H_GENERICS
#endif // X10_REGIONARRAY_VALROW_H_GENERICS
#endif // __X10_REGIONARRAY_VALROW_H_NODEPS
