/* Copyright 2019 Stanford University
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

#ifndef __SUBCHARE_H__
#define __SUBCHARE_H__

#include "multicastMsg.h"
#include "../core/core.h"
#include <vector>
#include <set>

class Subchare : public CBase_Subchare {

 private:

  /// Member Variables (Object State) ///
  int currentTimestep;
  int graphIndex;
  std::vector<std::set<long> > notReceived;
  std::vector<std::set<long> > whereToSend;
  std::map<std::pair<long, long>, long> receivingMap;
  std::vector<std::vector<std::vector<char> > > inputs;
  std::vector<std::vector<char *> > input_ptrs;
  std::vector<std::vector<size_t> > input_bytes;
  std::vector<char> output;
  std::vector<char> scratch;
  bool sent;
  bool firstTime;
  App app;
  TaskGraph graph;
  CkSectionInfo sid;

  void checkAndRun(bool receiving);

 public:

  /// Constructors ///
  Subchare(VectorWrapper wrapper, int graphIndex);

  /// Entry Methods ///
  void initGraph(MulticastMsg* msg);
  void runTimestep(MulticastMsg* msg);
  void receive(const std::vector<char> &input);
  void reset(MulticastMsg* msg);

};

#endif
