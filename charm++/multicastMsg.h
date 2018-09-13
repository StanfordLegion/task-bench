
#ifndef _MULTICASTMSG_H_
#define _MULTICASTMSG_H_

#include "ckmulticast.h"

/* Charm++ message class used for section multicasts */
class MulticastMsg : public CkMcastBaseMsg, public CMessage_MulticastMsg {};

#endif

