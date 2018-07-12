#ifndef __X10_XRX_FINISHRESILIENTPLACE0__STATE_H
#define __X10_XRX_FINISHRESILIENTPLACE0__STATE_H

#include <x10rt.h>


#define X10_IO_UNSERIALIZABLE_H_NODEPS
#include <x10/io/Unserializable.h>
#undef X10_IO_UNSERIALIZABLE_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_XRX_FINISHRESILIENTPLACE0__ID_H_NODEPS
#include <x10/xrx/FinishResilientPlace0__Id.h>
#undef X10_XRX_FINISHRESILIENTPLACE0__ID_H_NODEPS
#define X10_XRX_FINISHRESILIENTPLACE0__ID_H_NODEPS
#include <x10/xrx/FinishResilientPlace0__Id.h>
#undef X10_XRX_FINISHRESILIENTPLACE0__ID_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_XRX_FINISHRESILIENTPLACE0__TASK_H_NODEPS
#include <x10/xrx/FinishResilientPlace0__Task.h>
#undef X10_XRX_FINISHRESILIENTPLACE0__TASK_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_XRX_FINISHRESILIENTPLACE0__EDGE_H_NODEPS
#include <x10/xrx/FinishResilientPlace0__Edge.h>
#undef X10_XRX_FINISHRESILIENTPLACE0__EDGE_H_NODEPS
namespace x10 { namespace xrx { 
class FinishResilientPlace0;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace xrx { 
class FinishResilient;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace util { namespace concurrent { 
class SimpleLatch;
} } } 
namespace x10 { namespace compiler { 
class Immediate;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class DeadPlaceException;
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
namespace x10 { namespace util { 
template<class TPMGL(T)> class HashSet;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class MapSet;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace xrx { 

class FinishResilientPlace0__State_Strings {
  public:
    static ::x10::lang::String sl__161288;
    static ::x10::lang::String sl__161276;
    static ::x10::lang::String sl__161286;
    static ::x10::lang::String sl__161282;
    static ::x10::lang::String sl__161302;
    static ::x10::lang::String sl__161293;
    static ::x10::lang::String sl__161268;
    static ::x10::lang::String sl__161307;
    static ::x10::lang::String sl__161285;
    static ::x10::lang::String sl__161296;
    static ::x10::lang::String sl__161269;
    static ::x10::lang::String sl__161309;
    static ::x10::lang::String sl__161281;
    static ::x10::lang::String sl__161272;
    static ::x10::lang::String sl__161267;
    static ::x10::lang::String sl__161290;
    static ::x10::lang::String sl__161289;
    static ::x10::lang::String sl__161277;
    static ::x10::lang::String sl__161274;
    static ::x10::lang::String sl__161305;
    static ::x10::lang::String sl__161304;
    static ::x10::lang::String sl__161295;
    static ::x10::lang::String sl__161306;
    static ::x10::lang::String sl__161299;
    static ::x10::lang::String sl__161280;
    static ::x10::lang::String sl__161298;
    static ::x10::lang::String sl__161287;
    static ::x10::lang::String sl__161297;
    static ::x10::lang::String sl__161308;
    static ::x10::lang::String sl__161275;
    static ::x10::lang::String sl__161279;
    static ::x10::lang::String sl__161303;
    static ::x10::lang::String sl__161283;
    static ::x10::lang::String sl__161294;
    static ::x10::lang::String sl__161301;
    static ::x10::lang::String sl__161291;
    static ::x10::lang::String sl__161292;
    static ::x10::lang::String sl__161310;
    static ::x10::lang::String sl__161273;
    static ::x10::lang::String sl__161271;
    static ::x10::lang::String sl__161300;
    static ::x10::lang::String sl__161270;
    static ::x10::lang::String sl__161278;
    static ::x10::lang::String sl__161284;
};

class FinishResilientPlace0__State : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::io::Unserializable::itable< ::x10::xrx::FinishResilientPlace0__State > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::xrx::FinishResilientPlace0__State > _itable_1;
    
    ::x10::lang::GlobalRef< ::x10::xrx::FinishResilientPlace0* > FMGL(gfs);
    
    ::x10::xrx::FinishResilientPlace0__Id FMGL(id);
    
    ::x10::xrx::FinishResilientPlace0__Id FMGL(parentId);
    
    x10_long FMGL(numActive);
    
    ::x10::util::HashMap< ::x10::xrx::FinishResilientPlace0__Task, x10_int>*
      FMGL(live);
    
    ::x10::util::HashMap< ::x10::xrx::FinishResilientPlace0__Edge, x10_int>*
      FMGL(_transit);
    
    ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* FMGL(excs);
    
    ::x10::xrx::FinishResilientPlace0__Id FMGL(adopterId);
    
    ::x10::util::GrowableRail< ::x10::xrx::FinishResilientPlace0__Id>* FMGL(adoptees);
    
    ::x10::util::HashMap< ::x10::xrx::FinishResilientPlace0__Task, x10_int>*
      FMGL(_liveAdopted);
    
    ::x10::util::HashMap< ::x10::xrx::FinishResilientPlace0__Edge, x10_int>*
      FMGL(_transitAdopted);
    
    void _constructor(::x10::xrx::FinishResilientPlace0__Id id, ::x10::xrx::FinishResilientPlace0__Id parentId,
                      ::x10::lang::GlobalRef< ::x10::xrx::FinishResilientPlace0* > gfs);
    
    static ::x10::xrx::FinishResilientPlace0__State* _make(::x10::xrx::FinishResilientPlace0__Id id,
                                                           ::x10::xrx::FinishResilientPlace0__Id parentId,
                                                           ::x10::lang::GlobalRef< ::x10::xrx::FinishResilientPlace0* > gfs);
    
    virtual x10_boolean isAdopted();
    virtual ::x10::util::HashMap< ::x10::xrx::FinishResilientPlace0__Task, x10_int>*
      liveAdopted();
    virtual ::x10::util::HashMap< ::x10::xrx::FinishResilientPlace0__Edge, x10_int>*
      transit();
    virtual ::x10::util::HashMap< ::x10::xrx::FinishResilientPlace0__Edge, x10_int>*
      transitAdopted();
    template<class TPMGL(K)> static void increment(::x10::util::HashMap<TPMGL(K), x10_int>* map,
                                                   TPMGL(K) k);
    template<class TPMGL(K)> static void decrement(::x10::util::HashMap<TPMGL(K), x10_int>* map,
                                                   TPMGL(K) k);
    virtual void addException(::x10::lang::CheckedThrowable* t);
    virtual void inTransit(x10_long srcId, x10_long dstId,
                           x10_int kind, ::x10::lang::String* tag);
    virtual void transitToLive(x10_long srcId, x10_long dstId,
                               x10_int kind, ::x10::lang::String* tag);
    virtual void addLive(x10_long srcId, x10_long dstId, x10_int kind,
                         ::x10::lang::String* tag);
    virtual void transitToCompleted(x10_long srcId, x10_long dstId,
                                    x10_int kind, ::x10::lang::CheckedThrowable* t);
    virtual void liveToCompleted(x10_long placeId, x10_int kind);
    virtual void releaseLatch();
    virtual x10_boolean quiescent();
    virtual void removeFromStates();
    virtual void addDeadPlaceException(x10_long placeId);
    virtual void seekAdoption();
    virtual void convertDeadActivities();
    virtual void dump();
    virtual ::x10::xrx::FinishResilientPlace0__State* x10__xrx__FinishResilientPlace0__State____this__x10__xrx__FinishResilientPlace0__State(
      );
    virtual void __fieldInitializers_x10_xrx_FinishResilientPlace0_State(
      );
    
    // Serialization
    virtual void _serialize_body(::x10aux::serialization_buffer& buf) {
        ::x10aux::throwNotSerializableException("Can't serialize x10.xrx.FinishResilientPlace0$State");
    }
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        ::x10aux::throwNotSerializableException("Can't serialize x10.xrx.FinishResilientPlace0$State");
    }
    
    
};


} } 
#endif // X10_XRX_FINISHRESILIENTPLACE0__STATE_H

namespace x10 { namespace xrx { 
class FinishResilientPlace0__State;
} } 

#ifndef X10_XRX_FINISHRESILIENTPLACE0__STATE_H_NODEPS
#define X10_XRX_FINISHRESILIENTPLACE0__STATE_H_NODEPS
#include <x10/io/Unserializable.h>
#include <x10/lang/GlobalRef.h>
#include <x10/xrx/FinishResilientPlace0__Id.h>
#include <x10/lang/Long.h>
#include <x10/xrx/FinishResilientPlace0__Task.h>
#include <x10/lang/Int.h>
#include <x10/xrx/FinishResilientPlace0__Edge.h>
#include <x10/xrx/FinishResilientPlace0.h>
#include <x10/util/HashMap.h>
#include <x10/util/GrowableRail.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/String.h>
#include <x10/xrx/FinishResilient.h>
#include <x10/lang/Rail.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/util/concurrent/SimpleLatch.h>
#include <x10/compiler/Immediate.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/DeadPlaceException.h>
#include <x10/lang/Iterator.h>
#include <x10/util/Map__Entry.h>
#include <x10/lang/Iterable.h>
#include <x10/util/Set.h>
#include <x10/util/HashSet.h>
#include <x10/util/MapSet.h>
#include <x10/util/StringBuilder.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_XRX_FINISHRESILIENTPLACE0__STATE_H_GENERICS
#define X10_XRX_FINISHRESILIENTPLACE0__STATE_H_GENERICS
#ifndef X10_XRX_FINISHRESILIENTPLACE0__STATE_H_increment_3205
#define X10_XRX_FINISHRESILIENTPLACE0__STATE_H_increment_3205
template<class TPMGL(K)> void x10::xrx::FinishResilientPlace0__State::increment(
  ::x10::util::HashMap<TPMGL(K), x10_int>* map, TPMGL(K) k) {
    
    //#line 96 "x10/xrx/FinishResilientPlace0.x10"
    ::x10aux::nullCheck(map)->put(k, ((::x10aux::nullCheck(map)->getOrElse(
                                         k, ((x10_int)0))) + (((x10_int)1))));
}
#endif // X10_XRX_FINISHRESILIENTPLACE0__STATE_H_increment_3205
#ifndef X10_XRX_FINISHRESILIENTPLACE0__STATE_H_decrement_3206
#define X10_XRX_FINISHRESILIENTPLACE0__STATE_H_decrement_3206
template<class TPMGL(K)> void x10::xrx::FinishResilientPlace0__State::decrement(
  ::x10::util::HashMap<TPMGL(K), x10_int>* map, TPMGL(K) k) {
    
    //#line 100 "x10/xrx/FinishResilientPlace0.x10"
    x10_int oldCount = ::x10aux::nullCheck(map)->__apply(k);
    
    //#line 101 "x10/xrx/FinishResilientPlace0.x10"
    if ((::x10aux::struct_equals(oldCount, ((x10_int)1)))) {
        
        //#line 102 "x10/xrx/FinishResilientPlace0.x10"
        ::x10aux::nullCheck(map)->remove(k);
    } else {
        
        //#line 104 "x10/xrx/FinishResilientPlace0.x10"
        ::x10aux::nullCheck(map)->__set(k, ((oldCount) - (((x10_int)1))));
    }
    
}
#endif // X10_XRX_FINISHRESILIENTPLACE0__STATE_H_decrement_3206
#endif // X10_XRX_FINISHRESILIENTPLACE0__STATE_H_GENERICS
#endif // __X10_XRX_FINISHRESILIENTPLACE0__STATE_H_NODEPS
