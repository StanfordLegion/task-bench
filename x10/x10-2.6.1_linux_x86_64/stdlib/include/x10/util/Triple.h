#ifndef __X10_UTIL_TRIPLE_H
#define __X10_UTIL_TRIPLE_H

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

class Triple_Strings {
  public:
    static ::x10::lang::String sl__171479;
    static ::x10::lang::String sl__171478;
    static ::x10::lang::String sl__171480;
};

template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> class Triple   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> _alloc(){::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> t; return t; }
    
    TPMGL(T) FMGL(first);
    
    TPMGL(U) FMGL(second);
    
    TPMGL(V) FMGL(third);
    
    void _constructor(TPMGL(T) first, TPMGL(U) second, TPMGL(V) third);
    
    static ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> _make(TPMGL(T) first,
                                                                   TPMGL(U) second,
                                                                   TPMGL(V) third);
    
    ::x10::lang::String* toString();
    ::x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> other);
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> other);
    ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> x10__util__Triple____this__x10__util__Triple(
      );
    void __fieldInitializers_x10_util_Triple();
    
    static void _serialize(::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> ::x10aux::RuntimeType x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::rtt;
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> void x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::Triple<void, void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    const ::x10aux::RuntimeType* params[3] = { ::x10aux::getRTT<TPMGL(T)>(), ::x10aux::getRTT<TPMGL(U)>(), ::x10aux::getRTT<TPMGL(V)>()};
    ::x10aux::RuntimeType::Variance variances[3] = { ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant, ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.Triple";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::struct_kind, 1, parents, 3, params, variances);
}

template <> class Triple<void, void, void> {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_TRIPLE_H

namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> class Triple;
} } 

#ifndef X10_UTIL_TRIPLE_H_NODEPS
#define X10_UTIL_TRIPLE_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_TRIPLE_H_GENERICS
#define X10_UTIL_TRIPLE_H_GENERICS
#endif // X10_UTIL_TRIPLE_H_GENERICS
#ifndef X10_UTIL_TRIPLE_H_IMPLEMENTATION
#define X10_UTIL_TRIPLE_H_IMPLEMENTATION
#include <x10/util/Triple.h>

namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> class Triple_ibox0 : public ::x10::lang::IBox< ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> > {
public:
    static ::x10::lang::Any::itable< Triple_ibox0<TPMGL(T), TPMGL(U), TPMGL(V)> > itable;
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
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> ::x10::lang::Any::itable< Triple_ibox0<TPMGL(T), TPMGL(U), TPMGL(V)> >  Triple_ibox0<TPMGL(T), TPMGL(U), TPMGL(V)>::itable(&Triple_ibox0<TPMGL(T), TPMGL(U), TPMGL(V)>::equals, &Triple_ibox0<TPMGL(T), TPMGL(U), TPMGL(V)>::hashCode, &Triple_ibox0<TPMGL(T), TPMGL(U), TPMGL(V)>::toString, &Triple_ibox0<TPMGL(T), TPMGL(U), TPMGL(V)>::typeName);
} } 
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> ::x10::lang::Any::itable< ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> >  x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::_itable_0(&x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::equals, &x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::hashCode, &x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::toString, &x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::typeName);
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> ::x10aux::itable_entry x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>")};
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> ::x10aux::itable_entry x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &x10::util::Triple_ibox0<TPMGL(T), TPMGL(U), TPMGL(V)>::itable), ::x10aux::itable_entry(NULL, (void*)"::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>")};

//#line 18 "x10/util/Triple.x10"

//#line 19 "x10/util/Triple.x10"

//#line 20 "x10/util/Triple.x10"

//#line 22 "x10/util/Triple.x10"
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> void x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::_constructor(
                                                           TPMGL(T) first,
                                                           TPMGL(U) second,
                                                           TPMGL(V) third) {
    
    //#line 23 "x10/util/Triple.x10"
    (*this)->FMGL(first) = first;
    
    //#line 24 "x10/util/Triple.x10"
    (*this)->FMGL(second) = second;
    
    //#line 25 "x10/util/Triple.x10"
    (*this)->FMGL(third) = third;
}
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::_make(
                                                           TPMGL(T) first,
                                                           TPMGL(U) second,
                                                           TPMGL(V) third)
{
    ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> this_; 
    this_->_constructor(first, second, third);
    return this_;
}



//#line 28 "x10/util/Triple.x10"
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> ::x10::lang::String*
  x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::toString(
  ) {
    
    //#line 29 "x10/util/Triple.x10"
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Triple_Strings::sl__171478), (*this)->FMGL(first)), (&::x10::util::Triple_Strings::sl__171479)), (*this)->FMGL(second)), (&::x10::util::Triple_Strings::sl__171479)), (*this)->FMGL(third)), (&::x10::util::Triple_Strings::sl__171480));
    
}

//#line 17 "x10/util/Triple.x10"
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> ::x10::lang::String*
  x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::typeName(
  ){
    return ::x10aux::type_name((*this));
}
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> x10_int
  x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::hashCode(
  ) {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(first))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(second))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(third))));
    return result;
    
}
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> x10_boolean
  x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> >(other)))
    {
        return false;
        
    }
    return (*this)->x10::util::template Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::equals(
             ::x10aux::class_cast< ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> >(other));
    
}
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> x10_boolean
  x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::equals(
  ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> other) {
    return (((::x10aux::struct_equals((*this)->FMGL(first),
                                      other->FMGL(first))) &&
    (::x10aux::struct_equals((*this)->FMGL(second), other->FMGL(second)))) &&
    (::x10aux::struct_equals((*this)->FMGL(third), other->FMGL(third))));
    
}
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> x10_boolean
  x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> >(other)))
    {
        return false;
        
    }
    return (*this)->x10::util::template Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::_struct_equals(
             ::x10aux::class_cast< ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> >(other));
    
}
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> x10_boolean
  x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::_struct_equals(
  ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> other) {
    return (((::x10aux::struct_equals((*this)->FMGL(first),
                                      other->FMGL(first))) &&
    (::x10aux::struct_equals((*this)->FMGL(second), other->FMGL(second)))) &&
    (::x10aux::struct_equals((*this)->FMGL(third), other->FMGL(third))));
    
}
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>
  x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::x10__util__Triple____this__x10__util__Triple(
  ) {
    return (*this);
    
}
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> void
  x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::__fieldInitializers_x10_util_Triple(
  ) {
 
}
template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> void ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::_serialize(::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)> this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(first));
    buf.write(this_->FMGL(second));
    buf.write(this_->FMGL(third));
    
}

template<class TPMGL(T), class TPMGL(U), class TPMGL(V)> void ::x10::util::Triple<TPMGL(T), TPMGL(U), TPMGL(V)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(first) = buf.read<TPMGL(T)>();
    FMGL(second) = buf.read<TPMGL(U)>();
    FMGL(third) = buf.read<TPMGL(V)>();
}


#endif // X10_UTIL_TRIPLE_H_IMPLEMENTATION
#endif // __X10_UTIL_TRIPLE_H_NODEPS
