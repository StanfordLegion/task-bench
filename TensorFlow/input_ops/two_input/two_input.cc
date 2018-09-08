#include "/Users/nicogarcia/tensorflow/lib/python2.7/site-packages/tensorflow/include/core/framework/op.h"
#include "/Users/nicogarcia/tensorflow/lib/python2.7/site-packages/tensorflow/include/core/framework/shape_inference.h"
#include "/Users/nicogarcia/tensorflow/lib/python2.7/site-packages/tensorflow/include/core/framework/op_kernel.h"

using namespace tensorflow;

class TwoInputOp : public OpKernel {
 public:
  explicit TwoInputOp(OpKernelConstruction* context) : OpKernel(context) {}

  void Compute(OpKernelContext* context) override {
    // Grab the input tensor
    const Tensor& middle_input_tensor = context->input(0);
    const Tensor& outer_input_tensor = context->input(1);
    auto middle_input = middle_input_tensor.flat<int32>();
    auto outer_input = outer_input_tensor.flat<int32>();

    // Create an output tensor
    Tensor* output_tensor = NULL;
    OP_REQUIRES_OK(context, context->allocate_output(0, middle_input_tensor.shape(),
                                                     &output_tensor));
    auto output_flat = output_tensor->flat<int32>();

    // Set all but the first element of the output tensor to 0.
    const int N_m = middle_input.size()
    const int N_o = outer_input.size()

    int sum = 0;

    for (int i = 0; i < N_m; ++i) {
    	sum += middle_input(i);
    }

    for (int j = 0; j < N_o; ++j) {
    	sum += outer_input(j);
    }

    output_flat(0) = sum;
  }
};

REGISTER_OP("TwoInput")
	.Input("middle_input: int32")
	.Output("outer_input: int32")
	.SetShapeFn([](::tensorflow::shape_inference::InferenceContext* c) {
		c->set_output(0, c->input(0));
		return Status::OK();
	});

REGISTER_KERNEL_BUILDER(Name("TwoInput").Device(DEVICE_CPU), TwoInputOp);