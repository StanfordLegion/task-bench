#ifndef __X10_LANG_GLOBALREF__LOCALEVAL_H
#define __X10_LANG_GLOBALREF__LOCALEVAL_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class GlobalRef__LocalEval : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    template<class TPMGL(T), class TPMGL(U)> static TPMGL(U) evalAtHome(::x10::lang::GlobalRef< TPMGL(T) > ref,
                                                                        ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* eval);
    template<class TPMGL(T)> static TPMGL(T) getLocalOrCopy(::x10::lang::GlobalRef< TPMGL(T) > ref);
    virtual ::x10::lang::GlobalRef__LocalEval* x10__lang__GlobalRef__LocalEval____this__x10__lang__GlobalRef__LocalEval(
      );
    void _constructor();
    
    static ::x10::lang::GlobalRef__LocalEval* _make();
    
    virtual void __fieldInitializers_x10_lang_GlobalRef_LocalEval(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_LANG_GLOBALREF__LOCALEVAL_H

namespace x10 { namespace lang { 
class GlobalRef__LocalEval;
} } 

#ifndef X10_LANG_GLOBALREF__LOCALEVAL_H_NODEPS
#define X10_LANG_GLOBALREF__LOCALEVAL_H_NODEPS
#include <x10/lang/GlobalRef.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_LANG_GLOBALREF__LOCALEVAL__CLOSURE__1_CLOSURE
#define X10_LANG_GLOBALREF__LOCALEVAL__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T), class TPMGL(U)> class x10_lang_GlobalRef__LocalEval__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0<TPMGL(U)>::template itable <x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(U) __apply(){
        return ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(eval), 
          (ref)->__apply());
        
    }
    
    // captured environment
    ::x10::lang::GlobalRef< TPMGL(T) > ref;
    ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* eval;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->ref);
        buf.write(this->eval);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) >* storage = ::x10aux::alloc_z<x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< TPMGL(T) > that_ref = buf.read< ::x10::lang::GlobalRef< TPMGL(T) > >();
        ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* that_eval = buf.read< ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>*>();
        x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) >* this_ = new (storage) x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) >(that_ref, that_eval);
        return this_;
    }
    
    x10_lang_GlobalRef__LocalEval__closure__1(::x10::lang::GlobalRef< TPMGL(T) > ref, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* eval) : ref(ref), eval(eval) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(U)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(U)> >(); }
    
    const char* toNativeString() {
        return "x10/lang/GlobalRef.x10:134";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename ::x10::lang::Fun_0_0<TPMGL(U)>::template itable <x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) > >x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) >::__apply, &x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> ::x10aux::itable_entry x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(U)> >, &x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const ::x10aux::serialization_id_t x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U) >::_deserialize);

#endif // X10_LANG_GLOBALREF__LOCALEVAL__CLOSURE__1_CLOSURE
#ifndef X10_LANG_GLOBALREF__LOCALEVAL__CLOSURE__2_CLOSURE
#define X10_LANG_GLOBALREF__LOCALEVAL__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_lang_GlobalRef__LocalEval__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0<TPMGL(T)>::template itable <x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(){
        return (ref)->__apply();
        
    }
    
    // captured environment
    ::x10::lang::GlobalRef< TPMGL(T) > ref;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->ref);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< TPMGL(T) > that_ref = buf.read< ::x10::lang::GlobalRef< TPMGL(T) > >();
        x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) >* this_ = new (storage) x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) >(that_ref);
        return this_;
    }
    
    x10_lang_GlobalRef__LocalEval__closure__2(::x10::lang::GlobalRef< TPMGL(T) > ref) : ref(ref) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/lang/GlobalRef.x10:152";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0<TPMGL(T)>::template itable <x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) > >x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) >::__apply, &x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<TPMGL(T)> >, &x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_LANG_GLOBALREF__LOCALEVAL__CLOSURE__2_CLOSURE
#ifndef X10_LANG_GLOBALREF__LOCALEVAL_H_GENERICS
#define X10_LANG_GLOBALREF__LOCALEVAL_H_GENERICS
#ifndef X10_LANG_GLOBALREF__LOCALEVAL_H_evalAtHome_956
#define X10_LANG_GLOBALREF__LOCALEVAL_H_evalAtHome_956
template<class TPMGL(T), class TPMGL(U)> TPMGL(U) x10::lang::GlobalRef__LocalEval::evalAtHome(
  ::x10::lang::GlobalRef< TPMGL(T) > ref, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* eval) {
    
    //#line 131 "x10/lang/GlobalRef.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                 ::x10::lang::Place::_make((ref)->location))))
    {
        
        //#line 132 "x10/lang/GlobalRef.x10"
        return ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(eval), 
          (ref)->__apply());
        
    } else {
        
        //#line 134 "x10/lang/GlobalRef.x10"
        return ::x10::xrx::Runtime::template evalAt< TPMGL(U) >(
                 ::x10::lang::Place::_make((ref)->location),
                 reinterpret_cast< ::x10::lang::Fun_0_0<TPMGL(U)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<TPMGL(U)> >(sizeof(x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U)>)))x10_lang_GlobalRef__LocalEval__closure__1<TPMGL(T),TPMGL(U)>(ref, eval))),
                 ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
    }
    
}
#endif // X10_LANG_GLOBALREF__LOCALEVAL_H_evalAtHome_956
#ifndef X10_LANG_GLOBALREF__LOCALEVAL_H_getLocalOrCopy_957
#define X10_LANG_GLOBALREF__LOCALEVAL_H_getLocalOrCopy_957
template<class TPMGL(T)> TPMGL(T) x10::lang::GlobalRef__LocalEval::getLocalOrCopy(
  ::x10::lang::GlobalRef< TPMGL(T) > ref) {
    
    //#line 149 "x10/lang/GlobalRef.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                 ::x10::lang::Place::_make((ref)->location))))
    {
        
        //#line 150 "x10/lang/GlobalRef.x10"
        return (ref)->__apply();
        
    } else {
        
        //#line 152 "x10/lang/GlobalRef.x10"
        return ::x10::xrx::Runtime::template evalAt< TPMGL(T) >(
                 ::x10::lang::Place::_make((ref)->location),
                 reinterpret_cast< ::x10::lang::Fun_0_0<TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<TPMGL(T)> >(sizeof(x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T)>)))x10_lang_GlobalRef__LocalEval__closure__2<TPMGL(T)>(ref))),
                 ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
    }
    
}
#endif // X10_LANG_GLOBALREF__LOCALEVAL_H_getLocalOrCopy_957
#endif // X10_LANG_GLOBALREF__LOCALEVAL_H_GENERICS
#endif // __X10_LANG_GLOBALREF__LOCALEVAL_H_NODEPS
