#ifndef __X10_ARRAY_ARRAY_4_H
#define __X10_ARRAY_ARRAY_4_H

#include <x10rt.h>


#define X10_ARRAY_ARRAY_H_NODEPS
#include <x10/array/Array.h>
#undef X10_ARRAY_ARRAY_H_NODEPS
#define X10_LANG_FUN_0_4_H_NODEPS
#include <x10/lang/Fun_0_4.h>
#undef X10_LANG_FUN_0_4_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_4;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class Array_4_Strings {
  public:
    static ::x10::lang::String sl__153659;
    static ::x10::lang::String sl__153654;
    static ::x10::lang::String sl__153658;
    static ::x10::lang::String sl__153660;
    static ::x10::lang::String sl__153655;
    static ::x10::lang::String sl__153661;
    static ::x10::lang::String sl__153662;
    static ::x10::lang::String sl__153656;
    static ::x10::lang::String sl__153657;
    static ::x10::lang::String sl__153663;
};

template<class TPMGL(T)> class Array_4;
template <> class Array_4<void>;
template<class TPMGL(T)> class Array_4 : public ::x10::array::Array<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(numElems_1);
    
    x10_long FMGL(numElems_2);
    
    x10_long FMGL(numElems_3);
    
    x10_long FMGL(numElems_4);
    
    static ::x10aux::itable_entry _itables[5];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::array::Array_4<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::array::Array_4<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::template itable< ::x10::array::Array_4<TPMGL(T)> > _itable_2;
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable< ::x10::array::Array_4<TPMGL(T)> > _itable_3;
    
    x10_long rank();
    void _constructor(x10_long m, x10_long n, x10_long p, x10_long q);
    
    static ::x10::array::Array_4<TPMGL(T)>* _make(x10_long m, x10_long n,
                                                  x10_long p, x10_long q);
    
    void _constructor(x10_long m, x10_long n, x10_long p, x10_long q, TPMGL(T) init);
    
    static ::x10::array::Array_4<TPMGL(T)>* _make(x10_long m, x10_long n,
                                                  x10_long p, x10_long q,
                                                  TPMGL(T) init);
    
    void _constructor(x10_long m, x10_long n, x10_long p, x10_long q, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* init);
    
    static ::x10::array::Array_4<TPMGL(T)>* _make(x10_long m, x10_long n,
                                                  x10_long p, x10_long q,
                                                  ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* init);
    
    void _constructor(::x10::array::Array_4<TPMGL(T)>* src);
    
    static ::x10::array::Array_4<TPMGL(T)>* _make(::x10::array::Array_4<TPMGL(T)>* src);
    
    void _constructor(::x10::lang::Rail< TPMGL(T) >* r, x10_long m, x10_long n,
                      x10_long p, x10_long q);
    
    static ::x10::array::Array_4<TPMGL(T)>* _make(::x10::lang::Rail< TPMGL(T) >* r,
                                                  x10_long m, x10_long n,
                                                  x10_long p, x10_long q);
    
    virtual ::x10::lang::String* toString();
    virtual ::x10::lang::String* toString(x10_long limit);
    virtual ::x10::array::IterationSpace* indices();
    virtual x10_long offset(x10_long i, x10_long j, x10_long k, x10_long l);
    virtual TPMGL(T) __apply(x10_long i, x10_long j, x10_long k, x10_long l);
    virtual TPMGL(T) __apply(::x10::lang::Point* p);
    virtual TPMGL(T) __set(x10_long i, x10_long j, x10_long k, x10_long l,
                           TPMGL(T) v);
    virtual TPMGL(T) __set(::x10::lang::Point* p, TPMGL(T) v);
    virtual ::x10::array::Array_4<TPMGL(T)>* x10__array__Array_4____this__x10__array__Array_4(
      );
    virtual void __fieldInitializers_x10_array_Array_4();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::array::Array_4<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::array::Array_4<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::array::Array_4<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::array::Array<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.array.Array_4";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class Array_4<void> : public ::x10::array::Array<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static ::x10::array::Array_4<TPMGL(T)>*
      makeView(::x10::lang::Rail< TPMGL(T) >* r, x10_long m,
               x10_long n, x10_long p, x10_long q);
    
    static x10_long validateSize(x10_long m, x10_long n, x10_long p,
                                 x10_long q);
    
    
};

} } 
#endif // X10_ARRAY_ARRAY_4_H

namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_4;
} } 

#ifndef X10_ARRAY_ARRAY_4_H_NODEPS
#define X10_ARRAY_ARRAY_4_H_NODEPS
#include <x10/array/Array.h>
#include <x10/lang/Fun_0_4.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/IllegalOperationException.h>
#include <x10/lang/String.h>
#include <x10/util/StringBuilder.h>
#include <x10/lang/Any.h>
#include <x10/array/DenseIterationSpace_4.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Point.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_ARRAY_ARRAY_4_H_GENERICS
#define X10_ARRAY_ARRAY_4_H_GENERICS
#endif // X10_ARRAY_ARRAY_4_H_GENERICS
#ifndef X10_ARRAY_ARRAY_4_H_IMPLEMENTATION
#define X10_ARRAY_ARRAY_4_H_IMPLEMENTATION
#include <x10/array/Array_4.h>


//#line 25 "x10/array/Array_4.x10"
/**
         * The number of elements in rank 1 (indexed 0..(numElems_1-1))
         */

//#line 30 "x10/array/Array_4.x10"
/**
         * The number of elements in rank 2 (indexed 0..(numElems_2-1)).
         */

//#line 35 "x10/array/Array_4.x10"
/**
         * The number of elements in rank 3 (indexed 0..(numElems_3-1)).
         */

//#line 40 "x10/array/Array_4.x10"
/**
         * The number of elements in rank 4 (indexed 0..(numElems_4-1)).
         */
template<class TPMGL(T)> typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::array::Array_4<TPMGL(T)> >  x10::array::Array_4<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::array::Array<TPMGL(T)>::iterator, &x10::array::Array_4<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::array::Array_4<TPMGL(T)> >  x10::array::Array_4<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::array::Array_4<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::template itable< ::x10::array::Array_4<TPMGL(T)> >  x10::array::Array_4<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::array::Array_4<TPMGL(T)>::__apply, &x10::array::Array_4<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable< ::x10::array::Array_4<TPMGL(T)> >  x10::array::Array_4<TPMGL(T)>::_itable_3(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::array::Array_4<TPMGL(T)>::__apply, &x10::array::Array_4<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::array::Array_4<TPMGL(T)>::_itables[5] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &_itable_3), ::x10aux::itable_entry(NULL, (void*)"::x10::array::Array_4<TPMGL(T)>")};

//#line 46 "x10/array/Array_4.x10"
/**
     * @return the rank (dimensionality) of the Array
     */
template<class TPMGL(T)> x10_long x10::array::Array_4<TPMGL(T)>::rank() {
    return ((x10_long)4ll);
    
}

//#line 52 "x10/array/Array_4.x10"
/**
     * Construct a 4-dimensional array with indices [0..m-1][0..n-1][0..p-1][0..q-1]
     * whose elements are zero-initialized.
     */
template<class TPMGL(T)> void x10::array::Array_4<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, x10_long p, x10_long q) {
    
    //#line 53 "x10/array/Array_4.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor(::x10::array::Array_4<void>::validateSize(
                                                          m, n, p,
                                                          q), true);
    
    //#line 54 "x10/array/Array_4.x10"
    FMGL(numElems_1) = m;
    FMGL(numElems_2) = n;
    FMGL(numElems_3) = p;
    FMGL(numElems_4) = q;
    
    //#line 21 "x10/array/Array_4.x10"
    this->x10::array::template Array_4<TPMGL(T)>::__fieldInitializers_x10_array_Array_4();
}
template<class TPMGL(T)> ::x10::array::Array_4<TPMGL(T)>* x10::array::Array_4<TPMGL(T)>::_make(
                           x10_long m, x10_long n, x10_long p,
                           x10_long q) {
    ::x10::array::Array_4<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_4<TPMGL(T)> >()) ::x10::array::Array_4<TPMGL(T)>();
    this_->_constructor(m, n, p, q);
    return this_;
}



//#line 61 "x10/array/Array_4.x10"
/**
     * Construct a 4-dimensional array with indices [0..m-1][0..n-1][0..p-1][0..q-1]
     * whose elements are initialized to init.
     */
template<class TPMGL(T)> void x10::array::Array_4<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, x10_long p,
                           x10_long q, TPMGL(T) init) {
    
    //#line 62 "x10/array/Array_4.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor(::x10::array::Array_4<void>::validateSize(
                                                          m,
                                                          n,
                                                          p,
                                                          q),
                                                        false);
    
    //#line 63 "x10/array/Array_4.x10"
    FMGL(numElems_1) = m;
    FMGL(numElems_2) = n;
    FMGL(numElems_3) = p;
    FMGL(numElems_4) = q;
    
    //#line 21 "x10/array/Array_4.x10"
    this->x10::array::template Array_4<TPMGL(T)>::__fieldInitializers_x10_array_Array_4();
    
    //#line 64 "x10/array/Array_4.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::fill(
      init);
}
template<class TPMGL(T)> ::x10::array::Array_4<TPMGL(T)>* x10::array::Array_4<TPMGL(T)>::_make(
                           x10_long m, x10_long n, x10_long p,
                           x10_long q, TPMGL(T) init) {
    ::x10::array::Array_4<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_4<TPMGL(T)> >()) ::x10::array::Array_4<TPMGL(T)>();
    this_->_constructor(m, n, p, q, init);
    return this_;
}



//#line 71 "x10/array/Array_4.x10"
/**
     * Construct a 4-dimensional array with indices [0..m-1][0..n-1][0..p-1][0..q-1]
     * whose elements are initialized to the value returned by the init closure for each index.
     */
template<class TPMGL(T)> void x10::array::Array_4<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, x10_long p,
                           x10_long q, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* init) {
    
    //#line 72 "x10/array/Array_4.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor(::x10::array::Array_4<void>::validateSize(
                                                          m,
                                                          n,
                                                          p,
                                                          q),
                                                        false);
    
    //#line 73 "x10/array/Array_4.x10"
    FMGL(numElems_1) = m;
    FMGL(numElems_2) = n;
    FMGL(numElems_3) = p;
    FMGL(numElems_4) = q;
    
    //#line 21 "x10/array/Array_4.x10"
    this->x10::array::template Array_4<TPMGL(T)>::__fieldInitializers_x10_array_Array_4();
    
    //#line 74 "x10/array/Array_4.x10"
    x10_long i__93183min__93284 = ((x10_long)0ll);
    x10_long i__93183max__93285 = ((m) - (((x10_long)1ll)));
    {
        x10_long i__93286;
        for (i__93286 = i__93183min__93284; ((i__93286) <= (i__93183max__93285));
             i__93286 = ((i__93286) + (((x10_long)1ll))))
        {
            x10_long i__93287 = i__93286;
            
            //#line 75 "x10/array/Array_4.x10"
            x10_long i__93165min__93280 = ((x10_long)0ll);
            x10_long i__93165max__93281 = ((n) - (((x10_long)1ll)));
            {
                x10_long i__93282;
                for (i__93282 = i__93165min__93280; ((i__93282) <= (i__93165max__93281));
                     i__93282 = ((i__93282) + (((x10_long)1ll))))
                {
                    x10_long j__93283 = i__93282;
                    
                    //#line 76 "x10/array/Array_4.x10"
                    x10_long i__93147min__93276 = ((x10_long)0ll);
                    x10_long i__93147max__93277 = ((p) - (((x10_long)1ll)));
                    {
                        x10_long i__93278;
                        for (i__93278 = i__93147min__93276;
                             ((i__93278) <= (i__93147max__93277));
                             i__93278 = ((i__93278) + (((x10_long)1ll))))
                        {
                            x10_long k__93279 = i__93278;
                            
                            //#line 77 "x10/array/Array_4.x10"
                            x10_long i__93129min__93272 =
                              ((x10_long)0ll);
                            x10_long i__93129max__93273 =
                              ((q) - (((x10_long)1ll)));
                            {
                                x10_long i__93274;
                                for (i__93274 = i__93129min__93272;
                                     ((i__93274) <= (i__93129max__93273));
                                     i__93274 = ((i__93274) + (((x10_long)1ll))))
                                {
                                    x10_long l__93275 = i__93274;
                                    
                                    //#line 78 "x10/array/Array_4.x10"
                                    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                                      this->x10::array::template Array_4<TPMGL(T)>::offset(
                                        i__93287, j__93283,
                                        k__93279, l__93275),
                                      ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(init), 
                                        i__93287, j__93283,
                                        k__93279, l__93275));
                                }
                            }
                            
                        }
                    }
                    
                }
            }
            
        }
    }
    
}
template<class TPMGL(T)> ::x10::array::Array_4<TPMGL(T)>* x10::array::Array_4<TPMGL(T)>::_make(
                           x10_long m, x10_long n, x10_long p,
                           x10_long q, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* init)
{
    ::x10::array::Array_4<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_4<TPMGL(T)> >()) ::x10::array::Array_4<TPMGL(T)>();
    this_->_constructor(m, n, p, q, init);
    return this_;
}



//#line 89 "x10/array/Array_4.x10"
/**
     * Construct a new 4-dimensional array by copying all elements of src
     * @param src The source array to copy
     */
template<class TPMGL(T)> void x10::array::Array_4<TPMGL(T)>::_constructor(
                           ::x10::array::Array_4<TPMGL(T)>* src) {
    
    //#line 90 "x10/array/Array_4.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor(::x10::lang::Rail< TPMGL(T) >::_make(::x10aux::nullCheck(src)->FMGL(raw)));
    
    //#line 91 "x10/array/Array_4.x10"
    FMGL(numElems_1) = ::x10aux::nullCheck(src)->FMGL(numElems_1);
    FMGL(numElems_2) = ::x10aux::nullCheck(src)->FMGL(numElems_2);
    FMGL(numElems_3) = ::x10aux::nullCheck(src)->FMGL(numElems_3);
    FMGL(numElems_4) = ::x10aux::nullCheck(src)->FMGL(numElems_4);
    
    //#line 21 "x10/array/Array_4.x10"
    this->x10::array::template Array_4<TPMGL(T)>::__fieldInitializers_x10_array_Array_4();
}
template<class TPMGL(T)> ::x10::array::Array_4<TPMGL(T)>* x10::array::Array_4<TPMGL(T)>::_make(
                           ::x10::array::Array_4<TPMGL(T)>* src)
{
    ::x10::array::Array_4<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_4<TPMGL(T)> >()) ::x10::array::Array_4<TPMGL(T)>();
    this_->_constructor(src);
    return this_;
}



//#line 95 "x10/array/Array_4.x10"
template<class TPMGL(T)> void x10::array::Array_4<TPMGL(T)>::_constructor(
                           ::x10::lang::Rail< TPMGL(T) >* r,
                           x10_long m, x10_long n, x10_long p,
                           x10_long q) {
    
    //#line 96 "x10/array/Array_4.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor(r);
    
    //#line 97 "x10/array/Array_4.x10"
    FMGL(numElems_1) = m;
    FMGL(numElems_2) = n;
    FMGL(numElems_3) = p;
    FMGL(numElems_4) = q;
    
    //#line 21 "x10/array/Array_4.x10"
    this->x10::array::template Array_4<TPMGL(T)>::__fieldInitializers_x10_array_Array_4();
}
template<class TPMGL(T)> ::x10::array::Array_4<TPMGL(T)>* x10::array::Array_4<TPMGL(T)>::_make(
                           ::x10::lang::Rail< TPMGL(T) >* r,
                           x10_long m, x10_long n, x10_long p,
                           x10_long q) {
    ::x10::array::Array_4<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_4<TPMGL(T)> >()) ::x10::array::Array_4<TPMGL(T)>();
    this_->_constructor(r, m, n, p, q);
    return this_;
}



//#line 103 "x10/array/Array_4.x10"
/**
     * Construct an Array_4 view over an existing Rail
     */

//#line 115 "x10/array/Array_4.x10"
/**
     * Return the string representation of this array.
     * 
     * @return the string representation of this array.
     */
template<class TPMGL(T)> ::x10::lang::String* x10::array::Array_4<TPMGL(T)>::toString(
  ) {
    
    //#line 116 "x10/array/Array_4.x10"
    return this->x10::array::template Array_4<TPMGL(T)>::toString(
             ((x10_long)10ll));
    
}

//#line 125 "x10/array/Array_4.x10"
/**
     * Return the string representation of this array.
     *
     * @param limit maximum number of elements to print
     * @return the string representation of this array.
     */
template<class TPMGL(T)> ::x10::lang::String* x10::array::Array_4<TPMGL(T)>::toString(
  x10_long limit) {
    
    //#line 126 "x10/array/Array_4.x10"
    ::x10::util::StringBuilder* sb = ::x10::util::StringBuilder::_make();
    
    //#line 127 "x10/array/Array_4.x10"
    sb->add((&::x10::array::Array_4_Strings::sl__153657));
    
    //#line 128 "x10/array/Array_4.x10"
    x10_long printed = ((x10_long)0ll);
    
    //#line 129 "x10/array/Array_4.x10"
    x10_long i__93255min__93300 = ((x10_long)0ll);
    x10_long i__93255max__93301 = ((this->FMGL(numElems_1)) - (((x10_long)1ll)));
    goto outer__93302; outer__93302: {
        x10_long i__93303;
        for (i__93303 = i__93255min__93300; ((i__93303) <= (i__93255max__93301));
             i__93303 = ((i__93303) + (((x10_long)1ll))))
        {
        {
            x10_long i__93304 = i__93303;
            
            //#line 130 "x10/array/Array_4.x10"
            x10_long i__93237min__93296 = ((x10_long)0ll);
            x10_long i__93237max__93297 = ((this->FMGL(numElems_2)) - (((x10_long)1ll)));
            {
                x10_long i__93298;
                for (i__93298 = i__93237min__93296; ((i__93298) <= (i__93237max__93297));
                     i__93298 = ((i__93298) + (((x10_long)1ll))))
                {
                    x10_long j__93299 = i__93298;
                    
                    //#line 131 "x10/array/Array_4.x10"
                    x10_long i__93219min__93292 = ((x10_long)0ll);
                    x10_long i__93219max__93293 = ((this->FMGL(numElems_3)) - (((x10_long)1ll)));
                    {
                        x10_long i__93294;
                        for (i__93294 = i__93219min__93292;
                             ((i__93294) <= (i__93219max__93293));
                             i__93294 = ((i__93294) + (((x10_long)1ll))))
                        {
                            x10_long k__93295 = i__93294;
                            
                            //#line 132 "x10/array/Array_4.x10"
                            x10_long i__93201min__93288 =
                              ((x10_long)0ll);
                            x10_long i__93201max__93289 =
                              ((this->FMGL(numElems_4)) - (((x10_long)1ll)));
                            {
                                x10_long i__93290;
                                for (i__93290 = i__93201min__93288;
                                     ((i__93290) <= (i__93201max__93289));
                                     i__93290 = ((i__93290) + (((x10_long)1ll))))
                                {
                                    x10_long l__93291 = i__93290;
                                    
                                    //#line 133 "x10/array/Array_4.x10"
                                    if ((!::x10aux::struct_equals(l__93291,
                                                                  ((x10_long)0ll))))
                                    {
                                        sb->add((&::x10::array::Array_4_Strings::sl__153658));
                                    }
                                    
                                    //#line 134 "x10/array/Array_4.x10"
                                    reinterpret_cast< ::x10::util::StringBuilder*>(sb->add(
                                                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->x10::array::template Array_4<TPMGL(T)>::__apply(
                                                                                                                                          i__93304,
                                                                                                                                          j__93299,
                                                                                                                                          k__93295,
                                                                                                                                          l__93291))));
                                    
                                    //#line 135 "x10/array/Array_4.x10"
                                    if (((printed = ((printed) + (((x10_long)1ll)))) > (limit)))
                                    {
                                        goto outer__93302_end_;
                                    }
                                    
                                }
                            }
                            
                            //#line 137 "x10/array/Array_4.x10"
                            sb->add((::x10aux::struct_equals(k__93295,
                                                             ((this->FMGL(numElems_3)) - (((x10_long)1ll)))))
                                      ? ((&::x10::array::Array_4_Strings::sl__153659))
                                      : ((&::x10::array::Array_4_Strings::sl__153660)));
                        }
                    }
                    
                    //#line 139 "x10/array/Array_4.x10"
                    sb->add((::x10aux::struct_equals(j__93299,
                                                     ((this->FMGL(numElems_2)) - (((x10_long)1ll)))))
                              ? ((&::x10::array::Array_4_Strings::sl__153659))
                              : ((&::x10::array::Array_4_Strings::sl__153660)));
                }
            }
            
        }
        goto outer__93302_next_; outer__93302_next_: ;
        }
        goto outer__93302_end_; outer__93302_end_: ;
    }
    
    //#line 142 "x10/array/Array_4.x10"
    if (((limit) < (this->FMGL(size)))) {
        
        //#line 143 "x10/array/Array_4.x10"
        sb->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::array::Array_4_Strings::sl__153661), ((this->FMGL(size)) - (limit))), (&::x10::array::Array_4_Strings::sl__153662)));
    }
    
    //#line 145 "x10/array/Array_4.x10"
    sb->add((&::x10::array::Array_4_Strings::sl__153663));
    
    //#line 146 "x10/array/Array_4.x10"
    return sb->toString();
    
}

//#line 152 "x10/array/Array_4.x10"
/**
     * @return an IterationSpace containing all valid Points for indexing this Array.
     */
template<class TPMGL(T)> ::x10::array::IterationSpace* x10::array::Array_4<TPMGL(T)>::indices(
  ) {
    
    //#line 153 "x10/array/Array_4.x10"
    return reinterpret_cast< ::x10::array::IterationSpace*>(::x10::array::DenseIterationSpace_4::_make(((x10_long)0ll),
                                                                                                       ((x10_long)0ll),
                                                                                                       ((x10_long)0ll),
                                                                                                       ((x10_long)0ll),
                                                                                                       ((this->FMGL(numElems_1)) - (((x10_long)1ll))),
                                                                                                       ((this->FMGL(numElems_2)) - (((x10_long)1ll))),
                                                                                                       ((this->FMGL(numElems_3)) - (((x10_long)1ll))),
                                                                                                       ((this->FMGL(numElems_4)) - (((x10_long)1ll)))));
    
}

//#line 160 "x10/array/Array_4.x10"
/**
     * Map a 4-D (i,j,k,l) index into a 1-D index into the backing Rail
     * returned by raw(). Uses row-major ordering.
     */
template<class TPMGL(T)> x10_long x10::array::Array_4<TPMGL(T)>::offset(
  x10_long i, x10_long j, x10_long k, x10_long l) {
    
    //#line 161 "x10/array/Array_4.x10"
    return ((l) + (((this->FMGL(numElems_4)) * (((k) + (((this->FMGL(numElems_3)) * (((j) + (((i) * (this->FMGL(numElems_2)))))))))))));
    
}

//#line 174 "x10/array/Array_4.x10"
/**
     * Return the element of this array corresponding to the given triple of indices.
     * 
     * @param i the given index in the first dimension
     * @param j the given index in the second dimension
     * @param k the given index in the third dimension
     * @param l the given index in the fourth dimension
     * @return the element of this array corresponding to the given quad of indices.
     * @see #set(T, Long, Long, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::Array_4<TPMGL(T)>::__apply(
  x10_long i, x10_long j, x10_long k, x10_long l) {
    
    //#line 175 "x10/array/Array_4.x10"
    if ((BOUNDS_CHECK_BOOL && ((((((((((i) < (((x10_long)0ll))) ||
                               ((i) >= (this->FMGL(numElems_1)))) ||
                               ((j) < (((x10_long)0ll)))) ||
                               ((j) >= (this->FMGL(numElems_2)))) ||
                               ((k) < (((x10_long)0ll)))) ||
                               ((k) >= (this->FMGL(numElems_3)))) ||
                               ((l) < (((x10_long)0ll)))) ||
                               ((l) >= (this->FMGL(numElems_4)))))))
    {
        
        //#line 179 "x10/array/Array_4.x10"
        ::x10::array::Array<void>::raiseBoundsError(i, j,
                                                    k, l);
    }
    
    //#line 181 "x10/array/Array_4.x10"
    return (this->FMGL(raw))->unchecked_apply(this->x10::array::template Array_4<TPMGL(T)>::offset(
                                                i, j, k, l));
    
}

//#line 191 "x10/array/Array_4.x10"
/**
     * Return the element of this array corresponding to the given Point.
     * 
     * @param p the given Point
     * @return the element of this array corresponding to the given Point.
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::Array_4<TPMGL(T)>::__apply(
  ::x10::lang::Point* p) {
    return this->x10::array::template Array_4<TPMGL(T)>::__apply(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                   ((x10_long)1ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                       ((x10_long)2ll)),
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)3ll)));
    
}

//#line 205 "x10/array/Array_4.x10"
/**
     * Set the element of this array corresponding to the given triple of indices to the given value.
     * Return the new value of the element.
     * 
     * @param v the given value
     * @param i the given index in the first dimension
     * @param j the given index in the second dimension
     * @param k the given index in the third dimension
     * @param l the given index in the fourth dimension
     * @return the new value of the element of this array corresponding to the given quad of indices.
     * @see #operator(Long, Long, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::Array_4<TPMGL(T)>::__set(
  x10_long i, x10_long j, x10_long k, x10_long l, TPMGL(T) v) {
    
    //#line 206 "x10/array/Array_4.x10"
    if ((BOUNDS_CHECK_BOOL && ((((((((((i) < (((x10_long)0ll))) ||
                               ((i) >= (this->FMGL(numElems_1)))) ||
                               ((j) < (((x10_long)0ll)))) ||
                               ((j) >= (this->FMGL(numElems_2)))) ||
                               ((k) < (((x10_long)0ll)))) ||
                               ((k) >= (this->FMGL(numElems_3)))) ||
                               ((l) < (((x10_long)0ll)))) ||
                               ((l) >= (this->FMGL(numElems_4)))))))
    {
        
        //#line 210 "x10/array/Array_4.x10"
        ::x10::array::Array<void>::raiseBoundsError(i, j,
                                                    k, l);
    }
    
    //#line 212 "x10/array/Array_4.x10"
    return (this->FMGL(raw))->unchecked_set(this->x10::array::template Array_4<TPMGL(T)>::offset(
                                              i, j, k, l), v);
    
}

//#line 224 "x10/array/Array_4.x10"
/**
     * Set the element of this array corresponding to the given Point to the given value.
     * Return the new value of the element.
     * 
     * @param v the given value
     * @param p the given Point
     * @return the new value of the element of this array corresponding to the given Point.
     * @see #operator(Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::Array_4<TPMGL(T)>::__set(
  ::x10::lang::Point* p, TPMGL(T) v) {
    return this->x10::array::template Array_4<TPMGL(T)>::__set(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                   ((x10_long)1ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                       ((x10_long)2ll)),
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)3ll)), v);
    
}

//#line 227 "x10/array/Array_4.x10"

//#line 21 "x10/array/Array_4.x10"
template<class TPMGL(T)> ::x10::array::Array_4<TPMGL(T)>*
  x10::array::Array_4<TPMGL(T)>::x10__array__Array_4____this__x10__array__Array_4(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::array::Array_4<TPMGL(T)>::__fieldInitializers_x10_array_Array_4(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::array::Array_4<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::array::Array_4<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::array::Array_4<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::array::Array<TPMGL(T)>::_serialize_body(buf);
    buf.write(this->FMGL(numElems_1));
    buf.write(this->FMGL(numElems_2));
    buf.write(this->FMGL(numElems_3));
    buf.write(this->FMGL(numElems_4));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::array::Array_4<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::array::Array_4<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_4<TPMGL(T)> >()) ::x10::array::Array_4<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::array::Array_4<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::array::Array<TPMGL(T)>::_deserialize_body(buf);
    FMGL(numElems_1) = buf.read<x10_long>();
    FMGL(numElems_2) = buf.read<x10_long>();
    FMGL(numElems_3) = buf.read<x10_long>();
    FMGL(numElems_4) = buf.read<x10_long>();
}

template<class TPMGL(T)> ::x10::array::Array_4<TPMGL(T)>*
  x10::array::Array_4<void>::makeView(::x10::lang::Rail< TPMGL(T) >* r,
                                      x10_long m, x10_long n,
                                      x10_long p, x10_long q) {
    
    //#line 104 "x10/array/Array_4.x10"
    x10_long size = ((((((n) * (m))) * (p))) * (q));
    
    //#line 105 "x10/array/Array_4.x10"
    if ((!::x10aux::struct_equals(size, (x10_long)(::x10aux::nullCheck(r)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalOperationException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::array::Array_4_Strings::sl__153654), m), (&::x10::array::Array_4_Strings::sl__153655)), n), (&::x10::array::Array_4_Strings::sl__153655)), p), (&::x10::array::Array_4_Strings::sl__153655)), q), (&::x10::array::Array_4_Strings::sl__153656)), (x10_long)(::x10aux::nullCheck(r)->FMGL(size))))));
    }
    
    //#line 106 "x10/array/Array_4.x10"
    return ::x10::array::Array_4<TPMGL(T)>::_make(r, m, n,
                                                  p, q);
    
}
#endif // X10_ARRAY_ARRAY_4_H_IMPLEMENTATION
#endif // __X10_ARRAY_ARRAY_4_H_NODEPS
