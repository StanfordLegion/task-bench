/* Copyright 2020 Stanford University
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

inline task_graph_t constructTaskGraph(const Tensor& tg) {
  assert(tg.tensor_data().size() == sizeof(task_graph_t));
  return *reinterpret_cast<const task_graph_t *>(tg.tensor_data().data());
}

inline void execute_point(OpKernelContext* context)
{
  task_graph_t graph = constructTaskGraph(context->input(0));
  long timestep = context->input(1).flat<int32>()(0);
  long point = context->input(2).flat<int32>()(0);

  TensorShape output_shape = context->input(3).shape();
  Tensor* output = NULL;
  OP_REQUIRES_OK(context,
                 context->forward_input_or_allocate_output({3}, 0, output_shape, &output));

  TensorShape scratch_shape = context->input(4).shape();
  Tensor* scratch = NULL;
  OP_REQUIRES_OK(context,
                 context->forward_input_or_allocate_output({4}, 1, scratch_shape, &scratch));

  size_t n_inputs = context->num_inputs() - 5;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  for (size_t i = 0; i < n_inputs; ++i) {
    auto input_tensor = context->input(i + 5);
    input_ptrs.push_back(input_tensor.tensor_data().data());
    input_bytes.push_back(input_tensor.tensor_data().size());
  }

  task_graph_execute_point_scratch(graph, timestep, point,
                           const_cast<char *>(output->tensor_data().data()), output->tensor_data().size(),
                           input_ptrs.data(), input_bytes.data(), n_inputs,
                           const_cast<char *>(scratch->tensor_data().data()), scratch->tensor_data().size());
}

inline void prepare_scratch(OpKernelContext* context)
{
  task_graph_t graph = constructTaskGraph(context->input(0));

  TensorShape scratch_shape;
  scratch_shape.AddDim(graph.scratch_bytes_per_task);

  Tensor* scratch = NULL;
  OP_REQUIRES_OK(context,
                 context->allocate_output(0, scratch_shape, &scratch));

  task_graph_prepare_scratch(const_cast<char *>(scratch->tensor_data().data()), scratch->tensor_data().size());
}

class ExecutePointOp : public OpKernel {
public:
  explicit ExecutePointOp(OpKernelConstruction* context) : OpKernel(context) {}

  void Compute(OpKernelContext* context) override
  {
    execute_point(context);
  }
};

class PrepareScratchOp : public OpKernel {
public:
  explicit PrepareScratchOp(OpKernelConstruction* context) : OpKernel(context) {}

  void Compute(OpKernelContext* context) override
  {
    prepare_scratch(context);
  }
};

#endif
