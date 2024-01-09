from typing import Dict, Tuple
import math
import random

class GenNewTask:
    def __init__(self, N, W, sigma_N, edge_density, skip_connection_density):
        self.N = N
        self.W = W
        self.sigma_N = sigma_N
        self.edge_density = edge_density
        self.skip_connection_density = skip_connection_density
        self.N_l = []
        self.node2layer = {}
        self.layer2node = {}
        self.graph = {}
        self.

    def algorithm1(self):
        # input: N 点数 sigma_N 点数可变性
        # output:  graph1
        L = math.ceil(math.sqrt(self.V * (1/self.W - 1)))
        
        l = 0
        N_counter = 0
        while True:
            N_l = random.randint(math.ceil(self.N/L(1-sigma_N)), math.floor(self.N/L(1+sigma_N)))
            self.N_l.append(N_l)
            self.graph
            for n in range(0, N_l):
                if N_counter > self.N:
                    break
                self.node2layer[] = 
            l = l + 1
        return graph

    def algorithm2(self):
        # input: graph1 edge_density 边密度
        # output: graph2
        return 

    def algorithm3(self) -> Dict[int, Tuple]:
        # input: graph2 skip_connection_density 跳跃密度 E 边数
        # output: graph3
        skip_edge = math.ceil(E * (skip_connection_density) / (1 - skip_connection_density)) # skip_edge 跳跃的边总数
        for i in range(skip_edge):
            xs = random.randint(1, L - 2) # lm 随机取的层的索引 L 层数
            xt = random.randint(lm + 2, L)
            y = random.uniform(0, 1)
            xt = xs + 0.2 * y
            xt = min(xt, 0.999)
            newedge_node1 = int(xs * N_lt) # numN_lm ls层的点数 newedge_node1 新增的边的端点1
            newedge_node2 = int(xt * N_ls)

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
    W = 10
    sigma_N = 0.75
    edge_density = 0.2
    skip_connection_density = 0.14
    newtask = GenNewTask(N, W, sigma_N, edge_density, skip_connection_density)
    
    graph = newtask.algorithm3()
    
    print(graph)
    