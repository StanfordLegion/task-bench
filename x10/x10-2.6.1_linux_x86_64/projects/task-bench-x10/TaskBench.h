#ifndef __TASKBENCH_H
#define __TASKBENCH_H

#include <x10rt.h>

#include "/home/users/nicolaig/task-bench/x10/x10-2.6.1_linux_x86_64/projects/task-bench-x10/core.h"

#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
class TaskBench__PlaceInstance;
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
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
    static ::x10::lang::String sl__647;
    static ::x10::lang::String sl__645;
    static ::x10::lang::String sl__646;
};

class TaskBench : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::PlaceLocalHandle< ::TaskBench__PlaceInstance*> FMGL(plh);
    
    void _constructor(::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* neighborSendMap,
                      ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* neighborRecvMap);
    
    static ::TaskBench* _make(::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* neighborSendMap,
                              ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* neighborRecvMap);
    
    virtual void sendAndRecv();
    static ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >*
      makeMap();
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
