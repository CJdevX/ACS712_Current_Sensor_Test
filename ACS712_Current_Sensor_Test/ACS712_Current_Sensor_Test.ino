#include "ACS712.h"

#define SENSOR_PIN 35

ACS712 ACS(SENSOR_PIN, 3.3, 4095, 100);
// 185 = for 5A module
// 100 = for 20A module
// 66  = for 30A module

void setup() {
  Serial.begin(115200);
  ACS.autoMidPoint();  // automatic offset calibration
}

void loop() {

  float current = ACS.mA_AC(50);  // measure AC current

  if (current < 50) {
    current = 0;
  }

  Serial.print("Current: ");
  Serial.print(current / 1000.0);  // convert mA → A
  Serial.println(" A");

  delay(1000);
}