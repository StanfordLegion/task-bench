#ifndef __X10_UTIL_TEAM__LOCALTEAMSTATE__TREESTRUCTURE_H
#define __X10_UTIL_TEAM__LOCALTEAMSTATE__TREESTRUCTURE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
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
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class Team__LocalTeamState__TreeStructure_Strings {
  public:
    static ::x10::lang::String sl__171343;
    static ::x10::lang::String sl__171344;
    static ::x10::lang::String sl__171341;
    static ::x10::lang::String sl__171345;
    static ::x10::lang::String sl__171346;
    static ::x10::lang::String sl__171342;
};

class Team__LocalTeamState__TreeStructure   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::util::Team__LocalTeamState__TreeStructure* operator->() { return this; }
    
    x10_long FMGL(parentIndex);
    
    x10_long FMGL(child1Index);
    
    x10_long FMGL(child2Index);
    
    x10_long FMGL(totalChildren);
    
    x10_int FMGL(countsSum);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::util::Team__LocalTeamState__TreeStructure > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::util::Team__LocalTeamState__TreeStructure _alloc(){::x10::util::Team__LocalTeamState__TreeStructure t; return t; }
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::x10::util::Team__LocalTeamState__TreeStructure other) {
        return (((((::x10aux::struct_equals((*this)->FMGL(parentIndex), other->FMGL(parentIndex))) &&
        (::x10aux::struct_equals((*this)->FMGL(child1Index), other->FMGL(child1Index)))) &&
        (::x10aux::struct_equals((*this)->FMGL(child2Index),
                                 other->FMGL(child2Index)))) &&
        (::x10aux::struct_equals((*this)->FMGL(totalChildren),
                                 other->FMGL(totalChildren)))) &&
        (::x10aux::struct_equals((*this)->FMGL(countsSum),
                                 other->FMGL(countsSum))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::util::Team__LocalTeamState__TreeStructure other) {
        return (((((::x10aux::struct_equals((*this)->FMGL(parentIndex),
                                            other->FMGL(parentIndex))) &&
        (::x10aux::struct_equals((*this)->FMGL(child1Index),
                                 other->FMGL(child1Index)))) &&
        (::x10aux::struct_equals((*this)->FMGL(child2Index),
                                 other->FMGL(child2Index)))) &&
        (::x10aux::struct_equals((*this)->FMGL(totalChildren),
                                 other->FMGL(totalChildren)))) &&
        (::x10aux::struct_equals((*this)->FMGL(countsSum),
                                 other->FMGL(countsSum))));
        
    }
    ::x10::util::Team__LocalTeamState__TreeStructure x10__util__Team__LocalTeamState__TreeStructure____this__x10__util__Team__LocalTeamState__TreeStructure(
      ) {
        return (*this);
        
    }
    void _constructor(x10_long parentIndex, x10_long child1Index,
                      x10_long child2Index, x10_long totalChildren,
                      x10_int countsSum) {
        FMGL(parentIndex) = parentIndex;
        FMGL(child1Index) = child1Index;
        FMGL(child2Index) = child2Index;
        FMGL(totalChildren) = totalChildren;
        FMGL(countsSum) = countsSum;
        
    }
    static ::x10::util::Team__LocalTeamState__TreeStructure _make(
             x10_long parentIndex, x10_long child1Index, x10_long child2Index,
             x10_long totalChildren, x10_int countsSum) {
        ::x10::util::Team__LocalTeamState__TreeStructure this_; 
        this_->_constructor(parentIndex, child1Index, child2Index,
        totalChildren, countsSum);
        return this_;
    }
    
    void __fieldInitializers_x10_util_Team_LocalTeamState_TreeStructure(
      ) {
     
    }
    
    static void _serialize(::x10::util::Team__LocalTeamState__TreeStructure this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::util::Team__LocalTeamState__TreeStructure _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::util::Team__LocalTeamState__TreeStructure this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__TREESTRUCTURE_H

namespace x10 { namespace util { 
class Team__LocalTeamState__TreeStructure;
} } 

#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__TREESTRUCTURE_H_NODEPS
#define X10_UTIL_TEAM__LOCALTEAMSTATE__TREESTRUCTURE_H_NODEPS
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__TREESTRUCTURE_H_GENERICS
#define X10_UTIL_TEAM__LOCALTEAMSTATE__TREESTRUCTURE_H_GENERICS
#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__TREESTRUCTURE_H_GENERICS
#endif // __X10_UTIL_TEAM__LOCALTEAMSTATE__TREESTRUCTURE_H_NODEPS
