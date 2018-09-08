#ifndef __X10_REGIONARRAY_RECTREGION__RRITERATOR_H
#define __X10_REGIONARRAY_RECTREGION__RRITERATOR_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
namespace x10 { namespace lang { 
class Point;
} } 
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace regionarray { 
class RectRegion;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class RectRegion__RRIterator_Strings {
  public:
    static ::x10::lang::String sl__167358;
};

class RectRegion__RRIterator : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(myRank);
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterator< ::x10::lang::Point*>::itable< ::x10::regionarray::RectRegion__RRIterator > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::RectRegion__RRIterator > _itable_1;
    
    ::x10::lang::Fun_0_1<x10_long, x10_long>* FMGL(min);
    
    ::x10::lang::Fun_0_1<x10_long, x10_long>* FMGL(max);
    
    x10_boolean FMGL(done);
    
    ::x10::lang::Rail< x10_long >* FMGL(cur);
    
    void _constructor(::x10::regionarray::RectRegion* rr);
    
    static ::x10::regionarray::RectRegion__RRIterator* _make(::x10::regionarray::RectRegion* rr);
    
    virtual x10_boolean hasNext();
    virtual ::x10::lang::Point* next();
    virtual ::x10::regionarray::RectRegion__RRIterator* x10__regionarray__RectRegion__RRIterator____this__x10__regionarray__RectRegion__RRIterator(
      );
    virtual void __fieldInitializers_x10_regionarray_RectRegion_RRIterator(
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
#endif // X10_REGIONARRAY_RECTREGION__RRITERATOR_H

namespace x10 { namespace regionarray { 
class RectRegion__RRIterator;
} } 

#ifndef X10_REGIONARRAY_RECTREGION__RRITERATOR_H_NODEPS
#define X10_REGIONARRAY_RECTREGION__RRITERATOR_H_NODEPS
#ifndef X10_REGIONARRAY_RECTREGION__RRITERATOR_H_GENERICS
#define X10_REGIONARRAY_RECTREGION__RRITERATOR_H_GENERICS
#endif // X10_REGIONARRAY_RECTREGION__RRITERATOR_H_GENERICS
#endif // __X10_REGIONARRAY_RECTREGION__RRITERATOR_H_NODEPS
