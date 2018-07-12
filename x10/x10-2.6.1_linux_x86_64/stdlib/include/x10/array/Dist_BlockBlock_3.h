#ifndef __X10_ARRAY_DIST_BLOCKBLOCK_3_H
#define __X10_ARRAY_DIST_BLOCKBLOCK_3_H

#include <x10rt.h>


#define X10_ARRAY_DIST_H_NODEPS
#include <x10/array/Dist.h>
#undef X10_ARRAY_DIST_H_NODEPS
namespace x10 { namespace array { 
class DenseIterationSpace_3;
} } 
namespace x10 { namespace compiler { 
class TransientInitExpr;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace array { 
class BlockingUtils;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class Dist_BlockBlock_3 : public ::x10::array::Dist   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::array::DenseIterationSpace_3* FMGL(globalIndices);
    
    ::x10::array::DenseIterationSpace_3* FMGL(localIndices);
    
    virtual ::x10::array::DenseIterationSpace_3* computeLocalIndices();
    void _constructor(::x10::lang::PlaceGroup* pg, ::x10::array::DenseIterationSpace_3* is);
    
    static ::x10::array::Dist_BlockBlock_3* _make(::x10::lang::PlaceGroup* pg,
                                                  ::x10::array::DenseIterationSpace_3* is);
    
    virtual ::x10::array::Dist_BlockBlock_3* x10__array__Dist_BlockBlock_3____this__x10__array__Dist_BlockBlock_3(
      );
    virtual void __fieldInitializers_x10_array_Dist_BlockBlock_3(
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
#endif // X10_ARRAY_DIST_BLOCKBLOCK_3_H

namespace x10 { namespace array { 
class Dist_BlockBlock_3;
} } 

#ifndef X10_ARRAY_DIST_BLOCKBLOCK_3_H_NODEPS
#define X10_ARRAY_DIST_BLOCKBLOCK_3_H_NODEPS
#ifndef X10_ARRAY_DIST_BLOCKBLOCK_3_H_GENERICS
#define X10_ARRAY_DIST_BLOCKBLOCK_3_H_GENERICS
#endif // X10_ARRAY_DIST_BLOCKBLOCK_3_H_GENERICS
#endif // __X10_ARRAY_DIST_BLOCKBLOCK_3_H_NODEPS
