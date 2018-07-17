#ifndef __TASKBENCH__PLACEINSTANCE_H
#define __TASKBENCH__PLACEINSTANCE_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_GLOBALRAIL_H_NODEPS
#include <x10/lang/GlobalRail.h>
#undef X10_LANG_GLOBALRAIL_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
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

class TaskBench__PlaceInstance_Strings {
  public:
    static ::x10::lang::String sl__739;
    static ::x10::lang::String sl__740;
};

class TaskBench__PlaceInstance : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* FMGL(send);
    
    ::x10::lang::Rail< ::x10::lang::Rail< x10_double >* >* FMGL(recv);
    
    ::x10::lang::Rail< ::x10::lang::GlobalRail<x10_double> >* FMGL(remoteSend);
    
    ::x10::lang::Rail< x10_long >* FMGL(neighborsSend);
    
    ::x10::lang::Rail< x10_long >* FMGL(neighborsRecv);
    
    virtual x10_long getSenderIndex(x10_long recvId);
    void _constructor(::x10::lang::Rail< x10_long >* neighborsSend, ::x10::lang::Rail< x10_long >* neighborsRecv);
    
    static ::TaskBench__PlaceInstance* _make(::x10::lang::Rail< x10_long >* neighborsSend,
                                             ::x10::lang::Rail< x10_long >* neighborsRecv);
    
    virtual ::TaskBench__PlaceInstance* TaskBench__PlaceInstance____this__TaskBench__PlaceInstance(
      );
    virtual void __fieldInitializers_TaskBench_PlaceInstance(
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

#endif // TASKBENCH__PLACEINSTANCE_H

class TaskBench__PlaceInstance;

#ifndef TASKBENCH__PLACEINSTANCE_H_NODEPS
#define TASKBENCH__PLACEINSTANCE_H_NODEPS
#ifndef TASKBENCH__PLACEINSTANCE_H_GENERICS
#define TASKBENCH__PLACEINSTANCE_H_GENERICS
#endif // TASKBENCH__PLACEINSTANCE_H_GENERICS
#endif // __TASKBENCH__PLACEINSTANCE_H_NODEPS
