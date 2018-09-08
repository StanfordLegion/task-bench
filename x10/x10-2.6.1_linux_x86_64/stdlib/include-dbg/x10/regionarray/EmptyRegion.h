#ifndef __X10_REGIONARRAY_EMPTYREGION_H
#define __X10_REGIONARRAY_EMPTYREGION_H

#include <x10rt.h>


#define X10_REGIONARRAY_REGION_H_NODEPS
#include <x10/regionarray/Region.h>
#undef X10_REGIONARRAY_REGION_H_NODEPS
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace regionarray { 
class EmptyRegion__ERIterator;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class EmptyRegion_Strings {
  public:
    static ::x10::lang::String sl__156352;
    static ::x10::lang::String sl__156354;
    static ::x10::lang::String sl__156349;
    static ::x10::lang::String sl__156350;
    static ::x10::lang::String sl__156353;
    static ::x10::lang::String sl__156351;
};

class EmptyRegion : public ::x10::regionarray::Region   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::x10::regionarray::Region::indexOf;
    using ::x10::regionarray::Region::min;
    using ::x10::regionarray::Region::max;
    using ::x10::regionarray::Region::contains;
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterable< ::x10::lang::Point*>::itable< ::x10::regionarray::EmptyRegion > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::EmptyRegion > _itable_1;
    
    void _constructor(x10_long rank);
    
    static ::x10::regionarray::EmptyRegion* _make(x10_long rank);
    
    virtual x10_boolean isConvex();
    virtual x10_boolean isEmpty();
    virtual x10_long size();
    virtual x10_long indexOf(::x10::lang::Point* id__217);
    virtual ::x10::regionarray::Region* intersection(::x10::regionarray::Region* that);
    virtual ::x10::regionarray::Region* product(::x10::regionarray::Region* that);
    virtual ::x10::regionarray::Region* projection(x10_long axis);
    virtual ::x10::regionarray::Region* translate(::x10::lang::Point* p);
    virtual ::x10::regionarray::Region* eliminate(x10_long i);
    virtual ::x10::regionarray::Region* computeBoundingBox();
    virtual ::x10::lang::Fun_0_1<x10_long, x10_long>* min();
    virtual ::x10::lang::Fun_0_1<x10_long, x10_long>* max();
    virtual x10_boolean contains(::x10::regionarray::Region* that);
    virtual x10_boolean contains(::x10::lang::Point* p);
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator();
    virtual ::x10::lang::String* toString();
    virtual ::x10::regionarray::EmptyRegion* x10__regionarray__EmptyRegion____this__x10__regionarray__EmptyRegion(
      );
    virtual void __fieldInitializers_x10_regionarray_EmptyRegion(
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
#endif // X10_REGIONARRAY_EMPTYREGION_H

namespace x10 { namespace regionarray { 
class EmptyRegion;
} } 

#ifndef X10_REGIONARRAY_EMPTYREGION_H_NODEPS
#define X10_REGIONARRAY_EMPTYREGION_H_NODEPS
#ifndef X10_REGIONARRAY_EMPTYREGION_H_GENERICS
#define X10_REGIONARRAY_EMPTYREGION_H_GENERICS
#endif // X10_REGIONARRAY_EMPTYREGION_H_GENERICS
#endif // __X10_REGIONARRAY_EMPTYREGION_H_NODEPS
