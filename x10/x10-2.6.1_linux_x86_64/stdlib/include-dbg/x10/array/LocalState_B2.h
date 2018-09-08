#ifndef __X10_ARRAY_LOCALSTATE_B2_H
#define __X10_ARRAY_LOCALSTATE_B2_H

#include <x10rt.h>


#define X10_ARRAY_LOCALSTATE_H_NODEPS
#include <x10/array/LocalState.h>
#undef X10_ARRAY_LOCALSTATE_H_NODEPS
namespace x10 { namespace array { 
class Dist_Block_2;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

template<class TPMGL(S)> class LocalState_B2;
template <> class LocalState_B2<void>;
template<class TPMGL(S)> class LocalState_B2 : public ::x10::array::LocalState<TPMGL(S)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::array::Dist_Block_2* FMGL(dist);
    
    void _constructor(::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* data,
                      x10_long size, ::x10::array::Dist_Block_2* d);
    
    static ::x10::array::LocalState_B2<TPMGL(S)>* _make(::x10::lang::PlaceGroup* pg,
                                                        ::x10::lang::Rail< TPMGL(S) >* data,
                                                        x10_long size,
                                                        ::x10::array::Dist_Block_2* d);
    
    virtual ::x10::array::LocalState_B2<TPMGL(S)>* x10__array__LocalState_B2____this__x10__array__LocalState_B2(
      );
    virtual void __fieldInitializers_x10_array_LocalState_B2(
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

template<class TPMGL(S)> ::x10aux::RuntimeType x10::array::LocalState_B2<TPMGL(S)>::rtt;
template<class TPMGL(S)> void x10::array::LocalState_B2<TPMGL(S)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::array::LocalState_B2<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::array::LocalState<TPMGL(S)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(S)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.array.LocalState_B2";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class LocalState_B2<void> : public ::x10::array::LocalState<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(S)> static ::x10::array::LocalState_B2<TPMGL(S)>*
      make(::x10::lang::PlaceGroup* pg, x10_long m, x10_long n,
           ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(S)>* init);
    
    
};

} } 
#endif // X10_ARRAY_LOCALSTATE_B2_H

namespace x10 { namespace array { 
template<class TPMGL(S)> class LocalState_B2;
} } 

#ifndef X10_ARRAY_LOCALSTATE_B2_H_NODEPS
#define X10_ARRAY_LOCALSTATE_B2_H_NODEPS
#include <x10/array/LocalState.h>
#include <x10/array/Dist_Block_2.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Unsafe.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_ARRAY_LOCALSTATE_B2_H_GENERICS
#define X10_ARRAY_LOCALSTATE_B2_H_GENERICS
#endif // X10_ARRAY_LOCALSTATE_B2_H_GENERICS
#ifndef X10_ARRAY_LOCALSTATE_B2_H_IMPLEMENTATION
#define X10_ARRAY_LOCALSTATE_B2_H_IMPLEMENTATION
#include <x10/array/LocalState_B2.h>


//#line 265 "x10/array/DistArray_Block_2.x10"

//#line 267 "x10/array/DistArray_Block_2.x10"
template<class TPMGL(S)> void x10::array::LocalState_B2<TPMGL(S)>::_constructor(
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* data,
                           x10_long size, ::x10::array::Dist_Block_2* d) {
    
    //#line 269 "x10/array/DistArray_Block_2.x10"
    (this)->::x10::array::LocalState<TPMGL(S)>::_constructor(pg, data,
                                                             size);
    
    //#line 267 "x10/array/DistArray_Block_2.x10"
    
    //#line 264 "x10/array/DistArray_Block_2.x10"
    this->x10::array::template LocalState_B2<TPMGL(S)>::__fieldInitializers_x10_array_LocalState_B2();
    
    //#line 270 "x10/array/DistArray_Block_2.x10"
    this->FMGL(dist) = d;
}
template<class TPMGL(S)> ::x10::array::LocalState_B2<TPMGL(S)>* x10::array::LocalState_B2<TPMGL(S)>::_make(
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* data,
                           x10_long size, ::x10::array::Dist_Block_2* d)
{
    ::x10::array::LocalState_B2<TPMGL(S)>* this_ = new (::x10aux::alloc_z< ::x10::array::LocalState_B2<TPMGL(S)> >()) ::x10::array::LocalState_B2<TPMGL(S)>();
    this_->_constructor(pg, data, size, d);
    return this_;
}



//#line 273 "x10/array/DistArray_Block_2.x10"

//#line 264 "x10/array/DistArray_Block_2.x10"
template<class TPMGL(S)> ::x10::array::LocalState_B2<TPMGL(S)>*
  x10::array::LocalState_B2<TPMGL(S)>::x10__array__LocalState_B2____this__x10__array__LocalState_B2(
  ) {
    return this;
    
}
template<class TPMGL(S)> void x10::array::LocalState_B2<TPMGL(S)>::__fieldInitializers_x10_array_LocalState_B2(
  ) {
 
}
template<class TPMGL(S)> const ::x10aux::serialization_id_t x10::array::LocalState_B2<TPMGL(S)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::array::LocalState_B2<TPMGL(S)>::_deserializer);

template<class TPMGL(S)> void x10::array::LocalState_B2<TPMGL(S)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::array::LocalState<TPMGL(S)>::_serialize_body(buf);
    buf.write(this->FMGL(dist));
    
}

template<class TPMGL(S)> ::x10::lang::Reference* ::x10::array::LocalState_B2<TPMGL(S)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::array::LocalState_B2<TPMGL(S)>* this_ = new (::x10aux::alloc_z< ::x10::array::LocalState_B2<TPMGL(S)> >()) ::x10::array::LocalState_B2<TPMGL(S)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(S)> void x10::array::LocalState_B2<TPMGL(S)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::array::LocalState<TPMGL(S)>::_deserialize_body(buf);
    FMGL(dist) = buf.read< ::x10::array::Dist_Block_2*>();
}

template<class TPMGL(S)> ::x10::array::LocalState_B2<TPMGL(S)>*
  x10::array::LocalState_B2<void>::make(::x10::lang::PlaceGroup* pg,
                                        x10_long m, x10_long n,
                                        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(S)>* init) {
    
    //#line 274 "x10/array/DistArray_Block_2.x10"
    ::x10::array::DenseIterationSpace_2* globalSpace = ::x10::array::DenseIterationSpace_2::_make(((x10_long)0ll),
                                                                                                  ((x10_long)0ll),
                                                                                                  ((m) - (((x10_long)1ll))),
                                                                                                  ((n) - (((x10_long)1ll))));
    
    //#line 275 "x10/array/DistArray_Block_2.x10"
    ::x10::array::Dist_Block_2* dist = ::x10::array::Dist_Block_2::_make(pg,
                                                                         globalSpace);
    
    //#line 277 "x10/array/DistArray_Block_2.x10"
    ::x10::lang::Rail< TPMGL(S) >* data;
    
    //#line 278 "x10/array/DistArray_Block_2.x10"
    if (dist->FMGL(localIndices)->x10::array::DenseIterationSpace_2::isEmpty())
    {
        
        //#line 279 "x10/array/DistArray_Block_2.x10"
        data = ::x10::lang::Rail< TPMGL(S) >::_make();
    } else {
        
        //#line 281 "x10/array/DistArray_Block_2.x10"
        x10_long low1 = dist->FMGL(localIndices)->x10::array::DenseIterationSpace_2::min(
                          ((x10_long)0ll));
        
        //#line 282 "x10/array/DistArray_Block_2.x10"
        x10_long hi1 = dist->FMGL(localIndices)->x10::array::DenseIterationSpace_2::max(
                         ((x10_long)0ll));
        
        //#line 283 "x10/array/DistArray_Block_2.x10"
        x10_long low2 = dist->FMGL(localIndices)->x10::array::DenseIterationSpace_2::min(
                          ((x10_long)1ll));
        
        //#line 284 "x10/array/DistArray_Block_2.x10"
        x10_long hi2 = dist->FMGL(localIndices)->x10::array::DenseIterationSpace_2::max(
                         ((x10_long)1ll));
        
        //#line 285 "x10/array/DistArray_Block_2.x10"
        x10_long localSize1 = ((((hi1) - (low1))) + (((x10_long)1ll)));
        
        //#line 286 "x10/array/DistArray_Block_2.x10"
        x10_long localSize2 = ((((hi2) - (low2))) + (((x10_long)1ll)));
        
        //#line 287 "x10/array/DistArray_Block_2.x10"
        x10_long dataSize = ((localSize1) * (localSize2));
        
        //#line 288 "x10/array/DistArray_Block_2.x10"
        data = ::x10::lang::Rail< TPMGL(S) >::_makeUnsafe(dataSize, false);
        
        //#line 289 "x10/array/DistArray_Block_2.x10"
        x10_long i__96571min__96603 = low1;
        x10_long i__96571max__96604 = hi1;
        {
            x10_long i__96605;
            for (i__96605 = i__96571min__96603; ((i__96605) <= (i__96571max__96604));
                 i__96605 = ((i__96605) + (((x10_long)1ll))))
            {
                x10_long i__96606 = i__96605;
                
                //#line 290 "x10/array/DistArray_Block_2.x10"
                x10_long i__96553min__96599 = low2;
                x10_long i__96553max__96600 = hi2;
                {
                    x10_long i__96601;
                    for (i__96601 = i__96553min__96599; ((i__96601) <= (i__96553max__96600));
                         i__96601 = ((i__96601) + (((x10_long)1ll))))
                    {
                        x10_long j__96602 = i__96601;
                        
                        //#line 291 "x10/array/DistArray_Block_2.x10"
                        x10_long offset__96598 = ((((j__96602) - (low2))) + (((((i__96606) - (low1))) * (localSize2))));
                        
                        //#line 292 "x10/array/DistArray_Block_2.x10"
                        data->x10::lang::template Rail< TPMGL(S) >::__set(
                          offset__96598, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(S)>::__apply(::x10aux::nullCheck(init), 
                            i__96606, j__96602));
                    }
                }
                
            }
        }
        
    }
    
    //#line 296 "x10/array/DistArray_Block_2.x10"
    return ::x10::array::LocalState_B2<TPMGL(S)>::_make(pg,
                                                        data,
                                                        ((m) * (n)),
                                                        dist);
    
}
#endif // X10_ARRAY_LOCALSTATE_B2_H_IMPLEMENTATION
#endif // __X10_ARRAY_LOCALSTATE_B2_H_NODEPS
