#ifndef __X10_REGIONARRAY_POLYMAT_H
#define __X10_REGIONARRAY_POLYMAT_H

#include <x10rt.h>


#define X10_REGIONARRAY_MAT_H_NODEPS
#include <x10/regionarray/Mat.h>
#undef X10_REGIONARRAY_MAT_H_NODEPS
namespace x10 { namespace regionarray { 
class PolyRow;
} } 
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace regionarray { 
class PolyMatBuilder;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace regionarray { 
class MatBuilder;
} } 
namespace x10 { namespace regionarray { 
class Row;
} } 
namespace x10 { namespace regionarray { 
class ValRow;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace regionarray { 
class UnboundedRegionException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class PolyMat_Strings {
  public:
    static ::x10::lang::String sl__156471;
    static ::x10::lang::String sl__156472;
    static ::x10::lang::String sl__156474;
    static ::x10::lang::String sl__156476;
    static ::x10::lang::String sl__156473;
    static ::x10::lang::String sl__156475;
};

class PolyMat : public ::x10::regionarray::Mat< ::x10::regionarray::PolyRow*>
  {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(rank);
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Fun_0_1<x10_int, ::x10::regionarray::PolyRow*>::itable< ::x10::regionarray::PolyMat > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::PolyMat > _itable_1;
    
    static ::x10::lang::Iterable< ::x10::regionarray::PolyRow*>::itable< ::x10::regionarray::PolyMat > _itable_2;
    
    x10_boolean FMGL(isSimplified);
    
    void _constructor(x10_int rows, x10_int cols, ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>* init,
                      x10_boolean isSimplified);
    
    static ::x10::regionarray::PolyMat* _make(x10_int rows, x10_int cols,
                                              ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>* init,
                                              x10_boolean isSimplified);
    
    virtual ::x10::regionarray::PolyMat* simplifyParallel(
      );
    virtual ::x10::regionarray::PolyMat* simplifyAll();
    virtual ::x10::regionarray::PolyMat* eliminate(x10_int k,
                                                   x10_boolean simplifyDegenerate);
    virtual x10_boolean isRect();
    virtual x10_int rectMin(x10_int axis);
    virtual x10_int rectMax(x10_int axis);
    virtual ::x10::lang::Rail< x10_int >* rectMin();
    virtual ::x10::lang::Rail< x10_int >* rectMax();
    virtual x10_boolean isZeroBased();
    virtual x10_boolean isBounded();
    virtual x10_boolean isEmpty();
    virtual ::x10::regionarray::PolyMat* __or(::x10::regionarray::PolyMat* that);
    virtual ::x10::lang::String* toString();
    virtual ::x10::regionarray::PolyMat* x10__regionarray__PolyMat____this__x10__regionarray__PolyMat(
      );
    virtual void __fieldInitializers_x10_regionarray_PolyMat(
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
#endif // X10_REGIONARRAY_POLYMAT_H

namespace x10 { namespace regionarray { 
class PolyMat;
} } 

#ifndef X10_REGIONARRAY_POLYMAT_H_NODEPS
#define X10_REGIONARRAY_POLYMAT_H_NODEPS
#ifndef X10_REGIONARRAY_POLYMAT_H_GENERICS
#define X10_REGIONARRAY_POLYMAT_H_GENERICS
#endif // X10_REGIONARRAY_POLYMAT_H_GENERICS
#endif // __X10_REGIONARRAY_POLYMAT_H_NODEPS
