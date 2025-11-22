#include <Arduino.h>
#include "display.h"
#include "power.h"
#include "mywifi.h"
#include "mytime.h"
#include "touch.h"
#include "accel.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello, World!");
}