/* Copyright 2020 Stanford University
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

#ifndef MULTI_DIMENSIONAL_ARRAY_H
#define MULTI_DIMENSIONAL_ARRAY_H

#include <cassert>
#include <cstdio>

#include <algorithm>
#include <initializer_list>

// #define BOUNDS_CHECKS
// #define MAIN

template <size_t N, typename T>
class Array {
public:
  Array()
    : data(nullptr)
  {
  }

  Array(std::initializer_list<size_t> ext)
  {
    assert(ext.size() == N);
    std::copy(ext.begin(), ext.end(), extent);

    compute_total_extent();
    data = new T[total_extent];
    owned = true;
  }

  Array(T *ptr, std::initializer_list<size_t> ext)
  {
    assert(ext.size() == N);
    std::copy(ext.begin(), ext.end(), extent);

    compute_total_extent();
    data = ptr;
    owned = false;
  }

  Array(const Array<N, T> &array)
  {
    std::copy(array.extent, array.extent+N, extent);
    total_extent = array.total_extent;

    if (array.owned) {
      data = new T[total_extent];
      std::copy(array.begin(), array.end(), begin());
    } else {
      data = array.data;
    }
    owned = array.owned;
  }

  Array<N, T> & operator=(const Array<N, T> &array) {
    destroy();

    extent = array.extent;
    total_extent = array.total_extent;

    if (array.owned) {
      data = new T[total_extent];
      std::copy(array.begin(), array.end(), begin());
    } else {
      data = array.data;
    }
    owned = array.owned;

    return *this;
  }

  ~Array()
  {
    destroy();
  }

  void resize(std::initializer_list<size_t> ext)
  {
    destroy();

    assert(ext.size() == N);
    std::copy(ext.begin(), ext.end(), extent);

    compute_total_extent();
    data = new T[total_extent];
    owned = true;
  }

  void resize(T *ptr, std::initializer_list<size_t> ext)
  {
    destroy();

    assert(ext.size() == N);
    std::copy(ext.begin(), ext.end(), extent);

    compute_total_extent();
    data = ptr;
    owned = false;
  }

  size_t size() const
  {
    return total_extent;
  }

  bool empty() const
  {
    return size() == 0;
  }

  T * begin()
  {
    return data;
  }

  const T * begin() const
  {
    return data;
  }

  T * end()
  {
    return data + total_extent;
  }

  const T * end() const
  {
    return data + total_extent;
  }

  template <typename... IDX, typename std::enable_if<sizeof...(IDX) == N, int>::type = 0>
  T & operator() (IDX... idx)
  {
#ifdef BOUNDS_CHECKS
    check(idx...);
#endif
    size_t lin = linearize(idx...);
#ifdef BOUNDS_CHECKS
    assert(lin < total_extent);
#endif
    return data[lin];
  }

private:
  void compute_total_extent()
  {
    total_extent = 1;
    for (size_t dim = 0; dim < N; dim++) {
      total_extent *= extent[dim];
    }
  }

  void destroy()
  {
    if (data && owned)
      delete [] data;
  }

private:
  template <typename FIRST>
  void check(FIRST first) {
    const size_t DIM = N-1;

    assert((size_t) first >= 0 && (size_t) first < extent[DIM]);
  }

  template <typename FIRST, typename... REST>
  void check(FIRST first, REST... rest) {
    const size_t DIM = N - sizeof...(REST) - 1;

    assert((size_t) first >= 0 && (size_t) first < extent[DIM]);

    check(rest...);
  }

  template <typename FIRST>
  size_t linearize(size_t acc, FIRST first) {
    const size_t DIM = N-1;

    return first + acc * extent[DIM];
  }

  template <typename FIRST, typename... REST>
  size_t linearize(size_t acc, FIRST first, REST... rest) {
    const size_t DIM = N - sizeof...(REST) - 1;

    return linearize(first + acc * extent[DIM], rest...);
  }

  size_t extent[N];
  size_t total_extent;
  T *data;
  bool owned;
};

#ifdef MAIN
int main() {
  Array<5, int> a({2, 3, 4, 5, 6});
  Array<3, float> b({1, 2, 3});
  Array<2, double> c({1, 2});

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 4; k++) {
        for (int l = 0; l < 5; l++) {
          for (int m = 0; m < 6; m++) {
            a(i, j, k, l, m) = i*j*k*l*m;
          }
        }
      }
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 4; k++) {
        for (int l = 0; l < 5; l++) {
          for (int m = 0; m < 6; m++) {
            assert(a(i, j, k, l, m) == i*j*k*l*m);
          }
        }
      }
    }
  }

  // varies most quickly in the first dimension
  assert(&a(0, 0, 0, 0, 1) - &a(0, 0, 0, 0, 0) == 1);

  return 0;
}
#endif

#endif // MULTI_DIMENSIONAL_ARRAY_H
