#ifndef __X10_LANG_REDUCIBLE__MAXREDUCER_H
#define __X10_LANG_REDUCIBLE__MAXREDUCER_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_REDUCIBLE_H_NODEPS
#include <x10/lang/Reducible.h>
#undef X10_LANG_REDUCIBLE_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class Ordered;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class Reducible__MaxReducer_Strings {
  public:
    static ::x10::lang::String sl__165619;
    static ::x10::lang::String sl__165618;
};

template<class TPMGL(T)> class Reducible__MaxReducer   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::lang::Reducible__MaxReducer<TPMGL(T)>* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[3];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::lang::Reducible__MaxReducer<TPMGL(T)> > _itable_0;
    
    static typename ::x10::lang::Reducible<TPMGL(T)>::template itable< ::x10::lang::Reducible__MaxReducer<TPMGL(T)> > _itable_1;
    
    static ::x10aux::itable_entry _iboxitables[3];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::lang::Reducible__MaxReducer<TPMGL(T)> _alloc(){::x10::lang::Reducible__MaxReducer<TPMGL(T)> t; return t; }
    
    TPMGL(T) FMGL(zeroVal);
    
    void _constructor(TPMGL(T) minValue);
    
    static ::x10::lang::Reducible__MaxReducer<TPMGL(T)> _make(TPMGL(T) minValue);
    
    TPMGL(T) zero();
    TPMGL(T) __apply(TPMGL(T) a, TPMGL(T) b);
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::lang::Reducible__MaxReducer<TPMGL(T)> other);
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::lang::Reducible__MaxReducer<TPMGL(T)> other);
    ::x10::lang::Reducible__MaxReducer<TPMGL(T)> x10__lang__Reducible__MaxReducer____this__x10__lang__Reducible__MaxReducer(
      );
    void __fieldInitializers_x10_lang_Reducible_MaxReducer();
    
    static void _serialize(::x10::lang::Reducible__MaxReducer<TPMGL(T)> this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::lang::Reducible__MaxReducer<TPMGL(T)> _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::lang::Reducible__MaxReducer<TPMGL(T)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::lang::Reducible__MaxReducer<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::lang::Reducible__MaxReducer<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::lang::Reducible__MaxReducer<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::lang::Reducible<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.lang.Reducible.MaxReducer";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::struct_kind, 2, parents, 1, params, variances);
}

template <> class Reducible__MaxReducer<void> {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_LANG_REDUCIBLE__MAXREDUCER_H

namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible__MaxReducer;
} } 

#ifndef X10_LANG_REDUCIBLE__MAXREDUCER_H_NODEPS
#define X10_LANG_REDUCIBLE__MAXREDUCER_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Reducible.h>
#include <x10/util/Ordered.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#ifndef X10_LANG_REDUCIBLE__MAXREDUCER_H_GENERICS
#define X10_LANG_REDUCIBLE__MAXREDUCER_H_GENERICS
#endif // X10_LANG_REDUCIBLE__MAXREDUCER_H_GENERICS
#ifndef X10_LANG_REDUCIBLE__MAXREDUCER_H_IMPLEMENTATION
#define X10_LANG_REDUCIBLE__MAXREDUCER_H_IMPLEMENTATION
#include <x10/lang/Reducible__MaxReducer.h>

namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible__MaxReducer_ibox0 : public ::x10::lang::IBox< ::x10::lang::Reducible__MaxReducer<TPMGL(T)> > {
public:
    static ::x10::lang::Any::itable< Reducible__MaxReducer_ibox0<TPMGL(T)> > itable;
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
template<class TPMGL(T)> ::x10::lang::Any::itable< Reducible__MaxReducer_ibox0<TPMGL(T)> >  Reducible__MaxReducer_ibox0<TPMGL(T)>::itable(&Reducible__MaxReducer_ibox0<TPMGL(T)>::equals, &Reducible__MaxReducer_ibox0<TPMGL(T)>::hashCode, &Reducible__MaxReducer_ibox0<TPMGL(T)>::toString, &Reducible__MaxReducer_ibox0<TPMGL(T)>::typeName);
} } 
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::lang::Reducible__MaxReducer<TPMGL(T)> >  x10::lang::Reducible__MaxReducer<TPMGL(T)>::_itable_0(&x10::lang::Reducible__MaxReducer<TPMGL(T)>::equals, &x10::lang::Reducible__MaxReducer<TPMGL(T)>::hashCode, &x10::lang::Reducible__MaxReducer<TPMGL(T)>::toString, &x10::lang::Reducible__MaxReducer<TPMGL(T)>::typeName);
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible__MaxReducer_ibox1 : public ::x10::lang::IBox< ::x10::lang::Reducible__MaxReducer<TPMGL(T)> > {
public:
    static typename ::x10::lang::Reducible<TPMGL(T)>::template itable< Reducible__MaxReducer_ibox1<TPMGL(T)> > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    TPMGL(T) __apply(TPMGL(T) arg0, TPMGL(T) arg1) {
        return this->value->__apply(arg0, arg1);
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    TPMGL(T) zero() {
        return this->value->zero();
    }
    
};
template<class TPMGL(T)> typename ::x10::lang::Reducible<TPMGL(T)>::template itable< Reducible__MaxReducer_ibox1<TPMGL(T)> >  Reducible__MaxReducer_ibox1<TPMGL(T)>::itable(&Reducible__MaxReducer_ibox1<TPMGL(T)>::equals, &Reducible__MaxReducer_ibox1<TPMGL(T)>::hashCode, &Reducible__MaxReducer_ibox1<TPMGL(T)>::__apply, &Reducible__MaxReducer_ibox1<TPMGL(T)>::toString, &Reducible__MaxReducer_ibox1<TPMGL(T)>::typeName, &Reducible__MaxReducer_ibox1<TPMGL(T)>::zero);
} } 
template<class TPMGL(T)> typename ::x10::lang::Reducible<TPMGL(T)>::template itable< ::x10::lang::Reducible__MaxReducer<TPMGL(T)> >  x10::lang::Reducible__MaxReducer<TPMGL(T)>::_itable_1(&x10::lang::Reducible__MaxReducer<TPMGL(T)>::equals, &x10::lang::Reducible__MaxReducer<TPMGL(T)>::hashCode, &x10::lang::Reducible__MaxReducer<TPMGL(T)>::__apply, &x10::lang::Reducible__MaxReducer<TPMGL(T)>::toString, &x10::lang::Reducible__MaxReducer<TPMGL(T)>::typeName, &x10::lang::Reducible__MaxReducer<TPMGL(T)>::zero);
template<class TPMGL(T)> ::x10aux::itable_entry x10::lang::Reducible__MaxReducer<TPMGL(T)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10::lang::Reducible__MaxReducer<TPMGL(T)>::_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<TPMGL(T)> >, &x10::lang::Reducible__MaxReducer<TPMGL(T)>::_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::lang::Reducible__MaxReducer<TPMGL(T)>")};
template<class TPMGL(T)> ::x10aux::itable_entry x10::lang::Reducible__MaxReducer<TPMGL(T)>::_iboxitables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10::lang::Reducible__MaxReducer_ibox0<TPMGL(T)>::itable), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<TPMGL(T)> >, &x10::lang::Reducible__MaxReducer_ibox1<TPMGL(T)>::itable), ::x10aux::itable_entry(NULL, (void*)"::x10::lang::Reducible__MaxReducer<TPMGL(T)>")};

//#line 55 "x10/lang/Reducible.x10"

//#line 56 "x10/lang/Reducible.x10"
template<class TPMGL(T)> void x10::lang::Reducible__MaxReducer<TPMGL(T)>::_constructor(
                           TPMGL(T) minValue) {
    (*this)->FMGL(zeroVal) = minValue;
}
template<class TPMGL(T)> ::x10::lang::Reducible__MaxReducer<TPMGL(T)> x10::lang::Reducible__MaxReducer<TPMGL(T)>::_make(
                           TPMGL(T) minValue) {
    ::x10::lang::Reducible__MaxReducer<TPMGL(T)> this_; 
    this_->_constructor(minValue);
    return this_;
}



//#line 57 "x10/lang/Reducible.x10"
template<class TPMGL(T)> TPMGL(T) x10::lang::Reducible__MaxReducer<TPMGL(T)>::zero(
  ) {
    return (*this)->FMGL(zeroVal);
    
}

//#line 58 "x10/lang/Reducible.x10"
template<class TPMGL(T)> TPMGL(T) x10::lang::Reducible__MaxReducer<TPMGL(T)>::__apply(
  TPMGL(T) a, TPMGL(T) b) {
    return ::x10::util::Ordered< TPMGL(T) >::__ge(a, b) ? (a)
      : (b);
    
}

//#line 54 "x10/lang/Reducible.x10"
template<class TPMGL(T)> ::x10::lang::String* x10::lang::Reducible__MaxReducer<TPMGL(T)>::typeName(
  ){
    return ::x10aux::type_name((*this));
}
template<class TPMGL(T)> ::x10::lang::String* x10::lang::Reducible__MaxReducer<TPMGL(T)>::toString(
  ) {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::lang::Reducible__MaxReducer_Strings::sl__165618), (&::x10::lang::Reducible__MaxReducer_Strings::sl__165619)), (*this)->FMGL(zeroVal));
    
}
template<class TPMGL(T)> x10_int x10::lang::Reducible__MaxReducer<TPMGL(T)>::hashCode(
  ) {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(zeroVal))));
    return result;
    
}
template<class TPMGL(T)> x10_boolean x10::lang::Reducible__MaxReducer<TPMGL(T)>::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10::lang::Reducible__MaxReducer<TPMGL(T)> >(other)))
    {
        return false;
        
    }
    ::x10::lang::Reducible__MaxReducer<TPMGL(T)> this__122460 =
      (*this);
    ::x10::lang::Reducible__MaxReducer<TPMGL(T)> other__122461 =
      ::x10aux::class_cast< ::x10::lang::Reducible__MaxReducer<TPMGL(T)> >(other);
    return (::x10aux::struct_equals(this__122460->FMGL(zeroVal),
                                    other__122461->FMGL(zeroVal)));
    
}
template<class TPMGL(T)> x10_boolean x10::lang::Reducible__MaxReducer<TPMGL(T)>::equals(
  ::x10::lang::Reducible__MaxReducer<TPMGL(T)> other) {
    return (::x10aux::struct_equals((*this)->FMGL(zeroVal),
                                    other->FMGL(zeroVal)));
    
}
template<class TPMGL(T)> x10_boolean x10::lang::Reducible__MaxReducer<TPMGL(T)>::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10::lang::Reducible__MaxReducer<TPMGL(T)> >(other)))
    {
        return false;
        
    }
    ::x10::lang::Reducible__MaxReducer<TPMGL(T)> this__122462 =
      (*this);
    ::x10::lang::Reducible__MaxReducer<TPMGL(T)> other__122463 =
      ::x10aux::class_cast< ::x10::lang::Reducible__MaxReducer<TPMGL(T)> >(other);
    return (::x10aux::struct_equals(this__122462->FMGL(zeroVal),
                                    other__122463->FMGL(zeroVal)));
    
}
template<class TPMGL(T)> x10_boolean x10::lang::Reducible__MaxReducer<TPMGL(T)>::_struct_equals(
  ::x10::lang::Reducible__MaxReducer<TPMGL(T)> other) {
    return (::x10aux::struct_equals((*this)->FMGL(zeroVal),
                                    other->FMGL(zeroVal)));
    
}
template<class TPMGL(T)> ::x10::lang::Reducible__MaxReducer<TPMGL(T)>
  x10::lang::Reducible__MaxReducer<TPMGL(T)>::x10__lang__Reducible__MaxReducer____this__x10__lang__Reducible__MaxReducer(
  ) {
    return (*this);
    
}
template<class TPMGL(T)> void x10::lang::Reducible__MaxReducer<TPMGL(T)>::__fieldInitializers_x10_lang_Reducible_MaxReducer(
  ) {
 
}
template<class TPMGL(T)> void ::x10::lang::Reducible__MaxReducer<TPMGL(T)>::_serialize(::x10::lang::Reducible__MaxReducer<TPMGL(T)> this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(zeroVal));
    
}

template<class TPMGL(T)> void ::x10::lang::Reducible__MaxReducer<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(zeroVal) = buf.read<TPMGL(T)>();
}


#endif // X10_LANG_REDUCIBLE__MAXREDUCER_H_IMPLEMENTATION
#endif // __X10_LANG_REDUCIBLE__MAXREDUCER_H_NODEPS
