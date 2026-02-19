#include "cleaning_system.h"
#include "Arduino.h"

void initCleaningSystem() {
  pinMode(27, OUTPUT);
}

void triggerCleaningCycle() {
  digitalWrite(27, HIGH);
  delay(5000);
  digitalWrite(27, LOW);
}
