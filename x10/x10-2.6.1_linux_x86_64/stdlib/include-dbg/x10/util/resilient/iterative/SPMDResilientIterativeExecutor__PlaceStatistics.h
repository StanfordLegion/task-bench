#ifndef __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACESTATISTICS_H
#define __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACESTATISTICS_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SPMDResilientIterativeExecutor;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace iterative { 

class SPMDResilientIterativeExecutor__PlaceStatistics : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor*
      FMGL(out__);
    
    ::x10::util::ArrayList<x10_long>* FMGL(restoreTimes);
    
    ::x10::util::ArrayList<x10_long>* FMGL(stepTimes);
    
    ::x10::lang::Rail< x10_long >* FMGL(placeMaxRestore);
    
    ::x10::lang::Rail< x10_long >* FMGL(placeMaxStep);
    
    ::x10::lang::Rail< x10_long >* FMGL(placeMinRestore);
    
    ::x10::lang::Rail< x10_long >* FMGL(placeMinStep);
    
    ::x10::lang::Rail< x10_long >* FMGL(placeSumRestore);
    
    ::x10::lang::Rail< x10_long >* FMGL(placeSumStep);
    
    void _constructor(::x10::util::resilient::iterative::SPMDResilientIterativeExecutor* out__);
    
    static ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceStatistics* _make(
             ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor* out__);
    
    void _constructor(::x10::util::resilient::iterative::SPMDResilientIterativeExecutor* out__,
                      ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceStatistics* obj);
    
    static ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceStatistics* _make(
             ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor* out__,
             ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceStatistics* obj);
    
    virtual ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceStatistics*
      x10__util__resilient__iterative__SPMDResilientIterativeExecutor__PlaceStatistics____this__x10__util__resilient__iterative__SPMDResilientIterativeExecutor__PlaceStatistics(
      );
    virtual ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor*
      x10__util__resilient__iterative__SPMDResilientIterativeExecutor__PlaceStatistics____this__x10__util__resilient__iterative__SPMDResilientIterativeExecutor(
      );
    virtual void __fieldInitializers_x10_util_resilient_iterative_SPMDResilientIterativeExecutor_PlaceStatistics(
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
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACESTATISTICS_H

namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SPMDResilientIterativeExecutor__PlaceStatistics;
} } } } 

#ifndef X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACESTATISTICS_H_NODEPS
#define X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACESTATISTICS_H_NODEPS
#ifndef X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACESTATISTICS_H_GENERICS
#define X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACESTATISTICS_H_GENERICS
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACESTATISTICS_H_GENERICS
#endif // __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR__PLACESTATISTICS_H_NODEPS
