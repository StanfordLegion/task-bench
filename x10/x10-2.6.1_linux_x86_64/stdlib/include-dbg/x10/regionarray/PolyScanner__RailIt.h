#ifndef __X10_REGIONARRAY_POLYSCANNER__RAILIT_H
#define __X10_REGIONARRAY_POLYSCANNER__RAILIT_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace regionarray { 
class PolyScanner;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class PolyScanner__RailIt : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterator< ::x10::lang::Rail< x10_int >*>::itable< ::x10::regionarray::PolyScanner__RailIt > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::PolyScanner__RailIt > _itable_1;
    
    ::x10::regionarray::PolyScanner* FMGL(out__);
    
    x10_long FMGL(rank);
    
    ::x10::regionarray::PolyScanner* FMGL(s);
    
    ::x10::lang::Rail< x10_int >* FMGL(x);
    
    ::x10::lang::Rail< x10_int >* FMGL(myMin);
    
    ::x10::lang::Rail< x10_int >* FMGL(myMax);
    
    x10_int FMGL(k);
    
    x10_boolean FMGL(doesHaveNext);
    
    void _constructor(::x10::regionarray::PolyScanner* out__);
    
    static ::x10::regionarray::PolyScanner__RailIt* _make(::x10::regionarray::PolyScanner* out__);
    
    virtual x10_boolean hasNext();
    void checkHasNext();
    virtual ::x10::lang::Rail< x10_int >* next();
    virtual void remove();
    virtual ::x10::regionarray::PolyScanner__RailIt* x10__regionarray__PolyScanner__RailIt____this__x10__regionarray__PolyScanner__RailIt(
      );
    virtual ::x10::regionarray::PolyScanner* x10__regionarray__PolyScanner__RailIt____this__x10__regionarray__PolyScanner(
      );
    virtual void __fieldInitializers_x10_regionarray_PolyScanner_RailIt(
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
#endif // X10_REGIONARRAY_POLYSCANNER__RAILIT_H

namespace x10 { namespace regionarray { 
class PolyScanner__RailIt;
} } 

#ifndef X10_REGIONARRAY_POLYSCANNER__RAILIT_H_NODEPS
#define X10_REGIONARRAY_POLYSCANNER__RAILIT_H_NODEPS
#ifndef X10_REGIONARRAY_POLYSCANNER__RAILIT_H_GENERICS
#define X10_REGIONARRAY_POLYSCANNER__RAILIT_H_GENERICS
#endif // X10_REGIONARRAY_POLYSCANNER__RAILIT_H_GENERICS
#endif // __X10_REGIONARRAY_POLYSCANNER__RAILIT_H_NODEPS
