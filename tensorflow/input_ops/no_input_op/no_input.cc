#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/op.h"
#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/op_kernel.h"
#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/shape_inference.h"
#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/register_types.h"

#include "../../../core/core_c.h"

using namespace tensorflow;

REGISTER_OP("NoInput")
	.Input("task_graph: uint32")
	.Input("timestep: int32")
	.Input("point: int32")
	.Attr("T: {int8, int16, int32, int64}")
	.Output("output: T");

template <typename T>
class NoInputOp : public OpKernel {
public:

	explicit NoInputOp(OpKernelConstruction* context) : OpKernel(context) {}

	void Compute(OpKernelContext* context) override {
		// get input tensors
		const Tensor& task_graph_tensor = context->input(0);
		task_graph_t task_graph = constructTaskGraph(task_graph_tensor);

		const Tensor& timestep_tensor = context->input(1);
		const Tensor& point_tensor = context->input(2);
		auto timestep_input = timestep_tensor.flat<int32>();
		auto point_input = point_tensor.flat<int32>();
		long timestep = timestep_input(0);
		long point = point_input(0);
		//TESTING
		std::cout << "TIMESTEP: " << timestep << " POINT: " << point << std::endl;

		TensorShape output_shape;
		output_shape.AddDim(2);

		Tensor* output_tensor = NULL;
		OP_REQUIRES_OK(context, context->allocate_output(0, output_shape, &output_tensor));
		auto output_flat = output_tensor->flat<T>(); // set output type to any of int8, int16, int32, int64

		output_flat(0) = timestep; // assign output to correct type
		output_flat(1) = point;

		// Execute Point
		char *output_ptr = (char *)(&output_flat);
		size_t output_bytes = sizeof(output_flat);
		task_graph_execute_point(task_graph, timestep, point, output_ptr, output_bytes, NULL, NULL, 0);
	}

private:

	task_graph_t constructTaskGraph(const Tensor& task_graph_tensor) {
		auto tg = task_graph_tensor.flat<uint32>();

		kernel_t kernel = { kernel_type_t(tg(4)), tg(5) };
		task_graph_t task_graph = { tg(0), tg(1), dependence_type_t(tg(2)), tg(3), kernel, tg(6), tg(7) };
		return task_graph;
	}

};

// REGISTER_KERNEL_BUILDER(Name("NoInput").Device(DEVICE_CPU), NoInputOp)

// Macro for registering operator for different types (int8, int16, int32, int64)
#define REGISTER_KERNEL(type)											\
	REGISTER_KERNEL_BUILDER(											\
		Name("NoInput").Device(DEVICE_CPU).TypeConstraint<type>("T"),	\
		NoInputOp<type>)

REGISTER_KERNEL(int8);
REGISTER_KERNEL(int16);
REGISTER_KERNEL(int32);
REGISTER_KERNEL(int64);

#undef REGISTER_KERNEL