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

#include "core.h"
#include "core_c.h"

dependencies_t wrap_consume(std::vector<std::pair<long, long> > &&d) {
  std::vector<std::pair<long, long> > *d_ptr = new std::vector<std::pair<long, long> >;
  d_ptr->swap(d);
  dependencies_t result;
  result.impl = reinterpret_cast<void *>(d_ptr);
  return result;
}

std::vector<std::pair<long, long> > * unwrap(dependencies_t d) {
  return reinterpret_cast<std::vector<std::pair<long, long> > *>(d.impl);
}

App * unwrap(app_t a) {
  return reinterpret_cast<App *>(a.impl);
}

interval_t wrap(const std::pair<long, long> &p) {
  interval_t result;
  result.begin = p.first;
  result.end = p.second;
  return result;
}

task_graphs_t wrap(const std::vector<TaskGraph> &g) {
  std::vector<TaskGraph> *g_ptr = new std::vector<TaskGraph>(g);
  task_graphs_t result;
  result.impl = reinterpret_cast<void *>(g_ptr);
  return result;
}

void kernel_execute(kernel_t kernel)
{
  Kernel k(kernel);
  k.execute();
}

long task_graph_offset_at_timestep(task_graph_t graph, long timestep)
{
  TaskGraph t(graph);
  return t.offset_at_timestep(timestep);
}

long task_graph_width_at_timestep(task_graph_t graph, long timestep)
{
  TaskGraph t(graph);
  return t.width_at_timestep(timestep);
}

long task_graph_max_dependence_sets(task_graph_t graph)
{
  TaskGraph t(graph);
  return t.max_dependence_sets();
}

long task_graph_dependence_set_at_timestep(task_graph_t graph, long timestep)
{
  TaskGraph t(graph);
  return t.dependence_set_at_timestep(timestep);
}

dependencies_t task_graph_dependencies(task_graph_t graph, long dset, long point)
{
  TaskGraph t(graph);
  return wrap_consume(t.dependencies(dset, point));
}

long dependencies_get_num_intervals(dependencies_t dependencies)
{
  std::vector<std::pair<long, long> > *d = unwrap(dependencies);
  return d->size();
}

interval_t dependencies_get_interval(dependencies_t dependencies, long index)
{
  std::vector<std::pair<long, long> > *d = unwrap(dependencies);
  return wrap((*d)[index]);
}

task_graphs_t app_task_graphs(app_t app)
{
  App *a = unwrap(app);
  return wrap(a->graphs);
}

bool app_verbose(app_t app)
{
  App *a = unwrap(app);
  return a->verbose;
}

void app_check(app_t app)
{
  App *a = unwrap(app);
  a->check();
}

void app_display(app_t app)
{
  App *a = unwrap(app);
  a->display();
}
