#ifndef __X10_REGIONARRAY_EMPTYREGION__ERITERATOR_H
#define __X10_REGIONARRAY_EMPTYREGION__ERITERATOR_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
namespace x10 { namespace lang { 
class Point;
} } 
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
class NoSuchElementException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class EmptyRegion__ERIterator : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(myRank);
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterator< ::x10::lang::Point*>::itable< ::x10::regionarray::EmptyRegion__ERIterator > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::EmptyRegion__ERIterator > _itable_1;
    
    void _constructor(x10_long r);
    
    static ::x10::regionarray::EmptyRegion__ERIterator* _make(x10_long r);
    
    virtual x10_boolean hasNext();
    virtual ::x10::lang::Point* next();
    virtual ::x10::regionarray::EmptyRegion__ERIterator* x10__regionarray__EmptyRegion__ERIterator____this__x10__regionarray__EmptyRegion__ERIterator(
      );
    virtual void __fieldInitializers_x10_regionarray_EmptyRegion_ERIterator(
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
#endif // X10_REGIONARRAY_EMPTYREGION__ERITERATOR_H

namespace x10 { namespace regionarray { 
class EmptyRegion__ERIterator;
} } 

#ifndef X10_REGIONARRAY_EMPTYREGION__ERITERATOR_H_NODEPS
#define X10_REGIONARRAY_EMPTYREGION__ERITERATOR_H_NODEPS
#ifndef X10_REGIONARRAY_EMPTYREGION__ERITERATOR_H_GENERICS
#define X10_REGIONARRAY_EMPTYREGION__ERITERATOR_H_GENERICS
#endif // X10_REGIONARRAY_EMPTYREGION__ERITERATOR_H_GENERICS
#endif // __X10_REGIONARRAY_EMPTYREGION__ERITERATOR_H_NODEPS
