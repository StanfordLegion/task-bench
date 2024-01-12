#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>

#define DEBUG 0

class TaskInfo {
public:
    TaskInfo(const std::string& dag_file) : dag_file(dag_file) {
        summary();
    }

    void summary() {
        parse_dag();
        topological_sort();
        reindex_task();
    }
    using TaskDep = std::vector<std::pair<int, int>>;
    using LayerDep = std::vector<TaskDep>;
    using GraphDep = std::vector<LayerDep>;

    GraphDep get_dep() {
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

    int get_timestamp() const {
        return layer_topo_order.size();
    }

    int get_width_of_timestamp(int t) const {
        return layer_topo_order[t].size();
    }

    const std::vector<std::string>& get_task_of_timestamp(int t) const {
        return layer_topo_order[t];
    }

    friend std::ostream& operator<<(std::ostream& os, const TaskInfo& task_info);

private:
    std::string dag_file;
    std::vector<std::string> all_task;
    std::set<std::string> input_task;
    std::set<std::string> output_task;
    std::map<std::string, std::vector<std::string>> task2output;
    std::map<std::string, std::string> tag2task;
    std::map<std::string, std::string> task2tag;
    std::set<std::string> has_input;
    std::map<std::string, std::vector<std::string>> task2input;
    std::map<std::string, std::vector<std::string>> task2input_copy;
    std::vector<std::vector<std::string>> layer_topo_order;
    std::map<std::string, std::pair<int, int>> task2index;

    void parse_dag() {
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
            std::cout << line << std::endl;

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
            std::cout << tag << " " << tasks_str << std::endl;

            std::istringstream tasks_ss(tasks_str);
            std::string task;
            while (std::getline(tasks_ss, task, ',')) {
                task = trim(task);
                all_task.push_back(task);
                tag2task[tag] = task;
                task2tag[task] = tag;
            }
        }

        for (const auto& dep_line : dep_info) {
            std::string task, outputs_str;
            // split by ":"
            int pos = dep_line.find(":");
            task = dep_line.substr(0, pos);
            outputs_str = dep_line.substr(pos + 1);

            task = trim(task);
            outputs_str = trim(outputs_str, "(),");

            std::istringstream outputs_ss(outputs_str);
            std::string output;
            while (std::getline(outputs_ss, output, ',')) {
                output = trim(output);
                task2output[task].push_back(output);
                has_input.insert(output);
                task2input[output].push_back(task);
            }

            if (task2output[task].empty()) {
                output_task.insert(task);
            }
        }

        std::set<std::string> all_task_set(all_task.begin(), all_task.end());

        std::set_difference(all_task_set.begin(), all_task_set.end(), has_input.begin(), has_input.end(),
                            std::inserter(input_task, input_task.begin()));

        task2input_copy = task2input;
    }

    // std::set<T> set_difference(const std::set<T>& set1, const std::set<T>& set2) {
    //     std::set<T> result;
    //     std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(result, result.begin()));
    //     return result;
    // }

    void topological_sort() {
        std::queue<std::string> task_queue;
        std::cout << "input_task: " << std::endl;
        for (const auto& task : input_task) {
            task_queue.push(task);
        }

        while (!task_queue.empty()) {
            int n = task_queue.size();
            std::vector<std::string> layer;

            for (int i = 0; i < n; ++i) {
                std::string task = task_queue.front();
                task_queue.pop();
                layer.push_back(task);

                const auto& outputs = task2output[task];
                for (const auto& output : outputs) {
                    // remove will move task into the end of vector, and return the iterator of the end
                    // then call erase to remove the task from the vector
                    task2input[output].erase(std::remove(task2input[output].begin(), task2input[output].end(), task),
                                             task2input[output].end());

                    if (task2input[output].empty()) {
                        task_queue.push(output);
                    }
                }
            }

            layer_topo_order.push_back(layer);
        }
    }

    TaskDep get_dep(const std::string& task) const {
        if (input_task.count(task) > 0) {
            return {std::make_pair(-1, -1)};
        }

        TaskDep result;
        const auto& inputs = task2input_copy.at(task);
        for (const auto& input : inputs) {
            const auto& index = task2index.at(input);
            result.push_back(index);
        }

        return result;
    }

    void reindex_task() {
        for (int t = 0; t < layer_topo_order.size(); ++t) {
            const auto& layer = layer_topo_order[t];
            for (int w = 0; w < layer.size(); ++w) {
                const std::string& task = layer[w];
                task2index[task] = std::make_pair(t, w);
            }
        }
    }

    std::string trim(const std::string& str, const std::string& delimiters = " \f\n\r\t\v") const {
        size_t first = str.find_first_not_of(delimiters);
        size_t last = str.find_last_not_of(delimiters);
        return (first == std::string::npos || last == std::string::npos) ? "" : str.substr(first, last - first + 1);
    }
};

std::ostream& operator<<(std::ostream& os, const TaskInfo& task_info) {
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
       << "task2input_copy: {";
    for (const auto& entry : task_info.task2input_copy) {
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

#if DEBUG
int main() {
    std::string pwd = ""; // Set your working directory
    std::string dag_file = pwd + "dag_dot_prof_file_3840_dmda.txt";
    TaskInfo task_info(dag_file);
    std::cout << task_info << std::endl;
    auto dep = task_info.get_dep();
    std::cout << "dep: " << std::endl;
    for (int t = 0; t < dep.size(); ++t) {
        std::cout << "timestamp: " << t << std::endl;
        for (int w = 0; w < dep[t].size(); ++w) {
            std::cout << "width: " << w << std::endl;
            for (const auto& task : dep[t][w]) {
                std::cout << "(" << task.first << ", " << task.second << "), ";
            }
            std::cout << std::endl;
        }
    }
    return 0;
}
#endif
