#ifndef __X10_REGIONARRAY_GHOSTABLE_H
#define __X10_REGIONARRAY_GHOSTABLE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Point;
} } 

namespace x10 { namespace regionarray { 

class Ghostable   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(x10_boolean (Iface::*equals) (::x10::lang::Any*), ::x10::regionarray::Dist* (Iface::*getDist) (), x10_int (Iface::*hashCode) (), void (Iface::*putOverlap) (::x10::regionarray::Region*, ::x10::lang::Place, ::x10::lang::Point*, x10_byte), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : equals(equals), getDist(getDist), hashCode(hashCode), putOverlap(putOverlap), toString(toString), typeName(typeName) {}
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        ::x10::regionarray::Dist* (Iface::*getDist) ();
        x10_int (Iface::*hashCode) ();
        void (Iface::*putOverlap) (::x10::regionarray::Region*, ::x10::lang::Place, ::x10::lang::Point*, x10_byte);
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0);
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0);
    template <class R> static ::x10::regionarray::Dist* getDist(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::regionarray::Ghostable>(_refRecv->_getITables())->getDist))();
    }
    template <class R> static ::x10::regionarray::Dist* getDist(R _recv) {
        return _recv->getDist();
    }
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::regionarray::Ghostable>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static void putOverlap(R* _recv, ::x10::regionarray::Region* arg0, ::x10::lang::Place arg1, ::x10::lang::Point* arg2, x10_byte arg3);
    template <class R> static void putOverlap(R _recv, ::x10::regionarray::Region* arg0, ::x10::lang::Place arg1, ::x10::lang::Point* arg2, x10_byte arg3);
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::regionarray::Ghostable>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::x10::regionarray::Ghostable>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};


} } 
#endif // X10_REGIONARRAY_GHOSTABLE_H

namespace x10 { namespace regionarray { 
class Ghostable;
} } 

#ifndef X10_REGIONARRAY_GHOSTABLE_H_NODEPS
#define X10_REGIONARRAY_GHOSTABLE_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/regionarray/Dist.h>
#include <x10/regionarray/Region.h>
#include <x10/lang/Place.h>
#include <x10/lang/Point.h>
#include <x10/lang/Byte.h>
#ifndef X10_REGIONARRAY_GHOSTABLE_H_GENERICS
#define X10_REGIONARRAY_GHOSTABLE_H_GENERICS
template <class R> x10_boolean x10::regionarray::Ghostable::equals(R* _recv, ::x10::lang::Any* arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::x10::regionarray::Ghostable>(_refRecv->_getITables())->equals))(arg0);
}
template <class R> x10_boolean x10::regionarray::Ghostable::equals(R _recv, ::x10::lang::Any* arg0) {
    return _recv->equals(arg0);
}
template <class R> void x10::regionarray::Ghostable::putOverlap(R* _recv, ::x10::regionarray::Region* arg0, ::x10::lang::Place arg1, ::x10::lang::Point* arg2, x10_byte arg3) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::x10::regionarray::Ghostable>(_refRecv->_getITables())->putOverlap))(arg0, arg1, arg2, arg3);
}
template <class R> void x10::regionarray::Ghostable::putOverlap(R _recv, ::x10::regionarray::Region* arg0, ::x10::lang::Place arg1, ::x10::lang::Point* arg2, x10_byte arg3) {
    _recv->putOverlap(arg0, arg1, arg2, arg3);
}
#endif // X10_REGIONARRAY_GHOSTABLE_H_GENERICS
#endif // __X10_REGIONARRAY_GHOSTABLE_H_NODEPS
