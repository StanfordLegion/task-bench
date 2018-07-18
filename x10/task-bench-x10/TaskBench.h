#ifndef __TASKBENCH_H
#define __TASKBENCH_H

#include <x10rt.h>

#include "/home/users/nicolaig/task-bench/x10/task-bench-x10/core/core.h"

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
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
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
    static ::x10::lang::String sl__780;
    static ::x10::lang::String sl__781;
    static ::x10::lang::String sl__778;
    static ::x10::lang::String sl__779;
};

class TaskBench : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(data) */
    static ::x10::lang::Rail< x10_double >* FMGL(data);
    static void FMGL(data__do_init)();
    static void FMGL(data__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(data__status);
    static ::x10::lang::CheckedThrowable* FMGL(data__exception);
    static ::x10::lang::Rail< x10_double >* FMGL(data__get)();
    
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> FMGL(plh);
    
    void _constructor(::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* dependenceSet);
    
    static ::TaskBench* _make(::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* dependenceSet);
    
    virtual void sendAndRecv();
    static ::x10::lang::Rail< ::x10::lang::Rail< ::x10::util::Pair< ::x10::lang::Rail< x10_long >*, ::x10::lang::Rail< x10_long >*> >* >*
      dependenceSetsFromCore(x10_int argc, ::x10::lang::Rail< ::x10::lang::String* >* argRail);
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
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Double.h>
#include <TaskBench__PlaceInstance.h>
#include <x10/util/Pair.h>
#include <x10/lang/Long.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/GlobalRail.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/compiler/NativeCPPCompilationUnit.h>
#include <x10/lang/String.h>
#ifndef TASKBENCH_H_GENERICS
#define TASKBENCH_H_GENERICS
inline ::x10::lang::Rail< x10_double >* TaskBench::FMGL(data__get)() {
    if (FMGL(data__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(data__init)();
    }
    return TaskBench::FMGL(data);
}

#endif // TASKBENCH_H_GENERICS
#endif // __TASKBENCH_H_NODEPS
