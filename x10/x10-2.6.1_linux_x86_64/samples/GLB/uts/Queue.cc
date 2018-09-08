/*************************************************/
/* START of Queue */
#include <Queue.h>

#include <UTS.h>
#include <x10/glb/TaskQueue.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/glb/Context.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Inline.h>
#include <Bag.h>
#include <x10/lang/Rail.h>
#include <SHA1Rand.h>
#include <x10/glb/TaskBag.h>
#include <Queue__UTSResult.h>
#include <x10/compiler/Synthetic.h>
::x10::glb::TaskQueue< ::Queue*, x10_long>::itable< ::Queue >  Queue::_itable_0(&Queue::count, &::x10::lang::X10Class::equals, &Queue::getResult, &::x10::lang::X10Class::hashCode, &Queue::merge, &Queue::printLog, &Queue::process, &Queue::split, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10::lang::Any::itable< ::Queue >  Queue::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10aux::itable_entry Queue::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::glb::TaskQueue< ::Queue*, x10_long> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::Queue")};

//#line 10 "Queue.x10"
void Queue::_constructor(x10_int factor) {
    
    //#line 11 "Queue.x10"
    (this)->::UTS::_constructor(factor);
    
    //#line 10 "Queue.x10"
    
    //#line 9 "Queue.x10"
    this->Queue::__fieldInitializers_Queue();
}
::Queue* Queue::_make(x10_int factor) {
    ::Queue* this_ = new (::x10aux::alloc_z< ::Queue>()) ::Queue();
    this_->_constructor(factor);
    return this_;
}



//#line 14 "Queue.x10"
x10_boolean Queue::process(x10_long n, ::x10::glb::Context< ::Queue*, x10_long>* context) {
    
    //#line 15 "Queue.x10"
    x10_long i = ((x10_long)0ll);
    
    //#line 16 "Queue.x10"
    {
        for (; (((i) < (n)) && ((this->FMGL(size)) > (((x10_long)0ll))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 17 "Queue.x10"
            this->Queue::expand();
        }
    }
    
    //#line 19 "Queue.x10"
    this->FMGL(count) = ((this->FMGL(count)) + (i));
    
    //#line 20 "Queue.x10"
    return ((this->FMGL(size)) > (((x10_long)0ll)));
    
}

//#line 23 "Queue.x10"
::x10::glb::TaskBag* Queue::split() {
    
    //#line 24 "Queue.x10"
    x10_long s = ((x10_long)0ll);
    
    //#line 25 "Queue.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size))); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 26 "Queue.x10"
            if (((((x10_long)(((::x10aux::nullCheck(this->FMGL(upper))->x10::lang::Rail< x10_int >::__apply(
                                  i)) - (::x10aux::nullCheck(this->FMGL(lower))->x10::lang::Rail< x10_int >::__apply(
                                           i)))))) >= (((x10_long)2ll))))
            {
                s = ((s) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 28 "Queue.x10"
    if ((::x10aux::struct_equals(s, ((x10_long)0ll)))) {
        return reinterpret_cast< ::x10::glb::TaskBag*>(::x10aux::class_cast_unchecked< ::Bag*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
    }
    
    //#line 29 "Queue.x10"
    ::Bag* bag = ::Bag::_make(s);
    
    //#line 30 "Queue.x10"
    s = ((x10_long)0ll);
    
    //#line 31 "Queue.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 32 "Queue.x10"
            x10_int p = ((::x10aux::nullCheck(this->FMGL(upper))->x10::lang::Rail< x10_int >::__apply(
                            i)) - (::x10aux::nullCheck(this->FMGL(lower))->x10::lang::Rail< x10_int >::__apply(
                                     i)));
            
            //#line 33 "Queue.x10"
            if (((p) >= (((x10_int)2)))) {
                
                //#line 34 "Queue.x10"
                ::x10aux::nullCheck(bag->FMGL(hash))->x10::lang::Rail< ::SHA1Rand >::__set(
                  s, ::x10aux::nullCheck(this->FMGL(hash))->x10::lang::Rail< ::SHA1Rand >::__apply(
                       i));
                
                //#line 35 "Queue.x10"
                ::x10aux::nullCheck(bag->FMGL(upper))->x10::lang::Rail< x10_int >::__set(
                  s, ::x10aux::nullCheck(this->FMGL(upper))->x10::lang::Rail< x10_int >::__apply(
                       i));
                
                //#line 36 "Queue.x10"
                ::x10::lang::Rail< x10_int >* a__2021 = this->FMGL(upper);
                x10_long i__2022 = i;
                x10_int r__2023 = ((::x10aux::nullCheck(a__2021)->x10::lang::Rail< x10_int >::__apply(
                                      i__2022)) - (((p) / ::x10aux::zeroCheck(((x10_int)2)))));
                ::x10aux::nullCheck(a__2021)->x10::lang::Rail< x10_int >::__set(
                  i__2022, r__2023);
                
                //#line 37 "Queue.x10"
                ::x10aux::nullCheck(bag->FMGL(lower))->x10::lang::Rail< x10_int >::__set(
                  (__extension__ ({
                      x10_long pre__1986 = s;
                      s = ((s) + (((x10_long)1ll)));
                      pre__1986;
                  }))
                  , ::x10aux::nullCheck(this->FMGL(upper))->x10::lang::Rail< x10_int >::__apply(
                      i));
            }
            
        }
    }
    
    //#line 40 "Queue.x10"
    return reinterpret_cast< ::x10::glb::TaskBag*>(bag);
    
}

//#line 43 "Queue.x10"
void Queue::merge(::Bag* bag) {
    
    //#line 44 "Queue.x10"
    x10_long h = ::x10aux::nullCheck(bag)->Bag::size();
    
    //#line 45 "Queue.x10"
    x10_long q = this->FMGL(size);
    
    //#line 46 "Queue.x10"
    while (((((h) + (q))) > ((x10_long)(::x10aux::nullCheck(this->FMGL(hash))->FMGL(size)))))
    {
        this->Queue::grow();
    }
    
    //#line 47 "Queue.x10"
    ::x10::lang::Rail< void >::copy< ::SHA1Rand >(::x10aux::nullCheck(bag)->FMGL(hash),
                                                  ((x10_long)0ll),
                                                  this->FMGL(hash),
                                                  q, h);
    
    //#line 48 "Queue.x10"
    ::x10::lang::Rail< void >::copy< x10_int >(::x10aux::nullCheck(bag)->FMGL(lower),
                                               ((x10_long)0ll),
                                               this->FMGL(lower),
                                               q, h);
    
    //#line 49 "Queue.x10"
    ::x10::lang::Rail< void >::copy< x10_int >(::x10aux::nullCheck(bag)->FMGL(upper),
                                               ((x10_long)0ll),
                                               this->FMGL(upper),
                                               q, h);
    
    //#line 50 "Queue.x10"
    this->FMGL(size) = ((this->FMGL(size)) + (h));
}

//#line 53 "Queue.x10"
void Queue::merge(::x10::glb::TaskBag* bag) {
    
    //#line 54 "Queue.x10"
    this->Queue::merge(::x10aux::class_cast< ::Bag*>(bag));
}

//#line 58 "Queue.x10"
void Queue::printLog() {
 
}

//#line 62 "Queue.x10"
x10_long Queue::count() {
    return this->FMGL(count);
    
}

//#line 66 "Queue.x10"

//#line 67 "Queue.x10"
::x10::glb::GLBResult<x10_long>* Queue::getResult() {
    
    //#line 68 "Queue.x10"
    ::Queue__UTSResult* result = ::Queue__UTSResult::_make(this);
    
    //#line 69 "Queue.x10"
    return reinterpret_cast< ::x10::glb::GLBResult<x10_long>*>(result);
    
}

//#line 9 "Queue.x10"
::Queue* Queue::Queue____this__Queue() {
    return this;
    
}
void Queue::__fieldInitializers_Queue() {
    this->FMGL(result) = (::x10aux::class_cast_unchecked< ::Queue__UTSResult*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t Queue::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::Queue::_deserializer);

void Queue::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::UTS::_serialize_body(buf);
    buf.write(this->FMGL(result));
    
}

::x10::lang::Reference* ::Queue::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::Queue* this_ = new (::x10aux::alloc_z< ::Queue>()) ::Queue();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Queue::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::UTS::_deserialize_body(buf);
    FMGL(result) = buf.read< ::Queue__UTSResult*>();
}

::x10aux::RuntimeType Queue::rtt;
void Queue::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::UTS>(), ::x10aux::getRTT< ::x10::glb::TaskQueue< ::Queue*, x10_long> >()};
    rtt.initStageTwo("Queue",::x10aux::RuntimeType::class_kind, 2, parents, 0, NULL, NULL);
}

/* END of Queue */
/*************************************************/
/*************************************************/
/* START of Queue$UTSResult */
#include <Queue__UTSResult.h>

#include <x10/glb/GLBResult.h>
#include <x10/lang/Long.h>
#include <Queue.h>
#include <x10/lang/Rail.h>
#include <UTS.h>
#include <x10/lang/Int.h>
#include <x10/util/Team.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 9 "Queue.x10"

//#line 76 "Queue.x10"

//#line 77 "Queue.x10"
::x10::lang::Rail< x10_long >* Queue__UTSResult::getResult() {
    
    //#line 78 "Queue.x10"
    ::x10aux::nullCheck(this->FMGL(r))->x10::lang::Rail< x10_long >::__set(
      ((x10_long)0ll), ::x10aux::nullCheck(this->FMGL(out__))->FMGL(count));
    
    //#line 79 "Queue.x10"
    return this->FMGL(r);
    
}

//#line 81 "Queue.x10"
x10_int Queue__UTSResult::getReduceOperator() {
    
    //#line 82 "Queue.x10"
    return ::x10::util::Team::FMGL(ADD__get)();
    
}

//#line 85 "Queue.x10"
void Queue__UTSResult::display(::x10::lang::Rail< x10_long >* r) {
    
    //#line 86 "Queue.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::Queue__UTSResult_Strings::sl__3222), ::x10aux::nullCheck(r)->x10::lang::Rail< x10_long >::__apply(
                                                                                                                                                                                ((x10_long)0ll)))));
}

//#line 75 "Queue.x10"
::Queue__UTSResult* Queue__UTSResult::Queue__UTSResult____this__Queue__UTSResult(
  ) {
    return this;
    
}
::Queue* Queue__UTSResult::Queue__UTSResult____this__Queue(
  ) {
    return this->FMGL(out__);
    
}
void Queue__UTSResult::_constructor(::Queue* out__) {
    (this)->::x10::glb::GLBResult<x10_long>::_constructor();
    
    //#line 9 "Queue.x10"
    this->FMGL(out__) = out__;
    
    //#line 75 "Queue.x10"
    this->Queue__UTSResult::__fieldInitializers_Queue_UTSResult();
}
::Queue__UTSResult* Queue__UTSResult::_make(::Queue* out__)
{
    ::Queue__UTSResult* this_ = new (::x10aux::alloc_z< ::Queue__UTSResult>()) ::Queue__UTSResult();
    this_->_constructor(out__);
    return this_;
}


void Queue__UTSResult::__fieldInitializers_Queue_UTSResult(
  ) {
    this->FMGL(r) = ::x10::lang::Rail< x10_long >::_make(((x10_long)1ll));
}
const ::x10aux::serialization_id_t Queue__UTSResult::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::Queue__UTSResult::_deserializer);

void Queue__UTSResult::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::glb::GLBResult<x10_long>::_serialize_body(buf);
    buf.write(this->FMGL(r));
    buf.write(this->FMGL(out__));
    
}

::x10::lang::Reference* ::Queue__UTSResult::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::Queue__UTSResult* this_ = new (::x10aux::alloc_z< ::Queue__UTSResult>()) ::Queue__UTSResult();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Queue__UTSResult::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::glb::GLBResult<x10_long>::_deserialize_body(buf);
    FMGL(r) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(out__) = buf.read< ::Queue*>();
}

::x10aux::RuntimeType Queue__UTSResult::rtt;
void Queue__UTSResult::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::glb::GLBResult<x10_long> >()};
    rtt.initStageTwo("Queue.UTSResult",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::String Queue__UTSResult_Strings::sl__3222("Myresult: ");

/* END of Queue$UTSResult */
/*************************************************/
