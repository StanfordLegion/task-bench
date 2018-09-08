#ifndef __X10_UTIL_TEAM_H
#define __X10_UTIL_TEAM_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace util { 
class Team__LocalTeamState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
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
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace compiler { 
class NoInline;
} } 
namespace x10 { namespace compiler { 
class NoReturn;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class DeadPlaceException;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace util { 
class RailUtils;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace util { 
class Team__DoubleIdx;
} } 
namespace x10 { namespace lang { 
class SparsePlaceGroup;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class Team_Strings {
  public:
    static ::x10::lang::String sl__160818;
    static ::x10::lang::String sl__160798;
    static ::x10::lang::String sl__160794;
    static ::x10::lang::String sl__160834;
    static ::x10::lang::String sl__160813;
    static ::x10::lang::String sl__160789;
    static ::x10::lang::String sl__160808;
    static ::x10::lang::String sl__160822;
    static ::x10::lang::String sl__160816;
    static ::x10::lang::String sl__160811;
    static ::x10::lang::String sl__160795;
    static ::x10::lang::String sl__160819;
    static ::x10::lang::String sl__160793;
    static ::x10::lang::String sl__160830;
    static ::x10::lang::String sl__160797;
    static ::x10::lang::String sl__160835;
    static ::x10::lang::String sl__160786;
    static ::x10::lang::String sl__160812;
    static ::x10::lang::String sl__160787;
    static ::x10::lang::String sl__160791;
    static ::x10::lang::String sl__160829;
    static ::x10::lang::String sl__160790;
    static ::x10::lang::String sl__160827;
    static ::x10::lang::String sl__160792;
    static ::x10::lang::String sl__160828;
    static ::x10::lang::String sl__160806;
    static ::x10::lang::String sl__160788;
    static ::x10::lang::String sl__160814;
    static ::x10::lang::String sl__160824;
    static ::x10::lang::String sl__160823;
    static ::x10::lang::String sl__160799;
    static ::x10::lang::String sl__160796;
    static ::x10::lang::String sl__160815;
    static ::x10::lang::String sl__160800;
    static ::x10::lang::String sl__160817;
    static ::x10::lang::String sl__160801;
    static ::x10::lang::String sl__160831;
    static ::x10::lang::String sl__160832;
    static ::x10::lang::String sl__160804;
    static ::x10::lang::String sl__160826;
    static ::x10::lang::String sl__160802;
    static ::x10::lang::String sl__160803;
    static ::x10::lang::String sl__160807;
    static ::x10::lang::String sl__160805;
    static ::x10::lang::String sl__160810;
    static ::x10::lang::String sl__160820;
    static ::x10::lang::String sl__160821;
    static ::x10::lang::String sl__160809;
    static ::x10::lang::String sl__160825;
    static ::x10::lang::String sl__160833;
};

class Team   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::util::Team* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::util::Team > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::util::Team _alloc(){::x10::util::Team t; return t; }
    
    /* Static field: FMGL(DEBUG) */
    static const x10_boolean FMGL(DEBUG) = false;
    static x10_boolean FMGL(DEBUG__get)();
    
    /* Static field: FMGL(DEBUGINTERNALS) */
    static x10_boolean FMGL(DEBUGINTERNALS);
    static void FMGL(DEBUGINTERNALS__do_init)();
    static void FMGL(DEBUGINTERNALS__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(DEBUGINTERNALS__status);
    static ::x10::lang::CheckedThrowable* FMGL(DEBUGINTERNALS__exception);
    static x10_boolean FMGL(DEBUGINTERNALS__get)();
    
    /* Static field: FMGL(WORLD) */
    static ::x10::util::Team FMGL(WORLD);
    static void FMGL(WORLD__do_init)();
    static void FMGL(WORLD__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(WORLD__status);
    static ::x10::lang::CheckedThrowable* FMGL(WORLD__exception);
    static ::x10::util::Team FMGL(WORLD__get)();
    
    /* Static field: FMGL(roles) */
    static ::x10::util::GrowableRail<x10_int>* FMGL(roles);
    static void FMGL(roles__do_init)();
    static void FMGL(roles__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(roles__status);
    static ::x10::lang::CheckedThrowable* FMGL(roles__exception);
    static ::x10::util::GrowableRail<x10_int>* FMGL(roles__get)();
    
    /* Static field: FMGL(state) */
    static ::x10::util::GrowableRail< ::x10::util::Team__LocalTeamState*>* FMGL(state);
    static void FMGL(state__do_init)();
    static void FMGL(state__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(state__status);
    static ::x10::lang::CheckedThrowable* FMGL(state__exception);
    static ::x10::util::GrowableRail< ::x10::util::Team__LocalTeamState*>*
      FMGL(state__get)();
    
    x10_int FMGL(collectiveSupportLevel);
    
    /* Static field: FMGL(X10RT_COLL_NOCOLLECTIVES) */
    static const x10_int FMGL(X10RT_COLL_NOCOLLECTIVES) = 0;
    static x10_int FMGL(X10RT_COLL_NOCOLLECTIVES__get)();
    
    /* Static field: FMGL(X10RT_COLL_BARRIERONLY) */
    static const x10_int FMGL(X10RT_COLL_BARRIERONLY) = 1;
    static x10_int FMGL(X10RT_COLL_BARRIERONLY__get)();
    
    /* Static field: FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES) */
    static const x10_int FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES) = 2;
    static x10_int FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES__get)();
    
    /* Static field: FMGL(X10RT_COLL_NONBLOCKINGBARRIER) */
    static const x10_int FMGL(X10RT_COLL_NONBLOCKINGBARRIER) = 3;
    static x10_int FMGL(X10RT_COLL_NONBLOCKINGBARRIER__get)();
    
    /* Static field: FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES) */
    static const x10_int FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES) = 4;
    static x10_int FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES__get)();
    
    /* Static field: FMGL(FORCE_X10_COLLECTIVES) */
    static x10_boolean FMGL(FORCE_X10_COLLECTIVES);
    static void FMGL(FORCE_X10_COLLECTIVES__do_init)();
    static void FMGL(FORCE_X10_COLLECTIVES__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(FORCE_X10_COLLECTIVES__status);
    static ::x10::lang::CheckedThrowable* FMGL(FORCE_X10_COLLECTIVES__exception);
    static x10_boolean FMGL(FORCE_X10_COLLECTIVES__get)();
    
    x10_int FMGL(id);
    
    x10_int id() {
        return (*this)->FMGL(id);
        
    }
    void _constructor(x10_int id, ::x10::lang::PlaceGroup* places, x10_long role);
    
    static ::x10::util::Team _make(x10_int id, ::x10::lang::PlaceGroup* places,
                                   x10_long role);
    
    void _constructor(::x10::lang::PlaceGroup* places);
    
    static ::x10::util::Team _make(::x10::lang::PlaceGroup* places);
    
    static void nativeMake(::x10::lang::Rail< x10_int >* places, x10_int count,
                           ::x10::lang::Rail< x10_int >* result);
    static x10_int collectiveSupport() {
        
        //#line 140 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(FORCE_X10_COLLECTIVES__get)()) {
            return ::x10::util::Team::FMGL(X10RT_COLL_NOCOLLECTIVES__get)();
            
        } else {
            
            //#line 141 "x10/util/Team.x10"
            return ::x10::util::Team::nativeCollectiveSupport();
            
        }
        
    }
    static x10_int nativeCollectiveSupport() {
        return x10rt_coll_support();
    }
    static void checkBounds(x10_long index, x10_long size);
    static void raiseBoundsError(x10_long index, x10_long size) X10_PRAGMA_NORETURN ;
    x10_long size();
    static x10_int nativeSize(x10_int id) {
        return (x10_int)x10rt_team_sz(id);
    }
    void barrier();
    void nativeBarrier();
    static void nativeBarrier(x10_int id, x10_int role) {
        x10rt_barrier(id, role, ::x10aux::coll_handler, ::x10aux::coll_enter());
    }
    void barrierIgnoreExceptions();
    x10_int agree(x10_int flag);
    static x10_boolean nativeAgree(x10_int id, x10_int role, ::x10::lang::Rail< x10_int >* src,
                                   ::x10::lang::Rail< x10_int >* dst);
    template<class TPMGL(T)> void scatter(::x10::lang::Place root,
                                          ::x10::lang::Rail< TPMGL(T) >* src,
                                          x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
                                          x10_long dst_off,
                                          x10_long count);
    template<class TPMGL(T)> static void nativeScatter(x10_int id,
                                                       x10_int role,
                                                       x10_int root,
                                                       ::x10::lang::Rail< TPMGL(T) >* src,
                                                       x10_int src_off,
                                                       ::x10::lang::Rail< TPMGL(T) >* dst,
                                                       x10_int dst_off,
                                                       x10_int count);
    template<class TPMGL(T)> void scatterv(::x10::lang::Place root,
                                           ::x10::lang::Rail< TPMGL(T) >* src,
                                           x10_long src_off,
                                           ::x10::lang::Rail< TPMGL(T) >* dst,
                                           x10_long dst_off,
                                           ::x10::lang::Rail< x10_int >* scounts);
    template<class TPMGL(T)> static x10_boolean nativeScatterv(
      x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
      x10_int src_off, ::x10::lang::Rail< x10_int >* scounts,
      ::x10::lang::Rail< x10_int >* soffsets, ::x10::lang::Rail< TPMGL(T) >* dst,
      x10_int dst_off);
    template<class TPMGL(T)> void gather(::x10::lang::Place root,
                                         ::x10::lang::Rail< TPMGL(T) >* src,
                                         x10_long src_off,
                                         ::x10::lang::Rail< TPMGL(T) >* dst,
                                         x10_long dst_off,
                                         x10_long count);
    template<class TPMGL(T)> static void nativeGather(x10_int id,
                                                      x10_int role,
                                                      x10_int root,
                                                      ::x10::lang::Rail< TPMGL(T) >* src,
                                                      x10_int src_off,
                                                      ::x10::lang::Rail< TPMGL(T) >* dst,
                                                      x10_int dst_off,
                                                      x10_int count);
    template<class TPMGL(T)> void gatherv(::x10::lang::Place root,
                                          ::x10::lang::Rail< TPMGL(T) >* src,
                                          x10_long src_off,
                                          ::x10::lang::Rail< TPMGL(T) >* dst,
                                          x10_long dst_off,
                                          ::x10::lang::Rail< x10_int >* dcounts);
    template<class TPMGL(T)> static x10_boolean nativeGatherv(
      x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
      x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
      x10_int dst_off, ::x10::lang::Rail< x10_int >* dcounts,
      ::x10::lang::Rail< x10_int >* doffsets);
    template<class TPMGL(T)> void bcast(::x10::lang::Place root,
                                        ::x10::lang::Rail< TPMGL(T) >* src,
                                        x10_long src_off,
                                        ::x10::lang::Rail< TPMGL(T) >* dst,
                                        x10_long dst_off,
                                        x10_long count);
    template<class TPMGL(T)> static x10_boolean nativeBcast(
      x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
      x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
      x10_int dst_off, x10_int count);
    template<class TPMGL(T)> void alltoall(::x10::lang::Rail< TPMGL(T) >* src,
                                           x10_long src_off,
                                           ::x10::lang::Rail< TPMGL(T) >* dst,
                                           x10_long dst_off,
                                           x10_long count);
    template<class TPMGL(T)> static void nativeAlltoall(x10_int id,
                                                        x10_int role,
                                                        ::x10::lang::Rail< TPMGL(T) >* src,
                                                        x10_int src_off,
                                                        ::x10::lang::Rail< TPMGL(T) >* dst,
                                                        x10_int dst_off,
                                                        x10_int count);
    /* Static field: FMGL(ADD) */
    static const x10_int FMGL(ADD) = 0;
    static x10_int FMGL(ADD__get)();
    
    /* Static field: FMGL(MUL) */
    static const x10_int FMGL(MUL) = 1;
    static x10_int FMGL(MUL__get)();
    
    /* Static field: FMGL(AND) */
    static const x10_int FMGL(AND) = 3;
    static x10_int FMGL(AND__get)();
    
    /* Static field: FMGL(OR) */
    static const x10_int FMGL(OR) = 4;
    static x10_int FMGL(OR__get)();
    
    /* Static field: FMGL(XOR) */
    static const x10_int FMGL(XOR) = 5;
    static x10_int FMGL(XOR__get)();
    
    /* Static field: FMGL(MAX) */
    static const x10_int FMGL(MAX) = 6;
    static x10_int FMGL(MAX__get)();
    
    /* Static field: FMGL(MIN) */
    static const x10_int FMGL(MIN) = 7;
    static x10_int FMGL(MIN__get)();
    
    template<class TPMGL(T)> void reduce(::x10::lang::Place root,
                                         ::x10::lang::Rail< TPMGL(T) >* src,
                                         x10_long src_off,
                                         ::x10::lang::Rail< TPMGL(T) >* dst,
                                         x10_long dst_off,
                                         x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_boolean >* src,
                x10_long src_off, ::x10::lang::Rail< x10_boolean >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_byte >* src,
                x10_long src_off, ::x10::lang::Rail< x10_byte >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_ubyte >* src,
                x10_long src_off, ::x10::lang::Rail< x10_ubyte >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_short >* src,
                x10_long src_off, ::x10::lang::Rail< x10_short >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_ushort >* src,
                x10_long src_off, ::x10::lang::Rail< x10_ushort >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_int >* src,
                x10_long src_off, ::x10::lang::Rail< x10_int >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_uint >* src,
                x10_long src_off, ::x10::lang::Rail< x10_uint >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_long >* src,
                x10_long src_off, ::x10::lang::Rail< x10_long >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_ulong >* src,
                x10_long src_off, ::x10::lang::Rail< x10_ulong >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_float >* src,
                x10_long src_off, ::x10::lang::Rail< x10_float >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_double >* src,
                x10_long src_off, ::x10::lang::Rail< x10_double >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    template<class TPMGL(T)> void reduce_builtin(::x10::lang::Place root,
                                                 ::x10::lang::Rail< TPMGL(T) >* src,
                                                 x10_long src_off,
                                                 ::x10::lang::Rail< TPMGL(T) >* dst,
                                                 x10_long dst_off,
                                                 x10_long count,
                                                 x10_int op);
    template<class TPMGL(T)> static void nativeReduce(x10_int id,
                                                      x10_int role,
                                                      x10_int root,
                                                      ::x10::lang::Rail< TPMGL(T) >* src,
                                                      x10_int src_off,
                                                      ::x10::lang::Rail< TPMGL(T) >* dst,
                                                      x10_int dst_off,
                                                      x10_int count,
                                                      x10_int op);
    x10_boolean reduce(::x10::lang::Place root, x10_boolean src,
                       x10_int op);
    x10_byte reduce(::x10::lang::Place root, x10_byte src,
                    x10_int op);
    x10_ubyte reduce(::x10::lang::Place root, x10_ubyte src,
                     x10_int op);
    x10_short reduce(::x10::lang::Place root, x10_short src,
                     x10_int op);
    x10_ushort reduce(::x10::lang::Place root, x10_ushort src,
                      x10_int op);
    x10_uint reduce(::x10::lang::Place root, x10_uint src,
                    x10_int op);
    x10_int reduce(::x10::lang::Place root, x10_int src, x10_int op);
    x10_long reduce(::x10::lang::Place root, x10_long src,
                    x10_int op);
    x10_ulong reduce(::x10::lang::Place root, x10_ulong src,
                     x10_int op);
    x10_float reduce(::x10::lang::Place root, x10_float src,
                     x10_int op);
    x10_double reduce(::x10::lang::Place root, x10_double src,
                      x10_int op);
    template<class TPMGL(T)> TPMGL(T) reduce(::x10::lang::Place root,
                                             TPMGL(T) src,
                                             x10_int op);
    template<class TPMGL(T)> static void nativeReduce(x10_int id,
                                                      x10_int role,
                                                      x10_int root,
                                                      ::x10::lang::Rail< TPMGL(T) >* src,
                                                      ::x10::lang::Rail< TPMGL(T) >* dst,
                                                      x10_int op);
    template<class TPMGL(T)> void allreduce(::x10::lang::Rail< TPMGL(T) >* src,
                                            x10_long src_off,
                                            ::x10::lang::Rail< TPMGL(T) >* dst,
                                            x10_long dst_off,
                                            x10_long count,
                                            x10_int op);
    void allreduce(::x10::lang::Rail< x10_boolean >* src,
                   x10_long src_off, ::x10::lang::Rail< x10_boolean >* dst,
                   x10_long dst_off, x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_byte >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_byte >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_ubyte >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_ubyte >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_short >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_short >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_ushort >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_ushort >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_int >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_int >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_uint >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_uint >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_long >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_long >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_ulong >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_ulong >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_float >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_float >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_double >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_double >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    template<class TPMGL(T)> void allreduce_builtin(::x10::lang::Rail< TPMGL(T) >* src,
                                                    x10_long src_off,
                                                    ::x10::lang::Rail< TPMGL(T) >* dst,
                                                    x10_long dst_off,
                                                    x10_long count,
                                                    x10_int op);
    template<class TPMGL(T)> static x10_boolean nativeAllreduce(
      x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
      x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
      x10_int dst_off, x10_int count, x10_int op);
    x10_boolean allreduce(x10_boolean src, x10_int op);
    x10_byte allreduce(x10_byte src, x10_int op);
    x10_ubyte allreduce(x10_ubyte src, x10_int op);
    x10_short allreduce(x10_short src, x10_int op);
    x10_ushort allreduce(x10_ushort src, x10_int op);
    x10_uint allreduce(x10_uint src, x10_int op);
    x10_int allreduce(x10_int src, x10_int op);
    x10_long allreduce(x10_long src, x10_int op);
    x10_ulong allreduce(x10_ulong src, x10_int op);
    x10_float allreduce(x10_float src, x10_int op);
    x10_double allreduce(x10_double src, x10_int op);
    template<class TPMGL(T)> TPMGL(T) allreduce(TPMGL(T) src,
                                                x10_int op);
    template<class TPMGL(T)> static void nativeAllreduce(
      x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
      ::x10::lang::Rail< TPMGL(T) >* dst, x10_int op);
    x10_int indexOfMax(x10_double v, x10_int idx);
    static void nativeIndexOfMax(x10_int id, x10_int role,
                                 ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* src,
                                 ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* dst);
    x10_int indexOfMin(x10_double v, x10_int idx);
    static void nativeIndexOfMin(x10_int id, x10_int role,
                                 ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* src,
                                 ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* dst);
    ::x10::util::Team split(x10_int color, x10_long new_role);
    static void nativeSplit(x10_int id, x10_int role, x10_int color,
                            x10_int new_role, ::x10::lang::Rail< x10_int >* result);
    void _kwd__delete();
    static void nativeDel(x10_int id, x10_int role) {
        x10rt_team_del(id, role, ::x10aux::coll_handler, ::x10aux::coll_enter());
    }
    ::x10::lang::String* toString();
    x10_boolean equals(::x10::util::Team that) {
        return (::x10aux::struct_equals(that->FMGL(id), (*this)->FMGL(id)));
        
    }
    x10_boolean equals(::x10::lang::Any* that);
    x10_int hashCode() {
        return (*this)->FMGL(id);
        
    }
    ::x10::lang::String* typeName();
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::util::Team other) {
        return ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                         other->FMGL(collectiveSupportLevel))) &&
        (::x10aux::struct_equals((*this)->FMGL(id), other->FMGL(id))));
        
    }
    ::x10::util::Team x10__util__Team____this__x10__util__Team(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_x10_util_Team() {
     
    }
    
    static void _serialize(::x10::util::Team this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::util::Team _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::util::Team this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_UTIL_TEAM_H

namespace x10 { namespace util { 
class Team;
} } 

#ifndef X10_UTIL_TEAM_H_NODEPS
#define X10_UTIL_TEAM_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/System.h>
#include <x10/lang/String.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Long.h>
#include <x10/xrx/Runtime.h>
#include <x10/util/GrowableRail.h>
#include <x10/util/Team__LocalTeamState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Finalization.h>
#include <x10/lang/Rail.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Inline.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/compiler/NoInline.h>
#include <x10/compiler/NoReturn.h>
#include <x10/lang/Exception.h>
#include <x10/lang/DeadPlaceException.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/util/RailUtils.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Byte.h>
#include <x10/lang/UByte.h>
#include <x10/lang/Short.h>
#include <x10/lang/UShort.h>
#include <x10/lang/UInt.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Float.h>
#include <x10/lang/Double.h>
#include <x10/util/Team__DoubleIdx.h>
#include <x10/lang/SparsePlaceGroup.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_TEAM__CLOSURE__5_CLOSURE
#define X10_UTIL_TEAM__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class x10_util_Team__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::itable<x10_util_Team__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_int __apply(x10_int a, x10_int b);
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__closure__5* storage = ::x10aux::alloc_z<x10_util_Team__closure__5>();
        buf.record_reference(storage);
        x10_util_Team__closure__5* this_ = new (storage) x10_util_Team__closure__5();
        return this_;
    }
    
    x10_util_Team__closure__5() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:289";
    }

};

#endif // X10_UTIL_TEAM__CLOSURE__5_CLOSURE
#ifndef X10_UTIL_TEAM__CLOSURE__6_CLOSURE
#define X10_UTIL_TEAM__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class x10_util_Team__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::itable<x10_util_Team__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_int __apply(x10_int x, x10_int y);
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__closure__6* storage = ::x10aux::alloc_z<x10_util_Team__closure__6>();
        buf.record_reference(storage);
        x10_util_Team__closure__6* this_ = new (storage) x10_util_Team__closure__6();
        return this_;
    }
    
    x10_util_Team__closure__6() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:297";
    }

};

#endif // X10_UTIL_TEAM__CLOSURE__6_CLOSURE
#ifndef X10_UTIL_TEAM__CLOSURE__7_CLOSURE
#define X10_UTIL_TEAM__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class x10_util_Team__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::itable<x10_util_Team__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_int __apply(x10_int x, x10_int y);
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__closure__7* storage = ::x10aux::alloc_z<x10_util_Team__closure__7>();
        buf.record_reference(storage);
        x10_util_Team__closure__7* this_ = new (storage) x10_util_Team__closure__7();
        return this_;
    }
    
    x10_util_Team__closure__7() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:298";
    }

};

#endif // X10_UTIL_TEAM__CLOSURE__7_CLOSURE
#ifndef X10_UTIL_TEAM__CLOSURE__8_CLOSURE
#define X10_UTIL_TEAM__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class x10_util_Team__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::itable<x10_util_Team__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_int __apply(x10_int a, x10_int b);
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__closure__8* storage = ::x10aux::alloc_z<x10_util_Team__closure__8>();
        buf.record_reference(storage);
        x10_util_Team__closure__8* this_ = new (storage) x10_util_Team__closure__8();
        return this_;
    }
    
    x10_util_Team__closure__8() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:356";
    }

};

#endif // X10_UTIL_TEAM__CLOSURE__8_CLOSURE
#ifndef X10_UTIL_TEAM__CLOSURE__9_CLOSURE
#define X10_UTIL_TEAM__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class x10_util_Team__closure__9 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::itable<x10_util_Team__closure__9> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_int __apply(x10_int x, x10_int y);
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__closure__9* storage = ::x10aux::alloc_z<x10_util_Team__closure__9>();
        buf.record_reference(storage);
        x10_util_Team__closure__9* this_ = new (storage) x10_util_Team__closure__9();
        return this_;
    }
    
    x10_util_Team__closure__9() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:364";
    }

};

#endif // X10_UTIL_TEAM__CLOSURE__9_CLOSURE
#ifndef X10_UTIL_TEAM__CLOSURE__10_CLOSURE
#define X10_UTIL_TEAM__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class x10_util_Team__closure__10 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::itable<x10_util_Team__closure__10> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_int __apply(x10_int x, x10_int y);
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__closure__10* storage = ::x10aux::alloc_z<x10_util_Team__closure__10>();
        buf.record_reference(storage);
        x10_util_Team__closure__10* this_ = new (storage) x10_util_Team__closure__10();
        return this_;
    }
    
    x10_util_Team__closure__10() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:365";
    }

};

#endif // X10_UTIL_TEAM__CLOSURE__10_CLOSURE
#ifndef X10_UTIL_TEAM_H_GENERICS
#define X10_UTIL_TEAM_H_GENERICS
inline x10_boolean x10::util::Team::FMGL(DEBUG__get)() {
    return x10::util::Team::FMGL(DEBUG);
}

inline x10_boolean x10::util::Team::FMGL(DEBUGINTERNALS__get)() {
    if (FMGL(DEBUGINTERNALS__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(DEBUGINTERNALS__init)();
    }
    return x10::util::Team::FMGL(DEBUGINTERNALS);
}

inline ::x10::util::Team x10::util::Team::FMGL(WORLD__get)() {
    if (FMGL(WORLD__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(WORLD__init)();
    }
    return x10::util::Team::FMGL(WORLD);
}

inline ::x10::util::GrowableRail<x10_int>* x10::util::Team::FMGL(roles__get)() {
    if (FMGL(roles__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(roles__init)();
    }
    return x10::util::Team::FMGL(roles);
}

inline ::x10::util::GrowableRail< ::x10::util::Team__LocalTeamState*>* x10::util::Team::FMGL(state__get)() {
    if (FMGL(state__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(state__init)();
    }
    return x10::util::Team::FMGL(state);
}

inline x10_int x10::util::Team::FMGL(X10RT_COLL_NOCOLLECTIVES__get)() {
    return x10::util::Team::FMGL(X10RT_COLL_NOCOLLECTIVES);
}

inline x10_int x10::util::Team::FMGL(X10RT_COLL_BARRIERONLY__get)() {
    return x10::util::Team::FMGL(X10RT_COLL_BARRIERONLY);
}

inline x10_int x10::util::Team::FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES__get)() {
    return x10::util::Team::FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES);
}

inline x10_int x10::util::Team::FMGL(X10RT_COLL_NONBLOCKINGBARRIER__get)() {
    return x10::util::Team::FMGL(X10RT_COLL_NONBLOCKINGBARRIER);
}

inline x10_int x10::util::Team::FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES__get)() {
    return x10::util::Team::FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES);
}

inline x10_boolean x10::util::Team::FMGL(FORCE_X10_COLLECTIVES__get)() {
    if (FMGL(FORCE_X10_COLLECTIVES__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(FORCE_X10_COLLECTIVES__init)();
    }
    return x10::util::Team::FMGL(FORCE_X10_COLLECTIVES);
}

#ifndef X10_UTIL_TEAM_H_scatter_2902
#define X10_UTIL_TEAM_H_scatter_2902
template<class TPMGL(T)> void x10::util::Team::scatter(::x10::lang::Place root,
                                                       ::x10::lang::Rail< TPMGL(T) >* src,
                                                       x10_long src_off,
                                                       ::x10::lang::Rail< TPMGL(T) >* dst,
                                                       x10_long dst_off,
                                                       x10_long count) {
    
    //#line 250 "x10/util/Team.x10"
    if ((BOUNDS_CHECK_BOOL && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                                       root))))
    {
        ::x10::util::Team::checkBounds(((((src_off) + ((((*this)->x10::util::Team::size()) * (count))))) - (((x10_long)1ll))),
                                       (x10_long)(::x10aux::nullCheck(src)->FMGL(size)));
    }
    
    //#line 251 "x10/util/Team.x10"
    ::x10::util::Team::checkBounds(((((dst_off) + (count))) - (((x10_long)1ll))),
                                   (x10_long)(::x10aux::nullCheck(dst)->FMGL(size)));
    
    //#line 252 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES__get)())))
    {
        {
            
            //#line 253 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__142996 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::util::Team::template nativeScatter< TPMGL(T) >(
                      (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                  ((x10_int)0)))
                        ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
                        : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                             ((x10_long)((*this)->FMGL(id))))),
                      ((x10_int) (root->x10::lang::Place::id())),
                      src, ((x10_int) (src_off)), dst, ((x10_int) (dst_off)),
                      ((x10_int) (count)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2903) {
                {
                    ::x10::lang::CheckedThrowable* ct__142994 =
                      __exc2903;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__142994);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__142996);
        }
    } else 
    //#line 254 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ::x10::util::Team::FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES__get)())) ||
        (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_NONBLOCKINGBARRIER__get)()))))
    {
        
        //#line 255 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 256 "x10/util/Team.x10"
        ::x10::util::Team::template nativeScatter< TPMGL(T) >(
          (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                      ((x10_int)0)))
            ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
            : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                 ((x10_long)((*this)->FMGL(id))))), ((x10_int) (root->x10::lang::Place::id())),
          src, ((x10_int) (src_off)), dst, ((x10_int) (dst_off)),
          ((x10_int) (count)));
    } else {
        
        //#line 259 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTER__get)(),
          root, src, src_off, dst, dst_off, count, ((x10_int)0),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_scatter_2902
#ifndef X10_UTIL_TEAM_H_nativeScatter_2904
#define X10_UTIL_TEAM_H_nativeScatter_2904
template<class TPMGL(T)> void x10::util::Team::nativeScatter(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count) {
    x10rt_scatter(id, role, root, &src->raw[src_off], &dst->raw[dst_off], sizeof(TPMGL(T)), count, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeScatter_2904
#ifndef X10_UTIL_TEAM_H_scatterv_2905
#define X10_UTIL_TEAM_H_scatterv_2905
template<class TPMGL(T)> void x10::util::Team::scatterv(::x10::lang::Place root,
                                                        ::x10::lang::Rail< TPMGL(T) >* src,
                                                        x10_long src_off,
                                                        ::x10::lang::Rail< TPMGL(T) >* dst,
                                                        x10_long dst_off,
                                                        ::x10::lang::Rail< x10_int >* scounts) {
    
    //#line 288 "x10/util/Team.x10"
    if ((BOUNDS_CHECK_BOOL && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                                       root))))
    {
        
        //#line 289 "x10/util/Team.x10"
        x10_int scounts_sum = ::x10::util::RailUtils::template reduce< x10_int,
                              x10_int >(scounts, reinterpret_cast< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(x10_util_Team__closure__5)))x10_util_Team__closure__5())),
                                        ((x10_int)0));
        
        //#line 290 "x10/util/Team.x10"
        ::x10::util::Team::checkBounds(((((src_off) + (((x10_long)(scounts_sum))))) - (((x10_long)1ll))),
                                       (x10_long)(::x10aux::nullCheck(src)->FMGL(size)));
    }
    
    //#line 292 "x10/util/Team.x10"
    x10_int my_role = (((*this)->FMGL(collectiveSupportLevel)) > (::x10::util::Team::FMGL(X10RT_COLL_NOCOLLECTIVES__get)()))
      ? ((::x10aux::struct_equals((*this)->FMGL(id), ((x10_int)0)))
           ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
           : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                ((x10_long)((*this)->FMGL(id)))))) : (((x10_int) (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                        ((x10_long)((*this)->FMGL(id)))))->FMGL(myIndex))));
    
    //#line 293 "x10/util/Team.x10"
    x10_int dst_count = ::x10aux::nullCheck(scounts)->x10::lang::template Rail< x10_int >::__apply(
                          ((x10_long)(my_role)));
    
    //#line 294 "x10/util/Team.x10"
    ::x10::util::Team::checkBounds(((((dst_off) + (((x10_long)(dst_count))))) - (((x10_long)1ll))),
                                   (x10_long)(::x10aux::nullCheck(dst)->FMGL(size)));
    
    //#line 296 "x10/util/Team.x10"
    ::x10::lang::Rail< x10_int >* soffsets = (((*this)->FMGL(collectiveSupportLevel)) > (::x10::util::Team::FMGL(X10RT_COLL_NOCOLLECTIVES__get)()))
      ? (::x10::util::RailUtils::template scanExclusive< x10_int >(
           scounts, reinterpret_cast< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(x10_util_Team__closure__6)))x10_util_Team__closure__6())),
           ((x10_int) (src_off)))) : (::x10::util::RailUtils::template scanExclusive< x10_int >(
                                        scounts, reinterpret_cast< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(x10_util_Team__closure__7)))x10_util_Team__closure__7())),
                                        ((x10_int)0)));
    
    //#line 300 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES__get)())))
    {
        {
            
            //#line 301 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__143000 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10rt_scatterv((*this)->FMGL(id), my_role, ((x10_int) (root->x10::lang::Place::id())), src->raw, soffsets->raw, scounts->raw, &(dst)->raw[((x10_int) (dst_off))], scounts->raw[my_role], sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2906) {
                {
                    ::x10::lang::CheckedThrowable* ct__142998 =
                      __exc2906;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__142998);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__143000);
        }
    } else 
    //#line 302 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ::x10::util::Team::FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES__get)())) ||
        (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_NONBLOCKINGBARRIER__get)()))))
    {
        
        //#line 303 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 304 "x10/util/Team.x10"
        x10_boolean success = x10rt_scatterv((*this)->FMGL(id), my_role, ((x10_int) (root->x10::lang::Place::id())), src->raw, soffsets->raw, scounts->raw, &(dst)->raw[((x10_int) (dst_off))], scounts->raw[my_role], sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
        
        //#line 305 "x10/util/Team.x10"
        if (!(success)) {
            
            //#line 306 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team_Strings::sl__160803), (*this)->FMGL(id)), (&::x10::util::Team_Strings::sl__160804)))));
        }
        
    } else {
        
        //#line 309 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTERV__get)(),
          root, src, src_off, dst, dst_off, ((x10_long)(((x10_int)0))),
          ((x10_int)0), soffsets, scounts);
    }
    
}
#endif // X10_UTIL_TEAM_H_scatterv_2905
#ifndef X10_UTIL_TEAM_H_nativeScatterv_2907
#define X10_UTIL_TEAM_H_nativeScatterv_2907
template<class TPMGL(T)> x10_boolean x10::util::Team::nativeScatterv(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< x10_int >* scounts,
  ::x10::lang::Rail< x10_int >* soffsets, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_int dst_off){
    return x10rt_scatterv(id, role, root, src->raw, soffsets->raw, scounts->raw, &(dst)->raw[dst_off], scounts->raw[role], sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeScatterv_2907
#ifndef X10_UTIL_TEAM_H_gather_2908
#define X10_UTIL_TEAM_H_gather_2908
template<class TPMGL(T)> void x10::util::Team::gather(::x10::lang::Place root,
                                                      ::x10::lang::Rail< TPMGL(T) >* src,
                                                      x10_long src_off,
                                                      ::x10::lang::Rail< TPMGL(T) >* dst,
                                                      x10_long dst_off,
                                                      x10_long count) {
    
    //#line 321 "x10/util/Team.x10"
    if ((BOUNDS_CHECK_BOOL && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                                       root))))
    {
        ::x10::util::Team::checkBounds(((((dst_off) + ((((*this)->x10::util::Team::size()) * (count))))) - (((x10_long)1ll))),
                                       (x10_long)(::x10aux::nullCheck(dst)->FMGL(size)));
    }
    
    //#line 322 "x10/util/Team.x10"
    ::x10::util::Team::checkBounds(((((src_off) + (count))) - (((x10_long)1ll))),
                                   (x10_long)(::x10aux::nullCheck(src)->FMGL(size)));
    
    //#line 323 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES__get)())))
    {
        {
            
            //#line 324 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__143004 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::util::Team::template nativeGather< TPMGL(T) >(
                      (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                  ((x10_int)0)))
                        ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
                        : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                             ((x10_long)((*this)->FMGL(id))))),
                      ((x10_int) (root->x10::lang::Place::id())),
                      src, ((x10_int) (src_off)), dst, ((x10_int) (dst_off)),
                      ((x10_int) (count)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2909) {
                {
                    ::x10::lang::CheckedThrowable* ct__143002 =
                      __exc2909;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__143002);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__143004);
        }
    } else 
    //#line 325 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ::x10::util::Team::FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES__get)())) ||
        (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_NONBLOCKINGBARRIER__get)()))))
    {
        
        //#line 326 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 327 "x10/util/Team.x10"
        ::x10::util::Team::template nativeGather< TPMGL(T) >(
          (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                      ((x10_int)0)))
            ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
            : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                 ((x10_long)((*this)->FMGL(id))))), ((x10_int) (root->x10::lang::Place::id())),
          src, ((x10_int) (src_off)), dst, ((x10_int) (dst_off)),
          ((x10_int) (count)));
    } else {
        
        //#line 330 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ::x10::util::Team__LocalTeamState::FMGL(COLL_GATHER__get)(),
          root, src, src_off, dst, dst_off, count, ((x10_int)0),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_gather_2908
#ifndef X10_UTIL_TEAM_H_nativeGather_2910
#define X10_UTIL_TEAM_H_nativeGather_2910
template<class TPMGL(T)> void x10::util::Team::nativeGather(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count) {
    x10rt_gather(id, role, root, &src->raw[src_off], &dst->raw[dst_off], sizeof(TPMGL(T)), count, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeGather_2910
#ifndef X10_UTIL_TEAM_H_gatherv_2911
#define X10_UTIL_TEAM_H_gatherv_2911
template<class TPMGL(T)> void x10::util::Team::gatherv(::x10::lang::Place root,
                                                       ::x10::lang::Rail< TPMGL(T) >* src,
                                                       x10_long src_off,
                                                       ::x10::lang::Rail< TPMGL(T) >* dst,
                                                       x10_long dst_off,
                                                       ::x10::lang::Rail< x10_int >* dcounts) {
    
    //#line 355 "x10/util/Team.x10"
    if ((BOUNDS_CHECK_BOOL && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                                       root))))
    {
        
        //#line 356 "x10/util/Team.x10"
        x10_int dcounts_sum = ::x10::util::RailUtils::template reduce< x10_int,
                              x10_int >(dcounts, reinterpret_cast< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(x10_util_Team__closure__8)))x10_util_Team__closure__8())),
                                        ((x10_int)0));
        
        //#line 357 "x10/util/Team.x10"
        ::x10::util::Team::checkBounds(((((dst_off) + (((x10_long)(dcounts_sum))))) - (((x10_long)1ll))),
                                       (x10_long)(::x10aux::nullCheck(dst)->FMGL(size)));
    }
    
    //#line 359 "x10/util/Team.x10"
    x10_int my_role = (((*this)->FMGL(collectiveSupportLevel)) > (::x10::util::Team::FMGL(X10RT_COLL_NOCOLLECTIVES__get)()))
      ? ((::x10aux::struct_equals((*this)->FMGL(id), ((x10_int)0)))
           ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
           : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                ((x10_long)((*this)->FMGL(id)))))) : (((x10_int) (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                        ((x10_long)((*this)->FMGL(id)))))->FMGL(myIndex))));
    
    //#line 360 "x10/util/Team.x10"
    x10_int src_count = ::x10aux::nullCheck(dcounts)->x10::lang::template Rail< x10_int >::__apply(
                          ((x10_long)(my_role)));
    
    //#line 361 "x10/util/Team.x10"
    ::x10::util::Team::checkBounds(((((src_off) + (((x10_long)(src_count))))) - (((x10_long)1ll))),
                                   (x10_long)(::x10aux::nullCheck(src)->FMGL(size)));
    
    //#line 363 "x10/util/Team.x10"
    ::x10::lang::Rail< x10_int >* doffsets = (((*this)->FMGL(collectiveSupportLevel)) > (::x10::util::Team::FMGL(X10RT_COLL_NOCOLLECTIVES__get)()))
      ? (::x10::util::RailUtils::template scanExclusive< x10_int >(
           dcounts, reinterpret_cast< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(x10_util_Team__closure__9)))x10_util_Team__closure__9())),
           ((x10_int) (dst_off)))) : (::x10::util::RailUtils::template scanExclusive< x10_int >(
                                        dcounts, reinterpret_cast< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(x10_util_Team__closure__10)))x10_util_Team__closure__10())),
                                        ((x10_int)0)));
    
    //#line 367 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES__get)())))
    {
        {
            
            //#line 368 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__143008 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10rt_gatherv((*this)->FMGL(id), my_role, ((x10_int) (root->x10::lang::Place::id())), &(src)->raw[((x10_int) (src_off))], dcounts->raw[my_role], dst->raw, doffsets->raw, dcounts->raw, sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2912) {
                {
                    ::x10::lang::CheckedThrowable* ct__143006 =
                      __exc2912;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__143006);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__143008);
        }
    } else 
    //#line 369 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ::x10::util::Team::FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES__get)())) ||
        (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_NONBLOCKINGBARRIER__get)()))))
    {
        
        //#line 370 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 371 "x10/util/Team.x10"
        x10_boolean success = x10rt_gatherv((*this)->FMGL(id), my_role, ((x10_int) (root->x10::lang::Place::id())), &(src)->raw[((x10_int) (src_off))], dcounts->raw[my_role], dst->raw, doffsets->raw, dcounts->raw, sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
        
        //#line 372 "x10/util/Team.x10"
        if (!(success)) {
            
            //#line 373 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team_Strings::sl__160803), (*this)->FMGL(id)), (&::x10::util::Team_Strings::sl__160804)))));
        }
        
    } else {
        
        //#line 376 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ::x10::util::Team__LocalTeamState::FMGL(COLL_GATHERV__get)(),
          root, src, src_off, dst, dst_off, ((x10_long)(((x10_int)0))),
          ((x10_int)0), doffsets, dcounts);
    }
    
}
#endif // X10_UTIL_TEAM_H_gatherv_2911
#ifndef X10_UTIL_TEAM_H_nativeGatherv_2913
#define X10_UTIL_TEAM_H_nativeGatherv_2913
template<class TPMGL(T)> x10_boolean x10::util::Team::nativeGatherv(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  ::x10::lang::Rail< x10_int >* dcounts, ::x10::lang::Rail< x10_int >* doffsets){
    return x10rt_gatherv(id, role, root, &(src)->raw[src_off], dcounts->raw[role], dst->raw, doffsets->raw, dcounts->raw, sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeGatherv_2913
#ifndef X10_UTIL_TEAM_H_bcast_2914
#define X10_UTIL_TEAM_H_bcast_2914
template<class TPMGL(T)> void x10::util::Team::bcast(::x10::lang::Place root,
                                                     ::x10::lang::Rail< TPMGL(T) >* src,
                                                     x10_long src_off,
                                                     ::x10::lang::Rail< TPMGL(T) >* dst,
                                                     x10_long dst_off,
                                                     x10_long count) {
    
    //#line 400 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                 root))) {
        ::x10::util::Team::checkBounds(((((src_off) + (count))) - (((x10_long)1ll))),
                                       (x10_long)(::x10aux::nullCheck(src)->FMGL(size)));
    }
    
    //#line 401 "x10/util/Team.x10"
    ::x10::util::Team::checkBounds(((((dst_off) + (count))) - (((x10_long)1ll))),
                                   (x10_long)(::x10aux::nullCheck(dst)->FMGL(size)));
    
    //#line 402 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES__get)())))
    {
        {
            
            //#line 403 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__143012 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10rt_bcast((*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                            ((x10_int)0)))
                      ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
                      : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                           ((x10_long)((*this)->FMGL(id))))), ((x10_int) (root->x10::lang::Place::id())), &(src)->raw[((x10_int) (src_off))], &(dst)->raw[((x10_int) (dst_off))], sizeof(TPMGL(T)), ((x10_int) (count)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2915) {
                {
                    ::x10::lang::CheckedThrowable* ct__143010 =
                      __exc2915;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__143010);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__143012);
        }
    } else 
    //#line 404 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ::x10::util::Team::FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES__get)())) ||
        (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_NONBLOCKINGBARRIER__get)()))))
    {
        
        //#line 405 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 406 "x10/util/Team.x10"
        x10_boolean success = x10rt_bcast((*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                                      ((x10_int)0)))
          ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
          : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
               ((x10_long)((*this)->FMGL(id))))), ((x10_int) (root->x10::lang::Place::id())), &(src)->raw[((x10_int) (src_off))], &(dst)->raw[((x10_int) (dst_off))], sizeof(TPMGL(T)), ((x10_int) (count)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
        
        //#line 407 "x10/util/Team.x10"
        if (!(success)) {
            
            //#line 408 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team_Strings::sl__160803), (*this)->FMGL(id)), (&::x10::util::Team_Strings::sl__160804)))));
        }
        
    } else {
        
        //#line 411 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ::x10::util::Team__LocalTeamState::FMGL(COLL_BROADCAST__get)(),
          root, src, src_off, dst, dst_off, count, ((x10_int)0),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_bcast_2914
#ifndef X10_UTIL_TEAM_H_nativeBcast_2916
#define X10_UTIL_TEAM_H_nativeBcast_2916
template<class TPMGL(T)> x10_boolean x10::util::Team::nativeBcast(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count){
    return x10rt_bcast(id, role, root, &(src)->raw[src_off], &(dst)->raw[dst_off], sizeof(TPMGL(T)), count, ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeBcast_2916
#ifndef X10_UTIL_TEAM_H_alltoall_2917
#define X10_UTIL_TEAM_H_alltoall_2917
template<class TPMGL(T)> void x10::util::Team::alltoall(::x10::lang::Rail< TPMGL(T) >* src,
                                                        x10_long src_off,
                                                        ::x10::lang::Rail< TPMGL(T) >* dst,
                                                        x10_long dst_off,
                                                        x10_long count) {
    
    //#line 436 "x10/util/Team.x10"
    if (BOUNDS_CHECK_BOOL) {
        
        //#line 437 "x10/util/Team.x10"
        x10_long numElems = ((count) * ((*this)->x10::util::Team::size()));
        
        //#line 438 "x10/util/Team.x10"
        ::x10::util::Team::checkBounds(((((src_off) + (numElems))) - (((x10_long)1ll))),
                                       (x10_long)(::x10aux::nullCheck(src)->FMGL(size)));
        
        //#line 439 "x10/util/Team.x10"
        ::x10::util::Team::checkBounds(((((dst_off) + (numElems))) - (((x10_long)1ll))),
                                       (x10_long)(::x10aux::nullCheck(dst)->FMGL(size)));
    }
    
    //#line 441 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES__get)())))
    {
        
        //#line 442 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUG__get)()) {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team_Strings::sl__160806)), (*this)->FMGL(id))))->c_str());
        }
        {
            
            //#line 443 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__143016 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::util::Team::template nativeAlltoall< TPMGL(T) >(
                      (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                  ((x10_int)0)))
                        ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
                        : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                             ((x10_long)((*this)->FMGL(id))))),
                      src, ((x10_int) (src_off)), dst, ((x10_int) (dst_off)),
                      ((x10_int) (count)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2918) {
                {
                    ::x10::lang::CheckedThrowable* ct__143014 =
                      __exc2918;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__143014);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__143016);
        }
    } else {
        
        //#line 445 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUG__get)()) {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team_Strings::sl__160807)), (*this)->FMGL(id))))->c_str());
        }
        
        //#line 446 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 447 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUG__get)()) {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team_Strings::sl__160806)), (*this)->FMGL(id))))->c_str());
        }
        
        //#line 448 "x10/util/Team.x10"
        ::x10::util::Team::template nativeAlltoall< TPMGL(T) >(
          (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                      ((x10_int)0)))
            ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
            : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                 ((x10_long)((*this)->FMGL(id))))), src, ((x10_int) (src_off)),
          dst, ((x10_int) (dst_off)), ((x10_int) (count)));
    }
    
    //#line 457 "x10/util/Team.x10"
    if (::x10::util::Team::FMGL(DEBUG__get)()) {
        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team_Strings::sl__160808)), (*this)->FMGL(id))))->c_str());
    }
    
}
#endif // X10_UTIL_TEAM_H_alltoall_2917
#ifndef X10_UTIL_TEAM_H_nativeAlltoall_2919
#define X10_UTIL_TEAM_H_nativeAlltoall_2919
template<class TPMGL(T)> void x10::util::Team::nativeAlltoall(
  x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count) {
    x10rt_alltoall(id, role, &src->raw[src_off], &dst->raw[dst_off], sizeof(TPMGL(T)), count, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeAlltoall_2919
inline x10_int x10::util::Team::FMGL(ADD__get)() {
    return x10::util::Team::FMGL(ADD);
}

inline x10_int x10::util::Team::FMGL(MUL__get)() {
    return x10::util::Team::FMGL(MUL);
}

inline x10_int x10::util::Team::FMGL(AND__get)() {
    return x10::util::Team::FMGL(AND);
}

inline x10_int x10::util::Team::FMGL(OR__get)() {
    return x10::util::Team::FMGL(OR);
}

inline x10_int x10::util::Team::FMGL(XOR__get)() {
    return x10::util::Team::FMGL(XOR);
}

inline x10_int x10::util::Team::FMGL(MAX__get)() {
    return x10::util::Team::FMGL(MAX);
}

inline x10_int x10::util::Team::FMGL(MIN__get)() {
    return x10::util::Team::FMGL(MIN);
}

#ifndef X10_UTIL_TEAM_H_reduce_2920
#define X10_UTIL_TEAM_H_reduce_2920
template<class TPMGL(T)> void x10::util::Team::reduce(::x10::lang::Place root,
                                                      ::x10::lang::Rail< TPMGL(T) >* src,
                                                      x10_long src_off,
                                                      ::x10::lang::Rail< TPMGL(T) >* dst,
                                                      x10_long dst_off,
                                                      x10_long count,
                                                      x10_int op) {
    
    //#line 502 "x10/util/Team.x10"
    ::x10::util::Team::checkBounds(((((src_off) + (count))) - (((x10_long)1ll))),
                                   (x10_long)(::x10aux::nullCheck(src)->FMGL(size)));
    
    //#line 503 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                 root))) {
        ::x10::util::Team::checkBounds(((((dst_off) + (count))) - (((x10_long)1ll))),
                                       (x10_long)(::x10aux::nullCheck(dst)->FMGL(size)));
    }
    
    //#line 504 "x10/util/Team.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                          ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
      ::x10::util::Team__LocalTeamState::FMGL(COLL_REDUCE__get)(),
      root, src, src_off, dst, dst_off, count, op, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
      ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
#endif // X10_UTIL_TEAM_H_reduce_2920
#ifndef X10_UTIL_TEAM_H_reduce_builtin_2932
#define X10_UTIL_TEAM_H_reduce_builtin_2932
template<class TPMGL(T)> void x10::util::Team::reduce_builtin(
  ::x10::lang::Place root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_long dst_off,
  x10_long count, x10_int op) {
    
    //#line 549 "x10/util/Team.x10"
    ::x10::util::Team::checkBounds(((((src_off) + (count))) - (((x10_long)1ll))),
                                   (x10_long)(::x10aux::nullCheck(src)->FMGL(size)));
    
    //#line 550 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                 root))) {
        ::x10::util::Team::checkBounds(((((dst_off) + (count))) - (((x10_long)1ll))),
                                       (x10_long)(::x10aux::nullCheck(dst)->FMGL(size)));
    }
    
    //#line 551 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES__get)())))
    {
        {
            
            //#line 552 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__143020 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::util::Team::template nativeReduce< TPMGL(T) >(
                      (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                  ((x10_int)0)))
                        ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
                        : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                             ((x10_long)((*this)->FMGL(id))))),
                      ((x10_int) (root->x10::lang::Place::id())),
                      src, ((x10_int) (src_off)), dst, ((x10_int) (dst_off)),
                      ((x10_int) (count)), op);
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2933) {
                {
                    ::x10::lang::CheckedThrowable* ct__143018 =
                      __exc2933;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__143018);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__143020);
        }
    } else 
    //#line 553 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ::x10::util::Team::FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES__get)())) ||
        (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_NONBLOCKINGBARRIER__get)()))))
    {
        
        //#line 554 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUG__get)()) {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team_Strings::sl__160809)), (*this)->FMGL(id))))->c_str());
        }
        
        //#line 555 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 556 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUG__get)()) {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team_Strings::sl__160810)), (*this)->FMGL(id))))->c_str());
        }
        
        //#line 557 "x10/util/Team.x10"
        ::x10::util::Team::template nativeReduce< TPMGL(T) >(
          (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                      ((x10_int)0)))
            ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
            : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                 ((x10_long)((*this)->FMGL(id))))), ((x10_int) (root->x10::lang::Place::id())),
          src, ((x10_int) (src_off)), dst, ((x10_int) (dst_off)),
          ((x10_int) (count)), op);
        
        //#line 558 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUG__get)()) {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team_Strings::sl__160811)), (*this)->FMGL(id))))->c_str());
        }
        
    } else {
        
        //#line 560 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ::x10::util::Team__LocalTeamState::FMGL(COLL_REDUCE__get)(),
          root, src, src_off, dst, dst_off, count, op, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_reduce_builtin_2932
#ifndef X10_UTIL_TEAM_H_nativeReduce_2934
#define X10_UTIL_TEAM_H_nativeReduce_2934
template<class TPMGL(T)> void x10::util::Team::nativeReduce(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count, x10_int op) {
    x10rt_reduce(id, role, root, &src->raw[src_off], &dst->raw[dst_off], (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), count, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeReduce_2934
#ifndef X10_UTIL_TEAM_H_reduce_2946
#define X10_UTIL_TEAM_H_reduce_2946
template<class TPMGL(T)> TPMGL(T) x10::util::Team::reduce(
  ::x10::lang::Place root, TPMGL(T) src, x10_int op) {
    
    //#line 648 "x10/util/Team.x10"
    ::x10::lang::Rail< TPMGL(T) >* chk = ::x10::lang::Rail< TPMGL(T) >::_make(((x10_long)1ll),
                                                                              src);
    
    //#line 649 "x10/util/Team.x10"
    ::x10::lang::Rail< TPMGL(T) >* dst = ::x10::lang::Rail< TPMGL(T) >::_make(((x10_long)1ll),
                                                                              src);
    
    //#line 650 "x10/util/Team.x10"
    (*this)->template reduce< TPMGL(T) >(root, chk, ((x10_long)0ll),
                                         dst, ((x10_long)0ll),
                                         ((x10_long)1ll),
                                         op);
    
    //#line 651 "x10/util/Team.x10"
    return dst->x10::lang::template Rail< TPMGL(T) >::__apply(
             ((x10_long)0ll));
    
}
#endif // X10_UTIL_TEAM_H_reduce_2946
#ifndef X10_UTIL_TEAM_H_nativeReduce_2947
#define X10_UTIL_TEAM_H_nativeReduce_2947
template<class TPMGL(T)> void x10::util::Team::nativeReduce(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  ::x10::lang::Rail< TPMGL(T) >* dst, x10_int op) {
    x10rt_reduce(id, role, root, src->raw, dst->raw, (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), 1, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeReduce_2947
#ifndef X10_UTIL_TEAM_H_allreduce_2948
#define X10_UTIL_TEAM_H_allreduce_2948
template<class TPMGL(T)> void x10::util::Team::allreduce(
  ::x10::lang::Rail< TPMGL(T) >* src, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_long dst_off, x10_long count, x10_int op) {
    
    //#line 675 "x10/util/Team.x10"
    ::x10::util::Team::checkBounds(((((src_off) + (count))) - (((x10_long)1ll))),
                                   (x10_long)(::x10aux::nullCheck(src)->FMGL(size)));
    
    //#line 676 "x10/util/Team.x10"
    ::x10::util::Team::checkBounds(((((dst_off) + (count))) - (((x10_long)1ll))),
                                   (x10_long)(::x10aux::nullCheck(dst)->FMGL(size)));
    
    //#line 677 "x10/util/Team.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                          ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
      ::x10::util::Team__LocalTeamState::FMGL(COLL_ALLREDUCE__get)(),
      ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                ((x10_long)((*this)->FMGL(id)))))->FMGL(places))->__apply(
        ((x10_long)0ll)), src, src_off, dst, dst_off, count,
      op, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
      ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
#endif // X10_UTIL_TEAM_H_allreduce_2948
#ifndef X10_UTIL_TEAM_H_allreduce_builtin_2960
#define X10_UTIL_TEAM_H_allreduce_builtin_2960
template<class TPMGL(T)> void x10::util::Team::allreduce_builtin(
  ::x10::lang::Rail< TPMGL(T) >* src, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_long dst_off, x10_long count, x10_int op) {
    
    //#line 722 "x10/util/Team.x10"
    ::x10::util::Team::checkBounds(((((src_off) + (count))) - (((x10_long)1ll))),
                                   (x10_long)(::x10aux::nullCheck(src)->FMGL(size)));
    
    //#line 723 "x10/util/Team.x10"
    ::x10::util::Team::checkBounds(((((dst_off) + (count))) - (((x10_long)1ll))),
                                   (x10_long)(::x10aux::nullCheck(dst)->FMGL(size)));
    
    //#line 724 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES__get)())))
    {
        
        //#line 725 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUG__get)()) {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team_Strings::sl__160812)), (*this)->FMGL(id))))->c_str());
        }
        {
            
            //#line 726 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__143024 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10rt_allreduce((*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                                ((x10_int)0)))
                      ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
                      : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                           ((x10_long)((*this)->FMGL(id))))), &(src)->raw[((x10_int) (src_off))], &(dst)->raw[((x10_int) (dst_off))], (x10rt_red_op_type)(op), x10rt_get_red_type<TPMGL(T)>(), ((x10_int) (count)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler,::x10aux::coll_enter());
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2961) {
                {
                    ::x10::lang::CheckedThrowable* ct__143022 =
                      __exc2961;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__143022);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__143024);
        }
    } else 
    //#line 727 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ::x10::util::Team::FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES__get)())) ||
        (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ::x10::util::Team::FMGL(X10RT_COLL_NONBLOCKINGBARRIER__get)()))))
    {
        
        //#line 728 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUG__get)()) {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team_Strings::sl__160813)), (*this)->FMGL(id))))->c_str());
        }
        
        //#line 729 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 730 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUG__get)()) {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team_Strings::sl__160812)), (*this)->FMGL(id))))->c_str());
        }
        
        //#line 731 "x10/util/Team.x10"
        x10_boolean success = x10rt_allreduce((*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                                          ((x10_int)0)))
          ? (((x10_int) (::x10::lang::Place::_make(::x10aux::here)->x10::lang::Place::id())))
          : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
               ((x10_long)((*this)->FMGL(id))))), &(src)->raw[((x10_int) (src_off))], &(dst)->raw[((x10_int) (dst_off))], (x10rt_red_op_type)(op), x10rt_get_red_type<TPMGL(T)>(), ((x10_int) (count)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler,::x10aux::coll_enter());
        
        //#line 732 "x10/util/Team.x10"
        if (!(success)) {
            
            //#line 733 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team_Strings::sl__160803), (*this)->FMGL(id)), (&::x10::util::Team_Strings::sl__160804)))));
        }
        
    } else {
        
        //#line 735 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUG__get)()) {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team_Strings::sl__160814)), (*this)->FMGL(id))))->c_str());
        }
        
        //#line 736 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ::x10::util::Team__LocalTeamState::FMGL(COLL_ALLREDUCE__get)(),
          ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                    ((x10_long)((*this)->FMGL(id)))))->FMGL(places))->__apply(
            ((x10_long)0ll)), src, src_off, dst, dst_off,
          count, op, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
    //#line 738 "x10/util/Team.x10"
    if (::x10::util::Team::FMGL(DEBUG__get)()) {
        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team_Strings::sl__160815)), (*this)->FMGL(id))))->c_str());
    }
    
}
#endif // X10_UTIL_TEAM_H_allreduce_builtin_2960
#ifndef X10_UTIL_TEAM_H_nativeAllreduce_2962
#define X10_UTIL_TEAM_H_nativeAllreduce_2962
template<class TPMGL(T)> x10_boolean x10::util::Team::nativeAllreduce(
  x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count, x10_int op){
    return x10rt_allreduce(id, role, &(src)->raw[src_off], &(dst)->raw[dst_off], (x10rt_red_op_type)(op), x10rt_get_red_type<TPMGL(T)>(), count, ::x10aux::failed_coll_handler, ::x10aux::coll_handler,::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeAllreduce_2962
#ifndef X10_UTIL_TEAM_H_allreduce_2974
#define X10_UTIL_TEAM_H_allreduce_2974
template<class TPMGL(T)> TPMGL(T) x10::util::Team::allreduce(
  TPMGL(T) src, x10_int op) {
    
    //#line 824 "x10/util/Team.x10"
    ::x10::lang::Rail< TPMGL(T) >* chk = ::x10::lang::Rail< TPMGL(T) >::_make(((x10_long)1ll),
                                                                              src);
    
    //#line 825 "x10/util/Team.x10"
    ::x10::lang::Rail< TPMGL(T) >* dst = ::x10::lang::Rail< TPMGL(T) >::_make(((x10_long)1ll),
                                                                              src);
    
    //#line 826 "x10/util/Team.x10"
    (*this)->template allreduce< TPMGL(T) >(chk, ((x10_long)0ll),
                                            dst, ((x10_long)0ll),
                                            ((x10_long)1ll),
                                            op);
    
    //#line 827 "x10/util/Team.x10"
    return dst->x10::lang::template Rail< TPMGL(T) >::__apply(
             ((x10_long)0ll));
    
}
#endif // X10_UTIL_TEAM_H_allreduce_2974
#ifndef X10_UTIL_TEAM_H_nativeAllreduce_2975
#define X10_UTIL_TEAM_H_nativeAllreduce_2975
template<class TPMGL(T)> void x10::util::Team::nativeAllreduce(
  x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
  ::x10::lang::Rail< TPMGL(T) >* dst, x10_int op) {
    x10rt_allreduce(id, role, src->raw, dst->raw, (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), 1, ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeAllreduce_2975
#endif // X10_UTIL_TEAM_H_GENERICS
#endif // __X10_UTIL_TEAM_H_NODEPS
