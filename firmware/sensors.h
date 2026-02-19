#ifndef SENSORS_H
#define SENSORS_H

void initSensors();
float readPH();
float readTemperature();
float readTurbidity();
float readDO();
float calculateFSI(float pH, float temp, float turbidity);

#endif
