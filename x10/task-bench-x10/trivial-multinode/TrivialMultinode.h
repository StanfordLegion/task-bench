#ifndef __TRIVIALMULTINODE_H
#define __TRIVIALMULTINODE_H

#include <x10rt.h>


#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
class TrivialMultinode__PlaceInstance;
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
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
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
class Synthetic;
} } 

class TrivialMultinode_Strings {
  public:
    static ::x10::lang::String sl__1570;
    static ::x10::lang::String sl__1569;
    static ::x10::lang::String sl__1568;
};

class TrivialMultinode : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::PlaceLocalHandle< ::TrivialMultinode__PlaceInstance*> FMGL(plh);
    
    void _constructor();
    
    static ::TrivialMultinode* _make();
    
    virtual void broadcast();
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::TrivialMultinode* TrivialMultinode____this__TrivialMultinode(
      );
    virtual void __fieldInitializers_TrivialMultinode();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // TRIVIALMULTINODE_H

class TrivialMultinode;

#ifndef TRIVIALMULTINODE_H_NODEPS
#define TRIVIALMULTINODE_H_NODEPS
#ifndef TRIVIALMULTINODE_H_GENERICS
#define TRIVIALMULTINODE_H_GENERICS
#endif // TRIVIALMULTINODE_H_GENERICS
#endif // __TRIVIALMULTINODE_H_NODEPS
