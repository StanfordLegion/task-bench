/*************************************************/
/* START of UTSG */
#include <UTSG.h>

#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/lang/Long.h>
#include <x10/util/OptionsParser.h>
#include <x10/util/Option.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Int.h>
#include <x10/glb/GLBParameters.h>
#include <x10/lang/Place.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Fun_0_0.h>
#include <Queue.h>
#include <x10/glb/GLB.h>
#include <x10/lang/VoidFun_0_0.h>
#include <UTS.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef UTSG__CLOSURE__1_CLOSURE
#define UTSG__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class UTSG__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::Queue*>::itable<UTSG__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::Queue* __apply(){
        return ::Queue::_make(b);
        
    }
    
    // captured environment
    x10_int b;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->b);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        UTSG__closure__1* storage = ::x10aux::alloc_z<UTSG__closure__1>();
        buf.record_reference(storage);
        x10_int that_b = buf.read<x10_int>();
        UTSG__closure__1* this_ = new (storage) UTSG__closure__1(that_b);
        return this_;
    }
    
    UTSG__closure__1(x10_int b) : b(b) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::Queue*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::Queue*> >(); }
    
    const char* toNativeString() {
        return "UTSG.x10:53";
    }

};

#endif // UTSG__CLOSURE__1_CLOSURE
#ifndef UTSG__CLOSURE__2_CLOSURE
#define UTSG__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class UTSG__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<UTSG__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(glb->x10::glb::GLB< ::Queue*, x10_long>::taskQueue())->Queue::init(
          r, d);
    }
    
    // captured environment
    ::x10::glb::GLB< ::Queue*, x10_long>* glb;
    x10_int r;
    x10_int d;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->glb);
        buf.write(this->r);
        buf.write(this->d);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        UTSG__closure__2* storage = ::x10aux::alloc_z<UTSG__closure__2>();
        buf.record_reference(storage);
        ::x10::glb::GLB< ::Queue*, x10_long>* that_glb = buf.read< ::x10::glb::GLB< ::Queue*, x10_long>*>();
        x10_int that_r = buf.read<x10_int>();
        x10_int that_d = buf.read<x10_int>();
        UTSG__closure__2* this_ = new (storage) UTSG__closure__2(that_glb, that_r, that_d);
        return this_;
    }
    
    UTSG__closure__2(::x10::glb::GLB< ::Queue*, x10_long>* glb, x10_int r, x10_int d) : glb(glb), r(r), d(d) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "UTSG.x10:58";
    }

};

#endif // UTSG__CLOSURE__2_CLOSURE

//#line 13 "UTSG.x10"
::x10::lang::Rail< x10_long >* UTSG::compute(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 14 "UTSG.x10"
    ::x10::util::OptionsParser* opts = ::x10::util::OptionsParser::_make(args,
                                                                         ::x10::lang::Rail< ::x10::util::Option >::_make(),
                                                                         (__extension__ ({
                                                                             ::x10::lang::Rail< ::x10::util::Option >* t__3245 =
                                                                               ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)8ll), false);
                                                                             t__3245->x10::lang::Rail< ::x10::util::Option >::__set(
                                                                               ((x10_long)0ll),
                                                                               ::x10::util::Option::_make((&::UTSG_Strings::sl__3262),
                                                                                                          (&::UTSG_Strings::sl__3263),
                                                                                                          (&::UTSG_Strings::sl__3264)));
                                                                             t__3245->x10::lang::Rail< ::x10::util::Option >::__set(
                                                                               ((x10_long)1ll),
                                                                               ::x10::util::Option::_make((&::UTSG_Strings::sl__3265),
                                                                                                          (&::UTSG_Strings::sl__3263),
                                                                                                          (&::UTSG_Strings::sl__3266)));
                                                                             t__3245->x10::lang::Rail< ::x10::util::Option >::__set(
                                                                               ((x10_long)2ll),
                                                                               ::x10::util::Option::_make((&::UTSG_Strings::sl__3267),
                                                                                                          (&::UTSG_Strings::sl__3263),
                                                                                                          (&::UTSG_Strings::sl__3268)));
                                                                             t__3245->x10::lang::Rail< ::x10::util::Option >::__set(
                                                                               ((x10_long)3ll),
                                                                               ::x10::util::Option::_make((&::UTSG_Strings::sl__3269),
                                                                                                          (&::UTSG_Strings::sl__3263),
                                                                                                          (&::UTSG_Strings::sl__3270)));
                                                                             t__3245->x10::lang::Rail< ::x10::util::Option >::__set(
                                                                               ((x10_long)4ll),
                                                                               ::x10::util::Option::_make((&::UTSG_Strings::sl__3271),
                                                                                                          (&::UTSG_Strings::sl__3263),
                                                                                                          (&::UTSG_Strings::sl__3272)));
                                                                             t__3245->x10::lang::Rail< ::x10::util::Option >::__set(
                                                                               ((x10_long)5ll),
                                                                               ::x10::util::Option::_make((&::UTSG_Strings::sl__3273),
                                                                                                          (&::UTSG_Strings::sl__3263),
                                                                                                          (&::UTSG_Strings::sl__3274)));
                                                                             t__3245->x10::lang::Rail< ::x10::util::Option >::__set(
                                                                               ((x10_long)6ll),
                                                                               ::x10::util::Option::_make((&::UTSG_Strings::sl__3275),
                                                                                                          (&::UTSG_Strings::sl__3263),
                                                                                                          (&::UTSG_Strings::sl__3276)));
                                                                             t__3245->x10::lang::Rail< ::x10::util::Option >::__set(
                                                                               ((x10_long)7ll),
                                                                               ::x10::util::Option::_make((&::UTSG_Strings::sl__3277),
                                                                                                          (&::UTSG_Strings::sl__3263),
                                                                                                          (&::UTSG_Strings::sl__3278)));
                                                                             t__3245;
                                                                         }))
                                                                         );
    
    //#line 24 "UTSG.x10"
    x10_int b = opts->x10::util::OptionsParser::__apply((&::UTSG_Strings::sl__3279),
                                                        ((x10_int)4));
    
    //#line 25 "UTSG.x10"
    x10_int r = opts->x10::util::OptionsParser::__apply((&::UTSG_Strings::sl__3280),
                                                        ((x10_int)19));
    
    //#line 26 "UTSG.x10"
    x10_int d = opts->x10::util::OptionsParser::__apply((&::UTSG_Strings::sl__3281),
                                                        ((x10_int)13));
    
    //#line 27 "UTSG.x10"
    x10_int n = opts->x10::util::OptionsParser::__apply((&::UTSG_Strings::sl__3282),
                                                        ((x10_int)511));
    
    //#line 28 "UTSG.x10"
    x10_int l = opts->x10::util::OptionsParser::__apply((&::UTSG_Strings::sl__3283),
                                                        ((x10_int)32));
    
    //#line 29 "UTSG.x10"
    x10_int m = opts->x10::util::OptionsParser::__apply((&::UTSG_Strings::sl__3284),
                                                        ((x10_int)1024));
    
    //#line 30 "UTSG.x10"
    x10_int verbose = opts->x10::util::OptionsParser::__apply(
                        (&::UTSG_Strings::sl__3285), ::x10::glb::GLBParameters::FMGL(SHOW_RESULT_FLAG__get)());
    
    //#line 32 "UTSG.x10"
    x10_long P = ((x10_long)x10rt_nhosts());
    
    //#line 34 "UTSG.x10"
    x10_int z0 = ((x10_int)1);
    
    //#line 35 "UTSG.x10"
    x10_int zz = l;
    
    //#line 36 "UTSG.x10"
    while (((((x10_long)(zz))) < (P))) {
        
        //#line 37 "UTSG.x10"
        z0 = ((z0) + (((x10_int)1)));
        
        //#line 38 "UTSG.x10"
        zz = ((zz) * (l));
    }
    
    //#line 40 "UTSG.x10"
    x10_int z = z0;
    
    //#line 42 "UTSG.x10"
    x10_int w = opts->x10::util::OptionsParser::__apply((&::UTSG_Strings::sl__3286),
                                                        z);
    
    //#line 44 "UTSG.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::UTSG_Strings::sl__3287), P), (&::UTSG_Strings::sl__3288)), b), (&::UTSG_Strings::sl__3289)), r), (&::UTSG_Strings::sl__3290)), d), (&::UTSG_Strings::sl__3291)), w), (&::UTSG_Strings::sl__3292)), n), (&::UTSG_Strings::sl__3293)), l), (&::UTSG_Strings::sl__3294)), m), (&::UTSG_Strings::sl__3295)), z)));
    
    //#line 53 "UTSG.x10"
    ::x10::lang::Fun_0_0< ::Queue*>* init = reinterpret_cast< ::x10::lang::Fun_0_0< ::Queue*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::Queue*> >(sizeof(UTSG__closure__1)))UTSG__closure__1(b)));
    
    //#line 55 "UTSG.x10"
    ::x10::glb::GLB< ::Queue*, x10_long>* glb = ::x10::glb::GLB< ::Queue*, x10_long>::_make(init,
                                                                                            ::x10::glb::GLBParameters::_make(n,
                                                                                                                             w,
                                                                                                                             l,
                                                                                                                             z,
                                                                                                                             m,
                                                                                                                             verbose),
                                                                                            true);
    
    //#line 58 "UTSG.x10"
    ::x10::lang::VoidFun_0_0* start = reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(UTSG__closure__2)))UTSG__closure__2(glb, r, d)));
    
    //#line 59 "UTSG.x10"
    ::x10::lang::Rail< x10_long >* result = glb->x10::glb::GLB< ::Queue*, x10_long>::run(
                                              start);
    
    //#line 60 "UTSG.x10"
    return result;
    
}

//#line 63 "UTSG.x10"
void UTSG::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 64 "UTSG.x10"
    ::UTSG::compute(args);
}

//#line 67 "UTSG.x10"
::x10::lang::Rail< x10_long >* UTSG::mainTest(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 68 "UTSG.x10"
    ::x10::lang::Rail< x10_long >* result = ::UTSG::compute(
                                              args);
    
    //#line 69 "UTSG.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::UTSG_Strings::sl__3296), ::x10aux::nullCheck(result)->x10::lang::Rail< x10_long >::__apply(
                                                                                                      ((x10_long)0ll)))));
    
    //#line 70 "UTSG.x10"
    return result;
    
}

//#line 11 "UTSG.x10"
::UTSG* UTSG::UTSG____this__UTSG() {
    return this;
    
}
void UTSG::_constructor() {
    this->UTSG::__fieldInitializers_UTSG();
}
::UTSG* UTSG::_make() {
    ::UTSG* this_ = new (::x10aux::alloc_z< ::UTSG>()) ::UTSG();
    this_->_constructor();
    return this_;
}


void UTSG::__fieldInitializers_UTSG() {
 
}
const ::x10aux::serialization_id_t UTSG::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::UTSG::_deserializer);

void UTSG::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::UTSG::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::UTSG* this_ = new (::x10aux::alloc_z< ::UTSG>()) ::UTSG();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void UTSG::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType UTSG::rtt;
void UTSG::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("UTSG",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String UTSG_Strings::sl__3263("");
::x10::lang::String UTSG_Strings::sl__3294("   m=");
::x10::lang::String UTSG_Strings::sl__3291("   w=");
::x10::lang::String UTSG_Strings::sl__3279("-b");
::x10::lang::String UTSG_Strings::sl__3270("Number of nodes to process before probing. Default 200.");
::x10::lang::String UTSG_Strings::sl__3278("Verbose. Default 0 (no).");
::x10::lang::String UTSG_Strings::sl__3281("-d");
::x10::lang::String UTSG_Strings::sl__3276("Max potential victims");
::x10::lang::String UTSG_Strings::sl__3283("-l");
::x10::lang::String UTSG_Strings::sl__3284("-m");
::x10::lang::String UTSG_Strings::sl__3282("-n");
::x10::lang::String UTSG_Strings::sl__3262("b");
::x10::lang::String UTSG_Strings::sl__3293("   l=");
::x10::lang::String UTSG_Strings::sl__3267("d");
::x10::lang::String UTSG_Strings::sl__3280("-r");
::x10::lang::String UTSG_Strings::sl__3274("Base of the lifeline");
::x10::lang::String UTSG_Strings::sl__3285("-v");
::x10::lang::String UTSG_Strings::sl__3288("   b=");
::x10::lang::String UTSG_Strings::sl__3266("Seed (0 <= r < 2^31");
::x10::lang::String UTSG_Strings::sl__3286("-w");
::x10::lang::String UTSG_Strings::sl__3268("Tree depth");
::x10::lang::String UTSG_Strings::sl__3290("   d=");
::x10::lang::String UTSG_Strings::sl__3273("l");
::x10::lang::String UTSG_Strings::sl__3275("m");
::x10::lang::String UTSG_Strings::sl__3269("n");
::x10::lang::String UTSG_Strings::sl__3272("Number of thieves to send out. Default 1.");
::x10::lang::String UTSG_Strings::sl__3295("   z=");
::x10::lang::String UTSG_Strings::sl__3264("Branching factor");
::x10::lang::String UTSG_Strings::sl__3265("r");
::x10::lang::String UTSG_Strings::sl__3277("v");
::x10::lang::String UTSG_Strings::sl__3271("w");
::x10::lang::String UTSG_Strings::sl__3289("   r=");
::x10::lang::String UTSG_Strings::sl__3296("Result is: ");
::x10::lang::String UTSG_Strings::sl__3287("places=");
::x10::lang::String UTSG_Strings::sl__3292("   n=");

::x10::lang::Fun_0_0< ::Queue*>::itable<UTSG__closure__1>UTSG__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &UTSG__closure__1::__apply, &UTSG__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry UTSG__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::Queue*> >, &UTSG__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t UTSG__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(UTSG__closure__1::_deserialize);

::x10::lang::VoidFun_0_0::itable<UTSG__closure__2>UTSG__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &UTSG__closure__2::__apply, &UTSG__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry UTSG__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &UTSG__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t UTSG__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(UTSG__closure__2::_deserialize);

/* END of UTSG */
/*************************************************/
