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

#include "core.h"

typedef long long int coord_t;

typedef Realm::Point<1, coord_t> Point1;
typedef Realm::Rect<1, coord_t> Rect1;

typedef Realm::Point<2, coord_t> Point2;
typedef Realm::Rect<2, coord_t> Rect2;

struct ShardArgs {
public:
  long proc_index;
  long num_procs;
  long num_fields;
  Realm::Memory sysmem;
  Realm::Memory regmem;
  Realm::Barrier sync;
  Realm::Barrier first_start;
  Realm::Barrier last_start;
  Realm::Barrier first_stop;
  Realm::Barrier last_stop;
  // std::vector<TaskGraph> graphs;
  // std::vector<std::vector<RegionInstance> > task_results;
  // std::vector<std::vector<RegionInstance> > raw_exchange;
  // std::vector<std::vector<RegionInstance> > war_exchange;
};

TYPE_IS_SERIALIZABLE(ShardArgs);

struct LeafArgs {
public:
  long point, timestep;
  TaskGraph graph;
  char *output_ptr;
  size_t output_bytes;
  char *scratch_ptr;
  size_t scratch_bytes;
  long n_inputs;
  // std::vector<uintptr_t> input_ptr;
  // std::vector<size_t> input_bytes;
};

TYPE_IS_SERIALIZABLE(LeafArgs);

#endif
