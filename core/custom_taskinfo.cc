#include <cstdlib>
#include <cmath>
#include <cassert>
#include <iostream>
#include <fstream>
#include <sstream>
#include "custom_taskinfo.h"

#define DEBUG 0

InitializeState::InitializeState() {
    initialized = false;
}

InitializeState::InitializeState(bool initialized) : initialized(initialized) {
}

void InitializeState::setInitialized() {
    initialized = true;
}

void InitializeState::setUninitialized() {
    initialized = false;
}

bool InitializeState::isInitialized() const {
    return initialized;
}

TaskDepInfo::TaskDepInfo(const std::string& dag_file) : dag_file(dag_file), InitializeState(true) {
    ParseTaskDepInfo();
}

TaskDepInfo::TaskDepInfo() : InitializeState(false) {
}

void TaskDepInfo::ParseTaskDepInfo() {
    parse_dag();
    topological_sort();
    map_index_to_coordinate();
    deps = get_dep();
}

TaskDepInfo::GraphDep TaskDepInfo::get_dep() {
    assert(isInitialized());
    GraphDep result;
    for (const auto& layer : layer_topo_order) {
        LayerDep layer_deps;
        for (const auto& task : layer) {
            auto dep = get_dep(task);
            layer_deps.push_back(dep);
        }
        result.push_back(layer_deps);
    }
    return result;
}

TaskDepInfo::TaskDep TaskDepInfo::get_dep(int task) const {
    if (input_task.count(task) > 0) {
        return {std::make_pair(-1, -1)};
    }

    TaskDep result;
    const auto& inputs = task2input.at(task);
    for (const auto& input : inputs) {
        const auto& index = task2index.at(input);
        result.push_back(index);
    }

    return result;
}

TaskDepInfo::TaskDep TaskDepInfo::get_dep(int t, int w) const {
    assert(isInitialized());
    int task = layer_topo_order[t][w];
    return get_dep(task);
}


int TaskDepInfo::get_timestamp() const {
    assert(isInitialized());
    return layer_topo_order.size();
}

int TaskDepInfo::get_width_of_timestamp(int t) const {
    assert(isInitialized());
    return layer_topo_order[t].size();
}

int TaskDepInfo::get_max_width() const {
    assert(isInitialized());
    int max_width = 0;
    for (const auto& layer : layer_topo_order) {
        max_width = std::max(max_width, (int)layer.size());
    }
    return max_width;
}

int TaskDepInfo::get_task_by_coordinate(int t, int w) const {
    assert(isInitialized());
    return layer_topo_order[t][w];
}

int TaskDepInfo::get_task_input_num(int t, int w) const {
    assert(isInitialized());
    int task = layer_topo_order[t][w];
    if (task2input.count(task) == 0) {
        return 0;
    }
    return task2input.at(task).size();
}

int TaskDepInfo::get_task_num() const {
    assert(isInitialized());
    return all_task.size();
}

const std::vector<int>& TaskDepInfo::get_task_of_timestamp(int t) const {
    assert(isInitialized());
    return layer_topo_order[t];
}

void TaskDepInfo::parse_dag() {
    std::ifstream file(dag_file);
    std::string line;
    std::vector<std::string> lines;

    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    bool parse_tag = true;
    int split_line = -1;

    for (int i = 0; i < lines.size(); ++i) {
        line = lines[i];
        line = trim(line);

        if (line.empty()) {
            split_line = i;
            break;
        }
    }

    std::vector<std::string> tag_info(lines.begin(), lines.begin() + split_line);
    std::vector<std::string> dep_info(lines.begin() + split_line + 1, lines.end());

    for (const auto& tag_line : tag_info) {
        std::string tag, tasks_str;
        // split by ":"
        int pos = tag_line.find(":");
        tag = tag_line.substr(0, pos);
        tasks_str = tag_line.substr(pos + 1);
        tag = trim(tag);
        tasks_str = trim(tasks_str, " []");

        std::istringstream tasks_ss(tasks_str);
        std::string task_string;
        while (std::getline(tasks_ss, task_string, ',')) {
            task_string = trim(task_string);
            int task = std::stoi(task_string);
            all_task.insert(task);
            if (tag2task.count(tag) == 0) {
                tag2task[tag] = std::vector<int>();
            }
            tag2task[tag].push_back(task);
            task2tag[task] = tag;
        }
    }

    for (const auto& dep_line : dep_info) {
        std::string task_str, outputs_str;
        // split by ":"
        int pos = dep_line.find(":");
        task_str = dep_line.substr(0, pos);
        outputs_str = dep_line.substr(pos + 1);

        task_str = trim(task_str);
        int task = std::stoi(task_str);
        outputs_str = trim(outputs_str, "(),");

        std::istringstream outputs_ss(outputs_str);
        int output;
        std::string output_str;
        while (std::getline(outputs_ss, output_str, ',')) {
            output_str = trim(output_str);
            output = std::stoi(output_str);
            task2output[task].push_back(output);
            has_input.insert(output);
            task2input[output].push_back(task);
        }

        if (task2output[task].empty()) {
            output_task.insert(task);
        }
    }

    std::set<int> all_task_set(all_task.begin(), all_task.end());
    std::set<int> has_input_set(has_input.begin(), has_input.end());

    std::set_difference(all_task_set.begin(), all_task_set.end(), has_input_set.begin(), has_input_set.end(),
                        std::inserter(input_task, input_task.begin()));

}

void TaskDepInfo::topological_sort() {
    std::queue<int> task_queue;
    auto task_innode = task2input; // maintain a copy of task2input. task2input will be modified in the following loop
    for (const auto& task : input_task) {
        task_queue.push(task);
    }

    while (!task_queue.empty()) {
        int n = task_queue.size();
        std::vector<int> layer;

        for (int i = 0; i < n; ++i) {
            int task = task_queue.front();
            task_queue.pop();
            layer.push_back(task);

            const auto& outputs = task2output[task];
            for (const auto& output : outputs) {
                // remove will move task into the end of vector, and return the iterator of the end
                // then call erase to remove the task from the vector
                task_innode[output].erase(std::remove(task_innode[output].begin(), task_innode[output].end(), task),
                                         task_innode[output].end());

                if (task_innode[output].empty()) {
                    task_queue.push(output);
                }
            }
        }

        layer_topo_order.push_back(layer);
    }
}

void TaskDepInfo::map_index_to_coordinate() {
    for (int t = 0; t < layer_topo_order.size(); ++t) {
        const auto& layer = layer_topo_order[t];
        for (int w = 0; w < layer.size(); ++w) {
            const auto& task = layer[w];
            task2index[task] = std::make_pair(t, w);
        }
    }
}

std::string TaskDepInfo::trim(const std::string& str, const std::string& delimiters) const {
    size_t first = str.find_first_not_of(delimiters);
    size_t last = str.find_last_not_of(delimiters);
    return (first == std::string::npos || last == std::string::npos) ? "" : str.substr(first, last - first + 1);
}

std::ostream& operator<<(std::ostream& os, const TaskDepInfo& task_info) {
    os << "dag_file: " << task_info.dag_file << "\n"
       << "all_task: ";
    for (const auto& task : task_info.all_task) {
        os << task << " ";
    }
    os << "\n"
       << "input_task: ";
    for (const auto& task : task_info.input_task) {
        os << task << " ";
    }
    os << "\n"
       << "output_task: ";
    for (const auto& task : task_info.output_task) {
        os << task << " ";
    }
    os << "\n"
       << "task2output: {";
    for (const auto& entry : task_info.task2output) {
        os << entry.first << ": [";
        for (const auto& output : entry.second) {
            os << output << ", ";
        }
        os << "], ";
    }
    os << "}\n"
       << "tag2task: {";
    for (const auto& entry : task_info.tag2task) {
        os << entry.first << ": [";
        for (const auto& task : entry.second) {
            os << task << ", ";
        }
        os << "], ";
    }
    os << "}\n"
       << "task2tag: {";
    for (const auto& entry : task_info.task2tag) {
        os << entry.first << ": " << entry.second << ", ";
    }
    os << "}\n"
       << "has_input: ";
    for (const auto& task : task_info.has_input) {
        os << task << " ";
    }
    os << "\n"
       << "task2input: {";
    for (const auto& entry : task_info.task2input) {
        os << entry.first << ": [";
        for (const auto& input : entry.second) {
            os << input << ", ";
        }
        os << "], ";
    }
    os << "}\n"
       << "layer_topo_order: {";
    for (const auto& layer : task_info.layer_topo_order) {
        os << "[";
        for (const auto& task : layer) {
            os << task << ", ";
        }
        os << "], ";
    }
    os << "}\n"
       << "task2index: {";
    for (const auto& entry : task_info.task2index) {
        os << entry.first << ": (" << entry.second.first << ", " << entry.second.second << "), ";
    }
    os << "}\n";

    return os;
}

TaskPriority::TaskPriority(const std::string& pri, const std::string& abi, const std::string& efi): priority_file(pri), efficiency_file(efi), ability_file(abi), InitializeState(true) {
    parseTaskPriority();
}

TaskPriority::TaskPriority(): InitializeState(false) {
}

// data format: "[prio0,prio1,...,prion]"
void TaskPriority::parse(std::string file, std::vector<int> &vec) {
    std::ifstream infile(file);
    std::string line;
    std::getline(infile, line);
    line = line.substr(1, line.size() - 2);
    std::istringstream ss(line);
    std::string token;
    while (std::getline(ss, token, ',')) {
        vec.push_back(std::stoi(token));
    }
}

// data format: "[prio0,prio1,...,prion]"
void TaskPriority::parseTaskPriority() {
    parse(priority_file, priority);
    parse(efficiency_file, efficiency);
    parse(ability_file, ability);
}

int TaskPriority::get_priority(int task_id) const {
    assert(isInitialized());
    return priority[task_id];
}

int TaskPriority::get_task_num() const {
    assert(isInitialized());
    // always has priority for input tasks
    return priority.size();
}

TaskExecTime::TaskExecTime(const std::string& file) : exec_time_file(file), InitializeState(true) {
    parseTaskExecTime();
}

TaskExecTime::TaskExecTime(): InitializeState(false) {
    setDefaultExecTime();
}

// input format:
// "task_type: (use_gpu_time, use_cpu_time)\n"
void TaskExecTime::parseTaskExecTime() {
    std::ifstream infile(exec_time_file);
    std::string line;
    while (std::getline(infile, line)) {
        std::string task_type;
        double use_gpu_time, use_cpu_time;
        char discard;
        // split by ":"
        int pos = line.find(":");
        task_type = line.substr(0, pos);
        int pos1 = line.find("(");
        int pos2 = line.find(",");
        int pos3 = line.find(")");
        // The second argument of std::stod is the number of characters to read.
        use_gpu_time = std::stod(line.substr(pos1 + 1, pos2 - pos1 - 1));
        use_cpu_time = std::stod(line.substr(pos2 + 1, pos3 - pos2 - 1));
        taskType2execTime[task_type] = std::make_pair(use_gpu_time, use_cpu_time);
    }
}

void TaskExecTime::setDefaultExecTime() {
    // Map input_num to exec_time. The input_num is the number of input tasks. Provide the default exec_time for each input_num from 0 to 10.
    std::vector<std::pair<double, double>> input_num2exec_time(11);
    // There should be a map from input_num to exec_time.
    // T_CPU(input_num) = sqrt(input_num) * 0.1
    // T_GPU(input_num) = sqrt(input_num) * 0.05
    for (int i = 0; i <= 10; ++i) {
        input_num2exec_time[i] = std::make_pair(sqrt(i) * 0.1, sqrt(i) * 0.05);
    }
    std::string prefix = "input_num_";
    for (int i = 0; i < input_num2exec_time.size(); ++i) {
        std::string task_type = prefix + std::to_string(i);
        taskType2execTime[task_type] = input_num2exec_time[i];
    }
}

std::pair<double, double> TaskExecTime::get_exec_time(const std::string& task_type) const {
    assert (taskType2execTime.count(task_type) > 0);
    return taskType2execTime.at(task_type);
}

double TaskExecTime::get_exec_time(const std::string& task_type, bool use_gpu) const {
    // print taskType2execTime
    if (DEBUG) {
        std::cout << "taskType2execTime: " << std::endl;
        for (const auto& entry : taskType2execTime) {
            std::cout << entry.first << ": (" << entry.second.first << ", " << entry.second.second << ")" << std::endl;
        }
    }
    assert (taskType2execTime.count(task_type) > 0);
    if (use_gpu) {
        return taskType2execTime.at(task_type).first;
    } 
    return taskType2execTime.at(task_type).second;
}


CustomTaskInfo::CustomTaskInfo(const std::string& dag_file, const std::string& task_exec_time, const std::string& pri, const std::string& abi, const std::string& efi) : TaskDepInfo(dag_file), TaskPriority(pri, abi, efi), TaskExecTime(task_exec_time) {
}

CustomTaskInfo::CustomTaskInfo(const std::string& dag_file, const std::string& pri, const std::string& abi, const std::string& efi) : TaskDepInfo(dag_file), TaskPriority(pri, abi, efi), TaskExecTime() {
}

CustomTaskInfo::CustomTaskInfo(const std::string& dag_file, const std::string& task_exec_time) : TaskDepInfo(dag_file), TaskPriority(), TaskExecTime(task_exec_time) {
}

CustomTaskInfo::CustomTaskInfo(const std::string& dag_file) : TaskDepInfo(dag_file), TaskPriority(), TaskExecTime() {
}

bool CustomTaskInfo::taskDepInfoInitialized() const {
    return TaskDepInfo::isInitialized();
}

bool CustomTaskInfo::taskPriorityInitialized() const {
    return TaskPriority::isInitialized();
}

bool CustomTaskInfo::taskExecTimeInitialized() const {
    return TaskExecTime::isInitialized();
}


double CustomTaskInfo::getTaskExecTimeAtPoint(long t, long point, bool use_gpu) const {
    if (taskExecTimeInitialized()) {
        int task = get_task_by_coordinate(t, point);
        std::string task_type = task2tag.at(task);
        return TaskExecTime::get_exec_time(task_type, use_gpu);
    }
    std::string task_type_prefix = "input_num_";
    int input_num = get_task_input_num(t, point);
    std::string task_type = task_type_prefix + std::to_string(input_num);
    return TaskExecTime::get_exec_time(task_type, use_gpu);
}

int CustomTaskInfo::getTaskPriorityAtPoint(long t, long point) const {
    assert(taskPriorityInitialized());
    int task = get_task_by_coordinate(t, point);
    return TaskPriority::get_priority(task);
}

int CustomTaskInfo::getTaskAbilityAtPoint(long t, long point) const {
    assert(taskPriorityInitialized());
    int task = get_task_by_coordinate(t, point);
    return TaskPriority::get_priority(task);
}

std::string CustomTaskInfo::getTaskTypeAtPoint(long t, long point) const {
    int task = get_task_by_coordinate(t, point);
    return task2tag.at(task);
}

bool CustomTaskInfo::validate() {
    assert(taskDepInfoInitialized());
    int task_num = TaskPriority::get_task_num();
    if (taskPriorityInitialized() && TaskPriority::get_task_num() != task_num) {
        std::cerr << "Task number in dag file and task priority file does not match." << std::endl;
        return false;
    }
    return true;
}


