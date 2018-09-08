#ifndef __X10_GLB_ARRAYLISTTASKBAG_H
#define __X10_GLB_ARRAYLISTTASKBAG_H

#include <x10rt.h>


#define X10_GLB_TASKBAG_H_NODEPS
#include <x10/glb/TaskBag.h>
#undef X10_GLB_TASKBAG_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class AbstractCollection;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Container;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace glb { 

template<class TPMGL(T)> class ArrayListTaskBag;
template <> class ArrayListTaskBag<void>;
template<class TPMGL(T)> class ArrayListTaskBag : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::glb::TaskBag::itable< ::x10::glb::ArrayListTaskBag<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::glb::ArrayListTaskBag<TPMGL(T)> > _itable_1;
    
    ::x10::util::ArrayList<TPMGL(T)>* FMGL(bag);
    
    virtual x10_long size();
    virtual void merge(::x10::glb::TaskBag* tb0);
    virtual ::x10::glb::ArrayListTaskBag<TPMGL(T)>* split();
    virtual ::x10::util::ArrayList<TPMGL(T)>* bag();
    virtual ::x10::glb::ArrayListTaskBag<TPMGL(T)>* x10__glb__ArrayListTaskBag____this__x10__glb__ArrayListTaskBag(
      );
    void _constructor();
    
    static ::x10::glb::ArrayListTaskBag<TPMGL(T)>* _make();
    
    virtual void __fieldInitializers_x10_glb_ArrayListTaskBag();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::glb::ArrayListTaskBag<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::glb::ArrayListTaskBag<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::glb::ArrayListTaskBag<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::glb::TaskBag>()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.glb.ArrayListTaskBag";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class ArrayListTaskBag<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_GLB_ARRAYLISTTASKBAG_H

namespace x10 { namespace glb { 
template<class TPMGL(T)> class ArrayListTaskBag;
} } 

#ifndef X10_GLB_ARRAYLISTTASKBAG_H_NODEPS
#define X10_GLB_ARRAYLISTTASKBAG_H_NODEPS
#include <x10/glb/TaskBag.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Long.h>
#include <x10/util/AbstractCollection.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Container.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_GLB_ARRAYLISTTASKBAG_H_GENERICS
#define X10_GLB_ARRAYLISTTASKBAG_H_GENERICS
#endif // X10_GLB_ARRAYLISTTASKBAG_H_GENERICS
#ifndef X10_GLB_ARRAYLISTTASKBAG_H_IMPLEMENTATION
#define X10_GLB_ARRAYLISTTASKBAG_H_IMPLEMENTATION
#include <x10/glb/ArrayListTaskBag.h>

template<class TPMGL(T)> ::x10::glb::TaskBag::itable< ::x10::glb::ArrayListTaskBag<TPMGL(T)> >  x10::glb::ArrayListTaskBag<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::glb::ArrayListTaskBag<TPMGL(T)>::size, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::glb::ArrayListTaskBag<TPMGL(T)> >  x10::glb::ArrayListTaskBag<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::glb::ArrayListTaskBag<TPMGL(T)>::_itables[3] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::glb::TaskBag>, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(NULL, (void*)"::x10::glb::ArrayListTaskBag<TPMGL(T)>")};

//#line 21 "x10/glb/ArrayListTaskBag.x10"

//#line 23 "x10/glb/ArrayListTaskBag.x10"
template<class TPMGL(T)> x10_long x10::glb::ArrayListTaskBag<TPMGL(T)>::size(
  ) {
    return this->FMGL(bag)->size();
    
}

//#line 29 "x10/glb/ArrayListTaskBag.x10"
/**
     * Merge incoming taskbag with local bag.
     * @param tb0 incoming taskbag
     */
template<class TPMGL(T)> void x10::glb::ArrayListTaskBag<TPMGL(T)>::merge(
  ::x10::glb::TaskBag* tb0) {
    
    //#line 30 "x10/glb/ArrayListTaskBag.x10"
    #ifndef NO_ASSERTIONS
    if (::x10aux::x10__assertions_enabled)
        ::x10aux::x10__assert(::x10aux::instanceof< ::x10::glb::ArrayListTaskBag<TPMGL(T)>*>(tb0));
    #endif//NO_ASSERTIONS
    
    //#line 31 "x10/glb/ArrayListTaskBag.x10"
    ::x10::glb::ArrayListTaskBag<TPMGL(T)>* tb = ::x10aux::class_cast< ::x10::glb::ArrayListTaskBag<TPMGL(T)>*>(tb0);
    
    //#line 32 "x10/glb/ArrayListTaskBag.x10"
    this->FMGL(bag)->addAll(reinterpret_cast< ::x10::util::Container<TPMGL(T)>*>(::x10aux::nullCheck(tb)->FMGL(bag)));
}

//#line 40 "x10/glb/ArrayListTaskBag.x10"
/**
     * Split local bag into two and return half of it
     * @return null if bag size is less than (or equal to) 1
     *         half of the local bag
     */
template<class TPMGL(T)> ::x10::glb::ArrayListTaskBag<TPMGL(T)>* x10::glb::ArrayListTaskBag<TPMGL(T)>::split(
  ) {
    
    //#line 41 "x10/glb/ArrayListTaskBag.x10"
    if (((this->FMGL(bag)->size()) <= (((x10_long)1ll)))) {
        return ::x10aux::class_cast_unchecked< ::x10::glb::ArrayListTaskBag<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
    //#line 42 "x10/glb/ArrayListTaskBag.x10"
    x10_long size = ((this->FMGL(bag)->size()) / ::x10aux::zeroCheck(((x10_long)2ll)));
    
    //#line 43 "x10/glb/ArrayListTaskBag.x10"
    ::x10::glb::ArrayListTaskBag<TPMGL(T)>* o =  (new (::x10aux::alloc_z< ::x10::glb::ArrayListTaskBag<TPMGL(T)> >()) ::x10::glb::ArrayListTaskBag<TPMGL(T)>());
    
    //#line 19 "x10/glb/ArrayListTaskBag.x10"
    o->FMGL(bag) = (__extension__ ({
        
        //#line 21 "x10/glb/ArrayListTaskBag.x10"
        ::x10::util::ArrayList<TPMGL(T)>* alloc__108786 =  (new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>());
        (alloc__108786)->::x10::util::ArrayList<TPMGL(T)>::_constructor();
        alloc__108786;
    }))
    ;
    
    //#line 44 "x10/glb/ArrayListTaskBag.x10"
    {
        x10_long i__108788;
        for (i__108788 = ((x10_long)1ll); ((i__108788) <= (size));
             i__108788 = ((i__108788) + (((x10_long)1ll)))) {
            o->FMGL(bag)->add(this->FMGL(bag)->removeLast());
        }
    }
    
    //#line 45 "x10/glb/ArrayListTaskBag.x10"
    return o;
    
}

//#line 52 "x10/glb/ArrayListTaskBag.x10"
/**
     * Return local bag.
     * @return local bag.
     */
template<class TPMGL(T)> ::x10::util::ArrayList<TPMGL(T)>* x10::glb::ArrayListTaskBag<TPMGL(T)>::bag(
  ) {
    return this->FMGL(bag);
    
}

//#line 19 "x10/glb/ArrayListTaskBag.x10"
template<class TPMGL(T)> ::x10::glb::ArrayListTaskBag<TPMGL(T)>*
  x10::glb::ArrayListTaskBag<TPMGL(T)>::x10__glb__ArrayListTaskBag____this__x10__glb__ArrayListTaskBag(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::glb::ArrayListTaskBag<TPMGL(T)>::_constructor(
                           ) {
    ::x10::glb::ArrayListTaskBag<TPMGL(T)>* this__108791 =
      this;
    ::x10aux::nullCheck(this__108791)->FMGL(bag) = (__extension__ ({
        
        //#line 21 "x10/glb/ArrayListTaskBag.x10"
        ::x10::util::ArrayList<TPMGL(T)>* alloc__108790 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>());
        (alloc__108790)->::x10::util::ArrayList<TPMGL(T)>::_constructor();
        alloc__108790;
    }))
    ;
}
template<class TPMGL(T)> ::x10::glb::ArrayListTaskBag<TPMGL(T)>* x10::glb::ArrayListTaskBag<TPMGL(T)>::_make(
                           ) {
    ::x10::glb::ArrayListTaskBag<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::glb::ArrayListTaskBag<TPMGL(T)> >()) ::x10::glb::ArrayListTaskBag<TPMGL(T)>();
    this_->_constructor();
    return this_;
}


template<class TPMGL(T)> void x10::glb::ArrayListTaskBag<TPMGL(T)>::__fieldInitializers_x10_glb_ArrayListTaskBag(
  ) {
    this->FMGL(bag) = (__extension__ ({
        
        //#line 21 "x10/glb/ArrayListTaskBag.x10"
        ::x10::util::ArrayList<TPMGL(T)>* alloc__108319 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList<TPMGL(T)> >()) ::x10::util::ArrayList<TPMGL(T)>());
        (alloc__108319)->::x10::util::ArrayList<TPMGL(T)>::_constructor();
        alloc__108319;
    }))
    ;
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::glb::ArrayListTaskBag<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::glb::ArrayListTaskBag<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::glb::ArrayListTaskBag<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(bag));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::glb::ArrayListTaskBag<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::glb::ArrayListTaskBag<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::glb::ArrayListTaskBag<TPMGL(T)> >()) ::x10::glb::ArrayListTaskBag<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::glb::ArrayListTaskBag<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(bag) = buf.read< ::x10::util::ArrayList<TPMGL(T)>*>();
}

#endif // X10_GLB_ARRAYLISTTASKBAG_H_IMPLEMENTATION
#endif // __X10_GLB_ARRAYLISTTASKBAG_H_NODEPS
