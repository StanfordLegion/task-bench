#ifndef __X10_UTIL_TEAM__LOCALTEAMSTATE_H
#define __X10_UTIL_TEAM__LOCALTEAMSTATE_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace util { namespace concurrent { 
class AtomicInteger;
} } } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace util { 
class Team__LocalTeamState__TreeStructure;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace compiler { 
class Pragma;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace xrx { 
class Thread;
} } 
namespace x10 { namespace xrx { 
class InterruptedException;
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
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace compiler { 
class NoInline;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace util { 
class TeamReductionHelper;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRail;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace util { 
class Team__DoubleIdx;
} } 
namespace x10 { namespace lang { 
class DeadPlaceException;
} } 
namespace x10 { namespace lang { 
class MultipleExceptions;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class Team__LocalTeamState_Strings {
  public:
    static ::x10::lang::String sl__171397;
    static ::x10::lang::String sl__171442;
    static ::x10::lang::String sl__171451;
    static ::x10::lang::String sl__171384;
    static ::x10::lang::String sl__171411;
    static ::x10::lang::String sl__171410;
    static ::x10::lang::String sl__171452;
    static ::x10::lang::String sl__171412;
    static ::x10::lang::String sl__171450;
    static ::x10::lang::String sl__171396;
    static ::x10::lang::String sl__171420;
    static ::x10::lang::String sl__171387;
    static ::x10::lang::String sl__171448;
    static ::x10::lang::String sl__171431;
    static ::x10::lang::String sl__171433;
    static ::x10::lang::String sl__171439;
    static ::x10::lang::String sl__171404;
    static ::x10::lang::String sl__171383;
    static ::x10::lang::String sl__171445;
    static ::x10::lang::String sl__171407;
    static ::x10::lang::String sl__171438;
    static ::x10::lang::String sl__171395;
    static ::x10::lang::String sl__171403;
    static ::x10::lang::String sl__171435;
    static ::x10::lang::String sl__171421;
    static ::x10::lang::String sl__171440;
    static ::x10::lang::String sl__171393;
    static ::x10::lang::String sl__171422;
    static ::x10::lang::String sl__171432;
    static ::x10::lang::String sl__171443;
    static ::x10::lang::String sl__171381;
    static ::x10::lang::String sl__171399;
    static ::x10::lang::String sl__171385;
    static ::x10::lang::String sl__171425;
    static ::x10::lang::String sl__171390;
    static ::x10::lang::String sl__171394;
    static ::x10::lang::String sl__171428;
    static ::x10::lang::String sl__171398;
    static ::x10::lang::String sl__171437;
    static ::x10::lang::String sl__171449;
    static ::x10::lang::String sl__171378;
    static ::x10::lang::String sl__171434;
    static ::x10::lang::String sl__171424;
    static ::x10::lang::String sl__171414;
    static ::x10::lang::String sl__171426;
    static ::x10::lang::String sl__171400;
    static ::x10::lang::String sl__171444;
    static ::x10::lang::String sl__171402;
    static ::x10::lang::String sl__171376;
    static ::x10::lang::String sl__171413;
    static ::x10::lang::String sl__171380;
    static ::x10::lang::String sl__171409;
    static ::x10::lang::String sl__171379;
    static ::x10::lang::String sl__171427;
    static ::x10::lang::String sl__171441;
    static ::x10::lang::String sl__171391;
    static ::x10::lang::String sl__171406;
    static ::x10::lang::String sl__171377;
    static ::x10::lang::String sl__171436;
    static ::x10::lang::String sl__171408;
    static ::x10::lang::String sl__171417;
    static ::x10::lang::String sl__171405;
    static ::x10::lang::String sl__171415;
    static ::x10::lang::String sl__171423;
    static ::x10::lang::String sl__171453;
    static ::x10::lang::String sl__171386;
    static ::x10::lang::String sl__171446;
    static ::x10::lang::String sl__171382;
    static ::x10::lang::String sl__171418;
    static ::x10::lang::String sl__171419;
    static ::x10::lang::String sl__171447;
    static ::x10::lang::String sl__171388;
    static ::x10::lang::String sl__171429;
    static ::x10::lang::String sl__171389;
    static ::x10::lang::String sl__171392;
    static ::x10::lang::String sl__171416;
    static ::x10::lang::String sl__171430;
    static ::x10::lang::String sl__171401;
};

class Team__LocalTeamState : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::PlaceGroup* FMGL(places);
    
    x10_int FMGL(teamid);
    
    x10_long FMGL(myIndex);
    
    /* Static field: FMGL(PHASE_READY) */
    static const x10_int FMGL(PHASE_READY) = 0;
    static x10_int FMGL(PHASE_READY__get)();
    
    /* Static field: FMGL(PHASE_INIT) */
    static const x10_int FMGL(PHASE_INIT) = 1;
    static x10_int FMGL(PHASE_INIT__get)();
    
    /* Static field: FMGL(PHASE_GATHER1) */
    static const x10_int FMGL(PHASE_GATHER1) = 2;
    static x10_int FMGL(PHASE_GATHER1__get)();
    
    /* Static field: FMGL(PHASE_GATHER2) */
    static const x10_int FMGL(PHASE_GATHER2) = 3;
    static x10_int FMGL(PHASE_GATHER2__get)();
    
    /* Static field: FMGL(PHASE_PARENT) */
    static const x10_int FMGL(PHASE_PARENT) = 4;
    static x10_int FMGL(PHASE_PARENT__get)();
    
    /* Static field: FMGL(PHASE_SCATTER1) */
    static const x10_int FMGL(PHASE_SCATTER1) = 5;
    static x10_int FMGL(PHASE_SCATTER1__get)();
    
    /* Static field: FMGL(PHASE_SCATTER2) */
    static const x10_int FMGL(PHASE_SCATTER2) = 6;
    static x10_int FMGL(PHASE_SCATTER2__get)();
    
    /* Static field: FMGL(PHASE_DONE) */
    static const x10_int FMGL(PHASE_DONE) = 7;
    static x10_int FMGL(PHASE_DONE__get)();
    
    /* Static field: FMGL(PHASE_INVALID) */
    static const x10_int FMGL(PHASE_INVALID) = -1;
    static x10_int FMGL(PHASE_INVALID__get)();
    
    ::x10::util::concurrent::AtomicInteger* FMGL(phase);
    
    ::x10::util::concurrent::Lock* FMGL(dstLock);
    
    /* Static field: FMGL(COLL_BARRIER) */
    static const x10_int FMGL(COLL_BARRIER) = 0;
    static x10_int FMGL(COLL_BARRIER__get)();
    
    /* Static field: FMGL(COLL_BROADCAST) */
    static const x10_int FMGL(COLL_BROADCAST) = 1;
    static x10_int FMGL(COLL_BROADCAST__get)();
    
    /* Static field: FMGL(COLL_SCATTER) */
    static const x10_int FMGL(COLL_SCATTER) = 2;
    static x10_int FMGL(COLL_SCATTER__get)();
    
    /* Static field: FMGL(COLL_SCATTERV) */
    static const x10_int FMGL(COLL_SCATTERV) = 3;
    static x10_int FMGL(COLL_SCATTERV__get)();
    
    /* Static field: FMGL(COLL_ALLTOALL) */
    static const x10_int FMGL(COLL_ALLTOALL) = 4;
    static x10_int FMGL(COLL_ALLTOALL__get)();
    
    /* Static field: FMGL(COLL_REDUCE) */
    static const x10_int FMGL(COLL_REDUCE) = 5;
    static x10_int FMGL(COLL_REDUCE__get)();
    
    /* Static field: FMGL(COLL_ALLREDUCE) */
    static const x10_int FMGL(COLL_ALLREDUCE) = 6;
    static x10_int FMGL(COLL_ALLREDUCE__get)();
    
    /* Static field: FMGL(COLL_INDEXOFMIN) */
    static const x10_int FMGL(COLL_INDEXOFMIN) = 7;
    static x10_int FMGL(COLL_INDEXOFMIN__get)();
    
    /* Static field: FMGL(COLL_INDEXOFMAX) */
    static const x10_int FMGL(COLL_INDEXOFMAX) = 8;
    static x10_int FMGL(COLL_INDEXOFMAX__get)();
    
    /* Static field: FMGL(COLL_GATHER) */
    static const x10_int FMGL(COLL_GATHER) = 9;
    static x10_int FMGL(COLL_GATHER__get)();
    
    /* Static field: FMGL(COLL_GATHERV) */
    static const x10_int FMGL(COLL_GATHERV) = 10;
    static x10_int FMGL(COLL_GATHERV__get)();
    
    ::x10::lang::Any* FMGL(local_src);
    
    x10_long FMGL(local_src_off);
    
    ::x10::lang::Any* FMGL(local_dst);
    
    x10_long FMGL(local_dst_off);
    
    ::x10::lang::Any* FMGL(local_temp_buff);
    
    ::x10::lang::Any* FMGL(local_temp_buff2);
    
    x10_long FMGL(local_count);
    
    ::x10::lang::Rail< x10_int >* FMGL(local_counts);
    
    x10_long FMGL(local_counts_sum);
    
    x10_long FMGL(local_offset);
    
    x10_long FMGL(local_parentIndex);
    
    x10_long FMGL(local_grandchildren);
    
    x10_long FMGL(local_child1Index);
    
    x10_long FMGL(local_child2Index);
    
    static ::x10::lang::String* getCollName(x10_int collType);
    x10_boolean isValid();
    void markInvalid();
    ::x10::util::Team__LocalTeamState__TreeStructure getLinks(x10_long placeIndex,
                                                              ::x10::lang::Place root,
                                                              ::x10::lang::Rail< x10_int >* counts);
    ::x10::util::Team__LocalTeamState__TreeStructure getLinks(
      x10_long placeIndex, x10_long parent, x10_long startIndex,
      x10_long endIndex, ::x10::lang::Rail< x10_int >* counts);
    void init();
    template<class TPMGL(T)> void collective_impl(x10_int collType,
                                                  ::x10::lang::Place root,
                                                  ::x10::lang::Rail< TPMGL(T) >* src,
                                                  x10_long src_off,
                                                  ::x10::lang::Rail< TPMGL(T) >* dst,
                                                  x10_long dst_off,
                                                  x10_long count,
                                                  x10_int operation,
                                                  ::x10::lang::Rail< x10_int >* offsets,
                                                  ::x10::lang::Rail< x10_int >* counts);
    virtual ::x10::util::Team__LocalTeamState* x10__util__Team__LocalTeamState____this__x10__util__Team__LocalTeamState(
      );
    void _constructor(::x10::lang::PlaceGroup* places, x10_int teamid,
                      x10_long myIndex);
    
    static ::x10::util::Team__LocalTeamState* _make(::x10::lang::PlaceGroup* places,
                                                    x10_int teamid,
                                                    x10_long myIndex);
    
    virtual void __fieldInitializers_x10_util_Team_LocalTeamState(
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


} } 
#endif // X10_UTIL_TEAM__LOCALTEAMSTATE_H

namespace x10 { namespace util { 
class Team__LocalTeamState;
} } 

#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE_H_NODEPS
#define X10_UTIL_TEAM__LOCALTEAMSTATE_H_NODEPS
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/util/concurrent/AtomicInteger.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/lang/Any.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Place.h>
#include <x10/util/Team__LocalTeamState__TreeStructure.h>
#include <x10/util/Team.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/compiler/Pragma.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/util/GrowableRail.h>
#include <x10/xrx/Thread.h>
#include <x10/xrx/InterruptedException.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/System.h>
#include <x10/compiler/NoInline.h>
#include <x10/lang/Unsafe.h>
#include <x10/util/TeamReductionHelper.h>
#include <x10/lang/GlobalRail.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/util/Team__DoubleIdx.h>
#include <x10/lang/DeadPlaceException.h>
#include <x10/lang/Double.h>
#include <x10/lang/MultipleExceptions.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__6_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class x10_util_Team__LocalTeamState__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::itable<x10_util_Team__LocalTeamState__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(::x10::lang::Fun_0_0<x10_boolean>* condition, ::x10::lang::String* conditionStr);
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__6* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__6>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__6* this_ = new (storage) x10_util_Team__LocalTeamState__closure__6(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__6(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1158-1187";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__6_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__7_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    ::x10::util::Team__LocalTeamState* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__7* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__7>();
        buf.record_reference(storage);
        ::x10::util::Team__LocalTeamState* that_saved_this = buf.read< ::x10::util::Team__LocalTeamState*>();
        x10_util_Team__LocalTeamState__closure__7* this_ = new (storage) x10_util_Team__LocalTeamState__closure__7(that_saved_this);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__7(::x10::util::Team__LocalTeamState* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1191";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__7_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__8_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    ::x10::util::Team__LocalTeamState* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__8* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__8>();
        buf.record_reference(storage);
        ::x10::util::Team__LocalTeamState* that_saved_this = buf.read< ::x10::util::Team__LocalTeamState*>();
        x10_util_Team__LocalTeamState__closure__8* this_ = new (storage) x10_util_Team__LocalTeamState__closure__8(that_saved_this);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__8(::x10::util::Team__LocalTeamState* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1269";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__8_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__10_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__10 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__10> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__10* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__10>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__10* this_ = new (storage) x10_util_Team__LocalTeamState__closure__10(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__10(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1347-1350";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__10_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__11_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__11 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__11> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__11* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__11>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__11* this_ = new (storage) x10_util_Team__LocalTeamState__closure__11(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__11(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1379";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__11_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__12_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__12 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__12> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__12* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__12>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__12* this_ = new (storage) x10_util_Team__LocalTeamState__closure__12(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__12(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1391";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__12_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__13_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__13 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__13> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__13* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__13>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__13* this_ = new (storage) x10_util_Team__LocalTeamState__closure__13(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__13(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1409-1412";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__13_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__9_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_Team__LocalTeamState__closure__9 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_Team__LocalTeamState__closure__9<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 1347 "x10/util/Team.x10"
        ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
          reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__10)))x10_util_Team__LocalTeamState__closure__10(teamidcopy))),
          (&::x10::util::Team__LocalTeamState_Strings::sl__171413));
        
        //#line 1351 "x10/util/Team.x10"
        if (!(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                    ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::isValid()))
        {
            
            //#line 1352 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171414)))));
        }
        
        //#line 1356 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ((x10_int)4))))
        {
            {
                
                //#line 1358 "x10/util/Team.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__153777 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          gr, ((childDstOffset) + (((count) * (sourceIndex)))),
                          ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                      ((x10_long)(teamidcopy))))->FMGL(local_dst)),
                          ((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                  ((x10_long)(teamidcopy))))->FMGL(local_dst_off)) + (((count) * (sourceIndex)))),
                          childTotalData);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3056) {
                    {
                        ::x10::lang::CheckedThrowable* ct__153775 =
                          __exc3056;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__153775);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__153777);
            }
        } else 
        //#line 1360 "x10/util/Team.x10"
        if (((::x10aux::struct_equals(collType, ((x10_int)5))) ||
            (::x10aux::struct_equals(collType, ((x10_int)6)))))
        {
            
            //#line 1362 "x10/util/Team.x10"
            ::x10::lang::Rail< TPMGL(T) >* target;
            
            //#line 1363 "x10/util/Team.x10"
            x10_long off;
            
            //#line 1364 "x10/util/Team.x10"
            if ((::x10aux::struct_equals(sourceIndex, ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                            ((x10_long)(teamidcopy))))->FMGL(local_child2Index))))
            {
                
                //#line 1365 "x10/util/Team.x10"
                target = (::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                      ((x10_long)(teamidcopy))))->FMGL(local_temp_buff2)));
                
                //#line 1366 "x10/util/Team.x10"
                off = ((x10_long)0ll);
            } else 
            //#line 1367 "x10/util/Team.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                               ((x10_long)(teamidcopy))))->FMGL(local_src),
                                         ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                               ((x10_long)(teamidcopy))))->FMGL(local_dst))))
            {
                
                //#line 1368 "x10/util/Team.x10"
                target = (::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                      ((x10_long)(teamidcopy))))->FMGL(local_temp_buff)));
                
                //#line 1369 "x10/util/Team.x10"
                off = ((x10_long)0ll);
            } else {
                
                //#line 1372 "x10/util/Team.x10"
                target = (::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                      ((x10_long)(teamidcopy))))->FMGL(local_dst)));
                
                //#line 1373 "x10/util/Team.x10"
                off = ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                            ((x10_long)(teamidcopy))))->FMGL(local_dst_off);
            }
            
            //#line 1375 "x10/util/Team.x10"
            if ((!::x10aux::struct_equals(target, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                {
                    
                    //#line 1376 "x10/util/Team.x10"
                    ::x10::xrx::Runtime::ensureNotInAtomic();
                    ::x10::xrx::FinishState* fs__153781 =
                      ::x10::xrx::Runtime::startFinish();
                    try {
                        {
                            ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                              gr, childDstOffset, target,
                              off, count);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3057) {
                        {
                            ::x10::lang::CheckedThrowable* ct__153779 =
                              __exc3057;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__153779);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__153781);
                }
            }
            
        } else 
        //#line 1378 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ((x10_int)8))))
        {
            
            //#line 1379 "x10/util/Team.x10"
            ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
              reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__11)))x10_util_Team__LocalTeamState__closure__11(teamidcopy))),
              (&::x10::util::Team__LocalTeamState_Strings::sl__171415));
            
            //#line 1380 "x10/util/Team.x10"
            ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* ldi =
              ::x10aux::class_cast< ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst));
            
            //#line 1381 "x10/util/Team.x10"
            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
            {
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171416)), ::x10aux::nullCheck(ldi)->x10::lang::template Rail< ::x10::util::Team__DoubleIdx >::__apply(
                                                                                                                                                                                                                                                                                                                                      ((x10_long)0ll))->FMGL(value)), (&::x10::util::Team__LocalTeamState_Strings::sl__171417)), childVal->FMGL(value))))->c_str());
            }
            
            //#line 1386 "x10/util/Team.x10"
            if (((childVal->FMGL(value)) > (::x10aux::nullCheck(ldi)->x10::lang::template Rail< ::x10::util::Team__DoubleIdx >::__apply(
                                              ((x10_long)0ll))->FMGL(value))))
            {
                
                //#line 1387 "x10/util/Team.x10"
                ::x10aux::nullCheck(ldi)->x10::lang::template Rail< ::x10::util::Team__DoubleIdx >::__set(
                  ((x10_long)0ll), childVal);
            }
            
            //#line 1388 "x10/util/Team.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                      ((x10_long)(teamidcopy))))->FMGL(dstLock))->unlock();
        } else 
        //#line 1390 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ((x10_int)7))))
        {
            
            //#line 1391 "x10/util/Team.x10"
            ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
              reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__12)))x10_util_Team__LocalTeamState__closure__12(teamidcopy))),
              (&::x10::util::Team__LocalTeamState_Strings::sl__171415));
            
            //#line 1392 "x10/util/Team.x10"
            ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* ldi =
              ::x10aux::class_cast< ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst));
            
            //#line 1393 "x10/util/Team.x10"
            if (((childVal->FMGL(value)) < (::x10aux::nullCheck(ldi)->x10::lang::template Rail< ::x10::util::Team__DoubleIdx >::__apply(
                                              ((x10_long)0ll))->FMGL(value))))
            {
                
                //#line 1394 "x10/util/Team.x10"
                ::x10aux::nullCheck(ldi)->x10::lang::template Rail< ::x10::util::Team__DoubleIdx >::__set(
                  ((x10_long)0ll), childVal);
            }
            
            //#line 1395 "x10/util/Team.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                      ((x10_long)(teamidcopy))))->FMGL(dstLock))->unlock();
        } else 
        //#line 1397 "x10/util/Team.x10"
        if (((::x10aux::struct_equals(collType, ((x10_int)9))) ||
            (::x10aux::struct_equals(collType, ((x10_int)10)))))
        {
            
            //#line 1398 "x10/util/Team.x10"
            x10_long rootDstOffset = (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                    ((x10_long)(teamidcopy))))->FMGL(local_parentIndex),
                                                              ((x10_long)-1ll)))
              ? (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                       ((x10_long)(teamidcopy))))->FMGL(local_dst_off))
              : (((x10_long)0ll));
            
            //#line 1399 "x10/util/Team.x10"
            x10_long parentOffset = (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                   ((x10_long)(teamidcopy))))->FMGL(local_parentIndex),
                                                             ((x10_long)-1ll)))
              ? (((x10_long)0ll)) : (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                           ((x10_long)(teamidcopy))))->FMGL(local_offset));
            
            //#line 1400 "x10/util/Team.x10"
            x10_long myOffset = ((((childOffset) - (parentOffset))) + (rootDstOffset));
            
            //#line 1401 "x10/util/Team.x10"
            ::x10::lang::Any* nonnulltempbuff = ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                      ((x10_long)(teamidcopy))))->FMGL(local_temp_buff);
            
            //#line 1402 "x10/util/Team.x10"
            if ((!::x10aux::struct_equals(nonnulltempbuff,
                                          reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                {
                    
                    //#line 1403 "x10/util/Team.x10"
                    ::x10::xrx::Runtime::ensureNotInAtomic();
                    ::x10::xrx::FinishState* fs__153785 =
                      ::x10::xrx::Runtime::startFinish();
                    try {
                        {
                            ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                              gr, ((x10_long)0ll), ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(nonnulltempbuff),
                              myOffset, childTotalData);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3058) {
                        {
                            ::x10::lang::CheckedThrowable* ct__153783 =
                              __exc3058;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__153783);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__153785);
                }
            }
            
        }
        
        //#line 1407 "x10/util/Team.x10"
        if ((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                       ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
               ((x10_int)2), ((x10_int)3)) || ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                        ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
                                                ((x10_int)3),
                                                ((x10_int)4))))
        {
            
            //#line 1409 "x10/util/Team.x10"
            ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
              reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__13)))x10_util_Team__LocalTeamState__closure__13(teamidcopy))),
              (&::x10::util::Team__LocalTeamState_Strings::sl__171418));
        } else {
            
            //#line 1414 "x10/util/Team.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team__LocalTeamState_Strings::sl__171419), ::x10::lang::Place::_make(::x10aux::here)), (&::x10::util::Team__LocalTeamState_Strings::sl__171389)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171420)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::get())))->c_str());
        }
        
        //#line 1417 "x10/util/Team.x10"
        if (!(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                    ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::isValid()))
        {
            
            //#line 1418 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171421)))));
        }
        
        //#line 1423 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ((x10_int)4))))
        {
            
            //#line 1424 "x10/util/Team.x10"
            ::x10::lang::Rail< TPMGL(T) >* notNullDst = (__extension__ ({
                ::x10::lang::Rail< TPMGL(T) >* t__116651 =
                  ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst));
                if (!((!::x10aux::struct_equals(t__116651,
                                                reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__171411))));
                }
                t__116651;
            }))
            ;
            {
                
                //#line 1425 "x10/util/Team.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__153789 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        
                        //#line 1426 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171422)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst_off)), (&::x10::util::Team__LocalTeamState_Strings::sl__171423)), childDstOffset), (&::x10::util::Team__LocalTeamState_Strings::sl__171424)), ((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               ((x10_long)(teamidcopy))))->FMGL(local_count)) * (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ((x10_long)(teamidcopy))))->FMGL(myIndex))))))->c_str());
                        }
                        
                        //#line 1428 "x10/util/Team.x10"
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          notNullDst, ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                            ((x10_long)(teamidcopy))))->FMGL(local_dst_off),
                          gr, childDstOffset, ((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                      ((x10_long)(teamidcopy))))->FMGL(local_count)) * (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                              ((x10_long)(teamidcopy))))->FMGL(myIndex))));
                        
                        //#line 1429 "x10/util/Team.x10"
                        x10_long secondLocalOffset = ((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                             ((x10_long)(teamidcopy))))->FMGL(local_dst_off)) + (((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                         ((x10_long)(teamidcopy))))->FMGL(local_count)) * (lastChild))));
                        
                        //#line 1430 "x10/util/Team.x10"
                        x10_long secondChildOffset = ((childDstOffset) + (((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                  ((x10_long)(teamidcopy))))->FMGL(local_count)) * (lastChild))));
                        
                        //#line 1431 "x10/util/Team.x10"
                        x10_long secondSize = ((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                      ((x10_long)(teamidcopy))))->FMGL(local_count)) * ((((__extension__ ({
                            ::x10::lang::PlaceGroup* this__153540 =
                              ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                    ((x10_long)(teamidcopy))))->FMGL(places);
                            ::x10aux::nullCheck(this__153540)->numPlaces();
                        }))
                        ) - (lastChild))));
                        
                        //#line 1432 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171425)), secondLocalOffset), (&::x10::util::Team__LocalTeamState_Strings::sl__171426)), secondChildOffset), (&::x10::util::Team__LocalTeamState_Strings::sl__171424)), secondSize)))->c_str());
                        }
                        
                        //#line 1434 "x10/util/Team.x10"
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          notNullDst, secondLocalOffset, gr,
                          secondChildOffset, secondSize);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3059) {
                    {
                        ::x10::lang::CheckedThrowable* ct__153787 =
                          __exc3059;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__153787);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__153789);
            }
        } else 
        //#line 1437 "x10/util/Team.x10"
        if (((((::x10aux::struct_equals(collType, ((x10_int)1))) ||
            (::x10aux::struct_equals(collType, ((x10_int)6)))) ||
            (::x10aux::struct_equals(collType, ((x10_int)7)))) ||
            (::x10aux::struct_equals(collType, ((x10_int)8)))))
        {
            
            //#line 1440 "x10/util/Team.x10"
            ::x10::lang::Rail< TPMGL(T) >* notNullDst = (__extension__ ({
                ::x10::lang::Rail< TPMGL(T) >* t__116917 =
                  ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst));
                if (!((!::x10aux::struct_equals(t__116917,
                                                reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__171411))));
                }
                t__116917;
            }))
            ;
            
            //#line 1441 "x10/util/Team.x10"
            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
            {
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171427)), notNullDst), (&::x10::util::Team__LocalTeamState_Strings::sl__171428)), gr)))->c_str());
            }
            {
                
                //#line 1442 "x10/util/Team.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__153793 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          notNullDst, ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                            ((x10_long)(teamidcopy))))->FMGL(local_dst_off),
                          gr, childDstOffset, ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                    ((x10_long)(teamidcopy))))->FMGL(local_count));
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3060) {
                    {
                        ::x10::lang::CheckedThrowable* ct__153791 =
                          __exc3060;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__153791);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__153793);
            }
        } else 
        //#line 1444 "x10/util/Team.x10"
        if (((::x10aux::struct_equals(collType, ((x10_int)2))) ||
            (::x10aux::struct_equals(collType, ((x10_int)3)))))
        {
            
            //#line 1445 "x10/util/Team.x10"
            ::x10::lang::Rail< TPMGL(T) >* notNullTmp = (__extension__ ({
                ::x10::lang::Rail< TPMGL(T) >* t__116977 =
                  ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_temp_buff));
                if (!((!::x10aux::struct_equals(t__116977,
                                                reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__171411))));
                }
                t__116977;
            }))
            ;
            
            //#line 1447 "x10/util/Team.x10"
            x10_long parentOffset = (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                   ((x10_long)(teamidcopy))))->FMGL(local_parentIndex),
                                                             ((x10_long)-1ll)))
              ? (((x10_long)0ll)) : (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                           ((x10_long)(teamidcopy))))->FMGL(local_offset));
            
            //#line 1448 "x10/util/Team.x10"
            x10_long rootSourceOffset = (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                       ((x10_long)(teamidcopy))))->FMGL(local_parentIndex),
                                                                 ((x10_long)-1ll)))
              ? (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                       ((x10_long)(teamidcopy))))->FMGL(local_src_off))
              : (((x10_long)0ll));
            
            //#line 1449 "x10/util/Team.x10"
            x10_long myOffset = ((((childOffset) - (parentOffset))) + (rootSourceOffset));
            
            //#line 1450 "x10/util/Team.x10"
            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
            {
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171429)), childTotalData), (&::x10::util::Team__LocalTeamState_Strings::sl__171430)), notNullTmp), (&::x10::util::Team__LocalTeamState_Strings::sl__171431)), myOffset), (&::x10::util::Team__LocalTeamState_Strings::sl__171428)), gr)))->c_str());
            }
            {
                
                //#line 1451 "x10/util/Team.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__153797 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          notNullTmp, myOffset, gr, ((x10_long)0ll),
                          childTotalData);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3061) {
                    {
                        ::x10::lang::CheckedThrowable* ct__153795 =
                          __exc3061;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__153795);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__153797);
            }
        }
        
        //#line 1454 "x10/util/Team.x10"
        if (!((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                         ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
                 ((x10_int)5), ((x10_int)6)) || ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                          ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
                                                  ((x10_int)6),
                                                  ((x10_int)7)))))
        {
            
            //#line 1456 "x10/util/Team.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team__LocalTeamState_Strings::sl__171432), ::x10::lang::Place::_make(::x10aux::here)), (&::x10::util::Team__LocalTeamState_Strings::sl__171389)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171420)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::get())))->c_str());
        }
        
        //#line 1459 "x10/util/Team.x10"
        if (!(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                    ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::isValid()))
        {
            
            //#line 1460 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171433)))));
        }
        
    }
    
    // captured environment
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>* sleepUntil;
    x10_int teamidcopy;
    x10_int collType;
    ::x10::lang::GlobalRail<TPMGL(T)> gr;
    x10_long childDstOffset;
    x10_long count;
    x10_long sourceIndex;
    x10_long childTotalData;
    ::x10::util::Team__DoubleIdx childVal;
    x10_long childOffset;
    x10_long lastChild;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->sleepUntil);
        buf.write(this->teamidcopy);
        buf.write(this->collType);
        buf.write(this->gr);
        buf.write(this->childDstOffset);
        buf.write(this->count);
        buf.write(this->sourceIndex);
        buf.write(this->childTotalData);
        buf.write(this->childVal);
        buf.write(this->childOffset);
        buf.write(this->lastChild);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>* that_sleepUntil = buf.read< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>*>();
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_int that_collType = buf.read<x10_int>();
        ::x10::lang::GlobalRail<TPMGL(T)> that_gr = buf.read< ::x10::lang::GlobalRail<TPMGL(T)> >();
        x10_long that_childDstOffset = buf.read<x10_long>();
        x10_long that_count = buf.read<x10_long>();
        x10_long that_sourceIndex = buf.read<x10_long>();
        x10_long that_childTotalData = buf.read<x10_long>();
        ::x10::util::Team__DoubleIdx that_childVal = buf.read< ::x10::util::Team__DoubleIdx>();
        x10_long that_childOffset = buf.read<x10_long>();
        x10_long that_lastChild = buf.read<x10_long>();
        x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >* this_ = new (storage) x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >(that_sleepUntil, that_teamidcopy, that_collType, that_gr, that_childDstOffset, that_count, that_sourceIndex, that_childTotalData, that_childVal, that_childOffset, that_lastChild);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__9(::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>* sleepUntil, x10_int teamidcopy, x10_int collType, ::x10::lang::GlobalRail<TPMGL(T)> gr, x10_long childDstOffset, x10_long count, x10_long sourceIndex, x10_long childTotalData, ::x10::util::Team__DoubleIdx childVal, x10_long childOffset, x10_long lastChild) : sleepUntil(sleepUntil), teamidcopy(teamidcopy), collType(collType), gr(gr), childDstOffset(childDstOffset), count(count), sourceIndex(sourceIndex), childTotalData(childTotalData), childVal(childVal), childOffset(childOffset), lastChild(lastChild) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1346-1462";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_Team__LocalTeamState__closure__9<TPMGL(T) > >x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::__apply, &x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__9_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__14_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__14 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__14> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__14* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__14>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__14* this_ = new (storage) x10_util_Team__LocalTeamState__closure__14(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__14(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1498";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__14_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__15_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__15 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__15> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__15* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__15>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__15* this_ = new (storage) x10_util_Team__LocalTeamState__closure__15(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__15(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1524-1526";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__15_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__16_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__16 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__16> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__16* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__16>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__16* this_ = new (storage) x10_util_Team__LocalTeamState__closure__16(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__16(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1534-1536";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__16_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__17_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__17 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__17> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__17* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__17>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__17* this_ = new (storage) x10_util_Team__LocalTeamState__closure__17(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__17(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1567-1569";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__17_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__18_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__18 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__18> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__18* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__18>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__18* this_ = new (storage) x10_util_Team__LocalTeamState__closure__18(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__18(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1548-1550";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__18_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__19_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__19 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__19> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__19* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__19>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__19* this_ = new (storage) x10_util_Team__LocalTeamState__closure__19(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__19(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1556-1558";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__19_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__20_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__20 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__20> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__20* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__20>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__20* this_ = new (storage) x10_util_Team__LocalTeamState__closure__20(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__20(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1579-1581";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__20_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__21_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__21 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__21> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__21* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__21>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__21* this_ = new (storage) x10_util_Team__LocalTeamState__closure__21(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__21(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1548-1550";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__21_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__22_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__22 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__22> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__22* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__22>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__22* this_ = new (storage) x10_util_Team__LocalTeamState__closure__22(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__22(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1556-1558";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__22_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE_H_GENERICS
#define X10_UTIL_TEAM__LOCALTEAMSTATE_H_GENERICS
inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_READY__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_READY);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_INIT__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_INIT);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER1__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER1);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER2__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER2);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_PARENT__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_PARENT);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER1__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER1);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER2__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER2);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_DONE__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_DONE);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_INVALID__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_INVALID);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_BARRIER__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_BARRIER);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_BROADCAST__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_BROADCAST);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_SCATTER__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_SCATTER);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_SCATTERV__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_SCATTERV);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_ALLTOALL__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_ALLTOALL);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_REDUCE__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_REDUCE);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_ALLREDUCE__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_ALLREDUCE);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMIN__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMIN);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMAX__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMAX);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_GATHER__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_GATHER);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_GATHERV__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_GATHERV);
}

#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE_H_collective_impl_3055
#define X10_UTIL_TEAM__LOCALTEAMSTATE_H_collective_impl_3055
template<class TPMGL(T)> void x10::util::Team__LocalTeamState::collective_impl(
  x10_int collType, ::x10::lang::Place root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_long dst_off,
  x10_long count, x10_int operation, ::x10::lang::Rail< x10_int >* offsets,
  ::x10::lang::Rail< x10_int >* counts) {
    
    //#line 1149 "x10/util/Team.x10"
    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)()) {
        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171389)), this->FMGL(teamid)), (&::x10::util::Team__LocalTeamState_Strings::sl__171395)), ::x10::util::Team__LocalTeamState::getCollName(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              collType)), (&::x10::util::Team__LocalTeamState_Strings::sl__171396)), ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::get()), (&::x10::util::Team__LocalTeamState_Strings::sl__171397)), root)))->c_str());
    }
    
    //#line 1151 "x10/util/Team.x10"
    x10_int teamidcopy = this->FMGL(teamid);
    
    //#line 1158 "x10/util/Team.x10"
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>* sleepUntil =
      reinterpret_cast< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*> >(sizeof(x10_util_Team__LocalTeamState__closure__6)))x10_util_Team__LocalTeamState__closure__6(teamidcopy)));
    
    //#line 1191 "x10/util/Team.x10"
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
      reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__7)))x10_util_Team__LocalTeamState__closure__7(this))),
      (&::x10::util::Team__LocalTeamState_Strings::sl__171403));
    
    //#line 1193 "x10/util/Team.x10"
    ::x10::util::Team__LocalTeamState__TreeStructure myLinks =
      this->getLinks(this->FMGL(myIndex), root, counts);
    
    //#line 1195 "x10/util/Team.x10"
    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)()) {
        
        //#line 1196 "x10/util/Team.x10"
        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171389)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171404)), (::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ((x10_long)-1ll)))
          ? (::x10::lang::Place::FMGL(INVALID_PLACE__get)())
          : (::x10aux::nullCheck(this->FMGL(places))->__apply(
               myLinks->FMGL(parentIndex)))), (&::x10::util::Team__LocalTeamState_Strings::sl__171391)), (::x10aux::struct_equals(myLinks->FMGL(child1Index),
                                                                                                                                  ((x10_long)-1ll)))
          ? (::x10::lang::Place::FMGL(INVALID_PLACE__get)())
          : (::x10aux::nullCheck(this->FMGL(places))->__apply(
               myLinks->FMGL(child1Index)))), (&::x10::util::Team__LocalTeamState_Strings::sl__171392)), (::x10aux::struct_equals(myLinks->FMGL(child2Index),
                                                                                                                                  ((x10_long)-1ll)))
          ? (::x10::lang::Place::FMGL(INVALID_PLACE__get)())
          : (::x10aux::nullCheck(this->FMGL(places))->__apply(
               myLinks->FMGL(child2Index))))))->c_str());
        
        //#line 1200 "x10/util/Team.x10"
        if ((!::x10aux::struct_equals(counts, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 1201 "x10/util/Team.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171389)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171405)), myLinks->FMGL(countsSum))))->c_str());
        }
        
    }
    
    //#line 1206 "x10/util/Team.x10"
    this->FMGL(local_src) = (reinterpret_cast< ::x10::lang::Any*>(src));
    
    //#line 1207 "x10/util/Team.x10"
    this->FMGL(local_src_off) = src_off;
    
    //#line 1208 "x10/util/Team.x10"
    this->FMGL(local_dst) = (reinterpret_cast< ::x10::lang::Any*>(dst));
    
    //#line 1209 "x10/util/Team.x10"
    this->FMGL(local_dst_off) = dst_off;
    
    //#line 1210 "x10/util/Team.x10"
    this->FMGL(local_count) = count;
    
    //#line 1211 "x10/util/Team.x10"
    this->FMGL(local_parentIndex) = myLinks->FMGL(parentIndex);
    
    //#line 1212 "x10/util/Team.x10"
    this->FMGL(local_grandchildren) = myLinks->FMGL(totalChildren);
    
    //#line 1213 "x10/util/Team.x10"
    this->FMGL(local_child1Index) = myLinks->FMGL(child1Index);
    
    //#line 1214 "x10/util/Team.x10"
    this->FMGL(local_child2Index) = myLinks->FMGL(child2Index);
    
    //#line 1215 "x10/util/Team.x10"
    this->FMGL(local_counts) = counts;
    
    //#line 1216 "x10/util/Team.x10"
    if ((!::x10aux::struct_equals(counts, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 1217 "x10/util/Team.x10"
        this->FMGL(local_counts_sum) = ((x10_long)(myLinks->FMGL(countsSum)));
        
        //#line 1218 "x10/util/Team.x10"
        this->FMGL(local_offset) = ((x10_long)(::x10aux::nullCheck(offsets)->x10::lang::template Rail< x10_int >::__apply(
                                                 this->FMGL(myIndex))));
        
        //#line 1219 "x10/util/Team.x10"
        this->FMGL(local_count) = ((x10_long)(::x10aux::nullCheck(counts)->x10::lang::template Rail< x10_int >::__apply(
                                                this->FMGL(myIndex))));
    } else {
        
        //#line 1222 "x10/util/Team.x10"
        this->FMGL(local_counts_sum) = ((((this->FMGL(local_grandchildren)) + (((x10_long)1ll)))) * (count));
        
        //#line 1223 "x10/util/Team.x10"
        this->FMGL(local_offset) = ((this->FMGL(myIndex)) * (count));
    }
    
    //#line 1225 "x10/util/Team.x10"
    if (((::x10aux::struct_equals(collType, ((x10_int)5))) ||
        (::x10aux::struct_equals(collType, ((x10_int)6)))))
    {
        
        //#line 1226 "x10/util/Team.x10"
        if ((((this->FMGL(local_child1Index)) > (((x10_long)-1ll))) &&
            (::x10aux::struct_equals(src, dst)))) {
            
            //#line 1228 "x10/util/Team.x10"
            this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(count, false)));
        }
        
        //#line 1230 "x10/util/Team.x10"
        if (((this->FMGL(local_child2Index)) > (((x10_long)-1ll))))
        {
            
            //#line 1231 "x10/util/Team.x10"
            this->FMGL(local_temp_buff2) = (reinterpret_cast< ::x10::lang::Any*>(::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(count, false)));
        }
        
    } else 
    //#line 1233 "x10/util/Team.x10"
    if (((!::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                   ((x10_long)-1ll))) && (((::x10aux::struct_equals(collType,
                                                                                    ((x10_int)2))) ||
                                                          (::x10aux::struct_equals(collType,
                                                                                   ((x10_int)3)))))))
    {
        
        //#line 1235 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
        {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171406)), this->FMGL(local_counts_sum))))->c_str());
        }
        
        //#line 1236 "x10/util/Team.x10"
        this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(this->FMGL(local_counts_sum), false)));
    } else 
    //#line 1237 "x10/util/Team.x10"
    if (((::x10aux::struct_equals(collType, ((x10_int)9))) ||
        (::x10aux::struct_equals(collType, ((x10_int)10)))))
    {
        
        //#line 1239 "x10/util/Team.x10"
        x10_long offset = ((x10_long)0ll);
        
        //#line 1240 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                     ((x10_long)-1ll)))) {
            
            //#line 1241 "x10/util/Team.x10"
            this->FMGL(local_temp_buff) = this->FMGL(local_dst);
            
            //#line 1242 "x10/util/Team.x10"
            offset = ((dst_off) + (this->FMGL(local_offset)));
        } else {
            
            //#line 1245 "x10/util/Team.x10"
            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
            {
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171406)), this->FMGL(local_counts_sum))))->c_str());
            }
            
            //#line 1246 "x10/util/Team.x10"
            this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(this->FMGL(local_counts_sum), false)));
        }
        
        //#line 1248 "x10/util/Team.x10"
        ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
          src, src_off, ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(this->FMGL(local_temp_buff)),
          offset, this->FMGL(local_count));
    } else 
    //#line 1249 "x10/util/Team.x10"
    if (((((::x10aux::struct_equals(collType, ((x10_int)7))) ||
          (::x10aux::struct_equals(collType, ((x10_int)8))))) &&
        (!::x10aux::struct_equals(this->FMGL(local_child1Index),
                                  ((x10_long)-1ll))))) {
        
        //#line 1251 "x10/util/Team.x10"
        this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(::x10::lang::Rail< TPMGL(T) >::_makeUnsafe((::x10aux::struct_equals(this->FMGL(local_child2Index),
                                                                                                                                                ((x10_long)-1ll)))
                                         ? (((x10_long)1ll))
                                         : (((x10_long)2ll)), false)));
    }
    
    //#line 1254 "x10/util/Team.x10"
    if (((::x10aux::struct_equals(collType, ((x10_int)8))) ||
        (::x10aux::struct_equals(collType, ((x10_int)7)))))
    {
        
        //#line 1255 "x10/util/Team.x10"
        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
          ((x10_long)0ll), ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                             ((x10_long)0ll)));
    }
    
    //#line 1258 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(this->FMGL(local_child1Index),
                                 ((x10_long)-1ll)))) {
        
        //#line 1260 "x10/util/Team.x10"
        ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ((x10_int)1), ((x10_int)4));
    } else 
    //#line 1261 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(this->FMGL(local_child2Index),
                                 ((x10_long)-1ll)))) {
        
        //#line 1263 "x10/util/Team.x10"
        ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ((x10_int)1), ((x10_int)3));
    } else {
        
        //#line 1265 "x10/util/Team.x10"
        ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ((x10_int)1), ((x10_int)2));
    }
    
    //#line 1269 "x10/util/Team.x10"
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
      reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__8)))x10_util_Team__LocalTeamState__closure__8(this))),
      (&::x10::util::Team__LocalTeamState_Strings::sl__171407));
    
    //#line 1271 "x10/util/Team.x10"
    if (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::isValid())
    {
        
        //#line 1272 "x10/util/Team.x10"
        if (((::x10aux::struct_equals(collType, ((x10_int)5))) ||
            (::x10aux::struct_equals(collType, ((x10_int)6)))))
        {
            
            //#line 1273 "x10/util/Team.x10"
            if ((!::x10aux::struct_equals(this->FMGL(local_child1Index),
                                          ((x10_long)-1ll))))
            {
                
                //#line 1275 "x10/util/Team.x10"
                if ((::x10aux::struct_equals(src, dst))) {
                    
                    //#line 1276 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171408)), this->FMGL(local_temp_buff)), (&::x10::util::Team__LocalTeamState_Strings::sl__171409)), dst)))->c_str());
                    }
                    
                    //#line 1277 "x10/util/Team.x10"
                    ::x10::util::TeamReductionHelper::template performReduction< TPMGL(T) >(
                      ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(this->FMGL(local_temp_buff)),
                      ((x10_long)0ll), dst, dst_off, count,
                      operation);
                } else {
                    
                    //#line 1279 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171410)), src), (&::x10::util::Team__LocalTeamState_Strings::sl__171409)), dst)))->c_str());
                    }
                    
                    //#line 1280 "x10/util/Team.x10"
                    ::x10::util::TeamReductionHelper::template performReduction< TPMGL(T) >(
                      src, src_off, dst, dst_off, count, operation);
                }
                
                //#line 1282 "x10/util/Team.x10"
                if ((!::x10aux::struct_equals(this->FMGL(local_child2Index),
                                              ((x10_long)-1ll))))
                {
                    
                    //#line 1283 "x10/util/Team.x10"
                    ::x10::util::TeamReductionHelper::template performReduction< TPMGL(T) >(
                      ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(this->FMGL(local_temp_buff2)),
                      ((x10_long)0ll), dst, dst_off, count,
                      operation);
                }
                
            } else {
                
                //#line 1286 "x10/util/Team.x10"
                ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
                  src, src_off, dst, dst_off, count);
            }
            
        } else 
        //#line 1288 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ((x10_int)4))))
        {
            
            //#line 1289 "x10/util/Team.x10"
            ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
              src, src_off, dst, ((dst_off) + (((count) * (this->FMGL(myIndex))))),
              count);
        }
        
        //#line 1292 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                     ((x10_long)-1ll)))) {
            
            //#line 1295 "x10/util/Team.x10"
            if ((::x10aux::struct_equals(collType, ((x10_int)1))))
            {
                
                //#line 1296 "x10/util/Team.x10"
                ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
                  src, src_off, dst, dst_off, count);
            } else 
            //#line 1297 "x10/util/Team.x10"
            if (((::x10aux::struct_equals(collType, ((x10_int)2))) ||
                (::x10aux::struct_equals(collType, ((x10_int)3)))))
            {
                
                //#line 1298 "x10/util/Team.x10"
                this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(src));
            }
            
        } else {
            
            //#line 1302 "x10/util/Team.x10"
            ::x10::lang::GlobalRail<TPMGL(T)> gr;
            
            //#line 1303 "x10/util/Team.x10"
            if (((((((::x10aux::struct_equals(collType, ((x10_int)4))) ||
                (::x10aux::struct_equals(collType, ((x10_int)1)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)5)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)6)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)8)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)7)))))
            {
                
                //#line 1309 "x10/util/Team.x10"
                ::x10::lang::Rail< TPMGL(T) >* notnulldst =
                  (__extension__ ({
                    ::x10::lang::Rail< TPMGL(T) >* t__116318 =
                      dst;
                    if (!((!::x10aux::struct_equals(t__116318,
                                                    reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__171411))));
                    }
                    t__116318;
                }))
                ;
                
                //#line 1310 "x10/util/Team.x10"
                gr = (__extension__ ({
                    ::x10::lang::GlobalRail<TPMGL(T)> alloc__118099 =
                       ::x10::lang::GlobalRail<TPMGL(T)>::_alloc();
                    (alloc__118099)->::x10::lang::GlobalRail<TPMGL(T)>::_constructor(
                      notnulldst);
                    alloc__118099;
                }))
                ;
            } else 
            //#line 1311 "x10/util/Team.x10"
            if (((((::x10aux::struct_equals(collType, ((x10_int)9))) ||
                (::x10aux::struct_equals(collType, ((x10_int)10)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)2)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)3)))))
            {
                
                //#line 1315 "x10/util/Team.x10"
                ::x10::lang::Rail< TPMGL(T) >* notNullTmp =
                  (__extension__ ({
                    ::x10::lang::Rail< TPMGL(T) >* t__116320 =
                      ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(this->FMGL(local_temp_buff));
                    if (!((!::x10aux::struct_equals(t__116320,
                                                    reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__171411))));
                    }
                    t__116320;
                }))
                ;
                
                //#line 1316 "x10/util/Team.x10"
                gr = (__extension__ ({
                    ::x10::lang::GlobalRail<TPMGL(T)> alloc__118100 =
                       ::x10::lang::GlobalRail<TPMGL(T)>::_alloc();
                    (alloc__118100)->::x10::lang::GlobalRail<TPMGL(T)>::_constructor(
                      notNullTmp);
                    alloc__118100;
                }))
                ;
            } else {
                
                //#line 1318 "x10/util/Team.x10"
                gr = (__extension__ ({
                    ::x10::lang::GlobalRail<TPMGL(T)> alloc__118101 =
                       ::x10::lang::GlobalRail<TPMGL(T)>::_alloc();
                    (alloc__118101)->::x10::lang::GlobalRail<TPMGL(T)>::_constructor(
                      ::x10::lang::Rail< TPMGL(T) >::_make());
                    alloc__118101;
                }))
                ;
            }
            
            //#line 1321 "x10/util/Team.x10"
            x10_long sourceIndex = this->FMGL(myIndex);
            
            //#line 1322 "x10/util/Team.x10"
            x10_long grandchildren = myLinks->FMGL(totalChildren);
            
            //#line 1323 "x10/util/Team.x10"
            x10_long lastChild = ((((this->FMGL(myIndex)) + (this->FMGL(local_grandchildren)))) + (((x10_long)1ll)));
            
            //#line 1324 "x10/util/Team.x10"
            ::x10::util::Team__DoubleIdx childVal;
            
            //#line 1325 "x10/util/Team.x10"
            if (((::x10aux::struct_equals(collType, ((x10_int)8))) ||
                (::x10aux::struct_equals(collType, ((x10_int)7)))))
            {
                
                //#line 1326 "x10/util/Team.x10"
                childVal = (::x10aux::class_cast< ::x10::util::Team__DoubleIdx>(::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                                                  ((x10_long)0ll))));
            } else {
                
                //#line 1328 "x10/util/Team.x10"
                childVal = (__extension__ ({
                    ::x10::util::Team__DoubleIdx alloc__118102 =
                       ::x10::util::Team__DoubleIdx::_alloc();
                    
                    //#line 31 "x10/util/Team.x10"
                    alloc__118102->FMGL(value) = 0.0;
                    alloc__118102->FMGL(idx) = ((x10_int)0);
                    alloc__118102;
                }))
                ;
            }
            
            //#line 1330 "x10/util/Team.x10"
            x10_long childOffset = this->FMGL(local_offset);
            
            //#line 1331 "x10/util/Team.x10"
            x10_long childDstOffset = ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                            ((x10_long)(teamidcopy))))->FMGL(local_dst_off);
            
            //#line 1332 "x10/util/Team.x10"
            x10_long childTotalData;
            
            //#line 1333 "x10/util/Team.x10"
            if ((::x10aux::struct_equals(collType, ((x10_int)4))))
            {
                
                //#line 1334 "x10/util/Team.x10"
                childTotalData = ((count) * (((grandchildren) + (((x10_long)1ll)))));
            } else 
            //#line 1335 "x10/util/Team.x10"
            if (((((::x10aux::struct_equals(collType, ((x10_int)9))) ||
                (::x10aux::struct_equals(collType, ((x10_int)10)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)2)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)3)))))
            {
                
                //#line 1339 "x10/util/Team.x10"
                childTotalData = this->FMGL(local_counts_sum);
            } else {
                
                //#line 1341 "x10/util/Team.x10"
                childTotalData = ((x10_long)-1ll);
            }
            
            //#line 1344 "x10/util/Team.x10"
            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
            {
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171389)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171412)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                                                                                                              myLinks->FMGL(parentIndex)))))->c_str());
            }
            
            //#line 1345 "x10/util/Team.x10"
            try {
                {
                    
                    //#line 1346 "x10/util/Team.x10"
                    ::x10::xrx::Runtime::ensureNotInAtomic();
                    ::x10::xrx::FinishState* fs__153805 =
                      ::x10::xrx::Runtime::startFinish(::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                    try {
                        {
                            ::x10::xrx::Runtime::runAsync(
                              ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                myLinks->FMGL(parentIndex)),
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__9<TPMGL(T)>)))x10_util_Team__LocalTeamState__closure__9<TPMGL(T)>(sleepUntil, teamidcopy, collType, gr, childDstOffset, count, sourceIndex, childTotalData, childVal, childOffset, lastChild))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3062) {
                        {
                            ::x10::lang::CheckedThrowable* ct__153802 =
                              __exc3062;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__153802);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__153805);
                }
                
                //#line 1463 "x10/util/Team.x10"
                if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                {
                    ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171389)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171434)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                  myLinks->FMGL(parentIndex)))))->c_str());
                }
                
            }
            catch (::x10::lang::CheckedThrowable* __exc3063) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3063)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc3063);
                    {
                        
                        //#line 1466 "x10/util/Team.x10"
                        ::x10::lang::Rail< ::x10::lang::DeadPlaceException* >* dper =
                          ::x10aux::nullCheck(me)->template getExceptionsOfType< ::x10::lang::DeadPlaceException* >(
                            true);
                        
                        //#line 1467 "x10/util/Team.x10"
                        if ((((x10_long)(::x10aux::nullCheck(dper)->FMGL(size))) > (((x10_long)0ll))))
                        {
                            
                            //#line 1468 "x10/util/Team.x10"
                            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                            {
                                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171435)), ::x10aux::nullCheck(dper)->x10::lang::template Rail< ::x10::lang::DeadPlaceException* >::__apply(
                                                                                                                                                                                                                                                                                              ((x10_long)0ll)))))->c_str());
                            }
                            
                            //#line 1469 "x10/util/Team.x10"
                            ::x10::util::Team__LocalTeamState* this__153686 =
                              ::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                ((x10_long)(teamidcopy)));
                            
                            //#line 1066 "x10/util/Team.x10"
                            ::x10aux::nullCheck(::x10aux::nullCheck(this__153686)->FMGL(phase))->x10::util::concurrent::AtomicInteger::set(
                              ((x10_int)-1));
                        } else {
                            
                            //#line 1471 "x10/util/Team.x10"
                            ::x10aux::throwException(::x10aux::nullCheck(me));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
            
            //#line 1475 "x10/util/Team.x10"
            gr->x10::lang::template GlobalRail<TPMGL(T)>::forget();
        }
        
    }
    
    //#line 1479 "x10/util/Team.x10"
    if (((::x10aux::struct_equals(collType, ((x10_int)2))) ||
        (::x10aux::struct_equals(collType, ((x10_int)3)))))
    {
        
        //#line 1481 "x10/util/Team.x10"
        x10_long temp_off_my_data = (::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                                             ((x10_long)-1ll)))
          ? (((src_off) + (this->FMGL(local_offset)))) : (((x10_long)0ll));
        
        //#line 1482 "x10/util/Team.x10"
        x10_long temp_count = this->FMGL(local_count);
        
        //#line 1483 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
        {
            
            //#line 1484 "x10/util/Team.x10"
            ::x10::lang::String* coll_name = (::x10aux::struct_equals(collType,
                                                                      ((x10_int)2)))
              ? ((&::x10::util::Team__LocalTeamState_Strings::sl__171436))
              : ((&::x10::util::Team__LocalTeamState_Strings::sl__171437));
            
            //#line 1485 "x10/util/Team.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171438)), coll_name), (&::x10::util::Team__LocalTeamState_Strings::sl__171438)), count), (&::x10::util::Team__LocalTeamState_Strings::sl__171439)), temp_off_my_data), (&::x10::util::Team__LocalTeamState_Strings::sl__171440))))->c_str());
        }
        
        //#line 1487 "x10/util/Team.x10"
        ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
          (__extension__ ({
              ::x10::lang::Rail< TPMGL(T) >* t__117516 = ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(this->FMGL(local_temp_buff));
              if (!((!::x10aux::struct_equals(t__117516, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
              {
                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__171411))));
              }
              t__117516;
          }))
          , temp_off_my_data, dst, dst_off, temp_count);
    }
    
    //#line 1490 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(this->FMGL(local_child1Index),
                                 ((x10_long)-1ll)))) {
        
        //#line 1491 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                  ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ((x10_int)4), ((x10_int)7));
    } else 
    //#line 1492 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(this->FMGL(local_child2Index),
                                 ((x10_long)-1ll)))) {
        
        //#line 1493 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                  ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ((x10_int)4), ((x10_int)6));
    } else {
        
        //#line 1495 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                  ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ((x10_int)4), ((x10_int)5));
    }
    
    //#line 1498 "x10/util/Team.x10"
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
      reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__14)))x10_util_Team__LocalTeamState__closure__14(teamidcopy))),
      (&::x10::util::Team__LocalTeamState_Strings::sl__171441));
    
    //#line 1501 "x10/util/Team.x10"
    this->FMGL(local_src) = (::x10aux::class_cast_unchecked< ::x10::lang::Any*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 1502 "x10/util/Team.x10"
    this->FMGL(local_dst) = (::x10aux::class_cast_unchecked< ::x10::lang::Any*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 1503 "x10/util/Team.x10"
    this->FMGL(local_temp_buff) = (::x10aux::class_cast_unchecked< ::x10::lang::Any*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 1504 "x10/util/Team.x10"
    this->FMGL(local_temp_buff2) = (::x10aux::class_cast_unchecked< ::x10::lang::Any*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 1505 "x10/util/Team.x10"
    this->FMGL(local_parentIndex) = ((x10_long)-1ll);
    
    //#line 1506 "x10/util/Team.x10"
    this->FMGL(local_child1Index) = ((x10_long)-1ll);
    
    //#line 1507 "x10/util/Team.x10"
    this->FMGL(local_child2Index) = ((x10_long)-1ll);
    
    //#line 1509 "x10/util/Team.x10"
    if (this->x10::util::Team__LocalTeamState::isValid())
    {
        
        //#line 1510 "x10/util/Team.x10"
        if (((this->FMGL(local_child1Index)) > (((x10_long)-1ll))))
        {
            
            //#line 1513 "x10/util/Team.x10"
            ::x10aux::event_probe();
        }
        
        //#line 1515 "x10/util/Team.x10"
        ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ((x10_int)7), ((x10_int)0));
        
        //#line 1516 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
        {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171389)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171442)), ::x10::util::Team__LocalTeamState::getCollName(
                                                                                                                                                                                                                                                                                                                                                                                                          collType))))->c_str());
        }
        
    } else {
        
        //#line 1520 "x10/util/Team.x10"
        if ((!::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                      ((x10_long)-1ll))))
        {
            
            //#line 1521 "x10/util/Team.x10"
            if (!((__extension__ ({
                    ::x10::lang::Place this__153545 = ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                        myLinks->FMGL(parentIndex));
                    x10rt_is_place_dead((x10_int)this__153545->FMGL(id));
                }))
                )) {
                
                //#line 1522 "x10/util/Team.x10"
                try {
                    
                    //#line 1523 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171443)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                  myLinks->FMGL(parentIndex))), (&::x10::util::Team__LocalTeamState_Strings::sl__171444))))->c_str());
                    }
                    {
                        
                        //#line 1524 "x10/util/Team.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__153813 =
                          ::x10::xrx::Runtime::startFinish(
                            ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                        try {
                            {
                                ::x10::xrx::Runtime::runAsync(
                                  ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                    myLinks->FMGL(parentIndex)),
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__15)))x10_util_Team__LocalTeamState__closure__15(teamidcopy))),
                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc3064) {
                            {
                                ::x10::lang::CheckedThrowable* ct__153810 =
                                  __exc3064;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__153810);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__153813);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3065) {
                    if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3065)) {
                        ::x10::lang::MultipleExceptions* me =
                          static_cast< ::x10::lang::MultipleExceptions*>(__exc3065);
                        {
                         
                        }
                    } else {
                        throw;
                    }
                }
            } else {
                
                //#line 1530 "x10/util/Team.x10"
                ::x10::util::Team__LocalTeamState__TreeStructure parentLinks =
                  this->getLinks(myLinks->FMGL(parentIndex),
                                 root, counts);
                
                //#line 1531 "x10/util/Team.x10"
                if ((!::x10aux::struct_equals(parentLinks->FMGL(parentIndex),
                                              ((x10_long)-1ll))))
                {
                    
                    //#line 1532 "x10/util/Team.x10"
                    try {
                        
                        //#line 1533 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171445)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                      parentLinks->FMGL(parentIndex))), (&::x10::util::Team__LocalTeamState_Strings::sl__171444))))->c_str());
                        }
                        {
                            
                            //#line 1534 "x10/util/Team.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__153821 =
                              ::x10::xrx::Runtime::startFinish(
                                ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                            try {
                                {
                                    ::x10::xrx::Runtime::runAsync(
                                      ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                        parentLinks->FMGL(parentIndex)),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__16)))x10_util_Team__LocalTeamState__closure__16(teamidcopy))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc3066) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__153818 =
                                      __exc3066;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__153818);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__153821);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3067) {
                        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3067)) {
                            ::x10::lang::MultipleExceptions* me =
                              static_cast< ::x10::lang::MultipleExceptions*>(__exc3067);
                            {
                             
                            }
                        } else {
                            throw;
                        }
                    }
                }
                
            }
            
        }
        
        //#line 1563 "x10/util/Team.x10"
        if ((!::x10aux::struct_equals(myLinks->FMGL(child1Index),
                                      ((x10_long)-1ll))))
        {
            
            //#line 1564 "x10/util/Team.x10"
            if (!((__extension__ ({
                    ::x10::lang::Place this__153551 = ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                        myLinks->FMGL(child1Index));
                    x10rt_is_place_dead((x10_int)this__153551->FMGL(id));
                }))
                )) {
                
                //#line 1565 "x10/util/Team.x10"
                try {
                    
                    //#line 1566 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171446)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                  myLinks->FMGL(child1Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__171447))))->c_str());
                    }
                    {
                        
                        //#line 1567 "x10/util/Team.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__153829 =
                          ::x10::xrx::Runtime::startFinish(
                            ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                        try {
                            {
                                ::x10::xrx::Runtime::runAsync(
                                  ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                    myLinks->FMGL(child1Index)),
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__17)))x10_util_Team__LocalTeamState__closure__17(teamidcopy))),
                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc3068) {
                            {
                                ::x10::lang::CheckedThrowable* ct__153826 =
                                  __exc3068;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__153826);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__153829);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3069) {
                    if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3069)) {
                        ::x10::lang::MultipleExceptions* me =
                          static_cast< ::x10::lang::MultipleExceptions*>(__exc3069);
                        {
                         
                        }
                    } else {
                        throw;
                    }
                }
            } else {
                
                //#line 1572 "x10/util/Team.x10"
                x10_long childIndex__153695 = myLinks->FMGL(child1Index);
                
                //#line 1544 "x10/util/Team.x10"
                ::x10::util::Team__LocalTeamState__TreeStructure childLinks__153692 =
                  this->getLinks(childIndex__153695, root,
                                 counts);
                
                //#line 1545 "x10/util/Team.x10"
                if ((!::x10aux::struct_equals(childLinks__153692->FMGL(child1Index),
                                              ((x10_long)-1ll))))
                {
                    
                    //#line 1546 "x10/util/Team.x10"
                    try {
                        
                        //#line 1547 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171448)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                      childLinks__153692->FMGL(child1Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__171444))))->c_str());
                        }
                        {
                            
                            //#line 1548 "x10/util/Team.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__153837 =
                              ::x10::xrx::Runtime::startFinish(
                                ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                            try {
                                {
                                    ::x10::xrx::Runtime::runAsync(
                                      ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                        childLinks__153692->FMGL(child1Index)),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__18)))x10_util_Team__LocalTeamState__closure__18(teamidcopy))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc3070) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__153834 =
                                      __exc3070;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__153834);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__153837);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3071) {
                        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3071)) {
                            ::x10::lang::MultipleExceptions* me__153693 =
                              static_cast< ::x10::lang::MultipleExceptions*>(__exc3071);
                            {
                             
                            }
                        } else {
                            throw;
                        }
                    }
                }
                
                //#line 1553 "x10/util/Team.x10"
                if ((!::x10aux::struct_equals(childLinks__153692->FMGL(child2Index),
                                              ((x10_long)-1ll))))
                {
                    
                    //#line 1554 "x10/util/Team.x10"
                    try {
                        
                        //#line 1555 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171449)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                      childLinks__153692->FMGL(child2Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__171444))))->c_str());
                        }
                        {
                            
                            //#line 1556 "x10/util/Team.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__153845 =
                              ::x10::xrx::Runtime::startFinish(
                                ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                            try {
                                {
                                    ::x10::xrx::Runtime::runAsync(
                                      ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                        childLinks__153692->FMGL(child2Index)),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__19)))x10_util_Team__LocalTeamState__closure__19(teamidcopy))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc3072) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__153842 =
                                      __exc3072;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__153842);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__153845);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3073) {
                        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3073)) {
                            ::x10::lang::MultipleExceptions* me__153694 =
                              static_cast< ::x10::lang::MultipleExceptions*>(__exc3073);
                            {
                             
                            }
                        } else {
                            throw;
                        }
                    }
                }
                
            }
            
        }
        
        //#line 1575 "x10/util/Team.x10"
        if ((!::x10aux::struct_equals(myLinks->FMGL(child2Index),
                                      ((x10_long)-1ll))))
        {
            
            //#line 1576 "x10/util/Team.x10"
            if (!((__extension__ ({
                    ::x10::lang::Place this__153568 = ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                        myLinks->FMGL(child2Index));
                    x10rt_is_place_dead((x10_int)this__153568->FMGL(id));
                }))
                )) {
                
                //#line 1577 "x10/util/Team.x10"
                try {
                    
                    //#line 1578 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171450)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                  myLinks->FMGL(child2Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__171444))))->c_str());
                    }
                    {
                        
                        //#line 1579 "x10/util/Team.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__153853 =
                          ::x10::xrx::Runtime::startFinish(
                            ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                        try {
                            {
                                ::x10::xrx::Runtime::runAsync(
                                  ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                    myLinks->FMGL(child2Index)),
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__20)))x10_util_Team__LocalTeamState__closure__20(teamidcopy))),
                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc3074) {
                            {
                                ::x10::lang::CheckedThrowable* ct__153850 =
                                  __exc3074;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__153850);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__153853);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3075) {
                    if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3075)) {
                        ::x10::lang::MultipleExceptions* me =
                          static_cast< ::x10::lang::MultipleExceptions*>(__exc3075);
                        {
                         
                        }
                    } else {
                        throw;
                    }
                }
            } else {
                
                //#line 1584 "x10/util/Team.x10"
                x10_long childIndex__153702 = myLinks->FMGL(child2Index);
                
                //#line 1544 "x10/util/Team.x10"
                ::x10::util::Team__LocalTeamState__TreeStructure childLinks__153699 =
                  this->getLinks(childIndex__153702, root,
                                 counts);
                
                //#line 1545 "x10/util/Team.x10"
                if ((!::x10aux::struct_equals(childLinks__153699->FMGL(child1Index),
                                              ((x10_long)-1ll))))
                {
                    
                    //#line 1546 "x10/util/Team.x10"
                    try {
                        
                        //#line 1547 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171448)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                      childLinks__153699->FMGL(child1Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__171444))))->c_str());
                        }
                        {
                            
                            //#line 1548 "x10/util/Team.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__153861 =
                              ::x10::xrx::Runtime::startFinish(
                                ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                            try {
                                {
                                    ::x10::xrx::Runtime::runAsync(
                                      ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                        childLinks__153699->FMGL(child1Index)),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__21)))x10_util_Team__LocalTeamState__closure__21(teamidcopy))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc3076) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__153858 =
                                      __exc3076;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__153858);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__153861);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3077) {
                        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3077)) {
                            ::x10::lang::MultipleExceptions* me__153700 =
                              static_cast< ::x10::lang::MultipleExceptions*>(__exc3077);
                            {
                             
                            }
                        } else {
                            throw;
                        }
                    }
                }
                
                //#line 1553 "x10/util/Team.x10"
                if ((!::x10aux::struct_equals(childLinks__153699->FMGL(child2Index),
                                              ((x10_long)-1ll))))
                {
                    
                    //#line 1554 "x10/util/Team.x10"
                    try {
                        
                        //#line 1555 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171449)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                      childLinks__153699->FMGL(child2Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__171444))))->c_str());
                        }
                        {
                            
                            //#line 1556 "x10/util/Team.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__153869 =
                              ::x10::xrx::Runtime::startFinish(
                                ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                            try {
                                {
                                    ::x10::xrx::Runtime::runAsync(
                                      ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                        childLinks__153699->FMGL(child2Index)),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__22)))x10_util_Team__LocalTeamState__closure__22(teamidcopy))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc3078) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__153866 =
                                      __exc3078;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__153866);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__153869);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3079) {
                        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3079)) {
                            ::x10::lang::MultipleExceptions* me__153701 =
                              static_cast< ::x10::lang::MultipleExceptions*>(__exc3079);
                            {
                             
                            }
                        } else {
                            throw;
                        }
                    }
                }
                
            }
            
        }
        
        //#line 1588 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
        {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171389)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171451)), ::x10::util::Team__LocalTeamState::getCollName(
                                                                                                                                                                                                                                                                                                                                                                                                          collType))))->c_str());
        }
        
        //#line 1590 "x10/util/Team.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team__LocalTeamState_Strings::sl__171452), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171453)))));
    }
    
}
#endif // X10_UTIL_TEAM__LOCALTEAMSTATE_H_collective_impl_3055
#endif // X10_UTIL_TEAM__LOCALTEAMSTATE_H_GENERICS
#endif // __X10_UTIL_TEAM__LOCALTEAMSTATE_H_NODEPS
