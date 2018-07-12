#ifndef __X10_ARRAY_BLOCKINGUTILS_H
#define __X10_ARRAY_BLOCKINGUTILS_H

#include <x10rt.h>


namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class BlockingUtils : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10::lang::Rail< ::x10::array::DenseIterationSpace_1* >* partitionBlock(
      ::x10::array::IterationSpace* is, x10_long n);
    static ::x10::array::DenseIterationSpace_1* partitionBlock(::x10::array::IterationSpace* is,
                                                               x10_long n,
                                                               x10_long i);
    static ::x10::array::DenseIterationSpace_1* partitionBlock(
      x10_long min, x10_long max, x10_long n, x10_long i);
    static x10_long mapIndexToBlockPartition(::x10::array::IterationSpace* is,
                                             x10_long n, x10_long i);
    static x10_long mapIndexToBlockPartition(x10_long min,
                                             x10_long max,
                                             x10_long n, x10_long i);
    static ::x10::lang::Rail< ::x10::array::DenseIterationSpace_2* >*
      partitionBlockBlock(::x10::array::IterationSpace* is,
                          x10_long n);
    static ::x10::array::DenseIterationSpace_2* partitionBlockBlock(
      ::x10::array::IterationSpace* is, x10_long n, x10_long i);
    static ::x10::array::DenseIterationSpace_2* partitionBlockBlock(
      x10_long min0, x10_long min1, x10_long max0, x10_long max1,
      x10_long n, x10_long i);
    static x10_long mapIndexToBlockBlockPartition(::x10::array::IterationSpace* is,
                                                  x10_long n,
                                                  x10_long i,
                                                  x10_long j);
    static x10_long mapIndexToBlockBlockPartition(x10_long min0,
                                                  x10_long min1,
                                                  x10_long max0,
                                                  x10_long max1,
                                                  x10_long n,
                                                  x10_long i,
                                                  x10_long j);
    virtual ::x10::array::BlockingUtils* x10__array__BlockingUtils____this__x10__array__BlockingUtils(
      );
    void _constructor();
    
    static ::x10::array::BlockingUtils* _make();
    
    virtual void __fieldInitializers_x10_array_BlockingUtils(
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
#endif // X10_ARRAY_BLOCKINGUTILS_H

namespace x10 { namespace array { 
class BlockingUtils;
} } 

#ifndef X10_ARRAY_BLOCKINGUTILS_H_NODEPS
#define X10_ARRAY_BLOCKINGUTILS_H_NODEPS
#ifndef X10_ARRAY_BLOCKINGUTILS_H_GENERICS
#define X10_ARRAY_BLOCKINGUTILS_H_GENERICS
#endif // X10_ARRAY_BLOCKINGUTILS_H_GENERICS
#endif // __X10_ARRAY_BLOCKINGUTILS_H_NODEPS
