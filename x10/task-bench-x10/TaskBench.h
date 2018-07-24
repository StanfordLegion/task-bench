#ifndef __TASKBENCH_H
#define __TASKBENCH_H

#include <x10rt.h>

#include "/home/users/nicolaig/task-bench/x10/task-bench-x10/core/core.h"

#define X10_UTIL_PAIR_H_NODEPS
#include <x10/util/Pair.h>
#undef X10_UTIL_PAIR_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
class TaskBench__PlaceInstance;
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRail;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
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
class String;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 
namespace x10 { namespace compiler { 
class NativeCPPCompilationUnit;
} } 

class TaskBench_Strings {
  public:
    static ::x10::lang::String sl__2154;
    static ::x10::lang::String sl__2152;
    static ::x10::lang::String sl__2153;
    static ::x10::lang::String sl__2150;
    static ::x10::lang::String sl__2149;
    static ::x10::lang::String sl__2151;
};

class TaskBench : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >*
      FMGL(dependenceSets);
    
    ::x10::lang::Rail< x10_long >* FMGL(dsetForTimestep);
    
    ::x10::lang::Rail< x10_long >* FMGL(widthForTimesteps);
    
    ::x10::lang::Rail< x10_long >* FMGL(offsetForTimesteps);
    
    x10_long FMGL(maxWidth);
    
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> FMGL(plh);
    
    void _constructor(::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets,
                      ::x10::lang::Rail< x10_long >* dsetForTimestep,
                      ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> widthOffsets);
    
    static ::TaskBench* _make(::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* dsets,
                              ::x10::lang::Rail< x10_long >* dsetForTimestep,
                              ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> widthOffsets);
    
    virtual void executeTaskGraph();
    static void executeTaskBench(::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >* taskGraphDependenceSets,
                                 ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* dependenceSetsForTimesteps,
                                 ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* widthAndOffsetForTimesteps);
    static ::x10::lang::Rail< ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >* >*
      dependenceSetsFromCore(x10_int argc, ::x10::lang::Rail< ::x10::lang::String* >* argRail);
    static ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >*
      timestepsFromCore(x10_int argc, ::x10::lang::Rail< ::x10::lang::String* >* argRail);
    static ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >*
      widthAndOffsetFromCore(x10_int argc, ::x10::lang::Rail< ::x10::lang::String* >* argRail);
    static ::x10::lang::Rail< ::x10::lang::String* >* constructCPPArgs(
      ::x10::lang::Rail< ::x10::lang::String* >* args);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::TaskBench* TaskBench____this__TaskBench();
    virtual void __fieldInitializers_TaskBench();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // TASKBENCH_H

class TaskBench;

#ifndef TASKBENCH_H_NODEPS
#define TASKBENCH_H_NODEPS
#ifndef TASKBENCH_H_GENERICS
#define TASKBENCH_H_GENERICS
#endif // TASKBENCH_H_GENERICS
#endif // __TASKBENCH_H_NODEPS
