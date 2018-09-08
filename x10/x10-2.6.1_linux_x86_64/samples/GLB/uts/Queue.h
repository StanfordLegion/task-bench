#ifndef __QUEUE_H
#define __QUEUE_H

#include <x10rt.h>


#define UTS_H_NODEPS
#include <UTS.h>
#undef UTS_H_NODEPS
#define X10_GLB_TASKQUEUE_H_NODEPS
#include <x10/glb/TaskQueue.h>
#undef X10_GLB_TASKQUEUE_H_NODEPS
namespace x10 { namespace glb { 
template<class TPMGL(Queue), class TPMGL(R)> class Context;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
class Bag;
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
class SHA1Rand;
namespace x10 { namespace glb { 
class TaskBag;
} } 
class Queue__UTSResult;
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class Queue : public ::UTS   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::glb::TaskQueue< ::Queue*, x10_long>::itable< ::Queue > _itable_0;
    
    static ::x10::lang::Any::itable< ::Queue > _itable_1;
    
    void _constructor(x10_int factor);
    
    static ::Queue* _make(x10_int factor);
    
    virtual x10_boolean process(x10_long n, ::x10::glb::Context< ::Queue*, x10_long>* context);
    virtual ::x10::glb::TaskBag* split();
    virtual void merge(::Bag* bag);
    virtual void merge(::x10::glb::TaskBag* bag);
    virtual void printLog();
    virtual x10_long count();
    ::Queue__UTSResult* FMGL(result);
    
    virtual ::x10::glb::GLBResult<x10_long>* getResult();
    virtual ::Queue* Queue____this__Queue();
    virtual void __fieldInitializers_Queue();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // QUEUE_H

class Queue;

#ifndef QUEUE_H_NODEPS
#define QUEUE_H_NODEPS
#ifndef QUEUE_H_GENERICS
#define QUEUE_H_GENERICS
#endif // QUEUE_H_GENERICS
#endif // __QUEUE_H_NODEPS
