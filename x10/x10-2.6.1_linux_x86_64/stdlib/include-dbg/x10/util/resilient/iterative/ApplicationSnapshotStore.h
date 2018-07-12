#ifndef __X10_UTIL_RESILIENT_ITERATIVE_APPLICATIONSNAPSHOTSTORE_H
#define __X10_UTIL_RESILIENT_ITERATIVE_APPLICATIONSNAPSHOTSTORE_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SnapshotRecord;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Snapshottable;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace iterative { 

class ApplicationSnapshotStore : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::iterative::SnapshotRecord*>*
      FMGL(map);
    
    x10_boolean FMGL(firstCheckpoint);
    
    x10_long FMGL(lastVersion);
    
    virtual void save(::x10::lang::String* key, ::x10::util::resilient::localstore::Snapshottable* distObject);
    virtual void saveReadOnly(::x10::lang::String* key, ::x10::util::resilient::localstore::Snapshottable* distObject);
    virtual ::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>*
      getCheckpointData_local(x10_boolean first);
    virtual void restore_local(::x10::util::HashMap< ::x10::lang::String*, ::x10::util::resilient::localstore::Cloneable*>* restoreDataMap);
    virtual x10_long nextCheckpointVersion();
    virtual void commitCheckpoint(x10_long newVersion);
    virtual ::x10::util::HashMap< ::x10::lang::String*, x10_long>*
      getRestoreKeyVersions();
    virtual ::x10::util::resilient::iterative::ApplicationSnapshotStore*
      x10__util__resilient__iterative__ApplicationSnapshotStore____this__x10__util__resilient__iterative__ApplicationSnapshotStore(
      );
    void _constructor();
    
    static ::x10::util::resilient::iterative::ApplicationSnapshotStore* _make(
             );
    
    virtual void __fieldInitializers_x10_util_resilient_iterative_ApplicationSnapshotStore(
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
#endif // X10_UTIL_RESILIENT_ITERATIVE_APPLICATIONSNAPSHOTSTORE_H

namespace x10 { namespace util { namespace resilient { namespace iterative { 
class ApplicationSnapshotStore;
} } } } 

#ifndef X10_UTIL_RESILIENT_ITERATIVE_APPLICATIONSNAPSHOTSTORE_H_NODEPS
#define X10_UTIL_RESILIENT_ITERATIVE_APPLICATIONSNAPSHOTSTORE_H_NODEPS
#ifndef X10_UTIL_RESILIENT_ITERATIVE_APPLICATIONSNAPSHOTSTORE_H_GENERICS
#define X10_UTIL_RESILIENT_ITERATIVE_APPLICATIONSNAPSHOTSTORE_H_GENERICS
#endif // X10_UTIL_RESILIENT_ITERATIVE_APPLICATIONSNAPSHOTSTORE_H_GENERICS
#endif // __X10_UTIL_RESILIENT_ITERATIVE_APPLICATIONSNAPSHOTSTORE_H_NODEPS
