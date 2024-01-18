import os
import subprocess
import json
import time

RUNTIME="increase.runtime"

"""
Procedure: 
For each n in N_list, do following:
0. mkdir n_generated, if not exist. And cp RUNTIME to n_generated
1. Generate task file using search_autogen/run_generate.py by passing "--N n"
2. rm "*auxilary_info.txt" genearated by search_autogen/run_generate.py
3. run "python3 dag2prio.py --input task_{n}_*.txt > task_{n}_*.prio" to generate priority file
4. mv "task_{n}_*.txt" and "task_{n}_*.prio" to n_generated/
5. call search_autogen/run_custom.py to run dmda and dmdap, by passing work_dir=n_generated, runtime=RUNTIME, to_run_scale=[n]
6. calculate speedup ratio by reading "task_n_RUNTIME.json", if speed up is not more than 8%, then delete the task file and priority file, also json file.
7. If search time is more than 10 time for a specific n, then stop searching for this n.
"""

search_time = 0
MAX_SEARCH_TIME = 5

# calculate speedup ratio
def speedup(a, b):
    # a is the baseline time
    # b is the time to be compared
    return (a - b) / a

def cal_speedup_from_json(json_file):
    with open(json_file, "r") as f:
        data = json.load(f)
    return speedup(data["dmda_avg"], data["dmdap_avg"])

def auto_search_for_size(node_num):
    global search_time
    single_time_start = time.time()
    search_time += 1
    can_stop = False
    print("search for size {}".format(node_num))
    print("search time: {}".format(search_time))

    # 0. mkdir n_generated, if not exist. And cp RUNTIME to n_generated
    print("mkdir {}_generated".format(node_num))
    if not os.path.exists(str(node_num) + "_generated"):
        os.mkdir(str(node_num) + "_generated")

    else:
        print("{}_generated already exists".format(node_num))
        print("check if {}_generated has json file".format(node_num))
        # check if json file exists
        json_file = [file for file in os.listdir(str(node_num) + "_generated") if file.startswith(f"task_{node_num}") and file.endswith(".json")]
        if json_file and cal_speedup_from_json(json_file[0]) >= 0.08:
            print("json file exists and speedup ratio is more than 8%, can stop searching for size {}".format(node_num))
            can_stop = True
            return can_stop
        else:
            print("json file does not exist or speedup ratio is less than 8%, continue searching for size {}".format(node_num))
            print("clear {}_generated".format(node_num))
            subprocess.run("rm -rf {}_generated/*".format(node_num), shell=True)

    subprocess.run("cp {} {}/".format(RUNTIME, str(node_num) + "_generated"), shell=True)

    # 1. Generate task file using search_autogen/run_generate.py by passing "--N n"
    print("generate task file for size {}".format(node_num))
    subprocess.run("python3 run_generate.py --N {}".format(node_num), shell=True)

    # 2. rm "*auxilary_info.txt" genearated by search_autogen/run_generate.py
    print("remove *auxilary_info.txt")
    subprocess.run("rm *auxilary_info.txt".format(node_num), shell=True)

    # 3. run "python3 dag2prio.py --input task_{n}_*.txt > task_{n}_*.prio" to generate priority file
    print("generate priority file for size {}".format(node_num))
    # get task file name
    task_file = [file for file in os.listdir() if file.startswith(f"task_{node_num}") and file.endswith(".txt")][0]
    prio_file = task_file.replace(".txt", ".prio")
    subprocess.run("python3 dag2prio.py --input {} > {}".format(task_file, prio_file), shell=True)

    # 4. mv "task_{n}_*.txt" and "task_{n}_*.prio" to n_generated/
    print("move task file and priority file to {}_generated".format(node_num))
    # cp task file and priority file to all_result
    subprocess.run("cp {} all_result/".format(task_file), shell=True)
    subprocess.run("cp {} all_result/".format(prio_file), shell=True)

    subprocess.run("mv {} {}/".format(task_file, str(node_num) + "_generated"), shell=True)
    subprocess.run("mv {} {}/".format(prio_file, str(node_num) + "_generated"), shell=True)


    # 5. call search_autogen/run_custom.py to run dmda and dmdap, by passing work_dir=n_generated, runtime=RUNTIME, to_run_scale=[n]
    print("run dmda and dmdap for size {}".format(node_num))
    subprocess.run("python3 run_custom.py --work_dir {}_generated --runtime {} --to_run_scale {}".format(node_num, RUNTIME, node_num), shell=True)

    # 6. calculate speedup ratio by reading "task_n_RUNTIME.json", if speed up is not more than 8%, then delete the task file and priority file, also json file.
    print("calculate speedup ratio for size {}".format(node_num))
    json_file = "task_{}_{}.json".format(node_num, RUNTIME)
    speedup_ratio = cal_speedup_from_json(json_file)
    print("speedup ratio: {}".format(speedup_ratio))

    # cp json file to all_result
    # rename json file to "task_{n}_{RUNTIME}-{search_time}-{time}.json"
    subprocess.run("cp {} all_result/".format(json_file), shell=True)
    subprocess.run("mv all_result/{} all_result/{}.json".format(json_file, task_file), shell=True)

    if speedup_ratio < 0.08:
        print("speedup ratio is less than 8%, delete task file and priority file, also json file")
        subprocess.run("rm {}/{}".format(str(node_num) + "_generated", task_file), shell=True)
        subprocess.run("rm {}/{}".format(str(node_num) + "_generated", prio_file), shell=True)
        subprocess.run("rm {}".format(json_file), shell=True)
        print("delete task file and priority file, also json file for size {}".format(node_num))
    else:
        print("speedup ratio is more than 8%, keep task file and priority file, also json file")
        print("keep task file and priority file, also json file for size {}".format(node_num))
        # mv json file to n_generated
        subprocess.run("mv {} {}/".format(json_file, str(node_num) + "_generated"), shell=True)
        can_stop = True
    
    # 7. If search time is more than 10 time for a specific n, then stop searching for this n.
    print("check search time for size {}".format(node_num))
    if search_time >= MAX_SEARCH_TIME:
        print("search time is more than {}, stop searching for size {}".format(MAX_SEARCH_TIME, node_num))
        can_stop = True

    single_time_end = time.time()
    print("single time: {}".format(single_time_end - single_time_start))

    return can_stop


    

def auto_search():
    global search_time

    N_list = [x for x in range(1000, 33000, 4000)]
    for n in N_list:
        search_time = 0
        print("search for size {}".format(n))
        can_stop = False
        while not can_stop:
            can_stop = auto_search_for_size(n)

if __name__ == "__main__":
    # mkdir all_result
    if not os.path.exists("all_result"):
        os.mkdir("all_result")
    else:
        print("all_result already exists")
    # print(cal_speedup_from_json("/root/task-bench/starpu/task_21000_increase.runtime.json"))
    auto_search()

