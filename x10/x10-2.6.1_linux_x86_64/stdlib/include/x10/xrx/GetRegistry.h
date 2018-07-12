#ifndef __X10_XRX_GETREGISTRY_H
#define __X10_XRX_GETREGISTRY_H

#include <x10rt.h>


namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace xrx { 
class GetRegistry__GetHandle;
} } 
namespace x10 { namespace util { namespace concurrent { 
class AtomicInteger;
} } } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
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
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class DeadPlaceException;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class Configuration;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class GetRegistry_Strings {
  public:
    static ::x10::lang::String sl__172148;
    static ::x10::lang::String sl__172149;
    static ::x10::lang::String sl__172150;
};

class GetRegistry : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(outstandingRequests) */
    static ::x10::util::HashMap<x10_int, ::x10::xrx::GetRegistry__GetHandle*>* FMGL(outstandingRequests);
    static void FMGL(outstandingRequests__do_init)();
    static void FMGL(outstandingRequests__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(outstandingRequests__status);
    static ::x10::lang::CheckedThrowable* FMGL(outstandingRequests__exception);
    static ::x10::util::HashMap<x10_int, ::x10::xrx::GetRegistry__GetHandle*>*
      FMGL(outstandingRequests__get)();
    
    /* Static field: FMGL(nextId) */
    static ::x10::util::concurrent::AtomicInteger* FMGL(nextId);
    static void FMGL(nextId__do_init)();
    static void FMGL(nextId__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(nextId__status);
    static ::x10::lang::CheckedThrowable* FMGL(nextId__exception);
    static ::x10::util::concurrent::AtomicInteger* FMGL(nextId__get)();
    
    /* Static field: FMGL(lock) */
    static ::x10::util::concurrent::Lock* FMGL(lock);
    static void FMGL(lock__do_init)();
    static void FMGL(lock__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(lock__status);
    static ::x10::lang::CheckedThrowable* FMGL(lock__exception);
    static ::x10::util::concurrent::Lock* FMGL(lock__get)();
    
    static x10_int registerGet(::x10::lang::Place srcPlace, ::x10::xrx::FinishState* finishState,
                               ::x10::lang::VoidFun_0_0* notifier);
    static x10_int registerGet(::x10::lang::Place srcPlace, ::x10::lang::Any* dst,
                               x10_int dstIdx, x10_int numElems,
                               ::x10::xrx::FinishState* finishState,
                               ::x10::lang::VoidFun_0_0* notifier);
    static ::x10::xrx::GetRegistry__GetHandle* completeGet(
      x10_int id);
    static void squashGet(x10_int id);
    static void notifyPlaceDeath();
    virtual ::x10::xrx::GetRegistry* x10__xrx__GetRegistry____this__x10__xrx__GetRegistry(
      );
    void _constructor();
    
    static ::x10::xrx::GetRegistry* _make();
    
    virtual void __fieldInitializers_x10_xrx_GetRegistry(
      );
    
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
#endif // X10_XRX_GETREGISTRY_H

namespace x10 { namespace xrx { 
class GetRegistry;
} } 

#ifndef X10_XRX_GETREGISTRY_H_NODEPS
#define X10_XRX_GETREGISTRY_H_NODEPS
#include <x10/util/HashMap.h>
#include <x10/lang/Int.h>
#include <x10/xrx/GetRegistry__GetHandle.h>
#include <x10/util/concurrent/AtomicInteger.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/lang/Place.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Any.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Iterator.h>
#include <x10/util/Map__Entry.h>
#include <x10/lang/Iterable.h>
#include <x10/util/Set.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/DeadPlaceException.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/Configuration.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/String.h>
#include <x10/util/ListIterator.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_XRX_GETREGISTRY_H_GENERICS
#define X10_XRX_GETREGISTRY_H_GENERICS
inline ::x10::util::HashMap<x10_int, ::x10::xrx::GetRegistry__GetHandle*>*
  x10::xrx::GetRegistry::FMGL(outstandingRequests__get)() {
    if (FMGL(outstandingRequests__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(outstandingRequests__init)();
    }
    return x10::xrx::GetRegistry::FMGL(outstandingRequests);
}

inline ::x10::util::concurrent::AtomicInteger* x10::xrx::GetRegistry::FMGL(nextId__get)() {
    if (FMGL(nextId__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(nextId__init)();
    }
    return x10::xrx::GetRegistry::FMGL(nextId);
}

inline ::x10::util::concurrent::Lock* x10::xrx::GetRegistry::FMGL(lock__get)() {
    if (FMGL(lock__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(lock__init)();
    }
    return x10::xrx::GetRegistry::FMGL(lock);
}

#endif // X10_XRX_GETREGISTRY_H_GENERICS
#endif // __X10_XRX_GETREGISTRY_H_NODEPS
