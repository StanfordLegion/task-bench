#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/op.h"
#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/op_kernel.h"
#include "/usr/common/software/tensorflow/intel-tensorflow/1.8.0-py27/lib/python2.7/site-packages/tensorflow/include/tensorflow/core/framework/shape_inference.h"

using namespace tensorflow;

REGISTER_OP("ThreeInput")
	.Input("middle_input: int32")
	.Input("left_input: int32")
	.Input("right_input: int32")
	.Output("summed: int32")
	.SetShapeFn([](::tensorflow::shape_inference::InferenceContext* c) {
		c->set_output(0, c->input(0));
		return Status::OK();
	});

class ThreeInputOp : public OpKernel {
public:

	explicit ThreeInputOp(OpKernelConstruction* context) : OpKernel(context) {}

	void Compute(OpKernelContext* context) override {
		// get input tensors
		const Tensor& middle_input_tensor = context->input(0);
		const Tensor& left_input_tensor = context->input(1);
		const Tensor& right_input_tensor = context->input(2);
		auto middle_input = middle_input_tensor.flat<int32>();
		auto left_input = left_input_tensor.flat<int32>();
		auto right_input = right_input_tensor.flat<int32>();

		Tensor* output_tensor = NULL;
		OP_REQUIRES_OK(context, context->allocate_output(0, middle_input_tensor.shape(), &output_tensor));
		auto output_flat = output_tensor->flat<int32>();

		int sum = 0;

		const int N_m = middle_input.size();
		const int N_l = left_input.size();
		const int N_r = right_input.size();

		for (int m = 0; m < N_m; ++m) {
			sum += middle_input(m);
		}
		for (int l= 0; l< N_l; ++l) {
			sum += left_input(l);
		}
		for (int r= 0; r< N_r; ++r) {
			sum += right_input(r);
		}

		output_flat(0) = sum;
	}

};

REGISTER_KERNEL_BUILDER(Name("ThreeInput").Device(DEVICE_CPU), ThreeInputOp);
