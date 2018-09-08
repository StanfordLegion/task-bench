#ifndef __X10_LANG_REDUCIBLE__SUMREDUCER_H
#define __X10_LANG_REDUCIBLE__SUMREDUCER_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_REDUCIBLE_H_NODEPS
#include <x10/lang/Reducible.h>
#undef X10_LANG_REDUCIBLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Arithmetic;
} } 
namespace x10 { namespace lang { 
class Zero;
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

class Reducible__SumReducer_Strings {
  public:
    static ::x10::lang::String sl__165531;
};

template<class TPMGL(T)> class Reducible__SumReducer   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::lang::Reducible__SumReducer<TPMGL(T)>* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[3];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::lang::Reducible__SumReducer<TPMGL(T)> > _itable_0;
    
    static typename ::x10::lang::Reducible<TPMGL(T)>::template itable< ::x10::lang::Reducible__SumReducer<TPMGL(T)> > _itable_1;
    
    static ::x10aux::itable_entry _iboxitables[3];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::lang::Reducible__SumReducer<TPMGL(T)> _alloc(){::x10::lang::Reducible__SumReducer<TPMGL(T)> t; return t; }
    
    TPMGL(T) zero();
    TPMGL(T) __apply(TPMGL(T) a, TPMGL(T) b);
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::lang::Reducible__SumReducer<TPMGL(T)> other);
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::lang::Reducible__SumReducer<TPMGL(T)> other);
    ::x10::lang::Reducible__SumReducer<TPMGL(T)> x10__lang__Reducible__SumReducer____this__x10__lang__Reducible__SumReducer(
      );
    void _constructor();
    
    static ::x10::lang::Reducible__SumReducer<TPMGL(T)> _make();
    
    void __fieldInitializers_x10_lang_Reducible_SumReducer();
    
    static void _serialize(::x10::lang::Reducible__SumReducer<TPMGL(T)> this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::lang::Reducible__SumReducer<TPMGL(T)> _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::lang::Reducible__SumReducer<TPMGL(T)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::lang::Reducible__SumReducer<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::lang::Reducible__SumReducer<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::lang::Reducible__SumReducer<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::x10::lang::Reducible<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.lang.Reducible.SumReducer";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::struct_kind, 2, parents, 1, params, variances);
}

template <> class Reducible__SumReducer<void> {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_LANG_REDUCIBLE__SUMREDUCER_H

namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible__SumReducer;
} } 

#ifndef X10_LANG_REDUCIBLE__SUMREDUCER_H_NODEPS
#define X10_LANG_REDUCIBLE__SUMREDUCER_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/Arithmetic.h>
#include <x10/lang/Zero.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#ifndef X10_LANG_REDUCIBLE__SUMREDUCER_H_GENERICS
#define X10_LANG_REDUCIBLE__SUMREDUCER_H_GENERICS
#endif // X10_LANG_REDUCIBLE__SUMREDUCER_H_GENERICS
#ifndef X10_LANG_REDUCIBLE__SUMREDUCER_H_IMPLEMENTATION
#define X10_LANG_REDUCIBLE__SUMREDUCER_H_IMPLEMENTATION
#include <x10/lang/Reducible__SumReducer.h>

namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible__SumReducer_ibox0 : public ::x10::lang::IBox< ::x10::lang::Reducible__SumReducer<TPMGL(T)> > {
public:
    static ::x10::lang::Any::itable< Reducible__SumReducer_ibox0<TPMGL(T)> > itable;
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
template<class TPMGL(T)> ::x10::lang::Any::itable< Reducible__SumReducer_ibox0<TPMGL(T)> >  Reducible__SumReducer_ibox0<TPMGL(T)>::itable(&Reducible__SumReducer_ibox0<TPMGL(T)>::equals, &Reducible__SumReducer_ibox0<TPMGL(T)>::hashCode, &Reducible__SumReducer_ibox0<TPMGL(T)>::toString, &Reducible__SumReducer_ibox0<TPMGL(T)>::typeName);
} } 
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::lang::Reducible__SumReducer<TPMGL(T)> >  x10::lang::Reducible__SumReducer<TPMGL(T)>::_itable_0(&x10::lang::Reducible__SumReducer<TPMGL(T)>::equals, &x10::lang::Reducible__SumReducer<TPMGL(T)>::hashCode, &x10::lang::Reducible__SumReducer<TPMGL(T)>::toString, &x10::lang::Reducible__SumReducer<TPMGL(T)>::typeName);
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible__SumReducer_ibox1 : public ::x10::lang::IBox< ::x10::lang::Reducible__SumReducer<TPMGL(T)> > {
public:
    static typename ::x10::lang::Reducible<TPMGL(T)>::template itable< Reducible__SumReducer_ibox1<TPMGL(T)> > itable;
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
template<class TPMGL(T)> typename ::x10::lang::Reducible<TPMGL(T)>::template itable< Reducible__SumReducer_ibox1<TPMGL(T)> >  Reducible__SumReducer_ibox1<TPMGL(T)>::itable(&Reducible__SumReducer_ibox1<TPMGL(T)>::equals, &Reducible__SumReducer_ibox1<TPMGL(T)>::hashCode, &Reducible__SumReducer_ibox1<TPMGL(T)>::__apply, &Reducible__SumReducer_ibox1<TPMGL(T)>::toString, &Reducible__SumReducer_ibox1<TPMGL(T)>::typeName, &Reducible__SumReducer_ibox1<TPMGL(T)>::zero);
} } 
template<class TPMGL(T)> typename ::x10::lang::Reducible<TPMGL(T)>::template itable< ::x10::lang::Reducible__SumReducer<TPMGL(T)> >  x10::lang::Reducible__SumReducer<TPMGL(T)>::_itable_1(&x10::lang::Reducible__SumReducer<TPMGL(T)>::equals, &x10::lang::Reducible__SumReducer<TPMGL(T)>::hashCode, &x10::lang::Reducible__SumReducer<TPMGL(T)>::__apply, &x10::lang::Reducible__SumReducer<TPMGL(T)>::toString, &x10::lang::Reducible__SumReducer<TPMGL(T)>::typeName, &x10::lang::Reducible__SumReducer<TPMGL(T)>::zero);
template<class TPMGL(T)> ::x10aux::itable_entry x10::lang::Reducible__SumReducer<TPMGL(T)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10::lang::Reducible__SumReducer<TPMGL(T)>::_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<TPMGL(T)> >, &x10::lang::Reducible__SumReducer<TPMGL(T)>::_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::lang::Reducible__SumReducer<TPMGL(T)>")};
template<class TPMGL(T)> ::x10aux::itable_entry x10::lang::Reducible__SumReducer<TPMGL(T)>::_iboxitables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10::lang::Reducible__SumReducer_ibox0<TPMGL(T)>::itable), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Reducible<TPMGL(T)> >, &x10::lang::Reducible__SumReducer_ibox1<TPMGL(T)>::itable), ::x10aux::itable_entry(NULL, (void*)"::x10::lang::Reducible__SumReducer<TPMGL(T)>")};

//#line 43 "x10/lang/Reducible.x10"
template<class TPMGL(T)> TPMGL(T) x10::lang::Reducible__SumReducer<TPMGL(T)>::zero(
  ) {
    return ::x10aux::zeroValue< TPMGL(T) >();
    
}

//#line 44 "x10/lang/Reducible.x10"
template<class TPMGL(T)> TPMGL(T) x10::lang::Reducible__SumReducer<TPMGL(T)>::__apply(
  TPMGL(T) a, TPMGL(T) b) {
    return ::x10::lang::Arithmetic< TPMGL(T) >::_m4____plus(a, b);
    
}

//#line 42 "x10/lang/Reducible.x10"
template<class TPMGL(T)> ::x10::lang::String* x10::lang::Reducible__SumReducer<TPMGL(T)>::typeName(
  ){
    return ::x10aux::type_name((*this));
}
template<class TPMGL(T)> ::x10::lang::String* x10::lang::Reducible__SumReducer<TPMGL(T)>::toString(
  ) {
    return (&::x10::lang::Reducible__SumReducer_Strings::sl__165531);
    
}
template<class TPMGL(T)> x10_int x10::lang::Reducible__SumReducer<TPMGL(T)>::hashCode(
  ) {
    x10_int result = ((x10_int)1);
    return result;
    
}
template<class TPMGL(T)> x10_boolean x10::lang::Reducible__SumReducer<TPMGL(T)>::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10::lang::Reducible__SumReducer<TPMGL(T)> >(other)))
    {
        return false;
        
    }
    ::x10aux::class_cast< ::x10::lang::Reducible__SumReducer<TPMGL(T)> >(other);
    return true;
    
}
template<class TPMGL(T)> x10_boolean x10::lang::Reducible__SumReducer<TPMGL(T)>::equals(
  ::x10::lang::Reducible__SumReducer<TPMGL(T)> other) {
    return true;
    
}
template<class TPMGL(T)> x10_boolean x10::lang::Reducible__SumReducer<TPMGL(T)>::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10::lang::Reducible__SumReducer<TPMGL(T)> >(other)))
    {
        return false;
        
    }
    ::x10aux::class_cast< ::x10::lang::Reducible__SumReducer<TPMGL(T)> >(other);
    return true;
    
}
template<class TPMGL(T)> x10_boolean x10::lang::Reducible__SumReducer<TPMGL(T)>::_struct_equals(
  ::x10::lang::Reducible__SumReducer<TPMGL(T)> other) {
    return true;
    
}
template<class TPMGL(T)> ::x10::lang::Reducible__SumReducer<TPMGL(T)>
  x10::lang::Reducible__SumReducer<TPMGL(T)>::x10__lang__Reducible__SumReducer____this__x10__lang__Reducible__SumReducer(
  ) {
    return (*this);
    
}
template<class TPMGL(T)> void x10::lang::Reducible__SumReducer<TPMGL(T)>::_constructor(
                           ) {
    
}
template<class TPMGL(T)> ::x10::lang::Reducible__SumReducer<TPMGL(T)> x10::lang::Reducible__SumReducer<TPMGL(T)>::_make(
                           ) {
    ::x10::lang::Reducible__SumReducer<TPMGL(T)> this_; 
    this_->_constructor();
    return this_;
}


template<class TPMGL(T)> void x10::lang::Reducible__SumReducer<TPMGL(T)>::__fieldInitializers_x10_lang_Reducible_SumReducer(
  ) {
 
}
template<class TPMGL(T)> void ::x10::lang::Reducible__SumReducer<TPMGL(T)>::_serialize(::x10::lang::Reducible__SumReducer<TPMGL(T)> this_, ::x10aux::serialization_buffer& buf) {
    
}

template<class TPMGL(T)> void ::x10::lang::Reducible__SumReducer<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


#endif // X10_LANG_REDUCIBLE__SUMREDUCER_H_IMPLEMENTATION
#endif // __X10_LANG_REDUCIBLE__SUMREDUCER_H_NODEPS
