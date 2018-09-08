#ifndef __X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H
#define __X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { namespace resilient { 
template<class TPMGL(K), class TPMGL(V)> class ResilientTransactionalMap;
} } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace resilient { 

class ResilientTransactionManager_Strings {
  public:
    static ::x10::lang::String sl__160116;
};

class ResilientTransactionManager : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    template<class TPMGL(T)> static TPMGL(T) runTransaction(::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)>* run);
    template<class TPMGL(T)> static TPMGL(T) runLocalTransaction(::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)>* run);
    template<class TPMGL(K), class TPMGL(V)> static ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*
      getMap(::x10::util::resilient::ResilientTransactionManager* manager,
             ::x10::lang::String* mapName);
    virtual ::x10::util::resilient::ResilientTransactionManager* x10__util__resilient__ResilientTransactionManager____this__x10__util__resilient__ResilientTransactionManager(
      );
    void _constructor();
    
    virtual void __fieldInitializers_x10_util_resilient_ResilientTransactionManager(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H

namespace x10 { namespace util { namespace resilient { 
class ResilientTransactionManager;
} } } 

#ifndef X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_NODEPS
#define X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Native.h>
#include <x10/lang/String.h>
#include <x10/util/resilient/ResilientTransactionalMap.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_GENERICS
#define X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_GENERICS
#ifndef X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_runTransaction_2753
#define X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_runTransaction_2753
template<class TPMGL(T)> TPMGL(T) x10::util::resilient::ResilientTransactionManager::runTransaction(
  ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)>* run) {
    
    //#line 28 "x10/util/resilient/ResilientTransactionManager.x10"
    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make((&::x10::util::resilient::ResilientTransactionManager_Strings::sl__160116))));
}
#endif // X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_runTransaction_2753
#ifndef X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_runLocalTransaction_2754
#define X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_runLocalTransaction_2754
template<class TPMGL(T)> TPMGL(T) x10::util::resilient::ResilientTransactionManager::runLocalTransaction(
  ::x10::lang::Fun_0_1< ::x10::util::resilient::ResilientTransactionManager*, TPMGL(T)>* run) {
    
    //#line 33 "x10/util/resilient/ResilientTransactionManager.x10"
    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make((&::x10::util::resilient::ResilientTransactionManager_Strings::sl__160116))));
}
#endif // X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_runLocalTransaction_2754
#ifndef X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_getMap_2755
#define X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_getMap_2755
template<class TPMGL(K), class TPMGL(V)> ::x10::util::resilient::ResilientTransactionalMap<TPMGL(K), TPMGL(V)>*
  x10::util::resilient::ResilientTransactionManager::getMap(
  ::x10::util::resilient::ResilientTransactionManager* manager,
  ::x10::lang::String* mapName) {
    
    //#line 44 "x10/util/resilient/ResilientTransactionManager.x10"
    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make((&::x10::util::resilient::ResilientTransactionManager_Strings::sl__160116))));
}
#endif // X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_getMap_2755
#endif // X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_GENERICS
#endif // __X10_UTIL_RESILIENT_RESILIENTTRANSACTIONMANAGER_H_NODEPS
