#include "sensors.h"
#include "lora.h"
#include "cleaning_system.h"
#include "power_manager.h"

float pH, temperature, turbidity, dissolvedOxygen;
float FSI;

void setup() {
  Serial.begin(115200);
  initSensors();
  initLoRa();
  initCleaningSystem();
  initPowerManager();
}

void loop() {

  wakeUpSensors();

  pH = readPH();
  temperature = readTemperature();
  turbidity = readTurbidity();
  dissolvedOxygen = readDO();

  FSI = calculateFSI(pH, temperature, turbidity);

  if (FSI > 3.5 || dissolvedOxygen < 3.0) {
    triggerCleaningCycle();
    sendAlert("Critical water condition detected");
  }

  sendData(pH, temperature, turbidity, dissolvedOxygen, FSI);

  enterDeepSleep(600); // sleep 10 minutes
}
