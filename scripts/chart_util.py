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

import glob
import os
import sys
import traceback

import chart_metg

def get_machine_parameters(machine):
    if machine == 'cori':
        return {'cores': 32, 'peak_flops': 1.255013e+12, 'peak_bytes': None}
    else:
        assert False

def parse_filename(filename):
    fields = os.path.splitext(os.path.basename(filename))[0].split('_')
    graph_idx = fields.index('ngraphs')
    type_idx = fields.index('type')
    try:
        imbalance_idx = fields.index('imbalance')
    except ValueError:
        imbalance_idx = None
    node_idx = fields.index('nodes')
    return {
        'name': ' '.join(fields[:graph_idx]),
        'ngraphs': int(' '.join(fields[graph_idx+1:type_idx])),
        'type': ' '.join(fields[type_idx+1:imbalance_idx or node_idx]),
        'imbalance': imbalance_idx and ' '.join(fields[imbalance_idx+1:node_idx]),
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

    def parse(self, machine, threshold, summary, verbose):
        params = get_machine_parameters(machine)

        has_exception = False
        log_filenames = glob.glob('**/*.log', recursive=False)
        for filename in log_filenames:
            row = parse_filename(filename)
            if not self.filter(row):
                continue
            try:
                data = chart_metg.analyze(filename, row['ngraphs'], row['nodes'], params['cores'], threshold, params['peak_flops'], params['peak_bytes'], summary=summary)
            except Exception as e:
                if verbose:
                    print('%s:' % filename, file=sys.stderr)
                    traceback.print_exc(file=sys.stderr)
                else:
                    print('%s: %s: %s' % (filename, type(e).__name__, e), file=sys.stderr)
                data = self.error_value()
                has_exception = True
            self.process(row, data)

        self.complete()

        if has_exception and not verbose:
            print('Errors were encountered while parsing. Run with -v to see full error messages.', file=sys.stderr)
            print(file=sys.stderr)
