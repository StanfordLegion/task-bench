#ifndef __X10_UTIL_TEAMREDUCTIONHELPER_H
#define __X10_UTIL_TEAMREDUCTIONHELPER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Complex;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Arithmetic;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Bitwise;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Ordered;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class TeamReductionHelper_Strings {
  public:
    static ::x10::lang::String sl__160684;
    static ::x10::lang::String sl__160689;
    static ::x10::lang::String sl__160682;
    static ::x10::lang::String sl__160685;
    static ::x10::lang::String sl__160692;
    static ::x10::lang::String sl__160690;
    static ::x10::lang::String sl__160688;
    static ::x10::lang::String sl__160691;
    static ::x10::lang::String sl__160681;
    static ::x10::lang::String sl__160686;
    static ::x10::lang::String sl__160683;
    static ::x10::lang::String sl__160687;
};

class TeamReductionHelper : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    template<class TPMGL(T)> static void performReduction(::x10::lang::Rail< TPMGL(T) >* src,
                                                          x10_long src_off,
                                                          ::x10::lang::Rail< TPMGL(T) >* dst,
                                                          x10_long dst_off,
                                                          x10_long count,
                                                          x10_int operation);
    static void reduce(::x10::lang::Rail< x10_double >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_double >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_float >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_float >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_complex >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_complex >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_long >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_long >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_int >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_int >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_short >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_short >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_byte >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_byte >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_boolean >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_boolean >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    template<class TPMGL(T)> static void reduce(::x10::lang::Rail< TPMGL(T) >* src,
                                                x10_long src_off,
                                                ::x10::lang::Rail< TPMGL(T) >* dst,
                                                x10_long dst_off,
                                                x10_long count,
                                                x10_int operation);
    virtual ::x10::util::TeamReductionHelper* x10__util__TeamReductionHelper____this__x10__util__TeamReductionHelper(
      );
    void _constructor();
    
    static ::x10::util::TeamReductionHelper* _make();
    
    virtual void __fieldInitializers_x10_util_TeamReductionHelper(
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
#endif // X10_UTIL_TEAMREDUCTIONHELPER_H

namespace x10 { namespace util { 
class TeamReductionHelper;
} } 

#ifndef X10_UTIL_TEAMREDUCTIONHELPER_H_NODEPS
#define X10_UTIL_TEAMREDUCTIONHELPER_H_NODEPS
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Any.h>
#include <x10/lang/Double.h>
#include <x10/lang/Float.h>
#include <x10/lang/Complex.h>
#include <x10/lang/Short.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Team.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Math.h>
#include <x10/lang/String.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Arithmetic.h>
#include <x10/lang/Bitwise.h>
#include <x10/util/Ordered.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__1_CLOSURE
#define X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
template<class TPMGL(T)> class x10_util_TeamReductionHelper__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>::template itable <x10_util_TeamReductionHelper__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* op){
        
        //#line 360 "x10/util/TeamReductionHelper.x10"
        x10_long i__136596min__136621 = ((x10_long)0ll);
        x10_long i__136596max__136622 = ((count) - (((x10_long)1ll)));
        {
            x10_long i__136623;
            for (i__136623 = i__136596min__136621; ((i__136623) <= (i__136596max__136622));
                 i__136623 = ((i__136623) + (((x10_long)1ll)))) {
                x10_long i__136624 = i__136623;
                
                //#line 361 "x10/util/TeamReductionHelper.x10"
                ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                  ((i__136624) + (dst_off)), ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(op), 
                    ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                      ((i__136624) + (dst_off))), ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                    ((i__136624) + (src_off)))));
            }
        }
        
    }
    
    // captured environment
    x10_long count;
    ::x10::lang::Rail< TPMGL(T) >* dst;
    x10_long dst_off;
    x10_long src_off;
    ::x10::lang::Rail< TPMGL(T) >* src;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->count);
        buf.write(this->dst);
        buf.write(this->dst_off);
        buf.write(this->src_off);
        buf.write(this->src);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_TeamReductionHelper__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_TeamReductionHelper__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_count = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_dst = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_long that_dst_off = buf.read<x10_long>();
        x10_long that_src_off = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_src = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_util_TeamReductionHelper__closure__1<TPMGL(T) >* this_ = new (storage) x10_util_TeamReductionHelper__closure__1<TPMGL(T) >(that_count, that_dst, that_dst_off, that_src_off, that_src);
        return this_;
    }
    
    x10_util_TeamReductionHelper__closure__1(x10_long count, ::x10::lang::Rail< TPMGL(T) >* dst, x10_long dst_off, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* src) : count(count), dst(dst), dst_off(dst_off), src_off(src_off), src(src) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/util/TeamReductionHelper.x10:359-363";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>::template itable <x10_util_TeamReductionHelper__closure__1<TPMGL(T) > >x10_util_TeamReductionHelper__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_TeamReductionHelper__closure__1<TPMGL(T) >::__apply, &x10_util_TeamReductionHelper__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_TeamReductionHelper__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*> >, &x10_util_TeamReductionHelper__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_TeamReductionHelper__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_TeamReductionHelper__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__1_CLOSURE
#ifndef X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__2_CLOSURE
#define X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_TeamReductionHelper__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(TPMGL(T) a, TPMGL(T) b){
        return ::x10::lang::Arithmetic< TPMGL(T) >::_m4____plus(::x10aux::class_cast< ::x10::lang::Arithmetic< TPMGL(T) >*>(a), b);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_TeamReductionHelper__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_TeamReductionHelper__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_TeamReductionHelper__closure__2<TPMGL(T) >* this_ = new (storage) x10_util_TeamReductionHelper__closure__2<TPMGL(T) >();
        return this_;
    }
    
    x10_util_TeamReductionHelper__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/TeamReductionHelper.x10:367";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__2<TPMGL(T) > >x10_util_TeamReductionHelper__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_TeamReductionHelper__closure__2<TPMGL(T) >::__apply, &x10_util_TeamReductionHelper__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_TeamReductionHelper__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >, &x10_util_TeamReductionHelper__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_TeamReductionHelper__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_TeamReductionHelper__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__2_CLOSURE
#ifndef X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__3_CLOSURE
#define X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_TeamReductionHelper__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__3<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(TPMGL(T) a, TPMGL(T) b){
        return ::x10::lang::Arithmetic< TPMGL(T) >::__times(::x10aux::class_cast< ::x10::lang::Arithmetic< TPMGL(T) >*>(a), b);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_TeamReductionHelper__closure__3<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_TeamReductionHelper__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_TeamReductionHelper__closure__3<TPMGL(T) >* this_ = new (storage) x10_util_TeamReductionHelper__closure__3<TPMGL(T) >();
        return this_;
    }
    
    x10_util_TeamReductionHelper__closure__3() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/TeamReductionHelper.x10:370";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__3<TPMGL(T) > >x10_util_TeamReductionHelper__closure__3<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_TeamReductionHelper__closure__3<TPMGL(T) >::__apply, &x10_util_TeamReductionHelper__closure__3<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_TeamReductionHelper__closure__3<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >, &x10_util_TeamReductionHelper__closure__3<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_TeamReductionHelper__closure__3<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_TeamReductionHelper__closure__3<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__3_CLOSURE
#ifndef X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__4_CLOSURE
#define X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_TeamReductionHelper__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(TPMGL(T) a, TPMGL(T) b){
        return ::x10::lang::Bitwise< TPMGL(T) >::__ampersand(::x10aux::class_cast< ::x10::lang::Bitwise< TPMGL(T) >*>(a), b);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_TeamReductionHelper__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_TeamReductionHelper__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_TeamReductionHelper__closure__4<TPMGL(T) >* this_ = new (storage) x10_util_TeamReductionHelper__closure__4<TPMGL(T) >();
        return this_;
    }
    
    x10_util_TeamReductionHelper__closure__4() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/TeamReductionHelper.x10:373";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__4<TPMGL(T) > >x10_util_TeamReductionHelper__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_TeamReductionHelper__closure__4<TPMGL(T) >::__apply, &x10_util_TeamReductionHelper__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_TeamReductionHelper__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >, &x10_util_TeamReductionHelper__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_TeamReductionHelper__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_TeamReductionHelper__closure__4<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__4_CLOSURE
#ifndef X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__5_CLOSURE
#define X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_TeamReductionHelper__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__5<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(TPMGL(T) a, TPMGL(T) b){
        return ::x10::lang::Bitwise< TPMGL(T) >::__bar(::x10aux::class_cast< ::x10::lang::Bitwise< TPMGL(T) >*>(a), b);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_TeamReductionHelper__closure__5<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_TeamReductionHelper__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_TeamReductionHelper__closure__5<TPMGL(T) >* this_ = new (storage) x10_util_TeamReductionHelper__closure__5<TPMGL(T) >();
        return this_;
    }
    
    x10_util_TeamReductionHelper__closure__5() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/TeamReductionHelper.x10:376";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__5<TPMGL(T) > >x10_util_TeamReductionHelper__closure__5<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_TeamReductionHelper__closure__5<TPMGL(T) >::__apply, &x10_util_TeamReductionHelper__closure__5<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_TeamReductionHelper__closure__5<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >, &x10_util_TeamReductionHelper__closure__5<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_TeamReductionHelper__closure__5<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_TeamReductionHelper__closure__5<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__5_CLOSURE
#ifndef X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__6_CLOSURE
#define X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_TeamReductionHelper__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__6<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(TPMGL(T) a, TPMGL(T) b){
        return ::x10::lang::Bitwise< TPMGL(T) >::__caret(::x10aux::class_cast< ::x10::lang::Bitwise< TPMGL(T) >*>(a), b);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_TeamReductionHelper__closure__6<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_TeamReductionHelper__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_TeamReductionHelper__closure__6<TPMGL(T) >* this_ = new (storage) x10_util_TeamReductionHelper__closure__6<TPMGL(T) >();
        return this_;
    }
    
    x10_util_TeamReductionHelper__closure__6() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/TeamReductionHelper.x10:379";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__6<TPMGL(T) > >x10_util_TeamReductionHelper__closure__6<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_TeamReductionHelper__closure__6<TPMGL(T) >::__apply, &x10_util_TeamReductionHelper__closure__6<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_TeamReductionHelper__closure__6<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >, &x10_util_TeamReductionHelper__closure__6<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_TeamReductionHelper__closure__6<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_TeamReductionHelper__closure__6<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__6_CLOSURE
#ifndef X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__7_CLOSURE
#define X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_TeamReductionHelper__closure__7 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__7<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(TPMGL(T) a, TPMGL(T) b){
        return ::x10::util::Ordered< TPMGL(T) >::__lt(::x10aux::class_cast< ::x10::util::Ordered< TPMGL(T) >*>(a), b)
          ? (b) : (a);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_TeamReductionHelper__closure__7<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_TeamReductionHelper__closure__7<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_TeamReductionHelper__closure__7<TPMGL(T) >* this_ = new (storage) x10_util_TeamReductionHelper__closure__7<TPMGL(T) >();
        return this_;
    }
    
    x10_util_TeamReductionHelper__closure__7() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/TeamReductionHelper.x10:382";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__7<TPMGL(T) > >x10_util_TeamReductionHelper__closure__7<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_TeamReductionHelper__closure__7<TPMGL(T) >::__apply, &x10_util_TeamReductionHelper__closure__7<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_TeamReductionHelper__closure__7<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >, &x10_util_TeamReductionHelper__closure__7<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_TeamReductionHelper__closure__7<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_TeamReductionHelper__closure__7<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__7_CLOSURE
#ifndef X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__8_CLOSURE
#define X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_TeamReductionHelper__closure__8 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__8<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(TPMGL(T) a, TPMGL(T) b){
        return ::x10::util::Ordered< TPMGL(T) >::__lt(::x10aux::class_cast< ::x10::util::Ordered< TPMGL(T) >*>(a), b)
          ? (a) : (b);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_TeamReductionHelper__closure__8<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_TeamReductionHelper__closure__8<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_util_TeamReductionHelper__closure__8<TPMGL(T) >* this_ = new (storage) x10_util_TeamReductionHelper__closure__8<TPMGL(T) >();
        return this_;
    }
    
    x10_util_TeamReductionHelper__closure__8() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/TeamReductionHelper.x10:385";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_TeamReductionHelper__closure__8<TPMGL(T) > >x10_util_TeamReductionHelper__closure__8<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_TeamReductionHelper__closure__8<TPMGL(T) >::__apply, &x10_util_TeamReductionHelper__closure__8<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_TeamReductionHelper__closure__8<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >, &x10_util_TeamReductionHelper__closure__8<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_TeamReductionHelper__closure__8<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_TeamReductionHelper__closure__8<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_TEAMREDUCTIONHELPER__CLOSURE__8_CLOSURE
#ifndef X10_UTIL_TEAMREDUCTIONHELPER_H_GENERICS
#define X10_UTIL_TEAMREDUCTIONHELPER_H_GENERICS
#ifndef X10_UTIL_TEAMREDUCTIONHELPER_H_performReduction_2865
#define X10_UTIL_TEAMREDUCTIONHELPER_H_performReduction_2865
template<class TPMGL(T)> void x10::util::TeamReductionHelper::performReduction(
  ::x10::lang::Rail< TPMGL(T) >* src, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_long dst_off, x10_long count, x10_int operation) {
    
    //#line 35 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 36 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 37 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_float >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 38 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_float >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_float >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 39 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_complex >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 40 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_complex >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_complex >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 41 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 42 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 43 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 44 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 45 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_short >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 46 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_short >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_short >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 47 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_byte >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 48 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_byte >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_byte >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 49 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_boolean >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 50 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_boolean >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_boolean >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else {
        
        //#line 52 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::template reduce< TPMGL(T) >(
          src, src_off, dst, dst_off, count, operation);
    }
    
}
#endif // X10_UTIL_TEAMREDUCTIONHELPER_H_performReduction_2865
#ifndef X10_UTIL_TEAMREDUCTIONHELPER_H_reduce_2874
#define X10_UTIL_TEAMREDUCTIONHELPER_H_reduce_2874
template<class TPMGL(T)> void x10::util::TeamReductionHelper::reduce(
  ::x10::lang::Rail< TPMGL(T) >* src, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_long dst_off, x10_long count, x10_int operation) {
    
    //#line 359 "x10/util/TeamReductionHelper.x10"
    ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>* thunk =
      reinterpret_cast< ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*> >(sizeof(x10_util_TeamReductionHelper__closure__1<TPMGL(T)>)))x10_util_TeamReductionHelper__closure__1<TPMGL(T)>(count, dst, dst_off, src_off, src)));
    
    //#line 365 "x10/util/TeamReductionHelper.x10"
    switch (operation) {
        
        //#line 366 "x10/util/TeamReductionHelper.x10"
        case 0/*::x10::util::Team::FMGL(ADD__get)()*/: ;
        {
            
            //#line 367 "x10/util/TeamReductionHelper.x10"
            ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>::__apply(::x10aux::nullCheck(thunk), 
              reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(sizeof(x10_util_TeamReductionHelper__closure__2<TPMGL(T)>)))x10_util_TeamReductionHelper__closure__2<TPMGL(T)>())));
            
            //#line 368 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 369 "x10/util/TeamReductionHelper.x10"
        case 1/*::x10::util::Team::FMGL(MUL__get)()*/: ;
        {
            
            //#line 370 "x10/util/TeamReductionHelper.x10"
            ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>::__apply(::x10aux::nullCheck(thunk), 
              reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(sizeof(x10_util_TeamReductionHelper__closure__3<TPMGL(T)>)))x10_util_TeamReductionHelper__closure__3<TPMGL(T)>())));
            
            //#line 371 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 372 "x10/util/TeamReductionHelper.x10"
        case 3/*::x10::util::Team::FMGL(AND__get)()*/: ;
        {
            
            //#line 373 "x10/util/TeamReductionHelper.x10"
            ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>::__apply(::x10aux::nullCheck(thunk), 
              reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(sizeof(x10_util_TeamReductionHelper__closure__4<TPMGL(T)>)))x10_util_TeamReductionHelper__closure__4<TPMGL(T)>())));
            
            //#line 374 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 375 "x10/util/TeamReductionHelper.x10"
        case 4/*::x10::util::Team::FMGL(OR__get)()*/: ;
        {
            
            //#line 376 "x10/util/TeamReductionHelper.x10"
            ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>::__apply(::x10aux::nullCheck(thunk), 
              reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(sizeof(x10_util_TeamReductionHelper__closure__5<TPMGL(T)>)))x10_util_TeamReductionHelper__closure__5<TPMGL(T)>())));
            
            //#line 377 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 378 "x10/util/TeamReductionHelper.x10"
        case 5/*::x10::util::Team::FMGL(XOR__get)()*/: ;
        {
            
            //#line 379 "x10/util/TeamReductionHelper.x10"
            ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>::__apply(::x10aux::nullCheck(thunk), 
              reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(sizeof(x10_util_TeamReductionHelper__closure__6<TPMGL(T)>)))x10_util_TeamReductionHelper__closure__6<TPMGL(T)>())));
            
            //#line 380 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 381 "x10/util/TeamReductionHelper.x10"
        case 6/*::x10::util::Team::FMGL(MAX__get)()*/: ;
        {
            
            //#line 382 "x10/util/TeamReductionHelper.x10"
            ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>::__apply(::x10aux::nullCheck(thunk), 
              reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(sizeof(x10_util_TeamReductionHelper__closure__7<TPMGL(T)>)))x10_util_TeamReductionHelper__closure__7<TPMGL(T)>())));
            
            //#line 383 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 384 "x10/util/TeamReductionHelper.x10"
        case 7/*::x10::util::Team::FMGL(MIN__get)()*/: ;
        {
            
            //#line 385 "x10/util/TeamReductionHelper.x10"
            ::x10::lang::VoidFun_0_1< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>::__apply(::x10aux::nullCheck(thunk), 
              reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(sizeof(x10_util_TeamReductionHelper__closure__8<TPMGL(T)>)))x10_util_TeamReductionHelper__closure__8<TPMGL(T)>())));
            
            //#line 386 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 387 "x10/util/TeamReductionHelper.x10"
        default: ;
        {
            
            //#line 388 "x10/util/TeamReductionHelper.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::x10::util::TeamReductionHelper_Strings::sl__160684), operation)))->c_str());
        }
    }
}
#endif // X10_UTIL_TEAMREDUCTIONHELPER_H_reduce_2874
#endif // X10_UTIL_TEAMREDUCTIONHELPER_H_GENERICS
#endif // __X10_UTIL_TEAMREDUCTIONHELPER_H_NODEPS
