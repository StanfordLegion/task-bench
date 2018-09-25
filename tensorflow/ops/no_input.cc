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

#include "tensorflow/core/framework/op.h"
#include "tensorflow/core/framework/op_kernel.h"
#include "tensorflow/core/framework/shape_inference.h"

#include "core_c.h"

#include "tf_core_wrapper.h"

using namespace tensorflow;

REGISTER_OP("NoInput")
    .Input("task_graph: uint8")
    .Input("timestep: int32")
    .Input("point: int32")
    .Attr("T: {int8, int16, int32, int64}")
    .Output("output: T");

template <typename T>
class NoInputOp : public OpKernel {
public:
  explicit NoInputOp(OpKernelConstruction* context) : OpKernel(context) {}

  void Compute(OpKernelContext* context) override
  {
    // get input tensors
    const Tensor& task_graph_tensor = context->input(0);
    task_graph_t task_graph = constructTaskGraph(task_graph_tensor);

    const Tensor& timestep_tensor = context->input(1);
    const Tensor& point_tensor = context->input(2);
    auto timestep_input = timestep_tensor.flat<int32>();
    auto point_input = point_tensor.flat<int32>();
    long timestep = timestep_input(0);
    long point = point_input(0);

    TensorShape output_shape;
    output_shape.AddDim(2);

    Tensor* output_tensor = NULL;
    OP_REQUIRES_OK(context,
                   context->allocate_output(0, output_shape, &output_tensor));
    auto output_flat =
        output_tensor
            ->flat<T>();  // set output type to any of int8, int16, int32, int64

    output_flat(0) = timestep;  // assign output to correct type
    output_flat(1) = point;

    // Execute Point
    char* output_ptr = (char*)(&output_flat);
    size_t output_bytes = sizeof(output_flat);
    task_graph_execute_point(task_graph, timestep, point, output_ptr,
                             output_bytes, NULL, NULL, 0);
  }
};

// REGISTER_KERNEL_BUILDER(Name("NoInput").Device(DEVICE_CPU), NoInputOp)

// Macro for registering operator for different types (int8, int16, int32,
// int64)
#define REGISTER_KERNEL(type)                                       \
  REGISTER_KERNEL_BUILDER(                                          \
      Name("NoInput").Device(DEVICE_CPU).TypeConstraint<type>("T"), \
      NoInputOp<type>)

REGISTER_KERNEL(int8);
REGISTER_KERNEL(int16);
REGISTER_KERNEL(int32);
REGISTER_KERNEL(int64);

#undef REGISTER_KERNEL
