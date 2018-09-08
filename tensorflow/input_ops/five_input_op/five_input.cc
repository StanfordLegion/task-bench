#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/op.h"
#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/op_kernel.h"
#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/shape_inference.h"

#include "../../../core/core_c.h"

using namespace tensorflow;

REGISTER_OP("FiveInput")
	.Input("first_input: T")
	.Input("second_input: T")
	.Input("third_input: T")
	.Input("fourth_input: T")
	.Input("fifth_input: T")
	.Input("task_graph: uint32")
	.Input("timestep: int32")
	.Input("point: int32")
	.Attr("T: {int8, int16, int32, int64}")
	.Output("output: T");

template <typename T>
class FiveInputOp : public OpKernel {
public:

	explicit FiveInputOp(OpKernelConstruction* context) : OpKernel(context) {}

	void Compute(OpKernelContext* context) override {
		// get input tensors
		const Tensor& first_input_tensor = context->input(0);
		const Tensor& second_input_tensor = context->input(1);
		const Tensor& third_input_tensor = context->input(2);
		const Tensor& fourth_input_tensor = context->input(3);
		const Tensor& fifth_input_tensor = context->input(4);
		const Tensor& timestep_tensor = context->input(6); // timestep where this op is being run
		const Tensor& point_tensor = context->input(7); // point where this op is being run
		// convert tensors to readable arrays
		auto first_input = first_input_tensor.flat<T>();
		auto second_input = second_input_tensor.flat<T>();
		auto third_input = third_input_tensor.flat<T>();
		auto fourth_input = fourth_input_tensor.flat<T>();
		auto fifth_input = fifth_input_tensor.flat<T>();
		auto timestep_input = timestep_tensor.flat<int32>();
		auto point_input = point_tensor.flat<int32>();
		long timestep = timestep_input(0);
		long point = point_input(0);
		// construct task graph from specified values
		const Tensor& task_graph_tensor = context->input(5);
		task_graph_t task_graph = constructTaskGraph(task_graph_tensor);

		TensorShape output_shape;
		output_shape.AddDim(2);

		Tensor* output_tensor = NULL;
		OP_REQUIRES_OK(context, context->allocate_output(0, output_shape, &output_tensor));
		auto output_flat = output_tensor->flat<T>();

		std::pair<long, long> first_input_pair = std::make_pair(first_input(0), first_input(1));
		std::pair<long, long> second_input_pair = std::make_pair(second_input(0), second_input(1));
		std::pair<long, long> third_input_pair = std::make_pair(third_input(0), third_input(1));
		std::pair<long, long> fourth_input_pair = std::make_pair(fourth_input(0), fourth_input(1));
		std::pair<long, long> fifth_input_pair = std::make_pair(fifth_input(0), fifth_input(1));

		std::pair<long, long> *input[5] = { // array of pointers to pairs
			&first_input_pair,
			&second_input_pair,
			&third_input_pair,
			&fourth_input_pair,
			&fifth_input_pair
		};

		output_flat(0) = timestep;
		output_flat(1) = point;

		// Execute Point
		char *output_ptr = (char *)(&output_flat);
		size_t output_bytes = sizeof(output_flat);
		const char **input_ptr = (const char **)(input);
		size_t n_inputs = 4;
		size_t input_bytes[n_inputs] = {sizeof(*input[0]), sizeof(*input[1]), sizeof(*input[2]), sizeof(*input[3]), sizeof(*input[4])};
		
		task_graph_execute_point(task_graph, timestep, point, output_ptr, output_bytes, input_ptr, input_bytes, n_inputs);
	}

private:

	task_graph_t constructTaskGraph(const Tensor& task_graph_tensor) {
		auto tg = task_graph_tensor.flat<uint32>();

		kernel_t kernel = { kernel_type_t(tg(4)), tg(5) };
		task_graph_t task_graph = { tg(0), tg(1), dependence_type_t(tg(2)), tg(3), kernel, tg(6), tg(7) };
		return task_graph;
	}

};

// REGISTER_KERNEL_BUILDER(Name("FourInput").Device(DEVICE_CPU), FourInputOp);

// Macro for registering operator for different types (int8, int16, int32, int64)
#define REGISTER_KERNEL(type)												\
	REGISTER_KERNEL_BUILDER(												\
		Name("FiveInput").Device(DEVICE_CPU).TypeConstraint<type>("T"),	\
		FiveInputOp<type>)

REGISTER_KERNEL(int8);
REGISTER_KERNEL(int16);
REGISTER_KERNEL(int32);
REGISTER_KERNEL(int64);

#undef REGISTER_KERNEL
