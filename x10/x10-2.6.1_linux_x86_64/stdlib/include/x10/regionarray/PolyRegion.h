#ifndef __X10_REGIONARRAY_POLYREGION_H
#define __X10_REGIONARRAY_POLYREGION_H

#include <x10rt.h>


#define X10_REGIONARRAY_REGION_H_NODEPS
#include <x10/regionarray/Region.h>
#undef X10_REGIONARRAY_REGION_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace regionarray { 
class PolyMat;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace compiler { 
class Incomplete;
} } 
namespace x10 { namespace regionarray { 
class PolyScanner;
} } 
namespace x10 { namespace regionarray { 
class PolyScanner__Anonymous__10018;
} } 
namespace x10 { namespace regionarray { 
class PolyMatBuilder;
} } 
namespace x10 { namespace regionarray { 
class PolyRow;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Mat;
} } 
namespace x10 { namespace regionarray { 
class MatBuilder;
} } 
namespace x10 { namespace regionarray { 
class Row;
} } 
namespace x10 { namespace regionarray { 
class RectRegion;
} } 
namespace x10 { namespace regionarray { 
class RectRegion1D;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace regionarray { 
class ValRow;
} } 
namespace x10 { namespace regionarray { 
class EmptyRegion;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class PolyRegion_Strings {
  public:
    static ::x10::lang::String sl__166742;
    static ::x10::lang::String sl__166745;
    static ::x10::lang::String sl__166743;
    static ::x10::lang::String sl__166740;
    static ::x10::lang::String sl__166741;
    static ::x10::lang::String sl__166739;
    static ::x10::lang::String sl__166744;
};

class PolyRegion : public ::x10::regionarray::Region   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::x10::regionarray::Region::indexOf;
    using ::x10::regionarray::Region::contains;
    using ::x10::regionarray::Region::min;
    using ::x10::regionarray::Region::max;
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterable< ::x10::lang::Point*>::itable< ::x10::regionarray::PolyRegion > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::PolyRegion > _itable_1;
    
    ::x10::regionarray::PolyMat* FMGL(mat);
    
    virtual x10_boolean isConvex();
    x10_long FMGL(size);
    
    virtual x10_long size();
    virtual x10_long indexOf(::x10::lang::Point* id__228);
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator();
    virtual ::x10::regionarray::Region* intersection(::x10::regionarray::Region* t);
    virtual x10_boolean contains(::x10::regionarray::Region* that);
    virtual ::x10::regionarray::Region* projection(x10_long axis);
    virtual ::x10::regionarray::Region* eliminate(x10_long axis);
    virtual ::x10::regionarray::Region* product(::x10::regionarray::Region* r);
    static void copy(::x10::regionarray::PolyMatBuilder* tt, ::x10::regionarray::PolyMat* ff,
                     x10_int offset);
    virtual ::x10::regionarray::Region* translate(::x10::lang::Point* v);
    static void translate(::x10::regionarray::PolyMatBuilder* tt,
                          ::x10::regionarray::PolyMat* ff, ::x10::lang::Point* v);
    virtual x10_boolean isEmpty();
    virtual ::x10::regionarray::Region* computeBoundingBox();
    virtual x10_boolean contains(::x10::lang::Point* p);
    /* Static field: FMGL(ROW) */
    static x10_int FMGL(ROW);
    static void FMGL(ROW__do_init)();
    static void FMGL(ROW__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(ROW__status);
    static ::x10::lang::CheckedThrowable* FMGL(ROW__exception);
    static x10_int FMGL(ROW__get)();
    
    /* Static field: FMGL(COL) */
    static x10_int FMGL(COL);
    static void FMGL(COL__do_init)();
    static void FMGL(COL__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(COL__status);
    static ::x10::lang::CheckedThrowable* FMGL(COL__exception);
    static x10_int FMGL(COL__get)();
    
    static ::x10::regionarray::Region* makeBanded(x10_int rowMin,
                                                  x10_int colMin,
                                                  x10_int rowMax,
                                                  x10_int colMax,
                                                  x10_int upper, x10_int lower);
    static ::x10::regionarray::Region* makeBanded(x10_int size, x10_int upper,
                                                  x10_int lower);
    static ::x10::regionarray::Region* makeUpperTriangular2(x10_int rowMin,
                                                            x10_int colMin,
                                                            x10_int size);
    static ::x10::regionarray::Region* makeLowerTriangular2(x10_int rowMin,
                                                            x10_int colMin,
                                                            x10_int size);
    static ::x10::regionarray::Region* make(::x10::regionarray::PolyMat* pm);
    void _constructor(::x10::regionarray::PolyMat* pm, x10_boolean hack198);
    
    static ::x10::regionarray::PolyRegion* _make(::x10::regionarray::PolyMat* pm,
                                                 x10_boolean hack198);
    
    virtual ::x10::lang::Fun_0_1<x10_long, x10_long>* min(
      );
    virtual ::x10::lang::Fun_0_1<x10_long, x10_long>* max(
      );
    virtual void printInfo(::x10::io::Printer* out);
    virtual ::x10::lang::String* toString();
    virtual ::x10::regionarray::PolyRegion* x10__regionarray__PolyRegion____this__x10__regionarray__PolyRegion(
      );
    virtual void __fieldInitializers_x10_regionarray_PolyRegion(
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
#endif // X10_REGIONARRAY_POLYREGION_H

namespace x10 { namespace regionarray { 
class PolyRegion;
} } 

#ifndef X10_REGIONARRAY_POLYREGION_H_NODEPS
#define X10_REGIONARRAY_POLYREGION_H_NODEPS
#ifndef X10_REGIONARRAY_POLYREGION_H_GENERICS
#define X10_REGIONARRAY_POLYREGION_H_GENERICS
inline x10_int x10::regionarray::PolyRegion::FMGL(ROW__get)() {
    if (FMGL(ROW__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(ROW__init)();
    }
    return x10::regionarray::PolyRegion::FMGL(ROW);
}

inline x10_int x10::regionarray::PolyRegion::FMGL(COL__get)() {
    if (FMGL(COL__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(COL__init)();
    }
    return x10::regionarray::PolyRegion::FMGL(COL);
}

#endif // X10_REGIONARRAY_POLYREGION_H_GENERICS
#endif // __X10_REGIONARRAY_POLYREGION_H_NODEPS
