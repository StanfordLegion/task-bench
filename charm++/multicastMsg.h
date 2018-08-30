
#ifndef _MULTICASTMSG_H_
#define _MULTICASTMSG_H_

//#include "subchare.def.h"
#include "ckmulticast.h"

/* Charm++ message class used for section multicasts */
class MulticastMsg : public CkMcastBaseMsg, public CMessage_MulticastMsg {
 public:
  MulticastMsg() = default;
};

//#include "subchare.decl.h"

#endif

