#ifndef __X10_IO_READERITERATOR_H
#define __X10_IO_READERITERATOR_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
namespace x10 { namespace io { 
class Reader;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class Marshal;
} } 
namespace x10 { namespace util { 
class NoSuchElementException;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace io { 
class IOException;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace io { 

template<class TPMGL(T)> class ReaderIterator;
template <> class ReaderIterator<void>;
template<class TPMGL(T)> class ReaderIterator : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Iterator<TPMGL(T)>::template itable< ::x10::io::ReaderIterator<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::io::ReaderIterator<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::io::ReaderIterator<TPMGL(T)> > _itable_2;
    
    ::x10::io::Reader* FMGL(r);
    
    ::x10::io::Marshal<TPMGL(T)>* FMGL(m);
    
    TPMGL(T) FMGL(next);
    
    void _constructor(::x10::io::Marshal<TPMGL(T)>* m, ::x10::io::Reader* r);
    
    static ::x10::io::ReaderIterator<TPMGL(T)>* _make(::x10::io::Marshal<TPMGL(T)>* m,
                                                      ::x10::io::Reader* r);
    
    virtual ::x10::lang::Iterator<TPMGL(T)>* iterator();
    virtual TPMGL(T) next();
    virtual x10_boolean hasNext();
    virtual ::x10::io::ReaderIterator<TPMGL(T)>* x10__io__ReaderIterator____this__x10__io__ReaderIterator(
      );
    virtual void __fieldInitializers_x10_io_ReaderIterator(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::io::ReaderIterator<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::io::ReaderIterator<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::io::ReaderIterator<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Iterator<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Iterable<TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.io.ReaderIterator";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class ReaderIterator<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // X10_IO_READERITERATOR_H

namespace x10 { namespace io { 
template<class TPMGL(T)> class ReaderIterator;
} } 

#ifndef X10_IO_READERITERATOR_H_NODEPS
#define X10_IO_READERITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/io/Reader.h>
#include <x10/io/Marshal.h>
#include <x10/lang/Boolean.h>
#include <x10/util/NoSuchElementException.h>
#include <x10/lang/Zero.h>
#include <x10/io/IOException.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_IO_READERITERATOR_H_GENERICS
#define X10_IO_READERITERATOR_H_GENERICS
#endif // X10_IO_READERITERATOR_H_GENERICS
#ifndef X10_IO_READERITERATOR_H_IMPLEMENTATION
#define X10_IO_READERITERATOR_H_IMPLEMENTATION
#include <x10/io/ReaderIterator.h>

template<class TPMGL(T)> typename ::x10::lang::Iterator<TPMGL(T)>::template itable< ::x10::io::ReaderIterator<TPMGL(T)> >  x10::io::ReaderIterator<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &x10::io::ReaderIterator<TPMGL(T)>::hasNext, &::x10::lang::X10Class::hashCode, &x10::io::ReaderIterator<TPMGL(T)>::next, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::io::ReaderIterator<TPMGL(T)> >  x10::io::ReaderIterator<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::io::ReaderIterator<TPMGL(T)> >  x10::io::ReaderIterator<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::io::ReaderIterator<TPMGL(T)>::iterator, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::io::ReaderIterator<TPMGL(T)>::_itables[4] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterator<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable<TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(NULL, (void*)"::x10::io::ReaderIterator<TPMGL(T)>")};

//#line 30 "x10/io/ReaderIterator.x10"

//#line 31 "x10/io/ReaderIterator.x10"

//#line 32 "x10/io/ReaderIterator.x10"

//#line 34 "x10/io/ReaderIterator.x10"
template<class TPMGL(T)> void x10::io::ReaderIterator<TPMGL(T)>::_constructor(
                           ::x10::io::Marshal<TPMGL(T)>* m, ::x10::io::Reader* r) {
    
    //#line 29 "x10/io/ReaderIterator.x10"
    this->x10::io::template ReaderIterator<TPMGL(T)>::__fieldInitializers_x10_io_ReaderIterator();
    
    //#line 35 "x10/io/ReaderIterator.x10"
    this->FMGL(m) = m;
    
    //#line 36 "x10/io/ReaderIterator.x10"
    this->FMGL(r) = r;
}
template<class TPMGL(T)> ::x10::io::ReaderIterator<TPMGL(T)>* x10::io::ReaderIterator<TPMGL(T)>::_make(
                           ::x10::io::Marshal<TPMGL(T)>* m, ::x10::io::Reader* r)
{
    ::x10::io::ReaderIterator<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::io::ReaderIterator<TPMGL(T)> >()) ::x10::io::ReaderIterator<TPMGL(T)>();
    this_->_constructor(m, r);
    return this_;
}



//#line 40 "x10/io/ReaderIterator.x10"
/** Allow the iterator to be used in a for loop. */
template<class TPMGL(T)> ::x10::lang::Iterator<TPMGL(T)>*
  x10::io::ReaderIterator<TPMGL(T)>::iterator() {
    return reinterpret_cast< ::x10::lang::Iterator<TPMGL(T)>*>(this);
    
}

//#line 42 "x10/io/ReaderIterator.x10"
template<class TPMGL(T)> TPMGL(T) x10::io::ReaderIterator<TPMGL(T)>::next(
  ) {
    
    //#line 43 "x10/io/ReaderIterator.x10"
    if (!(this->hasNext())) {
        
        //#line 44 "x10/io/ReaderIterator.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::util::NoSuchElementException::_make()));
    }
    
    //#line 45 "x10/io/ReaderIterator.x10"
    TPMGL(T) x = this->FMGL(next);
    
    //#line 46 "x10/io/ReaderIterator.x10"
    this->FMGL(next) = ::x10aux::zeroValue< TPMGL(T) >();
    
    //#line 47 "x10/io/ReaderIterator.x10"
    return x;
    
}

//#line 50 "x10/io/ReaderIterator.x10"
template<class TPMGL(T)> x10_boolean x10::io::ReaderIterator<TPMGL(T)>::hasNext(
  ) {
    
    //#line 51 "x10/io/ReaderIterator.x10"
    if ((::x10aux::struct_equals(this->FMGL(next), ::x10aux::zeroValue< TPMGL(T) >())))
    {
        
        //#line 52 "x10/io/ReaderIterator.x10"
        try {
            
            //#line 53 "x10/io/ReaderIterator.x10"
            this->FMGL(next) = ::x10aux::nullCheck(this->FMGL(r))->template read< TPMGL(T) >(
                                 this->FMGL(m));
        }
        catch (::x10::lang::CheckedThrowable* __exc751) {
            if (::x10aux::instanceof< ::x10::io::IOException*>(__exc751)) {
                ::x10::io::IOException* id__130 = static_cast< ::x10::io::IOException*>(__exc751);
                {
                    
                    //#line 56 "x10/io/ReaderIterator.x10"
                    return false;
                    
                }
            } else {
                throw;
            }
        }
    }
    
    //#line 59 "x10/io/ReaderIterator.x10"
    return true;
    
}

//#line 29 "x10/io/ReaderIterator.x10"
template<class TPMGL(T)> ::x10::io::ReaderIterator<TPMGL(T)>*
  x10::io::ReaderIterator<TPMGL(T)>::x10__io__ReaderIterator____this__x10__io__ReaderIterator(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::io::ReaderIterator<TPMGL(T)>::__fieldInitializers_x10_io_ReaderIterator(
  ) {
    this->FMGL(next) = ::x10aux::zeroValue< TPMGL(T) >();
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::io::ReaderIterator<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::io::ReaderIterator<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::io::ReaderIterator<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(r));
    buf.write(this->FMGL(m));
    buf.write(this->FMGL(next));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::io::ReaderIterator<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::io::ReaderIterator<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::io::ReaderIterator<TPMGL(T)> >()) ::x10::io::ReaderIterator<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::io::ReaderIterator<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(r) = buf.read< ::x10::io::Reader*>();
    FMGL(m) = buf.read< ::x10::io::Marshal<TPMGL(T)>*>();
    FMGL(next) = buf.read<TPMGL(T)>();
}

#endif // X10_IO_READERITERATOR_H_IMPLEMENTATION
#endif // __X10_IO_READERITERATOR_H_NODEPS
