/* Copyright 2018 Stanford University
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <cstdint>

#include "core_random.h"

#include "murmur_hash3.h"

// #define TEST_HARNESS
#ifdef TEST_HARNESS
#include <cassert>
#include <cmath>
#include <cstdio>
#endif

void gen_bits(const void *input, size_t input_bytes, uint64_t (&output)[2])
{
  // To generate deterministic uniformly distributed bits, run a hash
  // function on the seed and use the hash value as the output.
  murmur_hash3_128(input, input_bytes, 1234567, &output[0]);
}

double random_uniform(const void *input, size_t input_bytes)
{
  uint64_t bits[2];
  gen_bits(input, input_bytes, bits);
  return static_cast<double>(bits[0]) * 0x1.p-64;
}

#ifdef TEST_HARNESS
int main() {
  constexpr size_t num_buckets = 1024;
  size_t histogram[num_buckets] = {0};

  constexpr size_t num_samples = 1 << 20;
  for (size_t sample = 0; sample < num_samples; sample++) {
    double v = random_uniform(&sample, sizeof(sample));
    size_t bucket = size_t(floor(v * num_buckets));
    assert(bucket >= 0 && bucket < num_buckets);
    histogram[bucket]++;
    // printf("%.14e\n", v);
  }

  for (size_t bucket = 0; bucket < num_buckets; ++bucket) {
    printf("%lu\n", histogram[bucket]);
  }

  return 0;
}
#endif
