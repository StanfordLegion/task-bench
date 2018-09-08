#ifndef __X10_UTIL_RESILIENT_ITERATIVE_SIMPLEPLACEHAMMER_H
#define __X10_UTIL_RESILIENT_ITERATIVE_SIMPLEPLACEHAMMER_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_UTIL_PAIR_H_NODEPS
#include <x10/util/Pair.h>
#undef X10_UTIL_PAIR_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace util { 
template<class TPMGL(Key), class TPMGL(Val)> class Map__Entry;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Uncounted;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace iterative { 

class SimplePlaceHammer_Strings {
  public:
    static ::x10::lang::String sl__159752;
    static ::x10::lang::String sl__159757;
    static ::x10::lang::String sl__159749;
    static ::x10::lang::String sl__159753;
    static ::x10::lang::String sl__159760;
    static ::x10::lang::String sl__159759;
    static ::x10::lang::String sl__159754;
    static ::x10::lang::String sl__159751;
    static ::x10::lang::String sl__159756;
    static ::x10::lang::String sl__159762;
    static ::x10::lang::String sl__159761;
    static ::x10::lang::String sl__159750;
    static ::x10::lang::String sl__159755;
    static ::x10::lang::String sl__159758;
};

class SimplePlaceHammer : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::HashMap<x10_long, x10_long>* FMGL(stepMap);
    
    ::x10::util::ArrayList< ::x10::util::Pair<x10_long, x10_long> >* FMGL(timers);
    
    void _constructor();
    
    static ::x10::util::resilient::iterative::SimplePlaceHammer* _make();
    
    void _constructor(::x10::lang::String* steps, ::x10::lang::String* times,
                      ::x10::lang::String* places);
    
    static ::x10::util::resilient::iterative::SimplePlaceHammer* _make(::x10::lang::String* steps,
                                                                       ::x10::lang::String* times,
                                                                       ::x10::lang::String* places);
    
    virtual void printPlan();
    virtual x10_boolean sayGoodBye(x10_long curStep);
    virtual x10_long getVictimPlaceId(x10_long curStep);
    virtual void scheduleTimers();
    virtual ::x10::util::resilient::iterative::SimplePlaceHammer*
      x10__util__resilient__iterative__SimplePlaceHammer____this__x10__util__resilient__iterative__SimplePlaceHammer(
      );
    virtual void __fieldInitializers_x10_util_resilient_iterative_SimplePlaceHammer(
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


} } } } 
#endif // X10_UTIL_RESILIENT_ITERATIVE_SIMPLEPLACEHAMMER_H

namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SimplePlaceHammer;
} } } } 

#ifndef X10_UTIL_RESILIENT_ITERATIVE_SIMPLEPLACEHAMMER_H_NODEPS
#define X10_UTIL_RESILIENT_ITERATIVE_SIMPLEPLACEHAMMER_H_NODEPS
#ifndef X10_UTIL_RESILIENT_ITERATIVE_SIMPLEPLACEHAMMER_H_GENERICS
#define X10_UTIL_RESILIENT_ITERATIVE_SIMPLEPLACEHAMMER_H_GENERICS
#endif // X10_UTIL_RESILIENT_ITERATIVE_SIMPLEPLACEHAMMER_H_GENERICS
#endif // __X10_UTIL_RESILIENT_ITERATIVE_SIMPLEPLACEHAMMER_H_NODEPS
