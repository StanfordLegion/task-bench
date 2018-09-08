#ifndef __TRIVIALMULTINODE__PLACEINSTANCE_H
#define __TRIVIALMULTINODE__PLACEINSTANCE_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_GLOBALRAIL_H_NODEPS
#include <x10/lang/GlobalRail.h>
#undef X10_LANG_GLOBALRAIL_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class TrivialMultinode__PlaceInstance : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(neighbor);
    
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* FMGL(sendRail);
    
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* FMGL(recvRail);
    
    ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* FMGL(remoteSend);
    
    void _constructor();
    
    static ::TrivialMultinode__PlaceInstance* _make();
    
    virtual ::TrivialMultinode__PlaceInstance* TrivialMultinode__PlaceInstance____this__TrivialMultinode__PlaceInstance(
      );
    virtual void __fieldInitializers_TrivialMultinode_PlaceInstance(
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

#endif // TRIVIALMULTINODE__PLACEINSTANCE_H

class TrivialMultinode__PlaceInstance;

#ifndef TRIVIALMULTINODE__PLACEINSTANCE_H_NODEPS
#define TRIVIALMULTINODE__PLACEINSTANCE_H_NODEPS
#ifndef TRIVIALMULTINODE__PLACEINSTANCE_H_GENERICS
#define TRIVIALMULTINODE__PLACEINSTANCE_H_GENERICS
#endif // TRIVIALMULTINODE__PLACEINSTANCE_H_GENERICS
#endif // __TRIVIALMULTINODE__PLACEINSTANCE_H_NODEPS
