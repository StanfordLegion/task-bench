#ifndef __X10_UTIL_ABSTRACTCONTAINER_H
#define __X10_UTIL_ABSTRACTCONTAINER_H

#include <x10rt.h>


#define X10_UTIL_CONTAINER_H_NODEPS
#include <x10/util/Container.h>
#undef X10_UTIL_CONTAINER_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

template<class TPMGL(T)> class AbstractContainer;
template <> class AbstractContainer<void>;
template<class TPMGL(T)> class AbstractContainer : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual x10_long size() = 0;
    virtual x10_boolean isEmpty();
    virtual x10_boolean contains(TPMGL(T) y) = 0;
    virtual ::x10::util::Container<TPMGL(T)>* clone() = 0;
    virtual ::x10::lang::Iterator<TPMGL(T)>* iterator() = 0;
    virtual x10_boolean containsAll(::x10::util::Container<TPMGL(T)>* c);
    virtual ::x10::util::AbstractContainer<TPMGL(T)>* x10__util__AbstractContainer____this__x10__util__AbstractContainer(
      );
    void _constructor();
    
    virtual void __fieldInitializers_x10_util_AbstractContainer();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::AbstractContainer<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::AbstractContainer<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::AbstractContainer<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::util::Container<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.AbstractContainer";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class AbstractContainer<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_ABSTRACTCONTAINER_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class AbstractContainer;
} } 

#ifndef X10_UTIL_ABSTRACTCONTAINER_H_NODEPS
#define X10_UTIL_ABSTRACTCONTAINER_H_NODEPS
#include <x10/util/Container.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_ABSTRACTCONTAINER_H_GENERICS
#define X10_UTIL_ABSTRACTCONTAINER_H_GENERICS
#endif // X10_UTIL_ABSTRACTCONTAINER_H_GENERICS
#ifndef X10_UTIL_ABSTRACTCONTAINER_H_IMPLEMENTATION
#define X10_UTIL_ABSTRACTCONTAINER_H_IMPLEMENTATION
#include <x10/util/AbstractContainer.h>


//#line 16 "x10/util/AbstractContainer.x10"

//#line 18 "x10/util/AbstractContainer.x10"
template<class TPMGL(T)> x10_boolean x10::util::AbstractContainer<TPMGL(T)>::isEmpty(
  ) {
    return (::x10aux::struct_equals(this->size(), ((x10_long)0ll)));
    
}

//#line 20 "x10/util/AbstractContainer.x10"

//#line 21 "x10/util/AbstractContainer.x10"

//#line 22 "x10/util/AbstractContainer.x10"

//#line 24 "x10/util/AbstractContainer.x10"
template<class TPMGL(T)> x10_boolean x10::util::AbstractContainer<TPMGL(T)>::containsAll(
  ::x10::util::Container<TPMGL(T)>* c) {
    
    //#line 25 "x10/util/AbstractContainer.x10"
    {
        ::x10::lang::Iterator<TPMGL(T)>* x__136237;
        for (x__136237 = ::x10::util::Container<TPMGL(T)>::iterator(::x10aux::nullCheck(c));
             ::x10::lang::Iterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(x__136237));
             ) {
            TPMGL(T) x = ::x10::lang::Iterator<TPMGL(T)>::next(::x10aux::nullCheck(x__136237));
            
            //#line 26 "x10/util/AbstractContainer.x10"
            if (!(this->contains(x))) {
                
                //#line 27 "x10/util/AbstractContainer.x10"
                return false;
                
            }
            
        }
    }
    
    //#line 29 "x10/util/AbstractContainer.x10"
    return true;
    
}

//#line 15 "x10/util/AbstractContainer.x10"
template<class TPMGL(T)> ::x10::util::AbstractContainer<TPMGL(T)>*
  x10::util::AbstractContainer<TPMGL(T)>::x10__util__AbstractContainer____this__x10__util__AbstractContainer(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::AbstractContainer<TPMGL(T)>::_constructor(
                           ) {
    
}

template<class TPMGL(T)> void x10::util::AbstractContainer<TPMGL(T)>::__fieldInitializers_x10_util_AbstractContainer(
  ) {
 
}
template<class TPMGL(T)> void x10::util::AbstractContainer<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

template<class TPMGL(T)> void x10::util::AbstractContainer<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

#endif // X10_UTIL_ABSTRACTCONTAINER_H_IMPLEMENTATION
#endif // __X10_UTIL_ABSTRACTCONTAINER_H_NODEPS
