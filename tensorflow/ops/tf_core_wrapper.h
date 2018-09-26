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
  auto tg = task_graph_tensor.flat<uint8>();

  task_graph_t result;
  for (size_t i = 0; i < sizeof(result); ++i) {
    reinterpret_cast<uint8_t *>(&result)[i] = tg(i);
  }
  return result;
}

inline void compute_generic(OpKernelContext* context)
{
  task_graph_t graph = constructTaskGraph(context->input(0));
  long timestep = context->input(1).flat<int32>()(0);
  long point = context->input(2).flat<int32>()(0);

  size_t n_inputs = context->num_inputs() - 3;
  std::vector<std::vector<char> > input_data;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  for (size_t i = 0; i < n_inputs; ++i) {
    auto input_tensor = context->input(i + 3);
    auto input_flat = input_tensor.flat<uint8>();

    input_data.emplace_back(input_tensor.shape().num_elements());
    for (size_t j = 0; j < input_data[i].size(); ++j) {
      input_data[i][j] = input_flat(j);
    }

    input_ptrs.push_back(input_data[i].data());
    input_bytes.push_back(input_data[i].size());
  }

  std::vector<char> output(graph.output_bytes_per_task);

  task_graph_execute_point(graph, timestep, point,
                           const_cast<char *>(output.data()), output.size(),
                           input_ptrs.data(), input_bytes.data(), n_inputs);

  TensorShape output_shape;
  output_shape.AddDim(output.size());

  Tensor* output_tensor = NULL;
  OP_REQUIRES_OK(context,
                 context->allocate_output(0, output_shape, &output_tensor));
  auto output_flat = output_tensor->flat<uint8>();
  for (size_t i = 0; i < output.size(); ++i) {
    output_flat(i) = output[i];
  }
}

class TaskBenchOp : public OpKernel {
public:
  explicit TaskBenchOp(OpKernelConstruction* context) : OpKernel(context) {}

  void Compute(OpKernelContext* context) override
  {
    compute_generic(context);
  }
};

#endif
