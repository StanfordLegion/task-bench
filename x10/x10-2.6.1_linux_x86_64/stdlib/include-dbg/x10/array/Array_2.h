#ifndef __X10_ARRAY_ARRAY_2_H
#define __X10_ARRAY_ARRAY_2_H

#include <x10rt.h>


#define X10_ARRAY_ARRAY_H_NODEPS
#include <x10/array/Array.h>
#undef X10_ARRAY_ARRAY_H_NODEPS
#define X10_LANG_FUN_0_2_H_NODEPS
#include <x10/lang/Fun_0_2.h>
#undef X10_LANG_FUN_0_2_H_NODEPS
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
class DenseIterationSpace_2;
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

class Array_2_Strings {
  public:
    static ::x10::lang::String sl__153497;
    static ::x10::lang::String sl__153501;
    static ::x10::lang::String sl__153502;
    static ::x10::lang::String sl__153498;
    static ::x10::lang::String sl__153503;
    static ::x10::lang::String sl__153504;
    static ::x10::lang::String sl__153499;
    static ::x10::lang::String sl__153500;
    static ::x10::lang::String sl__153505;
};

template<class TPMGL(T)> class Array_2;
template <> class Array_2<void>;
template<class TPMGL(T)> class Array_2 : public ::x10::array::Array<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(numElems_1);
    
    x10_long FMGL(numElems_2);
    
    static ::x10aux::itable_entry _itables[5];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::array::Array_2<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::array::Array_2<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::template itable< ::x10::array::Array_2<TPMGL(T)> > _itable_2;
    
    static typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable< ::x10::array::Array_2<TPMGL(T)> > _itable_3;
    
    x10_long rank();
    void _constructor(x10_long m, x10_long n);
    
    static ::x10::array::Array_2<TPMGL(T)>* _make(x10_long m, x10_long n);
    
    void _constructor(x10_long m, x10_long n, TPMGL(T) init);
    
    static ::x10::array::Array_2<TPMGL(T)>* _make(x10_long m, x10_long n,
                                                  TPMGL(T) init);
    
    void _constructor(x10_long m, x10_long n, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init);
    
    static ::x10::array::Array_2<TPMGL(T)>* _make(x10_long m, x10_long n,
                                                  ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init);
    
    void _constructor(::x10::array::Array_2<TPMGL(T)>* src);
    
    static ::x10::array::Array_2<TPMGL(T)>* _make(::x10::array::Array_2<TPMGL(T)>* src);
    
    void _constructor(::x10::lang::Rail< TPMGL(T) >* r, x10_long m, x10_long n);
    
    static ::x10::array::Array_2<TPMGL(T)>* _make(::x10::lang::Rail< TPMGL(T) >* r,
                                                  x10_long m, x10_long n);
    
    virtual ::x10::lang::String* toString();
    virtual ::x10::lang::String* toString(x10_long limit);
    virtual ::x10::array::IterationSpace* indices();
    virtual x10_long offset(x10_long i, x10_long j);
    virtual TPMGL(T) __apply(x10_long i, x10_long j);
    virtual TPMGL(T) __apply(::x10::lang::Point* p);
    virtual TPMGL(T) __set(x10_long i, x10_long j, TPMGL(T) v);
    virtual TPMGL(T) __set(::x10::lang::Point* p, TPMGL(T) v);
    virtual ::x10::array::Array_2<TPMGL(T)>* x10__array__Array_2____this__x10__array__Array_2(
      );
    virtual void __fieldInitializers_x10_array_Array_2();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::array::Array_2<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::array::Array_2<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::array::Array_2<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::array::Array<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.array.Array_2";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class Array_2<void> : public ::x10::array::Array<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static ::x10::array::Array_2<TPMGL(T)>*
      makeView(::x10::lang::Rail< TPMGL(T) >* r, x10_long m,
               x10_long n);
    
    static x10_long validateSize(x10_long m, x10_long n);
    
    
};

} } 
#endif // X10_ARRAY_ARRAY_2_H

namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 

#ifndef X10_ARRAY_ARRAY_2_H_NODEPS
#define X10_ARRAY_ARRAY_2_H_NODEPS
#include <x10/array/Array.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/IllegalOperationException.h>
#include <x10/lang/String.h>
#include <x10/util/StringBuilder.h>
#include <x10/lang/Any.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Point.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_ARRAY_ARRAY_2_H_GENERICS
#define X10_ARRAY_ARRAY_2_H_GENERICS
#endif // X10_ARRAY_ARRAY_2_H_GENERICS
#ifndef X10_ARRAY_ARRAY_2_H_IMPLEMENTATION
#define X10_ARRAY_ARRAY_2_H_IMPLEMENTATION
#include <x10/array/Array_2.h>


//#line 25 "x10/array/Array_2.x10"
/**
         * The number of elements in rank 1 (indexed 0..(numElems_1-1))
         */

//#line 30 "x10/array/Array_2.x10"
/**
         * The number of elements in rank 2 (indexed 0..(numElems_2-1)).
         */
template<class TPMGL(T)> typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::array::Array_2<TPMGL(T)> >  x10::array::Array_2<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::array::Array<TPMGL(T)>::iterator, &x10::array::Array_2<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::array::Array_2<TPMGL(T)> >  x10::array::Array_2<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::array::Array_2<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::template itable< ::x10::array::Array_2<TPMGL(T)> >  x10::array::Array_2<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::array::Array_2<TPMGL(T)>::__apply, &x10::array::Array_2<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable< ::x10::array::Array_2<TPMGL(T)> >  x10::array::Array_2<TPMGL(T)>::_itable_3(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::array::Array_2<TPMGL(T)>::__apply, &x10::array::Array_2<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::array::Array_2<TPMGL(T)>::_itables[5] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >, &_itable_3), ::x10aux::itable_entry(NULL, (void*)"::x10::array::Array_2<TPMGL(T)>")};

//#line 36 "x10/array/Array_2.x10"
/**
     * @return the rank (dimensionality) of the Array
     */
template<class TPMGL(T)> x10_long x10::array::Array_2<TPMGL(T)>::rank() {
    return ((x10_long)2ll);
    
}

//#line 41 "x10/array/Array_2.x10"
/**
     * Construct a 2-dimensional array with indices [0..m-1][0..n-1] whose elements are zero-initialized.
     */
template<class TPMGL(T)> void x10::array::Array_2<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n) {
    
    //#line 42 "x10/array/Array_2.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor(::x10::array::Array_2<void>::validateSize(
                                                          m, n), true);
    
    //#line 43 "x10/array/Array_2.x10"
    FMGL(numElems_1) = m;
    FMGL(numElems_2) = n;
    
    //#line 21 "x10/array/Array_2.x10"
    this->x10::array::template Array_2<TPMGL(T)>::__fieldInitializers_x10_array_Array_2();
}
template<class TPMGL(T)> ::x10::array::Array_2<TPMGL(T)>* x10::array::Array_2<TPMGL(T)>::_make(
                           x10_long m, x10_long n) {
    ::x10::array::Array_2<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_2<TPMGL(T)> >()) ::x10::array::Array_2<TPMGL(T)>();
    this_->_constructor(m, n);
    return this_;
}



//#line 49 "x10/array/Array_2.x10"
/**
     * Construct a 2-dimensional array with indices [0..m-1][0..n-1] whose elements are initialized to init.
     */
template<class TPMGL(T)> void x10::array::Array_2<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, TPMGL(T) init) {
    
    //#line 50 "x10/array/Array_2.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor(::x10::array::Array_2<void>::validateSize(
                                                          m,
                                                          n),
                                                        false);
    
    //#line 51 "x10/array/Array_2.x10"
    FMGL(numElems_1) = m;
    FMGL(numElems_2) = n;
    
    //#line 21 "x10/array/Array_2.x10"
    this->x10::array::template Array_2<TPMGL(T)>::__fieldInitializers_x10_array_Array_2();
    
    //#line 52 "x10/array/Array_2.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::fill(
      init);
}
template<class TPMGL(T)> ::x10::array::Array_2<TPMGL(T)>* x10::array::Array_2<TPMGL(T)>::_make(
                           x10_long m, x10_long n, TPMGL(T) init)
{
    ::x10::array::Array_2<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_2<TPMGL(T)> >()) ::x10::array::Array_2<TPMGL(T)>();
    this_->_constructor(m, n, init);
    return this_;
}



//#line 59 "x10/array/Array_2.x10"
/**
     * Construct a 2-dimensional array with indices [0..m-1][0..n-1] whose elements are initialized 
     * to the value returned by the init closure for each index.
     */
template<class TPMGL(T)> void x10::array::Array_2<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init) {
    
    //#line 60 "x10/array/Array_2.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor(::x10::array::Array_2<void>::validateSize(
                                                          m,
                                                          n),
                                                        false);
    
    //#line 61 "x10/array/Array_2.x10"
    FMGL(numElems_1) = m;
    FMGL(numElems_2) = n;
    
    //#line 21 "x10/array/Array_2.x10"
    this->x10::array::template Array_2<TPMGL(T)>::__fieldInitializers_x10_array_Array_2();
    
    //#line 62 "x10/array/Array_2.x10"
    x10_long i__91864min__91921 = ((x10_long)0ll);
    x10_long i__91864max__91922 = ((m) - (((x10_long)1ll)));
    {
        x10_long i__91923;
        for (i__91923 = i__91864min__91921; ((i__91923) <= (i__91864max__91922));
             i__91923 = ((i__91923) + (((x10_long)1ll))))
        {
            x10_long i__91924 = i__91923;
            
            //#line 63 "x10/array/Array_2.x10"
            x10_long i__91846min__91917 = ((x10_long)0ll);
            x10_long i__91846max__91918 = ((n) - (((x10_long)1ll)));
            {
                x10_long i__91919;
                for (i__91919 = i__91846min__91917; ((i__91919) <= (i__91846max__91918));
                     i__91919 = ((i__91919) + (((x10_long)1ll))))
                {
                    x10_long j__91920 = i__91919;
                    
                    //#line 64 "x10/array/Array_2.x10"
                    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                      this->x10::array::template Array_2<TPMGL(T)>::offset(
                        i__91924, j__91920), ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(init), 
                        i__91924, j__91920));
                }
            }
            
        }
    }
    
}
template<class TPMGL(T)> ::x10::array::Array_2<TPMGL(T)>* x10::array::Array_2<TPMGL(T)>::_make(
                           x10_long m, x10_long n, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* init)
{
    ::x10::array::Array_2<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_2<TPMGL(T)> >()) ::x10::array::Array_2<TPMGL(T)>();
    this_->_constructor(m, n, init);
    return this_;
}



//#line 73 "x10/array/Array_2.x10"
/**
     * Construct a new 2-dimensional array by copying all elements of src
     * @param src The source array to copy
     */
template<class TPMGL(T)> void x10::array::Array_2<TPMGL(T)>::_constructor(
                           ::x10::array::Array_2<TPMGL(T)>* src) {
    
    //#line 74 "x10/array/Array_2.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor(::x10::lang::Rail< TPMGL(T) >::_make(::x10aux::nullCheck(src)->FMGL(raw)));
    
    //#line 75 "x10/array/Array_2.x10"
    FMGL(numElems_1) = ::x10aux::nullCheck(src)->FMGL(numElems_1);
    FMGL(numElems_2) = ::x10aux::nullCheck(src)->FMGL(numElems_2);
    
    //#line 21 "x10/array/Array_2.x10"
    this->x10::array::template Array_2<TPMGL(T)>::__fieldInitializers_x10_array_Array_2();
}
template<class TPMGL(T)> ::x10::array::Array_2<TPMGL(T)>* x10::array::Array_2<TPMGL(T)>::_make(
                           ::x10::array::Array_2<TPMGL(T)>* src)
{
    ::x10::array::Array_2<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_2<TPMGL(T)> >()) ::x10::array::Array_2<TPMGL(T)>();
    this_->_constructor(src);
    return this_;
}



//#line 79 "x10/array/Array_2.x10"
template<class TPMGL(T)> void x10::array::Array_2<TPMGL(T)>::_constructor(
                           ::x10::lang::Rail< TPMGL(T) >* r,
                           x10_long m, x10_long n) {
    
    //#line 80 "x10/array/Array_2.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor(r);
    
    //#line 81 "x10/array/Array_2.x10"
    FMGL(numElems_1) = m;
    FMGL(numElems_2) = n;
    
    //#line 21 "x10/array/Array_2.x10"
    this->x10::array::template Array_2<TPMGL(T)>::__fieldInitializers_x10_array_Array_2();
}
template<class TPMGL(T)> ::x10::array::Array_2<TPMGL(T)>* x10::array::Array_2<TPMGL(T)>::_make(
                           ::x10::lang::Rail< TPMGL(T) >* r,
                           x10_long m, x10_long n) {
    ::x10::array::Array_2<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_2<TPMGL(T)> >()) ::x10::array::Array_2<TPMGL(T)>();
    this_->_constructor(r, m, n);
    return this_;
}



//#line 87 "x10/array/Array_2.x10"
/**
     * Construct an Array_2 view over an existing Rail
     */

//#line 99 "x10/array/Array_2.x10"
/**
     * Return the string representation of this array.
     * 
     * @return the string representation of this array.
     */
template<class TPMGL(T)> ::x10::lang::String* x10::array::Array_2<TPMGL(T)>::toString(
  ) {
    
    //#line 100 "x10/array/Array_2.x10"
    return this->x10::array::template Array_2<TPMGL(T)>::toString(
             ((x10_long)10ll));
    
}

//#line 109 "x10/array/Array_2.x10"
/**
     * Return the string representation of this array.
     *
     * @param limit maximum number of elements to print
     * @return the string representation of this array.
     */
template<class TPMGL(T)> ::x10::lang::String* x10::array::Array_2<TPMGL(T)>::toString(
  x10_long limit) {
    
    //#line 110 "x10/array/Array_2.x10"
    ::x10::util::StringBuilder* sb = ::x10::util::StringBuilder::_make();
    
    //#line 111 "x10/array/Array_2.x10"
    sb->add((&::x10::array::Array_2_Strings::sl__153500));
    
    //#line 112 "x10/array/Array_2.x10"
    x10_long printed = ((x10_long)0ll);
    
    //#line 113 "x10/array/Array_2.x10"
    x10_long i__91900min__91929 = ((x10_long)0ll);
    x10_long i__91900max__91930 = ((this->FMGL(numElems_1)) - (((x10_long)1ll)));
    goto outer__91931; outer__91931: {
        x10_long i__91932;
        for (i__91932 = i__91900min__91929; ((i__91932) <= (i__91900max__91930));
             i__91932 = ((i__91932) + (((x10_long)1ll))))
        {
        {
            x10_long i__91933 = i__91932;
            
            //#line 114 "x10/array/Array_2.x10"
            x10_long i__91882min__91925 = ((x10_long)0ll);
            x10_long i__91882max__91926 = ((this->FMGL(numElems_2)) - (((x10_long)1ll)));
            {
                x10_long i__91927;
                for (i__91927 = i__91882min__91925; ((i__91927) <= (i__91882max__91926));
                     i__91927 = ((i__91927) + (((x10_long)1ll))))
                {
                    x10_long j__91928 = i__91927;
                    
                    //#line 115 "x10/array/Array_2.x10"
                    if ((!::x10aux::struct_equals(j__91928,
                                                  ((x10_long)0ll))))
                    {
                        sb->add((&::x10::array::Array_2_Strings::sl__153501));
                    }
                    
                    //#line 116 "x10/array/Array_2.x10"
                    reinterpret_cast< ::x10::util::StringBuilder*>(sb->add(
                                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->x10::array::template Array_2<TPMGL(T)>::__apply(
                                                                                                                          i__91933,
                                                                                                                          j__91928))));
                    
                    //#line 117 "x10/array/Array_2.x10"
                    if (((printed = ((printed) + (((x10_long)1ll)))) > (limit)))
                    {
                        goto outer__91931_end_;
                    }
                    
                }
            }
            
            //#line 119 "x10/array/Array_2.x10"
            sb->add((&::x10::array::Array_2_Strings::sl__153502));
        }
        goto outer__91931_next_; outer__91931_next_: ;
        }
        goto outer__91931_end_; outer__91931_end_: ;
    }
    
    //#line 121 "x10/array/Array_2.x10"
    if (((limit) < (this->FMGL(size)))) {
        
        //#line 122 "x10/array/Array_2.x10"
        sb->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::array::Array_2_Strings::sl__153503), ((this->FMGL(size)) - (limit))), (&::x10::array::Array_2_Strings::sl__153504)));
    }
    
    //#line 124 "x10/array/Array_2.x10"
    sb->add((&::x10::array::Array_2_Strings::sl__153505));
    
    //#line 125 "x10/array/Array_2.x10"
    return sb->toString();
    
}

//#line 131 "x10/array/Array_2.x10"
/**
     * @return an IterationSpace containing all valid Points for indexing this Array.
     */
template<class TPMGL(T)> ::x10::array::IterationSpace* x10::array::Array_2<TPMGL(T)>::indices(
  ) {
    
    //#line 132 "x10/array/Array_2.x10"
    return reinterpret_cast< ::x10::array::IterationSpace*>(::x10::array::DenseIterationSpace_2::_make(((x10_long)0ll),
                                                                                                       ((x10_long)0ll),
                                                                                                       ((this->FMGL(numElems_1)) - (((x10_long)1ll))),
                                                                                                       ((this->FMGL(numElems_2)) - (((x10_long)1ll)))));
    
}

//#line 139 "x10/array/Array_2.x10"
/**
     * Map a 2-D (i,j) index into a 1-D index into the backing Rail
     * returned by raw(). Uses row-major order.
     */
template<class TPMGL(T)> x10_long x10::array::Array_2<TPMGL(T)>::offset(
  x10_long i, x10_long j) {
    
    //#line 140 "x10/array/Array_2.x10"
    return ((j) + (((i) * (this->FMGL(numElems_2)))));
    
}

//#line 151 "x10/array/Array_2.x10"
/**
     * Return the element of this array corresponding to the given pair of indices.
     * 
     * @param i the given index in the first dimension
     * @param j the given index in the second dimension
     * @return the element of this array corresponding to the given pair of indices.
     * @see #set(T, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::Array_2<TPMGL(T)>::__apply(
  x10_long i, x10_long j) {
    
    //#line 152 "x10/array/Array_2.x10"
    if ((BOUNDS_CHECK_BOOL && ((((((i) < (((x10_long)0ll))) ||
                               ((i) >= (this->FMGL(numElems_1)))) ||
                               ((j) < (((x10_long)0ll)))) ||
                               ((j) >= (this->FMGL(numElems_2)))))))
    {
        
        //#line 154 "x10/array/Array_2.x10"
        ::x10::array::Array<void>::raiseBoundsError(i, j);
    }
    
    //#line 156 "x10/array/Array_2.x10"
    return (this->FMGL(raw))->unchecked_apply(this->x10::array::template Array_2<TPMGL(T)>::offset(
                                                i, j));
    
}

//#line 166 "x10/array/Array_2.x10"
/**
     * Return the element of this array corresponding to the given Point.
     * 
     * @param p the given Point
     * @return the element of this array corresponding to the given Point.
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::Array_2<TPMGL(T)>::__apply(
  ::x10::lang::Point* p) {
    return this->x10::array::template Array_2<TPMGL(T)>::__apply(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                   ((x10_long)1ll)));
    
}

//#line 178 "x10/array/Array_2.x10"
/**
     * Set the element of this array corresponding to the given pair of indices to the given value.
     * Return the new value of the element.
     * 
     * @param v the given value
     * @param i the given index in the first dimension
     * @param j the given index in the second dimension
     * @return the new value of the element of this array corresponding to the given pair of indices.
     * @see #operator(Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::Array_2<TPMGL(T)>::__set(
  x10_long i, x10_long j, TPMGL(T) v) {
    
    //#line 179 "x10/array/Array_2.x10"
    if ((BOUNDS_CHECK_BOOL && ((((((i) < (((x10_long)0ll))) ||
                               ((i) >= (this->FMGL(numElems_1)))) ||
                               ((j) < (((x10_long)0ll)))) ||
                               ((j) >= (this->FMGL(numElems_2)))))))
    {
        
        //#line 181 "x10/array/Array_2.x10"
        ::x10::array::Array<void>::raiseBoundsError(i, j);
    }
    
    //#line 183 "x10/array/Array_2.x10"
    return (this->FMGL(raw))->unchecked_set(this->x10::array::template Array_2<TPMGL(T)>::offset(
                                              i, j), v);
    
}

//#line 195 "x10/array/Array_2.x10"
/**
     * Set the element of this array corresponding to the given Point to the given value.
     * Return the new value of the element.
     * 
     * @param v the given value
     * @param p the given Point
     * @return the new value of the element of this array corresponding to the given Point.
     * @see #operator(Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::Array_2<TPMGL(T)>::__set(
  ::x10::lang::Point* p, TPMGL(T) v) {
    return this->x10::array::template Array_2<TPMGL(T)>::__set(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                   ((x10_long)1ll)), v);
    
}

//#line 197 "x10/array/Array_2.x10"

//#line 21 "x10/array/Array_2.x10"
template<class TPMGL(T)> ::x10::array::Array_2<TPMGL(T)>*
  x10::array::Array_2<TPMGL(T)>::x10__array__Array_2____this__x10__array__Array_2(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::array::Array_2<TPMGL(T)>::__fieldInitializers_x10_array_Array_2(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::array::Array_2<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::array::Array_2<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::array::Array_2<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::array::Array<TPMGL(T)>::_serialize_body(buf);
    buf.write(this->FMGL(numElems_1));
    buf.write(this->FMGL(numElems_2));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::array::Array_2<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::array::Array_2<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_2<TPMGL(T)> >()) ::x10::array::Array_2<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::array::Array_2<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::array::Array<TPMGL(T)>::_deserialize_body(buf);
    FMGL(numElems_1) = buf.read<x10_long>();
    FMGL(numElems_2) = buf.read<x10_long>();
}

template<class TPMGL(T)> ::x10::array::Array_2<TPMGL(T)>*
  x10::array::Array_2<void>::makeView(::x10::lang::Rail< TPMGL(T) >* r,
                                      x10_long m, x10_long n) {
    
    //#line 88 "x10/array/Array_2.x10"
    x10_long size = ((m) * (n));
    
    //#line 89 "x10/array/Array_2.x10"
    if ((!::x10aux::struct_equals(size, (x10_long)(::x10aux::nullCheck(r)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalOperationException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::array::Array_2_Strings::sl__153497), m), (&::x10::array::Array_2_Strings::sl__153498)), n), (&::x10::array::Array_2_Strings::sl__153499)), (x10_long)(::x10aux::nullCheck(r)->FMGL(size))))));
    }
    
    //#line 90 "x10/array/Array_2.x10"
    return ::x10::array::Array_2<TPMGL(T)>::_make(r, m, n);
    
}
#endif // X10_ARRAY_ARRAY_2_H_IMPLEMENTATION
#endif // __X10_ARRAY_ARRAY_2_H_NODEPS
