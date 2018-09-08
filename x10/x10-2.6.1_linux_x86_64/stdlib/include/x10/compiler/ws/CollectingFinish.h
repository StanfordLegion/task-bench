#ifndef __X10_COMPILER_WS_COLLECTINGFINISH_H
#define __X10_COMPILER_WS_COLLECTINGFINISH_H

#include <x10rt.h>


#define X10_COMPILER_WS_FINISHFRAME_H_NODEPS
#include <x10/compiler/ws/FinishFrame.h>
#undef X10_COMPILER_WS_FINISHFRAME_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace x10 { namespace compiler { 
class Uninitialized;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace x10 { namespace compiler { namespace ws { 
class Frame;
} } } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace util { namespace concurrent { 
class Monitor;
} } } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { namespace ws { 
class Worker;
} } } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { namespace ws { 

template<class TPMGL(T)> class CollectingFinish;
template <> class CollectingFinish<void>;
template<class TPMGL(T)> class CollectingFinish : public ::x10::compiler::ws::FinishFrame
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Reducible<TPMGL(T)>* FMGL(reducer);
    
    ::x10::lang::Rail< TPMGL(T) >* FMGL(resultRail);
    
    TPMGL(T) FMGL(result);
    
    void _constructor(::x10::compiler::ws::Frame* up, ::x10::lang::Reducible<TPMGL(T)>* rd);
    
    void _constructor(x10_int x, ::x10::compiler::ws::CollectingFinish<TPMGL(T)>* o);
    
    virtual ::x10::compiler::ws::Frame* realloc();
    virtual void accept(TPMGL(T) t, ::x10::compiler::ws::Worker* worker);
    virtual TPMGL(T) fastResult(::x10::compiler::ws::Worker* worker);
    virtual TPMGL(T) result();
    virtual ::x10::compiler::ws::CollectingFinish<TPMGL(T)>* x10__compiler__ws__CollectingFinish____this__x10__compiler__ws__CollectingFinish(
      );
    virtual void __fieldInitializers_x10_compiler_ws_CollectingFinish(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::compiler::ws::CollectingFinish<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::compiler::ws::CollectingFinish<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::compiler::ws::CollectingFinish<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::compiler::ws::FinishFrame>()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.compiler.ws.CollectingFinish";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class CollectingFinish<void> : public ::x10::compiler::ws::FinishFrame
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // X10_COMPILER_WS_COLLECTINGFINISH_H

namespace x10 { namespace compiler { namespace ws { 
template<class TPMGL(T)> class CollectingFinish;
} } } 

#ifndef X10_COMPILER_WS_COLLECTINGFINISH_H_NODEPS
#define X10_COMPILER_WS_COLLECTINGFINISH_H_NODEPS
#include <x10/compiler/ws/FinishFrame.h>
#include <x10/lang/Reducible.h>
#include <x10/compiler/Uninitialized.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Ifdef.h>
#include <x10/compiler/ws/Frame.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/util/GrowableRail.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/util/concurrent/Monitor.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/ws/Worker.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_COMPILER_WS_COLLECTINGFINISH_H_GENERICS
#define X10_COMPILER_WS_COLLECTINGFINISH_H_GENERICS
#endif // X10_COMPILER_WS_COLLECTINGFINISH_H_GENERICS
#ifndef X10_COMPILER_WS_COLLECTINGFINISH_H_IMPLEMENTATION
#define X10_COMPILER_WS_COLLECTINGFINISH_H_IMPLEMENTATION
#include <x10/compiler/ws/CollectingFinish.h>


//#line 27 "x10/compiler/ws/CollectingFinish.x10"

//#line 28 "x10/compiler/ws/CollectingFinish.x10"

//#line 29 "x10/compiler/ws/CollectingFinish.x10"

//#line 31 "x10/compiler/ws/CollectingFinish.x10"
template<class TPMGL(T)> void x10::compiler::ws::CollectingFinish<TPMGL(T)>::_constructor(
                           ::x10::compiler::ws::Frame* up, ::x10::lang::Reducible<TPMGL(T)>* rd) {
    
    //#line 32 "x10/compiler/ws/CollectingFinish.x10"
    (this)->::x10::compiler::ws::FinishFrame::_constructor(up);
    
    //#line 31 "x10/compiler/ws/CollectingFinish.x10"
    
    //#line 33 "x10/compiler/ws/CollectingFinish.x10"
    this->FMGL(reducer) = rd;
    {
        
        //#line 34 "x10/compiler/ws/CollectingFinish.x10"
        this->FMGL(result) = ::x10::lang::Reducible<TPMGL(T)>::zero(::x10aux::nullCheck(rd));
    }
}


//#line 44 "x10/compiler/ws/CollectingFinish.x10"
template<class TPMGL(T)> void x10::compiler::ws::CollectingFinish<TPMGL(T)>::_constructor(
                           x10_int x, ::x10::compiler::ws::CollectingFinish<TPMGL(T)>* o) {
    
    //#line 46 "x10/compiler/ws/CollectingFinish.x10"
    (this)->::x10::compiler::ws::FinishFrame::_constructor(
      x, reinterpret_cast< ::x10::compiler::ws::FinishFrame*>(o));
    
    //#line 44 "x10/compiler/ws/CollectingFinish.x10"
    
    //#line 48 "x10/compiler/ws/CollectingFinish.x10"
    this->FMGL(reducer) = ::x10aux::nullCheck(o)->FMGL(reducer);
    
    //#line 49 "x10/compiler/ws/CollectingFinish.x10"
    x10_int size = ::x10::xrx::Runtime::FMGL(NTHREADS__get)();
    
    //#line 50 "x10/compiler/ws/CollectingFinish.x10"
    this->FMGL(resultRail) = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(size)), false);
    
    //#line 51 "x10/compiler/ws/CollectingFinish.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) < (size)); i = ((i) + (((x10_int)1))))
        {
            
            //#line 52 "x10/compiler/ws/CollectingFinish.x10"
            ::x10aux::nullCheck(this->FMGL(resultRail))->x10::lang::template Rail< TPMGL(T) >::__set(
              ((x10_long)(i)), ::x10::lang::Reducible<TPMGL(T)>::zero(::x10aux::nullCheck(this->FMGL(reducer))));
        }
    }
    
}


//#line 56 "x10/compiler/ws/CollectingFinish.x10"
template<class TPMGL(T)> ::x10::compiler::ws::Frame* x10::compiler::ws::CollectingFinish<TPMGL(T)>::realloc(
  ) {
    
    //#line 58 "x10/compiler/ws/CollectingFinish.x10"
    if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL),
                                  this->FMGL(redirect))))
    {
        return reinterpret_cast< ::x10::compiler::ws::Frame*>(this->FMGL(redirect));
        
    }
    
    //#line 59 "x10/compiler/ws/CollectingFinish.x10"
    ::x10::compiler::ws::FinishFrame* tmp = reinterpret_cast< ::x10::compiler::ws::FinishFrame*>(this->remap());
    
    //#line 60 "x10/compiler/ws/CollectingFinish.x10"
    ::x10aux::nullCheck(tmp)->FMGL(redirect) = tmp;
    
    //#line 61 "x10/compiler/ws/CollectingFinish.x10"
    if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL),
                                  this->FMGL(exceptions))))
    {
        
        //#line 62 "x10/compiler/ws/CollectingFinish.x10"
        ::x10aux::nullCheck(tmp)->FMGL(exceptions) = (__extension__ ({
            ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* alloc__107045 =
               (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
            
            //#line 50 "x10/util/GrowableRail.x10"
            (alloc__107045)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
              ((x10_long)0ll));
            alloc__107045;
        }))
        ;
        
        //#line 63 "x10/compiler/ws/CollectingFinish.x10"
        ::x10::xrx::Runtime::FMGL(atomicMonitor__get)()->lock();
        
        //#line 64 "x10/compiler/ws/CollectingFinish.x10"
        while (!((__extension__ ({
                   ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* this__107174 =
                     this->FMGL(exceptions);
                   (::x10aux::struct_equals(::x10aux::nullCheck(this__107174)->FMGL(size),
                                            ((x10_long)0ll)));
               }))
               )) {
            ::x10aux::nullCheck(::x10aux::nullCheck(tmp)->FMGL(exceptions))->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
              ::x10aux::nullCheck(this->FMGL(exceptions))->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::removeLast());
        }
        
        //#line 65 "x10/compiler/ws/CollectingFinish.x10"
        this->FMGL(exceptions) = (::x10aux::class_cast_unchecked< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 66 "x10/compiler/ws/CollectingFinish.x10"
        ::x10::xrx::Runtime::FMGL(atomicMonitor__get)()->unlock();
    }
    {
        
        //#line 68 "x10/compiler/ws/CollectingFinish.x10"
        ::x10::lang::CheckedThrowable* throwable__107178 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            {
                ::x10::xrx::Runtime::enterAtomic();
                {
                    this->FMGL(redirect) = tmp;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc395) {
            {
                ::x10::lang::CheckedThrowable* formal__107179 =
                  __exc395;
                {
                    throwable__107178 = formal__107179;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__107178, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__107178))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107178));
            }
            
        }
        if (true) {
            ::x10::xrx::Runtime::exitAtomic();
        }
        if ((!::x10aux::struct_equals(throwable__107178, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__107178)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107178));
            }
            
        }
        
    }
    
    //#line 70 "x10/compiler/ws/CollectingFinish.x10"
    ::x10aux::nullCheck(reinterpret_cast< ::x10::compiler::ws::CollectingFinish<TPMGL(T)>* >(tmp))->FMGL(result) =
      this->FMGL(result);
    
    //#line 71 "x10/compiler/ws/CollectingFinish.x10"
    return reinterpret_cast< ::x10::compiler::ws::Frame*>(tmp);
    
}

//#line 74 "x10/compiler/ws/CollectingFinish.x10"
template<class TPMGL(T)> void x10::compiler::ws::CollectingFinish<TPMGL(T)>::accept(
  TPMGL(T) t, ::x10::compiler::ws::Worker* worker) {
    {
        
        //#line 76 "x10/compiler/ws/CollectingFinish.x10"
        if ((::x10aux::struct_equals(this->FMGL(redirect),
                                     reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 77 "x10/compiler/ws/CollectingFinish.x10"
            this->FMGL(result) = ::x10::lang::Reducible<TPMGL(T)>::__apply(::x10aux::nullCheck(this->FMGL(reducer)), 
                                   this->FMGL(result), t);
        } else {
            
            //#line 80 "x10/compiler/ws/CollectingFinish.x10"
            x10_int id = ::x10aux::nullCheck(worker)->FMGL(id);
            
            //#line 81 "x10/compiler/ws/CollectingFinish.x10"
            ::x10::lang::Rail< TPMGL(T) >* rr = ::x10aux::nullCheck(reinterpret_cast< ::x10::compiler::ws::CollectingFinish<TPMGL(T)>* >(this->FMGL(redirect)))->FMGL(resultRail);
            
            //#line 82 "x10/compiler/ws/CollectingFinish.x10"
            ::x10aux::nullCheck(rr)->x10::lang::template Rail< TPMGL(T) >::__set(
              ((x10_long)(id)), ::x10::lang::Reducible<TPMGL(T)>::__apply(::x10aux::nullCheck(this->FMGL(reducer)), 
                                  ::x10aux::nullCheck(rr)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                    ((x10_long)(id))), t));
        }
        
    }
}

//#line 92 "x10/compiler/ws/CollectingFinish.x10"
template<class TPMGL(T)> TPMGL(T) x10::compiler::ws::CollectingFinish<TPMGL(T)>::fastResult(
  ::x10::compiler::ws::Worker* worker) {
    {
        
        //#line 94 "x10/compiler/ws/CollectingFinish.x10"
        return this->FMGL(result);
        
    }
}

//#line 104 "x10/compiler/ws/CollectingFinish.x10"
template<class TPMGL(T)> TPMGL(T) x10::compiler::ws::CollectingFinish<TPMGL(T)>::result(
  ) {
    {
        
        //#line 107 "x10/compiler/ws/CollectingFinish.x10"
        x10_int size = ::x10::xrx::Runtime::FMGL(NTHREADS__get)();
        
        //#line 108 "x10/compiler/ws/CollectingFinish.x10"
        {
            x10_int i;
            for (i = ((x10_int)0); ((i) < (size)); i = ((i) + (((x10_int)1))))
            {
                
                //#line 109 "x10/compiler/ws/CollectingFinish.x10"
                this->FMGL(result) = ::x10::lang::Reducible<TPMGL(T)>::__apply(::x10aux::nullCheck(this->FMGL(reducer)), 
                                       this->FMGL(result),
                                       ::x10aux::nullCheck(this->FMGL(resultRail))->x10::lang::template Rail< TPMGL(T) >::__apply(
                                         ((x10_long)(i))));
            }
        }
        
        //#line 111 "x10/compiler/ws/CollectingFinish.x10"
        ::x10aux::dealloc(this->FMGL(resultRail));
        
        //#line 112 "x10/compiler/ws/CollectingFinish.x10"
        return this->FMGL(result);
        
    }
}

//#line 26 "x10/compiler/ws/CollectingFinish.x10"
template<class TPMGL(T)> ::x10::compiler::ws::CollectingFinish<TPMGL(T)>*
  x10::compiler::ws::CollectingFinish<TPMGL(T)>::x10__compiler__ws__CollectingFinish____this__x10__compiler__ws__CollectingFinish(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::compiler::ws::CollectingFinish<TPMGL(T)>::__fieldInitializers_x10_compiler_ws_CollectingFinish(
  ) {
 
}
template<class TPMGL(T)> void x10::compiler::ws::CollectingFinish<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::compiler::ws::FinishFrame::_serialize_body(buf);
    buf.write(this->FMGL(reducer));
    buf.write(this->FMGL(resultRail));
    buf.write(this->FMGL(result));
    
}

template<class TPMGL(T)> void x10::compiler::ws::CollectingFinish<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::compiler::ws::FinishFrame::_deserialize_body(buf);
    FMGL(reducer) = buf.read< ::x10::lang::Reducible<TPMGL(T)>*>();
    FMGL(resultRail) = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
    FMGL(result) = buf.read<TPMGL(T)>();
}

#endif // X10_COMPILER_WS_COLLECTINGFINISH_H_IMPLEMENTATION
#endif // __X10_COMPILER_WS_COLLECTINGFINISH_H_NODEPS
