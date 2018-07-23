
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Subchare::initGraph_2_closure : public SDAG::Closure {
            int graphIndex;


      initGraph_2_closure() {
        init();
      }
      initGraph_2_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return graphIndex;}
      void pup(PUP::er& __p) {
        __p | graphIndex;
        packClosure(__p);
      }
      virtual ~initGraph_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(initGraph_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Subchare::runTimestep_3_closure : public SDAG::Closure {
      

      runTimestep_3_closure() {
        init();
      }
      runTimestep_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~runTimestep_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(runTimestep_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Subchare::receive_4_closure : public SDAG::Closure {
            std::pair<long,long> input;


      receive_4_closure() {
        init();
      }
      receive_4_closure(CkMigrateMessage*) {
        init();
      }
            std::pair<long,long> & getP0() { return input;}
      void pup(PUP::er& __p) {
        __p | input;
        packClosure(__p);
      }
      virtual ~receive_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(receive_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Subchare::reset_5_closure : public SDAG::Closure {
      

      reset_5_closure() {
        init();
      }
      reset_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~reset_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(reset_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array Subchare: ArrayElement{
Subchare(const VectorWrapper &wrapper);
void initGraph(int graphIndex);
void runTimestep();
void receive(const std::pair<long,long> &input);
void reset();
Subchare(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Subchare::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Subchare::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Subchare::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Subchare::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Subchare::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Subchare(const VectorWrapper &wrapper);
 */
void CProxyElement_Subchare::insert(const VectorWrapper &wrapper, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const VectorWrapper &wrapper
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<VectorWrapper>::type>::type &)wrapper;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<VectorWrapper>::type>::type &)wrapper;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Subchare::idx_Subchare_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initGraph(int graphIndex);
 */
void CProxyElement_Subchare::initGraph(int graphIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int graphIndex
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|graphIndex;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|graphIndex;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Subchare::idx_initGraph_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void runTimestep();
 */
void CProxyElement_Subchare::runTimestep(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Subchare::idx_runTimestep_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive(const std::pair<long,long> &input);
 */
void CProxyElement_Subchare::receive(const std::pair<long,long> &input, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::pair<long,long> &input
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::pair<long,long>>::type>::type &)input;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::pair<long,long>>::type>::type &)input;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Subchare::idx_receive_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reset();
 */
void CProxyElement_Subchare::reset(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Subchare::idx_reset_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Subchare(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Subchare(const VectorWrapper &wrapper);
 */
CkArrayID CProxy_Subchare::ckNew(const VectorWrapper &wrapper, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const VectorWrapper &wrapper
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<VectorWrapper>::type>::type &)wrapper;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<VectorWrapper>::type>::type &)wrapper;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Subchare::idx_Subchare_marshall1(), opts);
  return gId;
}
void CProxy_Subchare::ckNew(const VectorWrapper &wrapper, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const VectorWrapper &wrapper
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<VectorWrapper>::type>::type &)wrapper;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<VectorWrapper>::type>::type &)wrapper;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Subchare::idx_Subchare_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Subchare::ckNew(const VectorWrapper &wrapper, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const VectorWrapper &wrapper
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<VectorWrapper>::type>::type &)wrapper;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<VectorWrapper>::type>::type &)wrapper;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Subchare::idx_Subchare_marshall1(), opts);
  return gId;
}
void CProxy_Subchare::ckNew(const VectorWrapper &wrapper, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const VectorWrapper &wrapper
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<VectorWrapper>::type>::type &)wrapper;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<VectorWrapper>::type>::type &)wrapper;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Subchare::idx_Subchare_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Subchare::reg_Subchare_marshall1() {
  int epidx = CkRegisterEp("Subchare(const VectorWrapper &wrapper)",
      _call_Subchare_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Subchare_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Subchare_marshall1);

  return epidx;
}

void CkIndex_Subchare::_call_Subchare_marshall1(void* impl_msg, void* impl_obj_void)
{
  Subchare* impl_obj = static_cast<Subchare*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const VectorWrapper &wrapper*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<VectorWrapper> wrapper;
  implP|wrapper;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Subchare(std::move(wrapper.t));
}
int CkIndex_Subchare::_callmarshall_Subchare_marshall1(char* impl_buf, void* impl_obj_void) {
  Subchare* impl_obj = static_cast<Subchare*>(impl_obj_void);
  /*Unmarshall pup'd fields: const VectorWrapper &wrapper*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<VectorWrapper> wrapper;
  implP|wrapper;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Subchare(std::move(wrapper.t));
  return implP.size();
}
void CkIndex_Subchare::_marshallmessagepup_Subchare_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const VectorWrapper &wrapper*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<VectorWrapper> wrapper;
  implP|wrapper;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("wrapper");
  implDestP|wrapper;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initGraph(int graphIndex);
 */
void CProxy_Subchare::initGraph(int graphIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int graphIndex
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|graphIndex;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|graphIndex;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Subchare::idx_initGraph_marshall2(),0);
}

// Entry point registration function
int CkIndex_Subchare::reg_initGraph_marshall2() {
  int epidx = CkRegisterEp("initGraph(int graphIndex)",
      _call_initGraph_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_initGraph_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_initGraph_marshall2);

  return epidx;
}

void CkIndex_Subchare::_call_initGraph_marshall2(void* impl_msg, void* impl_obj_void)
{
  Subchare* impl_obj = static_cast<Subchare*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int graphIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> graphIndex;
  implP|graphIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initGraph(std::move(graphIndex.t));
}
int CkIndex_Subchare::_callmarshall_initGraph_marshall2(char* impl_buf, void* impl_obj_void) {
  Subchare* impl_obj = static_cast<Subchare*>(impl_obj_void);
  /*Unmarshall pup'd fields: int graphIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> graphIndex;
  implP|graphIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->initGraph(std::move(graphIndex.t));
  return implP.size();
}
void CkIndex_Subchare::_marshallmessagepup_initGraph_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int graphIndex*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> graphIndex;
  implP|graphIndex;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("graphIndex");
  implDestP|graphIndex;
}
PUPable_def(SINGLE_ARG(Closure_Subchare::initGraph_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void runTimestep();
 */
void CProxy_Subchare::runTimestep(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Subchare::idx_runTimestep_void(),0);
}

// Entry point registration function
int CkIndex_Subchare::reg_runTimestep_void() {
  int epidx = CkRegisterEp("runTimestep()",
      _call_runTimestep_void, 0, __idx, 0);
  return epidx;
}

void CkIndex_Subchare::_call_runTimestep_void(void* impl_msg, void* impl_obj_void)
{
  Subchare* impl_obj = static_cast<Subchare*>(impl_obj_void);
  impl_obj->runTimestep();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Subchare::runTimestep_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive(const std::pair<long,long> &input);
 */
void CProxy_Subchare::receive(const std::pair<long,long> &input, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::pair<long,long> &input
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::pair<long,long>>::type>::type &)input;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::pair<long,long>>::type>::type &)input;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Subchare::idx_receive_marshall4(),0);
}

// Entry point registration function
int CkIndex_Subchare::reg_receive_marshall4() {
  int epidx = CkRegisterEp("receive(const std::pair<long,long> &input)",
      _call_receive_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receive_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receive_marshall4);

  return epidx;
}

void CkIndex_Subchare::_call_receive_marshall4(void* impl_msg, void* impl_obj_void)
{
  Subchare* impl_obj = static_cast<Subchare*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::pair<long,long> &input*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::pair<long,long>> input;
  implP|input;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receive(std::move(input.t));
}
int CkIndex_Subchare::_callmarshall_receive_marshall4(char* impl_buf, void* impl_obj_void) {
  Subchare* impl_obj = static_cast<Subchare*>(impl_obj_void);
  /*Unmarshall pup'd fields: const std::pair<long,long> &input*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::pair<long,long>> input;
  implP|input;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receive(std::move(input.t));
  return implP.size();
}
void CkIndex_Subchare::_marshallmessagepup_receive_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::pair<long,long> &input*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::pair<long,long>> input;
  implP|input;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("input");
  implDestP|input;
}
PUPable_def(SINGLE_ARG(Closure_Subchare::receive_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reset();
 */
void CProxy_Subchare::reset(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Subchare::idx_reset_void(),0);
}

// Entry point registration function
int CkIndex_Subchare::reg_reset_void() {
  int epidx = CkRegisterEp("reset()",
      _call_reset_void, 0, __idx, 0);
  return epidx;
}

void CkIndex_Subchare::_call_reset_void(void* impl_msg, void* impl_obj_void)
{
  Subchare* impl_obj = static_cast<Subchare*>(impl_obj_void);
  impl_obj->reset();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Subchare::reset_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Subchare(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Subchare::reg_Subchare_CkMigrateMessage() {
  int epidx = CkRegisterEp("Subchare(CkMigrateMessage* impl_msg)",
      _call_Subchare_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}

void CkIndex_Subchare::_call_Subchare_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Subchare> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Subchare(const VectorWrapper &wrapper);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initGraph(int graphIndex);
 */
void CProxySection_Subchare::initGraph(int graphIndex, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int graphIndex
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|graphIndex;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|graphIndex;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Subchare::idx_initGraph_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void runTimestep();
 */
void CProxySection_Subchare::runTimestep(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Subchare::idx_runTimestep_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive(const std::pair<long,long> &input);
 */
void CProxySection_Subchare::receive(const std::pair<long,long> &input, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::pair<long,long> &input
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::pair<long,long>>::type>::type &)input;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::pair<long,long>>::type>::type &)input;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Subchare::idx_receive_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reset();
 */
void CProxySection_Subchare::reset(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Subchare::idx_reset_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Subchare(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Subchare::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Subchare(const VectorWrapper &wrapper);
  idx_Subchare_marshall1();

  // REG: void initGraph(int graphIndex);
  idx_initGraph_marshall2();

  // REG: void runTimestep();
  idx_runTimestep_void();

  // REG: void receive(const std::pair<long,long> &input);
  idx_receive_marshall4();

  // REG: void reset();
  idx_reset_void();

  // REG: Subchare(CkMigrateMessage* impl_msg);
  idx_Subchare_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Subchare_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registersubchare(void)
{
  static int _done = 0; if(_done) return; _done = 1;

/* REG: array Subchare: ArrayElement{
Subchare(const VectorWrapper &wrapper);
void initGraph(int graphIndex);
void runTimestep();
void receive(const std::pair<long,long> &input);
void reset();
Subchare(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Subchare::__register("Subchare", sizeof(Subchare));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Subchare::virtual_pup(PUP::er &p) {
    recursive_pup<Subchare>(dynamic_cast<Subchare*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
