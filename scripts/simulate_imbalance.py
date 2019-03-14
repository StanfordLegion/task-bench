#!/usr/bin/env python3

# Copyright 2019 Stanford University
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

import argparse
import random

def task_duration(timestep, point, imbalance):
    # In theory this is supposed to be a deterministic function of
    # timestep and point... for now just emulate with random.

    value = random.uniform(0.0, 1.0)

    return 1 + (value - 0.5)*imbalance

def simulate(timesteps, width, radix, imbalance):
    durations = [
        [task_duration(timestep, point, imbalance)
         for point in range(width)]
        for timestep in range(timesteps)]

    dependencies = [
        list(range(max(point - (radix - 1)//2, 0), min(point + radix//2, width - 1) + 1))
        for point in range(width)]

    last_completion = [0 for point in range(width)]

    for timestep in range(timesteps):
        completion = [
            max(last_completion[dep] for dep in dependencies[point]) + durations[timestep][point]
            for point in range(width)]
        last_completion = completion

    final_time = max(last_completion)
    print('Final time %f' % final_time)

    busy_time = sum(map(sum, durations))/width
    print('Average busy time per core %f' % busy_time)

    idle_time = final_time - busy_time
    print('Average idle time per core %f' % idle_time)

    busy_ratio = busy_time / final_time
    print('Average busy ratio per core %f' % busy_ratio)

    idle_ratio = idle_time / final_time
    print('Average idle ratio per core %f' % idle_ratio)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--timesteps', type=int, default=100)
    parser.add_argument('--width', type=int, default=30)
    parser.add_argument('--radix', type=int, default=5)
    parser.add_argument('--imbalance', type=float, default=0.0)
    args = parser.parse_args()

    simulate(**vars(args))
