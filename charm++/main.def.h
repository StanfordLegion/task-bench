

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::finishedGraph_2_closure : public SDAG::Closure {
      

      finishedGraph_2_closure() {
        init();
      }
      finishedGraph_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finishedGraph_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(finishedGraph_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::workerReady_3_closure : public SDAG::Closure {
      

      workerReady_3_closure() {
        init();
      }
      workerReady_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~workerReady_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(workerReady_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_Main mainProxy;
 */
extern CProxy_Main mainProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainProxy;
}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void finishedGraph();
void workerReady();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}
  CProxy_Main::CProxy_Main(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function
int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      _call_Main_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  new (impl_obj_void) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedGraph();
 */
void CProxy_Main::finishedGraph(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_finishedGraph_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_finishedGraph_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_finishedGraph_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Main::reg_finishedGraph_void() {
  int epidx = CkRegisterEp("finishedGraph()",
      _call_finishedGraph_void, 0, __idx, 0);
  return epidx;
}

void CkIndex_Main::_call_finishedGraph_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->finishedGraph();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::finishedGraph_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void workerReady();
 */
void CProxy_Main::workerReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_workerReady_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_workerReady_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_workerReady_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Main::reg_workerReady_void() {
  int epidx = CkRegisterEp("workerReady()",
      _call_workerReady_void, 0, __idx, 0);
  return epidx;
}

void CkIndex_Main::_call_workerReady_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->workerReady();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::workerReady_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: void finishedGraph();
  idx_finishedGraph_void();

  // REG: void workerReady();
  idx_workerReady_void();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registermain(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("mainProxy","CProxy_Main",sizeof(mainProxy),(void *) &mainProxy,__xlater_roPup_mainProxy);

  _registersubchare();

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void finishedGraph();
void workerReady();
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

}
extern "C" void CkRegisterMainModule(void) {
  _registermain();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Main::virtual_pup(PUP::er &p) {
    recursive_pup<Main>(dynamic_cast<Main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
