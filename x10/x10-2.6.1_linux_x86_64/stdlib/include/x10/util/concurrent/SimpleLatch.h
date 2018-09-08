#ifndef __X10_UTIL_CONCURRENT_SIMPLELATCH_H
#define __X10_UTIL_CONCURRENT_SIMPLELATCH_H

#include <x10rt.h>


#define X10_UTIL_CONCURRENT_LOCK_H_NODEPS
#include <x10/util/concurrent/Lock.h>
#undef X10_UTIL_CONCURRENT_LOCK_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace xrx { 
class Worker;
} } 
namespace x10 { namespace xrx { 
class Activity;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class Workers;
} } 
namespace x10 { namespace xrx { 
class Pool;
} } 
namespace x10 { namespace lang { 
class DeadPlaceException;
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

class SimpleLatch_Strings {
  public:
    static ::x10::lang::String sl__168510;
};

class SimpleLatch : public ::x10::util::concurrent::Lock   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::util::concurrent::SimpleLatch > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::concurrent::SimpleLatch > _itable_1;
    
    void _constructor();
    
    static ::x10::util::concurrent::SimpleLatch* _make();
    
    ::x10::xrx::Worker* FMGL(worker);
    
    x10_boolean FMGL(state);
    
    virtual void await();
    virtual void release();
    virtual x10_boolean __apply();
    virtual ::x10::util::concurrent::SimpleLatch* x10__util__concurrent__SimpleLatch____this__x10__util__concurrent__SimpleLatch(
      );
    virtual void __fieldInitializers_x10_util_concurrent_SimpleLatch(
      );
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.SimpleLatch");
    }
    
    virtual ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.SimpleLatch");
    }
    
    
};


} } } 
#endif // X10_UTIL_CONCURRENT_SIMPLELATCH_H

namespace x10 { namespace util { namespace concurrent { 
class SimpleLatch;
} } } 

#ifndef X10_UTIL_CONCURRENT_SIMPLELATCH_H_NODEPS
#define X10_UTIL_CONCURRENT_SIMPLELATCH_H_NODEPS
#ifndef X10_UTIL_CONCURRENT_SIMPLELATCH_H_GENERICS
#define X10_UTIL_CONCURRENT_SIMPLELATCH_H_GENERICS
#endif // X10_UTIL_CONCURRENT_SIMPLELATCH_H_GENERICS
#endif // __X10_UTIL_CONCURRENT_SIMPLELATCH_H_NODEPS
