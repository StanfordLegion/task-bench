#ifndef __X10_REGIONARRAY_VARMAT_H
#define __X10_REGIONARRAY_VARMAT_H

#include <x10rt.h>


#define X10_REGIONARRAY_MAT_H_NODEPS
#include <x10/regionarray/Mat.h>
#undef X10_REGIONARRAY_MAT_H_NODEPS
namespace x10 { namespace regionarray { 
class VarRow;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class VarMat : public ::x10::regionarray::Mat< ::x10::regionarray::VarRow*>
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Fun_0_1<x10_int, ::x10::regionarray::VarRow*>::itable< ::x10::regionarray::VarMat > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::VarMat > _itable_1;
    
    static ::x10::lang::Iterable< ::x10::regionarray::VarRow*>::itable< ::x10::regionarray::VarMat > _itable_2;
    
    void _constructor(x10_int cols, ::x10::lang::Rail< ::x10::regionarray::VarRow* >* mat);
    
    static ::x10::regionarray::VarMat* _make(x10_int cols, ::x10::lang::Rail< ::x10::regionarray::VarRow* >* mat);
    
    void _constructor(x10_int rows, x10_int cols, ::x10::lang::Fun_0_1<x10_int, ::x10::regionarray::VarRow*>* init);
    
    static ::x10::regionarray::VarMat* _make(x10_int rows, x10_int cols, ::x10::lang::Fun_0_1<x10_int, ::x10::regionarray::VarRow*>* init);
    
    void _constructor(x10_int rows, x10_int cols, ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>* init);
    
    static ::x10::regionarray::VarMat* _make(x10_int rows, x10_int cols, ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>* init);
    
    void _constructor(x10_int rows, x10_int cols);
    
    static ::x10::regionarray::VarMat* _make(x10_int rows, x10_int cols);
    
    virtual ::x10::regionarray::VarMat* x10__regionarray__VarMat____this__x10__regionarray__VarMat(
      );
    virtual void __fieldInitializers_x10_regionarray_VarMat();
    
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
#endif // X10_REGIONARRAY_VARMAT_H

namespace x10 { namespace regionarray { 
class VarMat;
} } 

#ifndef X10_REGIONARRAY_VARMAT_H_NODEPS
#define X10_REGIONARRAY_VARMAT_H_NODEPS
#ifndef X10_REGIONARRAY_VARMAT_H_GENERICS
#define X10_REGIONARRAY_VARMAT_H_GENERICS
#endif // X10_REGIONARRAY_VARMAT_H_GENERICS
#endif // __X10_REGIONARRAY_VARMAT_H_NODEPS
