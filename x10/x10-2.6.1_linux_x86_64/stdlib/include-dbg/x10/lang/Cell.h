#ifndef __X10_LANG_CELL_H
#define __X10_LANG_CELL_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class Cell_Strings {
  public:
    static ::x10::lang::String sl__154824;
    static ::x10::lang::String sl__154823;
    static ::x10::lang::String sl__154825;
};

template<class TPMGL(T)> class Cell;
template <> class Cell<void>;
template<class TPMGL(T)> class Cell : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    TPMGL(T) FMGL(value);
    
    void _constructor(TPMGL(T) x);
    
    static ::x10::lang::Cell<TPMGL(T)>* _make(TPMGL(T) x);
    
    virtual ::x10::lang::String* toString();
    virtual TPMGL(T) __apply();
    virtual void __apply(TPMGL(T) x);
    virtual void __set(TPMGL(T) x);
    virtual TPMGL(T) set(TPMGL(T) x);
    virtual ::x10::lang::Cell<TPMGL(T)>* x10__lang__Cell____this__x10__lang__Cell(
      );
    virtual void __fieldInitializers_x10_lang_Cell();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::lang::Cell<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::lang::Cell<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::lang::Cell<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.lang.Cell";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class Cell<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static ::x10::lang::Cell<TPMGL(T)>* make(
      TPMGL(T) x);
    
    template<class TPMGL(W)> static ::x10::lang::Cell<TPMGL(W)>* __implicit_convert(
      TPMGL(W) x);
    
    
};

} } 
#endif // X10_LANG_CELL_H

namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 

#ifndef X10_LANG_CELL_H_NODEPS
#define X10_LANG_CELL_H_NODEPS
#include <x10/lang/String.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_LANG_CELL_H_GENERICS
#define X10_LANG_CELL_H_GENERICS
#endif // X10_LANG_CELL_H_GENERICS
#ifndef X10_LANG_CELL_H_IMPLEMENTATION
#define X10_LANG_CELL_H_IMPLEMENTATION
#include <x10/lang/Cell.h>


//#line 26 "x10/lang/Cell.x10"
/**
     * The value stored in this cell.
     */

//#line 33 "x10/lang/Cell.x10"
/**
     * Construct a cell with the given value.
     *
     * @param x the given value
     */
template<class TPMGL(T)> void x10::lang::Cell<TPMGL(T)>::_constructor(TPMGL(T) x) {
    
    //#line 21 "x10/lang/Cell.x10"
    this->x10::lang::template Cell<TPMGL(T)>::__fieldInitializers_x10_lang_Cell();
    
    //#line 33 "x10/lang/Cell.x10"
    this->FMGL(value) = x;
}
template<class TPMGL(T)> ::x10::lang::Cell<TPMGL(T)>* x10::lang::Cell<TPMGL(T)>::_make(
                           TPMGL(T) x) {
    ::x10::lang::Cell<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::lang::Cell<TPMGL(T)> >()) ::x10::lang::Cell<TPMGL(T)>();
    this_->_constructor(x);
    return this_;
}



//#line 38 "x10/lang/Cell.x10"
/**
     * Return a string representation of the Cell.
     */
template<class TPMGL(T)> ::x10::lang::String* x10::lang::Cell<TPMGL(T)>::toString(
  ) {
    
    //#line 39 "x10/lang/Cell.x10"
    return ::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::lang::Cell_Strings::sl__154823), (::x10aux::struct_equals(this->FMGL(value),
                                                                                                                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))
      ? ((&::x10::lang::Cell_Strings::sl__154824)) : (::x10aux::to_string(this->FMGL(value)))), (&::x10::lang::Cell_Strings::sl__154825));
    
}

//#line 48 "x10/lang/Cell.x10"
/**
     * Return the value stored in the Cell.
     *
     * @return the current value stored in the Cell.
     */
template<class TPMGL(T)> TPMGL(T) x10::lang::Cell<TPMGL(T)>::__apply(
  ) {
    return this->FMGL(value);
    
}

//#line 55 "x10/lang/Cell.x10"
/**
     * Set the value stored in the Cell to the new value.
     *
     * @param x the new value
     */
template<class TPMGL(T)> void x10::lang::Cell<TPMGL(T)>::__apply(
  TPMGL(T) x) {
    this->FMGL(value) = x;
}

//#line 63 "x10/lang/Cell.x10"
/**
     * Set the value stored in the Cell to the new value.
     *
     * @param x the new value
     * @return the new value stored in the Cell.
     */
template<class TPMGL(T)> void x10::lang::Cell<TPMGL(T)>::__set(
  TPMGL(T) x) {
    this->x10::lang::template Cell<TPMGL(T)>::set(x);
}

//#line 64 "x10/lang/Cell.x10"
template<class TPMGL(T)> TPMGL(T) x10::lang::Cell<TPMGL(T)>::set(
  TPMGL(T) x) {
    this->FMGL(value) = x;
    return x;
    
}

//#line 74 "x10/lang/Cell.x10"
/**
     * Create a new Cell with the given value stored in it.
     *
     * @param T the value type of the Cell
     * @param x the given value
     * @return a new Cell with the given value stored in it.
     */

//#line 83 "x10/lang/Cell.x10"
/**
     * Create a new Cell with the given value stored in it.
     *
     * @param T the value type of the Cell
     * @param x the given value
     * @return a new Cell with the given value stored in it.
     */

//#line 21 "x10/lang/Cell.x10"
template<class TPMGL(T)> ::x10::lang::Cell<TPMGL(T)>* x10::lang::Cell<TPMGL(T)>::x10__lang__Cell____this__x10__lang__Cell(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::lang::Cell<TPMGL(T)>::__fieldInitializers_x10_lang_Cell(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::lang::Cell<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::lang::Cell<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::lang::Cell<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(value));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::lang::Cell<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::lang::Cell<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::lang::Cell<TPMGL(T)> >()) ::x10::lang::Cell<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::lang::Cell<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(value) = buf.read<TPMGL(T)>();
}

template<class TPMGL(T)> ::x10::lang::Cell<TPMGL(T)>* x10::lang::Cell<void>::make(TPMGL(T) x) {
    
    //#line 74 "x10/lang/Cell.x10"
    return ::x10::lang::Cell<TPMGL(T)>::_make(x);
    
}
template<class TPMGL(W)> ::x10::lang::Cell<TPMGL(W)>* x10::lang::Cell<void>::__implicit_convert(TPMGL(W) x) {
    
    //#line 83 "x10/lang/Cell.x10"
    return ::x10::lang::Cell<void>::template make< TPMGL(W) >(
             x);
    
}
#endif // X10_LANG_CELL_H_IMPLEMENTATION
#endif // __X10_LANG_CELL_H_NODEPS
