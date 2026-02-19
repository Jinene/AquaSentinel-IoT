#include "Arduino.h"
#include "sensors.h"

void initSensors() {
  // initialize sensor pins
}

float readPH() {
  return analogRead(34) * 0.01;
}

float readTemperature() {
  return 25.0; 
}

float readTurbidity() {
  return analogRead(35) * 0.02;
}

float readDO() {
  return 6.5;
}

float calculateFSI(float pH, float temp, float turbidity) {
  return (abs(pH - 7) * 0.3) + (abs(temp - 25) * 0.2) + (turbidity * 0.5);
}
