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

#ifndef SERIALIZE_HELPER_H
#define SERIALIZE_HELPER_H

#include <vector>

// Variadic versions

template<typename ... Ts>
size_t get_serialized_size(const Ts & ... ts);

template<typename ... Ts>
void serialize(void *buffer, const Ts & ... ts);

template<typename ... Ts>
std::tuple<Ts ...> deserialize(const void *buffer);

// Specialize these for your own types

template <typename ... Ts> struct phantom;

template<typename T>
size_t get_serialized_size1(const T &t);

template<typename T>
void serialize1(void *&buffer, const T &t);

template<typename T>
T deserialize1(const void *&buffer, phantom<T>);

// Specializations for std::vector

template<typename T>
size_t get_serialized_size1(const std::vector<T> &t);

template<typename T>
void serialize1(void *&buffer, const std::vector<T> &t);

template<typename T>
std::vector<T> deserialize1(const void *&buffer, phantom<std::vector<T> >);

#include "serialize_helper.inl"

#endif
