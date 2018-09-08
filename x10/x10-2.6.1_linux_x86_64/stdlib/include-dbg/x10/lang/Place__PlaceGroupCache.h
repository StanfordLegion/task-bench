#ifndef __X10_LANG_PLACE__PLACEGROUPCACHE_H
#define __X10_LANG_PLACE__PLACEGROUPCACHE_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class Place__PlaceGroupCache : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(numPlaces);
    
    x10_long FMGL(numDead);
    
    ::x10::lang::PlaceGroup* FMGL(world);
    
    ::x10::util::concurrent::Lock* FMGL(lock);
    
    void _constructor(x10_long np, x10_long nd, ::x10::lang::PlaceGroup* w);
    
    static ::x10::lang::Place__PlaceGroupCache* _make(x10_long np, x10_long nd,
                                                      ::x10::lang::PlaceGroup* w);
    
    virtual ::x10::lang::Place__PlaceGroupCache* x10__lang__Place__PlaceGroupCache____this__x10__lang__Place__PlaceGroupCache(
      );
    virtual void __fieldInitializers_x10_lang_Place_PlaceGroupCache(
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
#endif // X10_LANG_PLACE__PLACEGROUPCACHE_H

namespace x10 { namespace lang { 
class Place__PlaceGroupCache;
} } 

#ifndef X10_LANG_PLACE__PLACEGROUPCACHE_H_NODEPS
#define X10_LANG_PLACE__PLACEGROUPCACHE_H_NODEPS
#ifndef X10_LANG_PLACE__PLACEGROUPCACHE_H_GENERICS
#define X10_LANG_PLACE__PLACEGROUPCACHE_H_GENERICS
#endif // X10_LANG_PLACE__PLACEGROUPCACHE_H_GENERICS
#endif // __X10_LANG_PLACE__PLACEGROUPCACHE_H_NODEPS
