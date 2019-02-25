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

#include "tensorflow/core/framework/op.h"
#include "tensorflow/core/framework/op_kernel.h"
#include "tensorflow/core/framework/shape_inference.h"

#include "core_c.h"

#include "tf_core_wrapper.h"

using namespace tensorflow;

REGISTER_OP("TaskBenchOp")
    .Attr("n_inputs: int >= 0")
    .Input("task_graph: uint8")
    .Input("timestep: int32")
    .Input("point: int32")
    .Input("inputs: n_inputs * uint8")
    .Output("output: uint8");

REGISTER_KERNEL_BUILDER(Name("TaskBenchOp").Device(DEVICE_CPU), TaskBenchOp)
