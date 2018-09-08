#ifndef __X10_LANG_CLOCK__CLOCKPHASES_H
#define __X10_LANG_CLOCK__CLOCKPHASES_H

#include <x10rt.h>


#define X10_UTIL_HASHMAP_H_NODEPS
#include <x10/util/HashMap.h>
#undef X10_UTIL_HASHMAP_H_NODEPS
namespace x10 { namespace lang { 
class Clock;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace io { 
class Serializer;
} } 
namespace x10 { namespace io { 
class Deserializer;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class Clock__ClockPhases : public ::x10::util::HashMap< ::x10::lang::Clock*, x10_int>
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::util::Map< ::x10::lang::Clock*, x10_int>::itable< ::x10::lang::Clock__ClockPhases > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::lang::Clock__ClockPhases > _itable_1;
    
    static ::x10::io::CustomSerialization::itable< ::x10::lang::Clock__ClockPhases > _itable_2;
    
    static ::x10::lang::Clock__ClockPhases* make(::x10::lang::Rail< ::x10::lang::Clock* >* clocks);
    static ::x10::lang::Clock__ClockPhases* make();
    virtual void advanceAll();
    virtual void resumeAll();
    virtual void drop();
    virtual void serialize(::x10::io::Serializer* s);
    void _constructor();
    
    static ::x10::lang::Clock__ClockPhases* _make();
    
    void _constructor(::x10::io::Deserializer* ds);
    
    static ::x10::lang::Clock__ClockPhases* _make(::x10::io::Deserializer* ds);
    
    virtual ::x10::lang::Clock__ClockPhases* x10__lang__Clock__ClockPhases____this__x10__lang__Clock__ClockPhases(
      );
    virtual void __fieldInitializers_x10_lang_Clock_ClockPhases(
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


} } 
#endif // X10_LANG_CLOCK__CLOCKPHASES_H

namespace x10 { namespace lang { 
class Clock__ClockPhases;
} } 

#ifndef X10_LANG_CLOCK__CLOCKPHASES_H_NODEPS
#define X10_LANG_CLOCK__CLOCKPHASES_H_NODEPS
#ifndef X10_LANG_CLOCK__CLOCKPHASES_H_GENERICS
#define X10_LANG_CLOCK__CLOCKPHASES_H_GENERICS
#endif // X10_LANG_CLOCK__CLOCKPHASES_H_GENERICS
#endif // __X10_LANG_CLOCK__CLOCKPHASES_H_NODEPS
