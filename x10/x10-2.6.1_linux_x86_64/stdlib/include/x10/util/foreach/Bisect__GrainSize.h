#ifndef __X10_UTIL_FOREACH_BISECT__GRAINSIZE_H
#define __X10_UTIL_FOREACH_BISECT__GRAINSIZE_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
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
namespace x10 { namespace util { namespace foreach { 
class Bisect;
} } } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace foreach { 

class Bisect__GrainSize : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(grainSize);
    
    void _constructor(x10_long grainSize);
    
    static ::x10::util::foreach::Bisect__GrainSize* _make(x10_long grainSize);
    
    virtual void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1<x10_long>* body);
    virtual ::x10::util::foreach::Bisect__GrainSize* x10__util__foreach__Bisect__GrainSize____this__x10__util__foreach__Bisect__GrainSize(
      );
    virtual void __fieldInitializers_x10_util_foreach_Bisect_GrainSize(
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


} } } 
#endif // X10_UTIL_FOREACH_BISECT__GRAINSIZE_H

namespace x10 { namespace util { namespace foreach { 
class Bisect__GrainSize;
} } } 

#ifndef X10_UTIL_FOREACH_BISECT__GRAINSIZE_H_NODEPS
#define X10_UTIL_FOREACH_BISECT__GRAINSIZE_H_NODEPS
#ifndef X10_UTIL_FOREACH_BISECT__GRAINSIZE_H_GENERICS
#define X10_UTIL_FOREACH_BISECT__GRAINSIZE_H_GENERICS
#endif // X10_UTIL_FOREACH_BISECT__GRAINSIZE_H_GENERICS
#endif // __X10_UTIL_FOREACH_BISECT__GRAINSIZE_H_NODEPS
