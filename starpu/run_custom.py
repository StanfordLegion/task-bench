import os
import subprocess
import re
import json

# Define the RUNTIME variable
RUNTIME = "increase.runtime"
work_dir = "generated"
assert os.path.isdir(work_dir), "No such directory: {}".format(work_dir)

result = {}

def delete_history():
    # Delete the specified files
    for file in os.listdir("/root/.starpu/sampling/codelets/45"):
        if file.startswith("input"):
            os.remove(os.path.join("/root/.starpu/sampling/codelets/45", file))

def run_single_scale(task_scale, task_file, task_priority_file):
    task_file_dir = os.path.join(work_dir, task_file)
    task_priority_file_dir = os.path.join(work_dir, task_priority_file)
    runtime_dir = os.path.join(work_dir, RUNTIME)
    for i in range(3):
        # Warm up command
        warm_up_cmd = "./main -type user_defined -kernel customize -schedule dmda -custom_dag {} -task_type_runtime {} -core 26 -ngpu 1 -output 3686400".format(task_file_dir, runtime_dir)
        p = subprocess.run(warm_up_cmd, shell=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        assert p.returncode == 0, "warm up command failed"

    # run for 3 times
    scientific_notation = "[-+]?[0-9]*\.?[0-9]+(?:[eE][-+]?[0-9]+)?" # match scientific notation
    pattern = "Elapsed Time ({}) seconds".format(scientific_notation)

    for i in range(3):
        dmda_cmd = "./main -type user_defined -kernel customize -schedule dmda -custom_dag {} -task_type_runtime {} -core 26 -ngpu 1 -output 3686400".format(task_file_dir, runtime_dir)
        dmdap_cmd = "./main -type user_defined -kernel customize -schedule dmdap -custom_dag {} -task_type_runtime {} -priority {} -core 26 -ngpu 1 -output 3686400".format(task_file_dir, runtime_dir, task_priority_file_dir)
        # run dmda command
        p = subprocess.run(dmda_cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        assert p.returncode == 0, "dmda command failed"
        print(p.stdout.decode("utf-8"))
        # parse time by regex, using group(1) to get the time
        time_dmda = float(re.search(pattern, p.stdout.decode("utf-8")).group(1))
        # run dmdap command
        p = subprocess.run(dmdap_cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        assert p.returncode == 0, "dmdap command failed"
        # parse time by regex, using group(1) to get the time
        time_dmdap = float(re.search(pattern, p.stdout.decode("utf-8")).group(1))
        # store to result
        if task_scale not in result:
            result[task_scale] = {}
        if "dmda" not in result[task_scale]:
            result[task_scale]["dmda"] = []
        if "dmdap" not in result[task_scale]:
            result[task_scale]["dmdap"] = []
        result[task_scale]["dmda"].append(time_dmda)
        result[task_scale]["dmdap"].append(time_dmdap)
    
    # calculate average
    result[task_scale]["dmda_avg"] = sum(result[task_scale]["dmda"]) / len(result[task_scale]["dmda"])
    result[task_scale]["dmdap_avg"] = sum(result[task_scale]["dmdap"]) / len(result[task_scale]["dmdap"])
    # dump task_scale result to "task_{scale}.json"
    with open("task_{}.json".format(task_scale), "w") as f:
        json.dump(result[task_scale], f, indent=4)

# Run dmda command
# dmda_cmd = "./main -type user_defined -kernel customize -schedule dmda -custom_dag generated/task_1000_46_44_1705413820.3461812.txt -task_type_runtime generated/{} -core 26 -ngpu 1 -output 3686400 > dmda.log".format(RUNTIME)

# list all files in work_dir, the file name should be start with "task_" and end with ".txt"
task_files = [file for file in os.listdir(work_dir) if file.startswith("task_") and file.endswith(".txt")]
# replace ".txt" with ".prio"
task_priority_files = [file.replace(".txt", ".prio") for file in task_files]

# split the file name by "_", the second element is the number of tasks
task_scale = [int(file.split("_")[1]) for file in task_files]

# sort task_files task_priority_files task_scale by task_scale
task_files, task_priority_files, task_scale = zip(*sorted(zip(task_files, task_priority_files, task_scale), key=lambda x: x[2]))

# run for each task file
for task_file, task_priority_file, task_scale in zip(task_files, task_priority_files, task_scale):
    print("Running task file: {}".format(task_file))
    delete_history()
    run_single_scale(task_scale, task_file, task_priority_file)

# write result to json file
with open("result_all.json", "w") as f:
    json.dump(result, f, indent=4)