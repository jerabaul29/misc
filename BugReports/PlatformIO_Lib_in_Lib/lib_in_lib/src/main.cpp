#include <Arduino.h>

// #include "lib_1.h"
// #include "lib_2.h"
// #include "lib_3.h"
#include "lib_4.h"

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  delay(100);

  Serial.println(F("BOOTED"));
  // print1();
  // print2();
  // print3();
  print4();
}

void loop() {
  // put your main code here, to run repeatedly:
}