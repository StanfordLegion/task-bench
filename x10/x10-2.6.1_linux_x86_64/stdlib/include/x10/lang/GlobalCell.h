#ifndef __X10_LANG_GLOBALCELL_H
#define __X10_LANG_GLOBALCELL_H

#include <x10rt.h>


#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

template<class TPMGL(T)> class GlobalCell;
template <> class GlobalCell<void>;
template<class TPMGL(T)> class GlobalCell : public ::x10::lang::X10Class 
 {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::GlobalRef< ::x10::lang::Cell<TPMGL(T)>* > FMGL(root);
    
    void _constructor(TPMGL(T) v);
    
    static ::x10::lang::GlobalCell<TPMGL(T)>* _make(TPMGL(T) v);
    
    virtual ::x10::lang::String* toString();
    virtual TPMGL(T) __apply();
    virtual void __apply(TPMGL(T) x);
    virtual void __set(TPMGL(T) x);
    virtual TPMGL(T) set(TPMGL(T) x);
    virtual ::x10::lang::GlobalCell<TPMGL(T)>* x10__lang__GlobalCell____this__x10__lang__GlobalCell(
      );
    virtual void __fieldInitializers_x10_lang_GlobalCell();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::lang::GlobalCell<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::lang::GlobalCell<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::lang::GlobalCell<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.lang.GlobalCell";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class GlobalCell<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static ::x10::lang::GlobalCell<TPMGL(T)>*
      make(TPMGL(T) x);
    
    
};

} } 
#endif // X10_LANG_GLOBALCELL_H

namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalCell;
} } 

#ifndef X10_LANG_GLOBALCELL_H_NODEPS
#define X10_LANG_GLOBALCELL_H_NODEPS
#include <x10/lang/GlobalRef.h>
#include <x10/lang/Cell.h>
#include <x10/lang/String.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_LANG_GLOBALCELL_H_GENERICS
#define X10_LANG_GLOBALCELL_H_GENERICS
#endif // X10_LANG_GLOBALCELL_H_GENERICS
#ifndef X10_LANG_GLOBALCELL_H_IMPLEMENTATION
#define X10_LANG_GLOBALCELL_H_IMPLEMENTATION
#include <x10/lang/GlobalCell.h>

#ifndef X10_LANG_GLOBALCELL__CLOSURE__1_CLOSURE
#define X10_LANG_GLOBALCELL__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_lang_GlobalCell__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0<TPMGL(T)>::template itable <x10_lang_GlobalCell__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(){
        return ::x10aux::nullCheck((saved_this->FMGL(root))->__apply())->FMGL(value);
        
    }
    
    // captured environment
    ::x10::lang::GlobalCell<TPMGL(T)>* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_GlobalCell__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_lang_GlobalCell__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalCell<TPMGL(T)>* that_saved_this = buf.read< ::x10::lang::GlobalCell<TPMGL(T)>*>();
        x10_lang_GlobalCell__closure__1<TPMGL(T) >* this_ = new (storage) x10_lang_GlobalCell__closure__1<TPMGL(T) >(that_saved_this);
        return this_;
    }
    
    x10_lang_GlobalCell__closure__1(::x10::lang::GlobalCell<TPMGL(T)>* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/lang/GlobalCell.x10:35";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0<TPMGL(T)>::template itable <x10_lang_GlobalCell__closure__1<TPMGL(T) > >x10_lang_GlobalCell__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_GlobalCell__closure__1<TPMGL(T) >::__apply, &x10_lang_GlobalCell__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_lang_GlobalCell__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(T)> >, &x10_lang_GlobalCell__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_GlobalCell__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_GlobalCell__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_LANG_GLOBALCELL__CLOSURE__1_CLOSURE
#ifndef X10_LANG_GLOBALCELL__CLOSURE__2_CLOSURE
#define X10_LANG_GLOBALCELL__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_lang_GlobalCell__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_GlobalCell__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck((saved_this->FMGL(root))->__apply())->FMGL(value) =
          x;
    }
    
    // captured environment
    ::x10::lang::GlobalCell<TPMGL(T)>* saved_this;
    TPMGL(T) x;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->x);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_GlobalCell__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_lang_GlobalCell__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalCell<TPMGL(T)>* that_saved_this = buf.read< ::x10::lang::GlobalCell<TPMGL(T)>*>();
        TPMGL(T) that_x = buf.read<TPMGL(T)>();
        x10_lang_GlobalCell__closure__2<TPMGL(T) >* this_ = new (storage) x10_lang_GlobalCell__closure__2<TPMGL(T) >(that_saved_this, that_x);
        return this_;
    }
    
    x10_lang_GlobalCell__closure__2(::x10::lang::GlobalCell<TPMGL(T)>* saved_this, TPMGL(T) x) : saved_this(saved_this), x(x) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/GlobalCell.x10:43";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_GlobalCell__closure__2<TPMGL(T) > >x10_lang_GlobalCell__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_GlobalCell__closure__2<TPMGL(T) >::__apply, &x10_lang_GlobalCell__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_lang_GlobalCell__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_GlobalCell__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_GlobalCell__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_GlobalCell__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_LANG_GLOBALCELL__CLOSURE__2_CLOSURE
#ifndef X10_LANG_GLOBALCELL__CLOSURE__3_CLOSURE
#define X10_LANG_GLOBALCELL__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_lang_GlobalCell__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_GlobalCell__closure__3<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 55 "x10/lang/GlobalCell.x10"
        ::x10aux::nullCheck((saved_this->FMGL(root))->__apply())->FMGL(value) =
          x;
    }
    
    // captured environment
    ::x10::lang::GlobalCell<TPMGL(T)>* saved_this;
    TPMGL(T) x;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->x);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_GlobalCell__closure__3<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_lang_GlobalCell__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalCell<TPMGL(T)>* that_saved_this = buf.read< ::x10::lang::GlobalCell<TPMGL(T)>*>();
        TPMGL(T) that_x = buf.read<TPMGL(T)>();
        x10_lang_GlobalCell__closure__3<TPMGL(T) >* this_ = new (storage) x10_lang_GlobalCell__closure__3<TPMGL(T) >(that_saved_this, that_x);
        return this_;
    }
    
    x10_lang_GlobalCell__closure__3(::x10::lang::GlobalCell<TPMGL(T)>* saved_this, TPMGL(T) x) : saved_this(saved_this), x(x) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/lang/GlobalCell.x10:54-56";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_lang_GlobalCell__closure__3<TPMGL(T) > >x10_lang_GlobalCell__closure__3<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_GlobalCell__closure__3<TPMGL(T) >::__apply, &x10_lang_GlobalCell__closure__3<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_lang_GlobalCell__closure__3<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_lang_GlobalCell__closure__3<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_GlobalCell__closure__3<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_GlobalCell__closure__3<TPMGL(T) >::_deserialize);

#endif // X10_LANG_GLOBALCELL__CLOSURE__3_CLOSURE

//#line 16 "x10/lang/GlobalCell.x10"

//#line 17 "x10/lang/GlobalCell.x10"
template<class TPMGL(T)> void x10::lang::GlobalCell<TPMGL(T)>::_constructor(
                           TPMGL(T) v) {
    
    //#line 18 "x10/lang/GlobalCell.x10"
    this->FMGL(root) = ::x10::lang::GlobalRef< ::x10::lang::Cell<TPMGL(T)>* >((__extension__ ({
        ::x10::lang::Cell<TPMGL(T)>* alloc__121024 =  (new (::x10aux::alloc_z< ::x10::lang::Cell<TPMGL(T)> >()) ::x10::lang::Cell<TPMGL(T)>());
        
        //#line 33 "x10/lang/Cell.x10"
        alloc__121024->FMGL(value) = v;
        alloc__121024;
    }))
    );
}
template<class TPMGL(T)> ::x10::lang::GlobalCell<TPMGL(T)>* x10::lang::GlobalCell<TPMGL(T)>::_make(
                           TPMGL(T) v) {
    ::x10::lang::GlobalCell<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::lang::GlobalCell<TPMGL(T)> >()) ::x10::lang::GlobalCell<TPMGL(T)>();
    this_->_constructor(v);
    return this_;
}



//#line 26 "x10/lang/GlobalCell.x10"
/**
     * Return a string representation of the GlobalCell.
     * 
     */
template<class TPMGL(T)> ::x10::lang::String* x10::lang::GlobalCell<TPMGL(T)>::toString(
  ) {
    return (this->FMGL(root))->toString();
    
}

//#line 35 "x10/lang/GlobalCell.x10"
/**
     * Return the value stored in the Cell.
     * Will work even if the Cell reference is remote.
     *
     * @return the current value stored in the Cell.
     */
template<class TPMGL(T)> TPMGL(T) x10::lang::GlobalCell<TPMGL(T)>::__apply(
  ) {
    return ::x10::xrx::Runtime::template evalAt< TPMGL(T) >(
             ::x10::lang::Place::_make(((x10_long)((this->FMGL(root))->location))),
             reinterpret_cast< ::x10::lang::Fun_0_0<TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<TPMGL(T)> >(sizeof(x10_lang_GlobalCell__closure__1<TPMGL(T)>)))x10_lang_GlobalCell__closure__1<TPMGL(T)>(this))),
             ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 43 "x10/lang/GlobalCell.x10"
/**
     * Set the value stored in the Cell to the new value.
     * Will work even if the Cell reference is remote.
     *
     * @param x the new value
     */
template<class TPMGL(T)> void x10::lang::GlobalCell<TPMGL(T)>::__apply(
  TPMGL(T) x) {
    {
        ::x10::xrx::Runtime::runAt(::x10::lang::Place::_make(((x10_long)((this->FMGL(root))->location))),
                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_GlobalCell__closure__2<TPMGL(T)>)))x10_lang_GlobalCell__closure__2<TPMGL(T)>(this, x))),
                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
}

//#line 52 "x10/lang/GlobalCell.x10"
/**
     * Set the value stored in the Cell to the new value.
     * Will work even if the Cell reference is remote.
     *
     * @param x the new value
     * @return the new value stored in the Cell.
     */
template<class TPMGL(T)> void x10::lang::GlobalCell<TPMGL(T)>::__set(
  TPMGL(T) x) {
    this->set(x);
}

//#line 53 "x10/lang/GlobalCell.x10"
template<class TPMGL(T)> TPMGL(T) x10::lang::GlobalCell<TPMGL(T)>::set(
  TPMGL(T) x) {
    {
        
        //#line 54 "x10/lang/GlobalCell.x10"
        ::x10::xrx::Runtime::runAt(::x10::lang::Place::_make(((x10_long)((this->FMGL(root))->location))),
                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_lang_GlobalCell__closure__3<TPMGL(T)>)))x10_lang_GlobalCell__closure__3<TPMGL(T)>(this, x))),
                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    //#line 57 "x10/lang/GlobalCell.x10"
    return x;
    
}

//#line 67 "x10/lang/GlobalCell.x10"
/**
     * Create a new Cell with the given value stored in it.
     *
     * @param T the value type of the Cell
     * @param x the given value
     * @return a new Cell with the given value stored in it.
     */

//#line 14 "x10/lang/GlobalCell.x10"
template<class TPMGL(T)> ::x10::lang::GlobalCell<TPMGL(T)>*
  x10::lang::GlobalCell<TPMGL(T)>::x10__lang__GlobalCell____this__x10__lang__GlobalCell(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::lang::GlobalCell<TPMGL(T)>::__fieldInitializers_x10_lang_GlobalCell(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::lang::GlobalCell<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::lang::GlobalCell<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::lang::GlobalCell<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(root));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::lang::GlobalCell<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::lang::GlobalCell<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::lang::GlobalCell<TPMGL(T)> >()) ::x10::lang::GlobalCell<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::lang::GlobalCell<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(root) = buf.read< ::x10::lang::GlobalRef< ::x10::lang::Cell<TPMGL(T)>* > >();
}

template<class TPMGL(T)> ::x10::lang::GlobalCell<TPMGL(T)>*
  x10::lang::GlobalCell<void>::make(TPMGL(T) x) {
    
    //#line 67 "x10/lang/GlobalCell.x10"
    ::x10::lang::GlobalCell<TPMGL(T)>* alloc__121033 =  (new (::x10aux::alloc_z< ::x10::lang::GlobalCell<TPMGL(T)> >()) ::x10::lang::GlobalCell<TPMGL(T)>());
    (alloc__121033)->::x10::lang::GlobalCell<TPMGL(T)>::_constructor(
      x);
    return alloc__121033;
    
}
#endif // X10_LANG_GLOBALCELL_H_IMPLEMENTATION
#endif // __X10_LANG_GLOBALCELL_H_NODEPS
