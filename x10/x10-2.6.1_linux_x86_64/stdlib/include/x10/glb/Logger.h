#ifndef __X10_GLB_LOGGER_H
#define __X10_GLB_LOGGER_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
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
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace glb { 

class Logger_Strings {
  public:
    static ::x10::lang::String sl__164389;
    static ::x10::lang::String sl__164391;
    static ::x10::lang::String sl__164392;
    static ::x10::lang::String sl__164386;
    static ::x10::lang::String sl__164394;
    static ::x10::lang::String sl__164393;
    static ::x10::lang::String sl__164390;
    static ::x10::lang::String sl__164388;
    static ::x10::lang::String sl__164387;
    static ::x10::lang::String sl__164395;
};

class Logger : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(nodesCount);
    
    x10_long FMGL(nodesGiven);
    
    x10_long FMGL(lifelineNodesReceived);
    
    x10_long FMGL(stealsAttempted);
    
    x10_long FMGL(stealsPerpetrated);
    
    x10_long FMGL(stealsReceived);
    
    x10_long FMGL(stealsSuffered);
    
    x10_long FMGL(nodesReceived);
    
    x10_long FMGL(lifelineStealsAttempted);
    
    x10_long FMGL(lifelineStealsPerpetrated);
    
    x10_long FMGL(lifelineStealsReceived);
    
    x10_long FMGL(lifelineStealsSuffered);
    
    x10_long FMGL(lastStartStopLiveTimeStamp);
    
    x10_long FMGL(timeAlive);
    
    x10_long FMGL(timeDead);
    
    x10_long FMGL(startTime);
    
    x10_long FMGL(timeReference);
    
    void _constructor(x10_boolean b);
    
    static ::x10::glb::Logger* _make(x10_boolean b);
    
    virtual void startLive();
    virtual void stopLive();
    virtual void collect(::x10::lang::Rail< ::x10::glb::Logger* >* logs);
    virtual void stats();
    static ::x10::lang::String* sub(::x10::lang::String* str, x10_int start,
                                    x10_int end);
    virtual void add(::x10::glb::Logger* other);
    virtual ::x10::glb::Logger* get(x10_boolean verbose);
    virtual ::x10::glb::Logger* x10__glb__Logger____this__x10__glb__Logger(
      );
    virtual void __fieldInitializers_x10_glb_Logger();
    
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
#endif // X10_GLB_LOGGER_H

namespace x10 { namespace glb { 
class Logger;
} } 

#ifndef X10_GLB_LOGGER_H_NODEPS
#define X10_GLB_LOGGER_H_NODEPS
#ifndef X10_GLB_LOGGER_H_GENERICS
#define X10_GLB_LOGGER_H_GENERICS
#endif // X10_GLB_LOGGER_H_GENERICS
#endif // __X10_GLB_LOGGER_H_NODEPS
