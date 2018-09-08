#ifndef __X10_UTIL_RAILBUILDER_H
#define __X10_UTIL_RAILBUILDER_H

#include <x10rt.h>


#define X10_UTIL_BUILDER_H_NODEPS
#include <x10/util/Builder.h>
#undef X10_UTIL_BUILDER_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

template<class TPMGL(T)> class RailBuilder;
template <> class RailBuilder<void>;
template<class TPMGL(T)> class RailBuilder : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::util::Builder<TPMGL(T), ::x10::lang::Rail< TPMGL(T) >*>::template itable< ::x10::util::RailBuilder<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::util::RailBuilder<TPMGL(T)> > _itable_1;
    
    ::x10::util::GrowableRail<TPMGL(T)>* FMGL(buf);
    
    void _constructor();
    
    static ::x10::util::RailBuilder<TPMGL(T)>* _make();
    
    void _constructor(x10_long size);
    
    static ::x10::util::RailBuilder<TPMGL(T)>* _make(x10_long size);
    
    virtual ::x10::util::Builder<TPMGL(T), ::x10::lang::Rail< TPMGL(T) >*>*
      add(TPMGL(T) x);
    virtual ::x10::util::RailBuilder<TPMGL(T)>* insert(x10_long loc, ::x10::lang::Rail< TPMGL(T) >* items);
    virtual x10_long length();
    virtual ::x10::lang::Rail< TPMGL(T) >* result();
    virtual ::x10::util::RailBuilder<TPMGL(T)>* x10__util__RailBuilder____this__x10__util__RailBuilder(
      );
    virtual void __fieldInitializers_x10_util_RailBuilder();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::RailBuilder<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::RailBuilder<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::RailBuilder<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::util::Builder<TPMGL(T), ::x10::lang::Rail< TPMGL(T) >*> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.RailBuilder";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class RailBuilder<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_RAILBUILDER_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class RailBuilder;
} } 

#ifndef X10_UTIL_RAILBUILDER_H_NODEPS
#define X10_UTIL_RAILBUILDER_H_NODEPS
#include <x10/util/Builder.h>
#include <x10/lang/Rail.h>
#include <x10/util/GrowableRail.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_RAILBUILDER_H_GENERICS
#define X10_UTIL_RAILBUILDER_H_GENERICS
#endif // X10_UTIL_RAILBUILDER_H_GENERICS
#ifndef X10_UTIL_RAILBUILDER_H_IMPLEMENTATION
#define X10_UTIL_RAILBUILDER_H_IMPLEMENTATION
#include <x10/util/RailBuilder.h>

template<class TPMGL(T)> typename ::x10::util::Builder<TPMGL(T), ::x10::lang::Rail< TPMGL(T) >*>::template itable< ::x10::util::RailBuilder<TPMGL(T)> >  x10::util::RailBuilder<TPMGL(T)>::_itable_0(&x10::util::RailBuilder<TPMGL(T)>::add, &::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::util::RailBuilder<TPMGL(T)>::result, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::util::RailBuilder<TPMGL(T)> >  x10::util::RailBuilder<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::util::RailBuilder<TPMGL(T)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::util::Builder<TPMGL(T), ::x10::lang::Rail< TPMGL(T) >*> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::util::RailBuilder<TPMGL(T)>")};

//#line 15 "x10/util/RailBuilder.x10"

//#line 17 "x10/util/RailBuilder.x10"
template<class TPMGL(T)> void x10::util::RailBuilder<TPMGL(T)>::_constructor(
                           ) {
    
    //#line 14 "x10/util/RailBuilder.x10"
    this->x10::util::template RailBuilder<TPMGL(T)>::__fieldInitializers_x10_util_RailBuilder();
    
    //#line 18 "x10/util/RailBuilder.x10"
    this->FMGL(buf) = ::x10::util::GrowableRail<TPMGL(T)>::_make();
}
template<class TPMGL(T)> ::x10::util::RailBuilder<TPMGL(T)>* x10::util::RailBuilder<TPMGL(T)>::_make(
                           ) {
    ::x10::util::RailBuilder<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::RailBuilder<TPMGL(T)> >()) ::x10::util::RailBuilder<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 21 "x10/util/RailBuilder.x10"
template<class TPMGL(T)> void x10::util::RailBuilder<TPMGL(T)>::_constructor(
                           x10_long size) {
    
    //#line 14 "x10/util/RailBuilder.x10"
    this->x10::util::template RailBuilder<TPMGL(T)>::__fieldInitializers_x10_util_RailBuilder();
    
    //#line 22 "x10/util/RailBuilder.x10"
    this->FMGL(buf) = ::x10::util::GrowableRail<TPMGL(T)>::_make(size);
}
template<class TPMGL(T)> ::x10::util::RailBuilder<TPMGL(T)>* x10::util::RailBuilder<TPMGL(T)>::_make(
                           x10_long size) {
    ::x10::util::RailBuilder<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::RailBuilder<TPMGL(T)> >()) ::x10::util::RailBuilder<TPMGL(T)>();
    this_->_constructor(size);
    return this_;
}



//#line 25 "x10/util/RailBuilder.x10"
template<class TPMGL(T)> ::x10::util::Builder<TPMGL(T), ::x10::lang::Rail< TPMGL(T) >*>*
  x10::util::RailBuilder<TPMGL(T)>::add(TPMGL(T) x) {
    
    //#line 26 "x10/util/RailBuilder.x10"
    ::x10aux::nullCheck(this->FMGL(buf))->x10::util::template GrowableRail<TPMGL(T)>::add(
      x);
    
    //#line 27 "x10/util/RailBuilder.x10"
    return reinterpret_cast< ::x10::util::Builder<TPMGL(T), ::x10::lang::Rail< TPMGL(T) >*>*>(this);
    
}

//#line 30 "x10/util/RailBuilder.x10"
template<class TPMGL(T)> ::x10::util::RailBuilder<TPMGL(T)>*
  x10::util::RailBuilder<TPMGL(T)>::insert(x10_long loc, ::x10::lang::Rail< TPMGL(T) >* items) {
    
    //#line 31 "x10/util/RailBuilder.x10"
    ::x10aux::nullCheck(this->FMGL(buf))->x10::util::template GrowableRail<TPMGL(T)>::insert(
      loc, items);
    
    //#line 32 "x10/util/RailBuilder.x10"
    return this;
    
}

//#line 35 "x10/util/RailBuilder.x10"
template<class TPMGL(T)> x10_long x10::util::RailBuilder<TPMGL(T)>::length(
  ) {
    
    //#line 36 "x10/util/RailBuilder.x10"
    return ::x10aux::nullCheck(this->FMGL(buf))->x10::util::template GrowableRail<TPMGL(T)>::size();
    
}

//#line 39 "x10/util/RailBuilder.x10"
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::util::RailBuilder<TPMGL(T)>::result(
  ) {
    
    //#line 40 "x10/util/RailBuilder.x10"
    return ::x10aux::nullCheck(this->FMGL(buf))->x10::util::template GrowableRail<TPMGL(T)>::toRail();
    
}

//#line 14 "x10/util/RailBuilder.x10"
template<class TPMGL(T)> ::x10::util::RailBuilder<TPMGL(T)>*
  x10::util::RailBuilder<TPMGL(T)>::x10__util__RailBuilder____this__x10__util__RailBuilder(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::RailBuilder<TPMGL(T)>::__fieldInitializers_x10_util_RailBuilder(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::RailBuilder<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::RailBuilder<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::util::RailBuilder<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(buf));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::util::RailBuilder<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::RailBuilder<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::RailBuilder<TPMGL(T)> >()) ::x10::util::RailBuilder<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::util::RailBuilder<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(buf) = buf.read< ::x10::util::GrowableRail<TPMGL(T)>*>();
}

#endif // X10_UTIL_RAILBUILDER_H_IMPLEMENTATION
#endif // __X10_UTIL_RAILBUILDER_H_NODEPS
