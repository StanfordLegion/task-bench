#ifndef __X10_REGIONARRAY_POLYSCANNER_H
#define __X10_REGIONARRAY_POLYSCANNER_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace regionarray { 
class PolyMat;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace regionarray { 
class VarMat;
} } 
namespace x10 { namespace regionarray { 
class PolyRow;
} } 
namespace x10 { namespace regionarray { 
class RectRegion1D;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Mat;
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
namespace x10 { namespace regionarray { 
class VarRow;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace regionarray { 
class PolyScanner__Anonymous__10018;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace regionarray { 
class Row;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class PolyScanner_Strings {
  public:
    static ::x10::lang::String sl__166865;
    static ::x10::lang::String sl__166870;
    static ::x10::lang::String sl__166871;
    static ::x10::lang::String sl__166866;
    static ::x10::lang::String sl__166869;
    static ::x10::lang::String sl__166868;
    static ::x10::lang::String sl__166874;
    static ::x10::lang::String sl__166872;
    static ::x10::lang::String sl__166864;
    static ::x10::lang::String sl__166873;
    static ::x10::lang::String sl__166863;
    static ::x10::lang::String sl__166867;
};

class PolyScanner : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(rank);
    
    ::x10::regionarray::PolyMat* FMGL(C);
    
    ::x10::regionarray::Array< ::x10::regionarray::VarMat*>* FMGL(myMin);
    
    ::x10::regionarray::Array< ::x10::regionarray::VarMat*>* FMGL(myMax);
    
    ::x10::regionarray::Array< ::x10::regionarray::VarMat*>* FMGL(minSum);
    
    ::x10::regionarray::Array< ::x10::regionarray::VarMat*>* FMGL(maxSum);
    
    ::x10::regionarray::Array<x10_boolean>* FMGL(parFlags);
    
    ::x10::regionarray::Array< ::x10::regionarray::Array< ::x10::regionarray::PolyRow*>*>*
      FMGL(min2);
    
    ::x10::regionarray::Array< ::x10::regionarray::Array< ::x10::regionarray::PolyRow*>*>*
      FMGL(max2);
    
    static ::x10::regionarray::PolyScanner* make(::x10::regionarray::PolyMat* pm);
    void _constructor(::x10::regionarray::PolyMat* pm);
    
    static ::x10::regionarray::PolyScanner* _make(::x10::regionarray::PolyMat* pm);
    
    void init();
    void init(::x10::regionarray::PolyMat* pm, x10_int axis);
    virtual void __set(x10_int v, x10_int axis);
    virtual void set(x10_int axis, x10_int v);
    virtual x10_int min(x10_int axis);
    virtual x10_int max(x10_int axis);
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator(
      );
    virtual void printInfo(::x10::io::Printer* ps);
    virtual void printInfo2(::x10::io::Printer* ps);
    virtual ::x10::regionarray::PolyScanner* x10__regionarray__PolyScanner____this__x10__regionarray__PolyScanner(
      );
    virtual void __fieldInitializers_x10_regionarray_PolyScanner(
      );
    
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
#endif // X10_REGIONARRAY_POLYSCANNER_H

namespace x10 { namespace regionarray { 
class PolyScanner;
} } 

#ifndef X10_REGIONARRAY_POLYSCANNER_H_NODEPS
#define X10_REGIONARRAY_POLYSCANNER_H_NODEPS
#ifndef X10_REGIONARRAY_POLYSCANNER_H_GENERICS
#define X10_REGIONARRAY_POLYSCANNER_H_GENERICS
#endif // X10_REGIONARRAY_POLYSCANNER_H_GENERICS
#endif // __X10_REGIONARRAY_POLYSCANNER_H_NODEPS
