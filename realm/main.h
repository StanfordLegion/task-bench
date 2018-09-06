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

#ifndef MAIN_H
#define MAIN_H

#include "realm.h"

typedef long long int coord_t;

typedef Realm::Point<1, coord_t> Point1;
typedef Realm::Rect<1, coord_t> Rect1;

struct CreateRegionArgs {
public:
  Rect1 bounds;
  Realm::Memory memory;
  Realm::Processor dest_proc;
  // Warning: Pointers live on dest_proc
  Realm::RegionInstance *dest_inst;
};

struct CreateRegionDoneArgs {
public:
  Realm::RegionInstance inst;
  Realm::Processor dest_proc;
  // Warning: Pointers live on dest_proc
  Realm::RegionInstance *dest_inst;
};

struct ShardArgs {
public:
  int taskid;
  Realm::Barrier sync;
  Realm::Barrier first_start;
  Realm::Barrier last_start;
  Realm::Barrier first_stop;
  Realm::Barrier last_stop;
};

struct CommArgs {
public:
  int taskid, timestep, num_deps, output_bytes;
  long dset;
  char *output_ptr;
};

#endif
