#ifndef __X10_REGIONARRAY_POLYSCANNER__ANONYMOUS__10018_H
#define __X10_REGIONARRAY_POLYSCANNER__ANONYMOUS__10018_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace regionarray { 
class PolyScanner;
} } 
namespace x10 { namespace regionarray { 
class PolyScanner__RailIt;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 

namespace x10 { namespace regionarray { 

class PolyScanner__Anonymous__10018_Strings {
  public:
    static ::x10::lang::String sl__156765;
};

class PolyScanner__Anonymous__10018 : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterator< ::x10::lang::Point*>::itable< ::x10::regionarray::PolyScanner__Anonymous__10018 > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::PolyScanner__Anonymous__10018 > _itable_1;
    
    ::x10::regionarray::PolyScanner* FMGL(out__);
    
    ::x10::regionarray::PolyScanner__RailIt* FMGL(it);
    
    virtual x10_boolean hasNext();
    virtual ::x10::lang::Point* next();
    void _constructor(::x10::regionarray::PolyScanner* out__);
    
    static ::x10::regionarray::PolyScanner__Anonymous__10018* _make(::x10::regionarray::PolyScanner* out__);
    
    
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
#endif // X10_REGIONARRAY_POLYSCANNER__ANONYMOUS__10018_H

namespace x10 { namespace regionarray { 
class PolyScanner__Anonymous__10018;
} } 

#ifndef X10_REGIONARRAY_POLYSCANNER__ANONYMOUS__10018_H_NODEPS
#define X10_REGIONARRAY_POLYSCANNER__ANONYMOUS__10018_H_NODEPS
#ifndef X10_REGIONARRAY_POLYSCANNER__ANONYMOUS__10018_H_GENERICS
#define X10_REGIONARRAY_POLYSCANNER__ANONYMOUS__10018_H_GENERICS
#endif // X10_REGIONARRAY_POLYSCANNER__ANONYMOUS__10018_H_GENERICS
#endif // __X10_REGIONARRAY_POLYSCANNER__ANONYMOUS__10018_H_NODEPS
