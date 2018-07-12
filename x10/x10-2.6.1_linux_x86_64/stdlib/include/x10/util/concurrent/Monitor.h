#ifndef __X10_UTIL_CONCURRENT_MONITOR_H
#define __X10_UTIL_CONCURRENT_MONITOR_H

#include <x10rt.h>


#define X10_UTIL_CONCURRENT_LOCK_H_NODEPS
#include <x10/util/concurrent/Lock.h>
#undef X10_UTIL_CONCURRENT_LOCK_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
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

class Monitor : public ::x10::util::concurrent::Lock   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::util::concurrent::Monitor > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::concurrent::Monitor > _itable_1;
    
    void _constructor();
    
    static ::x10::util::concurrent::Monitor* _make();
    
    ::x10::util::GrowableRail< ::x10::xrx::Worker*>* FMGL(workers);
    
    virtual void await();
    virtual void release();
    virtual ::x10::util::concurrent::Monitor* x10__util__concurrent__Monitor____this__x10__util__concurrent__Monitor(
      );
    virtual void __fieldInitializers_x10_util_concurrent_Monitor(
      );
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.Monitor");
    }
    
    virtual ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.Monitor");
    }
    
    
};


} } } 
#endif // X10_UTIL_CONCURRENT_MONITOR_H

namespace x10 { namespace util { namespace concurrent { 
class Monitor;
} } } 

#ifndef X10_UTIL_CONCURRENT_MONITOR_H_NODEPS
#define X10_UTIL_CONCURRENT_MONITOR_H_NODEPS
#ifndef X10_UTIL_CONCURRENT_MONITOR_H_GENERICS
#define X10_UTIL_CONCURRENT_MONITOR_H_GENERICS
#endif // X10_UTIL_CONCURRENT_MONITOR_H_GENERICS
#endif // __X10_UTIL_CONCURRENT_MONITOR_H_NODEPS
