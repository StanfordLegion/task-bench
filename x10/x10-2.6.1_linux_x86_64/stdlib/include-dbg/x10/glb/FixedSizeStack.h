#ifndef __X10_GLB_FIXEDSIZESTACK_H
#define __X10_GLB_FIXEDSIZESTACK_H

#include <x10rt.h>


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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace glb { 

template<class TPMGL(T)> class FixedSizeStack;
template <> class FixedSizeStack<void>;
template<class TPMGL(T)> class FixedSizeStack : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< TPMGL(T) >* FMGL(data);
    
    x10_long FMGL(size);
    
    void _constructor(x10_long n);
    
    static ::x10::glb::FixedSizeStack<TPMGL(T)>* _make(x10_long n);
    
    virtual TPMGL(T) pop();
    virtual void push(TPMGL(T) t);
    virtual x10_long size();
    virtual ::x10::glb::FixedSizeStack<TPMGL(T)>* x10__glb__FixedSizeStack____this__x10__glb__FixedSizeStack(
      );
    virtual void __fieldInitializers_x10_glb_FixedSizeStack();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::glb::FixedSizeStack<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::glb::FixedSizeStack<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::glb::FixedSizeStack<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.glb.FixedSizeStack";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class FixedSizeStack<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_GLB_FIXEDSIZESTACK_H

namespace x10 { namespace glb { 
template<class TPMGL(T)> class FixedSizeStack;
} } 

#ifndef X10_GLB_FIXEDSIZESTACK_H_NODEPS
#define X10_GLB_FIXEDSIZESTACK_H_NODEPS
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Inline.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_GLB_FIXEDSIZESTACK_H_GENERICS
#define X10_GLB_FIXEDSIZESTACK_H_GENERICS
#endif // X10_GLB_FIXEDSIZESTACK_H_GENERICS
#ifndef X10_GLB_FIXEDSIZESTACK_H_IMPLEMENTATION
#define X10_GLB_FIXEDSIZESTACK_H_IMPLEMENTATION
#include <x10/glb/FixedSizeStack.h>


//#line 25 "x10/glb/FixedSizeStack.x10"
/**
     * Backing Rail.
     */

//#line 29 "x10/glb/FixedSizeStack.x10"
/**
     * Number of elements in the stack.
     */

//#line 35 "x10/glb/FixedSizeStack.x10"
/**
     * Constructor
     * @param n size of the backing Rail.
     */
template<class TPMGL(T)> void x10::glb::FixedSizeStack<TPMGL(T)>::_constructor(
                           x10_long n) {
    
    //#line 20 "x10/glb/FixedSizeStack.x10"
    this->x10::glb::template FixedSizeStack<TPMGL(T)>::__fieldInitializers_x10_glb_FixedSizeStack();
    
    //#line 36 "x10/glb/FixedSizeStack.x10"
    this->FMGL(data) = ::x10::lang::Rail< TPMGL(T) >::_make(n);
    
    //#line 37 "x10/glb/FixedSizeStack.x10"
    this->FMGL(size) = ((x10_long)0ll);
}
template<class TPMGL(T)> ::x10::glb::FixedSizeStack<TPMGL(T)>* x10::glb::FixedSizeStack<TPMGL(T)>::_make(
                           x10_long n) {
    ::x10::glb::FixedSizeStack<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::glb::FixedSizeStack<TPMGL(T)> >()) ::x10::glb::FixedSizeStack<TPMGL(T)>();
    this_->_constructor(n);
    return this_;
}



//#line 44 "x10/glb/FixedSizeStack.x10"
/**
     * Pop method, returns the top of the stack
     * @return top of the stack
     */
template<class TPMGL(T)> TPMGL(T) x10::glb::FixedSizeStack<TPMGL(T)>::pop(
  ) {
    return ::x10aux::nullCheck(this->FMGL(data))->x10::lang::template Rail< TPMGL(T) >::__apply(
             this->FMGL(size) = ((this->FMGL(size)) - (((x10_long)1ll))));
    
}

//#line 49 "x10/glb/FixedSizeStack.x10"
/**
     * Push method, pushes the element on top of the stack
     */
template<class TPMGL(T)> void x10::glb::FixedSizeStack<TPMGL(T)>::push(
  TPMGL(T) t) {
    ::x10aux::nullCheck(this->FMGL(data))->x10::lang::template Rail< TPMGL(T) >::__set(
      ((this->FMGL(size) = ((this->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
      t);
}

//#line 55 "x10/glb/FixedSizeStack.x10"
/**
     * Returns the number of elements in the stack
     * @return number of elements in the stack
     */
template<class TPMGL(T)> x10_long x10::glb::FixedSizeStack<TPMGL(T)>::size(
  ) {
    return this->FMGL(size);
    
}

//#line 20 "x10/glb/FixedSizeStack.x10"
template<class TPMGL(T)> ::x10::glb::FixedSizeStack<TPMGL(T)>*
  x10::glb::FixedSizeStack<TPMGL(T)>::x10__glb__FixedSizeStack____this__x10__glb__FixedSizeStack(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::glb::FixedSizeStack<TPMGL(T)>::__fieldInitializers_x10_glb_FixedSizeStack(
  ) {
    this->FMGL(size) = ((x10_long)0ll);
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::glb::FixedSizeStack<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::glb::FixedSizeStack<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::glb::FixedSizeStack<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(data));
    buf.write(this->FMGL(size));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::glb::FixedSizeStack<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::glb::FixedSizeStack<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::glb::FixedSizeStack<TPMGL(T)> >()) ::x10::glb::FixedSizeStack<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::glb::FixedSizeStack<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(data) = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
    FMGL(size) = buf.read<x10_long>();
}

#endif // X10_GLB_FIXEDSIZESTACK_H_IMPLEMENTATION
#endif // __X10_GLB_FIXEDSIZESTACK_H_NODEPS
