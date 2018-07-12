#ifndef __X10_UTIL_FOREACH_BASIC_H
#define __X10_UTIL_FOREACH_BASIC_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace foreach { 

class Basic : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void _kwd__for(::x10::array::DenseIterationSpace_2* space, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    virtual ::x10::util::foreach::Basic* x10__util__foreach__Basic____this__x10__util__foreach__Basic(
      );
    void _constructor();
    
    static ::x10::util::foreach::Basic* _make();
    
    virtual void __fieldInitializers_x10_util_foreach_Basic();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_UTIL_FOREACH_BASIC_H

namespace x10 { namespace util { namespace foreach { 
class Basic;
} } } 

#ifndef X10_UTIL_FOREACH_BASIC_H_NODEPS
#define X10_UTIL_FOREACH_BASIC_H_NODEPS
#ifndef X10_UTIL_FOREACH_BASIC_H_GENERICS
#define X10_UTIL_FOREACH_BASIC_H_GENERICS
#endif // X10_UTIL_FOREACH_BASIC_H_GENERICS
#endif // __X10_UTIL_FOREACH_BASIC_H_NODEPS
