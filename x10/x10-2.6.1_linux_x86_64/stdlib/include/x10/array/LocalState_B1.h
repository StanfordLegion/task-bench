#ifndef __X10_ARRAY_LOCALSTATE_B1_H
#define __X10_ARRAY_LOCALSTATE_B1_H

#include <x10rt.h>


#define X10_ARRAY_LOCALSTATE_H_NODEPS
#include <x10/array/LocalState.h>
#undef X10_ARRAY_LOCALSTATE_H_NODEPS
namespace x10 { namespace array { 
class Dist_Block_1;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_1;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

template<class TPMGL(S)> class LocalState_B1;
template <> class LocalState_B1<void>;
template<class TPMGL(S)> class LocalState_B1 : public ::x10::array::LocalState<TPMGL(S)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::array::Dist_Block_1* FMGL(dist);
    
    void _constructor(::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* data,
                      x10_long size, ::x10::array::Dist_Block_1* d);
    
    static ::x10::array::LocalState_B1<TPMGL(S)>* _make(::x10::lang::PlaceGroup* pg,
                                                        ::x10::lang::Rail< TPMGL(S) >* data,
                                                        x10_long size,
                                                        ::x10::array::Dist_Block_1* d);
    
    virtual ::x10::array::LocalState_B1<TPMGL(S)>* x10__array__LocalState_B1____this__x10__array__LocalState_B1(
      );
    virtual void __fieldInitializers_x10_array_LocalState_B1(
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

template<class TPMGL(S)> ::x10aux::RuntimeType x10::array::LocalState_B1<TPMGL(S)>::rtt;
template<class TPMGL(S)> void x10::array::LocalState_B1<TPMGL(S)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::array::LocalState_B1<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::array::LocalState<TPMGL(S)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(S)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.array.LocalState_B1";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class LocalState_B1<void> : public ::x10::array::LocalState<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(S)> static ::x10::array::LocalState_B1<TPMGL(S)>*
      make(::x10::lang::PlaceGroup* pg, x10_long n, ::x10::lang::Fun_0_1<x10_long, TPMGL(S)>* init);
    
    
};

} } 
#endif // X10_ARRAY_LOCALSTATE_B1_H

namespace x10 { namespace array { 
template<class TPMGL(S)> class LocalState_B1;
} } 

#ifndef X10_ARRAY_LOCALSTATE_B1_H_NODEPS
#define X10_ARRAY_LOCALSTATE_B1_H_NODEPS
#include <x10/array/LocalState.h>
#include <x10/array/Dist_Block_1.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/array/DenseIterationSpace_1.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Unsafe.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_ARRAY_LOCALSTATE_B1_H_GENERICS
#define X10_ARRAY_LOCALSTATE_B1_H_GENERICS
#endif // X10_ARRAY_LOCALSTATE_B1_H_GENERICS
#ifndef X10_ARRAY_LOCALSTATE_B1_H_IMPLEMENTATION
#define X10_ARRAY_LOCALSTATE_B1_H_IMPLEMENTATION
#include <x10/array/LocalState_B1.h>


//#line 234 "x10/array/DistArray_Block_1.x10"

//#line 236 "x10/array/DistArray_Block_1.x10"
template<class TPMGL(S)> void x10::array::LocalState_B1<TPMGL(S)>::_constructor(
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* data,
                           x10_long size, ::x10::array::Dist_Block_1* d) {
    
    //#line 238 "x10/array/DistArray_Block_1.x10"
    ::x10::array::LocalState<TPMGL(S)>* this__99417 = this;
    
    //#line 301 "x10/array/DistArray.x10"
    ::x10aux::nullCheck(this__99417)->FMGL(pg) = pg;
    ::x10aux::nullCheck(this__99417)->FMGL(rail) = data;
    ::x10aux::nullCheck(this__99417)->FMGL(size) = size;
    
    //#line 236 "x10/array/DistArray_Block_1.x10"
    
    //#line 239 "x10/array/DistArray_Block_1.x10"
    this->FMGL(dist) = d;
}
template<class TPMGL(S)> ::x10::array::LocalState_B1<TPMGL(S)>* x10::array::LocalState_B1<TPMGL(S)>::_make(
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* data,
                           x10_long size, ::x10::array::Dist_Block_1* d)
{
    ::x10::array::LocalState_B1<TPMGL(S)>* this_ = new (::x10aux::alloc_z< ::x10::array::LocalState_B1<TPMGL(S)> >()) ::x10::array::LocalState_B1<TPMGL(S)>();
    this_->_constructor(pg, data, size, d);
    return this_;
}



//#line 242 "x10/array/DistArray_Block_1.x10"

//#line 233 "x10/array/DistArray_Block_1.x10"
template<class TPMGL(S)> ::x10::array::LocalState_B1<TPMGL(S)>*
  x10::array::LocalState_B1<TPMGL(S)>::x10__array__LocalState_B1____this__x10__array__LocalState_B1(
  ) {
    return this;
    
}
template<class TPMGL(S)> void x10::array::LocalState_B1<TPMGL(S)>::__fieldInitializers_x10_array_LocalState_B1(
  ) {
 
}
template<class TPMGL(S)> const ::x10aux::serialization_id_t x10::array::LocalState_B1<TPMGL(S)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::array::LocalState_B1<TPMGL(S)>::_deserializer);

template<class TPMGL(S)> void x10::array::LocalState_B1<TPMGL(S)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::array::LocalState<TPMGL(S)>::_serialize_body(buf);
    buf.write(this->FMGL(dist));
    
}

template<class TPMGL(S)> ::x10::lang::Reference* ::x10::array::LocalState_B1<TPMGL(S)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::array::LocalState_B1<TPMGL(S)>* this_ = new (::x10aux::alloc_z< ::x10::array::LocalState_B1<TPMGL(S)> >()) ::x10::array::LocalState_B1<TPMGL(S)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(S)> void x10::array::LocalState_B1<TPMGL(S)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::array::LocalState<TPMGL(S)>::_deserialize_body(buf);
    FMGL(dist) = buf.read< ::x10::array::Dist_Block_1*>();
}

template<class TPMGL(S)> ::x10::array::LocalState_B1<TPMGL(S)>*
  x10::array::LocalState_B1<void>::make(::x10::lang::PlaceGroup* pg,
                                        x10_long n, ::x10::lang::Fun_0_1<x10_long, TPMGL(S)>* init) {
    
    //#line 243 "x10/array/DistArray_Block_1.x10"
    ::x10::array::DenseIterationSpace_1* globalSpace =  (new (::x10aux::alloc_z< ::x10::array::DenseIterationSpace_1>()) ::x10::array::DenseIterationSpace_1());
    (globalSpace)->::x10::array::DenseIterationSpace_1::_constructor(
      ((x10_long)0ll), ((n) - (((x10_long)1ll))));
    
    //#line 244 "x10/array/DistArray_Block_1.x10"
    ::x10::array::Dist_Block_1* dist =  (new (::x10aux::alloc_z< ::x10::array::Dist_Block_1>()) ::x10::array::Dist_Block_1());
    (dist)->::x10::array::Dist_Block_1::_constructor(pg, globalSpace);
    
    //#line 246 "x10/array/DistArray_Block_1.x10"
    ::x10::lang::Rail< TPMGL(S) >* data;
    
    //#line 247 "x10/array/DistArray_Block_1.x10"
    if ((__extension__ ({
            ::x10::array::DenseIterationSpace_1* this__99402 =
              dist->FMGL(localIndices);
            ((this__99402->FMGL(max)) < (this__99402->FMGL(min)));
        }))
        ) {
        
        //#line 248 "x10/array/DistArray_Block_1.x10"
        data = ::x10::lang::Rail< TPMGL(S) >::_make();
    } else {
        
        //#line 250 "x10/array/DistArray_Block_1.x10"
        x10_long low = dist->FMGL(localIndices)->x10::array::DenseIterationSpace_1::min(
                         ((x10_long)0ll));
        
        //#line 251 "x10/array/DistArray_Block_1.x10"
        x10_long hi = dist->FMGL(localIndices)->x10::array::DenseIterationSpace_1::max(
                        ((x10_long)0ll));
        
        //#line 252 "x10/array/DistArray_Block_1.x10"
        x10_long dataSize = ((((hi) - (low))) + (((x10_long)1ll)));
        
        //#line 253 "x10/array/DistArray_Block_1.x10"
        data = ::x10::lang::Rail< TPMGL(S) >::_makeUnsafe(dataSize, false);
        
        //#line 254 "x10/array/DistArray_Block_1.x10"
        {
            x10_long i__99424;
            for (i__99424 = low; ((i__99424) <= (hi)); i__99424 =
                                                         ((i__99424) + (((x10_long)1ll))))
            {
                
                //#line 255 "x10/array/DistArray_Block_1.x10"
                x10_long offset__99421 = ((i__99424) - (low));
                
                //#line 256 "x10/array/DistArray_Block_1.x10"
                data->x10::lang::template Rail< TPMGL(S) >::__set(
                  offset__99421, ::x10::lang::Fun_0_1<x10_long, TPMGL(S)>::__apply(::x10aux::nullCheck(init), 
                    i__99424));
            }
        }
        
    }
    
    //#line 259 "x10/array/DistArray_Block_1.x10"
    ::x10::array::LocalState_B1<TPMGL(S)>* alloc__99426 =
       (new (::x10aux::alloc_z< ::x10::array::LocalState_B1<TPMGL(S)> >()) ::x10::array::LocalState_B1<TPMGL(S)>());
    (alloc__99426)->::x10::array::LocalState_B1<TPMGL(S)>::_constructor(
      pg, data, n, dist);
    return alloc__99426;
    
}
#endif // X10_ARRAY_LOCALSTATE_B1_H_IMPLEMENTATION
#endif // __X10_ARRAY_LOCALSTATE_B1_H_NODEPS
