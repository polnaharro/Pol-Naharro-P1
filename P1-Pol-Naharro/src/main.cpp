#include <Arduino.h>

#define LED 0

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(500);
  Serial.println("on");
  digitalWrite(LED,HIGH);
  delay(500);
  Serial.println("off");
  digitalWrite(LED,LOW);
}