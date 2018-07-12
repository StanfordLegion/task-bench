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
template<class TPMGL(T)> class Rail;
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
namespace x10 { namespace lang { 
class Unsafe;
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
    static ::x10::lang::String sl__171275;
    static ::x10::lang::String sl__171268;
    static ::x10::lang::String sl__171286;
    static ::x10::lang::String sl__171280;
    static ::x10::lang::String sl__171264;
    static ::x10::lang::String sl__171276;
    static ::x10::lang::String sl__171273;
    static ::x10::lang::String sl__171284;
    static ::x10::lang::String sl__171265;
    static ::x10::lang::String sl__171266;
    static ::x10::lang::String sl__171274;
    static ::x10::lang::String sl__171283;
    static ::x10::lang::String sl__171282;
    static ::x10::lang::String sl__171271;
    static ::x10::lang::String sl__171267;
    static ::x10::lang::String sl__171278;
    static ::x10::lang::String sl__171287;
    static ::x10::lang::String sl__171262;
    static ::x10::lang::String sl__171269;
    static ::x10::lang::String sl__171270;
    static ::x10::lang::String sl__171272;
    static ::x10::lang::String sl__171263;
    static ::x10::lang::String sl__171281;
    static ::x10::lang::String sl__171277;
    static ::x10::lang::String sl__171285;
    static ::x10::lang::String sl__171279;
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
            return ((x10_int)0);
            
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
#include <x10/lang/Rail.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Finalization.h>
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
#include <x10/lang/Unsafe.h>
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

#ifndef X10_UTIL_TEAM_H_scatter_2934
#define X10_UTIL_TEAM_H_scatter_2934
template<class TPMGL(T)> void x10::util::Team::scatter(::x10::lang::Place root,
                                                       ::x10::lang::Rail< TPMGL(T) >* src,
                                                       x10_long src_off,
                                                       ::x10::lang::Rail< TPMGL(T) >* dst,
                                                       x10_long dst_off,
                                                       x10_long count) {
    
    //#line 250 "x10/util/Team.x10"
    if ((true && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                          root)))) {
        x10_long index__153595 = ((((src_off) + ((((*this)->x10::util::Team::size()) * (count))))) - (((x10_long)1ll)));
        x10_long size__153596 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153595) < (((x10_long)0ll))) ||
                      ((index__153595) >= (size__153596))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153595,
                                                size__153596);
        }
        
    }
    
    //#line 251 "x10/util/Team.x10"
    x10_long index__153597 = ((((dst_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153598 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153597) < (((x10_long)0ll))) ||
                  ((index__153597) >= (size__153598))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153597,
                                            size__153598);
    }
    
    //#line 252 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 253 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153721 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::util::Team::template nativeScatter< TPMGL(T) >(
                      (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                  ((x10_int)0)))
                        ? (((x10_int) ((__extension__ ({
                               ::x10::lang::Place this__153282 =
                                 ::x10::lang::Place::_make(::x10aux::here);
                               this__153282->FMGL(id);
                           }))
                           ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                                    ((x10_long)((*this)->FMGL(id))))),
                      ((x10_int) (root->FMGL(id))), src, ((x10_int) (src_off)),
                      dst, ((x10_int) (dst_off)), ((x10_int) (count)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2935) {
                {
                    ::x10::lang::CheckedThrowable* ct__153719 =
                      __exc2935;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153719);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153721);
        }
    } else 
    //#line 254 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 255 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 256 "x10/util/Team.x10"
        ::x10::util::Team::template nativeScatter< TPMGL(T) >(
          (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                      ((x10_int)0)))
            ? (((x10_int) ((__extension__ ({
                   ::x10::lang::Place this__153285 = ::x10::lang::Place::_make(::x10aux::here);
                   this__153285->FMGL(id);
               }))
               ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                        ((x10_long)((*this)->FMGL(id))))),
          ((x10_int) (root->FMGL(id))), src, ((x10_int) (src_off)),
          dst, ((x10_int) (dst_off)), ((x10_int) (count)));
    } else {
        
        //#line 259 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)2), root, src, src_off, dst, dst_off,
          count, ((x10_int)0), ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_scatter_2934
#ifndef X10_UTIL_TEAM_H_nativeScatter_2936
#define X10_UTIL_TEAM_H_nativeScatter_2936
template<class TPMGL(T)> void x10::util::Team::nativeScatter(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count) {
    x10rt_scatter(id, role, root, &src->raw[src_off], &dst->raw[dst_off], sizeof(TPMGL(T)), count, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeScatter_2936
#ifndef X10_UTIL_TEAM_H_scatterv_2937
#define X10_UTIL_TEAM_H_scatterv_2937
template<class TPMGL(T)> void x10::util::Team::scatterv(::x10::lang::Place root,
                                                        ::x10::lang::Rail< TPMGL(T) >* src,
                                                        x10_long src_off,
                                                        ::x10::lang::Rail< TPMGL(T) >* dst,
                                                        x10_long dst_off,
                                                        ::x10::lang::Rail< x10_int >* scounts) {
    
    //#line 288 "x10/util/Team.x10"
    if ((true && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                          root)))) {
        
        //#line 289 "x10/util/Team.x10"
        x10_int scounts_sum = (__extension__ ({
            
            //#line 132 "x10/util/RailUtils.x10"
            x10_int accum__153291 = ((x10_int)0);
            
            //#line 133 "x10/util/RailUtils.x10"
            x10_long i__96508max__153602 = (x10_long)(::x10aux::nullCheck(scounts)->FMGL(size));
            {
                x10_long i__153603;
                for (i__153603 = ((x10_long)0ll); ((i__153603) < (i__96508max__153602));
                     i__153603 = ((i__153603) + (((x10_long)1ll))))
                {
                    
                    //#line 134 "x10/util/RailUtils.x10"
                    accum__153291 = (__extension__ ({
                        x10_int b__153600 = ::x10aux::nullCheck(scounts)->x10::lang::template Rail< x10_int >::__apply(
                                              i__153603);
                        ((accum__153291) + (b__153600));
                    }))
                    ;
                }
            }
            accum__153291;
        }))
        ;
        
        //#line 290 "x10/util/Team.x10"
        x10_long index__153605 = ((((src_off) + (((x10_long)(scounts_sum))))) - (((x10_long)1ll)));
        x10_long size__153606 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153605) < (((x10_long)0ll))) ||
                      ((index__153605) >= (size__153606))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153605,
                                                size__153606);
        }
        
    }
    
    //#line 292 "x10/util/Team.x10"
    x10_int my_role = (((*this)->FMGL(collectiveSupportLevel)) > (((x10_int)0)))
      ? ((::x10aux::struct_equals((*this)->FMGL(id), ((x10_int)0)))
           ? (((x10_int) ((__extension__ ({
                  ::x10::lang::Place this__153304 = ::x10::lang::Place::_make(::x10aux::here);
                  this__153304->FMGL(id);
              }))
              ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                       ((x10_long)((*this)->FMGL(id))))))
      : (((x10_int) (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                           ((x10_long)((*this)->FMGL(id)))))->FMGL(myIndex))));
    
    //#line 293 "x10/util/Team.x10"
    x10_int dst_count = ::x10aux::nullCheck(scounts)->x10::lang::template Rail< x10_int >::__apply(
                          ((x10_long)(my_role)));
    
    //#line 294 "x10/util/Team.x10"
    x10_long index__153617 = ((((dst_off) + (((x10_long)(dst_count))))) - (((x10_long)1ll)));
    x10_long size__153618 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153617) < (((x10_long)0ll))) ||
                  ((index__153617) >= (size__153618))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153617,
                                            size__153618);
    }
    
    //#line 296 "x10/util/Team.x10"
    ::x10::lang::Rail< x10_int >* soffsets = (((*this)->FMGL(collectiveSupportLevel)) > (((x10_int)0)))
      ? ((__extension__ ({
             
             //#line 297 "x10/util/Team.x10"
             x10_int unit__153311 = ((x10_int) (src_off));
             
             //#line 284 "x10/util/RailUtils.x10"
             ::x10::lang::Rail< x10_int >* dst__153312 = ::x10::lang::Rail< x10_int >::_makeUnsafe((x10_long)(::x10aux::nullCheck(scounts)->FMGL(size)), false);
             (__extension__ ({
                 
                 //#line 263 "x10/util/RailUtils.x10"
                 #ifndef NO_ASSERTIONS
                 if (::x10aux::x10__assertions_enabled)
                     ::x10aux::x10__assert((((x10_long)(::x10aux::nullCheck(scounts)->FMGL(size))) <= ((x10_long)(::x10aux::nullCheck(dst__153312)->FMGL(size)))));
                 #endif//NO_ASSERTIONS
                 
                 //#line 264 "x10/util/RailUtils.x10"
                 x10_int accum__153318 = unit__153311;
                 
                 //#line 265 "x10/util/RailUtils.x10"
                 dst__153312->x10::lang::template Rail< x10_int >::__set(
                   ((x10_long)0ll), unit__153311);
                 
                 //#line 266 "x10/util/RailUtils.x10"
                 x10_long i__96602max__153609 = (((x10_long)(::x10aux::nullCheck(scounts)->FMGL(size))) - (((x10_long)1ll)));
                 {
                     x10_long i__153610;
                     for (i__153610 = ((x10_long)1ll); ((i__153610) <= (i__96602max__153609));
                          i__153610 = ((i__153610) + (((x10_long)1ll))))
                     {
                         
                         //#line 267 "x10/util/RailUtils.x10"
                         accum__153318 = (__extension__ ({
                             x10_int y__153608 = ::x10aux::nullCheck(scounts)->x10::lang::template Rail< x10_int >::__apply(
                                                   ((i__153610) - (((x10_long)1ll))));
                             ((accum__153318) + (y__153608));
                         }))
                         ;
                         
                         //#line 268 "x10/util/RailUtils.x10"
                         dst__153312->x10::lang::template Rail< x10_int >::__set(
                           i__153610, accum__153318);
                     }
                 }
                 dst__153312;
             }))
             ;
         }))
         ) : ((__extension__ ({
                  
                  //#line 284 "x10/util/RailUtils.x10"
                  ::x10::lang::Rail< x10_int >* dst__153330 =
                    ::x10::lang::Rail< x10_int >::_makeUnsafe((x10_long)(::x10aux::nullCheck(scounts)->FMGL(size)), false);
                  (__extension__ ({
                      
                      //#line 263 "x10/util/RailUtils.x10"
                      #ifndef NO_ASSERTIONS
                      if (::x10aux::x10__assertions_enabled)
                          ::x10aux::x10__assert((((x10_long)(::x10aux::nullCheck(scounts)->FMGL(size))) <= ((x10_long)(::x10aux::nullCheck(dst__153330)->FMGL(size)))));
                      #endif//NO_ASSERTIONS
                      
                      //#line 264 "x10/util/RailUtils.x10"
                      x10_int accum__153336 = ((x10_int)0);
                      
                      //#line 265 "x10/util/RailUtils.x10"
                      dst__153330->x10::lang::template Rail< x10_int >::__set(
                        ((x10_long)0ll), accum__153336);
                      
                      //#line 266 "x10/util/RailUtils.x10"
                      x10_long i__96602max__153614 = (((x10_long)(::x10aux::nullCheck(scounts)->FMGL(size))) - (((x10_long)1ll)));
                      {
                          x10_long i__153615;
                          for (i__153615 = ((x10_long)1ll);
                               ((i__153615) <= (i__96602max__153614));
                               i__153615 = ((i__153615) + (((x10_long)1ll))))
                          {
                              
                              //#line 267 "x10/util/RailUtils.x10"
                              accum__153336 = (__extension__ ({
                                  x10_int y__153613 = ::x10aux::nullCheck(scounts)->x10::lang::template Rail< x10_int >::__apply(
                                                        ((i__153615) - (((x10_long)1ll))));
                                  ((accum__153336) + (y__153613));
                              }))
                              ;
                              
                              //#line 268 "x10/util/RailUtils.x10"
                              dst__153330->x10::lang::template Rail< x10_int >::__set(
                                i__153615, accum__153336);
                          }
                      }
                      dst__153330;
                  }))
                  ;
              }))
              );
    
    //#line 300 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 301 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153725 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10rt_scatterv((*this)->FMGL(id), my_role, ((x10_int) (root->FMGL(id))), src->raw, soffsets->raw, scounts->raw, &(dst)->raw[((x10_int) (dst_off))], scounts->raw[my_role], sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2938) {
                {
                    ::x10::lang::CheckedThrowable* ct__153723 =
                      __exc2938;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153723);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153725);
        }
    } else 
    //#line 302 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 303 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 304 "x10/util/Team.x10"
        x10_boolean success = x10rt_scatterv((*this)->FMGL(id), my_role, ((x10_int) (root->FMGL(id))), src->raw, soffsets->raw, scounts->raw, &(dst)->raw[((x10_int) (dst_off))], scounts->raw[my_role], sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
        
        //#line 305 "x10/util/Team.x10"
        if (!(success)) {
            
            //#line 306 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team_Strings::sl__171270), (*this)->FMGL(id)), (&::x10::util::Team_Strings::sl__171271)))));
        }
        
    } else {
        
        //#line 309 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)3), root, src, src_off, dst, dst_off,
          ((x10_long)(((x10_int)0))), ((x10_int)0), soffsets,
          scounts);
    }
    
}
#endif // X10_UTIL_TEAM_H_scatterv_2937
#ifndef X10_UTIL_TEAM_H_nativeScatterv_2939
#define X10_UTIL_TEAM_H_nativeScatterv_2939
template<class TPMGL(T)> x10_boolean x10::util::Team::nativeScatterv(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< x10_int >* scounts,
  ::x10::lang::Rail< x10_int >* soffsets, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_int dst_off){
    return x10rt_scatterv(id, role, root, src->raw, soffsets->raw, scounts->raw, &(dst)->raw[dst_off], scounts->raw[role], sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeScatterv_2939
#ifndef X10_UTIL_TEAM_H_gather_2940
#define X10_UTIL_TEAM_H_gather_2940
template<class TPMGL(T)> void x10::util::Team::gather(::x10::lang::Place root,
                                                      ::x10::lang::Rail< TPMGL(T) >* src,
                                                      x10_long src_off,
                                                      ::x10::lang::Rail< TPMGL(T) >* dst,
                                                      x10_long dst_off,
                                                      x10_long count) {
    
    //#line 321 "x10/util/Team.x10"
    if ((true && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                          root)))) {
        x10_long index__153619 = ((((dst_off) + ((((*this)->x10::util::Team::size()) * (count))))) - (((x10_long)1ll)));
        x10_long size__153620 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153619) < (((x10_long)0ll))) ||
                      ((index__153619) >= (size__153620))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153619,
                                                size__153620);
        }
        
    }
    
    //#line 322 "x10/util/Team.x10"
    x10_long index__153621 = ((((src_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153622 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153621) < (((x10_long)0ll))) ||
                  ((index__153621) >= (size__153622))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153621,
                                            size__153622);
    }
    
    //#line 323 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 324 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153729 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::util::Team::template nativeGather< TPMGL(T) >(
                      (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                  ((x10_int)0)))
                        ? (((x10_int) ((__extension__ ({
                               ::x10::lang::Place this__153353 =
                                 ::x10::lang::Place::_make(::x10aux::here);
                               this__153353->FMGL(id);
                           }))
                           ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                                    ((x10_long)((*this)->FMGL(id))))),
                      ((x10_int) (root->FMGL(id))), src, ((x10_int) (src_off)),
                      dst, ((x10_int) (dst_off)), ((x10_int) (count)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2941) {
                {
                    ::x10::lang::CheckedThrowable* ct__153727 =
                      __exc2941;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153727);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153729);
        }
    } else 
    //#line 325 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 326 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 327 "x10/util/Team.x10"
        ::x10::util::Team::template nativeGather< TPMGL(T) >(
          (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                      ((x10_int)0)))
            ? (((x10_int) ((__extension__ ({
                   ::x10::lang::Place this__153356 = ::x10::lang::Place::_make(::x10aux::here);
                   this__153356->FMGL(id);
               }))
               ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                        ((x10_long)((*this)->FMGL(id))))),
          ((x10_int) (root->FMGL(id))), src, ((x10_int) (src_off)),
          dst, ((x10_int) (dst_off)), ((x10_int) (count)));
    } else {
        
        //#line 330 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)9), root, src, src_off, dst, dst_off,
          count, ((x10_int)0), ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_gather_2940
#ifndef X10_UTIL_TEAM_H_nativeGather_2942
#define X10_UTIL_TEAM_H_nativeGather_2942
template<class TPMGL(T)> void x10::util::Team::nativeGather(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count) {
    x10rt_gather(id, role, root, &src->raw[src_off], &dst->raw[dst_off], sizeof(TPMGL(T)), count, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeGather_2942
#ifndef X10_UTIL_TEAM_H_gatherv_2943
#define X10_UTIL_TEAM_H_gatherv_2943
template<class TPMGL(T)> void x10::util::Team::gatherv(::x10::lang::Place root,
                                                       ::x10::lang::Rail< TPMGL(T) >* src,
                                                       x10_long src_off,
                                                       ::x10::lang::Rail< TPMGL(T) >* dst,
                                                       x10_long dst_off,
                                                       ::x10::lang::Rail< x10_int >* dcounts) {
    
    //#line 355 "x10/util/Team.x10"
    if ((true && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                          root)))) {
        
        //#line 356 "x10/util/Team.x10"
        x10_int dcounts_sum = (__extension__ ({
            
            //#line 132 "x10/util/RailUtils.x10"
            x10_int accum__153362 = ((x10_int)0);
            
            //#line 133 "x10/util/RailUtils.x10"
            x10_long i__96508max__153626 = (x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size));
            {
                x10_long i__153627;
                for (i__153627 = ((x10_long)0ll); ((i__153627) < (i__96508max__153626));
                     i__153627 = ((i__153627) + (((x10_long)1ll))))
                {
                    
                    //#line 134 "x10/util/RailUtils.x10"
                    accum__153362 = (__extension__ ({
                        x10_int b__153624 = ::x10aux::nullCheck(dcounts)->x10::lang::template Rail< x10_int >::__apply(
                                              i__153627);
                        ((accum__153362) + (b__153624));
                    }))
                    ;
                }
            }
            accum__153362;
        }))
        ;
        
        //#line 357 "x10/util/Team.x10"
        x10_long index__153629 = ((((dst_off) + (((x10_long)(dcounts_sum))))) - (((x10_long)1ll)));
        x10_long size__153630 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153629) < (((x10_long)0ll))) ||
                      ((index__153629) >= (size__153630))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153629,
                                                size__153630);
        }
        
    }
    
    //#line 359 "x10/util/Team.x10"
    x10_int my_role = (((*this)->FMGL(collectiveSupportLevel)) > (((x10_int)0)))
      ? ((::x10aux::struct_equals((*this)->FMGL(id), ((x10_int)0)))
           ? (((x10_int) ((__extension__ ({
                  ::x10::lang::Place this__153375 = ::x10::lang::Place::_make(::x10aux::here);
                  this__153375->FMGL(id);
              }))
              ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                       ((x10_long)((*this)->FMGL(id))))))
      : (((x10_int) (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                           ((x10_long)((*this)->FMGL(id)))))->FMGL(myIndex))));
    
    //#line 360 "x10/util/Team.x10"
    x10_int src_count = ::x10aux::nullCheck(dcounts)->x10::lang::template Rail< x10_int >::__apply(
                          ((x10_long)(my_role)));
    
    //#line 361 "x10/util/Team.x10"
    x10_long index__153641 = ((((src_off) + (((x10_long)(src_count))))) - (((x10_long)1ll)));
    x10_long size__153642 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153641) < (((x10_long)0ll))) ||
                  ((index__153641) >= (size__153642))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153641,
                                            size__153642);
    }
    
    //#line 363 "x10/util/Team.x10"
    ::x10::lang::Rail< x10_int >* doffsets = (((*this)->FMGL(collectiveSupportLevel)) > (((x10_int)0)))
      ? ((__extension__ ({
             
             //#line 364 "x10/util/Team.x10"
             x10_int unit__153382 = ((x10_int) (dst_off));
             
             //#line 284 "x10/util/RailUtils.x10"
             ::x10::lang::Rail< x10_int >* dst__153383 = ::x10::lang::Rail< x10_int >::_makeUnsafe((x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size)), false);
             (__extension__ ({
                 
                 //#line 263 "x10/util/RailUtils.x10"
                 #ifndef NO_ASSERTIONS
                 if (::x10aux::x10__assertions_enabled)
                     ::x10aux::x10__assert((((x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size))) <= ((x10_long)(::x10aux::nullCheck(dst__153383)->FMGL(size)))));
                 #endif//NO_ASSERTIONS
                 
                 //#line 264 "x10/util/RailUtils.x10"
                 x10_int accum__153389 = unit__153382;
                 
                 //#line 265 "x10/util/RailUtils.x10"
                 dst__153383->x10::lang::template Rail< x10_int >::__set(
                   ((x10_long)0ll), unit__153382);
                 
                 //#line 266 "x10/util/RailUtils.x10"
                 x10_long i__96602max__153633 = (((x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size))) - (((x10_long)1ll)));
                 {
                     x10_long i__153634;
                     for (i__153634 = ((x10_long)1ll); ((i__153634) <= (i__96602max__153633));
                          i__153634 = ((i__153634) + (((x10_long)1ll))))
                     {
                         
                         //#line 267 "x10/util/RailUtils.x10"
                         accum__153389 = (__extension__ ({
                             x10_int y__153632 = ::x10aux::nullCheck(dcounts)->x10::lang::template Rail< x10_int >::__apply(
                                                   ((i__153634) - (((x10_long)1ll))));
                             ((accum__153389) + (y__153632));
                         }))
                         ;
                         
                         //#line 268 "x10/util/RailUtils.x10"
                         dst__153383->x10::lang::template Rail< x10_int >::__set(
                           i__153634, accum__153389);
                     }
                 }
                 dst__153383;
             }))
             ;
         }))
         ) : ((__extension__ ({
                  
                  //#line 284 "x10/util/RailUtils.x10"
                  ::x10::lang::Rail< x10_int >* dst__153401 =
                    ::x10::lang::Rail< x10_int >::_makeUnsafe((x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size)), false);
                  (__extension__ ({
                      
                      //#line 263 "x10/util/RailUtils.x10"
                      #ifndef NO_ASSERTIONS
                      if (::x10aux::x10__assertions_enabled)
                          ::x10aux::x10__assert((((x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size))) <= ((x10_long)(::x10aux::nullCheck(dst__153401)->FMGL(size)))));
                      #endif//NO_ASSERTIONS
                      
                      //#line 264 "x10/util/RailUtils.x10"
                      x10_int accum__153407 = ((x10_int)0);
                      
                      //#line 265 "x10/util/RailUtils.x10"
                      dst__153401->x10::lang::template Rail< x10_int >::__set(
                        ((x10_long)0ll), accum__153407);
                      
                      //#line 266 "x10/util/RailUtils.x10"
                      x10_long i__96602max__153638 = (((x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size))) - (((x10_long)1ll)));
                      {
                          x10_long i__153639;
                          for (i__153639 = ((x10_long)1ll);
                               ((i__153639) <= (i__96602max__153638));
                               i__153639 = ((i__153639) + (((x10_long)1ll))))
                          {
                              
                              //#line 267 "x10/util/RailUtils.x10"
                              accum__153407 = (__extension__ ({
                                  x10_int y__153637 = ::x10aux::nullCheck(dcounts)->x10::lang::template Rail< x10_int >::__apply(
                                                        ((i__153639) - (((x10_long)1ll))));
                                  ((accum__153407) + (y__153637));
                              }))
                              ;
                              
                              //#line 268 "x10/util/RailUtils.x10"
                              dst__153401->x10::lang::template Rail< x10_int >::__set(
                                i__153639, accum__153407);
                          }
                      }
                      dst__153401;
                  }))
                  ;
              }))
              );
    
    //#line 367 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 368 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153733 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10rt_gatherv((*this)->FMGL(id), my_role, ((x10_int) (root->FMGL(id))), &(src)->raw[((x10_int) (src_off))], dcounts->raw[my_role], dst->raw, doffsets->raw, dcounts->raw, sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2944) {
                {
                    ::x10::lang::CheckedThrowable* ct__153731 =
                      __exc2944;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153731);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153733);
        }
    } else 
    //#line 369 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 370 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 371 "x10/util/Team.x10"
        x10_boolean success = x10rt_gatherv((*this)->FMGL(id), my_role, ((x10_int) (root->FMGL(id))), &(src)->raw[((x10_int) (src_off))], dcounts->raw[my_role], dst->raw, doffsets->raw, dcounts->raw, sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
        
        //#line 372 "x10/util/Team.x10"
        if (!(success)) {
            
            //#line 373 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team_Strings::sl__171270), (*this)->FMGL(id)), (&::x10::util::Team_Strings::sl__171271)))));
        }
        
    } else {
        
        //#line 376 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)10), root, src, src_off, dst, dst_off,
          ((x10_long)(((x10_int)0))), ((x10_int)0), doffsets,
          dcounts);
    }
    
}
#endif // X10_UTIL_TEAM_H_gatherv_2943
#ifndef X10_UTIL_TEAM_H_nativeGatherv_2945
#define X10_UTIL_TEAM_H_nativeGatherv_2945
template<class TPMGL(T)> x10_boolean x10::util::Team::nativeGatherv(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  ::x10::lang::Rail< x10_int >* dcounts, ::x10::lang::Rail< x10_int >* doffsets){
    return x10rt_gatherv(id, role, root, &(src)->raw[src_off], dcounts->raw[role], dst->raw, doffsets->raw, dcounts->raw, sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeGatherv_2945
#ifndef X10_UTIL_TEAM_H_bcast_2946
#define X10_UTIL_TEAM_H_bcast_2946
template<class TPMGL(T)> void x10::util::Team::bcast(::x10::lang::Place root,
                                                     ::x10::lang::Rail< TPMGL(T) >* src,
                                                     x10_long src_off,
                                                     ::x10::lang::Rail< TPMGL(T) >* dst,
                                                     x10_long dst_off,
                                                     x10_long count) {
    
    //#line 400 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                 root))) {
        x10_long index__153643 = ((((src_off) + (count))) - (((x10_long)1ll)));
        x10_long size__153644 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153643) < (((x10_long)0ll))) ||
                      ((index__153643) >= (size__153644))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153643,
                                                size__153644);
        }
        
    }
    
    //#line 401 "x10/util/Team.x10"
    x10_long index__153645 = ((((dst_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153646 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153645) < (((x10_long)0ll))) ||
                  ((index__153645) >= (size__153646))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153645,
                                            size__153646);
    }
    
    //#line 402 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 403 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153737 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10rt_bcast((*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                            ((x10_int)0)))
                      ? (((x10_int) ((__extension__ ({
                             ::x10::lang::Place this__153424 =
                               ::x10::lang::Place::_make(::x10aux::here);
                             this__153424->FMGL(id);
                         }))
                         ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                                  ((x10_long)((*this)->FMGL(id))))), ((x10_int) (root->FMGL(id))), &(src)->raw[((x10_int) (src_off))], &(dst)->raw[((x10_int) (dst_off))], sizeof(TPMGL(T)), ((x10_int) (count)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2947) {
                {
                    ::x10::lang::CheckedThrowable* ct__153735 =
                      __exc2947;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153735);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153737);
        }
    } else 
    //#line 404 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 405 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 406 "x10/util/Team.x10"
        x10_boolean success = x10rt_bcast((*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                                      ((x10_int)0)))
          ? (((x10_int) ((__extension__ ({
                 ::x10::lang::Place this__153427 = ::x10::lang::Place::_make(::x10aux::here);
                 this__153427->FMGL(id);
             }))
             ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                      ((x10_long)((*this)->FMGL(id))))), ((x10_int) (root->FMGL(id))), &(src)->raw[((x10_int) (src_off))], &(dst)->raw[((x10_int) (dst_off))], sizeof(TPMGL(T)), ((x10_int) (count)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
        
        //#line 407 "x10/util/Team.x10"
        if (!(success)) {
            
            //#line 408 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team_Strings::sl__171270), (*this)->FMGL(id)), (&::x10::util::Team_Strings::sl__171271)))));
        }
        
    } else {
        
        //#line 411 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)1), root, src, src_off, dst, dst_off,
          count, ((x10_int)0), ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_bcast_2946
#ifndef X10_UTIL_TEAM_H_nativeBcast_2948
#define X10_UTIL_TEAM_H_nativeBcast_2948
template<class TPMGL(T)> x10_boolean x10::util::Team::nativeBcast(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count){
    return x10rt_bcast(id, role, root, &(src)->raw[src_off], &(dst)->raw[dst_off], sizeof(TPMGL(T)), count, ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeBcast_2948
#ifndef X10_UTIL_TEAM_H_alltoall_2949
#define X10_UTIL_TEAM_H_alltoall_2949
template<class TPMGL(T)> void x10::util::Team::alltoall(::x10::lang::Rail< TPMGL(T) >* src,
                                                        x10_long src_off,
                                                        ::x10::lang::Rail< TPMGL(T) >* dst,
                                                        x10_long dst_off,
                                                        x10_long count) {
    
    //#line 437 "x10/util/Team.x10"
    x10_long numElems__153651 = ((count) * ((*this)->x10::util::Team::size()));
    
    //#line 438 "x10/util/Team.x10"
    x10_long index__153647 = ((((src_off) + (numElems__153651))) - (((x10_long)1ll)));
    x10_long size__153648 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153647) < (((x10_long)0ll))) ||
                  ((index__153647) >= (size__153648))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153647,
                                            size__153648);
    }
    
    //#line 439 "x10/util/Team.x10"
    x10_long index__153649 = ((((dst_off) + (numElems__153651))) - (((x10_long)1ll)));
    x10_long size__153650 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153649) < (((x10_long)0ll))) ||
                  ((index__153649) >= (size__153650))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153649,
                                            size__153650);
    }
    
    //#line 441 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 443 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153741 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::util::Team::template nativeAlltoall< TPMGL(T) >(
                      (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                  ((x10_int)0)))
                        ? (((x10_int) ((__extension__ ({
                               ::x10::lang::Place this__153436 =
                                 ::x10::lang::Place::_make(::x10aux::here);
                               this__153436->FMGL(id);
                           }))
                           ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                                    ((x10_long)((*this)->FMGL(id))))),
                      src, ((x10_int) (src_off)), dst, ((x10_int) (dst_off)),
                      ((x10_int) (count)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2950) {
                {
                    ::x10::lang::CheckedThrowable* ct__153739 =
                      __exc2950;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153739);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153741);
        }
    } else {
        
        //#line 446 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 448 "x10/util/Team.x10"
        ::x10::util::Team::template nativeAlltoall< TPMGL(T) >(
          (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                      ((x10_int)0)))
            ? (((x10_int) ((__extension__ ({
                   ::x10::lang::Place this__153438 = ::x10::lang::Place::_make(::x10aux::here);
                   this__153438->FMGL(id);
               }))
               ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                        ((x10_long)((*this)->FMGL(id))))),
          src, ((x10_int) (src_off)), dst, ((x10_int) (dst_off)),
          ((x10_int) (count)));
    }
    
}
#endif // X10_UTIL_TEAM_H_alltoall_2949
#ifndef X10_UTIL_TEAM_H_nativeAlltoall_2951
#define X10_UTIL_TEAM_H_nativeAlltoall_2951
template<class TPMGL(T)> void x10::util::Team::nativeAlltoall(
  x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count) {
    x10rt_alltoall(id, role, &src->raw[src_off], &dst->raw[dst_off], sizeof(TPMGL(T)), count, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeAlltoall_2951
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

#ifndef X10_UTIL_TEAM_H_reduce_2952
#define X10_UTIL_TEAM_H_reduce_2952
template<class TPMGL(T)> void x10::util::Team::reduce(::x10::lang::Place root,
                                                      ::x10::lang::Rail< TPMGL(T) >* src,
                                                      x10_long src_off,
                                                      ::x10::lang::Rail< TPMGL(T) >* dst,
                                                      x10_long dst_off,
                                                      x10_long count,
                                                      x10_int op) {
    
    //#line 502 "x10/util/Team.x10"
    x10_long index__153654 = ((((src_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153655 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153654) < (((x10_long)0ll))) ||
                  ((index__153654) >= (size__153655))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153654,
                                            size__153655);
    }
    
    //#line 503 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                 root))) {
        x10_long index__153652 = ((((dst_off) + (count))) - (((x10_long)1ll)));
        x10_long size__153653 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153652) < (((x10_long)0ll))) ||
                      ((index__153652) >= (size__153653))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153652,
                                                size__153653);
        }
        
    }
    
    //#line 504 "x10/util/Team.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                          ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
      ((x10_int)5), root, src, src_off, dst, dst_off, count,
      op, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
      ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
#endif // X10_UTIL_TEAM_H_reduce_2952
#ifndef X10_UTIL_TEAM_H_reduce_builtin_2964
#define X10_UTIL_TEAM_H_reduce_builtin_2964
template<class TPMGL(T)> void x10::util::Team::reduce_builtin(
  ::x10::lang::Place root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_long dst_off,
  x10_long count, x10_int op) {
    
    //#line 549 "x10/util/Team.x10"
    x10_long index__153658 = ((((src_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153659 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153658) < (((x10_long)0ll))) ||
                  ((index__153658) >= (size__153659))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153658,
                                            size__153659);
    }
    
    //#line 550 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                 root))) {
        x10_long index__153656 = ((((dst_off) + (count))) - (((x10_long)1ll)));
        x10_long size__153657 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153656) < (((x10_long)0ll))) ||
                      ((index__153656) >= (size__153657))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153656,
                                                size__153657);
        }
        
    }
    
    //#line 551 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 552 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153745 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::util::Team::template nativeReduce< TPMGL(T) >(
                      (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                  ((x10_int)0)))
                        ? (((x10_int) ((__extension__ ({
                               ::x10::lang::Place this__153452 =
                                 ::x10::lang::Place::_make(::x10aux::here);
                               this__153452->FMGL(id);
                           }))
                           ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                                    ((x10_long)((*this)->FMGL(id))))),
                      ((x10_int) (root->FMGL(id))), src, ((x10_int) (src_off)),
                      dst, ((x10_int) (dst_off)), ((x10_int) (count)),
                      op);
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2965) {
                {
                    ::x10::lang::CheckedThrowable* ct__153743 =
                      __exc2965;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153743);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153745);
        }
    } else 
    //#line 553 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 555 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 557 "x10/util/Team.x10"
        ::x10::util::Team::template nativeReduce< TPMGL(T) >(
          (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                      ((x10_int)0)))
            ? (((x10_int) ((__extension__ ({
                   ::x10::lang::Place this__153455 = ::x10::lang::Place::_make(::x10aux::here);
                   this__153455->FMGL(id);
               }))
               ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                        ((x10_long)((*this)->FMGL(id))))),
          ((x10_int) (root->FMGL(id))), src, ((x10_int) (src_off)),
          dst, ((x10_int) (dst_off)), ((x10_int) (count)),
          op);
    } else {
        
        //#line 560 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)5), root, src, src_off, dst, dst_off,
          count, op, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_reduce_builtin_2964
#ifndef X10_UTIL_TEAM_H_nativeReduce_2966
#define X10_UTIL_TEAM_H_nativeReduce_2966
template<class TPMGL(T)> void x10::util::Team::nativeReduce(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count, x10_int op) {
    x10rt_reduce(id, role, root, &src->raw[src_off], &dst->raw[dst_off], (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), count, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeReduce_2966
#ifndef X10_UTIL_TEAM_H_reduce_2978
#define X10_UTIL_TEAM_H_reduce_2978
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
#endif // X10_UTIL_TEAM_H_reduce_2978
#ifndef X10_UTIL_TEAM_H_nativeReduce_2979
#define X10_UTIL_TEAM_H_nativeReduce_2979
template<class TPMGL(T)> void x10::util::Team::nativeReduce(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  ::x10::lang::Rail< TPMGL(T) >* dst, x10_int op) {
    x10rt_reduce(id, role, root, src->raw, dst->raw, (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), 1, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeReduce_2979
#ifndef X10_UTIL_TEAM_H_allreduce_2980
#define X10_UTIL_TEAM_H_allreduce_2980
template<class TPMGL(T)> void x10::util::Team::allreduce(
  ::x10::lang::Rail< TPMGL(T) >* src, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_long dst_off, x10_long count, x10_int op) {
    
    //#line 675 "x10/util/Team.x10"
    x10_long index__153660 = ((((src_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153661 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153660) < (((x10_long)0ll))) ||
                  ((index__153660) >= (size__153661))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153660,
                                            size__153661);
    }
    
    //#line 676 "x10/util/Team.x10"
    x10_long index__153662 = ((((dst_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153663 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153662) < (((x10_long)0ll))) ||
                  ((index__153662) >= (size__153663))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153662,
                                            size__153663);
    }
    
    //#line 677 "x10/util/Team.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                          ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
      ((x10_int)6), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                              ((x10_long)((*this)->FMGL(id)))))->FMGL(places))->__apply(
                      ((x10_long)0ll)), src, src_off, dst,
      dst_off, count, op, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
      ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
#endif // X10_UTIL_TEAM_H_allreduce_2980
#ifndef X10_UTIL_TEAM_H_allreduce_builtin_2992
#define X10_UTIL_TEAM_H_allreduce_builtin_2992
template<class TPMGL(T)> void x10::util::Team::allreduce_builtin(
  ::x10::lang::Rail< TPMGL(T) >* src, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_long dst_off, x10_long count, x10_int op) {
    
    //#line 722 "x10/util/Team.x10"
    x10_long index__153664 = ((((src_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153665 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153664) < (((x10_long)0ll))) ||
                  ((index__153664) >= (size__153665))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153664,
                                            size__153665);
    }
    
    //#line 723 "x10/util/Team.x10"
    x10_long index__153666 = ((((dst_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153667 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153666) < (((x10_long)0ll))) ||
                  ((index__153666) >= (size__153667))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153666,
                                            size__153667);
    }
    
    //#line 724 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 726 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153749 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10rt_allreduce((*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                                ((x10_int)0)))
                      ? (((x10_int) ((__extension__ ({
                             ::x10::lang::Place this__153470 =
                               ::x10::lang::Place::_make(::x10aux::here);
                             this__153470->FMGL(id);
                         }))
                         ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                                  ((x10_long)((*this)->FMGL(id))))), &(src)->raw[((x10_int) (src_off))], &(dst)->raw[((x10_int) (dst_off))], (x10rt_red_op_type)(op), x10rt_get_red_type<TPMGL(T)>(), ((x10_int) (count)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler,::x10aux::coll_enter());
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2993) {
                {
                    ::x10::lang::CheckedThrowable* ct__153747 =
                      __exc2993;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153747);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153749);
        }
    } else 
    //#line 727 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 729 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 731 "x10/util/Team.x10"
        x10_boolean success = x10rt_allreduce((*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                                          ((x10_int)0)))
          ? (((x10_int) ((__extension__ ({
                 ::x10::lang::Place this__153472 = ::x10::lang::Place::_make(::x10aux::here);
                 this__153472->FMGL(id);
             }))
             ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                      ((x10_long)((*this)->FMGL(id))))), &(src)->raw[((x10_int) (src_off))], &(dst)->raw[((x10_int) (dst_off))], (x10rt_red_op_type)(op), x10rt_get_red_type<TPMGL(T)>(), ((x10_int) (count)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler,::x10aux::coll_enter());
        
        //#line 732 "x10/util/Team.x10"
        if (!(success)) {
            
            //#line 733 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team_Strings::sl__171270), (*this)->FMGL(id)), (&::x10::util::Team_Strings::sl__171271)))));
        }
        
    } else {
        
        //#line 736 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)6), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                  ((x10_long)((*this)->FMGL(id)))))->FMGL(places))->__apply(
                          ((x10_long)0ll)), src, src_off,
          dst, dst_off, count, op, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_allreduce_builtin_2992
#ifndef X10_UTIL_TEAM_H_nativeAllreduce_2994
#define X10_UTIL_TEAM_H_nativeAllreduce_2994
template<class TPMGL(T)> x10_boolean x10::util::Team::nativeAllreduce(
  x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count, x10_int op){
    return x10rt_allreduce(id, role, &(src)->raw[src_off], &(dst)->raw[dst_off], (x10rt_red_op_type)(op), x10rt_get_red_type<TPMGL(T)>(), count, ::x10aux::failed_coll_handler, ::x10aux::coll_handler,::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeAllreduce_2994
#ifndef X10_UTIL_TEAM_H_allreduce_3006
#define X10_UTIL_TEAM_H_allreduce_3006
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
#endif // X10_UTIL_TEAM_H_allreduce_3006
#ifndef X10_UTIL_TEAM_H_nativeAllreduce_3007
#define X10_UTIL_TEAM_H_nativeAllreduce_3007
template<class TPMGL(T)> void x10::util::Team::nativeAllreduce(
  x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
  ::x10::lang::Rail< TPMGL(T) >* dst, x10_int op) {
    x10rt_allreduce(id, role, src->raw, dst->raw, (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), 1, ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeAllreduce_3007
#endif // X10_UTIL_TEAM_H_GENERICS
#endif // __X10_UTIL_TEAM_H_NODEPS
