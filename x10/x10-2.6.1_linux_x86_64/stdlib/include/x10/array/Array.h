#ifndef __X10_ARRAY_ARRAY_H
#define __X10_ARRAY_ARRAY_H

#include <x10rt.h>


#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
#define X10_LANG_FUN_0_1_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#undef X10_LANG_FUN_0_1_H_NODEPS
namespace x10 { namespace lang { 
class Point;
} } 
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class NoInline;
} } 
namespace x10 { namespace compiler { 
class NoReturn;
} } 
namespace x10 { namespace lang { 
class NegativeArraySizeException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class Array_Strings {
  public:
    static ::x10::lang::String sl__163686;
    static ::x10::lang::String sl__163687;
    static ::x10::lang::String sl__163685;
    static ::x10::lang::String sl__163684;
    static ::x10::lang::String sl__163683;
};

template<class TPMGL(T)> class Array;
template <> class Array<void>;
template<class TPMGL(T)> class Array : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(size);
    
    x10_long rank();
    ::x10::lang::Rail< TPMGL(T) >* FMGL(raw);
    
    void _constructor(x10_long s, x10_boolean zero);
    
    void _constructor(::x10::lang::Rail< TPMGL(T) >* r);
    
    virtual ::x10::lang::Rail< TPMGL(T) >* raw();
    virtual void modifyRaw(::x10::lang::Rail< TPMGL(T) >* r);
    virtual ::x10::lang::Iterator<TPMGL(T)>* iterator();
    virtual void fill(TPMGL(T) v);
    virtual void clear();
    template<class TPMGL(U)> TPMGL(U) reduce(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
                                             TPMGL(U) unit);
    template<class TPMGL(U)> ::x10::array::Array<TPMGL(U)>* map(::x10::array::Array<TPMGL(U)>* dst,
                                                                ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(S), class TPMGL(U)> ::x10::array::Array<TPMGL(U)>*
      map(::x10::array::Array<TPMGL(S)>* src2, ::x10::array::Array<TPMGL(U)>* dst,
          ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(S), TPMGL(U)>* op);
    virtual ::x10::array::IterationSpace* indices() = 0;
    virtual TPMGL(T) __apply(::x10::lang::Point* p) = 0;
    virtual TPMGL(T) __set(::x10::lang::Point* p, TPMGL(T) v) = 0;
    virtual ::x10::array::Array<TPMGL(T)>* x10__array__Array____this__x10__array__Array(
      );
    virtual void __fieldInitializers_x10_array_Array();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::array::Array<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::array::Array<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::array::Array<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Iterable<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.array.Array";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class Array<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static void swap(::x10::array::Array<TPMGL(T)>* a1,
                                              ::x10::array::Array<TPMGL(T)>* a2);
    
    template<class TPMGL(T)> static void copy(::x10::array::Array<TPMGL(T)>* src,
                                              ::x10::array::Array<TPMGL(T)>* dst);
    
    template<class TPMGL(T)> static void copy(::x10::array::Array<TPMGL(T)>* src,
                                              x10_long srcIndex,
                                              ::x10::array::Array<TPMGL(T)>* dst,
                                              x10_long dstIndex,
                                              x10_long numElems);
    
    static void raiseBoundsError(x10_long i) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(x10_long i, x10_long j) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(x10_long i, x10_long j, x10_long k) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(x10_long i, x10_long j, x10_long k,
                                 x10_long l) X10_PRAGMA_NORETURN ;
    
    static void raiseNegativeArraySizeException() X10_PRAGMA_NORETURN ;
    
    
};

} } 
#endif // X10_ARRAY_ARRAY_H

namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 

#ifndef X10_ARRAY_ARRAY_H_NODEPS
#define X10_ARRAY_ARRAY_H_NODEPS
#include <x10/lang/Iterable.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Point.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Unsafe.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/array/IterationSpace.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/NoInline.h>
#include <x10/compiler/NoReturn.h>
#include <x10/lang/NegativeArraySizeException.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_ARRAY_ARRAY_H_GENERICS
#define X10_ARRAY_ARRAY_H_GENERICS
#ifndef X10_ARRAY_ARRAY_H_reduce_48
#define X10_ARRAY_ARRAY_H_reduce_48
template<class TPMGL(T)> template<class TPMGL(U)> TPMGL(U) x10::array::Array<TPMGL(T)>::reduce(
  ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op, TPMGL(U) unit) {
    
    //#line 149 "x10/array/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* src__96654 = this->FMGL(raw);
    
    //#line 132 "x10/util/RailUtils.x10"
    TPMGL(U) accum__96657 = unit;
    
    //#line 133 "x10/util/RailUtils.x10"
    x10_long i__96508max__96651 = (x10_long)(::x10aux::nullCheck(src__96654)->FMGL(size));
    {
        x10_long i__96652;
        for (i__96652 = ((x10_long)0ll); ((i__96652) < (i__96508max__96651));
             i__96652 = ((i__96652) + (((x10_long)1ll)))) {
            
            //#line 134 "x10/util/RailUtils.x10"
            accum__96657 = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
              accum__96657, ::x10aux::nullCheck(src__96654)->x10::lang::template Rail< TPMGL(T) >::__apply(
                              i__96652));
        }
    }
    
    //#line 149 "x10/array/Array.x10"
    return accum__96657;
    
}
#endif // X10_ARRAY_ARRAY_H_reduce_48
#ifndef X10_ARRAY_ARRAY_H_map_49
#define X10_ARRAY_ARRAY_H_map_49
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::array::Array<TPMGL(U)>*
  x10::array::Array<TPMGL(T)>::map(::x10::array::Array<TPMGL(U)>* dst,
                                   ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 170 "x10/array/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* src__96662 = this->FMGL(raw);
    ::x10::lang::Rail< TPMGL(U) >* dst__96663 = ::x10aux::nullCheck(dst)->FMGL(raw);
    
    //#line 180 "x10/util/RailUtils.x10"
    x10_long i__96546max__96659 = (x10_long)(::x10aux::nullCheck(src__96662)->FMGL(size));
    {
        x10_long i__96660;
        for (i__96660 = ((x10_long)0ll); ((i__96660) < (i__96546max__96659));
             i__96660 = ((i__96660) + (((x10_long)1ll))))
        {
            
            //#line 181 "x10/util/RailUtils.x10"
            ::x10aux::nullCheck(dst__96663)->x10::lang::template Rail< TPMGL(U) >::__set(
              i__96660, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                ::x10aux::nullCheck(src__96662)->x10::lang::template Rail< TPMGL(T) >::__apply(
                  i__96660)));
        }
    }
    
    //#line 171 "x10/array/Array.x10"
    return dst;
    
}
#endif // X10_ARRAY_ARRAY_H_map_49
#ifndef X10_ARRAY_ARRAY_H_map_50
#define X10_ARRAY_ARRAY_H_map_50
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::array::Array<TPMGL(U)>* x10::array::Array<TPMGL(T)>::map(
  ::x10::array::Array<TPMGL(S)>* src2, ::x10::array::Array<TPMGL(U)>* dst,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(S), TPMGL(U)>* op) {
    
    //#line 195 "x10/array/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* src__96669 = this->FMGL(raw);
    ::x10::lang::Rail< TPMGL(S) >* src__96670 = ::x10aux::nullCheck(src2)->FMGL(raw);
    ::x10::lang::Rail< TPMGL(U) >* dst__96671 = ::x10aux::nullCheck(dst)->FMGL(raw);
    
    //#line 203 "x10/util/RailUtils.x10"
    x10_long i__96565max__96666 = (x10_long)(::x10aux::nullCheck(src__96669)->FMGL(size));
    {
        x10_long i__96667;
        for (i__96667 = ((x10_long)0ll); ((i__96667) < (i__96565max__96666));
             i__96667 = ((i__96667) + (((x10_long)1ll))))
        {
            
            //#line 204 "x10/util/RailUtils.x10"
            ::x10aux::nullCheck(dst__96671)->x10::lang::template Rail< TPMGL(U) >::__set(
              i__96667, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(S), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                ::x10aux::nullCheck(src__96669)->x10::lang::template Rail< TPMGL(T) >::__apply(
                  i__96667), ::x10aux::nullCheck(src__96670)->x10::lang::template Rail< TPMGL(S) >::__apply(
                               i__96667)));
        }
    }
    
    //#line 196 "x10/array/Array.x10"
    return dst;
    
}
#endif // X10_ARRAY_ARRAY_H_map_50
#endif // X10_ARRAY_ARRAY_H_GENERICS
#ifndef X10_ARRAY_ARRAY_H_IMPLEMENTATION
#define X10_ARRAY_ARRAY_H_IMPLEMENTATION
#include <x10/array/Array.h>


//#line 46 "x10/array/Array.x10"
/**
         * The number of data values in the array.
         */

//#line 52 "x10/array/Array.x10"
/**
     * @return the rank (dimensionality) of the Array
     */

//#line 57 "x10/array/Array.x10"
/**
     * The backing storage for the array's elements
     */

//#line 59 "x10/array/Array.x10"
template<class TPMGL(T)> void x10::array::Array<TPMGL(T)>::_constructor(x10_long s,
                                                                        x10_boolean zero) {
    
    //#line 60 "x10/array/Array.x10"
    FMGL(size) = s;
    
    //#line 61 "x10/array/Array.x10"
    this->FMGL(raw) = zero ? (::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(s, true))
      : (::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(s, false));
}


//#line 64 "x10/array/Array.x10"
template<class TPMGL(T)> void x10::array::Array<TPMGL(T)>::_constructor(
                           ::x10::lang::Rail< TPMGL(T) >* r) {
    
    //#line 65 "x10/array/Array.x10"
    FMGL(size) = (x10_long)(::x10aux::nullCheck(r)->FMGL(size));
    
    //#line 66 "x10/array/Array.x10"
    this->FMGL(raw) = r;
}


//#line 82 "x10/array/Array.x10"
/**
     * <p>Return the Rail[T] that is providing the backing storage for the array.
     * This method is primarily intended to be used to interface with native libraries 
     * (eg BLAS, ESSL) and to support bulk copy operations using the asyncCopy 
     * methods of Rail.</p>
     * 
     * This method should be used sparingly, since it may make client code dependent on 
     * the layout algorithm used to map rank-dimensional array indicies to 1-dimensional
     * indicies in the backing Rail.
     * 
     * @return the Rail[T] that is the backing storage for the Array object.
     */
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::array::Array<TPMGL(T)>::raw(
  ) {
    return this->FMGL(raw);
    
}

//#line 90 "x10/array/Array.x10"
/**
     * Change the Rail[T] that is providing the backing storage for the array.
     *
     * @param r the new backing storage for the array.
     */
template<class TPMGL(T)> void x10::array::Array<TPMGL(T)>::modifyRaw(
  ::x10::lang::Rail< TPMGL(T) >* r) {
    
    //#line 91 "x10/array/Array.x10"
    if ((!::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(this->FMGL(raw))->FMGL(size)),
                                  this->FMGL(size)))) {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::x10::array::Array_Strings::sl__163683))));
    }
    
    //#line 92 "x10/array/Array.x10"
    this->FMGL(raw) = (__extension__ ({
        ::x10::lang::Rail< TPMGL(T) >* t__91525 = r;
        if (!(((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__91525)->FMGL(size)),
                                        ::x10aux::nullCheck(this)->FMGL(size))) &&
            (!::x10aux::struct_equals(t__91525, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::array::Array_Strings::sl__163684))));
        }
        t__91525;
    }))
    ;
}

//#line 104 "x10/array/Array.x10"
/**
     * Swap the backing storage of two arrays.
     * The two arrays must be of equal size, but do not necessarily need
     * to be the same rank or have the same dimensions.
     * This method can be used to support a "red/black" design pattern where
     * the backing Rails for the arrays are swapped at phase boundaries.
     * @param a1 the first array
     * @param a2 the second array, same size as the first
     */

//#line 116 "x10/array/Array.x10"
/**
     * Return an iterator over the values of this array.
     * 
     * @return an iterator over the values of this array.
     * @see x10.lang.Iterable[T]#iterator()
     */
template<class TPMGL(T)> ::x10::lang::Iterator<TPMGL(T)>*
  x10::array::Array<TPMGL(T)>::iterator() {
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::iterator();
    
}

//#line 124 "x10/array/Array.x10"
/**
     * Fill all elements of the array to contain the argument value.
     * 
     * @param v the value with which to fill the array
     */
template<class TPMGL(T)> void x10::array::Array<TPMGL(T)>::fill(
  TPMGL(T) v) {
    
    //#line 125 "x10/array/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::fill(
      v);
}

//#line 133 "x10/array/Array.x10"
/**
     * Fill all elements of the array with the zero value of type T 
     * @see x10.lang.Zero.get[T]()
     */
template<class TPMGL(T)> void x10::array::Array<TPMGL(T)>::clear(
  ) {
    
    //#line 134 "x10/array/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::clear();
}

//#line 148 "x10/array/Array.x10"
/**
     * Reduce this array using the given function and the given initial value.
     * Each element of the array will be given as an argument to the reduction
     * function exactly once, but in an arbitrary order.  The reduction function
     * may be applied concurrently to implement a parallel reduction. 
     * 
     * @param op the reduction function
     * @param unit the given initial value
     * @return the final result of the reduction.
     */

//#line 169 "x10/array/Array.x10"
/**
     * Map the given function onto the elements of this array
     * storing the results in the dst array. For maximum flexibility
     * of use, map does not require that the src and destination array
     * have the same dimesionality or rank, only that they have the same
     * number of elements.  When applied to arrays that use the same IterationSpace,
     * the result will be that for all <code>pt</code> in the IterationSpace
     * </code> dst(pt) == op(src(pt)) </code>.  When applied to arrays that use
     * a different iteration space, the mapping from src to dst is defined in
     * terms of the index of the backing rails, that is <code>dst.raw()(i) = op(src.raw()(i))</code>
     * for i in <code>0..(src.size()-1)</code>.
     * 
     * @param dst the destination array for the results of the map operation
     * @param op the function to apply to each element of the array
     * @return dst after updating its contents to contain the result of the map operation.
     */

//#line 193 "x10/array/Array.x10"
/**
     * Map the given function onto the elements of this array
     * and the argument src array storing the results in the dst array. 
     * For maximum flexibility of use, map does not require that the three arrays
     * have the same dimesionality or rank, only that they have the same
     * number of elements.  When applied to arrays that use the same IterationSpace,
     * the result will be that for all <code>pt</code> in the IterationSpace
     * </code> dst(pt) == op(this(pt), src(pt)) </code>.  When applied to arrays that use
     * a different iteration space, the mapping from src to dst is defined in
     * terms of the index of the backing rails, that is 
     * <code>dst.raw()(i) = op(this.raw()(i), src.raw()(i))</code>
     * for i in <code>0..(src.size()-1)</code>.
     * 
     * @param src2 the second source array to use as input to the map function
     * @param dst the destination array for the results of the map operation
     * @param op the function to apply to each element of the arrays
     * @return dst after updating its contents to contain the result of the map operation.
     */

//#line 205 "x10/array/Array.x10"
/**
     * Get an IterationSpace that represents all Points contained in
     * iteration space (valid indices) of the Array.
     * @return an IterationSpace for the Array
     */

//#line 216 "x10/array/Array.x10"
/**
     * Return the element of this array corresponding to the given point.
     * The rank of the given point has to be the same as the rank of this array.
     * 
     * @param p the given point
     * @return the element of this array corresponding to the given point.
     * @see #set(T, Point)
     */

//#line 229 "x10/array/Array.x10"
/**
     * Set the element of this array corresponding to the given point to the given value.
     * Return the new value of the element.
     * The rank of the given point has to be the same as the rank of this array.
     * 
     * @param v the given value
     * @param p the given point
     * @return the new value of the element of this array corresponding to the given point.
     * @see #operator(Point)
     */

//#line 240 "x10/array/Array.x10"
/**
     * Copy all of the values from the source Array to the destination Array.
     * The two arrays must be of equal size, but do not necessarily need
     * to be the same rank or have the same dimensions.
     *
     * @param src the source array.
     * @param dst the destination array.
     */

//#line 257 "x10/array/Array.x10"
/**
     * Copy numElems values starting from srcIndex from the source Array 
     * to the destination Array starting at dstIndex.
     *
     * @param src the source array.
     * @param srcIndex the index of the first element in this array
     *        to be copied.  
     * @param dst the destination array.
     * @param dstIndex the index of the first element in the destination
     *        array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     */

//#line 263 "x10/array/Array.x10"

//#line 266 "x10/array/Array.x10"

//#line 269 "x10/array/Array.x10"

//#line 272 "x10/array/Array.x10"

//#line 276 "x10/array/Array.x10"

//#line 42 "x10/array/Array.x10"
template<class TPMGL(T)> ::x10::array::Array<TPMGL(T)>* x10::array::Array<TPMGL(T)>::x10__array__Array____this__x10__array__Array(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::array::Array<TPMGL(T)>::__fieldInitializers_x10_array_Array(
  ) {
 
}
template<class TPMGL(T)> void x10::array::Array<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(raw));
    buf.write(this->FMGL(size));
    
}

template<class TPMGL(T)> void x10::array::Array<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(raw) = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
    FMGL(size) = buf.read<x10_long>();
}

template<class TPMGL(T)> void x10::array::Array<void>::swap(::x10::array::Array<TPMGL(T)>* a1,
                                                            ::x10::array::Array<TPMGL(T)>* a2) {
    
    //#line 105 "x10/array/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* tmp = a1->FMGL(raw);
    
    //#line 106 "x10/array/Array.x10"
    a1->x10::array::template Array<TPMGL(T)>::modifyRaw(a2->FMGL(raw));
    
    //#line 107 "x10/array/Array.x10"
    a2->x10::array::template Array<TPMGL(T)>::modifyRaw(tmp);
}
template<class TPMGL(T)> void x10::array::Array<void>::copy(::x10::array::Array<TPMGL(T)>* src,
                                                            ::x10::array::Array<TPMGL(T)>* dst) {
    
    //#line 241 "x10/array/Array.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), ((x10_long)0ll),
      ::x10aux::nullCheck(dst)->FMGL(raw), ((x10_long)0ll),
      (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(raw))->FMGL(size)));
}
template<class TPMGL(T)> void x10::array::Array<void>::copy(::x10::array::Array<TPMGL(T)>* src,
                                                            x10_long srcIndex,
                                                            ::x10::array::Array<TPMGL(T)>* dst,
                                                            x10_long dstIndex,
                                                            x10_long numElems) {
    
    //#line 259 "x10/array/Array.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), srcIndex, ::x10aux::nullCheck(dst)->FMGL(raw),
      dstIndex, numElems);
}
#endif // X10_ARRAY_ARRAY_H_IMPLEMENTATION
#endif // __X10_ARRAY_ARRAY_H_NODEPS
