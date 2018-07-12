#ifndef __X10_LANG_CUDACONSTANTRAIL_H
#define __X10_LANG_CUDACONSTANTRAIL_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class CUDAConstantRail_Strings {
  public:
    static ::x10::lang::String sl__164994;
    static ::x10::lang::String sl__164993;
};

template<class TPMGL(T)> class CUDAConstantRail   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::lang::CUDAConstantRail<TPMGL(T)>* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::lang::CUDAConstantRail<TPMGL(T)> > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::lang::CUDAConstantRail<TPMGL(T)> _alloc(){::x10::lang::CUDAConstantRail<TPMGL(T)> t; return t; }
    
    ::x10::lang::Rail< TPMGL(T) >* FMGL(backing);
    
    void _constructor(::x10::lang::Rail< TPMGL(T) >* backing);
    
    static ::x10::lang::CUDAConstantRail<TPMGL(T)> _make(::x10::lang::Rail< TPMGL(T) >* backing);
    
    TPMGL(T) __apply(x10_long i);
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::lang::CUDAConstantRail<TPMGL(T)> other);
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::lang::CUDAConstantRail<TPMGL(T)> other);
    ::x10::lang::CUDAConstantRail<TPMGL(T)> x10__lang__CUDAConstantRail____this__x10__lang__CUDAConstantRail(
      );
    void __fieldInitializers_x10_lang_CUDAConstantRail();
    
    static void _serialize(::x10::lang::CUDAConstantRail<TPMGL(T)> this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::lang::CUDAConstantRail<TPMGL(T)> _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::lang::CUDAConstantRail<TPMGL(T)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::lang::CUDAConstantRail<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::lang::CUDAConstantRail<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::lang::CUDAConstantRail<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.lang.CUDAConstantRail";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::struct_kind, 1, parents, 1, params, variances);
}

template <> class CUDAConstantRail<void> {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_LANG_CUDACONSTANTRAIL_H

namespace x10 { namespace lang { 
template<class TPMGL(T)> class CUDAConstantRail;
} } 

#ifndef X10_LANG_CUDACONSTANTRAIL_H_NODEPS
#define X10_LANG_CUDACONSTANTRAIL_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Native.h>
#include <x10/lang/String.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#ifndef X10_LANG_CUDACONSTANTRAIL_H_GENERICS
#define X10_LANG_CUDACONSTANTRAIL_H_GENERICS
#endif // X10_LANG_CUDACONSTANTRAIL_H_GENERICS
#ifndef X10_LANG_CUDACONSTANTRAIL_H_IMPLEMENTATION
#define X10_LANG_CUDACONSTANTRAIL_H_IMPLEMENTATION
#include <x10/lang/CUDAConstantRail.h>

namespace x10 { namespace lang { 
template<class TPMGL(T)> class CUDAConstantRail_ibox0 : public ::x10::lang::IBox< ::x10::lang::CUDAConstantRail<TPMGL(T)> > {
public:
    static ::x10::lang::Any::itable< CUDAConstantRail_ibox0<TPMGL(T)> > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
template<class TPMGL(T)> ::x10::lang::Any::itable< CUDAConstantRail_ibox0<TPMGL(T)> >  CUDAConstantRail_ibox0<TPMGL(T)>::itable(&CUDAConstantRail_ibox0<TPMGL(T)>::equals, &CUDAConstantRail_ibox0<TPMGL(T)>::hashCode, &CUDAConstantRail_ibox0<TPMGL(T)>::toString, &CUDAConstantRail_ibox0<TPMGL(T)>::typeName);
} } 
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::lang::CUDAConstantRail<TPMGL(T)> >  x10::lang::CUDAConstantRail<TPMGL(T)>::_itable_0(&x10::lang::CUDAConstantRail<TPMGL(T)>::equals, &x10::lang::CUDAConstantRail<TPMGL(T)>::hashCode, &x10::lang::CUDAConstantRail<TPMGL(T)>::toString, &x10::lang::CUDAConstantRail<TPMGL(T)>::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::lang::CUDAConstantRail<TPMGL(T)>::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10::lang::CUDAConstantRail<TPMGL(T)>::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::x10::lang::CUDAConstantRail<TPMGL(T)>")};
template<class TPMGL(T)> ::x10aux::itable_entry x10::lang::CUDAConstantRail<TPMGL(T)>::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10::lang::CUDAConstantRail_ibox0<TPMGL(T)>::itable), ::x10aux::itable_entry(NULL, (void*)"::x10::lang::CUDAConstantRail<TPMGL(T)>")};

//#line 24 "x10/lang/CUDAConstantRail.x10"
/** Backing rail. */

//#line 27 "x10/lang/CUDAConstantRail.x10"
/** Create a view on given a backing rail. */
template<class TPMGL(T)> void x10::lang::CUDAConstantRail<TPMGL(T)>::_constructor(
                           ::x10::lang::Rail< TPMGL(T) >* backing) {
    
    //#line 28 "x10/lang/CUDAConstantRail.x10"
    (*this)->FMGL(backing) = backing;
}
template<class TPMGL(T)> ::x10::lang::CUDAConstantRail<TPMGL(T)> x10::lang::CUDAConstantRail<TPMGL(T)>::_make(
                           ::x10::lang::Rail< TPMGL(T) >* backing)
{
    ::x10::lang::CUDAConstantRail<TPMGL(T)> this_; 
    this_->_constructor(backing);
    return this_;
}



//#line 33 "x10/lang/CUDAConstantRail.x10"
/** On the CPU, delegate accesses to the backing rail. */
template<class TPMGL(T)> TPMGL(T) x10::lang::CUDAConstantRail<TPMGL(T)>::__apply(
  x10_long i) {
    
    //#line 34 "x10/lang/CUDAConstantRail.x10"
    return ::x10aux::nullCheck((*this)->FMGL(backing))->x10::lang::template Rail< TPMGL(T) >::__apply(
             i);
    
}

//#line 21 "x10/lang/CUDAConstantRail.x10"
template<class TPMGL(T)> ::x10::lang::String* x10::lang::CUDAConstantRail<TPMGL(T)>::typeName(
  ){
    return ::x10aux::type_name((*this));
}
template<class TPMGL(T)> ::x10::lang::String* x10::lang::CUDAConstantRail<TPMGL(T)>::toString(
  ) {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::lang::CUDAConstantRail_Strings::sl__164993), (&::x10::lang::CUDAConstantRail_Strings::sl__164994)), (*this)->FMGL(backing));
    
}
template<class TPMGL(T)> x10_int x10::lang::CUDAConstantRail<TPMGL(T)>::hashCode(
  ) {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(backing))));
    return result;
    
}
template<class TPMGL(T)> x10_boolean x10::lang::CUDAConstantRail<TPMGL(T)>::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10::lang::CUDAConstantRail<TPMGL(T)> >(other)))
    {
        return false;
        
    }
    ::x10::lang::CUDAConstantRail<TPMGL(T)> this__120984 =
      (*this);
    ::x10::lang::CUDAConstantRail<TPMGL(T)> other__120985 =
      ::x10aux::class_cast< ::x10::lang::CUDAConstantRail<TPMGL(T)> >(other);
    return (::x10aux::struct_equals(this__120984->FMGL(backing),
                                    other__120985->FMGL(backing)));
    
}
template<class TPMGL(T)> x10_boolean x10::lang::CUDAConstantRail<TPMGL(T)>::equals(
  ::x10::lang::CUDAConstantRail<TPMGL(T)> other) {
    return (::x10aux::struct_equals((*this)->FMGL(backing),
                                    other->FMGL(backing)));
    
}
template<class TPMGL(T)> x10_boolean x10::lang::CUDAConstantRail<TPMGL(T)>::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10::lang::CUDAConstantRail<TPMGL(T)> >(other)))
    {
        return false;
        
    }
    ::x10::lang::CUDAConstantRail<TPMGL(T)> this__120986 =
      (*this);
    ::x10::lang::CUDAConstantRail<TPMGL(T)> other__120987 =
      ::x10aux::class_cast< ::x10::lang::CUDAConstantRail<TPMGL(T)> >(other);
    return (::x10aux::struct_equals(this__120986->FMGL(backing),
                                    other__120987->FMGL(backing)));
    
}
template<class TPMGL(T)> x10_boolean x10::lang::CUDAConstantRail<TPMGL(T)>::_struct_equals(
  ::x10::lang::CUDAConstantRail<TPMGL(T)> other) {
    return (::x10aux::struct_equals((*this)->FMGL(backing),
                                    other->FMGL(backing)));
    
}
template<class TPMGL(T)> ::x10::lang::CUDAConstantRail<TPMGL(T)>
  x10::lang::CUDAConstantRail<TPMGL(T)>::x10__lang__CUDAConstantRail____this__x10__lang__CUDAConstantRail(
  ) {
    return (*this);
    
}
template<class TPMGL(T)> void x10::lang::CUDAConstantRail<TPMGL(T)>::__fieldInitializers_x10_lang_CUDAConstantRail(
  ) {
 
}
template<class TPMGL(T)> void ::x10::lang::CUDAConstantRail<TPMGL(T)>::_serialize(::x10::lang::CUDAConstantRail<TPMGL(T)> this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(backing));
    
}

template<class TPMGL(T)> void ::x10::lang::CUDAConstantRail<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(backing) = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
}


#endif // X10_LANG_CUDACONSTANTRAIL_H_IMPLEMENTATION
#endif // __X10_LANG_CUDACONSTANTRAIL_H_NODEPS
