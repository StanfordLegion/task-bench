#ifndef __X10_REGIONARRAY_PERIODICBOUNDARYCONDITIONS_H
#define __X10_REGIONARRAY_PERIODICBOUNDARYCONDITIONS_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class PeriodicBoundaryConditions : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_long getPeriodicIndex(x10_long index, x10_long min, x10_long max,
                                     x10_long wrap);
    static ::x10::lang::Point* wrapPeriodic(::x10::lang::Point* pt, ::x10::regionarray::Region* localRegion,
                                            ::x10::regionarray::Region* fullRegion);
    static ::x10::lang::Point* wrapPeriodic(::x10::lang::Point* pt,
                                            ::x10::regionarray::Region* region);
    virtual ::x10::regionarray::PeriodicBoundaryConditions* x10__regionarray__PeriodicBoundaryConditions____this__x10__regionarray__PeriodicBoundaryConditions(
      );
    void _constructor();
    
    static ::x10::regionarray::PeriodicBoundaryConditions* _make(
             );
    
    virtual void __fieldInitializers_x10_regionarray_PeriodicBoundaryConditions(
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
#endif // X10_REGIONARRAY_PERIODICBOUNDARYCONDITIONS_H

namespace x10 { namespace regionarray { 
class PeriodicBoundaryConditions;
} } 

#ifndef X10_REGIONARRAY_PERIODICBOUNDARYCONDITIONS_H_NODEPS
#define X10_REGIONARRAY_PERIODICBOUNDARYCONDITIONS_H_NODEPS
#ifndef X10_REGIONARRAY_PERIODICBOUNDARYCONDITIONS_H_GENERICS
#define X10_REGIONARRAY_PERIODICBOUNDARYCONDITIONS_H_GENERICS
#endif // X10_REGIONARRAY_PERIODICBOUNDARYCONDITIONS_H_GENERICS
#endif // __X10_REGIONARRAY_PERIODICBOUNDARYCONDITIONS_H_NODEPS
