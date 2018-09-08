#ifndef __X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEEXECUTOR_H
#define __X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEEXECUTOR_H

#include <x10rt.h>


#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { namespace resilient { 
class PlaceManager;
} } } 
namespace x10 { namespace util { namespace resilient { namespace store { 
template<class TPMGL(V)> class Store;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class ApplicationSnapshotStore;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SimplePlaceHammer;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SnapshotRecord;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class GlobalResilientIterativeApp;
} } } } 
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
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { namespace resilient { 
class PlaceManager__ChangeDescription;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class DeadPlaceException;
} } 
namespace x10 { namespace lang { 
class MultipleExceptions;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { namespace iterative { 

class GlobalResilientIterativeExecutor_Strings {
  public:
    static ::x10::lang::String sl__170114;
    static ::x10::lang::String sl__170110;
    static ::x10::lang::String sl__170108;
    static ::x10::lang::String sl__170123;
    static ::x10::lang::String sl__170138;
    static ::x10::lang::String sl__170149;
    static ::x10::lang::String sl__170106;
    static ::x10::lang::String sl__170141;
    static ::x10::lang::String sl__170153;
    static ::x10::lang::String sl__170129;
    static ::x10::lang::String sl__170150;
    static ::x10::lang::String sl__170154;
    static ::x10::lang::String sl__170163;
    static ::x10::lang::String sl__170111;
    static ::x10::lang::String sl__170146;
    static ::x10::lang::String sl__170132;
    static ::x10::lang::String sl__170137;
    static ::x10::lang::String sl__170159;
    static ::x10::lang::String sl__170164;
    static ::x10::lang::String sl__170157;
    static ::x10::lang::String sl__170113;
    static ::x10::lang::String sl__170134;
    static ::x10::lang::String sl__170147;
    static ::x10::lang::String sl__170158;
    static ::x10::lang::String sl__170118;
    static ::x10::lang::String sl__170125;
    static ::x10::lang::String sl__170127;
    static ::x10::lang::String sl__170136;
    static ::x10::lang::String sl__170144;
    static ::x10::lang::String sl__170151;
    static ::x10::lang::String sl__170115;
    static ::x10::lang::String sl__170122;
    static ::x10::lang::String sl__170105;
    static ::x10::lang::String sl__170133;
    static ::x10::lang::String sl__170162;
    static ::x10::lang::String sl__170156;
    static ::x10::lang::String sl__170130;
    static ::x10::lang::String sl__170160;
    static ::x10::lang::String sl__170161;
    static ::x10::lang::String sl__170109;
    static ::x10::lang::String sl__170124;
    static ::x10::lang::String sl__170126;
    static ::x10::lang::String sl__170152;
    static ::x10::lang::String sl__170116;
    static ::x10::lang::String sl__170148;
    static ::x10::lang::String sl__170104;
    static ::x10::lang::String sl__170120;
    static ::x10::lang::String sl__170121;
    static ::x10::lang::String sl__170131;
    static ::x10::lang::String sl__170139;
    static ::x10::lang::String sl__170145;
    static ::x10::lang::String sl__170165;
    static ::x10::lang::String sl__170117;
    static ::x10::lang::String sl__170140;
    static ::x10::lang::String sl__170112;
    static ::x10::lang::String sl__170155;
    static ::x10::lang::String sl__170135;
    static ::x10::lang::String sl__170107;
    static ::x10::lang::String sl__170143;
    static ::x10::lang::String sl__170142;
    static ::x10::lang::String sl__170119;
    static ::x10::lang::String sl__170128;
};

class GlobalResilientIterativeExecutor : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Place FMGL(home);
    
    /* Static field: FMGL(VERBOSE) */
    static x10_boolean FMGL(VERBOSE);
    static void FMGL(VERBOSE__do_init)();
    static void FMGL(VERBOSE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(VERBOSE__status);
    static ::x10::lang::CheckedThrowable* FMGL(VERBOSE__exception);
    static x10_boolean FMGL(VERBOSE__get)();
    
    ::x10::lang::GlobalRef< ::x10::util::resilient::PlaceManager* > FMGL(manager);
    
    ::x10::util::resilient::store::Store< ::x10::util::resilient::localstore::Cloneable*>*
      FMGL(resilientMap);
    
    ::x10::util::resilient::iterative::ApplicationSnapshotStore* FMGL(appStore);
    
    x10_long FMGL(lastCkptIter);
    
    x10_long FMGL(itersPerCheckpoint);
    
    x10_boolean FMGL(isResilient);
    
    ::x10::util::resilient::iterative::SimplePlaceHammer* FMGL(simplePlaceHammer);
    
    ::x10::util::ArrayList<x10_double>* FMGL(restoreTimes);
    
    ::x10::util::ArrayList<x10_double>* FMGL(stepTimes);
    
    ::x10::util::ArrayList<x10_double>* FMGL(ckptTimes);
    
    ::x10::util::ArrayList<x10_double>* FMGL(remakeTimes);
    
    ::x10::util::ArrayList<x10_double>* FMGL(appRemakeTimes);
    
    ::x10::util::ArrayList<x10_double>* FMGL(resilientMapRecoveryTimes);
    
    ::x10::util::ArrayList<x10_double>* FMGL(failureDetectionTimes);
    
    x10_long FMGL(applicationInitializationTime);
    
    x10_long FMGL(startRunTime);
    
    x10_long FMGL(killPlaceTime);
    
    void _constructor(x10_long itersPerCheckpoint, x10_long sparePlaces,
                      x10_boolean supportShrinking);
    
    static ::x10::util::resilient::iterative::GlobalResilientIterativeExecutor* _make(
             x10_long itersPerCheckpoint, x10_long sparePlaces,
             x10_boolean supportShrinking);
    
    virtual void run(::x10::util::resilient::iterative::GlobalResilientIterativeApp* app);
    virtual void setHammer(::x10::util::resilient::iterative::SimplePlaceHammer* h);
    virtual ::x10::lang::PlaceGroup* activePlaces();
    virtual void run(::x10::util::resilient::iterative::GlobalResilientIterativeApp* app,
                     x10_long startRunTime);
    x10_boolean remake(::x10::util::resilient::iterative::GlobalResilientIterativeApp* app);
    void checkpoint(::x10::util::resilient::iterative::GlobalResilientIterativeApp* app,
                    x10_long globalIter);
    void restore();
    void calculateTimingStatistics();
    void processIterationException(::x10::lang::Exception* ex);
    x10_boolean containsDPE(::x10::lang::Exception* ex);
    template<class TPMGL(T)> ::x10::lang::String* listToString(
      ::x10::util::ArrayList<TPMGL(T)>* r);
    virtual x10_double listSum(::x10::util::ArrayList<x10_double>* r);
    virtual x10_double listAverage(::x10::util::ArrayList<x10_double>* r);
    void executorKillThere(::x10::lang::Place victim, ::x10::lang::String* op);
    virtual ::x10::util::resilient::iterative::GlobalResilientIterativeExecutor*
      x10__util__resilient__iterative__GlobalResilientIterativeExecutor____this__x10__util__resilient__iterative__GlobalResilientIterativeExecutor(
      );
    virtual void __fieldInitializers_x10_util_resilient_iterative_GlobalResilientIterativeExecutor(
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
#endif // X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEEXECUTOR_H

namespace x10 { namespace util { namespace resilient { namespace iterative { 
class GlobalResilientIterativeExecutor;
} } } } 

#ifndef X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEEXECUTOR_H_NODEPS
#define X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEEXECUTOR_H_NODEPS
#include <x10/lang/GlobalRef.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Double.h>
#include <x10/lang/Place.h>
#include <x10/lang/System.h>
#include <x10/lang/String.h>
#include <x10/util/resilient/PlaceManager.h>
#include <x10/util/resilient/store/Store.h>
#include <x10/util/resilient/localstore/Cloneable.h>
#include <x10/util/resilient/iterative/ApplicationSnapshotStore.h>
#include <x10/util/resilient/iterative/SimplePlaceHammer.h>
#include <x10/util/ArrayList.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Int.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/util/HashMap.h>
#include <x10/util/resilient/iterative/SnapshotRecord.h>
#include <x10/util/resilient/iterative/GlobalResilientIterativeApp.h>
#include <x10/util/Timer.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Exception.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/util/resilient/PlaceManager__ChangeDescription.h>
#include <x10/lang/Iterator.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Iterable.h>
#include <x10/util/Set.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/DeadPlaceException.h>
#include <x10/lang/MultipleExceptions.h>
#include <x10/lang/Rail.h>
#include <x10/util/ListIterator.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEEXECUTOR_H_GENERICS
#define X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEEXECUTOR_H_GENERICS
inline x10_boolean x10::util::resilient::iterative::GlobalResilientIterativeExecutor::FMGL(VERBOSE__get)() {
    if (FMGL(VERBOSE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(VERBOSE__init)();
    }
    return x10::util::resilient::iterative::GlobalResilientIterativeExecutor::FMGL(VERBOSE);
}

#ifndef X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEEXECUTOR_H_listToString_2595
#define X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEEXECUTOR_H_listToString_2595
template<class TPMGL(T)> ::x10::lang::String* x10::util::resilient::iterative::GlobalResilientIterativeExecutor::listToString(
  ::x10::util::ArrayList<TPMGL(T)>* r) {
    
    //#line 349 "x10/util/resilient/iterative/GlobalResilientIterativeExecutor.x10"
    if ((::x10aux::struct_equals(r, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 350 "x10/util/resilient/iterative/GlobalResilientIterativeExecutor.x10"
        return (&::x10::util::resilient::iterative::GlobalResilientIterativeExecutor_Strings::sl__170114);
        
    }
    
    //#line 351 "x10/util/resilient/iterative/GlobalResilientIterativeExecutor.x10"
    ::x10::lang::String* str = (&::x10::util::resilient::iterative::GlobalResilientIterativeExecutor_Strings::sl__170114);
    
    //#line 352 "x10/util/resilient/iterative/GlobalResilientIterativeExecutor.x10"
    {
        ::x10::util::ListIterator<TPMGL(T)>* x__146257;
        for (x__146257 = reinterpret_cast< ::x10::util::ListIterator<TPMGL(T)>*>(::x10aux::nullCheck(r)->iterator());
             ::x10::util::ListIterator<TPMGL(T)>::hasNext(::x10aux::nullCheck(x__146257));
             ) {
            TPMGL(T) x = ::x10::util::ListIterator<TPMGL(T)>::next(::x10aux::nullCheck(x__146257));
            
            //#line 353 "x10/util/resilient/iterative/GlobalResilientIterativeExecutor.x10"
            str = ::x10::lang::String::__plus(str, ::x10::lang::String::__plus(x, (&::x10::util::resilient::iterative::GlobalResilientIterativeExecutor_Strings::sl__170115)));
        }
    }
    
    //#line 354 "x10/util/resilient/iterative/GlobalResilientIterativeExecutor.x10"
    return str;
    
}
#endif // X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEEXECUTOR_H_listToString_2595
#endif // X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEEXECUTOR_H_GENERICS
#endif // __X10_UTIL_RESILIENT_ITERATIVE_GLOBALRESILIENTITERATIVEEXECUTOR_H_NODEPS
