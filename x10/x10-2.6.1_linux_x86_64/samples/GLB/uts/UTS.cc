/*************************************************/
/* START of UTS */
#include <UTS.h>

#include <SHA1Rand.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/System.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 6 "UTS.x10"

//#line 7 "UTS.x10"

//#line 8 "UTS.x10"

//#line 9 "UTS.x10"

//#line 11 "UTS.x10"

//#line 13 "UTS.x10"

//#line 15 "UTS.x10"
void UTS::_constructor(x10_int factor) {
    
    //#line 5 "UTS.x10"
    this->UTS::__fieldInitializers_UTS();
    
    //#line 16 "UTS.x10"
    this->FMGL(hash) = ::x10::lang::Rail< ::SHA1Rand >::_make(((x10_long)4096ll));
    
    //#line 17 "UTS.x10"
    this->FMGL(lower) = ::x10::lang::Rail< x10_int >::_make(((x10_long)4096ll));
    
    //#line 18 "UTS.x10"
    this->FMGL(upper) = ::x10::lang::Rail< x10_int >::_make(((x10_long)4096ll));
    
    //#line 19 "UTS.x10"
    this->FMGL(den) = ::x10::lang::MathNatives::log(((((x10_double) (factor))) / (((1.0) + (((x10_double) (factor)))))));
}
::UTS* UTS::_make(x10_int factor) {
    ::UTS* this_ = new (::x10aux::alloc_z< ::UTS>()) ::UTS();
    this_->_constructor(factor);
    return this_;
}



//#line 22 "UTS.x10"
void UTS::init(x10_int seed, x10_int height) {
    
    //#line 23 "UTS.x10"
    this->UTS::push(::SHA1Rand::_make(seed, height));
    
    //#line 24 "UTS.x10"
    this->FMGL(count) = ((this->FMGL(count)) + (((x10_long)1ll)));
}

//#line 27 "UTS.x10"
void UTS::push(::SHA1Rand h) {
    
    //#line 28 "UTS.x10"
    x10_int u = ::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::floor(((::x10::lang::MathNatives::log(((1.0) - (((((x10_double) (h->SHA1Rand::__apply()))) / (2.147483648E9)))))) / (this->FMGL(den)))));
    
    //#line 29 "UTS.x10"
    if (((u) > (((x10_int)0)))) {
        
        //#line 30 "UTS.x10"
        if (((this->FMGL(size)) >= ((x10_long)(::x10aux::nullCheck(this->FMGL(hash))->FMGL(size)))))
        {
            this->UTS::grow();
        }
        
        //#line 31 "UTS.x10"
        ::x10aux::nullCheck(this->FMGL(hash))->x10::lang::Rail< ::SHA1Rand >::__set(
          this->FMGL(size), h);
        
        //#line 32 "UTS.x10"
        ::x10aux::nullCheck(this->FMGL(lower))->x10::lang::Rail< x10_int >::__set(
          this->FMGL(size), ((x10_int)0));
        
        //#line 33 "UTS.x10"
        ::x10aux::nullCheck(this->FMGL(upper))->x10::lang::Rail< x10_int >::__set(
          ((this->FMGL(size) = ((this->FMGL(size)) + (((x10_long)1ll)))) - (((x10_long)1ll))),
          u);
    }
    
}

//#line 37 "UTS.x10"
void UTS::expand() {
    
    //#line 38 "UTS.x10"
    x10_long top = ((this->FMGL(size)) - (((x10_long)1ll)));
    
    //#line 39 "UTS.x10"
    ::SHA1Rand h = ::x10aux::nullCheck(this->FMGL(hash))->x10::lang::Rail< ::SHA1Rand >::__apply(
                     top);
    
    //#line 40 "UTS.x10"
    x10_int d = h->FMGL(depth);
    
    //#line 41 "UTS.x10"
    x10_int l = ::x10aux::nullCheck(this->FMGL(lower))->x10::lang::Rail< x10_int >::__apply(
                  top);
    
    //#line 42 "UTS.x10"
    x10_int u = ((::x10aux::nullCheck(this->FMGL(upper))->x10::lang::Rail< x10_int >::__apply(
                    top)) - (((x10_int)1)));
    
    //#line 44 "UTS.x10"
    if (((d) > (((x10_int)1)))) {
        
        //#line 45 "UTS.x10"
        if ((::x10aux::struct_equals(u, l))) {
            this->FMGL(size) = ((this->FMGL(size)) - (((x10_long)1ll)));
        } else {
            ::x10aux::nullCheck(this->FMGL(upper))->x10::lang::Rail< x10_int >::__set(
              top, u);
        }
        
        //#line 46 "UTS.x10"
        this->UTS::push(::SHA1Rand::_make(h, u, ((d) - (((x10_int)1)))));
    } else {
        
        //#line 48 "UTS.x10"
        this->FMGL(size) = ((this->FMGL(size)) - (((x10_long)1ll)));
        
        //#line 49 "UTS.x10"
        this->FMGL(count) = ((this->FMGL(count)) + (((x10_long)(((u) - (l))))));
    }
    
}

//#line 53 "UTS.x10"
void UTS::grow() {
    
    //#line 54 "UTS.x10"
    x10_long capacity = ((this->FMGL(size)) * (((x10_long)2ll)));
    
    //#line 55 "UTS.x10"
    ::x10::lang::Rail< ::SHA1Rand >* h = ::x10::lang::Rail< ::SHA1Rand >::_make(capacity);
    
    //#line 56 "UTS.x10"
    ::x10::lang::Rail< void >::copy< ::SHA1Rand >(this->FMGL(hash),
                                                  ((x10_long)0ll),
                                                  h, ((x10_long)0ll),
                                                  this->FMGL(size));
    
    //#line 57 "UTS.x10"
    this->FMGL(hash) = h;
    
    //#line 58 "UTS.x10"
    ::x10::lang::Rail< x10_int >* l = ::x10::lang::Rail< x10_int >::_make(capacity);
    
    //#line 59 "UTS.x10"
    ::x10::lang::Rail< void >::copy< x10_int >(this->FMGL(lower),
                                               ((x10_long)0ll),
                                               l, ((x10_long)0ll),
                                               this->FMGL(size));
    
    //#line 60 "UTS.x10"
    this->FMGL(lower) = l;
    
    //#line 61 "UTS.x10"
    ::x10::lang::Rail< x10_int >* u = ::x10::lang::Rail< x10_int >::_make(capacity);
    
    //#line 62 "UTS.x10"
    ::x10::lang::Rail< void >::copy< x10_int >(this->FMGL(upper),
                                               ((x10_long)0ll),
                                               u, ((x10_long)0ll),
                                               this->FMGL(size));
    
    //#line 63 "UTS.x10"
    this->FMGL(upper) = u;
}

//#line 66 "UTS.x10"
::x10::lang::String* UTS::sub(::x10::lang::String* str, x10_int start,
                              x10_int end) {
    return ::x10aux::nullCheck(str)->x10::lang::String::substring(
             start, ::x10::lang::Math::min(end, ::x10aux::nullCheck(str)->x10::lang::String::length()));
    
}

//#line 68 "UTS.x10"
void UTS::print(x10_long time, x10_long count) {
    
    //#line 69 "UTS.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::UTS_Strings::sl__1716), count), (&::UTS_Strings::sl__1717)), ::UTS::sub(
                                                                                                                                                                                                                                                                                      ::x10::lang::String::__plus((&::UTS_Strings::sl__1718), ((((x10_double) (time))) / (1.0E9))),
                                                                                                                                                                                                                                                                                      ((x10_int)0),
                                                                                                                                                                                                                                                                                      ((x10_int)6))), (&::UTS_Strings::sl__1719)), ::UTS::sub(
                                                                                                                                                                                                                                                                                                                                     ::x10::lang::String::__plus((&::UTS_Strings::sl__1718), ((((x10_double) (count))) / (((((x10_double) (time))) / (1000.0))))),
                                                                                                                                                                                                                                                                                                                                     ((x10_int)0),
                                                                                                                                                                                                                                                                                                                                     ((x10_int)6))), (&::UTS_Strings::sl__1720))));
}

//#line 74 "UTS.x10"
void UTS::main(::x10::lang::Rail< ::x10::lang::String* >* id__0) {
    
    //#line 75 "UTS.x10"
    ::UTS* queue = ::UTS::_make(((x10_int)4));
    
    //#line 76 "UTS.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::UTS_Strings::sl__1721)));
    
    //#line 77 "UTS.x10"
    x10_long time = ::x10::lang::System::nanoTime();
    
    //#line 78 "UTS.x10"
    queue->UTS::init(((x10_int)19), ((x10_int)13));
    
    //#line 79 "UTS.x10"
    while (((queue->FMGL(size)) > (((x10_long)0ll)))) {
        
        //#line 80 "UTS.x10"
        queue->UTS::expand();
        
        //#line 81 "UTS.x10"
        queue->FMGL(count) = ((queue->FMGL(count)) + (((x10_long)1ll)));
    }
    
    //#line 83 "UTS.x10"
    time = ((::x10::lang::System::nanoTime()) - (time));
    
    //#line 84 "UTS.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::UTS_Strings::sl__1722)));
    
    //#line 85 "UTS.x10"
    ::UTS::print(time, queue->FMGL(count));
}

//#line 5 "UTS.x10"
::UTS* UTS::UTS____this__UTS() {
    return this;
    
}
void UTS::__fieldInitializers_UTS() {
    this->FMGL(hash) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::SHA1Rand >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(lower) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(upper) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(size) = ((x10_long)0ll);
    this->FMGL(count) = ((x10_long)0ll);
}
const ::x10aux::serialization_id_t UTS::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::UTS::_deserializer);

void UTS::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(hash));
    buf.write(this->FMGL(lower));
    buf.write(this->FMGL(upper));
    buf.write(this->FMGL(size));
    buf.write(this->FMGL(den));
    buf.write(this->FMGL(count));
    
}

::x10::lang::Reference* ::UTS::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::UTS* this_ = new (::x10aux::alloc_z< ::UTS>()) ::UTS();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void UTS::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(hash) = buf.read< ::x10::lang::Rail< ::SHA1Rand >*>();
    FMGL(lower) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(upper) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(size) = buf.read<x10_long>();
    FMGL(den) = buf.read<x10_double>();
    FMGL(count) = buf.read<x10_long>();
}

::x10aux::RuntimeType UTS::rtt;
void UTS::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("UTS",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String UTS_Strings::sl__1718("");
::x10::lang::String UTS_Strings::sl__1721("Starting...");
::x10::lang::String UTS_Strings::sl__1720("M nodes/s");
::x10::lang::String UTS_Strings::sl__1719(" = ");
::x10::lang::String UTS_Strings::sl__1716("Performance: ");
::x10::lang::String UTS_Strings::sl__1722("Finished.");
::x10::lang::String UTS_Strings::sl__1717("/");

/* END of UTS */
/*************************************************/
