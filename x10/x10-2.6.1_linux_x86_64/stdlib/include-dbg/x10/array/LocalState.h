#ifndef __X10_ARRAY_LOCALSTATE_H
#define __X10_ARRAY_LOCALSTATE_H

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
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

template<class TPMGL(S)> class LocalState;
template <> class LocalState<void>;
template<class TPMGL(S)> class LocalState : public ::x10::lang::X10Class 
 {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::PlaceGroup* FMGL(pg);
    
    ::x10::lang::Rail< TPMGL(S) >* FMGL(rail);
    
    x10_long FMGL(size);
    
    void _constructor(::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* rail,
                      x10_long size);
    
    static ::x10::array::LocalState<TPMGL(S)>* _make(::x10::lang::PlaceGroup* pg,
                                                     ::x10::lang::Rail< TPMGL(S) >* rail,
                                                     x10_long size);
    
    virtual ::x10::array::LocalState<TPMGL(S)>* x10__array__LocalState____this__x10__array__LocalState(
      );
    virtual void __fieldInitializers_x10_array_LocalState(
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

template<class TPMGL(S)> ::x10aux::RuntimeType x10::array::LocalState<TPMGL(S)>::rtt;
template<class TPMGL(S)> void x10::array::LocalState<TPMGL(S)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::array::LocalState<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(S)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.array.LocalState";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class LocalState<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_ARRAY_LOCALSTATE_H

namespace x10 { namespace array { 
template<class TPMGL(S)> class LocalState;
} } 

#ifndef X10_ARRAY_LOCALSTATE_H_NODEPS
#define X10_ARRAY_LOCALSTATE_H_NODEPS
#include <x10/lang/Long.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_ARRAY_LOCALSTATE_H_GENERICS
#define X10_ARRAY_LOCALSTATE_H_GENERICS
#endif // X10_ARRAY_LOCALSTATE_H_GENERICS
#ifndef X10_ARRAY_LOCALSTATE_H_IMPLEMENTATION
#define X10_ARRAY_LOCALSTATE_H_IMPLEMENTATION
#include <x10/array/LocalState.h>


//#line 299 "x10/array/DistArray.x10"

//#line 300 "x10/array/DistArray.x10"
template<class TPMGL(S)> void x10::array::LocalState<TPMGL(S)>::_constructor(
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* rail,
                           x10_long size) {
    
    //#line 301 "x10/array/DistArray.x10"
    FMGL(pg) = pg;
    FMGL(rail) = rail;
    FMGL(size) = size;
    
    //#line 299 "x10/array/DistArray.x10"
    this->x10::array::template LocalState<TPMGL(S)>::__fieldInitializers_x10_array_LocalState();
}
template<class TPMGL(S)> ::x10::array::LocalState<TPMGL(S)>* x10::array::LocalState<TPMGL(S)>::_make(
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* rail,
                           x10_long size) {
    ::x10::array::LocalState<TPMGL(S)>* this_ = new (::x10aux::alloc_z< ::x10::array::LocalState<TPMGL(S)> >()) ::x10::array::LocalState<TPMGL(S)>();
    this_->_constructor(pg, rail, size);
    return this_;
}



//#line 299 "x10/array/DistArray.x10"
template<class TPMGL(S)> ::x10::array::LocalState<TPMGL(S)>*
  x10::array::LocalState<TPMGL(S)>::x10__array__LocalState____this__x10__array__LocalState(
  ) {
    return this;
    
}
template<class TPMGL(S)> void x10::array::LocalState<TPMGL(S)>::__fieldInitializers_x10_array_LocalState(
  ) {
 
}
template<class TPMGL(S)> const ::x10aux::serialization_id_t x10::array::LocalState<TPMGL(S)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::array::LocalState<TPMGL(S)>::_deserializer);

template<class TPMGL(S)> void x10::array::LocalState<TPMGL(S)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(pg));
    buf.write(this->FMGL(rail));
    buf.write(this->FMGL(size));
    
}

template<class TPMGL(S)> ::x10::lang::Reference* ::x10::array::LocalState<TPMGL(S)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::array::LocalState<TPMGL(S)>* this_ = new (::x10aux::alloc_z< ::x10::array::LocalState<TPMGL(S)> >()) ::x10::array::LocalState<TPMGL(S)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(S)> void x10::array::LocalState<TPMGL(S)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(pg) = buf.read< ::x10::lang::PlaceGroup*>();
    FMGL(rail) = buf.read< ::x10::lang::Rail< TPMGL(S) >*>();
    FMGL(size) = buf.read<x10_long>();
}

#endif // X10_ARRAY_LOCALSTATE_H_IMPLEMENTATION
#endif // __X10_ARRAY_LOCALSTATE_H_NODEPS
