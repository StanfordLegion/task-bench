#ifndef __MAIN_H__
#define __MAIN_H__

#include "main.decl.h"
#include "subchare.decl.h"
#include "../core/core.h"
#include "../core/timer.h"
#include <vector>


class Main : public CBase_Main {

 private:

  /// Member Variables (Object State) ///
  std::vector<CProxy_Subchare> graphSubchareVec;
  int numFinished;
  int numSubchares;
  int numReady;
  Timer timer;
  App app;
  double start;
  double end;
	double totalTimeElapsed;
	int numRuns;
	int numRunsDone;

 public:

  /// Constructors ///
  Main(CkArgMsg* msg);
  Main(CkMigrateMessage* msg);

  /// Entry Methods ///
  void finishedGraph();
  void workerReady();
};

#endif //__MAIN_H__
