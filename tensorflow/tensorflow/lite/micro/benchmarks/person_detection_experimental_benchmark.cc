/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/lite/c/common.h"
#include "tensorflow/lite/micro/benchmarks/micro_benchmark.h"
#include "tensorflow/lite/micro/examples/person_detection_experimental/model_settings.h"
#include "tensorflow/lite/micro/examples/person_detection_experimental/no_person_image_data.h"
#include "tensorflow/lite/micro/examples/person_detection_experimental/person_detect_model_data.h"
#include "tensorflow/lite/micro/examples/person_detection_experimental/person_image_data.h"
#include "tensorflow/lite/micro/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"
#include "tensorflow/lite/micro/micro_utils.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "tensorflow/lite/version.h"

/*
 * Person Detection benchmark.  Evaluates runtime performance of the visual
 * wakewords person detection model.  This is the same model found in
 * exmaples/person_detection.
 */

namespace {

// Create an area of memory to use for input, output, and intermediate arrays.
// Align arena to 16 bytes to avoid alignment warnings on certain platforms.
constexpr int tensor_arena_size = 135 * 1024;
alignas(16) uint8_t tensor_arena[tensor_arena_size];

MicroBenchmarkRunner<int8_t>* runner;

void InitializeBenchmarkRunner() {
  // NOLINTNEXTLINE
  static MicroBenchmarkRunner<int8_t> benchmark_runner(
      g_person_detect_model_data, tensor_arena, tensor_arena_size);
  runner = &benchmark_runner;
  runner->SetInput(reinterpret_cast<const int8_t*>(g_person_data));
}

void PersonDetectionTenIerationsWithPerson() {
  runner->SetInput(reinterpret_cast<const int8_t*>(g_person_data));
  for (int i = 0; i < 10; i++) {
    runner->RunSingleIteration();
  }
}

void PersonDetectionTenIerationsWithoutPerson() {
  runner->SetInput(reinterpret_cast<const int8_t*>(g_no_person_data));
  for (int i = 0; i < 10; i++) {
    runner->RunSingleIteration();
  }
}

}  // namespace

TF_LITE_MICRO_BENCHMARKS_BEGIN

TF_LITE_MICRO_BENCHMARK(InitializeBenchmarkRunner());
TF_LITE_MICRO_BENCHMARK(runner->RunSingleIteration());
TF_LITE_MICRO_BENCHMARK(PersonDetectionTenIerationsWithPerson());
TF_LITE_MICRO_BENCHMARK(PersonDetectionTenIerationsWithoutPerson());

TF_LITE_MICRO_BENCHMARKS_END
