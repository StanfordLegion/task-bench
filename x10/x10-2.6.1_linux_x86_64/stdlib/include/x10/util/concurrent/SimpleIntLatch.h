#ifndef __X10_UTIL_CONCURRENT_SIMPLEINTLATCH_H
#define __X10_UTIL_CONCURRENT_SIMPLEINTLATCH_H

#include <x10rt.h>


#define X10_UTIL_CONCURRENT_LOCK_H_NODEPS
#include <x10/util/concurrent/Lock.h>
#undef X10_UTIL_CONCURRENT_LOCK_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace xrx { 
class Worker;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class Thread;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class Pinned;
} } 

namespace x10 { namespace util { namespace concurrent { 

class SimpleIntLatch : public ::x10::util::concurrent::Lock   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::util::concurrent::SimpleIntLatch > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::concurrent::SimpleIntLatch > _itable_1;
    
    void _constructor();
    
    static ::x10::util::concurrent::SimpleIntLatch* _make();
    
    ::x10::xrx::Worker* FMGL(worker);
    
    x10_int FMGL(value);
    
    virtual void await();
    virtual void __set(x10_int v);
    virtual void set(x10_int v);
    virtual x10_int __apply();
    virtual ::x10::util::concurrent::SimpleIntLatch* x10__util__concurrent__SimpleIntLatch____this__x10__util__concurrent__SimpleIntLatch(
      );
    virtual void __fieldInitializers_x10_util_concurrent_SimpleIntLatch(
      );
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.SimpleIntLatch");
    }
    
    virtual ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.SimpleIntLatch");
    }
    
    
};


} } } 
#endif // X10_UTIL_CONCURRENT_SIMPLEINTLATCH_H

namespace x10 { namespace util { namespace concurrent { 
class SimpleIntLatch;
} } } 

#ifndef X10_UTIL_CONCURRENT_SIMPLEINTLATCH_H_NODEPS
#define X10_UTIL_CONCURRENT_SIMPLEINTLATCH_H_NODEPS
#ifndef X10_UTIL_CONCURRENT_SIMPLEINTLATCH_H_GENERICS
#define X10_UTIL_CONCURRENT_SIMPLEINTLATCH_H_GENERICS
#endif // X10_UTIL_CONCURRENT_SIMPLEINTLATCH_H_GENERICS
#endif // __X10_UTIL_CONCURRENT_SIMPLEINTLATCH_H_NODEPS
