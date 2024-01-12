import os
import copy


'''
    Parse dag file to get dependency
    Usage:
        task_info = TaskInfo(dag_file)
        task_info.get_dep()
'''
class TaskInfo:
    def __init__(self, dag_file):
        self.dag_file = dag_file
        self.all_task = []
        self.input_task = set() # task has no input
        self.output_task = set() # task has no output
        self.task2output = {} # task -> output
        self.tag2task = {} # tag -> task
        self.task2tag = {} # task -> tag
        self.has_input = set()
        self.task2input = {} # task -> input
        self.task2input_copy = {} # task -> input
        self.summary()

    def __str__(self):
        return 'dag_file: {}\nall_task: {}\ninput_task: {}\noutput_task: {}\ntask2output: {}\ntag2task: {}\ntask2tag: {}\nhas_input: {}'.format(
            self.dag_file, self.all_task, self.input_task, self.output_task, self.task2output, self.tag2task, self.task2tag, self.has_input
        )

    def _parse_dag(self):
        with open(self.dag_file, 'r') as f:
            lines = f.readlines()
            parse_tag = True
            split_line = -1
            for i, line in enumerate(lines):
                line = line.strip()
                if not line:
                    split_line = i
                    break
            tag_info = lines[:split_line]
            dep_info = lines[split_line + 1:]
            # tag line is like this
            # POTRF: [0, 10, 16, 19]
            # tag : [task1, task2, ...]
            for line in tag_info:
                line = line.strip()
                tag, tasks = line.split(':')
                tag = tag.strip()
                tasks = tasks.strip()
                tasks = tasks[1:-1].split(',')
                tasks = [task.strip() for task in tasks if task]
                self.tag2task[tag] = tasks
                for task in tasks:
                    self.task2tag[task] = tag
                self.all_task.extend(tasks)
                
            # dep line is like this
            # task1: (task2, task3, ...),
            # task : (output1, output2, ...),

            for line in dep_info:
                line = line.strip()
                if not line:
                    continue
                task, outputs = line.split(':')
                task = task.strip()
                outputs = outputs.strip()
                outputs = outputs[1:-2].split(',')
                outputs = [output.strip() for output in outputs if output]
                self.task2output[task] = outputs
                if not outputs:
                    self.output_task.add(task)
                for output in outputs:
                    self.has_input.add(output)
                    if output not in self.task2input:
                        self.task2input[output] = []
                    self.task2input[output].append(task)
            self.input_task = set(self.all_task) - self.has_input
            self.task2input_copy = copy.deepcopy(self.task2input)

    def _topo_sort(self):
        # topo sort
        # 1. find all task with no input
        # 2. remove the task from the graph
        # 3. repeat 1 and 2 until no task left
        # 4. Use bfs to get tasks of each level 

        # 1. find all task with no input
        # breakpoint()
        layer_topo_order = []
        topo_order = []
        queue = []
        for task in self.input_task:
            queue.append(task)
        while len(queue) > 0:
            n = len(queue)
            layer = []
            for i in range(n):
                task = queue.pop(0)
                layer.append(task)
                outputs = self.task2output[task]
                for output in outputs:
                    self.task2input[output].remove(task)
                    if not self.task2input[output]:
                        queue.append(output)
            layer_topo_order.append(layer)
        for layer in layer_topo_order:
            topo_order.extend(layer)
        return layer_topo_order, topo_order
    
    def _get_dep(self, task):
        if task in self.input_task:
            return [(-1, -1)]
        return [self.task2index[input] for input in self.task2input_copy[task]]

    def get_dep(self):
        # map layer_topo_order, element transform to self.task2index[self.task2input_copy[element]]
        return [[self._get_dep(task) for task in layer] for layer in self.layer_topo_order]

    def summary(self):
        self._parse_dag()
        self.layer_topo_order, _ = self._topo_sort()
        self._reindex_task()

    def get_timestamp(self):
        return len(self.layer_topo_order)
    
    def get_width_of_timestamp(self, t):
        return len(self.layer_topo_order[t])

    def get_task_of_timestamp(self, t):
        return self.layer_topo_order[t]
        
    def _reindex_task(self):
        # reindex from typo_layer_order
        # return task2index
        task2index = {}
        index2task = {}
        # index is a tuple (timestamp, width)
        for t, layer in enumerate(self.layer_topo_order):
            for w, task in enumerate(layer):
                task2index[task] = (t, w)
                index2task[(t, w)] = task
        self.task2index = task2index
    

if __name__ == '__main__':
    pwd = os.getcwd()
    dag_file = os.path.join(pwd, "dag_dot_prof_file_3840_dmda.txt")
    task_info = TaskInfo(dag_file)
    print(task_info)
    print(task_info.get_dep())
    # print(task_info)
    # layer_topo_order, topo_order = task_info.topo_sort()
    # print(layer_topo_order)
    # print(task_info.get_dep())