// automatically generated by arduino-cmake
#line 1 "C:/Program Files (x86)/Arduino/libraries/Wire/examples/master_writer/master_writer.ino"
// Wire Master Writer
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Writes data to an I2C/TWI slave device
// Refer to the "Wire Slave Receiver" example for use with this

// Created 29 March 2006

// This example code is in the public domain.


#include <Wire.h>

#line 17 "C:/Users/Sinyavsk/CLionProjects/arduino-cmake-master/cmake-build-debug/example/wire_example_master_writer.cpp"
#include "Arduino.h"

//=== START Forward: C:/Program Files (x86)/Arduino/libraries/Wire/examples/master_writer/master_writer.ino
 void setup() ;
 void setup() ;
 void loop() ;
 void loop() ;
//=== END Forward: C:/Program Files (x86)/Arduino/libraries/Wire/examples/master_writer/master_writer.ino
#line 13 "C:/Program Files (x86)/Arduino/libraries/Wire/examples/master_writer/master_writer.ino"


void setup()
{
  Wire.begin(); // join i2c bus (address optional for master)
}

byte x = 0;

void loop()
{
  Wire.beginTransmission(4); // transmit to device #4
  Wire.write("x is ");        // sends five bytes
  Wire.write(x);              // sends one byte  
  Wire.endTransmission();    // stop transmitting

  x++;
  delay(500);
}