#ifndef __X10_REGIONARRAY_POLYMATBUILDER_H
#define __X10_REGIONARRAY_POLYMATBUILDER_H

#include <x10rt.h>


#define X10_REGIONARRAY_MATBUILDER_H_NODEPS
#include <x10/regionarray/MatBuilder.h>
#undef X10_REGIONARRAY_MATBUILDER_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace regionarray { 
class PolyMat;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace regionarray { 
class Row;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace regionarray { 
class PolyRow;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class PolyMatBuilder_Strings {
  public:
    static ::x10::lang::String sl__156466;
};

class PolyMatBuilder : public ::x10::regionarray::MatBuilder   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(rank);
    
    using ::x10::regionarray::MatBuilder::add;
    
    void _constructor(x10_long rank);
    
    static ::x10::regionarray::PolyMatBuilder* _make(x10_long rank);
    
    virtual ::x10::regionarray::PolyMat* toSortedPolyMat(x10_boolean isSimplified);
    /* Static field: FMGL(ZERO) */
    static const x10_int FMGL(ZERO) = 178956970;
    static x10_int FMGL(ZERO__get)();
    
    /* Static field: FMGL(GE) */
    static const x10_int FMGL(GE) = 0;
    static x10_int FMGL(GE__get)();
    
    /* Static field: FMGL(LE) */
    static const x10_int FMGL(LE) = 1;
    static x10_int FMGL(LE__get)();
    
    static x10_int X(x10_int axis);
    virtual void add(x10_int coeff, x10_int op, x10_int k);
    virtual ::x10::regionarray::PolyMatBuilder* x10__regionarray__PolyMatBuilder____this__x10__regionarray__PolyMatBuilder(
      );
    virtual void __fieldInitializers_x10_regionarray_PolyMatBuilder(
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
#endif // X10_REGIONARRAY_POLYMATBUILDER_H

namespace x10 { namespace regionarray { 
class PolyMatBuilder;
} } 

#ifndef X10_REGIONARRAY_POLYMATBUILDER_H_NODEPS
#define X10_REGIONARRAY_POLYMATBUILDER_H_NODEPS
#ifndef X10_REGIONARRAY_POLYMATBUILDER_H_GENERICS
#define X10_REGIONARRAY_POLYMATBUILDER_H_GENERICS
inline x10_int x10::regionarray::PolyMatBuilder::FMGL(ZERO__get)() {
    return x10::regionarray::PolyMatBuilder::FMGL(ZERO);
}

inline x10_int x10::regionarray::PolyMatBuilder::FMGL(GE__get)() {
    return x10::regionarray::PolyMatBuilder::FMGL(GE);
}

inline x10_int x10::regionarray::PolyMatBuilder::FMGL(LE__get)() {
    return x10::regionarray::PolyMatBuilder::FMGL(LE);
}

#endif // X10_REGIONARRAY_POLYMATBUILDER_H_GENERICS
#endif // __X10_REGIONARRAY_POLYMATBUILDER_H_NODEPS
