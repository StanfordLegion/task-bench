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

template <typename ... Ts>
struct phantom {
};

template<typename T>
size_t get_serialized_size1(const T &t)
{
  return sizeof(T);
}

template<typename T>
void serialize1(void *&buffer, const T &t)
{
  *((T *)buffer) = t;
  buffer = (void *)((char *)buffer + sizeof(T));
}

template<typename T>
T deserialize1(const void *&buffer, phantom<T>)
{
  T t = *((T *)buffer);
  buffer = (void *)((char *)buffer + sizeof(T));
  return t;
}

template<typename T>
size_t get_serialized_size1(const std::vector<T> &t)
{
  size_t size = sizeof(size_t);
  for (auto e : t) {
    size += get_serialized_size1(e);
  }
  return size;
}

template<typename T>
void serialize1(void *&buffer, const std::vector<T> &t)
{
  serialize1(buffer, t.size());
  for (auto e : t) {
    serialize1(buffer, e);
  }
}

template<typename T>
std::vector<T> deserialize1(const void *&buffer, phantom<std::vector<T> >)
{
  std::vector<T> t;
  size_t size = deserialize1(buffer, phantom<size_t>());
  for (size_t i = 0; i < size; ++i) {
    t.push_back(deserialize1(buffer, phantom<T>()));
  }
  return t;
}

inline size_t get_serialized_size_()
{
  return 0;
}

template<typename T1, typename ... Ts>
inline size_t get_serialized_size_(const T1 &t1, const Ts & ... ts)
{
  return get_serialized_size1(t1) +
    get_serialized_size_(ts ...);
}

template<typename ... Ts>
inline size_t get_serialized_size(const Ts & ... ts)
{
  return get_serialized_size_(ts ...);
}

inline void serialize_(void *buffer)
{
}

template<typename T1, typename ... Ts>
inline void serialize_(void *buffer, const T1 &t1, const Ts & ... ts)
{
  serialize1(buffer, t1);
  serialize_(buffer, ts ...);
}

template<typename ... Ts>
inline void serialize(void *buffer, const Ts & ... ts)
{
  serialize_(buffer, ts ...);
}

template<typename ... Us>
inline std::tuple<Us ...>
deserialize_(const void *&buffer, phantom<>, std::tuple<Us ...> &&us)
{
  return us;
}

template<typename T1, typename ... Ts, typename ... Us>
inline std::tuple<Us ..., T1, Ts ...>
deserialize_(const void *&buffer, phantom<T1, Ts ...>,
            std::tuple<Us ...> &&us)
{
  T1 t1 = deserialize1(buffer, phantom<T1>());
  return deserialize_(buffer, phantom<Ts ...>(),
                      std::tuple_cat(us, std::make_tuple(t1)));
}

template<typename ... Ts>
inline std::tuple<Ts ...> deserialize(const void *buffer)
{
  return deserialize_(buffer, phantom<Ts ...>(), std::make_tuple());
}
