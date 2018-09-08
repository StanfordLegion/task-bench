#ifndef __X10_UTIL_MAPSET_H
#define __X10_UTIL_MAPSET_H

#include <x10rt.h>


#define X10_UTIL_ABSTRACTCOLLECTION_H_NODEPS
#include <x10/util/AbstractCollection.h>
#undef X10_UTIL_ABSTRACTCOLLECTION_H_NODEPS
#define X10_UTIL_SET_H_NODEPS
#include <x10/util/Set.h>
#undef X10_UTIL_SET_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class Map;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Container;
} } 
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

template<class TPMGL(T)> class MapSet;
template <> class MapSet<void>;
template<class TPMGL(T)> class MapSet : public ::x10::util::AbstractCollection<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::Map<TPMGL(T), x10_boolean>* FMGL(map);
    
    void _constructor(::x10::util::Map<TPMGL(T), x10_boolean>* map);
    
    virtual x10_long size();
    virtual x10_boolean contains(TPMGL(T) v);
    virtual x10_boolean add(TPMGL(T) v);
    virtual x10_boolean remove(TPMGL(T) v);
    virtual void clear();
    virtual ::x10::lang::Iterator<TPMGL(T)>* iterator();
    virtual ::x10::util::MapSet<TPMGL(T)>* x10__util__MapSet____this__x10__util__MapSet(
      );
    virtual void __fieldInitializers_x10_util_MapSet();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::MapSet<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::MapSet<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::MapSet<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::util::AbstractCollection<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::util::Set<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.MapSet";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class MapSet<void> : public ::x10::util::AbstractCollection<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_UTIL_MAPSET_H

namespace x10 { namespace util { 
template<class TPMGL(T)> class MapSet;
} } 

#ifndef X10_UTIL_MAPSET_H_NODEPS
#define X10_UTIL_MAPSET_H_NODEPS
#include <x10/util/AbstractCollection.h>
#include <x10/util/Set.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Map.h>
#include <x10/lang/Long.h>
#include <x10/util/Container.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_MAPSET_H_GENERICS
#define X10_UTIL_MAPSET_H_GENERICS
#endif // X10_UTIL_MAPSET_H_GENERICS
#ifndef X10_UTIL_MAPSET_H_IMPLEMENTATION
#define X10_UTIL_MAPSET_H_IMPLEMENTATION
#include <x10/util/MapSet.h>


//#line 15 "x10/util/MapSet.x10"

//#line 17 "x10/util/MapSet.x10"
template<class TPMGL(T)> void x10::util::MapSet<TPMGL(T)>::_constructor(::x10::util::Map<TPMGL(T), x10_boolean>* map) {
    (this)->::x10::util::AbstractCollection<TPMGL(T)>::_constructor();
    this->FMGL(map) = map;
}


//#line 19 "x10/util/MapSet.x10"
template<class TPMGL(T)> x10_long x10::util::MapSet<TPMGL(T)>::size() {
    return ::x10::util::Set<TPMGL(T)>::size(::x10aux::nullCheck(::x10::util::Map<TPMGL(T), x10_boolean>::keySet(::x10aux::nullCheck(this->FMGL(map)))));
    
}

//#line 20 "x10/util/MapSet.x10"
template<class TPMGL(T)> x10_boolean x10::util::MapSet<TPMGL(T)>::contains(
  TPMGL(T) v) {
    return ::x10::util::Map<TPMGL(T), x10_boolean>::containsKey(::x10aux::nullCheck(this->FMGL(map)), 
             v);
    
}

//#line 21 "x10/util/MapSet.x10"
template<class TPMGL(T)> x10_boolean x10::util::MapSet<TPMGL(T)>::add(
  TPMGL(T) v) {
    
    //#line 22 "x10/util/MapSet.x10"
    if (::x10::util::Map<TPMGL(T), x10_boolean>::containsKey(::x10aux::nullCheck(this->FMGL(map)), 
          v)) {
        return false;
        
    }
    
    //#line 23 "x10/util/MapSet.x10"
    ::x10::util::Map<TPMGL(T), x10_boolean>::put(::x10aux::nullCheck(this->FMGL(map)), 
      v, true);
    
    //#line 24 "x10/util/MapSet.x10"
    return true;
    
}

//#line 26 "x10/util/MapSet.x10"
template<class TPMGL(T)> x10_boolean x10::util::MapSet<TPMGL(T)>::remove(
  TPMGL(T) v) {
    return ::x10::util::Map<TPMGL(T), x10_boolean>::_kwd__delete(::x10aux::nullCheck(this->FMGL(map)), 
             v);
    
}

//#line 27 "x10/util/MapSet.x10"
template<class TPMGL(T)> void x10::util::MapSet<TPMGL(T)>::clear(
  ) {
    ::x10::util::Map<TPMGL(T), x10_boolean>::clear(::x10aux::nullCheck(this->FMGL(map)));
}

//#line 28 "x10/util/MapSet.x10"
template<class TPMGL(T)> ::x10::lang::Iterator<TPMGL(T)>*
  x10::util::MapSet<TPMGL(T)>::iterator() {
    return ::x10::util::Set<TPMGL(T)>::iterator(::x10aux::nullCheck(::x10::util::Map<TPMGL(T), x10_boolean>::keySet(::x10aux::nullCheck(this->FMGL(map)))));
    
}

//#line 14 "x10/util/MapSet.x10"
template<class TPMGL(T)> ::x10::util::MapSet<TPMGL(T)>* x10::util::MapSet<TPMGL(T)>::x10__util__MapSet____this__x10__util__MapSet(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::MapSet<TPMGL(T)>::__fieldInitializers_x10_util_MapSet(
  ) {
 
}
template<class TPMGL(T)> void x10::util::MapSet<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::util::AbstractCollection<TPMGL(T)>::_serialize_body(buf);
    buf.write(this->FMGL(map));
    
}

template<class TPMGL(T)> void x10::util::MapSet<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::util::AbstractCollection<TPMGL(T)>::_deserialize_body(buf);
    FMGL(map) = buf.read< ::x10::util::Map<TPMGL(T), x10_boolean>*>();
}

#endif // X10_UTIL_MAPSET_H_IMPLEMENTATION
#endif // __X10_UTIL_MAPSET_H_NODEPS
