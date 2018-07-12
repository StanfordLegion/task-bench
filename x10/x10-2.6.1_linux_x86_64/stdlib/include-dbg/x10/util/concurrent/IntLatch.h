#ifndef __X10_UTIL_CONCURRENT_INTLATCH_H
#define __X10_UTIL_CONCURRENT_INTLATCH_H

#include <x10rt.h>


#define X10_UTIL_CONCURRENT_MONITOR_H_NODEPS
#include <x10/util/concurrent/Monitor.h>
#undef X10_UTIL_CONCURRENT_MONITOR_H_NODEPS
#define X10_LANG_FUN_0_0_H_NODEPS
#include <x10/lang/Fun_0_0.h>
#undef X10_LANG_FUN_0_0_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class Pinned;
} } 

namespace x10 { namespace util { namespace concurrent { 

class IntLatch_Strings {
  public:
    static ::x10::lang::String sl__158232;
};

class IntLatch : public ::x10::util::concurrent::Monitor   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::util::concurrent::IntLatch > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::concurrent::IntLatch > _itable_1;
    
    static ::x10::lang::Fun_0_0<x10_int>::itable< ::x10::util::concurrent::IntLatch > _itable_2;
    
    void _constructor();
    
    static ::x10::util::concurrent::IntLatch* _make();
    
    void _constructor(::x10::lang::Any* id__254);
    
    static ::x10::util::concurrent::IntLatch* _make(::x10::lang::Any* id__254);
    
    x10_int FMGL(value);
    
    virtual void __set(x10_int i);
    virtual void set(x10_int i);
    virtual void await();
    virtual x10_int __apply();
    virtual ::x10::util::concurrent::IntLatch* x10__util__concurrent__IntLatch____this__x10__util__concurrent__IntLatch(
      );
    virtual void __fieldInitializers_x10_util_concurrent_IntLatch(
      );
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.IntLatch");
    }
    
    virtual ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.IntLatch");
    }
    
    
};


} } } 
#endif // X10_UTIL_CONCURRENT_INTLATCH_H

namespace x10 { namespace util { namespace concurrent { 
class IntLatch;
} } } 

#ifndef X10_UTIL_CONCURRENT_INTLATCH_H_NODEPS
#define X10_UTIL_CONCURRENT_INTLATCH_H_NODEPS
#ifndef X10_UTIL_CONCURRENT_INTLATCH_H_GENERICS
#define X10_UTIL_CONCURRENT_INTLATCH_H_GENERICS
#endif // X10_UTIL_CONCURRENT_INTLATCH_H_GENERICS
#endif // __X10_UTIL_CONCURRENT_INTLATCH_H_NODEPS
