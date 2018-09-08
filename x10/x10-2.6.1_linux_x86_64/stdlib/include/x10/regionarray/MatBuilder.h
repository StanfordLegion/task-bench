#ifndef __X10_REGIONARRAY_MATBUILDER_H
#define __X10_REGIONARRAY_MATBUILDER_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace regionarray { 
class Row;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace regionarray { 
class VarRow;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class MatBuilder : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::ArrayList< ::x10::regionarray::Row*>* FMGL(mat);
    
    x10_int FMGL(cols);
    
    void _constructor(x10_int cols);
    
    static ::x10::regionarray::MatBuilder* _make(x10_int cols);
    
    void _constructor(x10_int rows, x10_int cols);
    
    static ::x10::regionarray::MatBuilder* _make(x10_int rows, x10_int cols);
    
    virtual void add(::x10::regionarray::Row* row);
    virtual void add(::x10::lang::Fun_0_1<x10_int, x10_int>* a);
    virtual x10_int __apply(x10_int i, x10_int j);
    virtual void __set(x10_int i, x10_int j, x10_int v);
    virtual void setDiagonal(x10_int i, x10_int j, x10_int n, ::x10::lang::Fun_0_1<x10_int, x10_int>* v);
    virtual void setColumn(x10_int i, x10_int j, x10_int n, ::x10::lang::Fun_0_1<x10_int, x10_int>* v);
    virtual void setRow(x10_int i, x10_int j, x10_int n, ::x10::lang::Fun_0_1<x10_int, x10_int>* v);
    void need(x10_int n);
    static void need(x10_int n, ::x10::util::ArrayList< ::x10::regionarray::Row*>* mat,
                     x10_int cols);
    virtual ::x10::regionarray::MatBuilder* x10__regionarray__MatBuilder____this__x10__regionarray__MatBuilder(
      );
    virtual void __fieldInitializers_x10_regionarray_MatBuilder(
      );
    
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
#endif // X10_REGIONARRAY_MATBUILDER_H

namespace x10 { namespace regionarray { 
class MatBuilder;
} } 

#ifndef X10_REGIONARRAY_MATBUILDER_H_NODEPS
#define X10_REGIONARRAY_MATBUILDER_H_NODEPS
#ifndef X10_REGIONARRAY_MATBUILDER_H_GENERICS
#define X10_REGIONARRAY_MATBUILDER_H_GENERICS
#endif // X10_REGIONARRAY_MATBUILDER_H_GENERICS
#endif // __X10_REGIONARRAY_MATBUILDER_H_NODEPS
