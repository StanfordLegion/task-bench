#ifndef __X10_REGIONARRAY_DISTARRAY__LOCALSTATE_H
#define __X10_REGIONARRAY_DISTARRAY__LOCALSTATE_H

#include <x10rt.h>


namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace regionarray { 
class GhostManager;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

template<class TPMGL(T)> class DistArray__LocalState;
template <> class DistArray__LocalState<void>;
template<class TPMGL(T)> class DistArray__LocalState : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::regionarray::Dist* FMGL(dist);
    
    ::x10::lang::Rail< TPMGL(T) >* FMGL(data);
    
    ::x10::regionarray::Region* FMGL(localRegion);
    
    ::x10::regionarray::GhostManager* FMGL(ghostManager);
    
    void _constructor(::x10::regionarray::Dist* d, ::x10::lang::Rail< TPMGL(T) >* c,
                      ::x10::regionarray::Region* r, ::x10::regionarray::GhostManager* ghostManager);
    
    static ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* _make(
             ::x10::regionarray::Dist* d, ::x10::lang::Rail< TPMGL(T) >* c,
             ::x10::regionarray::Region* r, ::x10::regionarray::GhostManager* ghostManager);
    
    void _constructor(::x10::regionarray::Dist* d, ::x10::lang::Rail< TPMGL(T) >* c);
    
    static ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* _make(
             ::x10::regionarray::Dist* d, ::x10::lang::Rail< TPMGL(T) >* c);
    
    virtual ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*
      x10__regionarray__DistArray__LocalState____this__x10__regionarray__DistArray__LocalState(
      );
    virtual void __fieldInitializers_x10_regionarray_DistArray_LocalState(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::regionarray::DistArray__LocalState<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::regionarray::DistArray__LocalState<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::regionarray::DistArray__LocalState<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.regionarray.DistArray.LocalState";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class DistArray__LocalState<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_REGIONARRAY_DISTARRAY__LOCALSTATE_H

namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray__LocalState;
} } 

#ifndef X10_REGIONARRAY_DISTARRAY__LOCALSTATE_H_NODEPS
#define X10_REGIONARRAY_DISTARRAY__LOCALSTATE_H_NODEPS
#include <x10/regionarray/Dist.h>
#include <x10/lang/Rail.h>
#include <x10/regionarray/Region.h>
#include <x10/regionarray/GhostManager.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_REGIONARRAY_DISTARRAY__LOCALSTATE_H_GENERICS
#define X10_REGIONARRAY_DISTARRAY__LOCALSTATE_H_GENERICS
#endif // X10_REGIONARRAY_DISTARRAY__LOCALSTATE_H_GENERICS
#ifndef X10_REGIONARRAY_DISTARRAY__LOCALSTATE_H_IMPLEMENTATION
#define X10_REGIONARRAY_DISTARRAY__LOCALSTATE_H_IMPLEMENTATION
#include <x10/regionarray/DistArray__LocalState.h>


//#line 71 "x10/regionarray/DistArray.x10"

//#line 72 "x10/regionarray/DistArray.x10"

//#line 73 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> void x10::regionarray::DistArray__LocalState<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Dist* d, ::x10::lang::Rail< TPMGL(T) >* c,
                           ::x10::regionarray::Region* r,
                           ::x10::regionarray::GhostManager* ghostManager) {
    
    //#line 74 "x10/regionarray/DistArray.x10"
    FMGL(dist) = d;
    FMGL(data) = c;
    FMGL(localRegion) = r;
    
    //#line 75 "x10/regionarray/DistArray.x10"
    this->FMGL(ghostManager) = ghostManager;
    
    //#line 81 "x10/regionarray/DistArray.x10"
    ::x10aux::nullCheck(d)->__apply(::x10::lang::Place::_make(::x10aux::here));
}
template<class TPMGL(T)> ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* x10::regionarray::DistArray__LocalState<TPMGL(T)>::_make(
                           ::x10::regionarray::Dist* d, ::x10::lang::Rail< TPMGL(T) >* c,
                           ::x10::regionarray::Region* r,
                           ::x10::regionarray::GhostManager* ghostManager)
{
    ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::DistArray__LocalState<TPMGL(T)> >()) ::x10::regionarray::DistArray__LocalState<TPMGL(T)>();
    this_->_constructor(d, c, r, ghostManager);
    return this_;
}



//#line 84 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> void x10::regionarray::DistArray__LocalState<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Dist* d, ::x10::lang::Rail< TPMGL(T) >* c) {
    
    //#line 85 "x10/regionarray/DistArray.x10"
    FMGL(dist) = d;
    FMGL(data) = c;
    FMGL(localRegion) = ::x10aux::nullCheck(d)->__apply(::x10::lang::Place::_make(::x10aux::here));
    
    //#line 86 "x10/regionarray/DistArray.x10"
    this->FMGL(ghostManager) = (::x10aux::class_cast_unchecked< ::x10::regionarray::GhostManager*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 87 "x10/regionarray/DistArray.x10"
    ::x10aux::nullCheck(d)->__apply(::x10::lang::Place::_make(::x10aux::here));
}
template<class TPMGL(T)> ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* x10::regionarray::DistArray__LocalState<TPMGL(T)>::_make(
                           ::x10::regionarray::Dist* d, ::x10::lang::Rail< TPMGL(T) >* c)
{
    ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::DistArray__LocalState<TPMGL(T)> >()) ::x10::regionarray::DistArray__LocalState<TPMGL(T)>();
    this_->_constructor(d, c);
    return this_;
}



//#line 71 "x10/regionarray/DistArray.x10"
template<class TPMGL(T)> ::x10::regionarray::DistArray__LocalState<TPMGL(T)>*
  x10::regionarray::DistArray__LocalState<TPMGL(T)>::x10__regionarray__DistArray__LocalState____this__x10__regionarray__DistArray__LocalState(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::regionarray::DistArray__LocalState<TPMGL(T)>::__fieldInitializers_x10_regionarray_DistArray_LocalState(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::regionarray::DistArray__LocalState<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::regionarray::DistArray__LocalState<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::regionarray::DistArray__LocalState<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(ghostManager));
    buf.write(this->FMGL(dist));
    buf.write(this->FMGL(data));
    buf.write(this->FMGL(localRegion));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::regionarray::DistArray__LocalState<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::regionarray::DistArray__LocalState<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::DistArray__LocalState<TPMGL(T)> >()) ::x10::regionarray::DistArray__LocalState<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::regionarray::DistArray__LocalState<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(ghostManager) = buf.read< ::x10::regionarray::GhostManager*>();
    FMGL(dist) = buf.read< ::x10::regionarray::Dist*>();
    FMGL(data) = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
    FMGL(localRegion) = buf.read< ::x10::regionarray::Region*>();
}

#endif // X10_REGIONARRAY_DISTARRAY__LOCALSTATE_H_IMPLEMENTATION
#endif // __X10_REGIONARRAY_DISTARRAY__LOCALSTATE_H_NODEPS
