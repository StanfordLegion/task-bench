#ifndef __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACETEMPDATA_H
#define __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACETEMPDATA_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SPMDResilientIterativeExecutor;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SPMDResilientIterativeExecutor__PlaceStatistics;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class HashSet;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace iterative { 

class SPMDResilientIterativeExecutor__PlaceTempData_Strings {
  public:
    static ::x10::lang::String sl__170371;
    static ::x10::lang::String sl__170368;
    static ::x10::lang::String sl__170369;
    static ::x10::lang::String sl__170370;
};

class SPMDResilientIterativeExecutor__PlaceTempData : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor*
      FMGL(out__);
    
    x10_boolean FMGL(VERBOSE_EXECUTOR_PLACE_LOCAL);
    
    x10_long FMGL(place0KillPlaceTime);
    
    ::x10::util::HashMap<x10_long, ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceStatistics*>*
      FMGL(place0VictimsStats);
    
    ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceStatistics*
      FMGL(stat);
    
    x10_long FMGL(globalIter);
    
    ::x10::util::HashSet< ::x10::lang::String*>* FMGL(lastCkptKeys);
    
    ::x10::util::HashMap< ::x10::lang::String*, x10_long>*
      FMGL(ckptKeyVersion);
    
    void _constructor(::x10::util::resilient::iterative::SPMDResilientIterativeExecutor* out__,
                      ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceStatistics* otherStat,
                      x10_long gIter, ::x10::util::HashSet< ::x10::lang::String*>* lastCkptKeys,
                      ::x10::util::HashMap< ::x10::lang::String*, x10_long>* ckptKeyVersion);
    
    static ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceTempData* _make(
             ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor* out__,
             ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceStatistics* otherStat,
             x10_long gIter, ::x10::util::HashSet< ::x10::lang::String*>* lastCkptKeys,
             ::x10::util::HashMap< ::x10::lang::String*, x10_long>* ckptKeyVersion);
    
    void _constructor(::x10::util::resilient::iterative::SPMDResilientIterativeExecutor* out__);
    
    static ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceTempData* _make(
             ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor* out__);
    
    virtual void addVictim(x10_long index, ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceStatistics* stat);
    virtual ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceTempData*
      x10__util__resilient__iterative__SPMDResilientIterativeExecutor__PlaceTempData____this__x10__util__resilient__iterative__SPMDResilientIterativeExecutor__PlaceTempData(
      );
    virtual ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor*
      x10__util__resilient__iterative__SPMDResilientIterativeExecutor__PlaceTempData____this__x10__util__resilient__iterative__SPMDResilientIterativeExecutor(
      );
    virtual void __fieldInitializers_x10_util_resilient_iterative_SPMDResilientIterativeExecutor_PlaceTempData(
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
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACETEMPDATA_H

namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SPMDResilientIterativeExecutor__PlaceTempData;
} } } } 

#ifndef X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACETEMPDATA_H_NODEPS
#define X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACETEMPDATA_H_NODEPS
#ifndef X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACETEMPDATA_H_GENERICS
#define X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACETEMPDATA_H_GENERICS
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACETEMPDATA_H_GENERICS
#endif // __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACETEMPDATA_H_NODEPS
