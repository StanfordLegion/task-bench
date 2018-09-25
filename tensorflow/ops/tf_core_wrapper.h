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

#ifndef TF_CORE_WRAPPER_H
#define TF_CORE_WRAPPER_H

#include "tensorflow/core/framework/op.h"
#include "tensorflow/core/framework/op_kernel.h"
#include "tensorflow/core/framework/shape_inference.h"

#include "core_c.h"

using namespace tensorflow;

inline task_graph_t constructTaskGraph(const Tensor& task_graph_tensor) {
  auto tg = task_graph_tensor.flat<uint64>();

                
  uint64_t fraction_connected = tg(6);
  kernel_t kernel = { kernel_type_t(tg(7)), long(tg(8)), int(tg(9)) };
  task_graph_t task_graph = {
    long(tg(0)),
    long(tg(1)),
    long(tg(2)),
    dependence_type_t(tg(3)),
    long(tg(4)),
    long(tg(5)),
    *reinterpret_cast<double*>(&fraction_connected),
    kernel,
    size_t(tg(10)),
    size_t(tg(11))
  };
  return task_graph;
}

#endif
