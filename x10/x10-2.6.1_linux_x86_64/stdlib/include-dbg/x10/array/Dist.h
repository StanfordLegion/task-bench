#ifndef __X10_ARRAY_DIST_H
#define __X10_ARRAY_DIST_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class Dist : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::PlaceGroup* FMGL(pg);
    
    ::x10::array::IterationSpace* FMGL(is);
    
    x10_long rank();
    void _constructor(::x10::lang::PlaceGroup* pg, ::x10::array::IterationSpace* is);
    
    virtual ::x10::array::Dist* x10__array__Dist____this__x10__array__Dist(
      );
    virtual void __fieldInitializers_x10_array_Dist();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_ARRAY_DIST_H

namespace x10 { namespace array { 
class Dist;
} } 

#ifndef X10_ARRAY_DIST_H_NODEPS
#define X10_ARRAY_DIST_H_NODEPS
#ifndef X10_ARRAY_DIST_H_GENERICS
#define X10_ARRAY_DIST_H_GENERICS
#endif // X10_ARRAY_DIST_H_GENERICS
#endif // __X10_ARRAY_DIST_H_NODEPS
