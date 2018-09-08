#ifndef __BAG_H
#define __BAG_H

#include <x10rt.h>


#define X10_GLB_TASKBAG_H_NODEPS
#include <x10/glb/TaskBag.h>
#undef X10_GLB_TASKBAG_H_NODEPS
#define SHA1RAND_H_NODEPS
#include <SHA1Rand.h>
#undef SHA1RAND_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class Bag : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::glb::TaskBag::itable< ::Bag > _itable_0;
    
    static ::x10::lang::Any::itable< ::Bag > _itable_1;
    
    ::x10::lang::Rail< ::SHA1Rand >* FMGL(hash);
    
    ::x10::lang::Rail< x10_int >* FMGL(lower);
    
    ::x10::lang::Rail< x10_int >* FMGL(upper);
    
    void _constructor(x10_long size);
    
    static ::Bag* _make(x10_long size);
    
    virtual x10_long size();
    virtual ::Bag* Bag____this__Bag();
    virtual void __fieldInitializers_Bag();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // BAG_H

class Bag;

#ifndef BAG_H_NODEPS
#define BAG_H_NODEPS
#ifndef BAG_H_GENERICS
#define BAG_H_GENERICS
#endif // BAG_H_GENERICS
#endif // __BAG_H_NODEPS
