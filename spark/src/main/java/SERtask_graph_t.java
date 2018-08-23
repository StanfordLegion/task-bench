import java.io.Serializable;
class SERtask_graph_t implements Serializable {
    private static final long serialVersionUID = 1L;
    private int timesteps;
    private int max_width;
    private int dependence;
    private int type;
    private int iterations;
    private long output_bytes_per_task;

    public SERtask_graph_t(task_graph_t taskGraph) { 
        this.timesteps = taskGraph.getTimesteps();
        this.max_width = taskGraph.getMax_width();
        this.dependence = taskGraph.getDependence().swigValue(); //dep_t to int
        this.type = taskGraph.getKernel().getType().swigValue(); //kernel to type and 
        this.iterations = taskGraph.getKernel().getIterations();
        this.output_bytes_per_task = taskGraph.getOutput_bytes_per_task();
    }

    public task_graph_t toTaskGraph( ) {
        task_graph_t tg =  new task_graph_t();
        tg.setTimesteps(this.timesteps);
        tg.setMax_width(this.max_width);
        tg.setDependence(dependence_type_t.swigToEnum(this.dependence));
        kernel_t k = new kernel_t();
        k.setType(kernel_type_t.swigToEnum(this.type)); //takes kernel_type_t
        k.setIterations(this.iterations);
        tg.setKernel(k); //takes kernel_t
        tg.setOutput_bytes_per_task(this.output_bytes_per_task);
        return tg;
    }

    @Override //to test that it's working
    public String toString() {
        return "ts:"+timesteps+" mw:"+max_width+" dtype:"+dependence+" ktype:"+type+" iter:"+iterations+" output:"+Long.toString(output_bytes_per_task);
    }
}
