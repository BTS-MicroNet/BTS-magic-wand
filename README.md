<h1 align='center'> BTS Magic Wand </h1>

<p align="center">
	<br/>
	<img src = 'https://img.shields.io/github/stars/BTS-MicroNet/BTS-magic-wand?style=for-the-badge&logo=appveyor'/>
	<img src = 'https://img.shields.io/github/issues/BTS-MicroNet/BTS-magic-wand?style=for-the-badge&logo=appveyor'/>
	<img src = 'https://img.shields.io/github/license/BTS-MicroNet/BTS-magic-wand?style=for-the-badge&logo=appveyor'/>
	<br/>
</p>


<h2 align='center'> Try <i> BTS Magic Wand </i> to write BTS members' names in Korean! 🇰🇷 </h2>

<p align="center">
	<img src = './images/1_2.gif'/>
	<br/>
</p>

<h2 align='center'> CONTENTS </h2>

<div align="center">
  <p text-align="left">
      <a href='https://github.com/BTS-MicroNet/BTS-magic-wand#goal'> Goal </a>
      <br/>
      <a href='https://github.com/BTS-MicroNet/BTS-magic-wand#description'> Description </a>
      <br/>
      <a href='https://github.com/BTS-MicroNet/BTS-magic-wand#list-of-technologies-used'> List of Technology Used </a>
      <br/>
      <a href='https://github.com/BTS-MicroNet/BTS-magic-wand#getting-started'> Getting Started </a>
      <br/>
      <a href='https://github.com/BTS-MicroNet/BTS-magic-wand#visit-our-official-website-'> Visit our Official Website 🔗 </a>
  </p>
</div>



## Goal

***Handwrite the Korean alphabet, Hangul, like a native.***

## Description

**BTS Magic Wand** lets you improve your Hangul handwriting! Using an Arduino, IMU sensor, and TensorFlow Lite for Microcontrollers, we trained a tiny machine learning model to recognize the Korean alphabet, Hangul, you are writing.

<p align="center">
	<img src = './images/2.gif' width=300/>
	<img src = './images/3.gif'width=300/>
</p>


For the handwritten Hangul dataset, we wrote consonants and vowels of Hangul in various sizes (e.g., small, medium, and large) with an Arduino-connected pen. Using the Arduino board, we collected three-axis gyroscope data per alphabet. Then, we trained a CNN model using the gyroscope data.

If you start writing Hangul with the Arduino-connected pen, this experiment first captures IMU data from the board. Then, based on a pre-trained CNN model, it labels the captured data with matching Hangul alphabet. Through the text displayed on the screen, you can check and correct your Hangul handwriting.

Ultimately, with BTS Magic Wand, you can write and learn Hangul more accurately with your own hands. ***Try BTS Magic Wand to write BTS members' names in Korean! 🇰🇷***

## List of Technologies Used

<p align="center">
	<br/>
	<img src = 'https://upload.wikimedia.org/wikipedia/commons/thumb/8/87/Arduino_Logo.svg/1024px-Arduino_Logo.svg.png' height=200/> &nbsp; &nbsp; &nbsp;
  <img src = 'https://kr.mouser.com/images/marketingid/2019/img/128734529.png?v=051920.1122' height=200/> &nbsp; &nbsp; &nbsp;
	<img src = 'https://blog.kakaocdn.net/dn/blU1v3/btqDbEfmXvV/bnHgpmcUY24og8vgSoZkB1/img.png' height=200/>
	<br/>
</p>



- Microcontroller: Arduino Nano 33 BLE (with IMU sensor)
- Tensorflow 2.0 (tf.Keras), TensorFlow Lite
- CNN / LSTM, Network Optimization, Post-training Quantization

## Getting Started

https://github.com/BTS-MicroNet/BTS-magic-wand/blob/main/src/magic_wand/arduino/examples/magic_wand/main.ino

## Visit our Official Website 🔗

https://bts-micronet.github.io/

## License
`BTS-magic-wand` is licensed under the terms of the MIT License.

Copyright 2021 BTS-MicroNet. https://bts-micronet.github.io/. All Rights Reserved.

<br/>

<h2 align='center'> BTS-MicroNet (aka. Team Butler 🐶🐱) </h2>

<p align="center">
	<b><i> Big Congrats. to BTS 'Butter' and 'Permission to Dance' have won Billboard 1st 🏆 </i></b>
  <br/><br/>
	<img src = './images/team_butler.png' width=1000/>
</p>