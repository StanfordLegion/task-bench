/* Copyright 2018 Stanford University
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
  CProxySection_Subchare sectionProxy;
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

  /// Entry Methods ///
  void finishedGraph();
  void workerReady();
};

#endif //__MAIN_H__
