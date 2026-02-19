#include "power_manager.h"
#include "esp_sleep.h"

void initPowerManager() {}

void enterDeepSleep(int seconds) {
  esp_sleep_enable_timer_wakeup(seconds * 1000000);
  esp_deep_sleep_start();
}
