#ifndef __X10_UTIL_LOGGING_LOGFACTORY_H
#define __X10_UTIL_LOGGING_LOGFACTORY_H

#include <x10rt.h>


namespace x10 { namespace util { namespace logging { 
class ConsoleLogFactory;
} } } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { namespace logging { 
class Log;
} } } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeRep;
} } 

namespace x10 { namespace util { namespace logging { 

class LogFactory_Strings {
  public:
    static ::x10::lang::String sl__159350;
    static ::x10::lang::String sl__159349;
};

class LogFactory : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10::util::logging::LogFactory* getFactory();
    virtual void release() = 0;
    static void releaseAll();
    virtual ::x10::lang::Rail< ::x10::lang::String* >* getAttributeNames(
      ) = 0;
    virtual ::x10::lang::Any* getAttribute(::x10::lang::String* name) = 0;
    virtual void setAttribute(::x10::lang::String* name, ::x10::lang::Any* value) = 0;
    virtual void removeAttribute(::x10::lang::String* name) = 0;
    virtual ::x10::util::logging::Log* getInstance(::x10::lang::String* name) = 0;
    template<class TPMGL(T)> static ::x10::util::logging::Log* getInstance(
      ::x10::util::logging::LogFactory* factory);
    static ::x10::util::logging::Log* getLog(::x10::lang::String* name);
    template<class TPMGL(T)> static ::x10::util::logging::Log* getLog();
    static ::x10::lang::String* objectId(::x10::lang::Any* o);
    virtual ::x10::util::logging::LogFactory* x10__util__logging__LogFactory____this__x10__util__logging__LogFactory(
      );
    void _constructor();
    
    virtual void __fieldInitializers_x10_util_logging_LogFactory(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_UTIL_LOGGING_LOGFACTORY_H

namespace x10 { namespace util { namespace logging { 
class LogFactory;
} } } 

#ifndef X10_UTIL_LOGGING_LOGFACTORY_H_NODEPS
#define X10_UTIL_LOGGING_LOGFACTORY_H_NODEPS
#include <x10/util/logging/ConsoleLogFactory.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/lang/Any.h>
#include <x10/util/logging/Log.h>
#include <x10/lang/System.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeRep.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_LOGGING_LOGFACTORY_H_GENERICS
#define X10_UTIL_LOGGING_LOGFACTORY_H_GENERICS
#ifndef X10_UTIL_LOGGING_LOGFACTORY_H_getInstance_2397
#define X10_UTIL_LOGGING_LOGFACTORY_H_getInstance_2397
template<class TPMGL(T)> ::x10::util::logging::Log* x10::util::logging::LogFactory::getInstance(
  ::x10::util::logging::LogFactory* factory) {
    
    //#line 58 "x10/util/logging/LogFactory.x10"
    return ::x10aux::nullCheck(factory)->getInstance(::x10aux::makeStringLit(x10aux::getRTT< TPMGL(T)>()->name()));
    
}
#endif // X10_UTIL_LOGGING_LOGFACTORY_H_getInstance_2397
#ifndef X10_UTIL_LOGGING_LOGFACTORY_H_getLog_2399
#define X10_UTIL_LOGGING_LOGFACTORY_H_getLog_2399
template<class TPMGL(T)> ::x10::util::logging::Log* x10::util::logging::LogFactory::getLog(
  ) {
    
    //#line 70 "x10/util/logging/LogFactory.x10"
    return ::x10::util::logging::LogFactory::template getInstance< TPMGL(T) >(
             ::x10::util::logging::LogFactory::getFactory());
    
}
#endif // X10_UTIL_LOGGING_LOGFACTORY_H_getLog_2399
#endif // X10_UTIL_LOGGING_LOGFACTORY_H_GENERICS
#endif // __X10_UTIL_LOGGING_LOGFACTORY_H_NODEPS
