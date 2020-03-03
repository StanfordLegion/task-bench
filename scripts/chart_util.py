#!/usr/bin/env python3

# Copyright 2020 Stanford University
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

import glob
import os
import sys
import traceback

import chart_metg

def get_machine_parameters(machine, processor_kind, resource):
    if machine == 'cori':
        assert processor_kind == 'cpu'
        if resource == 'flops':
            return {'cores': 32, 'peak_flops': 1.263719e+12, 'peak_bytes': None}
        elif resource == 'bytes':
            return {'cores': 32, 'peak_flops': None, 'peak_bytes': 7.902120e+10}
        else:
            assert False
    elif machine == 'daint':
        if processor_kind == 'cpu':
            if resource == 'flops':
                return {'cores': 12, 'peak_flops': 5.726025e+11, 'peak_bytes': None} # CPU
            elif resource == 'bytes':
                assert False
            else:
                assert False
        elif processor_kind == 'gpu':
            if resource == 'flops':
                # return {'cores': 1, 'peak_flops': 4.351454e+12, 'peak_bytes': None} # GPU 1 rank
                return {'cores': 1, 'peak_flops': 4.761341e+12, 'peak_bytes': None} # GPU 12 ranks
            elif resource == 'bytes':
                assert False
            else:
                assert False
        else:
            assert False
    else:
        assert False

def parse_filename(filename):
    fields = os.path.splitext(os.path.basename(filename))[0].split('_')
    graph_idx = fields.index('ngraphs')
    type_idx = fields.index('type')
    try:
        radix_idx = fields.index('radix')
    except ValueError:
        radix_idx = None
    try:
        imbalance_idx = fields.index('imbalance')
    except ValueError:
        imbalance_idx = None
    try:
        comm_idx = fields.index('comm')
    except ValueError:
        comm_idx = None
    try:
        cores_per_rank_idx = fields.index('coresperrank')
    except ValueError:
        cores_per_rank_idx = None
    node_idx = fields.index('nodes')
    return {
        'name': ' '.join(fields[:graph_idx]),
        'processor_kind': 'gpu' if 'gpu' in fields[:graph_idx] else 'cpu',
        'ngraphs': int(' '.join(fields[graph_idx+1:type_idx])),
        'type': ' '.join(fields[type_idx+1:radix_idx or imbalance_idx or comm_idx or cores_per_rank_idx or node_idx]),
        'radix': radix_idx and ' '.join(fields[radix_idx+1:imbalance_idx or comm_idx or cores_per_rank_idx or node_idx]),
        'imbalance': imbalance_idx and ' '.join(fields[imbalance_idx+1:comm_idx or cores_per_rank_idx or node_idx]),
        'comm': comm_idx and ' '.join(fields[comm_idx+1:cores_per_rank_idx or node_idx]),
        'cores_per_rank': cores_per_rank_idx and ' '.join(fields[cores_per_rank_idx+1:node_idx]),
        'nodes': int(fields[node_idx+1]),
    }

class Parser:
    def filter(self, row):
        return True

    def process(self, row, data):
        raise Exception('process() must be customized by the subclass')

    def error_value(self):
        raise Exception('error_value() must be customized by the subclass')

    def complete(self):
        raise Exception('complete() must be customized by the subclass')

    def parse(self, machine, resource, threshold, summary, verbose):
        has_exception = False
        log_filenames = glob.glob('**/*.log', recursive=False)
        for filename in log_filenames:
            row = parse_filename(filename)
            if not self.filter(row):
                continue
            params = get_machine_parameters(machine, row['processor_kind'], resource)
            try:
                data = chart_metg.analyze(filename, row['ngraphs'], row['nodes'], params['cores'], threshold, params['peak_flops'], params['peak_bytes'], summary=summary)
            except Exception as e:
                if verbose:
                    print('%s:' % filename, file=sys.stderr)
                    traceback.print_exc(file=sys.stderr)
                else:
                    print('%s: %s: %s' % (filename, type(e).__name__, e), file=sys.stderr)
                data = (self.error_value(),)
                has_exception = True
            self.process(row, *data)

        self.complete()

        if has_exception and not verbose:
            print('Errors were encountered while parsing. Run with -v to see full error messages.', file=sys.stderr)
            print(file=sys.stderr)
