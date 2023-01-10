#include <Arduino.h>

#include "lib_1.h"

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  delay(100);

  Serial.println(F("BOOTED"));
  print1();

}

void loop() {
  // put your main code here, to run repeatedly:
}