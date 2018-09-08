#ifndef __X10_XRX_FINISHRESILIENT_H
#define __X10_XRX_FINISHRESILIENT_H

#include <x10rt.h>


#define X10_XRX_FINISHSTATE_H_NODEPS
#include <x10/xrx/FinishState.h>
#undef X10_XRX_FINISHSTATE_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
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
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace xrx { 
class Activity;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace xrx { 
class FinishResilientPlace0;
} } 
namespace x10 { namespace compiler { 
class Native;
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
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishResilient_Strings {
  public:
    static ::x10::lang::String sl__171901;
    static ::x10::lang::String sl__171902;
    static ::x10::lang::String sl__171906;
    static ::x10::lang::String sl__171897;
    static ::x10::lang::String sl__171904;
    static ::x10::lang::String sl__171910;
    static ::x10::lang::String sl__171899;
    static ::x10::lang::String sl__171900;
    static ::x10::lang::String sl__171903;
    static ::x10::lang::String sl__171905;
    static ::x10::lang::String sl__171908;
    static ::x10::lang::String sl__171909;
    static ::x10::lang::String sl__171898;
    static ::x10::lang::String sl__171907;
};

class FinishResilient : public ::x10::xrx::FinishState   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(verbose) */
    static x10_long FMGL(verbose);
    static void FMGL(verbose__do_init)();
    static void FMGL(verbose__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(verbose__status);
    static ::x10::lang::CheckedThrowable* FMGL(verbose__exception);
    static x10_long FMGL(verbose__get)();
    
    static x10_long getEnvLong(::x10::lang::String* name);
    static void debug(::x10::lang::String* msg);
    static void dumpStack(::x10::lang::String* msg);
    /* Static field: FMGL(ASYNC_SIZE_THRESHOLD) */
    static x10_long FMGL(ASYNC_SIZE_THRESHOLD);
    static void FMGL(ASYNC_SIZE_THRESHOLD__do_init)();
    static void FMGL(ASYNC_SIZE_THRESHOLD__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(ASYNC_SIZE_THRESHOLD__status);
    static ::x10::lang::CheckedThrowable* FMGL(ASYNC_SIZE_THRESHOLD__exception);
    static x10_long FMGL(ASYNC_SIZE_THRESHOLD__get)();
    
    static void failJavaOnlyMode();
    static ::x10::xrx::FinishState* getCurrentFS();
    static ::x10::xrx::FinishState* make(::x10::xrx::FinishState* parent);
    static ::x10::xrx::FinishState* makeFinishResilientHCLocal(::x10::lang::Any* o);
    static void notifyPlaceDeath();
    static void notifyPlaceDeath_HC();
    virtual ::x10::xrx::FinishResilient* x10__xrx__FinishResilient____this__x10__xrx__FinishResilient(
      );
    void _constructor();
    
    virtual void __fieldInitializers_x10_xrx_FinishResilient();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_XRX_FINISHRESILIENT_H

namespace x10 { namespace xrx { 
class FinishResilient;
} } 

#ifndef X10_XRX_FINISHRESILIENT_H_NODEPS
#define X10_XRX_FINISHRESILIENT_H_NODEPS
#ifndef X10_XRX_FINISHRESILIENT_H_GENERICS
#define X10_XRX_FINISHRESILIENT_H_GENERICS
inline x10_long x10::xrx::FinishResilient::FMGL(verbose__get)() {
    if (FMGL(verbose__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(verbose__init)();
    }
    return x10::xrx::FinishResilient::FMGL(verbose);
}

inline x10_long x10::xrx::FinishResilient::FMGL(ASYNC_SIZE_THRESHOLD__get)() {
    if (FMGL(ASYNC_SIZE_THRESHOLD__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(ASYNC_SIZE_THRESHOLD__init)();
    }
    return x10::xrx::FinishResilient::FMGL(ASYNC_SIZE_THRESHOLD);
}

#endif // X10_XRX_FINISHRESILIENT_H_GENERICS
#endif // __X10_XRX_FINISHRESILIENT_H_NODEPS
