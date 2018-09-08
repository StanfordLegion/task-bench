#ifndef __X10_UTIL_RESILIENT_ITERATIVE_SNAPSHOTRECORD_H
#define __X10_UTIL_RESILIENT_ITERATIVE_SNAPSHOTRECORD_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Snapshottable;
} } } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace iterative { 

class SnapshotRecord : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::resilient::localstore::Snapshottable* FMGL(snapshottable);
    
    x10_boolean FMGL(readOnly);
    
    x10_long FMGL(version);
    
    virtual ::x10::util::resilient::iterative::SnapshotRecord* x10__util__resilient__iterative__SnapshotRecord____this__x10__util__resilient__iterative__SnapshotRecord(
      );
    void _constructor(::x10::util::resilient::localstore::Snapshottable* snapshottable,
                      x10_boolean readOnly);
    
    static ::x10::util::resilient::iterative::SnapshotRecord* _make(
             ::x10::util::resilient::localstore::Snapshottable* snapshottable,
             x10_boolean readOnly);
    
    virtual void __fieldInitializers_x10_util_resilient_iterative_SnapshotRecord(
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


} } } } 
#endif // X10_UTIL_RESILIENT_ITERATIVE_SNAPSHOTRECORD_H

namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SnapshotRecord;
} } } } 

#ifndef X10_UTIL_RESILIENT_ITERATIVE_SNAPSHOTRECORD_H_NODEPS
#define X10_UTIL_RESILIENT_ITERATIVE_SNAPSHOTRECORD_H_NODEPS
#ifndef X10_UTIL_RESILIENT_ITERATIVE_SNAPSHOTRECORD_H_GENERICS
#define X10_UTIL_RESILIENT_ITERATIVE_SNAPSHOTRECORD_H_GENERICS
#endif // X10_UTIL_RESILIENT_ITERATIVE_SNAPSHOTRECORD_H_GENERICS
#endif // __X10_UTIL_RESILIENT_ITERATIVE_SNAPSHOTRECORD_H_NODEPS
