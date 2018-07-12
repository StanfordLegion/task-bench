#ifndef __X10_UTIL_GROWABLERAIL_H
#define __X10_UTIL_GROWABLERAIL_H

#include <x10rt.h>


#define X10_IO_CUSTOMSERIALIZATION_H_NODEPS
#include <x10/io/CustomSerialization.h>
#undef X10_IO_CUSTOMSERIALIZATION_H_NODEPS
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
namespace x10 { namespace io { 
class Deserializer;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace io { 
class Serializer;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class Math;
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
class UnsupportedOperationException;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class GrowableRail_Strings {
  public:
    static ::x10::lang::String sl__158349;
    static ::x10::lang::String sl__158350;
    static ::x10::lang::String sl__158351;
    static ::x10::lang::String sl__158356;
    static ::x10::lang::String sl__158357;
    static ::x10::lang::String sl__158353;
    static ::x10::lang::String sl__158352;
    static ::x10::lang::String sl__158354;
    static ::x10::lang::String sl__158355;
    static ::x10::lang::String sl__158358;
};

template<class TPMGL(T)> class GrowableRail;
template <> class GrowableRail<void>;
template<class TPMGL(T)> class GrowableRail : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::CustomSerialization::itable< ::x10::util::GrowableRail<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::GrowableRail<TPMGL(T)> > _itable_1;
    
    ::x10::lang::Rail< TPMGL(T) >* FMGL(data);
    
    virtual ::x10::lang::Rail< TPMGL(T) >* rail();
    x10_long FMGL(size);
    
    void _constructor();
    
    static ::x10::util::GrowableRail<TPMGL(T)>* _make();
    
    void _constructor(x10_long cap);
    
    static ::x10::util::GrowableRail<TPMGL(T)>* _make(x10_long cap);
    
    void _constructor(::x10::io::Deserializer* ds);
    
    static ::x10::util::GrowableRail<TPMGL(T)>* _make(::x10::io::Deserializer* ds);
    
    virtual void serialize(::x10::io::Serializer* s);
    virtual void add(TPMGL(T) v);
    virtual void addAll(::x10::lang::Rail< TPMGL(T) >* x);
    virtual void addAll(::x10::util::GrowableRail<TPMGL(T)>* x);
    virtual void insert(x10_long p, ::x10::lang::Rail< TPMGL(T) >* items);
    virtual TPMGL(T) __apply(x10_long idx);
    virtual void __set(x10_long idx, TPMGL(T) v);
    virtual x10_boolean contains(TPMGL(T) v);
    virtual x10_boolean isEmpty();
    virtual x10_long size();
    virtual x10_long capacity();
    virtual TPMGL(T) removeLast();
    virtual void clear();
    virtual ::x10::lang::Rail< TPMGL(T) >* moveSectionToRail(x10_long i, x10_long j);
    virtual ::x10::lang::Rail< TPMGL(T) >* toRail();
    virtual void grow(x10_long newCapacity);
    virtual void shrink(x10_long newCapacity);
    virtual ::x10::lang::String* toString();
    virtual ::x10::util::GrowableRail<TPMGL(T)>* x10__util__GrowableRail____this__x10__util__GrowableRail(
      );
    virtual void __fieldInitializers_x10_util_GrowableRail();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::GrowableRail<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::GrowableRail<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::io::CustomSerialization>()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.GrowableRail";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class GrowableRail<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    static void raiseIndexOutOfBounds(x10_long idx, x10_long size) X10_PRAGMA_NORETURN ;
    
    static void illegalGap(x10_long idx, x10_long size) X10_PRAGMA_NORETURN ;
    
    
};

} } 
#endif // X10_UTIL_GROWABLERAIL_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 

#ifndef X10_UTIL_GROWABLERAIL_H_NODEPS
#define X10_UTIL_GROWABLERAIL_H_NODEPS
#include <x10/io/CustomSerialization.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Unsafe.h>
#include <x10/io/Deserializer.h>
#include <x10/lang/Any.h>
#include <x10/io/Serializer.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Math.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/NoInline.h>
#include <x10/compiler/NoReturn.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/util/StringBuilder.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_GROWABLERAIL_H_GENERICS
#define X10_UTIL_GROWABLERAIL_H_GENERICS
#endif // X10_UTIL_GROWABLERAIL_H_GENERICS
#ifndef X10_UTIL_GROWABLERAIL_H_IMPLEMENTATION
#define X10_UTIL_GROWABLERAIL_H_IMPLEMENTATION
#include <x10/util/GrowableRail.h>

template<class TPMGL(T)> ::x10::io::CustomSerialization::itable< ::x10::util::GrowableRail<TPMGL(T)> >  x10::util::GrowableRail<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::GrowableRail<TPMGL(T)>::serialize, &x10::util::GrowableRail<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::util::GrowableRail<TPMGL(T)> >  x10::util::GrowableRail<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::GrowableRail<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::util::GrowableRail<TPMGL(T)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::io::CustomSerialization>, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::util::GrowableRail<TPMGL(T)>")};

//#line 33 "x10/util/GrowableRail.x10"

//#line 35 "x10/util/GrowableRail.x10"
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::GrowableRail<TPMGL(T)>::rail(
  ) {
    return this->FMGL(data);
    
}

//#line 43 "x10/util/GrowableRail.x10"
/**
    * Elements 0..size-1 have valid entries of type T.
    * Elements size..data.size-1 may not be valid values of type T.  
    * It is an invariant of this class, that such elements
    * will never be accessed.
    */

//#line 49 "x10/util/GrowableRail.x10"
/** 
     * Create a GrowableRail with an initial 
     * capacity of 0.
     */
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::_constructor(
                           ) {
    
    //#line 50 "x10/util/GrowableRail.x10"
    (this)->::x10::util::GrowableRail<TPMGL(T)>::_constructor(((x10_long)0ll));
    
}
template<class TPMGL(T)> ::x10::util::GrowableRail<TPMGL(T)>* x10::util::GrowableRail<TPMGL(T)>::_make(
                           ) {
    ::x10::util::GrowableRail<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(T)> >()) ::x10::util::GrowableRail<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 57 "x10/util/GrowableRail.x10"
/** 
     * Create a GrowableRail with an initial 
     * capacity of cap.
     */
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::_constructor(
                           x10_long cap) {
    
    //#line 32 "x10/util/GrowableRail.x10"
    this->x10::util::template GrowableRail<TPMGL(T)>::__fieldInitializers_x10_util_GrowableRail();
    
    //#line 58 "x10/util/GrowableRail.x10"
    this->FMGL(data) = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(cap, true);
    
    //#line 59 "x10/util/GrowableRail.x10"
    this->FMGL(size) = ((x10_long)0ll);
}
template<class TPMGL(T)> ::x10::util::GrowableRail<TPMGL(T)>* x10::util::GrowableRail<TPMGL(T)>::_make(
                           x10_long cap) {
    ::x10::util::GrowableRail<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(T)> >()) ::x10::util::GrowableRail<TPMGL(T)>();
    this_->_constructor(cap);
    return this_;
}



//#line 62 "x10/util/GrowableRail.x10"
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::_constructor(
                           ::x10::io::Deserializer* ds) {
    
    //#line 32 "x10/util/GrowableRail.x10"
    this->x10::util::template GrowableRail<TPMGL(T)>::__fieldInitializers_x10_util_GrowableRail();
    
    //#line 63 "x10/util/GrowableRail.x10"
    ::x10::lang::Rail< TPMGL(T) >* src = ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(ds)->x10::io::Deserializer::readAny());
    
    //#line 64 "x10/util/GrowableRail.x10"
    this->FMGL(data) = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe((x10_long)(::x10aux::nullCheck(src)->FMGL(size)), false);
    
    //#line 65 "x10/util/GrowableRail.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      src, ((x10_long)0ll), this->FMGL(data), ((x10_long)0ll),
      (x10_long)(::x10aux::nullCheck(src)->FMGL(size)));
    
    //#line 66 "x10/util/GrowableRail.x10"
    this->FMGL(size) = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
}
template<class TPMGL(T)> ::x10::util::GrowableRail<TPMGL(T)>* x10::util::GrowableRail<TPMGL(T)>::_make(
                           ::x10::io::Deserializer* ds) {
    ::x10::util::GrowableRail<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(T)> >()) ::x10::util::GrowableRail<TPMGL(T)>();
    this_->_constructor(ds);
    return this_;
}



//#line 69 "x10/util/GrowableRail.x10"
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::serialize(
  ::x10::io::Serializer* s) {
    
    //#line 70 "x10/util/GrowableRail.x10"
    ::x10::lang::Rail< TPMGL(T) >* tmp = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(this->FMGL(size), false);
    
    //#line 71 "x10/util/GrowableRail.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      this->FMGL(data), ((x10_long)0ll), tmp, ((x10_long)0ll),
      this->FMGL(size));
    
    //#line 72 "x10/util/GrowableRail.x10"
    ::x10aux::nullCheck(s)->x10::io::Serializer::writeAny(
      reinterpret_cast< ::x10::lang::Any*>(tmp));
}

//#line 78 "x10/util/GrowableRail.x10"
/**
     * Store v as the size element, growing the backing store if needed.
     */
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::add(
  TPMGL(T) v) {
    
    //#line 79 "x10/util/GrowableRail.x10"
    if (((((this->FMGL(size)) + (((x10_long)1ll)))) > (this->x10::util::template GrowableRail<TPMGL(T)>::capacity())))
    {
        this->x10::util::template GrowableRail<TPMGL(T)>::grow(
          ((this->FMGL(size)) + (((x10_long)1ll))));
    }
    
    //#line 80 "x10/util/GrowableRail.x10"
    ::x10aux::nullCheck(this->FMGL(data))->x10::lang::template Rail< TPMGL(T) >::__set(
      ((this->FMGL(size) = ((this->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
      v);
}

//#line 86 "x10/util/GrowableRail.x10"
/**
     * Add all elements from the argument Rail to this.
     */
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::addAll(
  ::x10::lang::Rail< TPMGL(T) >* x) {
    
    //#line 87 "x10/util/GrowableRail.x10"
    if (((((this->FMGL(size)) + ((x10_long)(::x10aux::nullCheck(x)->FMGL(size))))) > (this->x10::util::template GrowableRail<TPMGL(T)>::capacity())))
    {
        this->x10::util::template GrowableRail<TPMGL(T)>::grow(
          ((this->FMGL(size)) + ((x10_long)(::x10aux::nullCheck(x)->FMGL(size)))));
    }
    
    //#line 88 "x10/util/GrowableRail.x10"
    x10_long i__122981min__123034 = ((x10_long)0ll);
    x10_long i__122981max__123035 = (((x10_long)(::x10aux::nullCheck(x)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__123036;
        for (i__123036 = i__122981min__123034; ((i__123036) <= (i__122981max__123035));
             i__123036 = ((i__123036) + (((x10_long)1ll))))
        {
            x10_long i__123037 = i__123036;
            
            //#line 89 "x10/util/GrowableRail.x10"
            ::x10aux::nullCheck(this->FMGL(data))->x10::lang::template Rail< TPMGL(T) >::__set(
              ((this->FMGL(size) = ((this->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
              ::x10aux::nullCheck(x)->x10::lang::template Rail< TPMGL(T) >::__apply(
                i__123037));
        }
    }
    
}

//#line 96 "x10/util/GrowableRail.x10"
/**
     * Add all elements from the argument GrowableRail to this.
     */
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::addAll(
  ::x10::util::GrowableRail<TPMGL(T)>* x) {
    
    //#line 97 "x10/util/GrowableRail.x10"
    this->x10::util::template GrowableRail<TPMGL(T)>::addAll(
      ::x10aux::nullCheck(x)->FMGL(data));
}

//#line 109 "x10/util/GrowableRail.x10"
/** 
     * Insert all elements of items starting at the specified index.
     * This will raise an UnsupportedOperationException if p > size.
     * If p<size, then the elements from p..size-1 will first
     * be slide out of the way (growing the backing storage if needed)
     * and then the items inserted.
     * If p==size, then insert is equivalent to calling add for
     * each element of items in turn.
     */
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::insert(
  x10_long p, ::x10::lang::Rail< TPMGL(T) >* items) {
    
    //#line 110 "x10/util/GrowableRail.x10"
    x10_long addLen = (x10_long)(::x10aux::nullCheck(items)->FMGL(size));
    
    //#line 111 "x10/util/GrowableRail.x10"
    x10_long newLen = ((this->FMGL(size)) + (addLen));
    
    //#line 112 "x10/util/GrowableRail.x10"
    x10_long movLen = ((this->FMGL(size)) - (p));
    
    //#line 113 "x10/util/GrowableRail.x10"
    if ((BOUNDS_CHECK_BOOL && ((movLen) < (((x10_long)0ll)))))
    {
        ::x10::util::GrowableRail<void>::illegalGap(p, this->FMGL(size));
    }
    
    //#line 114 "x10/util/GrowableRail.x10"
    if (((newLen) > (this->x10::util::template GrowableRail<TPMGL(T)>::capacity())))
    {
        this->x10::util::template GrowableRail<TPMGL(T)>::grow(
          newLen);
    }
    
    //#line 115 "x10/util/GrowableRail.x10"
    if (((movLen) > (((x10_long)0ll)))) {
        
        //#line 116 "x10/util/GrowableRail.x10"
        ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
          this->FMGL(data), p, this->FMGL(data), ((p) + (addLen)),
          movLen);
    }
    
    //#line 118 "x10/util/GrowableRail.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      items, ((x10_long)0ll), this->FMGL(data), p, (x10_long)(::x10aux::nullCheck(items)->FMGL(size)));
    
    //#line 119 "x10/util/GrowableRail.x10"
    this->FMGL(size) = newLen;
}

//#line 122 "x10/util/GrowableRail.x10"
template<class TPMGL(T)> TPMGL(T) x10::util::GrowableRail<TPMGL(T)>::__apply(
  x10_long idx) {
    
    //#line 123 "x10/util/GrowableRail.x10"
    if ((BOUNDS_CHECK_BOOL && ((idx) >= (this->FMGL(size)))))
    {
        ::x10::util::GrowableRail<void>::raiseIndexOutOfBounds(
          idx, this->FMGL(size));
    }
    
    //#line 124 "x10/util/GrowableRail.x10"
    return ::x10aux::nullCheck(this->FMGL(data))->x10::lang::template Rail< TPMGL(T) >::__apply(
             idx);
    
}

//#line 127 "x10/util/GrowableRail.x10"
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::__set(
  x10_long idx, TPMGL(T) v) {
    
    //#line 128 "x10/util/GrowableRail.x10"
    if ((BOUNDS_CHECK_BOOL && ((idx) > (this->FMGL(size)))))
    {
        ::x10::util::GrowableRail<void>::illegalGap(idx, this->FMGL(size));
    }
    
    //#line 129 "x10/util/GrowableRail.x10"
    if ((::x10aux::struct_equals(idx, this->FMGL(size))))
    {
        
        //#line 130 "x10/util/GrowableRail.x10"
        this->x10::util::template GrowableRail<TPMGL(T)>::add(
          v);
    } else {
        
        //#line 132 "x10/util/GrowableRail.x10"
        ::x10aux::nullCheck(this->FMGL(data))->x10::lang::template Rail< TPMGL(T) >::__set(
          idx, v);
    }
    
}

//#line 143 "x10/util/GrowableRail.x10"
/**
     * Does the GrowableRail contain an element that is equal to v?
     *
     * @param v the element to search for
     * @return <code>true</code> if the GrowableRail contains an
     * element that is equal to v, <code>false</code> otherwise.
     */
template<class TPMGL(T)> x10_boolean x10::util::GrowableRail<TPMGL(T)>::contains(
  TPMGL(T) v) {
    
    //#line 144 "x10/util/GrowableRail.x10"
    if ((::x10aux::struct_equals(v, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 145 "x10/util/GrowableRail.x10"
        x10_long i__122999min__123038 = ((x10_long)0ll);
        x10_long i__122999max__123039 = ((this->x10::util::template GrowableRail<TPMGL(T)>::size()) - (((x10_long)1ll)));
        {
            x10_long i__123040;
            for (i__123040 = i__122999min__123038; ((i__123040) <= (i__122999max__123039));
                 i__123040 = ((i__123040) + (((x10_long)1ll))))
            {
                x10_long i__123041 = i__123040;
                
                //#line 146 "x10/util/GrowableRail.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(data))->x10::lang::template Rail< TPMGL(T) >::__apply(
                                               i__123041),
                                             reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                {
                    return true;
                    
                }
                
            }
        }
        
    } else {
        
        //#line 149 "x10/util/GrowableRail.x10"
        x10_long i__123017min__123042 = ((x10_long)0ll);
        x10_long i__123017max__123043 = ((this->x10::util::template GrowableRail<TPMGL(T)>::size()) - (((x10_long)1ll)));
        {
            x10_long i__123044;
            for (i__123044 = i__123017min__123042; ((i__123044) <= (i__123017max__123043));
                 i__123044 = ((i__123044) + (((x10_long)1ll))))
            {
                x10_long i__123045 = i__123044;
                
                //#line 150 "x10/util/GrowableRail.x10"
                if (::x10aux::equals(v,::x10aux::nullCheck(this->FMGL(data))->x10::lang::template Rail< TPMGL(T) >::__apply(
                                         i__123045))) {
                    return true;
                    
                }
                
            }
        }
        
    }
    
    //#line 153 "x10/util/GrowableRail.x10"
    return false;
    
}

//#line 160 "x10/util/GrowableRail.x10"
/**
     * Is the GrowableRail empty? 
     * @return the value of the expession size() == 0
     */
template<class TPMGL(T)> x10_boolean x10::util::GrowableRail<TPMGL(T)>::isEmpty(
  ) {
    return (::x10aux::struct_equals(this->FMGL(size), ((x10_long)0ll)));
    
}

//#line 166 "x10/util/GrowableRail.x10"
/** 
     * Get the current size; indices from 0..size-1 are currently valid 
     * values of type T and may be accessed.
     */
template<class TPMGL(T)> x10_long x10::util::GrowableRail<TPMGL(T)>::size(
  ) {
    return this->FMGL(size);
    
}

//#line 171 "x10/util/GrowableRail.x10"
/**
     * What is the current capacity (size of backing storage)
     */
template<class TPMGL(T)> x10_long x10::util::GrowableRail<TPMGL(T)>::capacity(
  ) {
    return (x10_long)(::x10aux::nullCheck(this->FMGL(data))->FMGL(size));
    
}

//#line 176 "x10/util/GrowableRail.x10"
/** 
     * Remove the last element and return it. May shrink backing storage.
     */
template<class TPMGL(T)> TPMGL(T) x10::util::GrowableRail<TPMGL(T)>::removeLast(
  ) {
    
    //#line 177 "x10/util/GrowableRail.x10"
    TPMGL(T) res = this->x10::util::template GrowableRail<TPMGL(T)>::__apply(
                     ((this->FMGL(size)) - (((x10_long)1ll))));
    
    //#line 178 "x10/util/GrowableRail.x10"
    this->x10::util::template GrowableRail<TPMGL(T)>::shrink(
      ((this->FMGL(size)) - (((x10_long)1ll))));
    
    //#line 179 "x10/util/GrowableRail.x10"
    return res;
    
}

//#line 185 "x10/util/GrowableRail.x10"
/** 
     * Remove all elements.
     */
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::clear(
  ) {
    
    //#line 186 "x10/util/GrowableRail.x10"
    (this->FMGL(data))->clear();
    
    //#line 187 "x10/util/GrowableRail.x10"
    this->FMGL(size) = ((x10_long)0ll);
}

//#line 198 "x10/util/GrowableRail.x10"
/**
     * Transfer elements between i and j (inclusive) into a new Rail,
     * in the order in which they appear in this rail.  The elements
     * following element j are shifted over to position i.
     * (j-i+1) must be no greater than s, the size of the rail.
     * On return the rail has s-(j-i+1) elements.
     * May shrink backing storage.
     */
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::GrowableRail<TPMGL(T)>::moveSectionToRail(
  x10_long i, x10_long j) {
    
    //#line 199 "x10/util/GrowableRail.x10"
    x10_long len = ((((j) - (i))) + (((x10_long)1ll)));
    
    //#line 200 "x10/util/GrowableRail.x10"
    if (((len) < (((x10_long)1ll)))) {
        return ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)0ll), false);
        
    }
    
    //#line 201 "x10/util/GrowableRail.x10"
    ::x10::lang::Rail< TPMGL(T) >* tmp = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(len, false);
    
    //#line 202 "x10/util/GrowableRail.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      this->FMGL(data), i, tmp, ((x10_long)0ll), len);
    
    //#line 203 "x10/util/GrowableRail.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      this->FMGL(data), ((j) + (((x10_long)1ll))), this->FMGL(data),
      i, ((((this->FMGL(size)) - (j))) - (((x10_long)1ll))));
    
    //#line 204 "x10/util/GrowableRail.x10"
    this->x10::util::template GrowableRail<TPMGL(T)>::shrink(
      ((this->FMGL(size)) - (len)));
    
    //#line 205 "x10/util/GrowableRail.x10"
    return tmp;
    
}

//#line 211 "x10/util/GrowableRail.x10"
/**
     * Copy current data into Rail
     */
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::GrowableRail<TPMGL(T)>::toRail(
  ) {
    
    //#line 212 "x10/util/GrowableRail.x10"
    ::x10::lang::Rail< TPMGL(T) >* ans = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(this->FMGL(size), false);
    
    //#line 213 "x10/util/GrowableRail.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      this->FMGL(data), ((x10_long)0ll), ans, ((x10_long)0ll),
      this->FMGL(size));
    
    //#line 214 "x10/util/GrowableRail.x10"
    return ans;
    
}

//#line 224 "x10/util/GrowableRail.x10"
/** 
     * Grow the capacity of this GrowableRail to at least 
     * <code>newCapacity</code>, automatically reallocating storage.
     * On return, capacity is max(newCapacity, oldCapacity*2, 8).
     * The size (number of elements) is unchanged.
     * @param newCapacity the minimum new capacity for this GrowableRail
     */
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::grow(
  x10_long newCapacity) {
    
    //#line 225 "x10/util/GrowableRail.x10"
    #ifndef NO_ASSERTIONS
    if (::x10aux::x10__assertions_enabled)
        ::x10aux::x10__assert(((newCapacity) >= (this->x10::util::template GrowableRail<TPMGL(T)>::capacity())));
    #endif//NO_ASSERTIONS
    
    //#line 226 "x10/util/GrowableRail.x10"
    x10_long oldCapacity = this->x10::util::template GrowableRail<TPMGL(T)>::capacity();
    
    //#line 227 "x10/util/GrowableRail.x10"
    if (((newCapacity) < (((oldCapacity) * (((x10_long)2ll))))))
    {
        
        //#line 228 "x10/util/GrowableRail.x10"
        newCapacity = ((oldCapacity) * (((x10_long)2ll)));
    }
    
    //#line 230 "x10/util/GrowableRail.x10"
    if (((newCapacity) < (((x10_long)8ll)))) {
        
        //#line 231 "x10/util/GrowableRail.x10"
        newCapacity = ((x10_long)8ll);
    }
    
    //#line 234 "x10/util/GrowableRail.x10"
    ::x10::lang::Rail< TPMGL(T) >* tmp = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(newCapacity, false);
    
    //#line 235 "x10/util/GrowableRail.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      this->FMGL(data), ((x10_long)0ll), tmp, ((x10_long)0ll),
      this->FMGL(size));
    
    //#line 236 "x10/util/GrowableRail.x10"
    (tmp)->clear(this->FMGL(size), ((newCapacity) - (this->FMGL(size))));
    
    //#line 237 "x10/util/GrowableRail.x10"
    ::x10aux::dealloc(this->FMGL(data));
    
    //#line 238 "x10/util/GrowableRail.x10"
    this->FMGL(data) = tmp;
}

//#line 247 "x10/util/GrowableRail.x10"
/** 
     * Shrink the capacity of this GrowableRail and remove all elements
     * above <code>newCapacity</code>.
     * On return, capacity == max(newCapacity, 8) and size == newCapacity.
     * @param newCapacity the new capacity for this GrowableRail
     */
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::shrink(
  x10_long newCapacity) {
    
    //#line 248 "x10/util/GrowableRail.x10"
    #ifndef NO_ASSERTIONS
    if (::x10aux::x10__assertions_enabled)
        ::x10aux::x10__assert(((newCapacity) <= (this->x10::util::template GrowableRail<TPMGL(T)>::capacity())));
    #endif//NO_ASSERTIONS
    
    //#line 249 "x10/util/GrowableRail.x10"
    x10_long oldSize = this->FMGL(size);
    
    //#line 250 "x10/util/GrowableRail.x10"
    this->FMGL(size) = ::x10::lang::Math::min(this->FMGL(size),
                                              newCapacity);
    
    //#line 252 "x10/util/GrowableRail.x10"
    x10_long cap = ::x10::lang::Math::max(newCapacity, ((x10_long)8ll));
    
    //#line 253 "x10/util/GrowableRail.x10"
    if (((cap) <= (((this->x10::util::template GrowableRail<TPMGL(T)>::capacity()) / ::x10aux::zeroCheck(((x10_long)4ll))))))
    {
        
        //#line 254 "x10/util/GrowableRail.x10"
        ::x10::lang::Rail< TPMGL(T) >* tmp = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(cap, false);
        
        //#line 255 "x10/util/GrowableRail.x10"
        ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
          this->FMGL(data), ((x10_long)0ll), tmp, ((x10_long)0ll),
          cap);
        
        //#line 256 "x10/util/GrowableRail.x10"
        ::x10aux::dealloc(this->FMGL(data));
        
        //#line 257 "x10/util/GrowableRail.x10"
        this->FMGL(data) = tmp;
    } else 
    //#line 258 "x10/util/GrowableRail.x10"
    if (((this->FMGL(size)) < (oldSize))) {
        
        //#line 259 "x10/util/GrowableRail.x10"
        (this->FMGL(data))->clear(this->FMGL(size), ((oldSize) - (this->FMGL(size))));
    }
    
}

//#line 263 "x10/util/GrowableRail.x10"

//#line 267 "x10/util/GrowableRail.x10"

//#line 271 "x10/util/GrowableRail.x10"
template<class TPMGL(T)> ::x10::lang::String* x10::util::GrowableRail<TPMGL(T)>::toString(
  ) {
    
    //#line 272 "x10/util/GrowableRail.x10"
    ::x10::util::StringBuilder* sb = ::x10::util::StringBuilder::_make();
    
    //#line 273 "x10/util/GrowableRail.x10"
    sb->add((&::x10::util::GrowableRail_Strings::sl__158354));
    
    //#line 274 "x10/util/GrowableRail.x10"
    x10_long sz = ((this->FMGL(size)) > (((x10_long)10ll)))
      ? (((x10_long)10ll)) : (this->FMGL(size));
    
    //#line 275 "x10/util/GrowableRail.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (sz)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 276 "x10/util/GrowableRail.x10"
            if (((i) > (((x10_long)0ll)))) {
                
                //#line 277 "x10/util/GrowableRail.x10"
                sb->add((&::x10::util::GrowableRail_Strings::sl__158355));
            }
            
            //#line 278 "x10/util/GrowableRail.x10"
            sb->add(::x10aux::to_string(::x10aux::nullCheck(this->FMGL(data))->x10::lang::template Rail< TPMGL(T) >::__apply(
                                          i)));
        }
    }
    
    //#line 280 "x10/util/GrowableRail.x10"
    if (((sz) < (this->FMGL(size)))) {
        
        //#line 281 "x10/util/GrowableRail.x10"
        sb->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::GrowableRail_Strings::sl__158356), ((this->FMGL(size)) - (sz))), (&::x10::util::GrowableRail_Strings::sl__158357)));
    }
    
    //#line 282 "x10/util/GrowableRail.x10"
    sb->add((&::x10::util::GrowableRail_Strings::sl__158358));
    
    //#line 283 "x10/util/GrowableRail.x10"
    return sb->toString();
    
}

//#line 32 "x10/util/GrowableRail.x10"
template<class TPMGL(T)> ::x10::util::GrowableRail<TPMGL(T)>*
  x10::util::GrowableRail<TPMGL(T)>::x10__util__GrowableRail____this__x10__util__GrowableRail(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::__fieldInitializers_x10_util_GrowableRail(
  ) {
    this->FMGL(data) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< TPMGL(T) >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(size) = ((x10_long)0ll);
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::GrowableRail<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::GrowableRail<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    /* NOTE: Implements x10.io.CustomSerialization */
    ::x10::io::Serializer* x10_buf = ::x10::io::Serializer::_make(&buf);
    this->serialize(x10_buf);
    buf.write(::x10aux::deserialization_buffer::CUSTOM_SERIALIZATION_END);
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::util::GrowableRail<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::GrowableRail<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(T)> >()) ::x10::util::GrowableRail<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::util::GrowableRail<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    /* NOTE: Implements x10.io.CustomSerialization */
    ::x10::io::Deserializer* x10_buf = ::x10::io::Deserializer::_make(&buf);
    _constructor(x10_buf);
    ::x10aux::serialization_id_t tmp = buf.read< ::x10aux::serialization_id_t>();
    if (tmp != ::x10aux::deserialization_buffer::CUSTOM_SERIALIZATION_END) { ::x10aux::raiseSerializationProtocolError(); }
    
}

#endif // X10_UTIL_GROWABLERAIL_H_IMPLEMENTATION
#endif // __X10_UTIL_GROWABLERAIL_H_NODEPS
