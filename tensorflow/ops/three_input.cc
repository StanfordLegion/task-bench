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

REGISTER_OP("ThreeInput")
	.Input("first_input: T")
	.Input("second_input: T")
	.Input("third_input: T")
	.Input("task_graph: uint32")
	.Input("timestep: int32")
	.Input("point: int32")
	.Attr("T: {int8, int16, int32, int64}")
	.Output("output: T");

template <typename T>
class ThreeInputOp : public OpKernel {
public:

	explicit ThreeInputOp(OpKernelConstruction* context) : OpKernel(context) {}

	void Compute(OpKernelContext* context) override {
		// get input tensors
		const Tensor& first_input_tensor = context->input(0); // left input
		const Tensor& second_input_tensor = context->input(1); // middle input
		const Tensor& third_input_tensor = context->input(2); // right input
		const Tensor& timestep_tensor = context->input(4); // timestep where this op is being run
		const Tensor& point_tensor = context->input(5); // point where this op is being run
		// convert tensors to readable arrays
		auto first_input = first_input_tensor.flat<T>();
		auto second_input = second_input_tensor.flat<T>();
		auto third_input = third_input_tensor.flat<T>();
		auto timestep_input = timestep_tensor.flat<int32>();
		auto point_input = point_tensor.flat<int32>();
		long timestep = timestep_input(0);
		long point = point_input(0);
		//TESTING
		std::cout << "TIMESTEP: " << timestep << " POINT: " << point << std::endl;
		// construct task graph from specified values
		const Tensor& task_graph_tensor = context->input(3);
		task_graph_t task_graph = constructTaskGraph(task_graph_tensor);

		TensorShape output_shape;
		output_shape.AddDim(2);

		Tensor* output_tensor = NULL;
		OP_REQUIRES_OK(context, context->allocate_output(0, output_shape, &output_tensor));
		auto output_flat = output_tensor->flat<T>();

		std::pair<long, long> first_input_pair = std::make_pair(first_input(0), first_input(1));
		std::pair<long, long> second_input_pair = std::make_pair(second_input(0), second_input(1));
		std::pair<long, long> third_input_pair = std::make_pair(third_input(0), third_input(1));

		std::pair<long, long> *input[3] = { // array of pointers to pairs
			&first_input_pair,
			&second_input_pair,
			&third_input_pair
		};

		for (auto pair : input) {
			std::cout << "INPUT: " << pair->first << " " << pair->second << std::endl;
		}

		output_flat(0) = timestep;
		output_flat(1) = point;

		// Execute Point
		char *output_ptr = (char *)(&output_flat);
		size_t output_bytes = sizeof(output_flat);
		const char **input_ptr = (const char **)(input);
		size_t n_inputs = 3;
		size_t input_bytes[n_inputs] = {sizeof(*input[0]), sizeof(*input[1]), sizeof(*input[2])};
		
		task_graph_execute_point(task_graph, timestep, point, output_ptr, output_bytes, input_ptr, input_bytes, n_inputs);
	}
};

// REGISTER_KERNEL_BUILDER(Name("ThreeInput").Device(DEVICE_CPU), ThreeInputOp);

// Macro for registering operator for different types (int8, int16, int32, int64)
#define REGISTER_KERNEL(type)												\
	REGISTER_KERNEL_BUILDER(												\
		Name("ThreeInput").Device(DEVICE_CPU).TypeConstraint<type>("T"),	\
		ThreeInputOp<type>)

REGISTER_KERNEL(int8);
REGISTER_KERNEL(int16);
REGISTER_KERNEL(int32);
REGISTER_KERNEL(int64);

#undef REGISTER_KERNEL
