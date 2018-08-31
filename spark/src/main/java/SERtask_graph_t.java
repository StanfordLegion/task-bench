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

import java.io.Serializable;
class SERtask_graph_t implements Serializable {
    private static final long serialVersionUID = 1L;
    private int timesteps;
    private int max_width;
    private int dependence;
    private int type;
    private int iterations;
    private long output_bytes_per_task;
    private int radix;
    private long scratch_bytes_per_task; 

    public SERtask_graph_t(task_graph_t taskGraph) { 
        this.timesteps = taskGraph.getTimesteps();
        this.max_width = taskGraph.getMax_width();
        this.dependence = taskGraph.getDependence().swigValue(); 
        this.type = taskGraph.getKernel().getType().swigValue();  
        this.iterations = taskGraph.getKernel().getIterations();
        this.output_bytes_per_task = taskGraph.getOutput_bytes_per_task();
        this.radix = taskGraph.getRadix();
        this.scratch_bytes_per_task = taskGraph.getOutput_bytes_per_task();
    }

    public task_graph_t toTaskGraph( ) {
        task_graph_t tg =  new task_graph_t();
        tg.setTimesteps(this.timesteps);
        tg.setMax_width(this.max_width);
        tg.setDependence(dependence_type_t.swigToEnum(this.dependence));
        kernel_t k = new kernel_t();
        k.setType(kernel_type_t.swigToEnum(this.type)); 
        k.setIterations(this.iterations);
        tg.setKernel(k); 
        tg.setOutput_bytes_per_task(this.output_bytes_per_task);
        tg.setRadix(this.radix);
        tg.setScratch_bytes_per_task(this.scratch_bytes_per_task);
        return tg;
    }

    @Override //for testing
    public String toString() {
        return "ts:"+timesteps+" mw:"+max_width+" dtype:"+dependence+" ktype:"+type+" iter:"+iterations
            +" output:"+Long.toString(output_bytes_per_task) + " radix: "+radix+" scratch: " + Long.toString(scratch_bytes_per_task);
    }
}
