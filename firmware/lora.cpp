#include "lora.h"
#include <SPI.h>

void initLoRa() {
  // LoRa init config
}

void sendData(float pH, float temp, float turb, float DO, float FSI) {
  Serial.println("Sending LoRa Packet...");
}

void sendAlert(String message) {
  Serial.println("ALERT: " + message);
}
