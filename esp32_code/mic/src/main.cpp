#include <Arduino.h>


void setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  
}

void loop() {
  float mic_out =  analogRead(A0);
  // Serial.println(mic_out);
  // Serial.println("mic: ");
  delay(10);
}
