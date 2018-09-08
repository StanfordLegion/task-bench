/*************************************************/
/* START of Bag */
#include <Bag.h>

#include <x10/glb/TaskBag.h>
#include <SHA1Rand.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Inline.h>
#include <x10/compiler/Synthetic.h>
::x10::glb::TaskBag::itable< ::Bag >  Bag::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &Bag::size, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10::lang::Any::itable< ::Bag >  Bag::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
::x10aux::itable_entry Bag::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::glb::TaskBag>, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::Bag")};

//#line 6 "Bag.x10"

//#line 7 "Bag.x10"

//#line 8 "Bag.x10"

//#line 10 "Bag.x10"
void Bag::_constructor(x10_long size) {
    
    //#line 5 "Bag.x10"
    this->Bag::__fieldInitializers_Bag();
    
    //#line 11 "Bag.x10"
    this->FMGL(hash) = ::x10::lang::Rail< ::SHA1Rand >::_make(size);
    
    //#line 12 "Bag.x10"
    this->FMGL(lower) = ::x10::lang::Rail< x10_int >::_make(size);
    
    //#line 13 "Bag.x10"
    this->FMGL(upper) = ::x10::lang::Rail< x10_int >::_make(size);
}
::Bag* Bag::_make(x10_long size) {
    ::Bag* this_ = new (::x10aux::alloc_z< ::Bag>()) ::Bag();
    this_->_constructor(size);
    return this_;
}



//#line 16 "Bag.x10"
x10_long Bag::size() {
    return (x10_long)(::x10aux::nullCheck(this->FMGL(hash))->FMGL(size));
    
}

//#line 5 "Bag.x10"
::Bag* Bag::Bag____this__Bag() {
    return this;
    
}
void Bag::__fieldInitializers_Bag() {
 
}
const ::x10aux::serialization_id_t Bag::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::Bag::_deserializer);

void Bag::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(hash));
    buf.write(this->FMGL(lower));
    buf.write(this->FMGL(upper));
    
}

::x10::lang::Reference* ::Bag::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::Bag* this_ = new (::x10aux::alloc_z< ::Bag>()) ::Bag();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Bag::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(hash) = buf.read< ::x10::lang::Rail< ::SHA1Rand >*>();
    FMGL(lower) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(upper) = buf.read< ::x10::lang::Rail< x10_int >*>();
}

::x10aux::RuntimeType Bag::rtt;
void Bag::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::glb::TaskBag>()};
    rtt.initStageTwo("Bag",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of Bag */
/*************************************************/
