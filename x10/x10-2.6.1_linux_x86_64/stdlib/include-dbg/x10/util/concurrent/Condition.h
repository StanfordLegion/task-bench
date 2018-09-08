#ifndef __X10_UTIL_CONCURRENT_CONDITION_H
#define __X10_UTIL_CONCURRENT_CONDITION_H

#include <x10rt.h>


#define X10_IO_UNSERIALIZABLE_H_NODEPS
#include <x10/io/Unserializable.h>
#undef X10_IO_UNSERIALIZABLE_H_NODEPS
#define X10_LANG_CONDITION_H_NODEPS
#include <x10/lang/Condition.h>
#undef X10_LANG_CONDITION_H_NODEPS
namespace x10 { namespace compiler { 
class Embed;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeClass;
} } 

namespace x10 { namespace util { namespace concurrent { 

class Condition : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::util::concurrent::Condition > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::concurrent::Condition > _itable_1;
    
    ::x10::lang::Condition _Embed___NATIVE_FIELD__;
    ::x10::lang::Condition* FMGL(__NATIVE_FIELD__);
    
    void _constructor(::x10::lang::Condition* id0);
    
    static ::x10::util::concurrent::Condition* _make(::x10::lang::Condition* id0);
    
    void _constructor();
    
    static ::x10::util::concurrent::Condition* _make();
    
    virtual void release();
    virtual void await();
    virtual void await(x10_long timeout);
    virtual x10_boolean complete();
    virtual ::x10::util::concurrent::Condition* x10__util__concurrent__Condition____this__x10__util__concurrent__Condition(
      );
    virtual void __fieldInitializers_x10_util_concurrent_Condition(
      );
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.Condition");
    }
    
    virtual ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.util.concurrent.Condition");
    }
    
    
};


} } } 
#endif // X10_UTIL_CONCURRENT_CONDITION_H

namespace x10 { namespace util { namespace concurrent { 
class Condition;
} } } 

#ifndef X10_UTIL_CONCURRENT_CONDITION_H_NODEPS
#define X10_UTIL_CONCURRENT_CONDITION_H_NODEPS
#ifndef X10_UTIL_CONCURRENT_CONDITION_H_GENERICS
#define X10_UTIL_CONCURRENT_CONDITION_H_GENERICS
#endif // X10_UTIL_CONCURRENT_CONDITION_H_GENERICS
#endif // __X10_UTIL_CONCURRENT_CONDITION_H_NODEPS
