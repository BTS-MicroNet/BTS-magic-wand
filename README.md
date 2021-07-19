# BTS Magic Wand

## Goal

*Handwrite the Korean alphabet, Hangul, like a native.*

## Description

**BTS Magic Wand** lets you improve your Hangul handwriting! Using an Arduino, IMU sensor, and TensorFlow Lite for Microcontrollers, we trained a tiny machine learning model to recognize the Korean alphabet, Hangul, you are writing.

For the handwritten Hangul dataset, we wrote consonants and vowels of Hangul in various sizes (e.g., small, medium, and large) with an Arduino-connected pen. Using the Arduino board, we collected three-axis gyroscope data per alphabet. Then, we trained a CNN model using the gyroscope data.

If you start writing Hangul with the Arduino-connected pen, this experiment first captures IMU data from the board. Then, based on a pre-trained CNN model, it labels the captured data with matching Hangul alphabet. Through the text displayed on the screen, you can check and correct your Hangul handwriting.

Ultimately, with BTS Magic Wand, you can write and learn Hangul more accurately with your own hands. Try BTS Magic Wand to write BTS members' names in Korean! 🇰🇷

## List of Technologies Used

- Microcontroller: Arduino Nano 33 BLE (with IMU sensor)
- Tensorflow 2.0 (tf.Keras), TensorFlow Lite
- CNN / LSTM, Network Optimization, Post-training Quantization