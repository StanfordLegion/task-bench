#ifndef __X10_UTIL_CUDAUTILITIES_H
#define __X10_UTIL_CUDAUTILITIES_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRail;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class CUDAUtilities_Strings {
  public:
    static ::x10::lang::String sl__158253;
};

class CUDAUtilities : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_int autoBlocks();
    static x10_int autoThreads();
    template<class TPMGL(T)> static void initCUDARail(::x10::lang::Rail< TPMGL(T) >* local,
                                                      ::x10::lang::GlobalRail<TPMGL(T)> remote,
                                                      x10_long numElements);
    template<class TPMGL(T)> static ::x10::lang::GlobalRail<TPMGL(T)>
      makeCUDARail(::x10::lang::Place gpu, x10_long numElements,
                   ::x10::lang::Rail< TPMGL(T) >* init);
    template<class TPMGL(T)> static ::x10::lang::GlobalRail<TPMGL(T)>
      makeGlobalRail(::x10::lang::Place place, x10_long numElements,
                     ::x10::lang::Rail< TPMGL(T) >* init);
    template<class TPMGL(T)> static ::x10::lang::GlobalRail<TPMGL(T)>
      makeGlobalRail(::x10::lang::Place place, x10_long numElements);
    template<class TPMGL(T)> static ::x10::lang::GlobalRail<TPMGL(T)>
      makeGlobalRail(::x10::lang::Place place, x10_long numElements,
                     TPMGL(T) init);
    template<class TPMGL(T)> static ::x10::lang::GlobalRail<TPMGL(T)>
      makeGlobalRail(::x10::lang::Place place, x10_long numElements,
                     ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init);
    template<class TPMGL(T)> static void deleteGlobalRail(
      ::x10::lang::GlobalRail<TPMGL(T)> arr);
    static x10_int mul24(x10_int a, x10_int b);
    static void syncDevice(::x10::lang::Place place);
    virtual ::x10::util::CUDAUtilities* x10__util__CUDAUtilities____this__x10__util__CUDAUtilities(
      );
    void _constructor();
    
    static ::x10::util::CUDAUtilities* _make();
    
    virtual void __fieldInitializers_x10_util_CUDAUtilities(
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
#endif // X10_UTIL_CUDAUTILITIES_H

namespace x10 { namespace util { 
class CUDAUtilities;
} } 

#ifndef X10_UTIL_CUDAUTILITIES_H_NODEPS
#define X10_UTIL_CUDAUTILITIES_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <x10/lang/GlobalRail.h>
#include <x10/lang/Long.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Place.h>
#include <x10/compiler/Native.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/GlobalRef.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Zero.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_CUDAUTILITIES__CLOSURE__2_CLOSURE
#define X10_UTIL_CUDAUTILITIES__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_CUDAUtilities__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::template itable <x10_util_CUDAUtilities__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long p__120693){
        return ::x10aux::nullCheck(init)->x10::lang::template Rail< TPMGL(T) >::__apply(
                 ((x10_long)(((x10_int) (p__120693)))));
        
    }
    
    // captured environment
    ::x10::lang::Rail< TPMGL(T) >* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_CUDAUtilities__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_CUDAUtilities__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Rail< TPMGL(T) >* that_init = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_util_CUDAUtilities__closure__2<TPMGL(T) >* this_ = new (storage) x10_util_CUDAUtilities__closure__2<TPMGL(T) >(that_init);
        return this_;
    }
    
    x10_util_CUDAUtilities__closure__2(::x10::lang::Rail< TPMGL(T) >* init) : init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/CUDAUtilities.x10:69";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::template itable <x10_util_CUDAUtilities__closure__2<TPMGL(T) > >x10_util_CUDAUtilities__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_CUDAUtilities__closure__2<TPMGL(T) >::__apply, &x10_util_CUDAUtilities__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_CUDAUtilities__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >, &x10_util_CUDAUtilities__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_CUDAUtilities__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_CUDAUtilities__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_CUDAUTILITIES__CLOSURE__2_CLOSURE
#ifndef X10_UTIL_CUDAUTILITIES__CLOSURE__1_CLOSURE
#define X10_UTIL_CUDAUTILITIES__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_util_CUDAUtilities__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> >::template itable <x10_util_CUDAUtilities__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::GlobalRail<TPMGL(T)> __apply(){
        return ::x10::lang::GlobalRail<TPMGL(T)>::_make(::x10::lang::Rail< TPMGL(T) >::_make(numElements,
                                                                                             reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >(sizeof(x10_util_CUDAUtilities__closure__2<TPMGL(T)>)))x10_util_CUDAUtilities__closure__2<TPMGL(T)>(init)))));
        
    }
    
    // captured environment
    x10_long numElements;
    ::x10::lang::Rail< TPMGL(T) >* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->numElements);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_CUDAUtilities__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_CUDAUtilities__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_numElements = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_init = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_util_CUDAUtilities__closure__1<TPMGL(T) >* this_ = new (storage) x10_util_CUDAUtilities__closure__1<TPMGL(T) >(that_numElements, that_init);
        return this_;
    }
    
    x10_util_CUDAUtilities__closure__1(x10_long numElements, ::x10::lang::Rail< TPMGL(T) >* init) : numElements(numElements), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> > >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> > >(); }
    
    const char* toNativeString() {
        return "x10/util/CUDAUtilities.x10:69";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> >::template itable <x10_util_CUDAUtilities__closure__1<TPMGL(T) > >x10_util_CUDAUtilities__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_CUDAUtilities__closure__1<TPMGL(T) >::__apply, &x10_util_CUDAUtilities__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_CUDAUtilities__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> > >, &x10_util_CUDAUtilities__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_CUDAUtilities__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_CUDAUtilities__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_CUDAUTILITIES__CLOSURE__1_CLOSURE
#ifndef X10_UTIL_CUDAUTILITIES__CLOSURE__3_CLOSURE
#define X10_UTIL_CUDAUTILITIES__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_util_CUDAUtilities__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> >::template itable <x10_util_CUDAUtilities__closure__3<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::GlobalRail<TPMGL(T)> __apply(){
        return ::x10::lang::GlobalRail<TPMGL(T)>::_make(::x10::lang::Rail< TPMGL(T) >::_make(numElements,
                                                                                             init));
        
    }
    
    // captured environment
    x10_long numElements;
    TPMGL(T) init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->numElements);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_CUDAUtilities__closure__3<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_CUDAUtilities__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_numElements = buf.read<x10_long>();
        TPMGL(T) that_init = buf.read<TPMGL(T)>();
        x10_util_CUDAUtilities__closure__3<TPMGL(T) >* this_ = new (storage) x10_util_CUDAUtilities__closure__3<TPMGL(T) >(that_numElements, that_init);
        return this_;
    }
    
    x10_util_CUDAUtilities__closure__3(x10_long numElements, TPMGL(T) init) : numElements(numElements), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> > >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> > >(); }
    
    const char* toNativeString() {
        return "x10/util/CUDAUtilities.x10:86";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> >::template itable <x10_util_CUDAUtilities__closure__3<TPMGL(T) > >x10_util_CUDAUtilities__closure__3<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_CUDAUtilities__closure__3<TPMGL(T) >::__apply, &x10_util_CUDAUtilities__closure__3<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_CUDAUtilities__closure__3<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> > >, &x10_util_CUDAUtilities__closure__3<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_CUDAUtilities__closure__3<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_CUDAUtilities__closure__3<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_CUDAUTILITIES__CLOSURE__3_CLOSURE
#ifndef X10_UTIL_CUDAUTILITIES__CLOSURE__5_CLOSURE
#define X10_UTIL_CUDAUTILITIES__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_CUDAUtilities__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::template itable <x10_util_CUDAUtilities__closure__5<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long p__120696){
        return ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(init), 
          ((x10_long)(((x10_int) (p__120696)))));
        
    }
    
    // captured environment
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_CUDAUtilities__closure__5<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_CUDAUtilities__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_util_CUDAUtilities__closure__5<TPMGL(T) >* this_ = new (storage) x10_util_CUDAUtilities__closure__5<TPMGL(T) >(that_init);
        return this_;
    }
    
    x10_util_CUDAUtilities__closure__5(::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init) : init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/CUDAUtilities.x10:97";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::template itable <x10_util_CUDAUtilities__closure__5<TPMGL(T) > >x10_util_CUDAUtilities__closure__5<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_CUDAUtilities__closure__5<TPMGL(T) >::__apply, &x10_util_CUDAUtilities__closure__5<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_CUDAUtilities__closure__5<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >, &x10_util_CUDAUtilities__closure__5<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_CUDAUtilities__closure__5<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_CUDAUtilities__closure__5<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_CUDAUTILITIES__CLOSURE__5_CLOSURE
#ifndef X10_UTIL_CUDAUTILITIES__CLOSURE__4_CLOSURE
#define X10_UTIL_CUDAUTILITIES__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_util_CUDAUtilities__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> >::template itable <x10_util_CUDAUtilities__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::GlobalRail<TPMGL(T)> __apply(){
        return ::x10::lang::GlobalRail<TPMGL(T)>::_make(::x10::lang::Rail< TPMGL(T) >::_make(numElements,
                                                                                             reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >(sizeof(x10_util_CUDAUtilities__closure__5<TPMGL(T)>)))x10_util_CUDAUtilities__closure__5<TPMGL(T)>(init)))));
        
    }
    
    // captured environment
    x10_long numElements;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->numElements);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_CUDAUtilities__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_CUDAUtilities__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_numElements = buf.read<x10_long>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_util_CUDAUtilities__closure__4<TPMGL(T) >* this_ = new (storage) x10_util_CUDAUtilities__closure__4<TPMGL(T) >(that_numElements, that_init);
        return this_;
    }
    
    x10_util_CUDAUtilities__closure__4(x10_long numElements, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init) : numElements(numElements), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> > >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> > >(); }
    
    const char* toNativeString() {
        return "x10/util/CUDAUtilities.x10:97";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> >::template itable <x10_util_CUDAUtilities__closure__4<TPMGL(T) > >x10_util_CUDAUtilities__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_CUDAUtilities__closure__4<TPMGL(T) >::__apply, &x10_util_CUDAUtilities__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_CUDAUtilities__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> > >, &x10_util_CUDAUtilities__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_CUDAUtilities__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_CUDAUtilities__closure__4<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_CUDAUTILITIES__CLOSURE__4_CLOSURE
#ifndef X10_UTIL_CUDAUTILITIES_H_GENERICS
#define X10_UTIL_CUDAUTILITIES_H_GENERICS
#ifndef X10_UTIL_CUDAUTILITIES_H_initCUDARail_2166
#define X10_UTIL_CUDAUTILITIES_H_initCUDARail_2166
template<class TPMGL(T)> void x10::util::CUDAUtilities::initCUDARail(::x10::lang::Rail< TPMGL(T) >* local,
                                                                     ::x10::lang::GlobalRail<TPMGL(T)> remote,
                                                                     x10_long numElements) {
    {
        
        //#line 47 "x10/util/CUDAUtilities.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__120699 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
                  local, ((x10_long)0ll), remote, ((x10_long)0ll),
                  numElements);
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc2167) {
            {
                ::x10::lang::CheckedThrowable* ct__120697 =
                  __exc2167;
                {
                    ::x10::xrx::Runtime::pushException(ct__120697);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__120699);
    }
}
#endif // X10_UTIL_CUDAUTILITIES_H_initCUDARail_2166
#ifndef X10_UTIL_CUDAUTILITIES_H_makeCUDARail_2168
#define X10_UTIL_CUDAUTILITIES_H_makeCUDARail_2168
template<class TPMGL(T)> ::x10::lang::GlobalRail<TPMGL(T)>
  x10::util::CUDAUtilities::makeCUDARail(::x10::lang::Place gpu,
                                         x10_long numElements,
                                         ::x10::lang::Rail< TPMGL(T) >* init) {
    x10_ulong addr = x10aux::remote_alloc(gpu.FMGL(id), ((size_t)numElements)*sizeof(TPMGL(T)));
x10::lang::GlobalRef<x10::lang::Rail<TPMGL(T)> *> gr(gpu->FMGL(id), addr);
x10::lang::GlobalRail<TPMGL(T)> remote_rail = x10::lang::GlobalRail<TPMGL(T)>::_make(numElements, gr);
initCUDARail<TPMGL(T)>(init,remote_rail,numElements);
return remote_rail;

    
    //#line 59 "x10/util/CUDAUtilities.x10"
    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::UnsupportedOperationException::_make()));
}
#endif // X10_UTIL_CUDAUTILITIES_H_makeCUDARail_2168
#ifndef X10_UTIL_CUDAUTILITIES_H_makeGlobalRail_2169
#define X10_UTIL_CUDAUTILITIES_H_makeGlobalRail_2169
template<class TPMGL(T)> ::x10::lang::GlobalRail<TPMGL(T)>
  x10::util::CUDAUtilities::makeGlobalRail(::x10::lang::Place place,
                                           x10_long numElements,
                                           ::x10::lang::Rail< TPMGL(T) >* init) {
    
    //#line 66 "x10/util/CUDAUtilities.x10"
    if (::x10aux::is_cuda((x10_int)((place)->FMGL(id)))) {
        
        //#line 67 "x10/util/CUDAUtilities.x10"
        return ::x10::util::CUDAUtilities::template makeCUDARail< TPMGL(T) >(
                 place, numElements, init);
        
    } else {
        
        //#line 69 "x10/util/CUDAUtilities.x10"
        ::x10::lang::GlobalRail<TPMGL(T)> t__120692 = ::x10::xrx::Runtime::template evalAt< ::x10::lang::GlobalRail<TPMGL(T)> >(
                                                        place,
                                                        reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> >*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> > >(sizeof(x10_util_CUDAUtilities__closure__1<TPMGL(T)>)))x10_util_CUDAUtilities__closure__1<TPMGL(T)>(numElements, init))),
                                                        ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        if (!((::x10aux::struct_equals(::x10::lang::Place::_make((t__120692->FMGL(rail))->location),
                                       place)))) {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::CUDAUtilities_Strings::sl__158253))));
        }
        return t__120692;
        
    }
    
}
#endif // X10_UTIL_CUDAUTILITIES_H_makeGlobalRail_2169
#ifndef X10_UTIL_CUDAUTILITIES_H_makeGlobalRail_2170
#define X10_UTIL_CUDAUTILITIES_H_makeGlobalRail_2170
template<class TPMGL(T)> ::x10::lang::GlobalRail<TPMGL(T)>
  x10::util::CUDAUtilities::makeGlobalRail(::x10::lang::Place place,
                                           x10_long numElements) {
    
    //#line 76 "x10/util/CUDAUtilities.x10"
    return ::x10::util::CUDAUtilities::template makeGlobalRail< TPMGL(T) >(
             place, numElements, ::x10aux::zeroValue< TPMGL(T) >());
    
}
#endif // X10_UTIL_CUDAUTILITIES_H_makeGlobalRail_2170
#ifndef X10_UTIL_CUDAUTILITIES_H_makeGlobalRail_2171
#define X10_UTIL_CUDAUTILITIES_H_makeGlobalRail_2171
template<class TPMGL(T)> ::x10::lang::GlobalRail<TPMGL(T)>
  x10::util::CUDAUtilities::makeGlobalRail(::x10::lang::Place place,
                                           x10_long numElements,
                                           TPMGL(T) init) {
    
    //#line 82 "x10/util/CUDAUtilities.x10"
    if (::x10aux::is_cuda((x10_int)((place)->FMGL(id)))) {
        
        //#line 83 "x10/util/CUDAUtilities.x10"
        ::x10::lang::Rail< TPMGL(T) >* chunk = ::x10::lang::Rail< TPMGL(T) >::_make(numElements,
                                                                                    init);
        
        //#line 84 "x10/util/CUDAUtilities.x10"
        return ::x10::util::CUDAUtilities::template makeCUDARail< TPMGL(T) >(
                 place, numElements, chunk);
        
    } else {
        
        //#line 86 "x10/util/CUDAUtilities.x10"
        ::x10::lang::GlobalRail<TPMGL(T)> t__120694 = ::x10::xrx::Runtime::template evalAt< ::x10::lang::GlobalRail<TPMGL(T)> >(
                                                        place,
                                                        reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> >*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> > >(sizeof(x10_util_CUDAUtilities__closure__3<TPMGL(T)>)))x10_util_CUDAUtilities__closure__3<TPMGL(T)>(numElements, init))),
                                                        ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        if (!((::x10aux::struct_equals(::x10::lang::Place::_make((t__120694->FMGL(rail))->location),
                                       place)))) {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::CUDAUtilities_Strings::sl__158253))));
        }
        return t__120694;
        
    }
    
}
#endif // X10_UTIL_CUDAUTILITIES_H_makeGlobalRail_2171
#ifndef X10_UTIL_CUDAUTILITIES_H_makeGlobalRail_2172
#define X10_UTIL_CUDAUTILITIES_H_makeGlobalRail_2172
template<class TPMGL(T)> ::x10::lang::GlobalRail<TPMGL(T)>
  x10::util::CUDAUtilities::makeGlobalRail(::x10::lang::Place place,
                                           x10_long numElements,
                                           ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init) {
    
    //#line 93 "x10/util/CUDAUtilities.x10"
    if (::x10aux::is_cuda((x10_int)((place)->FMGL(id)))) {
        
        //#line 94 "x10/util/CUDAUtilities.x10"
        ::x10::lang::Rail< TPMGL(T) >* chunk = ::x10::lang::Rail< TPMGL(T) >::_make(numElements,
                                                                                    init);
        
        //#line 95 "x10/util/CUDAUtilities.x10"
        return ::x10::util::CUDAUtilities::template makeCUDARail< TPMGL(T) >(
                 place, numElements, chunk);
        
    } else {
        
        //#line 97 "x10/util/CUDAUtilities.x10"
        ::x10::lang::GlobalRail<TPMGL(T)> t__120695 = ::x10::xrx::Runtime::template evalAt< ::x10::lang::GlobalRail<TPMGL(T)> >(
                                                        place,
                                                        reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> >*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::GlobalRail<TPMGL(T)> > >(sizeof(x10_util_CUDAUtilities__closure__4<TPMGL(T)>)))x10_util_CUDAUtilities__closure__4<TPMGL(T)>(numElements, init))),
                                                        ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        if (!((::x10aux::struct_equals(::x10::lang::Place::_make((t__120695->FMGL(rail))->location),
                                       place)))) {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::CUDAUtilities_Strings::sl__158253))));
        }
        return t__120695;
        
    }
    
}
#endif // X10_UTIL_CUDAUTILITIES_H_makeGlobalRail_2172
#ifndef X10_UTIL_CUDAUTILITIES_H_deleteGlobalRail_2173
#define X10_UTIL_CUDAUTILITIES_H_deleteGlobalRail_2173
template<class TPMGL(T)> void x10::util::CUDAUtilities::deleteGlobalRail(
  ::x10::lang::GlobalRail<TPMGL(T)> arr) {
    
    //#line 104 "x10/util/CUDAUtilities.x10"
    ::x10::lang::Place place = arr->x10::lang::template GlobalRail<TPMGL(T)>::home();
    
    //#line 105 "x10/util/CUDAUtilities.x10"
    if (::x10aux::is_cuda((x10_int)((place)->FMGL(id)))) {
        x10aux::remote_free(place.FMGL(id), arr->FMGL(rail)->value);

    } else {
     
    }
    
}
#endif // X10_UTIL_CUDAUTILITIES_H_deleteGlobalRail_2173
#endif // X10_UTIL_CUDAUTILITIES_H_GENERICS
#endif // __X10_UTIL_CUDAUTILITIES_H_NODEPS
