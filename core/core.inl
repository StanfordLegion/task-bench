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

// IMPORTANT: Keep serializer up to date with struct definition

inline size_t get_serialized_size1(const Kernel &t)
{
  return get_serialized_size1(t.type) +
    get_serialized_size1(t.iterations) +
    get_serialized_size1(t.subgraphs);
}

inline void serialize1(void *&buffer, const Kernel &t)
{
  serialize1(buffer, t.type);
  serialize1(buffer, t.iterations);
  serialize1(buffer, t.subgraphs);
}

inline Kernel deserialize1(const void *&buffer, phantom<Kernel>)
{
  Kernel t;
  t.type = deserialize1(buffer, phantom<KernelType>());
  t.iterations = deserialize1(buffer, phantom<long>());
  t.subgraphs = deserialize1(buffer, phantom<std::vector<TaskGraph> >());
  return t;
}

inline size_t get_serialized_size1(const TaskGraph &t)
{
  return get_serialized_size1(t.timesteps) +
    get_serialized_size1(t.max_width) +
    get_serialized_size1(t.region_size) +
    get_serialized_size1(t.dependence) +
    get_serialized_size1(t.kernel);
}

inline void serialize1(void *&buffer, const TaskGraph &t)
{
  serialize1(buffer, t.timesteps);
  serialize1(buffer, t.max_width);
  serialize1(buffer, t.region_size);
  serialize1(buffer, t.dependence);
  serialize1(buffer, t.kernel);
}

inline TaskGraph deserialize1(const void *&buffer, phantom<TaskGraph>)
{
  TaskGraph t;
  t.timesteps = deserialize1(buffer, phantom<long>());
  t.max_width = deserialize1(buffer, phantom<long>());
  t.region_size = deserialize1(buffer, phantom<long>());
  t.dependence = deserialize1(buffer, phantom<DependenceType>());
  t.kernel = deserialize1(buffer, phantom<Kernel>());
  return t;
}
