#ifndef __X10_UTIL_LOGGING_CONSOLELOGFACTORY_H
#define __X10_UTIL_LOGGING_CONSOLELOGFACTORY_H

#include <x10rt.h>


#define X10_UTIL_LOGGING_LOGFACTORY_H_NODEPS
#include <x10/util/logging/LogFactory.h>
#undef X10_UTIL_LOGGING_LOGFACTORY_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class Map;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace util { namespace logging { 
class Log;
} } } 
namespace x10 { namespace util { namespace logging { 
class ConsoleLogger;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Container;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
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
namespace x10 { namespace compiler { 
class NativeRep;
} } 

namespace x10 { namespace util { namespace logging { 

class ConsoleLogFactory : public ::x10::util::logging::LogFactory   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor();
    
    static ::x10::util::logging::ConsoleLogFactory* _make();
    
    virtual void release();
    virtual ::x10::util::logging::Log* getInstance(::x10::lang::String* name);
    virtual ::x10::lang::Rail< ::x10::lang::String* >* getAttributeNames(
      );
    virtual ::x10::lang::Any* getAttribute(::x10::lang::String* name);
    virtual void setAttribute(::x10::lang::String* name, ::x10::lang::Any* value);
    virtual void removeAttribute(::x10::lang::String* name);
    template<class TPMGL(K)> static ::x10::lang::Rail< TPMGL(K) >* toRail(
      ::x10::util::Container<TPMGL(K)>* c);
    ::x10::util::Map< ::x10::lang::String*, ::x10::lang::Any*>* FMGL(attributes);
    
    static ::x10::util::logging::LogFactory* getFactory();
    static void releaseAll();
    /* Static field: FMGL(factory) */
    static ::x10::lang::Cell< ::x10::util::logging::LogFactory*>* FMGL(factory);
    static void FMGL(factory__do_init)();
    static void FMGL(factory__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(factory__status);
    static ::x10::lang::CheckedThrowable* FMGL(factory__exception);
    static ::x10::lang::Cell< ::x10::util::logging::LogFactory*>* FMGL(factory__get)();
    
    /* Static field: FMGL(factoryLock) */
    static ::x10::util::concurrent::Lock* FMGL(factoryLock);
    static void FMGL(factoryLock__do_init)();
    static void FMGL(factoryLock__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(factoryLock__status);
    static ::x10::lang::CheckedThrowable* FMGL(factoryLock__exception);
    static ::x10::util::concurrent::Lock* FMGL(factoryLock__get)();
    
    virtual ::x10::util::logging::ConsoleLogFactory* x10__util__logging__ConsoleLogFactory____this__x10__util__logging__ConsoleLogFactory(
      );
    virtual void __fieldInitializers_x10_util_logging_ConsoleLogFactory(
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


} } } 
#endif // X10_UTIL_LOGGING_CONSOLELOGFACTORY_H

namespace x10 { namespace util { namespace logging { 
class ConsoleLogFactory;
} } } 

#ifndef X10_UTIL_LOGGING_CONSOLELOGFACTORY_H_NODEPS
#define X10_UTIL_LOGGING_CONSOLELOGFACTORY_H_NODEPS
#include <x10/util/logging/LogFactory.h>
#include <x10/util/Map.h>
#include <x10/lang/String.h>
#include <x10/lang/Any.h>
#include <x10/util/HashMap.h>
#include <x10/compiler/Native.h>
#include <x10/util/logging/Log.h>
#include <x10/util/logging/ConsoleLogger.h>
#include <x10/lang/Rail.h>
#include <x10/util/Container.h>
#include <x10/util/Set.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Long.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/Boolean.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Cell.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeRep.h>
#ifndef X10_UTIL_LOGGING_CONSOLELOGFACTORY_H_GENERICS
#define X10_UTIL_LOGGING_CONSOLELOGFACTORY_H_GENERICS
#ifndef X10_UTIL_LOGGING_CONSOLELOGFACTORY_H_toRail_2381
#define X10_UTIL_LOGGING_CONSOLELOGFACTORY_H_toRail_2381
template<class TPMGL(K)> ::x10::lang::Rail< TPMGL(K) >* x10::util::logging::ConsoleLogFactory::toRail(
  ::x10::util::Container<TPMGL(K)>* c) {
    
    //#line 58 "x10/util/logging/ConsoleLogFactory.x10"
    ::x10::lang::Rail< TPMGL(K) >* arr = ::x10::lang::Rail< TPMGL(K) >::_makeUnsafe(::x10::util::Container<TPMGL(K)>::size(::x10aux::nullCheck(c)), false);
    
    //#line 59 "x10/util/logging/ConsoleLogFactory.x10"
    x10_long i = ((x10_long)0ll);
    
    //#line 60 "x10/util/logging/ConsoleLogFactory.x10"
    {
        ::x10::lang::Iterator<TPMGL(K)>* k__140026;
        for (k__140026 = ::x10::util::Container<TPMGL(K)>::iterator(::x10aux::nullCheck(c));
             ::x10::lang::Iterator<TPMGL(K)>::hasNext(::x10aux::nullCheck(k__140026));
             ) {
            TPMGL(K) k = ::x10::lang::Iterator<TPMGL(K)>::next(::x10aux::nullCheck(k__140026));
            
            //#line 61 "x10/util/logging/ConsoleLogFactory.x10"
            arr->x10::lang::template Rail< TPMGL(K) >::__set(
              (__extension__ ({
                  x10_long pre__140016 = i;
                  i = ((i) + (((x10_long)1ll)));
                  pre__140016;
              }))
              , k);
        }
    }
    
    //#line 63 "x10/util/logging/ConsoleLogFactory.x10"
    return arr;
    
}
#endif // X10_UTIL_LOGGING_CONSOLELOGFACTORY_H_toRail_2381
inline ::x10::lang::Cell< ::x10::util::logging::LogFactory*>*
  x10::util::logging::ConsoleLogFactory::FMGL(factory__get)() {
    if (FMGL(factory__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(factory__init)();
    }
    return x10::util::logging::ConsoleLogFactory::FMGL(factory);
}

inline ::x10::util::concurrent::Lock* x10::util::logging::ConsoleLogFactory::FMGL(factoryLock__get)() {
    if (FMGL(factoryLock__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(factoryLock__init)();
    }
    return x10::util::logging::ConsoleLogFactory::FMGL(factoryLock);
}

#endif // X10_UTIL_LOGGING_CONSOLELOGFACTORY_H_GENERICS
#endif // __X10_UTIL_LOGGING_CONSOLELOGFACTORY_H_NODEPS
