#ifndef __X10_UTIL_CONCURRENT_LATCH_H
#define __X10_UTIL_CONCURRENT_LATCH_H

#include <x10rt.h>


#define X10_UTIL_CONCURRENT_MONITOR_H_NODEPS
#include <x10/util/concurrent/Monitor.h>
#undef X10_UTIL_CONCURRENT_MONITOR_H_NODEPS
#define X10_LANG_FUN_0_0_H_NODEPS
#include <x10/lang/Fun_0_0.h>
#undef X10_LANG_FUN_0_0_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
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

class Latch_Strings {
  public:
    static ::x10::lang::String sl__158236;
};

class Latch : public ::x10::util::concurrent::Monitor   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::util::concurrent::Latch > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::concurrent::Latch > _itable_1;
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable< ::x10::util::concurrent::Latch > _itable_2;
    
    void _constructor();
    
    static ::x10::util::concurrent::Latch* _make();
    
    void _constructor(::x10::lang::Any* id__255);
    
    static ::x10::util::concurrent::Latch* _make(::x10::lang::Any* id__255);
    
    x10_boolean FMGL(state);
    
    virtual void release();
    virtual void await();
    virtual x10_boolean __apply();
    virtual ::x10::util::concurrent::Latch* x10__util__concurrent__Latch____this__x10__util__concurrent__Latch(
      );
    virtual void __fieldInitializers_x10_util_concurrent_Latch();
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.Latch");
    }
    
    virtual ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.Latch");
    }
    
    
};


} } } 
#endif // X10_UTIL_CONCURRENT_LATCH_H

namespace x10 { namespace util { namespace concurrent { 
class Latch;
} } } 

#ifndef X10_UTIL_CONCURRENT_LATCH_H_NODEPS
#define X10_UTIL_CONCURRENT_LATCH_H_NODEPS
#ifndef X10_UTIL_CONCURRENT_LATCH_H_GENERICS
#define X10_UTIL_CONCURRENT_LATCH_H_GENERICS
#endif // X10_UTIL_CONCURRENT_LATCH_H_GENERICS
#endif // __X10_UTIL_CONCURRENT_LATCH_H_NODEPS
