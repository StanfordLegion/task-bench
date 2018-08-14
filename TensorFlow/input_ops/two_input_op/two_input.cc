#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/op.h"
#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/op_kernel.h"
#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/shape_inference.h"

using namespace tensorflow;

REGISTER_OP("TwoInput")
	.Input("middle_input: int32")
	.Input("outer_input: int32")
	.Output("summed: int32")
	.SetShapeFn([](::tensorflow::shape_inference::InferenceContext* c) {
		c->set_output(0, c->input(0));
		return Status::OK();
	});

class TwoInputOp : public OpKernel {
public:

	explicit TwoInputOp(OpKernelConstruction* context) : OpKernel(context) {}

	void Compute(OpKernelContext* context) override {
		// get input tensors
		const Tensor& middle_input_tensor = context->input(0);
		const Tensor& outer_input_tensor = context->input(1);
		auto middle_input = middle_input_tensor.flat<int32>();
		auto outer_input = outer_input_tensor.flat<int32>();

		Tensor* output_tensor = NULL;
		OP_REQUIRES_OK(context, context->allocate_output(0, middle_input_tensor.shape(), &output_tensor));
		auto output_flat = output_tensor->flat<int32>();

		int sum = 0;

		const int N_m = middle_input.size();
		const int N_o = outer_input.size();

		for (int i = 0; i < N_m; ++i) {
			sum += middle_input(i);
		}
		for (int j = 0; j < N_o; ++j) {
			sum += outer_input(j);
		}
		output_flat(0) = sum;
	}

};

REGISTER_KERNEL_BUILDER(Name("TwoInput").Device(DEVICE_CPU), TwoInputOp);
