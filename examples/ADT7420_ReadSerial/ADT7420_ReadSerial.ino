/*
 * Created by jepoy11 [feb 9, 2020]
 * library from https://github.com/PlantFactory/ADT74x0
 * 
 * 
 */

#include "ADT74x0.h"
#include <math.h>

#include <Arduino.h>
#include <Wire.h>
ADT74x0 TempSensor; //create an object for the Sensor


void setup() {
  Serial.begin(9600);
  Wire.begin();
  //Set I2C address and Initialize Sensor
  //default is 0x48
  TempSensor.begin(); //TempSensor.begin([i2c address]); 
  delay(1000);

}

void loop() {
  Serial.println(TempSensor.readTemperature()); //Print Float data, default interval is 10ms --> TempSensor.readTemperature([time in ms])
}
