#ifndef __X10_XRX_RUNTIME_H
#define __X10_XRX_RUNTIME_H

#include <x10rt.h>

#include "x10/lang/RuntimeNatives.h"

namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace xrx { 
class Workers;
} } 
namespace x10 { namespace xrx { 
class Pool;
} } 
namespace x10 { namespace xrx { 
class Activity;
} } 
namespace x10 { namespace lang { 
class CancellationException;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace io { 
class Serializer;
} } 
namespace x10 { namespace compiler { 
class StackAllocate;
} } 
namespace x10 { namespace io { 
class Deserializer;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace xrx { 
class Configuration;
} } 
namespace x10 { namespace io { 
class Reader;
} } 
namespace x10 { namespace io { 
class Writer;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Monitor;
} } } 
namespace x10 { namespace xrx { 
class FinishState__FinishStates;
} } 
namespace x10 { namespace xrx { 
class Deque;
} } 
namespace x10 { namespace xrx { 
class Worker;
} } 
namespace x10 { namespace xrx { 
class Thread;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace x10 { namespace xrx { 
class FinishState__UncountedFinish;
} } 
namespace x10 { namespace xrx { 
class Runtime__Watcher;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Condition;
} } } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Latch;
} } } 
namespace x10 { namespace compiler { 
class RemoteInvocation;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class DeadPlaceException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Clock;
} } 
namespace x10 { namespace lang { 
class Clock__ClockPhases;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
class Error;
} } 
namespace x10 { namespace xrx { 
class Runtime__AtCheckedWrapper;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace lang { 
class WrappedThrowable;
} } 
namespace x10 { namespace compiler { 
class Pragma;
} } 
namespace x10 { namespace lang { 
class MultipleExceptions;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace xrx { 
class FinishResilient;
} } 
namespace x10 { namespace compiler { 
class Immediate;
} } 
namespace x10 { namespace xrx { 
class Runtime__RemoteControl;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace util { namespace concurrent { 
class SimpleLatch;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace xrx { 
class FinishState__Finish;
} } 
namespace x10 { namespace xrx { 
class FinishState__RootFinish;
} } 
namespace x10 { namespace xrx { 
class GetRegistry;
} } 
namespace x10 { namespace xrx { 
class FinishState__FinishAsync;
} } 
namespace x10 { namespace xrx { 
class FinishState__FinishHere;
} } 
namespace x10 { namespace xrx { 
class FinishState__FinishSPMD;
} } 
namespace x10 { namespace xrx { 
class FinishState__LocalFinish;
} } 
namespace x10 { namespace xrx { 
class FinishState__DenseFinish;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace x10 { namespace xrx { 
template<class TPMGL(T)> class FinishState__CollectingFinish;
} } 
namespace x10 { namespace xrx { 
class InterruptedException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 

namespace x10 { namespace xrx { 

class Runtime_Strings {
  public:
    static ::x10::lang::String sl__172192;
    static ::x10::lang::String sl__172186;
    static ::x10::lang::String sl__172190;
    static ::x10::lang::String sl__172197;
    static ::x10::lang::String sl__172170;
    static ::x10::lang::String sl__172169;
    static ::x10::lang::String sl__172178;
    static ::x10::lang::String sl__172194;
    static ::x10::lang::String sl__172199;
    static ::x10::lang::String sl__172162;
    static ::x10::lang::String sl__172181;
    static ::x10::lang::String sl__172191;
    static ::x10::lang::String sl__172201;
    static ::x10::lang::String sl__172173;
    static ::x10::lang::String sl__172189;
    static ::x10::lang::String sl__172187;
    static ::x10::lang::String sl__172176;
    static ::x10::lang::String sl__172198;
    static ::x10::lang::String sl__172166;
    static ::x10::lang::String sl__172163;
    static ::x10::lang::String sl__172180;
    static ::x10::lang::String sl__172167;
    static ::x10::lang::String sl__172195;
    static ::x10::lang::String sl__172184;
    static ::x10::lang::String sl__172168;
    static ::x10::lang::String sl__172172;
    static ::x10::lang::String sl__172200;
    static ::x10::lang::String sl__172175;
    static ::x10::lang::String sl__172202;
    static ::x10::lang::String sl__172193;
    static ::x10::lang::String sl__172171;
    static ::x10::lang::String sl__172174;
    static ::x10::lang::String sl__172164;
    static ::x10::lang::String sl__172165;
    static ::x10::lang::String sl__172182;
    static ::x10::lang::String sl__172185;
    static ::x10::lang::String sl__172177;
    static ::x10::lang::String sl__172188;
    static ::x10::lang::String sl__172179;
    static ::x10::lang::String sl__172196;
    static ::x10::lang::String sl__172183;
};

class Runtime : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void x10rtSendMessage(x10_long id, ::x10::lang::VoidFun_0_0* msgBody,
                                 ::x10::xrx::Runtime__Profile* prof);
    static void x10rtSendMessage(x10_long id, ::x10::lang::VoidFun_0_0* msgBody,
                                 ::x10::xrx::Runtime__Profile* prof, ::x10::lang::VoidFun_0_0* preSendAction);
    static void x10rtSendAsync(x10_long id, ::x10::lang::VoidFun_0_0* body,
                               ::x10::xrx::FinishState* finishState, ::x10::xrx::Runtime__Profile* prof,
                               ::x10::lang::VoidFun_0_0* preSendAction);
    template<class TPMGL(T)> static TPMGL(T) deepCopy(TPMGL(T) o,
                                                      ::x10::xrx::Runtime__Profile* prof);
    template<class TPMGL(T)> static TPMGL(T) deepCopy(TPMGL(T) o);
    /* Static field: FMGL(env) */
    static ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::String*>* FMGL(env);
    static void FMGL(env__do_init)();
    static void FMGL(env__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(env__status);
    static ::x10::lang::CheckedThrowable* FMGL(env__exception);
    static ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::String*>*
      FMGL(env__get)();
    
    /* Static field: FMGL(STRICT_FINISH) */
    static x10_boolean FMGL(STRICT_FINISH);
    static void FMGL(STRICT_FINISH__do_init)();
    static void FMGL(STRICT_FINISH__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(STRICT_FINISH__status);
    static ::x10::lang::CheckedThrowable* FMGL(STRICT_FINISH__exception);
    static x10_boolean FMGL(STRICT_FINISH__get)();
    
    /* Static field: FMGL(NTHREADS) */
    static x10_int FMGL(NTHREADS);
    static void FMGL(NTHREADS__do_init)();
    static void FMGL(NTHREADS__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(NTHREADS__status);
    static ::x10::lang::CheckedThrowable* FMGL(NTHREADS__exception);
    static x10_int FMGL(NTHREADS__get)();
    
    /* Static field: FMGL(MAX_THREADS) */
    static x10_int FMGL(MAX_THREADS);
    static void FMGL(MAX_THREADS__do_init)();
    static void FMGL(MAX_THREADS__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(MAX_THREADS__status);
    static ::x10::lang::CheckedThrowable* FMGL(MAX_THREADS__exception);
    static x10_int FMGL(MAX_THREADS__get)();
    
    /* Static field: FMGL(STATIC_THREADS) */
    static x10_boolean FMGL(STATIC_THREADS);
    static void FMGL(STATIC_THREADS__do_init)();
    static void FMGL(STATIC_THREADS__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(STATIC_THREADS__status);
    static ::x10::lang::CheckedThrowable* FMGL(STATIC_THREADS__exception);
    static x10_boolean FMGL(STATIC_THREADS__get)();
    
    /* Static field: FMGL(STABLE_POOL_SIZE) */
    static x10_boolean FMGL(STABLE_POOL_SIZE);
    static void FMGL(STABLE_POOL_SIZE__do_init)();
    static void FMGL(STABLE_POOL_SIZE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(STABLE_POOL_SIZE__status);
    static ::x10::lang::CheckedThrowable* FMGL(STABLE_POOL_SIZE__exception);
    static x10_boolean FMGL(STABLE_POOL_SIZE__get)();
    
    /* Static field: FMGL(NUM_IMMEDIATE_THREADS) */
    static x10_int FMGL(NUM_IMMEDIATE_THREADS);
    static void FMGL(NUM_IMMEDIATE_THREADS__do_init)();
    static void FMGL(NUM_IMMEDIATE_THREADS__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(NUM_IMMEDIATE_THREADS__status);
    static ::x10::lang::CheckedThrowable* FMGL(NUM_IMMEDIATE_THREADS__exception);
    static x10_int FMGL(NUM_IMMEDIATE_THREADS__get)();
    
    /* Static field: FMGL(WARN_ON_THREAD_CREATION) */
    static x10_boolean FMGL(WARN_ON_THREAD_CREATION);
    static void FMGL(WARN_ON_THREAD_CREATION__do_init)();
    static void FMGL(WARN_ON_THREAD_CREATION__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(WARN_ON_THREAD_CREATION__status);
    static ::x10::lang::CheckedThrowable* FMGL(WARN_ON_THREAD_CREATION__exception);
    static x10_boolean FMGL(WARN_ON_THREAD_CREATION__get)();
    
    /* Static field: FMGL(BUSY_WAITING) */
    static x10_boolean FMGL(BUSY_WAITING);
    static void FMGL(BUSY_WAITING__do_init)();
    static void FMGL(BUSY_WAITING__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(BUSY_WAITING__status);
    static ::x10::lang::CheckedThrowable* FMGL(BUSY_WAITING__exception);
    static x10_boolean FMGL(BUSY_WAITING__get)();
    
    /* Static field: FMGL(CANCELLABLE) */
    static x10_boolean FMGL(CANCELLABLE);
    static void FMGL(CANCELLABLE__do_init)();
    static void FMGL(CANCELLABLE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(CANCELLABLE__status);
    static ::x10::lang::CheckedThrowable* FMGL(CANCELLABLE__exception);
    static x10_boolean FMGL(CANCELLABLE__get)();
    
    /* Static field: FMGL(RESILIENT_MODE) */
    static x10_int FMGL(RESILIENT_MODE);
    static void FMGL(RESILIENT_MODE__do_init)();
    static void FMGL(RESILIENT_MODE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(RESILIENT_MODE__status);
    static ::x10::lang::CheckedThrowable* FMGL(RESILIENT_MODE__exception);
    static x10_int FMGL(RESILIENT_MODE__get)();
    
    /* Static field: FMGL(staticMonitor) */
    static ::x10::util::concurrent::Monitor* FMGL(staticMonitor);
    static void FMGL(staticMonitor__do_init)();
    static void FMGL(staticMonitor__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(staticMonitor__status);
    static ::x10::lang::CheckedThrowable* FMGL(staticMonitor__exception);
    static ::x10::util::concurrent::Monitor* FMGL(staticMonitor__get)();
    
    /* Static field: FMGL(atomicMonitor) */
    static ::x10::util::concurrent::Monitor* FMGL(atomicMonitor);
    static void FMGL(atomicMonitor__do_init)();
    static void FMGL(atomicMonitor__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(atomicMonitor__status);
    static ::x10::lang::CheckedThrowable* FMGL(atomicMonitor__exception);
    static ::x10::util::concurrent::Monitor* FMGL(atomicMonitor__get)();
    
    /* Static field: FMGL(pool) */
    static ::x10::xrx::Pool* FMGL(pool);
    static void FMGL(pool__do_init)();
    static void FMGL(pool__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(pool__status);
    static ::x10::lang::CheckedThrowable* FMGL(pool__exception);
    static ::x10::xrx::Pool* FMGL(pool__get)();
    
    /* Static field: FMGL(finishStates) */
    static ::x10::xrx::FinishState__FinishStates* FMGL(finishStates);
    static void FMGL(finishStates__do_init)();
    static void FMGL(finishStates__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(finishStates__status);
    static ::x10::lang::CheckedThrowable* FMGL(finishStates__exception);
    static ::x10::xrx::FinishState__FinishStates* FMGL(finishStates__get)();
    
    static void wsInit();
    static ::x10::xrx::Deque* wsFIFO();
    static void wsBlock(::x10::lang::Any* k);
    static void wsUnblock();
    static void wsEnd();
    static x10_boolean wsEnded();
    static ::x10::xrx::Worker* worker();
    static x10_int workerId();
    static x10_int poolSize();
    static ::x10::xrx::Activity* activity();
    static x10_int hereInt();
    static x10_long hereLong();
    static x10_int surplusActivityCount();
    /* Static field: FMGL(processStartNanos_) */
    static ::x10::lang::Cell<x10_long>* FMGL(processStartNanos_);
    static void FMGL(processStartNanos___do_init)();
    static void FMGL(processStartNanos___init)();
    static volatile ::x10aux::StaticInitController::status FMGL(processStartNanos___status);
    static ::x10::lang::CheckedThrowable* FMGL(processStartNanos___exception);
    static ::x10::lang::Cell<x10_long>* FMGL(processStartNanos___get)();
    
    static x10_long processStartNanos();
    static void submitUncounted(::x10::lang::VoidFun_0_0* job);
    static ::x10::xrx::Runtime__Watcher* submit(::x10::lang::VoidFun_0_0* job);
    static void start(x10_int n);
    static void start();
    static void join();
    static void start(::x10::lang::VoidFun_0_0* job);
    static void terminate();
    static void terminateAll();
    static void terminateAllJob();
    static void cancelWave();
    static ::x10::xrx::Runtime__Watcher* cancelAll();
    static void runAsync(::x10::lang::Place place, ::x10::lang::Rail< ::x10::lang::Clock* >* clocks,
                         ::x10::lang::VoidFun_0_0* body, ::x10::xrx::Runtime__Profile* prof);
    static void runAsync(::x10::lang::Place place, ::x10::lang::VoidFun_0_0* body,
                         ::x10::xrx::Runtime__Profile* prof);
    static void runAsync(::x10::lang::Rail< ::x10::lang::Clock* >* clocks,
                         ::x10::lang::VoidFun_0_0* body);
    static void runAsync(::x10::lang::VoidFun_0_0* body);
    static void runFinish(::x10::lang::VoidFun_0_0* body);
    static void runUncountedAsync(::x10::lang::Place place,
                                  ::x10::lang::VoidFun_0_0* body,
                                  ::x10::xrx::Runtime__Profile* prof);
    static void runImmediateAsync(::x10::lang::Place place,
                                  ::x10::lang::VoidFun_0_0* body,
                                  ::x10::xrx::Runtime__Profile* prof);
    static void runUncountedAsync(::x10::lang::VoidFun_0_0* body);
    template<class TPMGL(T)> static TPMGL(T) wrapAtChecked(
      ::x10::lang::CheckedThrowable* caught);
    static void runAt(::x10::lang::Place place, ::x10::lang::VoidFun_0_0* body,
                      ::x10::xrx::Runtime__Profile* prof);
    static void debug(::x10::lang::String* msg);
    static void runImmediateAt(::x10::lang::Place dst, ::x10::lang::VoidFun_0_0* cl);
    static void runAtSimple(::x10::lang::Place place, ::x10::lang::VoidFun_0_0* body,
                            x10_boolean toWait);
    static ::x10::lang::Any* evalAtImpl(::x10::lang::Place place,
                                        ::x10::lang::Fun_0_0< ::x10::lang::Any*>* eval,
                                        ::x10::xrx::Runtime__Profile* prof);
    template<class TPMGL(T)> static TPMGL(T) evalAt(::x10::lang::Place place,
                                                    ::x10::lang::Fun_0_0<TPMGL(T)>* eval,
                                                    ::x10::xrx::Runtime__Profile* prof);
    static ::x10::lang::Any* evalImmediateAtImpl(::x10::lang::Place dst,
                                                 ::x10::lang::Fun_0_0< ::x10::lang::Any*>* cl);
    template<class TPMGL(T)> static TPMGL(T) evalImmediateAt(
      ::x10::lang::Place place, ::x10::lang::Fun_0_0<TPMGL(T)>* eval);
    static void StaticInitBroadcastDispatcherLock();
    static void StaticInitBroadcastDispatcherAwait();
    static void StaticInitBroadcastDispatcherUnlock();
    static void StaticInitBroadcastDispatcherNotify();
    static void enterAtomic();
    static void ensureNotInAtomic();
    static void exitAtomic();
    static void exitWSWhen(x10_boolean b);
    static void awaitAtomic();
    static ::x10::xrx::FinishState* makeDefaultFinish();
    static ::x10::xrx::FinishState* makeDefaultFinish(::x10::xrx::FinishState* parent);
    static void notifyPlaceDeath();
    static ::x10::xrx::FinishState* startFinish();
    static ::x10::xrx::FinishState* startFinish(x10_int pragma);
    static ::x10::xrx::FinishState* startLocalFinish();
    static ::x10::xrx::FinishState* startSimpleFinish();
    static void stopFinish(::x10::xrx::FinishState* f);
    static void pushException(::x10::lang::CheckedThrowable* t);
    template<class TPMGL(T)> static ::x10::xrx::FinishState*
      startCollectingFinish(::x10::lang::Reducible<TPMGL(T)>* r);
    template<class TPMGL(T)> static void makeOffer(TPMGL(T) t);
    template<class TPMGL(T)> static TPMGL(T) stopCollectingFinish(
      ::x10::xrx::FinishState* f);
    static void submitLocalActivity(::x10::xrx::Activity* activity);
    static void submitRemoteActivity(::x10::lang::VoidFun_0_0* body,
                                     ::x10::lang::Place src,
                                     ::x10::xrx::FinishState* finishState);
    static void submitRemoteActivity(x10_long epoch, ::x10::lang::VoidFun_0_0* body,
                                     ::x10::lang::Place src,
                                     ::x10::xrx::FinishState* finishState);
    static void submitRemoteActivity(x10_long epoch, ::x10::xrx::Activity* activity,
                                     ::x10::lang::Place src,
                                     ::x10::xrx::FinishState* finishState);
    static void probe();
    static void increaseParallelism();
    static void decreaseParallelism(x10_int n);
    static void removeThreadLocalContexts();
    static ::x10::xrx::Worker* wrapNativeThread();
    static x10_long epoch();
    static x10_boolean sleep(x10_long millis);
    static x10_boolean threadSleep(x10_long millis);
    virtual ::x10::xrx::Runtime* x10__xrx__Runtime____this__x10__xrx__Runtime(
      );
    void _constructor();
    
    static ::x10::xrx::Runtime* _make();
    
    virtual void __fieldInitializers_x10_xrx_Runtime();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_XRX_RUNTIME_H

namespace x10 { namespace xrx { 
class Runtime;
} } 

#ifndef X10_XRX_RUNTIME_H_NODEPS
#define X10_XRX_RUNTIME_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/compiler/Native.h>
#include <x10/lang/String.h>
#include <x10/lang/Long.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/Boolean.h>
#include <x10/xrx/Workers.h>
#include <x10/xrx/Pool.h>
#include <x10/xrx/Activity.h>
#include <x10/lang/CancellationException.h>
#include <x10/xrx/FinishState.h>
#include <x10/util/Timer.h>
#include <x10/io/Serializer.h>
#include <x10/compiler/StackAllocate.h>
#include <x10/io/Deserializer.h>
#include <x10/lang/Int.h>
#include <x10/util/HashMap.h>
#include <x10/xrx/Configuration.h>
#include <x10/io/Reader.h>
#include <x10/io/Writer.h>
#include <x10/util/concurrent/Monitor.h>
#include <x10/xrx/FinishState__FinishStates.h>
#include <x10/xrx/Deque.h>
#include <x10/xrx/Worker.h>
#include <x10/xrx/Thread.h>
#include <x10/lang/Place.h>
#include <x10/lang/Cell.h>
#include <x10/xrx/FinishState__UncountedFinish.h>
#include <x10/xrx/Runtime__Watcher.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/util/concurrent/Condition.h>
#include <x10/compiler/Finalization.h>
#include <x10/util/concurrent/Latch.h>
#include <x10/compiler/RemoteInvocation.h>
#include <x10/lang/Math.h>
#include <x10/lang/DeadPlaceException.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Clock.h>
#include <x10/lang/Clock__ClockPhases.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Error.h>
#include <x10/xrx/Runtime__AtCheckedWrapper.h>
#include <x10/lang/Byte.h>
#include <x10/lang/GlobalRef.h>
#include <x10/lang/WrappedThrowable.h>
#include <x10/compiler/Pragma.h>
#include <x10/lang/MultipleExceptions.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/xrx/FinishResilient.h>
#include <x10/compiler/Immediate.h>
#include <x10/xrx/Runtime__RemoteControl.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/util/concurrent/SimpleLatch.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/xrx/FinishState__Finish.h>
#include <x10/xrx/FinishState__RootFinish.h>
#include <x10/xrx/GetRegistry.h>
#include <x10/xrx/FinishState__FinishAsync.h>
#include <x10/xrx/FinishState__FinishHere.h>
#include <x10/xrx/FinishState__FinishSPMD.h>
#include <x10/xrx/FinishState__LocalFinish.h>
#include <x10/xrx/FinishState__DenseFinish.h>
#include <x10/lang/Reducible.h>
#include <x10/xrx/FinishState__CollectingFinish.h>
#include <x10/xrx/InterruptedException.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/lang/String.h>
#ifndef X10_XRX_RUNTIME__CLOSURE__31_CLOSURE
#define X10_XRX_RUNTIME__CLOSURE__31_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_xrx_Runtime__closure__31 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::lang::Any*>::template itable <x10_xrx_Runtime__closure__31<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Any* __apply(){
        
        //#line 1228 "x10/xrx/Runtime.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(eval)));
        
    }
    
    // captured environment
    ::x10::lang::Fun_0_0<TPMGL(T)>* eval;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->eval);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_xrx_Runtime__closure__31<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_xrx_Runtime__closure__31<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Fun_0_0<TPMGL(T)>* that_eval = buf.read< ::x10::lang::Fun_0_0<TPMGL(T)>*>();
        x10_xrx_Runtime__closure__31<TPMGL(T) >* this_ = new (storage) x10_xrx_Runtime__closure__31<TPMGL(T) >(that_eval);
        return this_;
    }
    
    x10_xrx_Runtime__closure__31(::x10::lang::Fun_0_0<TPMGL(T)>* eval) : eval(eval) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >(); }
    
    const char* toNativeString() {
        return "x10/xrx/Runtime.x10:1228";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::lang::Any*>::template itable <x10_xrx_Runtime__closure__31<TPMGL(T) > >x10_xrx_Runtime__closure__31<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_xrx_Runtime__closure__31<TPMGL(T) >::__apply, &x10_xrx_Runtime__closure__31<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_xrx_Runtime__closure__31<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >, &x10_xrx_Runtime__closure__31<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_Runtime__closure__31<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_xrx_Runtime__closure__31<TPMGL(T) >::_deserialize);

#endif // X10_XRX_RUNTIME__CLOSURE__31_CLOSURE
#ifndef X10_XRX_RUNTIME__CLOSURE__32_CLOSURE
#define X10_XRX_RUNTIME__CLOSURE__32_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_xrx_Runtime__closure__32 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::lang::Any*>::template itable <x10_xrx_Runtime__closure__32<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Any* __apply(){
        
        //#line 1228 "x10/xrx/Runtime.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(eval)));
        
    }
    
    // captured environment
    ::x10::lang::Fun_0_0<TPMGL(T)>* eval;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->eval);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_xrx_Runtime__closure__32<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_xrx_Runtime__closure__32<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Fun_0_0<TPMGL(T)>* that_eval = buf.read< ::x10::lang::Fun_0_0<TPMGL(T)>*>();
        x10_xrx_Runtime__closure__32<TPMGL(T) >* this_ = new (storage) x10_xrx_Runtime__closure__32<TPMGL(T) >(that_eval);
        return this_;
    }
    
    x10_xrx_Runtime__closure__32(::x10::lang::Fun_0_0<TPMGL(T)>* eval) : eval(eval) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >(); }
    
    const char* toNativeString() {
        return "x10/xrx/Runtime.x10:1228";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::lang::Any*>::template itable <x10_xrx_Runtime__closure__32<TPMGL(T) > >x10_xrx_Runtime__closure__32<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_xrx_Runtime__closure__32<TPMGL(T) >::__apply, &x10_xrx_Runtime__closure__32<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_xrx_Runtime__closure__32<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >, &x10_xrx_Runtime__closure__32<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_Runtime__closure__32<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_xrx_Runtime__closure__32<TPMGL(T) >::_deserialize);

#endif // X10_XRX_RUNTIME__CLOSURE__32_CLOSURE
#ifndef X10_XRX_RUNTIME__CLOSURE__36_CLOSURE
#define X10_XRX_RUNTIME__CLOSURE__36_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_xrx_Runtime__closure__36 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::lang::Any*>::template itable <x10_xrx_Runtime__closure__36<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Any* __apply(){
        
        //#line 1302 "x10/xrx/Runtime.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(eval)));
        
    }
    
    // captured environment
    ::x10::lang::Fun_0_0<TPMGL(T)>* eval;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->eval);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_xrx_Runtime__closure__36<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_xrx_Runtime__closure__36<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Fun_0_0<TPMGL(T)>* that_eval = buf.read< ::x10::lang::Fun_0_0<TPMGL(T)>*>();
        x10_xrx_Runtime__closure__36<TPMGL(T) >* this_ = new (storage) x10_xrx_Runtime__closure__36<TPMGL(T) >(that_eval);
        return this_;
    }
    
    x10_xrx_Runtime__closure__36(::x10::lang::Fun_0_0<TPMGL(T)>* eval) : eval(eval) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >(); }
    
    const char* toNativeString() {
        return "x10/xrx/Runtime.x10:1302";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::lang::Any*>::template itable <x10_xrx_Runtime__closure__36<TPMGL(T) > >x10_xrx_Runtime__closure__36<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_xrx_Runtime__closure__36<TPMGL(T) >::__apply, &x10_xrx_Runtime__closure__36<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_xrx_Runtime__closure__36<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >, &x10_xrx_Runtime__closure__36<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_Runtime__closure__36<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_xrx_Runtime__closure__36<TPMGL(T) >::_deserialize);

#endif // X10_XRX_RUNTIME__CLOSURE__36_CLOSURE
#ifndef X10_XRX_RUNTIME__CLOSURE__37_CLOSURE
#define X10_XRX_RUNTIME__CLOSURE__37_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_xrx_Runtime__closure__37 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::lang::Any*>::template itable <x10_xrx_Runtime__closure__37<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Any* __apply(){
        
        //#line 1302 "x10/xrx/Runtime.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(eval)));
        
    }
    
    // captured environment
    ::x10::lang::Fun_0_0<TPMGL(T)>* eval;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->eval);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_xrx_Runtime__closure__37<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_xrx_Runtime__closure__37<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Fun_0_0<TPMGL(T)>* that_eval = buf.read< ::x10::lang::Fun_0_0<TPMGL(T)>*>();
        x10_xrx_Runtime__closure__37<TPMGL(T) >* this_ = new (storage) x10_xrx_Runtime__closure__37<TPMGL(T) >(that_eval);
        return this_;
    }
    
    x10_xrx_Runtime__closure__37(::x10::lang::Fun_0_0<TPMGL(T)>* eval) : eval(eval) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >(); }
    
    const char* toNativeString() {
        return "x10/xrx/Runtime.x10:1302";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::lang::Any*>::template itable <x10_xrx_Runtime__closure__37<TPMGL(T) > >x10_xrx_Runtime__closure__37<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_xrx_Runtime__closure__37<TPMGL(T) >::__apply, &x10_xrx_Runtime__closure__37<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_xrx_Runtime__closure__37<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >, &x10_xrx_Runtime__closure__37<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_xrx_Runtime__closure__37<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_xrx_Runtime__closure__37<TPMGL(T) >::_deserialize);

#endif // X10_XRX_RUNTIME__CLOSURE__37_CLOSURE
#ifndef X10_XRX_RUNTIME_H_GENERICS
#define X10_XRX_RUNTIME_H_GENERICS
#ifndef X10_XRX_RUNTIME_H_deepCopy_3500
#define X10_XRX_RUNTIME_H_deepCopy_3500
template<class TPMGL(T)> TPMGL(T) x10::xrx::Runtime::deepCopy(TPMGL(T) o,
                                                              ::x10::xrx::Runtime__Profile* prof) {
    
    //#line 165 "x10/xrx/Runtime.x10"
    x10_long start = (!::x10aux::struct_equals(prof, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))
      ? (::x10::lang::RuntimeNatives::nanoTime()) : (((x10_long)0ll));
    
    //#line 167 "x10/xrx/Runtime.x10"
    ::x10::io::Serializer _StackAllocate_ser;
     _StackAllocate_ser._constructor();
    ::x10::io::Serializer* ser(&_StackAllocate_ser);
    
    //#line 168 "x10/xrx/Runtime.x10"
    ser->x10::io::Serializer::writeAny(::x10aux::class_cast_unchecked< ::x10::lang::Any*>(o));
    
    //#line 169 "x10/xrx/Runtime.x10"
    ::x10::io::Deserializer _StackAllocate_deser;
     _StackAllocate_deser._constructor(ser);
    ::x10::io::Deserializer* deser(&_StackAllocate_deser);
    
    //#line 170 "x10/xrx/Runtime.x10"
    TPMGL(T) copy = ::x10aux::class_cast<TPMGL(T)>(deser->x10::io::Deserializer::readAny());
    
    //#line 172 "x10/xrx/Runtime.x10"
    if ((!::x10aux::struct_equals(prof, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 173 "x10/xrx/Runtime.x10"
        x10_long end = ::x10::lang::RuntimeNatives::nanoTime();
        
        //#line 174 "x10/xrx/Runtime.x10"
        ::x10aux::nullCheck(prof)->FMGL(serializationNanos) =
          ((::x10aux::nullCheck(prof)->FMGL(serializationNanos)) + (((end) - (start))));
        
        //#line 175 "x10/xrx/Runtime.x10"
        ::x10aux::nullCheck(prof)->FMGL(bytes) = ((::x10aux::nullCheck(prof)->FMGL(bytes)) + (((x10_long)(ser->x10::io::Serializer::dataBytesWritten()))));
    }
    
    //#line 178 "x10/xrx/Runtime.x10"
    return copy;
    
}
#endif // X10_XRX_RUNTIME_H_deepCopy_3500
#ifndef X10_XRX_RUNTIME_H_deepCopy_3501
#define X10_XRX_RUNTIME_H_deepCopy_3501
template<class TPMGL(T)> TPMGL(T) x10::xrx::Runtime::deepCopy(
  TPMGL(T) o) {
    return ::x10::xrx::Runtime::template deepCopy< TPMGL(T) >(
             o, ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}
#endif // X10_XRX_RUNTIME_H_deepCopy_3501
inline ::x10::util::HashMap< ::x10::lang::String*, ::x10::lang::String*>*
  x10::xrx::Runtime::FMGL(env__get)() {
    if (FMGL(env__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(env__init)();
    }
    return x10::xrx::Runtime::FMGL(env);
}

inline x10_boolean x10::xrx::Runtime::FMGL(STRICT_FINISH__get)() {
    if (FMGL(STRICT_FINISH__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(STRICT_FINISH__init)();
    }
    return x10::xrx::Runtime::FMGL(STRICT_FINISH);
}

inline x10_int x10::xrx::Runtime::FMGL(NTHREADS__get)() {
    if (FMGL(NTHREADS__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(NTHREADS__init)();
    }
    return x10::xrx::Runtime::FMGL(NTHREADS);
}

inline x10_int x10::xrx::Runtime::FMGL(MAX_THREADS__get)() {
    if (FMGL(MAX_THREADS__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAX_THREADS__init)();
    }
    return x10::xrx::Runtime::FMGL(MAX_THREADS);
}

inline x10_boolean x10::xrx::Runtime::FMGL(STATIC_THREADS__get)() {
    if (FMGL(STATIC_THREADS__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(STATIC_THREADS__init)();
    }
    return x10::xrx::Runtime::FMGL(STATIC_THREADS);
}

inline x10_boolean x10::xrx::Runtime::FMGL(STABLE_POOL_SIZE__get)() {
    if (FMGL(STABLE_POOL_SIZE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(STABLE_POOL_SIZE__init)();
    }
    return x10::xrx::Runtime::FMGL(STABLE_POOL_SIZE);
}

inline x10_int x10::xrx::Runtime::FMGL(NUM_IMMEDIATE_THREADS__get)() {
    if (FMGL(NUM_IMMEDIATE_THREADS__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(NUM_IMMEDIATE_THREADS__init)();
    }
    return x10::xrx::Runtime::FMGL(NUM_IMMEDIATE_THREADS);
}

inline x10_boolean x10::xrx::Runtime::FMGL(WARN_ON_THREAD_CREATION__get)() {
    if (FMGL(WARN_ON_THREAD_CREATION__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(WARN_ON_THREAD_CREATION__init)();
    }
    return x10::xrx::Runtime::FMGL(WARN_ON_THREAD_CREATION);
}

inline x10_boolean x10::xrx::Runtime::FMGL(BUSY_WAITING__get)() {
    if (FMGL(BUSY_WAITING__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(BUSY_WAITING__init)();
    }
    return x10::xrx::Runtime::FMGL(BUSY_WAITING);
}

inline x10_boolean x10::xrx::Runtime::FMGL(CANCELLABLE__get)() {
    if (FMGL(CANCELLABLE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(CANCELLABLE__init)();
    }
    return x10::xrx::Runtime::FMGL(CANCELLABLE);
}

inline x10_int x10::xrx::Runtime::FMGL(RESILIENT_MODE__get)() {
    if (FMGL(RESILIENT_MODE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(RESILIENT_MODE__init)();
    }
    return x10::xrx::Runtime::FMGL(RESILIENT_MODE);
}

inline ::x10::util::concurrent::Monitor* x10::xrx::Runtime::FMGL(staticMonitor__get)() {
    if (FMGL(staticMonitor__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(staticMonitor__init)();
    }
    return x10::xrx::Runtime::FMGL(staticMonitor);
}

inline ::x10::util::concurrent::Monitor* x10::xrx::Runtime::FMGL(atomicMonitor__get)() {
    if (FMGL(atomicMonitor__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(atomicMonitor__init)();
    }
    return x10::xrx::Runtime::FMGL(atomicMonitor);
}

inline ::x10::xrx::Pool* x10::xrx::Runtime::FMGL(pool__get)() {
    if (FMGL(pool__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(pool__init)();
    }
    return x10::xrx::Runtime::FMGL(pool);
}

inline ::x10::xrx::FinishState__FinishStates* x10::xrx::Runtime::FMGL(finishStates__get)() {
    if (FMGL(finishStates__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(finishStates__init)();
    }
    return x10::xrx::Runtime::FMGL(finishStates);
}

inline ::x10::lang::Cell<x10_long>* x10::xrx::Runtime::FMGL(processStartNanos___get)() {
    if (FMGL(processStartNanos___status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(processStartNanos___init)();
    }
    return x10::xrx::Runtime::FMGL(processStartNanos_);
}

#ifndef X10_XRX_RUNTIME_H_wrapAtChecked_3567
#define X10_XRX_RUNTIME_H_wrapAtChecked_3567
template<class TPMGL(T)> TPMGL(T) x10::xrx::Runtime::wrapAtChecked(
  ::x10::lang::CheckedThrowable* caught) {
    
    //#line 820 "x10/xrx/Runtime.x10"
    if (::x10aux::instanceof< ::x10::lang::Exception*>(caught))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10aux::class_cast< ::x10::lang::Exception*>(caught)));
    }
    
    //#line 821 "x10/xrx/Runtime.x10"
    if (::x10aux::instanceof< ::x10::lang::Error*>(caught))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10aux::class_cast< ::x10::lang::Error*>(caught)));
    }
    
    //#line 822 "x10/xrx/Runtime.x10"
    ::x10aux::throwException(::x10aux::nullCheck(::x10::xrx::Runtime__AtCheckedWrapper::_make(caught)));
}
#endif // X10_XRX_RUNTIME_H_wrapAtChecked_3567
#ifndef X10_XRX_RUNTIME_H_evalAt_3592
#define X10_XRX_RUNTIME_H_evalAt_3592
template<class TPMGL(T)> TPMGL(T) x10::xrx::Runtime::evalAt(
  ::x10::lang::Place place, ::x10::lang::Fun_0_0<TPMGL(T)>* eval,
  ::x10::xrx::Runtime__Profile* prof) {
    
    //#line 1229 "x10/xrx/Runtime.x10"
    TPMGL(T) r = ::x10aux::class_cast<TPMGL(T)>(::x10::xrx::Runtime::evalAtImpl(
                                                  place, reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Any*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >(sizeof(x10_xrx_Runtime__closure__31<TPMGL(T)>)))x10_xrx_Runtime__closure__31<TPMGL(T)>(eval))),
                                                  prof));
    
    //#line 1230 "x10/xrx/Runtime.x10"
    ::x10aux::dealloc(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Any*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >(sizeof(x10_xrx_Runtime__closure__32<TPMGL(T)>)))x10_xrx_Runtime__closure__32<TPMGL(T)>(eval))));
    
    //#line 1231 "x10/xrx/Runtime.x10"
    return r;
    
}
#endif // X10_XRX_RUNTIME_H_evalAt_3592
#ifndef X10_XRX_RUNTIME_H_evalImmediateAt_3595
#define X10_XRX_RUNTIME_H_evalImmediateAt_3595
template<class TPMGL(T)> TPMGL(T) x10::xrx::Runtime::evalImmediateAt(
  ::x10::lang::Place place, ::x10::lang::Fun_0_0<TPMGL(T)>* eval) {
    
    //#line 1303 "x10/xrx/Runtime.x10"
    TPMGL(T) r = ::x10aux::class_cast<TPMGL(T)>(::x10::xrx::Runtime::evalImmediateAtImpl(
                                                  place, reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Any*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >(sizeof(x10_xrx_Runtime__closure__36<TPMGL(T)>)))x10_xrx_Runtime__closure__36<TPMGL(T)>(eval)))));
    
    //#line 1304 "x10/xrx/Runtime.x10"
    ::x10aux::dealloc(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::Any*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::Any*> >(sizeof(x10_xrx_Runtime__closure__37<TPMGL(T)>)))x10_xrx_Runtime__closure__37<TPMGL(T)>(eval))));
    
    //#line 1305 "x10/xrx/Runtime.x10"
    return r;
    
}
#endif // X10_XRX_RUNTIME_H_evalImmediateAt_3595
#ifndef X10_XRX_RUNTIME_H_startCollectingFinish_3614
#define X10_XRX_RUNTIME_H_startCollectingFinish_3614
template<class TPMGL(T)> ::x10::xrx::FinishState* x10::xrx::Runtime::startCollectingFinish(
  ::x10::lang::Reducible<TPMGL(T)>* r) {
    
    //#line 1463 "x10/xrx/Runtime.x10"
    return ::x10aux::nullCheck(::x10::xrx::Runtime::activity())->swapFinish(
             reinterpret_cast< ::x10::xrx::FinishState*>((__extension__ ({
                 ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>* alloc__106148 =
                    (new (::x10aux::alloc_z< ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)> >()) ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>());
                 (alloc__106148)->::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>::_constructor(
                   r);
                 alloc__106148;
             }))
             ));
    
}
#endif // X10_XRX_RUNTIME_H_startCollectingFinish_3614
#ifndef X10_XRX_RUNTIME_H_makeOffer_3615
#define X10_XRX_RUNTIME_H_makeOffer_3615
template<class TPMGL(T)> void x10::xrx::Runtime::makeOffer(
  TPMGL(T) t) {
    
    //#line 1467 "x10/xrx/Runtime.x10"
    ::x10::xrx::FinishState* state = ::x10aux::nullCheck(::x10::xrx::Runtime::activity())->finishState();
    
    //#line 1469 "x10/xrx/Runtime.x10"
    ::x10aux::nullCheck((::x10aux::class_cast< ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>*>(state)))->accept(
      t, ::x10aux::nullCheck((::x10aux::class_cast< ::x10::xrx::Worker*>(::x10::xrx::Thread::currentThread())))->FMGL(workerId));
}
#endif // X10_XRX_RUNTIME_H_makeOffer_3615
#ifndef X10_XRX_RUNTIME_H_stopCollectingFinish_3616
#define X10_XRX_RUNTIME_H_stopCollectingFinish_3616
template<class TPMGL(T)> TPMGL(T) x10::xrx::Runtime::stopCollectingFinish(
  ::x10::xrx::FinishState* f) {
    
    //#line 1473 "x10/xrx/Runtime.x10"
    ::x10::xrx::FinishState* state = ::x10aux::nullCheck(::x10::xrx::Runtime::activity())->swapFinish(
                                       f);
    
    //#line 1474 "x10/xrx/Runtime.x10"
    return ::x10aux::nullCheck((::x10aux::class_cast< ::x10::xrx::FinishState__CollectingFinish<TPMGL(T)>*>(state)))->waitForFinishExpr();
    
}
#endif // X10_XRX_RUNTIME_H_stopCollectingFinish_3616
#endif // X10_XRX_RUNTIME_H_GENERICS
#endif // __X10_XRX_RUNTIME_H_NODEPS
