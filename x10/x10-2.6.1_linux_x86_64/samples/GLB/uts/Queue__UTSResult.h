#ifndef __QUEUE__UTSRESULT_H
#define __QUEUE__UTSRESULT_H

#include <x10rt.h>


#define X10_GLB_GLBRESULT_H_NODEPS
#include <x10/glb/GLBResult.h>
#undef X10_GLB_GLBRESULT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
class Queue;
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
class UTS;
namespace x10 { namespace util { 
class Team;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class Queue__UTSResult_Strings {
  public:
    static ::x10::lang::String sl__3222;
};

class Queue__UTSResult : public ::x10::glb::GLBResult<x10_long>   {
    public:
    RTT_H_DECLS_CLASS
    
    ::Queue* FMGL(out__);
    
    ::x10::lang::Rail< x10_long >* FMGL(r);
    
    virtual ::x10::lang::Rail< x10_long >* getResult();
    virtual x10_int getReduceOperator();
    virtual void display(::x10::lang::Rail< x10_long >* r);
    virtual ::Queue__UTSResult* Queue__UTSResult____this__Queue__UTSResult(
      );
    virtual ::Queue* Queue__UTSResult____this__Queue();
    void _constructor(::Queue* out__);
    
    static ::Queue__UTSResult* _make(::Queue* out__);
    
    virtual void __fieldInitializers_Queue_UTSResult();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // QUEUE__UTSRESULT_H

class Queue__UTSResult;

#ifndef QUEUE__UTSRESULT_H_NODEPS
#define QUEUE__UTSRESULT_H_NODEPS
#ifndef QUEUE__UTSRESULT_H_GENERICS
#define QUEUE__UTSRESULT_H_GENERICS
#endif // QUEUE__UTSRESULT_H_GENERICS
#endif // __QUEUE__UTSRESULT_H_NODEPS
