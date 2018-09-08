/*************************************************/
/* START of SHA1Rand */
#include <SHA1Rand.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/lang/String.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/compiler/NativeCPPCompilationUnit.h>
#include <x10/lang/String.h>
class SHA1Rand_ibox0 : public ::x10::lang::IBox< ::SHA1Rand> {
public:
    static ::x10::lang::Any::itable< SHA1Rand_ibox0 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
::x10::lang::Any::itable< SHA1Rand_ibox0 >  SHA1Rand_ibox0::itable(&SHA1Rand_ibox0::equals, &SHA1Rand_ibox0::hashCode, &SHA1Rand_ibox0::toString, &SHA1Rand_ibox0::typeName);
::x10::lang::Any::itable< ::SHA1Rand >  SHA1Rand::_itable_0(&SHA1Rand::equals, &SHA1Rand::hashCode, &SHA1Rand::toString, &SHA1Rand::typeName);
::x10aux::itable_entry SHA1Rand::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &SHA1Rand::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::SHA1Rand")};
::x10aux::itable_entry SHA1Rand::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &SHA1Rand_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::SHA1Rand")};

//#line 10 "/home/users/nicolaig/x10/x10-2.6.1_linux_x86_64/samples/GLB/uts/SHA1Rand.x10"

//#line 11 "/home/users/nicolaig/x10/x10-2.6.1_linux_x86_64/samples/GLB/uts/SHA1Rand.x10"

//#line 13 "/home/users/nicolaig/x10/x10-2.6.1_linux_x86_64/samples/GLB/uts/SHA1Rand.x10"


//#line 19 "/home/users/nicolaig/x10/x10-2.6.1_linux_x86_64/samples/GLB/uts/SHA1Rand.x10"


//#line 25 "/home/users/nicolaig/x10/x10-2.6.1_linux_x86_64/samples/GLB/uts/SHA1Rand.x10"

//#line 9 "/home/users/nicolaig/x10/x10-2.6.1_linux_x86_64/samples/GLB/uts/SHA1Rand.x10"
::x10::lang::String* SHA1Rand::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* SHA1Rand::toString() {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SHA1Rand_Strings::sl__1726), (&::SHA1Rand_Strings::sl__1727)), (*this)->FMGL(w0)), (&::SHA1Rand_Strings::sl__1728)), (*this)->FMGL(w1)), (&::SHA1Rand_Strings::sl__1729)), (*this)->FMGL(w2)), (&::SHA1Rand_Strings::sl__1730)), (*this)->FMGL(w3)), (&::SHA1Rand_Strings::sl__1731)), (*this)->FMGL(w4)), (&::SHA1Rand_Strings::sl__1732)), (*this)->FMGL(depth));
    
}
x10_int SHA1Rand::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(w0))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(w1))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(w2))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(w3))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(w4))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(depth))));
    return result;
    
}
x10_boolean SHA1Rand::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::SHA1Rand>(other))) {
        return false;
        
    }
    return (*this)->SHA1Rand::equals(::x10aux::class_cast< ::SHA1Rand>(other));
    
}
x10_boolean SHA1Rand::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::SHA1Rand>(other))) {
        return false;
        
    }
    return (*this)->SHA1Rand::_struct_equals(::x10aux::class_cast< ::SHA1Rand>(other));
    
}

//#line 5 "/home/users/nicolaig/x10/x10-2.6.1_linux_x86_64/samples/GLB/uts/SHA1Rand.x10"
void ::SHA1Rand::_serialize(::SHA1Rand this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(w0));
    buf.write(this_->FMGL(w1));
    buf.write(this_->FMGL(w2));
    buf.write(this_->FMGL(w3));
    buf.write(this_->FMGL(w4));
    buf.write(this_->FMGL(depth));
    
}

void ::SHA1Rand::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(w0) = buf.read<x10_int>();
    FMGL(w1) = buf.read<x10_int>();
    FMGL(w2) = buf.read<x10_int>();
    FMGL(w3) = buf.read<x10_int>();
    FMGL(w4) = buf.read<x10_int>();
    FMGL(depth) = buf.read<x10_int>();
}


::x10aux::RuntimeType SHA1Rand::rtt;
void SHA1Rand::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("SHA1Rand",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

::x10::lang::String SHA1Rand_Strings::sl__1731(" w4=");
::x10::lang::String SHA1Rand_Strings::sl__1730(" w3=");
::x10::lang::String SHA1Rand_Strings::sl__1729(" w2=");
::x10::lang::String SHA1Rand_Strings::sl__1728(" w1=");
::x10::lang::String SHA1Rand_Strings::sl__1727(" w0=");
::x10::lang::String SHA1Rand_Strings::sl__1732(" depth=");
::x10::lang::String SHA1Rand_Strings::sl__1726("struct SHA1Rand:");

/* END of SHA1Rand */
/*************************************************/
