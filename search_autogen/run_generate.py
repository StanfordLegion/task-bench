import argparse
from gen_new_task import GenNewTask

N_list = [x for x in range(5000, 33000, 8000)]
sigma_N = 0.75
edge_density = 0.2
skip_connection_density = 0.14

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--N', type=int, default=0, help='number of nodes')
    parser.add_argument('--sigma_N', type=float, default=0.75, help='sigma_N')
    parser.add_argument('--edge_density', type=float, default=0.2, help='edge_density')
    parser.add_argument('--skip_connection_density', type=float, default=0.14, help='skip_connection_density')
    args = parser.parse_args()
    N = args.N
    sigma_N = args.sigma_N
    edge_density = args.edge_density
    skip_connection_density = args.skip_connection_density
    if N == 0:
        for N in N_list:
            newtask = GenNewTask(N, sigma_N, edge_density, skip_connection_density)
            newtask.dump()
    else:
        newtask = GenNewTask(N, sigma_N, edge_density, skip_connection_density)
        newtask.dump()
    

if __name__ == "__main__":
    main()