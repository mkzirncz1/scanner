/* Copyright 2016 Carnegie Mellon University, NVIDIA Corporation
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

#include "lightscan/util/profiler.h"

#include <string>

namespace lightscan {

Profiler::Profiler(timepoint_t base_time)
  : base_time_(base_time) {}

Profiler::Profiler(const Profiler& other)
  : base_time_(other.base_time_),
    records_(other.records_)
}

Profiler::~Profiler(void) {
}

const std::vector<TaskRecord>& Profiler::get_records() const {
  return records_;
}

}
}
