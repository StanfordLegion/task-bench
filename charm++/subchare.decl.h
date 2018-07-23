#ifndef _DECL_subchare_H_
#define _DECL_subchare_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "vectorWrapper.h"

/* DECLS: array Subchare: ArrayElement{
Subchare(const VectorWrapper &wrapper);
void initGraph(int graphIndex);
void runTimestep();
void receive(const std::pair<long,long> &input);
void reset();
Subchare(CkMigrateMessage* impl_msg);
};
 */
 class Subchare;
 class CkIndex_Subchare;
 class CProxy_Subchare;
 class CProxyElement_Subchare;
 class CProxySection_Subchare;
/* --------------- index object ------------------ */
class CkIndex_Subchare:public CkIndex_ArrayElement{
  public:
    typedef Subchare local_t;
    typedef CkIndex_Subchare index_t;
    typedef CProxy_Subchare proxy_t;
    typedef CProxyElement_Subchare element_t;
    typedef CProxySection_Subchare section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Subchare(const VectorWrapper &wrapper);
     */
    // Entry point registration at startup
    
    static int reg_Subchare_marshall1();
    // Entry point index lookup
    
    inline static int idx_Subchare_marshall1() {
      static int epidx = reg_Subchare_marshall1();
      return epidx;
    }

    
    static int ckNew(const VectorWrapper &wrapper) { return idx_Subchare_marshall1(); }
    
    static void _call_Subchare_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Subchare_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Subchare_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Subchare_marshall1(PUP::er &p,void *msg);
    /* DECLS: void initGraph(int graphIndex);
     */
    // Entry point registration at startup
    
    static int reg_initGraph_marshall2();
    // Entry point index lookup
    
    inline static int idx_initGraph_marshall2() {
      static int epidx = reg_initGraph_marshall2();
      return epidx;
    }

    
    inline static int idx_initGraph(void (Subchare::*)(int graphIndex) ) {
      return idx_initGraph_marshall2();
    }


    
    static int initGraph(int graphIndex) { return idx_initGraph_marshall2(); }
    
    static void _call_initGraph_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initGraph_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_initGraph_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_initGraph_marshall2(PUP::er &p,void *msg);
    /* DECLS: void runTimestep();
     */
    // Entry point registration at startup
    
    static int reg_runTimestep_void();
    // Entry point index lookup
    
    inline static int idx_runTimestep_void() {
      static int epidx = reg_runTimestep_void();
      return epidx;
    }

    
    inline static int idx_runTimestep(void (Subchare::*)() ) {
      return idx_runTimestep_void();
    }


    
    static int runTimestep() { return idx_runTimestep_void(); }
    
    static void _call_runTimestep_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_runTimestep_void(void* impl_msg, void* impl_obj);
    /* DECLS: void receive(const std::pair<long,long> &input);
     */
    // Entry point registration at startup
    
    static int reg_receive_marshall4();
    // Entry point index lookup
    
    inline static int idx_receive_marshall4() {
      static int epidx = reg_receive_marshall4();
      return epidx;
    }

    
    inline static int idx_receive(void (Subchare::*)(const std::pair<long,long> &input) ) {
      return idx_receive_marshall4();
    }


    
    static int receive(const std::pair<long,long> &input) { return idx_receive_marshall4(); }
    
    static void _call_receive_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receive_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receive_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receive_marshall4(PUP::er &p,void *msg);
    /* DECLS: void reset();
     */
    // Entry point registration at startup
    
    static int reg_reset_void();
    // Entry point index lookup
    
    inline static int idx_reset_void() {
      static int epidx = reg_reset_void();
      return epidx;
    }

    
    inline static int idx_reset(void (Subchare::*)() ) {
      return idx_reset_void();
    }


    
    static int reset() { return idx_reset_void(); }
    
    static void _call_reset_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reset_void(void* impl_msg, void* impl_obj);
    /* DECLS: Subchare(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Subchare_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Subchare_CkMigrateMessage() {
      static int epidx = reg_Subchare_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Subchare_CkMigrateMessage(); }
    
    static void _call_Subchare_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Subchare_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Subchare : public CProxyElement_ArrayElement{
  public:
    typedef Subchare local_t;
    typedef CkIndex_Subchare index_t;
    typedef CProxy_Subchare proxy_t;
    typedef CProxyElement_Subchare element_t;
    typedef CProxySection_Subchare section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_Subchare(void) {
    }
    CProxyElement_Subchare(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    Subchare *ckLocal(void) const
    { return (Subchare *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Subchare(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Subchare(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Subchare(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Subchare(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Subchare(const VectorWrapper &wrapper);
 */
    
    void insert(const VectorWrapper &wrapper, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void initGraph(int graphIndex);
 */
    
    void initGraph(int graphIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void runTimestep();
 */
    
    void runTimestep(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receive(const std::pair<long,long> &input);
 */
    
    void receive(const std::pair<long,long> &input, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void reset();
 */
    
    void reset(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Subchare(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_Subchare)
/* ---------------- collective proxy -------------- */
 class CProxy_Subchare : public CProxy_ArrayElement{
  public:
    typedef Subchare local_t;
    typedef CkIndex_Subchare index_t;
    typedef CProxy_Subchare proxy_t;
    typedef CProxyElement_Subchare element_t;
    typedef CProxySection_Subchare section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_Subchare(void) {
    }
    CProxy_Subchare(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_Subchare operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_Subchare(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Subchare operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_Subchare(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Subchare operator [] (int idx) const 
        {return CProxyElement_Subchare(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_Subchare operator () (int idx) const 
        {return CProxyElement_Subchare(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_Subchare(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Subchare(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Subchare(const VectorWrapper &wrapper);
 */
    
    static CkArrayID ckNew(const VectorWrapper &wrapper, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const VectorWrapper &wrapper, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const VectorWrapper &wrapper, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const VectorWrapper &wrapper, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initGraph(int graphIndex);
 */
    
    void initGraph(int graphIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void runTimestep();
 */
    
    void runTimestep(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receive(const std::pair<long,long> &input);
 */
    
    void receive(const std::pair<long,long> &input, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void reset();
 */
    
    void reset(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Subchare(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Subchare)
/* ---------------- section proxy -------------- */
 class CProxySection_Subchare : public CProxySection_ArrayElement{
  public:
    typedef Subchare local_t;
    typedef CkIndex_Subchare index_t;
    typedef CProxy_Subchare proxy_t;
    typedef CProxyElement_Subchare element_t;
    typedef CProxySection_Subchare section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_Subchare(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Subchare operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_Subchare(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Subchare operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_Subchare(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Subchare operator [] (int idx) const 
        {return CProxyElement_Subchare(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_Subchare operator () (int idx) const 
        {return CProxyElement_Subchare(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.push_back(CkArrayIndex1D(i));
      return CkSectionID(aid, al.data(), al.size(), factor);
    } 
    CProxySection_Subchare(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Subchare(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Subchare(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Subchare(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Subchare(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Subchare(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: Subchare(const VectorWrapper &wrapper);
 */
    

/* DECLS: void initGraph(int graphIndex);
 */
    
    void initGraph(int graphIndex, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void runTimestep();
 */
    
    void runTimestep(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receive(const std::pair<long,long> &input);
 */
    
    void receive(const std::pair<long,long> &input, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void reset();
 */
    
    void reset(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Subchare(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_Subchare)
#define Subchare_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_Subchare>CBase_Subchare;


/* ---------------- method closures -------------- */
class Closure_Subchare {
  public:


    struct initGraph_2_closure;


    struct runTimestep_3_closure;


    struct receive_4_closure;


    struct reset_5_closure;


};

extern void _registersubchare(void);
#endif
