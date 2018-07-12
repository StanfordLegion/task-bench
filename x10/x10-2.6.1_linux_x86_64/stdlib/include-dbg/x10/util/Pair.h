#ifndef __X10_UTIL_PAIR_H
#define __X10_UTIL_PAIR_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
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

namespace x10 { namespace util { 

class Pair_Strings {
  public:
    static ::x10::lang::String sl__159580;
    static ::x10::lang::String sl__159579;
    static ::x10::lang::String sl__159581;
};

template<class TPMGL(T), class TPMGL(U)> class Pair   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::util::Pair<TPMGL(T), TPMGL(U)>* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::util::Pair<TPMGL(T), TPMGL(U)> > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::util::Pair<TPMGL(T), TPMGL(U)> _alloc(){::x10::util::Pair<TPMGL(T), TPMGL(U)> t; return t; }
    
    TPMGL(T) FMGL(first);
    
    TPMGL(U) FMGL(second);
    
    void _constructor(TPMGL(T) first, TPMGL(U) second);
    
    static ::x10::util::Pair<TPMGL(T), TPMGL(U)> _make(TPMGL(T) first, TPMGL(U) second);
    
    ::x10::lang::String* toString();
    ::x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::util::Pair<TPMGL(T), TPMGL(U)> other);
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::util::Pair<TPMGL(T), TPMGL(U)> other);
    ::x10::util::Pair<TPMGL(T), TPMGL(U)> x10__util__Pair____this__x10__util__Pair(
      );
    void __fieldInitializers_x10_util_Pair();
    
    static void _serialize(::x10::util::Pair<TPMGL(T), TPMGL(U)> this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::util::Pair<TPMGL(T), TPMGL(U)> _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::util::Pair<TPMGL(T), TPMGL(U)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T), class TPMGL(U)> ::x10aux::RuntimeType x10::util::Pair<TPMGL(T), TPMGL(U)>::rtt;
template<class TPMGL(T), class TPMGL(U)> void x10::util::Pair<TPMGL(T), TPMGL(U)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::Pair<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[2] = { ::x10aux::getRTT<TPMGL(T)>(), ::x10aux::getRTT<TPMGL(U)>()};
    ::x10aux::RuntimeType::Variance variances[2] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.Pair";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::struct_kind, 1, parents, 2, params, variances);
}

template <> class Pair<void, void> {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_PAIR_H

namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 

#ifndef X10_UTIL_PAIR_H_NODEPS
#define X10_UTIL_PAIR_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_PAIR_H_GENERICS
#define X10_UTIL_PAIR_H_GENERICS
#endif // X10_UTIL_PAIR_H_GENERICS
#ifndef X10_UTIL_PAIR_H_IMPLEMENTATION
#define X10_UTIL_PAIR_H_IMPLEMENTATION
#include <x10/util/Pair.h>

namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair_ibox0 : public ::x10::lang::IBox< ::x10::util::Pair<TPMGL(T), TPMGL(U)> > {
public:
    static ::x10::lang::Any::itable< Pair_ibox0<TPMGL(T), TPMGL(U)> > itable;
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
template<class TPMGL(T), class TPMGL(U)> ::x10::lang::Any::itable< Pair_ibox0<TPMGL(T), TPMGL(U)> >  Pair_ibox0<TPMGL(T), TPMGL(U)>::itable(&Pair_ibox0<TPMGL(T), TPMGL(U)>::equals, &Pair_ibox0<TPMGL(T), TPMGL(U)>::hashCode, &Pair_ibox0<TPMGL(T), TPMGL(U)>::toString, &Pair_ibox0<TPMGL(T), TPMGL(U)>::typeName);
} } 
template<class TPMGL(T), class TPMGL(U)> ::x10::lang::Any::itable< ::x10::util::Pair<TPMGL(T), TPMGL(U)> >  x10::util::Pair<TPMGL(T), TPMGL(U)>::_itable_0(&x10::util::Pair<TPMGL(T), TPMGL(U)>::equals, &x10::util::Pair<TPMGL(T), TPMGL(U)>::hashCode, &x10::util::Pair<TPMGL(T), TPMGL(U)>::toString, &x10::util::Pair<TPMGL(T), TPMGL(U)>::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10::util::Pair<TPMGL(T), TPMGL(U)>::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10::util::Pair<TPMGL(T), TPMGL(U)>::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::x10::util::Pair<TPMGL(T), TPMGL(U)>")};
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10::util::Pair<TPMGL(T), TPMGL(U)>::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10::util::Pair_ibox0<TPMGL(T), TPMGL(U)>::itable), ::x10aux::itable_entry(NULL, (void*)"::x10::util::Pair<TPMGL(T), TPMGL(U)>")};

//#line 18 "x10/util/Pair.x10"

//#line 19 "x10/util/Pair.x10"

//#line 21 "x10/util/Pair.x10"
template<class TPMGL(T), class TPMGL(U)> void x10::util::Pair<TPMGL(T), TPMGL(U)>::_constructor(
                                           TPMGL(T) first, TPMGL(U) second) {
    
    //#line 17 "x10/util/Pair.x10"
    (*this)->x10::util::template Pair<TPMGL(T), TPMGL(U)>::__fieldInitializers_x10_util_Pair();
    
    //#line 22 "x10/util/Pair.x10"
    (*this)->FMGL(first) = first;
    
    //#line 23 "x10/util/Pair.x10"
    (*this)->FMGL(second) = second;
}
template<class TPMGL(T), class TPMGL(U)> ::x10::util::Pair<TPMGL(T), TPMGL(U)> x10::util::Pair<TPMGL(T), TPMGL(U)>::_make(
                                           TPMGL(T) first,
                                           TPMGL(U) second)
{
    ::x10::util::Pair<TPMGL(T), TPMGL(U)> this_; 
    this_->_constructor(first, second);
    return this_;
}



//#line 26 "x10/util/Pair.x10"
template<class TPMGL(T), class TPMGL(U)> ::x10::lang::String*
  x10::util::Pair<TPMGL(T), TPMGL(U)>::toString() {
    
    //#line 27 "x10/util/Pair.x10"
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Pair_Strings::sl__159579), (*this)->FMGL(first)), (&::x10::util::Pair_Strings::sl__159580)), (*this)->FMGL(second)), (&::x10::util::Pair_Strings::sl__159581));
    
}

//#line 17 "x10/util/Pair.x10"
template<class TPMGL(T), class TPMGL(U)> ::x10::lang::String*
  x10::util::Pair<TPMGL(T), TPMGL(U)>::typeName(){
    return ::x10aux::type_name((*this));
}
template<class TPMGL(T), class TPMGL(U)> x10_int x10::util::Pair<TPMGL(T), TPMGL(U)>::hashCode(
  ) {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(first))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(second))));
    return result;
    
}
template<class TPMGL(T), class TPMGL(U)> x10_boolean x10::util::Pair<TPMGL(T), TPMGL(U)>::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10::util::Pair<TPMGL(T), TPMGL(U)> >(other)))
    {
        return false;
        
    }
    return (*this)->x10::util::template Pair<TPMGL(T), TPMGL(U)>::equals(
             ::x10aux::class_cast< ::x10::util::Pair<TPMGL(T), TPMGL(U)> >(other));
    
}
template<class TPMGL(T), class TPMGL(U)> x10_boolean x10::util::Pair<TPMGL(T), TPMGL(U)>::equals(
  ::x10::util::Pair<TPMGL(T), TPMGL(U)> other) {
    return ((::x10aux::struct_equals((*this)->FMGL(first),
                                     other->FMGL(first))) &&
    (::x10aux::struct_equals((*this)->FMGL(second), other->FMGL(second))));
    
}
template<class TPMGL(T), class TPMGL(U)> x10_boolean x10::util::Pair<TPMGL(T), TPMGL(U)>::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10::util::Pair<TPMGL(T), TPMGL(U)> >(other)))
    {
        return false;
        
    }
    return (*this)->x10::util::template Pair<TPMGL(T), TPMGL(U)>::_struct_equals(
             ::x10aux::class_cast< ::x10::util::Pair<TPMGL(T), TPMGL(U)> >(other));
    
}
template<class TPMGL(T), class TPMGL(U)> x10_boolean x10::util::Pair<TPMGL(T), TPMGL(U)>::_struct_equals(
  ::x10::util::Pair<TPMGL(T), TPMGL(U)> other) {
    return ((::x10aux::struct_equals((*this)->FMGL(first),
                                     other->FMGL(first))) &&
    (::x10aux::struct_equals((*this)->FMGL(second), other->FMGL(second))));
    
}
template<class TPMGL(T), class TPMGL(U)> ::x10::util::Pair<TPMGL(T), TPMGL(U)>
  x10::util::Pair<TPMGL(T), TPMGL(U)>::x10__util__Pair____this__x10__util__Pair(
  ) {
    return (*this);
    
}
template<class TPMGL(T), class TPMGL(U)> void x10::util::Pair<TPMGL(T), TPMGL(U)>::__fieldInitializers_x10_util_Pair(
  ) {
 
}
template<class TPMGL(T), class TPMGL(U)> void ::x10::util::Pair<TPMGL(T), TPMGL(U)>::_serialize(::x10::util::Pair<TPMGL(T), TPMGL(U)> this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(first));
    buf.write(this_->FMGL(second));
    
}

template<class TPMGL(T), class TPMGL(U)> void ::x10::util::Pair<TPMGL(T), TPMGL(U)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(first) = buf.read<TPMGL(T)>();
    FMGL(second) = buf.read<TPMGL(U)>();
}


#endif // X10_UTIL_PAIR_H_IMPLEMENTATION
#endif // __X10_UTIL_PAIR_H_NODEPS
