from typing import Dict, Tuple
import math
import random
import graphviz
import time

"""
    1. 生成一个图，图的节点数为N，图的层数为L
    2. 返回图的节点类型(以输入的数量作为分类标准)
    3. 返回节点的输出节点
    4. 约定第一层为输入层，最后一层为输出层，输入层最好只有一个节点，输出层最好只有一个节点
"""
class GenNewTask:
    def __init__(self, V, sigma_N, edge_density, skip_connection_density):
        self.V = V
        self.sigma_N = sigma_N
        self.edge_density = edge_density
        self.skip_connection_density = skip_connection_density
        self.N_l = []
        self.node2layer = {}
        self.layer2node = {}
        self.topo_order = []
        self.coordinate2node = {}
        self.node2coordinate = {}
        self.all_node = []
        self.layer_depth = 0
        self.node2output = {}
        self.node2input = {}
        self.inputnum2node = {}
        self.gen()
    
    def __str__(self) -> str:
        return ""
    
    ''' The format of this part is like:
        POTRF: [0, 10, 16, 19]
        TRSM: [1, 2, 3, 11, 12, 17]
        SYRK: [4, 7, 9, 13, 15, 18]
        GEMM: [5, 6, 8, 14]
    '''
    def _task_type_str(self) -> str:
        # all_task_types = {}
        result_str = ""
        task_type_prefix = "input_num_"
        for input_num, nodes in self.inputnum2node.items():
            task_type_str = task_type_prefix + str(input_num)
            result_str += task_type_str + ": [" + ", ".join([str(node) for node in nodes]) + "]\n"
        return result_str

    def _task_deps_str(self) -> str:
        result_str = ""
        for node, dst in self.node2output.items():
            if len(dst) == 1: # silly format
                result_str += str(node) + ":(" + str(dst[0]) + ",),\n"
            else:
                result_str += str(node) + ":(" + ", ".join([str(d) for d in dst]) + "),\n"
        output_node = set(self.all_node) - set(self.node2output.keys())
        for node in output_node:
            result_str += str(node) + ":(),\n"
        return result_str
            
    def task_str(self) -> str:
        return self._task_type_str() + "\n" + self._task_deps_str()

    def auxilary_info(self) -> str:
        # print all attributes
        result_str = ""
        for attr in dir(self):
            if not attr.startswith("__"):
                result_str += attr + ": " + str(getattr(self, attr)) + "\n"
        return result_str
    
    def get_max_width(self) -> int:
        max_width = 0
        for layer_index in range(self.layer_depth):
            max_width = max(max_width, self.get_layer_width(layer_index))
        return max_width

    # dump task_str and auxilary_info to file, draw graph simultaneously
    def dump(self) -> None:
        # Add V, layer_depth, max_width to file name and add timestamp to file name
        file_prefix = "task_" + str(self.V) + "_" + str(self.layer_depth) + "_" + str(self.get_max_width()) + "_" + str(time.time())
        with open(file_prefix + ".txt", "w") as f:
            f.write(self.task_str())
        
        with open(file_prefix + "_auxilary_info.txt", "w") as f:
            f.write(self.auxilary_info())

        if self.V < 100:
            self.draw(file_prefix + ".gv")
        
    def draw(self, file_name="round-table.gv"):
        dot = graphviz.Digraph(comment='The Round Table')
        for node, dst in self.node2output.items():
            for d in dst:
                dot.edge(str(node), str(d))
        # save to file 
        dot.render(file_name, view=False)

    def get_node_inputnum(self, node):
        if node not in self.node2input:
            return 0
        return len(self.node2input[node])

    
    def sort_node_by_inputnum(self):
        for node in self.all_node:
            input_num = self.get_node_inputnum(node)
            if input_num not in self.inputnum2node:
                self.inputnum2node[input_num] = []
            self.inputnum2node[input_num].append(node)

    def gen_input_limit(self):
        self.coordinate2limit = {}
        for node, coordinate in self.node2coordinate.items():
            # Normal distribution from 1 to 9, contains 1 and 9
            limit = math.ceil(random.normalvariate(5, 2))
            limit = max(1, limit)
            limit = min(9, limit)
            self.coordinate2limit[coordinate] = limit

    def gen(self):
        self.algorithm1()
        compute_node_num = 0
        for layer_index in range(self.layer_depth):
            compute_node_num += self.get_layer_width(layer_index)
            print("layer_index: ", layer_index, "layer_width: ", self.get_layer_width(layer_index))
        print("compute_node_num: ", compute_node_num)
        print("V: ", self.V)
        print("self.topo_order: ", self.topo_order)

        # prevent input num greater than 9
        self.gen_input_limit() 
        
        # if compute_node_num != self.V, because we make that the last layer has only one node
        assert compute_node_num == self.V or compute_node_num == self.V + 1
        print(self.coordinate2node)
        self.algorithm2()
        self.algorithm3()
        self.change_node2output()
        self.sort_node_by_inputnum()
        return self.node2output, self.inputnum2node

    def get_edge_num(self):
        edge_num = 0
        for node, dst in self.node2output.items():
            edge_num = edge_num + len(dst)
        return edge_num
    
    def add_edge(self, src, dst):
        if src not in self.node2output:
            self.node2output[src] = set()
        if dst not in self.node2input:
            self.node2input[dst] = set()
        # get dst's input limit
        dst_coordinate = self.node2coordinate[dst]
        dst_limit = self.coordinate2limit[dst_coordinate]
        if len(self.node2input[dst]) >= dst_limit:
            return
        self.node2input[dst].add(src)
        self.node2output[src].add(dst)

    def change_node2output(self):
        for node, dst in self.node2output.items():
            self.node2output[node] = list(dst)

    def algorithm1(self):
        # input: N 点数 sigma_N 点数可变性
        # output:  graph1
        W = random.uniform(0.25, 0.5)
        L = math.ceil(math.sqrt(self.V * (1 / W - 1)))
        l = 0
        node_counter = 0
        jump = False
        while True:
            layer_node = []
            if l == 0:
                N_l = 1
            else:
                N_l = random.randint(math.ceil(self.V / L * (1 - self.sigma_N)), math.floor(self.V / L * (1 + self.sigma_N)))
            for n in range(0, N_l):
                if node_counter >= self.V:
                    jump = True
                    break
                self.node2layer[node_counter] = l
                layer_node.append(node_counter)
                self.all_node.append(node_counter)
                self.coordinate2node[(l, n)] = node_counter
                self.node2coordinate[node_counter] = (l, n)
                node_counter = node_counter + 1
            if jump:
                if n == 0:
                    break
                else:
                    l = l + 1
                    self.topo_order.append(layer_node)    
                    self.N_l.append(n)
                    break
            else:
                self.N_l.append(N_l)
            l = l + 1
            self.topo_order.append(layer_node)    
        # if the last layer doesn't meet the requirement(only one node), add a new layer
        if len(self.topo_order[-1]) != 1:
            self.all_node.append(node_counter)
            self.node2layer[node_counter] = l
            self.coordinate2node[(l, 0)] = node_counter
            self.node2coordinate[node_counter] = (l, 0)
            self.topo_order.append([node_counter])
            self.N_l.append(1)
            l = l + 1
        self.layer_depth = l
    
    def get_layer_width(self, l):
        return self.N_l[l]

    def algorithm2(self):
        # input: graph1 edge_density 边密度
        # output: graph2
        for l1 in range(self.layer_depth - 1):
            l2 = l1 + 1
            E_l1_l2 = int(self.get_layer_width(l1) * self.get_layer_width(l2) * self.edge_density \
                + (1 - self.edge_density) * max(self.get_layer_width(l1), self.get_layer_width(l2)))
            N_l1 = self.get_layer_width(l1)
            N_l2 = self.get_layer_width(l2)
            if N_l1 >= N_l2:
                ls = l1
                lt = l2
            else:
                ls = l2
                lt = l1
            cn = [0 for i in range(self.get_layer_width(ls))]
            while sum(cn) < E_l1_l2:
                # find the min nums in cn
                min_num = min(cn)
                min_num_set = []
                for i in range(self.get_layer_width(ls)):
                    if cn[i] == min_num:
                        min_num_set.append(i)
                # randomly select one from min_num_set
                ci_index = random.choice(min_num_set)                        
                cn[ci_index] = cn[ci_index] + 1
            for n in range(self.get_layer_width(ls)):
                if self.get_layer_width(ls) == 1:
                    nc = 0
                else:
                    nc = math.ceil(n * (self.get_layer_width(lt) - 1) / (self.get_layer_width(ls) - 1))
                for i in range(cn[n]):
                    nt = [nc - (cn[n] - 1) // 2 + j for j in range(cn[n])]
                    nt = [num for num in nt if num >= 0 and num < self.get_layer_width(lt)]
                    for j in nt:
                        if ls == l1:
                            self.add_edge(self.coordinate2node[(ls, n)], self.coordinate2node[(lt, j)])
                        else:
                            self.add_edge(self.coordinate2node[(lt, j)], self.coordinate2node[(ls, n)])

        return 

    def algorithm3(self) -> Dict[int, Tuple]:
        # input: graph2 skip_connection_density 跳跃密度 E 边数
        # output: graph3
        E = self.get_edge_num()
        L = self.layer_depth - 1 # do not consider the last layer
        if L < 3: # too few layers
            return
        skip_edge = math.ceil(E * (self.skip_connection_density) / (1 - self.skip_connection_density)) # skip_edge 跳跃的边总数
        for i in range(skip_edge):
            ls = random.randint(0, L - 3) # lm 随机取的层的索引 L 层数
            lt = random.randint(ls + 2, L - 1)
            xs = random.uniform(0, 1)
            y = random.uniform(0, 1)
            xt = xs + 0.2 * y
            xt = min(xt, 0.999) # ensure 0 <= xt < 1
            newedge_node1 = math.floor(xs * self.get_layer_width(ls)) # numN_lm ls层的点数 newedge_node1 新增的边的端点1
            newedge_node2 = math.floor(xt * self.get_layer_width(lt))
            self.add_edge(self.coordinate2node[(ls, newedge_node1)], self.coordinate2node[(lt, newedge_node2)])

        graph = {}
        '''
        graph[src] = (dst0, dst1, ...) 
        graph = {
            0:(1,),
            1:(2,),
            2:(3,),
            3:(),
        }
        '''
        return graph

if __name__ == "__main__":
    N = 50
    sigma_N = 0.75
    edge_density = 0.2
    skip_connection_density = 0.14
    newtask = GenNewTask(N, sigma_N, edge_density, skip_connection_density)
    newtask.dump()
    
    # graph, tasks = newtask.gen()
    # print(graph)
    # print(tasks)
    # print(newtask.task_str())
    # newtask.draw()
    