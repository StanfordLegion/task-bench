import json
import os


result_dir = "all_result"
N_list = [x for x in range(1000, 33000, 4000)]

def get_dmda_avg_from_json(json_file):
    with open(json_file, "r") as f:
        data = json.load(f)
    dmda_avg = data["dmda_avg"]
    return dmda_avg

def get_dmdap_avg_from_json(json_file):
    with open(json_file, "r") as f:
        data = json.load(f)
    dmdap_avg = data["dmdap_avg"]
    return dmdap_avg

def cal_speedup_from_json(json_file):
    with open(json_file, "r") as f:
        data = json.load(f)
    dmda_avg = data["dmda_avg"]
    dmdap_avg = data["dmdap_avg"]
    speedup_ratio = (dmda_avg - dmdap_avg) / dmda_avg
    return speedup_ratio

def main():
    result = {}
    for n in N_list:
        json_result_files = [x for x in os.listdir(result_dir) if x.startswith("task_{}_".format(n)) and x.endswith(".json")]
        if json_result_files:
            # find max speedup ratio in json_result_files
            max_speedup_ratio = 0
            max_speedup_ratio_file = ""
            for json_result_file in json_result_files:
                speedup_ratio = cal_speedup_from_json(os.path.join(result_dir, json_result_file))
                if speedup_ratio > max_speedup_ratio:
                    max_speedup_ratio = speedup_ratio
                    max_speedup_ratio_file = json_result_file
            
            result[n] = {
                "max_speedup_ratio": max_speedup_ratio,
                "max_speedup_ratio_file": max_speedup_ratio_file,
                "dmda_avg": get_dmda_avg_from_json(os.path.join(result_dir, max_speedup_ratio_file)),
                "dmdap_avg": get_dmdap_avg_from_json(os.path.join(result_dir, max_speedup_ratio_file)),
            }
        else:
            print("task_{}_*.json does not exist".format(n))
    with open("result.json", "w") as f:
        json.dump(result, f, indent=4)

if __name__ == "__main__":
    main()
