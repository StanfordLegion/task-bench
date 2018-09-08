#ifndef __X10_REGIONARRAY_DIST_H
#define __X10_REGIONARRAY_DIST_H

#include <x10rt.h>


#define X10_LANG_FUN_0_1_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#undef X10_LANG_FUN_0_1_H_NODEPS
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace regionarray { 
class UniqueDist;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace regionarray { 
class ConstantDist;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace regionarray { 
class BlockDist;
} } 
namespace x10 { namespace regionarray { 
class BlockBlockDist;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace regionarray { 
class GhostManager;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace lang { 
class String;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class Dist_Strings {
  public:
    static ::x10::lang::String sl__166525;
    static ::x10::lang::String sl__166529;
    static ::x10::lang::String sl__166526;
    static ::x10::lang::String sl__166524;
    static ::x10::lang::String sl__166533;
    static ::x10::lang::String sl__166531;
    static ::x10::lang::String sl__166530;
    static ::x10::lang::String sl__166528;
    static ::x10::lang::String sl__166534;
    static ::x10::lang::String sl__166535;
    static ::x10::lang::String sl__166527;
    static ::x10::lang::String sl__166532;
};

class Dist : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::regionarray::Region* FMGL(region);
    
    x10_long rank();
    static ::x10::regionarray::Dist* makeUnique();
    static ::x10::regionarray::Dist* makeConstant(::x10::regionarray::Region* r);
    static ::x10::regionarray::Dist* make(::x10::regionarray::Region* r);
    static ::x10::regionarray::Dist* makeBlock(::x10::regionarray::Region* r,
                                               x10_long axis);
    static ::x10::regionarray::Dist* makeBlockBlock(::x10::regionarray::Region* r,
                                                    x10_long axis0,
                                                    x10_long axis1,
                                                    ::x10::lang::PlaceGroup* pg);
    static ::x10::regionarray::Dist* makeBlockBlock(::x10::regionarray::Region* r,
                                                    x10_long axis0,
                                                    x10_long axis1);
    static ::x10::regionarray::Dist* makeBlockBlock(::x10::regionarray::Region* r);
    static ::x10::regionarray::Dist* makeBlock(::x10::regionarray::Region* r);
    static ::x10::regionarray::Dist* makeUnique(::x10::lang::PlaceGroup* pg);
    static ::x10::regionarray::Dist* makeConstant(::x10::regionarray::Region* r,
                                                  ::x10::lang::Place p);
    static ::x10::regionarray::Dist* makeBlock(::x10::regionarray::Region* r,
                                               x10_long axis,
                                               ::x10::lang::PlaceGroup* pg);
    virtual ::x10::lang::PlaceGroup* places() = 0;
    virtual x10_long numPlaces() = 0;
    virtual ::x10::lang::Iterable< ::x10::regionarray::Region*>*
      regions() = 0;
    virtual ::x10::regionarray::Region* get(::x10::lang::Place p) = 0;
    virtual ::x10::regionarray::Region* __apply(::x10::lang::Place p);
    virtual ::x10::lang::Place __apply(::x10::lang::Point* pt) = 0;
    virtual ::x10::lang::Place __apply(x10_long i0);
    virtual ::x10::lang::Place __apply(x10_long i0, x10_long i1);
    virtual ::x10::lang::Place __apply(x10_long i0, x10_long i1,
                                       x10_long i2);
    virtual ::x10::lang::Place __apply(x10_long i0, x10_long i1,
                                       x10_long i2, x10_long i3);
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator(
      );
    virtual ::x10::regionarray::Dist* restriction(::x10::regionarray::Region* r) = 0;
    virtual x10_boolean isSubdistribution(::x10::regionarray::Dist* that);
    virtual x10_boolean equals(::x10::lang::Any* thatObj);
    virtual ::x10::regionarray::Dist* restriction(::x10::lang::Place p) = 0;
    virtual x10_boolean contains(::x10::lang::Point* p);
    virtual x10_boolean containsLocally(::x10::lang::Point* p);
    virtual ::x10::regionarray::Dist* __bar(::x10::regionarray::Region* r);
    virtual ::x10::regionarray::Dist* __bar(::x10::lang::Place p);
    virtual ::x10::regionarray::GhostManager* getLocalGhostManager(
      x10_long ghostWidth, x10_boolean periodic);
    virtual ::x10::lang::String* toString();
    void _constructor(::x10::regionarray::Region* region);
    
    static void raiseBoundsError(x10_long i0) X10_PRAGMA_NORETURN ;
    static void raiseBoundsError(x10_long i0, x10_long i1) X10_PRAGMA_NORETURN ;
    static void raiseBoundsError(x10_long i0, x10_long i1,
                                 x10_long i2) X10_PRAGMA_NORETURN ;
    static void raiseBoundsError(x10_long i0, x10_long i1,
                                 x10_long i2, x10_long i3) X10_PRAGMA_NORETURN ;
    static void raiseBoundsError(::x10::lang::Point* pt) X10_PRAGMA_NORETURN ;
    virtual ::x10::regionarray::Dist* x10__regionarray__Dist____this__x10__regionarray__Dist(
      );
    virtual void __fieldInitializers_x10_regionarray_Dist(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_REGIONARRAY_DIST_H

namespace x10 { namespace regionarray { 
class Dist;
} } 

#ifndef X10_REGIONARRAY_DIST_H_NODEPS
#define X10_REGIONARRAY_DIST_H_NODEPS
#ifndef X10_REGIONARRAY_DIST_H_GENERICS
#define X10_REGIONARRAY_DIST_H_GENERICS
#endif // X10_REGIONARRAY_DIST_H_GENERICS
#endif // __X10_REGIONARRAY_DIST_H_NODEPS
