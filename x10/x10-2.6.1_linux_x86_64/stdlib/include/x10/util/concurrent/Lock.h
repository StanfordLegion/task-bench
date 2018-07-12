#ifndef __X10_UTIL_CONCURRENT_LOCK_H
#define __X10_UTIL_CONCURRENT_LOCK_H

#include <x10rt.h>


#define X10_IO_UNSERIALIZABLE_H_NODEPS
#include <x10/io/Unserializable.h>
#undef X10_IO_UNSERIALIZABLE_H_NODEPS
#define X10_LANG_LOCK__REENTRANTLOCK_H_NODEPS
#include <x10/lang/Lock__ReentrantLock.h>
#undef X10_LANG_LOCK__REENTRANTLOCK_H_NODEPS
namespace x10 { namespace compiler { 
class Embed;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeClass;
} } 
namespace x10 { namespace compiler { 
class Pinned;
} } 

namespace x10 { namespace util { namespace concurrent { 

class Lock : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::util::concurrent::Lock > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::concurrent::Lock > _itable_1;
    
    ::x10::lang::Lock__ReentrantLock _Embed___NATIVE_FIELD__;
    ::x10::lang::Lock__ReentrantLock* FMGL(__NATIVE_FIELD__);
    
    void _constructor(::x10::lang::Lock__ReentrantLock* id0);
    
    static ::x10::util::concurrent::Lock* _make(::x10::lang::Lock__ReentrantLock* id0);
    
    void _constructor();
    
    static ::x10::util::concurrent::Lock* _make();
    
    virtual void lock();
    virtual x10_boolean tryLock();
    virtual void unlock();
    virtual x10_int getHoldCount();
    virtual ::x10::util::concurrent::Lock* x10__util__concurrent__Lock____this__x10__util__concurrent__Lock(
      );
    virtual void __fieldInitializers_x10_util_concurrent_Lock();
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.Lock");
    }
    
    virtual ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.Lock");
    }
    
    
};


} } } 
#endif // X10_UTIL_CONCURRENT_LOCK_H

namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 

#ifndef X10_UTIL_CONCURRENT_LOCK_H_NODEPS
#define X10_UTIL_CONCURRENT_LOCK_H_NODEPS
#ifndef X10_UTIL_CONCURRENT_LOCK_H_GENERICS
#define X10_UTIL_CONCURRENT_LOCK_H_GENERICS
#endif // X10_UTIL_CONCURRENT_LOCK_H_GENERICS
#endif // __X10_UTIL_CONCURRENT_LOCK_H_NODEPS
