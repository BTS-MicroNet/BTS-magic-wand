#include <Arduino_LSM9DS1.h>

/*
  Arduino LSM9DS1 - Simple Gyroscope

  This example reads the gyroscope values from the LSM9DS1
  sensor and continuously prints them to the Serial Monitor
  or Serial Plotter.

  The circuit:
  - Arduino Nano 33 BLE Sense

  created 10 Jul 2019
  by Riccardo Rizzo

  This example code is in the public domain.
*/

#include <Arduino_LSM9DS1.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Started");

  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1);
  }
  Serial.print("Gyroscope sample rate = ");
  Serial.print(IMU.gyroscopeSampleRate());
  Serial.println(" Hz");
  Serial.println();
  Serial.println("Gyroscope in degrees/second");
  Serial.println("X\tY\tZ");
}

void loop() {
  float x, y, z;
  unsigned long starttime, endtime;

  Serial.println("Type after 2s");
  delay(2000);

  starttime = millis();
  endtime = starttime;

  Serial.println("-,-,-");
  while ((endtime - starttime) <= 1500)
  {
    if (IMU.gyroscopeAvailable()) {
      IMU.readGyroscope(x, y, z);


      Serial.print(x);
      Serial.print(',');
      Serial.print(y);
      Serial.print(',');
      Serial.println(z);
    }

    endtime = millis();
  }
  for (int i = 0; i < 14; i++) {
    Serial.print('\n');
  }

  Serial.println();
  delay(5000);
}