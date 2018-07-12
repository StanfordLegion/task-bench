#ifndef __X10_UTIL_BOX_H
#define __X10_UTIL_BOX_H

#include <x10rt.h>


#define X10_LANG_FUN_0_0_H_NODEPS
#include <x10/lang/Fun_0_0.h>
#undef X10_LANG_FUN_0_0_H_NODEPS
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

template<class TPMGL(T)> class Box;
template <> class Box<void>;
template<class TPMGL(T)> class Box : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Fun_0_0<TPMGL(T)>::template itable< ::x10::util::Box<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::Box<TPMGL(T)> > _itable_1;
    
    TPMGL(T) FMGL(value);
    
    void _constructor(TPMGL(T) x);
    
    static ::x10::util::Box<TPMGL(T)>* _make(TPMGL(T) x);
    
    virtual TPMGL(T) __apply();
    virtual x10_int hashCode();
    virtual ::x10::lang::String* toString();
    virtual x10_boolean equals(::x10::lang::Any* x);
    virtual ::x10::util::Box<TPMGL(T)>* x10__util__Box____this__x10__util__Box(
      );
    virtual void __fieldInitializers_x10_util_Box();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::Box<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::Box<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::Box<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.Box";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class Box<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_BOX_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 

#ifndef X10_UTIL_BOX_H_NODEPS
#define X10_UTIL_BOX_H_NODEPS
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Int.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_BOX_H_GENERICS
#define X10_UTIL_BOX_H_GENERICS
#endif // X10_UTIL_BOX_H_GENERICS
#ifndef X10_UTIL_BOX_H_IMPLEMENTATION
#define X10_UTIL_BOX_H_IMPLEMENTATION
#include <x10/util/Box.h>

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0<TPMGL(T)>::template itable< ::x10::util::Box<TPMGL(T)> >  x10::util::Box<TPMGL(T)>::_itable_0(&x10::util::Box<TPMGL(T)>::equals, &x10::util::Box<TPMGL(T)>::hashCode, &x10::util::Box<TPMGL(T)>::__apply, &x10::util::Box<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::util::Box<TPMGL(T)> >  x10::util::Box<TPMGL(T)>::_itable_1(&x10::util::Box<TPMGL(T)>::equals, &x10::util::Box<TPMGL(T)>::hashCode, &x10::util::Box<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::util::Box<TPMGL(T)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::util::Box<TPMGL(T)>")};

//#line 15 "x10/util/Box.x10"

//#line 16 "x10/util/Box.x10"
template<class TPMGL(T)> void x10::util::Box<TPMGL(T)>::_constructor(TPMGL(T) x) {
    
    //#line 14 "x10/util/Box.x10"
    this->x10::util::template Box<TPMGL(T)>::__fieldInitializers_x10_util_Box();
    
    //#line 16 "x10/util/Box.x10"
    this->FMGL(value) = x;
}
template<class TPMGL(T)> ::x10::util::Box<TPMGL(T)>* x10::util::Box<TPMGL(T)>::_make(
                           TPMGL(T) x) {
    ::x10::util::Box<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::Box<TPMGL(T)> >()) ::x10::util::Box<TPMGL(T)>();
    this_->_constructor(x);
    return this_;
}



//#line 18 "x10/util/Box.x10"
template<class TPMGL(T)> TPMGL(T) x10::util::Box<TPMGL(T)>::__apply(
  ) {
    return this->FMGL(value);
    
}

//#line 19 "x10/util/Box.x10"
template<class TPMGL(T)> x10_int x10::util::Box<TPMGL(T)>::hashCode(
  ) {
    return ::x10aux::hash_code(this->FMGL(value));
    
}

//#line 21 "x10/util/Box.x10"
template<class TPMGL(T)> ::x10::lang::String* x10::util::Box<TPMGL(T)>::toString(
  ) {
    return ::x10aux::to_string(this->FMGL(value));
    
}

//#line 23 "x10/util/Box.x10"
template<class TPMGL(T)> x10_boolean x10::util::Box<TPMGL(T)>::equals(
  ::x10::lang::Any* x) {
    
    //#line 24 "x10/util/Box.x10"
    if ((::x10aux::struct_equals(x, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 25 "x10/util/Box.x10"
        return false;
        
    }
    
    //#line 27 "x10/util/Box.x10"
    if (::x10aux::instanceof<TPMGL(T)>(x)) {
        
        //#line 28 "x10/util/Box.x10"
        TPMGL(T) y = ::x10aux::class_cast<TPMGL(T)>(x);
        
        //#line 29 "x10/util/Box.x10"
        return ::x10aux::equals(this->FMGL(value),y);
        
    }
    
    //#line 31 "x10/util/Box.x10"
    if (::x10aux::instanceof< ::x10::util::Box<TPMGL(T)>*>(x))
    {
        
        //#line 32 "x10/util/Box.x10"
        TPMGL(T) y = ::x10aux::nullCheck((::x10aux::class_cast< ::x10::util::Box<TPMGL(T)>*>(x)))->FMGL(value);
        
        //#line 33 "x10/util/Box.x10"
        return ::x10aux::equals(this->FMGL(value),y);
        
    }
    
    //#line 35 "x10/util/Box.x10"
    return false;
    
}

//#line 14 "x10/util/Box.x10"
template<class TPMGL(T)> ::x10::util::Box<TPMGL(T)>* x10::util::Box<TPMGL(T)>::x10__util__Box____this__x10__util__Box(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::Box<TPMGL(T)>::__fieldInitializers_x10_util_Box(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::Box<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::Box<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::util::Box<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(value));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::util::Box<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::Box<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::Box<TPMGL(T)> >()) ::x10::util::Box<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::util::Box<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(value) = buf.read<TPMGL(T)>();
}

#endif // X10_UTIL_BOX_H_IMPLEMENTATION
#endif // __X10_UTIL_BOX_H_NODEPS
