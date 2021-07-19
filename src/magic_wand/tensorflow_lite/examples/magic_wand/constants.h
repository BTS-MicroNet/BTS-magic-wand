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

#ifndef TENSORFLOW_LITE_MICRO_EXAMPLES_MAGIC_WAND_CONSTANTS_H_
#define TENSORFLOW_LITE_MICRO_EXAMPLES_MAGIC_WAND_CONSTANTS_H_

// The expected accelerometer data sample frequency
const float kTargetHz = 25;

// What gestures are supported.
constexpr int kGestureCount = 35;
constexpr int k0 = 0;
constexpr int k1 = 1;
constexpr int k2 = 2;
constexpr int k3 = 3;
constexpr int k4 = 4;
constexpr int k5 = 5;
constexpr int k6 = 6;
constexpr int k7 = 7;
constexpr int k8 = 8;
constexpr int k9 = 9;
constexpr int k10 = 10;
constexpr int k11 = 11;
constexpr int k12 = 12;
constexpr int k13 = 13;
constexpr int k14 = 14;
constexpr int k15 = 15;
constexpr int k16 = 16;
constexpr int k17 = 17;
constexpr int k18 = 18;
constexpr int k19 = 19;
constexpr int k20 = 20;
constexpr int k21 = 21;
constexpr int k22 = 22;
constexpr int k23 = 23;
constexpr int k24 = 24;
constexpr int k25 = 25;
constexpr int k26 = 26;
constexpr int k27 = 27;
constexpr int k28 = 28;
constexpr int k29 = 29;
constexpr int k30 = 30;
constexpr int k31 = 31;
constexpr int k32 = 32;
constexpr int k33 = 33;
constexpr int k34 = 34;

// These control the sensitivity of the detection algorithm. If you're seeing
// too many false positives or not enough true positives, you can try tweaking
// these thresholds. Often, increasing the size of the training set will give
// more robust results though, so consider retraining if you are seeing poor
// predictions.
constexpr float kDetectionThreshold = 0.8f;
constexpr int kPredictionHistoryLength = 5;
constexpr int kPredictionSuppressionDuration = 25;

#endif  // TENSORFLOW_LITE_MICRO_EXAMPLES_MAGIC_WAND_CONSTANTS_H_